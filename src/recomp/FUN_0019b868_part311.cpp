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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part311(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x232e48u: goto label_232e48;
        case 0x232e4cu: goto label_232e4c;
        case 0x232e50u: goto label_232e50;
        case 0x232e54u: goto label_232e54;
        case 0x232e58u: goto label_232e58;
        case 0x232e5cu: goto label_232e5c;
        case 0x232e60u: goto label_232e60;
        case 0x232e64u: goto label_232e64;
        case 0x232e68u: goto label_232e68;
        case 0x232e6cu: goto label_232e6c;
        case 0x232e70u: goto label_232e70;
        case 0x232e74u: goto label_232e74;
        case 0x232e78u: goto label_232e78;
        case 0x232e7cu: goto label_232e7c;
        case 0x232e80u: goto label_232e80;
        case 0x232e84u: goto label_232e84;
        case 0x232e88u: goto label_232e88;
        case 0x232e8cu: goto label_232e8c;
        case 0x232e90u: goto label_232e90;
        case 0x232e94u: goto label_232e94;
        case 0x232e98u: goto label_232e98;
        case 0x232e9cu: goto label_232e9c;
        case 0x232ea0u: goto label_232ea0;
        case 0x232ea4u: goto label_232ea4;
        case 0x232ea8u: goto label_232ea8;
        case 0x232eacu: goto label_232eac;
        case 0x232eb0u: goto label_232eb0;
        case 0x232eb4u: goto label_232eb4;
        case 0x232eb8u: goto label_232eb8;
        case 0x232ebcu: goto label_232ebc;
        case 0x232ec0u: goto label_232ec0;
        case 0x232ec4u: goto label_232ec4;
        case 0x232ec8u: goto label_232ec8;
        case 0x232eccu: goto label_232ecc;
        case 0x232ed0u: goto label_232ed0;
        case 0x232ed4u: goto label_232ed4;
        case 0x232ed8u: goto label_232ed8;
        case 0x232edcu: goto label_232edc;
        case 0x232ee0u: goto label_232ee0;
        case 0x232ee4u: goto label_232ee4;
        case 0x232ee8u: goto label_232ee8;
        case 0x232eecu: goto label_232eec;
        case 0x232ef0u: goto label_232ef0;
        case 0x232ef4u: goto label_232ef4;
        case 0x232ef8u: goto label_232ef8;
        case 0x232efcu: goto label_232efc;
        case 0x232f00u: goto label_232f00;
        case 0x232f04u: goto label_232f04;
        case 0x232f08u: goto label_232f08;
        case 0x232f0cu: goto label_232f0c;
        case 0x232f10u: goto label_232f10;
        case 0x232f14u: goto label_232f14;
        case 0x232f18u: goto label_232f18;
        case 0x232f1cu: goto label_232f1c;
        case 0x232f20u: goto label_232f20;
        case 0x232f24u: goto label_232f24;
        case 0x232f28u: goto label_232f28;
        case 0x232f2cu: goto label_232f2c;
        case 0x232f30u: goto label_232f30;
        case 0x232f34u: goto label_232f34;
        case 0x232f38u: goto label_232f38;
        case 0x232f3cu: goto label_232f3c;
        case 0x232f40u: goto label_232f40;
        case 0x232f44u: goto label_232f44;
        case 0x232f48u: goto label_232f48;
        case 0x232f4cu: goto label_232f4c;
        case 0x232f50u: goto label_232f50;
        case 0x232f54u: goto label_232f54;
        case 0x232f58u: goto label_232f58;
        case 0x232f5cu: goto label_232f5c;
        case 0x232f60u: goto label_232f60;
        case 0x232f64u: goto label_232f64;
        case 0x232f68u: goto label_232f68;
        case 0x232f6cu: goto label_232f6c;
        case 0x232f70u: goto label_232f70;
        case 0x232f74u: goto label_232f74;
        case 0x232f78u: goto label_232f78;
        case 0x232f7cu: goto label_232f7c;
        case 0x232f80u: goto label_232f80;
        case 0x232f84u: goto label_232f84;
        case 0x232f88u: goto label_232f88;
        case 0x232f8cu: goto label_232f8c;
        case 0x232f90u: goto label_232f90;
        case 0x232f94u: goto label_232f94;
        case 0x232f98u: goto label_232f98;
        case 0x232f9cu: goto label_232f9c;
        case 0x232fa0u: goto label_232fa0;
        case 0x232fa4u: goto label_232fa4;
        case 0x232fa8u: goto label_232fa8;
        case 0x232facu: goto label_232fac;
        case 0x232fb0u: goto label_232fb0;
        case 0x232fb4u: goto label_232fb4;
        case 0x232fb8u: goto label_232fb8;
        case 0x232fbcu: goto label_232fbc;
        case 0x232fc0u: goto label_232fc0;
        case 0x232fc4u: goto label_232fc4;
        case 0x232fc8u: goto label_232fc8;
        case 0x232fccu: goto label_232fcc;
        case 0x232fd0u: goto label_232fd0;
        case 0x232fd4u: goto label_232fd4;
        case 0x232fd8u: goto label_232fd8;
        case 0x232fdcu: goto label_232fdc;
        case 0x232fe0u: goto label_232fe0;
        case 0x232fe4u: goto label_232fe4;
        case 0x232fe8u: goto label_232fe8;
        case 0x232fecu: goto label_232fec;
        case 0x232ff0u: goto label_232ff0;
        case 0x232ff4u: goto label_232ff4;
        case 0x232ff8u: goto label_232ff8;
        case 0x232ffcu: goto label_232ffc;
        case 0x233000u: goto label_233000;
        case 0x233004u: goto label_233004;
        case 0x233008u: goto label_233008;
        case 0x23300cu: goto label_23300c;
        case 0x233010u: goto label_233010;
        case 0x233014u: goto label_233014;
        case 0x233018u: goto label_233018;
        case 0x23301cu: goto label_23301c;
        case 0x233020u: goto label_233020;
        case 0x233024u: goto label_233024;
        case 0x233028u: goto label_233028;
        case 0x23302cu: goto label_23302c;
        case 0x233030u: goto label_233030;
        case 0x233034u: goto label_233034;
        case 0x233038u: goto label_233038;
        case 0x23303cu: goto label_23303c;
        case 0x233040u: goto label_233040;
        case 0x233044u: goto label_233044;
        case 0x233048u: goto label_233048;
        case 0x23304cu: goto label_23304c;
        case 0x233050u: goto label_233050;
        case 0x233054u: goto label_233054;
        case 0x233058u: goto label_233058;
        case 0x23305cu: goto label_23305c;
        case 0x233060u: goto label_233060;
        case 0x233064u: goto label_233064;
        case 0x233068u: goto label_233068;
        case 0x23306cu: goto label_23306c;
        case 0x233070u: goto label_233070;
        case 0x233074u: goto label_233074;
        case 0x233078u: goto label_233078;
        case 0x23307cu: goto label_23307c;
        case 0x233080u: goto label_233080;
        case 0x233084u: goto label_233084;
        case 0x233088u: goto label_233088;
        case 0x23308cu: goto label_23308c;
        case 0x233090u: goto label_233090;
        case 0x233094u: goto label_233094;
        case 0x233098u: goto label_233098;
        case 0x23309cu: goto label_23309c;
        case 0x2330a0u: goto label_2330a0;
        case 0x2330a4u: goto label_2330a4;
        case 0x2330a8u: goto label_2330a8;
        case 0x2330acu: goto label_2330ac;
        case 0x2330b0u: goto label_2330b0;
        case 0x2330b4u: goto label_2330b4;
        case 0x2330b8u: goto label_2330b8;
        case 0x2330bcu: goto label_2330bc;
        case 0x2330c0u: goto label_2330c0;
        case 0x2330c4u: goto label_2330c4;
        case 0x2330c8u: goto label_2330c8;
        case 0x2330ccu: goto label_2330cc;
        case 0x2330d0u: goto label_2330d0;
        case 0x2330d4u: goto label_2330d4;
        case 0x2330d8u: goto label_2330d8;
        case 0x2330dcu: goto label_2330dc;
        case 0x2330e0u: goto label_2330e0;
        case 0x2330e4u: goto label_2330e4;
        case 0x2330e8u: goto label_2330e8;
        case 0x2330ecu: goto label_2330ec;
        case 0x2330f0u: goto label_2330f0;
        case 0x2330f4u: goto label_2330f4;
        case 0x2330f8u: goto label_2330f8;
        case 0x2330fcu: goto label_2330fc;
        case 0x233100u: goto label_233100;
        case 0x233104u: goto label_233104;
        case 0x233108u: goto label_233108;
        case 0x23310cu: goto label_23310c;
        case 0x233110u: goto label_233110;
        case 0x233114u: goto label_233114;
        case 0x233118u: goto label_233118;
        case 0x23311cu: goto label_23311c;
        case 0x233120u: goto label_233120;
        case 0x233124u: goto label_233124;
        case 0x233128u: goto label_233128;
        case 0x23312cu: goto label_23312c;
        case 0x233130u: goto label_233130;
        case 0x233134u: goto label_233134;
        case 0x233138u: goto label_233138;
        case 0x23313cu: goto label_23313c;
        case 0x233140u: goto label_233140;
        case 0x233144u: goto label_233144;
        case 0x233148u: goto label_233148;
        case 0x23314cu: goto label_23314c;
        case 0x233150u: goto label_233150;
        case 0x233154u: goto label_233154;
        case 0x233158u: goto label_233158;
        case 0x23315cu: goto label_23315c;
        case 0x233160u: goto label_233160;
        case 0x233164u: goto label_233164;
        case 0x233168u: goto label_233168;
        case 0x23316cu: goto label_23316c;
        case 0x233170u: goto label_233170;
        case 0x233174u: goto label_233174;
        case 0x233178u: goto label_233178;
        case 0x23317cu: goto label_23317c;
        case 0x233180u: goto label_233180;
        case 0x233184u: goto label_233184;
        case 0x233188u: goto label_233188;
        case 0x23318cu: goto label_23318c;
        case 0x233190u: goto label_233190;
        case 0x233194u: goto label_233194;
        case 0x233198u: goto label_233198;
        case 0x23319cu: goto label_23319c;
        case 0x2331a0u: goto label_2331a0;
        case 0x2331a4u: goto label_2331a4;
        case 0x2331a8u: goto label_2331a8;
        case 0x2331acu: goto label_2331ac;
        case 0x2331b0u: goto label_2331b0;
        case 0x2331b4u: goto label_2331b4;
        case 0x2331b8u: goto label_2331b8;
        case 0x2331bcu: goto label_2331bc;
        case 0x2331c0u: goto label_2331c0;
        case 0x2331c4u: goto label_2331c4;
        case 0x2331c8u: goto label_2331c8;
        case 0x2331ccu: goto label_2331cc;
        case 0x2331d0u: goto label_2331d0;
        case 0x2331d4u: goto label_2331d4;
        case 0x2331d8u: goto label_2331d8;
        case 0x2331dcu: goto label_2331dc;
        case 0x2331e0u: goto label_2331e0;
        case 0x2331e4u: goto label_2331e4;
        case 0x2331e8u: goto label_2331e8;
        case 0x2331ecu: goto label_2331ec;
        case 0x2331f0u: goto label_2331f0;
        case 0x2331f4u: goto label_2331f4;
        case 0x2331f8u: goto label_2331f8;
        case 0x2331fcu: goto label_2331fc;
        case 0x233200u: goto label_233200;
        case 0x233204u: goto label_233204;
        case 0x233208u: goto label_233208;
        case 0x23320cu: goto label_23320c;
        case 0x233210u: goto label_233210;
        case 0x233214u: goto label_233214;
        case 0x233218u: goto label_233218;
        case 0x23321cu: goto label_23321c;
        case 0x233220u: goto label_233220;
        case 0x233224u: goto label_233224;
        case 0x233228u: goto label_233228;
        case 0x23322cu: goto label_23322c;
        case 0x233230u: goto label_233230;
        case 0x233234u: goto label_233234;
        case 0x233238u: goto label_233238;
        case 0x23323cu: goto label_23323c;
        case 0x233240u: goto label_233240;
        case 0x233244u: goto label_233244;
        case 0x233248u: goto label_233248;
        case 0x23324cu: goto label_23324c;
        case 0x233250u: goto label_233250;
        case 0x233254u: goto label_233254;
        case 0x233258u: goto label_233258;
        case 0x23325cu: goto label_23325c;
        case 0x233260u: goto label_233260;
        case 0x233264u: goto label_233264;
        case 0x233268u: goto label_233268;
        case 0x23326cu: goto label_23326c;
        case 0x233270u: goto label_233270;
        case 0x233274u: goto label_233274;
        case 0x233278u: goto label_233278;
        case 0x23327cu: goto label_23327c;
        case 0x233280u: goto label_233280;
        case 0x233284u: goto label_233284;
        case 0x233288u: goto label_233288;
        case 0x23328cu: goto label_23328c;
        case 0x233290u: goto label_233290;
        case 0x233294u: goto label_233294;
        case 0x233298u: goto label_233298;
        case 0x23329cu: goto label_23329c;
        case 0x2332a0u: goto label_2332a0;
        case 0x2332a4u: goto label_2332a4;
        case 0x2332a8u: goto label_2332a8;
        case 0x2332acu: goto label_2332ac;
        case 0x2332b0u: goto label_2332b0;
        case 0x2332b4u: goto label_2332b4;
        case 0x2332b8u: goto label_2332b8;
        case 0x2332bcu: goto label_2332bc;
        case 0x2332c0u: goto label_2332c0;
        case 0x2332c4u: goto label_2332c4;
        case 0x2332c8u: goto label_2332c8;
        case 0x2332ccu: goto label_2332cc;
        case 0x2332d0u: goto label_2332d0;
        case 0x2332d4u: goto label_2332d4;
        case 0x2332d8u: goto label_2332d8;
        case 0x2332dcu: goto label_2332dc;
        case 0x2332e0u: goto label_2332e0;
        case 0x2332e4u: goto label_2332e4;
        case 0x2332e8u: goto label_2332e8;
        case 0x2332ecu: goto label_2332ec;
        case 0x2332f0u: goto label_2332f0;
        case 0x2332f4u: goto label_2332f4;
        case 0x2332f8u: goto label_2332f8;
        case 0x2332fcu: goto label_2332fc;
        case 0x233300u: goto label_233300;
        case 0x233304u: goto label_233304;
        case 0x233308u: goto label_233308;
        case 0x23330cu: goto label_23330c;
        case 0x233310u: goto label_233310;
        case 0x233314u: goto label_233314;
        case 0x233318u: goto label_233318;
        case 0x23331cu: goto label_23331c;
        case 0x233320u: goto label_233320;
        case 0x233324u: goto label_233324;
        case 0x233328u: goto label_233328;
        case 0x23332cu: goto label_23332c;
        case 0x233330u: goto label_233330;
        case 0x233334u: goto label_233334;
        case 0x233338u: goto label_233338;
        case 0x23333cu: goto label_23333c;
        case 0x233340u: goto label_233340;
        case 0x233344u: goto label_233344;
        case 0x233348u: goto label_233348;
        case 0x23334cu: goto label_23334c;
        case 0x233350u: goto label_233350;
        case 0x233354u: goto label_233354;
        case 0x233358u: goto label_233358;
        case 0x23335cu: goto label_23335c;
        case 0x233360u: goto label_233360;
        case 0x233364u: goto label_233364;
        case 0x233368u: goto label_233368;
        case 0x23336cu: goto label_23336c;
        case 0x233370u: goto label_233370;
        case 0x233374u: goto label_233374;
        case 0x233378u: goto label_233378;
        case 0x23337cu: goto label_23337c;
        case 0x233380u: goto label_233380;
        case 0x233384u: goto label_233384;
        case 0x233388u: goto label_233388;
        case 0x23338cu: goto label_23338c;
        case 0x233390u: goto label_233390;
        case 0x233394u: goto label_233394;
        case 0x233398u: goto label_233398;
        case 0x23339cu: goto label_23339c;
        case 0x2333a0u: goto label_2333a0;
        case 0x2333a4u: goto label_2333a4;
        case 0x2333a8u: goto label_2333a8;
        case 0x2333acu: goto label_2333ac;
        case 0x2333b0u: goto label_2333b0;
        case 0x2333b4u: goto label_2333b4;
        case 0x2333b8u: goto label_2333b8;
        case 0x2333bcu: goto label_2333bc;
        case 0x2333c0u: goto label_2333c0;
        case 0x2333c4u: goto label_2333c4;
        case 0x2333c8u: goto label_2333c8;
        case 0x2333ccu: goto label_2333cc;
        case 0x2333d0u: goto label_2333d0;
        case 0x2333d4u: goto label_2333d4;
        case 0x2333d8u: goto label_2333d8;
        case 0x2333dcu: goto label_2333dc;
        case 0x2333e0u: goto label_2333e0;
        case 0x2333e4u: goto label_2333e4;
        case 0x2333e8u: goto label_2333e8;
        case 0x2333ecu: goto label_2333ec;
        case 0x2333f0u: goto label_2333f0;
        case 0x2333f4u: goto label_2333f4;
        case 0x2333f8u: goto label_2333f8;
        case 0x2333fcu: goto label_2333fc;
        case 0x233400u: goto label_233400;
        case 0x233404u: goto label_233404;
        case 0x233408u: goto label_233408;
        case 0x23340cu: goto label_23340c;
        case 0x233410u: goto label_233410;
        case 0x233414u: goto label_233414;
        case 0x233418u: goto label_233418;
        case 0x23341cu: goto label_23341c;
        case 0x233420u: goto label_233420;
        case 0x233424u: goto label_233424;
        case 0x233428u: goto label_233428;
        case 0x23342cu: goto label_23342c;
        case 0x233430u: goto label_233430;
        case 0x233434u: goto label_233434;
        case 0x233438u: goto label_233438;
        case 0x23343cu: goto label_23343c;
        case 0x233440u: goto label_233440;
        case 0x233444u: goto label_233444;
        case 0x233448u: goto label_233448;
        case 0x23344cu: goto label_23344c;
        case 0x233450u: goto label_233450;
        case 0x233454u: goto label_233454;
        case 0x233458u: goto label_233458;
        case 0x23345cu: goto label_23345c;
        case 0x233460u: goto label_233460;
        case 0x233464u: goto label_233464;
        case 0x233468u: goto label_233468;
        case 0x23346cu: goto label_23346c;
        case 0x233470u: goto label_233470;
        case 0x233474u: goto label_233474;
        case 0x233478u: goto label_233478;
        case 0x23347cu: goto label_23347c;
        case 0x233480u: goto label_233480;
        case 0x233484u: goto label_233484;
        case 0x233488u: goto label_233488;
        case 0x23348cu: goto label_23348c;
        case 0x233490u: goto label_233490;
        case 0x233494u: goto label_233494;
        case 0x233498u: goto label_233498;
        case 0x23349cu: goto label_23349c;
        case 0x2334a0u: goto label_2334a0;
        case 0x2334a4u: goto label_2334a4;
        case 0x2334a8u: goto label_2334a8;
        case 0x2334acu: goto label_2334ac;
        case 0x2334b0u: goto label_2334b0;
        case 0x2334b4u: goto label_2334b4;
        case 0x2334b8u: goto label_2334b8;
        case 0x2334bcu: goto label_2334bc;
        case 0x2334c0u: goto label_2334c0;
        case 0x2334c4u: goto label_2334c4;
        case 0x2334c8u: goto label_2334c8;
        case 0x2334ccu: goto label_2334cc;
        case 0x2334d0u: goto label_2334d0;
        case 0x2334d4u: goto label_2334d4;
        case 0x2334d8u: goto label_2334d8;
        case 0x2334dcu: goto label_2334dc;
        case 0x2334e0u: goto label_2334e0;
        case 0x2334e4u: goto label_2334e4;
        case 0x2334e8u: goto label_2334e8;
        case 0x2334ecu: goto label_2334ec;
        case 0x2334f0u: goto label_2334f0;
        case 0x2334f4u: goto label_2334f4;
        case 0x2334f8u: goto label_2334f8;
        case 0x2334fcu: goto label_2334fc;
        case 0x233500u: goto label_233500;
        case 0x233504u: goto label_233504;
        case 0x233508u: goto label_233508;
        case 0x23350cu: goto label_23350c;
        case 0x233510u: goto label_233510;
        case 0x233514u: goto label_233514;
        case 0x233518u: goto label_233518;
        case 0x23351cu: goto label_23351c;
        case 0x233520u: goto label_233520;
        case 0x233524u: goto label_233524;
        case 0x233528u: goto label_233528;
        case 0x23352cu: goto label_23352c;
        case 0x233530u: goto label_233530;
        case 0x233534u: goto label_233534;
        case 0x233538u: goto label_233538;
        case 0x23353cu: goto label_23353c;
        case 0x233540u: goto label_233540;
        case 0x233544u: goto label_233544;
        case 0x233548u: goto label_233548;
        case 0x23354cu: goto label_23354c;
        case 0x233550u: goto label_233550;
        case 0x233554u: goto label_233554;
        case 0x233558u: goto label_233558;
        case 0x23355cu: goto label_23355c;
        case 0x233560u: goto label_233560;
        case 0x233564u: goto label_233564;
        case 0x233568u: goto label_233568;
        case 0x23356cu: goto label_23356c;
        case 0x233570u: goto label_233570;
        case 0x233574u: goto label_233574;
        case 0x233578u: goto label_233578;
        case 0x23357cu: goto label_23357c;
        case 0x233580u: goto label_233580;
        case 0x233584u: goto label_233584;
        case 0x233588u: goto label_233588;
        case 0x23358cu: goto label_23358c;
        case 0x233590u: goto label_233590;
        case 0x233594u: goto label_233594;
        case 0x233598u: goto label_233598;
        case 0x23359cu: goto label_23359c;
        case 0x2335a0u: goto label_2335a0;
        case 0x2335a4u: goto label_2335a4;
        case 0x2335a8u: goto label_2335a8;
        case 0x2335acu: goto label_2335ac;
        case 0x2335b0u: goto label_2335b0;
        case 0x2335b4u: goto label_2335b4;
        case 0x2335b8u: goto label_2335b8;
        case 0x2335bcu: goto label_2335bc;
        case 0x2335c0u: goto label_2335c0;
        case 0x2335c4u: goto label_2335c4;
        case 0x2335c8u: goto label_2335c8;
        case 0x2335ccu: goto label_2335cc;
        case 0x2335d0u: goto label_2335d0;
        case 0x2335d4u: goto label_2335d4;
        case 0x2335d8u: goto label_2335d8;
        case 0x2335dcu: goto label_2335dc;
        case 0x2335e0u: goto label_2335e0;
        case 0x2335e4u: goto label_2335e4;
        case 0x2335e8u: goto label_2335e8;
        case 0x2335ecu: goto label_2335ec;
        case 0x2335f0u: goto label_2335f0;
        case 0x2335f4u: goto label_2335f4;
        case 0x2335f8u: goto label_2335f8;
        case 0x2335fcu: goto label_2335fc;
        case 0x233600u: goto label_233600;
        case 0x233604u: goto label_233604;
        case 0x233608u: goto label_233608;
        case 0x23360cu: goto label_23360c;
        case 0x233610u: goto label_233610;
        case 0x233614u: goto label_233614;
        default: return;
    }

label_232e48:
    // 0x232e48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232e4c:
    // 0x232e4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_232e50:
    // 0x232e50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_232e54:
    // 0x232e54: 0xc069218  jal         func_1A4860
label_232e58:
    if (ctx->pc == 0x232E58u) {
        ctx->pc = 0x232E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E54u;
        // 0x232e58: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232E5Cu;
        goto label_232e5c;
    }
    ctx->pc = 0x232E54u;
    SET_GPR_U32(ctx, 31, 0x232E5Cu);
    ctx->pc = 0x232E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E54u;
    // 0x232e58: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x232E5Cu;
label_232e5c:
    // 0x232e5c: 0x8e110044  lw          $s1, 0x44($s0)
    ctx->pc = 0x232e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_232e60:
    // 0x232e60: 0xc069210  jal         func_1A4840
label_232e64:
    if (ctx->pc == 0x232E64u) {
        ctx->pc = 0x232E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E60u;
        // 0x232e64: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232E68u;
        goto label_232e68;
    }
    ctx->pc = 0x232E60u;
    SET_GPR_U32(ctx, 31, 0x232E68u);
    ctx->pc = 0x232E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E60u;
    // 0x232e64: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x232E68u;
label_232e68:
    // 0x232e68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x232e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232e6c:
    // 0x232e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_232e70:
    // 0x232e70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_232e74:
    // 0x232e74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232e78:
    // 0x232e78: 0x3e00008  jr          $ra
label_232e7c:
    if (ctx->pc == 0x232E7Cu) {
        ctx->pc = 0x232E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E78u;
        // 0x232e7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232E80u;
        goto label_232e80;
    }
    ctx->pc = 0x232E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E78u;
        // 0x232e7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232E80u;
label_232e80:
    // 0x232e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_232e84:
    // 0x232e84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_232e88:
    // 0x232e88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232e8c:
    // 0x232e8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_232e90:
    // 0x232e90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_232e94:
    // 0x232e94: 0xc069218  jal         func_1A4860
label_232e98:
    if (ctx->pc == 0x232E98u) {
        ctx->pc = 0x232E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E94u;
        // 0x232e98: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232E9Cu;
        goto label_232e9c;
    }
    ctx->pc = 0x232E94u;
    SET_GPR_U32(ctx, 31, 0x232E9Cu);
    ctx->pc = 0x232E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E94u;
    // 0x232e98: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x232E9Cu;
label_232e9c:
    // 0x232e9c: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x232e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_232ea0:
    // 0x232ea0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x232ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_232ea4:
    // 0x232ea4: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x232ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_232ea8:
    // 0x232ea8: 0x118ac0  sll         $s1, $s1, 11
    ctx->pc = 0x232ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
label_232eac:
    // 0x232eac: 0xc069210  jal         func_1A4840
label_232eb0:
    if (ctx->pc == 0x232EB0u) {
        ctx->pc = 0x232EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EACu;
        // 0x232eb0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232EB4u;
        goto label_232eb4;
    }
    ctx->pc = 0x232EACu;
    SET_GPR_U32(ctx, 31, 0x232EB4u);
    ctx->pc = 0x232EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232EACu;
    // 0x232eb0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x232EB4u;
label_232eb4:
    // 0x232eb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x232eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232eb8:
    // 0x232eb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_232ebc:
    // 0x232ebc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_232ec0:
    // 0x232ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232ec4:
    // 0x232ec4: 0x3e00008  jr          $ra
label_232ec8:
    if (ctx->pc == 0x232EC8u) {
        ctx->pc = 0x232EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EC4u;
        // 0x232ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232ECCu;
        goto label_232ecc;
    }
    ctx->pc = 0x232EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EC4u;
        // 0x232ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232ECCu;
label_232ecc:
    // 0x232ecc: 0x0  nop
    ctx->pc = 0x232eccu;
    // NOP
label_232ed0:
    // 0x232ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_232ed4:
    // 0x232ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_232ed8:
    // 0x232ed8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232edc:
    // 0x232edc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x232edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_232ee0:
    // 0x232ee0: 0xc069218  jal         func_1A4860
label_232ee4:
    if (ctx->pc == 0x232EE4u) {
        ctx->pc = 0x232EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EE0u;
        // 0x232ee4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232EE8u;
        goto label_232ee8;
    }
    ctx->pc = 0x232EE0u;
    SET_GPR_U32(ctx, 31, 0x232EE8u);
    ctx->pc = 0x232EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232EE0u;
    // 0x232ee4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x232EE8u;
label_232ee8:
    // 0x232ee8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x232ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_232eec:
    // 0x232eec: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x232eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_232ef0:
    // 0x232ef0: 0x246207ff  addiu       $v0, $v1, 0x7FF
    ctx->pc = 0x232ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
label_232ef4:
    // 0x232ef4: 0x24630ffe  addiu       $v1, $v1, 0xFFE
    ctx->pc = 0x232ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4094));
label_232ef8:
    // 0x232ef8: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x232ef8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_232efc:
    // 0x232efc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x232efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_232f00:
    // 0x232f00: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x232f00u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_232f04:
    // 0x232f04: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x232f04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_232f08:
    // 0x232f08: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x232f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_232f0c:
    // 0x232f0c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x232f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_232f10:
    // 0x232f10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_232f14:
    // 0x232f14: 0x8069210  j           func_1A4840
label_232f18:
    if (ctx->pc == 0x232F18u) {
        ctx->pc = 0x232F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F14u;
        // 0x232f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232F1Cu;
        goto label_232f1c;
    }
    ctx->pc = 0x232F14u;
    ctx->pc = 0x232F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F14u;
    // 0x232f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x232F1Cu;
label_232f1c:
    // 0x232f1c: 0x0  nop
    ctx->pc = 0x232f1cu;
    // NOP
label_232f20:
    // 0x232f20: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x232f20u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232f24:
    // 0x232f24: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x232f24u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_232f28:
    // 0x232f28: 0x8d82005c  lw          $v0, 0x5C($t4)
    ctx->pc = 0x232f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 92)));
label_232f2c:
    // 0x232f2c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x232f2cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232f30:
    // 0x232f30: 0x8d850058  lw          $a1, 0x58($t4)
    ctx->pc = 0x232f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
label_232f34:
    // 0x232f34: 0x8d8a0054  lw          $t2, 0x54($t4)
    ctx->pc = 0x232f34u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 84)));
label_232f38:
    // 0x232f38: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x232f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_232f3c:
    // 0x232f3c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x232f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_232f40:
    // 0x232f40: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
label_232f44:
    if (ctx->pc == 0x232F44u) {
        ctx->pc = 0x232F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F40u;
        // 0x232f44: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x232F48u;
        goto label_232f48;
    }
    ctx->pc = 0x232F40u;
    {
        const bool branch_taken_0x232f40 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x232f40) {
            ctx->pc = 0x232F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232F40u;
            // 0x232f44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232F48u;
            goto label_232f48;
        }
    }
    ctx->pc = 0x232F48u;
label_232f48:
    // 0x232f48: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x232f48u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_232f4c:
    // 0x232f4c: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x232f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
label_232f50:
    // 0x232f50: 0x35ac0  sll         $t3, $v1, 11
    ctx->pc = 0x232f50u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_232f54:
    // 0x232f54: 0x2010  mfhi        $a0
    ctx->pc = 0x232f54u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_232f58:
    // 0x232f58: 0x18a00049  blez        $a1, . + 4 + (0x49 << 2)
label_232f5c:
    if (ctx->pc == 0x232F5Cu) {
        ctx->pc = 0x232F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F58u;
        // 0x232f5c: 0x80682d  daddu       $t5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232F60u;
        goto label_232f60;
    }
    ctx->pc = 0x232F58u;
    {
        const bool branch_taken_0x232f58 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x232F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F58u;
        // 0x232f5c: 0x80682d  daddu       $t5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f58) {
            ctx->pc = 0x233080u;
            goto label_233080;
        }
    }
    ctx->pc = 0x232F60u;
label_232f60:
    // 0x232f60: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x232f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
label_232f64:
    // 0x232f64: 0x8d830050  lw          $v1, 0x50($t4)
    ctx->pc = 0x232f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 80)));
label_232f68:
    // 0x232f68: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x232f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_232f6c:
    // 0x232f6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x232f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_232f70:
    // 0x232f70: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x232f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_232f74:
    // 0x232f74: 0x8ce80014  lw          $t0, 0x14($a3)
    ctx->pc = 0x232f74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_232f78:
    // 0x232f78: 0x11000041  beqz        $t0, . + 4 + (0x41 << 2)
label_232f7c:
    if (ctx->pc == 0x232F7Cu) {
        ctx->pc = 0x232F80u;
        goto label_232f80;
    }
    ctx->pc = 0x232F78u;
    {
        const bool branch_taken_0x232f78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x232f78) {
            ctx->pc = 0x233080u;
            goto label_233080;
        }
    }
    ctx->pc = 0x232F80u;
label_232f80:
    // 0x232f80: 0x8dc90014  lw          $t1, 0x14($t6)
    ctx->pc = 0x232f80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 20)));
label_232f84:
    // 0x232f84: 0x1120003e  beqz        $t1, . + 4 + (0x3E << 2)
label_232f88:
    if (ctx->pc == 0x232F88u) {
        ctx->pc = 0x232F8Cu;
        goto label_232f8c;
    }
    ctx->pc = 0x232F84u;
    {
        const bool branch_taken_0x232f84 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x232f84) {
            ctx->pc = 0x233080u;
            goto label_233080;
        }
    }
    ctx->pc = 0x232F8Cu;
label_232f8c:
    // 0x232f8c: 0x60c82d  daddu       $t9, $v1, $zero
    ctx->pc = 0x232f8cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_232f90:
    // 0x232f90: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x232f90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_232f94:
    // 0x232f94: 0x0  nop
    ctx->pc = 0x232f94u;
    // NOP
label_232f98:
    // 0x232f98: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x232f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_232f9c:
    // 0x232f9c: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
label_232fa0:
    if (ctx->pc == 0x232FA0u) {
        ctx->pc = 0x232FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F9Cu;
        // 0x232fa0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x232FA4u;
        goto label_232fa4;
    }
    ctx->pc = 0x232F9Cu;
    {
        const bool branch_taken_0x232f9c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x232f9c) {
            ctx->pc = 0x232FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232F9Cu;
            // 0x232fa0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232FA4u;
            goto label_232fa4;
        }
    }
    ctx->pc = 0x232FA4u;
label_232fa4:
    // 0x232fa4: 0x8dc30010  lw          $v1, 0x10($t6)
    ctx->pc = 0x232fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
label_232fa8:
    // 0x232fa8: 0xcb2021  addu        $a0, $a2, $t3
    ctx->pc = 0x232fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_232fac:
    // 0x232fac: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x232facu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_232fb0:
    // 0x232fb0: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x232fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_232fb4:
    // 0x232fb4: 0x8b001a  div         $zero, $a0, $t3
    ctx->pc = 0x232fb4u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_232fb8:
    // 0x232fb8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x232fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_232fbc:
    // 0x232fbc: 0x102182a  slt         $v1, $t0, $v0
    ctx->pc = 0x232fbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_232fc0:
    // 0x232fc0: 0x103100b  movn        $v0, $t0, $v1
    ctx->pc = 0x232fc0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
label_232fc4:
    // 0x232fc4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x232fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_232fc8:
    // 0x232fc8: 0x2810  mfhi        $a1
    ctx->pc = 0x232fc8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_232fcc:
    // 0x232fcc: 0xa9282a  slt         $a1, $a1, $t1
    ctx->pc = 0x232fccu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_232fd0:
    // 0x232fd0: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_232fd4:
    if (ctx->pc == 0x232FD4u) {
        ctx->pc = 0x232FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FD0u;
        // 0x232fd4: 0x1021823  subu        $v1, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232FD8u;
        goto label_232fd8;
    }
    ctx->pc = 0x232FD0u;
    {
        const bool branch_taken_0x232fd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x232FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FD0u;
        // 0x232fd4: 0x1021823  subu        $v1, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fd0) {
            ctx->pc = 0x233030u;
            goto label_233030;
        }
    }
    ctx->pc = 0x232FD8u;
label_232fd8:
    // 0x232fd8: 0xcb001a  div         $zero, $a2, $t3
    ctx->pc = 0x232fd8u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_232fdc:
    // 0x232fdc: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
label_232fe0:
    if (ctx->pc == 0x232FE0u) {
        ctx->pc = 0x232FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FDCu;
        // 0x232fe0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x232FE4u;
        goto label_232fe4;
    }
    ctx->pc = 0x232FDCu;
    {
        const bool branch_taken_0x232fdc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x232fdc) {
            ctx->pc = 0x232FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232FDCu;
            // 0x232fe0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232FE4u;
            goto label_232fe4;
        }
    }
    ctx->pc = 0x232FE4u;
label_232fe4:
    // 0x232fe4: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x232fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
label_232fe8:
    // 0x232fe8: 0x1010  mfhi        $v0
    ctx->pc = 0x232fe8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_232fec:
    // 0x232fec: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_232ff0:
    if (ctx->pc == 0x232FF0u) {
        ctx->pc = 0x232FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FECu;
        // 0x232ff0: 0xace20010  sw          $v0, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232FF4u;
        goto label_232ff4;
    }
    ctx->pc = 0x232FECu;
    {
        const bool branch_taken_0x232fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x232FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FECu;
        // 0x232ff0: 0xace20010  sw          $v0, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fec) {
            ctx->pc = 0x233038u;
            goto label_233038;
        }
    }
    ctx->pc = 0x232FF4u;
label_232ff4:
    // 0x232ff4: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x232ff4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_232ff8:
    // 0x232ff8: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
label_232ffc:
    if (ctx->pc == 0x232FFCu) {
        ctx->pc = 0x232FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FF8u;
        // 0x232ffc: 0x8d820058  lw          $v0, 0x58($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233000u;
        goto label_233000;
    }
    ctx->pc = 0x232FF8u;
    {
        const bool branch_taken_0x232ff8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x232ff8) {
            ctx->pc = 0x232FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232FF8u;
            // 0x232ffc: 0x8d820058  lw          $v0, 0x58($t4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233014u;
            goto label_233014;
        }
    }
    ctx->pc = 0x233000u;
label_233000:
    // 0x233000: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x233000u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
label_233004:
    // 0x233004: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x233004u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
label_233008:
    // 0x233008: 0xfcef0000  sd          $t7, 0x0($a3)
    ctx->pc = 0x233008u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 15));
label_23300c:
    // 0x23300c: 0xfcef0008  sd          $t7, 0x8($a3)
    ctx->pc = 0x23300cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 15));
label_233010:
    // 0x233010: 0x8d820058  lw          $v0, 0x58($t4)
    ctx->pc = 0x233010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
label_233014:
    // 0x233014: 0x8d8a0054  lw          $t2, 0x54($t4)
    ctx->pc = 0x233014u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 84)));
label_233018:
    // 0x233018: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x233018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23301c:
    // 0x23301c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x23301cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_233020:
    // 0x233020: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x233020u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_233024:
    // 0x233024: 0x10000005  b           . + 4 + (0x5 << 2)
label_233028:
    if (ctx->pc == 0x233028u) {
        ctx->pc = 0x233028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233024u;
        // 0x233028: 0xad820058  sw          $v0, 0x58($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23302Cu;
        goto label_23302c;
    }
    ctx->pc = 0x233024u;
    {
        const bool branch_taken_0x233024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233024u;
        // 0x233028: 0xad820058  sw          $v0, 0x58($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233024) {
            ctx->pc = 0x23303Cu;
            goto label_23303c;
        }
    }
    ctx->pc = 0x23302Cu;
label_23302c:
    // 0x23302c: 0x0  nop
    ctx->pc = 0x23302cu;
    // NOP
label_233030:
    // 0x233030: 0x10000002  b           . + 4 + (0x2 << 2)
label_233034:
    if (ctx->pc == 0x233034u) {
        ctx->pc = 0x233034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233030u;
        // 0x233034: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233038u;
        goto label_233038;
    }
    ctx->pc = 0x233030u;
    {
        const bool branch_taken_0x233030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233030u;
        // 0x233034: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233030) {
            ctx->pc = 0x23303Cu;
            goto label_23303c;
        }
    }
    ctx->pc = 0x233038u;
label_233038:
    // 0x233038: 0x8d8a0054  lw          $t2, 0x54($t4)
    ctx->pc = 0x233038u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 84)));
label_23303c:
    // 0x23303c: 0x25a30001  addiu       $v1, $t5, 0x1
    ctx->pc = 0x23303cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_233040:
    // 0x233040: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
label_233044:
    if (ctx->pc == 0x233044u) {
        ctx->pc = 0x233044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233040u;
        // 0x233044: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233048u;
        goto label_233048;
    }
    ctx->pc = 0x233040u;
    {
        const bool branch_taken_0x233040 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x233040) {
            ctx->pc = 0x233044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233040u;
            // 0x233044: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x233048u;
            goto label_233048;
        }
    }
    ctx->pc = 0x233048u;
label_233048:
    // 0x233048: 0x6a001a  div         $zero, $v1, $t2
    ctx->pc = 0x233048u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_23304c:
    // 0x23304c: 0x1010  mfhi        $v0
    ctx->pc = 0x23304cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_233050:
    // 0x233050: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x233050u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_233054:
    // 0x233054: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x233054u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233058:
    // 0x233058: 0x13000009  beqz        $t8, . + 4 + (0x9 << 2)
label_23305c:
    if (ctx->pc == 0x23305Cu) {
        ctx->pc = 0x23305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233058u;
        // 0x23305c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233060u;
        goto label_233060;
    }
    ctx->pc = 0x233058u;
    {
        const bool branch_taken_0x233058 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x23305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233058u;
        // 0x23305c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233058) {
            ctx->pc = 0x233080u;
            goto label_233080;
        }
    }
    ctx->pc = 0x233060u;
label_233060:
    // 0x233060: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x233060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_233064:
    // 0x233064: 0x3223821  addu        $a3, $t9, $v0
    ctx->pc = 0x233064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_233068:
    // 0x233068: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x233068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_23306c:
    // 0x23306c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_233070:
    if (ctx->pc == 0x233070u) {
        ctx->pc = 0x233070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23306Cu;
        // 0x233070: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233074u;
        goto label_233074;
    }
    ctx->pc = 0x23306Cu;
    {
        const bool branch_taken_0x23306c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23306Cu;
        // 0x233070: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23306c) {
            ctx->pc = 0x233080u;
            goto label_233080;
        }
    }
    ctx->pc = 0x233074u;
label_233074:
    // 0x233074: 0x8dc20014  lw          $v0, 0x14($t6)
    ctx->pc = 0x233074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 20)));
label_233078:
    // 0x233078: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
label_23307c:
    if (ctx->pc == 0x23307Cu) {
        ctx->pc = 0x23307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233078u;
        // 0x23307c: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233080u;
        goto label_233080;
    }
    ctx->pc = 0x233078u;
    {
        const bool branch_taken_0x233078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233078u;
        // 0x23307c: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233078) {
            ctx->pc = 0x232F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232f98;
        }
    }
    ctx->pc = 0x233080u;
label_233080:
    // 0x233080: 0x3e00008  jr          $ra
label_233084:
    if (ctx->pc == 0x233084u) {
        ctx->pc = 0x233084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233080u;
        // 0x233084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233088u;
        goto label_233088;
    }
    ctx->pc = 0x233080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233080u;
        // 0x233084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233088u;
label_233088:
    // 0x233088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23308c:
    // 0x23308c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23308cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233090:
    // 0x233090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_233094:
    // 0x233094: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_233098:
    // 0x233098: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x233098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23309c:
    // 0x23309c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23309cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2330a0:
    // 0x2330a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2330a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2330a4:
    // 0x2330a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2330a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2330a8:
    // 0x2330a8: 0xc069218  jal         func_1A4860
label_2330ac:
    if (ctx->pc == 0x2330ACu) {
        ctx->pc = 0x2330ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330A8u;
        // 0x2330ac: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2330B0u;
        goto label_2330b0;
    }
    ctx->pc = 0x2330A8u;
    SET_GPR_U32(ctx, 31, 0x2330B0u);
    ctx->pc = 0x2330ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2330A8u;
    // 0x2330ac: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x2330B0u;
label_2330b0:
    // 0x2330b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2330b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2330b4:
    // 0x2330b4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2330b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2330b8:
    // 0x2330b8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2330b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2330bc:
    // 0x2330bc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2330bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2330c0:
    // 0x2330c0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_2330c4:
    if (ctx->pc == 0x2330C4u) {
        ctx->pc = 0x2330C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330C0u;
        // 0x2330c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2330C8u;
        goto label_2330c8;
    }
    ctx->pc = 0x2330C0u;
    {
        const bool branch_taken_0x2330c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2330C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330C0u;
        // 0x2330c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330c0) {
            ctx->pc = 0x233160u;
            goto label_233160;
        }
    }
    ctx->pc = 0x2330C8u;
label_2330c8:
    // 0x2330c8: 0xc08cbc8  jal         func_232F20
label_2330cc:
    if (ctx->pc == 0x2330CCu) {
        ctx->pc = 0x2330D0u;
        goto label_2330d0;
    }
    ctx->pc = 0x2330C8u;
    SET_GPR_U32(ctx, 31, 0x2330D0u);
    ctx->pc = 0x232F20u;
    goto label_232f20;
    ctx->pc = 0x2330D0u;
label_2330d0:
    // 0x2330d0: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x2330d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_2330d4:
    // 0x2330d4: 0x4a30005  bgezl       $a1, . + 4 + (0x5 << 2)
label_2330d8:
    if (ctx->pc == 0x2330D8u) {
        ctx->pc = 0x2330D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330D4u;
        // 0x2330d8: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2330DCu;
        goto label_2330dc;
    }
    ctx->pc = 0x2330D4u;
    {
        const bool branch_taken_0x2330d4 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2330d4) {
            ctx->pc = 0x2330D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2330D4u;
            // 0x2330d8: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2330ECu;
            goto label_2330ec;
        }
    }
    ctx->pc = 0x2330DCu;
label_2330dc:
    // 0x2330dc: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x2330dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
label_2330e0:
    // 0x2330e0: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
label_2330e4:
    if (ctx->pc == 0x2330E4u) {
        ctx->pc = 0x2330E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330E0u;
        // 0x2330e4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2330E8u;
        goto label_2330e8;
    }
    ctx->pc = 0x2330E0u;
    {
        const bool branch_taken_0x2330e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2330E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330E0u;
        // 0x2330e4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330e0) {
            ctx->pc = 0x233160u;
            goto label_233160;
        }
    }
    ctx->pc = 0x2330E8u;
label_2330e8:
    // 0x2330e8: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2330e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2330ec:
    // 0x2330ec: 0x8e070050  lw          $a3, 0x50($s0)
    ctx->pc = 0x2330ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2330f0:
    // 0x2330f0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2330f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2330f4:
    // 0x2330f4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2330f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2330f8:
    // 0x2330f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2330f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2330fc:
    // 0x2330fc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2330fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_233100:
    // 0x233100: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x233100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_233104:
    // 0x233104: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x233104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_233108:
    // 0x233108: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x233108u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
label_23310c:
    // 0x23310c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x23310cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_233110:
    // 0x233110: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x233110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_233114:
    // 0x233114: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x233114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_233118:
    // 0x233118: 0xde250008  ld          $a1, 0x8($s1)
    ctx->pc = 0x233118u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 8)));
label_23311c:
    // 0x23311c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23311cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_233120:
    // 0x233120: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x233120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_233124:
    // 0x233124: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x233124u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
label_233128:
    // 0x233128: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x233128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_23312c:
    // 0x23312c: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x23312cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
label_233130:
    // 0x233130: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x233130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_233134:
    // 0x233134: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x233134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_233138:
    // 0x233138: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x233138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23313c:
    // 0x23313c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x23313cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_233140:
    // 0x233140: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x233140u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_233144:
    // 0x233144: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x233144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_233148:
    // 0x233148: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x233148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_23314c:
    // 0x23314c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_233150:
    if (ctx->pc == 0x233150u) {
        ctx->pc = 0x233150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23314Cu;
        // 0x233150: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233154u;
        goto label_233154;
    }
    ctx->pc = 0x23314Cu;
    {
        const bool branch_taken_0x23314c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23314c) {
            ctx->pc = 0x233150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23314Cu;
            // 0x233150: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x233154u;
            goto label_233154;
        }
    }
    ctx->pc = 0x233154u;
label_233154:
    // 0x233154: 0x2810  mfhi        $a1
    ctx->pc = 0x233154u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_233158:
    // 0x233158: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x233158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_23315c:
    // 0x23315c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23315cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233160:
    // 0x233160: 0xc069210  jal         func_1A4840
label_233164:
    if (ctx->pc == 0x233164u) {
        ctx->pc = 0x233164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233160u;
        // 0x233164: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233168u;
        goto label_233168;
    }
    ctx->pc = 0x233160u;
    SET_GPR_U32(ctx, 31, 0x233168u);
    ctx->pc = 0x233164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233160u;
    // 0x233164: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x233168u;
label_233168:
    // 0x233168: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x233168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23316c:
    // 0x23316c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23316cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233170:
    // 0x233170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_233174:
    // 0x233174: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x233174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_233178:
    // 0x233178: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x233178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23317c:
    // 0x23317c: 0x3e00008  jr          $ra
label_233180:
    if (ctx->pc == 0x233180u) {
        ctx->pc = 0x233180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23317Cu;
        // 0x233180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233184u;
        goto label_233184;
    }
    ctx->pc = 0x23317Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23317Cu;
        // 0x233180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23317Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233184u;
label_233184:
    // 0x233184: 0x0  nop
    ctx->pc = 0x233184u;
    // NOP
label_233188:
    // 0x233188: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23318c:
    // 0x23318c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x23318cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_233190:
    // 0x233190: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_233194:
    // 0x233194: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x233194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_233198:
    // 0x233198: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x233198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23319c:
    // 0x23319c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23319cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2331a0:
    // 0x2331a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2331a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2331a4:
    // 0x2331a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2331a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2331a8:
    // 0x2331a8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2331a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2331ac:
    // 0x2331ac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2331acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2331b0:
    // 0x2331b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2331b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2331b4:
    // 0x2331b4: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x2331b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
label_2331b8:
    // 0x2331b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2331b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2331bc:
    // 0x2331bc: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x2331bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
label_2331c0:
    // 0x2331c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2331c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2331c4:
    // 0x2331c4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2331c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2331c8:
    // 0x2331c8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2331c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2331cc:
    // 0x2331cc: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x2331ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_2331d0:
    // 0x2331d0: 0x32110f00  andi        $s1, $s0, 0xF00
    ctx->pc = 0x2331d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3840);
label_2331d4:
    // 0x2331d4: 0xc069218  jal         func_1A4860
label_2331d8:
    if (ctx->pc == 0x2331D8u) {
        ctx->pc = 0x2331D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331D4u;
        // 0x2331d8: 0x108402  srl         $s0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2331DCu;
        goto label_2331dc;
    }
    ctx->pc = 0x2331D4u;
    SET_GPR_U32(ctx, 31, 0x2331DCu);
    ctx->pc = 0x2331D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2331D4u;
    // 0x2331d8: 0x108402  srl         $s0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x2331DCu;
label_2331dc:
    // 0x2331dc: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x2331dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_2331e0:
    // 0x2331e0: 0x32100003  andi        $s0, $s0, 0x3
    ctx->pc = 0x2331e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_2331e4:
    // 0x2331e4: 0x118a02  srl         $s1, $s1, 8
    ctx->pc = 0x2331e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
label_2331e8:
    // 0x2331e8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2331e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2331ec:
    // 0x2331ec: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2331ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2331f0:
    // 0x2331f0: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x2331f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
label_2331f4:
    // 0x2331f4: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x2331f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2331f8:
    // 0x2331f8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2331f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_2331fc:
    // 0x2331fc: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2331fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_233200:
    // 0x233200: 0x43ac0  sll         $a3, $a0, 11
    ctx->pc = 0x233200u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
label_233204:
    // 0x233204: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x233204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_233208:
    // 0x233208: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x233208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23320c:
    // 0x23320c: 0x2479021  addu        $s2, $s2, $a3
    ctx->pc = 0x23320cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_233210:
    // 0x233210: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x233210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_233214:
    // 0x233214: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x233214u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233218:
    // 0x233218: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x233218u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_23321c:
    // 0x23321c: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x23321cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_233220:
    // 0x233220: 0x247001b  divu        $zero, $s2, $a3
    ctx->pc = 0x233220u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
label_233224:
    // 0x233224: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x233224u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_233228:
    // 0x233228: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
label_23322c:
    if (ctx->pc == 0x23322Cu) {
        ctx->pc = 0x23322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233228u;
        // 0x23322c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233230u;
        goto label_233230;
    }
    ctx->pc = 0x233228u;
    {
        const bool branch_taken_0x233228 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x233228) {
            ctx->pc = 0x23322Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233228u;
            // 0x23322c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x233230u;
            goto label_233230;
        }
    }
    ctx->pc = 0x233230u;
label_233230:
    // 0x233230: 0x8e6b0058  lw          $t3, 0x58($s3)
    ctx->pc = 0x233230u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_233234:
    // 0x233234: 0x1810  mfhi        $v1
    ctx->pc = 0x233234u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_233238:
    // 0x233238: 0x1960002b  blez        $t3, . + 4 + (0x2B << 2)
label_23323c:
    if (ctx->pc == 0x23323Cu) {
        ctx->pc = 0x23323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233238u;
        // 0x23323c: 0x8e62005c  lw          $v0, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233240u;
        goto label_233240;
    }
    ctx->pc = 0x233238u;
    {
        const bool branch_taken_0x233238 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x23323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233238u;
        // 0x23323c: 0x8e62005c  lw          $v0, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233238) {
            ctx->pc = 0x2332E8u;
            goto label_2332e8;
        }
    }
    ctx->pc = 0x233240u;
label_233240:
    // 0x233240: 0x8e680054  lw          $t0, 0x54($s3)
    ctx->pc = 0x233240u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_233244:
    // 0x233244: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x233244u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_233248:
    // 0x233248: 0x8e6e0050  lw          $t6, 0x50($s3)
    ctx->pc = 0x233248u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_23324c:
    // 0x23324c: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x23324cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_233250:
    // 0x233250: 0x486821  addu        $t5, $v0, $t0
    ctx->pc = 0x233250u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_233254:
    // 0x233254: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x233254u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_233258:
    // 0x233258: 0x1a91021  addu        $v0, $t5, $t1
    ctx->pc = 0x233258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
label_23325c:
    // 0x23325c: 0x0  nop
    ctx->pc = 0x23325cu;
    // NOP
label_233260:
    // 0x233260: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x233260u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_233264:
    // 0x233264: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x233264u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_233268:
    // 0x233268: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
label_23326c:
    if (ctx->pc == 0x23326Cu) {
        ctx->pc = 0x23326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233268u;
        // 0x23326c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233270u;
        goto label_233270;
    }
    ctx->pc = 0x233268u;
    {
        const bool branch_taken_0x233268 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x233268) {
            ctx->pc = 0x23326Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233268u;
            // 0x23326c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x233270u;
            goto label_233270;
        }
    }
    ctx->pc = 0x233270u;
label_233270:
    // 0x233270: 0x1810  mfhi        $v1
    ctx->pc = 0x233270u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_233274:
    // 0x233274: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x233274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_233278:
    // 0x233278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23327c:
    // 0x23327c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23327cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_233280:
    // 0x233280: 0x4e3021  addu        $a2, $v0, $t6
    ctx->pc = 0x233280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
label_233284:
    // 0x233284: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x233284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_233288:
    // 0x233288: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x233288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_23328c:
    // 0x23328c: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x23328cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_233290:
    // 0x233290: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x233290u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_233294:
    // 0x233294: 0x1010  mfhi        $v0
    ctx->pc = 0x233294u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_233298:
    // 0x233298: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x233298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_23329c:
    // 0x23329c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2332a0:
    if (ctx->pc == 0x2332A0u) {
        ctx->pc = 0x2332A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23329Cu;
        // 0x2332a0: 0x12b502a  slt         $t2, $t1, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2332A4u;
        goto label_2332a4;
    }
    ctx->pc = 0x23329Cu;
    {
        const bool branch_taken_0x23329c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2332A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23329Cu;
        // 0x2332a0: 0x12b502a  slt         $t2, $t1, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23329c) {
            ctx->pc = 0x2332D8u;
            goto label_2332d8;
        }
    }
    ctx->pc = 0x2332A4u;
label_2332a4:
    // 0x2332a4: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x2332a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2332a8:
    // 0x2332a8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2332a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2332ac:
    // 0x2332ac: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x2332acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2332b0:
    // 0x2332b0: 0xfe850000  sd          $a1, 0x0($s4)
    ctx->pc = 0x2332b0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 5));
label_2332b4:
    // 0x2332b4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2332b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2332b8:
    // 0x2332b8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2332b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2332bc:
    // 0x2332bc: 0x2a2180a  movz        $v1, $s5, $v0
    ctx->pc = 0x2332bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 21));
label_2332c0:
    // 0x2332c0: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x2332c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
label_2332c4:
    // 0x2332c4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2332c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2332c8:
    // 0x2332c8: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x2332c8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
label_2332cc:
    // 0x2332cc: 0xae640058  sw          $a0, 0x58($s3)
    ctx->pc = 0x2332ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 4));
label_2332d0:
    // 0x2332d0: 0xfccc0008  sd          $t4, 0x8($a2)
    ctx->pc = 0x2332d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 12));
label_2332d4:
    // 0x2332d4: 0xfccc0000  sd          $t4, 0x0($a2)
    ctx->pc = 0x2332d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 12));
label_2332d8:
    // 0x2332d8: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
label_2332dc:
    if (ctx->pc == 0x2332DCu) {
        ctx->pc = 0x2332E0u;
        goto label_2332e0;
    }
    ctx->pc = 0x2332D8u;
    {
        const bool branch_taken_0x2332d8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2332d8) {
            ctx->pc = 0x2332E8u;
            goto label_2332e8;
        }
    }
    ctx->pc = 0x2332E0u;
label_2332e0:
    // 0x2332e0: 0x12a0ffdf  beqz        $s5, . + 4 + (-0x21 << 2)
label_2332e4:
    if (ctx->pc == 0x2332E4u) {
        ctx->pc = 0x2332E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332E0u;
        // 0x2332e4: 0x1a91021  addu        $v0, $t5, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2332E8u;
        goto label_2332e8;
    }
    ctx->pc = 0x2332E0u;
    {
        const bool branch_taken_0x2332e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2332E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332E0u;
        // 0x2332e4: 0x1a91021  addu        $v0, $t5, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2332e0) {
            ctx->pc = 0x233260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233260;
        }
    }
    ctx->pc = 0x2332E8u;
label_2332e8:
    // 0x2332e8: 0xc069210  jal         func_1A4840
label_2332ec:
    if (ctx->pc == 0x2332ECu) {
        ctx->pc = 0x2332ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332E8u;
        // 0x2332ec: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2332F0u;
        goto label_2332f0;
    }
    ctx->pc = 0x2332E8u;
    SET_GPR_U32(ctx, 31, 0x2332F0u);
    ctx->pc = 0x2332ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2332E8u;
    // 0x2332ec: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x2332F0u;
label_2332f0:
    // 0x2332f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2332f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2332f4:
    // 0x2332f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2332f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2332f8:
    // 0x2332f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2332f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2332fc:
    // 0x2332fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2332fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_233300:
    // 0x233300: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233300u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_233304:
    // 0x233304: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233304u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_233308:
    // 0x233308: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x233308u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23330c:
    // 0x23330c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23330cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_233310:
    // 0x233310: 0x3e00008  jr          $ra
label_233314:
    if (ctx->pc == 0x233314u) {
        ctx->pc = 0x233314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233310u;
        // 0x233314: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233318u;
        goto label_233318;
    }
    ctx->pc = 0x233310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233310u;
        // 0x233314: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233318u;
label_233318:
    // 0x233318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23331c:
    // 0x23331c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233320:
    // 0x233320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_233324:
    // 0x233324: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_233328:
    // 0x233328: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x233328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23332c:
    // 0x23332c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23332cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_233330:
    // 0x233330: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x233330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_233334:
    // 0x233334: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x233334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_233338:
    // 0x233338: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x233338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_23333c:
    // 0x23333c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23333cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_233340:
    // 0x233340: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x233340u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_233344:
    // 0x233344: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x233344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_233348:
    // 0x233348: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x233348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_23334c:
    // 0x23334c: 0xc068a02  jal         func_1A2808
label_233350:
    if (ctx->pc == 0x233350u) {
        ctx->pc = 0x233350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23334Cu;
        // 0x233350: 0x160a82d  daddu       $s5, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233354u;
        goto label_233354;
    }
    ctx->pc = 0x23334Cu;
    SET_GPR_U32(ctx, 31, 0x233354u);
    ctx->pc = 0x233350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23334Cu;
    // 0x233350: 0x160a82d  daddu       $s5, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2808u;
    { ctx->pc = 0x1a2808; return; }
    ctx->pc = 0x233354u;
label_233354:
    // 0x233354: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x233354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
label_233358:
    // 0x233358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23335c:
    // 0x23335c: 0x24c63b08  addiu       $a2, $a2, 0x3B08
    ctx->pc = 0x23335cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15112));
label_233360:
    // 0x233360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233364:
    // 0x233364: 0xc068b08  jal         func_1A2C20
label_233368:
    if (ctx->pc == 0x233368u) {
        ctx->pc = 0x233368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233364u;
        // 0x233368: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23336Cu;
        goto label_23336c;
    }
    ctx->pc = 0x233364u;
    SET_GPR_U32(ctx, 31, 0x23336Cu);
    ctx->pc = 0x233368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233364u;
    // 0x233368: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C20u;
    { ctx->pc = 0x1a2c20; return; }
    ctx->pc = 0x23336Cu;
label_23336c:
    // 0x23336c: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x23336cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
label_233370:
    // 0x233370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233374:
    // 0x233374: 0x24c63b48  addiu       $a2, $a2, 0x3B48
    ctx->pc = 0x233374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15176));
label_233378:
    // 0x233378: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x233378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23337c:
    // 0x23337c: 0xc068b08  jal         func_1A2C20
label_233380:
    if (ctx->pc == 0x233380u) {
        ctx->pc = 0x233380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23337Cu;
        // 0x233380: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233384u;
        goto label_233384;
    }
    ctx->pc = 0x23337Cu;
    SET_GPR_U32(ctx, 31, 0x233384u);
    ctx->pc = 0x233380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23337Cu;
    // 0x233380: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C20u;
    { ctx->pc = 0x1a2c20; return; }
    ctx->pc = 0x233384u;
label_233384:
    // 0x233384: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x233384u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
label_233388:
    // 0x233388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23338c:
    // 0x23338c: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x23338cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_233390:
    // 0x233390: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x233390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_233394:
    // 0x233394: 0xc068b08  jal         func_1A2C20
label_233398:
    if (ctx->pc == 0x233398u) {
        ctx->pc = 0x233398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233394u;
        // 0x233398: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23339Cu;
        goto label_23339c;
    }
    ctx->pc = 0x233394u;
    SET_GPR_U32(ctx, 31, 0x23339Cu);
    ctx->pc = 0x233398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233394u;
    // 0x233398: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C20u;
    { ctx->pc = 0x1a2c20; return; }
    ctx->pc = 0x23339Cu;
label_23339c:
    // 0x23339c: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x23339cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
label_2333a0:
    // 0x2333a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2333a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2333a4:
    // 0x2333a4: 0x24c63bb0  addiu       $a2, $a2, 0x3BB0
    ctx->pc = 0x2333a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15280));
label_2333a8:
    // 0x2333a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2333a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2333ac:
    // 0x2333ac: 0xc068b08  jal         func_1A2C20
label_2333b0:
    if (ctx->pc == 0x2333B0u) {
        ctx->pc = 0x2333B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333ACu;
        // 0x2333b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2333B4u;
        goto label_2333b4;
    }
    ctx->pc = 0x2333ACu;
    SET_GPR_U32(ctx, 31, 0x2333B4u);
    ctx->pc = 0x2333B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333ACu;
    // 0x2333b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C20u;
    { ctx->pc = 0x1a2c20; return; }
    ctx->pc = 0x2333B4u;
label_2333b4:
    // 0x2333b4: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x2333b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
label_2333b8:
    // 0x2333b8: 0x24c63be0  addiu       $a2, $a2, 0x3BE0
    ctx->pc = 0x2333b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15328));
label_2333bc:
    // 0x2333bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2333bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2333c0:
    // 0x2333c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2333c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2333c4:
    // 0x2333c4: 0xc068b08  jal         func_1A2C20
label_2333c8:
    if (ctx->pc == 0x2333C8u) {
        ctx->pc = 0x2333C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333C4u;
        // 0x2333c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2333CCu;
        goto label_2333cc;
    }
    ctx->pc = 0x2333C4u;
    SET_GPR_U32(ctx, 31, 0x2333CCu);
    ctx->pc = 0x2333C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333C4u;
    // 0x2333c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C20u;
    { ctx->pc = 0x1a2c20; return; }
    ctx->pc = 0x2333CCu;
label_2333cc:
    // 0x2333cc: 0xc08cd20  jal         func_233480
label_2333d0:
    if (ctx->pc == 0x2333D0u) {
        ctx->pc = 0x2333D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333CCu;
        // 0x2333d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2333D4u;
        goto label_2333d4;
    }
    ctx->pc = 0x2333CCu;
    SET_GPR_U32(ctx, 31, 0x2333D4u);
    ctx->pc = 0x2333D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333CCu;
    // 0x2333d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233480u;
    goto label_233480;
    ctx->pc = 0x2333D4u;
label_2333d4:
    // 0x2333d4: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x2333d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_2333d8:
    // 0x2333d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2333d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2333dc:
    // 0x2333dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2333dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2333e0:
    // 0x2333e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2333e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2333e4:
    // 0x2333e4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2333e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2333e8:
    // 0x2333e8: 0xc08c930  jal         func_2324C0
label_2333ec:
    if (ctx->pc == 0x2333ECu) {
        ctx->pc = 0x2333ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333E8u;
        // 0x2333ec: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2333F0u;
        goto label_2333f0;
    }
    ctx->pc = 0x2333E8u;
    SET_GPR_U32(ctx, 31, 0x2333F0u);
    ctx->pc = 0x2333ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333E8u;
    // 0x2333ec: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2324C0u;
    { ctx->pc = 0x2324c0; return; }
    ctx->pc = 0x2333F0u;
label_2333f0:
    // 0x2333f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2333f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2333f4:
    // 0x2333f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2333f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2333f8:
    // 0x2333f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2333f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2333fc:
    // 0x2333fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2333fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_233400:
    // 0x233400: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_233404:
    // 0x233404: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233404u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_233408:
    // 0x233408: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x233408u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23340c:
    // 0x23340c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23340cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_233410:
    // 0x233410: 0x3e00008  jr          $ra
label_233414:
    if (ctx->pc == 0x233414u) {
        ctx->pc = 0x233414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233410u;
        // 0x233414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233418u;
        goto label_233418;
    }
    ctx->pc = 0x233410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233410u;
        // 0x233414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233418u;
label_233418:
    // 0x233418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23341c:
    // 0x23341c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23341cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233420:
    // 0x233420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233424:
    // 0x233424: 0x8068ac8  j           func_1A2B20
label_233428:
    if (ctx->pc == 0x233428u) {
        ctx->pc = 0x233428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233424u;
        // 0x233428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23342Cu;
        goto label_23342c;
    }
    ctx->pc = 0x233424u;
    ctx->pc = 0x233428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233424u;
    // 0x233428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2B20u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a2b20; return; }
    ctx->pc = 0x23342Cu;
label_23342c:
    // 0x23342c: 0x0  nop
    ctx->pc = 0x23342cu;
    // NOP
label_233430:
    // 0x233430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233434:
    // 0x233434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233438:
    // 0x233438: 0xc0687c0  jal         func_1A1F00
label_23343c:
    if (ctx->pc == 0x23343Cu) {
        ctx->pc = 0x233440u;
        goto label_233440;
    }
    ctx->pc = 0x233438u;
    SET_GPR_U32(ctx, 31, 0x233440u);
    ctx->pc = 0x1A1F00u;
    { ctx->pc = 0x1a1f00; return; }
    ctx->pc = 0x233440u;
label_233440:
    // 0x233440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233444:
    // 0x233444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233448:
    // 0x233448: 0x3e00008  jr          $ra
label_23344c:
    if (ctx->pc == 0x23344Cu) {
        ctx->pc = 0x23344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233448u;
        // 0x23344c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233450u;
        goto label_233450;
    }
    ctx->pc = 0x233448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233448u;
        // 0x23344c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233450u;
label_233450:
    // 0x233450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233454:
    // 0x233454: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x233454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_233458:
    // 0x233458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23345c:
    // 0x23345c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23345cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233460:
    // 0x233460: 0x808c99e  j           func_232678
label_233464:
    if (ctx->pc == 0x233464u) {
        ctx->pc = 0x233464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233460u;
        // 0x233464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233468u;
        goto label_233468;
    }
    ctx->pc = 0x233460u;
    ctx->pc = 0x233464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233460u;
    // 0x233464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232678u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x232678; return; }
    ctx->pc = 0x233468u;
label_233468:
    // 0x233468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23346c:
    // 0x23346c: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x23346cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_233470:
    // 0x233470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233474:
    // 0x233474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233478:
    // 0x233478: 0x808c9da  j           func_232768
label_23347c:
    if (ctx->pc == 0x23347Cu) {
        ctx->pc = 0x23347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233478u;
        // 0x23347c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233480u;
        goto label_233480;
    }
    ctx->pc = 0x233478u;
    ctx->pc = 0x23347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233478u;
    // 0x23347c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232768u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x232768; return; }
    ctx->pc = 0x233480u;
label_233480:
    // 0x233480: 0x3e00008  jr          $ra
label_233484:
    if (ctx->pc == 0x233484u) {
        ctx->pc = 0x233484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233480u;
        // 0x233484: 0xac8000a8  sw          $zero, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233488u;
        goto label_233488;
    }
    ctx->pc = 0x233480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233480u;
        // 0x233484: 0xac8000a8  sw          $zero, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233488u;
label_233488:
    // 0x233488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23348c:
    // 0x23348c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23348cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233490:
    // 0x233490: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_233494:
    // 0x233494: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x233494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_233498:
    // 0x233498: 0xc08cb7a  jal         func_232DE8
label_23349c:
    if (ctx->pc == 0x23349Cu) {
        ctx->pc = 0x23349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233498u;
        // 0x23349c: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2334A0u;
        goto label_2334a0;
    }
    ctx->pc = 0x233498u;
    SET_GPR_U32(ctx, 31, 0x2334A0u);
    ctx->pc = 0x23349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233498u;
    // 0x23349c: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232DE8u;
    { ctx->pc = 0x232de8; return; }
    ctx->pc = 0x2334A0u;
label_2334a0:
    // 0x2334a0: 0xc068a84  jal         func_1A2A10
label_2334a4:
    if (ctx->pc == 0x2334A4u) {
        ctx->pc = 0x2334A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334A0u;
        // 0x2334a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2334A8u;
        goto label_2334a8;
    }
    ctx->pc = 0x2334A0u;
    SET_GPR_U32(ctx, 31, 0x2334A8u);
    ctx->pc = 0x2334A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2334A0u;
    // 0x2334a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2A10u;
    { ctx->pc = 0x1a2a10; return; }
    ctx->pc = 0x2334A8u;
label_2334a8:
    // 0x2334a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2334a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2334ac:
    // 0x2334ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2334acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2334b0:
    // 0x2334b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2334b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2334b4:
    // 0x2334b4: 0x3e00008  jr          $ra
label_2334b8:
    if (ctx->pc == 0x2334B8u) {
        ctx->pc = 0x2334B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334B4u;
        // 0x2334b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2334BCu;
        goto label_2334bc;
    }
    ctx->pc = 0x2334B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2334B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334B4u;
        // 0x2334b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2334B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2334BCu;
label_2334bc:
    // 0x2334bc: 0x0  nop
    ctx->pc = 0x2334bcu;
    // NOP
label_2334c0:
    // 0x2334c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2334c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2334c4:
    // 0x2334c4: 0x3e00008  jr          $ra
label_2334c8:
    if (ctx->pc == 0x2334C8u) {
        ctx->pc = 0x2334C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334C4u;
        // 0x2334c8: 0xac8200a8  sw          $v0, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2334CCu;
        goto label_2334cc;
    }
    ctx->pc = 0x2334C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2334C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334C4u;
        // 0x2334c8: 0xac8200a8  sw          $v0, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2334C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2334CCu;
label_2334cc:
    // 0x2334cc: 0x0  nop
    ctx->pc = 0x2334ccu;
    // NOP
label_2334d0:
    // 0x2334d0: 0x3e00008  jr          $ra
label_2334d4:
    if (ctx->pc == 0x2334D4u) {
        ctx->pc = 0x2334D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334D0u;
        // 0x2334d4: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2334D8u;
        goto label_2334d8;
    }
    ctx->pc = 0x2334D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2334D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334D0u;
        // 0x2334d4: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2334D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2334D8u;
label_2334d8:
    // 0x2334d8: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x2334d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
label_2334dc:
    // 0x2334dc: 0x3e00008  jr          $ra
label_2334e0:
    if (ctx->pc == 0x2334E0u) {
        ctx->pc = 0x2334E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334DCu;
        // 0x2334e0: 0xac8500a8  sw          $a1, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2334E4u;
        goto label_2334e4;
    }
    ctx->pc = 0x2334DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2334E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334DCu;
        // 0x2334e0: 0xac8500a8  sw          $a1, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2334DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2334E4u;
label_2334e4:
    // 0x2334e4: 0x0  nop
    ctx->pc = 0x2334e4u;
    // NOP
label_2334e8:
    // 0x2334e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2334e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2334ec:
    // 0x2334ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2334ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2334f0:
    // 0x2334f0: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x2334f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_2334f4:
    // 0x2334f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2334f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2334f8:
    // 0x2334f8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2334f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2334fc:
    // 0x2334fc: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x2334fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_233500:
    // 0x233500: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x233500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
label_233504:
    // 0x233504: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x233504u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_233508:
    // 0x233508: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x233508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
label_23350c:
    // 0x23350c: 0xc08cc22  jal         func_233088
label_233510:
    if (ctx->pc == 0x233510u) {
        ctx->pc = 0x233510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23350Cu;
        // 0x233510: 0xafa70010  sw          $a3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233514u;
        goto label_233514;
    }
    ctx->pc = 0x23350Cu;
    SET_GPR_U32(ctx, 31, 0x233514u);
    ctx->pc = 0x233510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23350Cu;
    // 0x233510: 0xafa70010  sw          $a3, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233088u;
    goto label_233088;
    ctx->pc = 0x233514u;
label_233514:
    // 0x233514: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x233514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_233518:
    // 0x233518: 0x3e00008  jr          $ra
label_23351c:
    if (ctx->pc == 0x23351Cu) {
        ctx->pc = 0x23351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233518u;
        // 0x23351c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233520u;
        goto label_233520;
    }
    ctx->pc = 0x233518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233518u;
        // 0x23351c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233520u;
label_233520:
    // 0x233520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233524:
    // 0x233524: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x233524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_233528:
    // 0x233528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23352c:
    // 0x23352c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23352cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233530:
    // 0x233530: 0x808cba0  j           func_232E80
label_233534:
    if (ctx->pc == 0x233534u) {
        ctx->pc = 0x233534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233530u;
        // 0x233534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233538u;
        goto label_233538;
    }
    ctx->pc = 0x233530u;
    ctx->pc = 0x233534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233530u;
    // 0x233534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232E80u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_232e80;
    ctx->pc = 0x233538u;
label_233538:
    // 0x233538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23353c:
    // 0x23353c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23353cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_233540:
    // 0x233540: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x233540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_233544:
    // 0x233544: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x233544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_233548:
    // 0x233548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x233548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23354c:
    // 0x23354c: 0xc08cd14  jal         func_233450
label_233550:
    if (ctx->pc == 0x233550u) {
        ctx->pc = 0x233550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23354Cu;
        // 0x233550: 0x27a8000c  addiu       $t0, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233554u;
        goto label_233554;
    }
    ctx->pc = 0x23354Cu;
    SET_GPR_U32(ctx, 31, 0x233554u);
    ctx->pc = 0x233550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23354Cu;
    // 0x233550: 0x27a8000c  addiu       $t0, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233450u;
    goto label_233450;
    ctx->pc = 0x233554u;
label_233554:
    // 0x233554: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x233554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_233558:
    // 0x233558: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x233558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_23355c:
    // 0x23355c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23355cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_233560:
    // 0x233560: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x233560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233564:
    // 0x233564: 0x3e00008  jr          $ra
label_233568:
    if (ctx->pc == 0x233568u) {
        ctx->pc = 0x233568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233564u;
        // 0x233568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23356Cu;
        goto label_23356c;
    }
    ctx->pc = 0x233564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233564u;
        // 0x233568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23356Cu;
label_23356c:
    // 0x23356c: 0x0  nop
    ctx->pc = 0x23356cu;
    // NOP
label_233570:
    // 0x233570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_233574:
    // 0x233574: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x233574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_233578:
    // 0x233578: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x233578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23357c:
    // 0x23357c: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x23357cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_233580:
    // 0x233580: 0x27a8001c  addiu       $t0, $sp, 0x1C
    ctx->pc = 0x233580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_233584:
    // 0x233584: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x233584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_233588:
    // 0x233588: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x233588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_23358c:
    // 0x23358c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23358cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_233590:
    // 0x233590: 0x244b0450  addiu       $t3, $v0, 0x450
    ctx->pc = 0x233590u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 1104));
label_233594:
    // 0x233594: 0x89630003  lwl         $v1, 0x3($t3)
    ctx->pc = 0x233594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_233598:
    // 0x233598: 0x99630000  lwr         $v1, 0x0($t3)
    ctx->pc = 0x233598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_23359c:
    // 0x23359c: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x23359cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_2335a0:
    // 0x2335a0: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x2335a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_2335a4:
    // 0x2335a4: 0xc08cd14  jal         func_233450
label_2335a8:
    if (ctx->pc == 0x2335A8u) {
        ctx->pc = 0x2335A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335A4u;
        // 0x2335a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2335ACu;
        goto label_2335ac;
    }
    ctx->pc = 0x2335A4u;
    SET_GPR_U32(ctx, 31, 0x2335ACu);
    ctx->pc = 0x2335A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335A4u;
    // 0x2335a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233450u;
    goto label_233450;
    ctx->pc = 0x2335ACu;
label_2335ac:
    // 0x2335ac: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2335acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2335b0:
    // 0x2335b0: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x2335b0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
label_2335b4:
    // 0x2335b4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2335b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2335b8:
    // 0x2335b8: 0x3c0d2000  lui         $t5, 0x2000
    ctx->pc = 0x2335b8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8192 << 16));
label_2335bc:
    // 0x2335bc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2335bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2335c0:
    // 0x2335c0: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x2335c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
label_2335c4:
    // 0x2335c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2335c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2335c8:
    // 0x2335c8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2335c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2335cc:
    // 0x2335cc: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x2335ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_2335d0:
    // 0x2335d0: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2335d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2335d4:
    // 0x2335d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2335d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2335d8:
    // 0x2335d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2335d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2335dc:
    // 0x2335dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2335dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2335e0:
    // 0x2335e0: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_2335e4:
    if (ctx->pc == 0x2335E4u) {
        ctx->pc = 0x2335E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335E0u;
        // 0x2335e4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2335E8u;
        goto label_2335e8;
    }
    ctx->pc = 0x2335E0u;
    {
        const bool branch_taken_0x2335e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2335E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335E0u;
        // 0x2335e4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335e0) {
            ctx->pc = 0x23362Cu;
            { ctx->pc = 0x23362c; return; }
        }
    }
    ctx->pc = 0x2335E8u;
label_2335e8:
    // 0x2335e8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2335e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2335ec:
    // 0x2335ec: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x2335ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2335f0:
    // 0x2335f0: 0x8c2024  and         $a0, $a0, $t4
    ctx->pc = 0x2335f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
label_2335f4:
    // 0x2335f4: 0xcc3024  and         $a2, $a2, $t4
    ctx->pc = 0x2335f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 12));
label_2335f8:
    // 0x2335f8: 0x8d2025  or          $a0, $a0, $t5
    ctx->pc = 0x2335f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 13));
label_2335fc:
    // 0x2335fc: 0xc08cf0c  jal         func_233C30
label_233600:
    if (ctx->pc == 0x233600u) {
        ctx->pc = 0x233600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335FCu;
        // 0x233600: 0xcd3025  or          $a2, $a2, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233604u;
        goto label_233604;
    }
    ctx->pc = 0x2335FCu;
    SET_GPR_U32(ctx, 31, 0x233604u);
    ctx->pc = 0x233600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335FCu;
    // 0x233600: 0xcd3025  or          $a2, $a2, $t5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233C30u;
    { ctx->pc = 0x233c30; return; }
    ctx->pc = 0x233604u;
label_233604:
    // 0x233604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233608:
    // 0x233608: 0xc08cd1a  jal         func_233468
label_23360c:
    if (ctx->pc == 0x23360Cu) {
        ctx->pc = 0x23360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233608u;
        // 0x23360c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233610u;
        goto label_233610;
    }
    ctx->pc = 0x233608u;
    SET_GPR_U32(ctx, 31, 0x233610u);
    ctx->pc = 0x23360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233608u;
    // 0x23360c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233468u;
    goto label_233468;
    ctx->pc = 0x233610u;
label_233610:
    // 0x233610: 0xc08cbb4  jal         func_232ED0
label_233614:
    if (ctx->pc == 0x233614u) {
        ctx->pc = 0x233614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233610u;
        // 0x233614: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233618u;
        { ctx->pc = 0x233618; return; }
    }
    ctx->pc = 0x233610u;
    SET_GPR_U32(ctx, 31, 0x233618u);
    ctx->pc = 0x233614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233610u;
    // 0x233614: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232ED0u;
    goto label_232ed0;
    ctx->pc = 0x233618u;
    ctx->pc = 0x233618u;
    return;
}

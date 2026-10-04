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


void FUN_0014eba0_part114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x185e70u: goto label_185e70;
        case 0x185e74u: goto label_185e74;
        case 0x185e78u: goto label_185e78;
        case 0x185e7cu: goto label_185e7c;
        case 0x185e80u: goto label_185e80;
        case 0x185e84u: goto label_185e84;
        case 0x185e88u: goto label_185e88;
        case 0x185e8cu: goto label_185e8c;
        case 0x185e90u: goto label_185e90;
        case 0x185e94u: goto label_185e94;
        case 0x185e98u: goto label_185e98;
        case 0x185e9cu: goto label_185e9c;
        case 0x185ea0u: goto label_185ea0;
        case 0x185ea4u: goto label_185ea4;
        case 0x185ea8u: goto label_185ea8;
        case 0x185eacu: goto label_185eac;
        case 0x185eb0u: goto label_185eb0;
        case 0x185eb4u: goto label_185eb4;
        case 0x185eb8u: goto label_185eb8;
        case 0x185ebcu: goto label_185ebc;
        case 0x185ec0u: goto label_185ec0;
        case 0x185ec4u: goto label_185ec4;
        case 0x185ec8u: goto label_185ec8;
        case 0x185eccu: goto label_185ecc;
        case 0x185ed0u: goto label_185ed0;
        case 0x185ed4u: goto label_185ed4;
        case 0x185ed8u: goto label_185ed8;
        case 0x185edcu: goto label_185edc;
        case 0x185ee0u: goto label_185ee0;
        case 0x185ee4u: goto label_185ee4;
        case 0x185ee8u: goto label_185ee8;
        case 0x185eecu: goto label_185eec;
        case 0x185ef0u: goto label_185ef0;
        case 0x185ef4u: goto label_185ef4;
        case 0x185ef8u: goto label_185ef8;
        case 0x185efcu: goto label_185efc;
        case 0x185f00u: goto label_185f00;
        case 0x185f04u: goto label_185f04;
        case 0x185f08u: goto label_185f08;
        case 0x185f0cu: goto label_185f0c;
        case 0x185f10u: goto label_185f10;
        case 0x185f14u: goto label_185f14;
        case 0x185f18u: goto label_185f18;
        case 0x185f1cu: goto label_185f1c;
        case 0x185f20u: goto label_185f20;
        case 0x185f24u: goto label_185f24;
        case 0x185f28u: goto label_185f28;
        case 0x185f2cu: goto label_185f2c;
        case 0x185f30u: goto label_185f30;
        case 0x185f34u: goto label_185f34;
        case 0x185f38u: goto label_185f38;
        case 0x185f3cu: goto label_185f3c;
        case 0x185f40u: goto label_185f40;
        case 0x185f44u: goto label_185f44;
        case 0x185f48u: goto label_185f48;
        case 0x185f4cu: goto label_185f4c;
        case 0x185f50u: goto label_185f50;
        case 0x185f54u: goto label_185f54;
        case 0x185f58u: goto label_185f58;
        case 0x185f5cu: goto label_185f5c;
        case 0x185f60u: goto label_185f60;
        case 0x185f64u: goto label_185f64;
        case 0x185f68u: goto label_185f68;
        case 0x185f6cu: goto label_185f6c;
        case 0x185f70u: goto label_185f70;
        case 0x185f74u: goto label_185f74;
        case 0x185f78u: goto label_185f78;
        case 0x185f7cu: goto label_185f7c;
        case 0x185f80u: goto label_185f80;
        case 0x185f84u: goto label_185f84;
        case 0x185f88u: goto label_185f88;
        case 0x185f8cu: goto label_185f8c;
        case 0x185f90u: goto label_185f90;
        case 0x185f94u: goto label_185f94;
        case 0x185f98u: goto label_185f98;
        case 0x185f9cu: goto label_185f9c;
        case 0x185fa0u: goto label_185fa0;
        case 0x185fa4u: goto label_185fa4;
        case 0x185fa8u: goto label_185fa8;
        case 0x185facu: goto label_185fac;
        case 0x185fb0u: goto label_185fb0;
        case 0x185fb4u: goto label_185fb4;
        case 0x185fb8u: goto label_185fb8;
        case 0x185fbcu: goto label_185fbc;
        case 0x185fc0u: goto label_185fc0;
        case 0x185fc4u: goto label_185fc4;
        case 0x185fc8u: goto label_185fc8;
        case 0x185fccu: goto label_185fcc;
        case 0x185fd0u: goto label_185fd0;
        case 0x185fd4u: goto label_185fd4;
        case 0x185fd8u: goto label_185fd8;
        case 0x185fdcu: goto label_185fdc;
        case 0x185fe0u: goto label_185fe0;
        case 0x185fe4u: goto label_185fe4;
        case 0x185fe8u: goto label_185fe8;
        case 0x185fecu: goto label_185fec;
        case 0x185ff0u: goto label_185ff0;
        case 0x185ff4u: goto label_185ff4;
        case 0x185ff8u: goto label_185ff8;
        case 0x185ffcu: goto label_185ffc;
        case 0x186000u: goto label_186000;
        case 0x186004u: goto label_186004;
        case 0x186008u: goto label_186008;
        case 0x18600cu: goto label_18600c;
        case 0x186010u: goto label_186010;
        case 0x186014u: goto label_186014;
        case 0x186018u: goto label_186018;
        case 0x18601cu: goto label_18601c;
        case 0x186020u: goto label_186020;
        case 0x186024u: goto label_186024;
        case 0x186028u: goto label_186028;
        case 0x18602cu: goto label_18602c;
        case 0x186030u: goto label_186030;
        case 0x186034u: goto label_186034;
        case 0x186038u: goto label_186038;
        case 0x18603cu: goto label_18603c;
        case 0x186040u: goto label_186040;
        case 0x186044u: goto label_186044;
        case 0x186048u: goto label_186048;
        case 0x18604cu: goto label_18604c;
        case 0x186050u: goto label_186050;
        case 0x186054u: goto label_186054;
        case 0x186058u: goto label_186058;
        case 0x18605cu: goto label_18605c;
        case 0x186060u: goto label_186060;
        case 0x186064u: goto label_186064;
        case 0x186068u: goto label_186068;
        case 0x18606cu: goto label_18606c;
        case 0x186070u: goto label_186070;
        case 0x186074u: goto label_186074;
        case 0x186078u: goto label_186078;
        case 0x18607cu: goto label_18607c;
        case 0x186080u: goto label_186080;
        case 0x186084u: goto label_186084;
        case 0x186088u: goto label_186088;
        case 0x18608cu: goto label_18608c;
        case 0x186090u: goto label_186090;
        case 0x186094u: goto label_186094;
        case 0x186098u: goto label_186098;
        case 0x18609cu: goto label_18609c;
        case 0x1860a0u: goto label_1860a0;
        case 0x1860a4u: goto label_1860a4;
        case 0x1860a8u: goto label_1860a8;
        case 0x1860acu: goto label_1860ac;
        case 0x1860b0u: goto label_1860b0;
        case 0x1860b4u: goto label_1860b4;
        case 0x1860b8u: goto label_1860b8;
        case 0x1860bcu: goto label_1860bc;
        case 0x1860c0u: goto label_1860c0;
        case 0x1860c4u: goto label_1860c4;
        case 0x1860c8u: goto label_1860c8;
        case 0x1860ccu: goto label_1860cc;
        case 0x1860d0u: goto label_1860d0;
        case 0x1860d4u: goto label_1860d4;
        case 0x1860d8u: goto label_1860d8;
        case 0x1860dcu: goto label_1860dc;
        case 0x1860e0u: goto label_1860e0;
        case 0x1860e4u: goto label_1860e4;
        case 0x1860e8u: goto label_1860e8;
        case 0x1860ecu: goto label_1860ec;
        case 0x1860f0u: goto label_1860f0;
        case 0x1860f4u: goto label_1860f4;
        case 0x1860f8u: goto label_1860f8;
        case 0x1860fcu: goto label_1860fc;
        case 0x186100u: goto label_186100;
        case 0x186104u: goto label_186104;
        case 0x186108u: goto label_186108;
        case 0x18610cu: goto label_18610c;
        case 0x186110u: goto label_186110;
        case 0x186114u: goto label_186114;
        case 0x186118u: goto label_186118;
        case 0x18611cu: goto label_18611c;
        case 0x186120u: goto label_186120;
        case 0x186124u: goto label_186124;
        case 0x186128u: goto label_186128;
        case 0x18612cu: goto label_18612c;
        case 0x186130u: goto label_186130;
        case 0x186134u: goto label_186134;
        case 0x186138u: goto label_186138;
        case 0x18613cu: goto label_18613c;
        case 0x186140u: goto label_186140;
        case 0x186144u: goto label_186144;
        case 0x186148u: goto label_186148;
        case 0x18614cu: goto label_18614c;
        case 0x186150u: goto label_186150;
        case 0x186154u: goto label_186154;
        case 0x186158u: goto label_186158;
        case 0x18615cu: goto label_18615c;
        case 0x186160u: goto label_186160;
        case 0x186164u: goto label_186164;
        case 0x186168u: goto label_186168;
        case 0x18616cu: goto label_18616c;
        case 0x186170u: goto label_186170;
        case 0x186174u: goto label_186174;
        case 0x186178u: goto label_186178;
        case 0x18617cu: goto label_18617c;
        case 0x186180u: goto label_186180;
        case 0x186184u: goto label_186184;
        case 0x186188u: goto label_186188;
        case 0x18618cu: goto label_18618c;
        case 0x186190u: goto label_186190;
        case 0x186194u: goto label_186194;
        case 0x186198u: goto label_186198;
        case 0x18619cu: goto label_18619c;
        case 0x1861a0u: goto label_1861a0;
        case 0x1861a4u: goto label_1861a4;
        case 0x1861a8u: goto label_1861a8;
        case 0x1861acu: goto label_1861ac;
        case 0x1861b0u: goto label_1861b0;
        case 0x1861b4u: goto label_1861b4;
        case 0x1861b8u: goto label_1861b8;
        case 0x1861bcu: goto label_1861bc;
        case 0x1861c0u: goto label_1861c0;
        case 0x1861c4u: goto label_1861c4;
        case 0x1861c8u: goto label_1861c8;
        case 0x1861ccu: goto label_1861cc;
        case 0x1861d0u: goto label_1861d0;
        case 0x1861d4u: goto label_1861d4;
        case 0x1861d8u: goto label_1861d8;
        case 0x1861dcu: goto label_1861dc;
        case 0x1861e0u: goto label_1861e0;
        case 0x1861e4u: goto label_1861e4;
        case 0x1861e8u: goto label_1861e8;
        case 0x1861ecu: goto label_1861ec;
        case 0x1861f0u: goto label_1861f0;
        case 0x1861f4u: goto label_1861f4;
        case 0x1861f8u: goto label_1861f8;
        case 0x1861fcu: goto label_1861fc;
        case 0x186200u: goto label_186200;
        case 0x186204u: goto label_186204;
        case 0x186208u: goto label_186208;
        case 0x18620cu: goto label_18620c;
        case 0x186210u: goto label_186210;
        case 0x186214u: goto label_186214;
        case 0x186218u: goto label_186218;
        case 0x18621cu: goto label_18621c;
        case 0x186220u: goto label_186220;
        case 0x186224u: goto label_186224;
        case 0x186228u: goto label_186228;
        case 0x18622cu: goto label_18622c;
        case 0x186230u: goto label_186230;
        case 0x186234u: goto label_186234;
        case 0x186238u: goto label_186238;
        case 0x18623cu: goto label_18623c;
        case 0x186240u: goto label_186240;
        case 0x186244u: goto label_186244;
        case 0x186248u: goto label_186248;
        case 0x18624cu: goto label_18624c;
        case 0x186250u: goto label_186250;
        case 0x186254u: goto label_186254;
        case 0x186258u: goto label_186258;
        case 0x18625cu: goto label_18625c;
        case 0x186260u: goto label_186260;
        case 0x186264u: goto label_186264;
        case 0x186268u: goto label_186268;
        case 0x18626cu: goto label_18626c;
        case 0x186270u: goto label_186270;
        case 0x186274u: goto label_186274;
        case 0x186278u: goto label_186278;
        case 0x18627cu: goto label_18627c;
        case 0x186280u: goto label_186280;
        case 0x186284u: goto label_186284;
        case 0x186288u: goto label_186288;
        case 0x18628cu: goto label_18628c;
        case 0x186290u: goto label_186290;
        case 0x186294u: goto label_186294;
        case 0x186298u: goto label_186298;
        case 0x18629cu: goto label_18629c;
        case 0x1862a0u: goto label_1862a0;
        case 0x1862a4u: goto label_1862a4;
        case 0x1862a8u: goto label_1862a8;
        case 0x1862acu: goto label_1862ac;
        case 0x1862b0u: goto label_1862b0;
        case 0x1862b4u: goto label_1862b4;
        case 0x1862b8u: goto label_1862b8;
        case 0x1862bcu: goto label_1862bc;
        case 0x1862c0u: goto label_1862c0;
        case 0x1862c4u: goto label_1862c4;
        case 0x1862c8u: goto label_1862c8;
        case 0x1862ccu: goto label_1862cc;
        case 0x1862d0u: goto label_1862d0;
        case 0x1862d4u: goto label_1862d4;
        case 0x1862d8u: goto label_1862d8;
        case 0x1862dcu: goto label_1862dc;
        case 0x1862e0u: goto label_1862e0;
        case 0x1862e4u: goto label_1862e4;
        case 0x1862e8u: goto label_1862e8;
        case 0x1862ecu: goto label_1862ec;
        case 0x1862f0u: goto label_1862f0;
        case 0x1862f4u: goto label_1862f4;
        case 0x1862f8u: goto label_1862f8;
        case 0x1862fcu: goto label_1862fc;
        case 0x186300u: goto label_186300;
        case 0x186304u: goto label_186304;
        case 0x186308u: goto label_186308;
        case 0x18630cu: goto label_18630c;
        case 0x186310u: goto label_186310;
        case 0x186314u: goto label_186314;
        case 0x186318u: goto label_186318;
        case 0x18631cu: goto label_18631c;
        case 0x186320u: goto label_186320;
        case 0x186324u: goto label_186324;
        case 0x186328u: goto label_186328;
        case 0x18632cu: goto label_18632c;
        case 0x186330u: goto label_186330;
        case 0x186334u: goto label_186334;
        case 0x186338u: goto label_186338;
        case 0x18633cu: goto label_18633c;
        case 0x186340u: goto label_186340;
        case 0x186344u: goto label_186344;
        case 0x186348u: goto label_186348;
        case 0x18634cu: goto label_18634c;
        case 0x186350u: goto label_186350;
        case 0x186354u: goto label_186354;
        case 0x186358u: goto label_186358;
        case 0x18635cu: goto label_18635c;
        case 0x186360u: goto label_186360;
        case 0x186364u: goto label_186364;
        case 0x186368u: goto label_186368;
        case 0x18636cu: goto label_18636c;
        case 0x186370u: goto label_186370;
        case 0x186374u: goto label_186374;
        case 0x186378u: goto label_186378;
        case 0x18637cu: goto label_18637c;
        case 0x186380u: goto label_186380;
        case 0x186384u: goto label_186384;
        case 0x186388u: goto label_186388;
        case 0x18638cu: goto label_18638c;
        case 0x186390u: goto label_186390;
        case 0x186394u: goto label_186394;
        case 0x186398u: goto label_186398;
        case 0x18639cu: goto label_18639c;
        case 0x1863a0u: goto label_1863a0;
        case 0x1863a4u: goto label_1863a4;
        case 0x1863a8u: goto label_1863a8;
        case 0x1863acu: goto label_1863ac;
        case 0x1863b0u: goto label_1863b0;
        case 0x1863b4u: goto label_1863b4;
        case 0x1863b8u: goto label_1863b8;
        case 0x1863bcu: goto label_1863bc;
        case 0x1863c0u: goto label_1863c0;
        case 0x1863c4u: goto label_1863c4;
        case 0x1863c8u: goto label_1863c8;
        case 0x1863ccu: goto label_1863cc;
        case 0x1863d0u: goto label_1863d0;
        case 0x1863d4u: goto label_1863d4;
        case 0x1863d8u: goto label_1863d8;
        case 0x1863dcu: goto label_1863dc;
        case 0x1863e0u: goto label_1863e0;
        case 0x1863e4u: goto label_1863e4;
        case 0x1863e8u: goto label_1863e8;
        case 0x1863ecu: goto label_1863ec;
        case 0x1863f0u: goto label_1863f0;
        case 0x1863f4u: goto label_1863f4;
        case 0x1863f8u: goto label_1863f8;
        case 0x1863fcu: goto label_1863fc;
        case 0x186400u: goto label_186400;
        case 0x186404u: goto label_186404;
        case 0x186408u: goto label_186408;
        case 0x18640cu: goto label_18640c;
        case 0x186410u: goto label_186410;
        case 0x186414u: goto label_186414;
        case 0x186418u: goto label_186418;
        case 0x18641cu: goto label_18641c;
        case 0x186420u: goto label_186420;
        case 0x186424u: goto label_186424;
        case 0x186428u: goto label_186428;
        case 0x18642cu: goto label_18642c;
        case 0x186430u: goto label_186430;
        case 0x186434u: goto label_186434;
        case 0x186438u: goto label_186438;
        case 0x18643cu: goto label_18643c;
        case 0x186440u: goto label_186440;
        case 0x186444u: goto label_186444;
        case 0x186448u: goto label_186448;
        case 0x18644cu: goto label_18644c;
        case 0x186450u: goto label_186450;
        case 0x186454u: goto label_186454;
        case 0x186458u: goto label_186458;
        case 0x18645cu: goto label_18645c;
        case 0x186460u: goto label_186460;
        case 0x186464u: goto label_186464;
        case 0x186468u: goto label_186468;
        case 0x18646cu: goto label_18646c;
        case 0x186470u: goto label_186470;
        case 0x186474u: goto label_186474;
        case 0x186478u: goto label_186478;
        case 0x18647cu: goto label_18647c;
        case 0x186480u: goto label_186480;
        case 0x186484u: goto label_186484;
        case 0x186488u: goto label_186488;
        case 0x18648cu: goto label_18648c;
        case 0x186490u: goto label_186490;
        case 0x186494u: goto label_186494;
        case 0x186498u: goto label_186498;
        case 0x18649cu: goto label_18649c;
        case 0x1864a0u: goto label_1864a0;
        case 0x1864a4u: goto label_1864a4;
        case 0x1864a8u: goto label_1864a8;
        case 0x1864acu: goto label_1864ac;
        case 0x1864b0u: goto label_1864b0;
        case 0x1864b4u: goto label_1864b4;
        case 0x1864b8u: goto label_1864b8;
        case 0x1864bcu: goto label_1864bc;
        case 0x1864c0u: goto label_1864c0;
        case 0x1864c4u: goto label_1864c4;
        case 0x1864c8u: goto label_1864c8;
        case 0x1864ccu: goto label_1864cc;
        case 0x1864d0u: goto label_1864d0;
        case 0x1864d4u: goto label_1864d4;
        case 0x1864d8u: goto label_1864d8;
        case 0x1864dcu: goto label_1864dc;
        case 0x1864e0u: goto label_1864e0;
        case 0x1864e4u: goto label_1864e4;
        case 0x1864e8u: goto label_1864e8;
        case 0x1864ecu: goto label_1864ec;
        case 0x1864f0u: goto label_1864f0;
        case 0x1864f4u: goto label_1864f4;
        case 0x1864f8u: goto label_1864f8;
        case 0x1864fcu: goto label_1864fc;
        case 0x186500u: goto label_186500;
        case 0x186504u: goto label_186504;
        case 0x186508u: goto label_186508;
        case 0x18650cu: goto label_18650c;
        case 0x186510u: goto label_186510;
        case 0x186514u: goto label_186514;
        case 0x186518u: goto label_186518;
        case 0x18651cu: goto label_18651c;
        case 0x186520u: goto label_186520;
        case 0x186524u: goto label_186524;
        case 0x186528u: goto label_186528;
        case 0x18652cu: goto label_18652c;
        case 0x186530u: goto label_186530;
        case 0x186534u: goto label_186534;
        case 0x186538u: goto label_186538;
        case 0x18653cu: goto label_18653c;
        case 0x186540u: goto label_186540;
        case 0x186544u: goto label_186544;
        case 0x186548u: goto label_186548;
        case 0x18654cu: goto label_18654c;
        case 0x186550u: goto label_186550;
        case 0x186554u: goto label_186554;
        case 0x186558u: goto label_186558;
        case 0x18655cu: goto label_18655c;
        case 0x186560u: goto label_186560;
        case 0x186564u: goto label_186564;
        case 0x186568u: goto label_186568;
        case 0x18656cu: goto label_18656c;
        case 0x186570u: goto label_186570;
        case 0x186574u: goto label_186574;
        case 0x186578u: goto label_186578;
        case 0x18657cu: goto label_18657c;
        case 0x186580u: goto label_186580;
        case 0x186584u: goto label_186584;
        case 0x186588u: goto label_186588;
        case 0x18658cu: goto label_18658c;
        case 0x186590u: goto label_186590;
        case 0x186594u: goto label_186594;
        case 0x186598u: goto label_186598;
        case 0x18659cu: goto label_18659c;
        case 0x1865a0u: goto label_1865a0;
        case 0x1865a4u: goto label_1865a4;
        case 0x1865a8u: goto label_1865a8;
        case 0x1865acu: goto label_1865ac;
        case 0x1865b0u: goto label_1865b0;
        case 0x1865b4u: goto label_1865b4;
        case 0x1865b8u: goto label_1865b8;
        case 0x1865bcu: goto label_1865bc;
        case 0x1865c0u: goto label_1865c0;
        case 0x1865c4u: goto label_1865c4;
        case 0x1865c8u: goto label_1865c8;
        case 0x1865ccu: goto label_1865cc;
        case 0x1865d0u: goto label_1865d0;
        case 0x1865d4u: goto label_1865d4;
        case 0x1865d8u: goto label_1865d8;
        case 0x1865dcu: goto label_1865dc;
        case 0x1865e0u: goto label_1865e0;
        case 0x1865e4u: goto label_1865e4;
        case 0x1865e8u: goto label_1865e8;
        case 0x1865ecu: goto label_1865ec;
        case 0x1865f0u: goto label_1865f0;
        case 0x1865f4u: goto label_1865f4;
        case 0x1865f8u: goto label_1865f8;
        case 0x1865fcu: goto label_1865fc;
        case 0x186600u: goto label_186600;
        case 0x186604u: goto label_186604;
        case 0x186608u: goto label_186608;
        case 0x18660cu: goto label_18660c;
        case 0x186610u: goto label_186610;
        case 0x186614u: goto label_186614;
        case 0x186618u: goto label_186618;
        case 0x18661cu: goto label_18661c;
        case 0x186620u: goto label_186620;
        case 0x186624u: goto label_186624;
        case 0x186628u: goto label_186628;
        case 0x18662cu: goto label_18662c;
        case 0x186630u: goto label_186630;
        case 0x186634u: goto label_186634;
        case 0x186638u: goto label_186638;
        case 0x18663cu: goto label_18663c;
        default: return;
    }

label_185e70:
    // 0x185e70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x185e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_185e74:
    // 0x185e74: 0x100002a3  b           . + 4 + (0x2A3 << 2)
label_185e78:
    if (ctx->pc == 0x185E78u) {
        ctx->pc = 0x185E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E74u;
        // 0x185e78: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185E7Cu;
        goto label_185e7c;
    }
    ctx->pc = 0x185E74u;
    {
        const bool branch_taken_0x185e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E74u;
        // 0x185e78: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e74) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x185E7Cu;
label_185e7c:
    // 0x185e7c: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x185e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_185e80:
    // 0x185e80: 0x100002a0  b           . + 4 + (0x2A0 << 2)
label_185e84:
    if (ctx->pc == 0x185E84u) {
        ctx->pc = 0x185E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E80u;
        // 0x185e84: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185E88u;
        goto label_185e88;
    }
    ctx->pc = 0x185E80u;
    {
        const bool branch_taken_0x185e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E80u;
        // 0x185e84: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e80) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x185E88u;
label_185e88:
    // 0x185e88: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_185e8c:
    if (ctx->pc == 0x185E8Cu) {
        ctx->pc = 0x185E90u;
        goto label_185e90;
    }
    ctx->pc = 0x185E88u;
    {
        const bool branch_taken_0x185e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x185e88) {
            ctx->pc = 0x185EB0u;
            goto label_185eb0;
        }
    }
    ctx->pc = 0x185E90u;
label_185e90:
    // 0x185e90: 0xc06237c  jal         func_188DF0
label_185e94:
    if (ctx->pc == 0x185E94u) {
        ctx->pc = 0x185E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E90u;
        // 0x185e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185E98u;
        goto label_185e98;
    }
    ctx->pc = 0x185E90u;
    SET_GPR_U32(ctx, 31, 0x185E98u);
    ctx->pc = 0x185E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185E90u;
    // 0x185e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188DF0u;
    { ctx->pc = 0x188df0; return; }
    ctx->pc = 0x185E98u;
label_185e98:
    // 0x185e98: 0x1440029a  bnez        $v0, . + 4 + (0x29A << 2)
label_185e9c:
    if (ctx->pc == 0x185E9Cu) {
        ctx->pc = 0x185EA0u;
        goto label_185ea0;
    }
    ctx->pc = 0x185E98u;
    {
        const bool branch_taken_0x185e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185e98) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x185EA0u;
label_185ea0:
    // 0x185ea0: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x185ea0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_185ea4:
    // 0x185ea4: 0x306300cb  andi        $v1, $v1, 0xCB
    ctx->pc = 0x185ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)203);
label_185ea8:
    // 0x185ea8: 0x10000296  b           . + 4 + (0x296 << 2)
label_185eac:
    if (ctx->pc == 0x185EACu) {
        ctx->pc = 0x185EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EA8u;
        // 0x185eac: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185EB0u;
        goto label_185eb0;
    }
    ctx->pc = 0x185EA8u;
    {
        const bool branch_taken_0x185ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EA8u;
        // 0x185eac: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ea8) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x185EB0u;
label_185eb0:
    // 0x185eb0: 0x92230246  lbu         $v1, 0x246($s1)
    ctx->pc = 0x185eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 582)));
label_185eb4:
    // 0x185eb4: 0x28630007  slti        $v1, $v1, 0x7
    ctx->pc = 0x185eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_185eb8:
    // 0x185eb8: 0x14600098  bnez        $v1, . + 4 + (0x98 << 2)
label_185ebc:
    if (ctx->pc == 0x185EBCu) {
        ctx->pc = 0x185EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EB8u;
        // 0x185ebc: 0x30a30004  andi        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185EC0u;
        goto label_185ec0;
    }
    ctx->pc = 0x185EB8u;
    {
        const bool branch_taken_0x185eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x185EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EB8u;
        // 0x185ebc: 0x30a30004  andi        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185eb8) {
            ctx->pc = 0x18611Cu;
            goto label_18611c;
        }
    }
    ctx->pc = 0x185EC0u;
label_185ec0:
    // 0x185ec0: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x185ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
label_185ec4:
    // 0x185ec4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x185ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_185ec8:
    // 0x185ec8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x185ec8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_185ecc:
    // 0x185ecc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185ed0:
    // 0x185ed0: 0x306300eb  andi        $v1, $v1, 0xEB
    ctx->pc = 0x185ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)235);
label_185ed4:
    // 0x185ed4: 0xa223023d  sb          $v1, 0x23D($s1)
    ctx->pc = 0x185ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
label_185ed8:
    // 0x185ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185edc:
    // 0x185edc: 0xc6220264  lwc1        $f2, 0x264($s1)
    ctx->pc = 0x185edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_185ee0:
    // 0x185ee0: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x185ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185ee4:
    // 0x185ee4: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x185ee4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_185ee8:
    // 0x185ee8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185ee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185eec:
    // 0x185eec: 0x0  nop
    ctx->pc = 0x185eecu;
    // NOP
label_185ef0:
    // 0x185ef0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_185ef4:
    if (ctx->pc == 0x185EF4u) {
        ctx->pc = 0x185EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EF0u;
        // 0x185ef4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185EF8u;
        goto label_185ef8;
    }
    ctx->pc = 0x185EF0u;
    {
        const bool branch_taken_0x185ef0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185EF0u;
        // 0x185ef4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ef0) {
            ctx->pc = 0x185F0Cu;
            goto label_185f0c;
        }
    }
    ctx->pc = 0x185EF8u;
label_185ef8:
    // 0x185ef8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_185efc:
    // 0x185efc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185f00:
    // 0x185f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185f04:
    // 0x185f04: 0x1000000d  b           . + 4 + (0xD << 2)
label_185f08:
    if (ctx->pc == 0x185F08u) {
        ctx->pc = 0x185F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F04u;
        // 0x185f08: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F0Cu;
        goto label_185f0c;
    }
    ctx->pc = 0x185F04u;
    {
        const bool branch_taken_0x185f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F04u;
        // 0x185f08: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f04) {
            ctx->pc = 0x185F3Cu;
            goto label_185f3c;
        }
    }
    ctx->pc = 0x185F0Cu;
label_185f0c:
    // 0x185f0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185f10:
    // 0x185f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185f14:
    // 0x185f14: 0x0  nop
    ctx->pc = 0x185f14u;
    // NOP
label_185f18:
    // 0x185f18: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185f18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185f1c:
    // 0x185f1c: 0x0  nop
    ctx->pc = 0x185f1cu;
    // NOP
label_185f20:
    // 0x185f20: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_185f24:
    if (ctx->pc == 0x185F24u) {
        ctx->pc = 0x185F28u;
        goto label_185f28;
    }
    ctx->pc = 0x185F20u;
    {
        const bool branch_taken_0x185f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185f20) {
            ctx->pc = 0x185F3Cu;
            goto label_185f3c;
        }
    }
    ctx->pc = 0x185F28u;
label_185f28:
    // 0x185f28: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_185f2c:
    // 0x185f2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185f30:
    // 0x185f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185f34:
    // 0x185f34: 0x10000001  b           . + 4 + (0x1 << 2)
label_185f38:
    if (ctx->pc == 0x185F38u) {
        ctx->pc = 0x185F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F34u;
        // 0x185f38: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F3Cu;
        goto label_185f3c;
    }
    ctx->pc = 0x185F34u;
    {
        const bool branch_taken_0x185f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F34u;
        // 0x185f38: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f34) {
            ctx->pc = 0x185F3Cu;
            goto label_185f3c;
        }
    }
    ctx->pc = 0x185F3Cu;
label_185f3c:
    // 0x185f3c: 0xc06d448  jal         func_1B5120
label_185f40:
    if (ctx->pc == 0x185F40u) {
        ctx->pc = 0x185F44u;
        goto label_185f44;
    }
    ctx->pc = 0x185F3Cu;
    SET_GPR_U32(ctx, 31, 0x185F44u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x185F44u;
label_185f44:
    // 0x185f44: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x185f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
label_185f48:
    // 0x185f48: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x185f48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_185f4c:
    // 0x185f4c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x185f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_185f50:
    // 0x185f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185f54:
    // 0x185f54: 0x0  nop
    ctx->pc = 0x185f54u;
    // NOP
label_185f58:
    // 0x185f58: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x185f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185f5c:
    // 0x185f5c: 0x0  nop
    ctx->pc = 0x185f5cu;
    // NOP
label_185f60:
    // 0x185f60: 0x45000055  bc1f        . + 4 + (0x55 << 2)
label_185f64:
    if (ctx->pc == 0x185F64u) {
        ctx->pc = 0x185F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F60u;
        // 0x185f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F68u;
        goto label_185f68;
    }
    ctx->pc = 0x185F60u;
    {
        const bool branch_taken_0x185f60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F60u;
        // 0x185f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f60) {
            ctx->pc = 0x1860B8u;
            goto label_1860b8;
        }
    }
    ctx->pc = 0x185F68u;
label_185f68:
    // 0x185f68: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x185f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_185f6c:
    // 0x185f6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x185f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_185f70:
    // 0x185f70: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x185f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_185f74:
    // 0x185f74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_185f78:
    if (ctx->pc == 0x185F78u) {
        ctx->pc = 0x185F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F74u;
        // 0x185f78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F7Cu;
        goto label_185f7c;
    }
    ctx->pc = 0x185F74u;
    {
        const bool branch_taken_0x185f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F74u;
        // 0x185f78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f74) {
            ctx->pc = 0x185F84u;
            goto label_185f84;
        }
    }
    ctx->pc = 0x185F7Cu;
label_185f7c:
    // 0x185f7c: 0x10000005  b           . + 4 + (0x5 << 2)
label_185f80:
    if (ctx->pc == 0x185F80u) {
        ctx->pc = 0x185F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F7Cu;
        // 0x185f80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185F84u;
        goto label_185f84;
    }
    ctx->pc = 0x185F7Cu;
    {
        const bool branch_taken_0x185f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F7Cu;
        // 0x185f80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f7c) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185F84u;
label_185f84:
    // 0x185f84: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x185f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_185f88:
    // 0x185f88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_185f8c:
    if (ctx->pc == 0x185F8Cu) {
        ctx->pc = 0x185F90u;
        goto label_185f90;
    }
    ctx->pc = 0x185F88u;
    {
        const bool branch_taken_0x185f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f88) {
            ctx->pc = 0x185F94u;
            goto label_185f94;
        }
    }
    ctx->pc = 0x185F90u;
label_185f90:
    // 0x185f90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x185f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185f94:
    // 0x185f94: 0x10800047  beqz        $a0, . + 4 + (0x47 << 2)
label_185f98:
    if (ctx->pc == 0x185F98u) {
        ctx->pc = 0x185F9Cu;
        goto label_185f9c;
    }
    ctx->pc = 0x185F94u;
    {
        const bool branch_taken_0x185f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f94) {
            ctx->pc = 0x1860B4u;
            goto label_1860b4;
        }
    }
    ctx->pc = 0x185F9Cu;
label_185f9c:
    // 0x185f9c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x185f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_185fa0:
    // 0x185fa0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x185fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_185fa4:
    // 0x185fa4: 0xc0439e8  jal         func_10E7A0
label_185fa8:
    if (ctx->pc == 0x185FA8u) {
        ctx->pc = 0x185FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FA4u;
        // 0x185fa8: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185FACu;
        goto label_185fac;
    }
    ctx->pc = 0x185FA4u;
    SET_GPR_U32(ctx, 31, 0x185FACu);
    ctx->pc = 0x185FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FA4u;
    // 0x185fa8: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x185FA4u, 0x185FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FACu;
label_185fac:
    // 0x185fac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_185fb0:
    if (ctx->pc == 0x185FB0u) {
        ctx->pc = 0x185FB4u;
        goto label_185fb4;
    }
    ctx->pc = 0x185FACu;
    {
        const bool branch_taken_0x185fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185fac) {
            ctx->pc = 0x185FBCu;
            goto label_185fbc;
        }
    }
    ctx->pc = 0x185FB4u;
label_185fb4:
    // 0x185fb4: 0x10000020  b           . + 4 + (0x20 << 2)
label_185fb8:
    if (ctx->pc == 0x185FB8u) {
        ctx->pc = 0x185FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FB4u;
        // 0x185fb8: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185FBCu;
        goto label_185fbc;
    }
    ctx->pc = 0x185FB4u;
    {
        const bool branch_taken_0x185fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FB4u;
        // 0x185fb8: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fb4) {
            ctx->pc = 0x186038u;
            goto label_186038;
        }
    }
    ctx->pc = 0x185FBCu;
label_185fbc:
    // 0x185fbc: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x185fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_185fc0:
    // 0x185fc0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x185fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_185fc4:
    // 0x185fc4: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x185fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_185fc8:
    // 0x185fc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185fcc:
    // 0x185fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185fd0:
    // 0x185fd0: 0x0  nop
    ctx->pc = 0x185fd0u;
    // NOP
label_185fd4:
    // 0x185fd4: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x185fd4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_185fd8:
    // 0x185fd8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x185fd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_185fdc:
    // 0x185fdc: 0x0  nop
    ctx->pc = 0x185fdcu;
    // NOP
label_185fe0:
    // 0x185fe0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_185fe4:
    if (ctx->pc == 0x185FE4u) {
        ctx->pc = 0x185FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FE0u;
        // 0x185fe4: 0xe7ac0080  swc1        $f12, 0x80($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x185FE8u;
        goto label_185fe8;
    }
    ctx->pc = 0x185FE0u;
    {
        const bool branch_taken_0x185fe0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x185FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FE0u;
        // 0x185fe4: 0xe7ac0080  swc1        $f12, 0x80($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fe0) {
            ctx->pc = 0x185FFCu;
            goto label_185ffc;
        }
    }
    ctx->pc = 0x185FE8u;
label_185fe8:
    // 0x185fe8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x185fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_185fec:
    // 0x185fec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_185ff0:
    // 0x185ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185ff4:
    // 0x185ff4: 0x1000000d  b           . + 4 + (0xD << 2)
label_185ff8:
    if (ctx->pc == 0x185FF8u) {
        ctx->pc = 0x185FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FF4u;
        // 0x185ff8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x185FFCu;
        goto label_185ffc;
    }
    ctx->pc = 0x185FF4u;
    {
        const bool branch_taken_0x185ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FF4u;
        // 0x185ff8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ff4) {
            ctx->pc = 0x18602Cu;
            goto label_18602c;
        }
    }
    ctx->pc = 0x185FFCu;
label_185ffc:
    // 0x185ffc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x185ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_186000:
    // 0x186000: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186004:
    // 0x186004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186008:
    // 0x186008: 0x0  nop
    ctx->pc = 0x186008u;
    // NOP
label_18600c:
    // 0x18600c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18600cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186010:
    // 0x186010: 0x0  nop
    ctx->pc = 0x186010u;
    // NOP
label_186014:
    // 0x186014: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_186018:
    if (ctx->pc == 0x186018u) {
        ctx->pc = 0x186018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186014u;
        // 0x186018: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18601Cu;
        goto label_18601c;
    }
    ctx->pc = 0x186014u;
    {
        const bool branch_taken_0x186014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x186018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186014u;
        // 0x186018: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186014) {
            ctx->pc = 0x18602Cu;
            goto label_18602c;
        }
    }
    ctx->pc = 0x18601Cu;
label_18601c:
    // 0x18601c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18601cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186020:
    // 0x186020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186024:
    // 0x186024: 0x10000001  b           . + 4 + (0x1 << 2)
label_186028:
    if (ctx->pc == 0x186028u) {
        ctx->pc = 0x186028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186024u;
        // 0x186028: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18602Cu;
        goto label_18602c;
    }
    ctx->pc = 0x186024u;
    {
        const bool branch_taken_0x186024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186024u;
        // 0x186028: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186024) {
            ctx->pc = 0x18602Cu;
            goto label_18602c;
        }
    }
    ctx->pc = 0x18602Cu;
label_18602c:
    // 0x18602c: 0xc06d448  jal         func_1B5120
label_186030:
    if (ctx->pc == 0x186030u) {
        ctx->pc = 0x186034u;
        goto label_186034;
    }
    ctx->pc = 0x18602Cu;
    SET_GPR_U32(ctx, 31, 0x186034u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x186034u;
label_186034:
    // 0x186034: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x186034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_186038:
    // 0x186038: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x186038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18603c:
    // 0x18603c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x18603cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_186040:
    // 0x186040: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_186044:
    // 0x186044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186048:
    // 0x186048: 0x0  nop
    ctx->pc = 0x186048u;
    // NOP
label_18604c:
    // 0x18604c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18604cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186050:
    // 0x186050: 0x0  nop
    ctx->pc = 0x186050u;
    // NOP
label_186054:
    // 0x186054: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_186058:
    if (ctx->pc == 0x186058u) {
        ctx->pc = 0x18605Cu;
        goto label_18605c;
    }
    ctx->pc = 0x186054u;
    {
        const bool branch_taken_0x186054 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186054) {
            ctx->pc = 0x186070u;
            goto label_186070;
        }
    }
    ctx->pc = 0x18605Cu;
label_18605c:
    // 0x18605c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x18605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_186060:
    // 0x186060: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_186064:
    // 0x186064: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x186064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_186068:
    // 0x186068: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_18606c:
    if (ctx->pc == 0x18606Cu) {
        ctx->pc = 0x186070u;
        goto label_186070;
    }
    ctx->pc = 0x186068u;
    {
        const bool branch_taken_0x186068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186068) {
            ctx->pc = 0x1860A8u;
            goto label_1860a8;
        }
    }
    ctx->pc = 0x186070u;
label_186070:
    // 0x186070: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x186070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186074:
    // 0x186074: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x186074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186078:
    // 0x186078: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18607c:
    // 0x18607c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18607cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_186080:
    // 0x186080: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_186084:
    // 0x186084: 0x0  nop
    ctx->pc = 0x186084u;
    // NOP
label_186088:
    // 0x186088: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x186088u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
label_18608c:
    // 0x18608c: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x18608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186090:
    // 0x186090: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x186090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186094:
    // 0x186094: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_186098:
    // 0x186098: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186098u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18609c:
    // 0x18609c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18609cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1860a0:
    // 0x1860a0: 0x10000218  b           . + 4 + (0x218 << 2)
label_1860a4:
    if (ctx->pc == 0x1860A4u) {
        ctx->pc = 0x1860A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860A0u;
        // 0x1860a4: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1860A8u;
        goto label_1860a8;
    }
    ctx->pc = 0x1860A0u;
    {
        const bool branch_taken_0x1860a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860A0u;
        // 0x1860a4: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860a0) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x1860A8u;
label_1860a8:
    // 0x1860a8: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1860a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_1860ac:
    // 0x1860ac: 0x10000215  b           . + 4 + (0x215 << 2)
label_1860b0:
    if (ctx->pc == 0x1860B0u) {
        ctx->pc = 0x1860B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860ACu;
        // 0x1860b0: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1860B4u;
        goto label_1860b4;
    }
    ctx->pc = 0x1860ACu;
    {
        const bool branch_taken_0x1860ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1860B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860ACu;
        // 0x1860b0: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860ac) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x1860B4u;
label_1860b4:
    // 0x1860b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1860b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1860b8:
    // 0x1860b8: 0xc06237c  jal         func_188DF0
label_1860bc:
    if (ctx->pc == 0x1860BCu) {
        ctx->pc = 0x1860C0u;
        goto label_1860c0;
    }
    ctx->pc = 0x1860B8u;
    SET_GPR_U32(ctx, 31, 0x1860C0u);
    ctx->pc = 0x188DF0u;
    { ctx->pc = 0x188df0; return; }
    ctx->pc = 0x1860C0u;
label_1860c0:
    // 0x1860c0: 0x14400210  bnez        $v0, . + 4 + (0x210 << 2)
label_1860c4:
    if (ctx->pc == 0x1860C4u) {
        ctx->pc = 0x1860C8u;
        goto label_1860c8;
    }
    ctx->pc = 0x1860C0u;
    {
        const bool branch_taken_0x1860c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1860c0) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x1860C8u;
label_1860c8:
    // 0x1860c8: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x1860c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_1860cc:
    // 0x1860cc: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x1860ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_1860d0:
    // 0x1860d0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1860d4:
    if (ctx->pc == 0x1860D4u) {
        ctx->pc = 0x1860D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860D0u;
        // 0x1860d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1860D8u;
        goto label_1860d8;
    }
    ctx->pc = 0x1860D0u;
    {
        const bool branch_taken_0x1860d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1860D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1860D0u;
        // 0x1860d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1860d0) {
            ctx->pc = 0x1860DCu;
            goto label_1860dc;
        }
    }
    ctx->pc = 0x1860D8u;
label_1860d8:
    // 0x1860d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1860d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1860dc:
    // 0x1860dc: 0x14600209  bnez        $v1, . + 4 + (0x209 << 2)
label_1860e0:
    if (ctx->pc == 0x1860E0u) {
        ctx->pc = 0x1860E4u;
        goto label_1860e4;
    }
    ctx->pc = 0x1860DCu;
    {
        const bool branch_taken_0x1860dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1860dc) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x1860E4u;
label_1860e4:
    // 0x1860e4: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x1860e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1860e8:
    // 0x1860e8: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x1860e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1860ec:
    // 0x1860ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1860ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1860f0:
    // 0x1860f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1860f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1860f4:
    // 0x1860f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1860f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1860f8:
    // 0x1860f8: 0x0  nop
    ctx->pc = 0x1860f8u;
    // NOP
label_1860fc:
    // 0x1860fc: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x1860fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
label_186100:
    // 0x186100: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x186100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186104:
    // 0x186104: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x186104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186108:
    // 0x186108: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186108u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18610c:
    // 0x18610c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18610cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_186110:
    // 0x186110: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_186114:
    // 0x186114: 0x100001fb  b           . + 4 + (0x1FB << 2)
label_186118:
    if (ctx->pc == 0x186118u) {
        ctx->pc = 0x186118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186114u;
        // 0x186118: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18611Cu;
        goto label_18611c;
    }
    ctx->pc = 0x186114u;
    {
        const bool branch_taken_0x186114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186114u;
        // 0x186118: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186114) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x18611Cu;
label_18611c:
    // 0x18611c: 0x106000b1  beqz        $v1, . + 4 + (0xB1 << 2)
label_186120:
    if (ctx->pc == 0x186120u) {
        ctx->pc = 0x186124u;
        goto label_186124;
    }
    ctx->pc = 0x18611Cu;
    {
        const bool branch_taken_0x18611c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18611c) {
            ctx->pc = 0x1863E4u;
            goto label_1863e4;
        }
    }
    ctx->pc = 0x186124u;
label_186124:
    // 0x186124: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_186128:
    if (ctx->pc == 0x186128u) {
        ctx->pc = 0x18612Cu;
        goto label_18612c;
    }
    ctx->pc = 0x186124u;
    {
        const bool branch_taken_0x186124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x186124) {
            ctx->pc = 0x186138u;
            goto label_186138;
        }
    }
    ctx->pc = 0x18612Cu;
label_18612c:
    // 0x18612c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18612cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186130:
    // 0x186130: 0xc061cd8  jal         func_187360
label_186134:
    if (ctx->pc == 0x186134u) {
        ctx->pc = 0x186134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186130u;
        // 0x186134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186138u;
        goto label_186138;
    }
    ctx->pc = 0x186130u;
    SET_GPR_U32(ctx, 31, 0x186138u);
    ctx->pc = 0x186134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186130u;
    // 0x186134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187360u;
    { ctx->pc = 0x187360; return; }
    ctx->pc = 0x186138u;
label_186138:
    // 0x186138: 0xc6220264  lwc1        $f2, 0x264($s1)
    ctx->pc = 0x186138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18613c:
    // 0x18613c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18613cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_186140:
    // 0x186140: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x186140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186144:
    // 0x186144: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186148:
    // 0x186148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18614c:
    // 0x18614c: 0x0  nop
    ctx->pc = 0x18614cu;
    // NOP
label_186150:
    // 0x186150: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x186150u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_186154:
    // 0x186154: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x186154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186158:
    // 0x186158: 0x0  nop
    ctx->pc = 0x186158u;
    // NOP
label_18615c:
    // 0x18615c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_186160:
    if (ctx->pc == 0x186160u) {
        ctx->pc = 0x186160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18615Cu;
        // 0x186160: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186164u;
        goto label_186164;
    }
    ctx->pc = 0x18615Cu;
    {
        const bool branch_taken_0x18615c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x186160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18615Cu;
        // 0x186160: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18615c) {
            ctx->pc = 0x186178u;
            goto label_186178;
        }
    }
    ctx->pc = 0x186164u;
label_186164:
    // 0x186164: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_186168:
    // 0x186168: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18616c:
    // 0x18616c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18616cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186170:
    // 0x186170: 0x1000000d  b           . + 4 + (0xD << 2)
label_186174:
    if (ctx->pc == 0x186174u) {
        ctx->pc = 0x186174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186170u;
        // 0x186174: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x186178u;
        goto label_186178;
    }
    ctx->pc = 0x186170u;
    {
        const bool branch_taken_0x186170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186170u;
        // 0x186174: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186170) {
            ctx->pc = 0x1861A8u;
            goto label_1861a8;
        }
    }
    ctx->pc = 0x186178u;
label_186178:
    // 0x186178: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18617c:
    // 0x18617c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18617cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186180:
    // 0x186180: 0x0  nop
    ctx->pc = 0x186180u;
    // NOP
label_186184:
    // 0x186184: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x186184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186188:
    // 0x186188: 0x0  nop
    ctx->pc = 0x186188u;
    // NOP
label_18618c:
    // 0x18618c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_186190:
    if (ctx->pc == 0x186190u) {
        ctx->pc = 0x186194u;
        goto label_186194;
    }
    ctx->pc = 0x18618Cu;
    {
        const bool branch_taken_0x18618c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18618c) {
            ctx->pc = 0x1861A8u;
            goto label_1861a8;
        }
    }
    ctx->pc = 0x186194u;
label_186194:
    // 0x186194: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_186198:
    // 0x186198: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18619c:
    // 0x18619c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18619cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1861a0:
    // 0x1861a0: 0x10000001  b           . + 4 + (0x1 << 2)
label_1861a4:
    if (ctx->pc == 0x1861A4u) {
        ctx->pc = 0x1861A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861A0u;
        // 0x1861a4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1861A8u;
        goto label_1861a8;
    }
    ctx->pc = 0x1861A0u;
    {
        const bool branch_taken_0x1861a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1861A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861A0u;
        // 0x1861a4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861a0) {
            ctx->pc = 0x1861A8u;
            goto label_1861a8;
        }
    }
    ctx->pc = 0x1861A8u;
label_1861a8:
    // 0x1861a8: 0xc06d448  jal         func_1B5120
label_1861ac:
    if (ctx->pc == 0x1861ACu) {
        ctx->pc = 0x1861B0u;
        goto label_1861b0;
    }
    ctx->pc = 0x1861A8u;
    SET_GPR_U32(ctx, 31, 0x1861B0u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1861B0u;
label_1861b0:
    // 0x1861b0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1861b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_1861b4:
    // 0x1861b4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1861b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1861b8:
    // 0x1861b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1861b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1861bc:
    // 0x1861bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1861bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1861c0:
    // 0x1861c0: 0x0  nop
    ctx->pc = 0x1861c0u;
    // NOP
label_1861c4:
    // 0x1861c4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1861c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1861c8:
    // 0x1861c8: 0x0  nop
    ctx->pc = 0x1861c8u;
    // NOP
label_1861cc:
    // 0x1861cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1861d0:
    if (ctx->pc == 0x1861D0u) {
        ctx->pc = 0x1861D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861CCu;
        // 0x1861d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1861D4u;
        goto label_1861d4;
    }
    ctx->pc = 0x1861CCu;
    {
        const bool branch_taken_0x1861cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1861D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861CCu;
        // 0x1861d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1861cc) {
            ctx->pc = 0x1861E4u;
            goto label_1861e4;
        }
    }
    ctx->pc = 0x1861D4u;
label_1861d4:
    // 0x1861d4: 0xc0623cc  jal         func_188F30
label_1861d8:
    if (ctx->pc == 0x1861D8u) {
        ctx->pc = 0x1861D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861D4u;
        // 0x1861d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1861DCu;
        goto label_1861dc;
    }
    ctx->pc = 0x1861D4u;
    SET_GPR_U32(ctx, 31, 0x1861DCu);
    ctx->pc = 0x1861D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1861D4u;
    // 0x1861d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188F30u;
    { ctx->pc = 0x188f30; return; }
    ctx->pc = 0x1861DCu;
label_1861dc:
    // 0x1861dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1861e0:
    if (ctx->pc == 0x1861E0u) {
        ctx->pc = 0x1861E4u;
        goto label_1861e4;
    }
    ctx->pc = 0x1861DCu;
    {
        const bool branch_taken_0x1861dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1861dc) {
            ctx->pc = 0x186200u;
            goto label_186200;
        }
    }
    ctx->pc = 0x1861E4u;
label_1861e4:
    // 0x1861e4: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x1861e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_1861e8:
    // 0x1861e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1861e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1861ec:
    // 0x1861ec: 0x34420024  ori         $v0, $v0, 0x24
    ctx->pc = 0x1861ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36);
label_1861f0:
    // 0x1861f0: 0xc06237c  jal         func_188DF0
label_1861f4:
    if (ctx->pc == 0x1861F4u) {
        ctx->pc = 0x1861F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1861F0u;
        // 0x1861f4: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1861F8u;
        goto label_1861f8;
    }
    ctx->pc = 0x1861F0u;
    SET_GPR_U32(ctx, 31, 0x1861F8u);
    ctx->pc = 0x1861F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1861F0u;
    // 0x1861f4: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188DF0u;
    { ctx->pc = 0x188df0; return; }
    ctx->pc = 0x1861F8u;
label_1861f8:
    // 0x1861f8: 0x100001c2  b           . + 4 + (0x1C2 << 2)
label_1861fc:
    if (ctx->pc == 0x1861FCu) {
        ctx->pc = 0x186200u;
        goto label_186200;
    }
    ctx->pc = 0x1861F8u;
    {
        const bool branch_taken_0x1861f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1861f8) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x186200u;
label_186200:
    // 0x186200: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x186200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_186204:
    // 0x186204: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x186204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_186208:
    // 0x186208: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x186208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18620c:
    // 0x18620c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18620cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_186210:
    // 0x186210: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x186210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_186214:
    // 0x186214: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186218:
    // 0x186218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18621c:
    // 0x18621c: 0x0  nop
    ctx->pc = 0x18621cu;
    // NOP
label_186220:
    // 0x186220: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x186220u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_186224:
    // 0x186224: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x186224u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186228:
    // 0x186228: 0x0  nop
    ctx->pc = 0x186228u;
    // NOP
label_18622c:
    // 0x18622c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_186230:
    if (ctx->pc == 0x186230u) {
        ctx->pc = 0x186230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18622Cu;
        // 0x186230: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186234u;
        goto label_186234;
    }
    ctx->pc = 0x18622Cu;
    {
        const bool branch_taken_0x18622c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x186230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18622Cu;
        // 0x186230: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18622c) {
            ctx->pc = 0x186248u;
            goto label_186248;
        }
    }
    ctx->pc = 0x186234u;
label_186234:
    // 0x186234: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_186238:
    // 0x186238: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18623c:
    // 0x18623c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18623cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186240:
    // 0x186240: 0x1000000d  b           . + 4 + (0xD << 2)
label_186244:
    if (ctx->pc == 0x186244u) {
        ctx->pc = 0x186244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186240u;
        // 0x186244: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x186248u;
        goto label_186248;
    }
    ctx->pc = 0x186240u;
    {
        const bool branch_taken_0x186240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186240u;
        // 0x186244: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186240) {
            ctx->pc = 0x186278u;
            goto label_186278;
        }
    }
    ctx->pc = 0x186248u;
label_186248:
    // 0x186248: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18624c:
    // 0x18624c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18624cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186250:
    // 0x186250: 0x0  nop
    ctx->pc = 0x186250u;
    // NOP
label_186254:
    // 0x186254: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x186254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186258:
    // 0x186258: 0x0  nop
    ctx->pc = 0x186258u;
    // NOP
label_18625c:
    // 0x18625c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_186260:
    if (ctx->pc == 0x186260u) {
        ctx->pc = 0x186264u;
        goto label_186264;
    }
    ctx->pc = 0x18625Cu;
    {
        const bool branch_taken_0x18625c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18625c) {
            ctx->pc = 0x186278u;
            goto label_186278;
        }
    }
    ctx->pc = 0x186264u;
label_186264:
    // 0x186264: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_186268:
    // 0x186268: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18626c:
    // 0x18626c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18626cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186270:
    // 0x186270: 0x10000001  b           . + 4 + (0x1 << 2)
label_186274:
    if (ctx->pc == 0x186274u) {
        ctx->pc = 0x186274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186270u;
        // 0x186274: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x186278u;
        goto label_186278;
    }
    ctx->pc = 0x186270u;
    {
        const bool branch_taken_0x186270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186270u;
        // 0x186274: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186270) {
            ctx->pc = 0x186278u;
            goto label_186278;
        }
    }
    ctx->pc = 0x186278u;
label_186278:
    // 0x186278: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x186278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18627c:
    // 0x18627c: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x18627cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_186280:
    // 0x186280: 0x4a000138  vcallms     0x20
    ctx->pc = 0x186280u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_186284:
    // 0x186284: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x186284u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_186288:
    // 0x186288: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x186288u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18628c:
    // 0x18628c: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x18628cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_186290:
    // 0x186290: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x186290u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_186294:
    // 0x186294: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x186294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_186298:
    // 0x186298: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x186298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_18629c:
    // 0x18629c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18629cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1862a0:
    // 0x1862a0: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1862a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_1862a4:
    // 0x1862a4: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x1862a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1862a8:
    // 0x1862a8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1862a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1862ac:
    // 0x1862ac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1862acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1862b0:
    // 0x1862b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1862b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1862b4:
    // 0x1862b4: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1862b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1862b8:
    // 0x1862b8: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x1862b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1862bc:
    // 0x1862bc: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x1862bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1862c0:
    // 0x1862c0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1862c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1862c4:
    // 0x1862c4: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x1862c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1862c8:
    // 0x1862c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1862c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1862cc:
    // 0x1862cc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1862ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1862d0:
    // 0x1862d0: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x1862d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1862d4:
    // 0x1862d4: 0xc0439e8  jal         func_10E7A0
label_1862d8:
    if (ctx->pc == 0x1862D8u) {
        ctx->pc = 0x1862D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862D4u;
        // 0x1862d8: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1862DCu;
        goto label_1862dc;
    }
    ctx->pc = 0x1862D4u;
    SET_GPR_U32(ctx, 31, 0x1862DCu);
    ctx->pc = 0x1862D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1862D4u;
    // 0x1862d8: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x1862D4u, 0x1862DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1862DCu;
label_1862dc:
    // 0x1862dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1862e0:
    if (ctx->pc == 0x1862E0u) {
        ctx->pc = 0x1862E4u;
        goto label_1862e4;
    }
    ctx->pc = 0x1862DCu;
    {
        const bool branch_taken_0x1862dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1862dc) {
            ctx->pc = 0x1862ECu;
            goto label_1862ec;
        }
    }
    ctx->pc = 0x1862E4u;
label_1862e4:
    // 0x1862e4: 0x10000020  b           . + 4 + (0x20 << 2)
label_1862e8:
    if (ctx->pc == 0x1862E8u) {
        ctx->pc = 0x1862E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862E4u;
        // 0x1862e8: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1862ECu;
        goto label_1862ec;
    }
    ctx->pc = 0x1862E4u;
    {
        const bool branch_taken_0x1862e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1862E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1862E4u;
        // 0x1862e8: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1862e4) {
            ctx->pc = 0x186368u;
            goto label_186368;
        }
    }
    ctx->pc = 0x1862ECu;
label_1862ec:
    // 0x1862ec: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x1862ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1862f0:
    // 0x1862f0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1862f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1862f4:
    // 0x1862f4: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1862f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1862f8:
    // 0x1862f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1862f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1862fc:
    // 0x1862fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1862fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186300:
    // 0x186300: 0x0  nop
    ctx->pc = 0x186300u;
    // NOP
label_186304:
    // 0x186304: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x186304u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_186308:
    // 0x186308: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x186308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18630c:
    // 0x18630c: 0x0  nop
    ctx->pc = 0x18630cu;
    // NOP
label_186310:
    // 0x186310: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_186314:
    if (ctx->pc == 0x186314u) {
        ctx->pc = 0x186314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186310u;
        // 0x186314: 0xe7ac0088  swc1        $f12, 0x88($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x186318u;
        goto label_186318;
    }
    ctx->pc = 0x186310u;
    {
        const bool branch_taken_0x186310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x186314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186310u;
        // 0x186314: 0xe7ac0088  swc1        $f12, 0x88($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x186310) {
            ctx->pc = 0x18632Cu;
            goto label_18632c;
        }
    }
    ctx->pc = 0x186318u;
label_186318:
    // 0x186318: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18631c:
    // 0x18631c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18631cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186320:
    // 0x186320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186324:
    // 0x186324: 0x1000000d  b           . + 4 + (0xD << 2)
label_186328:
    if (ctx->pc == 0x186328u) {
        ctx->pc = 0x186328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186324u;
        // 0x186328: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18632Cu;
        goto label_18632c;
    }
    ctx->pc = 0x186324u;
    {
        const bool branch_taken_0x186324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186324u;
        // 0x186328: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186324) {
            ctx->pc = 0x18635Cu;
            goto label_18635c;
        }
    }
    ctx->pc = 0x18632Cu;
label_18632c:
    // 0x18632c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_186330:
    // 0x186330: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186334:
    // 0x186334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186338:
    // 0x186338: 0x0  nop
    ctx->pc = 0x186338u;
    // NOP
label_18633c:
    // 0x18633c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18633cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186340:
    // 0x186340: 0x0  nop
    ctx->pc = 0x186340u;
    // NOP
label_186344:
    // 0x186344: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_186348:
    if (ctx->pc == 0x186348u) {
        ctx->pc = 0x186348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186344u;
        // 0x186348: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18634Cu;
        goto label_18634c;
    }
    ctx->pc = 0x186344u;
    {
        const bool branch_taken_0x186344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x186348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186344u;
        // 0x186348: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186344) {
            ctx->pc = 0x18635Cu;
            goto label_18635c;
        }
    }
    ctx->pc = 0x18634Cu;
label_18634c:
    // 0x18634c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18634cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186350:
    // 0x186350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186354:
    // 0x186354: 0x10000001  b           . + 4 + (0x1 << 2)
label_186358:
    if (ctx->pc == 0x186358u) {
        ctx->pc = 0x186358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186354u;
        // 0x186358: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18635Cu;
        goto label_18635c;
    }
    ctx->pc = 0x186354u;
    {
        const bool branch_taken_0x186354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186354u;
        // 0x186358: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186354) {
            ctx->pc = 0x18635Cu;
            goto label_18635c;
        }
    }
    ctx->pc = 0x18635Cu;
label_18635c:
    // 0x18635c: 0xc06d448  jal         func_1B5120
label_186360:
    if (ctx->pc == 0x186360u) {
        ctx->pc = 0x186364u;
        goto label_186364;
    }
    ctx->pc = 0x18635Cu;
    SET_GPR_U32(ctx, 31, 0x186364u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x186364u;
label_186364:
    // 0x186364: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x186364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_186368:
    // 0x186368: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x186368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18636c:
    // 0x18636c: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x18636cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_186370:
    // 0x186370: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_186374:
    // 0x186374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186378:
    // 0x186378: 0x0  nop
    ctx->pc = 0x186378u;
    // NOP
label_18637c:
    // 0x18637c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18637cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186380:
    // 0x186380: 0x0  nop
    ctx->pc = 0x186380u;
    // NOP
label_186384:
    // 0x186384: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_186388:
    if (ctx->pc == 0x186388u) {
        ctx->pc = 0x18638Cu;
        goto label_18638c;
    }
    ctx->pc = 0x186384u;
    {
        const bool branch_taken_0x186384 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186384) {
            ctx->pc = 0x1863A0u;
            goto label_1863a0;
        }
    }
    ctx->pc = 0x18638Cu;
label_18638c:
    // 0x18638c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x18638cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_186390:
    // 0x186390: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_186394:
    // 0x186394: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x186394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_186398:
    // 0x186398: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_18639c:
    if (ctx->pc == 0x18639Cu) {
        ctx->pc = 0x1863A0u;
        goto label_1863a0;
    }
    ctx->pc = 0x186398u;
    {
        const bool branch_taken_0x186398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186398) {
            ctx->pc = 0x1863D8u;
            goto label_1863d8;
        }
    }
    ctx->pc = 0x1863A0u;
label_1863a0:
    // 0x1863a0: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x1863a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1863a4:
    // 0x1863a4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1863a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1863a8:
    // 0x1863a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1863a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1863ac:
    // 0x1863ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1863acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1863b0:
    // 0x1863b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1863b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1863b4:
    // 0x1863b4: 0x0  nop
    ctx->pc = 0x1863b4u;
    // NOP
label_1863b8:
    // 0x1863b8: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x1863b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
label_1863bc:
    // 0x1863bc: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x1863bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1863c0:
    // 0x1863c0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1863c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1863c4:
    // 0x1863c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1863c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1863c8:
    // 0x1863c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1863c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1863cc:
    // 0x1863cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1863ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1863d0:
    // 0x1863d0: 0x1000014c  b           . + 4 + (0x14C << 2)
label_1863d4:
    if (ctx->pc == 0x1863D4u) {
        ctx->pc = 0x1863D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863D0u;
        // 0x1863d4: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1863D8u;
        goto label_1863d8;
    }
    ctx->pc = 0x1863D0u;
    {
        const bool branch_taken_0x1863d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863D0u;
        // 0x1863d4: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863d0) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x1863D8u;
label_1863d8:
    // 0x1863d8: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1863d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_1863dc:
    // 0x1863dc: 0x10000149  b           . + 4 + (0x149 << 2)
label_1863e0:
    if (ctx->pc == 0x1863E0u) {
        ctx->pc = 0x1863E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863DCu;
        // 0x1863e0: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1863E4u;
        goto label_1863e4;
    }
    ctx->pc = 0x1863DCu;
    {
        const bool branch_taken_0x1863dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1863DCu;
        // 0x1863e0: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863dc) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x1863E4u;
label_1863e4:
    // 0x1863e4: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x1863e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_1863e8:
    // 0x1863e8: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
label_1863ec:
    if (ctx->pc == 0x1863ECu) {
        ctx->pc = 0x1863F0u;
        goto label_1863f0;
    }
    ctx->pc = 0x1863E8u;
    {
        const bool branch_taken_0x1863e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1863e8) {
            ctx->pc = 0x186694u;
            { ctx->pc = 0x186694; return; }
        }
    }
    ctx->pc = 0x1863F0u;
label_1863f0:
    // 0x1863f0: 0xc6210260  lwc1        $f1, 0x260($s1)
    ctx->pc = 0x1863f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1863f4:
    // 0x1863f4: 0x3c03471c  lui         $v1, 0x471C
    ctx->pc = 0x1863f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18204 << 16));
label_1863f8:
    // 0x1863f8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1863f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1863fc:
    // 0x1863fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1863fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186400:
    // 0x186400: 0x0  nop
    ctx->pc = 0x186400u;
    // NOP
label_186404:
    // 0x186404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x186404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186408:
    // 0x186408: 0x0  nop
    ctx->pc = 0x186408u;
    // NOP
label_18640c:
    // 0x18640c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_186410:
    if (ctx->pc == 0x186410u) {
        ctx->pc = 0x186410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18640Cu;
        // 0x186410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186414u;
        goto label_186414;
    }
    ctx->pc = 0x18640Cu;
    {
        const bool branch_taken_0x18640c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x186410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18640Cu;
        // 0x186410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18640c) {
            ctx->pc = 0x18641Cu;
            goto label_18641c;
        }
    }
    ctx->pc = 0x186414u;
label_186414:
    // 0x186414: 0xc061cd8  jal         func_187360
label_186418:
    if (ctx->pc == 0x186418u) {
        ctx->pc = 0x186418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186414u;
        // 0x186418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18641Cu;
        goto label_18641c;
    }
    ctx->pc = 0x186414u;
    SET_GPR_U32(ctx, 31, 0x18641Cu);
    ctx->pc = 0x186418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186414u;
    // 0x186418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187360u;
    { ctx->pc = 0x187360; return; }
    ctx->pc = 0x18641Cu;
label_18641c:
    // 0x18641c: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x18641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_186420:
    // 0x186420: 0x30631c07  andi        $v1, $v1, 0x1C07
    ctx->pc = 0x186420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7175);
label_186424:
    // 0x186424: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_186428:
    if (ctx->pc == 0x186428u) {
        ctx->pc = 0x18642Cu;
        goto label_18642c;
    }
    ctx->pc = 0x186424u;
    {
        const bool branch_taken_0x186424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186424) {
            ctx->pc = 0x186494u;
            goto label_186494;
        }
    }
    ctx->pc = 0x18642Cu;
label_18642c:
    // 0x18642c: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x18642cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_186430:
    // 0x186430: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x186430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_186434:
    // 0x186434: 0xc08f0cc  jal         func_23C330
label_186438:
    if (ctx->pc == 0x186438u) {
        ctx->pc = 0x186438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186434u;
        // 0x186438: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18643Cu;
        goto label_18643c;
    }
    ctx->pc = 0x186434u;
    SET_GPR_U32(ctx, 31, 0x18643Cu);
    ctx->pc = 0x186438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186434u;
    // 0x186438: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x18643Cu;
label_18643c:
    // 0x18643c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18643cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_186440:
    // 0x186440: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x186440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_186444:
    // 0x186444: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186448:
    // 0x186448: 0x92250230  lbu         $a1, 0x230($s1)
    ctx->pc = 0x186448u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
label_18644c:
    // 0x18644c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18644cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_186450:
    // 0x186450: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x186450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
label_186454:
    // 0x186454: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x186454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_186458:
    // 0x186458: 0x24632b15  addiu       $v1, $v1, 0x2B15
    ctx->pc = 0x186458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11029));
label_18645c:
    // 0x18645c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x18645cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_186460:
    // 0x186460: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x186460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_186464:
    // 0x186464: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x186464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_186468:
    // 0x186468: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x186468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18646c:
    // 0x18646c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_186470:
    // 0x186470: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x186470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_186474:
    // 0x186474: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x186474u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186478:
    // 0x186478: 0x0  nop
    ctx->pc = 0x186478u;
    // NOP
label_18647c:
    // 0x18647c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18647cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_186480:
    // 0x186480: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186480u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_186484:
    // 0x186484: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x186484u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_186488:
    // 0x186488: 0x0  nop
    ctx->pc = 0x186488u;
    // NOP
label_18648c:
    // 0x18648c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_186490:
    // 0x186490: 0xa6230224  sh          $v1, 0x224($s1)
    ctx->pc = 0x186490u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
label_186494:
    // 0x186494: 0x9223023d  lbu         $v1, 0x23D($s1)
    ctx->pc = 0x186494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_186498:
    // 0x186498: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x186498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_18649c:
    // 0x18649c: 0x14600119  bnez        $v1, . + 4 + (0x119 << 2)
label_1864a0:
    if (ctx->pc == 0x1864A0u) {
        ctx->pc = 0x1864A4u;
        goto label_1864a4;
    }
    ctx->pc = 0x18649Cu;
    {
        const bool branch_taken_0x18649c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18649c) {
            ctx->pc = 0x186904u;
            { ctx->pc = 0x186904; return; }
        }
    }
    ctx->pc = 0x1864A4u;
label_1864a4:
    // 0x1864a4: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x1864a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1864a8:
    // 0x1864a8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1864a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_1864ac:
    // 0x1864ac: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1864acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1864b0:
    // 0x1864b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1864b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1864b4:
    // 0x1864b4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1864b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1864b8:
    // 0x1864b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1864b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1864bc:
    // 0x1864bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1864bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1864c0:
    // 0x1864c0: 0x0  nop
    ctx->pc = 0x1864c0u;
    // NOP
label_1864c4:
    // 0x1864c4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1864c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1864c8:
    // 0x1864c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1864c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1864cc:
    // 0x1864cc: 0x0  nop
    ctx->pc = 0x1864ccu;
    // NOP
label_1864d0:
    // 0x1864d0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1864d4:
    if (ctx->pc == 0x1864D4u) {
        ctx->pc = 0x1864D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864D0u;
        // 0x1864d4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1864D8u;
        goto label_1864d8;
    }
    ctx->pc = 0x1864D0u;
    {
        const bool branch_taken_0x1864d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1864D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864D0u;
        // 0x1864d4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864d0) {
            ctx->pc = 0x1864ECu;
            goto label_1864ec;
        }
    }
    ctx->pc = 0x1864D8u;
label_1864d8:
    // 0x1864d8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1864d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1864dc:
    // 0x1864dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1864dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1864e0:
    // 0x1864e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1864e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1864e4:
    // 0x1864e4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1864e8:
    if (ctx->pc == 0x1864E8u) {
        ctx->pc = 0x1864E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864E4u;
        // 0x1864e8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1864ECu;
        goto label_1864ec;
    }
    ctx->pc = 0x1864E4u;
    {
        const bool branch_taken_0x1864e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1864E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864E4u;
        // 0x1864e8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864e4) {
            ctx->pc = 0x18651Cu;
            goto label_18651c;
        }
    }
    ctx->pc = 0x1864ECu;
label_1864ec:
    // 0x1864ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1864ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1864f0:
    // 0x1864f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1864f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1864f4:
    // 0x1864f4: 0x0  nop
    ctx->pc = 0x1864f4u;
    // NOP
label_1864f8:
    // 0x1864f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1864f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1864fc:
    // 0x1864fc: 0x0  nop
    ctx->pc = 0x1864fcu;
    // NOP
label_186500:
    // 0x186500: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_186504:
    if (ctx->pc == 0x186504u) {
        ctx->pc = 0x186508u;
        goto label_186508;
    }
    ctx->pc = 0x186500u;
    {
        const bool branch_taken_0x186500 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186500) {
            ctx->pc = 0x18651Cu;
            goto label_18651c;
        }
    }
    ctx->pc = 0x186508u;
label_186508:
    // 0x186508: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18650c:
    // 0x18650c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18650cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186510:
    // 0x186510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186514:
    // 0x186514: 0x10000001  b           . + 4 + (0x1 << 2)
label_186518:
    if (ctx->pc == 0x186518u) {
        ctx->pc = 0x186518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186514u;
        // 0x186518: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18651Cu;
        goto label_18651c;
    }
    ctx->pc = 0x186514u;
    {
        const bool branch_taken_0x186514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186514u;
        // 0x186518: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186514) {
            ctx->pc = 0x18651Cu;
            goto label_18651c;
        }
    }
    ctx->pc = 0x18651Cu;
label_18651c:
    // 0x18651c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x18651cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_186520:
    // 0x186520: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x186520u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_186524:
    // 0x186524: 0x4a000138  vcallms     0x20
    ctx->pc = 0x186524u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_186528:
    // 0x186528: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x186528u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_18652c:
    // 0x18652c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18652cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186530:
    // 0x186530: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x186530u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_186534:
    // 0x186534: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x186534u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_186538:
    // 0x186538: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x186538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_18653c:
    // 0x18653c: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x18653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_186540:
    // 0x186540: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x186540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_186544:
    // 0x186544: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x186544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_186548:
    // 0x186548: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x186548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18654c:
    // 0x18654c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x18654cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_186550:
    // 0x186550: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x186550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_186554:
    // 0x186554: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x186554u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_186558:
    // 0x186558: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x186558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_18655c:
    // 0x18655c: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x18655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186560:
    // 0x186560: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x186560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_186564:
    // 0x186564: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x186564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_186568:
    // 0x186568: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x186568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18656c:
    // 0x18656c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18656cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_186570:
    // 0x186570: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x186570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_186574:
    // 0x186574: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x186574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186578:
    // 0x186578: 0xc0439e8  jal         func_10E7A0
label_18657c:
    if (ctx->pc == 0x18657Cu) {
        ctx->pc = 0x18657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186578u;
        // 0x18657c: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x186580u;
        goto label_186580;
    }
    ctx->pc = 0x186578u;
    SET_GPR_U32(ctx, 31, 0x186580u);
    ctx->pc = 0x18657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186578u;
    // 0x18657c: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x186578u, 0x186580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186580u;
label_186580:
    // 0x186580: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_186584:
    if (ctx->pc == 0x186584u) {
        ctx->pc = 0x186588u;
        goto label_186588;
    }
    ctx->pc = 0x186580u;
    {
        const bool branch_taken_0x186580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186580) {
            ctx->pc = 0x186590u;
            goto label_186590;
        }
    }
    ctx->pc = 0x186588u;
label_186588:
    // 0x186588: 0x10000020  b           . + 4 + (0x20 << 2)
label_18658c:
    if (ctx->pc == 0x18658Cu) {
        ctx->pc = 0x18658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186588u;
        // 0x18658c: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186590u;
        goto label_186590;
    }
    ctx->pc = 0x186588u;
    {
        const bool branch_taken_0x186588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186588u;
        // 0x18658c: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186588) {
            ctx->pc = 0x18660Cu;
            goto label_18660c;
        }
    }
    ctx->pc = 0x186590u;
label_186590:
    // 0x186590: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x186590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_186594:
    // 0x186594: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x186594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_186598:
    // 0x186598: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x186598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18659c:
    // 0x18659c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18659cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1865a0:
    // 0x1865a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1865a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1865a4:
    // 0x1865a4: 0x0  nop
    ctx->pc = 0x1865a4u;
    // NOP
label_1865a8:
    // 0x1865a8: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x1865a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1865ac:
    // 0x1865ac: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1865acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1865b0:
    // 0x1865b0: 0x0  nop
    ctx->pc = 0x1865b0u;
    // NOP
label_1865b4:
    // 0x1865b4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1865b8:
    if (ctx->pc == 0x1865B8u) {
        ctx->pc = 0x1865B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865B4u;
        // 0x1865b8: 0xe7ac008c  swc1        $f12, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1865BCu;
        goto label_1865bc;
    }
    ctx->pc = 0x1865B4u;
    {
        const bool branch_taken_0x1865b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1865B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865B4u;
        // 0x1865b8: 0xe7ac008c  swc1        $f12, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865b4) {
            ctx->pc = 0x1865D0u;
            goto label_1865d0;
        }
    }
    ctx->pc = 0x1865BCu;
label_1865bc:
    // 0x1865bc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1865bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1865c0:
    // 0x1865c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1865c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1865c4:
    // 0x1865c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1865c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1865c8:
    // 0x1865c8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1865cc:
    if (ctx->pc == 0x1865CCu) {
        ctx->pc = 0x1865CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865C8u;
        // 0x1865cc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1865D0u;
        goto label_1865d0;
    }
    ctx->pc = 0x1865C8u;
    {
        const bool branch_taken_0x1865c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1865CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865C8u;
        // 0x1865cc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865c8) {
            ctx->pc = 0x186600u;
            goto label_186600;
        }
    }
    ctx->pc = 0x1865D0u;
label_1865d0:
    // 0x1865d0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1865d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1865d4:
    // 0x1865d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1865d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1865d8:
    // 0x1865d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1865d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1865dc:
    // 0x1865dc: 0x0  nop
    ctx->pc = 0x1865dcu;
    // NOP
label_1865e0:
    // 0x1865e0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1865e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1865e4:
    // 0x1865e4: 0x0  nop
    ctx->pc = 0x1865e4u;
    // NOP
label_1865e8:
    // 0x1865e8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1865ec:
    if (ctx->pc == 0x1865ECu) {
        ctx->pc = 0x1865ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865E8u;
        // 0x1865ec: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1865F0u;
        goto label_1865f0;
    }
    ctx->pc = 0x1865E8u;
    {
        const bool branch_taken_0x1865e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1865ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865E8u;
        // 0x1865ec: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865e8) {
            ctx->pc = 0x186600u;
            goto label_186600;
        }
    }
    ctx->pc = 0x1865F0u;
label_1865f0:
    // 0x1865f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1865f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1865f4:
    // 0x1865f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1865f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1865f8:
    // 0x1865f8: 0x10000001  b           . + 4 + (0x1 << 2)
label_1865fc:
    if (ctx->pc == 0x1865FCu) {
        ctx->pc = 0x1865FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865F8u;
        // 0x1865fc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x186600u;
        goto label_186600;
    }
    ctx->pc = 0x1865F8u;
    {
        const bool branch_taken_0x1865f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1865FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865F8u;
        // 0x1865fc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865f8) {
            ctx->pc = 0x186600u;
            goto label_186600;
        }
    }
    ctx->pc = 0x186600u;
label_186600:
    // 0x186600: 0xc06d448  jal         func_1B5120
label_186604:
    if (ctx->pc == 0x186604u) {
        ctx->pc = 0x186608u;
        goto label_186608;
    }
    ctx->pc = 0x186600u;
    SET_GPR_U32(ctx, 31, 0x186608u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x186608u;
label_186608:
    // 0x186608: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x186608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_18660c:
    // 0x18660c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x18660cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186610:
    // 0x186610: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x186610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_186614:
    // 0x186614: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_186618:
    // 0x186618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18661c:
    // 0x18661c: 0x0  nop
    ctx->pc = 0x18661cu;
    // NOP
label_186620:
    // 0x186620: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x186620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186624:
    // 0x186624: 0x0  nop
    ctx->pc = 0x186624u;
    // NOP
label_186628:
    // 0x186628: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18662c:
    if (ctx->pc == 0x18662Cu) {
        ctx->pc = 0x186630u;
        goto label_186630;
    }
    ctx->pc = 0x186628u;
    {
        const bool branch_taken_0x186628 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186628) {
            ctx->pc = 0x186644u;
            { ctx->pc = 0x186644; return; }
        }
    }
    ctx->pc = 0x186630u;
label_186630:
    // 0x186630: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x186630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_186634:
    // 0x186634: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_186638:
    // 0x186638: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x186638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_18663c:
    // 0x18663c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x186640u;
    return;
}

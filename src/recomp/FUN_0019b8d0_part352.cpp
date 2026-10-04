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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part352(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x246f00u: goto label_246f00;
        case 0x246f04u: goto label_246f04;
        case 0x246f08u: goto label_246f08;
        case 0x246f0cu: goto label_246f0c;
        case 0x246f10u: goto label_246f10;
        case 0x246f14u: goto label_246f14;
        case 0x246f18u: goto label_246f18;
        case 0x246f1cu: goto label_246f1c;
        case 0x246f20u: goto label_246f20;
        case 0x246f24u: goto label_246f24;
        case 0x246f28u: goto label_246f28;
        case 0x246f2cu: goto label_246f2c;
        case 0x246f30u: goto label_246f30;
        case 0x246f34u: goto label_246f34;
        case 0x246f38u: goto label_246f38;
        case 0x246f3cu: goto label_246f3c;
        case 0x246f40u: goto label_246f40;
        case 0x246f44u: goto label_246f44;
        case 0x246f48u: goto label_246f48;
        case 0x246f4cu: goto label_246f4c;
        case 0x246f50u: goto label_246f50;
        case 0x246f54u: goto label_246f54;
        case 0x246f58u: goto label_246f58;
        case 0x246f5cu: goto label_246f5c;
        case 0x246f60u: goto label_246f60;
        case 0x246f64u: goto label_246f64;
        case 0x246f68u: goto label_246f68;
        case 0x246f6cu: goto label_246f6c;
        case 0x246f70u: goto label_246f70;
        case 0x246f74u: goto label_246f74;
        case 0x246f78u: goto label_246f78;
        case 0x246f7cu: goto label_246f7c;
        case 0x246f80u: goto label_246f80;
        case 0x246f84u: goto label_246f84;
        case 0x246f88u: goto label_246f88;
        case 0x246f8cu: goto label_246f8c;
        case 0x246f90u: goto label_246f90;
        case 0x246f94u: goto label_246f94;
        case 0x246f98u: goto label_246f98;
        case 0x246f9cu: goto label_246f9c;
        case 0x246fa0u: goto label_246fa0;
        case 0x246fa4u: goto label_246fa4;
        case 0x246fa8u: goto label_246fa8;
        case 0x246facu: goto label_246fac;
        case 0x246fb0u: goto label_246fb0;
        case 0x246fb4u: goto label_246fb4;
        case 0x246fb8u: goto label_246fb8;
        case 0x246fbcu: goto label_246fbc;
        case 0x246fc0u: goto label_246fc0;
        case 0x246fc4u: goto label_246fc4;
        case 0x246fc8u: goto label_246fc8;
        case 0x246fccu: goto label_246fcc;
        case 0x246fd0u: goto label_246fd0;
        case 0x246fd4u: goto label_246fd4;
        case 0x246fd8u: goto label_246fd8;
        case 0x246fdcu: goto label_246fdc;
        case 0x246fe0u: goto label_246fe0;
        case 0x246fe4u: goto label_246fe4;
        case 0x246fe8u: goto label_246fe8;
        case 0x246fecu: goto label_246fec;
        case 0x246ff0u: goto label_246ff0;
        case 0x246ff4u: goto label_246ff4;
        case 0x246ff8u: goto label_246ff8;
        case 0x246ffcu: goto label_246ffc;
        case 0x247000u: goto label_247000;
        case 0x247004u: goto label_247004;
        case 0x247008u: goto label_247008;
        case 0x24700cu: goto label_24700c;
        case 0x247010u: goto label_247010;
        case 0x247014u: goto label_247014;
        case 0x247018u: goto label_247018;
        case 0x24701cu: goto label_24701c;
        case 0x247020u: goto label_247020;
        case 0x247024u: goto label_247024;
        case 0x247028u: goto label_247028;
        case 0x24702cu: goto label_24702c;
        case 0x247030u: goto label_247030;
        case 0x247034u: goto label_247034;
        case 0x247038u: goto label_247038;
        case 0x24703cu: goto label_24703c;
        case 0x247040u: goto label_247040;
        case 0x247044u: goto label_247044;
        case 0x247048u: goto label_247048;
        case 0x24704cu: goto label_24704c;
        case 0x247050u: goto label_247050;
        case 0x247054u: goto label_247054;
        case 0x247058u: goto label_247058;
        case 0x24705cu: goto label_24705c;
        case 0x247060u: goto label_247060;
        case 0x247064u: goto label_247064;
        case 0x247068u: goto label_247068;
        case 0x24706cu: goto label_24706c;
        case 0x247070u: goto label_247070;
        case 0x247074u: goto label_247074;
        case 0x247078u: goto label_247078;
        case 0x24707cu: goto label_24707c;
        case 0x247080u: goto label_247080;
        case 0x247084u: goto label_247084;
        case 0x247088u: goto label_247088;
        case 0x24708cu: goto label_24708c;
        case 0x247090u: goto label_247090;
        case 0x247094u: goto label_247094;
        case 0x247098u: goto label_247098;
        case 0x24709cu: goto label_24709c;
        case 0x2470a0u: goto label_2470a0;
        case 0x2470a4u: goto label_2470a4;
        case 0x2470a8u: goto label_2470a8;
        case 0x2470acu: goto label_2470ac;
        case 0x2470b0u: goto label_2470b0;
        case 0x2470b4u: goto label_2470b4;
        case 0x2470b8u: goto label_2470b8;
        case 0x2470bcu: goto label_2470bc;
        case 0x2470c0u: goto label_2470c0;
        case 0x2470c4u: goto label_2470c4;
        case 0x2470c8u: goto label_2470c8;
        case 0x2470ccu: goto label_2470cc;
        case 0x2470d0u: goto label_2470d0;
        case 0x2470d4u: goto label_2470d4;
        case 0x2470d8u: goto label_2470d8;
        case 0x2470dcu: goto label_2470dc;
        case 0x2470e0u: goto label_2470e0;
        case 0x2470e4u: goto label_2470e4;
        case 0x2470e8u: goto label_2470e8;
        case 0x2470ecu: goto label_2470ec;
        case 0x2470f0u: goto label_2470f0;
        case 0x2470f4u: goto label_2470f4;
        case 0x2470f8u: goto label_2470f8;
        case 0x2470fcu: goto label_2470fc;
        case 0x247100u: goto label_247100;
        case 0x247104u: goto label_247104;
        case 0x247108u: goto label_247108;
        case 0x24710cu: goto label_24710c;
        case 0x247110u: goto label_247110;
        case 0x247114u: goto label_247114;
        case 0x247118u: goto label_247118;
        case 0x24711cu: goto label_24711c;
        case 0x247120u: goto label_247120;
        case 0x247124u: goto label_247124;
        case 0x247128u: goto label_247128;
        case 0x24712cu: goto label_24712c;
        case 0x247130u: goto label_247130;
        case 0x247134u: goto label_247134;
        case 0x247138u: goto label_247138;
        case 0x24713cu: goto label_24713c;
        case 0x247140u: goto label_247140;
        case 0x247144u: goto label_247144;
        case 0x247148u: goto label_247148;
        case 0x24714cu: goto label_24714c;
        case 0x247150u: goto label_247150;
        case 0x247154u: goto label_247154;
        case 0x247158u: goto label_247158;
        case 0x24715cu: goto label_24715c;
        case 0x247160u: goto label_247160;
        case 0x247164u: goto label_247164;
        case 0x247168u: goto label_247168;
        case 0x24716cu: goto label_24716c;
        case 0x247170u: goto label_247170;
        case 0x247174u: goto label_247174;
        case 0x247178u: goto label_247178;
        case 0x24717cu: goto label_24717c;
        case 0x247180u: goto label_247180;
        case 0x247184u: goto label_247184;
        case 0x247188u: goto label_247188;
        case 0x24718cu: goto label_24718c;
        case 0x247190u: goto label_247190;
        case 0x247194u: goto label_247194;
        case 0x247198u: goto label_247198;
        case 0x24719cu: goto label_24719c;
        case 0x2471a0u: goto label_2471a0;
        case 0x2471a4u: goto label_2471a4;
        case 0x2471a8u: goto label_2471a8;
        case 0x2471acu: goto label_2471ac;
        case 0x2471b0u: goto label_2471b0;
        case 0x2471b4u: goto label_2471b4;
        case 0x2471b8u: goto label_2471b8;
        case 0x2471bcu: goto label_2471bc;
        case 0x2471c0u: goto label_2471c0;
        case 0x2471c4u: goto label_2471c4;
        case 0x2471c8u: goto label_2471c8;
        case 0x2471ccu: goto label_2471cc;
        case 0x2471d0u: goto label_2471d0;
        case 0x2471d4u: goto label_2471d4;
        case 0x2471d8u: goto label_2471d8;
        case 0x2471dcu: goto label_2471dc;
        case 0x2471e0u: goto label_2471e0;
        case 0x2471e4u: goto label_2471e4;
        case 0x2471e8u: goto label_2471e8;
        case 0x2471ecu: goto label_2471ec;
        case 0x2471f0u: goto label_2471f0;
        case 0x2471f4u: goto label_2471f4;
        case 0x2471f8u: goto label_2471f8;
        case 0x2471fcu: goto label_2471fc;
        case 0x247200u: goto label_247200;
        case 0x247204u: goto label_247204;
        case 0x247208u: goto label_247208;
        case 0x24720cu: goto label_24720c;
        case 0x247210u: goto label_247210;
        case 0x247214u: goto label_247214;
        case 0x247218u: goto label_247218;
        case 0x24721cu: goto label_24721c;
        case 0x247220u: goto label_247220;
        case 0x247224u: goto label_247224;
        case 0x247228u: goto label_247228;
        case 0x24722cu: goto label_24722c;
        case 0x247230u: goto label_247230;
        case 0x247234u: goto label_247234;
        case 0x247238u: goto label_247238;
        case 0x24723cu: goto label_24723c;
        case 0x247240u: goto label_247240;
        case 0x247244u: goto label_247244;
        case 0x247248u: goto label_247248;
        case 0x24724cu: goto label_24724c;
        case 0x247250u: goto label_247250;
        case 0x247254u: goto label_247254;
        case 0x247258u: goto label_247258;
        case 0x24725cu: goto label_24725c;
        case 0x247260u: goto label_247260;
        case 0x247264u: goto label_247264;
        case 0x247268u: goto label_247268;
        case 0x24726cu: goto label_24726c;
        case 0x247270u: goto label_247270;
        case 0x247274u: goto label_247274;
        case 0x247278u: goto label_247278;
        case 0x24727cu: goto label_24727c;
        case 0x247280u: goto label_247280;
        case 0x247284u: goto label_247284;
        case 0x247288u: goto label_247288;
        case 0x24728cu: goto label_24728c;
        case 0x247290u: goto label_247290;
        case 0x247294u: goto label_247294;
        case 0x247298u: goto label_247298;
        case 0x24729cu: goto label_24729c;
        case 0x2472a0u: goto label_2472a0;
        case 0x2472a4u: goto label_2472a4;
        case 0x2472a8u: goto label_2472a8;
        case 0x2472acu: goto label_2472ac;
        case 0x2472b0u: goto label_2472b0;
        case 0x2472b4u: goto label_2472b4;
        case 0x2472b8u: goto label_2472b8;
        case 0x2472bcu: goto label_2472bc;
        case 0x2472c0u: goto label_2472c0;
        case 0x2472c4u: goto label_2472c4;
        case 0x2472c8u: goto label_2472c8;
        case 0x2472ccu: goto label_2472cc;
        case 0x2472d0u: goto label_2472d0;
        case 0x2472d4u: goto label_2472d4;
        case 0x2472d8u: goto label_2472d8;
        case 0x2472dcu: goto label_2472dc;
        case 0x2472e0u: goto label_2472e0;
        case 0x2472e4u: goto label_2472e4;
        case 0x2472e8u: goto label_2472e8;
        case 0x2472ecu: goto label_2472ec;
        case 0x2472f0u: goto label_2472f0;
        case 0x2472f4u: goto label_2472f4;
        case 0x2472f8u: goto label_2472f8;
        case 0x2472fcu: goto label_2472fc;
        case 0x247300u: goto label_247300;
        case 0x247304u: goto label_247304;
        case 0x247308u: goto label_247308;
        case 0x24730cu: goto label_24730c;
        case 0x247310u: goto label_247310;
        case 0x247314u: goto label_247314;
        case 0x247318u: goto label_247318;
        case 0x24731cu: goto label_24731c;
        case 0x247320u: goto label_247320;
        case 0x247324u: goto label_247324;
        case 0x247328u: goto label_247328;
        case 0x24732cu: goto label_24732c;
        case 0x247330u: goto label_247330;
        case 0x247334u: goto label_247334;
        case 0x247338u: goto label_247338;
        case 0x24733cu: goto label_24733c;
        case 0x247340u: goto label_247340;
        case 0x247344u: goto label_247344;
        case 0x247348u: goto label_247348;
        case 0x24734cu: goto label_24734c;
        case 0x247350u: goto label_247350;
        case 0x247354u: goto label_247354;
        case 0x247358u: goto label_247358;
        case 0x24735cu: goto label_24735c;
        case 0x247360u: goto label_247360;
        case 0x247364u: goto label_247364;
        case 0x247368u: goto label_247368;
        case 0x24736cu: goto label_24736c;
        case 0x247370u: goto label_247370;
        case 0x247374u: goto label_247374;
        case 0x247378u: goto label_247378;
        case 0x24737cu: goto label_24737c;
        case 0x247380u: goto label_247380;
        case 0x247384u: goto label_247384;
        case 0x247388u: goto label_247388;
        case 0x24738cu: goto label_24738c;
        case 0x247390u: goto label_247390;
        case 0x247394u: goto label_247394;
        case 0x247398u: goto label_247398;
        case 0x24739cu: goto label_24739c;
        case 0x2473a0u: goto label_2473a0;
        case 0x2473a4u: goto label_2473a4;
        case 0x2473a8u: goto label_2473a8;
        case 0x2473acu: goto label_2473ac;
        case 0x2473b0u: goto label_2473b0;
        case 0x2473b4u: goto label_2473b4;
        case 0x2473b8u: goto label_2473b8;
        case 0x2473bcu: goto label_2473bc;
        case 0x2473c0u: goto label_2473c0;
        case 0x2473c4u: goto label_2473c4;
        case 0x2473c8u: goto label_2473c8;
        case 0x2473ccu: goto label_2473cc;
        case 0x2473d0u: goto label_2473d0;
        case 0x2473d4u: goto label_2473d4;
        case 0x2473d8u: goto label_2473d8;
        case 0x2473dcu: goto label_2473dc;
        case 0x2473e0u: goto label_2473e0;
        case 0x2473e4u: goto label_2473e4;
        case 0x2473e8u: goto label_2473e8;
        case 0x2473ecu: goto label_2473ec;
        case 0x2473f0u: goto label_2473f0;
        case 0x2473f4u: goto label_2473f4;
        case 0x2473f8u: goto label_2473f8;
        case 0x2473fcu: goto label_2473fc;
        case 0x247400u: goto label_247400;
        case 0x247404u: goto label_247404;
        case 0x247408u: goto label_247408;
        case 0x24740cu: goto label_24740c;
        case 0x247410u: goto label_247410;
        case 0x247414u: goto label_247414;
        case 0x247418u: goto label_247418;
        case 0x24741cu: goto label_24741c;
        case 0x247420u: goto label_247420;
        case 0x247424u: goto label_247424;
        case 0x247428u: goto label_247428;
        case 0x24742cu: goto label_24742c;
        case 0x247430u: goto label_247430;
        case 0x247434u: goto label_247434;
        case 0x247438u: goto label_247438;
        case 0x24743cu: goto label_24743c;
        case 0x247440u: goto label_247440;
        case 0x247444u: goto label_247444;
        case 0x247448u: goto label_247448;
        case 0x24744cu: goto label_24744c;
        case 0x247450u: goto label_247450;
        case 0x247454u: goto label_247454;
        case 0x247458u: goto label_247458;
        case 0x24745cu: goto label_24745c;
        case 0x247460u: goto label_247460;
        case 0x247464u: goto label_247464;
        case 0x247468u: goto label_247468;
        case 0x24746cu: goto label_24746c;
        case 0x247470u: goto label_247470;
        case 0x247474u: goto label_247474;
        case 0x247478u: goto label_247478;
        case 0x24747cu: goto label_24747c;
        case 0x247480u: goto label_247480;
        case 0x247484u: goto label_247484;
        case 0x247488u: goto label_247488;
        case 0x24748cu: goto label_24748c;
        case 0x247490u: goto label_247490;
        case 0x247494u: goto label_247494;
        case 0x247498u: goto label_247498;
        case 0x24749cu: goto label_24749c;
        case 0x2474a0u: goto label_2474a0;
        case 0x2474a4u: goto label_2474a4;
        case 0x2474a8u: goto label_2474a8;
        case 0x2474acu: goto label_2474ac;
        case 0x2474b0u: goto label_2474b0;
        case 0x2474b4u: goto label_2474b4;
        case 0x2474b8u: goto label_2474b8;
        case 0x2474bcu: goto label_2474bc;
        case 0x2474c0u: goto label_2474c0;
        case 0x2474c4u: goto label_2474c4;
        case 0x2474c8u: goto label_2474c8;
        case 0x2474ccu: goto label_2474cc;
        case 0x2474d0u: goto label_2474d0;
        case 0x2474d4u: goto label_2474d4;
        case 0x2474d8u: goto label_2474d8;
        case 0x2474dcu: goto label_2474dc;
        case 0x2474e0u: goto label_2474e0;
        case 0x2474e4u: goto label_2474e4;
        case 0x2474e8u: goto label_2474e8;
        case 0x2474ecu: goto label_2474ec;
        case 0x2474f0u: goto label_2474f0;
        case 0x2474f4u: goto label_2474f4;
        case 0x2474f8u: goto label_2474f8;
        case 0x2474fcu: goto label_2474fc;
        case 0x247500u: goto label_247500;
        case 0x247504u: goto label_247504;
        case 0x247508u: goto label_247508;
        case 0x24750cu: goto label_24750c;
        case 0x247510u: goto label_247510;
        case 0x247514u: goto label_247514;
        case 0x247518u: goto label_247518;
        case 0x24751cu: goto label_24751c;
        case 0x247520u: goto label_247520;
        case 0x247524u: goto label_247524;
        case 0x247528u: goto label_247528;
        case 0x24752cu: goto label_24752c;
        case 0x247530u: goto label_247530;
        case 0x247534u: goto label_247534;
        case 0x247538u: goto label_247538;
        case 0x24753cu: goto label_24753c;
        case 0x247540u: goto label_247540;
        case 0x247544u: goto label_247544;
        case 0x247548u: goto label_247548;
        case 0x24754cu: goto label_24754c;
        case 0x247550u: goto label_247550;
        case 0x247554u: goto label_247554;
        case 0x247558u: goto label_247558;
        case 0x24755cu: goto label_24755c;
        case 0x247560u: goto label_247560;
        case 0x247564u: goto label_247564;
        case 0x247568u: goto label_247568;
        case 0x24756cu: goto label_24756c;
        case 0x247570u: goto label_247570;
        case 0x247574u: goto label_247574;
        case 0x247578u: goto label_247578;
        case 0x24757cu: goto label_24757c;
        case 0x247580u: goto label_247580;
        case 0x247584u: goto label_247584;
        case 0x247588u: goto label_247588;
        case 0x24758cu: goto label_24758c;
        case 0x247590u: goto label_247590;
        case 0x247594u: goto label_247594;
        case 0x247598u: goto label_247598;
        case 0x24759cu: goto label_24759c;
        case 0x2475a0u: goto label_2475a0;
        case 0x2475a4u: goto label_2475a4;
        case 0x2475a8u: goto label_2475a8;
        case 0x2475acu: goto label_2475ac;
        case 0x2475b0u: goto label_2475b0;
        case 0x2475b4u: goto label_2475b4;
        case 0x2475b8u: goto label_2475b8;
        case 0x2475bcu: goto label_2475bc;
        case 0x2475c0u: goto label_2475c0;
        case 0x2475c4u: goto label_2475c4;
        case 0x2475c8u: goto label_2475c8;
        case 0x2475ccu: goto label_2475cc;
        case 0x2475d0u: goto label_2475d0;
        case 0x2475d4u: goto label_2475d4;
        case 0x2475d8u: goto label_2475d8;
        case 0x2475dcu: goto label_2475dc;
        case 0x2475e0u: goto label_2475e0;
        case 0x2475e4u: goto label_2475e4;
        case 0x2475e8u: goto label_2475e8;
        case 0x2475ecu: goto label_2475ec;
        case 0x2475f0u: goto label_2475f0;
        case 0x2475f4u: goto label_2475f4;
        case 0x2475f8u: goto label_2475f8;
        case 0x2475fcu: goto label_2475fc;
        case 0x247600u: goto label_247600;
        case 0x247604u: goto label_247604;
        case 0x247608u: goto label_247608;
        case 0x24760cu: goto label_24760c;
        case 0x247610u: goto label_247610;
        case 0x247614u: goto label_247614;
        case 0x247618u: goto label_247618;
        case 0x24761cu: goto label_24761c;
        case 0x247620u: goto label_247620;
        case 0x247624u: goto label_247624;
        case 0x247628u: goto label_247628;
        case 0x24762cu: goto label_24762c;
        case 0x247630u: goto label_247630;
        case 0x247634u: goto label_247634;
        case 0x247638u: goto label_247638;
        case 0x24763cu: goto label_24763c;
        case 0x247640u: goto label_247640;
        case 0x247644u: goto label_247644;
        case 0x247648u: goto label_247648;
        case 0x24764cu: goto label_24764c;
        case 0x247650u: goto label_247650;
        case 0x247654u: goto label_247654;
        case 0x247658u: goto label_247658;
        case 0x24765cu: goto label_24765c;
        case 0x247660u: goto label_247660;
        case 0x247664u: goto label_247664;
        case 0x247668u: goto label_247668;
        case 0x24766cu: goto label_24766c;
        case 0x247670u: goto label_247670;
        case 0x247674u: goto label_247674;
        case 0x247678u: goto label_247678;
        case 0x24767cu: goto label_24767c;
        case 0x247680u: goto label_247680;
        case 0x247684u: goto label_247684;
        case 0x247688u: goto label_247688;
        case 0x24768cu: goto label_24768c;
        case 0x247690u: goto label_247690;
        case 0x247694u: goto label_247694;
        case 0x247698u: goto label_247698;
        case 0x24769cu: goto label_24769c;
        case 0x2476a0u: goto label_2476a0;
        case 0x2476a4u: goto label_2476a4;
        case 0x2476a8u: goto label_2476a8;
        case 0x2476acu: goto label_2476ac;
        case 0x2476b0u: goto label_2476b0;
        case 0x2476b4u: goto label_2476b4;
        case 0x2476b8u: goto label_2476b8;
        case 0x2476bcu: goto label_2476bc;
        case 0x2476c0u: goto label_2476c0;
        case 0x2476c4u: goto label_2476c4;
        case 0x2476c8u: goto label_2476c8;
        case 0x2476ccu: goto label_2476cc;
        default: return;
    }

label_246f00:
    // 0x246f00: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x246f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_246f04:
    // 0x246f04: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246f04u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246f08:
    // 0x246f08: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246f08u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246f0c:
    // 0x246f0c: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x246f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246f10:
    // 0x246f10: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246f14:
    // 0x246f14: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246f14u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246f18:
    // 0x246f18: 0x18a00045  blez        $a1, . + 4 + (0x45 << 2)
label_246f1c:
    if (ctx->pc == 0x246F1Cu) {
        ctx->pc = 0x246F20u;
        goto label_246f20;
    }
    ctx->pc = 0x246F18u;
    {
        const bool branch_taken_0x246f18 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x246f18) {
            ctx->pc = 0x247030u;
            goto label_247030;
        }
    }
    ctx->pc = 0x246F20u;
label_246f20:
    // 0x246f20: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x246f20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_246f24:
    // 0x246f24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x246f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_246f28:
    // 0x246f28: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x246f28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_246f2c:
    // 0x246f2c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246f30:
    if (ctx->pc == 0x246F30u) {
        ctx->pc = 0x246F34u;
        goto label_246f34;
    }
    ctx->pc = 0x246F2Cu;
    {
        const bool branch_taken_0x246f2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246f2c) {
            ctx->pc = 0x246F3Cu;
            goto label_246f3c;
        }
    }
    ctx->pc = 0x246F34u;
label_246f34:
    // 0x246f34: 0x10000003  b           . + 4 + (0x3 << 2)
label_246f38:
    if (ctx->pc == 0x246F38u) {
        ctx->pc = 0x246F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F34u;
        // 0x246f38: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F3Cu;
        goto label_246f3c;
    }
    ctx->pc = 0x246F34u;
    {
        const bool branch_taken_0x246f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F34u;
        // 0x246f38: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f34) {
            ctx->pc = 0x246F44u;
            goto label_246f44;
        }
    }
    ctx->pc = 0x246F3Cu;
label_246f3c:
    // 0x246f3c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x246f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_246f40:
    // 0x246f40: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x246f40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_246f44:
    // 0x246f44: 0x1000003a  b           . + 4 + (0x3A << 2)
label_246f48:
    if (ctx->pc == 0x246F48u) {
        ctx->pc = 0x246F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F44u;
        // 0x246f48: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F4Cu;
        goto label_246f4c;
    }
    ctx->pc = 0x246F44u;
    {
        const bool branch_taken_0x246f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F44u;
        // 0x246f48: 0xa0600006  sb          $zero, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f44) {
            ctx->pc = 0x247030u;
            goto label_247030;
        }
    }
    ctx->pc = 0x246F4Cu;
label_246f4c:
    // 0x246f4c: 0x14800038  bnez        $a0, . + 4 + (0x38 << 2)
label_246f50:
    if (ctx->pc == 0x246F50u) {
        ctx->pc = 0x246F54u;
        goto label_246f54;
    }
    ctx->pc = 0x246F4Cu;
    {
        const bool branch_taken_0x246f4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x246f4c) {
            ctx->pc = 0x247030u;
            goto label_247030;
        }
    }
    ctx->pc = 0x246F54u;
label_246f54:
    // 0x246f54: 0x34e40020  ori         $a0, $a3, 0x20
    ctx->pc = 0x246f54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32);
label_246f58:
    // 0x246f58: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x246f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_246f5c:
    // 0x246f5c: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x246f5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246f60:
    // 0x246f60: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x246f60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_246f64:
    // 0x246f64: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246f68:
    if (ctx->pc == 0x246F68u) {
        ctx->pc = 0x246F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F64u;
        // 0x246f68: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F6Cu;
        goto label_246f6c;
    }
    ctx->pc = 0x246F64u;
    {
        const bool branch_taken_0x246f64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F64u;
        // 0x246f68: 0x24a4fffe  addiu       $a0, $a1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f64) {
            ctx->pc = 0x246F74u;
            goto label_246f74;
        }
    }
    ctx->pc = 0x246F6Cu;
label_246f6c:
    // 0x246f6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_246f70:
    if (ctx->pc == 0x246F70u) {
        ctx->pc = 0x246F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F6Cu;
        // 0x246f70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F74u;
        goto label_246f74;
    }
    ctx->pc = 0x246F6Cu;
    {
        const bool branch_taken_0x246f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F6Cu;
        // 0x246f70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f6c) {
            ctx->pc = 0x246F80u;
            goto label_246f80;
        }
    }
    ctx->pc = 0x246F74u;
label_246f74:
    // 0x246f74: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246f74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246f78:
    // 0x246f78: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246f7c:
    // 0x246f7c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246f7cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246f80:
    // 0x246f80: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x246f80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_246f84:
    // 0x246f84: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x246f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_246f88:
    // 0x246f88: 0x9024eaf5  lbu         $a0, -0x150B($at)
    ctx->pc = 0x246f88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961909)));
label_246f8c:
    // 0x246f8c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x246f8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_246f90:
    // 0x246f90: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246f90u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246f94:
    // 0x246f94: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246f98:
    // 0x246f98: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246f98u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246f9c:
    // 0x246f9c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x246f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246fa0:
    // 0x246fa0: 0x2881001a  slti        $at, $a0, 0x1A
    ctx->pc = 0x246fa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)26) ? 1 : 0);
label_246fa4:
    // 0x246fa4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246fa8:
    if (ctx->pc == 0x246FA8u) {
        ctx->pc = 0x246FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FA4u;
        // 0x246fa8: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FACu;
        goto label_246fac;
    }
    ctx->pc = 0x246FA4u;
    {
        const bool branch_taken_0x246fa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FA4u;
        // 0x246fa8: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fa4) {
            ctx->pc = 0x246FB4u;
            goto label_246fb4;
        }
    }
    ctx->pc = 0x246FACu;
label_246fac:
    // 0x246fac: 0x10000003  b           . + 4 + (0x3 << 2)
label_246fb0:
    if (ctx->pc == 0x246FB0u) {
        ctx->pc = 0x246FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FACu;
        // 0x246fb0: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FB4u;
        goto label_246fb4;
    }
    ctx->pc = 0x246FACu;
    {
        const bool branch_taken_0x246fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FACu;
        // 0x246fb0: 0xa464000c  sh          $a0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fac) {
            ctx->pc = 0x246FBCu;
            goto label_246fbc;
        }
    }
    ctx->pc = 0x246FB4u;
label_246fb4:
    // 0x246fb4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x246fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_246fb8:
    // 0x246fb8: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x246fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_246fbc:
    // 0x246fbc: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x246fbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_246fc0:
    // 0x246fc0: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x246fc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_246fc4:
    // 0x246fc4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_246fc8:
    if (ctx->pc == 0x246FC8u) {
        ctx->pc = 0x246FCCu;
        goto label_246fcc;
    }
    ctx->pc = 0x246FC4u;
    {
        const bool branch_taken_0x246fc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246fc4) {
            ctx->pc = 0x246FD4u;
            goto label_246fd4;
        }
    }
    ctx->pc = 0x246FCCu;
label_246fcc:
    // 0x246fcc: 0x10000005  b           . + 4 + (0x5 << 2)
label_246fd0:
    if (ctx->pc == 0x246FD0u) {
        ctx->pc = 0x246FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FCCu;
        // 0x246fd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246FD4u;
        goto label_246fd4;
    }
    ctx->pc = 0x246FCCu;
    {
        const bool branch_taken_0x246fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246FCCu;
        // 0x246fd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246fcc) {
            ctx->pc = 0x246FE4u;
            goto label_246fe4;
        }
    }
    ctx->pc = 0x246FD4u;
label_246fd4:
    // 0x246fd4: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x246fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_246fd8:
    // 0x246fd8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x246fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246fdc:
    // 0x246fdc: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x246fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_246fe0:
    // 0x246fe0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246fe0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246fe4:
    // 0x246fe4: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246fe8:
    // 0x246fe8: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x246fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_246fec:
    // 0x246fec: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246fecu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_246ff0:
    // 0x246ff0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x246ff0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_246ff4:
    // 0x246ff4: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x246ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_246ff8:
    // 0x246ff8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x246ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
label_246ffc:
    // 0x246ffc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x246ffcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_247000:
    // 0x247000: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
label_247004:
    if (ctx->pc == 0x247004u) {
        ctx->pc = 0x247008u;
        goto label_247008;
    }
    ctx->pc = 0x247000u;
    {
        const bool branch_taken_0x247000 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x247000) {
            ctx->pc = 0x247030u;
            goto label_247030;
        }
    }
    ctx->pc = 0x247008u;
label_247008:
    // 0x247008: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x247008u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_24700c:
    // 0x24700c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24700cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_247010:
    // 0x247010: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x247010u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_247014:
    // 0x247014: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_247018:
    if (ctx->pc == 0x247018u) {
        ctx->pc = 0x24701Cu;
        goto label_24701c;
    }
    ctx->pc = 0x247014u;
    {
        const bool branch_taken_0x247014 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x247014) {
            ctx->pc = 0x247024u;
            goto label_247024;
        }
    }
    ctx->pc = 0x24701Cu;
label_24701c:
    // 0x24701c: 0x10000003  b           . + 4 + (0x3 << 2)
label_247020:
    if (ctx->pc == 0x247020u) {
        ctx->pc = 0x247020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24701Cu;
        // 0x247020: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247024u;
        goto label_247024;
    }
    ctx->pc = 0x24701Cu;
    {
        const bool branch_taken_0x24701c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24701Cu;
        // 0x247020: 0xa464000e  sh          $a0, 0xE($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24701c) {
            ctx->pc = 0x24702Cu;
            goto label_24702c;
        }
    }
    ctx->pc = 0x247024u;
label_247024:
    // 0x247024: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x247024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_247028:
    // 0x247028: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x247028u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
label_24702c:
    // 0x24702c: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x24702cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
label_247030:
    // 0x247030: 0x3e00008  jr          $ra
label_247034:
    if (ctx->pc == 0x247034u) {
        ctx->pc = 0x247038u;
        goto label_247038;
    }
    ctx->pc = 0x247030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247038u;
label_247038:
    // 0x247038: 0x0  nop
    ctx->pc = 0x247038u;
    // NOP
label_24703c:
    // 0x24703c: 0x0  nop
    ctx->pc = 0x24703cu;
    // NOP
label_247040:
    // 0x247040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_247044:
    // 0x247044: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x247044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_247048:
    // 0x247048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24704c:
    // 0x24704c: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x24704cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_247050:
    // 0x247050: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x247050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_247054:
    // 0x247054: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_247058:
    if (ctx->pc == 0x247058u) {
        ctx->pc = 0x247058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247054u;
        // 0x247058: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24705Cu;
        goto label_24705c;
    }
    ctx->pc = 0x247054u;
    {
        const bool branch_taken_0x247054 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x247058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247054u;
        // 0x247058: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247054) {
            ctx->pc = 0x247064u;
            goto label_247064;
        }
    }
    ctx->pc = 0x24705Cu;
label_24705c:
    // 0x24705c: 0x1000000a  b           . + 4 + (0xA << 2)
label_247060:
    if (ctx->pc == 0x247060u) {
        ctx->pc = 0x247060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24705Cu;
        // 0x247060: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247064u;
        goto label_247064;
    }
    ctx->pc = 0x24705Cu;
    {
        const bool branch_taken_0x24705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24705Cu;
        // 0x247060: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24705c) {
            ctx->pc = 0x247088u;
            goto label_247088;
        }
    }
    ctx->pc = 0x247064u;
label_247064:
    // 0x247064: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x247064u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_247068:
    // 0x247068: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x247068u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_24706c:
    // 0x24706c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x24706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247070:
    // 0x247070: 0xe4801084  swc1        $f0, 0x1084($a0)
    ctx->pc = 0x247070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4228), bits); }
label_247074:
    // 0x247074: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x247074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_247078:
    // 0x247078: 0x8c841080  lw          $a0, 0x1080($a0)
    ctx->pc = 0x247078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4224)));
label_24707c:
    // 0x24707c: 0xc18d864  jal         func_636190
label_247080:
    if (ctx->pc == 0x247080u) {
        ctx->pc = 0x247080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24707Cu;
        // 0x247080: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247084u;
        goto label_247084;
    }
    ctx->pc = 0x24707Cu;
    SET_GPR_U32(ctx, 31, 0x247084u);
    ctx->pc = 0x247080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24707Cu;
    // 0x247080: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x636190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x636190u, 0x24707Cu, 0x247084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247084u;
label_247084:
    // 0x247084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247088:
    // 0x247088: 0x3e00008  jr          $ra
label_24708c:
    if (ctx->pc == 0x24708Cu) {
        ctx->pc = 0x24708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247088u;
        // 0x24708c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247090u;
        goto label_247090;
    }
    ctx->pc = 0x247088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247088u;
        // 0x24708c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247090u;
label_247090:
    // 0x247090: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x247090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_247094:
    // 0x247094: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_247098:
    // 0x247098: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x247098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24709c:
    // 0x24709c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2470a0:
    // 0x2470a0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2470a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2470a4:
    // 0x2470a4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2470a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2470a8:
    // 0x2470a8: 0xc18f690  jal         func_63DA40
label_2470ac:
    if (ctx->pc == 0x2470ACu) {
        ctx->pc = 0x2470ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470A8u;
        // 0x2470ac: 0x24471060  addiu       $a3, $v0, 0x1060 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470B0u;
        goto label_2470b0;
    }
    ctx->pc = 0x2470A8u;
    SET_GPR_U32(ctx, 31, 0x2470B0u);
    ctx->pc = 0x2470ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2470A8u;
    // 0x2470ac: 0x24471060  addiu       $a3, $v0, 0x1060 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x63DA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DA40u, 0x2470A8u, 0x2470B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470B0u;
label_2470b0:
    // 0x2470b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2470b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2470b4:
    // 0x2470b4: 0x3e00008  jr          $ra
label_2470b8:
    if (ctx->pc == 0x2470B8u) {
        ctx->pc = 0x2470B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470B4u;
        // 0x2470b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470BCu;
        goto label_2470bc;
    }
    ctx->pc = 0x2470B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2470B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470B4u;
        // 0x2470b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2470B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2470BCu;
label_2470bc:
    // 0x2470bc: 0x0  nop
    ctx->pc = 0x2470bcu;
    // NOP
label_2470c0:
    // 0x2470c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2470c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2470c4:
    // 0x2470c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2470c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2470c8:
    // 0x2470c8: 0xc18f564  jal         func_63D590
label_2470cc:
    if (ctx->pc == 0x2470CCu) {
        ctx->pc = 0x2470CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470C8u;
        // 0x2470cc: 0x24841060  addiu       $a0, $a0, 0x1060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470D0u;
        goto label_2470d0;
    }
    ctx->pc = 0x2470C8u;
    SET_GPR_U32(ctx, 31, 0x2470D0u);
    ctx->pc = 0x2470CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2470C8u;
    // 0x2470cc: 0x24841060  addiu       $a0, $a0, 0x1060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x63D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63D590u, 0x2470C8u, 0x2470D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470D0u;
label_2470d0:
    // 0x2470d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2470d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2470d4:
    // 0x2470d4: 0x3e00008  jr          $ra
label_2470d8:
    if (ctx->pc == 0x2470D8u) {
        ctx->pc = 0x2470D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470D4u;
        // 0x2470d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2470DCu;
        goto label_2470dc;
    }
    ctx->pc = 0x2470D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2470D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2470D4u;
        // 0x2470d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2470D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2470DCu;
label_2470dc:
    // 0x2470dc: 0x0  nop
    ctx->pc = 0x2470dcu;
    // NOP
label_2470e0:
    // 0x2470e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2470e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2470e4:
    // 0x2470e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2470e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2470e8:
    // 0x2470e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2470e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2470ec:
    // 0x2470ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2470ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2470f0:
    // 0x2470f0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2470f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2470f4:
    // 0x2470f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2470f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2470f8:
    // 0x2470f8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2470f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2470fc:
    // 0x2470fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2470fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_247100:
    // 0x247100: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x247100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_247104:
    // 0x247104: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x247104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_247108:
    // 0x247108: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x247108u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24710c:
    // 0x24710c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24710cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_247110:
    // 0x247110: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x247110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_247114:
    // 0x247114: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x247114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_247118:
    // 0x247118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x247118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24711c:
    // 0x24711c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24711cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_247120:
    // 0x247120: 0xafa900ac  sw          $t1, 0xAC($sp)
    ctx->pc = 0x247120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 9));
label_247124:
    // 0x247124: 0x9513056c  lhu         $s3, 0x56C($t0)
    ctx->pc = 0x247124u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1388)));
label_247128:
    // 0x247128: 0xc17b02c  jal         func_5EC0B0
label_24712c:
    if (ctx->pc == 0x24712Cu) {
        ctx->pc = 0x24712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247128u;
        // 0x24712c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247130u;
        goto label_247130;
    }
    ctx->pc = 0x247128u;
    SET_GPR_U32(ctx, 31, 0x247130u);
    ctx->pc = 0x24712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247128u;
    // 0x24712c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5EC0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5EC0B0u, 0x247128u, 0x247130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247130u;
label_247130:
    // 0x247130: 0x26a31060  addiu       $v1, $s5, 0x1060
    ctx->pc = 0x247130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4192));
label_247134:
    // 0x247134: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x247134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_247138:
    // 0x247138: 0xaea30040  sw          $v1, 0x40($s5)
    ctx->pc = 0x247138u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 3));
label_24713c:
    // 0x24713c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x24713cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_247140:
    // 0x247140: 0xaeb3105c  sw          $s3, 0x105C($s5)
    ctx->pc = 0x247140u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4188), GPR_U32(ctx, 19));
label_247144:
    // 0x247144: 0xaea01058  sw          $zero, 0x1058($s5)
    ctx->pc = 0x247144u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4184), GPR_U32(ctx, 0));
label_247148:
    // 0x247148: 0xaea01054  sw          $zero, 0x1054($s5)
    ctx->pc = 0x247148u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4180), GPR_U32(ctx, 0));
label_24714c:
    // 0x24714c: 0xaea01050  sw          $zero, 0x1050($s5)
    ctx->pc = 0x24714cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4176), GPR_U32(ctx, 0));
label_247150:
    // 0x247150: 0xaea21084  sw          $v0, 0x1084($s5)
    ctx->pc = 0x247150u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4228), GPR_U32(ctx, 2));
label_247154:
    // 0x247154: 0xc1752f8  jal         func_5D4BE0
label_247158:
    if (ctx->pc == 0x247158u) {
        ctx->pc = 0x247158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247154u;
        // 0x247158: 0xaeb71088  sw          $s7, 0x1088($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4232), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24715Cu;
        goto label_24715c;
    }
    ctx->pc = 0x247154u;
    SET_GPR_U32(ctx, 31, 0x24715Cu);
    ctx->pc = 0x247158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247154u;
    // 0x247158: 0xaeb71088  sw          $s7, 0x1088($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4232), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4BE0u, 0x247154u, 0x24715Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24715Cu;
label_24715c:
    // 0x24715c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x24715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_247160:
    // 0x247160: 0x26a51060  addiu       $a1, $s5, 0x1060
    ctx->pc = 0x247160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4192));
label_247164:
    // 0x247164: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x247164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_247168:
    // 0x247168: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x247168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_24716c:
    // 0x24716c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24716cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247170:
    // 0x247170: 0xc18f5d8  jal         func_63D760
label_247174:
    if (ctx->pc == 0x247174u) {
        ctx->pc = 0x247174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247170u;
        // 0x247174: 0x24440034  addiu       $a0, $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247178u;
        goto label_247178;
    }
    ctx->pc = 0x247170u;
    SET_GPR_U32(ctx, 31, 0x247178u);
    ctx->pc = 0x247174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247170u;
    // 0x247174: 0x24440034  addiu       $a0, $v0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x63D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63D760u, 0x247170u, 0x247178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247178u;
label_247178:
    // 0x247178: 0xc1752f8  jal         func_5D4BE0
label_24717c:
    if (ctx->pc == 0x24717Cu) {
        ctx->pc = 0x247180u;
        goto label_247180;
    }
    ctx->pc = 0x247178u;
    SET_GPR_U32(ctx, 31, 0x247180u);
    ctx->pc = 0x5D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4BE0u, 0x247178u, 0x247180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247180u;
label_247180:
    // 0x247180: 0xc1780ec  jal         func_5E03B0
label_247184:
    if (ctx->pc == 0x247184u) {
        ctx->pc = 0x247184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247180u;
        // 0x247184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247188u;
        goto label_247188;
    }
    ctx->pc = 0x247180u;
    SET_GPR_U32(ctx, 31, 0x247188u);
    ctx->pc = 0x247184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247180u;
    // 0x247184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5E03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5E03B0u, 0x247180u, 0x247188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247188u;
label_247188:
    // 0x247188: 0x17082b  sltu        $at, $zero, $s7
    ctx->pc = 0x247188u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_24718c:
    // 0x24718c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_247190:
    if (ctx->pc == 0x247190u) {
        ctx->pc = 0x247190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24718Cu;
        // 0x247190: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247194u;
        goto label_247194;
    }
    ctx->pc = 0x24718Cu;
    {
        const bool branch_taken_0x24718c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x247190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24718Cu;
        // 0x247190: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24718c) {
            ctx->pc = 0x247208u;
            goto label_247208;
        }
    }
    ctx->pc = 0x247194u;
label_247194:
    // 0x247194: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x247194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247198:
    // 0x247198: 0x3d11821  addu        $v1, $fp, $s1
    ctx->pc = 0x247198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
label_24719c:
    // 0x24719c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x24719cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_2471a0:
    // 0x2471a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2471a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2471a4:
    // 0x2471a4: 0x2442eb20  addiu       $v0, $v0, -0x14E0
    ctx->pc = 0x2471a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961952));
label_2471a8:
    // 0x2471a8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2471a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2471ac:
    // 0x2471ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2471acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2471b0:
    // 0x2471b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2471b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2471b4:
    // 0x2471b4: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x2471b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2471b8:
    // 0x2471b8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2471b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2471bc:
    // 0x2471bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2471c0:
    if (ctx->pc == 0x2471C0u) {
        ctx->pc = 0x2471C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471BCu;
        // 0x2471c0: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2471C4u;
        goto label_2471c4;
    }
    ctx->pc = 0x2471BCu;
    {
        const bool branch_taken_0x2471bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2471C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471BCu;
        // 0x2471c0: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471bc) {
            ctx->pc = 0x2471F4u;
            goto label_2471f4;
        }
    }
    ctx->pc = 0x2471C4u;
label_2471c4:
    // 0x2471c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2471c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2471c8:
    // 0x2471c8: 0x244259a0  addiu       $v0, $v0, 0x59A0
    ctx->pc = 0x2471c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22944));
label_2471cc:
    // 0x2471cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2471ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2471d0:
    // 0x2471d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2471d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2471d4:
    // 0x2471d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2471d8:
    if (ctx->pc == 0x2471D8u) {
        ctx->pc = 0x2471DCu;
        goto label_2471dc;
    }
    ctx->pc = 0x2471D4u;
    {
        const bool branch_taken_0x2471d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2471d4) {
            ctx->pc = 0x2471F4u;
            goto label_2471f4;
        }
    }
    ctx->pc = 0x2471DCu;
label_2471dc:
    // 0x2471dc: 0xc1752f8  jal         func_5D4BE0
label_2471e0:
    if (ctx->pc == 0x2471E0u) {
        ctx->pc = 0x2471E4u;
        goto label_2471e4;
    }
    ctx->pc = 0x2471DCu;
    SET_GPR_U32(ctx, 31, 0x2471E4u);
    ctx->pc = 0x5D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4BE0u, 0x2471DCu, 0x2471E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471E4u;
label_2471e4:
    // 0x2471e4: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x2471e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2471e8:
    // 0x2471e8: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x2471e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2471ec:
    // 0x2471ec: 0xc175298  jal         func_5D4A60
label_2471f0:
    if (ctx->pc == 0x2471F0u) {
        ctx->pc = 0x2471F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471ECu;
        // 0x2471f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2471F4u;
        goto label_2471f4;
    }
    ctx->pc = 0x2471ECu;
    SET_GPR_U32(ctx, 31, 0x2471F4u);
    ctx->pc = 0x2471F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471ECu;
    // 0x2471f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5D4A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4A60u, 0x2471ECu, 0x2471F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471F4u;
label_2471f4:
    // 0x2471f4: 0x0  nop
    ctx->pc = 0x2471f4u;
    // NOP
label_2471f8:
    // 0x2471f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2471f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2471fc:
    // 0x2471fc: 0x217102b  sltu        $v0, $s0, $s7
    ctx->pc = 0x2471fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_247200:
    // 0x247200: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_247204:
    if (ctx->pc == 0x247204u) {
        ctx->pc = 0x247204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247200u;
        // 0x247204: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247208u;
        goto label_247208;
    }
    ctx->pc = 0x247200u;
    {
        const bool branch_taken_0x247200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247200u;
        // 0x247204: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247200) {
            ctx->pc = 0x247198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247198;
        }
    }
    ctx->pc = 0x247208u;
label_247208:
    // 0x247208: 0xc1752f8  jal         func_5D4BE0
label_24720c:
    if (ctx->pc == 0x24720Cu) {
        ctx->pc = 0x247210u;
        goto label_247210;
    }
    ctx->pc = 0x247208u;
    SET_GPR_U32(ctx, 31, 0x247210u);
    ctx->pc = 0x5D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4BE0u, 0x247208u, 0x247210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247210u;
label_247210:
    // 0x247210: 0xc1780c4  jal         func_5E0310
label_247214:
    if (ctx->pc == 0x247214u) {
        ctx->pc = 0x247214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247210u;
        // 0x247214: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247218u;
        goto label_247218;
    }
    ctx->pc = 0x247210u;
    SET_GPR_U32(ctx, 31, 0x247218u);
    ctx->pc = 0x247214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247210u;
    // 0x247214: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5E0310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5E0310u, 0x247210u, 0x247218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247218u;
label_247218:
    // 0x247218: 0x0  nop
    ctx->pc = 0x247218u;
    // NOP
label_24721c:
    // 0x24721c: 0x0  nop
    ctx->pc = 0x24721cu;
    // NOP
label_247220:
    // 0x247220: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_247224:
    if (ctx->pc == 0x247224u) {
        ctx->pc = 0x247228u;
        goto label_247228;
    }
    ctx->pc = 0x247220u;
    {
        const bool branch_taken_0x247220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247220) {
            ctx->pc = 0x247208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247208;
        }
    }
    ctx->pc = 0x247228u;
label_247228:
    // 0x247228: 0x17082b  sltu        $at, $zero, $s7
    ctx->pc = 0x247228u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_24722c:
    // 0x24722c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24722cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247230:
    // 0x247230: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
label_247234:
    if (ctx->pc == 0x247234u) {
        ctx->pc = 0x247234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247230u;
        // 0x247234: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247238u;
        goto label_247238;
    }
    ctx->pc = 0x247230u;
    {
        const bool branch_taken_0x247230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x247234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247230u;
        // 0x247234: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247230) {
            ctx->pc = 0x247378u;
            goto label_247378;
        }
    }
    ctx->pc = 0x247238u;
label_247238:
    // 0x247238: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x247238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24723c:
    // 0x24723c: 0x3d19021  addu        $s2, $fp, $s1
    ctx->pc = 0x24723cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
label_247240:
    // 0x247240: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x247240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_247244:
    // 0x247244: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x247244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_247248:
    // 0x247248: 0x2b12021  addu        $a0, $s5, $s1
    ctx->pc = 0x247248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_24724c:
    // 0x24724c: 0x2463eb20  addiu       $v1, $v1, -0x14E0
    ctx->pc = 0x24724cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961952));
label_247250:
    // 0x247250: 0xac85108c  sw          $a1, 0x108C($a0)
    ctx->pc = 0x247250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4236), GPR_U32(ctx, 5));
label_247254:
    // 0x247254: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x247254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_247258:
    // 0x247258: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x247258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_24725c:
    // 0x24725c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24725cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_247260:
    // 0x247260: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x247260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_247264:
    // 0x247264: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x247264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_247268:
    // 0x247268: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x247268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_24726c:
    // 0x24726c: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
label_247270:
    if (ctx->pc == 0x247270u) {
        ctx->pc = 0x247274u;
        goto label_247274;
    }
    ctx->pc = 0x24726Cu;
    {
        const bool branch_taken_0x24726c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24726c) {
            ctx->pc = 0x247358u;
            goto label_247358;
        }
    }
    ctx->pc = 0x247274u;
label_247274:
    // 0x247274: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x247274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_247278:
    // 0x247278: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x247278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_24727c:
    // 0x24727c: 0x244259a0  addiu       $v0, $v0, 0x59A0
    ctx->pc = 0x24727cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22944));
label_247280:
    // 0x247280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247284:
    // 0x247284: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x247284u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_247288:
    // 0x247288: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
label_24728c:
    if (ctx->pc == 0x24728Cu) {
        ctx->pc = 0x247290u;
        goto label_247290;
    }
    ctx->pc = 0x247288u;
    {
        const bool branch_taken_0x247288 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x247288) {
            ctx->pc = 0x2472C8u;
            goto label_2472c8;
        }
    }
    ctx->pc = 0x247290u;
label_247290:
    // 0x247290: 0xc1752f8  jal         func_5D4BE0
label_247294:
    if (ctx->pc == 0x247294u) {
        ctx->pc = 0x247298u;
        goto label_247298;
    }
    ctx->pc = 0x247290u;
    SET_GPR_U32(ctx, 31, 0x247298u);
    ctx->pc = 0x5D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4BE0u, 0x247290u, 0x247298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247298u;
label_247298:
    // 0x247298: 0xc175278  jal         func_5D49E0
label_24729c:
    if (ctx->pc == 0x24729Cu) {
        ctx->pc = 0x24729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247298u;
        // 0x24729c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2472A0u;
        goto label_2472a0;
    }
    ctx->pc = 0x247298u;
    SET_GPR_U32(ctx, 31, 0x2472A0u);
    ctx->pc = 0x24729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247298u;
    // 0x24729c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5D49E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D49E0u, 0x247298u, 0x2472A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472A0u;
label_2472a0:
    // 0x2472a0: 0xc1752f8  jal         func_5D4BE0
label_2472a4:
    if (ctx->pc == 0x2472A4u) {
        ctx->pc = 0x2472A8u;
        goto label_2472a8;
    }
    ctx->pc = 0x2472A0u;
    SET_GPR_U32(ctx, 31, 0x2472A8u);
    ctx->pc = 0x5D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4BE0u, 0x2472A0u, 0x2472A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472A8u;
label_2472a8:
    // 0x2472a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2472a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2472ac:
    // 0x2472ac: 0xc175280  jal         func_5D4A00
label_2472b0:
    if (ctx->pc == 0x2472B0u) {
        ctx->pc = 0x2472B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472ACu;
        // 0x2472b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2472B4u;
        goto label_2472b4;
    }
    ctx->pc = 0x2472ACu;
    SET_GPR_U32(ctx, 31, 0x2472B4u);
    ctx->pc = 0x2472B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2472ACu;
    // 0x2472b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5D4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4A00u, 0x2472ACu, 0x2472B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472B4u;
label_2472b4:
    // 0x2472b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2472b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2472b8:
    // 0x2472b8: 0x1260fff5  beqz        $s3, . + 4 + (-0xB << 2)
label_2472bc:
    if (ctx->pc == 0x2472BCu) {
        ctx->pc = 0x2472C0u;
        goto label_2472c0;
    }
    ctx->pc = 0x2472B8u;
    {
        const bool branch_taken_0x2472b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2472b8) {
            ctx->pc = 0x247290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247290;
        }
    }
    ctx->pc = 0x2472C0u;
label_2472c0:
    // 0x2472c0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2472c4:
    if (ctx->pc == 0x2472C4u) {
        ctx->pc = 0x2472C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472C0u;
        // 0x2472c4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2472C8u;
        goto label_2472c8;
    }
    ctx->pc = 0x2472C0u;
    {
        const bool branch_taken_0x2472c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2472C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472C0u;
        // 0x2472c4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2472c0) {
            ctx->pc = 0x247340u;
            goto label_247340;
        }
    }
    ctx->pc = 0x2472C8u;
label_2472c8:
    // 0x2472c8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2472c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2472cc:
    // 0x2472cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2472d0:
    if (ctx->pc == 0x2472D0u) {
        ctx->pc = 0x2472D4u;
        goto label_2472d4;
    }
    ctx->pc = 0x2472CCu;
    {
        const bool branch_taken_0x2472cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2472cc) {
            ctx->pc = 0x2472DCu;
            goto label_2472dc;
        }
    }
    ctx->pc = 0x2472D4u;
label_2472d4:
    // 0x2472d4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2472d8:
    if (ctx->pc == 0x2472D8u) {
        ctx->pc = 0x2472DCu;
        goto label_2472dc;
    }
    ctx->pc = 0x2472D4u;
    {
        const bool branch_taken_0x2472d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2472d4) {
            ctx->pc = 0x247340u;
            goto label_247340;
        }
    }
    ctx->pc = 0x2472DCu;
label_2472dc:
    // 0x2472dc: 0x0  nop
    ctx->pc = 0x2472dcu;
    // NOP
label_2472e0:
    // 0x2472e0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x2472e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_2472e4:
    // 0x2472e4: 0x2442ed00  addiu       $v0, $v0, -0x1300
    ctx->pc = 0x2472e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962432));
label_2472e8:
    // 0x2472e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2472e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2472ec:
    // 0x2472ec: 0xc1752f8  jal         func_5D4BE0
label_2472f0:
    if (ctx->pc == 0x2472F0u) {
        ctx->pc = 0x2472F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2472ECu;
        // 0x2472f0: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2472F4u;
        goto label_2472f4;
    }
    ctx->pc = 0x2472ECu;
    SET_GPR_U32(ctx, 31, 0x2472F4u);
    ctx->pc = 0x2472F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2472ECu;
    // 0x2472f0: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5D4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5D4BE0u, 0x2472ECu, 0x2472F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2472F4u;
label_2472f4:
    // 0x2472f4: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x2472f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2472f8:
    // 0x2472f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2472f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2472fc:
    // 0x2472fc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2472fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_247300:
    // 0x247300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247304:
    // 0x247304: 0xc18dba0  jal         func_636E80
label_247308:
    if (ctx->pc == 0x247308u) {
        ctx->pc = 0x247308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247304u;
        // 0x247308: 0x24440034  addiu       $a0, $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24730Cu;
        goto label_24730c;
    }
    ctx->pc = 0x247304u;
    SET_GPR_U32(ctx, 31, 0x24730Cu);
    ctx->pc = 0x247308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247304u;
    // 0x247308: 0x24440034  addiu       $a0, $v0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x636E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x636E80u, 0x247304u, 0x24730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24730Cu;
label_24730c:
    // 0x24730c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x24730cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_247310:
    // 0x247310: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x247310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247314:
    // 0x247314: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x247314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_247318:
    // 0x247318: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x247318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_24731c:
    // 0x24731c: 0x246359a0  addiu       $v1, $v1, 0x59A0
    ctx->pc = 0x24731cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22944));
label_247320:
    // 0x247320: 0x2442ed00  addiu       $v0, $v0, -0x1300
    ctx->pc = 0x247320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962432));
label_247324:
    // 0x247324: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x247324u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_247328:
    // 0x247328: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x247328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_24732c:
    // 0x24732c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24732cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_247330:
    // 0x247330: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x247330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_247334:
    // 0x247334: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x247334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_247338:
    // 0x247338: 0xc08e93e  jal         func_23A4F8
label_24733c:
    if (ctx->pc == 0x24733Cu) {
        ctx->pc = 0x24733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247338u;
        // 0x24733c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247340u;
        goto label_247340;
    }
    ctx->pc = 0x247338u;
    SET_GPR_U32(ctx, 31, 0x247340u);
    ctx->pc = 0x24733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247338u;
    // 0x24733c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x247340u;
label_247340:
    // 0x247340: 0x8e990510  lw          $t9, 0x510($s4)
    ctx->pc = 0x247340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1296)));
label_247344:
    // 0x247344: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x247344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_247348:
    // 0x247348: 0x9693056c  lhu         $s3, 0x56C($s4)
    ctx->pc = 0x247348u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 1388)));
label_24734c:
    // 0x24734c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x24734cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_247350:
    // 0x247350: 0x320f809  jalr        $t9
label_247354:
    if (ctx->pc == 0x247354u) {
        ctx->pc = 0x247354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247350u;
        // 0x247354: 0x26840510  addiu       $a0, $s4, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247358u;
        goto label_247358;
    }
    ctx->pc = 0x247350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x247358u);
        ctx->pc = 0x247354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247350u;
        // 0x247354: 0x26840510  addiu       $a0, $s4, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247350u, 0x247358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247358u;
label_247358:
    // 0x247358: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x247358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24735c:
    // 0x24735c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x24735cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_247360:
    // 0x247360: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x247360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_247364:
    // 0x247364: 0x2d7182b  sltu        $v1, $s6, $s7
    ctx->pc = 0x247364u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_247368:
    // 0x247368: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x247368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_24736c:
    // 0x24736c: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x24736cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_247370:
    // 0x247370: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
label_247374:
    if (ctx->pc == 0x247374u) {
        ctx->pc = 0x247374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247370u;
        // 0x247374: 0xac9310b4  sw          $s3, 0x10B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4276), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247378u;
        goto label_247378;
    }
    ctx->pc = 0x247370u;
    {
        const bool branch_taken_0x247370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x247374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247370u;
        // 0x247374: 0xac9310b4  sw          $s3, 0x10B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4276), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247370) {
            ctx->pc = 0x24723Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24723c;
        }
    }
    ctx->pc = 0x247378u;
label_247378:
    // 0x247378: 0x26830400  addiu       $v1, $s4, 0x400
    ctx->pc = 0x247378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
label_24737c:
    // 0x24737c: 0xaea31080  sw          $v1, 0x1080($s5)
    ctx->pc = 0x24737cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4224), GPR_U32(ctx, 3));
label_247380:
    // 0x247380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247384:
    // 0x247384: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x247384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247388:
    // 0x247388: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x247388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_24738c:
    // 0x24738c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x24738cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_247390:
    // 0x247390: 0xaca0006c  sw          $zero, 0x6C($a1)
    ctx->pc = 0x247390u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 0));
label_247394:
    // 0x247394: 0x2cc30080  sltiu       $v1, $a2, 0x80
    ctx->pc = 0x247394u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_247398:
    // 0x247398: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x247398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
label_24739c:
    // 0x24739c: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x24739cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
label_2473a0:
    // 0x2473a0: 0xaca0008c  sw          $zero, 0x8C($a1)
    ctx->pc = 0x2473a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 0));
label_2473a4:
    // 0x2473a4: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x2473a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
label_2473a8:
    // 0x2473a8: 0xaca000ac  sw          $zero, 0xAC($a1)
    ctx->pc = 0x2473a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 0));
label_2473ac:
    // 0x2473ac: 0xaca000a8  sw          $zero, 0xA8($a1)
    ctx->pc = 0x2473acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 0));
label_2473b0:
    // 0x2473b0: 0xaca000cc  sw          $zero, 0xCC($a1)
    ctx->pc = 0x2473b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 204), GPR_U32(ctx, 0));
label_2473b4:
    // 0x2473b4: 0xaca000c8  sw          $zero, 0xC8($a1)
    ctx->pc = 0x2473b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 200), GPR_U32(ctx, 0));
label_2473b8:
    // 0x2473b8: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x2473b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
label_2473bc:
    // 0x2473bc: 0xaca000e8  sw          $zero, 0xE8($a1)
    ctx->pc = 0x2473bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
label_2473c0:
    // 0x2473c0: 0xaca0010c  sw          $zero, 0x10C($a1)
    ctx->pc = 0x2473c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 268), GPR_U32(ctx, 0));
label_2473c4:
    // 0x2473c4: 0xaca00108  sw          $zero, 0x108($a1)
    ctx->pc = 0x2473c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 264), GPR_U32(ctx, 0));
label_2473c8:
    // 0x2473c8: 0xaca0012c  sw          $zero, 0x12C($a1)
    ctx->pc = 0x2473c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 300), GPR_U32(ctx, 0));
label_2473cc:
    // 0x2473cc: 0xaca00128  sw          $zero, 0x128($a1)
    ctx->pc = 0x2473ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 0));
label_2473d0:
    // 0x2473d0: 0xaca0014c  sw          $zero, 0x14C($a1)
    ctx->pc = 0x2473d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 332), GPR_U32(ctx, 0));
label_2473d4:
    // 0x2473d4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_2473d8:
    if (ctx->pc == 0x2473D8u) {
        ctx->pc = 0x2473D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473D4u;
        // 0x2473d8: 0xaca00148  sw          $zero, 0x148($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2473DCu;
        goto label_2473dc;
    }
    ctx->pc = 0x2473D4u;
    {
        const bool branch_taken_0x2473d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2473D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2473D4u;
        // 0x2473d8: 0xaca00148  sw          $zero, 0x148($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2473d4) {
            ctx->pc = 0x247388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247388;
        }
    }
    ctx->pc = 0x2473DCu;
label_2473dc:
    // 0x2473dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2473dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2473e0:
    // 0x2473e0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2473e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2473e4:
    // 0x2473e4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2473e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2473e8:
    // 0x2473e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2473e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2473ec:
    // 0x2473ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2473ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2473f0:
    // 0x2473f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2473f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2473f4:
    // 0x2473f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2473f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2473f8:
    // 0x2473f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2473f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2473fc:
    // 0x2473fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2473fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247400:
    // 0x247400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x247400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_247404:
    // 0x247404: 0x3e00008  jr          $ra
label_247408:
    if (ctx->pc == 0x247408u) {
        ctx->pc = 0x247408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247404u;
        // 0x247408: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24740Cu;
        goto label_24740c;
    }
    ctx->pc = 0x247404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247404u;
        // 0x247408: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24740Cu;
label_24740c:
    // 0x24740c: 0x0  nop
    ctx->pc = 0x24740cu;
    // NOP
label_247410:
    // 0x247410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_247414:
    // 0x247414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_247418:
    // 0x247418: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x247418u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_24741c:
    // 0x24741c: 0x7d400000  sq          $zero, 0x0($t2)
    ctx->pc = 0x24741cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 0));
label_247420:
    // 0x247420: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x247420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_247424:
    // 0x247424: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x247424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247428:
    // 0x247428: 0x2488006c  addiu       $t0, $a0, 0x6C
    ctx->pc = 0x247428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
label_24742c:
    // 0x24742c: 0x24870068  addiu       $a3, $a0, 0x68
    ctx->pc = 0x24742cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
label_247430:
    // 0x247430: 0x10000011  b           . + 4 + (0x11 << 2)
label_247434:
    if (ctx->pc == 0x247434u) {
        ctx->pc = 0x247434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247430u;
        // 0x247434: 0x24a5eb20  addiu       $a1, $a1, -0x14E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247438u;
        goto label_247438;
    }
    ctx->pc = 0x247430u;
    {
        const bool branch_taken_0x247430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247430u;
        // 0x247434: 0x24a5eb20  addiu       $a1, $a1, -0x14E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247430) {
            ctx->pc = 0x247478u;
            goto label_247478;
        }
    }
    ctx->pc = 0x247438u;
label_247438:
    // 0x247438: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x247438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_24743c:
    // 0x24743c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x24743cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_247440:
    // 0x247440: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x247440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_247444:
    // 0x247444: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x247444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_247448:
    // 0x247448: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x247448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_24744c:
    // 0x24744c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x24744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_247450:
    // 0x247450: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x247450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_247454:
    // 0x247454: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x247454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_247458:
    // 0x247458: 0x0  nop
    ctx->pc = 0x247458u;
    // NOP
label_24745c:
    // 0x24745c: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x24745cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_247460:
    // 0x247460: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x247460u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_247464:
    // 0x247464: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x247464u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_247468:
    // 0x247468: 0x4bc102bc  vadda.xyz   $ACC, $vf1, $vf0
    ctx->pc = 0x247468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[1]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_24746c:
    // 0x24746c: 0x4bc31048  vmaddx.xyz  $vf1, $vf2, $vf3x
    ctx->pc = 0x24746cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_247470:
    // 0x247470: 0xf9410000  sqc2        $vf1, 0x0($t2)
    ctx->pc = 0x247470u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_247474:
    // 0x247474: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x247474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_247478:
    // 0x247478: 0x2d220080  sltiu       $v0, $t1, 0x80
    ctx->pc = 0x247478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_24747c:
    // 0x24747c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_247480:
    if (ctx->pc == 0x247480u) {
        ctx->pc = 0x247480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24747Cu;
        // 0x247480: 0x91140  sll         $v0, $t1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247484u;
        goto label_247484;
    }
    ctx->pc = 0x24747Cu;
    {
        const bool branch_taken_0x24747c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24747Cu;
        // 0x247480: 0x91140  sll         $v0, $t1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24747c) {
            ctx->pc = 0x247438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247438;
        }
    }
    ctx->pc = 0x247484u;
label_247484:
    // 0x247484: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x247484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247488:
    // 0x247488: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x247488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_24748c:
    // 0x24748c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x24748cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_247490:
    // 0x247490: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x247490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_247494:
    // 0x247494: 0x0  nop
    ctx->pc = 0x247494u;
    // NOP
label_247498:
    // 0x247498: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24749c:
    // 0x24749c: 0x0  nop
    ctx->pc = 0x24749cu;
    // NOP
label_2474a0:
    // 0x2474a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2474a4:
    if (ctx->pc == 0x2474A4u) {
        ctx->pc = 0x2474A8u;
        goto label_2474a8;
    }
    ctx->pc = 0x2474A0u;
    {
        const bool branch_taken_0x2474a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2474a0) {
            ctx->pc = 0x2474ACu;
            goto label_2474ac;
        }
    }
    ctx->pc = 0x2474A8u;
label_2474a8:
    // 0x2474a8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2474a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2474ac:
    // 0x2474ac: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2474acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2474b0:
    // 0x2474b0: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2474b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_2474b4:
    // 0x2474b4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2474b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_2474b8:
    // 0x2474b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2474b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2474bc:
    // 0x2474bc: 0x0  nop
    ctx->pc = 0x2474bcu;
    // NOP
label_2474c0:
    // 0x2474c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2474c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2474c4:
    // 0x2474c4: 0x0  nop
    ctx->pc = 0x2474c4u;
    // NOP
label_2474c8:
    // 0x2474c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2474cc:
    if (ctx->pc == 0x2474CCu) {
        ctx->pc = 0x2474D0u;
        goto label_2474d0;
    }
    ctx->pc = 0x2474C8u;
    {
        const bool branch_taken_0x2474c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2474c8) {
            ctx->pc = 0x2474D4u;
            goto label_2474d4;
        }
    }
    ctx->pc = 0x2474D0u;
label_2474d0:
    // 0x2474d0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2474d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2474d4:
    // 0x2474d4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2474d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2474d8:
    // 0x2474d8: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x2474d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_2474dc:
    // 0x2474dc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2474dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_2474e0:
    // 0x2474e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2474e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2474e4:
    // 0x2474e4: 0x0  nop
    ctx->pc = 0x2474e4u;
    // NOP
label_2474e8:
    // 0x2474e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2474e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2474ec:
    // 0x2474ec: 0x0  nop
    ctx->pc = 0x2474ecu;
    // NOP
label_2474f0:
    // 0x2474f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2474f4:
    if (ctx->pc == 0x2474F4u) {
        ctx->pc = 0x2474F8u;
        goto label_2474f8;
    }
    ctx->pc = 0x2474F0u;
    {
        const bool branch_taken_0x2474f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2474f0) {
            ctx->pc = 0x2474FCu;
            goto label_2474fc;
        }
    }
    ctx->pc = 0x2474F8u;
label_2474f8:
    // 0x2474f8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2474f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2474fc:
    // 0x2474fc: 0x8c821080  lw          $v0, 0x1080($a0)
    ctx->pc = 0x2474fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4224)));
label_247500:
    // 0x247500: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x247500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_247504:
    // 0x247504: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x247504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_247508:
    // 0x247508: 0xc18d844  jal         func_636110
label_24750c:
    if (ctx->pc == 0x24750Cu) {
        ctx->pc = 0x24750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247508u;
        // 0x24750c: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247510u;
        goto label_247510;
    }
    ctx->pc = 0x247508u;
    SET_GPR_U32(ctx, 31, 0x247510u);
    ctx->pc = 0x24750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247508u;
    // 0x24750c: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x636110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x636110u, 0x247508u, 0x247510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247510u;
label_247510:
    // 0x247510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_247514:
    // 0x247514: 0x3e00008  jr          $ra
label_247518:
    if (ctx->pc == 0x247518u) {
        ctx->pc = 0x247518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247514u;
        // 0x247518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24751Cu;
        goto label_24751c;
    }
    ctx->pc = 0x247514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247514u;
        // 0x247518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24751Cu;
label_24751c:
    // 0x24751c: 0x0  nop
    ctx->pc = 0x24751cu;
    // NOP
label_247520:
    // 0x247520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x247520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_247524:
    // 0x247524: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x247524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_247528:
    // 0x247528: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x247528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24752c:
    // 0x24752c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24752cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_247530:
    // 0x247530: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x247530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_247534:
    // 0x247534: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x247534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_247538:
    // 0x247538: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x247538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24753c:
    // 0x24753c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x24753cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_247540:
    // 0x247540: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x247540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_247544:
    // 0x247544: 0xc4801084  lwc1        $f0, 0x1084($a0)
    ctx->pc = 0x247544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247548:
    // 0x247548: 0xc18f7ac  jal         func_63DEB0
label_24754c:
    if (ctx->pc == 0x24754Cu) {
        ctx->pc = 0x24754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247548u;
        // 0x24754c: 0xe4a0001c  swc1        $f0, 0x1C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x247550u;
        goto label_247550;
    }
    ctx->pc = 0x247548u;
    SET_GPR_U32(ctx, 31, 0x247550u);
    ctx->pc = 0x24754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247548u;
    // 0x24754c: 0xe4a0001c  swc1        $f0, 0x1C($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x63DEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DEB0u, 0x247548u, 0x247550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247550u;
label_247550:
    // 0x247550: 0x8e4b1088  lw          $t3, 0x1088($s2)
    ctx->pc = 0x247550u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4232)));
label_247554:
    // 0x247554: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x247554u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_247558:
    // 0x247558: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x247558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_24755c:
    // 0x24755c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x24755cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_247560:
    // 0x247560: 0x264a108c  addiu       $t2, $s2, 0x108C
    ctx->pc = 0x247560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4236));
label_247564:
    // 0x247564: 0x264910b4  addiu       $t1, $s2, 0x10B4
    ctx->pc = 0x247564u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4276));
label_247568:
    // 0x247568: 0x2508eb44  addiu       $t0, $t0, -0x14BC
    ctx->pc = 0x247568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961988));
label_24756c:
    // 0x24756c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x24756cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_247570:
    // 0x247570: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x247570u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_247574:
    // 0x247574: 0x24a5eb30  addiu       $a1, $a1, -0x14D0
    ctx->pc = 0x247574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961968));
label_247578:
    // 0x247578: 0x2484eb34  addiu       $a0, $a0, -0x14CC
    ctx->pc = 0x247578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961972));
label_24757c:
    // 0x24757c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24757cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_247580:
    // 0x247580: 0x4b001b  divu        $zero, $v0, $t3
    ctx->pc = 0x247580u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_247584:
    // 0x247584: 0x0  nop
    ctx->pc = 0x247584u;
    // NOP
label_247588:
    // 0x247588: 0x0  nop
    ctx->pc = 0x247588u;
    // NOP
label_24758c:
    // 0x24758c: 0x5810  mfhi        $t3
    ctx->pc = 0x24758cu;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_247590:
    // 0x247590: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x247590u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_247594:
    // 0x247594: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x247594u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_247598:
    // 0x247598: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x247598u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_24759c:
    // 0x24759c: 0xae2a0018  sw          $t2, 0x18($s1)
    ctx->pc = 0x24759cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 10));
label_2475a0:
    // 0x2475a0: 0x8e2a0018  lw          $t2, 0x18($s1)
    ctx->pc = 0x2475a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2475a4:
    // 0x2475a4: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x2475a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_2475a8:
    // 0x2475a8: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2475a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_2475ac:
    // 0x2475ac: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x2475acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2475b0:
    // 0x2475b0: 0xae290014  sw          $t1, 0x14($s1)
    ctx->pc = 0x2475b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 9));
label_2475b4:
    // 0x2475b4: 0x8e290014  lw          $t1, 0x14($s1)
    ctx->pc = 0x2475b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2475b8:
    // 0x2475b8: 0xae09008c  sw          $t1, 0x8C($s0)
    ctx->pc = 0x2475b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 9));
label_2475bc:
    // 0x2475bc: 0x8e2a0018  lw          $t2, 0x18($s1)
    ctx->pc = 0x2475bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2475c0:
    // 0x2475c0: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x2475c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_2475c4:
    // 0x2475c4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2475c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_2475c8:
    // 0x2475c8: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x2475c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_2475cc:
    // 0x2475cc: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2475ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2475d0:
    // 0x2475d0: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x2475d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2475d4:
    // 0x2475d4: 0xae080090  sw          $t0, 0x90($s0)
    ctx->pc = 0x2475d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
label_2475d8:
    // 0x2475d8: 0xa2070034  sb          $a3, 0x34($s0)
    ctx->pc = 0x2475d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 7));
label_2475dc:
    // 0x2475dc: 0xa2070004  sb          $a3, 0x4($s0)
    ctx->pc = 0x2475dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 7));
label_2475e0:
    // 0x2475e0: 0xa2070035  sb          $a3, 0x35($s0)
    ctx->pc = 0x2475e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 7));
label_2475e4:
    // 0x2475e4: 0xa2070005  sb          $a3, 0x5($s0)
    ctx->pc = 0x2475e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 7));
label_2475e8:
    // 0x2475e8: 0xa2070036  sb          $a3, 0x36($s0)
    ctx->pc = 0x2475e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 7));
label_2475ec:
    // 0x2475ec: 0xa2070006  sb          $a3, 0x6($s0)
    ctx->pc = 0x2475ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 7));
label_2475f0:
    // 0x2475f0: 0xa2070037  sb          $a3, 0x37($s0)
    ctx->pc = 0x2475f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 7));
label_2475f4:
    // 0x2475f4: 0xa2070007  sb          $a3, 0x7($s0)
    ctx->pc = 0x2475f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 7));
label_2475f8:
    // 0x2475f8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2475f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2475fc:
    // 0x2475fc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2475fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_247600:
    // 0x247600: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x247600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
label_247604:
    // 0x247604: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x247604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
label_247608:
    // 0x247608: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x247608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24760c:
    // 0x24760c: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x24760cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_247610:
    // 0x247610: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x247610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247614:
    // 0x247614: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x247614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_247618:
    // 0x247618: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x247618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24761c:
    // 0x24761c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x24761cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_247620:
    // 0x247620: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x247620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247624:
    // 0x247624: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x247624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_247628:
    // 0x247628: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x247628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_24762c:
    // 0x24762c: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x24762cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_247630:
    // 0x247630: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x247630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_247634:
    // 0x247634: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x247634u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_247638:
    // 0x247638: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x247638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_24763c:
    // 0x24763c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247640:
    // 0x247640: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x247640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_247644:
    // 0x247644: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x247644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_247648:
    // 0x247648: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x247648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_24764c:
    // 0x24764c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x24764cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_247650:
    // 0x247650: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x247650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_247654:
    // 0x247654: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x247654u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_247658:
    // 0x247658: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x247658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_24765c:
    // 0x24765c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247660:
    // 0x247660: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x247660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_247664:
    // 0x247664: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x247664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_247668:
    // 0x247668: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x247668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
label_24766c:
    // 0x24766c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24766cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_247670:
    // 0x247670: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x247670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_247674:
    // 0x247674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x247674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247678:
    // 0x247678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x247678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24767c:
    // 0x24767c: 0x3e00008  jr          $ra
label_247680:
    if (ctx->pc == 0x247680u) {
        ctx->pc = 0x247680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24767Cu;
        // 0x247680: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247684u;
        goto label_247684;
    }
    ctx->pc = 0x24767Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24767Cu;
        // 0x247680: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24767Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247684u;
label_247684:
    // 0x247684: 0x0  nop
    ctx->pc = 0x247684u;
    // NOP
label_247688:
    // 0x247688: 0x0  nop
    ctx->pc = 0x247688u;
    // NOP
label_24768c:
    // 0x24768c: 0x0  nop
    ctx->pc = 0x24768cu;
    // NOP
label_247690:
    // 0x247690: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x247690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_247694:
    // 0x247694: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_247698:
    // 0x247698: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x247698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24769c:
    // 0x24769c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2476a0:
    // 0x2476a0: 0xc18dba0  jal         func_636E80
label_2476a4:
    if (ctx->pc == 0x2476A4u) {
        ctx->pc = 0x2476A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476A0u;
        // 0x2476a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2476A8u;
        goto label_2476a8;
    }
    ctx->pc = 0x2476A0u;
    SET_GPR_U32(ctx, 31, 0x2476A8u);
    ctx->pc = 0x2476A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476A0u;
    // 0x2476a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x636E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x636E80u, 0x2476A0u, 0x2476A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476A8u;
label_2476a8:
    // 0x2476a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2476a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2476ac:
    // 0x2476ac: 0x3e00008  jr          $ra
label_2476b0:
    if (ctx->pc == 0x2476B0u) {
        ctx->pc = 0x2476B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476ACu;
        // 0x2476b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2476B4u;
        goto label_2476b4;
    }
    ctx->pc = 0x2476ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2476B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2476ACu;
        // 0x2476b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2476ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2476B4u;
label_2476b4:
    // 0x2476b4: 0x0  nop
    ctx->pc = 0x2476b4u;
    // NOP
label_2476b8:
    // 0x2476b8: 0x0  nop
    ctx->pc = 0x2476b8u;
    // NOP
label_2476bc:
    // 0x2476bc: 0x0  nop
    ctx->pc = 0x2476bcu;
    // NOP
label_2476c0:
    // 0x2476c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2476c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2476c4:
    // 0x2476c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2476c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2476c8:
    // 0x2476c8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2476c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2476cc:
    // 0x2476cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2476ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    ctx->pc = 0x2476d0u;
    return;
}

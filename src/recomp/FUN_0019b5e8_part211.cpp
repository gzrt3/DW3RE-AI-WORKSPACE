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


void FUN_0019b5e8_part211(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x201e88u: goto label_201e88;
        case 0x201e8cu: goto label_201e8c;
        case 0x201e90u: goto label_201e90;
        case 0x201e94u: goto label_201e94;
        case 0x201e98u: goto label_201e98;
        case 0x201e9cu: goto label_201e9c;
        case 0x201ea0u: goto label_201ea0;
        case 0x201ea4u: goto label_201ea4;
        case 0x201ea8u: goto label_201ea8;
        case 0x201eacu: goto label_201eac;
        case 0x201eb0u: goto label_201eb0;
        case 0x201eb4u: goto label_201eb4;
        case 0x201eb8u: goto label_201eb8;
        case 0x201ebcu: goto label_201ebc;
        case 0x201ec0u: goto label_201ec0;
        case 0x201ec4u: goto label_201ec4;
        case 0x201ec8u: goto label_201ec8;
        case 0x201eccu: goto label_201ecc;
        case 0x201ed0u: goto label_201ed0;
        case 0x201ed4u: goto label_201ed4;
        case 0x201ed8u: goto label_201ed8;
        case 0x201edcu: goto label_201edc;
        case 0x201ee0u: goto label_201ee0;
        case 0x201ee4u: goto label_201ee4;
        case 0x201ee8u: goto label_201ee8;
        case 0x201eecu: goto label_201eec;
        case 0x201ef0u: goto label_201ef0;
        case 0x201ef4u: goto label_201ef4;
        case 0x201ef8u: goto label_201ef8;
        case 0x201efcu: goto label_201efc;
        case 0x201f00u: goto label_201f00;
        case 0x201f04u: goto label_201f04;
        case 0x201f08u: goto label_201f08;
        case 0x201f0cu: goto label_201f0c;
        case 0x201f10u: goto label_201f10;
        case 0x201f14u: goto label_201f14;
        case 0x201f18u: goto label_201f18;
        case 0x201f1cu: goto label_201f1c;
        case 0x201f20u: goto label_201f20;
        case 0x201f24u: goto label_201f24;
        case 0x201f28u: goto label_201f28;
        case 0x201f2cu: goto label_201f2c;
        case 0x201f30u: goto label_201f30;
        case 0x201f34u: goto label_201f34;
        case 0x201f38u: goto label_201f38;
        case 0x201f3cu: goto label_201f3c;
        case 0x201f40u: goto label_201f40;
        case 0x201f44u: goto label_201f44;
        case 0x201f48u: goto label_201f48;
        case 0x201f4cu: goto label_201f4c;
        case 0x201f50u: goto label_201f50;
        case 0x201f54u: goto label_201f54;
        case 0x201f58u: goto label_201f58;
        case 0x201f5cu: goto label_201f5c;
        case 0x201f60u: goto label_201f60;
        case 0x201f64u: goto label_201f64;
        case 0x201f68u: goto label_201f68;
        case 0x201f6cu: goto label_201f6c;
        case 0x201f70u: goto label_201f70;
        case 0x201f74u: goto label_201f74;
        case 0x201f78u: goto label_201f78;
        case 0x201f7cu: goto label_201f7c;
        case 0x201f80u: goto label_201f80;
        case 0x201f84u: goto label_201f84;
        case 0x201f88u: goto label_201f88;
        case 0x201f8cu: goto label_201f8c;
        case 0x201f90u: goto label_201f90;
        case 0x201f94u: goto label_201f94;
        case 0x201f98u: goto label_201f98;
        case 0x201f9cu: goto label_201f9c;
        case 0x201fa0u: goto label_201fa0;
        case 0x201fa4u: goto label_201fa4;
        case 0x201fa8u: goto label_201fa8;
        case 0x201facu: goto label_201fac;
        case 0x201fb0u: goto label_201fb0;
        case 0x201fb4u: goto label_201fb4;
        case 0x201fb8u: goto label_201fb8;
        case 0x201fbcu: goto label_201fbc;
        case 0x201fc0u: goto label_201fc0;
        case 0x201fc4u: goto label_201fc4;
        case 0x201fc8u: goto label_201fc8;
        case 0x201fccu: goto label_201fcc;
        case 0x201fd0u: goto label_201fd0;
        case 0x201fd4u: goto label_201fd4;
        case 0x201fd8u: goto label_201fd8;
        case 0x201fdcu: goto label_201fdc;
        case 0x201fe0u: goto label_201fe0;
        case 0x201fe4u: goto label_201fe4;
        case 0x201fe8u: goto label_201fe8;
        case 0x201fecu: goto label_201fec;
        case 0x201ff0u: goto label_201ff0;
        case 0x201ff4u: goto label_201ff4;
        case 0x201ff8u: goto label_201ff8;
        case 0x201ffcu: goto label_201ffc;
        case 0x202000u: goto label_202000;
        case 0x202004u: goto label_202004;
        case 0x202008u: goto label_202008;
        case 0x20200cu: goto label_20200c;
        case 0x202010u: goto label_202010;
        case 0x202014u: goto label_202014;
        case 0x202018u: goto label_202018;
        case 0x20201cu: goto label_20201c;
        case 0x202020u: goto label_202020;
        case 0x202024u: goto label_202024;
        case 0x202028u: goto label_202028;
        case 0x20202cu: goto label_20202c;
        case 0x202030u: goto label_202030;
        case 0x202034u: goto label_202034;
        case 0x202038u: goto label_202038;
        case 0x20203cu: goto label_20203c;
        case 0x202040u: goto label_202040;
        case 0x202044u: goto label_202044;
        case 0x202048u: goto label_202048;
        case 0x20204cu: goto label_20204c;
        case 0x202050u: goto label_202050;
        case 0x202054u: goto label_202054;
        case 0x202058u: goto label_202058;
        case 0x20205cu: goto label_20205c;
        case 0x202060u: goto label_202060;
        case 0x202064u: goto label_202064;
        case 0x202068u: goto label_202068;
        case 0x20206cu: goto label_20206c;
        case 0x202070u: goto label_202070;
        case 0x202074u: goto label_202074;
        case 0x202078u: goto label_202078;
        case 0x20207cu: goto label_20207c;
        case 0x202080u: goto label_202080;
        case 0x202084u: goto label_202084;
        case 0x202088u: goto label_202088;
        case 0x20208cu: goto label_20208c;
        case 0x202090u: goto label_202090;
        case 0x202094u: goto label_202094;
        case 0x202098u: goto label_202098;
        case 0x20209cu: goto label_20209c;
        case 0x2020a0u: goto label_2020a0;
        case 0x2020a4u: goto label_2020a4;
        case 0x2020a8u: goto label_2020a8;
        case 0x2020acu: goto label_2020ac;
        case 0x2020b0u: goto label_2020b0;
        case 0x2020b4u: goto label_2020b4;
        case 0x2020b8u: goto label_2020b8;
        case 0x2020bcu: goto label_2020bc;
        case 0x2020c0u: goto label_2020c0;
        case 0x2020c4u: goto label_2020c4;
        case 0x2020c8u: goto label_2020c8;
        case 0x2020ccu: goto label_2020cc;
        case 0x2020d0u: goto label_2020d0;
        case 0x2020d4u: goto label_2020d4;
        case 0x2020d8u: goto label_2020d8;
        case 0x2020dcu: goto label_2020dc;
        case 0x2020e0u: goto label_2020e0;
        case 0x2020e4u: goto label_2020e4;
        case 0x2020e8u: goto label_2020e8;
        case 0x2020ecu: goto label_2020ec;
        case 0x2020f0u: goto label_2020f0;
        case 0x2020f4u: goto label_2020f4;
        case 0x2020f8u: goto label_2020f8;
        case 0x2020fcu: goto label_2020fc;
        case 0x202100u: goto label_202100;
        case 0x202104u: goto label_202104;
        case 0x202108u: goto label_202108;
        case 0x20210cu: goto label_20210c;
        case 0x202110u: goto label_202110;
        case 0x202114u: goto label_202114;
        case 0x202118u: goto label_202118;
        case 0x20211cu: goto label_20211c;
        case 0x202120u: goto label_202120;
        case 0x202124u: goto label_202124;
        case 0x202128u: goto label_202128;
        case 0x20212cu: goto label_20212c;
        case 0x202130u: goto label_202130;
        case 0x202134u: goto label_202134;
        case 0x202138u: goto label_202138;
        case 0x20213cu: goto label_20213c;
        case 0x202140u: goto label_202140;
        case 0x202144u: goto label_202144;
        case 0x202148u: goto label_202148;
        case 0x20214cu: goto label_20214c;
        case 0x202150u: goto label_202150;
        case 0x202154u: goto label_202154;
        case 0x202158u: goto label_202158;
        case 0x20215cu: goto label_20215c;
        case 0x202160u: goto label_202160;
        case 0x202164u: goto label_202164;
        case 0x202168u: goto label_202168;
        case 0x20216cu: goto label_20216c;
        case 0x202170u: goto label_202170;
        case 0x202174u: goto label_202174;
        case 0x202178u: goto label_202178;
        case 0x20217cu: goto label_20217c;
        case 0x202180u: goto label_202180;
        case 0x202184u: goto label_202184;
        case 0x202188u: goto label_202188;
        case 0x20218cu: goto label_20218c;
        case 0x202190u: goto label_202190;
        case 0x202194u: goto label_202194;
        case 0x202198u: goto label_202198;
        case 0x20219cu: goto label_20219c;
        case 0x2021a0u: goto label_2021a0;
        case 0x2021a4u: goto label_2021a4;
        case 0x2021a8u: goto label_2021a8;
        case 0x2021acu: goto label_2021ac;
        case 0x2021b0u: goto label_2021b0;
        case 0x2021b4u: goto label_2021b4;
        case 0x2021b8u: goto label_2021b8;
        case 0x2021bcu: goto label_2021bc;
        case 0x2021c0u: goto label_2021c0;
        case 0x2021c4u: goto label_2021c4;
        case 0x2021c8u: goto label_2021c8;
        case 0x2021ccu: goto label_2021cc;
        case 0x2021d0u: goto label_2021d0;
        case 0x2021d4u: goto label_2021d4;
        case 0x2021d8u: goto label_2021d8;
        case 0x2021dcu: goto label_2021dc;
        case 0x2021e0u: goto label_2021e0;
        case 0x2021e4u: goto label_2021e4;
        case 0x2021e8u: goto label_2021e8;
        case 0x2021ecu: goto label_2021ec;
        case 0x2021f0u: goto label_2021f0;
        case 0x2021f4u: goto label_2021f4;
        case 0x2021f8u: goto label_2021f8;
        case 0x2021fcu: goto label_2021fc;
        case 0x202200u: goto label_202200;
        case 0x202204u: goto label_202204;
        case 0x202208u: goto label_202208;
        case 0x20220cu: goto label_20220c;
        case 0x202210u: goto label_202210;
        case 0x202214u: goto label_202214;
        case 0x202218u: goto label_202218;
        case 0x20221cu: goto label_20221c;
        case 0x202220u: goto label_202220;
        case 0x202224u: goto label_202224;
        case 0x202228u: goto label_202228;
        case 0x20222cu: goto label_20222c;
        case 0x202230u: goto label_202230;
        case 0x202234u: goto label_202234;
        case 0x202238u: goto label_202238;
        case 0x20223cu: goto label_20223c;
        case 0x202240u: goto label_202240;
        case 0x202244u: goto label_202244;
        case 0x202248u: goto label_202248;
        case 0x20224cu: goto label_20224c;
        case 0x202250u: goto label_202250;
        case 0x202254u: goto label_202254;
        case 0x202258u: goto label_202258;
        case 0x20225cu: goto label_20225c;
        case 0x202260u: goto label_202260;
        case 0x202264u: goto label_202264;
        case 0x202268u: goto label_202268;
        case 0x20226cu: goto label_20226c;
        case 0x202270u: goto label_202270;
        case 0x202274u: goto label_202274;
        case 0x202278u: goto label_202278;
        case 0x20227cu: goto label_20227c;
        case 0x202280u: goto label_202280;
        case 0x202284u: goto label_202284;
        case 0x202288u: goto label_202288;
        case 0x20228cu: goto label_20228c;
        case 0x202290u: goto label_202290;
        case 0x202294u: goto label_202294;
        case 0x202298u: goto label_202298;
        case 0x20229cu: goto label_20229c;
        case 0x2022a0u: goto label_2022a0;
        case 0x2022a4u: goto label_2022a4;
        case 0x2022a8u: goto label_2022a8;
        case 0x2022acu: goto label_2022ac;
        case 0x2022b0u: goto label_2022b0;
        case 0x2022b4u: goto label_2022b4;
        case 0x2022b8u: goto label_2022b8;
        case 0x2022bcu: goto label_2022bc;
        case 0x2022c0u: goto label_2022c0;
        case 0x2022c4u: goto label_2022c4;
        case 0x2022c8u: goto label_2022c8;
        case 0x2022ccu: goto label_2022cc;
        case 0x2022d0u: goto label_2022d0;
        case 0x2022d4u: goto label_2022d4;
        case 0x2022d8u: goto label_2022d8;
        case 0x2022dcu: goto label_2022dc;
        case 0x2022e0u: goto label_2022e0;
        case 0x2022e4u: goto label_2022e4;
        case 0x2022e8u: goto label_2022e8;
        case 0x2022ecu: goto label_2022ec;
        case 0x2022f0u: goto label_2022f0;
        case 0x2022f4u: goto label_2022f4;
        case 0x2022f8u: goto label_2022f8;
        case 0x2022fcu: goto label_2022fc;
        case 0x202300u: goto label_202300;
        case 0x202304u: goto label_202304;
        case 0x202308u: goto label_202308;
        case 0x20230cu: goto label_20230c;
        case 0x202310u: goto label_202310;
        case 0x202314u: goto label_202314;
        case 0x202318u: goto label_202318;
        case 0x20231cu: goto label_20231c;
        case 0x202320u: goto label_202320;
        case 0x202324u: goto label_202324;
        case 0x202328u: goto label_202328;
        case 0x20232cu: goto label_20232c;
        case 0x202330u: goto label_202330;
        case 0x202334u: goto label_202334;
        case 0x202338u: goto label_202338;
        case 0x20233cu: goto label_20233c;
        case 0x202340u: goto label_202340;
        case 0x202344u: goto label_202344;
        case 0x202348u: goto label_202348;
        case 0x20234cu: goto label_20234c;
        case 0x202350u: goto label_202350;
        case 0x202354u: goto label_202354;
        case 0x202358u: goto label_202358;
        case 0x20235cu: goto label_20235c;
        case 0x202360u: goto label_202360;
        case 0x202364u: goto label_202364;
        case 0x202368u: goto label_202368;
        case 0x20236cu: goto label_20236c;
        case 0x202370u: goto label_202370;
        case 0x202374u: goto label_202374;
        case 0x202378u: goto label_202378;
        case 0x20237cu: goto label_20237c;
        case 0x202380u: goto label_202380;
        case 0x202384u: goto label_202384;
        case 0x202388u: goto label_202388;
        case 0x20238cu: goto label_20238c;
        case 0x202390u: goto label_202390;
        case 0x202394u: goto label_202394;
        case 0x202398u: goto label_202398;
        case 0x20239cu: goto label_20239c;
        case 0x2023a0u: goto label_2023a0;
        case 0x2023a4u: goto label_2023a4;
        case 0x2023a8u: goto label_2023a8;
        case 0x2023acu: goto label_2023ac;
        case 0x2023b0u: goto label_2023b0;
        case 0x2023b4u: goto label_2023b4;
        case 0x2023b8u: goto label_2023b8;
        case 0x2023bcu: goto label_2023bc;
        case 0x2023c0u: goto label_2023c0;
        case 0x2023c4u: goto label_2023c4;
        case 0x2023c8u: goto label_2023c8;
        case 0x2023ccu: goto label_2023cc;
        case 0x2023d0u: goto label_2023d0;
        case 0x2023d4u: goto label_2023d4;
        case 0x2023d8u: goto label_2023d8;
        case 0x2023dcu: goto label_2023dc;
        case 0x2023e0u: goto label_2023e0;
        case 0x2023e4u: goto label_2023e4;
        case 0x2023e8u: goto label_2023e8;
        case 0x2023ecu: goto label_2023ec;
        case 0x2023f0u: goto label_2023f0;
        case 0x2023f4u: goto label_2023f4;
        case 0x2023f8u: goto label_2023f8;
        case 0x2023fcu: goto label_2023fc;
        case 0x202400u: goto label_202400;
        case 0x202404u: goto label_202404;
        case 0x202408u: goto label_202408;
        case 0x20240cu: goto label_20240c;
        case 0x202410u: goto label_202410;
        case 0x202414u: goto label_202414;
        case 0x202418u: goto label_202418;
        case 0x20241cu: goto label_20241c;
        case 0x202420u: goto label_202420;
        case 0x202424u: goto label_202424;
        case 0x202428u: goto label_202428;
        case 0x20242cu: goto label_20242c;
        case 0x202430u: goto label_202430;
        case 0x202434u: goto label_202434;
        case 0x202438u: goto label_202438;
        case 0x20243cu: goto label_20243c;
        case 0x202440u: goto label_202440;
        case 0x202444u: goto label_202444;
        case 0x202448u: goto label_202448;
        case 0x20244cu: goto label_20244c;
        case 0x202450u: goto label_202450;
        case 0x202454u: goto label_202454;
        case 0x202458u: goto label_202458;
        case 0x20245cu: goto label_20245c;
        case 0x202460u: goto label_202460;
        case 0x202464u: goto label_202464;
        case 0x202468u: goto label_202468;
        case 0x20246cu: goto label_20246c;
        case 0x202470u: goto label_202470;
        case 0x202474u: goto label_202474;
        case 0x202478u: goto label_202478;
        case 0x20247cu: goto label_20247c;
        case 0x202480u: goto label_202480;
        case 0x202484u: goto label_202484;
        case 0x202488u: goto label_202488;
        case 0x20248cu: goto label_20248c;
        case 0x202490u: goto label_202490;
        case 0x202494u: goto label_202494;
        case 0x202498u: goto label_202498;
        case 0x20249cu: goto label_20249c;
        case 0x2024a0u: goto label_2024a0;
        case 0x2024a4u: goto label_2024a4;
        case 0x2024a8u: goto label_2024a8;
        case 0x2024acu: goto label_2024ac;
        case 0x2024b0u: goto label_2024b0;
        case 0x2024b4u: goto label_2024b4;
        case 0x2024b8u: goto label_2024b8;
        case 0x2024bcu: goto label_2024bc;
        case 0x2024c0u: goto label_2024c0;
        case 0x2024c4u: goto label_2024c4;
        case 0x2024c8u: goto label_2024c8;
        case 0x2024ccu: goto label_2024cc;
        case 0x2024d0u: goto label_2024d0;
        case 0x2024d4u: goto label_2024d4;
        case 0x2024d8u: goto label_2024d8;
        case 0x2024dcu: goto label_2024dc;
        case 0x2024e0u: goto label_2024e0;
        case 0x2024e4u: goto label_2024e4;
        case 0x2024e8u: goto label_2024e8;
        case 0x2024ecu: goto label_2024ec;
        case 0x2024f0u: goto label_2024f0;
        case 0x2024f4u: goto label_2024f4;
        case 0x2024f8u: goto label_2024f8;
        case 0x2024fcu: goto label_2024fc;
        case 0x202500u: goto label_202500;
        case 0x202504u: goto label_202504;
        case 0x202508u: goto label_202508;
        case 0x20250cu: goto label_20250c;
        case 0x202510u: goto label_202510;
        case 0x202514u: goto label_202514;
        case 0x202518u: goto label_202518;
        case 0x20251cu: goto label_20251c;
        case 0x202520u: goto label_202520;
        case 0x202524u: goto label_202524;
        case 0x202528u: goto label_202528;
        case 0x20252cu: goto label_20252c;
        case 0x202530u: goto label_202530;
        case 0x202534u: goto label_202534;
        case 0x202538u: goto label_202538;
        case 0x20253cu: goto label_20253c;
        case 0x202540u: goto label_202540;
        case 0x202544u: goto label_202544;
        case 0x202548u: goto label_202548;
        case 0x20254cu: goto label_20254c;
        case 0x202550u: goto label_202550;
        case 0x202554u: goto label_202554;
        case 0x202558u: goto label_202558;
        case 0x20255cu: goto label_20255c;
        case 0x202560u: goto label_202560;
        case 0x202564u: goto label_202564;
        case 0x202568u: goto label_202568;
        case 0x20256cu: goto label_20256c;
        case 0x202570u: goto label_202570;
        case 0x202574u: goto label_202574;
        case 0x202578u: goto label_202578;
        case 0x20257cu: goto label_20257c;
        case 0x202580u: goto label_202580;
        case 0x202584u: goto label_202584;
        case 0x202588u: goto label_202588;
        case 0x20258cu: goto label_20258c;
        case 0x202590u: goto label_202590;
        case 0x202594u: goto label_202594;
        case 0x202598u: goto label_202598;
        case 0x20259cu: goto label_20259c;
        case 0x2025a0u: goto label_2025a0;
        case 0x2025a4u: goto label_2025a4;
        case 0x2025a8u: goto label_2025a8;
        case 0x2025acu: goto label_2025ac;
        case 0x2025b0u: goto label_2025b0;
        case 0x2025b4u: goto label_2025b4;
        case 0x2025b8u: goto label_2025b8;
        case 0x2025bcu: goto label_2025bc;
        case 0x2025c0u: goto label_2025c0;
        case 0x2025c4u: goto label_2025c4;
        case 0x2025c8u: goto label_2025c8;
        case 0x2025ccu: goto label_2025cc;
        case 0x2025d0u: goto label_2025d0;
        case 0x2025d4u: goto label_2025d4;
        case 0x2025d8u: goto label_2025d8;
        case 0x2025dcu: goto label_2025dc;
        case 0x2025e0u: goto label_2025e0;
        case 0x2025e4u: goto label_2025e4;
        case 0x2025e8u: goto label_2025e8;
        case 0x2025ecu: goto label_2025ec;
        case 0x2025f0u: goto label_2025f0;
        case 0x2025f4u: goto label_2025f4;
        case 0x2025f8u: goto label_2025f8;
        case 0x2025fcu: goto label_2025fc;
        case 0x202600u: goto label_202600;
        case 0x202604u: goto label_202604;
        case 0x202608u: goto label_202608;
        case 0x20260cu: goto label_20260c;
        case 0x202610u: goto label_202610;
        case 0x202614u: goto label_202614;
        case 0x202618u: goto label_202618;
        case 0x20261cu: goto label_20261c;
        case 0x202620u: goto label_202620;
        case 0x202624u: goto label_202624;
        case 0x202628u: goto label_202628;
        case 0x20262cu: goto label_20262c;
        case 0x202630u: goto label_202630;
        case 0x202634u: goto label_202634;
        case 0x202638u: goto label_202638;
        case 0x20263cu: goto label_20263c;
        case 0x202640u: goto label_202640;
        case 0x202644u: goto label_202644;
        case 0x202648u: goto label_202648;
        case 0x20264cu: goto label_20264c;
        case 0x202650u: goto label_202650;
        case 0x202654u: goto label_202654;
        default: return;
    }

label_201e88:
    // 0x201e88: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x201e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_201e8c:
    // 0x201e8c: 0x34655400  ori         $a1, $v1, 0x5400
    ctx->pc = 0x201e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21504);
label_201e90:
    // 0x201e90: 0x8f8690f0  lw          $a2, -0x6F10($gp)
    ctx->pc = 0x201e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_201e94:
    // 0x201e94: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x201e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
label_201e98:
    // 0x201e98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x201e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201e9c:
    // 0x201e9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x201e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_201ea0:
    // 0x201ea0: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x201ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_201ea4:
    // 0x201ea4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_201ea8:
    // 0x201ea8: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x201ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_201eac:
    // 0x201eac: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x201eacu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_201eb0:
    // 0x201eb0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x201eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_201eb4:
    // 0x201eb4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x201eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_201eb8:
    // 0x201eb8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x201eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_201ebc:
    // 0x201ebc: 0xace60144  sw          $a2, 0x144($a3)
    ctx->pc = 0x201ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 6));
label_201ec0:
    // 0x201ec0: 0xace50140  sw          $a1, 0x140($a3)
    ctx->pc = 0x201ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 5));
label_201ec4:
    // 0x201ec4: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x201ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
label_201ec8:
    // 0x201ec8: 0x10000003  b           . + 4 + (0x3 << 2)
label_201ecc:
    if (ctx->pc == 0x201ECCu) {
        ctx->pc = 0x201ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EC8u;
        // 0x201ecc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201ED0u;
        goto label_201ed0;
    }
    ctx->pc = 0x201EC8u;
    {
        const bool branch_taken_0x201ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EC8u;
        // 0x201ecc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ec8) {
            ctx->pc = 0x201ED8u;
            goto label_201ed8;
        }
    }
    ctx->pc = 0x201ED0u;
label_201ed0:
    // 0x201ed0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x201ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201ed4:
    // 0x201ed4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x201ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_201ed8:
    // 0x201ed8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x201ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_201edc:
    // 0x201edc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_201ee0:
    // 0x201ee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_201ee4:
    // 0x201ee4: 0x3e00008  jr          $ra
label_201ee8:
    if (ctx->pc == 0x201EE8u) {
        ctx->pc = 0x201EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EE4u;
        // 0x201ee8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201EECu;
        goto label_201eec;
    }
    ctx->pc = 0x201EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EE4u;
        // 0x201ee8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201EECu;
label_201eec:
    // 0x201eec: 0x0  nop
    ctx->pc = 0x201eecu;
    // NOP
label_201ef0:
    // 0x201ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x201ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_201ef4:
    // 0x201ef4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x201ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201ef8:
    // 0x201ef8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x201ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_201efc:
    // 0x201efc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x201efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_201f00:
    // 0x201f00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x201f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_201f04:
    // 0x201f04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x201f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201f08:
    // 0x201f08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_201f0c:
    // 0x201f0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x201f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_201f10:
    // 0x201f10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_201f14:
    // 0x201f14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x201f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201f18:
    // 0x201f18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201f1c:
    // 0x201f1c: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
label_201f20:
    if (ctx->pc == 0x201F20u) {
        ctx->pc = 0x201F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F1Cu;
        // 0x201f20: 0x24100019  addiu       $s0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F24u;
        goto label_201f24;
    }
    ctx->pc = 0x201F1Cu;
    {
        const bool branch_taken_0x201f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F1Cu;
        // 0x201f20: 0x24100019  addiu       $s0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f1c) {
            ctx->pc = 0x201FF4u;
            goto label_201ff4;
        }
    }
    ctx->pc = 0x201F24u;
label_201f24:
    // 0x201f24: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x201f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_201f28:
    // 0x201f28: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x201f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_201f2c:
    // 0x201f2c: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
label_201f30:
    if (ctx->pc == 0x201F30u) {
        ctx->pc = 0x201F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F2Cu;
        // 0x201f30: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F34u;
        goto label_201f34;
    }
    ctx->pc = 0x201F2Cu;
    {
        const bool branch_taken_0x201f2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x201F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F2Cu;
        // 0x201f30: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f2c) {
            ctx->pc = 0x201FB8u;
            goto label_201fb8;
        }
    }
    ctx->pc = 0x201F34u;
label_201f34:
    // 0x201f34: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
label_201f38:
    if (ctx->pc == 0x201F38u) {
        ctx->pc = 0x201F3Cu;
        goto label_201f3c;
    }
    ctx->pc = 0x201F34u;
    {
        const bool branch_taken_0x201f34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x201f34) {
            ctx->pc = 0x201FB0u;
            goto label_201fb0;
        }
    }
    ctx->pc = 0x201F3Cu;
label_201f3c:
    // 0x201f3c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x201f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_201f40:
    // 0x201f40: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
label_201f44:
    if (ctx->pc == 0x201F44u) {
        ctx->pc = 0x201F48u;
        goto label_201f48;
    }
    ctx->pc = 0x201F40u;
    {
        const bool branch_taken_0x201f40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x201f40) {
            ctx->pc = 0x201FA8u;
            goto label_201fa8;
        }
    }
    ctx->pc = 0x201F48u;
label_201f48:
    // 0x201f48: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x201f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_201f4c:
    // 0x201f4c: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
label_201f50:
    if (ctx->pc == 0x201F50u) {
        ctx->pc = 0x201F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F4Cu;
        // 0x201f50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F54u;
        goto label_201f54;
    }
    ctx->pc = 0x201F4Cu;
    {
        const bool branch_taken_0x201f4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x201F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F4Cu;
        // 0x201f50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f4c) {
            ctx->pc = 0x201FA0u;
            goto label_201fa0;
        }
    }
    ctx->pc = 0x201F54u;
label_201f54:
    // 0x201f54: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
label_201f58:
    if (ctx->pc == 0x201F58u) {
        ctx->pc = 0x201F5Cu;
        goto label_201f5c;
    }
    ctx->pc = 0x201F54u;
    {
        const bool branch_taken_0x201f54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x201f54) {
            ctx->pc = 0x201F8Cu;
            goto label_201f8c;
        }
    }
    ctx->pc = 0x201F5Cu;
label_201f5c:
    // 0x201f5c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_201f60:
    if (ctx->pc == 0x201F60u) {
        ctx->pc = 0x201F64u;
        goto label_201f64;
    }
    ctx->pc = 0x201F5Cu;
    {
        const bool branch_taken_0x201f5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x201f5c) {
            ctx->pc = 0x201F6Cu;
            goto label_201f6c;
        }
    }
    ctx->pc = 0x201F64u;
label_201f64:
    // 0x201f64: 0x10000024  b           . + 4 + (0x24 << 2)
label_201f68:
    if (ctx->pc == 0x201F68u) {
        ctx->pc = 0x201F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F64u;
        // 0x201f68: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F6Cu;
        goto label_201f6c;
    }
    ctx->pc = 0x201F64u;
    {
        const bool branch_taken_0x201f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F64u;
        // 0x201f68: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f64) {
            ctx->pc = 0x201FF8u;
            goto label_201ff8;
        }
    }
    ctx->pc = 0x201F6Cu;
label_201f6c:
    // 0x201f6c: 0x8cc30480  lw          $v1, 0x480($a2)
    ctx->pc = 0x201f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
label_201f70:
    // 0x201f70: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x201f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_201f74:
    // 0x201f74: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x201f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_201f78:
    // 0x201f78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x201f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_201f7c:
    // 0x201f7c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_201f80:
    if (ctx->pc == 0x201F80u) {
        ctx->pc = 0x201F84u;
        goto label_201f84;
    }
    ctx->pc = 0x201F7Cu;
    {
        const bool branch_taken_0x201f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201f7c) {
            ctx->pc = 0x201FF4u;
            goto label_201ff4;
        }
    }
    ctx->pc = 0x201F84u;
label_201f84:
    // 0x201f84: 0x1000001b  b           . + 4 + (0x1B << 2)
label_201f88:
    if (ctx->pc == 0x201F88u) {
        ctx->pc = 0x201F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F84u;
        // 0x201f88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F8Cu;
        goto label_201f8c;
    }
    ctx->pc = 0x201F84u;
    {
        const bool branch_taken_0x201f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F84u;
        // 0x201f88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f84) {
            ctx->pc = 0x201FF4u;
            goto label_201ff4;
        }
    }
    ctx->pc = 0x201F8Cu;
label_201f8c:
    // 0x201f8c: 0x8cc2048c  lw          $v0, 0x48C($a2)
    ctx->pc = 0x201f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1164)));
label_201f90:
    // 0x201f90: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_201f94:
    if (ctx->pc == 0x201F94u) {
        ctx->pc = 0x201F98u;
        goto label_201f98;
    }
    ctx->pc = 0x201F90u;
    {
        const bool branch_taken_0x201f90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x201f90) {
            ctx->pc = 0x201FF4u;
            goto label_201ff4;
        }
    }
    ctx->pc = 0x201F98u;
label_201f98:
    // 0x201f98: 0x10000016  b           . + 4 + (0x16 << 2)
label_201f9c:
    if (ctx->pc == 0x201F9Cu) {
        ctx->pc = 0x201F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F98u;
        // 0x201f9c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201FA0u;
        goto label_201fa0;
    }
    ctx->pc = 0x201F98u;
    {
        const bool branch_taken_0x201f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F98u;
        // 0x201f9c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f98) {
            ctx->pc = 0x201FF4u;
            goto label_201ff4;
        }
    }
    ctx->pc = 0x201FA0u;
label_201fa0:
    // 0x201fa0: 0x10000014  b           . + 4 + (0x14 << 2)
label_201fa4:
    if (ctx->pc == 0x201FA4u) {
        ctx->pc = 0x201FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FA0u;
        // 0x201fa4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201FA8u;
        goto label_201fa8;
    }
    ctx->pc = 0x201FA0u;
    {
        const bool branch_taken_0x201fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FA0u;
        // 0x201fa4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fa0) {
            ctx->pc = 0x201FF4u;
            goto label_201ff4;
        }
    }
    ctx->pc = 0x201FA8u;
label_201fa8:
    // 0x201fa8: 0x10000012  b           . + 4 + (0x12 << 2)
label_201fac:
    if (ctx->pc == 0x201FACu) {
        ctx->pc = 0x201FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FA8u;
        // 0x201fac: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201FB0u;
        goto label_201fb0;
    }
    ctx->pc = 0x201FA8u;
    {
        const bool branch_taken_0x201fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FA8u;
        // 0x201fac: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fa8) {
            ctx->pc = 0x201FF4u;
            goto label_201ff4;
        }
    }
    ctx->pc = 0x201FB0u;
label_201fb0:
    // 0x201fb0: 0x10000010  b           . + 4 + (0x10 << 2)
label_201fb4:
    if (ctx->pc == 0x201FB4u) {
        ctx->pc = 0x201FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FB0u;
        // 0x201fb4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201FB8u;
        goto label_201fb8;
    }
    ctx->pc = 0x201FB0u;
    {
        const bool branch_taken_0x201fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FB0u;
        // 0x201fb4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fb0) {
            ctx->pc = 0x201FF4u;
            goto label_201ff4;
        }
    }
    ctx->pc = 0x201FB8u;
label_201fb8:
    // 0x201fb8: 0xc083e24  jal         func_20F890
label_201fbc:
    if (ctx->pc == 0x201FBCu) {
        ctx->pc = 0x201FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FB8u;
        // 0x201fbc: 0x8f8490f0  lw          $a0, -0x6F10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201FC0u;
        goto label_201fc0;
    }
    ctx->pc = 0x201FB8u;
    SET_GPR_U32(ctx, 31, 0x201FC0u);
    ctx->pc = 0x201FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FB8u;
    // 0x201fbc: 0x8f8490f0  lw          $a0, -0x6F10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F890u;
    { ctx->pc = 0x20f890; return; }
    ctx->pc = 0x201FC0u;
label_201fc0:
    // 0x201fc0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_201fc4:
    if (ctx->pc == 0x201FC4u) {
        ctx->pc = 0x201FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FC0u;
        // 0x201fc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201FC8u;
        goto label_201fc8;
    }
    ctx->pc = 0x201FC0u;
    {
        const bool branch_taken_0x201fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FC0u;
        // 0x201fc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fc0) {
            ctx->pc = 0x201FECu;
            goto label_201fec;
        }
    }
    ctx->pc = 0x201FC8u;
label_201fc8:
    // 0x201fc8: 0xc083e5c  jal         func_20F970
label_201fcc:
    if (ctx->pc == 0x201FCCu) {
        ctx->pc = 0x201FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FC8u;
        // 0x201fcc: 0x8f8490f0  lw          $a0, -0x6F10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201FD0u;
        goto label_201fd0;
    }
    ctx->pc = 0x201FC8u;
    SET_GPR_U32(ctx, 31, 0x201FD0u);
    ctx->pc = 0x201FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FC8u;
    // 0x201fcc: 0x8f8490f0  lw          $a0, -0x6F10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F970u;
    { ctx->pc = 0x20f970; return; }
    ctx->pc = 0x201FD0u;
label_201fd0:
    // 0x201fd0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_201fd4:
    if (ctx->pc == 0x201FD4u) {
        ctx->pc = 0x201FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FD0u;
        // 0x201fd4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201FD8u;
        goto label_201fd8;
    }
    ctx->pc = 0x201FD0u;
    {
        const bool branch_taken_0x201fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FD0u;
        // 0x201fd4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fd0) {
            ctx->pc = 0x201FF4u;
            goto label_201ff4;
        }
    }
    ctx->pc = 0x201FD8u;
label_201fd8:
    // 0x201fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x201fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_201fdc:
    // 0x201fdc: 0xc0809d8  jal         func_202760
label_201fe0:
    if (ctx->pc == 0x201FE0u) {
        ctx->pc = 0x201FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FDCu;
        // 0x201fe0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201FE4u;
        goto label_201fe4;
    }
    ctx->pc = 0x201FDCu;
    SET_GPR_U32(ctx, 31, 0x201FE4u);
    ctx->pc = 0x201FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FDCu;
    // 0x201fe0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202760u;
    { ctx->pc = 0x202760; return; }
    ctx->pc = 0x201FE4u;
label_201fe4:
    // 0x201fe4: 0x10000003  b           . + 4 + (0x3 << 2)
label_201fe8:
    if (ctx->pc == 0x201FE8u) {
        ctx->pc = 0x201FECu;
        goto label_201fec;
    }
    ctx->pc = 0x201FE4u;
    {
        const bool branch_taken_0x201fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201fe4) {
            ctx->pc = 0x201FF4u;
            goto label_201ff4;
        }
    }
    ctx->pc = 0x201FECu;
label_201fec:
    // 0x201fec: 0xc0809d8  jal         func_202760
label_201ff0:
    if (ctx->pc == 0x201FF0u) {
        ctx->pc = 0x201FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FECu;
        // 0x201ff0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201FF4u;
        goto label_201ff4;
    }
    ctx->pc = 0x201FECu;
    SET_GPR_U32(ctx, 31, 0x201FF4u);
    ctx->pc = 0x201FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FECu;
    // 0x201ff0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202760u;
    { ctx->pc = 0x202760; return; }
    ctx->pc = 0x201FF4u;
label_201ff4:
    // 0x201ff4: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x201ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_201ff8:
    // 0x201ff8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x201ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201ffc:
    // 0x201ffc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x201ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_202000:
    // 0x202000: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x202000u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_202004:
    // 0x202004: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x202004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_202008:
    // 0x202008: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x202008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20200c:
    // 0x20200c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20200cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_202010:
    // 0x202010: 0x3e00008  jr          $ra
label_202014:
    if (ctx->pc == 0x202014u) {
        ctx->pc = 0x202014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202010u;
        // 0x202014: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202018u;
        goto label_202018;
    }
    ctx->pc = 0x202010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202010u;
        // 0x202014: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202018u;
label_202018:
    // 0x202018: 0x0  nop
    ctx->pc = 0x202018u;
    // NOP
label_20201c:
    // 0x20201c: 0x0  nop
    ctx->pc = 0x20201cu;
    // NOP
label_202020:
    // 0x202020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x202020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_202024:
    // 0x202024: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x202024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_202028:
    // 0x202028: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x202028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_20202c:
    // 0x20202c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20202cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_202030:
    // 0x202030: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x202030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_202034:
    // 0x202034: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x202034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
label_202038:
    // 0x202038: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x202038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20203c:
    // 0x20203c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20203cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_202040:
    // 0x202040: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x202040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_202044:
    // 0x202044: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x202044u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_202048:
    // 0x202048: 0x8c24f468  lw          $a0, -0xB98($at)
    ctx->pc = 0x202048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_20204c:
    // 0x20204c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x20204cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_202050:
    // 0x202050: 0x2610f440  addiu       $s0, $s0, -0xBC0
    ctx->pc = 0x202050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964288));
label_202054:
    // 0x202054: 0x2631f460  addiu       $s1, $s1, -0xBA0
    ctx->pc = 0x202054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964320));
label_202058:
    // 0x202058: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x202058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_20205c:
    // 0x20205c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20205cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_202060:
    // 0x202060: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x202060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_202064:
    // 0x202064: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x202064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_202068:
    // 0x202068: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x202068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_20206c:
    // 0x20206c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x20206cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_202070:
    // 0x202070: 0xc080f84  jal         func_203E10
label_202074:
    if (ctx->pc == 0x202074u) {
        ctx->pc = 0x202074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202070u;
        // 0x202074: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202078u;
        goto label_202078;
    }
    ctx->pc = 0x202070u;
    SET_GPR_U32(ctx, 31, 0x202078u);
    ctx->pc = 0x202074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202070u;
    // 0x202074: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E10u;
    { ctx->pc = 0x203e10; return; }
    ctx->pc = 0x202078u;
label_202078:
    // 0x202078: 0xc07a854  jal         func_1EA150
label_20207c:
    if (ctx->pc == 0x20207Cu) {
        ctx->pc = 0x202080u;
        goto label_202080;
    }
    ctx->pc = 0x202078u;
    SET_GPR_U32(ctx, 31, 0x202080u);
    ctx->pc = 0x1EA150u;
    { ctx->pc = 0x1ea150; return; }
    ctx->pc = 0x202080u;
label_202080:
    // 0x202080: 0x10000059  b           . + 4 + (0x59 << 2)
label_202084:
    if (ctx->pc == 0x202084u) {
        ctx->pc = 0x202088u;
        goto label_202088;
    }
    ctx->pc = 0x202080u;
    {
        const bool branch_taken_0x202080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202080) {
            ctx->pc = 0x2021E8u;
            goto label_2021e8;
        }
    }
    ctx->pc = 0x202088u;
label_202088:
    // 0x202088: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x202088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20208c:
    // 0x20208c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20208cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_202090:
    // 0x202090: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_202094:
    if (ctx->pc == 0x202094u) {
        ctx->pc = 0x202094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202090u;
        // 0x202094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202098u;
        goto label_202098;
    }
    ctx->pc = 0x202090u;
    {
        const bool branch_taken_0x202090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202090u;
        // 0x202094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202090) {
            ctx->pc = 0x2020A0u;
            goto label_2020a0;
        }
    }
    ctx->pc = 0x202098u;
label_202098:
    // 0x202098: 0xc080894  jal         func_202250
label_20209c:
    if (ctx->pc == 0x20209Cu) {
        ctx->pc = 0x20209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202098u;
        // 0x20209c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2020A0u;
        goto label_2020a0;
    }
    ctx->pc = 0x202098u;
    SET_GPR_U32(ctx, 31, 0x2020A0u);
    ctx->pc = 0x20209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202098u;
    // 0x20209c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202250u;
    goto label_202250;
    ctx->pc = 0x2020A0u;
label_2020a0:
    // 0x2020a0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2020a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2020a4:
    // 0x2020a4: 0x8c22f460  lw          $v0, -0xBA0($at)
    ctx->pc = 0x2020a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964320)));
label_2020a8:
    // 0x2020a8: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x2020a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
label_2020ac:
    // 0x2020ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2020acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2020b0:
    // 0x2020b0: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
label_2020b4:
    if (ctx->pc == 0x2020B4u) {
        ctx->pc = 0x2020B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020B0u;
        // 0x2020b4: 0x2673f460  addiu       $s3, $s3, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2020B8u;
        goto label_2020b8;
    }
    ctx->pc = 0x2020B0u;
    {
        const bool branch_taken_0x2020b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2020B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020B0u;
        // 0x2020b4: 0x2673f460  addiu       $s3, $s3, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020b0) {
            ctx->pc = 0x2020D8u;
            goto label_2020d8;
        }
    }
    ctx->pc = 0x2020B8u;
label_2020b8:
    // 0x2020b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2020bc:
    if (ctx->pc == 0x2020BCu) {
        ctx->pc = 0x2020C0u;
        goto label_2020c0;
    }
    ctx->pc = 0x2020B8u;
    {
        const bool branch_taken_0x2020b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2020b8) {
            ctx->pc = 0x2020C8u;
            goto label_2020c8;
        }
    }
    ctx->pc = 0x2020C0u;
label_2020c0:
    // 0x2020c0: 0x10000028  b           . + 4 + (0x28 << 2)
label_2020c4:
    if (ctx->pc == 0x2020C4u) {
        ctx->pc = 0x2020C8u;
        goto label_2020c8;
    }
    ctx->pc = 0x2020C0u;
    {
        const bool branch_taken_0x2020c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2020c0) {
            ctx->pc = 0x202164u;
            goto label_202164;
        }
    }
    ctx->pc = 0x2020C8u;
label_2020c8:
    // 0x2020c8: 0xc0810f0  jal         func_2043C0
label_2020cc:
    if (ctx->pc == 0x2020CCu) {
        ctx->pc = 0x2020CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020C8u;
        // 0x2020cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2020D0u;
        goto label_2020d0;
    }
    ctx->pc = 0x2020C8u;
    SET_GPR_U32(ctx, 31, 0x2020D0u);
    ctx->pc = 0x2020CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2020C8u;
    // 0x2020cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2043C0u;
    { ctx->pc = 0x2043c0; return; }
    ctx->pc = 0x2020D0u;
label_2020d0:
    // 0x2020d0: 0x10000024  b           . + 4 + (0x24 << 2)
label_2020d4:
    if (ctx->pc == 0x2020D4u) {
        ctx->pc = 0x2020D8u;
        goto label_2020d8;
    }
    ctx->pc = 0x2020D0u;
    {
        const bool branch_taken_0x2020d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2020d0) {
            ctx->pc = 0x202164u;
            goto label_202164;
        }
    }
    ctx->pc = 0x2020D8u;
label_2020d8:
    // 0x2020d8: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x2020d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_2020dc:
    // 0x2020dc: 0xc06c672  jal         func_1B19C8
label_2020e0:
    if (ctx->pc == 0x2020E0u) {
        ctx->pc = 0x2020E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020DCu;
        // 0x2020e0: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2020E4u;
        goto label_2020e4;
    }
    ctx->pc = 0x2020DCu;
    SET_GPR_U32(ctx, 31, 0x2020E4u);
    ctx->pc = 0x2020E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2020DCu;
    // 0x2020e0: 0x27a60058  addiu       $a2, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B19C8u;
    { ctx->pc = 0x1b19c8; return; }
    ctx->pc = 0x2020E4u;
label_2020e4:
    // 0x2020e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2020e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2020e8:
    // 0x2020e8: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_2020ec:
    if (ctx->pc == 0x2020ECu) {
        ctx->pc = 0x2020F0u;
        goto label_2020f0;
    }
    ctx->pc = 0x2020E8u;
    {
        const bool branch_taken_0x2020e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2020e8) {
            ctx->pc = 0x202164u;
            goto label_202164;
        }
    }
    ctx->pc = 0x2020F0u;
label_2020f0:
    // 0x2020f0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2020f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2020f4:
    // 0x2020f4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2020f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2020f8:
    // 0x2020f8: 0x2442d310  addiu       $v0, $v0, -0x2CF0
    ctx->pc = 0x2020f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955792));
label_2020fc:
    // 0x2020fc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2020fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_202100:
    // 0x202100: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x202100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_202104:
    // 0x202104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x202104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_202108:
    // 0x202108: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x202108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20210c:
    // 0x20210c: 0x40f809  jalr        $v0
label_202110:
    if (ctx->pc == 0x202110u) {
        ctx->pc = 0x202110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20210Cu;
        // 0x202110: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202114u;
        goto label_202114;
    }
    ctx->pc = 0x20210Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x202114u);
        ctx->pc = 0x202110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20210Cu;
        // 0x202110: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20210Cu, 0x202114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x202114u;
label_202114:
    // 0x202114: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_202118:
    if (ctx->pc == 0x202118u) {
        ctx->pc = 0x20211Cu;
        goto label_20211c;
    }
    ctx->pc = 0x202114u;
    {
        const bool branch_taken_0x202114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202114) {
            ctx->pc = 0x202128u;
            goto label_202128;
        }
    }
    ctx->pc = 0x20211Cu;
label_20211c:
    // 0x20211c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20211cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_202120:
    // 0x202120: 0x1000000f  b           . + 4 + (0xF << 2)
label_202124:
    if (ctx->pc == 0x202124u) {
        ctx->pc = 0x202124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202120u;
        // 0x202124: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202128u;
        goto label_202128;
    }
    ctx->pc = 0x202120u;
    {
        const bool branch_taken_0x202120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202120u;
        // 0x202124: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202120) {
            ctx->pc = 0x202160u;
            goto label_202160;
        }
    }
    ctx->pc = 0x202128u;
label_202128:
    // 0x202128: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x202128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_20212c:
    // 0x20212c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_202130:
    if (ctx->pc == 0x202130u) {
        ctx->pc = 0x202134u;
        goto label_202134;
    }
    ctx->pc = 0x20212Cu;
    {
        const bool branch_taken_0x20212c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20212c) {
            ctx->pc = 0x202150u;
            goto label_202150;
        }
    }
    ctx->pc = 0x202134u;
label_202134:
    // 0x202134: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x202134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_202138:
    // 0x202138: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x202138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20213c:
    // 0x20213c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x20213cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_202140:
    // 0x202140: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_202144:
    if (ctx->pc == 0x202144u) {
        ctx->pc = 0x202144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202140u;
        // 0x202144: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202148u;
        goto label_202148;
    }
    ctx->pc = 0x202140u;
    {
        const bool branch_taken_0x202140 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x202144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202140u;
        // 0x202144: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202140) {
            ctx->pc = 0x202150u;
            goto label_202150;
        }
    }
    ctx->pc = 0x202148u;
label_202148:
    // 0x202148: 0x10000006  b           . + 4 + (0x6 << 2)
label_20214c:
    if (ctx->pc == 0x20214Cu) {
        ctx->pc = 0x20214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202148u;
        // 0x20214c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202150u;
        goto label_202150;
    }
    ctx->pc = 0x202148u;
    {
        const bool branch_taken_0x202148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202148u;
        // 0x20214c: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202148) {
            ctx->pc = 0x202164u;
            goto label_202164;
        }
    }
    ctx->pc = 0x202150u;
label_202150:
    // 0x202150: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x202150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_202154:
    // 0x202154: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x202154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_202158:
    // 0x202158: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x202158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
label_20215c:
    // 0x20215c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x20215cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_202160:
    // 0x202160: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x202160u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_202164:
    // 0x202164: 0x0  nop
    ctx->pc = 0x202164u;
    // NOP
label_202168:
    // 0x202168: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x202168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20216c:
    // 0x20216c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x20216cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_202170:
    // 0x202170: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x202170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_202174:
    // 0x202174: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_202178:
    if (ctx->pc == 0x202178u) {
        ctx->pc = 0x20217Cu;
        goto label_20217c;
    }
    ctx->pc = 0x202174u;
    {
        const bool branch_taken_0x202174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202174) {
            ctx->pc = 0x202184u;
            goto label_202184;
        }
    }
    ctx->pc = 0x20217Cu;
label_20217c:
    // 0x20217c: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x20217cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_202180:
    // 0x202180: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x202180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_202184:
    // 0x202184: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_202188:
    if (ctx->pc == 0x202188u) {
        ctx->pc = 0x202188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202184u;
        // 0x202188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20218Cu;
        goto label_20218c;
    }
    ctx->pc = 0x202184u;
    {
        const bool branch_taken_0x202184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202184u;
        // 0x202188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202184) {
            ctx->pc = 0x2021E8u;
            goto label_2021e8;
        }
    }
    ctx->pc = 0x20218Cu;
label_20218c:
    // 0x20218c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20218cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_202190:
    // 0x202190: 0xc0808fc  jal         func_2023F0
label_202194:
    if (ctx->pc == 0x202194u) {
        ctx->pc = 0x202194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202190u;
        // 0x202194: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202198u;
        goto label_202198;
    }
    ctx->pc = 0x202190u;
    SET_GPR_U32(ctx, 31, 0x202198u);
    ctx->pc = 0x202194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202190u;
    // 0x202194: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023F0u;
    goto label_2023f0;
    ctx->pc = 0x202198u;
label_202198:
    // 0x202198: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x202198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20219c:
    // 0x20219c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x20219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2021a0:
    // 0x2021a0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_2021a4:
    if (ctx->pc == 0x2021A4u) {
        ctx->pc = 0x2021A8u;
        goto label_2021a8;
    }
    ctx->pc = 0x2021A0u;
    {
        const bool branch_taken_0x2021a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2021a0) {
            ctx->pc = 0x2021E8u;
            goto label_2021e8;
        }
    }
    ctx->pc = 0x2021A8u;
label_2021a8:
    // 0x2021a8: 0xc07a854  jal         func_1EA150
label_2021ac:
    if (ctx->pc == 0x2021ACu) {
        ctx->pc = 0x2021B0u;
        goto label_2021b0;
    }
    ctx->pc = 0x2021A8u;
    SET_GPR_U32(ctx, 31, 0x2021B0u);
    ctx->pc = 0x1EA150u;
    { ctx->pc = 0x1ea150; return; }
    ctx->pc = 0x2021B0u;
label_2021b0:
    // 0x2021b0: 0xc070e28  jal         func_1C38A0
label_2021b4:
    if (ctx->pc == 0x2021B4u) {
        ctx->pc = 0x2021B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021B0u;
        // 0x2021b4: 0x8f9390f0  lw          $s3, -0x6F10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2021B8u;
        goto label_2021b8;
    }
    ctx->pc = 0x2021B0u;
    SET_GPR_U32(ctx, 31, 0x2021B8u);
    ctx->pc = 0x2021B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2021B0u;
    // 0x2021b4: 0x8f9390f0  lw          $s3, -0x6F10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38A0u;
    { ctx->pc = 0x1c38a0; return; }
    ctx->pc = 0x2021B8u;
label_2021b8:
    // 0x2021b8: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
label_2021bc:
    if (ctx->pc == 0x2021BCu) {
        ctx->pc = 0x2021C0u;
        goto label_2021c0;
    }
    ctx->pc = 0x2021B8u;
    {
        const bool branch_taken_0x2021b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2021b8) {
            ctx->pc = 0x2021D8u;
            goto label_2021d8;
        }
    }
    ctx->pc = 0x2021C0u;
label_2021c0:
    // 0x2021c0: 0xc070de0  jal         func_1C3780
label_2021c4:
    if (ctx->pc == 0x2021C4u) {
        ctx->pc = 0x2021C8u;
        goto label_2021c8;
    }
    ctx->pc = 0x2021C0u;
    SET_GPR_U32(ctx, 31, 0x2021C8u);
    ctx->pc = 0x1C3780u;
    { ctx->pc = 0x1c3780; return; }
    ctx->pc = 0x2021C8u;
label_2021c8:
    // 0x2021c8: 0xc070e60  jal         func_1C3980
label_2021cc:
    if (ctx->pc == 0x2021CCu) {
        ctx->pc = 0x2021CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021C8u;
        // 0x2021cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2021D0u;
        goto label_2021d0;
    }
    ctx->pc = 0x2021C8u;
    SET_GPR_U32(ctx, 31, 0x2021D0u);
    ctx->pc = 0x2021CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2021C8u;
    // 0x2021cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3980u;
    { ctx->pc = 0x1c3980; return; }
    ctx->pc = 0x2021D0u;
label_2021d0:
    // 0x2021d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2021d4:
    if (ctx->pc == 0x2021D4u) {
        ctx->pc = 0x2021D8u;
        goto label_2021d8;
    }
    ctx->pc = 0x2021D0u;
    {
        const bool branch_taken_0x2021d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2021d0) {
            ctx->pc = 0x2021E0u;
            goto label_2021e0;
        }
    }
    ctx->pc = 0x2021D8u;
label_2021d8:
    // 0x2021d8: 0xc070038  jal         func_1C00E0
label_2021dc:
    if (ctx->pc == 0x2021DCu) {
        ctx->pc = 0x2021DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021D8u;
        // 0x2021dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2021E0u;
        goto label_2021e0;
    }
    ctx->pc = 0x2021D8u;
    SET_GPR_U32(ctx, 31, 0x2021E0u);
    ctx->pc = 0x2021DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2021D8u;
    // 0x2021dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x2021E0u;
label_2021e0:
    // 0x2021e0: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
label_2021e4:
    if (ctx->pc == 0x2021E4u) {
        ctx->pc = 0x2021E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021E0u;
        // 0x2021e4: 0xaf8090f0  sw          $zero, -0x6F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2021E8u;
        goto label_2021e8;
    }
    ctx->pc = 0x2021E0u;
    {
        const bool branch_taken_0x2021e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2021E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021E0u;
        // 0x2021e4: 0xaf8090f0  sw          $zero, -0x6F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021e0) {
            ctx->pc = 0x202070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202070;
        }
    }
    ctx->pc = 0x2021E8u;
label_2021e8:
    // 0x2021e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2021e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2021ec:
    // 0x2021ec: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2021ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2021f0:
    // 0x2021f0: 0x1462ffa5  bne         $v1, $v0, . + 4 + (-0x5B << 2)
label_2021f4:
    if (ctx->pc == 0x2021F4u) {
        ctx->pc = 0x2021F8u;
        goto label_2021f8;
    }
    ctx->pc = 0x2021F0u;
    {
        const bool branch_taken_0x2021f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2021f0) {
            ctx->pc = 0x202088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202088;
        }
    }
    ctx->pc = 0x2021F8u;
label_2021f8:
    // 0x2021f8: 0xc07a854  jal         func_1EA150
label_2021fc:
    if (ctx->pc == 0x2021FCu) {
        ctx->pc = 0x202200u;
        goto label_202200;
    }
    ctx->pc = 0x2021F8u;
    SET_GPR_U32(ctx, 31, 0x202200u);
    ctx->pc = 0x1EA150u;
    { ctx->pc = 0x1ea150; return; }
    ctx->pc = 0x202200u;
label_202200:
    // 0x202200: 0xc070e28  jal         func_1C38A0
label_202204:
    if (ctx->pc == 0x202204u) {
        ctx->pc = 0x202204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202200u;
        // 0x202204: 0x8f9090f0  lw          $s0, -0x6F10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202208u;
        goto label_202208;
    }
    ctx->pc = 0x202200u;
    SET_GPR_U32(ctx, 31, 0x202208u);
    ctx->pc = 0x202204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202200u;
    // 0x202204: 0x8f9090f0  lw          $s0, -0x6F10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38A0u;
    { ctx->pc = 0x1c38a0; return; }
    ctx->pc = 0x202208u;
label_202208:
    // 0x202208: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_20220c:
    if (ctx->pc == 0x20220Cu) {
        ctx->pc = 0x20220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202208u;
        // 0x20220c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202210u;
        goto label_202210;
    }
    ctx->pc = 0x202208u;
    {
        const bool branch_taken_0x202208 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x20220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202208u;
        // 0x20220c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202208) {
            ctx->pc = 0x202228u;
            goto label_202228;
        }
    }
    ctx->pc = 0x202210u;
label_202210:
    // 0x202210: 0xc070de0  jal         func_1C3780
label_202214:
    if (ctx->pc == 0x202214u) {
        ctx->pc = 0x202218u;
        goto label_202218;
    }
    ctx->pc = 0x202210u;
    SET_GPR_U32(ctx, 31, 0x202218u);
    ctx->pc = 0x1C3780u;
    { ctx->pc = 0x1c3780; return; }
    ctx->pc = 0x202218u;
label_202218:
    // 0x202218: 0xc070e60  jal         func_1C3980
label_20221c:
    if (ctx->pc == 0x20221Cu) {
        ctx->pc = 0x20221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202218u;
        // 0x20221c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202220u;
        goto label_202220;
    }
    ctx->pc = 0x202218u;
    SET_GPR_U32(ctx, 31, 0x202220u);
    ctx->pc = 0x20221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202218u;
    // 0x20221c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3980u;
    { ctx->pc = 0x1c3980; return; }
    ctx->pc = 0x202220u;
label_202220:
    // 0x202220: 0x10000004  b           . + 4 + (0x4 << 2)
label_202224:
    if (ctx->pc == 0x202224u) {
        ctx->pc = 0x202224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202220u;
        // 0x202224: 0xaf8090f0  sw          $zero, -0x6F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202228u;
        goto label_202228;
    }
    ctx->pc = 0x202220u;
    {
        const bool branch_taken_0x202220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202220u;
        // 0x202224: 0xaf8090f0  sw          $zero, -0x6F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202220) {
            ctx->pc = 0x202234u;
            goto label_202234;
        }
    }
    ctx->pc = 0x202228u;
label_202228:
    // 0x202228: 0xc070038  jal         func_1C00E0
label_20222c:
    if (ctx->pc == 0x20222Cu) {
        ctx->pc = 0x202230u;
        goto label_202230;
    }
    ctx->pc = 0x202228u;
    SET_GPR_U32(ctx, 31, 0x202230u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x202230u;
label_202230:
    // 0x202230: 0xaf8090f0  sw          $zero, -0x6F10($gp)
    ctx->pc = 0x202230u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
label_202234:
    // 0x202234: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x202234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_202238:
    // 0x202238: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x202238u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20223c:
    // 0x20223c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20223cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_202240:
    // 0x202240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x202240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_202244:
    // 0x202244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x202244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_202248:
    // 0x202248: 0x3e00008  jr          $ra
label_20224c:
    if (ctx->pc == 0x20224Cu) {
        ctx->pc = 0x20224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202248u;
        // 0x20224c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202250u;
        goto label_202250;
    }
    ctx->pc = 0x202248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202248u;
        // 0x20224c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202250u;
label_202250:
    // 0x202250: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x202250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_202254:
    // 0x202254: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x202254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_202258:
    // 0x202258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x202258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20225c:
    // 0x20225c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20225cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_202260:
    // 0x202260: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x202260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_202264:
    // 0x202264: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
label_202268:
    if (ctx->pc == 0x202268u) {
        ctx->pc = 0x202268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202264u;
        // 0x202268: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20226Cu;
        goto label_20226c;
    }
    ctx->pc = 0x202264u;
    {
        const bool branch_taken_0x202264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x202268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202264u;
        // 0x202268: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202264) {
            ctx->pc = 0x2023D0u;
            goto label_2023d0;
        }
    }
    ctx->pc = 0x20226Cu;
label_20226c:
    // 0x20226c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x20226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_202270:
    // 0x202270: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
label_202274:
    if (ctx->pc == 0x202274u) {
        ctx->pc = 0x202274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202270u;
        // 0x202274: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202278u;
        goto label_202278;
    }
    ctx->pc = 0x202270u;
    {
        const bool branch_taken_0x202270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x202274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202270u;
        // 0x202274: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202270) {
            ctx->pc = 0x202380u;
            goto label_202380;
        }
    }
    ctx->pc = 0x202278u;
label_202278:
    // 0x202278: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x202278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20227c:
    // 0x20227c: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
label_202280:
    if (ctx->pc == 0x202280u) {
        ctx->pc = 0x202280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20227Cu;
        // 0x202280: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202284u;
        goto label_202284;
    }
    ctx->pc = 0x20227Cu;
    {
        const bool branch_taken_0x20227c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x202280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20227Cu;
        // 0x202280: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20227c) {
            ctx->pc = 0x20233Cu;
            goto label_20233c;
        }
    }
    ctx->pc = 0x202284u;
label_202284:
    // 0x202284: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x202284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_202288:
    // 0x202288: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_20228c:
    if (ctx->pc == 0x20228Cu) {
        ctx->pc = 0x20228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202288u;
        // 0x20228c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202290u;
        goto label_202290;
    }
    ctx->pc = 0x202288u;
    {
        const bool branch_taken_0x202288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202288u;
        // 0x20228c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202288) {
            ctx->pc = 0x2022D8u;
            goto label_2022d8;
        }
    }
    ctx->pc = 0x202290u;
label_202290:
    // 0x202290: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_202294:
    if (ctx->pc == 0x202294u) {
        ctx->pc = 0x202298u;
        goto label_202298;
    }
    ctx->pc = 0x202290u;
    {
        const bool branch_taken_0x202290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x202290) {
            ctx->pc = 0x2022B0u;
            goto label_2022b0;
        }
    }
    ctx->pc = 0x202298u;
label_202298:
    // 0x202298: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_20229c:
    if (ctx->pc == 0x20229Cu) {
        ctx->pc = 0x2022A0u;
        goto label_2022a0;
    }
    ctx->pc = 0x202298u;
    {
        const bool branch_taken_0x202298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x202298) {
            ctx->pc = 0x2022A8u;
            goto label_2022a8;
        }
    }
    ctx->pc = 0x2022A0u;
label_2022a0:
    // 0x2022a0: 0x1000004e  b           . + 4 + (0x4E << 2)
label_2022a4:
    if (ctx->pc == 0x2022A4u) {
        ctx->pc = 0x2022A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022A0u;
        // 0x2022a4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2022A8u;
        goto label_2022a8;
    }
    ctx->pc = 0x2022A0u;
    {
        const bool branch_taken_0x2022a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022A0u;
        // 0x2022a4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022a0) {
            ctx->pc = 0x2023DCu;
            goto label_2023dc;
        }
    }
    ctx->pc = 0x2022A8u;
label_2022a8:
    // 0x2022a8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_2022ac:
    if (ctx->pc == 0x2022ACu) {
        ctx->pc = 0x2022ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022A8u;
        // 0x2022ac: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2022B0u;
        goto label_2022b0;
    }
    ctx->pc = 0x2022A8u;
    {
        const bool branch_taken_0x2022a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022A8u;
        // 0x2022ac: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022a8) {
            ctx->pc = 0x2023D8u;
            goto label_2023d8;
        }
    }
    ctx->pc = 0x2022B0u;
label_2022b0:
    // 0x2022b0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2022b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2022b4:
    // 0x2022b4: 0xc080fe4  jal         func_203F90
label_2022b8:
    if (ctx->pc == 0x2022B8u) {
        ctx->pc = 0x2022B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022B4u;
        // 0x2022b8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2022BCu;
        goto label_2022bc;
    }
    ctx->pc = 0x2022B4u;
    SET_GPR_U32(ctx, 31, 0x2022BCu);
    ctx->pc = 0x2022B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022B4u;
    // 0x2022b8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    { ctx->pc = 0x203f90; return; }
    ctx->pc = 0x2022BCu;
label_2022bc:
    // 0x2022bc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2022bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_2022c0:
    // 0x2022c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2022c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2022c4:
    // 0x2022c4: 0xc08f390  jal         func_23CE40
label_2022c8:
    if (ctx->pc == 0x2022C8u) {
        ctx->pc = 0x2022C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022C4u;
        // 0x2022c8: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2022CCu;
        goto label_2022cc;
    }
    ctx->pc = 0x2022C4u;
    SET_GPR_U32(ctx, 31, 0x2022CCu);
    ctx->pc = 0x2022C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022C4u;
    // 0x2022c8: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x2022CCu;
label_2022cc:
    // 0x2022cc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2022ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2022d0:
    // 0x2022d0: 0x10000041  b           . + 4 + (0x41 << 2)
label_2022d4:
    if (ctx->pc == 0x2022D4u) {
        ctx->pc = 0x2022D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022D0u;
        // 0x2022d4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2022D8u;
        goto label_2022d8;
    }
    ctx->pc = 0x2022D0u;
    {
        const bool branch_taken_0x2022d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022D0u;
        // 0x2022d4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022d0) {
            ctx->pc = 0x2023D8u;
            goto label_2023d8;
        }
    }
    ctx->pc = 0x2022D8u;
label_2022d8:
    // 0x2022d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2022d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2022dc:
    // 0x2022dc: 0xc080fe4  jal         func_203F90
label_2022e0:
    if (ctx->pc == 0x2022E0u) {
        ctx->pc = 0x2022E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022DCu;
        // 0x2022e0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2022E4u;
        goto label_2022e4;
    }
    ctx->pc = 0x2022DCu;
    SET_GPR_U32(ctx, 31, 0x2022E4u);
    ctx->pc = 0x2022E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022DCu;
    // 0x2022e0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    { ctx->pc = 0x203f90; return; }
    ctx->pc = 0x2022E4u;
label_2022e4:
    // 0x2022e4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2022e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2022e8:
    // 0x2022e8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2022e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_2022ec:
    // 0x2022ec: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x2022ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_2022f0:
    // 0x2022f0: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x2022f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
label_2022f4:
    // 0x2022f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2022f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2022f8:
    // 0x2022f8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2022f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2022fc:
    // 0x2022fc: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2022fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_202300:
    // 0x202300: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x202300u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_202304:
    // 0x202304: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x202304u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_202308:
    // 0x202308: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x202308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_20230c:
    // 0x20230c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x20230cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_202310:
    // 0x202310: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x202310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_202314:
    // 0x202314: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x202314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
label_202318:
    // 0x202318: 0x24620130  addiu       $v0, $v1, 0x130
    ctx->pc = 0x202318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
label_20231c:
    // 0x20231c: 0xc08f390  jal         func_23CE40
label_202320:
    if (ctx->pc == 0x202320u) {
        ctx->pc = 0x202320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20231Cu;
        // 0x202320: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202324u;
        goto label_202324;
    }
    ctx->pc = 0x20231Cu;
    SET_GPR_U32(ctx, 31, 0x202324u);
    ctx->pc = 0x202320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20231Cu;
    // 0x202320: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x202324u;
label_202324:
    // 0x202324: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x202324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_202328:
    // 0x202328: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x202328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20232c:
    // 0x20232c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20232cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202330:
    // 0x202330: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x202330u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
label_202334:
    // 0x202334: 0x10000028  b           . + 4 + (0x28 << 2)
label_202338:
    if (ctx->pc == 0x202338u) {
        ctx->pc = 0x202338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202334u;
        // 0x202338: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20233Cu;
        goto label_20233c;
    }
    ctx->pc = 0x202334u;
    {
        const bool branch_taken_0x202334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202334u;
        // 0x202338: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202334) {
            ctx->pc = 0x2023D8u;
            goto label_2023d8;
        }
    }
    ctx->pc = 0x20233Cu;
label_20233c:
    // 0x20233c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x20233cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_202340:
    // 0x202340: 0x8c27f468  lw          $a3, -0xB98($at)
    ctx->pc = 0x202340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_202344:
    // 0x202344: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x202344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
label_202348:
    // 0x202348: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x202348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20234c:
    // 0x20234c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_202350:
    // 0x202350: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x202350u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_202354:
    // 0x202354: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x202354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_202358:
    // 0x202358: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x202358u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_20235c:
    // 0x20235c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20235cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_202360:
    // 0x202360: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x202360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_202364:
    // 0x202364: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x202364u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_202368:
    // 0x202368: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x202368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_20236c:
    // 0x20236c: 0xaca00134  sw          $zero, 0x134($a1)
    ctx->pc = 0x20236cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 0));
label_202370:
    // 0x202370: 0xaca0013c  sw          $zero, 0x13C($a1)
    ctx->pc = 0x202370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 0));
label_202374:
    // 0x202374: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x202374u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
label_202378:
    // 0x202378: 0x10000017  b           . + 4 + (0x17 << 2)
label_20237c:
    if (ctx->pc == 0x20237Cu) {
        ctx->pc = 0x20237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202378u;
        // 0x20237c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202380u;
        goto label_202380;
    }
    ctx->pc = 0x202378u;
    {
        const bool branch_taken_0x202378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202378u;
        // 0x20237c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202378) {
            ctx->pc = 0x2023D8u;
            goto label_2023d8;
        }
    }
    ctx->pc = 0x202380u;
label_202380:
    // 0x202380: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x202380u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
label_202384:
    // 0x202384: 0x8c29f468  lw          $t1, -0xB98($at)
    ctx->pc = 0x202384u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_202388:
    // 0x202388: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x202388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_20238c:
    // 0x20238c: 0x34655400  ori         $a1, $v1, 0x5400
    ctx->pc = 0x20238cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21504);
label_202390:
    // 0x202390: 0x8f8690f0  lw          $a2, -0x6F10($gp)
    ctx->pc = 0x202390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_202394:
    // 0x202394: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x202394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
label_202398:
    // 0x202398: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x202398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20239c:
    // 0x20239c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20239cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2023a0:
    // 0x2023a0: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x2023a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2023a4:
    // 0x2023a4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2023a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2023a8:
    // 0x2023a8: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x2023a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2023ac:
    // 0x2023ac: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2023acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2023b0:
    // 0x2023b0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2023b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2023b4:
    // 0x2023b4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2023b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2023b8:
    // 0x2023b8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2023b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2023bc:
    // 0x2023bc: 0xace60144  sw          $a2, 0x144($a3)
    ctx->pc = 0x2023bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 6));
label_2023c0:
    // 0x2023c0: 0xace50140  sw          $a1, 0x140($a3)
    ctx->pc = 0x2023c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 5));
label_2023c4:
    // 0x2023c4: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x2023c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
label_2023c8:
    // 0x2023c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2023cc:
    if (ctx->pc == 0x2023CCu) {
        ctx->pc = 0x2023CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023C8u;
        // 0x2023cc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2023D0u;
        goto label_2023d0;
    }
    ctx->pc = 0x2023C8u;
    {
        const bool branch_taken_0x2023c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2023CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023C8u;
        // 0x2023cc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023c8) {
            ctx->pc = 0x2023D8u;
            goto label_2023d8;
        }
    }
    ctx->pc = 0x2023D0u;
label_2023d0:
    // 0x2023d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2023d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2023d4:
    // 0x2023d4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2023d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2023d8:
    // 0x2023d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2023d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2023dc:
    // 0x2023dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2023dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2023e0:
    // 0x2023e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2023e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2023e4:
    // 0x2023e4: 0x3e00008  jr          $ra
label_2023e8:
    if (ctx->pc == 0x2023E8u) {
        ctx->pc = 0x2023E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023E4u;
        // 0x2023e8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2023ECu;
        goto label_2023ec;
    }
    ctx->pc = 0x2023E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2023E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023E4u;
        // 0x2023e8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2023E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2023ECu;
label_2023ec:
    // 0x2023ec: 0x0  nop
    ctx->pc = 0x2023ecu;
    // NOP
label_2023f0:
    // 0x2023f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2023f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2023f4:
    // 0x2023f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2023f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2023f8:
    // 0x2023f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2023f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2023fc:
    // 0x2023fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2023fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_202400:
    // 0x202400: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x202400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_202404:
    // 0x202404: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x202404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_202408:
    // 0x202408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20240c:
    // 0x20240c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20240cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_202410:
    // 0x202410: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x202410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_202414:
    // 0x202414: 0x24110023  addiu       $s1, $zero, 0x23
    ctx->pc = 0x202414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_202418:
    // 0x202418: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x202418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20241c:
    // 0x20241c: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
label_202420:
    if (ctx->pc == 0x202420u) {
        ctx->pc = 0x202420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20241Cu;
        // 0x202420: 0x24100019  addiu       $s0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202424u;
        goto label_202424;
    }
    ctx->pc = 0x20241Cu;
    {
        const bool branch_taken_0x20241c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20241Cu;
        // 0x202420: 0x24100019  addiu       $s0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20241c) {
            ctx->pc = 0x202508u;
            goto label_202508;
        }
    }
    ctx->pc = 0x202424u;
label_202424:
    // 0x202424: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x202424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_202428:
    // 0x202428: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x202428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_20242c:
    // 0x20242c: 0x10e20028  beq         $a3, $v0, . + 4 + (0x28 << 2)
label_202430:
    if (ctx->pc == 0x202430u) {
        ctx->pc = 0x202430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20242Cu;
        // 0x202430: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202434u;
        goto label_202434;
    }
    ctx->pc = 0x20242Cu;
    {
        const bool branch_taken_0x20242c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x202430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20242Cu;
        // 0x202430: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20242c) {
            ctx->pc = 0x2024D0u;
            goto label_2024d0;
        }
    }
    ctx->pc = 0x202434u;
label_202434:
    // 0x202434: 0x10e30024  beq         $a3, $v1, . + 4 + (0x24 << 2)
label_202438:
    if (ctx->pc == 0x202438u) {
        ctx->pc = 0x20243Cu;
        goto label_20243c;
    }
    ctx->pc = 0x202434u;
    {
        const bool branch_taken_0x202434 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x202434) {
            ctx->pc = 0x2024C8u;
            goto label_2024c8;
        }
    }
    ctx->pc = 0x20243Cu;
label_20243c:
    // 0x20243c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x20243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_202440:
    // 0x202440: 0x10e2001f  beq         $a3, $v0, . + 4 + (0x1F << 2)
label_202444:
    if (ctx->pc == 0x202444u) {
        ctx->pc = 0x202444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202440u;
        // 0x202444: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202448u;
        goto label_202448;
    }
    ctx->pc = 0x202440u;
    {
        const bool branch_taken_0x202440 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x202444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202440u;
        // 0x202444: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202440) {
            ctx->pc = 0x2024C0u;
            goto label_2024c0;
        }
    }
    ctx->pc = 0x202448u;
label_202448:
    // 0x202448: 0x10e5001b  beq         $a3, $a1, . + 4 + (0x1B << 2)
label_20244c:
    if (ctx->pc == 0x20244Cu) {
        ctx->pc = 0x20244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202448u;
        // 0x20244c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202450u;
        goto label_202450;
    }
    ctx->pc = 0x202448u;
    {
        const bool branch_taken_0x202448 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x20244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202448u;
        // 0x20244c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202448) {
            ctx->pc = 0x2024B8u;
            goto label_2024b8;
        }
    }
    ctx->pc = 0x202450u;
label_202450:
    // 0x202450: 0x10e4000e  beq         $a3, $a0, . + 4 + (0xE << 2)
label_202454:
    if (ctx->pc == 0x202454u) {
        ctx->pc = 0x202458u;
        goto label_202458;
    }
    ctx->pc = 0x202450u;
    {
        const bool branch_taken_0x202450 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x202450) {
            ctx->pc = 0x20248Cu;
            goto label_20248c;
        }
    }
    ctx->pc = 0x202458u;
label_202458:
    // 0x202458: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_20245c:
    if (ctx->pc == 0x20245Cu) {
        ctx->pc = 0x202460u;
        goto label_202460;
    }
    ctx->pc = 0x202458u;
    {
        const bool branch_taken_0x202458 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x202458) {
            ctx->pc = 0x202468u;
            goto label_202468;
        }
    }
    ctx->pc = 0x202460u;
label_202460:
    // 0x202460: 0x10000044  b           . + 4 + (0x44 << 2)
label_202464:
    if (ctx->pc == 0x202464u) {
        ctx->pc = 0x202464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202460u;
        // 0x202464: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202468u;
        goto label_202468;
    }
    ctx->pc = 0x202460u;
    {
        const bool branch_taken_0x202460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202460u;
        // 0x202464: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202460) {
            ctx->pc = 0x202574u;
            goto label_202574;
        }
    }
    ctx->pc = 0x202468u;
label_202468:
    // 0x202468: 0x8cc30480  lw          $v1, 0x480($a2)
    ctx->pc = 0x202468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
label_20246c:
    // 0x20246c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x20246cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_202470:
    // 0x202470: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x202470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_202474:
    // 0x202474: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_202478:
    if (ctx->pc == 0x202478u) {
        ctx->pc = 0x20247Cu;
        goto label_20247c;
    }
    ctx->pc = 0x202474u;
    {
        const bool branch_taken_0x202474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202474) {
            ctx->pc = 0x202484u;
            goto label_202484;
        }
    }
    ctx->pc = 0x20247Cu;
label_20247c:
    // 0x20247c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_202480:
    if (ctx->pc == 0x202480u) {
        ctx->pc = 0x202480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20247Cu;
        // 0x202480: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202484u;
        goto label_202484;
    }
    ctx->pc = 0x20247Cu;
    {
        const bool branch_taken_0x20247c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20247Cu;
        // 0x202480: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20247c) {
            ctx->pc = 0x202570u;
            goto label_202570;
        }
    }
    ctx->pc = 0x202484u;
label_202484:
    // 0x202484: 0x1000003a  b           . + 4 + (0x3A << 2)
label_202488:
    if (ctx->pc == 0x202488u) {
        ctx->pc = 0x202488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202484u;
        // 0x202488: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20248Cu;
        goto label_20248c;
    }
    ctx->pc = 0x202484u;
    {
        const bool branch_taken_0x202484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202484u;
        // 0x202488: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202484) {
            ctx->pc = 0x202570u;
            goto label_202570;
        }
    }
    ctx->pc = 0x20248Cu;
label_20248c:
    // 0x20248c: 0x8cc2048c  lw          $v0, 0x48C($a2)
    ctx->pc = 0x20248cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1164)));
label_202490:
    // 0x202490: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_202494:
    if (ctx->pc == 0x202494u) {
        ctx->pc = 0x202498u;
        goto label_202498;
    }
    ctx->pc = 0x202490u;
    {
        const bool branch_taken_0x202490 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x202490) {
            ctx->pc = 0x2024A0u;
            goto label_2024a0;
        }
    }
    ctx->pc = 0x202498u;
label_202498:
    // 0x202498: 0x10000035  b           . + 4 + (0x35 << 2)
label_20249c:
    if (ctx->pc == 0x20249Cu) {
        ctx->pc = 0x20249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202498u;
        // 0x20249c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2024A0u;
        goto label_2024a0;
    }
    ctx->pc = 0x202498u;
    {
        const bool branch_taken_0x202498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202498u;
        // 0x20249c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202498) {
            ctx->pc = 0x202570u;
            goto label_202570;
        }
    }
    ctx->pc = 0x2024A0u;
label_2024a0:
    // 0x2024a0: 0x8cc20488  lw          $v0, 0x488($a2)
    ctx->pc = 0x2024a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1160)));
label_2024a4:
    // 0x2024a4: 0x284100c6  slti        $at, $v0, 0xC6
    ctx->pc = 0x2024a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)198) ? 1 : 0);
label_2024a8:
    // 0x2024a8: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_2024ac:
    if (ctx->pc == 0x2024ACu) {
        ctx->pc = 0x2024B0u;
        goto label_2024b0;
    }
    ctx->pc = 0x2024A8u;
    {
        const bool branch_taken_0x2024a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2024a8) {
            ctx->pc = 0x202570u;
            goto label_202570;
        }
    }
    ctx->pc = 0x2024B0u;
label_2024b0:
    // 0x2024b0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2024b4:
    if (ctx->pc == 0x2024B4u) {
        ctx->pc = 0x2024B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024B0u;
        // 0x2024b4: 0x24110022  addiu       $s1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2024B8u;
        goto label_2024b8;
    }
    ctx->pc = 0x2024B0u;
    {
        const bool branch_taken_0x2024b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024B0u;
        // 0x2024b4: 0x24110022  addiu       $s1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024b0) {
            ctx->pc = 0x202570u;
            goto label_202570;
        }
    }
    ctx->pc = 0x2024B8u;
label_2024b8:
    // 0x2024b8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2024bc:
    if (ctx->pc == 0x2024BCu) {
        ctx->pc = 0x2024BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024B8u;
        // 0x2024bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2024C0u;
        goto label_2024c0;
    }
    ctx->pc = 0x2024B8u;
    {
        const bool branch_taken_0x2024b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024B8u;
        // 0x2024bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024b8) {
            ctx->pc = 0x202570u;
            goto label_202570;
        }
    }
    ctx->pc = 0x2024C0u;
label_2024c0:
    // 0x2024c0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2024c4:
    if (ctx->pc == 0x2024C4u) {
        ctx->pc = 0x2024C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024C0u;
        // 0x2024c4: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2024C8u;
        goto label_2024c8;
    }
    ctx->pc = 0x2024C0u;
    {
        const bool branch_taken_0x2024c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024C0u;
        // 0x2024c4: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024c0) {
            ctx->pc = 0x202570u;
            goto label_202570;
        }
    }
    ctx->pc = 0x2024C8u;
label_2024c8:
    // 0x2024c8: 0x10000029  b           . + 4 + (0x29 << 2)
label_2024cc:
    if (ctx->pc == 0x2024CCu) {
        ctx->pc = 0x2024CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024C8u;
        // 0x2024cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2024D0u;
        goto label_2024d0;
    }
    ctx->pc = 0x2024C8u;
    {
        const bool branch_taken_0x2024c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024C8u;
        // 0x2024cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024c8) {
            ctx->pc = 0x202570u;
            goto label_202570;
        }
    }
    ctx->pc = 0x2024D0u;
label_2024d0:
    // 0x2024d0: 0x8f8490f0  lw          $a0, -0x6F10($gp)
    ctx->pc = 0x2024d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_2024d4:
    // 0x2024d4: 0xc083d30  jal         func_20F4C0
label_2024d8:
    if (ctx->pc == 0x2024D8u) {
        ctx->pc = 0x2024D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024D4u;
        // 0x2024d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2024DCu;
        goto label_2024dc;
    }
    ctx->pc = 0x2024D4u;
    SET_GPR_U32(ctx, 31, 0x2024DCu);
    ctx->pc = 0x2024D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2024D4u;
    // 0x2024d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F4C0u;
    { ctx->pc = 0x20f4c0; return; }
    ctx->pc = 0x2024DCu;
label_2024dc:
    // 0x2024dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2024e0:
    if (ctx->pc == 0x2024E0u) {
        ctx->pc = 0x2024E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024DCu;
        // 0x2024e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2024E4u;
        goto label_2024e4;
    }
    ctx->pc = 0x2024DCu;
    {
        const bool branch_taken_0x2024dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024DCu;
        // 0x2024e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024dc) {
            ctx->pc = 0x2024F8u;
            goto label_2024f8;
        }
    }
    ctx->pc = 0x2024E4u;
label_2024e4:
    // 0x2024e4: 0x8f8490f0  lw          $a0, -0x6F10($gp)
    ctx->pc = 0x2024e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_2024e8:
    // 0x2024e8: 0xc083cc8  jal         func_20F320
label_2024ec:
    if (ctx->pc == 0x2024ECu) {
        ctx->pc = 0x2024ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024E8u;
        // 0x2024ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2024F0u;
        goto label_2024f0;
    }
    ctx->pc = 0x2024E8u;
    SET_GPR_U32(ctx, 31, 0x2024F0u);
    ctx->pc = 0x2024ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2024E8u;
    // 0x2024ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F320u;
    { ctx->pc = 0x20f320; return; }
    ctx->pc = 0x2024F0u;
label_2024f0:
    // 0x2024f0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2024f4:
    if (ctx->pc == 0x2024F4u) {
        ctx->pc = 0x2024F8u;
        goto label_2024f8;
    }
    ctx->pc = 0x2024F0u;
    {
        const bool branch_taken_0x2024f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2024f0) {
            ctx->pc = 0x202570u;
            goto label_202570;
        }
    }
    ctx->pc = 0x2024F8u;
label_2024f8:
    // 0x2024f8: 0xc0809d8  jal         func_202760
label_2024fc:
    if (ctx->pc == 0x2024FCu) {
        ctx->pc = 0x2024FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024F8u;
        // 0x2024fc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202500u;
        goto label_202500;
    }
    ctx->pc = 0x2024F8u;
    SET_GPR_U32(ctx, 31, 0x202500u);
    ctx->pc = 0x2024FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2024F8u;
    // 0x2024fc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202760u;
    { ctx->pc = 0x202760; return; }
    ctx->pc = 0x202500u;
label_202500:
    // 0x202500: 0x1000001b  b           . + 4 + (0x1B << 2)
label_202504:
    if (ctx->pc == 0x202504u) {
        ctx->pc = 0x202508u;
        goto label_202508;
    }
    ctx->pc = 0x202500u;
    {
        const bool branch_taken_0x202500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202500) {
            ctx->pc = 0x202570u;
            goto label_202570;
        }
    }
    ctx->pc = 0x202508u;
label_202508:
    // 0x202508: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x202508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20250c:
    // 0x20250c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_202510:
    if (ctx->pc == 0x202510u) {
        ctx->pc = 0x202510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20250Cu;
        // 0x202510: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202514u;
        goto label_202514;
    }
    ctx->pc = 0x20250Cu;
    {
        const bool branch_taken_0x20250c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20250Cu;
        // 0x202510: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20250c) {
            ctx->pc = 0x202560u;
            goto label_202560;
        }
    }
    ctx->pc = 0x202514u;
label_202514:
    // 0x202514: 0x8cc30480  lw          $v1, 0x480($a2)
    ctx->pc = 0x202514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
label_202518:
    // 0x202518: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x202518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_20251c:
    // 0x20251c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20251cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_202520:
    // 0x202520: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_202524:
    if (ctx->pc == 0x202524u) {
        ctx->pc = 0x202524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202520u;
        // 0x202524: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202528u;
        goto label_202528;
    }
    ctx->pc = 0x202520u;
    {
        const bool branch_taken_0x202520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202520u;
        // 0x202524: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202520) {
            ctx->pc = 0x202530u;
            goto label_202530;
        }
    }
    ctx->pc = 0x202528u;
label_202528:
    // 0x202528: 0x10000011  b           . + 4 + (0x11 << 2)
label_20252c:
    if (ctx->pc == 0x20252Cu) {
        ctx->pc = 0x20252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202528u;
        // 0x20252c: 0x24110012  addiu       $s1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202530u;
        goto label_202530;
    }
    ctx->pc = 0x202528u;
    {
        const bool branch_taken_0x202528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202528u;
        // 0x20252c: 0x24110012  addiu       $s1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202528) {
            ctx->pc = 0x202570u;
            goto label_202570;
        }
    }
    ctx->pc = 0x202530u;
label_202530:
    // 0x202530: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x202530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_202534:
    // 0x202534: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_202538:
    if (ctx->pc == 0x202538u) {
        ctx->pc = 0x202538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202534u;
        // 0x202538: 0x24110011  addiu       $s1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20253Cu;
        goto label_20253c;
    }
    ctx->pc = 0x202534u;
    {
        const bool branch_taken_0x202534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202534u;
        // 0x202538: 0x24110011  addiu       $s1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202534) {
            ctx->pc = 0x202544u;
            goto label_202544;
        }
    }
    ctx->pc = 0x20253Cu;
label_20253c:
    // 0x20253c: 0x1000000c  b           . + 4 + (0xC << 2)
label_202540:
    if (ctx->pc == 0x202540u) {
        ctx->pc = 0x202544u;
        goto label_202544;
    }
    ctx->pc = 0x20253Cu;
    {
        const bool branch_taken_0x20253c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20253c) {
            ctx->pc = 0x202570u;
            goto label_202570;
        }
    }
    ctx->pc = 0x202544u;
label_202544:
    // 0x202544: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x202544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_202548:
    // 0x202548: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20254c:
    if (ctx->pc == 0x20254Cu) {
        ctx->pc = 0x20254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202548u;
        // 0x20254c: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202550u;
        goto label_202550;
    }
    ctx->pc = 0x202548u;
    {
        const bool branch_taken_0x202548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202548u;
        // 0x20254c: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202548) {
            ctx->pc = 0x202558u;
            goto label_202558;
        }
    }
    ctx->pc = 0x202550u;
label_202550:
    // 0x202550: 0x10000007  b           . + 4 + (0x7 << 2)
label_202554:
    if (ctx->pc == 0x202554u) {
        ctx->pc = 0x202554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202550u;
        // 0x202554: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202558u;
        goto label_202558;
    }
    ctx->pc = 0x202550u;
    {
        const bool branch_taken_0x202550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202550u;
        // 0x202554: 0x24110010  addiu       $s1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202550) {
            ctx->pc = 0x202570u;
            goto label_202570;
        }
    }
    ctx->pc = 0x202558u;
label_202558:
    // 0x202558: 0x10000005  b           . + 4 + (0x5 << 2)
label_20255c:
    if (ctx->pc == 0x20255Cu) {
        ctx->pc = 0x202560u;
        goto label_202560;
    }
    ctx->pc = 0x202558u;
    {
        const bool branch_taken_0x202558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202558) {
            ctx->pc = 0x202570u;
            goto label_202570;
        }
    }
    ctx->pc = 0x202560u;
label_202560:
    // 0x202560: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_202564:
    if (ctx->pc == 0x202564u) {
        ctx->pc = 0x202564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202560u;
        // 0x202564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202568u;
        goto label_202568;
    }
    ctx->pc = 0x202560u;
    {
        const bool branch_taken_0x202560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202560u;
        // 0x202564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202560) {
            ctx->pc = 0x202570u;
            goto label_202570;
        }
    }
    ctx->pc = 0x202568u;
label_202568:
    // 0x202568: 0xc0809d8  jal         func_202760
label_20256c:
    if (ctx->pc == 0x20256Cu) {
        ctx->pc = 0x20256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202568u;
        // 0x20256c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202570u;
        goto label_202570;
    }
    ctx->pc = 0x202568u;
    SET_GPR_U32(ctx, 31, 0x202570u);
    ctx->pc = 0x20256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202568u;
    // 0x20256c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202760u;
    { ctx->pc = 0x202760; return; }
    ctx->pc = 0x202570u;
label_202570:
    // 0x202570: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x202570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_202574:
    // 0x202574: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
label_202578:
    if (ctx->pc == 0x202578u) {
        ctx->pc = 0x202578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202574u;
        // 0x202578: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20257Cu;
        goto label_20257c;
    }
    ctx->pc = 0x202574u;
    {
        const bool branch_taken_0x202574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x202578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202574u;
        // 0x202578: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202574) {
            ctx->pc = 0x2025C8u;
            goto label_2025c8;
        }
    }
    ctx->pc = 0x20257Cu;
label_20257c:
    // 0x20257c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20257cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_202580:
    // 0x202580: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_202584:
    // 0x202584: 0xc080984  jal         func_202610
label_202588:
    if (ctx->pc == 0x202588u) {
        ctx->pc = 0x202588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202584u;
        // 0x202588: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20258Cu;
        goto label_20258c;
    }
    ctx->pc = 0x202584u;
    SET_GPR_U32(ctx, 31, 0x20258Cu);
    ctx->pc = 0x202588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202584u;
    // 0x202588: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202610u;
    goto label_202610;
    ctx->pc = 0x20258Cu;
label_20258c:
    // 0x20258c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_202590:
    // 0x202590: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_202594:
    if (ctx->pc == 0x202594u) {
        ctx->pc = 0x202594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202590u;
        // 0x202594: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202598u;
        goto label_202598;
    }
    ctx->pc = 0x202590u;
    {
        const bool branch_taken_0x202590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x202594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202590u;
        // 0x202594: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202590) {
            ctx->pc = 0x2025A0u;
            goto label_2025a0;
        }
    }
    ctx->pc = 0x202598u;
label_202598:
    // 0x202598: 0x10000013  b           . + 4 + (0x13 << 2)
label_20259c:
    if (ctx->pc == 0x20259Cu) {
        ctx->pc = 0x20259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202598u;
        // 0x20259c: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2025A0u;
        goto label_2025a0;
    }
    ctx->pc = 0x202598u;
    {
        const bool branch_taken_0x202598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202598u;
        // 0x20259c: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202598) {
            ctx->pc = 0x2025E8u;
            goto label_2025e8;
        }
    }
    ctx->pc = 0x2025A0u;
label_2025a0:
    // 0x2025a0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2025a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2025a4:
    // 0x2025a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2025a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2025a8:
    // 0x2025a8: 0x2484b310  addiu       $a0, $a0, -0x4CF0
    ctx->pc = 0x2025a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947600));
label_2025ac:
    // 0x2025ac: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x2025acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
label_2025b0:
    // 0x2025b0: 0xc08e93e  jal         func_23A4F8
label_2025b4:
    if (ctx->pc == 0x2025B4u) {
        ctx->pc = 0x2025B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025B0u;
        // 0x2025b4: 0x34464f20  ori         $a2, $v0, 0x4F20 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2025B8u;
        goto label_2025b8;
    }
    ctx->pc = 0x2025B0u;
    SET_GPR_U32(ctx, 31, 0x2025B8u);
    ctx->pc = 0x2025B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2025B0u;
    // 0x2025b4: 0x34464f20  ori         $a2, $v0, 0x4F20 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x2025B8u;
label_2025b8:
    // 0x2025b8: 0xc055da0  jal         func_157680
label_2025bc:
    if (ctx->pc == 0x2025BCu) {
        ctx->pc = 0x2025C0u;
        goto label_2025c0;
    }
    ctx->pc = 0x2025B8u;
    SET_GPR_U32(ctx, 31, 0x2025C0u);
    ctx->pc = 0x157680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157680u, 0x2025B8u, 0x2025C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2025C0u;
label_2025c0:
    // 0x2025c0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2025c4:
    if (ctx->pc == 0x2025C4u) {
        ctx->pc = 0x2025C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025C0u;
        // 0x2025c4: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2025C8u;
        goto label_2025c8;
    }
    ctx->pc = 0x2025C0u;
    {
        const bool branch_taken_0x2025c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025C0u;
        // 0x2025c4: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025c0) {
            ctx->pc = 0x2025ECu;
            goto label_2025ec;
        }
    }
    ctx->pc = 0x2025C8u;
label_2025c8:
    // 0x2025c8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2025c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2025cc:
    // 0x2025cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2025ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2025d0:
    // 0x2025d0: 0x2484b310  addiu       $a0, $a0, -0x4CF0
    ctx->pc = 0x2025d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947600));
label_2025d4:
    // 0x2025d4: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x2025d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
label_2025d8:
    // 0x2025d8: 0xc08e93e  jal         func_23A4F8
label_2025dc:
    if (ctx->pc == 0x2025DCu) {
        ctx->pc = 0x2025DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025D8u;
        // 0x2025dc: 0x34464f20  ori         $a2, $v0, 0x4F20 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2025E0u;
        goto label_2025e0;
    }
    ctx->pc = 0x2025D8u;
    SET_GPR_U32(ctx, 31, 0x2025E0u);
    ctx->pc = 0x2025DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2025D8u;
    // 0x2025dc: 0x34464f20  ori         $a2, $v0, 0x4F20 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x2025E0u;
label_2025e0:
    // 0x2025e0: 0xc055da0  jal         func_157680
label_2025e4:
    if (ctx->pc == 0x2025E4u) {
        ctx->pc = 0x2025E8u;
        goto label_2025e8;
    }
    ctx->pc = 0x2025E0u;
    SET_GPR_U32(ctx, 31, 0x2025E8u);
    ctx->pc = 0x157680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157680u, 0x2025E0u, 0x2025E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2025E8u;
label_2025e8:
    // 0x2025e8: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x2025e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_2025ec:
    // 0x2025ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2025ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2025f0:
    // 0x2025f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2025f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2025f4:
    // 0x2025f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2025f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2025f8:
    // 0x2025f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2025f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2025fc:
    // 0x2025fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2025fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_202600:
    // 0x202600: 0x3e00008  jr          $ra
label_202604:
    if (ctx->pc == 0x202604u) {
        ctx->pc = 0x202604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202600u;
        // 0x202604: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202608u;
        goto label_202608;
    }
    ctx->pc = 0x202600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202600u;
        // 0x202604: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202608u;
label_202608:
    // 0x202608: 0x0  nop
    ctx->pc = 0x202608u;
    // NOP
label_20260c:
    // 0x20260c: 0x0  nop
    ctx->pc = 0x20260cu;
    // NOP
label_202610:
    // 0x202610: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x202610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_202614:
    // 0x202614: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x202614u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_202618:
    // 0x202618: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x202618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20261c:
    // 0x20261c: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x20261cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_202620:
    // 0x202620: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x202620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_202624:
    // 0x202624: 0x240900b0  addiu       $t1, $zero, 0xB0
    ctx->pc = 0x202624u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_202628:
    // 0x202628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20262c:
    // 0x20262c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20262cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_202630:
    // 0x202630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x202630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_202634:
    // 0x202634: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x202634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_202638:
    // 0x202638: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x202638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20263c:
    // 0x20263c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x20263cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_202640:
    // 0x202640: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x202640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_202644:
    // 0x202644: 0xc07aa5c  jal         func_1EA970
label_202648:
    if (ctx->pc == 0x202648u) {
        ctx->pc = 0x202648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202644u;
        // 0x202648: 0x24060088  addiu       $a2, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20264Cu;
        goto label_20264c;
    }
    ctx->pc = 0x202644u;
    SET_GPR_U32(ctx, 31, 0x20264Cu);
    ctx->pc = 0x202648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202644u;
    // 0x202648: 0x24060088  addiu       $a2, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x20264Cu;
label_20264c:
    // 0x20264c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x20264cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_202650:
    // 0x202650: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x202650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_202654:
    // 0x202654: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x202654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->pc = 0x202658u;
    return;
}

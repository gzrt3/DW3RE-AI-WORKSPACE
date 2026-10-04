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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part211(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x202658u: goto label_202658;
        case 0x20265cu: goto label_20265c;
        case 0x202660u: goto label_202660;
        case 0x202664u: goto label_202664;
        case 0x202668u: goto label_202668;
        case 0x20266cu: goto label_20266c;
        case 0x202670u: goto label_202670;
        case 0x202674u: goto label_202674;
        case 0x202678u: goto label_202678;
        case 0x20267cu: goto label_20267c;
        case 0x202680u: goto label_202680;
        case 0x202684u: goto label_202684;
        case 0x202688u: goto label_202688;
        case 0x20268cu: goto label_20268c;
        case 0x202690u: goto label_202690;
        case 0x202694u: goto label_202694;
        case 0x202698u: goto label_202698;
        case 0x20269cu: goto label_20269c;
        case 0x2026a0u: goto label_2026a0;
        case 0x2026a4u: goto label_2026a4;
        case 0x2026a8u: goto label_2026a8;
        case 0x2026acu: goto label_2026ac;
        case 0x2026b0u: goto label_2026b0;
        case 0x2026b4u: goto label_2026b4;
        case 0x2026b8u: goto label_2026b8;
        case 0x2026bcu: goto label_2026bc;
        case 0x2026c0u: goto label_2026c0;
        case 0x2026c4u: goto label_2026c4;
        case 0x2026c8u: goto label_2026c8;
        case 0x2026ccu: goto label_2026cc;
        case 0x2026d0u: goto label_2026d0;
        case 0x2026d4u: goto label_2026d4;
        case 0x2026d8u: goto label_2026d8;
        case 0x2026dcu: goto label_2026dc;
        case 0x2026e0u: goto label_2026e0;
        case 0x2026e4u: goto label_2026e4;
        case 0x2026e8u: goto label_2026e8;
        case 0x2026ecu: goto label_2026ec;
        case 0x2026f0u: goto label_2026f0;
        case 0x2026f4u: goto label_2026f4;
        case 0x2026f8u: goto label_2026f8;
        case 0x2026fcu: goto label_2026fc;
        case 0x202700u: goto label_202700;
        case 0x202704u: goto label_202704;
        case 0x202708u: goto label_202708;
        case 0x20270cu: goto label_20270c;
        case 0x202710u: goto label_202710;
        case 0x202714u: goto label_202714;
        case 0x202718u: goto label_202718;
        case 0x20271cu: goto label_20271c;
        case 0x202720u: goto label_202720;
        case 0x202724u: goto label_202724;
        case 0x202728u: goto label_202728;
        case 0x20272cu: goto label_20272c;
        case 0x202730u: goto label_202730;
        case 0x202734u: goto label_202734;
        case 0x202738u: goto label_202738;
        case 0x20273cu: goto label_20273c;
        case 0x202740u: goto label_202740;
        case 0x202744u: goto label_202744;
        case 0x202748u: goto label_202748;
        case 0x20274cu: goto label_20274c;
        case 0x202750u: goto label_202750;
        case 0x202754u: goto label_202754;
        case 0x202758u: goto label_202758;
        case 0x20275cu: goto label_20275c;
        case 0x202760u: goto label_202760;
        case 0x202764u: goto label_202764;
        case 0x202768u: goto label_202768;
        case 0x20276cu: goto label_20276c;
        case 0x202770u: goto label_202770;
        case 0x202774u: goto label_202774;
        case 0x202778u: goto label_202778;
        case 0x20277cu: goto label_20277c;
        case 0x202780u: goto label_202780;
        case 0x202784u: goto label_202784;
        case 0x202788u: goto label_202788;
        case 0x20278cu: goto label_20278c;
        case 0x202790u: goto label_202790;
        case 0x202794u: goto label_202794;
        case 0x202798u: goto label_202798;
        case 0x20279cu: goto label_20279c;
        case 0x2027a0u: goto label_2027a0;
        case 0x2027a4u: goto label_2027a4;
        case 0x2027a8u: goto label_2027a8;
        case 0x2027acu: goto label_2027ac;
        case 0x2027b0u: goto label_2027b0;
        case 0x2027b4u: goto label_2027b4;
        case 0x2027b8u: goto label_2027b8;
        case 0x2027bcu: goto label_2027bc;
        case 0x2027c0u: goto label_2027c0;
        case 0x2027c4u: goto label_2027c4;
        case 0x2027c8u: goto label_2027c8;
        case 0x2027ccu: goto label_2027cc;
        case 0x2027d0u: goto label_2027d0;
        case 0x2027d4u: goto label_2027d4;
        case 0x2027d8u: goto label_2027d8;
        case 0x2027dcu: goto label_2027dc;
        case 0x2027e0u: goto label_2027e0;
        case 0x2027e4u: goto label_2027e4;
        case 0x2027e8u: goto label_2027e8;
        case 0x2027ecu: goto label_2027ec;
        case 0x2027f0u: goto label_2027f0;
        case 0x2027f4u: goto label_2027f4;
        case 0x2027f8u: goto label_2027f8;
        case 0x2027fcu: goto label_2027fc;
        case 0x202800u: goto label_202800;
        case 0x202804u: goto label_202804;
        case 0x202808u: goto label_202808;
        case 0x20280cu: goto label_20280c;
        case 0x202810u: goto label_202810;
        case 0x202814u: goto label_202814;
        case 0x202818u: goto label_202818;
        case 0x20281cu: goto label_20281c;
        case 0x202820u: goto label_202820;
        case 0x202824u: goto label_202824;
        case 0x202828u: goto label_202828;
        case 0x20282cu: goto label_20282c;
        case 0x202830u: goto label_202830;
        case 0x202834u: goto label_202834;
        case 0x202838u: goto label_202838;
        case 0x20283cu: goto label_20283c;
        case 0x202840u: goto label_202840;
        case 0x202844u: goto label_202844;
        case 0x202848u: goto label_202848;
        case 0x20284cu: goto label_20284c;
        case 0x202850u: goto label_202850;
        case 0x202854u: goto label_202854;
        case 0x202858u: goto label_202858;
        case 0x20285cu: goto label_20285c;
        case 0x202860u: goto label_202860;
        case 0x202864u: goto label_202864;
        case 0x202868u: goto label_202868;
        case 0x20286cu: goto label_20286c;
        case 0x202870u: goto label_202870;
        case 0x202874u: goto label_202874;
        case 0x202878u: goto label_202878;
        case 0x20287cu: goto label_20287c;
        case 0x202880u: goto label_202880;
        case 0x202884u: goto label_202884;
        case 0x202888u: goto label_202888;
        case 0x20288cu: goto label_20288c;
        case 0x202890u: goto label_202890;
        case 0x202894u: goto label_202894;
        case 0x202898u: goto label_202898;
        case 0x20289cu: goto label_20289c;
        case 0x2028a0u: goto label_2028a0;
        case 0x2028a4u: goto label_2028a4;
        case 0x2028a8u: goto label_2028a8;
        case 0x2028acu: goto label_2028ac;
        case 0x2028b0u: goto label_2028b0;
        case 0x2028b4u: goto label_2028b4;
        case 0x2028b8u: goto label_2028b8;
        case 0x2028bcu: goto label_2028bc;
        case 0x2028c0u: goto label_2028c0;
        case 0x2028c4u: goto label_2028c4;
        case 0x2028c8u: goto label_2028c8;
        case 0x2028ccu: goto label_2028cc;
        case 0x2028d0u: goto label_2028d0;
        case 0x2028d4u: goto label_2028d4;
        case 0x2028d8u: goto label_2028d8;
        case 0x2028dcu: goto label_2028dc;
        case 0x2028e0u: goto label_2028e0;
        case 0x2028e4u: goto label_2028e4;
        case 0x2028e8u: goto label_2028e8;
        case 0x2028ecu: goto label_2028ec;
        case 0x2028f0u: goto label_2028f0;
        case 0x2028f4u: goto label_2028f4;
        case 0x2028f8u: goto label_2028f8;
        case 0x2028fcu: goto label_2028fc;
        case 0x202900u: goto label_202900;
        case 0x202904u: goto label_202904;
        case 0x202908u: goto label_202908;
        case 0x20290cu: goto label_20290c;
        case 0x202910u: goto label_202910;
        case 0x202914u: goto label_202914;
        case 0x202918u: goto label_202918;
        case 0x20291cu: goto label_20291c;
        case 0x202920u: goto label_202920;
        case 0x202924u: goto label_202924;
        case 0x202928u: goto label_202928;
        case 0x20292cu: goto label_20292c;
        case 0x202930u: goto label_202930;
        case 0x202934u: goto label_202934;
        case 0x202938u: goto label_202938;
        case 0x20293cu: goto label_20293c;
        case 0x202940u: goto label_202940;
        case 0x202944u: goto label_202944;
        case 0x202948u: goto label_202948;
        case 0x20294cu: goto label_20294c;
        case 0x202950u: goto label_202950;
        case 0x202954u: goto label_202954;
        case 0x202958u: goto label_202958;
        case 0x20295cu: goto label_20295c;
        case 0x202960u: goto label_202960;
        case 0x202964u: goto label_202964;
        case 0x202968u: goto label_202968;
        case 0x20296cu: goto label_20296c;
        case 0x202970u: goto label_202970;
        case 0x202974u: goto label_202974;
        case 0x202978u: goto label_202978;
        case 0x20297cu: goto label_20297c;
        default: return;
    }

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
            { ctx->pc = 0x202070; return; }
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
            { ctx->pc = 0x202088; return; }
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
    goto label_202760;
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
    goto label_202760;
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
label_202658:
    // 0x202658: 0xc07aa7c  jal         func_1EA9F0
label_20265c:
    if (ctx->pc == 0x20265Cu) {
        ctx->pc = 0x20265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202658u;
        // 0x20265c: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202660u;
        goto label_202660;
    }
    ctx->pc = 0x202658u;
    SET_GPR_U32(ctx, 31, 0x202660u);
    ctx->pc = 0x20265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202658u;
    // 0x20265c: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x202660u;
label_202660:
    // 0x202660: 0xc07ab08  jal         func_1EAC20
label_202664:
    if (ctx->pc == 0x202664u) {
        ctx->pc = 0x202664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202660u;
        // 0x202664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202668u;
        goto label_202668;
    }
    ctx->pc = 0x202660u;
    SET_GPR_U32(ctx, 31, 0x202668u);
    ctx->pc = 0x202664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202660u;
    // 0x202664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    { ctx->pc = 0x1eac20; return; }
    ctx->pc = 0x202668u;
label_202668:
    // 0x202668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x202668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20266c:
    // 0x20266c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20266cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_202670:
    // 0x202670: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x202670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_202674:
    // 0x202674: 0x240700c6  addiu       $a3, $zero, 0xC6
    ctx->pc = 0x202674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
label_202678:
    // 0x202678: 0xc08104c  jal         func_204130
label_20267c:
    if (ctx->pc == 0x20267Cu) {
        ctx->pc = 0x20267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202678u;
        // 0x20267c: 0x27a80040  addiu       $t0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202680u;
        goto label_202680;
    }
    ctx->pc = 0x202678u;
    SET_GPR_U32(ctx, 31, 0x202680u);
    ctx->pc = 0x20267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202678u;
    // 0x20267c: 0x27a80040  addiu       $t0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x202680u;
label_202680:
    // 0x202680: 0xc07aaa8  jal         func_1EAAA0
label_202684:
    if (ctx->pc == 0x202684u) {
        ctx->pc = 0x202684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202680u;
        // 0x202684: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202688u;
        goto label_202688;
    }
    ctx->pc = 0x202680u;
    SET_GPR_U32(ctx, 31, 0x202688u);
    ctx->pc = 0x202684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202680u;
    // 0x202684: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x202688u;
label_202688:
    // 0x202688: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x202688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20268c:
    // 0x20268c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20268cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202690:
    // 0x202690: 0xc07aa94  jal         func_1EAA50
label_202694:
    if (ctx->pc == 0x202694u) {
        ctx->pc = 0x202694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202690u;
        // 0x202694: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202698u;
        goto label_202698;
    }
    ctx->pc = 0x202690u;
    SET_GPR_U32(ctx, 31, 0x202698u);
    ctx->pc = 0x202694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202690u;
    // 0x202694: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    { ctx->pc = 0x1eaa50; return; }
    ctx->pc = 0x202698u;
label_202698:
    // 0x202698: 0xc07ab38  jal         func_1EACE0
label_20269c:
    if (ctx->pc == 0x20269Cu) {
        ctx->pc = 0x2026A0u;
        goto label_2026a0;
    }
    ctx->pc = 0x202698u;
    SET_GPR_U32(ctx, 31, 0x2026A0u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x2026A0u;
label_2026a0:
    // 0x2026a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2026a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2026a4:
    // 0x2026a4: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_2026a8:
    if (ctx->pc == 0x2026A8u) {
        ctx->pc = 0x2026ACu;
        goto label_2026ac;
    }
    ctx->pc = 0x2026A4u;
    {
        const bool branch_taken_0x2026a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2026a4) {
            ctx->pc = 0x2026E0u;
            goto label_2026e0;
        }
    }
    ctx->pc = 0x2026ACu;
label_2026ac:
    // 0x2026ac: 0xc07aaa4  jal         func_1EAA90
label_2026b0:
    if (ctx->pc == 0x2026B0u) {
        ctx->pc = 0x2026B4u;
        goto label_2026b4;
    }
    ctx->pc = 0x2026ACu;
    SET_GPR_U32(ctx, 31, 0x2026B4u);
    ctx->pc = 0x1EAA90u;
    { ctx->pc = 0x1eaa90; return; }
    ctx->pc = 0x2026B4u;
label_2026b4:
    // 0x2026b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2026b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2026b8:
    // 0x2026b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2026b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2026bc:
    // 0x2026bc: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_2026c0:
    if (ctx->pc == 0x2026C0u) {
        ctx->pc = 0x2026C4u;
        goto label_2026c4;
    }
    ctx->pc = 0x2026BCu;
    {
        const bool branch_taken_0x2026bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2026bc) {
            ctx->pc = 0x2026D0u;
            goto label_2026d0;
        }
    }
    ctx->pc = 0x2026C4u;
label_2026c4:
    // 0x2026c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2026c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2026c8:
    // 0x2026c8: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_2026cc:
    if (ctx->pc == 0x2026CCu) {
        ctx->pc = 0x2026D0u;
        goto label_2026d0;
    }
    ctx->pc = 0x2026C8u;
    {
        const bool branch_taken_0x2026c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2026c8) {
            ctx->pc = 0x2026E0u;
            goto label_2026e0;
        }
    }
    ctx->pc = 0x2026D0u;
label_2026d0:
    // 0x2026d0: 0xc07aaa0  jal         func_1EAA80
label_2026d4:
    if (ctx->pc == 0x2026D4u) {
        ctx->pc = 0x2026D8u;
        goto label_2026d8;
    }
    ctx->pc = 0x2026D0u;
    SET_GPR_U32(ctx, 31, 0x2026D8u);
    ctx->pc = 0x1EAA80u;
    { ctx->pc = 0x1eaa80; return; }
    ctx->pc = 0x2026D8u;
label_2026d8:
    // 0x2026d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2026dc:
    if (ctx->pc == 0x2026DCu) {
        ctx->pc = 0x2026E0u;
        goto label_2026e0;
    }
    ctx->pc = 0x2026D8u;
    {
        const bool branch_taken_0x2026d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2026d8) {
            ctx->pc = 0x202708u;
            goto label_202708;
        }
    }
    ctx->pc = 0x2026E0u;
label_2026e0:
    // 0x2026e0: 0xc07a9d8  jal         func_1EA760
label_2026e4:
    if (ctx->pc == 0x2026E4u) {
        ctx->pc = 0x2026E8u;
        goto label_2026e8;
    }
    ctx->pc = 0x2026E0u;
    SET_GPR_U32(ctx, 31, 0x2026E8u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x2026E8u;
label_2026e8:
    // 0x2026e8: 0xc07a86c  jal         func_1EA1B0
label_2026ec:
    if (ctx->pc == 0x2026ECu) {
        ctx->pc = 0x2026F0u;
        goto label_2026f0;
    }
    ctx->pc = 0x2026E8u;
    SET_GPR_U32(ctx, 31, 0x2026F0u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x2026F0u;
label_2026f0:
    // 0x2026f0: 0xc05b578  jal         func_16D5E0
label_2026f4:
    if (ctx->pc == 0x2026F4u) {
        ctx->pc = 0x2026F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026F0u;
        // 0x2026f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2026F8u;
        goto label_2026f8;
    }
    ctx->pc = 0x2026F0u;
    SET_GPR_U32(ctx, 31, 0x2026F8u);
    ctx->pc = 0x2026F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026F0u;
    // 0x2026f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x2026F0u, 0x2026F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026F8u;
label_2026f8:
    // 0x2026f8: 0xc060258  jal         func_180960
label_2026fc:
    if (ctx->pc == 0x2026FCu) {
        ctx->pc = 0x202700u;
        goto label_202700;
    }
    ctx->pc = 0x2026F8u;
    SET_GPR_U32(ctx, 31, 0x202700u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x2026F8u, 0x202700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202700u;
label_202700:
    // 0x202700: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
label_202704:
    if (ctx->pc == 0x202704u) {
        ctx->pc = 0x202708u;
        goto label_202708;
    }
    ctx->pc = 0x202700u;
    {
        const bool branch_taken_0x202700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202700) {
            ctx->pc = 0x202698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202698;
        }
    }
    ctx->pc = 0x202708u;
label_202708:
    // 0x202708: 0xc07ab18  jal         func_1EAC60
label_20270c:
    if (ctx->pc == 0x20270Cu) {
        ctx->pc = 0x20270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202708u;
        // 0x20270c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202710u;
        goto label_202710;
    }
    ctx->pc = 0x202708u;
    SET_GPR_U32(ctx, 31, 0x202710u);
    ctx->pc = 0x20270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202708u;
    // 0x20270c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x202710u;
label_202710:
    // 0x202710: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x202710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202714:
    // 0x202714: 0xc05b578  jal         func_16D5E0
label_202718:
    if (ctx->pc == 0x202718u) {
        ctx->pc = 0x202718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202714u;
        // 0x202718: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20271Cu;
        goto label_20271c;
    }
    ctx->pc = 0x202714u;
    SET_GPR_U32(ctx, 31, 0x20271Cu);
    ctx->pc = 0x202718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202714u;
    // 0x202718: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x202714u, 0x20271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20271Cu;
label_20271c:
    // 0x20271c: 0xc060258  jal         func_180960
label_202720:
    if (ctx->pc == 0x202720u) {
        ctx->pc = 0x202724u;
        goto label_202724;
    }
    ctx->pc = 0x20271Cu;
    SET_GPR_U32(ctx, 31, 0x202724u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20271Cu, 0x202724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202724u;
label_202724:
    // 0x202724: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x202724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_202728:
    // 0x202728: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x202728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
label_20272c:
    // 0x20272c: 0x0  nop
    ctx->pc = 0x20272cu;
    // NOP
label_202730:
    // 0x202730: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_202734:
    if (ctx->pc == 0x202734u) {
        ctx->pc = 0x202738u;
        goto label_202738;
    }
    ctx->pc = 0x202730u;
    {
        const bool branch_taken_0x202730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202730) {
            ctx->pc = 0x202714u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202714;
        }
    }
    ctx->pc = 0x202738u;
label_202738:
    // 0x202738: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x202738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20273c:
    // 0x20273c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20273cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_202740:
    // 0x202740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x202740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_202744:
    // 0x202744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x202744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_202748:
    // 0x202748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x202748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20274c:
    // 0x20274c: 0x3e00008  jr          $ra
label_202750:
    if (ctx->pc == 0x202750u) {
        ctx->pc = 0x202750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20274Cu;
        // 0x202750: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202754u;
        goto label_202754;
    }
    ctx->pc = 0x20274Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20274Cu;
        // 0x202750: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20274Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202754u;
label_202754:
    // 0x202754: 0x0  nop
    ctx->pc = 0x202754u;
    // NOP
label_202758:
    // 0x202758: 0x0  nop
    ctx->pc = 0x202758u;
    // NOP
label_20275c:
    // 0x20275c: 0x0  nop
    ctx->pc = 0x20275cu;
    // NOP
label_202760:
    // 0x202760: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x202760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_202764:
    // 0x202764: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x202764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_202768:
    // 0x202768: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x202768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20276c:
    // 0x20276c: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x20276cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_202770:
    // 0x202770: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_202774:
    // 0x202774: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x202774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_202778:
    // 0x202778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x202778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20277c:
    // 0x20277c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20277cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_202780:
    // 0x202780: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x202780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_202784:
    // 0x202784: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x202784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_202788:
    // 0x202788: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x202788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_20278c:
    // 0x20278c: 0xc07aa5c  jal         func_1EA970
label_202790:
    if (ctx->pc == 0x202790u) {
        ctx->pc = 0x202790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20278Cu;
        // 0x202790: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202794u;
        goto label_202794;
    }
    ctx->pc = 0x20278Cu;
    SET_GPR_U32(ctx, 31, 0x202794u);
    ctx->pc = 0x202790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20278Cu;
    // 0x202790: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x202794u;
label_202794:
    // 0x202794: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x202794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_202798:
    // 0x202798: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x202798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20279c:
    // 0x20279c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x20279cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2027a0:
    // 0x2027a0: 0xc07aa7c  jal         func_1EA9F0
label_2027a4:
    if (ctx->pc == 0x2027A4u) {
        ctx->pc = 0x2027A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027A0u;
        // 0x2027a4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2027A8u;
        goto label_2027a8;
    }
    ctx->pc = 0x2027A0u;
    SET_GPR_U32(ctx, 31, 0x2027A8u);
    ctx->pc = 0x2027A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027A0u;
    // 0x2027a4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x2027A8u;
label_2027a8:
    // 0x2027a8: 0xc07ab08  jal         func_1EAC20
label_2027ac:
    if (ctx->pc == 0x2027ACu) {
        ctx->pc = 0x2027ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027A8u;
        // 0x2027ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2027B0u;
        goto label_2027b0;
    }
    ctx->pc = 0x2027A8u;
    SET_GPR_U32(ctx, 31, 0x2027B0u);
    ctx->pc = 0x2027ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027A8u;
    // 0x2027ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    { ctx->pc = 0x1eac20; return; }
    ctx->pc = 0x2027B0u;
label_2027b0:
    // 0x2027b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2027b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2027b4:
    // 0x2027b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2027b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2027b8:
    // 0x2027b8: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x2027b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2027bc:
    // 0x2027bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2027bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2027c0:
    // 0x2027c0: 0xc08104c  jal         func_204130
label_2027c4:
    if (ctx->pc == 0x2027C4u) {
        ctx->pc = 0x2027C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027C0u;
        // 0x2027c4: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2027C8u;
        goto label_2027c8;
    }
    ctx->pc = 0x2027C0u;
    SET_GPR_U32(ctx, 31, 0x2027C8u);
    ctx->pc = 0x2027C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027C0u;
    // 0x2027c4: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204130u;
    { ctx->pc = 0x204130; return; }
    ctx->pc = 0x2027C8u;
label_2027c8:
    // 0x2027c8: 0xc07aaa8  jal         func_1EAAA0
label_2027cc:
    if (ctx->pc == 0x2027CCu) {
        ctx->pc = 0x2027CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027C8u;
        // 0x2027cc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2027D0u;
        goto label_2027d0;
    }
    ctx->pc = 0x2027C8u;
    SET_GPR_U32(ctx, 31, 0x2027D0u);
    ctx->pc = 0x2027CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027C8u;
    // 0x2027cc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x2027D0u;
label_2027d0:
    // 0x2027d0: 0xc07aa84  jal         func_1EAA10
label_2027d4:
    if (ctx->pc == 0x2027D4u) {
        ctx->pc = 0x2027D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027D0u;
        // 0x2027d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2027D8u;
        goto label_2027d8;
    }
    ctx->pc = 0x2027D0u;
    SET_GPR_U32(ctx, 31, 0x2027D8u);
    ctx->pc = 0x2027D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027D0u;
    // 0x2027d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA10u;
    { ctx->pc = 0x1eaa10; return; }
    ctx->pc = 0x2027D8u;
label_2027d8:
    // 0x2027d8: 0xc07ab38  jal         func_1EACE0
label_2027dc:
    if (ctx->pc == 0x2027DCu) {
        ctx->pc = 0x2027E0u;
        goto label_2027e0;
    }
    ctx->pc = 0x2027D8u;
    SET_GPR_U32(ctx, 31, 0x2027E0u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x2027E0u;
label_2027e0:
    // 0x2027e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2027e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2027e4:
    // 0x2027e4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_2027e8:
    if (ctx->pc == 0x2027E8u) {
        ctx->pc = 0x2027ECu;
        goto label_2027ec;
    }
    ctx->pc = 0x2027E4u;
    {
        const bool branch_taken_0x2027e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2027e4) {
            ctx->pc = 0x202810u;
            goto label_202810;
        }
    }
    ctx->pc = 0x2027ECu;
label_2027ec:
    // 0x2027ec: 0xc07aa90  jal         func_1EAA40
label_2027f0:
    if (ctx->pc == 0x2027F0u) {
        ctx->pc = 0x2027F4u;
        goto label_2027f4;
    }
    ctx->pc = 0x2027ECu;
    SET_GPR_U32(ctx, 31, 0x2027F4u);
    ctx->pc = 0x1EAA40u;
    { ctx->pc = 0x1eaa40; return; }
    ctx->pc = 0x2027F4u;
label_2027f4:
    // 0x2027f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2027f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2027f8:
    // 0x2027f8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2027fc:
    if (ctx->pc == 0x2027FCu) {
        ctx->pc = 0x202800u;
        goto label_202800;
    }
    ctx->pc = 0x2027F8u;
    {
        const bool branch_taken_0x2027f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2027f8) {
            ctx->pc = 0x202810u;
            goto label_202810;
        }
    }
    ctx->pc = 0x202800u;
label_202800:
    // 0x202800: 0xc07aa8c  jal         func_1EAA30
label_202804:
    if (ctx->pc == 0x202804u) {
        ctx->pc = 0x202808u;
        goto label_202808;
    }
    ctx->pc = 0x202800u;
    SET_GPR_U32(ctx, 31, 0x202808u);
    ctx->pc = 0x1EAA30u;
    { ctx->pc = 0x1eaa30; return; }
    ctx->pc = 0x202808u;
label_202808:
    // 0x202808: 0x1000000b  b           . + 4 + (0xB << 2)
label_20280c:
    if (ctx->pc == 0x20280Cu) {
        ctx->pc = 0x202810u;
        goto label_202810;
    }
    ctx->pc = 0x202808u;
    {
        const bool branch_taken_0x202808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202808) {
            ctx->pc = 0x202838u;
            goto label_202838;
        }
    }
    ctx->pc = 0x202810u;
label_202810:
    // 0x202810: 0xc07a9d8  jal         func_1EA760
label_202814:
    if (ctx->pc == 0x202814u) {
        ctx->pc = 0x202818u;
        goto label_202818;
    }
    ctx->pc = 0x202810u;
    SET_GPR_U32(ctx, 31, 0x202818u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x202818u;
label_202818:
    // 0x202818: 0xc07a86c  jal         func_1EA1B0
label_20281c:
    if (ctx->pc == 0x20281Cu) {
        ctx->pc = 0x202820u;
        goto label_202820;
    }
    ctx->pc = 0x202818u;
    SET_GPR_U32(ctx, 31, 0x202820u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x202820u;
label_202820:
    // 0x202820: 0xc05b578  jal         func_16D5E0
label_202824:
    if (ctx->pc == 0x202824u) {
        ctx->pc = 0x202824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202820u;
        // 0x202824: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202828u;
        goto label_202828;
    }
    ctx->pc = 0x202820u;
    SET_GPR_U32(ctx, 31, 0x202828u);
    ctx->pc = 0x202824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202820u;
    // 0x202824: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x202820u, 0x202828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202828u;
label_202828:
    // 0x202828: 0xc060258  jal         func_180960
label_20282c:
    if (ctx->pc == 0x20282Cu) {
        ctx->pc = 0x202830u;
        goto label_202830;
    }
    ctx->pc = 0x202828u;
    SET_GPR_U32(ctx, 31, 0x202830u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x202828u, 0x202830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202830u;
label_202830:
    // 0x202830: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
label_202834:
    if (ctx->pc == 0x202834u) {
        ctx->pc = 0x202838u;
        goto label_202838;
    }
    ctx->pc = 0x202830u;
    {
        const bool branch_taken_0x202830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202830) {
            ctx->pc = 0x2027D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2027d8;
        }
    }
    ctx->pc = 0x202838u;
label_202838:
    // 0x202838: 0xc07ab18  jal         func_1EAC60
label_20283c:
    if (ctx->pc == 0x20283Cu) {
        ctx->pc = 0x20283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202838u;
        // 0x20283c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202840u;
        goto label_202840;
    }
    ctx->pc = 0x202838u;
    SET_GPR_U32(ctx, 31, 0x202840u);
    ctx->pc = 0x20283Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202838u;
    // 0x20283c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x202840u;
label_202840:
    // 0x202840: 0xc060258  jal         func_180960
label_202844:
    if (ctx->pc == 0x202844u) {
        ctx->pc = 0x202848u;
        goto label_202848;
    }
    ctx->pc = 0x202840u;
    SET_GPR_U32(ctx, 31, 0x202848u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x202840u, 0x202848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202848u;
label_202848:
    // 0x202848: 0xc060258  jal         func_180960
label_20284c:
    if (ctx->pc == 0x20284Cu) {
        ctx->pc = 0x202850u;
        goto label_202850;
    }
    ctx->pc = 0x202848u;
    SET_GPR_U32(ctx, 31, 0x202850u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x202848u, 0x202850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202850u;
label_202850:
    // 0x202850: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x202850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202854:
    // 0x202854: 0xc05b578  jal         func_16D5E0
label_202858:
    if (ctx->pc == 0x202858u) {
        ctx->pc = 0x202858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202854u;
        // 0x202858: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20285Cu;
        goto label_20285c;
    }
    ctx->pc = 0x202854u;
    SET_GPR_U32(ctx, 31, 0x20285Cu);
    ctx->pc = 0x202858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202854u;
    // 0x202858: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x202854u, 0x20285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20285Cu;
label_20285c:
    // 0x20285c: 0xc060258  jal         func_180960
label_202860:
    if (ctx->pc == 0x202860u) {
        ctx->pc = 0x202864u;
        goto label_202864;
    }
    ctx->pc = 0x20285Cu;
    SET_GPR_U32(ctx, 31, 0x202864u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20285Cu, 0x202864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202864u;
label_202864:
    // 0x202864: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x202864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_202868:
    // 0x202868: 0x2a03003c  slti        $v1, $s0, 0x3C
    ctx->pc = 0x202868u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
label_20286c:
    // 0x20286c: 0x0  nop
    ctx->pc = 0x20286cu;
    // NOP
label_202870:
    // 0x202870: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_202874:
    if (ctx->pc == 0x202874u) {
        ctx->pc = 0x202878u;
        goto label_202878;
    }
    ctx->pc = 0x202870u;
    {
        const bool branch_taken_0x202870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x202870) {
            ctx->pc = 0x202854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202854;
        }
    }
    ctx->pc = 0x202878u;
label_202878:
    // 0x202878: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x202878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20287c:
    // 0x20287c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20287cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_202880:
    // 0x202880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x202880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_202884:
    // 0x202884: 0x3e00008  jr          $ra
label_202888:
    if (ctx->pc == 0x202888u) {
        ctx->pc = 0x202888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202884u;
        // 0x202888: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20288Cu;
        goto label_20288c;
    }
    ctx->pc = 0x202884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202884u;
        // 0x202888: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20288Cu;
label_20288c:
    // 0x20288c: 0x0  nop
    ctx->pc = 0x20288cu;
    // NOP
label_202890:
    // 0x202890: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x202890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_202894:
    // 0x202894: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x202894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_202898:
    // 0x202898: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x202898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_20289c:
    // 0x20289c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20289cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2028a0:
    // 0x2028a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2028a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2028a4:
    // 0x2028a4: 0x2463f700  addiu       $v1, $v1, -0x900
    ctx->pc = 0x2028a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964992));
label_2028a8:
    // 0x2028a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2028a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2028ac:
    // 0x2028ac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2028acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2028b0:
    // 0x2028b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2028b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2028b4:
    // 0x2028b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2028b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2028b8:
    // 0x2028b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2028b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2028bc:
    // 0x2028bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2028bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2028c0:
    // 0x2028c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2028c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2028c4:
    // 0x2028c4: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x2028c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_2028c8:
    // 0x2028c8: 0x8c25f468  lw          $a1, -0xB98($at)
    ctx->pc = 0x2028c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_2028cc:
    // 0x2028cc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2028ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_2028d0:
    // 0x2028d0: 0x2610f440  addiu       $s0, $s0, -0xBC0
    ctx->pc = 0x2028d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964288));
label_2028d4:
    // 0x2028d4: 0x2631f460  addiu       $s1, $s1, -0xBA0
    ctx->pc = 0x2028d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964320));
label_2028d8:
    // 0x2028d8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2028d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2028dc:
    // 0x2028dc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2028dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2028e0:
    // 0x2028e0: 0x8c22f454  lw          $v0, -0xBAC($at)
    ctx->pc = 0x2028e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964308)));
label_2028e4:
    // 0x2028e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2028e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2028e8:
    // 0x2028e8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2028e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2028ec:
    // 0x2028ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2028ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2028f0:
    // 0x2028f0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2028f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_2028f4:
    // 0x2028f4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_2028f8:
    if (ctx->pc == 0x2028F8u) {
        ctx->pc = 0x2028F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028F4u;
        // 0x2028f8: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2028FCu;
        goto label_2028fc;
    }
    ctx->pc = 0x2028F4u;
    {
        const bool branch_taken_0x2028f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2028F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028F4u;
        // 0x2028f8: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028f4) {
            ctx->pc = 0x20293Cu;
            goto label_20293c;
        }
    }
    ctx->pc = 0x2028FCu;
label_2028fc:
    // 0x2028fc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2028fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_202900:
    // 0x202900: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x202900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_202904:
    // 0x202904: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x202904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_202908:
    // 0x202908: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x202908u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_20290c:
    // 0x20290c: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x20290cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_202910:
    // 0x202910: 0xc07aa5c  jal         func_1EA970
label_202914:
    if (ctx->pc == 0x202914u) {
        ctx->pc = 0x202914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202910u;
        // 0x202914: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202918u;
        goto label_202918;
    }
    ctx->pc = 0x202910u;
    SET_GPR_U32(ctx, 31, 0x202918u);
    ctx->pc = 0x202914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202910u;
    // 0x202914: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x202918u;
label_202918:
    // 0x202918: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x202918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20291c:
    // 0x20291c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x20291cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_202920:
    // 0x202920: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x202920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_202924:
    // 0x202924: 0xc07aa7c  jal         func_1EA9F0
label_202928:
    if (ctx->pc == 0x202928u) {
        ctx->pc = 0x202928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202924u;
        // 0x202928: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20292Cu;
        goto label_20292c;
    }
    ctx->pc = 0x202924u;
    SET_GPR_U32(ctx, 31, 0x20292Cu);
    ctx->pc = 0x202928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202924u;
    // 0x202928: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x20292Cu;
label_20292c:
    // 0x20292c: 0xc07ab08  jal         func_1EAC20
label_202930:
    if (ctx->pc == 0x202930u) {
        ctx->pc = 0x202930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20292Cu;
        // 0x202930: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202934u;
        goto label_202934;
    }
    ctx->pc = 0x20292Cu;
    SET_GPR_U32(ctx, 31, 0x202934u);
    ctx->pc = 0x202930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20292Cu;
    // 0x202930: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    { ctx->pc = 0x1eac20; return; }
    ctx->pc = 0x202934u;
label_202934:
    // 0x202934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202938:
    // 0x202938: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x202938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_20293c:
    // 0x20293c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20293cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_202940:
    // 0x202940: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x202940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_202944:
    // 0x202944: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_202948:
    if (ctx->pc == 0x202948u) {
        ctx->pc = 0x20294Cu;
        goto label_20294c;
    }
    ctx->pc = 0x202944u;
    {
        const bool branch_taken_0x202944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x202944) {
            ctx->pc = 0x2029B4u;
            { ctx->pc = 0x2029b4; return; }
        }
    }
    ctx->pc = 0x20294Cu;
label_20294c:
    // 0x20294c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_202950:
    // 0x202950: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_202954:
    if (ctx->pc == 0x202954u) {
        ctx->pc = 0x202958u;
        goto label_202958;
    }
    ctx->pc = 0x202950u;
    {
        const bool branch_taken_0x202950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202950) {
            ctx->pc = 0x20296Cu;
            goto label_20296c;
        }
    }
    ctx->pc = 0x202958u;
label_202958:
    // 0x202958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20295c:
    // 0x20295c: 0xc080aec  jal         func_202BB0
label_202960:
    if (ctx->pc == 0x202960u) {
        ctx->pc = 0x202960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20295Cu;
        // 0x202960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202964u;
        goto label_202964;
    }
    ctx->pc = 0x20295Cu;
    SET_GPR_U32(ctx, 31, 0x202964u);
    ctx->pc = 0x202960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20295Cu;
    // 0x202960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202BB0u;
    { ctx->pc = 0x202bb0; return; }
    ctx->pc = 0x202964u;
label_202964:
    // 0x202964: 0x10000088  b           . + 4 + (0x88 << 2)
label_202968:
    if (ctx->pc == 0x202968u) {
        ctx->pc = 0x202968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202964u;
        // 0x202968: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20296Cu;
        goto label_20296c;
    }
    ctx->pc = 0x202964u;
    {
        const bool branch_taken_0x202964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202964u;
        // 0x202968: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202964) {
            ctx->pc = 0x202B88u;
            { ctx->pc = 0x202b88; return; }
        }
    }
    ctx->pc = 0x20296Cu;
label_20296c:
    // 0x20296c: 0xc07aa90  jal         func_1EAA40
label_202970:
    if (ctx->pc == 0x202970u) {
        ctx->pc = 0x202970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20296Cu;
        // 0x202970: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202974u;
        goto label_202974;
    }
    ctx->pc = 0x20296Cu;
    SET_GPR_U32(ctx, 31, 0x202974u);
    ctx->pc = 0x202970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20296Cu;
    // 0x202970: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA40u;
    { ctx->pc = 0x1eaa40; return; }
    ctx->pc = 0x202974u;
label_202974:
    // 0x202974: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x202974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_202978:
    // 0x202978: 0x14430082  bne         $v0, $v1, . + 4 + (0x82 << 2)
label_20297c:
    if (ctx->pc == 0x20297Cu) {
        ctx->pc = 0x202980u;
        { ctx->pc = 0x202980; return; }
    }
    ctx->pc = 0x202978u;
    {
        const bool branch_taken_0x202978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x202978) {
            ctx->pc = 0x202B84u;
            { ctx->pc = 0x202b84; return; }
        }
    }
    ctx->pc = 0x202980u;
    ctx->pc = 0x202980u;
    return;
}

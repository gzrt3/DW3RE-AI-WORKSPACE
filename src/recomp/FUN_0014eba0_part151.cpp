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


void FUN_0014eba0_part151(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x197f80u: goto label_197f80;
        case 0x197f84u: goto label_197f84;
        case 0x197f88u: goto label_197f88;
        case 0x197f8cu: goto label_197f8c;
        case 0x197f90u: goto label_197f90;
        case 0x197f94u: goto label_197f94;
        case 0x197f98u: goto label_197f98;
        case 0x197f9cu: goto label_197f9c;
        case 0x197fa0u: goto label_197fa0;
        case 0x197fa4u: goto label_197fa4;
        case 0x197fa8u: goto label_197fa8;
        case 0x197facu: goto label_197fac;
        case 0x197fb0u: goto label_197fb0;
        case 0x197fb4u: goto label_197fb4;
        case 0x197fb8u: goto label_197fb8;
        case 0x197fbcu: goto label_197fbc;
        case 0x197fc0u: goto label_197fc0;
        case 0x197fc4u: goto label_197fc4;
        case 0x197fc8u: goto label_197fc8;
        case 0x197fccu: goto label_197fcc;
        case 0x197fd0u: goto label_197fd0;
        case 0x197fd4u: goto label_197fd4;
        case 0x197fd8u: goto label_197fd8;
        case 0x197fdcu: goto label_197fdc;
        case 0x197fe0u: goto label_197fe0;
        case 0x197fe4u: goto label_197fe4;
        case 0x197fe8u: goto label_197fe8;
        case 0x197fecu: goto label_197fec;
        case 0x197ff0u: goto label_197ff0;
        case 0x197ff4u: goto label_197ff4;
        case 0x197ff8u: goto label_197ff8;
        case 0x197ffcu: goto label_197ffc;
        case 0x198000u: goto label_198000;
        case 0x198004u: goto label_198004;
        case 0x198008u: goto label_198008;
        case 0x19800cu: goto label_19800c;
        case 0x198010u: goto label_198010;
        case 0x198014u: goto label_198014;
        case 0x198018u: goto label_198018;
        case 0x19801cu: goto label_19801c;
        case 0x198020u: goto label_198020;
        case 0x198024u: goto label_198024;
        case 0x198028u: goto label_198028;
        case 0x19802cu: goto label_19802c;
        case 0x198030u: goto label_198030;
        case 0x198034u: goto label_198034;
        case 0x198038u: goto label_198038;
        case 0x19803cu: goto label_19803c;
        case 0x198040u: goto label_198040;
        case 0x198044u: goto label_198044;
        case 0x198048u: goto label_198048;
        case 0x19804cu: goto label_19804c;
        case 0x198050u: goto label_198050;
        case 0x198054u: goto label_198054;
        case 0x198058u: goto label_198058;
        case 0x19805cu: goto label_19805c;
        case 0x198060u: goto label_198060;
        case 0x198064u: goto label_198064;
        case 0x198068u: goto label_198068;
        case 0x19806cu: goto label_19806c;
        case 0x198070u: goto label_198070;
        case 0x198074u: goto label_198074;
        case 0x198078u: goto label_198078;
        case 0x19807cu: goto label_19807c;
        case 0x198080u: goto label_198080;
        case 0x198084u: goto label_198084;
        case 0x198088u: goto label_198088;
        case 0x19808cu: goto label_19808c;
        case 0x198090u: goto label_198090;
        case 0x198094u: goto label_198094;
        case 0x198098u: goto label_198098;
        case 0x19809cu: goto label_19809c;
        case 0x1980a0u: goto label_1980a0;
        case 0x1980a4u: goto label_1980a4;
        case 0x1980a8u: goto label_1980a8;
        case 0x1980acu: goto label_1980ac;
        case 0x1980b0u: goto label_1980b0;
        case 0x1980b4u: goto label_1980b4;
        case 0x1980b8u: goto label_1980b8;
        case 0x1980bcu: goto label_1980bc;
        case 0x1980c0u: goto label_1980c0;
        case 0x1980c4u: goto label_1980c4;
        case 0x1980c8u: goto label_1980c8;
        case 0x1980ccu: goto label_1980cc;
        case 0x1980d0u: goto label_1980d0;
        case 0x1980d4u: goto label_1980d4;
        case 0x1980d8u: goto label_1980d8;
        case 0x1980dcu: goto label_1980dc;
        case 0x1980e0u: goto label_1980e0;
        case 0x1980e4u: goto label_1980e4;
        case 0x1980e8u: goto label_1980e8;
        case 0x1980ecu: goto label_1980ec;
        case 0x1980f0u: goto label_1980f0;
        case 0x1980f4u: goto label_1980f4;
        case 0x1980f8u: goto label_1980f8;
        case 0x1980fcu: goto label_1980fc;
        case 0x198100u: goto label_198100;
        case 0x198104u: goto label_198104;
        case 0x198108u: goto label_198108;
        case 0x19810cu: goto label_19810c;
        case 0x198110u: goto label_198110;
        case 0x198114u: goto label_198114;
        case 0x198118u: goto label_198118;
        case 0x19811cu: goto label_19811c;
        case 0x198120u: goto label_198120;
        case 0x198124u: goto label_198124;
        case 0x198128u: goto label_198128;
        case 0x19812cu: goto label_19812c;
        case 0x198130u: goto label_198130;
        case 0x198134u: goto label_198134;
        case 0x198138u: goto label_198138;
        case 0x19813cu: goto label_19813c;
        case 0x198140u: goto label_198140;
        case 0x198144u: goto label_198144;
        case 0x198148u: goto label_198148;
        case 0x19814cu: goto label_19814c;
        case 0x198150u: goto label_198150;
        case 0x198154u: goto label_198154;
        case 0x198158u: goto label_198158;
        case 0x19815cu: goto label_19815c;
        case 0x198160u: goto label_198160;
        case 0x198164u: goto label_198164;
        case 0x198168u: goto label_198168;
        case 0x19816cu: goto label_19816c;
        case 0x198170u: goto label_198170;
        case 0x198174u: goto label_198174;
        case 0x198178u: goto label_198178;
        case 0x19817cu: goto label_19817c;
        case 0x198180u: goto label_198180;
        case 0x198184u: goto label_198184;
        case 0x198188u: goto label_198188;
        case 0x19818cu: goto label_19818c;
        case 0x198190u: goto label_198190;
        case 0x198194u: goto label_198194;
        case 0x198198u: goto label_198198;
        case 0x19819cu: goto label_19819c;
        case 0x1981a0u: goto label_1981a0;
        case 0x1981a4u: goto label_1981a4;
        case 0x1981a8u: goto label_1981a8;
        case 0x1981acu: goto label_1981ac;
        case 0x1981b0u: goto label_1981b0;
        case 0x1981b4u: goto label_1981b4;
        case 0x1981b8u: goto label_1981b8;
        case 0x1981bcu: goto label_1981bc;
        case 0x1981c0u: goto label_1981c0;
        case 0x1981c4u: goto label_1981c4;
        case 0x1981c8u: goto label_1981c8;
        case 0x1981ccu: goto label_1981cc;
        case 0x1981d0u: goto label_1981d0;
        case 0x1981d4u: goto label_1981d4;
        case 0x1981d8u: goto label_1981d8;
        case 0x1981dcu: goto label_1981dc;
        case 0x1981e0u: goto label_1981e0;
        case 0x1981e4u: goto label_1981e4;
        case 0x1981e8u: goto label_1981e8;
        case 0x1981ecu: goto label_1981ec;
        case 0x1981f0u: goto label_1981f0;
        case 0x1981f4u: goto label_1981f4;
        case 0x1981f8u: goto label_1981f8;
        case 0x1981fcu: goto label_1981fc;
        case 0x198200u: goto label_198200;
        case 0x198204u: goto label_198204;
        case 0x198208u: goto label_198208;
        case 0x19820cu: goto label_19820c;
        case 0x198210u: goto label_198210;
        case 0x198214u: goto label_198214;
        case 0x198218u: goto label_198218;
        case 0x19821cu: goto label_19821c;
        case 0x198220u: goto label_198220;
        case 0x198224u: goto label_198224;
        case 0x198228u: goto label_198228;
        case 0x19822cu: goto label_19822c;
        case 0x198230u: goto label_198230;
        case 0x198234u: goto label_198234;
        case 0x198238u: goto label_198238;
        case 0x19823cu: goto label_19823c;
        case 0x198240u: goto label_198240;
        case 0x198244u: goto label_198244;
        case 0x198248u: goto label_198248;
        case 0x19824cu: goto label_19824c;
        case 0x198250u: goto label_198250;
        case 0x198254u: goto label_198254;
        case 0x198258u: goto label_198258;
        case 0x19825cu: goto label_19825c;
        case 0x198260u: goto label_198260;
        case 0x198264u: goto label_198264;
        case 0x198268u: goto label_198268;
        case 0x19826cu: goto label_19826c;
        case 0x198270u: goto label_198270;
        case 0x198274u: goto label_198274;
        case 0x198278u: goto label_198278;
        case 0x19827cu: goto label_19827c;
        case 0x198280u: goto label_198280;
        case 0x198284u: goto label_198284;
        case 0x198288u: goto label_198288;
        case 0x19828cu: goto label_19828c;
        case 0x198290u: goto label_198290;
        case 0x198294u: goto label_198294;
        case 0x198298u: goto label_198298;
        case 0x19829cu: goto label_19829c;
        case 0x1982a0u: goto label_1982a0;
        case 0x1982a4u: goto label_1982a4;
        case 0x1982a8u: goto label_1982a8;
        case 0x1982acu: goto label_1982ac;
        case 0x1982b0u: goto label_1982b0;
        case 0x1982b4u: goto label_1982b4;
        case 0x1982b8u: goto label_1982b8;
        case 0x1982bcu: goto label_1982bc;
        case 0x1982c0u: goto label_1982c0;
        case 0x1982c4u: goto label_1982c4;
        case 0x1982c8u: goto label_1982c8;
        case 0x1982ccu: goto label_1982cc;
        case 0x1982d0u: goto label_1982d0;
        case 0x1982d4u: goto label_1982d4;
        case 0x1982d8u: goto label_1982d8;
        case 0x1982dcu: goto label_1982dc;
        case 0x1982e0u: goto label_1982e0;
        case 0x1982e4u: goto label_1982e4;
        case 0x1982e8u: goto label_1982e8;
        case 0x1982ecu: goto label_1982ec;
        case 0x1982f0u: goto label_1982f0;
        case 0x1982f4u: goto label_1982f4;
        case 0x1982f8u: goto label_1982f8;
        case 0x1982fcu: goto label_1982fc;
        case 0x198300u: goto label_198300;
        case 0x198304u: goto label_198304;
        case 0x198308u: goto label_198308;
        case 0x19830cu: goto label_19830c;
        case 0x198310u: goto label_198310;
        case 0x198314u: goto label_198314;
        case 0x198318u: goto label_198318;
        case 0x19831cu: goto label_19831c;
        case 0x198320u: goto label_198320;
        case 0x198324u: goto label_198324;
        case 0x198328u: goto label_198328;
        case 0x19832cu: goto label_19832c;
        case 0x198330u: goto label_198330;
        case 0x198334u: goto label_198334;
        case 0x198338u: goto label_198338;
        case 0x19833cu: goto label_19833c;
        case 0x198340u: goto label_198340;
        case 0x198344u: goto label_198344;
        case 0x198348u: goto label_198348;
        case 0x19834cu: goto label_19834c;
        case 0x198350u: goto label_198350;
        case 0x198354u: goto label_198354;
        case 0x198358u: goto label_198358;
        case 0x19835cu: goto label_19835c;
        case 0x198360u: goto label_198360;
        case 0x198364u: goto label_198364;
        case 0x198368u: goto label_198368;
        case 0x19836cu: goto label_19836c;
        case 0x198370u: goto label_198370;
        case 0x198374u: goto label_198374;
        case 0x198378u: goto label_198378;
        case 0x19837cu: goto label_19837c;
        case 0x198380u: goto label_198380;
        case 0x198384u: goto label_198384;
        case 0x198388u: goto label_198388;
        case 0x19838cu: goto label_19838c;
        case 0x198390u: goto label_198390;
        case 0x198394u: goto label_198394;
        case 0x198398u: goto label_198398;
        case 0x19839cu: goto label_19839c;
        case 0x1983a0u: goto label_1983a0;
        case 0x1983a4u: goto label_1983a4;
        case 0x1983a8u: goto label_1983a8;
        case 0x1983acu: goto label_1983ac;
        case 0x1983b0u: goto label_1983b0;
        case 0x1983b4u: goto label_1983b4;
        case 0x1983b8u: goto label_1983b8;
        case 0x1983bcu: goto label_1983bc;
        case 0x1983c0u: goto label_1983c0;
        case 0x1983c4u: goto label_1983c4;
        case 0x1983c8u: goto label_1983c8;
        case 0x1983ccu: goto label_1983cc;
        case 0x1983d0u: goto label_1983d0;
        case 0x1983d4u: goto label_1983d4;
        case 0x1983d8u: goto label_1983d8;
        case 0x1983dcu: goto label_1983dc;
        case 0x1983e0u: goto label_1983e0;
        case 0x1983e4u: goto label_1983e4;
        case 0x1983e8u: goto label_1983e8;
        case 0x1983ecu: goto label_1983ec;
        case 0x1983f0u: goto label_1983f0;
        case 0x1983f4u: goto label_1983f4;
        case 0x1983f8u: goto label_1983f8;
        case 0x1983fcu: goto label_1983fc;
        case 0x198400u: goto label_198400;
        case 0x198404u: goto label_198404;
        case 0x198408u: goto label_198408;
        case 0x19840cu: goto label_19840c;
        case 0x198410u: goto label_198410;
        case 0x198414u: goto label_198414;
        case 0x198418u: goto label_198418;
        case 0x19841cu: goto label_19841c;
        case 0x198420u: goto label_198420;
        case 0x198424u: goto label_198424;
        case 0x198428u: goto label_198428;
        case 0x19842cu: goto label_19842c;
        case 0x198430u: goto label_198430;
        case 0x198434u: goto label_198434;
        case 0x198438u: goto label_198438;
        case 0x19843cu: goto label_19843c;
        case 0x198440u: goto label_198440;
        case 0x198444u: goto label_198444;
        case 0x198448u: goto label_198448;
        case 0x19844cu: goto label_19844c;
        case 0x198450u: goto label_198450;
        case 0x198454u: goto label_198454;
        case 0x198458u: goto label_198458;
        case 0x19845cu: goto label_19845c;
        case 0x198460u: goto label_198460;
        case 0x198464u: goto label_198464;
        case 0x198468u: goto label_198468;
        case 0x19846cu: goto label_19846c;
        case 0x198470u: goto label_198470;
        case 0x198474u: goto label_198474;
        case 0x198478u: goto label_198478;
        case 0x19847cu: goto label_19847c;
        case 0x198480u: goto label_198480;
        case 0x198484u: goto label_198484;
        case 0x198488u: goto label_198488;
        case 0x19848cu: goto label_19848c;
        case 0x198490u: goto label_198490;
        case 0x198494u: goto label_198494;
        case 0x198498u: goto label_198498;
        case 0x19849cu: goto label_19849c;
        case 0x1984a0u: goto label_1984a0;
        case 0x1984a4u: goto label_1984a4;
        case 0x1984a8u: goto label_1984a8;
        case 0x1984acu: goto label_1984ac;
        case 0x1984b0u: goto label_1984b0;
        case 0x1984b4u: goto label_1984b4;
        case 0x1984b8u: goto label_1984b8;
        case 0x1984bcu: goto label_1984bc;
        case 0x1984c0u: goto label_1984c0;
        case 0x1984c4u: goto label_1984c4;
        case 0x1984c8u: goto label_1984c8;
        case 0x1984ccu: goto label_1984cc;
        case 0x1984d0u: goto label_1984d0;
        case 0x1984d4u: goto label_1984d4;
        case 0x1984d8u: goto label_1984d8;
        case 0x1984dcu: goto label_1984dc;
        case 0x1984e0u: goto label_1984e0;
        case 0x1984e4u: goto label_1984e4;
        case 0x1984e8u: goto label_1984e8;
        case 0x1984ecu: goto label_1984ec;
        case 0x1984f0u: goto label_1984f0;
        case 0x1984f4u: goto label_1984f4;
        case 0x1984f8u: goto label_1984f8;
        case 0x1984fcu: goto label_1984fc;
        case 0x198500u: goto label_198500;
        case 0x198504u: goto label_198504;
        case 0x198508u: goto label_198508;
        case 0x19850cu: goto label_19850c;
        case 0x198510u: goto label_198510;
        case 0x198514u: goto label_198514;
        case 0x198518u: goto label_198518;
        case 0x19851cu: goto label_19851c;
        case 0x198520u: goto label_198520;
        case 0x198524u: goto label_198524;
        case 0x198528u: goto label_198528;
        case 0x19852cu: goto label_19852c;
        case 0x198530u: goto label_198530;
        case 0x198534u: goto label_198534;
        case 0x198538u: goto label_198538;
        case 0x19853cu: goto label_19853c;
        case 0x198540u: goto label_198540;
        case 0x198544u: goto label_198544;
        case 0x198548u: goto label_198548;
        case 0x19854cu: goto label_19854c;
        case 0x198550u: goto label_198550;
        case 0x198554u: goto label_198554;
        case 0x198558u: goto label_198558;
        case 0x19855cu: goto label_19855c;
        case 0x198560u: goto label_198560;
        case 0x198564u: goto label_198564;
        case 0x198568u: goto label_198568;
        case 0x19856cu: goto label_19856c;
        case 0x198570u: goto label_198570;
        case 0x198574u: goto label_198574;
        case 0x198578u: goto label_198578;
        case 0x19857cu: goto label_19857c;
        case 0x198580u: goto label_198580;
        case 0x198584u: goto label_198584;
        case 0x198588u: goto label_198588;
        case 0x19858cu: goto label_19858c;
        case 0x198590u: goto label_198590;
        case 0x198594u: goto label_198594;
        case 0x198598u: goto label_198598;
        case 0x19859cu: goto label_19859c;
        case 0x1985a0u: goto label_1985a0;
        case 0x1985a4u: goto label_1985a4;
        case 0x1985a8u: goto label_1985a8;
        case 0x1985acu: goto label_1985ac;
        case 0x1985b0u: goto label_1985b0;
        case 0x1985b4u: goto label_1985b4;
        case 0x1985b8u: goto label_1985b8;
        case 0x1985bcu: goto label_1985bc;
        case 0x1985c0u: goto label_1985c0;
        case 0x1985c4u: goto label_1985c4;
        case 0x1985c8u: goto label_1985c8;
        case 0x1985ccu: goto label_1985cc;
        case 0x1985d0u: goto label_1985d0;
        case 0x1985d4u: goto label_1985d4;
        case 0x1985d8u: goto label_1985d8;
        case 0x1985dcu: goto label_1985dc;
        case 0x1985e0u: goto label_1985e0;
        case 0x1985e4u: goto label_1985e4;
        case 0x1985e8u: goto label_1985e8;
        case 0x1985ecu: goto label_1985ec;
        case 0x1985f0u: goto label_1985f0;
        case 0x1985f4u: goto label_1985f4;
        case 0x1985f8u: goto label_1985f8;
        case 0x1985fcu: goto label_1985fc;
        case 0x198600u: goto label_198600;
        case 0x198604u: goto label_198604;
        case 0x198608u: goto label_198608;
        case 0x19860cu: goto label_19860c;
        case 0x198610u: goto label_198610;
        case 0x198614u: goto label_198614;
        case 0x198618u: goto label_198618;
        case 0x19861cu: goto label_19861c;
        case 0x198620u: goto label_198620;
        case 0x198624u: goto label_198624;
        case 0x198628u: goto label_198628;
        case 0x19862cu: goto label_19862c;
        case 0x198630u: goto label_198630;
        case 0x198634u: goto label_198634;
        case 0x198638u: goto label_198638;
        case 0x19863cu: goto label_19863c;
        case 0x198640u: goto label_198640;
        case 0x198644u: goto label_198644;
        case 0x198648u: goto label_198648;
        case 0x19864cu: goto label_19864c;
        case 0x198650u: goto label_198650;
        case 0x198654u: goto label_198654;
        case 0x198658u: goto label_198658;
        case 0x19865cu: goto label_19865c;
        case 0x198660u: goto label_198660;
        case 0x198664u: goto label_198664;
        case 0x198668u: goto label_198668;
        case 0x19866cu: goto label_19866c;
        case 0x198670u: goto label_198670;
        case 0x198674u: goto label_198674;
        case 0x198678u: goto label_198678;
        case 0x19867cu: goto label_19867c;
        case 0x198680u: goto label_198680;
        case 0x198684u: goto label_198684;
        case 0x198688u: goto label_198688;
        case 0x19868cu: goto label_19868c;
        case 0x198690u: goto label_198690;
        case 0x198694u: goto label_198694;
        case 0x198698u: goto label_198698;
        case 0x19869cu: goto label_19869c;
        case 0x1986a0u: goto label_1986a0;
        case 0x1986a4u: goto label_1986a4;
        case 0x1986a8u: goto label_1986a8;
        case 0x1986acu: goto label_1986ac;
        case 0x1986b0u: goto label_1986b0;
        case 0x1986b4u: goto label_1986b4;
        case 0x1986b8u: goto label_1986b8;
        case 0x1986bcu: goto label_1986bc;
        case 0x1986c0u: goto label_1986c0;
        case 0x1986c4u: goto label_1986c4;
        case 0x1986c8u: goto label_1986c8;
        case 0x1986ccu: goto label_1986cc;
        case 0x1986d0u: goto label_1986d0;
        case 0x1986d4u: goto label_1986d4;
        case 0x1986d8u: goto label_1986d8;
        case 0x1986dcu: goto label_1986dc;
        case 0x1986e0u: goto label_1986e0;
        case 0x1986e4u: goto label_1986e4;
        case 0x1986e8u: goto label_1986e8;
        case 0x1986ecu: goto label_1986ec;
        case 0x1986f0u: goto label_1986f0;
        case 0x1986f4u: goto label_1986f4;
        case 0x1986f8u: goto label_1986f8;
        case 0x1986fcu: goto label_1986fc;
        case 0x198700u: goto label_198700;
        case 0x198704u: goto label_198704;
        case 0x198708u: goto label_198708;
        case 0x19870cu: goto label_19870c;
        case 0x198710u: goto label_198710;
        case 0x198714u: goto label_198714;
        case 0x198718u: goto label_198718;
        case 0x19871cu: goto label_19871c;
        case 0x198720u: goto label_198720;
        case 0x198724u: goto label_198724;
        case 0x198728u: goto label_198728;
        case 0x19872cu: goto label_19872c;
        case 0x198730u: goto label_198730;
        case 0x198734u: goto label_198734;
        case 0x198738u: goto label_198738;
        case 0x19873cu: goto label_19873c;
        case 0x198740u: goto label_198740;
        case 0x198744u: goto label_198744;
        case 0x198748u: goto label_198748;
        case 0x19874cu: goto label_19874c;
        default: return;
    }

label_197f80:
    // 0x197f80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_197f84:
    // 0x197f84: 0x3e00008  jr          $ra
label_197f88:
    if (ctx->pc == 0x197F88u) {
        ctx->pc = 0x197F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F84u;
        // 0x197f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F8Cu;
        goto label_197f8c;
    }
    ctx->pc = 0x197F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F84u;
        // 0x197f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197F8Cu;
label_197f8c:
    // 0x197f8c: 0x0  nop
    ctx->pc = 0x197f8cu;
    // NOP
label_197f90:
    // 0x197f90: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x197f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_197f94:
    // 0x197f94: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x197f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_197f98:
    // 0x197f98: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x197f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_197f9c:
    // 0x197f9c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x197f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_197fa0:
    // 0x197fa0: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x197fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_197fa4:
    // 0x197fa4: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x197fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_197fa8:
    // 0x197fa8: 0x3e00008  jr          $ra
label_197fac:
    if (ctx->pc == 0x197FACu) {
        ctx->pc = 0x197FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FA8u;
        // 0x197fac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197FB0u;
        goto label_197fb0;
    }
    ctx->pc = 0x197FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FA8u;
        // 0x197fac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197FB0u;
label_197fb0:
    // 0x197fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_197fb4:
    // 0x197fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x197fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_197fb8:
    // 0x197fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_197fbc:
    // 0x197fbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_197fc0:
    // 0x197fc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x197fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197fc4:
    // 0x197fc4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x197fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_197fc8:
    // 0x197fc8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x197fc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_197fcc:
    // 0x197fcc: 0x26250220  addiu       $a1, $s1, 0x220
    ctx->pc = 0x197fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_197fd0:
    // 0x197fd0: 0x30500040  andi        $s0, $v0, 0x40
    ctx->pc = 0x197fd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_197fd4:
    // 0x197fd4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x197fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_197fd8:
    // 0x197fd8: 0xac820230  sw          $v0, 0x230($a0)
    ctx->pc = 0x197fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 2));
label_197fdc:
    // 0x197fdc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x197fdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_197fe0:
    // 0x197fe0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x197fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_197fe4:
    // 0x197fe4: 0xac82022c  sw          $v0, 0x22C($a0)
    ctx->pc = 0x197fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 2));
label_197fe8:
    // 0x197fe8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x197fe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_197fec:
    // 0x197fec: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x197fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_197ff0:
    // 0x197ff0: 0xac820228  sw          $v0, 0x228($a0)
    ctx->pc = 0x197ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 2));
label_197ff4:
    // 0x197ff4: 0xc0659c0  jal         func_196700
label_197ff8:
    if (ctx->pc == 0x197FF8u) {
        ctx->pc = 0x197FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197FF4u;
        // 0x197ff8: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197FFCu;
        goto label_197ffc;
    }
    ctx->pc = 0x197FF4u;
    SET_GPR_U32(ctx, 31, 0x197FFCu);
    ctx->pc = 0x197FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197FF4u;
    // 0x197ff8: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x197FFCu;
label_197ffc:
    // 0x197ffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_198000:
    // 0x198000: 0xc0659c0  jal         func_196700
label_198004:
    if (ctx->pc == 0x198004u) {
        ctx->pc = 0x198004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198000u;
        // 0x198004: 0x26250224  addiu       $a1, $s1, 0x224 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 548));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198008u;
        goto label_198008;
    }
    ctx->pc = 0x198000u;
    SET_GPR_U32(ctx, 31, 0x198008u);
    ctx->pc = 0x198004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198000u;
    // 0x198004: 0x26250224  addiu       $a1, $s1, 0x224 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 548));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x198008u;
label_198008:
    // 0x198008: 0x8e230230  lw          $v1, 0x230($s1)
    ctx->pc = 0x198008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_19800c:
    // 0x19800c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_198010:
    if (ctx->pc == 0x198010u) {
        ctx->pc = 0x198010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19800Cu;
        // 0x198010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198014u;
        goto label_198014;
    }
    ctx->pc = 0x19800Cu;
    {
        const bool branch_taken_0x19800c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x198010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19800Cu;
        // 0x198010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19800c) {
            ctx->pc = 0x198028u;
            goto label_198028;
        }
    }
    ctx->pc = 0x198014u;
label_198014:
    // 0x198014: 0x7a230200  lq          $v1, 0x200($s1)
    ctx->pc = 0x198014u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 512)));
label_198018:
    // 0x198018: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x198018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_19801c:
    // 0x19801c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19801cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_198020:
    // 0x198020: 0x10000003  b           . + 4 + (0x3 << 2)
label_198024:
    if (ctx->pc == 0x198024u) {
        ctx->pc = 0x198024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198020u;
        // 0x198024: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198028u;
        goto label_198028;
    }
    ctx->pc = 0x198020u;
    {
        const bool branch_taken_0x198020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198020u;
        // 0x198024: 0xae230018  sw          $v1, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198020) {
            ctx->pc = 0x198030u;
            goto label_198030;
        }
    }
    ctx->pc = 0x198028u;
label_198028:
    // 0x198028: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x198028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_19802c:
    // 0x19802c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x19802cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_198030:
    // 0x198030: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_198034:
    if (ctx->pc == 0x198034u) {
        ctx->pc = 0x198034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198030u;
        // 0x198034: 0x26250234  addiu       $a1, $s1, 0x234 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 564));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198038u;
        goto label_198038;
    }
    ctx->pc = 0x198030u;
    {
        const bool branch_taken_0x198030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x198034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198030u;
        // 0x198034: 0x26250234  addiu       $a1, $s1, 0x234 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 564));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198030) {
            ctx->pc = 0x198048u;
            goto label_198048;
        }
    }
    ctx->pc = 0x198038u;
label_198038:
    // 0x198038: 0xc0659c0  jal         func_196700
label_19803c:
    if (ctx->pc == 0x19803Cu) {
        ctx->pc = 0x198040u;
        goto label_198040;
    }
    ctx->pc = 0x198038u;
    SET_GPR_U32(ctx, 31, 0x198040u);
    ctx->pc = 0x196700u;
    { ctx->pc = 0x196700; return; }
    ctx->pc = 0x198040u;
label_198040:
    // 0x198040: 0x10000003  b           . + 4 + (0x3 << 2)
label_198044:
    if (ctx->pc == 0x198044u) {
        ctx->pc = 0x198044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198040u;
        // 0x198044: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198048u;
        goto label_198048;
    }
    ctx->pc = 0x198040u;
    {
        const bool branch_taken_0x198040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198040u;
        // 0x198044: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198040) {
            ctx->pc = 0x198050u;
            goto label_198050;
        }
    }
    ctx->pc = 0x198048u;
label_198048:
    // 0x198048: 0xae200234  sw          $zero, 0x234($s1)
    ctx->pc = 0x198048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 0));
label_19804c:
    // 0x19804c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19804cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198050:
    // 0x198050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_198054:
    // 0x198054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_198058:
    // 0x198058: 0x3e00008  jr          $ra
label_19805c:
    if (ctx->pc == 0x19805Cu) {
        ctx->pc = 0x19805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198058u;
        // 0x19805c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198060u;
        goto label_198060;
    }
    ctx->pc = 0x198058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198058u;
        // 0x19805c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198060u;
label_198060:
    // 0x198060: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x198060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_198064:
    // 0x198064: 0x8c860228  lw          $a2, 0x228($a0)
    ctx->pc = 0x198064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
label_198068:
    // 0x198068: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x198068u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_19806c:
    // 0x19806c: 0x9c850220  lwu         $a1, 0x220($a0)
    ctx->pc = 0x19806cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_198070:
    // 0x198070: 0x30430040  andi        $v1, $v0, 0x40
    ctx->pc = 0x198070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_198074:
    // 0x198074: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_198078:
    if (ctx->pc == 0x198078u) {
        ctx->pc = 0x198078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198074u;
        // 0x198078: 0x9c870224  lwu         $a3, 0x224($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19807Cu;
        goto label_19807c;
    }
    ctx->pc = 0x198074u;
    {
        const bool branch_taken_0x198074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x198078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198074u;
        // 0x198078: 0x9c870224  lwu         $a3, 0x224($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198074) {
            ctx->pc = 0x1980DCu;
            goto label_1980dc;
        }
    }
    ctx->pc = 0x19807Cu;
label_19807c:
    // 0x19807c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19807cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_198080:
    // 0x198080: 0x9c890234  lwu         $t1, 0x234($a0)
    ctx->pc = 0x198080u;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 564)));
label_198084:
    // 0x198084: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x198084u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
label_198088:
    // 0x198088: 0x7583c  dsll32      $t3, $a3, 0
    ctx->pc = 0x198088u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) << (32 + 0));
label_19808c:
    // 0x19808c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19808cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_198090:
    // 0x198090: 0x8c8a0018  lw          $t2, 0x18($a0)
    ctx->pc = 0x198090u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_198094:
    // 0x198094: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x198094u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
label_198098:
    // 0x198098: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x198098u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_19809c:
    // 0x19809c: 0x34e7fff0  ori         $a3, $a3, 0xFFF0
    ctx->pc = 0x19809cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65520);
label_1980a0:
    // 0x1980a0: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x1980a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
label_1980a4:
    // 0x1980a4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1980a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_1980a8:
    // 0x1980a8: 0x940b8  dsll        $t0, $t1, 2
    ctx->pc = 0x1980a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << 2);
label_1980ac:
    // 0x1980ac: 0x6508000f  daddiu      $t0, $t0, 0xF
    ctx->pc = 0x1980acu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)15);
label_1980b0:
    // 0x1980b0: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x1980b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_1980b4:
    // 0x1980b4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1980b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_1980b8:
    // 0x1980b8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1980b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_1980bc:
    // 0x1980bc: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1980bcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_1980c0:
    // 0x1980c0: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x1980c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_1980c4:
    // 0x1980c4: 0xa383c  dsll32      $a3, $t2, 0
    ctx->pc = 0x1980c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) << (32 + 0));
label_1980c8:
    // 0x1980c8: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1980c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_1980cc:
    // 0x1980cc: 0xe2102d  daddu       $v0, $a3, $v0
    ctx->pc = 0x1980ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
label_1980d0:
    // 0x1980d0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x1980d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_1980d4:
    // 0x1980d4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1980d8:
    if (ctx->pc == 0x1980D8u) {
        ctx->pc = 0x1980D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980D4u;
        // 0x1980d8: 0x7383f  dsra32      $a3, $a3, 0 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1980DCu;
        goto label_1980dc;
    }
    ctx->pc = 0x1980D4u;
    {
        const bool branch_taken_0x1980d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1980D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980D4u;
        // 0x1980d8: 0x7383f  dsra32      $a3, $a3, 0 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980d4) {
            ctx->pc = 0x1980FCu;
            goto label_1980fc;
        }
    }
    ctx->pc = 0x1980DCu;
label_1980dc:
    // 0x1980dc: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x1980dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
label_1980e0:
    // 0x1980e0: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x1980e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
label_1980e4:
    // 0x1980e4: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x1980e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1980e8:
    // 0x1980e8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x1980e8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_1980ec:
    // 0x1980ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1980ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1980f0:
    // 0x1980f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1980f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1980f4:
    // 0x1980f4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1980f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1980f8:
    // 0x1980f8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1980f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1980fc:
    // 0x1980fc: 0x8c880230  lw          $t0, 0x230($a0)
    ctx->pc = 0x1980fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
label_198100:
    // 0x198100: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
label_198104:
    if (ctx->pc == 0x198104u) {
        ctx->pc = 0x198108u;
        goto label_198108;
    }
    ctx->pc = 0x198100u;
    {
        const bool branch_taken_0x198100 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x198100) {
            ctx->pc = 0x19810Cu;
            goto label_19810c;
        }
    }
    ctx->pc = 0x198108u;
label_198108:
    // 0x198108: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x198108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_19810c:
    // 0x19810c: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
label_198110:
    if (ctx->pc == 0x198110u) {
        ctx->pc = 0x198110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19810Cu;
        // 0x198110: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198114u;
        goto label_198114;
    }
    ctx->pc = 0x19810Cu;
    {
        const bool branch_taken_0x19810c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x198110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19810Cu;
        // 0x198110: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19810c) {
            ctx->pc = 0x198124u;
            goto label_198124;
        }
    }
    ctx->pc = 0x198114u;
label_198114:
    // 0x198114: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x198114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_198118:
    // 0x198118: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x198118u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_19811c:
    // 0x19811c: 0x10000008  b           . + 4 + (0x8 << 2)
label_198120:
    if (ctx->pc == 0x198120u) {
        ctx->pc = 0x198120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19811Cu;
        // 0x198120: 0x7c880200  sq          $t0, 0x200($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198124u;
        goto label_198124;
    }
    ctx->pc = 0x19811Cu;
    {
        const bool branch_taken_0x19811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19811Cu;
        // 0x198120: 0x7c880200  sq          $t0, 0x200($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19811c) {
            ctx->pc = 0x198140u;
            goto label_198140;
        }
    }
    ctx->pc = 0x198124u;
label_198124:
    // 0x198124: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x198124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_198128:
    // 0x198128: 0x14c80006  bne         $a2, $t0, . + 4 + (0x6 << 2)
label_19812c:
    if (ctx->pc == 0x19812Cu) {
        ctx->pc = 0x19812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198128u;
        // 0x19812c: 0x6583c  dsll32      $t3, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198130u;
        goto label_198130;
    }
    ctx->pc = 0x198128u;
    {
        const bool branch_taken_0x198128 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x19812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198128u;
        // 0x19812c: 0x6583c  dsll32      $t3, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198128) {
            ctx->pc = 0x198144u;
            goto label_198144;
        }
    }
    ctx->pc = 0x198130u;
label_198130:
    // 0x198130: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x198130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_198134:
    // 0x198134: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x198134u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_198138:
    // 0x198138: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x198138u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_19813c:
    // 0x19813c: 0x7c880200  sq          $t0, 0x200($a0)
    ctx->pc = 0x19813cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 8));
label_198140:
    // 0x198140: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x198140u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
label_198144:
    // 0x198144: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x198144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_198148:
    // 0x198148: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x198148u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_19814c:
    // 0x19814c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19814cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198150:
    // 0x198150: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x198150u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_198154:
    // 0x198154: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_198158:
    if (ctx->pc == 0x198158u) {
        ctx->pc = 0x198158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198154u;
        // 0x198158: 0xeb3823  subu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19815Cu;
        goto label_19815c;
    }
    ctx->pc = 0x198154u;
    {
        const bool branch_taken_0x198154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198154u;
        // 0x198158: 0xeb3823  subu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198154) {
            ctx->pc = 0x198204u;
            goto label_198204;
        }
    }
    ctx->pc = 0x19815Cu;
label_19815c:
    // 0x19815c: 0x2cc10009  sltiu       $at, $a2, 0x9
    ctx->pc = 0x19815cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_198160:
    // 0x198160: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
label_198164:
    if (ctx->pc == 0x198164u) {
        ctx->pc = 0x198164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198160u;
        // 0x198164: 0x64cdfff8  daddiu      $t5, $a2, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x198168u;
        goto label_198168;
    }
    ctx->pc = 0x198160u;
    {
        const bool branch_taken_0x198160 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x198164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198160u;
        // 0x198164: 0x64cdfff8  daddiu      $t5, $a2, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198160) {
            ctx->pc = 0x1981CCu;
            goto label_1981cc;
        }
    }
    ctx->pc = 0x198168u;
label_198168:
    // 0x198168: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x198168u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19816c:
    // 0x19816c: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x19816cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_198170:
    // 0x198170: 0x8e7821  addu        $t7, $a0, $t6
    ctx->pc = 0x198170u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
label_198174:
    // 0x198174: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x198174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_198178:
    // 0x198178: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x198178u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
label_19817c:
    // 0x19817c: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x19817cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
label_198180:
    // 0x198180: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x198180u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_198184:
    // 0x198184: 0x16d582b  sltu        $t3, $t3, $t5
    ctx->pc = 0x198184u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_198188:
    // 0x198188: 0x7dec0120  sq          $t4, 0x120($t7)
    ctx->pc = 0x198188u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 288), GPR_VEC(ctx, 12));
label_19818c:
    // 0x19818c: 0x78ec0010  lq          $t4, 0x10($a3)
    ctx->pc = 0x19818cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_198190:
    // 0x198190: 0x7dec0130  sq          $t4, 0x130($t7)
    ctx->pc = 0x198190u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 304), GPR_VEC(ctx, 12));
label_198194:
    // 0x198194: 0x78ec0020  lq          $t4, 0x20($a3)
    ctx->pc = 0x198194u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_198198:
    // 0x198198: 0x7dec0140  sq          $t4, 0x140($t7)
    ctx->pc = 0x198198u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 320), GPR_VEC(ctx, 12));
label_19819c:
    // 0x19819c: 0x78ec0030  lq          $t4, 0x30($a3)
    ctx->pc = 0x19819cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_1981a0:
    // 0x1981a0: 0x7dec0150  sq          $t4, 0x150($t7)
    ctx->pc = 0x1981a0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 336), GPR_VEC(ctx, 12));
label_1981a4:
    // 0x1981a4: 0x78ec0040  lq          $t4, 0x40($a3)
    ctx->pc = 0x1981a4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 64)));
label_1981a8:
    // 0x1981a8: 0x7dec0160  sq          $t4, 0x160($t7)
    ctx->pc = 0x1981a8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 352), GPR_VEC(ctx, 12));
label_1981ac:
    // 0x1981ac: 0x78ec0050  lq          $t4, 0x50($a3)
    ctx->pc = 0x1981acu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 80)));
label_1981b0:
    // 0x1981b0: 0x7dec0170  sq          $t4, 0x170($t7)
    ctx->pc = 0x1981b0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 368), GPR_VEC(ctx, 12));
label_1981b4:
    // 0x1981b4: 0x78ec0060  lq          $t4, 0x60($a3)
    ctx->pc = 0x1981b4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 96)));
label_1981b8:
    // 0x1981b8: 0x7dec0180  sq          $t4, 0x180($t7)
    ctx->pc = 0x1981b8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 384), GPR_VEC(ctx, 12));
label_1981bc:
    // 0x1981bc: 0x78ec0070  lq          $t4, 0x70($a3)
    ctx->pc = 0x1981bcu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 112)));
label_1981c0:
    // 0x1981c0: 0x7dec0190  sq          $t4, 0x190($t7)
    ctx->pc = 0x1981c0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 400), GPR_VEC(ctx, 12));
label_1981c4:
    // 0x1981c4: 0x1560ffe9  bnez        $t3, . + 4 + (-0x17 << 2)
label_1981c8:
    if (ctx->pc == 0x1981C8u) {
        ctx->pc = 0x1981C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981C4u;
        // 0x1981c8: 0x24e70080  addiu       $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1981CCu;
        goto label_1981cc;
    }
    ctx->pc = 0x1981C4u;
    {
        const bool branch_taken_0x1981c4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1981C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981C4u;
        // 0x1981c8: 0x24e70080  addiu       $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981c4) {
            ctx->pc = 0x19816Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19816c;
        }
    }
    ctx->pc = 0x1981CCu;
label_1981cc:
    // 0x1981cc: 0x0  nop
    ctx->pc = 0x1981ccu;
    // NOP
label_1981d0:
    // 0x1981d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1981d4:
    if (ctx->pc == 0x1981D4u) {
        ctx->pc = 0x1981D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981D0u;
        // 0x1981d4: 0x86900  sll         $t5, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1981D8u;
        goto label_1981d8;
    }
    ctx->pc = 0x1981D0u;
    {
        const bool branch_taken_0x1981d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981D0u;
        // 0x1981d4: 0x86900  sll         $t5, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981d0) {
            ctx->pc = 0x1981F0u;
            goto label_1981f0;
        }
    }
    ctx->pc = 0x1981D8u;
label_1981d8:
    // 0x1981d8: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x1981d8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1981dc:
    // 0x1981dc: 0x8d5821  addu        $t3, $a0, $t5
    ctx->pc = 0x1981dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_1981e0:
    // 0x1981e0: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x1981e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
label_1981e4:
    // 0x1981e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1981e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1981e8:
    // 0x1981e8: 0x7d6c0120  sq          $t4, 0x120($t3)
    ctx->pc = 0x1981e8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 288), GPR_VEC(ctx, 12));
label_1981ec:
    // 0x1981ec: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1981ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1981f0:
    // 0x1981f0: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x1981f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
label_1981f4:
    // 0x1981f4: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1981f4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_1981f8:
    // 0x1981f8: 0x166582b  sltu        $t3, $t3, $a2
    ctx->pc = 0x1981f8u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1981fc:
    // 0x1981fc: 0x1560fff6  bnez        $t3, . + 4 + (-0xA << 2)
label_198200:
    if (ctx->pc == 0x198200u) {
        ctx->pc = 0x198204u;
        goto label_198204;
    }
    ctx->pc = 0x1981FCu;
    {
        const bool branch_taken_0x1981fc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1981fc) {
            ctx->pc = 0x1981D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1981d8;
        }
    }
    ctx->pc = 0x198204u;
label_198204:
    // 0x198204: 0x0  nop
    ctx->pc = 0x198204u;
    // NOP
label_198208:
    // 0x198208: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x198208u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
label_19820c:
    // 0x19820c: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x19820cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_198210:
    // 0x198210: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x198210u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_198214:
    // 0x198214: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x198214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_198218:
    // 0x198218: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_19821c:
    if (ctx->pc == 0x19821Cu) {
        ctx->pc = 0x19821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198218u;
        // 0x19821c: 0xac850014  sw          $a1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198220u;
        goto label_198220;
    }
    ctx->pc = 0x198218u;
    {
        const bool branch_taken_0x198218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198218u;
        // 0x19821c: 0xac850014  sw          $a1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198218) {
            ctx->pc = 0x1982E4u;
            goto label_1982e4;
        }
    }
    ctx->pc = 0x198220u;
label_198220:
    // 0x198220: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x198220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
label_198224:
    // 0x198224: 0x9082b  sltu        $at, $zero, $t1
    ctx->pc = 0x198224u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_198228:
    // 0x198228: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x198228u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_19822c:
    // 0x19822c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19822cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198230:
    // 0x198230: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x198230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_198234:
    // 0x198234: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_198238:
    if (ctx->pc == 0x198238u) {
        ctx->pc = 0x198238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198234u;
        // 0x198238: 0x1435023  subu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19823Cu;
        goto label_19823c;
    }
    ctx->pc = 0x198234u;
    {
        const bool branch_taken_0x198234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198234u;
        // 0x198238: 0x1435023  subu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198234) {
            ctx->pc = 0x1982E4u;
            goto label_1982e4;
        }
    }
    ctx->pc = 0x19823Cu;
label_19823c:
    // 0x19823c: 0x2d210009  sltiu       $at, $t1, 0x9
    ctx->pc = 0x19823cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_198240:
    // 0x198240: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
label_198244:
    if (ctx->pc == 0x198244u) {
        ctx->pc = 0x198244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198240u;
        // 0x198244: 0x6526fff8  daddiu      $a2, $t1, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x198248u;
        goto label_198248;
    }
    ctx->pc = 0x198240u;
    {
        const bool branch_taken_0x198240 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x198244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198240u;
        // 0x198244: 0x6526fff8  daddiu      $a2, $t1, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198240) {
            ctx->pc = 0x1982ACu;
            goto label_1982ac;
        }
    }
    ctx->pc = 0x198248u;
label_198248:
    // 0x198248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x198248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19824c:
    // 0x19824c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x19824cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_198250:
    // 0x198250: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x198250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_198254:
    // 0x198254: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x198254u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
label_198258:
    // 0x198258: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x198258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_19825c:
    // 0x19825c: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x19825cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
label_198260:
    // 0x198260: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x198260u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_198264:
    // 0x198264: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x198264u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_198268:
    // 0x198268: 0xad050288  sw          $a1, 0x288($t0)
    ctx->pc = 0x198268u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 648), GPR_U32(ctx, 5));
label_19826c:
    // 0x19826c: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x19826cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_198270:
    // 0x198270: 0xad05028c  sw          $a1, 0x28C($t0)
    ctx->pc = 0x198270u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 652), GPR_U32(ctx, 5));
label_198274:
    // 0x198274: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x198274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_198278:
    // 0x198278: 0xad050290  sw          $a1, 0x290($t0)
    ctx->pc = 0x198278u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 656), GPR_U32(ctx, 5));
label_19827c:
    // 0x19827c: 0x8d45000c  lw          $a1, 0xC($t2)
    ctx->pc = 0x19827cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_198280:
    // 0x198280: 0xad050294  sw          $a1, 0x294($t0)
    ctx->pc = 0x198280u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 660), GPR_U32(ctx, 5));
label_198284:
    // 0x198284: 0x8d450010  lw          $a1, 0x10($t2)
    ctx->pc = 0x198284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
label_198288:
    // 0x198288: 0xad050298  sw          $a1, 0x298($t0)
    ctx->pc = 0x198288u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 5));
label_19828c:
    // 0x19828c: 0x8d450014  lw          $a1, 0x14($t2)
    ctx->pc = 0x19828cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
label_198290:
    // 0x198290: 0xad05029c  sw          $a1, 0x29C($t0)
    ctx->pc = 0x198290u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 668), GPR_U32(ctx, 5));
label_198294:
    // 0x198294: 0x8d450018  lw          $a1, 0x18($t2)
    ctx->pc = 0x198294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
label_198298:
    // 0x198298: 0xad0502a0  sw          $a1, 0x2A0($t0)
    ctx->pc = 0x198298u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 672), GPR_U32(ctx, 5));
label_19829c:
    // 0x19829c: 0x8d45001c  lw          $a1, 0x1C($t2)
    ctx->pc = 0x19829cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
label_1982a0:
    // 0x1982a0: 0xad0502a4  sw          $a1, 0x2A4($t0)
    ctx->pc = 0x1982a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 676), GPR_U32(ctx, 5));
label_1982a4:
    // 0x1982a4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_1982a8:
    if (ctx->pc == 0x1982A8u) {
        ctx->pc = 0x1982A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982A4u;
        // 0x1982a8: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1982ACu;
        goto label_1982ac;
    }
    ctx->pc = 0x1982A4u;
    {
        const bool branch_taken_0x1982a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1982A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982A4u;
        // 0x1982a8: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982a4) {
            ctx->pc = 0x19824Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19824c;
        }
    }
    ctx->pc = 0x1982ACu;
label_1982ac:
    // 0x1982ac: 0x0  nop
    ctx->pc = 0x1982acu;
    // NOP
label_1982b0:
    // 0x1982b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1982b4:
    if (ctx->pc == 0x1982B4u) {
        ctx->pc = 0x1982B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982B0u;
        // 0x1982b4: 0xb3080  sll         $a2, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1982B8u;
        goto label_1982b8;
    }
    ctx->pc = 0x1982B0u;
    {
        const bool branch_taken_0x1982b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1982B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982B0u;
        // 0x1982b4: 0xb3080  sll         $a2, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982b0) {
            ctx->pc = 0x1982D0u;
            goto label_1982d0;
        }
    }
    ctx->pc = 0x1982B8u;
label_1982b8:
    // 0x1982b8: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1982b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1982bc:
    // 0x1982bc: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1982bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1982c0:
    // 0x1982c0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1982c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1982c4:
    // 0x1982c4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1982c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1982c8:
    // 0x1982c8: 0xac650288  sw          $a1, 0x288($v1)
    ctx->pc = 0x1982c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 648), GPR_U32(ctx, 5));
label_1982cc:
    // 0x1982cc: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1982ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_1982d0:
    // 0x1982d0: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x1982d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
label_1982d4:
    // 0x1982d4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1982d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1982d8:
    // 0x1982d8: 0x69182b  sltu        $v1, $v1, $t1
    ctx->pc = 0x1982d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1982dc:
    // 0x1982dc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_1982e0:
    if (ctx->pc == 0x1982E0u) {
        ctx->pc = 0x1982E4u;
        goto label_1982e4;
    }
    ctx->pc = 0x1982DCu;
    {
        const bool branch_taken_0x1982dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1982dc) {
            ctx->pc = 0x1982B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1982b8;
        }
    }
    ctx->pc = 0x1982E4u;
label_1982e4:
    // 0x1982e4: 0x0  nop
    ctx->pc = 0x1982e4u;
    // NOP
label_1982e8:
    // 0x1982e8: 0x3e00008  jr          $ra
label_1982ec:
    if (ctx->pc == 0x1982ECu) {
        ctx->pc = 0x1982F0u;
        goto label_1982f0;
    }
    ctx->pc = 0x1982E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1982E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1982F0u;
label_1982f0:
    // 0x1982f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1982f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1982f4:
    // 0x1982f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1982f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1982f8:
    // 0x1982f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1982f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1982fc:
    // 0x1982fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1982fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_198300:
    // 0x198300: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x198300u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_198304:
    // 0x198304: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x198304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_198308:
    // 0x198308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x198308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19830c:
    // 0x19830c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19830cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198310:
    // 0x198310: 0x8c920014  lw          $s2, 0x14($a0)
    ctx->pc = 0x198310u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_198314:
    // 0x198314: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198318:
    // 0x198318: 0xc0692a8  jal         func_1A4AA0
label_19831c:
    if (ctx->pc == 0x19831Cu) {
        ctx->pc = 0x19831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198318u;
        // 0x19831c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198320u;
        goto label_198320;
    }
    ctx->pc = 0x198318u;
    SET_GPR_U32(ctx, 31, 0x198320u);
    ctx->pc = 0x19831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198318u;
    // 0x19831c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x198320u;
label_198320:
    // 0x198320: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_198324:
    if (ctx->pc == 0x198324u) {
        ctx->pc = 0x198328u;
        goto label_198328;
    }
    ctx->pc = 0x198320u;
    {
        const bool branch_taken_0x198320 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x198320) {
            ctx->pc = 0x19833Cu;
            goto label_19833c;
        }
    }
    ctx->pc = 0x198328u;
label_198328:
    // 0x198328: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x198328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_19832c:
    // 0x19832c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19832cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_198330:
    // 0x198330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198334:
    // 0x198334: 0xc08e9ac  jal         func_23A6B0
label_198338:
    if (ctx->pc == 0x198338u) {
        ctx->pc = 0x198338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198334u;
        // 0x198338: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19833Cu;
        goto label_19833c;
    }
    ctx->pc = 0x198334u;
    SET_GPR_U32(ctx, 31, 0x19833Cu);
    ctx->pc = 0x198338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198334u;
    // 0x198338: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x19833Cu;
label_19833c:
    // 0x19833c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x19833cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_198340:
    // 0x198340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198344:
    // 0x198344: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x198344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_198348:
    // 0x198348: 0xc0659a8  jal         func_1966A0
label_19834c:
    if (ctx->pc == 0x19834Cu) {
        ctx->pc = 0x19834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198348u;
        // 0x19834c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198350u;
        goto label_198350;
    }
    ctx->pc = 0x198348u;
    SET_GPR_U32(ctx, 31, 0x198350u);
    ctx->pc = 0x19834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198348u;
    // 0x19834c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1966A0u;
    { ctx->pc = 0x1966a0; return; }
    ctx->pc = 0x198350u;
label_198350:
    // 0x198350: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x198350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_198354:
    // 0x198354: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x198354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_198358:
    // 0x198358: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x198358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19835c:
    // 0x19835c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19835cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_198360:
    // 0x198360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_198364:
    // 0x198364: 0x3e00008  jr          $ra
label_198368:
    if (ctx->pc == 0x198368u) {
        ctx->pc = 0x198368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198364u;
        // 0x198368: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19836Cu;
        goto label_19836c;
    }
    ctx->pc = 0x198364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198364u;
        // 0x198368: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19836Cu;
label_19836c:
    // 0x19836c: 0x0  nop
    ctx->pc = 0x19836cu;
    // NOP
label_198370:
    // 0x198370: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x198370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_198374:
    // 0x198374: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x198374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_198378:
    // 0x198378: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x198378u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_19837c:
    // 0x19837c: 0x3c07002d  lui         $a3, 0x2D
    ctx->pc = 0x19837cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)45 << 16));
label_198380:
    // 0x198380: 0x2484ed80  addiu       $a0, $a0, -0x1280
    ctx->pc = 0x198380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962560));
label_198384:
    // 0x198384: 0x24a5ed80  addiu       $a1, $a1, -0x1280
    ctx->pc = 0x198384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962560));
label_198388:
    // 0x198388: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x198388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
label_19838c:
    // 0x19838c: 0x80659a8  j           func_1966A0
label_198390:
    if (ctx->pc == 0x198390u) {
        ctx->pc = 0x198390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19838Cu;
        // 0x198390: 0x24e70140  addiu       $a3, $a3, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198394u;
        goto label_198394;
    }
    ctx->pc = 0x19838Cu;
    ctx->pc = 0x198390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19838Cu;
    // 0x198390: 0x24e70140  addiu       $a3, $a3, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1966A0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1966a0; return; }
    ctx->pc = 0x198394u;
label_198394:
    // 0x198394: 0x0  nop
    ctx->pc = 0x198394u;
    // NOP
label_198398:
    // 0x198398: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x198398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19839c:
    // 0x19839c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x19839cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1983a0:
    // 0x1983a0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1983a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1983a4:
    // 0x1983a4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1983a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_1983a8:
    // 0x1983a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1983a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1983ac:
    // 0x1983ac: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1983acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_1983b0:
    // 0x1983b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1983b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1983b4:
    // 0x1983b4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1983b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1983b8:
    // 0x1983b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1983b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1983bc:
    // 0x1983bc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1983bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_1983c0:
    // 0x1983c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1983c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1983c4:
    // 0x1983c4: 0x58c03  sra         $s1, $a1, 16
    ctx->pc = 0x1983c4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
label_1983c8:
    // 0x1983c8: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x1983c8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
label_1983cc:
    // 0x1983cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1983ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1983d0:
    // 0x1983d0: 0x10820031  beq         $a0, $v0, . + 4 + (0x31 << 2)
label_1983d4:
    if (ctx->pc == 0x1983D4u) {
        ctx->pc = 0x1983D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983D0u;
        // 0x1983d4: 0x79c03  sra         $s3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1983D8u;
        goto label_1983d8;
    }
    ctx->pc = 0x1983D0u;
    {
        const bool branch_taken_0x1983d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1983D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983D0u;
        // 0x1983d4: 0x79c03  sra         $s3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983d0) {
            ctx->pc = 0x198498u;
            goto label_198498;
        }
    }
    ctx->pc = 0x1983D8u;
label_1983d8:
    // 0x1983d8: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1983d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_1983dc:
    // 0x1983dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1983e0:
    if (ctx->pc == 0x1983E0u) {
        ctx->pc = 0x1983E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983DCu;
        // 0x1983e0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1983E4u;
        goto label_1983e4;
    }
    ctx->pc = 0x1983DCu;
    {
        const bool branch_taken_0x1983dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1983dc) {
            ctx->pc = 0x1983E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1983DCu;
            // 0x1983e0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1983F4u;
            goto label_1983f4;
        }
    }
    ctx->pc = 0x1983E4u;
label_1983e4:
    // 0x1983e4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1983e8:
    if (ctx->pc == 0x1983E8u) {
        ctx->pc = 0x1983E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983E4u;
        // 0x1983e8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1983ECu;
        goto label_1983ec;
    }
    ctx->pc = 0x1983E4u;
    {
        const bool branch_taken_0x1983e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983E4u;
        // 0x1983e8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983e4) {
            ctx->pc = 0x198404u;
            goto label_198404;
        }
    }
    ctx->pc = 0x1983ECu;
label_1983ec:
    // 0x1983ec: 0x10000049  b           . + 4 + (0x49 << 2)
label_1983f0:
    if (ctx->pc == 0x1983F0u) {
        ctx->pc = 0x1983F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983ECu;
        // 0x1983f0: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1983F4u;
        goto label_1983f4;
    }
    ctx->pc = 0x1983ECu;
    {
        const bool branch_taken_0x1983ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983ECu;
        // 0x1983f0: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983ec) {
            ctx->pc = 0x198514u;
            goto label_198514;
        }
    }
    ctx->pc = 0x1983F4u;
label_1983f4:
    // 0x1983f4: 0x1082002e  beq         $a0, $v0, . + 4 + (0x2E << 2)
label_1983f8:
    if (ctx->pc == 0x1983F8u) {
        ctx->pc = 0x1983F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983F4u;
        // 0x1983f8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1983FCu;
        goto label_1983fc;
    }
    ctx->pc = 0x1983F4u;
    {
        const bool branch_taken_0x1983f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1983F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983F4u;
        // 0x1983f8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983f4) {
            ctx->pc = 0x1984B0u;
            goto label_1984b0;
        }
    }
    ctx->pc = 0x1983FCu;
label_1983fc:
    // 0x1983fc: 0x10000045  b           . + 4 + (0x45 << 2)
label_198400:
    if (ctx->pc == 0x198400u) {
        ctx->pc = 0x198400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983FCu;
        // 0x198400: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198404u;
        goto label_198404;
    }
    ctx->pc = 0x1983FCu;
    {
        const bool branch_taken_0x1983fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983FCu;
        // 0x198400: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983fc) {
            ctx->pc = 0x198514u;
            goto label_198514;
        }
    }
    ctx->pc = 0x198404u;
label_198404:
    // 0x198404: 0xc06614a  jal         func_198528
label_198408:
    if (ctx->pc == 0x198408u) {
        ctx->pc = 0x19840Cu;
        goto label_19840c;
    }
    ctx->pc = 0x198404u;
    SET_GPR_U32(ctx, 31, 0x19840Cu);
    ctx->pc = 0x198528u;
    goto label_198528;
    ctx->pc = 0x19840Cu;
label_19840c:
    // 0x19840c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x19840cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
label_198410:
    // 0x198410: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x198410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_198414:
    // 0x198414: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x198414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_198418:
    // 0x198418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19841c:
    // 0x19841c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x19841cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
label_198420:
    // 0x198420: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x198420u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
label_198424:
    // 0x198424: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x198424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_198428:
    // 0x198428: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x198428u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_19842c:
    // 0x19842c: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x19842cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
label_198430:
    // 0x198430: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x198430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
label_198434:
    // 0x198434: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x198434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_198438:
    // 0x198438: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x198438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_19843c:
    // 0x19843c: 0xc0692d8  jal         func_1A4B60
label_198440:
    if (ctx->pc == 0x198440u) {
        ctx->pc = 0x198440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19843Cu;
        // 0x198440: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198444u;
        goto label_198444;
    }
    ctx->pc = 0x19843Cu;
    SET_GPR_U32(ctx, 31, 0x198444u);
    ctx->pc = 0x198440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19843Cu;
    // 0x198440: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    { ctx->pc = 0x1a4b60; return; }
    ctx->pc = 0x198444u;
label_198444:
    // 0x198444: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x198444u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_198448:
    // 0x198448: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x198448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19844c:
    // 0x19844c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_198450:
    if (ctx->pc == 0x198450u) {
        ctx->pc = 0x198450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19844Cu;
        // 0x198450: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198454u;
        goto label_198454;
    }
    ctx->pc = 0x19844Cu;
    {
        const bool branch_taken_0x19844c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19844Cu;
        // 0x198450: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19844c) {
            ctx->pc = 0x198470u;
            goto label_198470;
        }
    }
    ctx->pc = 0x198454u;
label_198454:
    // 0x198454: 0xc0694c0  jal         func_1A5300
label_198458:
    if (ctx->pc == 0x198458u) {
        ctx->pc = 0x198458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198454u;
        // 0x198458: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19845Cu;
        goto label_19845c;
    }
    ctx->pc = 0x198454u;
    SET_GPR_U32(ctx, 31, 0x19845Cu);
    ctx->pc = 0x198458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198454u;
    // 0x198458: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5300u;
    { ctx->pc = 0x1a5300; return; }
    ctx->pc = 0x19845Cu;
label_19845c:
    // 0x19845c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x19845cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_198460:
    // 0x198460: 0xc069148  jal         func_1A4520
label_198464:
    if (ctx->pc == 0x198464u) {
        ctx->pc = 0x198464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198460u;
        // 0x198464: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198468u;
        goto label_198468;
    }
    ctx->pc = 0x198460u;
    SET_GPR_U32(ctx, 31, 0x198468u);
    ctx->pc = 0x198464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198460u;
    // 0x198464: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4520u;
    { ctx->pc = 0x1a4520; return; }
    ctx->pc = 0x198468u;
label_198468:
    // 0x198468: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x198468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_19846c:
    // 0x19846c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x19846cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_198470:
    // 0x198470: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x198470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_198474:
    // 0x198474: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x198474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_198478:
    // 0x198478: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x198478u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_19847c:
    // 0x19847c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19847cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_198480:
    // 0x198480: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x198480u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_198484:
    // 0x198484: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x198484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198488:
    // 0x198488: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x198488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19848c:
    // 0x19848c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19848cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198490:
    // 0x198490: 0x8069108  j           func_1A4420
label_198494:
    if (ctx->pc == 0x198494u) {
        ctx->pc = 0x198494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198490u;
        // 0x198494: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198498u;
        goto label_198498;
    }
    ctx->pc = 0x198490u;
    ctx->pc = 0x198494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198490u;
    // 0x198494: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4420u;
    { ctx->pc = 0x1a4420; return; }
    ctx->pc = 0x198498u;
label_198498:
    // 0x198498: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x198498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
label_19849c:
    // 0x19849c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x19849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1984a0:
    // 0x1984a0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1984a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_1984a4:
    // 0x1984a4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1984a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_1984a8:
    // 0x1984a8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1984ac:
    if (ctx->pc == 0x1984ACu) {
        ctx->pc = 0x1984ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984A8u;
        // 0x1984ac: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1984B0u;
        goto label_1984b0;
    }
    ctx->pc = 0x1984A8u;
    {
        const bool branch_taken_0x1984a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1984ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984A8u;
        // 0x1984ac: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984a8) {
            ctx->pc = 0x198510u;
            goto label_198510;
        }
    }
    ctx->pc = 0x1984B0u;
label_1984b0:
    // 0x1984b0: 0xc06614a  jal         func_198528
label_1984b4:
    if (ctx->pc == 0x1984B4u) {
        ctx->pc = 0x1984B8u;
        goto label_1984b8;
    }
    ctx->pc = 0x1984B0u;
    SET_GPR_U32(ctx, 31, 0x1984B8u);
    ctx->pc = 0x198528u;
    goto label_198528;
    ctx->pc = 0x1984B8u;
label_1984b8:
    // 0x1984b8: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1984b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
label_1984bc:
    // 0x1984bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1984bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1984c0:
    // 0x1984c0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1984c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_1984c4:
    // 0x1984c4: 0x13302b  sltu        $a2, $zero, $s3
    ctx->pc = 0x1984c4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1984c8:
    // 0x1984c8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1984c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_1984cc:
    // 0x1984cc: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x1984ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1984d0:
    // 0x1984d0: 0xa6060004  sh          $a2, 0x4($s0)
    ctx->pc = 0x1984d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 6));
label_1984d4:
    // 0x1984d4: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x1984d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_1984d8:
    // 0x1984d8: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x1984d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
label_1984dc:
    // 0x1984dc: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x1984dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
label_1984e0:
    // 0x1984e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1984e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1984e4:
    // 0x1984e4: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x1984e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
label_1984e8:
    // 0x1984e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1984e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1984ec:
    // 0x1984ec: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x1984ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_1984f0:
    // 0x1984f0: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1984f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_1984f4:
    // 0x1984f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1984f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1984f8:
    // 0x1984f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1984f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1984fc:
    // 0x1984fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1984fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198500:
    // 0x198500: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x198500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_198504:
    // 0x198504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198508:
    // 0x198508: 0x8069108  j           func_1A4420
label_19850c:
    if (ctx->pc == 0x19850Cu) {
        ctx->pc = 0x19850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198508u;
        // 0x19850c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198510u;
        goto label_198510;
    }
    ctx->pc = 0x198508u;
    ctx->pc = 0x19850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198508u;
    // 0x19850c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4420u;
    { ctx->pc = 0x1a4420; return; }
    ctx->pc = 0x198510u;
label_198510:
    // 0x198510: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x198510u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_198514:
    // 0x198514: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x198514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198518:
    // 0x198518: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x198518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19851c:
    // 0x19851c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19851cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198520:
    // 0x198520: 0x3e00008  jr          $ra
label_198524:
    if (ctx->pc == 0x198524u) {
        ctx->pc = 0x198524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198520u;
        // 0x198524: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198528u;
        goto label_198528;
    }
    ctx->pc = 0x198520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198520u;
        // 0x198524: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198528u;
label_198528:
    // 0x198528: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x198528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_19852c:
    // 0x19852c: 0x3e00008  jr          $ra
label_198530:
    if (ctx->pc == 0x198530u) {
        ctx->pc = 0x198530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19852Cu;
        // 0x198530: 0x244257b0  addiu       $v0, $v0, 0x57B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198534u;
        goto label_198534;
    }
    ctx->pc = 0x19852Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19852Cu;
        // 0x198530: 0x244257b0  addiu       $v0, $v0, 0x57B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19852Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198534u;
label_198534:
    // 0x198534: 0x0  nop
    ctx->pc = 0x198534u;
    // NOP
label_198538:
    // 0x198538: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x198538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19853c:
    // 0x19853c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19853cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198540:
    // 0x198540: 0x34423c10  ori         $v0, $v0, 0x3C10
    ctx->pc = 0x198540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15376);
label_198544:
    // 0x198544: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_198548:
    // 0x198548: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x198548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_19854c:
    // 0x19854c: 0x34633c20  ori         $v1, $v1, 0x3C20
    ctx->pc = 0x19854cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15392);
label_198550:
    // 0x198550: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x198550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_198554:
    // 0x198554: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198558:
    // 0x198558: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x198558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19855c:
    // 0x19855c: 0xf  sync
    ctx->pc = 0x19855cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_198560:
    // 0x198560: 0x4844e000  cfc2.ni     $a0, $vi28
    ctx->pc = 0x198560u;
    SET_GPR_U32(ctx, 4, ctx->vu0_fbrst);
label_198564:
    // 0x198564: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x198564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
label_198568:
    // 0x198568: 0x48c4e000  ctc2.ni     $a0, $vi28
    ctx->pc = 0x198568u;
    ctx->vu0_fbrst = GPR_U32(ctx, 4) & 0x00000C0Cu;
label_19856c:
    // 0x19856c: 0x40f  sync.p
    ctx->pc = 0x19856cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_198570:
    // 0x198570: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x198570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_198574:
    // 0x198574: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x198574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_198578:
    // 0x198578: 0x24a557c0  addiu       $a1, $a1, 0x57C0
    ctx->pc = 0x198578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22464));
label_19857c:
    // 0x19857c: 0x34c65000  ori         $a2, $a2, 0x5000
    ctx->pc = 0x19857cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20480);
label_198580:
    // 0x198580: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x198580u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_198584:
    // 0x198584: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_198588:
    // 0x198588: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x198588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
label_19858c:
    // 0x19858c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x19858cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_198590:
    // 0x198590: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x198590u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_198594:
    // 0x198594: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x198594u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_198598:
    // 0x198598: 0x3e00008  jr          $ra
label_19859c:
    if (ctx->pc == 0x19859Cu) {
        ctx->pc = 0x19859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198598u;
        // 0x19859c: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1985A0u;
        goto label_1985a0;
    }
    ctx->pc = 0x198598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198598u;
        // 0x19859c: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1985A0u;
label_1985a0:
    // 0x1985a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1985a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1985a4:
    // 0x1985a4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1985a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_1985a8:
    // 0x1985a8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1985a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1985ac:
    // 0x1985ac: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1985acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_1985b0:
    // 0x1985b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1985b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1985b4:
    // 0x1985b4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1985b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1985b8:
    // 0x1985b8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1985b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1985bc:
    // 0x1985bc: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x1985bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_1985c0:
    // 0x1985c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1985c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1985c4:
    // 0x1985c4: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x1985c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_1985c8:
    // 0x1985c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1985c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1985cc:
    // 0x1985cc: 0x5ac03  sra         $s5, $a1, 16
    ctx->pc = 0x1985ccu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 5), 16));
label_1985d0:
    // 0x1985d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1985d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1985d4:
    // 0x1985d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1985d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1985d8:
    // 0x1985d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1985d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1985dc:
    // 0x1985dc: 0x68403  sra         $s0, $a2, 16
    ctx->pc = 0x1985dcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 16));
label_1985e0:
    // 0x1985e0: 0x79c03  sra         $s3, $a3, 16
    ctx->pc = 0x1985e0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
label_1985e4:
    // 0x1985e4: 0x8a403  sra         $s4, $t0, 16
    ctx->pc = 0x1985e4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), 16));
label_1985e8:
    // 0x1985e8: 0xc06614a  jal         func_198528
label_1985ec:
    if (ctx->pc == 0x1985ECu) {
        ctx->pc = 0x1985ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985E8u;
        // 0x1985ec: 0x99403  sra         $s2, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1985F0u;
        goto label_1985f0;
    }
    ctx->pc = 0x1985E8u;
    SET_GPR_U32(ctx, 31, 0x1985F0u);
    ctx->pc = 0x1985ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1985E8u;
    // 0x1985ec: 0x99403  sra         $s2, $t1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 9), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198528u;
    goto label_198528;
    ctx->pc = 0x1985F0u;
label_1985f0:
    // 0x1985f0: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x1985f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_1985f4:
    // 0x1985f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1985f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1985f8:
    // 0x1985f8: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x1985f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
label_1985fc:
    // 0x1985fc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x1985fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_198600:
    // 0x198600: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_198604:
    if (ctx->pc == 0x198604u) {
        ctx->pc = 0x198604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198600u;
        // 0x198604: 0x94c70000  lhu         $a3, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198608u;
        goto label_198608;
    }
    ctx->pc = 0x198600u;
    {
        const bool branch_taken_0x198600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198600u;
        // 0x198604: 0x94c70000  lhu         $a3, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198600) {
            ctx->pc = 0x19861Cu;
            goto label_19861c;
        }
    }
    ctx->pc = 0x198608u;
label_198608:
    // 0x198608: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x198608u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_19860c:
    // 0x19860c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_198610:
    if (ctx->pc == 0x198610u) {
        ctx->pc = 0x198610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19860Cu;
        // 0x198610: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198614u;
        goto label_198614;
    }
    ctx->pc = 0x19860Cu;
    {
        const bool branch_taken_0x19860c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19860Cu;
        // 0x198610: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19860c) {
            ctx->pc = 0x198620u;
            goto label_198620;
        }
    }
    ctx->pc = 0x198614u;
label_198614:
    // 0x198614: 0x10000002  b           . + 4 + (0x2 << 2)
label_198618:
    if (ctx->pc == 0x198618u) {
        ctx->pc = 0x198618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198614u;
        // 0x198618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19861Cu;
        goto label_19861c;
    }
    ctx->pc = 0x198614u;
    {
        const bool branch_taken_0x198614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198614u;
        // 0x198618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198614) {
            ctx->pc = 0x198620u;
            goto label_198620;
        }
    }
    ctx->pc = 0x19861Cu;
label_19861c:
    // 0x19861c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19861cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_198620:
    // 0x198620: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x198620u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
label_198624:
    // 0x198624: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x198624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_198628:
    // 0x198628: 0x32a3000f  andi        $v1, $s5, 0xF
    ctx->pc = 0x198628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)15);
label_19862c:
    // 0x19862c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x19862cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_198630:
    // 0x198630: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x198630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
label_198634:
    // 0x198634: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x198634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_198638:
    // 0x198638: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x198638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19863c:
    // 0x19863c: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x19863cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
label_198640:
    // 0x198640: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x198640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_198644:
    // 0x198644: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x198644u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
label_198648:
    // 0x198648: 0x84c50002  lh          $a1, 0x2($a2)
    ctx->pc = 0x198648u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_19864c:
    // 0x19864c: 0x14a40029  bne         $a1, $a0, . + 4 + (0x29 << 2)
label_198650:
    if (ctx->pc == 0x198650u) {
        ctx->pc = 0x198650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19864Cu;
        // 0x198650: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198654u;
        goto label_198654;
    }
    ctx->pc = 0x19864Cu;
    {
        const bool branch_taken_0x19864c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x198650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19864Cu;
        // 0x198650: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19864c) {
            ctx->pc = 0x1986F4u;
            goto label_1986f4;
        }
    }
    ctx->pc = 0x198654u;
label_198654:
    // 0x198654: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x198654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_198658:
    // 0x198658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19865c:
    // 0x19865c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x19865cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_198660:
    // 0x198660: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
label_198664:
    if (ctx->pc == 0x198664u) {
        ctx->pc = 0x198664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198660u;
        // 0x198664: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198668u;
        goto label_198668;
    }
    ctx->pc = 0x198660u;
    {
        const bool branch_taken_0x198660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x198664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198660u;
        // 0x198664: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198660) {
            ctx->pc = 0x1986BCu;
            goto label_1986bc;
        }
    }
    ctx->pc = 0x198668u;
label_198668:
    // 0x198668: 0x26430032  addiu       $v1, $s2, 0x32
    ctx->pc = 0x198668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 50));
label_19866c:
    // 0x19866c: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x19866cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_198670:
    // 0x198670: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x198670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_198674:
    // 0x198674: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_198678:
    if (ctx->pc == 0x198678u) {
        ctx->pc = 0x198678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198674u;
        // 0x198678: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19867Cu;
        goto label_19867c;
    }
    ctx->pc = 0x198674u;
    {
        const bool branch_taken_0x198674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198674) {
            ctx->pc = 0x198678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198674u;
            // 0x198678: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19867Cu;
            goto label_19867c;
        }
    }
    ctx->pc = 0x19867Cu;
label_19867c:
    // 0x19867c: 0x33b38  dsll        $a3, $v1, 12
    ctx->pc = 0x19867cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 12);
label_198680:
    // 0x198680: 0x84c60004  lh          $a2, 0x4($a2)
    ctx->pc = 0x198680u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_198684:
    // 0x198684: 0x1012  mflo        $v0
    ctx->pc = 0x198684u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_198688:
    // 0x198688: 0x72822818  mult1       $a1, $s4, $v0
    ctx->pc = 0x198688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_19868c:
    // 0x19868c: 0x502018  mult        $a0, $v0, $s0
    ctx->pc = 0x19868cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_198690:
    // 0x198690: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_198694:
    // 0x198694: 0x64a3027c  daddiu      $v1, $a1, 0x27C
    ctx->pc = 0x198694u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)636);
label_198698:
    // 0x198698: 0x255f8  dsll        $t2, $v0, 23
    ctx->pc = 0x198698u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << 23);
label_19869c:
    // 0x19869c: 0x30650fff  andi        $a1, $v1, 0xFFF
    ctx->pc = 0x19869cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1986a0:
    // 0x1986a0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1986a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1986a4:
    // 0x1986a4: 0x10c0002f  beqz        $a2, . + 4 + (0x2F << 2)
label_1986a8:
    if (ctx->pc == 0x1986A8u) {
        ctx->pc = 0x1986A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986A4u;
        // 0x1986a8: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1986ACu;
        goto label_1986ac;
    }
    ctx->pc = 0x1986A4u;
    {
        const bool branch_taken_0x1986a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1986A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986A4u;
        // 0x1986a8: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986a4) {
            ctx->pc = 0x198764u;
            { ctx->pc = 0x198764; return; }
        }
    }
    ctx->pc = 0x1986ACu;
label_1986ac:
    // 0x1986ac: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1986acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_1986b0:
    // 0x1986b0: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x1986b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
label_1986b4:
    // 0x1986b4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1986b8:
    if (ctx->pc == 0x1986B8u) {
        ctx->pc = 0x1986B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986B4u;
        // 0x1986b8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1986BCu;
        goto label_1986bc;
    }
    ctx->pc = 0x1986B4u;
    {
        const bool branch_taken_0x1986b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1986B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986B4u;
        // 0x1986b8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986b4) {
            ctx->pc = 0x19876Cu;
            { ctx->pc = 0x19876c; return; }
        }
    }
    ctx->pc = 0x1986BCu;
label_1986bc:
    // 0x1986bc: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x1986bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1986c0:
    // 0x1986c0: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1986c0u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1986c4:
    // 0x1986c4: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x1986c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
label_1986c8:
    // 0x1986c8: 0x26450019  addiu       $a1, $s2, 0x19
    ctx->pc = 0x1986c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25));
label_1986cc:
    // 0x1986cc: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_1986d0:
    if (ctx->pc == 0x1986D0u) {
        ctx->pc = 0x1986D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986CCu;
        // 0x1986d0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1986D4u;
        goto label_1986d4;
    }
    ctx->pc = 0x1986CCu;
    {
        const bool branch_taken_0x1986cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1986cc) {
            ctx->pc = 0x1986D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1986CCu;
            // 0x1986d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1986D4u;
            goto label_1986d4;
        }
    }
    ctx->pc = 0x1986D4u;
label_1986d4:
    // 0x1986d4: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x1986d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
label_1986d8:
    // 0x1986d8: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x1986d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
label_1986dc:
    // 0x1986dc: 0x1012  mflo        $v0
    ctx->pc = 0x1986dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1986e0:
    // 0x1986e0: 0x2823818  mult        $a3, $s4, $v0
    ctx->pc = 0x1986e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_1986e4:
    // 0x1986e4: 0x70502018  mult1       $a0, $v0, $s0
    ctx->pc = 0x1986e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1986e8:
    // 0x1986e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1986e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1986ec:
    // 0x1986ec: 0x10000032  b           . + 4 + (0x32 << 2)
label_1986f0:
    if (ctx->pc == 0x1986F0u) {
        ctx->pc = 0x1986F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986ECu;
        // 0x1986f0: 0x64e3027c  daddiu      $v1, $a3, 0x27C (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)636);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1986F4u;
        goto label_1986f4;
    }
    ctx->pc = 0x1986ECu;
    {
        const bool branch_taken_0x1986ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1986F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986ECu;
        // 0x1986f0: 0x64e3027c  daddiu      $v1, $a3, 0x27C (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)636);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986ec) {
            ctx->pc = 0x1987B8u;
            { ctx->pc = 0x1987b8; return; }
        }
    }
    ctx->pc = 0x1986F4u;
label_1986f4:
    // 0x1986f4: 0x14a2003a  bne         $a1, $v0, . + 4 + (0x3A << 2)
label_1986f8:
    if (ctx->pc == 0x1986F8u) {
        ctx->pc = 0x1986F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986F4u;
        // 0x1986f8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1986FCu;
        goto label_1986fc;
    }
    ctx->pc = 0x1986F4u;
    {
        const bool branch_taken_0x1986f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1986F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986F4u;
        // 0x1986f8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986f4) {
            ctx->pc = 0x1987E0u;
            { ctx->pc = 0x1987e0; return; }
        }
    }
    ctx->pc = 0x1986FCu;
label_1986fc:
    // 0x1986fc: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1986fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_198700:
    // 0x198700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198704:
    // 0x198704: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x198704u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_198708:
    // 0x198708: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_19870c:
    if (ctx->pc == 0x19870Cu) {
        ctx->pc = 0x19870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198708u;
        // 0x19870c: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198710u;
        goto label_198710;
    }
    ctx->pc = 0x198708u;
    {
        const bool branch_taken_0x198708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198708u;
        // 0x19870c: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198708) {
            ctx->pc = 0x198784u;
            { ctx->pc = 0x198784; return; }
        }
    }
    ctx->pc = 0x198710u;
label_198710:
    // 0x198710: 0x26430048  addiu       $v1, $s2, 0x48
    ctx->pc = 0x198710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
label_198714:
    // 0x198714: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x198714u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_198718:
    // 0x198718: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x198718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_19871c:
    // 0x19871c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_198720:
    if (ctx->pc == 0x198720u) {
        ctx->pc = 0x198720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19871Cu;
        // 0x198720: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x198724u;
        goto label_198724;
    }
    ctx->pc = 0x19871Cu;
    {
        const bool branch_taken_0x19871c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19871c) {
            ctx->pc = 0x198720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19871Cu;
            // 0x198720: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x198724u;
            goto label_198724;
        }
    }
    ctx->pc = 0x198724u;
label_198724:
    // 0x198724: 0x33b38  dsll        $a3, $v1, 12
    ctx->pc = 0x198724u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 12);
label_198728:
    // 0x198728: 0x84c60004  lh          $a2, 0x4($a2)
    ctx->pc = 0x198728u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_19872c:
    // 0x19872c: 0x1012  mflo        $v0
    ctx->pc = 0x19872cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_198730:
    // 0x198730: 0x72822818  mult1       $a1, $s4, $v0
    ctx->pc = 0x198730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_198734:
    // 0x198734: 0x502018  mult        $a0, $v0, $s0
    ctx->pc = 0x198734u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_198738:
    // 0x198738: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19873c:
    // 0x19873c: 0x64a30290  daddiu      $v1, $a1, 0x290
    ctx->pc = 0x19873cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)656);
label_198740:
    // 0x198740: 0x255f8  dsll        $t2, $v0, 23
    ctx->pc = 0x198740u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << 23);
label_198744:
    // 0x198744: 0x30650fff  andi        $a1, $v1, 0xFFF
    ctx->pc = 0x198744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_198748:
    // 0x198748: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x198748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_19874c:
    // 0x19874c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x198750u;
    return;
}

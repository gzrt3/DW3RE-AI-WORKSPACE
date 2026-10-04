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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x187f70u: goto label_187f70;
        case 0x187f74u: goto label_187f74;
        case 0x187f78u: goto label_187f78;
        case 0x187f7cu: goto label_187f7c;
        case 0x187f80u: goto label_187f80;
        case 0x187f84u: goto label_187f84;
        case 0x187f88u: goto label_187f88;
        case 0x187f8cu: goto label_187f8c;
        case 0x187f90u: goto label_187f90;
        case 0x187f94u: goto label_187f94;
        case 0x187f98u: goto label_187f98;
        case 0x187f9cu: goto label_187f9c;
        case 0x187fa0u: goto label_187fa0;
        case 0x187fa4u: goto label_187fa4;
        case 0x187fa8u: goto label_187fa8;
        case 0x187facu: goto label_187fac;
        case 0x187fb0u: goto label_187fb0;
        case 0x187fb4u: goto label_187fb4;
        case 0x187fb8u: goto label_187fb8;
        case 0x187fbcu: goto label_187fbc;
        case 0x187fc0u: goto label_187fc0;
        case 0x187fc4u: goto label_187fc4;
        case 0x187fc8u: goto label_187fc8;
        case 0x187fccu: goto label_187fcc;
        case 0x187fd0u: goto label_187fd0;
        case 0x187fd4u: goto label_187fd4;
        case 0x187fd8u: goto label_187fd8;
        case 0x187fdcu: goto label_187fdc;
        case 0x187fe0u: goto label_187fe0;
        case 0x187fe4u: goto label_187fe4;
        case 0x187fe8u: goto label_187fe8;
        case 0x187fecu: goto label_187fec;
        case 0x187ff0u: goto label_187ff0;
        case 0x187ff4u: goto label_187ff4;
        case 0x187ff8u: goto label_187ff8;
        case 0x187ffcu: goto label_187ffc;
        case 0x188000u: goto label_188000;
        case 0x188004u: goto label_188004;
        case 0x188008u: goto label_188008;
        case 0x18800cu: goto label_18800c;
        case 0x188010u: goto label_188010;
        case 0x188014u: goto label_188014;
        case 0x188018u: goto label_188018;
        case 0x18801cu: goto label_18801c;
        case 0x188020u: goto label_188020;
        case 0x188024u: goto label_188024;
        case 0x188028u: goto label_188028;
        case 0x18802cu: goto label_18802c;
        case 0x188030u: goto label_188030;
        case 0x188034u: goto label_188034;
        case 0x188038u: goto label_188038;
        case 0x18803cu: goto label_18803c;
        case 0x188040u: goto label_188040;
        case 0x188044u: goto label_188044;
        case 0x188048u: goto label_188048;
        case 0x18804cu: goto label_18804c;
        case 0x188050u: goto label_188050;
        case 0x188054u: goto label_188054;
        case 0x188058u: goto label_188058;
        case 0x18805cu: goto label_18805c;
        case 0x188060u: goto label_188060;
        case 0x188064u: goto label_188064;
        case 0x188068u: goto label_188068;
        case 0x18806cu: goto label_18806c;
        case 0x188070u: goto label_188070;
        case 0x188074u: goto label_188074;
        case 0x188078u: goto label_188078;
        case 0x18807cu: goto label_18807c;
        case 0x188080u: goto label_188080;
        case 0x188084u: goto label_188084;
        case 0x188088u: goto label_188088;
        case 0x18808cu: goto label_18808c;
        case 0x188090u: goto label_188090;
        case 0x188094u: goto label_188094;
        case 0x188098u: goto label_188098;
        case 0x18809cu: goto label_18809c;
        case 0x1880a0u: goto label_1880a0;
        case 0x1880a4u: goto label_1880a4;
        case 0x1880a8u: goto label_1880a8;
        case 0x1880acu: goto label_1880ac;
        case 0x1880b0u: goto label_1880b0;
        case 0x1880b4u: goto label_1880b4;
        case 0x1880b8u: goto label_1880b8;
        case 0x1880bcu: goto label_1880bc;
        case 0x1880c0u: goto label_1880c0;
        case 0x1880c4u: goto label_1880c4;
        case 0x1880c8u: goto label_1880c8;
        case 0x1880ccu: goto label_1880cc;
        case 0x1880d0u: goto label_1880d0;
        case 0x1880d4u: goto label_1880d4;
        case 0x1880d8u: goto label_1880d8;
        case 0x1880dcu: goto label_1880dc;
        case 0x1880e0u: goto label_1880e0;
        case 0x1880e4u: goto label_1880e4;
        case 0x1880e8u: goto label_1880e8;
        case 0x1880ecu: goto label_1880ec;
        case 0x1880f0u: goto label_1880f0;
        case 0x1880f4u: goto label_1880f4;
        case 0x1880f8u: goto label_1880f8;
        case 0x1880fcu: goto label_1880fc;
        case 0x188100u: goto label_188100;
        case 0x188104u: goto label_188104;
        case 0x188108u: goto label_188108;
        case 0x18810cu: goto label_18810c;
        case 0x188110u: goto label_188110;
        case 0x188114u: goto label_188114;
        case 0x188118u: goto label_188118;
        case 0x18811cu: goto label_18811c;
        case 0x188120u: goto label_188120;
        case 0x188124u: goto label_188124;
        case 0x188128u: goto label_188128;
        case 0x18812cu: goto label_18812c;
        case 0x188130u: goto label_188130;
        case 0x188134u: goto label_188134;
        case 0x188138u: goto label_188138;
        case 0x18813cu: goto label_18813c;
        case 0x188140u: goto label_188140;
        case 0x188144u: goto label_188144;
        case 0x188148u: goto label_188148;
        case 0x18814cu: goto label_18814c;
        case 0x188150u: goto label_188150;
        case 0x188154u: goto label_188154;
        case 0x188158u: goto label_188158;
        case 0x18815cu: goto label_18815c;
        case 0x188160u: goto label_188160;
        case 0x188164u: goto label_188164;
        case 0x188168u: goto label_188168;
        case 0x18816cu: goto label_18816c;
        case 0x188170u: goto label_188170;
        case 0x188174u: goto label_188174;
        case 0x188178u: goto label_188178;
        case 0x18817cu: goto label_18817c;
        case 0x188180u: goto label_188180;
        case 0x188184u: goto label_188184;
        case 0x188188u: goto label_188188;
        case 0x18818cu: goto label_18818c;
        case 0x188190u: goto label_188190;
        case 0x188194u: goto label_188194;
        case 0x188198u: goto label_188198;
        case 0x18819cu: goto label_18819c;
        case 0x1881a0u: goto label_1881a0;
        case 0x1881a4u: goto label_1881a4;
        case 0x1881a8u: goto label_1881a8;
        case 0x1881acu: goto label_1881ac;
        case 0x1881b0u: goto label_1881b0;
        case 0x1881b4u: goto label_1881b4;
        case 0x1881b8u: goto label_1881b8;
        case 0x1881bcu: goto label_1881bc;
        case 0x1881c0u: goto label_1881c0;
        case 0x1881c4u: goto label_1881c4;
        case 0x1881c8u: goto label_1881c8;
        case 0x1881ccu: goto label_1881cc;
        case 0x1881d0u: goto label_1881d0;
        case 0x1881d4u: goto label_1881d4;
        case 0x1881d8u: goto label_1881d8;
        case 0x1881dcu: goto label_1881dc;
        case 0x1881e0u: goto label_1881e0;
        case 0x1881e4u: goto label_1881e4;
        case 0x1881e8u: goto label_1881e8;
        case 0x1881ecu: goto label_1881ec;
        case 0x1881f0u: goto label_1881f0;
        case 0x1881f4u: goto label_1881f4;
        case 0x1881f8u: goto label_1881f8;
        case 0x1881fcu: goto label_1881fc;
        case 0x188200u: goto label_188200;
        case 0x188204u: goto label_188204;
        case 0x188208u: goto label_188208;
        case 0x18820cu: goto label_18820c;
        case 0x188210u: goto label_188210;
        case 0x188214u: goto label_188214;
        case 0x188218u: goto label_188218;
        case 0x18821cu: goto label_18821c;
        case 0x188220u: goto label_188220;
        case 0x188224u: goto label_188224;
        case 0x188228u: goto label_188228;
        case 0x18822cu: goto label_18822c;
        case 0x188230u: goto label_188230;
        case 0x188234u: goto label_188234;
        case 0x188238u: goto label_188238;
        case 0x18823cu: goto label_18823c;
        case 0x188240u: goto label_188240;
        case 0x188244u: goto label_188244;
        case 0x188248u: goto label_188248;
        case 0x18824cu: goto label_18824c;
        case 0x188250u: goto label_188250;
        case 0x188254u: goto label_188254;
        case 0x188258u: goto label_188258;
        case 0x18825cu: goto label_18825c;
        case 0x188260u: goto label_188260;
        case 0x188264u: goto label_188264;
        case 0x188268u: goto label_188268;
        case 0x18826cu: goto label_18826c;
        case 0x188270u: goto label_188270;
        case 0x188274u: goto label_188274;
        case 0x188278u: goto label_188278;
        case 0x18827cu: goto label_18827c;
        case 0x188280u: goto label_188280;
        case 0x188284u: goto label_188284;
        case 0x188288u: goto label_188288;
        case 0x18828cu: goto label_18828c;
        case 0x188290u: goto label_188290;
        case 0x188294u: goto label_188294;
        case 0x188298u: goto label_188298;
        case 0x18829cu: goto label_18829c;
        case 0x1882a0u: goto label_1882a0;
        case 0x1882a4u: goto label_1882a4;
        case 0x1882a8u: goto label_1882a8;
        case 0x1882acu: goto label_1882ac;
        case 0x1882b0u: goto label_1882b0;
        case 0x1882b4u: goto label_1882b4;
        case 0x1882b8u: goto label_1882b8;
        case 0x1882bcu: goto label_1882bc;
        case 0x1882c0u: goto label_1882c0;
        case 0x1882c4u: goto label_1882c4;
        case 0x1882c8u: goto label_1882c8;
        case 0x1882ccu: goto label_1882cc;
        case 0x1882d0u: goto label_1882d0;
        case 0x1882d4u: goto label_1882d4;
        case 0x1882d8u: goto label_1882d8;
        case 0x1882dcu: goto label_1882dc;
        case 0x1882e0u: goto label_1882e0;
        case 0x1882e4u: goto label_1882e4;
        case 0x1882e8u: goto label_1882e8;
        case 0x1882ecu: goto label_1882ec;
        case 0x1882f0u: goto label_1882f0;
        case 0x1882f4u: goto label_1882f4;
        case 0x1882f8u: goto label_1882f8;
        case 0x1882fcu: goto label_1882fc;
        case 0x188300u: goto label_188300;
        case 0x188304u: goto label_188304;
        case 0x188308u: goto label_188308;
        case 0x18830cu: goto label_18830c;
        case 0x188310u: goto label_188310;
        case 0x188314u: goto label_188314;
        case 0x188318u: goto label_188318;
        case 0x18831cu: goto label_18831c;
        case 0x188320u: goto label_188320;
        case 0x188324u: goto label_188324;
        case 0x188328u: goto label_188328;
        case 0x18832cu: goto label_18832c;
        case 0x188330u: goto label_188330;
        case 0x188334u: goto label_188334;
        case 0x188338u: goto label_188338;
        case 0x18833cu: goto label_18833c;
        case 0x188340u: goto label_188340;
        case 0x188344u: goto label_188344;
        case 0x188348u: goto label_188348;
        case 0x18834cu: goto label_18834c;
        case 0x188350u: goto label_188350;
        case 0x188354u: goto label_188354;
        case 0x188358u: goto label_188358;
        case 0x18835cu: goto label_18835c;
        case 0x188360u: goto label_188360;
        case 0x188364u: goto label_188364;
        case 0x188368u: goto label_188368;
        case 0x18836cu: goto label_18836c;
        case 0x188370u: goto label_188370;
        case 0x188374u: goto label_188374;
        case 0x188378u: goto label_188378;
        case 0x18837cu: goto label_18837c;
        case 0x188380u: goto label_188380;
        case 0x188384u: goto label_188384;
        case 0x188388u: goto label_188388;
        case 0x18838cu: goto label_18838c;
        case 0x188390u: goto label_188390;
        case 0x188394u: goto label_188394;
        case 0x188398u: goto label_188398;
        case 0x18839cu: goto label_18839c;
        case 0x1883a0u: goto label_1883a0;
        case 0x1883a4u: goto label_1883a4;
        case 0x1883a8u: goto label_1883a8;
        case 0x1883acu: goto label_1883ac;
        case 0x1883b0u: goto label_1883b0;
        case 0x1883b4u: goto label_1883b4;
        case 0x1883b8u: goto label_1883b8;
        case 0x1883bcu: goto label_1883bc;
        case 0x1883c0u: goto label_1883c0;
        case 0x1883c4u: goto label_1883c4;
        case 0x1883c8u: goto label_1883c8;
        case 0x1883ccu: goto label_1883cc;
        case 0x1883d0u: goto label_1883d0;
        case 0x1883d4u: goto label_1883d4;
        case 0x1883d8u: goto label_1883d8;
        case 0x1883dcu: goto label_1883dc;
        case 0x1883e0u: goto label_1883e0;
        case 0x1883e4u: goto label_1883e4;
        case 0x1883e8u: goto label_1883e8;
        case 0x1883ecu: goto label_1883ec;
        case 0x1883f0u: goto label_1883f0;
        case 0x1883f4u: goto label_1883f4;
        case 0x1883f8u: goto label_1883f8;
        case 0x1883fcu: goto label_1883fc;
        case 0x188400u: goto label_188400;
        case 0x188404u: goto label_188404;
        case 0x188408u: goto label_188408;
        case 0x18840cu: goto label_18840c;
        case 0x188410u: goto label_188410;
        case 0x188414u: goto label_188414;
        case 0x188418u: goto label_188418;
        case 0x18841cu: goto label_18841c;
        case 0x188420u: goto label_188420;
        case 0x188424u: goto label_188424;
        case 0x188428u: goto label_188428;
        case 0x18842cu: goto label_18842c;
        case 0x188430u: goto label_188430;
        case 0x188434u: goto label_188434;
        case 0x188438u: goto label_188438;
        case 0x18843cu: goto label_18843c;
        case 0x188440u: goto label_188440;
        case 0x188444u: goto label_188444;
        case 0x188448u: goto label_188448;
        case 0x18844cu: goto label_18844c;
        case 0x188450u: goto label_188450;
        case 0x188454u: goto label_188454;
        case 0x188458u: goto label_188458;
        case 0x18845cu: goto label_18845c;
        case 0x188460u: goto label_188460;
        case 0x188464u: goto label_188464;
        case 0x188468u: goto label_188468;
        case 0x18846cu: goto label_18846c;
        case 0x188470u: goto label_188470;
        case 0x188474u: goto label_188474;
        case 0x188478u: goto label_188478;
        case 0x18847cu: goto label_18847c;
        case 0x188480u: goto label_188480;
        case 0x188484u: goto label_188484;
        case 0x188488u: goto label_188488;
        case 0x18848cu: goto label_18848c;
        case 0x188490u: goto label_188490;
        case 0x188494u: goto label_188494;
        case 0x188498u: goto label_188498;
        case 0x18849cu: goto label_18849c;
        case 0x1884a0u: goto label_1884a0;
        case 0x1884a4u: goto label_1884a4;
        case 0x1884a8u: goto label_1884a8;
        case 0x1884acu: goto label_1884ac;
        case 0x1884b0u: goto label_1884b0;
        case 0x1884b4u: goto label_1884b4;
        case 0x1884b8u: goto label_1884b8;
        case 0x1884bcu: goto label_1884bc;
        case 0x1884c0u: goto label_1884c0;
        case 0x1884c4u: goto label_1884c4;
        case 0x1884c8u: goto label_1884c8;
        case 0x1884ccu: goto label_1884cc;
        case 0x1884d0u: goto label_1884d0;
        case 0x1884d4u: goto label_1884d4;
        case 0x1884d8u: goto label_1884d8;
        case 0x1884dcu: goto label_1884dc;
        case 0x1884e0u: goto label_1884e0;
        case 0x1884e4u: goto label_1884e4;
        case 0x1884e8u: goto label_1884e8;
        case 0x1884ecu: goto label_1884ec;
        case 0x1884f0u: goto label_1884f0;
        case 0x1884f4u: goto label_1884f4;
        case 0x1884f8u: goto label_1884f8;
        case 0x1884fcu: goto label_1884fc;
        case 0x188500u: goto label_188500;
        case 0x188504u: goto label_188504;
        case 0x188508u: goto label_188508;
        case 0x18850cu: goto label_18850c;
        case 0x188510u: goto label_188510;
        case 0x188514u: goto label_188514;
        case 0x188518u: goto label_188518;
        case 0x18851cu: goto label_18851c;
        case 0x188520u: goto label_188520;
        case 0x188524u: goto label_188524;
        case 0x188528u: goto label_188528;
        case 0x18852cu: goto label_18852c;
        case 0x188530u: goto label_188530;
        case 0x188534u: goto label_188534;
        case 0x188538u: goto label_188538;
        case 0x18853cu: goto label_18853c;
        case 0x188540u: goto label_188540;
        case 0x188544u: goto label_188544;
        case 0x188548u: goto label_188548;
        case 0x18854cu: goto label_18854c;
        case 0x188550u: goto label_188550;
        case 0x188554u: goto label_188554;
        case 0x188558u: goto label_188558;
        case 0x18855cu: goto label_18855c;
        case 0x188560u: goto label_188560;
        case 0x188564u: goto label_188564;
        case 0x188568u: goto label_188568;
        case 0x18856cu: goto label_18856c;
        case 0x188570u: goto label_188570;
        case 0x188574u: goto label_188574;
        case 0x188578u: goto label_188578;
        case 0x18857cu: goto label_18857c;
        case 0x188580u: goto label_188580;
        case 0x188584u: goto label_188584;
        case 0x188588u: goto label_188588;
        case 0x18858cu: goto label_18858c;
        case 0x188590u: goto label_188590;
        case 0x188594u: goto label_188594;
        case 0x188598u: goto label_188598;
        case 0x18859cu: goto label_18859c;
        case 0x1885a0u: goto label_1885a0;
        case 0x1885a4u: goto label_1885a4;
        case 0x1885a8u: goto label_1885a8;
        case 0x1885acu: goto label_1885ac;
        case 0x1885b0u: goto label_1885b0;
        case 0x1885b4u: goto label_1885b4;
        case 0x1885b8u: goto label_1885b8;
        case 0x1885bcu: goto label_1885bc;
        case 0x1885c0u: goto label_1885c0;
        case 0x1885c4u: goto label_1885c4;
        case 0x1885c8u: goto label_1885c8;
        case 0x1885ccu: goto label_1885cc;
        case 0x1885d0u: goto label_1885d0;
        case 0x1885d4u: goto label_1885d4;
        case 0x1885d8u: goto label_1885d8;
        case 0x1885dcu: goto label_1885dc;
        case 0x1885e0u: goto label_1885e0;
        case 0x1885e4u: goto label_1885e4;
        case 0x1885e8u: goto label_1885e8;
        case 0x1885ecu: goto label_1885ec;
        case 0x1885f0u: goto label_1885f0;
        case 0x1885f4u: goto label_1885f4;
        case 0x1885f8u: goto label_1885f8;
        case 0x1885fcu: goto label_1885fc;
        case 0x188600u: goto label_188600;
        case 0x188604u: goto label_188604;
        case 0x188608u: goto label_188608;
        case 0x18860cu: goto label_18860c;
        case 0x188610u: goto label_188610;
        case 0x188614u: goto label_188614;
        case 0x188618u: goto label_188618;
        case 0x18861cu: goto label_18861c;
        case 0x188620u: goto label_188620;
        case 0x188624u: goto label_188624;
        case 0x188628u: goto label_188628;
        case 0x18862cu: goto label_18862c;
        case 0x188630u: goto label_188630;
        case 0x188634u: goto label_188634;
        case 0x188638u: goto label_188638;
        case 0x18863cu: goto label_18863c;
        case 0x188640u: goto label_188640;
        case 0x188644u: goto label_188644;
        case 0x188648u: goto label_188648;
        case 0x18864cu: goto label_18864c;
        case 0x188650u: goto label_188650;
        case 0x188654u: goto label_188654;
        case 0x188658u: goto label_188658;
        case 0x18865cu: goto label_18865c;
        case 0x188660u: goto label_188660;
        case 0x188664u: goto label_188664;
        case 0x188668u: goto label_188668;
        case 0x18866cu: goto label_18866c;
        case 0x188670u: goto label_188670;
        case 0x188674u: goto label_188674;
        case 0x188678u: goto label_188678;
        case 0x18867cu: goto label_18867c;
        case 0x188680u: goto label_188680;
        case 0x188684u: goto label_188684;
        case 0x188688u: goto label_188688;
        case 0x18868cu: goto label_18868c;
        case 0x188690u: goto label_188690;
        case 0x188694u: goto label_188694;
        case 0x188698u: goto label_188698;
        case 0x18869cu: goto label_18869c;
        case 0x1886a0u: goto label_1886a0;
        case 0x1886a4u: goto label_1886a4;
        case 0x1886a8u: goto label_1886a8;
        case 0x1886acu: goto label_1886ac;
        case 0x1886b0u: goto label_1886b0;
        case 0x1886b4u: goto label_1886b4;
        case 0x1886b8u: goto label_1886b8;
        case 0x1886bcu: goto label_1886bc;
        case 0x1886c0u: goto label_1886c0;
        case 0x1886c4u: goto label_1886c4;
        case 0x1886c8u: goto label_1886c8;
        case 0x1886ccu: goto label_1886cc;
        case 0x1886d0u: goto label_1886d0;
        case 0x1886d4u: goto label_1886d4;
        case 0x1886d8u: goto label_1886d8;
        case 0x1886dcu: goto label_1886dc;
        case 0x1886e0u: goto label_1886e0;
        case 0x1886e4u: goto label_1886e4;
        case 0x1886e8u: goto label_1886e8;
        case 0x1886ecu: goto label_1886ec;
        case 0x1886f0u: goto label_1886f0;
        case 0x1886f4u: goto label_1886f4;
        case 0x1886f8u: goto label_1886f8;
        case 0x1886fcu: goto label_1886fc;
        case 0x188700u: goto label_188700;
        case 0x188704u: goto label_188704;
        case 0x188708u: goto label_188708;
        case 0x18870cu: goto label_18870c;
        case 0x188710u: goto label_188710;
        case 0x188714u: goto label_188714;
        case 0x188718u: goto label_188718;
        case 0x18871cu: goto label_18871c;
        case 0x188720u: goto label_188720;
        case 0x188724u: goto label_188724;
        case 0x188728u: goto label_188728;
        case 0x18872cu: goto label_18872c;
        case 0x188730u: goto label_188730;
        case 0x188734u: goto label_188734;
        case 0x188738u: goto label_188738;
        case 0x18873cu: goto label_18873c;
        default: return;
    }

label_187f70:
    // 0x187f70: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x187f70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_187f74:
    // 0x187f74: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_187f78:
    if (ctx->pc == 0x187F78u) {
        ctx->pc = 0x187F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F74u;
        // 0x187f78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187F7Cu;
        goto label_187f7c;
    }
    ctx->pc = 0x187F74u;
    {
        const bool branch_taken_0x187f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F74u;
        // 0x187f78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f74) {
            ctx->pc = 0x187F80u;
            goto label_187f80;
        }
    }
    ctx->pc = 0x187F7Cu;
label_187f7c:
    // 0x187f7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x187f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187f80:
    // 0x187f80: 0x14600228  bnez        $v1, . + 4 + (0x228 << 2)
label_187f84:
    if (ctx->pc == 0x187F84u) {
        ctx->pc = 0x187F88u;
        goto label_187f88;
    }
    ctx->pc = 0x187F80u;
    {
        const bool branch_taken_0x187f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187f80) {
            ctx->pc = 0x188824u;
            { ctx->pc = 0x188824; return; }
        }
    }
    ctx->pc = 0x187F88u;
label_187f88:
    // 0x187f88: 0x92220233  lbu         $v0, 0x233($s1)
    ctx->pc = 0x187f88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 563)));
label_187f8c:
    // 0x187f8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_187f90:
    if (ctx->pc == 0x187F90u) {
        ctx->pc = 0x187F94u;
        goto label_187f94;
    }
    ctx->pc = 0x187F8Cu;
    {
        const bool branch_taken_0x187f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f8c) {
            ctx->pc = 0x187FA4u;
            goto label_187fa4;
        }
    }
    ctx->pc = 0x187F94u;
label_187f94:
    // 0x187f94: 0x92230232  lbu         $v1, 0x232($s1)
    ctx->pc = 0x187f94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
label_187f98:
    // 0x187f98: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x187f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_187f9c:
    // 0x187f9c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_187fa0:
    if (ctx->pc == 0x187FA0u) {
        ctx->pc = 0x187FA4u;
        goto label_187fa4;
    }
    ctx->pc = 0x187F9Cu;
    {
        const bool branch_taken_0x187f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187f9c) {
            ctx->pc = 0x187FB4u;
            goto label_187fb4;
        }
    }
    ctx->pc = 0x187FA4u;
label_187fa4:
    // 0x187fa4: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x187fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_187fa8:
    // 0x187fa8: 0x34424010  ori         $v0, $v0, 0x4010
    ctx->pc = 0x187fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16400);
label_187fac:
    // 0x187fac: 0x10000006  b           . + 4 + (0x6 << 2)
label_187fb0:
    if (ctx->pc == 0x187FB0u) {
        ctx->pc = 0x187FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FACu;
        // 0x187fb0: 0xae220194  sw          $v0, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FB4u;
        goto label_187fb4;
    }
    ctx->pc = 0x187FACu;
    {
        const bool branch_taken_0x187fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FACu;
        // 0x187fb0: 0xae220194  sw          $v0, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fac) {
            ctx->pc = 0x187FC8u;
            goto label_187fc8;
        }
    }
    ctx->pc = 0x187FB4u;
label_187fb4:
    // 0x187fb4: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x187fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_187fb8:
    // 0x187fb8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x187fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_187fbc:
    // 0x187fbc: 0x34424050  ori         $v0, $v0, 0x4050
    ctx->pc = 0x187fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16464);
label_187fc0:
    // 0x187fc0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x187fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_187fc4:
    // 0x187fc4: 0xae220194  sw          $v0, 0x194($s1)
    ctx->pc = 0x187fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
label_187fc8:
    // 0x187fc8: 0x26240264  addiu       $a0, $s1, 0x264
    ctx->pc = 0x187fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 612));
label_187fcc:
    // 0x187fcc: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x187fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_187fd0:
    // 0x187fd0: 0xc0439e8  jal         func_10E7A0
label_187fd4:
    if (ctx->pc == 0x187FD4u) {
        ctx->pc = 0x187FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FD0u;
        // 0x187fd4: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FD8u;
        goto label_187fd8;
    }
    ctx->pc = 0x187FD0u;
    SET_GPR_U32(ctx, 31, 0x187FD8u);
    ctx->pc = 0x187FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187FD0u;
    // 0x187fd4: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x187FD0u, 0x187FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FD8u;
label_187fd8:
    // 0x187fd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_187fdc:
    if (ctx->pc == 0x187FDCu) {
        ctx->pc = 0x187FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FD8u;
        // 0x187fdc: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FE0u;
        goto label_187fe0;
    }
    ctx->pc = 0x187FD8u;
    {
        const bool branch_taken_0x187fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FD8u;
        // 0x187fdc: 0x27a40038  addiu       $a0, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fd8) {
            ctx->pc = 0x187FECu;
            goto label_187fec;
        }
    }
    ctx->pc = 0x187FE0u;
label_187fe0:
    // 0x187fe0: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x187fe0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_187fe4:
    // 0x187fe4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x187fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_187fe8:
    // 0x187fe8: 0xa222023d  sb          $v0, 0x23D($s1)
    ctx->pc = 0x187fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
label_187fec:
    // 0x187fec: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x187fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_187ff0:
    // 0x187ff0: 0xc0439e8  jal         func_10E7A0
label_187ff4:
    if (ctx->pc == 0x187FF4u) {
        ctx->pc = 0x187FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FF0u;
        // 0x187ff4: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187FF8u;
        goto label_187ff8;
    }
    ctx->pc = 0x187FF0u;
    SET_GPR_U32(ctx, 31, 0x187FF8u);
    ctx->pc = 0x187FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187FF0u;
    // 0x187ff4: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x187FF0u, 0x187FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FF8u;
label_187ff8:
    // 0x187ff8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_187ffc:
    if (ctx->pc == 0x187FFCu) {
        ctx->pc = 0x188000u;
        goto label_188000;
    }
    ctx->pc = 0x187FF8u;
    {
        const bool branch_taken_0x187ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ff8) {
            ctx->pc = 0x188008u;
            goto label_188008;
        }
    }
    ctx->pc = 0x188000u;
label_188000:
    // 0x188000: 0x10000020  b           . + 4 + (0x20 << 2)
label_188004:
    if (ctx->pc == 0x188004u) {
        ctx->pc = 0x188004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188000u;
        // 0x188004: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188008u;
        goto label_188008;
    }
    ctx->pc = 0x188000u;
    {
        const bool branch_taken_0x188000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188000u;
        // 0x188004: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188000) {
            ctx->pc = 0x188084u;
            goto label_188084;
        }
    }
    ctx->pc = 0x188008u;
label_188008:
    // 0x188008: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x188008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18800c:
    // 0x18800c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18800cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_188010:
    // 0x188010: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x188010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188014:
    // 0x188014: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x188014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_188018:
    // 0x188018: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18801c:
    // 0x18801c: 0x0  nop
    ctx->pc = 0x18801cu;
    // NOP
label_188020:
    // 0x188020: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x188020u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_188024:
    // 0x188024: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x188024u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188028:
    // 0x188028: 0x0  nop
    ctx->pc = 0x188028u;
    // NOP
label_18802c:
    // 0x18802c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_188030:
    if (ctx->pc == 0x188030u) {
        ctx->pc = 0x188030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18802Cu;
        // 0x188030: 0xe7ac0038  swc1        $f12, 0x38($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x188034u;
        goto label_188034;
    }
    ctx->pc = 0x18802Cu;
    {
        const bool branch_taken_0x18802c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x188030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18802Cu;
        // 0x188030: 0xe7ac0038  swc1        $f12, 0x38($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18802c) {
            ctx->pc = 0x188048u;
            goto label_188048;
        }
    }
    ctx->pc = 0x188034u;
label_188034:
    // 0x188034: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x188034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_188038:
    // 0x188038: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x188038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18803c:
    // 0x18803c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18803cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188040:
    // 0x188040: 0x1000000d  b           . + 4 + (0xD << 2)
label_188044:
    if (ctx->pc == 0x188044u) {
        ctx->pc = 0x188044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188040u;
        // 0x188044: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188048u;
        goto label_188048;
    }
    ctx->pc = 0x188040u;
    {
        const bool branch_taken_0x188040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188040u;
        // 0x188044: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188040) {
            ctx->pc = 0x188078u;
            goto label_188078;
        }
    }
    ctx->pc = 0x188048u;
label_188048:
    // 0x188048: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x188048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18804c:
    // 0x18804c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18804cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_188050:
    // 0x188050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188054:
    // 0x188054: 0x0  nop
    ctx->pc = 0x188054u;
    // NOP
label_188058:
    // 0x188058: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x188058u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18805c:
    // 0x18805c: 0x0  nop
    ctx->pc = 0x18805cu;
    // NOP
label_188060:
    // 0x188060: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_188064:
    if (ctx->pc == 0x188064u) {
        ctx->pc = 0x188064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188060u;
        // 0x188064: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188068u;
        goto label_188068;
    }
    ctx->pc = 0x188060u;
    {
        const bool branch_taken_0x188060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x188064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188060u;
        // 0x188064: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188060) {
            ctx->pc = 0x188078u;
            goto label_188078;
        }
    }
    ctx->pc = 0x188068u;
label_188068:
    // 0x188068: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x188068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18806c:
    // 0x18806c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18806cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188070:
    // 0x188070: 0x10000001  b           . + 4 + (0x1 << 2)
label_188074:
    if (ctx->pc == 0x188074u) {
        ctx->pc = 0x188074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188070u;
        // 0x188074: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188078u;
        goto label_188078;
    }
    ctx->pc = 0x188070u;
    {
        const bool branch_taken_0x188070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188070u;
        // 0x188074: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188070) {
            ctx->pc = 0x188078u;
            goto label_188078;
        }
    }
    ctx->pc = 0x188078u;
label_188078:
    // 0x188078: 0xc06d448  jal         func_1B5120
label_18807c:
    if (ctx->pc == 0x18807Cu) {
        ctx->pc = 0x188080u;
        goto label_188080;
    }
    ctx->pc = 0x188078u;
    SET_GPR_U32(ctx, 31, 0x188080u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x188080u;
label_188080:
    // 0x188080: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x188080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_188084:
    // 0x188084: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x188084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188088:
    // 0x188088: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x188088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_18808c:
    // 0x18808c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x18808cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_188090:
    // 0x188090: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188090u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188094:
    // 0x188094: 0x0  nop
    ctx->pc = 0x188094u;
    // NOP
label_188098:
    // 0x188098: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18809c:
    // 0x18809c: 0x0  nop
    ctx->pc = 0x18809cu;
    // NOP
label_1880a0:
    // 0x1880a0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1880a4:
    if (ctx->pc == 0x1880A4u) {
        ctx->pc = 0x1880A8u;
        goto label_1880a8;
    }
    ctx->pc = 0x1880A0u;
    {
        const bool branch_taken_0x1880a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1880a0) {
            ctx->pc = 0x1880BCu;
            goto label_1880bc;
        }
    }
    ctx->pc = 0x1880A8u;
label_1880a8:
    // 0x1880a8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1880a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1880ac:
    // 0x1880ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1880acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1880b0:
    // 0x1880b0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1880b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1880b4:
    // 0x1880b4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1880b8:
    if (ctx->pc == 0x1880B8u) {
        ctx->pc = 0x1880BCu;
        goto label_1880bc;
    }
    ctx->pc = 0x1880B4u;
    {
        const bool branch_taken_0x1880b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1880b4) {
            ctx->pc = 0x1880F4u;
            goto label_1880f4;
        }
    }
    ctx->pc = 0x1880BCu;
label_1880bc:
    // 0x1880bc: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x1880bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1880c0:
    // 0x1880c0: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x1880c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1880c4:
    // 0x1880c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1880c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1880c8:
    // 0x1880c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1880c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1880cc:
    // 0x1880cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1880ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1880d0:
    // 0x1880d0: 0x0  nop
    ctx->pc = 0x1880d0u;
    // NOP
label_1880d4:
    // 0x1880d4: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x1880d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
label_1880d8:
    // 0x1880d8: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x1880d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1880dc:
    // 0x1880dc: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x1880dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1880e0:
    // 0x1880e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1880e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1880e4:
    // 0x1880e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1880e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1880e8:
    // 0x1880e8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1880e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1880ec:
    // 0x1880ec: 0x100001cd  b           . + 4 + (0x1CD << 2)
label_1880f0:
    if (ctx->pc == 0x1880F0u) {
        ctx->pc = 0x1880F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880ECu;
        // 0x1880f0: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880F4u;
        goto label_1880f4;
    }
    ctx->pc = 0x1880ECu;
    {
        const bool branch_taken_0x1880ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880ECu;
        // 0x1880f0: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880ec) {
            ctx->pc = 0x188824u;
            { ctx->pc = 0x188824; return; }
        }
    }
    ctx->pc = 0x1880F4u;
label_1880f4:
    // 0x1880f4: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1880f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_1880f8:
    // 0x1880f8: 0x100001ca  b           . + 4 + (0x1CA << 2)
label_1880fc:
    if (ctx->pc == 0x1880FCu) {
        ctx->pc = 0x1880FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880F8u;
        // 0x1880fc: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188100u;
        goto label_188100;
    }
    ctx->pc = 0x1880F8u;
    {
        const bool branch_taken_0x1880f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880F8u;
        // 0x1880fc: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880f8) {
            ctx->pc = 0x188824u;
            { ctx->pc = 0x188824; return; }
        }
    }
    ctx->pc = 0x188100u;
label_188100:
    // 0x188100: 0x92260244  lbu         $a2, 0x244($s1)
    ctx->pc = 0x188100u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 580)));
label_188104:
    // 0x188104: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x188104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_188108:
    // 0x188108: 0x2442aec4  addiu       $v0, $v0, -0x513C
    ctx->pc = 0x188108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946500));
label_18810c:
    // 0x18810c: 0xc6210260  lwc1        $f1, 0x260($s1)
    ctx->pc = 0x18810cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188110:
    // 0x188110: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x188110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_188114:
    // 0x188114: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x188114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_188118:
    // 0x188118: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x188118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_18811c:
    // 0x18811c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_188120:
    // 0x188120: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x188120u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_188124:
    // 0x188124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188128:
    // 0x188128: 0x0  nop
    ctx->pc = 0x188128u;
    // NOP
label_18812c:
    // 0x18812c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18812cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_188130:
    // 0x188130: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x188130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_188134:
    // 0x188134: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188138:
    // 0x188138: 0x0  nop
    ctx->pc = 0x188138u;
    // NOP
label_18813c:
    // 0x18813c: 0x4500009b  bc1f        . + 4 + (0x9B << 2)
label_188140:
    if (ctx->pc == 0x188140u) {
        ctx->pc = 0x188144u;
        goto label_188144;
    }
    ctx->pc = 0x18813Cu;
    {
        const bool branch_taken_0x18813c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18813c) {
            ctx->pc = 0x1883ACu;
            goto label_1883ac;
        }
    }
    ctx->pc = 0x188144u;
label_188144:
    // 0x188144: 0xc0623cc  jal         func_188F30
label_188148:
    if (ctx->pc == 0x188148u) {
        ctx->pc = 0x18814Cu;
        goto label_18814c;
    }
    ctx->pc = 0x188144u;
    SET_GPR_U32(ctx, 31, 0x18814Cu);
    ctx->pc = 0x188F30u;
    { ctx->pc = 0x188f30; return; }
    ctx->pc = 0x18814Cu;
label_18814c:
    // 0x18814c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_188150:
    if (ctx->pc == 0x188150u) {
        ctx->pc = 0x188150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18814Cu;
        // 0x188150: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188154u;
        goto label_188154;
    }
    ctx->pc = 0x18814Cu;
    {
        const bool branch_taken_0x18814c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18814Cu;
        // 0x188150: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18814c) {
            ctx->pc = 0x18825Cu;
            goto label_18825c;
        }
    }
    ctx->pc = 0x188154u;
label_188154:
    // 0x188154: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x188154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188158:
    // 0x188158: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x188158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18815c:
    // 0x18815c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18815cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_188160:
    // 0x188160: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188160u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_188164:
    // 0x188164: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x188164u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_188168:
    // 0x188168: 0x0  nop
    ctx->pc = 0x188168u;
    // NOP
label_18816c:
    // 0x18816c: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x18816cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
label_188170:
    // 0x188170: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x188170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188174:
    // 0x188174: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x188174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188178:
    // 0x188178: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188178u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18817c:
    // 0x18817c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18817cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_188180:
    // 0x188180: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x188180u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_188184:
    // 0x188184: 0x0  nop
    ctx->pc = 0x188184u;
    // NOP
label_188188:
    // 0x188188: 0xa623019e  sh          $v1, 0x19E($s1)
    ctx->pc = 0x188188u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
label_18818c:
    // 0x18818c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x18818cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_188190:
    // 0x188190: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x188190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_188194:
    // 0x188194: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x188194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_188198:
    // 0x188198: 0x106001a2  beqz        $v1, . + 4 + (0x1A2 << 2)
label_18819c:
    if (ctx->pc == 0x18819Cu) {
        ctx->pc = 0x1881A0u;
        goto label_1881a0;
    }
    ctx->pc = 0x188198u;
    {
        const bool branch_taken_0x188198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188198) {
            ctx->pc = 0x188824u;
            { ctx->pc = 0x188824; return; }
        }
    }
    ctx->pc = 0x1881A0u;
label_1881a0:
    // 0x1881a0: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x1881a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_1881a4:
    // 0x1881a4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1881a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1881a8:
    // 0x1881a8: 0xc08f0cc  jal         func_23C330
label_1881ac:
    if (ctx->pc == 0x1881ACu) {
        ctx->pc = 0x1881ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1881A8u;
        // 0x1881ac: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1881B0u;
        goto label_1881b0;
    }
    ctx->pc = 0x1881A8u;
    SET_GPR_U32(ctx, 31, 0x1881B0u);
    ctx->pc = 0x1881ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1881A8u;
    // 0x1881ac: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1881B0u;
label_1881b0:
    // 0x1881b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1881b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1881b4:
    // 0x1881b4: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1881b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_1881b8:
    // 0x1881b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1881b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1881bc:
    // 0x1881bc: 0x92250230  lbu         $a1, 0x230($s1)
    ctx->pc = 0x1881bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
label_1881c0:
    // 0x1881c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1881c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1881c4:
    // 0x1881c4: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x1881c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
label_1881c8:
    // 0x1881c8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1881c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1881cc:
    // 0x1881cc: 0x24632b15  addiu       $v1, $v1, 0x2B15
    ctx->pc = 0x1881ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11029));
label_1881d0:
    // 0x1881d0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1881d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1881d4:
    // 0x1881d4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1881d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1881d8:
    // 0x1881d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1881d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1881dc:
    // 0x1881dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1881dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1881e0:
    // 0x1881e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1881e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1881e4:
    // 0x1881e4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1881e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1881e8:
    // 0x1881e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1881e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1881ec:
    // 0x1881ec: 0x0  nop
    ctx->pc = 0x1881ecu;
    // NOP
label_1881f0:
    // 0x1881f0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1881f0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1881f4:
    // 0x1881f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1881f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1881f8:
    // 0x1881f8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1881f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1881fc:
    // 0x1881fc: 0x0  nop
    ctx->pc = 0x1881fcu;
    // NOP
label_188200:
    // 0x188200: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_188204:
    // 0x188204: 0xa6230224  sh          $v1, 0x224($s1)
    ctx->pc = 0x188204u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
label_188208:
    // 0x188208: 0x9224023d  lbu         $a0, 0x23D($s1)
    ctx->pc = 0x188208u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_18820c:
    // 0x18820c: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x18820cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_188210:
    // 0x188210: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_188214:
    if (ctx->pc == 0x188214u) {
        ctx->pc = 0x188214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188210u;
        // 0x188214: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188218u;
        goto label_188218;
    }
    ctx->pc = 0x188210u;
    {
        const bool branch_taken_0x188210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188210u;
        // 0x188214: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188210) {
            ctx->pc = 0x188228u;
            goto label_188228;
        }
    }
    ctx->pc = 0x188218u;
label_188218:
    // 0x188218: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x188218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_18821c:
    // 0x18821c: 0x34630401  ori         $v1, $v1, 0x401
    ctx->pc = 0x18821cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1025);
label_188220:
    // 0x188220: 0x1000000a  b           . + 4 + (0xA << 2)
label_188224:
    if (ctx->pc == 0x188224u) {
        ctx->pc = 0x188224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188220u;
        // 0x188224: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188228u;
        goto label_188228;
    }
    ctx->pc = 0x188220u;
    {
        const bool branch_taken_0x188220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188220u;
        // 0x188224: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188220) {
            ctx->pc = 0x18824Cu;
            goto label_18824c;
        }
    }
    ctx->pc = 0x188228u;
label_188228:
    // 0x188228: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_18822c:
    if (ctx->pc == 0x18822Cu) {
        ctx->pc = 0x188230u;
        goto label_188230;
    }
    ctx->pc = 0x188228u;
    {
        const bool branch_taken_0x188228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188228) {
            ctx->pc = 0x188240u;
            goto label_188240;
        }
    }
    ctx->pc = 0x188230u;
label_188230:
    // 0x188230: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x188230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_188234:
    // 0x188234: 0x34630802  ori         $v1, $v1, 0x802
    ctx->pc = 0x188234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2050);
label_188238:
    // 0x188238: 0x10000004  b           . + 4 + (0x4 << 2)
label_18823c:
    if (ctx->pc == 0x18823Cu) {
        ctx->pc = 0x18823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188238u;
        // 0x18823c: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188240u;
        goto label_188240;
    }
    ctx->pc = 0x188238u;
    {
        const bool branch_taken_0x188238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188238u;
        // 0x18823c: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188238) {
            ctx->pc = 0x18824Cu;
            goto label_18824c;
        }
    }
    ctx->pc = 0x188240u;
label_188240:
    // 0x188240: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x188240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_188244:
    // 0x188244: 0x34631004  ori         $v1, $v1, 0x1004
    ctx->pc = 0x188244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4100);
label_188248:
    // 0x188248: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x188248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
label_18824c:
    // 0x18824c: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x18824cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_188250:
    // 0x188250: 0x3063008f  andi        $v1, $v1, 0x8F
    ctx->pc = 0x188250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)143);
label_188254:
    // 0x188254: 0x10000173  b           . + 4 + (0x173 << 2)
label_188258:
    if (ctx->pc == 0x188258u) {
        ctx->pc = 0x188258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188254u;
        // 0x188258: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18825Cu;
        goto label_18825c;
    }
    ctx->pc = 0x188254u;
    {
        const bool branch_taken_0x188254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188254u;
        // 0x188258: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188254) {
            ctx->pc = 0x188824u;
            { ctx->pc = 0x188824; return; }
        }
    }
    ctx->pc = 0x18825Cu;
label_18825c:
    // 0x18825c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x18825cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_188260:
    // 0x188260: 0xa6240224  sh          $a0, 0x224($s1)
    ctx->pc = 0x188260u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 4));
label_188264:
    // 0x188264: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x188264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_188268:
    // 0x188268: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x188268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_18826c:
    // 0x18826c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18826cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_188270:
    // 0x188270: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x188270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
label_188274:
    // 0x188274: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x188274u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_188278:
    // 0x188278: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x188278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_18827c:
    // 0x18827c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_188280:
    if (ctx->pc == 0x188280u) {
        ctx->pc = 0x188280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18827Cu;
        // 0x188280: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188284u;
        goto label_188284;
    }
    ctx->pc = 0x18827Cu;
    {
        const bool branch_taken_0x18827c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18827Cu;
        // 0x188280: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18827c) {
            ctx->pc = 0x188288u;
            goto label_188288;
        }
    }
    ctx->pc = 0x188284u;
label_188284:
    // 0x188284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188288:
    // 0x188288: 0x14600166  bnez        $v1, . + 4 + (0x166 << 2)
label_18828c:
    if (ctx->pc == 0x18828Cu) {
        ctx->pc = 0x188290u;
        goto label_188290;
    }
    ctx->pc = 0x188288u;
    {
        const bool branch_taken_0x188288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188288) {
            ctx->pc = 0x188824u;
            { ctx->pc = 0x188824; return; }
        }
    }
    ctx->pc = 0x188290u;
label_188290:
    // 0x188290: 0x92230232  lbu         $v1, 0x232($s1)
    ctx->pc = 0x188290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
label_188294:
    // 0x188294: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x188294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188298:
    // 0x188298: 0x14660016  bne         $v1, $a2, . + 4 + (0x16 << 2)
label_18829c:
    if (ctx->pc == 0x18829Cu) {
        ctx->pc = 0x1882A0u;
        goto label_1882a0;
    }
    ctx->pc = 0x188298u;
    {
        const bool branch_taken_0x188298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x188298) {
            ctx->pc = 0x1882F4u;
            goto label_1882f4;
        }
    }
    ctx->pc = 0x1882A0u;
label_1882a0:
    // 0x1882a0: 0x92240238  lbu         $a0, 0x238($s1)
    ctx->pc = 0x1882a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 568)));
label_1882a4:
    // 0x1882a4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1882a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1882a8:
    // 0x1882a8: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1882a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1882ac:
    // 0x1882ac: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x1882acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
label_1882b0:
    // 0x1882b0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1882b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1882b4:
    // 0x1882b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1882b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1882b8:
    // 0x1882b8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1882b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1882bc:
    // 0x1882bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1882bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1882c0:
    // 0x1882c0: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x1882c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_1882c4:
    // 0x1882c4: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x1882c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_1882c8:
    // 0x1882c8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1882cc:
    if (ctx->pc == 0x1882CCu) {
        ctx->pc = 0x1882D0u;
        goto label_1882d0;
    }
    ctx->pc = 0x1882C8u;
    {
        const bool branch_taken_0x1882c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1882c8) {
            ctx->pc = 0x1882F4u;
            goto label_1882f4;
        }
    }
    ctx->pc = 0x1882D0u;
label_1882d0:
    // 0x1882d0: 0x9084006b  lbu         $a0, 0x6B($a0)
    ctx->pc = 0x1882d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
label_1882d4:
    // 0x1882d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1882d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1882d8:
    // 0x1882d8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_1882dc:
    if (ctx->pc == 0x1882DCu) {
        ctx->pc = 0x1882DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882D8u;
        // 0x1882dc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882E0u;
        goto label_1882e0;
    }
    ctx->pc = 0x1882D8u;
    {
        const bool branch_taken_0x1882d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1882DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882D8u;
        // 0x1882dc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882d8) {
            ctx->pc = 0x1882F4u;
            goto label_1882f4;
        }
    }
    ctx->pc = 0x1882E0u;
label_1882e0:
    // 0x1882e0: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1882e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1882e4:
    // 0x1882e4: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x1882e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1882e8:
    // 0x1882e8: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_1882ec:
    if (ctx->pc == 0x1882ECu) {
        ctx->pc = 0x1882F0u;
        goto label_1882f0;
    }
    ctx->pc = 0x1882E8u;
    {
        const bool branch_taken_0x1882e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1882e8) {
            ctx->pc = 0x1882F4u;
            goto label_1882f4;
        }
    }
    ctx->pc = 0x1882F0u;
label_1882f0:
    // 0x1882f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1882f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1882f4:
    // 0x1882f4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1882f8:
    if (ctx->pc == 0x1882F8u) {
        ctx->pc = 0x1882FCu;
        goto label_1882fc;
    }
    ctx->pc = 0x1882F4u;
    {
        const bool branch_taken_0x1882f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1882f4) {
            ctx->pc = 0x188318u;
            goto label_188318;
        }
    }
    ctx->pc = 0x1882FCu;
label_1882fc:
    // 0x1882fc: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x1882fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_188300:
    // 0x188300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x188300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_188304:
    // 0x188304: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x188304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_188308:
    // 0x188308: 0xc062948  jal         func_18A520
label_18830c:
    if (ctx->pc == 0x18830Cu) {
        ctx->pc = 0x18830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188308u;
        // 0x18830c: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188310u;
        goto label_188310;
    }
    ctx->pc = 0x188308u;
    SET_GPR_U32(ctx, 31, 0x188310u);
    ctx->pc = 0x18830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188308u;
    // 0x18830c: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    { ctx->pc = 0x18a520; return; }
    ctx->pc = 0x188310u;
label_188310:
    // 0x188310: 0x10000009  b           . + 4 + (0x9 << 2)
label_188314:
    if (ctx->pc == 0x188314u) {
        ctx->pc = 0x188314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188310u;
        // 0x188314: 0x86230224  lh          $v1, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188318u;
        goto label_188318;
    }
    ctx->pc = 0x188310u;
    {
        const bool branch_taken_0x188310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188310u;
        // 0x188314: 0x86230224  lh          $v1, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188310) {
            ctx->pc = 0x188338u;
            goto label_188338;
        }
    }
    ctx->pc = 0x188318u;
label_188318:
    // 0x188318: 0x8e240194  lw          $a0, 0x194($s1)
    ctx->pc = 0x188318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_18831c:
    // 0x18831c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x18831cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_188320:
    // 0x188320: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x188320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_188324:
    // 0x188324: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x188324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_188328:
    // 0x188328: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x188328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
label_18832c:
    // 0x18832c: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x18832cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_188330:
    // 0x188330: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x188330u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
label_188334:
    // 0x188334: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x188334u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_188338:
    // 0x188338: 0x1c60013a  bgtz        $v1, . + 4 + (0x13A << 2)
label_18833c:
    if (ctx->pc == 0x18833Cu) {
        ctx->pc = 0x188340u;
        goto label_188340;
    }
    ctx->pc = 0x188338u;
    {
        const bool branch_taken_0x188338 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x188338) {
            ctx->pc = 0x188824u;
            { ctx->pc = 0x188824; return; }
        }
    }
    ctx->pc = 0x188340u;
label_188340:
    // 0x188340: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x188340u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_188344:
    // 0x188344: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x188344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_188348:
    // 0x188348: 0xc08f0cc  jal         func_23C330
label_18834c:
    if (ctx->pc == 0x18834Cu) {
        ctx->pc = 0x18834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188348u;
        // 0x18834c: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188350u;
        goto label_188350;
    }
    ctx->pc = 0x188348u;
    SET_GPR_U32(ctx, 31, 0x188350u);
    ctx->pc = 0x18834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188348u;
    // 0x18834c: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x188350u;
label_188350:
    // 0x188350: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x188350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_188354:
    // 0x188354: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x188354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_188358:
    // 0x188358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18835c:
    // 0x18835c: 0x92250230  lbu         $a1, 0x230($s1)
    ctx->pc = 0x18835cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
label_188360:
    // 0x188360: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x188360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_188364:
    // 0x188364: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x188364u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
label_188368:
    // 0x188368: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x188368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_18836c:
    // 0x18836c: 0x24632b15  addiu       $v1, $v1, 0x2B15
    ctx->pc = 0x18836cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11029));
label_188370:
    // 0x188370: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x188370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_188374:
    // 0x188374: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x188374u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_188378:
    // 0x188378: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x188378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_18837c:
    // 0x18837c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18837cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_188380:
    // 0x188380: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_188384:
    // 0x188384: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x188384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_188388:
    // 0x188388: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x188388u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18838c:
    // 0x18838c: 0x0  nop
    ctx->pc = 0x18838cu;
    // NOP
label_188390:
    // 0x188390: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x188390u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_188394:
    // 0x188394: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188394u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_188398:
    // 0x188398: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x188398u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_18839c:
    // 0x18839c: 0x0  nop
    ctx->pc = 0x18839cu;
    // NOP
label_1883a0:
    // 0x1883a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1883a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1883a4:
    // 0x1883a4: 0x1000011f  b           . + 4 + (0x11F << 2)
label_1883a8:
    if (ctx->pc == 0x1883A8u) {
        ctx->pc = 0x1883A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883A4u;
        // 0x1883a8: 0xa6230224  sh          $v1, 0x224($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883ACu;
        goto label_1883ac;
    }
    ctx->pc = 0x1883A4u;
    {
        const bool branch_taken_0x1883a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1883A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883A4u;
        // 0x1883a8: 0xa6230224  sh          $v1, 0x224($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883a4) {
            ctx->pc = 0x188824u;
            { ctx->pc = 0x188824; return; }
        }
    }
    ctx->pc = 0x1883ACu;
label_1883ac:
    // 0x1883ac: 0xc0626d0  jal         func_189B40
label_1883b0:
    if (ctx->pc == 0x1883B0u) {
        ctx->pc = 0x1883B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883ACu;
        // 0x1883b0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883B4u;
        goto label_1883b4;
    }
    ctx->pc = 0x1883ACu;
    SET_GPR_U32(ctx, 31, 0x1883B4u);
    ctx->pc = 0x1883B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883ACu;
    // 0x1883b0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189B40u;
    { ctx->pc = 0x189b40; return; }
    ctx->pc = 0x1883B4u;
label_1883b4:
    // 0x1883b4: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_1883b8:
    if (ctx->pc == 0x1883B8u) {
        ctx->pc = 0x1883BCu;
        goto label_1883bc;
    }
    ctx->pc = 0x1883B4u;
    {
        const bool branch_taken_0x1883b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1883b4) {
            ctx->pc = 0x188538u;
            goto label_188538;
        }
    }
    ctx->pc = 0x1883BCu;
label_1883bc:
    // 0x1883bc: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x1883bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_1883c0:
    // 0x1883c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1883c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1883c4:
    // 0x1883c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1883c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1883c8:
    // 0x1883c8: 0xc062948  jal         func_18A520
label_1883cc:
    if (ctx->pc == 0x1883CCu) {
        ctx->pc = 0x1883CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883C8u;
        // 0x1883cc: 0xae220194  sw          $v0, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883D0u;
        goto label_1883d0;
    }
    ctx->pc = 0x1883C8u;
    SET_GPR_U32(ctx, 31, 0x1883D0u);
    ctx->pc = 0x1883CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883C8u;
    // 0x1883cc: 0xae220194  sw          $v0, 0x194($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    { ctx->pc = 0x18a520; return; }
    ctx->pc = 0x1883D0u;
label_1883d0:
    // 0x1883d0: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x1883d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_1883d4:
    // 0x1883d4: 0x26240264  addiu       $a0, $s1, 0x264
    ctx->pc = 0x1883d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 612));
label_1883d8:
    // 0x1883d8: 0xc0439e8  jal         func_10E7A0
label_1883dc:
    if (ctx->pc == 0x1883DCu) {
        ctx->pc = 0x1883DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883D8u;
        // 0x1883dc: 0x26250150  addiu       $a1, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883E0u;
        goto label_1883e0;
    }
    ctx->pc = 0x1883D8u;
    SET_GPR_U32(ctx, 31, 0x1883E0u);
    ctx->pc = 0x1883DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883D8u;
    // 0x1883dc: 0x26250150  addiu       $a1, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x1883D8u, 0x1883E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883E0u;
label_1883e0:
    // 0x1883e0: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
label_1883e4:
    if (ctx->pc == 0x1883E4u) {
        ctx->pc = 0x1883E8u;
        goto label_1883e8;
    }
    ctx->pc = 0x1883E0u;
    {
        const bool branch_taken_0x1883e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1883e0) {
            ctx->pc = 0x188528u;
            goto label_188528;
        }
    }
    ctx->pc = 0x1883E8u;
label_1883e8:
    // 0x1883e8: 0xc6230264  lwc1        $f3, 0x264($s1)
    ctx->pc = 0x1883e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1883ec:
    // 0x1883ec: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1883ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1883f0:
    // 0x1883f0: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x1883f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1883f4:
    // 0x1883f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1883f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1883f8:
    // 0x1883f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1883f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1883fc:
    // 0x1883fc: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x1883fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_188400:
    // 0x188400: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188400u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188404:
    // 0x188404: 0x0  nop
    ctx->pc = 0x188404u;
    // NOP
label_188408:
    // 0x188408: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18840c:
    if (ctx->pc == 0x18840Cu) {
        ctx->pc = 0x18840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188408u;
        // 0x18840c: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188410u;
        goto label_188410;
    }
    ctx->pc = 0x188408u;
    {
        const bool branch_taken_0x188408 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188408u;
        // 0x18840c: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188408) {
            ctx->pc = 0x188424u;
            goto label_188424;
        }
    }
    ctx->pc = 0x188410u;
label_188410:
    // 0x188410: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x188410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_188414:
    // 0x188414: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x188414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_188418:
    // 0x188418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18841c:
    // 0x18841c: 0x1000000d  b           . + 4 + (0xD << 2)
label_188420:
    if (ctx->pc == 0x188420u) {
        ctx->pc = 0x188420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18841Cu;
        // 0x188420: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188424u;
        goto label_188424;
    }
    ctx->pc = 0x18841Cu;
    {
        const bool branch_taken_0x18841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18841Cu;
        // 0x188420: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18841c) {
            ctx->pc = 0x188454u;
            goto label_188454;
        }
    }
    ctx->pc = 0x188424u;
label_188424:
    // 0x188424: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x188424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_188428:
    // 0x188428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18842c:
    // 0x18842c: 0x0  nop
    ctx->pc = 0x18842cu;
    // NOP
label_188430:
    // 0x188430: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188434:
    // 0x188434: 0x0  nop
    ctx->pc = 0x188434u;
    // NOP
label_188438:
    // 0x188438: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_18843c:
    if (ctx->pc == 0x18843Cu) {
        ctx->pc = 0x188440u;
        goto label_188440;
    }
    ctx->pc = 0x188438u;
    {
        const bool branch_taken_0x188438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188438) {
            ctx->pc = 0x188454u;
            goto label_188454;
        }
    }
    ctx->pc = 0x188440u;
label_188440:
    // 0x188440: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x188440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_188444:
    // 0x188444: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x188444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_188448:
    // 0x188448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18844c:
    // 0x18844c: 0x10000001  b           . + 4 + (0x1 << 2)
label_188450:
    if (ctx->pc == 0x188450u) {
        ctx->pc = 0x188450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18844Cu;
        // 0x188450: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188454u;
        goto label_188454;
    }
    ctx->pc = 0x18844Cu;
    {
        const bool branch_taken_0x18844c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18844Cu;
        // 0x188450: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18844c) {
            ctx->pc = 0x188454u;
            goto label_188454;
        }
    }
    ctx->pc = 0x188454u;
label_188454:
    // 0x188454: 0x3c03be32  lui         $v1, 0xBE32
    ctx->pc = 0x188454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48690 << 16));
label_188458:
    // 0x188458: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x188458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
label_18845c:
    // 0x18845c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18845cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188460:
    // 0x188460: 0x0  nop
    ctx->pc = 0x188460u;
    // NOP
label_188464:
    // 0x188464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188468:
    // 0x188468: 0x0  nop
    ctx->pc = 0x188468u;
    // NOP
label_18846c:
    // 0x18846c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_188470:
    if (ctx->pc == 0x188470u) {
        ctx->pc = 0x188470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18846Cu;
        // 0x188470: 0x3c033e32  lui         $v1, 0x3E32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188474u;
        goto label_188474;
    }
    ctx->pc = 0x18846Cu;
    {
        const bool branch_taken_0x18846c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x188470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18846Cu;
        // 0x188470: 0x3c033e32  lui         $v1, 0x3E32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18846c) {
            ctx->pc = 0x188490u;
            goto label_188490;
        }
    }
    ctx->pc = 0x188474u;
label_188474:
    // 0x188474: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x188474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
label_188478:
    // 0x188478: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x188478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
label_18847c:
    // 0x18847c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18847cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188480:
    // 0x188480: 0x0  nop
    ctx->pc = 0x188480u;
    // NOP
label_188484:
    // 0x188484: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x188484u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_188488:
    // 0x188488: 0x1000000c  b           . + 4 + (0xC << 2)
label_18848c:
    if (ctx->pc == 0x18848Cu) {
        ctx->pc = 0x18848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188488u;
        // 0x18848c: 0xe6200044  swc1        $f0, 0x44($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x188490u;
        goto label_188490;
    }
    ctx->pc = 0x188488u;
    {
        const bool branch_taken_0x188488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188488u;
        // 0x18848c: 0xe6200044  swc1        $f0, 0x44($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188488) {
            ctx->pc = 0x1884BCu;
            goto label_1884bc;
        }
    }
    ctx->pc = 0x188490u;
label_188490:
    // 0x188490: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x188490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
label_188494:
    // 0x188494: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188498:
    // 0x188498: 0x0  nop
    ctx->pc = 0x188498u;
    // NOP
label_18849c:
    // 0x18849c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18849cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1884a0:
    // 0x1884a0: 0x0  nop
    ctx->pc = 0x1884a0u;
    // NOP
label_1884a4:
    // 0x1884a4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1884a8:
    if (ctx->pc == 0x1884A8u) {
        ctx->pc = 0x1884ACu;
        goto label_1884ac;
    }
    ctx->pc = 0x1884A4u;
    {
        const bool branch_taken_0x1884a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1884a4) {
            ctx->pc = 0x1884B8u;
            goto label_1884b8;
        }
    }
    ctx->pc = 0x1884ACu;
label_1884ac:
    // 0x1884ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1884acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1884b0:
    // 0x1884b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1884b4:
    if (ctx->pc == 0x1884B4u) {
        ctx->pc = 0x1884B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884B0u;
        // 0x1884b4: 0xe6200044  swc1        $f0, 0x44($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884B8u;
        goto label_1884b8;
    }
    ctx->pc = 0x1884B0u;
    {
        const bool branch_taken_0x1884b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1884B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884B0u;
        // 0x1884b4: 0xe6200044  swc1        $f0, 0x44($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1884b0) {
            ctx->pc = 0x1884BCu;
            goto label_1884bc;
        }
    }
    ctx->pc = 0x1884B8u;
label_1884b8:
    // 0x1884b8: 0xe6230044  swc1        $f3, 0x44($s1)
    ctx->pc = 0x1884b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_1884bc:
    // 0x1884bc: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x1884bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1884c0:
    // 0x1884c0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1884c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1884c4:
    // 0x1884c4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1884c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1884c8:
    // 0x1884c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1884c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1884cc:
    // 0x1884cc: 0x0  nop
    ctx->pc = 0x1884ccu;
    // NOP
label_1884d0:
    // 0x1884d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1884d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1884d4:
    // 0x1884d4: 0x0  nop
    ctx->pc = 0x1884d4u;
    // NOP
label_1884d8:
    // 0x1884d8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1884dc:
    if (ctx->pc == 0x1884DCu) {
        ctx->pc = 0x1884DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884D8u;
        // 0x1884dc: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884E0u;
        goto label_1884e0;
    }
    ctx->pc = 0x1884D8u;
    {
        const bool branch_taken_0x1884d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1884DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884D8u;
        // 0x1884dc: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1884d8) {
            ctx->pc = 0x1884F4u;
            goto label_1884f4;
        }
    }
    ctx->pc = 0x1884E0u;
label_1884e0:
    // 0x1884e0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1884e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_1884e4:
    // 0x1884e4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1884e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1884e8:
    // 0x1884e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1884e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1884ec:
    // 0x1884ec: 0x1000000d  b           . + 4 + (0xD << 2)
label_1884f0:
    if (ctx->pc == 0x1884F0u) {
        ctx->pc = 0x1884F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884ECu;
        // 0x1884f0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884F4u;
        goto label_1884f4;
    }
    ctx->pc = 0x1884ECu;
    {
        const bool branch_taken_0x1884ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1884F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884ECu;
        // 0x1884f0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1884ec) {
            ctx->pc = 0x188524u;
            goto label_188524;
        }
    }
    ctx->pc = 0x1884F4u;
label_1884f4:
    // 0x1884f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1884f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1884f8:
    // 0x1884f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1884f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1884fc:
    // 0x1884fc: 0x0  nop
    ctx->pc = 0x1884fcu;
    // NOP
label_188500:
    // 0x188500: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188504:
    // 0x188504: 0x0  nop
    ctx->pc = 0x188504u;
    // NOP
label_188508:
    // 0x188508: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_18850c:
    if (ctx->pc == 0x18850Cu) {
        ctx->pc = 0x188510u;
        goto label_188510;
    }
    ctx->pc = 0x188508u;
    {
        const bool branch_taken_0x188508 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188508) {
            ctx->pc = 0x188524u;
            goto label_188524;
        }
    }
    ctx->pc = 0x188510u;
label_188510:
    // 0x188510: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x188510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_188514:
    // 0x188514: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x188514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_188518:
    // 0x188518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18851c:
    // 0x18851c: 0x10000001  b           . + 4 + (0x1 << 2)
label_188520:
    if (ctx->pc == 0x188520u) {
        ctx->pc = 0x188520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18851Cu;
        // 0x188520: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188524u;
        goto label_188524;
    }
    ctx->pc = 0x18851Cu;
    {
        const bool branch_taken_0x18851c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18851Cu;
        // 0x188520: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18851c) {
            ctx->pc = 0x188524u;
            goto label_188524;
        }
    }
    ctx->pc = 0x188524u;
label_188524:
    // 0x188524: 0xe6210044  swc1        $f1, 0x44($s1)
    ctx->pc = 0x188524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_188528:
    // 0x188528: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x188528u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_18852c:
    // 0x18852c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x18852cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_188530:
    // 0x188530: 0x100000bc  b           . + 4 + (0xBC << 2)
label_188534:
    if (ctx->pc == 0x188534u) {
        ctx->pc = 0x188534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188530u;
        // 0x188534: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188538u;
        goto label_188538;
    }
    ctx->pc = 0x188530u;
    {
        const bool branch_taken_0x188530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188530u;
        // 0x188534: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188530) {
            ctx->pc = 0x188824u;
            { ctx->pc = 0x188824; return; }
        }
    }
    ctx->pc = 0x188538u;
label_188538:
    // 0x188538: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x188538u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_18853c:
    // 0x18853c: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x18853cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_188540:
    // 0x188540: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_188544:
    if (ctx->pc == 0x188544u) {
        ctx->pc = 0x188544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188540u;
        // 0x188544: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188548u;
        goto label_188548;
    }
    ctx->pc = 0x188540u;
    {
        const bool branch_taken_0x188540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188540u;
        // 0x188544: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188540) {
            ctx->pc = 0x18854Cu;
            goto label_18854c;
        }
    }
    ctx->pc = 0x188548u;
label_188548:
    // 0x188548: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18854c:
    // 0x18854c: 0x146000b5  bnez        $v1, . + 4 + (0xB5 << 2)
label_188550:
    if (ctx->pc == 0x188550u) {
        ctx->pc = 0x188554u;
        goto label_188554;
    }
    ctx->pc = 0x18854Cu;
    {
        const bool branch_taken_0x18854c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18854c) {
            ctx->pc = 0x188824u;
            { ctx->pc = 0x188824; return; }
        }
    }
    ctx->pc = 0x188554u;
label_188554:
    // 0x188554: 0x92220233  lbu         $v0, 0x233($s1)
    ctx->pc = 0x188554u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 563)));
label_188558:
    // 0x188558: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18855c:
    if (ctx->pc == 0x18855Cu) {
        ctx->pc = 0x188560u;
        goto label_188560;
    }
    ctx->pc = 0x188558u;
    {
        const bool branch_taken_0x188558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188558) {
            ctx->pc = 0x188570u;
            goto label_188570;
        }
    }
    ctx->pc = 0x188560u;
label_188560:
    // 0x188560: 0x92230232  lbu         $v1, 0x232($s1)
    ctx->pc = 0x188560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
label_188564:
    // 0x188564: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x188564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_188568:
    // 0x188568: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_18856c:
    if (ctx->pc == 0x18856Cu) {
        ctx->pc = 0x188570u;
        goto label_188570;
    }
    ctx->pc = 0x188568u;
    {
        const bool branch_taken_0x188568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x188568) {
            ctx->pc = 0x188580u;
            goto label_188580;
        }
    }
    ctx->pc = 0x188570u;
label_188570:
    // 0x188570: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x188570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_188574:
    // 0x188574: 0x34424010  ori         $v0, $v0, 0x4010
    ctx->pc = 0x188574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16400);
label_188578:
    // 0x188578: 0x10000006  b           . + 4 + (0x6 << 2)
label_18857c:
    if (ctx->pc == 0x18857Cu) {
        ctx->pc = 0x18857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188578u;
        // 0x18857c: 0xae220194  sw          $v0, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188580u;
        goto label_188580;
    }
    ctx->pc = 0x188578u;
    {
        const bool branch_taken_0x188578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188578u;
        // 0x18857c: 0xae220194  sw          $v0, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188578) {
            ctx->pc = 0x188594u;
            goto label_188594;
        }
    }
    ctx->pc = 0x188580u;
label_188580:
    // 0x188580: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x188580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_188584:
    // 0x188584: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x188584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_188588:
    // 0x188588: 0x34424050  ori         $v0, $v0, 0x4050
    ctx->pc = 0x188588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16464);
label_18858c:
    // 0x18858c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_188590:
    // 0x188590: 0xae220194  sw          $v0, 0x194($s1)
    ctx->pc = 0x188590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
label_188594:
    // 0x188594: 0x26240264  addiu       $a0, $s1, 0x264
    ctx->pc = 0x188594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 612));
label_188598:
    // 0x188598: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x188598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_18859c:
    // 0x18859c: 0xc0439e8  jal         func_10E7A0
label_1885a0:
    if (ctx->pc == 0x1885A0u) {
        ctx->pc = 0x1885A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18859Cu;
        // 0x1885a0: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885A4u;
        goto label_1885a4;
    }
    ctx->pc = 0x18859Cu;
    SET_GPR_U32(ctx, 31, 0x1885A4u);
    ctx->pc = 0x1885A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18859Cu;
    // 0x1885a0: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x18859Cu, 0x1885A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1885A4u;
label_1885a4:
    // 0x1885a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1885a8:
    if (ctx->pc == 0x1885A8u) {
        ctx->pc = 0x1885A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885A4u;
        // 0x1885a8: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885ACu;
        goto label_1885ac;
    }
    ctx->pc = 0x1885A4u;
    {
        const bool branch_taken_0x1885a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1885A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885A4u;
        // 0x1885a8: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885a4) {
            ctx->pc = 0x1885B8u;
            goto label_1885b8;
        }
    }
    ctx->pc = 0x1885ACu;
label_1885ac:
    // 0x1885ac: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x1885acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_1885b0:
    // 0x1885b0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1885b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1885b4:
    // 0x1885b4: 0xa222023d  sb          $v0, 0x23D($s1)
    ctx->pc = 0x1885b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
label_1885b8:
    // 0x1885b8: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x1885b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_1885bc:
    // 0x1885bc: 0xc0439e8  jal         func_10E7A0
label_1885c0:
    if (ctx->pc == 0x1885C0u) {
        ctx->pc = 0x1885C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885BCu;
        // 0x1885c0: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885C4u;
        goto label_1885c4;
    }
    ctx->pc = 0x1885BCu;
    SET_GPR_U32(ctx, 31, 0x1885C4u);
    ctx->pc = 0x1885C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1885BCu;
    // 0x1885c0: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x1885BCu, 0x1885C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1885C4u;
label_1885c4:
    // 0x1885c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1885c8:
    if (ctx->pc == 0x1885C8u) {
        ctx->pc = 0x1885CCu;
        goto label_1885cc;
    }
    ctx->pc = 0x1885C4u;
    {
        const bool branch_taken_0x1885c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1885c4) {
            ctx->pc = 0x1885D4u;
            goto label_1885d4;
        }
    }
    ctx->pc = 0x1885CCu;
label_1885cc:
    // 0x1885cc: 0x10000020  b           . + 4 + (0x20 << 2)
label_1885d0:
    if (ctx->pc == 0x1885D0u) {
        ctx->pc = 0x1885D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885CCu;
        // 0x1885d0: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1885D4u;
        goto label_1885d4;
    }
    ctx->pc = 0x1885CCu;
    {
        const bool branch_taken_0x1885cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1885D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885CCu;
        // 0x1885d0: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885cc) {
            ctx->pc = 0x188650u;
            goto label_188650;
        }
    }
    ctx->pc = 0x1885D4u;
label_1885d4:
    // 0x1885d4: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x1885d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1885d8:
    // 0x1885d8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1885d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1885dc:
    // 0x1885dc: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1885dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1885e0:
    // 0x1885e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1885e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1885e4:
    // 0x1885e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1885e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1885e8:
    // 0x1885e8: 0x0  nop
    ctx->pc = 0x1885e8u;
    // NOP
label_1885ec:
    // 0x1885ec: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x1885ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1885f0:
    // 0x1885f0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1885f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1885f4:
    // 0x1885f4: 0x0  nop
    ctx->pc = 0x1885f4u;
    // NOP
label_1885f8:
    // 0x1885f8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1885fc:
    if (ctx->pc == 0x1885FCu) {
        ctx->pc = 0x1885FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885F8u;
        // 0x1885fc: 0xe7ac003c  swc1        $f12, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x188600u;
        goto label_188600;
    }
    ctx->pc = 0x1885F8u;
    {
        const bool branch_taken_0x1885f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1885FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1885F8u;
        // 0x1885fc: 0xe7ac003c  swc1        $f12, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1885f8) {
            ctx->pc = 0x188614u;
            goto label_188614;
        }
    }
    ctx->pc = 0x188600u;
label_188600:
    // 0x188600: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x188600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_188604:
    // 0x188604: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x188604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_188608:
    // 0x188608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18860c:
    // 0x18860c: 0x1000000d  b           . + 4 + (0xD << 2)
label_188610:
    if (ctx->pc == 0x188610u) {
        ctx->pc = 0x188610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18860Cu;
        // 0x188610: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188614u;
        goto label_188614;
    }
    ctx->pc = 0x18860Cu;
    {
        const bool branch_taken_0x18860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18860Cu;
        // 0x188610: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18860c) {
            ctx->pc = 0x188644u;
            goto label_188644;
        }
    }
    ctx->pc = 0x188614u;
label_188614:
    // 0x188614: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x188614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_188618:
    // 0x188618: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x188618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18861c:
    // 0x18861c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18861cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188620:
    // 0x188620: 0x0  nop
    ctx->pc = 0x188620u;
    // NOP
label_188624:
    // 0x188624: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x188624u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188628:
    // 0x188628: 0x0  nop
    ctx->pc = 0x188628u;
    // NOP
label_18862c:
    // 0x18862c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_188630:
    if (ctx->pc == 0x188630u) {
        ctx->pc = 0x188630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18862Cu;
        // 0x188630: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188634u;
        goto label_188634;
    }
    ctx->pc = 0x18862Cu;
    {
        const bool branch_taken_0x18862c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x188630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18862Cu;
        // 0x188630: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18862c) {
            ctx->pc = 0x188644u;
            goto label_188644;
        }
    }
    ctx->pc = 0x188634u;
label_188634:
    // 0x188634: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x188634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_188638:
    // 0x188638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18863c:
    // 0x18863c: 0x10000001  b           . + 4 + (0x1 << 2)
label_188640:
    if (ctx->pc == 0x188640u) {
        ctx->pc = 0x188640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18863Cu;
        // 0x188640: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188644u;
        goto label_188644;
    }
    ctx->pc = 0x18863Cu;
    {
        const bool branch_taken_0x18863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18863Cu;
        // 0x188640: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18863c) {
            ctx->pc = 0x188644u;
            goto label_188644;
        }
    }
    ctx->pc = 0x188644u;
label_188644:
    // 0x188644: 0xc06d448  jal         func_1B5120
label_188648:
    if (ctx->pc == 0x188648u) {
        ctx->pc = 0x18864Cu;
        goto label_18864c;
    }
    ctx->pc = 0x188644u;
    SET_GPR_U32(ctx, 31, 0x18864Cu);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18864Cu;
label_18864c:
    // 0x18864c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x18864cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_188650:
    // 0x188650: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x188650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188654:
    // 0x188654: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x188654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_188658:
    // 0x188658: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x188658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_18865c:
    // 0x18865c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18865cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_188660:
    // 0x188660: 0x0  nop
    ctx->pc = 0x188660u;
    // NOP
label_188664:
    // 0x188664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188668:
    // 0x188668: 0x0  nop
    ctx->pc = 0x188668u;
    // NOP
label_18866c:
    // 0x18866c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_188670:
    if (ctx->pc == 0x188670u) {
        ctx->pc = 0x188674u;
        goto label_188674;
    }
    ctx->pc = 0x18866Cu;
    {
        const bool branch_taken_0x18866c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18866c) {
            ctx->pc = 0x188688u;
            goto label_188688;
        }
    }
    ctx->pc = 0x188674u;
label_188674:
    // 0x188674: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x188674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_188678:
    // 0x188678: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x188678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18867c:
    // 0x18867c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x18867cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_188680:
    // 0x188680: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_188684:
    if (ctx->pc == 0x188684u) {
        ctx->pc = 0x188688u;
        goto label_188688;
    }
    ctx->pc = 0x188680u;
    {
        const bool branch_taken_0x188680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188680) {
            ctx->pc = 0x1886C0u;
            goto label_1886c0;
        }
    }
    ctx->pc = 0x188688u;
label_188688:
    // 0x188688: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x188688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18868c:
    // 0x18868c: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x18868cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188690:
    // 0x188690: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_188694:
    // 0x188694: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188694u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_188698:
    // 0x188698: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x188698u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18869c:
    // 0x18869c: 0x0  nop
    ctx->pc = 0x18869cu;
    // NOP
label_1886a0:
    // 0x1886a0: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x1886a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
label_1886a4:
    // 0x1886a4: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x1886a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1886a8:
    // 0x1886a8: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x1886a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1886ac:
    // 0x1886ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1886acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1886b0:
    // 0x1886b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1886b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1886b4:
    // 0x1886b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1886b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1886b8:
    // 0x1886b8: 0x1000005a  b           . + 4 + (0x5A << 2)
label_1886bc:
    if (ctx->pc == 0x1886BCu) {
        ctx->pc = 0x1886BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886B8u;
        // 0x1886bc: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1886C0u;
        goto label_1886c0;
    }
    ctx->pc = 0x1886B8u;
    {
        const bool branch_taken_0x1886b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1886BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886B8u;
        // 0x1886bc: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886b8) {
            ctx->pc = 0x188824u;
            { ctx->pc = 0x188824; return; }
        }
    }
    ctx->pc = 0x1886C0u;
label_1886c0:
    // 0x1886c0: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x1886c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_1886c4:
    // 0x1886c4: 0x10000057  b           . + 4 + (0x57 << 2)
label_1886c8:
    if (ctx->pc == 0x1886C8u) {
        ctx->pc = 0x1886C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886C4u;
        // 0x1886c8: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1886CCu;
        goto label_1886cc;
    }
    ctx->pc = 0x1886C4u;
    {
        const bool branch_taken_0x1886c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1886C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886C4u;
        // 0x1886c8: 0xa620019c  sh          $zero, 0x19C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886c4) {
            ctx->pc = 0x188824u;
            { ctx->pc = 0x188824; return; }
        }
    }
    ctx->pc = 0x1886CCu;
label_1886cc:
    // 0x1886cc: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x1886ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
label_1886d0:
    // 0x1886d0: 0x18600054  blez        $v1, . + 4 + (0x54 << 2)
label_1886d4:
    if (ctx->pc == 0x1886D4u) {
        ctx->pc = 0x1886D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886D0u;
        // 0x1886d4: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1886D8u;
        goto label_1886d8;
    }
    ctx->pc = 0x1886D0u;
    {
        const bool branch_taken_0x1886d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1886D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886D0u;
        // 0x1886d4: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886d0) {
            ctx->pc = 0x188824u;
            { ctx->pc = 0x188824; return; }
        }
    }
    ctx->pc = 0x1886D8u;
label_1886d8:
    // 0x1886d8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1886d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1886dc:
    // 0x1886dc: 0xa6240224  sh          $a0, 0x224($s1)
    ctx->pc = 0x1886dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 4));
label_1886e0:
    // 0x1886e0: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1886e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1886e4:
    // 0x1886e4: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x1886e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_1886e8:
    // 0x1886e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1886e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1886ec:
    // 0x1886ec: 0xae230194  sw          $v1, 0x194($s1)
    ctx->pc = 0x1886ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
label_1886f0:
    // 0x1886f0: 0x8623003c  lh          $v1, 0x3C($s1)
    ctx->pc = 0x1886f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
label_1886f4:
    // 0x1886f4: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x1886f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_1886f8:
    // 0x1886f8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1886fc:
    if (ctx->pc == 0x1886FCu) {
        ctx->pc = 0x1886FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886F8u;
        // 0x1886fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188700u;
        goto label_188700;
    }
    ctx->pc = 0x1886F8u;
    {
        const bool branch_taken_0x1886f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1886FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886F8u;
        // 0x1886fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886f8) {
            ctx->pc = 0x188704u;
            goto label_188704;
        }
    }
    ctx->pc = 0x188700u;
label_188700:
    // 0x188700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188704:
    // 0x188704: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
label_188708:
    if (ctx->pc == 0x188708u) {
        ctx->pc = 0x18870Cu;
        goto label_18870c;
    }
    ctx->pc = 0x188704u;
    {
        const bool branch_taken_0x188704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188704) {
            ctx->pc = 0x188824u;
            { ctx->pc = 0x188824; return; }
        }
    }
    ctx->pc = 0x18870Cu;
label_18870c:
    // 0x18870c: 0x92230232  lbu         $v1, 0x232($s1)
    ctx->pc = 0x18870cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
label_188710:
    // 0x188710: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x188710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188714:
    // 0x188714: 0x14660016  bne         $v1, $a2, . + 4 + (0x16 << 2)
label_188718:
    if (ctx->pc == 0x188718u) {
        ctx->pc = 0x18871Cu;
        goto label_18871c;
    }
    ctx->pc = 0x188714u;
    {
        const bool branch_taken_0x188714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x188714) {
            ctx->pc = 0x188770u;
            { ctx->pc = 0x188770; return; }
        }
    }
    ctx->pc = 0x18871Cu;
label_18871c:
    // 0x18871c: 0x92240238  lbu         $a0, 0x238($s1)
    ctx->pc = 0x18871cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 568)));
label_188720:
    // 0x188720: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x188720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_188724:
    // 0x188724: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x188724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_188728:
    // 0x188728: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x188728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
label_18872c:
    // 0x18872c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18872cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_188730:
    // 0x188730: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x188730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_188734:
    // 0x188734: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x188734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_188738:
    // 0x188738: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18873c:
    // 0x18873c: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x18873cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
    ctx->pc = 0x188740u;
    return;
}

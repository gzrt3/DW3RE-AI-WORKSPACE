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


void FUN_0014eba0_part20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x158010u: goto label_158010;
        case 0x158014u: goto label_158014;
        case 0x158018u: goto label_158018;
        case 0x15801cu: goto label_15801c;
        case 0x158020u: goto label_158020;
        case 0x158024u: goto label_158024;
        case 0x158028u: goto label_158028;
        case 0x15802cu: goto label_15802c;
        case 0x158030u: goto label_158030;
        case 0x158034u: goto label_158034;
        case 0x158038u: goto label_158038;
        case 0x15803cu: goto label_15803c;
        case 0x158040u: goto label_158040;
        case 0x158044u: goto label_158044;
        case 0x158048u: goto label_158048;
        case 0x15804cu: goto label_15804c;
        case 0x158050u: goto label_158050;
        case 0x158054u: goto label_158054;
        case 0x158058u: goto label_158058;
        case 0x15805cu: goto label_15805c;
        case 0x158060u: goto label_158060;
        case 0x158064u: goto label_158064;
        case 0x158068u: goto label_158068;
        case 0x15806cu: goto label_15806c;
        case 0x158070u: goto label_158070;
        case 0x158074u: goto label_158074;
        case 0x158078u: goto label_158078;
        case 0x15807cu: goto label_15807c;
        case 0x158080u: goto label_158080;
        case 0x158084u: goto label_158084;
        case 0x158088u: goto label_158088;
        case 0x15808cu: goto label_15808c;
        case 0x158090u: goto label_158090;
        case 0x158094u: goto label_158094;
        case 0x158098u: goto label_158098;
        case 0x15809cu: goto label_15809c;
        case 0x1580a0u: goto label_1580a0;
        case 0x1580a4u: goto label_1580a4;
        case 0x1580a8u: goto label_1580a8;
        case 0x1580acu: goto label_1580ac;
        case 0x1580b0u: goto label_1580b0;
        case 0x1580b4u: goto label_1580b4;
        case 0x1580b8u: goto label_1580b8;
        case 0x1580bcu: goto label_1580bc;
        case 0x1580c0u: goto label_1580c0;
        case 0x1580c4u: goto label_1580c4;
        case 0x1580c8u: goto label_1580c8;
        case 0x1580ccu: goto label_1580cc;
        case 0x1580d0u: goto label_1580d0;
        case 0x1580d4u: goto label_1580d4;
        case 0x1580d8u: goto label_1580d8;
        case 0x1580dcu: goto label_1580dc;
        case 0x1580e0u: goto label_1580e0;
        case 0x1580e4u: goto label_1580e4;
        case 0x1580e8u: goto label_1580e8;
        case 0x1580ecu: goto label_1580ec;
        case 0x1580f0u: goto label_1580f0;
        case 0x1580f4u: goto label_1580f4;
        case 0x1580f8u: goto label_1580f8;
        case 0x1580fcu: goto label_1580fc;
        case 0x158100u: goto label_158100;
        case 0x158104u: goto label_158104;
        case 0x158108u: goto label_158108;
        case 0x15810cu: goto label_15810c;
        case 0x158110u: goto label_158110;
        case 0x158114u: goto label_158114;
        case 0x158118u: goto label_158118;
        case 0x15811cu: goto label_15811c;
        case 0x158120u: goto label_158120;
        case 0x158124u: goto label_158124;
        case 0x158128u: goto label_158128;
        case 0x15812cu: goto label_15812c;
        case 0x158130u: goto label_158130;
        case 0x158134u: goto label_158134;
        case 0x158138u: goto label_158138;
        case 0x15813cu: goto label_15813c;
        case 0x158140u: goto label_158140;
        case 0x158144u: goto label_158144;
        case 0x158148u: goto label_158148;
        case 0x15814cu: goto label_15814c;
        case 0x158150u: goto label_158150;
        case 0x158154u: goto label_158154;
        case 0x158158u: goto label_158158;
        case 0x15815cu: goto label_15815c;
        case 0x158160u: goto label_158160;
        case 0x158164u: goto label_158164;
        case 0x158168u: goto label_158168;
        case 0x15816cu: goto label_15816c;
        case 0x158170u: goto label_158170;
        case 0x158174u: goto label_158174;
        case 0x158178u: goto label_158178;
        case 0x15817cu: goto label_15817c;
        case 0x158180u: goto label_158180;
        case 0x158184u: goto label_158184;
        case 0x158188u: goto label_158188;
        case 0x15818cu: goto label_15818c;
        case 0x158190u: goto label_158190;
        case 0x158194u: goto label_158194;
        case 0x158198u: goto label_158198;
        case 0x15819cu: goto label_15819c;
        case 0x1581a0u: goto label_1581a0;
        case 0x1581a4u: goto label_1581a4;
        case 0x1581a8u: goto label_1581a8;
        case 0x1581acu: goto label_1581ac;
        case 0x1581b0u: goto label_1581b0;
        case 0x1581b4u: goto label_1581b4;
        case 0x1581b8u: goto label_1581b8;
        case 0x1581bcu: goto label_1581bc;
        case 0x1581c0u: goto label_1581c0;
        case 0x1581c4u: goto label_1581c4;
        case 0x1581c8u: goto label_1581c8;
        case 0x1581ccu: goto label_1581cc;
        case 0x1581d0u: goto label_1581d0;
        case 0x1581d4u: goto label_1581d4;
        case 0x1581d8u: goto label_1581d8;
        case 0x1581dcu: goto label_1581dc;
        case 0x1581e0u: goto label_1581e0;
        case 0x1581e4u: goto label_1581e4;
        case 0x1581e8u: goto label_1581e8;
        case 0x1581ecu: goto label_1581ec;
        case 0x1581f0u: goto label_1581f0;
        case 0x1581f4u: goto label_1581f4;
        case 0x1581f8u: goto label_1581f8;
        case 0x1581fcu: goto label_1581fc;
        case 0x158200u: goto label_158200;
        case 0x158204u: goto label_158204;
        case 0x158208u: goto label_158208;
        case 0x15820cu: goto label_15820c;
        case 0x158210u: goto label_158210;
        case 0x158214u: goto label_158214;
        case 0x158218u: goto label_158218;
        case 0x15821cu: goto label_15821c;
        case 0x158220u: goto label_158220;
        case 0x158224u: goto label_158224;
        case 0x158228u: goto label_158228;
        case 0x15822cu: goto label_15822c;
        case 0x158230u: goto label_158230;
        case 0x158234u: goto label_158234;
        case 0x158238u: goto label_158238;
        case 0x15823cu: goto label_15823c;
        case 0x158240u: goto label_158240;
        case 0x158244u: goto label_158244;
        case 0x158248u: goto label_158248;
        case 0x15824cu: goto label_15824c;
        case 0x158250u: goto label_158250;
        case 0x158254u: goto label_158254;
        case 0x158258u: goto label_158258;
        case 0x15825cu: goto label_15825c;
        case 0x158260u: goto label_158260;
        case 0x158264u: goto label_158264;
        case 0x158268u: goto label_158268;
        case 0x15826cu: goto label_15826c;
        case 0x158270u: goto label_158270;
        case 0x158274u: goto label_158274;
        case 0x158278u: goto label_158278;
        case 0x15827cu: goto label_15827c;
        case 0x158280u: goto label_158280;
        case 0x158284u: goto label_158284;
        case 0x158288u: goto label_158288;
        case 0x15828cu: goto label_15828c;
        case 0x158290u: goto label_158290;
        case 0x158294u: goto label_158294;
        case 0x158298u: goto label_158298;
        case 0x15829cu: goto label_15829c;
        case 0x1582a0u: goto label_1582a0;
        case 0x1582a4u: goto label_1582a4;
        case 0x1582a8u: goto label_1582a8;
        case 0x1582acu: goto label_1582ac;
        case 0x1582b0u: goto label_1582b0;
        case 0x1582b4u: goto label_1582b4;
        case 0x1582b8u: goto label_1582b8;
        case 0x1582bcu: goto label_1582bc;
        case 0x1582c0u: goto label_1582c0;
        case 0x1582c4u: goto label_1582c4;
        case 0x1582c8u: goto label_1582c8;
        case 0x1582ccu: goto label_1582cc;
        case 0x1582d0u: goto label_1582d0;
        case 0x1582d4u: goto label_1582d4;
        case 0x1582d8u: goto label_1582d8;
        case 0x1582dcu: goto label_1582dc;
        case 0x1582e0u: goto label_1582e0;
        case 0x1582e4u: goto label_1582e4;
        case 0x1582e8u: goto label_1582e8;
        case 0x1582ecu: goto label_1582ec;
        case 0x1582f0u: goto label_1582f0;
        case 0x1582f4u: goto label_1582f4;
        case 0x1582f8u: goto label_1582f8;
        case 0x1582fcu: goto label_1582fc;
        case 0x158300u: goto label_158300;
        case 0x158304u: goto label_158304;
        case 0x158308u: goto label_158308;
        case 0x15830cu: goto label_15830c;
        case 0x158310u: goto label_158310;
        case 0x158314u: goto label_158314;
        case 0x158318u: goto label_158318;
        case 0x15831cu: goto label_15831c;
        case 0x158320u: goto label_158320;
        case 0x158324u: goto label_158324;
        case 0x158328u: goto label_158328;
        case 0x15832cu: goto label_15832c;
        case 0x158330u: goto label_158330;
        case 0x158334u: goto label_158334;
        case 0x158338u: goto label_158338;
        case 0x15833cu: goto label_15833c;
        case 0x158340u: goto label_158340;
        case 0x158344u: goto label_158344;
        case 0x158348u: goto label_158348;
        case 0x15834cu: goto label_15834c;
        case 0x158350u: goto label_158350;
        case 0x158354u: goto label_158354;
        case 0x158358u: goto label_158358;
        case 0x15835cu: goto label_15835c;
        case 0x158360u: goto label_158360;
        case 0x158364u: goto label_158364;
        case 0x158368u: goto label_158368;
        case 0x15836cu: goto label_15836c;
        case 0x158370u: goto label_158370;
        case 0x158374u: goto label_158374;
        case 0x158378u: goto label_158378;
        case 0x15837cu: goto label_15837c;
        case 0x158380u: goto label_158380;
        case 0x158384u: goto label_158384;
        case 0x158388u: goto label_158388;
        case 0x15838cu: goto label_15838c;
        case 0x158390u: goto label_158390;
        case 0x158394u: goto label_158394;
        case 0x158398u: goto label_158398;
        case 0x15839cu: goto label_15839c;
        case 0x1583a0u: goto label_1583a0;
        case 0x1583a4u: goto label_1583a4;
        case 0x1583a8u: goto label_1583a8;
        case 0x1583acu: goto label_1583ac;
        case 0x1583b0u: goto label_1583b0;
        case 0x1583b4u: goto label_1583b4;
        case 0x1583b8u: goto label_1583b8;
        case 0x1583bcu: goto label_1583bc;
        case 0x1583c0u: goto label_1583c0;
        case 0x1583c4u: goto label_1583c4;
        case 0x1583c8u: goto label_1583c8;
        case 0x1583ccu: goto label_1583cc;
        case 0x1583d0u: goto label_1583d0;
        case 0x1583d4u: goto label_1583d4;
        case 0x1583d8u: goto label_1583d8;
        case 0x1583dcu: goto label_1583dc;
        case 0x1583e0u: goto label_1583e0;
        case 0x1583e4u: goto label_1583e4;
        case 0x1583e8u: goto label_1583e8;
        case 0x1583ecu: goto label_1583ec;
        case 0x1583f0u: goto label_1583f0;
        case 0x1583f4u: goto label_1583f4;
        case 0x1583f8u: goto label_1583f8;
        case 0x1583fcu: goto label_1583fc;
        case 0x158400u: goto label_158400;
        case 0x158404u: goto label_158404;
        case 0x158408u: goto label_158408;
        case 0x15840cu: goto label_15840c;
        case 0x158410u: goto label_158410;
        case 0x158414u: goto label_158414;
        case 0x158418u: goto label_158418;
        case 0x15841cu: goto label_15841c;
        case 0x158420u: goto label_158420;
        case 0x158424u: goto label_158424;
        case 0x158428u: goto label_158428;
        case 0x15842cu: goto label_15842c;
        case 0x158430u: goto label_158430;
        case 0x158434u: goto label_158434;
        case 0x158438u: goto label_158438;
        case 0x15843cu: goto label_15843c;
        case 0x158440u: goto label_158440;
        case 0x158444u: goto label_158444;
        case 0x158448u: goto label_158448;
        case 0x15844cu: goto label_15844c;
        case 0x158450u: goto label_158450;
        case 0x158454u: goto label_158454;
        case 0x158458u: goto label_158458;
        case 0x15845cu: goto label_15845c;
        case 0x158460u: goto label_158460;
        case 0x158464u: goto label_158464;
        case 0x158468u: goto label_158468;
        case 0x15846cu: goto label_15846c;
        case 0x158470u: goto label_158470;
        case 0x158474u: goto label_158474;
        case 0x158478u: goto label_158478;
        case 0x15847cu: goto label_15847c;
        case 0x158480u: goto label_158480;
        case 0x158484u: goto label_158484;
        case 0x158488u: goto label_158488;
        case 0x15848cu: goto label_15848c;
        case 0x158490u: goto label_158490;
        case 0x158494u: goto label_158494;
        case 0x158498u: goto label_158498;
        case 0x15849cu: goto label_15849c;
        case 0x1584a0u: goto label_1584a0;
        case 0x1584a4u: goto label_1584a4;
        case 0x1584a8u: goto label_1584a8;
        case 0x1584acu: goto label_1584ac;
        case 0x1584b0u: goto label_1584b0;
        case 0x1584b4u: goto label_1584b4;
        case 0x1584b8u: goto label_1584b8;
        case 0x1584bcu: goto label_1584bc;
        case 0x1584c0u: goto label_1584c0;
        case 0x1584c4u: goto label_1584c4;
        case 0x1584c8u: goto label_1584c8;
        case 0x1584ccu: goto label_1584cc;
        case 0x1584d0u: goto label_1584d0;
        case 0x1584d4u: goto label_1584d4;
        case 0x1584d8u: goto label_1584d8;
        case 0x1584dcu: goto label_1584dc;
        case 0x1584e0u: goto label_1584e0;
        case 0x1584e4u: goto label_1584e4;
        case 0x1584e8u: goto label_1584e8;
        case 0x1584ecu: goto label_1584ec;
        case 0x1584f0u: goto label_1584f0;
        case 0x1584f4u: goto label_1584f4;
        case 0x1584f8u: goto label_1584f8;
        case 0x1584fcu: goto label_1584fc;
        case 0x158500u: goto label_158500;
        case 0x158504u: goto label_158504;
        case 0x158508u: goto label_158508;
        case 0x15850cu: goto label_15850c;
        case 0x158510u: goto label_158510;
        case 0x158514u: goto label_158514;
        case 0x158518u: goto label_158518;
        case 0x15851cu: goto label_15851c;
        case 0x158520u: goto label_158520;
        case 0x158524u: goto label_158524;
        case 0x158528u: goto label_158528;
        case 0x15852cu: goto label_15852c;
        case 0x158530u: goto label_158530;
        case 0x158534u: goto label_158534;
        case 0x158538u: goto label_158538;
        case 0x15853cu: goto label_15853c;
        case 0x158540u: goto label_158540;
        case 0x158544u: goto label_158544;
        case 0x158548u: goto label_158548;
        case 0x15854cu: goto label_15854c;
        case 0x158550u: goto label_158550;
        case 0x158554u: goto label_158554;
        case 0x158558u: goto label_158558;
        case 0x15855cu: goto label_15855c;
        case 0x158560u: goto label_158560;
        case 0x158564u: goto label_158564;
        case 0x158568u: goto label_158568;
        case 0x15856cu: goto label_15856c;
        case 0x158570u: goto label_158570;
        case 0x158574u: goto label_158574;
        case 0x158578u: goto label_158578;
        case 0x15857cu: goto label_15857c;
        case 0x158580u: goto label_158580;
        case 0x158584u: goto label_158584;
        case 0x158588u: goto label_158588;
        case 0x15858cu: goto label_15858c;
        case 0x158590u: goto label_158590;
        case 0x158594u: goto label_158594;
        case 0x158598u: goto label_158598;
        case 0x15859cu: goto label_15859c;
        case 0x1585a0u: goto label_1585a0;
        case 0x1585a4u: goto label_1585a4;
        case 0x1585a8u: goto label_1585a8;
        case 0x1585acu: goto label_1585ac;
        case 0x1585b0u: goto label_1585b0;
        case 0x1585b4u: goto label_1585b4;
        case 0x1585b8u: goto label_1585b8;
        case 0x1585bcu: goto label_1585bc;
        case 0x1585c0u: goto label_1585c0;
        case 0x1585c4u: goto label_1585c4;
        case 0x1585c8u: goto label_1585c8;
        case 0x1585ccu: goto label_1585cc;
        case 0x1585d0u: goto label_1585d0;
        case 0x1585d4u: goto label_1585d4;
        case 0x1585d8u: goto label_1585d8;
        case 0x1585dcu: goto label_1585dc;
        case 0x1585e0u: goto label_1585e0;
        case 0x1585e4u: goto label_1585e4;
        case 0x1585e8u: goto label_1585e8;
        case 0x1585ecu: goto label_1585ec;
        case 0x1585f0u: goto label_1585f0;
        case 0x1585f4u: goto label_1585f4;
        case 0x1585f8u: goto label_1585f8;
        case 0x1585fcu: goto label_1585fc;
        case 0x158600u: goto label_158600;
        case 0x158604u: goto label_158604;
        case 0x158608u: goto label_158608;
        case 0x15860cu: goto label_15860c;
        case 0x158610u: goto label_158610;
        case 0x158614u: goto label_158614;
        case 0x158618u: goto label_158618;
        case 0x15861cu: goto label_15861c;
        case 0x158620u: goto label_158620;
        case 0x158624u: goto label_158624;
        case 0x158628u: goto label_158628;
        case 0x15862cu: goto label_15862c;
        case 0x158630u: goto label_158630;
        case 0x158634u: goto label_158634;
        case 0x158638u: goto label_158638;
        case 0x15863cu: goto label_15863c;
        case 0x158640u: goto label_158640;
        case 0x158644u: goto label_158644;
        case 0x158648u: goto label_158648;
        case 0x15864cu: goto label_15864c;
        case 0x158650u: goto label_158650;
        case 0x158654u: goto label_158654;
        case 0x158658u: goto label_158658;
        case 0x15865cu: goto label_15865c;
        case 0x158660u: goto label_158660;
        case 0x158664u: goto label_158664;
        case 0x158668u: goto label_158668;
        case 0x15866cu: goto label_15866c;
        case 0x158670u: goto label_158670;
        case 0x158674u: goto label_158674;
        case 0x158678u: goto label_158678;
        case 0x15867cu: goto label_15867c;
        case 0x158680u: goto label_158680;
        case 0x158684u: goto label_158684;
        case 0x158688u: goto label_158688;
        case 0x15868cu: goto label_15868c;
        case 0x158690u: goto label_158690;
        case 0x158694u: goto label_158694;
        case 0x158698u: goto label_158698;
        case 0x15869cu: goto label_15869c;
        case 0x1586a0u: goto label_1586a0;
        case 0x1586a4u: goto label_1586a4;
        case 0x1586a8u: goto label_1586a8;
        case 0x1586acu: goto label_1586ac;
        case 0x1586b0u: goto label_1586b0;
        case 0x1586b4u: goto label_1586b4;
        case 0x1586b8u: goto label_1586b8;
        case 0x1586bcu: goto label_1586bc;
        case 0x1586c0u: goto label_1586c0;
        case 0x1586c4u: goto label_1586c4;
        case 0x1586c8u: goto label_1586c8;
        case 0x1586ccu: goto label_1586cc;
        case 0x1586d0u: goto label_1586d0;
        case 0x1586d4u: goto label_1586d4;
        case 0x1586d8u: goto label_1586d8;
        case 0x1586dcu: goto label_1586dc;
        case 0x1586e0u: goto label_1586e0;
        case 0x1586e4u: goto label_1586e4;
        case 0x1586e8u: goto label_1586e8;
        case 0x1586ecu: goto label_1586ec;
        case 0x1586f0u: goto label_1586f0;
        case 0x1586f4u: goto label_1586f4;
        case 0x1586f8u: goto label_1586f8;
        case 0x1586fcu: goto label_1586fc;
        case 0x158700u: goto label_158700;
        case 0x158704u: goto label_158704;
        case 0x158708u: goto label_158708;
        case 0x15870cu: goto label_15870c;
        case 0x158710u: goto label_158710;
        case 0x158714u: goto label_158714;
        case 0x158718u: goto label_158718;
        case 0x15871cu: goto label_15871c;
        case 0x158720u: goto label_158720;
        case 0x158724u: goto label_158724;
        case 0x158728u: goto label_158728;
        case 0x15872cu: goto label_15872c;
        case 0x158730u: goto label_158730;
        case 0x158734u: goto label_158734;
        case 0x158738u: goto label_158738;
        case 0x15873cu: goto label_15873c;
        case 0x158740u: goto label_158740;
        case 0x158744u: goto label_158744;
        case 0x158748u: goto label_158748;
        case 0x15874cu: goto label_15874c;
        case 0x158750u: goto label_158750;
        case 0x158754u: goto label_158754;
        case 0x158758u: goto label_158758;
        case 0x15875cu: goto label_15875c;
        case 0x158760u: goto label_158760;
        case 0x158764u: goto label_158764;
        case 0x158768u: goto label_158768;
        case 0x15876cu: goto label_15876c;
        case 0x158770u: goto label_158770;
        case 0x158774u: goto label_158774;
        case 0x158778u: goto label_158778;
        case 0x15877cu: goto label_15877c;
        case 0x158780u: goto label_158780;
        case 0x158784u: goto label_158784;
        case 0x158788u: goto label_158788;
        case 0x15878cu: goto label_15878c;
        case 0x158790u: goto label_158790;
        case 0x158794u: goto label_158794;
        case 0x158798u: goto label_158798;
        case 0x15879cu: goto label_15879c;
        case 0x1587a0u: goto label_1587a0;
        case 0x1587a4u: goto label_1587a4;
        case 0x1587a8u: goto label_1587a8;
        case 0x1587acu: goto label_1587ac;
        case 0x1587b0u: goto label_1587b0;
        case 0x1587b4u: goto label_1587b4;
        case 0x1587b8u: goto label_1587b8;
        case 0x1587bcu: goto label_1587bc;
        case 0x1587c0u: goto label_1587c0;
        case 0x1587c4u: goto label_1587c4;
        case 0x1587c8u: goto label_1587c8;
        case 0x1587ccu: goto label_1587cc;
        case 0x1587d0u: goto label_1587d0;
        case 0x1587d4u: goto label_1587d4;
        case 0x1587d8u: goto label_1587d8;
        case 0x1587dcu: goto label_1587dc;
        default: return;
    }

label_158010:
    if (ctx->pc == 0x158010u) {
        ctx->pc = 0x158010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15800Cu;
        // 0x158010: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158014u;
        goto label_158014;
    }
    ctx->pc = 0x15800Cu;
    SET_GPR_U32(ctx, 31, 0x158014u);
    ctx->pc = 0x158010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15800Cu;
    // 0x158010: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    { ctx->pc = 0x16d5e0; return; }
    ctx->pc = 0x158014u;
label_158014:
    // 0x158014: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_158018:
    // 0x158018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15801c:
    // 0x15801c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15801cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_158020:
    // 0x158020: 0x3e00008  jr          $ra
label_158024:
    if (ctx->pc == 0x158024u) {
        ctx->pc = 0x158024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158020u;
        // 0x158024: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158028u;
        goto label_158028;
    }
    ctx->pc = 0x158020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158020u;
        // 0x158024: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158028u;
label_158028:
    // 0x158028: 0x0  nop
    ctx->pc = 0x158028u;
    // NOP
label_15802c:
    // 0x15802c: 0x0  nop
    ctx->pc = 0x15802cu;
    // NOP
label_158030:
    // 0x158030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x158030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_158034:
    // 0x158034: 0x3882000d  xori        $v0, $a0, 0xD
    ctx->pc = 0x158034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)13);
label_158038:
    // 0x158038: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_15803c:
    // 0x15803c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15803cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_158040:
    // 0x158040: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_158044:
    // 0x158044: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x158044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_158048:
    // 0x158048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15804c:
    // 0x15804c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15804cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_158050:
    // 0x158050: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x158050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_158054:
    // 0x158054: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158058:
    // 0x158058: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x158058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_15805c:
    // 0x15805c: 0xaf82863c  sw          $v0, -0x79C4($gp)
    ctx->pc = 0x15805cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
label_158060:
    // 0x158060: 0xa0234af6  sb          $v1, 0x4AF6($at)
    ctx->pc = 0x158060u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19190), (uint8_t)GPR_U32(ctx, 3));
label_158064:
    // 0x158064: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x158064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_158068:
    // 0x158068: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x158068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15806c:
    // 0x15806c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15806cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158070:
    // 0x158070: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x158070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_158074:
    // 0x158074: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x158074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_158078:
    // 0x158078: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x158078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_15807c:
    // 0x15807c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x15807cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_158080:
    // 0x158080: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x158080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_158084:
    // 0x158084: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_158088:
    if (ctx->pc == 0x158088u) {
        ctx->pc = 0x158088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158084u;
        // 0x158088: 0xa4304af4  sh          $s0, 0x4AF4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19188), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15808Cu;
        goto label_15808c;
    }
    ctx->pc = 0x158084u;
    {
        const bool branch_taken_0x158084 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x158088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158084u;
        // 0x158088: 0xa4304af4  sh          $s0, 0x4AF4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19188), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158084) {
            ctx->pc = 0x158098u;
            goto label_158098;
        }
    }
    ctx->pc = 0x15808Cu;
label_15808c:
    // 0x15808c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x15808cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_158090:
    // 0x158090: 0x16220021  bne         $s1, $v0, . + 4 + (0x21 << 2)
label_158094:
    if (ctx->pc == 0x158094u) {
        ctx->pc = 0x158094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158090u;
        // 0x158094: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158098u;
        goto label_158098;
    }
    ctx->pc = 0x158090u;
    {
        const bool branch_taken_0x158090 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x158094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158090u;
        // 0x158094: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158090) {
            ctx->pc = 0x158118u;
            goto label_158118;
        }
    }
    ctx->pc = 0x158098u;
label_158098:
    // 0x158098: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x158098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15809c:
    // 0x15809c: 0xc07b1ac  jal         func_1EC6B0
label_1580a0:
    if (ctx->pc == 0x1580A0u) {
        ctx->pc = 0x1580A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15809Cu;
        // 0x1580a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1580A4u;
        goto label_1580a4;
    }
    ctx->pc = 0x15809Cu;
    SET_GPR_U32(ctx, 31, 0x1580A4u);
    ctx->pc = 0x1580A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15809Cu;
    // 0x1580a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    { ctx->pc = 0x1ec6b0; return; }
    ctx->pc = 0x1580A4u;
label_1580a4:
    // 0x1580a4: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1580a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1580a8:
    // 0x1580a8: 0xc05af64  jal         func_16BD90
label_1580ac:
    if (ctx->pc == 0x1580ACu) {
        ctx->pc = 0x1580ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580A8u;
        // 0x1580ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1580B0u;
        goto label_1580b0;
    }
    ctx->pc = 0x1580A8u;
    SET_GPR_U32(ctx, 31, 0x1580B0u);
    ctx->pc = 0x1580ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1580A8u;
    // 0x1580ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    { ctx->pc = 0x16bd90; return; }
    ctx->pc = 0x1580B0u;
label_1580b0:
    // 0x1580b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1580b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1580b4:
    // 0x1580b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1580b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1580b8:
    // 0x1580b8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1580b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1580bc:
    // 0x1580bc: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1580bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_1580c0:
    // 0x1580c0: 0x27a80048  addiu       $t0, $sp, 0x48
    ctx->pc = 0x1580c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1580c4:
    // 0x1580c4: 0x27a9004c  addiu       $t1, $sp, 0x4C
    ctx->pc = 0x1580c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_1580c8:
    // 0x1580c8: 0xc079258  jal         func_1E4960
label_1580cc:
    if (ctx->pc == 0x1580CCu) {
        ctx->pc = 0x1580CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580C8u;
        // 0x1580cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1580D0u;
        goto label_1580d0;
    }
    ctx->pc = 0x1580C8u;
    SET_GPR_U32(ctx, 31, 0x1580D0u);
    ctx->pc = 0x1580CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1580C8u;
    // 0x1580cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4960u;
    { ctx->pc = 0x1e4960; return; }
    ctx->pc = 0x1580D0u;
label_1580d0:
    // 0x1580d0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_1580d4:
    if (ctx->pc == 0x1580D4u) {
        ctx->pc = 0x1580D8u;
        goto label_1580d8;
    }
    ctx->pc = 0x1580D0u;
    {
        const bool branch_taken_0x1580d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1580d0) {
            ctx->pc = 0x1581A0u;
            goto label_1581a0;
        }
    }
    ctx->pc = 0x1580D8u;
label_1580d8:
    // 0x1580d8: 0xc05af50  jal         func_16BD40
label_1580dc:
    if (ctx->pc == 0x1580DCu) {
        ctx->pc = 0x1580E0u;
        goto label_1580e0;
    }
    ctx->pc = 0x1580D8u;
    SET_GPR_U32(ctx, 31, 0x1580E0u);
    ctx->pc = 0x16BD40u;
    { ctx->pc = 0x16bd40; return; }
    ctx->pc = 0x1580E0u;
label_1580e0:
    // 0x1580e0: 0xc05b1e0  jal         func_16C780
label_1580e4:
    if (ctx->pc == 0x1580E4u) {
        ctx->pc = 0x1580E8u;
        goto label_1580e8;
    }
    ctx->pc = 0x1580E0u;
    SET_GPR_U32(ctx, 31, 0x1580E8u);
    ctx->pc = 0x16C780u;
    { ctx->pc = 0x16c780; return; }
    ctx->pc = 0x1580E8u;
label_1580e8:
    // 0x1580e8: 0xc05b578  jal         func_16D5E0
label_1580ec:
    if (ctx->pc == 0x1580ECu) {
        ctx->pc = 0x1580ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1580E8u;
        // 0x1580ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1580F0u;
        goto label_1580f0;
    }
    ctx->pc = 0x1580E8u;
    SET_GPR_U32(ctx, 31, 0x1580F0u);
    ctx->pc = 0x1580ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1580E8u;
    // 0x1580ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    { ctx->pc = 0x16d5e0; return; }
    ctx->pc = 0x1580F0u;
label_1580f0:
    // 0x1580f0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1580f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1580f4:
    // 0x1580f4: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1580f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1580f8:
    // 0x1580f8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1580f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1580fc:
    // 0x1580fc: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x1580fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_158100:
    // 0x158100: 0xc056690  jal         func_159A40
label_158104:
    if (ctx->pc == 0x158104u) {
        ctx->pc = 0x158104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158100u;
        // 0x158104: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158108u;
        goto label_158108;
    }
    ctx->pc = 0x158100u;
    SET_GPR_U32(ctx, 31, 0x158108u);
    ctx->pc = 0x158104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158100u;
    // 0x158104: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    { ctx->pc = 0x159a40; return; }
    ctx->pc = 0x158108u;
label_158108:
    // 0x158108: 0xc051420  jal         func_145080
label_15810c:
    if (ctx->pc == 0x15810Cu) {
        ctx->pc = 0x15810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158108u;
        // 0x15810c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158110u;
        goto label_158110;
    }
    ctx->pc = 0x158108u;
    SET_GPR_U32(ctx, 31, 0x158110u);
    ctx->pc = 0x15810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158108u;
    // 0x15810c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145080u, 0x158108u, 0x158110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158110u;
label_158110:
    // 0x158110: 0x10000023  b           . + 4 + (0x23 << 2)
label_158114:
    if (ctx->pc == 0x158114u) {
        ctx->pc = 0x158114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158110u;
        // 0x158114: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158118u;
        goto label_158118;
    }
    ctx->pc = 0x158110u;
    {
        const bool branch_taken_0x158110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158110u;
        // 0x158114: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158110) {
            ctx->pc = 0x1581A0u;
            goto label_1581a0;
        }
    }
    ctx->pc = 0x158118u;
label_158118:
    // 0x158118: 0x16220018  bne         $s1, $v0, . + 4 + (0x18 << 2)
label_15811c:
    if (ctx->pc == 0x15811Cu) {
        ctx->pc = 0x15811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158118u;
        // 0x15811c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158120u;
        goto label_158120;
    }
    ctx->pc = 0x158118u;
    {
        const bool branch_taken_0x158118 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x15811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158118u;
        // 0x15811c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158118) {
            ctx->pc = 0x15817Cu;
            goto label_15817c;
        }
    }
    ctx->pc = 0x158120u;
label_158120:
    // 0x158120: 0xc05af64  jal         func_16BD90
label_158124:
    if (ctx->pc == 0x158124u) {
        ctx->pc = 0x158124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158120u;
        // 0x158124: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158128u;
        goto label_158128;
    }
    ctx->pc = 0x158120u;
    SET_GPR_U32(ctx, 31, 0x158128u);
    ctx->pc = 0x158124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158120u;
    // 0x158124: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    { ctx->pc = 0x16bd90; return; }
    ctx->pc = 0x158128u;
label_158128:
    // 0x158128: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x158128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15812c:
    // 0x15812c: 0xc082e78  jal         func_20B9E0
label_158130:
    if (ctx->pc == 0x158130u) {
        ctx->pc = 0x158130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15812Cu;
        // 0x158130: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158134u;
        goto label_158134;
    }
    ctx->pc = 0x15812Cu;
    SET_GPR_U32(ctx, 31, 0x158134u);
    ctx->pc = 0x158130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15812Cu;
    // 0x158130: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B9E0u;
    { ctx->pc = 0x20b9e0; return; }
    ctx->pc = 0x158134u;
label_158134:
    // 0x158134: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_158138:
    if (ctx->pc == 0x158138u) {
        ctx->pc = 0x15813Cu;
        goto label_15813c;
    }
    ctx->pc = 0x158134u;
    {
        const bool branch_taken_0x158134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158134) {
            ctx->pc = 0x1581A0u;
            goto label_1581a0;
        }
    }
    ctx->pc = 0x15813Cu;
label_15813c:
    // 0x15813c: 0xc084904  jal         func_212410
label_158140:
    if (ctx->pc == 0x158140u) {
        ctx->pc = 0x158140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15813Cu;
        // 0x158140: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158144u;
        goto label_158144;
    }
    ctx->pc = 0x15813Cu;
    SET_GPR_U32(ctx, 31, 0x158144u);
    ctx->pc = 0x158140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15813Cu;
    // 0x158140: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212410u;
    { ctx->pc = 0x212410; return; }
    ctx->pc = 0x158144u;
label_158144:
    // 0x158144: 0xc05af50  jal         func_16BD40
label_158148:
    if (ctx->pc == 0x158148u) {
        ctx->pc = 0x158148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158144u;
        // 0x158148: 0xaf82863c  sw          $v0, -0x79C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15814Cu;
        goto label_15814c;
    }
    ctx->pc = 0x158144u;
    SET_GPR_U32(ctx, 31, 0x15814Cu);
    ctx->pc = 0x158148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158144u;
    // 0x158148: 0xaf82863c  sw          $v0, -0x79C4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD40u;
    { ctx->pc = 0x16bd40; return; }
    ctx->pc = 0x15814Cu;
label_15814c:
    // 0x15814c: 0xc05b1e0  jal         func_16C780
label_158150:
    if (ctx->pc == 0x158150u) {
        ctx->pc = 0x158154u;
        goto label_158154;
    }
    ctx->pc = 0x15814Cu;
    SET_GPR_U32(ctx, 31, 0x158154u);
    ctx->pc = 0x16C780u;
    { ctx->pc = 0x16c780; return; }
    ctx->pc = 0x158154u;
label_158154:
    // 0x158154: 0xc05b578  jal         func_16D5E0
label_158158:
    if (ctx->pc == 0x158158u) {
        ctx->pc = 0x158158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158154u;
        // 0x158158: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15815Cu;
        goto label_15815c;
    }
    ctx->pc = 0x158154u;
    SET_GPR_U32(ctx, 31, 0x15815Cu);
    ctx->pc = 0x158158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158154u;
    // 0x158158: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    { ctx->pc = 0x16d5e0; return; }
    ctx->pc = 0x15815Cu;
label_15815c:
    // 0x15815c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x15815cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_158160:
    // 0x158160: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x158160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_158164:
    // 0x158164: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
label_158168:
    if (ctx->pc == 0x158168u) {
        ctx->pc = 0x15816Cu;
        goto label_15816c;
    }
    ctx->pc = 0x158164u;
    {
        const bool branch_taken_0x158164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x158164) {
            ctx->pc = 0x1581A0u;
            goto label_1581a0;
        }
    }
    ctx->pc = 0x15816Cu;
label_15816c:
    // 0x15816c: 0xc051420  jal         func_145080
label_158170:
    if (ctx->pc == 0x158170u) {
        ctx->pc = 0x158174u;
        goto label_158174;
    }
    ctx->pc = 0x15816Cu;
    SET_GPR_U32(ctx, 31, 0x158174u);
    ctx->pc = 0x145080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145080u, 0x15816Cu, 0x158174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158174u;
label_158174:
    // 0x158174: 0x1000000a  b           . + 4 + (0xA << 2)
label_158178:
    if (ctx->pc == 0x158178u) {
        ctx->pc = 0x158178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158174u;
        // 0x158178: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15817Cu;
        goto label_15817c;
    }
    ctx->pc = 0x158174u;
    {
        const bool branch_taken_0x158174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158174u;
        // 0x158178: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158174) {
            ctx->pc = 0x1581A0u;
            goto label_1581a0;
        }
    }
    ctx->pc = 0x15817Cu;
label_15817c:
    // 0x15817c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x15817cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_158180:
    // 0x158180: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
label_158184:
    if (ctx->pc == 0x158184u) {
        ctx->pc = 0x158188u;
        goto label_158188;
    }
    ctx->pc = 0x158180u;
    {
        const bool branch_taken_0x158180 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x158180) {
            ctx->pc = 0x1581A0u;
            goto label_1581a0;
        }
    }
    ctx->pc = 0x158188u;
label_158188:
    // 0x158188: 0xc084900  jal         func_212400
label_15818c:
    if (ctx->pc == 0x15818Cu) {
        ctx->pc = 0x158190u;
        goto label_158190;
    }
    ctx->pc = 0x158188u;
    SET_GPR_U32(ctx, 31, 0x158190u);
    ctx->pc = 0x212400u;
    { ctx->pc = 0x212400; return; }
    ctx->pc = 0x158190u;
label_158190:
    // 0x158190: 0xaf82863c  sw          $v0, -0x79C4($gp)
    ctx->pc = 0x158190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
label_158194:
    // 0x158194: 0xc051420  jal         func_145080
label_158198:
    if (ctx->pc == 0x158198u) {
        ctx->pc = 0x158198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158194u;
        // 0x158198: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15819Cu;
        goto label_15819c;
    }
    ctx->pc = 0x158194u;
    SET_GPR_U32(ctx, 31, 0x15819Cu);
    ctx->pc = 0x158198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158194u;
    // 0x158198: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145080u, 0x158194u, 0x15819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15819Cu;
label_15819c:
    // 0x15819c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15819cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1581a0:
    // 0x1581a0: 0xc05af50  jal         func_16BD40
label_1581a4:
    if (ctx->pc == 0x1581A4u) {
        ctx->pc = 0x1581A8u;
        goto label_1581a8;
    }
    ctx->pc = 0x1581A0u;
    SET_GPR_U32(ctx, 31, 0x1581A8u);
    ctx->pc = 0x16BD40u;
    { ctx->pc = 0x16bd40; return; }
    ctx->pc = 0x1581A8u;
label_1581a8:
    // 0x1581a8: 0xc05b1e0  jal         func_16C780
label_1581ac:
    if (ctx->pc == 0x1581ACu) {
        ctx->pc = 0x1581B0u;
        goto label_1581b0;
    }
    ctx->pc = 0x1581A8u;
    SET_GPR_U32(ctx, 31, 0x1581B0u);
    ctx->pc = 0x16C780u;
    { ctx->pc = 0x16c780; return; }
    ctx->pc = 0x1581B0u;
label_1581b0:
    // 0x1581b0: 0xc05b578  jal         func_16D5E0
label_1581b4:
    if (ctx->pc == 0x1581B4u) {
        ctx->pc = 0x1581B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581B0u;
        // 0x1581b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1581B8u;
        goto label_1581b8;
    }
    ctx->pc = 0x1581B0u;
    SET_GPR_U32(ctx, 31, 0x1581B8u);
    ctx->pc = 0x1581B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581B0u;
    // 0x1581b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    { ctx->pc = 0x16d5e0; return; }
    ctx->pc = 0x1581B8u;
label_1581b8:
    // 0x1581b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1581b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1581bc:
    // 0x1581bc: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
label_1581c0:
    if (ctx->pc == 0x1581C0u) {
        ctx->pc = 0x1581C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581BCu;
        // 0x1581c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1581C4u;
        goto label_1581c4;
    }
    ctx->pc = 0x1581BCu;
    {
        const bool branch_taken_0x1581bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1581C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581BCu;
        // 0x1581c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1581bc) {
            ctx->pc = 0x1581C8u;
            goto label_1581c8;
        }
    }
    ctx->pc = 0x1581C4u;
label_1581c4:
    // 0x1581c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1581c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1581c8:
    // 0x1581c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1581c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1581cc:
    // 0x1581cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1581ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1581d0:
    // 0x1581d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1581d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1581d4:
    // 0x1581d4: 0x3e00008  jr          $ra
label_1581d8:
    if (ctx->pc == 0x1581D8u) {
        ctx->pc = 0x1581D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581D4u;
        // 0x1581d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1581DCu;
        goto label_1581dc;
    }
    ctx->pc = 0x1581D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1581D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581D4u;
        // 0x1581d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1581D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1581DCu;
label_1581dc:
    // 0x1581dc: 0x0  nop
    ctx->pc = 0x1581dcu;
    // NOP
label_1581e0:
    // 0x1581e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1581e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1581e4:
    // 0x1581e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1581e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1581e8:
    // 0x1581e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1581e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1581ec:
    // 0x1581ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1581ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1581f0:
    // 0x1581f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1581f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1581f4:
    // 0x1581f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1581f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1581f8:
    // 0x1581f8: 0xc070120  jal         func_1C0480
label_1581fc:
    if (ctx->pc == 0x1581FCu) {
        ctx->pc = 0x1581FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1581F8u;
        // 0x1581fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158200u;
        goto label_158200;
    }
    ctx->pc = 0x1581F8u;
    SET_GPR_U32(ctx, 31, 0x158200u);
    ctx->pc = 0x1581FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581F8u;
    // 0x1581fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0480u;
    { ctx->pc = 0x1c0480; return; }
    ctx->pc = 0x158200u;
label_158200:
    // 0x158200: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x158200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158204:
    // 0x158204: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x158204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_158208:
    // 0x158208: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15820c:
    // 0x15820c: 0xaf82863c  sw          $v0, -0x79C4($gp)
    ctx->pc = 0x15820cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
label_158210:
    // 0x158210: 0xa0234af6  sb          $v1, 0x4AF6($at)
    ctx->pc = 0x158210u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19190), (uint8_t)GPR_U32(ctx, 3));
label_158214:
    // 0x158214: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x158214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_158218:
    // 0x158218: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15821c:
    // 0x15821c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_158220:
    if (ctx->pc == 0x158220u) {
        ctx->pc = 0x158220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15821Cu;
        // 0x158220: 0xa4224af4  sh          $v0, 0x4AF4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19188), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158224u;
        goto label_158224;
    }
    ctx->pc = 0x15821Cu;
    {
        const bool branch_taken_0x15821c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x158220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15821Cu;
        // 0x158220: 0xa4224af4  sh          $v0, 0x4AF4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19188), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15821c) {
            ctx->pc = 0x158238u;
            goto label_158238;
        }
    }
    ctx->pc = 0x158224u;
label_158224:
    // 0x158224: 0x24020410  addiu       $v0, $zero, 0x410
    ctx->pc = 0x158224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_158228:
    // 0x158228: 0xc088b88  jal         func_222E20
label_15822c:
    if (ctx->pc == 0x15822Cu) {
        ctx->pc = 0x15822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158228u;
        // 0x15822c: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158230u;
        goto label_158230;
    }
    ctx->pc = 0x158228u;
    SET_GPR_U32(ctx, 31, 0x158230u);
    ctx->pc = 0x15822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158228u;
    // 0x15822c: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E20u;
    { ctx->pc = 0x222e20; return; }
    ctx->pc = 0x158230u;
label_158230:
    // 0x158230: 0x10000004  b           . + 4 + (0x4 << 2)
label_158234:
    if (ctx->pc == 0x158234u) {
        ctx->pc = 0x158238u;
        goto label_158238;
    }
    ctx->pc = 0x158230u;
    {
        const bool branch_taken_0x158230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158230) {
            ctx->pc = 0x158244u;
            goto label_158244;
        }
    }
    ctx->pc = 0x158238u;
label_158238:
    // 0x158238: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x158238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15823c:
    // 0x15823c: 0xc088b48  jal         func_222D20
label_158240:
    if (ctx->pc == 0x158240u) {
        ctx->pc = 0x158240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15823Cu;
        // 0x158240: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158244u;
        goto label_158244;
    }
    ctx->pc = 0x15823Cu;
    SET_GPR_U32(ctx, 31, 0x158244u);
    ctx->pc = 0x158240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15823Cu;
    // 0x158240: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222D20u;
    { ctx->pc = 0x222d20; return; }
    ctx->pc = 0x158244u;
label_158244:
    // 0x158244: 0xc055638  jal         func_1558E0
label_158248:
    if (ctx->pc == 0x158248u) {
        ctx->pc = 0x15824Cu;
        goto label_15824c;
    }
    ctx->pc = 0x158244u;
    SET_GPR_U32(ctx, 31, 0x15824Cu);
    ctx->pc = 0x1558E0u;
    { ctx->pc = 0x1558e0; return; }
    ctx->pc = 0x15824Cu;
label_15824c:
    // 0x15824c: 0xc043a08  jal         func_10E820
label_158250:
    if (ctx->pc == 0x158250u) {
        ctx->pc = 0x158254u;
        goto label_158254;
    }
    ctx->pc = 0x15824Cu;
    SET_GPR_U32(ctx, 31, 0x158254u);
    ctx->pc = 0x10E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E820u, 0x15824Cu, 0x158254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158254u;
label_158254:
    // 0x158254: 0xc088bf4  jal         func_222FD0
label_158258:
    if (ctx->pc == 0x158258u) {
        ctx->pc = 0x15825Cu;
        goto label_15825c;
    }
    ctx->pc = 0x158254u;
    SET_GPR_U32(ctx, 31, 0x15825Cu);
    ctx->pc = 0x222FD0u;
    { ctx->pc = 0x222fd0; return; }
    ctx->pc = 0x15825Cu;
label_15825c:
    // 0x15825c: 0xc05dae4  jal         func_176B90
label_158260:
    if (ctx->pc == 0x158260u) {
        ctx->pc = 0x158264u;
        goto label_158264;
    }
    ctx->pc = 0x15825Cu;
    SET_GPR_U32(ctx, 31, 0x158264u);
    ctx->pc = 0x176B90u;
    { ctx->pc = 0x176b90; return; }
    ctx->pc = 0x158264u;
label_158264:
    // 0x158264: 0xc051740  jal         func_145D00
label_158268:
    if (ctx->pc == 0x158268u) {
        ctx->pc = 0x15826Cu;
        goto label_15826c;
    }
    ctx->pc = 0x158264u;
    SET_GPR_U32(ctx, 31, 0x15826Cu);
    ctx->pc = 0x145D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145D00u, 0x158264u, 0x15826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15826Cu;
label_15826c:
    // 0x15826c: 0xc05cfd4  jal         func_173F50
label_158270:
    if (ctx->pc == 0x158270u) {
        ctx->pc = 0x158274u;
        goto label_158274;
    }
    ctx->pc = 0x15826Cu;
    SET_GPR_U32(ctx, 31, 0x158274u);
    ctx->pc = 0x173F50u;
    { ctx->pc = 0x173f50; return; }
    ctx->pc = 0x158274u;
label_158274:
    // 0x158274: 0xc0436b4  jal         func_10DAD0
label_158278:
    if (ctx->pc == 0x158278u) {
        ctx->pc = 0x15827Cu;
        goto label_15827c;
    }
    ctx->pc = 0x158274u;
    SET_GPR_U32(ctx, 31, 0x15827Cu);
    ctx->pc = 0x10DAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DAD0u, 0x158274u, 0x15827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15827Cu;
label_15827c:
    // 0x15827c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15827cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_158280:
    // 0x158280: 0x90224af3  lbu         $v0, 0x4AF3($at)
    ctx->pc = 0x158280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19187)));
label_158284:
    // 0x158284: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x158284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_158288:
    // 0x158288: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_15828c:
    if (ctx->pc == 0x15828Cu) {
        ctx->pc = 0x15828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158288u;
        // 0x15828c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158290u;
        goto label_158290;
    }
    ctx->pc = 0x158288u;
    {
        const bool branch_taken_0x158288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158288u;
        // 0x15828c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158288) {
            ctx->pc = 0x158294u;
            goto label_158294;
        }
    }
    ctx->pc = 0x158290u;
label_158290:
    // 0x158290: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x158290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158294:
    // 0x158294: 0xc070120  jal         func_1C0480
label_158298:
    if (ctx->pc == 0x158298u) {
        ctx->pc = 0x158298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158294u;
        // 0x158298: 0xaf808590  sw          $zero, -0x7A70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15829Cu;
        goto label_15829c;
    }
    ctx->pc = 0x158294u;
    SET_GPR_U32(ctx, 31, 0x15829Cu);
    ctx->pc = 0x158298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158294u;
    // 0x158298: 0xaf808590  sw          $zero, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0480u;
    { ctx->pc = 0x1c0480; return; }
    ctx->pc = 0x15829Cu;
label_15829c:
    // 0x15829c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15829cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1582a0:
    // 0x1582a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1582a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1582a4:
    // 0x1582a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1582a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1582a8:
    // 0x1582a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1582a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1582ac:
    // 0x1582ac: 0x3e00008  jr          $ra
label_1582b0:
    if (ctx->pc == 0x1582B0u) {
        ctx->pc = 0x1582B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1582ACu;
        // 0x1582b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1582B4u;
        goto label_1582b4;
    }
    ctx->pc = 0x1582ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1582B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1582ACu;
        // 0x1582b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1582ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1582B4u;
label_1582b4:
    // 0x1582b4: 0x0  nop
    ctx->pc = 0x1582b4u;
    // NOP
label_1582b8:
    // 0x1582b8: 0x0  nop
    ctx->pc = 0x1582b8u;
    // NOP
label_1582bc:
    // 0x1582bc: 0x0  nop
    ctx->pc = 0x1582bcu;
    // NOP
label_1582c0:
    // 0x1582c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1582c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1582c4:
    // 0x1582c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1582c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1582c8:
    // 0x1582c8: 0xc054c34  jal         func_1530D0
label_1582cc:
    if (ctx->pc == 0x1582CCu) {
        ctx->pc = 0x1582CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1582C8u;
        // 0x1582cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1582D0u;
        goto label_1582d0;
    }
    ctx->pc = 0x1582C8u;
    SET_GPR_U32(ctx, 31, 0x1582D0u);
    ctx->pc = 0x1582CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1582C8u;
    // 0x1582cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1530D0u;
    { ctx->pc = 0x1530d0; return; }
    ctx->pc = 0x1582D0u;
label_1582d0:
    // 0x1582d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1582d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1582d4:
    // 0x1582d4: 0x3e00008  jr          $ra
label_1582d8:
    if (ctx->pc == 0x1582D8u) {
        ctx->pc = 0x1582D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1582D4u;
        // 0x1582d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1582DCu;
        goto label_1582dc;
    }
    ctx->pc = 0x1582D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1582D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1582D4u;
        // 0x1582d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1582D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1582DCu;
label_1582dc:
    // 0x1582dc: 0x0  nop
    ctx->pc = 0x1582dcu;
    // NOP
label_1582e0:
    // 0x1582e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1582e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1582e4:
    // 0x1582e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1582e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1582e8:
    // 0x1582e8: 0xc05ffa8  jal         func_17FEA0
label_1582ec:
    if (ctx->pc == 0x1582ECu) {
        ctx->pc = 0x1582F0u;
        goto label_1582f0;
    }
    ctx->pc = 0x1582E8u;
    SET_GPR_U32(ctx, 31, 0x1582F0u);
    ctx->pc = 0x17FEA0u;
    { ctx->pc = 0x17fea0; return; }
    ctx->pc = 0x1582F0u;
label_1582f0:
    // 0x1582f0: 0xc0602a0  jal         func_180A80
label_1582f4:
    if (ctx->pc == 0x1582F4u) {
        ctx->pc = 0x1582F8u;
        goto label_1582f8;
    }
    ctx->pc = 0x1582F0u;
    SET_GPR_U32(ctx, 31, 0x1582F8u);
    ctx->pc = 0x180A80u;
    { ctx->pc = 0x180a80; return; }
    ctx->pc = 0x1582F8u;
label_1582f8:
    // 0x1582f8: 0xc060680  jal         func_181A00
label_1582fc:
    if (ctx->pc == 0x1582FCu) {
        ctx->pc = 0x158300u;
        goto label_158300;
    }
    ctx->pc = 0x1582F8u;
    SET_GPR_U32(ctx, 31, 0x158300u);
    ctx->pc = 0x181A00u;
    { ctx->pc = 0x181a00; return; }
    ctx->pc = 0x158300u;
label_158300:
    // 0x158300: 0xc041790  jal         func_105E40
label_158304:
    if (ctx->pc == 0x158304u) {
        ctx->pc = 0x158308u;
        goto label_158308;
    }
    ctx->pc = 0x158300u;
    SET_GPR_U32(ctx, 31, 0x158308u);
    ctx->pc = 0x105E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E40u, 0x158300u, 0x158308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158308u;
label_158308:
    // 0x158308: 0xc054c34  jal         func_1530D0
label_15830c:
    if (ctx->pc == 0x15830Cu) {
        ctx->pc = 0x15830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158308u;
        // 0x15830c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158310u;
        goto label_158310;
    }
    ctx->pc = 0x158308u;
    SET_GPR_U32(ctx, 31, 0x158310u);
    ctx->pc = 0x15830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158308u;
    // 0x15830c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1530D0u;
    { ctx->pc = 0x1530d0; return; }
    ctx->pc = 0x158310u;
label_158310:
    // 0x158310: 0xc070798  jal         func_1C1E60
label_158314:
    if (ctx->pc == 0x158314u) {
        ctx->pc = 0x158314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158310u;
        // 0x158314: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158318u;
        goto label_158318;
    }
    ctx->pc = 0x158310u;
    SET_GPR_U32(ctx, 31, 0x158318u);
    ctx->pc = 0x158314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158310u;
    // 0x158314: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1E60u;
    { ctx->pc = 0x1c1e60; return; }
    ctx->pc = 0x158318u;
label_158318:
    // 0x158318: 0xc07a784  jal         func_1E9E10
label_15831c:
    if (ctx->pc == 0x15831Cu) {
        ctx->pc = 0x158320u;
        goto label_158320;
    }
    ctx->pc = 0x158318u;
    SET_GPR_U32(ctx, 31, 0x158320u);
    ctx->pc = 0x1E9E10u;
    { ctx->pc = 0x1e9e10; return; }
    ctx->pc = 0x158320u;
label_158320:
    // 0x158320: 0xc077f30  jal         func_1DFCC0
label_158324:
    if (ctx->pc == 0x158324u) {
        ctx->pc = 0x158328u;
        goto label_158328;
    }
    ctx->pc = 0x158320u;
    SET_GPR_U32(ctx, 31, 0x158328u);
    ctx->pc = 0x1DFCC0u;
    { ctx->pc = 0x1dfcc0; return; }
    ctx->pc = 0x158328u;
label_158328:
    // 0x158328: 0xc083cb4  jal         func_20F2D0
label_15832c:
    if (ctx->pc == 0x15832Cu) {
        ctx->pc = 0x158330u;
        goto label_158330;
    }
    ctx->pc = 0x158328u;
    SET_GPR_U32(ctx, 31, 0x158330u);
    ctx->pc = 0x20F2D0u;
    { ctx->pc = 0x20f2d0; return; }
    ctx->pc = 0x158330u;
label_158330:
    // 0x158330: 0xc0449ec  jal         func_1127B0
label_158334:
    if (ctx->pc == 0x158334u) {
        ctx->pc = 0x158338u;
        goto label_158338;
    }
    ctx->pc = 0x158330u;
    SET_GPR_U32(ctx, 31, 0x158338u);
    ctx->pc = 0x1127B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127B0u, 0x158330u, 0x158338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158338u;
label_158338:
    // 0x158338: 0xc066998  jal         func_19A660
label_15833c:
    if (ctx->pc == 0x15833Cu) {
        ctx->pc = 0x15833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158338u;
        // 0x15833c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158340u;
        goto label_158340;
    }
    ctx->pc = 0x158338u;
    SET_GPR_U32(ctx, 31, 0x158340u);
    ctx->pc = 0x15833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158338u;
    // 0x15833c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    { ctx->pc = 0x19a660; return; }
    ctx->pc = 0x158340u;
label_158340:
    // 0x158340: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x158340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_158344:
    // 0x158344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x158344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158348:
    // 0x158348: 0xc066a6c  jal         func_19A9B0
label_15834c:
    if (ctx->pc == 0x15834Cu) {
        ctx->pc = 0x15834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158348u;
        // 0x15834c: 0x24a51f00  addiu       $a1, $a1, 0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158350u;
        goto label_158350;
    }
    ctx->pc = 0x158348u;
    SET_GPR_U32(ctx, 31, 0x158350u);
    ctx->pc = 0x15834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158348u;
    // 0x15834c: 0x24a51f00  addiu       $a1, $a1, 0x1F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9B0u;
    { ctx->pc = 0x19a9b0; return; }
    ctx->pc = 0x158350u;
label_158350:
    // 0x158350: 0xc066998  jal         func_19A660
label_158354:
    if (ctx->pc == 0x158354u) {
        ctx->pc = 0x158354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158350u;
        // 0x158354: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158358u;
        goto label_158358;
    }
    ctx->pc = 0x158350u;
    SET_GPR_U32(ctx, 31, 0x158358u);
    ctx->pc = 0x158354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158350u;
    // 0x158354: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    { ctx->pc = 0x19a660; return; }
    ctx->pc = 0x158358u;
label_158358:
    // 0x158358: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x158358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_15835c:
    // 0x15835c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15835cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158360:
    // 0x158360: 0xc066a6c  jal         func_19A9B0
label_158364:
    if (ctx->pc == 0x158364u) {
        ctx->pc = 0x158364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158360u;
        // 0x158364: 0x24a54000  addiu       $a1, $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158368u;
        goto label_158368;
    }
    ctx->pc = 0x158360u;
    SET_GPR_U32(ctx, 31, 0x158368u);
    ctx->pc = 0x158364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158360u;
    // 0x158364: 0x24a54000  addiu       $a1, $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9B0u;
    { ctx->pc = 0x19a9b0; return; }
    ctx->pc = 0x158368u;
label_158368:
    // 0x158368: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x158368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15836c:
    // 0x15836c: 0xc066440  jal         func_199100
label_158370:
    if (ctx->pc == 0x158370u) {
        ctx->pc = 0x158370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15836Cu;
        // 0x158370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158374u;
        goto label_158374;
    }
    ctx->pc = 0x15836Cu;
    SET_GPR_U32(ctx, 31, 0x158374u);
    ctx->pc = 0x158370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15836Cu;
    // 0x158370: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    { ctx->pc = 0x199100; return; }
    ctx->pc = 0x158374u;
label_158374:
    // 0x158374: 0xc05cd8c  jal         func_173630
label_158378:
    if (ctx->pc == 0x158378u) {
        ctx->pc = 0x15837Cu;
        goto label_15837c;
    }
    ctx->pc = 0x158374u;
    SET_GPR_U32(ctx, 31, 0x15837Cu);
    ctx->pc = 0x173630u;
    { ctx->pc = 0x173630; return; }
    ctx->pc = 0x15837Cu;
label_15837c:
    // 0x15837c: 0xc064f80  jal         func_193E00
label_158380:
    if (ctx->pc == 0x158380u) {
        ctx->pc = 0x158384u;
        goto label_158384;
    }
    ctx->pc = 0x15837Cu;
    SET_GPR_U32(ctx, 31, 0x158384u);
    ctx->pc = 0x193E00u;
    { ctx->pc = 0x193e00; return; }
    ctx->pc = 0x158384u;
label_158384:
    // 0x158384: 0xc04d5d4  jal         func_135750
label_158388:
    if (ctx->pc == 0x158388u) {
        ctx->pc = 0x15838Cu;
        goto label_15838c;
    }
    ctx->pc = 0x158384u;
    SET_GPR_U32(ctx, 31, 0x15838Cu);
    ctx->pc = 0x135750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135750u, 0x158384u, 0x15838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15838Cu;
label_15838c:
    // 0x15838c: 0xc088e04  jal         func_223810
label_158390:
    if (ctx->pc == 0x158390u) {
        ctx->pc = 0x158394u;
        goto label_158394;
    }
    ctx->pc = 0x15838Cu;
    SET_GPR_U32(ctx, 31, 0x158394u);
    ctx->pc = 0x223810u;
    { ctx->pc = 0x223810; return; }
    ctx->pc = 0x158394u;
label_158394:
    // 0x158394: 0xc059264  jal         func_164990
label_158398:
    if (ctx->pc == 0x158398u) {
        ctx->pc = 0x15839Cu;
        goto label_15839c;
    }
    ctx->pc = 0x158394u;
    SET_GPR_U32(ctx, 31, 0x15839Cu);
    ctx->pc = 0x164990u;
    { ctx->pc = 0x164990; return; }
    ctx->pc = 0x15839Cu;
label_15839c:
    // 0x15839c: 0xc04e0bc  jal         func_1382F0
label_1583a0:
    if (ctx->pc == 0x1583A0u) {
        ctx->pc = 0x1583A4u;
        goto label_1583a4;
    }
    ctx->pc = 0x15839Cu;
    SET_GPR_U32(ctx, 31, 0x1583A4u);
    ctx->pc = 0x1382F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1382F0u, 0x15839Cu, 0x1583A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583A4u;
label_1583a4:
    // 0x1583a4: 0xc080fd8  jal         func_203F60
label_1583a8:
    if (ctx->pc == 0x1583A8u) {
        ctx->pc = 0x1583ACu;
        goto label_1583ac;
    }
    ctx->pc = 0x1583A4u;
    SET_GPR_U32(ctx, 31, 0x1583ACu);
    ctx->pc = 0x203F60u;
    { ctx->pc = 0x203f60; return; }
    ctx->pc = 0x1583ACu;
label_1583ac:
    // 0x1583ac: 0xc08ff48  jal         func_23FD20
label_1583b0:
    if (ctx->pc == 0x1583B0u) {
        ctx->pc = 0x1583B4u;
        goto label_1583b4;
    }
    ctx->pc = 0x1583ACu;
    SET_GPR_U32(ctx, 31, 0x1583B4u);
    ctx->pc = 0x23FD20u;
    { ctx->pc = 0x23fd20; return; }
    ctx->pc = 0x1583B4u;
label_1583b4:
    // 0x1583b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1583b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1583b8:
    // 0x1583b8: 0x3e00008  jr          $ra
label_1583bc:
    if (ctx->pc == 0x1583BCu) {
        ctx->pc = 0x1583BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583B8u;
        // 0x1583bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583C0u;
        goto label_1583c0;
    }
    ctx->pc = 0x1583B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1583BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583B8u;
        // 0x1583bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1583B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1583C0u;
label_1583c0:
    // 0x1583c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1583c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1583c4:
    // 0x1583c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1583c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1583c8:
    // 0x1583c8: 0xc066998  jal         func_19A660
label_1583cc:
    if (ctx->pc == 0x1583CCu) {
        ctx->pc = 0x1583CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583C8u;
        // 0x1583cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583D0u;
        goto label_1583d0;
    }
    ctx->pc = 0x1583C8u;
    SET_GPR_U32(ctx, 31, 0x1583D0u);
    ctx->pc = 0x1583CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583C8u;
    // 0x1583cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    { ctx->pc = 0x19a660; return; }
    ctx->pc = 0x1583D0u;
label_1583d0:
    // 0x1583d0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1583d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_1583d4:
    // 0x1583d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1583d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1583d8:
    // 0x1583d8: 0xc066a6c  jal         func_19A9B0
label_1583dc:
    if (ctx->pc == 0x1583DCu) {
        ctx->pc = 0x1583DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583D8u;
        // 0x1583dc: 0x24a51f00  addiu       $a1, $a1, 0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583E0u;
        goto label_1583e0;
    }
    ctx->pc = 0x1583D8u;
    SET_GPR_U32(ctx, 31, 0x1583E0u);
    ctx->pc = 0x1583DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583D8u;
    // 0x1583dc: 0x24a51f00  addiu       $a1, $a1, 0x1F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9B0u;
    { ctx->pc = 0x19a9b0; return; }
    ctx->pc = 0x1583E0u;
label_1583e0:
    // 0x1583e0: 0xc066998  jal         func_19A660
label_1583e4:
    if (ctx->pc == 0x1583E4u) {
        ctx->pc = 0x1583E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583E0u;
        // 0x1583e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583E8u;
        goto label_1583e8;
    }
    ctx->pc = 0x1583E0u;
    SET_GPR_U32(ctx, 31, 0x1583E8u);
    ctx->pc = 0x1583E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583E0u;
    // 0x1583e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    { ctx->pc = 0x19a660; return; }
    ctx->pc = 0x1583E8u;
label_1583e8:
    // 0x1583e8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1583e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_1583ec:
    // 0x1583ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1583ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1583f0:
    // 0x1583f0: 0xc066a6c  jal         func_19A9B0
label_1583f4:
    if (ctx->pc == 0x1583F4u) {
        ctx->pc = 0x1583F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583F0u;
        // 0x1583f4: 0x24a54000  addiu       $a1, $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1583F8u;
        goto label_1583f8;
    }
    ctx->pc = 0x1583F0u;
    SET_GPR_U32(ctx, 31, 0x1583F8u);
    ctx->pc = 0x1583F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583F0u;
    // 0x1583f4: 0x24a54000  addiu       $a1, $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9B0u;
    { ctx->pc = 0x19a9b0; return; }
    ctx->pc = 0x1583F8u;
label_1583f8:
    // 0x1583f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1583f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1583fc:
    // 0x1583fc: 0xc066440  jal         func_199100
label_158400:
    if (ctx->pc == 0x158400u) {
        ctx->pc = 0x158400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583FCu;
        // 0x158400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158404u;
        goto label_158404;
    }
    ctx->pc = 0x1583FCu;
    SET_GPR_U32(ctx, 31, 0x158404u);
    ctx->pc = 0x158400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583FCu;
    // 0x158400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    { ctx->pc = 0x199100; return; }
    ctx->pc = 0x158404u;
label_158404:
    // 0x158404: 0xc05cd8c  jal         func_173630
label_158408:
    if (ctx->pc == 0x158408u) {
        ctx->pc = 0x15840Cu;
        goto label_15840c;
    }
    ctx->pc = 0x158404u;
    SET_GPR_U32(ctx, 31, 0x15840Cu);
    ctx->pc = 0x173630u;
    { ctx->pc = 0x173630; return; }
    ctx->pc = 0x15840Cu;
label_15840c:
    // 0x15840c: 0xc064f80  jal         func_193E00
label_158410:
    if (ctx->pc == 0x158410u) {
        ctx->pc = 0x158414u;
        goto label_158414;
    }
    ctx->pc = 0x15840Cu;
    SET_GPR_U32(ctx, 31, 0x158414u);
    ctx->pc = 0x193E00u;
    { ctx->pc = 0x193e00; return; }
    ctx->pc = 0x158414u;
label_158414:
    // 0x158414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158418:
    // 0x158418: 0x3e00008  jr          $ra
label_15841c:
    if (ctx->pc == 0x15841Cu) {
        ctx->pc = 0x15841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158418u;
        // 0x15841c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158420u;
        goto label_158420;
    }
    ctx->pc = 0x158418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158418u;
        // 0x15841c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158420u;
label_158420:
    // 0x158420: 0x3e00008  jr          $ra
label_158424:
    if (ctx->pc == 0x158424u) {
        ctx->pc = 0x158428u;
        goto label_158428;
    }
    ctx->pc = 0x158420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158428u;
label_158428:
    // 0x158428: 0x0  nop
    ctx->pc = 0x158428u;
    // NOP
label_15842c:
    // 0x15842c: 0x0  nop
    ctx->pc = 0x15842cu;
    // NOP
label_158430:
    // 0x158430: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x158430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_158434:
    // 0x158434: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
label_158438:
    if (ctx->pc == 0x158438u) {
        ctx->pc = 0x158438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158434u;
        // 0x158438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15843Cu;
        goto label_15843c;
    }
    ctx->pc = 0x158434u;
    {
        const bool branch_taken_0x158434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x158438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158434u;
        // 0x158438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158434) {
            ctx->pc = 0x158490u;
            goto label_158490;
        }
    }
    ctx->pc = 0x15843Cu;
label_15843c:
    // 0x15843c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x15843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_158440:
    // 0x158440: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
label_158444:
    if (ctx->pc == 0x158444u) {
        ctx->pc = 0x158444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158440u;
        // 0x158444: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158448u;
        goto label_158448;
    }
    ctx->pc = 0x158440u;
    {
        const bool branch_taken_0x158440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x158444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158440u;
        // 0x158444: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158440) {
            ctx->pc = 0x15848Cu;
            goto label_15848c;
        }
    }
    ctx->pc = 0x158448u;
label_158448:
    // 0x158448: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_15844c:
    if (ctx->pc == 0x15844Cu) {
        ctx->pc = 0x158450u;
        goto label_158450;
    }
    ctx->pc = 0x158448u;
    {
        const bool branch_taken_0x158448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x158448) {
            ctx->pc = 0x15848Cu;
            goto label_15848c;
        }
    }
    ctx->pc = 0x158450u;
label_158450:
    // 0x158450: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x158450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_158454:
    // 0x158454: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
label_158458:
    if (ctx->pc == 0x158458u) {
        ctx->pc = 0x158458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158454u;
        // 0x158458: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15845Cu;
        goto label_15845c;
    }
    ctx->pc = 0x158454u;
    {
        const bool branch_taken_0x158454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x158458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158454u;
        // 0x158458: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158454) {
            ctx->pc = 0x15848Cu;
            goto label_15848c;
        }
    }
    ctx->pc = 0x15845Cu;
label_15845c:
    // 0x15845c: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_158460:
    if (ctx->pc == 0x158460u) {
        ctx->pc = 0x158464u;
        goto label_158464;
    }
    ctx->pc = 0x15845Cu;
    {
        const bool branch_taken_0x15845c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15845c) {
            ctx->pc = 0x15848Cu;
            goto label_15848c;
        }
    }
    ctx->pc = 0x158464u;
label_158464:
    // 0x158464: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x158464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_158468:
    // 0x158468: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_15846c:
    if (ctx->pc == 0x15846Cu) {
        ctx->pc = 0x15846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158468u;
        // 0x15846c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158470u;
        goto label_158470;
    }
    ctx->pc = 0x158468u;
    {
        const bool branch_taken_0x158468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x15846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158468u;
        // 0x15846c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158468) {
            ctx->pc = 0x15848Cu;
            goto label_15848c;
        }
    }
    ctx->pc = 0x158470u;
label_158470:
    // 0x158470: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_158474:
    if (ctx->pc == 0x158474u) {
        ctx->pc = 0x158478u;
        goto label_158478;
    }
    ctx->pc = 0x158470u;
    {
        const bool branch_taken_0x158470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x158470) {
            ctx->pc = 0x15848Cu;
            goto label_15848c;
        }
    }
    ctx->pc = 0x158478u;
label_158478:
    // 0x158478: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15847c:
    // 0x15847c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_158480:
    if (ctx->pc == 0x158480u) {
        ctx->pc = 0x158484u;
        goto label_158484;
    }
    ctx->pc = 0x15847Cu;
    {
        const bool branch_taken_0x15847c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15847c) {
            ctx->pc = 0x15848Cu;
            goto label_15848c;
        }
    }
    ctx->pc = 0x158484u;
label_158484:
    // 0x158484: 0x10000002  b           . + 4 + (0x2 << 2)
label_158488:
    if (ctx->pc == 0x158488u) {
        ctx->pc = 0x158488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158484u;
        // 0x158488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15848Cu;
        goto label_15848c;
    }
    ctx->pc = 0x158484u;
    {
        const bool branch_taken_0x158484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158484u;
        // 0x158488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158484) {
            ctx->pc = 0x158490u;
            goto label_158490;
        }
    }
    ctx->pc = 0x15848Cu;
label_15848c:
    // 0x15848c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15848cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158490:
    // 0x158490: 0x3e00008  jr          $ra
label_158494:
    if (ctx->pc == 0x158494u) {
        ctx->pc = 0x158498u;
        goto label_158498;
    }
    ctx->pc = 0x158490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158498u;
label_158498:
    // 0x158498: 0x0  nop
    ctx->pc = 0x158498u;
    // NOP
label_15849c:
    // 0x15849c: 0x0  nop
    ctx->pc = 0x15849cu;
    // NOP
label_1584a0:
    // 0x1584a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1584a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1584a4:
    // 0x1584a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1584a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1584a8:
    // 0x1584a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1584a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1584ac:
    // 0x1584ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1584acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1584b0:
    // 0x1584b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1584b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1584b4:
    // 0x1584b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1584b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1584b8:
    // 0x1584b8: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
label_1584bc:
    if (ctx->pc == 0x1584BCu) {
        ctx->pc = 0x1584BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584B8u;
        // 0x1584bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1584C0u;
        goto label_1584c0;
    }
    ctx->pc = 0x1584B8u;
    {
        const bool branch_taken_0x1584b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1584BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584B8u;
        // 0x1584bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584b8) {
            ctx->pc = 0x158524u;
            goto label_158524;
        }
    }
    ctx->pc = 0x1584C0u;
label_1584c0:
    // 0x1584c0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1584c4:
    if (ctx->pc == 0x1584C4u) {
        ctx->pc = 0x1584C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584C0u;
        // 0x1584c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1584C8u;
        goto label_1584c8;
    }
    ctx->pc = 0x1584C0u;
    {
        const bool branch_taken_0x1584c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1584C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584C0u;
        // 0x1584c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584c0) {
            ctx->pc = 0x1584FCu;
            goto label_1584fc;
        }
    }
    ctx->pc = 0x1584C8u;
label_1584c8:
    // 0x1584c8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1584c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1584cc:
    // 0x1584cc: 0x244234e0  addiu       $v0, $v0, 0x34E0
    ctx->pc = 0x1584ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13536));
label_1584d0:
    // 0x1584d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1584d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1584d4:
    // 0x1584d4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1584d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1584d8:
    // 0x1584d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1584d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1584dc:
    // 0x1584dc: 0xc0901b4  jal         func_2406D0
label_1584e0:
    if (ctx->pc == 0x1584E0u) {
        ctx->pc = 0x1584E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584DCu;
        // 0x1584e0: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1584E4u;
        goto label_1584e4;
    }
    ctx->pc = 0x1584DCu;
    SET_GPR_U32(ctx, 31, 0x1584E4u);
    ctx->pc = 0x1584E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1584DCu;
    // 0x1584e0: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406D0u;
    { ctx->pc = 0x2406d0; return; }
    ctx->pc = 0x1584E4u;
label_1584e4:
    // 0x1584e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1584e8:
    if (ctx->pc == 0x1584E8u) {
        ctx->pc = 0x1584ECu;
        goto label_1584ec;
    }
    ctx->pc = 0x1584E4u;
    {
        const bool branch_taken_0x1584e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1584e4) {
            ctx->pc = 0x1584F8u;
            goto label_1584f8;
        }
    }
    ctx->pc = 0x1584ECu;
label_1584ec:
    // 0x1584ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1584ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1584f0:
    // 0x1584f0: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x1584f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_1584f4:
    // 0x1584f4: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1584f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_1584f8:
    // 0x1584f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1584f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1584fc:
    // 0x1584fc: 0x0  nop
    ctx->pc = 0x1584fcu;
    // NOP
label_158500:
    // 0x158500: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x158500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_158504:
    // 0x158504: 0x24423470  addiu       $v0, $v0, 0x3470
    ctx->pc = 0x158504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13424));
label_158508:
    // 0x158508: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x158508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15850c:
    // 0x15850c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x15850cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_158510:
    // 0x158510: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x158510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_158514:
    // 0x158514: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_158518:
    if (ctx->pc == 0x158518u) {
        ctx->pc = 0x158518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158514u;
        // 0x158518: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15851Cu;
        goto label_15851c;
    }
    ctx->pc = 0x158514u;
    {
        const bool branch_taken_0x158514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158514u;
        // 0x158518: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158514) {
            ctx->pc = 0x1584C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1584c8;
        }
    }
    ctx->pc = 0x15851Cu;
label_15851c:
    // 0x15851c: 0x10000019  b           . + 4 + (0x19 << 2)
label_158520:
    if (ctx->pc == 0x158520u) {
        ctx->pc = 0x158524u;
        goto label_158524;
    }
    ctx->pc = 0x15851Cu;
    {
        const bool branch_taken_0x15851c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15851c) {
            ctx->pc = 0x158584u;
            goto label_158584;
        }
    }
    ctx->pc = 0x158524u;
label_158524:
    // 0x158524: 0x1000000f  b           . + 4 + (0xF << 2)
label_158528:
    if (ctx->pc == 0x158528u) {
        ctx->pc = 0x158528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158524u;
        // 0x158528: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15852Cu;
        goto label_15852c;
    }
    ctx->pc = 0x158524u;
    {
        const bool branch_taken_0x158524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158524u;
        // 0x158528: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158524) {
            ctx->pc = 0x158564u;
            goto label_158564;
        }
    }
    ctx->pc = 0x15852Cu;
label_15852c:
    // 0x15852c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15852cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_158530:
    // 0x158530: 0x24423490  addiu       $v0, $v0, 0x3490
    ctx->pc = 0x158530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13456));
label_158534:
    // 0x158534: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x158534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_158538:
    // 0x158538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15853c:
    // 0x15853c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x15853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_158540:
    // 0x158540: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x158540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_158544:
    // 0x158544: 0xc0901b4  jal         func_2406D0
label_158548:
    if (ctx->pc == 0x158548u) {
        ctx->pc = 0x158548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158544u;
        // 0x158548: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15854Cu;
        goto label_15854c;
    }
    ctx->pc = 0x158544u;
    SET_GPR_U32(ctx, 31, 0x15854Cu);
    ctx->pc = 0x158548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158544u;
    // 0x158548: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406D0u;
    { ctx->pc = 0x2406d0; return; }
    ctx->pc = 0x15854Cu;
label_15854c:
    // 0x15854c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_158550:
    if (ctx->pc == 0x158550u) {
        ctx->pc = 0x158554u;
        goto label_158554;
    }
    ctx->pc = 0x15854Cu;
    {
        const bool branch_taken_0x15854c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15854c) {
            ctx->pc = 0x158560u;
            goto label_158560;
        }
    }
    ctx->pc = 0x158554u;
label_158554:
    // 0x158554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x158554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158558:
    // 0x158558: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x158558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_15855c:
    // 0x15855c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x15855cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_158560:
    // 0x158560: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x158560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_158564:
    // 0x158564: 0x0  nop
    ctx->pc = 0x158564u;
    // NOP
label_158568:
    // 0x158568: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x158568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15856c:
    // 0x15856c: 0x24423450  addiu       $v0, $v0, 0x3450
    ctx->pc = 0x15856cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13392));
label_158570:
    // 0x158570: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x158570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_158574:
    // 0x158574: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x158574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_158578:
    // 0x158578: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x158578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15857c:
    // 0x15857c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_158580:
    if (ctx->pc == 0x158580u) {
        ctx->pc = 0x158580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15857Cu;
        // 0x158580: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158584u;
        goto label_158584;
    }
    ctx->pc = 0x15857Cu;
    {
        const bool branch_taken_0x15857c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15857Cu;
        // 0x158580: 0x121840  sll         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15857c) {
            ctx->pc = 0x15852Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15852c;
        }
    }
    ctx->pc = 0x158584u;
label_158584:
    // 0x158584: 0x0  nop
    ctx->pc = 0x158584u;
    // NOP
label_158588:
    // 0x158588: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x158588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15858c:
    // 0x15858c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15858cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_158590:
    // 0x158590: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x158590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_158594:
    // 0x158594: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_158598:
    // 0x158598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15859c:
    // 0x15859c: 0x3e00008  jr          $ra
label_1585a0:
    if (ctx->pc == 0x1585A0u) {
        ctx->pc = 0x1585A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15859Cu;
        // 0x1585a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1585A4u;
        goto label_1585a4;
    }
    ctx->pc = 0x15859Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1585A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15859Cu;
        // 0x1585a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15859Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1585A4u;
label_1585a4:
    // 0x1585a4: 0x0  nop
    ctx->pc = 0x1585a4u;
    // NOP
label_1585a8:
    // 0x1585a8: 0x0  nop
    ctx->pc = 0x1585a8u;
    // NOP
label_1585ac:
    // 0x1585ac: 0x0  nop
    ctx->pc = 0x1585acu;
    // NOP
label_1585b0:
    // 0x1585b0: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x1585b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1585b4:
    // 0x1585b4: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x1585b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
label_1585b8:
    // 0x1585b8: 0x644023  subu        $t0, $v1, $a0
    ctx->pc = 0x1585b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1585bc:
    // 0x1585bc: 0x25292570  addiu       $t1, $t1, 0x2570
    ctx->pc = 0x1585bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9584));
label_1585c0:
    // 0x1585c0: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x1585c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1585c4:
    // 0x1585c4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1585c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1585c8:
    // 0x1585c8: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1585c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1585cc:
    // 0x1585cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1585ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1585d0:
    // 0x1585d0: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x1585d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1585d4:
    // 0x1585d4: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x1585d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1585d8:
    // 0x1585d8: 0x1251821  addu        $v1, $t1, $a1
    ctx->pc = 0x1585d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_1585dc:
    // 0x1585dc: 0x24670000  addiu       $a3, $v1, 0x0
    ctx->pc = 0x1585dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1585e0:
    // 0x1585e0: 0x38850001  xori        $a1, $a0, 0x1
    ctx->pc = 0x1585e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_1585e4:
    // 0x1585e4: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x1585e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1585e8:
    // 0x1585e8: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x1585e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1585ec:
    // 0x1585ec: 0x653823  subu        $a3, $v1, $a1
    ctx->pc = 0x1585ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1585f0:
    // 0x1585f0: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1585f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1585f4:
    // 0x1585f4: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x1585f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1585f8:
    // 0x1585f8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1585f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1585fc:
    // 0x1585fc: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1585fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_158600:
    // 0x158600: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x158600u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_158604:
    // 0x158604: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x158604u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_158608:
    // 0x158608: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x158608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_15860c:
    // 0x15860c: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x15860cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_158610:
    // 0x158610: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x158610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_158614:
    // 0x158614: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x158614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_158618:
    // 0x158618: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_15861c:
    if (ctx->pc == 0x15861Cu) {
        ctx->pc = 0x15861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158618u;
        // 0x15861c: 0xa63821  addu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158620u;
        goto label_158620;
    }
    ctx->pc = 0x158618u;
    {
        const bool branch_taken_0x158618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158618u;
        // 0x15861c: 0xa63821  addu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158618) {
            ctx->pc = 0x1586CCu;
            goto label_1586cc;
        }
    }
    ctx->pc = 0x158620u;
label_158620:
    // 0x158620: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x158620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_158624:
    // 0x158624: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x158624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_158628:
    // 0x158628: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_15862c:
    if (ctx->pc == 0x15862Cu) {
        ctx->pc = 0x15862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158628u;
        // 0x15862c: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158630u;
        goto label_158630;
    }
    ctx->pc = 0x158628u;
    {
        const bool branch_taken_0x158628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158628u;
        // 0x15862c: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158628) {
            ctx->pc = 0x1586CCu;
            goto label_1586cc;
        }
    }
    ctx->pc = 0x158630u;
label_158630:
    // 0x158630: 0x9108003e  lbu         $t0, 0x3E($t0)
    ctx->pc = 0x158630u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 62)));
label_158634:
    // 0x158634: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x158634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_158638:
    // 0x158638: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x158638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_15863c:
    // 0x15863c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15863cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_158640:
    // 0x158640: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x158640u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_158644:
    // 0x158644: 0x90e40034  lbu         $a0, 0x34($a3)
    ctx->pc = 0x158644u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 52)));
label_158648:
    // 0x158648: 0x90e5003e  lbu         $a1, 0x3E($a3)
    ctx->pc = 0x158648u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 62)));
label_15864c:
    // 0x15864c: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x15864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_158650:
    // 0x158650: 0x63a00  sll         $a3, $a2, 8
    ctx->pc = 0x158650u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_158654:
    // 0x158654: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x158654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_158658:
    // 0x158658: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x158658u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_15865c:
    // 0x15865c: 0x24670000  addiu       $a3, $v1, 0x0
    ctx->pc = 0x15865cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_158660:
    // 0x158660: 0x24c61522  addiu       $a2, $a2, 0x1522
    ctx->pc = 0x158660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5410));
label_158664:
    // 0x158664: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x158664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_158668:
    // 0x158668: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x158668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_15866c:
    // 0x15866c: 0x34180  sll         $t0, $v1, 6
    ctx->pc = 0x15866cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_158670:
    // 0x158670: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x158670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_158674:
    // 0x158674: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x158674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_158678:
    // 0x158678: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x158678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15867c:
    // 0x15867c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x15867cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_158680:
    // 0x158680: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x158680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_158684:
    // 0x158684: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x158684u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_158688:
    // 0x158688: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x158688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15868c:
    // 0x15868c: 0x43a00  sll         $a3, $a0, 8
    ctx->pc = 0x15868cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_158690:
    // 0x158690: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x158690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_158694:
    // 0x158694: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x158694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_158698:
    // 0x158698: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x158698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_15869c:
    // 0x15869c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15869cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1586a0:
    // 0x1586a0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1586a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1586a4:
    // 0x1586a4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1586a8:
    if (ctx->pc == 0x1586A8u) {
        ctx->pc = 0x1586ACu;
        goto label_1586ac;
    }
    ctx->pc = 0x1586A4u;
    {
        const bool branch_taken_0x1586a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1586a4) {
            ctx->pc = 0x1586CCu;
            goto label_1586cc;
        }
    }
    ctx->pc = 0x1586ACu;
label_1586ac:
    // 0x1586ac: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1586acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1586b0:
    // 0x1586b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1586b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1586b4:
    // 0x1586b4: 0x832804  sllv        $a1, $v1, $a0
    ctx->pc = 0x1586b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1586b8:
    // 0x1586b8: 0x8d040238  lw          $a0, 0x238($t0)
    ctx->pc = 0x1586b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 568)));
label_1586bc:
    // 0x1586bc: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1586bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1586c0:
    // 0x1586c0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1586c4:
    if (ctx->pc == 0x1586C4u) {
        ctx->pc = 0x1586C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586C0u;
        // 0x1586c4: 0x851825  or          $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1586C8u;
        goto label_1586c8;
    }
    ctx->pc = 0x1586C0u;
    {
        const bool branch_taken_0x1586c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1586C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586C0u;
        // 0x1586c4: 0x851825  or          $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1586c0) {
            ctx->pc = 0x1586CCu;
            goto label_1586cc;
        }
    }
    ctx->pc = 0x1586C8u;
label_1586c8:
    // 0x1586c8: 0xad030238  sw          $v1, 0x238($t0)
    ctx->pc = 0x1586c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 568), GPR_U32(ctx, 3));
label_1586cc:
    // 0x1586cc: 0x3e00008  jr          $ra
label_1586d0:
    if (ctx->pc == 0x1586D0u) {
        ctx->pc = 0x1586D4u;
        goto label_1586d4;
    }
    ctx->pc = 0x1586CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1586CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1586D4u;
label_1586d4:
    // 0x1586d4: 0x0  nop
    ctx->pc = 0x1586d4u;
    // NOP
label_1586d8:
    // 0x1586d8: 0x0  nop
    ctx->pc = 0x1586d8u;
    // NOP
label_1586dc:
    // 0x1586dc: 0x0  nop
    ctx->pc = 0x1586dcu;
    // NOP
label_1586e0:
    // 0x1586e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1586e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1586e4:
    // 0x1586e4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1586e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1586e8:
    // 0x1586e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1586e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1586ec:
    // 0x1586ec: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1586ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1586f0:
    // 0x1586f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1586f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1586f4:
    // 0x1586f4: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1586f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1586f8:
    // 0x1586f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1586f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1586fc:
    // 0x1586fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1586fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_158700:
    // 0x158700: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x158700u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158704:
    // 0x158704: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_158708:
    // 0x158708: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x158708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15870c:
    // 0x15870c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15870cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_158710:
    // 0x158710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x158710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_158714:
    // 0x158714: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x158714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_158718:
    // 0x158718: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x158718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_15871c:
    // 0x15871c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15871cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158720:
    // 0x158720: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x158720u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_158724:
    // 0x158724: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x158724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_158728:
    // 0x158728: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x158728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15872c:
    // 0x15872c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x15872cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158730:
    // 0x158730: 0x123a00  sll         $a3, $s2, 8
    ctx->pc = 0x158730u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
label_158734:
    // 0x158734: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x158734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_158738:
    // 0x158738: 0xf24823  subu        $t1, $a3, $s2
    ctx->pc = 0x158738u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_15873c:
    // 0x15873c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x15873cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_158740:
    // 0x158740: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x158740u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_158744:
    // 0x158744: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158748:
    // 0x158748: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x158748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_15874c:
    // 0x15874c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15874cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_158750:
    // 0x158750: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x158750u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_158754:
    // 0x158754: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x158754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_158758:
    // 0x158758: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x158758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_15875c:
    // 0x15875c: 0x24880000  addiu       $t0, $a0, 0x0
    ctx->pc = 0x15875cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_158760:
    // 0x158760: 0x90640222  lbu         $a0, 0x222($v1)
    ctx->pc = 0x158760u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 546)));
label_158764:
    // 0x158764: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
label_158768:
    if (ctx->pc == 0x158768u) {
        ctx->pc = 0x15876Cu;
        goto label_15876c;
    }
    ctx->pc = 0x158764u;
    {
        const bool branch_taken_0x158764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x158764) {
            ctx->pc = 0x1587B8u;
            goto label_1587b8;
        }
    }
    ctx->pc = 0x15876Cu;
label_15876c:
    // 0x15876c: 0x90640220  lbu         $a0, 0x220($v1)
    ctx->pc = 0x15876cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 544)));
label_158770:
    // 0x158770: 0x12240011  beq         $s1, $a0, . + 4 + (0x11 << 2)
label_158774:
    if (ctx->pc == 0x158774u) {
        ctx->pc = 0x158774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158770u;
        // 0x158774: 0x308900ff  andi        $t1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x158778u;
        goto label_158778;
    }
    ctx->pc = 0x158770u;
    {
        const bool branch_taken_0x158770 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x158774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158770u;
        // 0x158774: 0x308900ff  andi        $t1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158770) {
            ctx->pc = 0x1587B8u;
            goto label_1587b8;
        }
    }
    ctx->pc = 0x158778u;
label_158778:
    // 0x158778: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x158778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_15877c:
    // 0x15877c: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x15877cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_158780:
    // 0x158780: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x158780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_158784:
    // 0x158784: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x158784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_158788:
    // 0x158788: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x158788u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15878c:
    // 0x15878c: 0x91240015  lbu         $a0, 0x15($t1)
    ctx->pc = 0x15878cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 21)));
label_158790:
    // 0x158790: 0x10870009  beq         $a0, $a3, . + 4 + (0x9 << 2)
label_158794:
    if (ctx->pc == 0x158794u) {
        ctx->pc = 0x158798u;
        goto label_158798;
    }
    ctx->pc = 0x158790u;
    {
        const bool branch_taken_0x158790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x158790) {
            ctx->pc = 0x1587B8u;
            goto label_1587b8;
        }
    }
    ctx->pc = 0x158798u;
label_158798:
    // 0x158798: 0x10860007  beq         $a0, $a2, . + 4 + (0x7 << 2)
label_15879c:
    if (ctx->pc == 0x15879Cu) {
        ctx->pc = 0x1587A0u;
        goto label_1587a0;
    }
    ctx->pc = 0x158798u;
    {
        const bool branch_taken_0x158798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x158798) {
            ctx->pc = 0x1587B8u;
            goto label_1587b8;
        }
    }
    ctx->pc = 0x1587A0u;
label_1587a0:
    // 0x1587a0: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
label_1587a4:
    if (ctx->pc == 0x1587A4u) {
        ctx->pc = 0x1587A8u;
        goto label_1587a8;
    }
    ctx->pc = 0x1587A0u;
    {
        const bool branch_taken_0x1587a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1587a0) {
            ctx->pc = 0x1587B8u;
            goto label_1587b8;
        }
    }
    ctx->pc = 0x1587A8u;
label_1587a8:
    // 0x1587a8: 0x91240012  lbu         $a0, 0x12($t1)
    ctx->pc = 0x1587a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 18)));
label_1587ac:
    // 0x1587ac: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_1587b0:
    if (ctx->pc == 0x1587B0u) {
        ctx->pc = 0x1587B4u;
        goto label_1587b4;
    }
    ctx->pc = 0x1587ACu;
    {
        const bool branch_taken_0x1587ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1587ac) {
            ctx->pc = 0x1587B8u;
            goto label_1587b8;
        }
    }
    ctx->pc = 0x1587B4u;
label_1587b4:
    // 0x1587b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1587b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1587b8:
    // 0x1587b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1587b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1587bc:
    // 0x1587bc: 0x2844000c  slti        $a0, $v0, 0xC
    ctx->pc = 0x1587bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
label_1587c0:
    // 0x1587c0: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
label_1587c4:
    if (ctx->pc == 0x1587C4u) {
        ctx->pc = 0x1587C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587C0u;
        // 0x1587c4: 0x24630240  addiu       $v1, $v1, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587C8u;
        goto label_1587c8;
    }
    ctx->pc = 0x1587C0u;
    {
        const bool branch_taken_0x1587c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1587C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587C0u;
        // 0x1587c4: 0x24630240  addiu       $v1, $v1, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587c0) {
            ctx->pc = 0x158760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158760;
        }
    }
    ctx->pc = 0x1587C8u;
label_1587c8:
    // 0x1587c8: 0x1a60003b  blez        $s3, . + 4 + (0x3B << 2)
label_1587cc:
    if (ctx->pc == 0x1587CCu) {
        ctx->pc = 0x1587CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587C8u;
        // 0x1587cc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1587D0u;
        goto label_1587d0;
    }
    ctx->pc = 0x1587C8u;
    {
        const bool branch_taken_0x1587c8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1587CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1587C8u;
        // 0x1587cc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1587c8) {
            ctx->pc = 0x1588B8u;
            { ctx->pc = 0x1588b8; return; }
        }
    }
    ctx->pc = 0x1587D0u;
label_1587d0:
    // 0x1587d0: 0xc08f0cc  jal         func_23C330
label_1587d4:
    if (ctx->pc == 0x1587D4u) {
        ctx->pc = 0x1587D8u;
        goto label_1587d8;
    }
    ctx->pc = 0x1587D0u;
    SET_GPR_U32(ctx, 31, 0x1587D8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1587D8u;
label_1587d8:
    // 0x1587d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1587d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1587dc:
    // 0x1587dc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1587dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    ctx->pc = 0x1587e0u;
    return;
}

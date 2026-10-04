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


void FUN_0014eba0_part145(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1950a0u: goto label_1950a0;
        case 0x1950a4u: goto label_1950a4;
        case 0x1950a8u: goto label_1950a8;
        case 0x1950acu: goto label_1950ac;
        case 0x1950b0u: goto label_1950b0;
        case 0x1950b4u: goto label_1950b4;
        case 0x1950b8u: goto label_1950b8;
        case 0x1950bcu: goto label_1950bc;
        case 0x1950c0u: goto label_1950c0;
        case 0x1950c4u: goto label_1950c4;
        case 0x1950c8u: goto label_1950c8;
        case 0x1950ccu: goto label_1950cc;
        case 0x1950d0u: goto label_1950d0;
        case 0x1950d4u: goto label_1950d4;
        case 0x1950d8u: goto label_1950d8;
        case 0x1950dcu: goto label_1950dc;
        case 0x1950e0u: goto label_1950e0;
        case 0x1950e4u: goto label_1950e4;
        case 0x1950e8u: goto label_1950e8;
        case 0x1950ecu: goto label_1950ec;
        case 0x1950f0u: goto label_1950f0;
        case 0x1950f4u: goto label_1950f4;
        case 0x1950f8u: goto label_1950f8;
        case 0x1950fcu: goto label_1950fc;
        case 0x195100u: goto label_195100;
        case 0x195104u: goto label_195104;
        case 0x195108u: goto label_195108;
        case 0x19510cu: goto label_19510c;
        case 0x195110u: goto label_195110;
        case 0x195114u: goto label_195114;
        case 0x195118u: goto label_195118;
        case 0x19511cu: goto label_19511c;
        case 0x195120u: goto label_195120;
        case 0x195124u: goto label_195124;
        case 0x195128u: goto label_195128;
        case 0x19512cu: goto label_19512c;
        case 0x195130u: goto label_195130;
        case 0x195134u: goto label_195134;
        case 0x195138u: goto label_195138;
        case 0x19513cu: goto label_19513c;
        case 0x195140u: goto label_195140;
        case 0x195144u: goto label_195144;
        case 0x195148u: goto label_195148;
        case 0x19514cu: goto label_19514c;
        case 0x195150u: goto label_195150;
        case 0x195154u: goto label_195154;
        case 0x195158u: goto label_195158;
        case 0x19515cu: goto label_19515c;
        case 0x195160u: goto label_195160;
        case 0x195164u: goto label_195164;
        case 0x195168u: goto label_195168;
        case 0x19516cu: goto label_19516c;
        case 0x195170u: goto label_195170;
        case 0x195174u: goto label_195174;
        case 0x195178u: goto label_195178;
        case 0x19517cu: goto label_19517c;
        case 0x195180u: goto label_195180;
        case 0x195184u: goto label_195184;
        case 0x195188u: goto label_195188;
        case 0x19518cu: goto label_19518c;
        case 0x195190u: goto label_195190;
        case 0x195194u: goto label_195194;
        case 0x195198u: goto label_195198;
        case 0x19519cu: goto label_19519c;
        case 0x1951a0u: goto label_1951a0;
        case 0x1951a4u: goto label_1951a4;
        case 0x1951a8u: goto label_1951a8;
        case 0x1951acu: goto label_1951ac;
        case 0x1951b0u: goto label_1951b0;
        case 0x1951b4u: goto label_1951b4;
        case 0x1951b8u: goto label_1951b8;
        case 0x1951bcu: goto label_1951bc;
        case 0x1951c0u: goto label_1951c0;
        case 0x1951c4u: goto label_1951c4;
        case 0x1951c8u: goto label_1951c8;
        case 0x1951ccu: goto label_1951cc;
        case 0x1951d0u: goto label_1951d0;
        case 0x1951d4u: goto label_1951d4;
        case 0x1951d8u: goto label_1951d8;
        case 0x1951dcu: goto label_1951dc;
        case 0x1951e0u: goto label_1951e0;
        case 0x1951e4u: goto label_1951e4;
        case 0x1951e8u: goto label_1951e8;
        case 0x1951ecu: goto label_1951ec;
        case 0x1951f0u: goto label_1951f0;
        case 0x1951f4u: goto label_1951f4;
        case 0x1951f8u: goto label_1951f8;
        case 0x1951fcu: goto label_1951fc;
        case 0x195200u: goto label_195200;
        case 0x195204u: goto label_195204;
        case 0x195208u: goto label_195208;
        case 0x19520cu: goto label_19520c;
        case 0x195210u: goto label_195210;
        case 0x195214u: goto label_195214;
        case 0x195218u: goto label_195218;
        case 0x19521cu: goto label_19521c;
        case 0x195220u: goto label_195220;
        case 0x195224u: goto label_195224;
        case 0x195228u: goto label_195228;
        case 0x19522cu: goto label_19522c;
        case 0x195230u: goto label_195230;
        case 0x195234u: goto label_195234;
        case 0x195238u: goto label_195238;
        case 0x19523cu: goto label_19523c;
        case 0x195240u: goto label_195240;
        case 0x195244u: goto label_195244;
        case 0x195248u: goto label_195248;
        case 0x19524cu: goto label_19524c;
        case 0x195250u: goto label_195250;
        case 0x195254u: goto label_195254;
        case 0x195258u: goto label_195258;
        case 0x19525cu: goto label_19525c;
        case 0x195260u: goto label_195260;
        case 0x195264u: goto label_195264;
        case 0x195268u: goto label_195268;
        case 0x19526cu: goto label_19526c;
        case 0x195270u: goto label_195270;
        case 0x195274u: goto label_195274;
        case 0x195278u: goto label_195278;
        case 0x19527cu: goto label_19527c;
        case 0x195280u: goto label_195280;
        case 0x195284u: goto label_195284;
        case 0x195288u: goto label_195288;
        case 0x19528cu: goto label_19528c;
        case 0x195290u: goto label_195290;
        case 0x195294u: goto label_195294;
        case 0x195298u: goto label_195298;
        case 0x19529cu: goto label_19529c;
        case 0x1952a0u: goto label_1952a0;
        case 0x1952a4u: goto label_1952a4;
        case 0x1952a8u: goto label_1952a8;
        case 0x1952acu: goto label_1952ac;
        case 0x1952b0u: goto label_1952b0;
        case 0x1952b4u: goto label_1952b4;
        case 0x1952b8u: goto label_1952b8;
        case 0x1952bcu: goto label_1952bc;
        case 0x1952c0u: goto label_1952c0;
        case 0x1952c4u: goto label_1952c4;
        case 0x1952c8u: goto label_1952c8;
        case 0x1952ccu: goto label_1952cc;
        case 0x1952d0u: goto label_1952d0;
        case 0x1952d4u: goto label_1952d4;
        case 0x1952d8u: goto label_1952d8;
        case 0x1952dcu: goto label_1952dc;
        case 0x1952e0u: goto label_1952e0;
        case 0x1952e4u: goto label_1952e4;
        case 0x1952e8u: goto label_1952e8;
        case 0x1952ecu: goto label_1952ec;
        case 0x1952f0u: goto label_1952f0;
        case 0x1952f4u: goto label_1952f4;
        case 0x1952f8u: goto label_1952f8;
        case 0x1952fcu: goto label_1952fc;
        case 0x195300u: goto label_195300;
        case 0x195304u: goto label_195304;
        case 0x195308u: goto label_195308;
        case 0x19530cu: goto label_19530c;
        case 0x195310u: goto label_195310;
        case 0x195314u: goto label_195314;
        case 0x195318u: goto label_195318;
        case 0x19531cu: goto label_19531c;
        case 0x195320u: goto label_195320;
        case 0x195324u: goto label_195324;
        case 0x195328u: goto label_195328;
        case 0x19532cu: goto label_19532c;
        case 0x195330u: goto label_195330;
        case 0x195334u: goto label_195334;
        case 0x195338u: goto label_195338;
        case 0x19533cu: goto label_19533c;
        case 0x195340u: goto label_195340;
        case 0x195344u: goto label_195344;
        case 0x195348u: goto label_195348;
        case 0x19534cu: goto label_19534c;
        case 0x195350u: goto label_195350;
        case 0x195354u: goto label_195354;
        case 0x195358u: goto label_195358;
        case 0x19535cu: goto label_19535c;
        case 0x195360u: goto label_195360;
        case 0x195364u: goto label_195364;
        case 0x195368u: goto label_195368;
        case 0x19536cu: goto label_19536c;
        case 0x195370u: goto label_195370;
        case 0x195374u: goto label_195374;
        case 0x195378u: goto label_195378;
        case 0x19537cu: goto label_19537c;
        case 0x195380u: goto label_195380;
        case 0x195384u: goto label_195384;
        case 0x195388u: goto label_195388;
        case 0x19538cu: goto label_19538c;
        case 0x195390u: goto label_195390;
        case 0x195394u: goto label_195394;
        case 0x195398u: goto label_195398;
        case 0x19539cu: goto label_19539c;
        case 0x1953a0u: goto label_1953a0;
        case 0x1953a4u: goto label_1953a4;
        case 0x1953a8u: goto label_1953a8;
        case 0x1953acu: goto label_1953ac;
        case 0x1953b0u: goto label_1953b0;
        case 0x1953b4u: goto label_1953b4;
        case 0x1953b8u: goto label_1953b8;
        case 0x1953bcu: goto label_1953bc;
        case 0x1953c0u: goto label_1953c0;
        case 0x1953c4u: goto label_1953c4;
        case 0x1953c8u: goto label_1953c8;
        case 0x1953ccu: goto label_1953cc;
        case 0x1953d0u: goto label_1953d0;
        case 0x1953d4u: goto label_1953d4;
        case 0x1953d8u: goto label_1953d8;
        case 0x1953dcu: goto label_1953dc;
        case 0x1953e0u: goto label_1953e0;
        case 0x1953e4u: goto label_1953e4;
        case 0x1953e8u: goto label_1953e8;
        case 0x1953ecu: goto label_1953ec;
        case 0x1953f0u: goto label_1953f0;
        case 0x1953f4u: goto label_1953f4;
        case 0x1953f8u: goto label_1953f8;
        case 0x1953fcu: goto label_1953fc;
        case 0x195400u: goto label_195400;
        case 0x195404u: goto label_195404;
        case 0x195408u: goto label_195408;
        case 0x19540cu: goto label_19540c;
        case 0x195410u: goto label_195410;
        case 0x195414u: goto label_195414;
        case 0x195418u: goto label_195418;
        case 0x19541cu: goto label_19541c;
        case 0x195420u: goto label_195420;
        case 0x195424u: goto label_195424;
        case 0x195428u: goto label_195428;
        case 0x19542cu: goto label_19542c;
        case 0x195430u: goto label_195430;
        case 0x195434u: goto label_195434;
        case 0x195438u: goto label_195438;
        case 0x19543cu: goto label_19543c;
        case 0x195440u: goto label_195440;
        case 0x195444u: goto label_195444;
        case 0x195448u: goto label_195448;
        case 0x19544cu: goto label_19544c;
        case 0x195450u: goto label_195450;
        case 0x195454u: goto label_195454;
        case 0x195458u: goto label_195458;
        case 0x19545cu: goto label_19545c;
        case 0x195460u: goto label_195460;
        case 0x195464u: goto label_195464;
        case 0x195468u: goto label_195468;
        case 0x19546cu: goto label_19546c;
        case 0x195470u: goto label_195470;
        case 0x195474u: goto label_195474;
        case 0x195478u: goto label_195478;
        case 0x19547cu: goto label_19547c;
        case 0x195480u: goto label_195480;
        case 0x195484u: goto label_195484;
        case 0x195488u: goto label_195488;
        case 0x19548cu: goto label_19548c;
        case 0x195490u: goto label_195490;
        case 0x195494u: goto label_195494;
        case 0x195498u: goto label_195498;
        case 0x19549cu: goto label_19549c;
        case 0x1954a0u: goto label_1954a0;
        case 0x1954a4u: goto label_1954a4;
        case 0x1954a8u: goto label_1954a8;
        case 0x1954acu: goto label_1954ac;
        case 0x1954b0u: goto label_1954b0;
        case 0x1954b4u: goto label_1954b4;
        case 0x1954b8u: goto label_1954b8;
        case 0x1954bcu: goto label_1954bc;
        case 0x1954c0u: goto label_1954c0;
        case 0x1954c4u: goto label_1954c4;
        case 0x1954c8u: goto label_1954c8;
        case 0x1954ccu: goto label_1954cc;
        case 0x1954d0u: goto label_1954d0;
        case 0x1954d4u: goto label_1954d4;
        case 0x1954d8u: goto label_1954d8;
        case 0x1954dcu: goto label_1954dc;
        case 0x1954e0u: goto label_1954e0;
        case 0x1954e4u: goto label_1954e4;
        case 0x1954e8u: goto label_1954e8;
        case 0x1954ecu: goto label_1954ec;
        case 0x1954f0u: goto label_1954f0;
        case 0x1954f4u: goto label_1954f4;
        case 0x1954f8u: goto label_1954f8;
        case 0x1954fcu: goto label_1954fc;
        case 0x195500u: goto label_195500;
        case 0x195504u: goto label_195504;
        case 0x195508u: goto label_195508;
        case 0x19550cu: goto label_19550c;
        case 0x195510u: goto label_195510;
        case 0x195514u: goto label_195514;
        case 0x195518u: goto label_195518;
        case 0x19551cu: goto label_19551c;
        case 0x195520u: goto label_195520;
        case 0x195524u: goto label_195524;
        case 0x195528u: goto label_195528;
        case 0x19552cu: goto label_19552c;
        case 0x195530u: goto label_195530;
        case 0x195534u: goto label_195534;
        case 0x195538u: goto label_195538;
        case 0x19553cu: goto label_19553c;
        case 0x195540u: goto label_195540;
        case 0x195544u: goto label_195544;
        case 0x195548u: goto label_195548;
        case 0x19554cu: goto label_19554c;
        case 0x195550u: goto label_195550;
        case 0x195554u: goto label_195554;
        case 0x195558u: goto label_195558;
        case 0x19555cu: goto label_19555c;
        case 0x195560u: goto label_195560;
        case 0x195564u: goto label_195564;
        case 0x195568u: goto label_195568;
        case 0x19556cu: goto label_19556c;
        case 0x195570u: goto label_195570;
        case 0x195574u: goto label_195574;
        case 0x195578u: goto label_195578;
        case 0x19557cu: goto label_19557c;
        case 0x195580u: goto label_195580;
        case 0x195584u: goto label_195584;
        case 0x195588u: goto label_195588;
        case 0x19558cu: goto label_19558c;
        case 0x195590u: goto label_195590;
        case 0x195594u: goto label_195594;
        case 0x195598u: goto label_195598;
        case 0x19559cu: goto label_19559c;
        case 0x1955a0u: goto label_1955a0;
        case 0x1955a4u: goto label_1955a4;
        case 0x1955a8u: goto label_1955a8;
        case 0x1955acu: goto label_1955ac;
        case 0x1955b0u: goto label_1955b0;
        case 0x1955b4u: goto label_1955b4;
        case 0x1955b8u: goto label_1955b8;
        case 0x1955bcu: goto label_1955bc;
        case 0x1955c0u: goto label_1955c0;
        case 0x1955c4u: goto label_1955c4;
        case 0x1955c8u: goto label_1955c8;
        case 0x1955ccu: goto label_1955cc;
        case 0x1955d0u: goto label_1955d0;
        case 0x1955d4u: goto label_1955d4;
        case 0x1955d8u: goto label_1955d8;
        case 0x1955dcu: goto label_1955dc;
        case 0x1955e0u: goto label_1955e0;
        case 0x1955e4u: goto label_1955e4;
        case 0x1955e8u: goto label_1955e8;
        case 0x1955ecu: goto label_1955ec;
        case 0x1955f0u: goto label_1955f0;
        case 0x1955f4u: goto label_1955f4;
        case 0x1955f8u: goto label_1955f8;
        case 0x1955fcu: goto label_1955fc;
        case 0x195600u: goto label_195600;
        case 0x195604u: goto label_195604;
        case 0x195608u: goto label_195608;
        case 0x19560cu: goto label_19560c;
        case 0x195610u: goto label_195610;
        case 0x195614u: goto label_195614;
        case 0x195618u: goto label_195618;
        case 0x19561cu: goto label_19561c;
        case 0x195620u: goto label_195620;
        case 0x195624u: goto label_195624;
        case 0x195628u: goto label_195628;
        case 0x19562cu: goto label_19562c;
        case 0x195630u: goto label_195630;
        case 0x195634u: goto label_195634;
        case 0x195638u: goto label_195638;
        case 0x19563cu: goto label_19563c;
        case 0x195640u: goto label_195640;
        case 0x195644u: goto label_195644;
        case 0x195648u: goto label_195648;
        case 0x19564cu: goto label_19564c;
        case 0x195650u: goto label_195650;
        case 0x195654u: goto label_195654;
        case 0x195658u: goto label_195658;
        case 0x19565cu: goto label_19565c;
        case 0x195660u: goto label_195660;
        case 0x195664u: goto label_195664;
        case 0x195668u: goto label_195668;
        case 0x19566cu: goto label_19566c;
        case 0x195670u: goto label_195670;
        case 0x195674u: goto label_195674;
        case 0x195678u: goto label_195678;
        case 0x19567cu: goto label_19567c;
        case 0x195680u: goto label_195680;
        case 0x195684u: goto label_195684;
        case 0x195688u: goto label_195688;
        case 0x19568cu: goto label_19568c;
        case 0x195690u: goto label_195690;
        case 0x195694u: goto label_195694;
        case 0x195698u: goto label_195698;
        case 0x19569cu: goto label_19569c;
        case 0x1956a0u: goto label_1956a0;
        case 0x1956a4u: goto label_1956a4;
        case 0x1956a8u: goto label_1956a8;
        case 0x1956acu: goto label_1956ac;
        case 0x1956b0u: goto label_1956b0;
        case 0x1956b4u: goto label_1956b4;
        case 0x1956b8u: goto label_1956b8;
        case 0x1956bcu: goto label_1956bc;
        case 0x1956c0u: goto label_1956c0;
        case 0x1956c4u: goto label_1956c4;
        case 0x1956c8u: goto label_1956c8;
        case 0x1956ccu: goto label_1956cc;
        case 0x1956d0u: goto label_1956d0;
        case 0x1956d4u: goto label_1956d4;
        case 0x1956d8u: goto label_1956d8;
        case 0x1956dcu: goto label_1956dc;
        case 0x1956e0u: goto label_1956e0;
        case 0x1956e4u: goto label_1956e4;
        case 0x1956e8u: goto label_1956e8;
        case 0x1956ecu: goto label_1956ec;
        case 0x1956f0u: goto label_1956f0;
        case 0x1956f4u: goto label_1956f4;
        case 0x1956f8u: goto label_1956f8;
        case 0x1956fcu: goto label_1956fc;
        case 0x195700u: goto label_195700;
        case 0x195704u: goto label_195704;
        case 0x195708u: goto label_195708;
        case 0x19570cu: goto label_19570c;
        case 0x195710u: goto label_195710;
        case 0x195714u: goto label_195714;
        case 0x195718u: goto label_195718;
        case 0x19571cu: goto label_19571c;
        case 0x195720u: goto label_195720;
        case 0x195724u: goto label_195724;
        case 0x195728u: goto label_195728;
        case 0x19572cu: goto label_19572c;
        case 0x195730u: goto label_195730;
        case 0x195734u: goto label_195734;
        case 0x195738u: goto label_195738;
        case 0x19573cu: goto label_19573c;
        case 0x195740u: goto label_195740;
        case 0x195744u: goto label_195744;
        case 0x195748u: goto label_195748;
        case 0x19574cu: goto label_19574c;
        case 0x195750u: goto label_195750;
        case 0x195754u: goto label_195754;
        case 0x195758u: goto label_195758;
        case 0x19575cu: goto label_19575c;
        case 0x195760u: goto label_195760;
        case 0x195764u: goto label_195764;
        case 0x195768u: goto label_195768;
        case 0x19576cu: goto label_19576c;
        case 0x195770u: goto label_195770;
        case 0x195774u: goto label_195774;
        case 0x195778u: goto label_195778;
        case 0x19577cu: goto label_19577c;
        case 0x195780u: goto label_195780;
        case 0x195784u: goto label_195784;
        case 0x195788u: goto label_195788;
        case 0x19578cu: goto label_19578c;
        case 0x195790u: goto label_195790;
        case 0x195794u: goto label_195794;
        case 0x195798u: goto label_195798;
        case 0x19579cu: goto label_19579c;
        case 0x1957a0u: goto label_1957a0;
        case 0x1957a4u: goto label_1957a4;
        case 0x1957a8u: goto label_1957a8;
        case 0x1957acu: goto label_1957ac;
        case 0x1957b0u: goto label_1957b0;
        case 0x1957b4u: goto label_1957b4;
        case 0x1957b8u: goto label_1957b8;
        case 0x1957bcu: goto label_1957bc;
        case 0x1957c0u: goto label_1957c0;
        case 0x1957c4u: goto label_1957c4;
        case 0x1957c8u: goto label_1957c8;
        case 0x1957ccu: goto label_1957cc;
        case 0x1957d0u: goto label_1957d0;
        case 0x1957d4u: goto label_1957d4;
        case 0x1957d8u: goto label_1957d8;
        case 0x1957dcu: goto label_1957dc;
        case 0x1957e0u: goto label_1957e0;
        case 0x1957e4u: goto label_1957e4;
        case 0x1957e8u: goto label_1957e8;
        case 0x1957ecu: goto label_1957ec;
        case 0x1957f0u: goto label_1957f0;
        case 0x1957f4u: goto label_1957f4;
        case 0x1957f8u: goto label_1957f8;
        case 0x1957fcu: goto label_1957fc;
        case 0x195800u: goto label_195800;
        case 0x195804u: goto label_195804;
        case 0x195808u: goto label_195808;
        case 0x19580cu: goto label_19580c;
        case 0x195810u: goto label_195810;
        case 0x195814u: goto label_195814;
        case 0x195818u: goto label_195818;
        case 0x19581cu: goto label_19581c;
        case 0x195820u: goto label_195820;
        case 0x195824u: goto label_195824;
        case 0x195828u: goto label_195828;
        case 0x19582cu: goto label_19582c;
        case 0x195830u: goto label_195830;
        case 0x195834u: goto label_195834;
        case 0x195838u: goto label_195838;
        case 0x19583cu: goto label_19583c;
        case 0x195840u: goto label_195840;
        case 0x195844u: goto label_195844;
        case 0x195848u: goto label_195848;
        case 0x19584cu: goto label_19584c;
        case 0x195850u: goto label_195850;
        case 0x195854u: goto label_195854;
        case 0x195858u: goto label_195858;
        case 0x19585cu: goto label_19585c;
        case 0x195860u: goto label_195860;
        case 0x195864u: goto label_195864;
        case 0x195868u: goto label_195868;
        case 0x19586cu: goto label_19586c;
        default: return;
    }

label_1950a0:
    if (ctx->pc == 0x1950A0u) {
        ctx->pc = 0x1950A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19509Cu;
        // 0x1950a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1950A4u;
        goto label_1950a4;
    }
    ctx->pc = 0x19509Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1950A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19509Cu;
        // 0x1950a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19509Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1950A4u;
label_1950a4:
    // 0x1950a4: 0x0  nop
    ctx->pc = 0x1950a4u;
    // NOP
label_1950a8:
    // 0x1950a8: 0x0  nop
    ctx->pc = 0x1950a8u;
    // NOP
label_1950ac:
    // 0x1950ac: 0x0  nop
    ctx->pc = 0x1950acu;
    // NOP
label_1950b0:
    // 0x1950b0: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_1950b4:
    if (ctx->pc == 0x1950B4u) {
        ctx->pc = 0x1950B8u;
        goto label_1950b8;
    }
    ctx->pc = 0x1950B0u;
    {
        const bool branch_taken_0x1950b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1950b0) {
            ctx->pc = 0x1950D0u;
            goto label_1950d0;
        }
    }
    ctx->pc = 0x1950B8u;
label_1950b8:
    // 0x1950b8: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x1950b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1950bc:
    // 0x1950bc: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1950bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1950c0:
    // 0x1950c0: 0x14e30007  bne         $a3, $v1, . + 4 + (0x7 << 2)
label_1950c4:
    if (ctx->pc == 0x1950C4u) {
        ctx->pc = 0x1950C8u;
        goto label_1950c8;
    }
    ctx->pc = 0x1950C0u;
    {
        const bool branch_taken_0x1950c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x1950c0) {
            ctx->pc = 0x1950E0u;
            goto label_1950e0;
        }
    }
    ctx->pc = 0x1950C8u;
label_1950c8:
    // 0x1950c8: 0x1000012e  b           . + 4 + (0x12E << 2)
label_1950cc:
    if (ctx->pc == 0x1950CCu) {
        ctx->pc = 0x1950D0u;
        goto label_1950d0;
    }
    ctx->pc = 0x1950C8u;
    {
        const bool branch_taken_0x1950c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1950c8) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x1950D0u;
label_1950d0:
    // 0x1950d0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1950d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1950d4:
    // 0x1950d4: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x1950d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1950d8:
    // 0x1950d8: 0x1020012a  beqz        $at, . + 4 + (0x12A << 2)
label_1950dc:
    if (ctx->pc == 0x1950DCu) {
        ctx->pc = 0x1950E0u;
        goto label_1950e0;
    }
    ctx->pc = 0x1950D8u;
    {
        const bool branch_taken_0x1950d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1950d8) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x1950E0u;
label_1950e0:
    // 0x1950e0: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
label_1950e4:
    if (ctx->pc == 0x1950E4u) {
        ctx->pc = 0x1950E8u;
        goto label_1950e8;
    }
    ctx->pc = 0x1950E0u;
    {
        const bool branch_taken_0x1950e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1950e0) {
            ctx->pc = 0x195104u;
            goto label_195104;
        }
    }
    ctx->pc = 0x1950E8u;
label_1950e8:
    // 0x1950e8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x1950e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1950ec:
    // 0x1950ec: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1950ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1950f0:
    // 0x1950f0: 0x2463a230  addiu       $v1, $v1, -0x5DD0
    ctx->pc = 0x1950f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943280));
label_1950f4:
    // 0x1950f4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1950f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1950f8:
    // 0x1950f8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1950f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1950fc:
    // 0x1950fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_195100:
    if (ctx->pc == 0x195100u) {
        ctx->pc = 0x195100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950FCu;
        // 0x195100: 0xdc670000  ld          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195104u;
        goto label_195104;
    }
    ctx->pc = 0x1950FCu;
    {
        const bool branch_taken_0x1950fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950FCu;
        // 0x195100: 0xdc670000  ld          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950fc) {
            ctx->pc = 0x195120u;
            goto label_195120;
        }
    }
    ctx->pc = 0x195104u;
label_195104:
    // 0x195104: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x195104u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_195108:
    // 0x195108: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x195108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_19510c:
    // 0x19510c: 0x2463a4b0  addiu       $v1, $v1, -0x5B50
    ctx->pc = 0x19510cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943920));
label_195110:
    // 0x195110: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x195110u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_195114:
    // 0x195114: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x195114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_195118:
    // 0x195118: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x195118u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_19511c:
    // 0x19511c: 0x0  nop
    ctx->pc = 0x19511cu;
    // NOP
label_195120:
    // 0x195120: 0xdc860270  ld          $a2, 0x270($a0)
    ctx->pc = 0x195120u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 624)));
label_195124:
    // 0x195124: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x195124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_195128:
    // 0x195128: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x195128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_19512c:
    // 0x19512c: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_195130:
    if (ctx->pc == 0x195130u) {
        ctx->pc = 0x195130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19512Cu;
        // 0x195130: 0xfc860270  sd          $a2, 0x270($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 624), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195134u;
        goto label_195134;
    }
    ctx->pc = 0x19512Cu;
    {
        const bool branch_taken_0x19512c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19512Cu;
        // 0x195130: 0xfc860270  sd          $a2, 0x270($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 624), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19512c) {
            ctx->pc = 0x195200u;
            goto label_195200;
        }
    }
    ctx->pc = 0x195134u;
label_195134:
    // 0x195134: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x195134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195138:
    // 0x195138: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_19513c:
    if (ctx->pc == 0x19513Cu) {
        ctx->pc = 0x19513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195138u;
        // 0x19513c: 0x33042  srl         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195140u;
        goto label_195140;
    }
    ctx->pc = 0x195138u;
    {
        const bool branch_taken_0x195138 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x19513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195138u;
        // 0x19513c: 0x33042  srl         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195138) {
            ctx->pc = 0x19514Cu;
            goto label_19514c;
        }
    }
    ctx->pc = 0x195140u;
label_195140:
    // 0x195140: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x195140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195144:
    // 0x195144: 0x10000007  b           . + 4 + (0x7 << 2)
label_195148:
    if (ctx->pc == 0x195148u) {
        ctx->pc = 0x195148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195144u;
        // 0x195148: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19514Cu;
        goto label_19514c;
    }
    ctx->pc = 0x195144u;
    {
        const bool branch_taken_0x195144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195144u;
        // 0x195148: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195144) {
            ctx->pc = 0x195164u;
            goto label_195164;
        }
    }
    ctx->pc = 0x19514Cu;
label_19514c:
    // 0x19514c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19514cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_195150:
    // 0x195150: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x195150u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_195154:
    // 0x195154: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x195154u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195158:
    // 0x195158: 0x0  nop
    ctx->pc = 0x195158u;
    // NOP
label_19515c:
    // 0x19515c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19515cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_195160:
    // 0x195160: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x195160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_195164:
    // 0x195164: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x195164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_195168:
    // 0x195168: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x195168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_19516c:
    // 0x19516c: 0xc48001e4  lwc1        $f0, 0x1E4($a0)
    ctx->pc = 0x19516cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_195170:
    // 0x195170: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x195170u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
label_195174:
    // 0x195174: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x195174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_195178:
    // 0x195178: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x195178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19517c:
    // 0x19517c: 0xe48001e4  swc1        $f0, 0x1E4($a0)
    ctx->pc = 0x19517cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 484), bits); }
label_195180:
    // 0x195180: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x195180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_195184:
    // 0x195184: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x195184u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_195188:
    // 0x195188: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x195188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19518c:
    // 0x19518c: 0x0  nop
    ctx->pc = 0x19518cu;
    // NOP
label_195190:
    // 0x195190: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_195194:
    if (ctx->pc == 0x195194u) {
        ctx->pc = 0x195198u;
        goto label_195198;
    }
    ctx->pc = 0x195190u;
    {
        const bool branch_taken_0x195190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x195190) {
            ctx->pc = 0x19519Cu;
            goto label_19519c;
        }
    }
    ctx->pc = 0x195198u;
label_195198:
    // 0x195198: 0xe48201e4  swc1        $f2, 0x1E4($a0)
    ctx->pc = 0x195198u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 484), bits); }
label_19519c:
    // 0x19519c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x19519cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1951a0:
    // 0x1951a0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1951a4:
    if (ctx->pc == 0x1951A4u) {
        ctx->pc = 0x1951A8u;
        goto label_1951a8;
    }
    ctx->pc = 0x1951A0u;
    {
        const bool branch_taken_0x1951a0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1951a0) {
            ctx->pc = 0x1951B4u;
            goto label_1951b4;
        }
    }
    ctx->pc = 0x1951A8u;
label_1951a8:
    // 0x1951a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1951a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1951ac:
    // 0x1951ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_1951b0:
    if (ctx->pc == 0x1951B0u) {
        ctx->pc = 0x1951B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951ACu;
        // 0x1951b0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1951B4u;
        goto label_1951b4;
    }
    ctx->pc = 0x1951ACu;
    {
        const bool branch_taken_0x1951ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1951B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951ACu;
        // 0x1951b0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951ac) {
            ctx->pc = 0x1951D0u;
            goto label_1951d0;
        }
    }
    ctx->pc = 0x1951B4u;
label_1951b4:
    // 0x1951b4: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x1951b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1951b8:
    // 0x1951b8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1951b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1951bc:
    // 0x1951bc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1951bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1951c0:
    // 0x1951c0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1951c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1951c4:
    // 0x1951c4: 0x0  nop
    ctx->pc = 0x1951c4u;
    // NOP
label_1951c8:
    // 0x1951c8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1951c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1951cc:
    // 0x1951cc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1951ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1951d0:
    // 0x1951d0: 0x3c053f33  lui         $a1, 0x3F33
    ctx->pc = 0x1951d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16179 << 16));
label_1951d4:
    // 0x1951d4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1951d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_1951d8:
    // 0x1951d8: 0x34a53333  ori         $a1, $a1, 0x3333
    ctx->pc = 0x1951d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13107);
label_1951dc:
    // 0x1951dc: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1951dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1951e0:
    // 0x1951e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1951e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1951e4:
    // 0x1951e4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1951e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1951e8:
    // 0x1951e8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1951e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1951ec:
    // 0x1951ec: 0xc48001e8  lwc1        $f0, 0x1E8($a0)
    ctx->pc = 0x1951ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1951f0:
    // 0x1951f0: 0x0  nop
    ctx->pc = 0x1951f0u;
    // NOP
label_1951f4:
    // 0x1951f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1951f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1951f8:
    // 0x1951f8: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_1951fc:
    if (ctx->pc == 0x1951FCu) {
        ctx->pc = 0x1951FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951F8u;
        // 0x1951fc: 0xe48001e8  swc1        $f0, 0x1E8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 488), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x195200u;
        goto label_195200;
    }
    ctx->pc = 0x1951F8u;
    {
        const bool branch_taken_0x1951f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1951FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951F8u;
        // 0x1951fc: 0xe48001e8  swc1        $f0, 0x1E8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 488), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1951f8) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x195200u;
label_195200:
    // 0x195200: 0x30e30002  andi        $v1, $a3, 0x2
    ctx->pc = 0x195200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
label_195204:
    // 0x195204: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_195208:
    if (ctx->pc == 0x195208u) {
        ctx->pc = 0x195208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195204u;
        // 0x195208: 0x30e30004  andi        $v1, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19520Cu;
        goto label_19520c;
    }
    ctx->pc = 0x195204u;
    {
        const bool branch_taken_0x195204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195204u;
        // 0x195208: 0x30e30004  andi        $v1, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195204) {
            ctx->pc = 0x19527Cu;
            goto label_19527c;
        }
    }
    ctx->pc = 0x19520Cu;
label_19520c:
    // 0x19520c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x19520cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195210:
    // 0x195210: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_195214:
    if (ctx->pc == 0x195214u) {
        ctx->pc = 0x195218u;
        goto label_195218;
    }
    ctx->pc = 0x195210u;
    {
        const bool branch_taken_0x195210 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x195210) {
            ctx->pc = 0x195224u;
            goto label_195224;
        }
    }
    ctx->pc = 0x195218u;
label_195218:
    // 0x195218: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x195218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19521c:
    // 0x19521c: 0x10000008  b           . + 4 + (0x8 << 2)
label_195220:
    if (ctx->pc == 0x195220u) {
        ctx->pc = 0x195220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19521Cu;
        // 0x195220: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x195224u;
        goto label_195224;
    }
    ctx->pc = 0x19521Cu;
    {
        const bool branch_taken_0x19521c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19521Cu;
        // 0x195220: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19521c) {
            ctx->pc = 0x195240u;
            goto label_195240;
        }
    }
    ctx->pc = 0x195224u;
label_195224:
    // 0x195224: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x195224u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_195228:
    // 0x195228: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x195228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_19522c:
    // 0x19522c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x19522cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_195230:
    // 0x195230: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x195230u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195234:
    // 0x195234: 0x0  nop
    ctx->pc = 0x195234u;
    // NOP
label_195238:
    // 0x195238: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x195238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19523c:
    // 0x19523c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19523cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_195240:
    // 0x195240: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x195240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_195244:
    // 0x195244: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x195244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_195248:
    // 0x195248: 0xc48001ec  lwc1        $f0, 0x1EC($a0)
    ctx->pc = 0x195248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19524c:
    // 0x19524c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x19524cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_195250:
    // 0x195250: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x195250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_195254:
    // 0x195254: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x195254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_195258:
    // 0x195258: 0xe48001ec  swc1        $f0, 0x1EC($a0)
    ctx->pc = 0x195258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 492), bits); }
label_19525c:
    // 0x19525c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x19525cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_195260:
    // 0x195260: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x195260u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_195264:
    // 0x195264: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x195264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_195268:
    // 0x195268: 0x0  nop
    ctx->pc = 0x195268u;
    // NOP
label_19526c:
    // 0x19526c: 0x450000c5  bc1f        . + 4 + (0xC5 << 2)
label_195270:
    if (ctx->pc == 0x195270u) {
        ctx->pc = 0x195274u;
        goto label_195274;
    }
    ctx->pc = 0x19526Cu;
    {
        const bool branch_taken_0x19526c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19526c) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x195274u;
label_195274:
    // 0x195274: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_195278:
    if (ctx->pc == 0x195278u) {
        ctx->pc = 0x195278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195274u;
        // 0x195278: 0xe48301ec  swc1        $f3, 0x1EC($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 492), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19527Cu;
        goto label_19527c;
    }
    ctx->pc = 0x195274u;
    {
        const bool branch_taken_0x195274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195274u;
        // 0x195278: 0xe48301ec  swc1        $f3, 0x1EC($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 492), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195274) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x19527Cu;
label_19527c:
    // 0x19527c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_195280:
    if (ctx->pc == 0x195280u) {
        ctx->pc = 0x195284u;
        goto label_195284;
    }
    ctx->pc = 0x19527Cu;
    {
        const bool branch_taken_0x19527c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19527c) {
            ctx->pc = 0x1952ACu;
            goto label_1952ac;
        }
    }
    ctx->pc = 0x195284u;
label_195284:
    // 0x195284: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x195284u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195288:
    // 0x195288: 0x84830252  lh          $v1, 0x252($a0)
    ctx->pc = 0x195288u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 594)));
label_19528c:
    // 0x19528c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19528cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_195290:
    // 0x195290: 0xa4830252  sh          $v1, 0x252($a0)
    ctx->pc = 0x195290u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 594), (uint16_t)GPR_U32(ctx, 3));
label_195294:
    // 0x195294: 0x84830252  lh          $v1, 0x252($a0)
    ctx->pc = 0x195294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 594)));
label_195298:
    // 0x195298: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x195298u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
label_19529c:
    // 0x19529c: 0x142000b9  bnez        $at, . + 4 + (0xB9 << 2)
label_1952a0:
    if (ctx->pc == 0x1952A0u) {
        ctx->pc = 0x1952A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19529Cu;
        // 0x1952a0: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952A4u;
        goto label_1952a4;
    }
    ctx->pc = 0x19529Cu;
    {
        const bool branch_taken_0x19529c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1952A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19529Cu;
        // 0x1952a0: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19529c) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x1952A4u;
label_1952a4:
    // 0x1952a4: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_1952a8:
    if (ctx->pc == 0x1952A8u) {
        ctx->pc = 0x1952A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952A4u;
        // 0x1952a8: 0xa4830252  sh          $v1, 0x252($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 594), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952ACu;
        goto label_1952ac;
    }
    ctx->pc = 0x1952A4u;
    {
        const bool branch_taken_0x1952a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1952A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952A4u;
        // 0x1952a8: 0xa4830252  sh          $v1, 0x252($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 594), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952a4) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x1952ACu;
label_1952ac:
    // 0x1952ac: 0x30e30008  andi        $v1, $a3, 0x8
    ctx->pc = 0x1952acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_1952b0:
    // 0x1952b0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1952b4:
    if (ctx->pc == 0x1952B4u) {
        ctx->pc = 0x1952B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952B0u;
        // 0x1952b4: 0x30e30010  andi        $v1, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952B8u;
        goto label_1952b8;
    }
    ctx->pc = 0x1952B0u;
    {
        const bool branch_taken_0x1952b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1952B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952B0u;
        // 0x1952b4: 0x30e30010  andi        $v1, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952b0) {
            ctx->pc = 0x1952E0u;
            goto label_1952e0;
        }
    }
    ctx->pc = 0x1952B8u;
label_1952b8:
    // 0x1952b8: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x1952b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1952bc:
    // 0x1952bc: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x1952bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
label_1952c0:
    // 0x1952c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1952c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1952c4:
    // 0x1952c4: 0xa4830220  sh          $v1, 0x220($a0)
    ctx->pc = 0x1952c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 544), (uint16_t)GPR_U32(ctx, 3));
label_1952c8:
    // 0x1952c8: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x1952c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
label_1952cc:
    // 0x1952cc: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x1952ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
label_1952d0:
    // 0x1952d0: 0x142000ac  bnez        $at, . + 4 + (0xAC << 2)
label_1952d4:
    if (ctx->pc == 0x1952D4u) {
        ctx->pc = 0x1952D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952D0u;
        // 0x1952d4: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952D8u;
        goto label_1952d8;
    }
    ctx->pc = 0x1952D0u;
    {
        const bool branch_taken_0x1952d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1952D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952D0u;
        // 0x1952d4: 0x24030190  addiu       $v1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952d0) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x1952D8u;
label_1952d8:
    // 0x1952d8: 0x100000aa  b           . + 4 + (0xAA << 2)
label_1952dc:
    if (ctx->pc == 0x1952DCu) {
        ctx->pc = 0x1952DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952D8u;
        // 0x1952dc: 0xa4830220  sh          $v1, 0x220($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1952E0u;
        goto label_1952e0;
    }
    ctx->pc = 0x1952D8u;
    {
        const bool branch_taken_0x1952d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1952DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1952D8u;
        // 0x1952dc: 0xa4830220  sh          $v1, 0x220($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1952d8) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x1952E0u;
label_1952e0:
    // 0x1952e0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1952e4:
    if (ctx->pc == 0x1952E4u) {
        ctx->pc = 0x1952E8u;
        goto label_1952e8;
    }
    ctx->pc = 0x1952E0u;
    {
        const bool branch_taken_0x1952e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1952e0) {
            ctx->pc = 0x195318u;
            goto label_195318;
        }
    }
    ctx->pc = 0x1952E8u;
label_1952e8:
    // 0x1952e8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1952e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1952ec:
    // 0x1952ec: 0x9085024a  lbu         $a1, 0x24A($a0)
    ctx->pc = 0x1952ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 586)));
label_1952f0:
    // 0x1952f0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1952f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1952f4:
    // 0x1952f4: 0x286100fa  slti        $at, $v1, 0xFA
    ctx->pc = 0x1952f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
label_1952f8:
    // 0x1952f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1952fc:
    if (ctx->pc == 0x1952FCu) {
        ctx->pc = 0x195300u;
        goto label_195300;
    }
    ctx->pc = 0x1952F8u;
    {
        const bool branch_taken_0x1952f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1952f8) {
            ctx->pc = 0x195308u;
            goto label_195308;
        }
    }
    ctx->pc = 0x195300u;
label_195300:
    // 0x195300: 0x10000003  b           . + 4 + (0x3 << 2)
label_195304:
    if (ctx->pc == 0x195304u) {
        ctx->pc = 0x195304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195300u;
        // 0x195304: 0xa083024a  sb          $v1, 0x24A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195308u;
        goto label_195308;
    }
    ctx->pc = 0x195300u;
    {
        const bool branch_taken_0x195300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195300u;
        // 0x195304: 0xa083024a  sb          $v1, 0x24A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195300) {
            ctx->pc = 0x195310u;
            goto label_195310;
        }
    }
    ctx->pc = 0x195308u;
label_195308:
    // 0x195308: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x195308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_19530c:
    // 0x19530c: 0xa083024a  sb          $v1, 0x24A($a0)
    ctx->pc = 0x19530cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 586), (uint8_t)GPR_U32(ctx, 3));
label_195310:
    // 0x195310: 0x1000009c  b           . + 4 + (0x9C << 2)
label_195314:
    if (ctx->pc == 0x195314u) {
        ctx->pc = 0x195318u;
        goto label_195318;
    }
    ctx->pc = 0x195310u;
    {
        const bool branch_taken_0x195310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195310) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x195318u;
label_195318:
    // 0x195318: 0x30e30020  andi        $v1, $a3, 0x20
    ctx->pc = 0x195318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
label_19531c:
    // 0x19531c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_195320:
    if (ctx->pc == 0x195320u) {
        ctx->pc = 0x195320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19531Cu;
        // 0x195320: 0x30e30040  andi        $v1, $a3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195324u;
        goto label_195324;
    }
    ctx->pc = 0x19531Cu;
    {
        const bool branch_taken_0x19531c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19531Cu;
        // 0x195320: 0x30e30040  andi        $v1, $a3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19531c) {
            ctx->pc = 0x195354u;
            goto label_195354;
        }
    }
    ctx->pc = 0x195324u;
label_195324:
    // 0x195324: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x195324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195328:
    // 0x195328: 0x9085024b  lbu         $a1, 0x24B($a0)
    ctx->pc = 0x195328u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
label_19532c:
    // 0x19532c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19532cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_195330:
    // 0x195330: 0x286100fa  slti        $at, $v1, 0xFA
    ctx->pc = 0x195330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
label_195334:
    // 0x195334: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_195338:
    if (ctx->pc == 0x195338u) {
        ctx->pc = 0x19533Cu;
        goto label_19533c;
    }
    ctx->pc = 0x195334u;
    {
        const bool branch_taken_0x195334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x195334) {
            ctx->pc = 0x195344u;
            goto label_195344;
        }
    }
    ctx->pc = 0x19533Cu;
label_19533c:
    // 0x19533c: 0x10000003  b           . + 4 + (0x3 << 2)
label_195340:
    if (ctx->pc == 0x195340u) {
        ctx->pc = 0x195340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19533Cu;
        // 0x195340: 0xa083024b  sb          $v1, 0x24B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 587), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195344u;
        goto label_195344;
    }
    ctx->pc = 0x19533Cu;
    {
        const bool branch_taken_0x19533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19533Cu;
        // 0x195340: 0xa083024b  sb          $v1, 0x24B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 587), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19533c) {
            ctx->pc = 0x19534Cu;
            goto label_19534c;
        }
    }
    ctx->pc = 0x195344u;
label_195344:
    // 0x195344: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x195344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_195348:
    // 0x195348: 0xa083024b  sb          $v1, 0x24B($a0)
    ctx->pc = 0x195348u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 587), (uint8_t)GPR_U32(ctx, 3));
label_19534c:
    // 0x19534c: 0x1000008d  b           . + 4 + (0x8D << 2)
label_195350:
    if (ctx->pc == 0x195350u) {
        ctx->pc = 0x195354u;
        goto label_195354;
    }
    ctx->pc = 0x19534Cu;
    {
        const bool branch_taken_0x19534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19534c) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x195354u;
label_195354:
    // 0x195354: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_195358:
    if (ctx->pc == 0x195358u) {
        ctx->pc = 0x19535Cu;
        goto label_19535c;
    }
    ctx->pc = 0x195354u;
    {
        const bool branch_taken_0x195354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195354) {
            ctx->pc = 0x19538Cu;
            goto label_19538c;
        }
    }
    ctx->pc = 0x19535Cu;
label_19535c:
    // 0x19535c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x19535cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195360:
    // 0x195360: 0x9085024c  lbu         $a1, 0x24C($a0)
    ctx->pc = 0x195360u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 588)));
label_195364:
    // 0x195364: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x195364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_195368:
    // 0x195368: 0x286100fa  slti        $at, $v1, 0xFA
    ctx->pc = 0x195368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
label_19536c:
    // 0x19536c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_195370:
    if (ctx->pc == 0x195370u) {
        ctx->pc = 0x195374u;
        goto label_195374;
    }
    ctx->pc = 0x19536Cu;
    {
        const bool branch_taken_0x19536c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19536c) {
            ctx->pc = 0x19537Cu;
            goto label_19537c;
        }
    }
    ctx->pc = 0x195374u;
label_195374:
    // 0x195374: 0x10000003  b           . + 4 + (0x3 << 2)
label_195378:
    if (ctx->pc == 0x195378u) {
        ctx->pc = 0x195378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195374u;
        // 0x195378: 0xa083024c  sb          $v1, 0x24C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 588), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19537Cu;
        goto label_19537c;
    }
    ctx->pc = 0x195374u;
    {
        const bool branch_taken_0x195374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195374u;
        // 0x195378: 0xa083024c  sb          $v1, 0x24C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 588), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195374) {
            ctx->pc = 0x195384u;
            goto label_195384;
        }
    }
    ctx->pc = 0x19537Cu;
label_19537c:
    // 0x19537c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x19537cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_195380:
    // 0x195380: 0xa083024c  sb          $v1, 0x24C($a0)
    ctx->pc = 0x195380u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 588), (uint8_t)GPR_U32(ctx, 3));
label_195384:
    // 0x195384: 0x1000007f  b           . + 4 + (0x7F << 2)
label_195388:
    if (ctx->pc == 0x195388u) {
        ctx->pc = 0x19538Cu;
        goto label_19538c;
    }
    ctx->pc = 0x195384u;
    {
        const bool branch_taken_0x195384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195384) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x19538Cu;
label_19538c:
    // 0x19538c: 0x30e30080  andi        $v1, $a3, 0x80
    ctx->pc = 0x19538cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
label_195390:
    // 0x195390: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_195394:
    if (ctx->pc == 0x195394u) {
        ctx->pc = 0x195394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195390u;
        // 0x195394: 0x30e30100  andi        $v1, $a3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195398u;
        goto label_195398;
    }
    ctx->pc = 0x195390u;
    {
        const bool branch_taken_0x195390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195390u;
        // 0x195394: 0x30e30100  andi        $v1, $a3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195390) {
            ctx->pc = 0x1953C8u;
            goto label_1953c8;
        }
    }
    ctx->pc = 0x195398u;
label_195398:
    // 0x195398: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x195398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_19539c:
    // 0x19539c: 0x9085024d  lbu         $a1, 0x24D($a0)
    ctx->pc = 0x19539cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 589)));
label_1953a0:
    // 0x1953a0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1953a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1953a4:
    // 0x1953a4: 0x286100fa  slti        $at, $v1, 0xFA
    ctx->pc = 0x1953a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
label_1953a8:
    // 0x1953a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1953ac:
    if (ctx->pc == 0x1953ACu) {
        ctx->pc = 0x1953B0u;
        goto label_1953b0;
    }
    ctx->pc = 0x1953A8u;
    {
        const bool branch_taken_0x1953a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953a8) {
            ctx->pc = 0x1953B8u;
            goto label_1953b8;
        }
    }
    ctx->pc = 0x1953B0u;
label_1953b0:
    // 0x1953b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1953b4:
    if (ctx->pc == 0x1953B4u) {
        ctx->pc = 0x1953B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953B0u;
        // 0x1953b4: 0xa083024d  sb          $v1, 0x24D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 589), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953B8u;
        goto label_1953b8;
    }
    ctx->pc = 0x1953B0u;
    {
        const bool branch_taken_0x1953b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1953B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953B0u;
        // 0x1953b4: 0xa083024d  sb          $v1, 0x24D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 589), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1953b0) {
            ctx->pc = 0x1953C0u;
            goto label_1953c0;
        }
    }
    ctx->pc = 0x1953B8u;
label_1953b8:
    // 0x1953b8: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1953b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1953bc:
    // 0x1953bc: 0xa083024d  sb          $v1, 0x24D($a0)
    ctx->pc = 0x1953bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 589), (uint8_t)GPR_U32(ctx, 3));
label_1953c0:
    // 0x1953c0: 0x10000070  b           . + 4 + (0x70 << 2)
label_1953c4:
    if (ctx->pc == 0x1953C4u) {
        ctx->pc = 0x1953C8u;
        goto label_1953c8;
    }
    ctx->pc = 0x1953C0u;
    {
        const bool branch_taken_0x1953c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953c0) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x1953C8u;
label_1953c8:
    // 0x1953c8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1953cc:
    if (ctx->pc == 0x1953CCu) {
        ctx->pc = 0x1953D0u;
        goto label_1953d0;
    }
    ctx->pc = 0x1953C8u;
    {
        const bool branch_taken_0x1953c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953c8) {
            ctx->pc = 0x195400u;
            goto label_195400;
        }
    }
    ctx->pc = 0x1953D0u;
label_1953d0:
    // 0x1953d0: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1953d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1953d4:
    // 0x1953d4: 0x9085024e  lbu         $a1, 0x24E($a0)
    ctx->pc = 0x1953d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 590)));
label_1953d8:
    // 0x1953d8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1953d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1953dc:
    // 0x1953dc: 0x286100fa  slti        $at, $v1, 0xFA
    ctx->pc = 0x1953dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
label_1953e0:
    // 0x1953e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1953e4:
    if (ctx->pc == 0x1953E4u) {
        ctx->pc = 0x1953E8u;
        goto label_1953e8;
    }
    ctx->pc = 0x1953E0u;
    {
        const bool branch_taken_0x1953e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953e0) {
            ctx->pc = 0x1953F0u;
            goto label_1953f0;
        }
    }
    ctx->pc = 0x1953E8u;
label_1953e8:
    // 0x1953e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1953ec:
    if (ctx->pc == 0x1953ECu) {
        ctx->pc = 0x1953ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953E8u;
        // 0x1953ec: 0xa083024e  sb          $v1, 0x24E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 590), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953F0u;
        goto label_1953f0;
    }
    ctx->pc = 0x1953E8u;
    {
        const bool branch_taken_0x1953e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1953ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953E8u;
        // 0x1953ec: 0xa083024e  sb          $v1, 0x24E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 590), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1953e8) {
            ctx->pc = 0x1953F8u;
            goto label_1953f8;
        }
    }
    ctx->pc = 0x1953F0u;
label_1953f0:
    // 0x1953f0: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1953f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1953f4:
    // 0x1953f4: 0xa083024e  sb          $v1, 0x24E($a0)
    ctx->pc = 0x1953f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 590), (uint8_t)GPR_U32(ctx, 3));
label_1953f8:
    // 0x1953f8: 0x10000062  b           . + 4 + (0x62 << 2)
label_1953fc:
    if (ctx->pc == 0x1953FCu) {
        ctx->pc = 0x195400u;
        goto label_195400;
    }
    ctx->pc = 0x1953F8u;
    {
        const bool branch_taken_0x1953f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953f8) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x195400u;
label_195400:
    // 0x195400: 0x30e30200  andi        $v1, $a3, 0x200
    ctx->pc = 0x195400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)512);
label_195404:
    // 0x195404: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_195408:
    if (ctx->pc == 0x195408u) {
        ctx->pc = 0x195408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195404u;
        // 0x195408: 0x30e30400  andi        $v1, $a3, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19540Cu;
        goto label_19540c;
    }
    ctx->pc = 0x195404u;
    {
        const bool branch_taken_0x195404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195404u;
        // 0x195408: 0x30e30400  andi        $v1, $a3, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195404) {
            ctx->pc = 0x19543Cu;
            goto label_19543c;
        }
    }
    ctx->pc = 0x19540Cu;
label_19540c:
    // 0x19540c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x19540cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195410:
    // 0x195410: 0x9085024f  lbu         $a1, 0x24F($a0)
    ctx->pc = 0x195410u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 591)));
label_195414:
    // 0x195414: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x195414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_195418:
    // 0x195418: 0x286100fa  slti        $at, $v1, 0xFA
    ctx->pc = 0x195418u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
label_19541c:
    // 0x19541c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_195420:
    if (ctx->pc == 0x195420u) {
        ctx->pc = 0x195424u;
        goto label_195424;
    }
    ctx->pc = 0x19541Cu;
    {
        const bool branch_taken_0x19541c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19541c) {
            ctx->pc = 0x19542Cu;
            goto label_19542c;
        }
    }
    ctx->pc = 0x195424u;
label_195424:
    // 0x195424: 0x10000003  b           . + 4 + (0x3 << 2)
label_195428:
    if (ctx->pc == 0x195428u) {
        ctx->pc = 0x195428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195424u;
        // 0x195428: 0xa083024f  sb          $v1, 0x24F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 591), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19542Cu;
        goto label_19542c;
    }
    ctx->pc = 0x195424u;
    {
        const bool branch_taken_0x195424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195424u;
        // 0x195428: 0xa083024f  sb          $v1, 0x24F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 591), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195424) {
            ctx->pc = 0x195434u;
            goto label_195434;
        }
    }
    ctx->pc = 0x19542Cu;
label_19542c:
    // 0x19542c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x19542cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_195430:
    // 0x195430: 0xa083024f  sb          $v1, 0x24F($a0)
    ctx->pc = 0x195430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 591), (uint8_t)GPR_U32(ctx, 3));
label_195434:
    // 0x195434: 0x10000053  b           . + 4 + (0x53 << 2)
label_195438:
    if (ctx->pc == 0x195438u) {
        ctx->pc = 0x19543Cu;
        goto label_19543c;
    }
    ctx->pc = 0x195434u;
    {
        const bool branch_taken_0x195434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195434) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x19543Cu;
label_19543c:
    // 0x19543c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_195440:
    if (ctx->pc == 0x195440u) {
        ctx->pc = 0x195444u;
        goto label_195444;
    }
    ctx->pc = 0x19543Cu;
    {
        const bool branch_taken_0x19543c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19543c) {
            ctx->pc = 0x195458u;
            goto label_195458;
        }
    }
    ctx->pc = 0x195444u;
label_195444:
    // 0x195444: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x195444u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195448:
    // 0x195448: 0x8483028e  lh          $v1, 0x28E($a0)
    ctx->pc = 0x195448u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 654)));
label_19544c:
    // 0x19544c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19544cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_195450:
    // 0x195450: 0x1000004c  b           . + 4 + (0x4C << 2)
label_195454:
    if (ctx->pc == 0x195454u) {
        ctx->pc = 0x195454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195450u;
        // 0x195454: 0xa483028e  sh          $v1, 0x28E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 654), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195458u;
        goto label_195458;
    }
    ctx->pc = 0x195450u;
    {
        const bool branch_taken_0x195450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195450u;
        // 0x195454: 0xa483028e  sh          $v1, 0x28E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 654), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195450) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x195458u;
label_195458:
    // 0x195458: 0x30e30800  andi        $v1, $a3, 0x800
    ctx->pc = 0x195458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2048);
label_19545c:
    // 0x19545c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_195460:
    if (ctx->pc == 0x195460u) {
        ctx->pc = 0x195460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19545Cu;
        // 0x195460: 0x30e31000  andi        $v1, $a3, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195464u;
        goto label_195464;
    }
    ctx->pc = 0x19545Cu;
    {
        const bool branch_taken_0x19545c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19545Cu;
        // 0x195460: 0x30e31000  andi        $v1, $a3, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19545c) {
            ctx->pc = 0x1954B8u;
            goto label_1954b8;
        }
    }
    ctx->pc = 0x195464u;
label_195464:
    // 0x195464: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x195464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195468:
    // 0x195468: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_19546c:
    if (ctx->pc == 0x19546Cu) {
        ctx->pc = 0x195470u;
        goto label_195470;
    }
    ctx->pc = 0x195468u;
    {
        const bool branch_taken_0x195468 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x195468) {
            ctx->pc = 0x19547Cu;
            goto label_19547c;
        }
    }
    ctx->pc = 0x195470u;
label_195470:
    // 0x195470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x195470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195474:
    // 0x195474: 0x10000008  b           . + 4 + (0x8 << 2)
label_195478:
    if (ctx->pc == 0x195478u) {
        ctx->pc = 0x195478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195474u;
        // 0x195478: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19547Cu;
        goto label_19547c;
    }
    ctx->pc = 0x195474u;
    {
        const bool branch_taken_0x195474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195474u;
        // 0x195478: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195474) {
            ctx->pc = 0x195498u;
            goto label_195498;
        }
    }
    ctx->pc = 0x19547Cu;
label_19547c:
    // 0x19547c: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x19547cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_195480:
    // 0x195480: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x195480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_195484:
    // 0x195484: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x195484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_195488:
    // 0x195488: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x195488u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19548c:
    // 0x19548c: 0x0  nop
    ctx->pc = 0x19548cu;
    // NOP
label_195490:
    // 0x195490: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x195490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_195494:
    // 0x195494: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x195494u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_195498:
    // 0x195498: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x195498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_19549c:
    // 0x19549c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19549cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1954a0:
    // 0x1954a0: 0xc4800284  lwc1        $f0, 0x284($a0)
    ctx->pc = 0x1954a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1954a4:
    // 0x1954a4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1954a4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1954a8:
    // 0x1954a8: 0x0  nop
    ctx->pc = 0x1954a8u;
    // NOP
label_1954ac:
    // 0x1954ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1954acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1954b0:
    // 0x1954b0: 0x10000034  b           . + 4 + (0x34 << 2)
label_1954b4:
    if (ctx->pc == 0x1954B4u) {
        ctx->pc = 0x1954B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954B0u;
        // 0x1954b4: 0xe4800284  swc1        $f0, 0x284($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 644), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954B8u;
        goto label_1954b8;
    }
    ctx->pc = 0x1954B0u;
    {
        const bool branch_taken_0x1954b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954B0u;
        // 0x1954b4: 0xe4800284  swc1        $f0, 0x284($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 644), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954b0) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x1954B8u;
label_1954b8:
    // 0x1954b8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1954bc:
    if (ctx->pc == 0x1954BCu) {
        ctx->pc = 0x1954C0u;
        goto label_1954c0;
    }
    ctx->pc = 0x1954B8u;
    {
        const bool branch_taken_0x1954b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1954b8) {
            ctx->pc = 0x1954D4u;
            goto label_1954d4;
        }
    }
    ctx->pc = 0x1954C0u;
label_1954c0:
    // 0x1954c0: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x1954c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1954c4:
    // 0x1954c4: 0x8483028a  lh          $v1, 0x28A($a0)
    ctx->pc = 0x1954c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 650)));
label_1954c8:
    // 0x1954c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1954c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1954cc:
    // 0x1954cc: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1954d0:
    if (ctx->pc == 0x1954D0u) {
        ctx->pc = 0x1954D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954CCu;
        // 0x1954d0: 0xa483028a  sh          $v1, 0x28A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 650), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954D4u;
        goto label_1954d4;
    }
    ctx->pc = 0x1954CCu;
    {
        const bool branch_taken_0x1954cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954CCu;
        // 0x1954d0: 0xa483028a  sh          $v1, 0x28A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 650), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954cc) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x1954D4u;
label_1954d4:
    // 0x1954d4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1954d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_1954d8:
    // 0x1954d8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1954d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_1954dc:
    // 0x1954dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1954e0:
    if (ctx->pc == 0x1954E0u) {
        ctx->pc = 0x1954E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954DCu;
        // 0x1954e0: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954E4u;
        goto label_1954e4;
    }
    ctx->pc = 0x1954DCu;
    {
        const bool branch_taken_0x1954dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954DCu;
        // 0x1954e0: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954dc) {
            ctx->pc = 0x1954F8u;
            goto label_1954f8;
        }
    }
    ctx->pc = 0x1954E4u;
label_1954e4:
    // 0x1954e4: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x1954e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1954e8:
    // 0x1954e8: 0x84830250  lh          $v1, 0x250($a0)
    ctx->pc = 0x1954e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 592)));
label_1954ec:
    // 0x1954ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1954ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1954f0:
    // 0x1954f0: 0x10000024  b           . + 4 + (0x24 << 2)
label_1954f4:
    if (ctx->pc == 0x1954F4u) {
        ctx->pc = 0x1954F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954F0u;
        // 0x1954f4: 0xa4830250  sh          $v1, 0x250($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 592), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954F8u;
        goto label_1954f8;
    }
    ctx->pc = 0x1954F0u;
    {
        const bool branch_taken_0x1954f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954F0u;
        // 0x1954f4: 0xa4830250  sh          $v1, 0x250($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 592), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954f0) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x1954F8u;
label_1954f8:
    // 0x1954f8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1954f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_1954fc:
    // 0x1954fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_195500:
    if (ctx->pc == 0x195500u) {
        ctx->pc = 0x195504u;
        goto label_195504;
    }
    ctx->pc = 0x1954FCu;
    {
        const bool branch_taken_0x1954fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1954fc) {
            ctx->pc = 0x195518u;
            goto label_195518;
        }
    }
    ctx->pc = 0x195504u;
label_195504:
    // 0x195504: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x195504u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195508:
    // 0x195508: 0x90830282  lbu         $v1, 0x282($a0)
    ctx->pc = 0x195508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 642)));
label_19550c:
    // 0x19550c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19550cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_195510:
    // 0x195510: 0x1000001c  b           . + 4 + (0x1C << 2)
label_195514:
    if (ctx->pc == 0x195514u) {
        ctx->pc = 0x195514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195510u;
        // 0x195514: 0xa0830282  sb          $v1, 0x282($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 642), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195518u;
        goto label_195518;
    }
    ctx->pc = 0x195510u;
    {
        const bool branch_taken_0x195510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195510u;
        // 0x195514: 0xa0830282  sb          $v1, 0x282($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 642), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195510) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x195518u;
label_195518:
    // 0x195518: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x195518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_19551c:
    // 0x19551c: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x19551cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_195520:
    // 0x195520: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_195524:
    if (ctx->pc == 0x195524u) {
        ctx->pc = 0x195528u;
        goto label_195528;
    }
    ctx->pc = 0x195520u;
    {
        const bool branch_taken_0x195520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195520) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x195528u;
label_195528:
    // 0x195528: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x195528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_19552c:
    // 0x19552c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_195530:
    if (ctx->pc == 0x195530u) {
        ctx->pc = 0x195534u;
        goto label_195534;
    }
    ctx->pc = 0x19552Cu;
    {
        const bool branch_taken_0x19552c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x19552c) {
            ctx->pc = 0x195540u;
            goto label_195540;
        }
    }
    ctx->pc = 0x195534u;
label_195534:
    // 0x195534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x195534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195538:
    // 0x195538: 0x10000008  b           . + 4 + (0x8 << 2)
label_19553c:
    if (ctx->pc == 0x19553Cu) {
        ctx->pc = 0x19553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195538u;
        // 0x19553c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x195540u;
        goto label_195540;
    }
    ctx->pc = 0x195538u;
    {
        const bool branch_taken_0x195538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195538u;
        // 0x19553c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195538) {
            ctx->pc = 0x19555Cu;
            goto label_19555c;
        }
    }
    ctx->pc = 0x195540u;
label_195540:
    // 0x195540: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x195540u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_195544:
    // 0x195544: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x195544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_195548:
    // 0x195548: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x195548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_19554c:
    // 0x19554c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x19554cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195550:
    // 0x195550: 0x0  nop
    ctx->pc = 0x195550u;
    // NOP
label_195554:
    // 0x195554: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x195554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_195558:
    // 0x195558: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x195558u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_19555c:
    // 0x19555c: 0x3c053e4c  lui         $a1, 0x3E4C
    ctx->pc = 0x19555cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15948 << 16));
label_195560:
    // 0x195560: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x195560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_195564:
    // 0x195564: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x195564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_195568:
    // 0x195568: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x195568u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19556c:
    // 0x19556c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19556cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_195570:
    // 0x195570: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x195570u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_195574:
    // 0x195574: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x195574u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_195578:
    // 0x195578: 0xc4800278  lwc1        $f0, 0x278($a0)
    ctx->pc = 0x195578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19557c:
    // 0x19557c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19557cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_195580:
    // 0x195580: 0xe4800278  swc1        $f0, 0x278($a0)
    ctx->pc = 0x195580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 632), bits); }
label_195584:
    // 0x195584: 0x3e00008  jr          $ra
label_195588:
    if (ctx->pc == 0x195588u) {
        ctx->pc = 0x19558Cu;
        goto label_19558c;
    }
    ctx->pc = 0x195584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19558Cu;
label_19558c:
    // 0x19558c: 0x0  nop
    ctx->pc = 0x19558cu;
    // NOP
label_195590:
    // 0x195590: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x195590u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_195594:
    // 0x195594: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_195598:
    // 0x195598: 0x24e75730  addiu       $a3, $a3, 0x5730
    ctx->pc = 0x195598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22320));
label_19559c:
    // 0x19559c: 0x27aa0000  addiu       $t2, $sp, 0x0
    ctx->pc = 0x19559cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_1955a0:
    // 0x1955a0: 0xdce90000  ld          $t1, 0x0($a3)
    ctx->pc = 0x1955a0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_1955a4:
    // 0x1955a4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1955a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1955a8:
    // 0x1955a8: 0x84e8000c  lh          $t0, 0xC($a3)
    ctx->pc = 0x1955a8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
label_1955ac:
    // 0x1955ac: 0x1453021  addu        $a2, $t2, $a1
    ctx->pc = 0x1955acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_1955b0:
    // 0x1955b0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1955b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1955b4:
    // 0x1955b4: 0x90e7000e  lbu         $a3, 0xE($a3)
    ctx->pc = 0x1955b4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
label_1955b8:
    // 0x1955b8: 0xfd490000  sd          $t1, 0x0($t2)
    ctx->pc = 0x1955b8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 9));
label_1955bc:
    // 0x1955bc: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x1955bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_1955c0:
    // 0x1955c0: 0xa548000c  sh          $t0, 0xC($t2)
    ctx->pc = 0x1955c0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 12), (uint16_t)GPR_U32(ctx, 8));
label_1955c4:
    // 0x1955c4: 0xa147000e  sb          $a3, 0xE($t2)
    ctx->pc = 0x1955c4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 14), (uint8_t)GPR_U32(ctx, 7));
label_1955c8:
    // 0x1955c8: 0xa085000b  sb          $a1, 0xB($a0)
    ctx->pc = 0x1955c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
label_1955cc:
    // 0x1955cc: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x1955ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1955d0:
    // 0x1955d0: 0xa085000a  sb          $a1, 0xA($a0)
    ctx->pc = 0x1955d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
label_1955d4:
    // 0x1955d4: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x1955d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
label_1955d8:
    // 0x1955d8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1955d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1955dc:
    // 0x1955dc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1955dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1955e0:
    // 0x1955e0: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x1955e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
label_1955e4:
    // 0x1955e4: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x1955e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
label_1955e8:
    // 0x1955e8: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x1955e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
label_1955ec:
    // 0x1955ec: 0x3e00008  jr          $ra
label_1955f0:
    if (ctx->pc == 0x1955F0u) {
        ctx->pc = 0x1955F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955ECu;
        // 0x1955f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1955F4u;
        goto label_1955f4;
    }
    ctx->pc = 0x1955ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1955F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955ECu;
        // 0x1955f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1955ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1955F4u;
label_1955f4:
    // 0x1955f4: 0x0  nop
    ctx->pc = 0x1955f4u;
    // NOP
label_1955f8:
    // 0x1955f8: 0x0  nop
    ctx->pc = 0x1955f8u;
    // NOP
label_1955fc:
    // 0x1955fc: 0x0  nop
    ctx->pc = 0x1955fcu;
    // NOP
label_195600:
    // 0x195600: 0x28a10059  slti        $at, $a1, 0x59
    ctx->pc = 0x195600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)89) ? 1 : 0);
label_195604:
    // 0x195604: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_195608:
    if (ctx->pc == 0x195608u) {
        ctx->pc = 0x195608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195604u;
        // 0x195608: 0xa085000b  sb          $a1, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19560Cu;
        goto label_19560c;
    }
    ctx->pc = 0x195604u;
    {
        const bool branch_taken_0x195604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195604u;
        // 0x195608: 0xa085000b  sb          $a1, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195604) {
            ctx->pc = 0x195614u;
            goto label_195614;
        }
    }
    ctx->pc = 0x19560Cu;
label_19560c:
    // 0x19560c: 0x1000000e  b           . + 4 + (0xE << 2)
label_195610:
    if (ctx->pc == 0x195610u) {
        ctx->pc = 0x195610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19560Cu;
        // 0x195610: 0xa085000a  sb          $a1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195614u;
        goto label_195614;
    }
    ctx->pc = 0x19560Cu;
    {
        const bool branch_taken_0x19560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19560Cu;
        // 0x195610: 0xa085000a  sb          $a1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19560c) {
            ctx->pc = 0x195648u;
            goto label_195648;
        }
    }
    ctx->pc = 0x195614u;
label_195614:
    // 0x195614: 0x28a30082  slti        $v1, $a1, 0x82
    ctx->pc = 0x195614u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
label_195618:
    // 0x195618: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_19561c:
    if (ctx->pc == 0x19561Cu) {
        ctx->pc = 0x19561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195618u;
        // 0x19561c: 0x53040  sll         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195620u;
        goto label_195620;
    }
    ctx->pc = 0x195618u;
    {
        const bool branch_taken_0x195618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195618u;
        // 0x19561c: 0x53040  sll         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195618) {
            ctx->pc = 0x19562Cu;
            goto label_19562c;
        }
    }
    ctx->pc = 0x195620u;
label_195620:
    // 0x195620: 0x24a3ffd7  addiu       $v1, $a1, -0x29
    ctx->pc = 0x195620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
label_195624:
    // 0x195624: 0x10000008  b           . + 4 + (0x8 << 2)
label_195628:
    if (ctx->pc == 0x195628u) {
        ctx->pc = 0x195628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195624u;
        // 0x195628: 0xa083000a  sb          $v1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19562Cu;
        goto label_19562c;
    }
    ctx->pc = 0x195624u;
    {
        const bool branch_taken_0x195624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195624u;
        // 0x195628: 0xa083000a  sb          $v1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195624) {
            ctx->pc = 0x195648u;
            goto label_195648;
        }
    }
    ctx->pc = 0x19562Cu;
label_19562c:
    // 0x19562c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x19562cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_195630:
    // 0x195630: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x195630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_195634:
    // 0x195634: 0x24639d72  addiu       $v1, $v1, -0x628E
    ctx->pc = 0x195634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942066));
label_195638:
    // 0x195638: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x195638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_19563c:
    // 0x19563c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19563cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_195640:
    // 0x195640: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x195640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_195644:
    // 0x195644: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x195644u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
label_195648:
    // 0x195648: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x195648u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
label_19564c:
    // 0x19564c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x19564cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_195650:
    // 0x195650: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x195650u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_195654:
    // 0x195654: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x195654u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_195658:
    // 0x195658: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x195658u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
label_19565c:
    // 0x19565c: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x19565cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
label_195660:
    // 0x195660: 0x3e00008  jr          $ra
label_195664:
    if (ctx->pc == 0x195664u) {
        ctx->pc = 0x195664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195660u;
        // 0x195664: 0xa0830008  sb          $v1, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195668u;
        goto label_195668;
    }
    ctx->pc = 0x195660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195660u;
        // 0x195664: 0xa0830008  sb          $v1, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195668u;
label_195668:
    // 0x195668: 0x0  nop
    ctx->pc = 0x195668u;
    // NOP
label_19566c:
    // 0x19566c: 0x0  nop
    ctx->pc = 0x19566cu;
    // NOP
label_195670:
    // 0x195670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_195674:
    // 0x195674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_195678:
    // 0x195678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19567c:
    // 0x19567c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_195680:
    // 0x195680: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x195680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195684:
    // 0x195684: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x195684u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_195688:
    // 0x195688: 0x2610a4c0  addiu       $s0, $s0, -0x5B40
    ctx->pc = 0x195688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943936));
label_19568c:
    // 0x19568c: 0x0  nop
    ctx->pc = 0x19568cu;
    // NOP
label_195690:
    // 0x195690: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x195690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_195694:
    // 0x195694: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_195698:
    if (ctx->pc == 0x195698u) {
        ctx->pc = 0x19569Cu;
        goto label_19569c;
    }
    ctx->pc = 0x195694u;
    {
        const bool branch_taken_0x195694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x195694) {
            ctx->pc = 0x1956A4u;
            goto label_1956a4;
        }
    }
    ctx->pc = 0x19569Cu;
label_19569c:
    // 0x19569c: 0xc070038  jal         func_1C00E0
label_1956a0:
    if (ctx->pc == 0x1956A0u) {
        ctx->pc = 0x1956A4u;
        goto label_1956a4;
    }
    ctx->pc = 0x19569Cu;
    SET_GPR_U32(ctx, 31, 0x1956A4u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1956A4u;
label_1956a4:
    // 0x1956a4: 0x0  nop
    ctx->pc = 0x1956a4u;
    // NOP
label_1956a8:
    // 0x1956a8: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x1956a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1956ac:
    // 0x1956ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1956b0:
    if (ctx->pc == 0x1956B0u) {
        ctx->pc = 0x1956B4u;
        goto label_1956b4;
    }
    ctx->pc = 0x1956ACu;
    {
        const bool branch_taken_0x1956ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1956ac) {
            ctx->pc = 0x1956BCu;
            goto label_1956bc;
        }
    }
    ctx->pc = 0x1956B4u;
label_1956b4:
    // 0x1956b4: 0xc070038  jal         func_1C00E0
label_1956b8:
    if (ctx->pc == 0x1956B8u) {
        ctx->pc = 0x1956BCu;
        goto label_1956bc;
    }
    ctx->pc = 0x1956B4u;
    SET_GPR_U32(ctx, 31, 0x1956BCu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1956BCu;
label_1956bc:
    // 0x1956bc: 0x0  nop
    ctx->pc = 0x1956bcu;
    // NOP
label_1956c0:
    // 0x1956c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1956c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1956c4:
    // 0x1956c4: 0x2a230080  slti        $v1, $s1, 0x80
    ctx->pc = 0x1956c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
label_1956c8:
    // 0x1956c8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_1956cc:
    if (ctx->pc == 0x1956CCu) {
        ctx->pc = 0x1956CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956C8u;
        // 0x1956cc: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1956D0u;
        goto label_1956d0;
    }
    ctx->pc = 0x1956C8u;
    {
        const bool branch_taken_0x1956c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1956CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956C8u;
        // 0x1956cc: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956c8) {
            ctx->pc = 0x19568Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19568c;
        }
    }
    ctx->pc = 0x1956D0u;
label_1956d0:
    // 0x1956d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1956d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1956d4:
    // 0x1956d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1956d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1956d8:
    // 0x1956d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1956d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1956dc:
    // 0x1956dc: 0x3e00008  jr          $ra
label_1956e0:
    if (ctx->pc == 0x1956E0u) {
        ctx->pc = 0x1956E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956DCu;
        // 0x1956e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1956E4u;
        goto label_1956e4;
    }
    ctx->pc = 0x1956DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1956E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956DCu;
        // 0x1956e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1956DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1956E4u;
label_1956e4:
    // 0x1956e4: 0x0  nop
    ctx->pc = 0x1956e4u;
    // NOP
label_1956e8:
    // 0x1956e8: 0x0  nop
    ctx->pc = 0x1956e8u;
    // NOP
label_1956ec:
    // 0x1956ec: 0x0  nop
    ctx->pc = 0x1956ecu;
    // NOP
label_1956f0:
    // 0x1956f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1956f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1956f4:
    // 0x1956f4: 0x2404021d  addiu       $a0, $zero, 0x21D
    ctx->pc = 0x1956f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
label_1956f8:
    // 0x1956f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1956f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1956fc:
    // 0x1956fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1956fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_195700:
    // 0x195700: 0xc041738  jal         func_105CE0
label_195704:
    if (ctx->pc == 0x195704u) {
        ctx->pc = 0x195704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195700u;
        // 0x195704: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195708u;
        goto label_195708;
    }
    ctx->pc = 0x195700u;
    SET_GPR_U32(ctx, 31, 0x195708u);
    ctx->pc = 0x195704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195700u;
    // 0x195704: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x195700u, 0x195708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195708u;
label_195708:
    // 0x195708: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x195708u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_19570c:
    // 0x19570c: 0xc070080  jal         func_1C0200
label_195710:
    if (ctx->pc == 0x195710u) {
        ctx->pc = 0x195710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19570Cu;
        // 0x195710: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195714u;
        goto label_195714;
    }
    ctx->pc = 0x19570Cu;
    SET_GPR_U32(ctx, 31, 0x195714u);
    ctx->pc = 0x195710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19570Cu;
    // 0x195710: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x195714u;
label_195714:
    // 0x195714: 0x2404021d  addiu       $a0, $zero, 0x21D
    ctx->pc = 0x195714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
label_195718:
    // 0x195718: 0xc0416e4  jal         func_105B90
label_19571c:
    if (ctx->pc == 0x19571Cu) {
        ctx->pc = 0x19571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195718u;
        // 0x19571c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195720u;
        goto label_195720;
    }
    ctx->pc = 0x195718u;
    SET_GPR_U32(ctx, 31, 0x195720u);
    ctx->pc = 0x19571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195718u;
    // 0x19571c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x195718u, 0x195720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195720u;
label_195720:
    // 0x195720: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195724:
    // 0x195724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195728:
    // 0x195728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19572c:
    // 0x19572c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19572cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195730:
    // 0x195730: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x195730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_195734:
    // 0x195734: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x195734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_195738:
    // 0x195738: 0xc0603d4  jal         func_180F50
label_19573c:
    if (ctx->pc == 0x19573Cu) {
        ctx->pc = 0x19573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195738u;
        // 0x19573c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195740u;
        goto label_195740;
    }
    ctx->pc = 0x195738u;
    SET_GPR_U32(ctx, 31, 0x195740u);
    ctx->pc = 0x19573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195738u;
    // 0x19573c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    { ctx->pc = 0x180f50; return; }
    ctx->pc = 0x195740u;
label_195740:
    // 0x195740: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195744:
    // 0x195744: 0xc070038  jal         func_1C00E0
label_195748:
    if (ctx->pc == 0x195748u) {
        ctx->pc = 0x195748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195744u;
        // 0x195748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19574Cu;
        goto label_19574c;
    }
    ctx->pc = 0x195744u;
    SET_GPR_U32(ctx, 31, 0x19574Cu);
    ctx->pc = 0x195748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195744u;
    // 0x195748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x19574Cu;
label_19574c:
    // 0x19574c: 0x240407fc  addiu       $a0, $zero, 0x7FC
    ctx->pc = 0x19574cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2044));
label_195750:
    // 0x195750: 0xc041738  jal         func_105CE0
label_195754:
    if (ctx->pc == 0x195754u) {
        ctx->pc = 0x195754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195750u;
        // 0x195754: 0xff9088d0  sd          $s0, -0x7730($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936784), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195758u;
        goto label_195758;
    }
    ctx->pc = 0x195750u;
    SET_GPR_U32(ctx, 31, 0x195758u);
    ctx->pc = 0x195754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195750u;
    // 0x195754: 0xff9088d0  sd          $s0, -0x7730($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936784), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x195750u, 0x195758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195758u;
label_195758:
    // 0x195758: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x195758u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_19575c:
    // 0x19575c: 0xc070080  jal         func_1C0200
label_195760:
    if (ctx->pc == 0x195760u) {
        ctx->pc = 0x195760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19575Cu;
        // 0x195760: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195764u;
        goto label_195764;
    }
    ctx->pc = 0x19575Cu;
    SET_GPR_U32(ctx, 31, 0x195764u);
    ctx->pc = 0x195760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19575Cu;
    // 0x195760: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x195764u;
label_195764:
    // 0x195764: 0x240407fc  addiu       $a0, $zero, 0x7FC
    ctx->pc = 0x195764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2044));
label_195768:
    // 0x195768: 0xc0416e4  jal         func_105B90
label_19576c:
    if (ctx->pc == 0x19576Cu) {
        ctx->pc = 0x19576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195768u;
        // 0x19576c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195770u;
        goto label_195770;
    }
    ctx->pc = 0x195768u;
    SET_GPR_U32(ctx, 31, 0x195770u);
    ctx->pc = 0x19576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195768u;
    // 0x19576c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x195768u, 0x195770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195770u;
label_195770:
    // 0x195770: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195774:
    // 0x195774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195778:
    // 0x195778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19577c:
    // 0x19577c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19577cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195780:
    // 0x195780: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x195780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_195784:
    // 0x195784: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x195784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_195788:
    // 0x195788: 0xc0603d4  jal         func_180F50
label_19578c:
    if (ctx->pc == 0x19578Cu) {
        ctx->pc = 0x19578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195788u;
        // 0x19578c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195790u;
        goto label_195790;
    }
    ctx->pc = 0x195788u;
    SET_GPR_U32(ctx, 31, 0x195790u);
    ctx->pc = 0x19578Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195788u;
    // 0x19578c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    { ctx->pc = 0x180f50; return; }
    ctx->pc = 0x195790u;
label_195790:
    // 0x195790: 0xc070038  jal         func_1C00E0
label_195794:
    if (ctx->pc == 0x195794u) {
        ctx->pc = 0x195794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195790u;
        // 0x195794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195798u;
        goto label_195798;
    }
    ctx->pc = 0x195790u;
    SET_GPR_U32(ctx, 31, 0x195798u);
    ctx->pc = 0x195794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195790u;
    // 0x195794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x195798u;
label_195798:
    // 0x195798: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x195798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_19579c:
    // 0x19579c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x19579cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1957a0:
    // 0x1957a0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1957a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1957a4:
    // 0x1957a4: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x1957a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1957a8:
    // 0x1957a8: 0xc06058c  jal         func_181630
label_1957ac:
    if (ctx->pc == 0x1957ACu) {
        ctx->pc = 0x1957ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957A8u;
        // 0x1957ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957B0u;
        goto label_1957b0;
    }
    ctx->pc = 0x1957A8u;
    SET_GPR_U32(ctx, 31, 0x1957B0u);
    ctx->pc = 0x1957ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1957A8u;
    // 0x1957ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181630u;
    { ctx->pc = 0x181630; return; }
    ctx->pc = 0x1957B0u;
label_1957b0:
    // 0x1957b0: 0xc065754  jal         func_195D50
label_1957b4:
    if (ctx->pc == 0x1957B4u) {
        ctx->pc = 0x1957B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957B0u;
        // 0x1957b4: 0xff8288c0  sd          $v0, -0x7740($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936768), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957B8u;
        goto label_1957b8;
    }
    ctx->pc = 0x1957B0u;
    SET_GPR_U32(ctx, 31, 0x1957B8u);
    ctx->pc = 0x1957B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1957B0u;
    // 0x1957b4: 0xff8288c0  sd          $v0, -0x7740($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936768), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195D50u;
    { ctx->pc = 0x195d50; return; }
    ctx->pc = 0x1957B8u;
label_1957b8:
    // 0x1957b8: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1957b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1957bc:
    // 0x1957bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1957bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1957c0:
    // 0x1957c0: 0x2610a4c0  addiu       $s0, $s0, -0x5B40
    ctx->pc = 0x1957c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943936));
label_1957c4:
    // 0x1957c4: 0x0  nop
    ctx->pc = 0x1957c4u;
    // NOP
label_1957c8:
    // 0x1957c8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1957c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1957cc:
    // 0x1957cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1957d0:
    if (ctx->pc == 0x1957D0u) {
        ctx->pc = 0x1957D4u;
        goto label_1957d4;
    }
    ctx->pc = 0x1957CCu;
    {
        const bool branch_taken_0x1957cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1957cc) {
            ctx->pc = 0x1957E4u;
            goto label_1957e4;
        }
    }
    ctx->pc = 0x1957D4u;
label_1957d4:
    // 0x1957d4: 0xdf8288d0  ld          $v0, -0x7730($gp)
    ctx->pc = 0x1957d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936784)));
label_1957d8:
    // 0x1957d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1957d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1957dc:
    // 0x1957dc: 0xc044ed8  jal         func_113B60
label_1957e0:
    if (ctx->pc == 0x1957E0u) {
        ctx->pc = 0x1957E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957DCu;
        // 0x1957e0: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957E4u;
        goto label_1957e4;
    }
    ctx->pc = 0x1957DCu;
    SET_GPR_U32(ctx, 31, 0x1957E4u);
    ctx->pc = 0x1957E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1957DCu;
    // 0x1957e0: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B60u, 0x1957DCu, 0x1957E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1957E4u;
label_1957e4:
    // 0x1957e4: 0x0  nop
    ctx->pc = 0x1957e4u;
    // NOP
label_1957e8:
    // 0x1957e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1957e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1957ec:
    // 0x1957ec: 0x2a230057  slti        $v1, $s1, 0x57
    ctx->pc = 0x1957ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)87) ? 1 : 0);
label_1957f0:
    // 0x1957f0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_1957f4:
    if (ctx->pc == 0x1957F4u) {
        ctx->pc = 0x1957F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957F0u;
        // 0x1957f4: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957F8u;
        goto label_1957f8;
    }
    ctx->pc = 0x1957F0u;
    {
        const bool branch_taken_0x1957f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1957F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957F0u;
        // 0x1957f4: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957f0) {
            ctx->pc = 0x1957C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1957c4;
        }
    }
    ctx->pc = 0x1957F8u;
label_1957f8:
    // 0x1957f8: 0x2a210080  slti        $at, $s1, 0x80
    ctx->pc = 0x1957f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
label_1957fc:
    // 0x1957fc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_195800:
    if (ctx->pc == 0x195800u) {
        ctx->pc = 0x195804u;
        goto label_195804;
    }
    ctx->pc = 0x1957FCu;
    {
        const bool branch_taken_0x1957fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1957fc) {
            ctx->pc = 0x195838u;
            goto label_195838;
        }
    }
    ctx->pc = 0x195804u;
label_195804:
    // 0x195804: 0x0  nop
    ctx->pc = 0x195804u;
    // NOP
label_195808:
    // 0x195808: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x195808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19580c:
    // 0x19580c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_195810:
    if (ctx->pc == 0x195810u) {
        ctx->pc = 0x195814u;
        goto label_195814;
    }
    ctx->pc = 0x19580Cu;
    {
        const bool branch_taken_0x19580c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19580c) {
            ctx->pc = 0x195824u;
            goto label_195824;
        }
    }
    ctx->pc = 0x195814u;
label_195814:
    // 0x195814: 0xdf8288c0  ld          $v0, -0x7740($gp)
    ctx->pc = 0x195814u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936768)));
label_195818:
    // 0x195818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19581c:
    // 0x19581c: 0xc044ed8  jal         func_113B60
label_195820:
    if (ctx->pc == 0x195820u) {
        ctx->pc = 0x195820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19581Cu;
        // 0x195820: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195824u;
        goto label_195824;
    }
    ctx->pc = 0x19581Cu;
    SET_GPR_U32(ctx, 31, 0x195824u);
    ctx->pc = 0x195820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19581Cu;
    // 0x195820: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B60u, 0x19581Cu, 0x195824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195824u;
label_195824:
    // 0x195824: 0x0  nop
    ctx->pc = 0x195824u;
    // NOP
label_195828:
    // 0x195828: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x195828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_19582c:
    // 0x19582c: 0x2a230080  slti        $v1, $s1, 0x80
    ctx->pc = 0x19582cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
label_195830:
    // 0x195830: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_195834:
    if (ctx->pc == 0x195834u) {
        ctx->pc = 0x195834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195830u;
        // 0x195834: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195838u;
        goto label_195838;
    }
    ctx->pc = 0x195830u;
    {
        const bool branch_taken_0x195830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195830u;
        // 0x195834: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195830) {
            ctx->pc = 0x195804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195804;
        }
    }
    ctx->pc = 0x195838u;
label_195838:
    // 0x195838: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19583c:
    // 0x19583c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19583cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_195840:
    // 0x195840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_195844:
    // 0x195844: 0x3e00008  jr          $ra
label_195848:
    if (ctx->pc == 0x195848u) {
        ctx->pc = 0x195848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195844u;
        // 0x195848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19584Cu;
        goto label_19584c;
    }
    ctx->pc = 0x195844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195844u;
        // 0x195848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19584Cu;
label_19584c:
    // 0x19584c: 0x0  nop
    ctx->pc = 0x19584cu;
    // NOP
label_195850:
    // 0x195850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_195854:
    // 0x195854: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x195854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_195858:
    // 0x195858: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19585c:
    // 0x19585c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19585cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_195860:
    // 0x195860: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_195864:
    // 0x195864: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x195864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_195868:
    // 0x195868: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x195868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_19586c:
    // 0x19586c: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x195870u;
    return;
}

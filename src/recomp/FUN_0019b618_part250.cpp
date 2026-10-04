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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x214f68u: goto label_214f68;
        case 0x214f6cu: goto label_214f6c;
        case 0x214f70u: goto label_214f70;
        case 0x214f74u: goto label_214f74;
        case 0x214f78u: goto label_214f78;
        case 0x214f7cu: goto label_214f7c;
        case 0x214f80u: goto label_214f80;
        case 0x214f84u: goto label_214f84;
        case 0x214f88u: goto label_214f88;
        case 0x214f8cu: goto label_214f8c;
        case 0x214f90u: goto label_214f90;
        case 0x214f94u: goto label_214f94;
        case 0x214f98u: goto label_214f98;
        case 0x214f9cu: goto label_214f9c;
        case 0x214fa0u: goto label_214fa0;
        case 0x214fa4u: goto label_214fa4;
        case 0x214fa8u: goto label_214fa8;
        case 0x214facu: goto label_214fac;
        case 0x214fb0u: goto label_214fb0;
        case 0x214fb4u: goto label_214fb4;
        case 0x214fb8u: goto label_214fb8;
        case 0x214fbcu: goto label_214fbc;
        case 0x214fc0u: goto label_214fc0;
        case 0x214fc4u: goto label_214fc4;
        case 0x214fc8u: goto label_214fc8;
        case 0x214fccu: goto label_214fcc;
        case 0x214fd0u: goto label_214fd0;
        case 0x214fd4u: goto label_214fd4;
        case 0x214fd8u: goto label_214fd8;
        case 0x214fdcu: goto label_214fdc;
        case 0x214fe0u: goto label_214fe0;
        case 0x214fe4u: goto label_214fe4;
        case 0x214fe8u: goto label_214fe8;
        case 0x214fecu: goto label_214fec;
        case 0x214ff0u: goto label_214ff0;
        case 0x214ff4u: goto label_214ff4;
        case 0x214ff8u: goto label_214ff8;
        case 0x214ffcu: goto label_214ffc;
        case 0x215000u: goto label_215000;
        case 0x215004u: goto label_215004;
        case 0x215008u: goto label_215008;
        case 0x21500cu: goto label_21500c;
        case 0x215010u: goto label_215010;
        case 0x215014u: goto label_215014;
        case 0x215018u: goto label_215018;
        case 0x21501cu: goto label_21501c;
        case 0x215020u: goto label_215020;
        case 0x215024u: goto label_215024;
        case 0x215028u: goto label_215028;
        case 0x21502cu: goto label_21502c;
        case 0x215030u: goto label_215030;
        case 0x215034u: goto label_215034;
        case 0x215038u: goto label_215038;
        case 0x21503cu: goto label_21503c;
        case 0x215040u: goto label_215040;
        case 0x215044u: goto label_215044;
        case 0x215048u: goto label_215048;
        case 0x21504cu: goto label_21504c;
        case 0x215050u: goto label_215050;
        case 0x215054u: goto label_215054;
        case 0x215058u: goto label_215058;
        case 0x21505cu: goto label_21505c;
        case 0x215060u: goto label_215060;
        case 0x215064u: goto label_215064;
        case 0x215068u: goto label_215068;
        case 0x21506cu: goto label_21506c;
        case 0x215070u: goto label_215070;
        case 0x215074u: goto label_215074;
        case 0x215078u: goto label_215078;
        case 0x21507cu: goto label_21507c;
        case 0x215080u: goto label_215080;
        case 0x215084u: goto label_215084;
        case 0x215088u: goto label_215088;
        case 0x21508cu: goto label_21508c;
        case 0x215090u: goto label_215090;
        case 0x215094u: goto label_215094;
        case 0x215098u: goto label_215098;
        case 0x21509cu: goto label_21509c;
        case 0x2150a0u: goto label_2150a0;
        case 0x2150a4u: goto label_2150a4;
        case 0x2150a8u: goto label_2150a8;
        case 0x2150acu: goto label_2150ac;
        case 0x2150b0u: goto label_2150b0;
        case 0x2150b4u: goto label_2150b4;
        case 0x2150b8u: goto label_2150b8;
        case 0x2150bcu: goto label_2150bc;
        case 0x2150c0u: goto label_2150c0;
        case 0x2150c4u: goto label_2150c4;
        case 0x2150c8u: goto label_2150c8;
        case 0x2150ccu: goto label_2150cc;
        case 0x2150d0u: goto label_2150d0;
        case 0x2150d4u: goto label_2150d4;
        case 0x2150d8u: goto label_2150d8;
        case 0x2150dcu: goto label_2150dc;
        case 0x2150e0u: goto label_2150e0;
        case 0x2150e4u: goto label_2150e4;
        case 0x2150e8u: goto label_2150e8;
        case 0x2150ecu: goto label_2150ec;
        case 0x2150f0u: goto label_2150f0;
        case 0x2150f4u: goto label_2150f4;
        case 0x2150f8u: goto label_2150f8;
        case 0x2150fcu: goto label_2150fc;
        case 0x215100u: goto label_215100;
        case 0x215104u: goto label_215104;
        case 0x215108u: goto label_215108;
        case 0x21510cu: goto label_21510c;
        case 0x215110u: goto label_215110;
        case 0x215114u: goto label_215114;
        case 0x215118u: goto label_215118;
        case 0x21511cu: goto label_21511c;
        case 0x215120u: goto label_215120;
        case 0x215124u: goto label_215124;
        case 0x215128u: goto label_215128;
        case 0x21512cu: goto label_21512c;
        case 0x215130u: goto label_215130;
        case 0x215134u: goto label_215134;
        case 0x215138u: goto label_215138;
        case 0x21513cu: goto label_21513c;
        case 0x215140u: goto label_215140;
        case 0x215144u: goto label_215144;
        case 0x215148u: goto label_215148;
        case 0x21514cu: goto label_21514c;
        case 0x215150u: goto label_215150;
        case 0x215154u: goto label_215154;
        case 0x215158u: goto label_215158;
        case 0x21515cu: goto label_21515c;
        case 0x215160u: goto label_215160;
        case 0x215164u: goto label_215164;
        case 0x215168u: goto label_215168;
        case 0x21516cu: goto label_21516c;
        case 0x215170u: goto label_215170;
        case 0x215174u: goto label_215174;
        case 0x215178u: goto label_215178;
        case 0x21517cu: goto label_21517c;
        case 0x215180u: goto label_215180;
        case 0x215184u: goto label_215184;
        case 0x215188u: goto label_215188;
        case 0x21518cu: goto label_21518c;
        case 0x215190u: goto label_215190;
        case 0x215194u: goto label_215194;
        case 0x215198u: goto label_215198;
        case 0x21519cu: goto label_21519c;
        case 0x2151a0u: goto label_2151a0;
        case 0x2151a4u: goto label_2151a4;
        case 0x2151a8u: goto label_2151a8;
        case 0x2151acu: goto label_2151ac;
        case 0x2151b0u: goto label_2151b0;
        case 0x2151b4u: goto label_2151b4;
        case 0x2151b8u: goto label_2151b8;
        case 0x2151bcu: goto label_2151bc;
        case 0x2151c0u: goto label_2151c0;
        case 0x2151c4u: goto label_2151c4;
        case 0x2151c8u: goto label_2151c8;
        case 0x2151ccu: goto label_2151cc;
        case 0x2151d0u: goto label_2151d0;
        case 0x2151d4u: goto label_2151d4;
        case 0x2151d8u: goto label_2151d8;
        case 0x2151dcu: goto label_2151dc;
        case 0x2151e0u: goto label_2151e0;
        case 0x2151e4u: goto label_2151e4;
        case 0x2151e8u: goto label_2151e8;
        case 0x2151ecu: goto label_2151ec;
        case 0x2151f0u: goto label_2151f0;
        case 0x2151f4u: goto label_2151f4;
        case 0x2151f8u: goto label_2151f8;
        case 0x2151fcu: goto label_2151fc;
        case 0x215200u: goto label_215200;
        case 0x215204u: goto label_215204;
        case 0x215208u: goto label_215208;
        case 0x21520cu: goto label_21520c;
        case 0x215210u: goto label_215210;
        case 0x215214u: goto label_215214;
        case 0x215218u: goto label_215218;
        case 0x21521cu: goto label_21521c;
        case 0x215220u: goto label_215220;
        case 0x215224u: goto label_215224;
        case 0x215228u: goto label_215228;
        case 0x21522cu: goto label_21522c;
        case 0x215230u: goto label_215230;
        case 0x215234u: goto label_215234;
        case 0x215238u: goto label_215238;
        case 0x21523cu: goto label_21523c;
        case 0x215240u: goto label_215240;
        case 0x215244u: goto label_215244;
        case 0x215248u: goto label_215248;
        case 0x21524cu: goto label_21524c;
        case 0x215250u: goto label_215250;
        case 0x215254u: goto label_215254;
        case 0x215258u: goto label_215258;
        case 0x21525cu: goto label_21525c;
        case 0x215260u: goto label_215260;
        case 0x215264u: goto label_215264;
        case 0x215268u: goto label_215268;
        case 0x21526cu: goto label_21526c;
        case 0x215270u: goto label_215270;
        case 0x215274u: goto label_215274;
        case 0x215278u: goto label_215278;
        case 0x21527cu: goto label_21527c;
        case 0x215280u: goto label_215280;
        case 0x215284u: goto label_215284;
        case 0x215288u: goto label_215288;
        case 0x21528cu: goto label_21528c;
        case 0x215290u: goto label_215290;
        case 0x215294u: goto label_215294;
        case 0x215298u: goto label_215298;
        case 0x21529cu: goto label_21529c;
        case 0x2152a0u: goto label_2152a0;
        case 0x2152a4u: goto label_2152a4;
        case 0x2152a8u: goto label_2152a8;
        case 0x2152acu: goto label_2152ac;
        case 0x2152b0u: goto label_2152b0;
        case 0x2152b4u: goto label_2152b4;
        case 0x2152b8u: goto label_2152b8;
        case 0x2152bcu: goto label_2152bc;
        case 0x2152c0u: goto label_2152c0;
        case 0x2152c4u: goto label_2152c4;
        case 0x2152c8u: goto label_2152c8;
        case 0x2152ccu: goto label_2152cc;
        case 0x2152d0u: goto label_2152d0;
        case 0x2152d4u: goto label_2152d4;
        case 0x2152d8u: goto label_2152d8;
        case 0x2152dcu: goto label_2152dc;
        case 0x2152e0u: goto label_2152e0;
        case 0x2152e4u: goto label_2152e4;
        case 0x2152e8u: goto label_2152e8;
        case 0x2152ecu: goto label_2152ec;
        case 0x2152f0u: goto label_2152f0;
        case 0x2152f4u: goto label_2152f4;
        case 0x2152f8u: goto label_2152f8;
        case 0x2152fcu: goto label_2152fc;
        case 0x215300u: goto label_215300;
        case 0x215304u: goto label_215304;
        case 0x215308u: goto label_215308;
        case 0x21530cu: goto label_21530c;
        case 0x215310u: goto label_215310;
        case 0x215314u: goto label_215314;
        case 0x215318u: goto label_215318;
        case 0x21531cu: goto label_21531c;
        case 0x215320u: goto label_215320;
        case 0x215324u: goto label_215324;
        case 0x215328u: goto label_215328;
        case 0x21532cu: goto label_21532c;
        case 0x215330u: goto label_215330;
        case 0x215334u: goto label_215334;
        case 0x215338u: goto label_215338;
        case 0x21533cu: goto label_21533c;
        case 0x215340u: goto label_215340;
        case 0x215344u: goto label_215344;
        case 0x215348u: goto label_215348;
        case 0x21534cu: goto label_21534c;
        case 0x215350u: goto label_215350;
        case 0x215354u: goto label_215354;
        case 0x215358u: goto label_215358;
        case 0x21535cu: goto label_21535c;
        case 0x215360u: goto label_215360;
        case 0x215364u: goto label_215364;
        case 0x215368u: goto label_215368;
        case 0x21536cu: goto label_21536c;
        case 0x215370u: goto label_215370;
        case 0x215374u: goto label_215374;
        case 0x215378u: goto label_215378;
        case 0x21537cu: goto label_21537c;
        case 0x215380u: goto label_215380;
        case 0x215384u: goto label_215384;
        case 0x215388u: goto label_215388;
        case 0x21538cu: goto label_21538c;
        case 0x215390u: goto label_215390;
        case 0x215394u: goto label_215394;
        case 0x215398u: goto label_215398;
        case 0x21539cu: goto label_21539c;
        case 0x2153a0u: goto label_2153a0;
        case 0x2153a4u: goto label_2153a4;
        case 0x2153a8u: goto label_2153a8;
        case 0x2153acu: goto label_2153ac;
        case 0x2153b0u: goto label_2153b0;
        case 0x2153b4u: goto label_2153b4;
        case 0x2153b8u: goto label_2153b8;
        case 0x2153bcu: goto label_2153bc;
        case 0x2153c0u: goto label_2153c0;
        case 0x2153c4u: goto label_2153c4;
        case 0x2153c8u: goto label_2153c8;
        case 0x2153ccu: goto label_2153cc;
        case 0x2153d0u: goto label_2153d0;
        case 0x2153d4u: goto label_2153d4;
        case 0x2153d8u: goto label_2153d8;
        case 0x2153dcu: goto label_2153dc;
        case 0x2153e0u: goto label_2153e0;
        case 0x2153e4u: goto label_2153e4;
        case 0x2153e8u: goto label_2153e8;
        case 0x2153ecu: goto label_2153ec;
        case 0x2153f0u: goto label_2153f0;
        case 0x2153f4u: goto label_2153f4;
        case 0x2153f8u: goto label_2153f8;
        case 0x2153fcu: goto label_2153fc;
        case 0x215400u: goto label_215400;
        case 0x215404u: goto label_215404;
        case 0x215408u: goto label_215408;
        case 0x21540cu: goto label_21540c;
        case 0x215410u: goto label_215410;
        case 0x215414u: goto label_215414;
        case 0x215418u: goto label_215418;
        case 0x21541cu: goto label_21541c;
        case 0x215420u: goto label_215420;
        case 0x215424u: goto label_215424;
        case 0x215428u: goto label_215428;
        case 0x21542cu: goto label_21542c;
        case 0x215430u: goto label_215430;
        case 0x215434u: goto label_215434;
        case 0x215438u: goto label_215438;
        case 0x21543cu: goto label_21543c;
        case 0x215440u: goto label_215440;
        case 0x215444u: goto label_215444;
        case 0x215448u: goto label_215448;
        case 0x21544cu: goto label_21544c;
        case 0x215450u: goto label_215450;
        case 0x215454u: goto label_215454;
        case 0x215458u: goto label_215458;
        case 0x21545cu: goto label_21545c;
        case 0x215460u: goto label_215460;
        case 0x215464u: goto label_215464;
        case 0x215468u: goto label_215468;
        case 0x21546cu: goto label_21546c;
        case 0x215470u: goto label_215470;
        case 0x215474u: goto label_215474;
        case 0x215478u: goto label_215478;
        case 0x21547cu: goto label_21547c;
        case 0x215480u: goto label_215480;
        case 0x215484u: goto label_215484;
        case 0x215488u: goto label_215488;
        case 0x21548cu: goto label_21548c;
        case 0x215490u: goto label_215490;
        case 0x215494u: goto label_215494;
        case 0x215498u: goto label_215498;
        case 0x21549cu: goto label_21549c;
        case 0x2154a0u: goto label_2154a0;
        case 0x2154a4u: goto label_2154a4;
        case 0x2154a8u: goto label_2154a8;
        case 0x2154acu: goto label_2154ac;
        case 0x2154b0u: goto label_2154b0;
        case 0x2154b4u: goto label_2154b4;
        case 0x2154b8u: goto label_2154b8;
        case 0x2154bcu: goto label_2154bc;
        case 0x2154c0u: goto label_2154c0;
        case 0x2154c4u: goto label_2154c4;
        case 0x2154c8u: goto label_2154c8;
        case 0x2154ccu: goto label_2154cc;
        case 0x2154d0u: goto label_2154d0;
        case 0x2154d4u: goto label_2154d4;
        case 0x2154d8u: goto label_2154d8;
        case 0x2154dcu: goto label_2154dc;
        case 0x2154e0u: goto label_2154e0;
        case 0x2154e4u: goto label_2154e4;
        case 0x2154e8u: goto label_2154e8;
        case 0x2154ecu: goto label_2154ec;
        case 0x2154f0u: goto label_2154f0;
        case 0x2154f4u: goto label_2154f4;
        case 0x2154f8u: goto label_2154f8;
        case 0x2154fcu: goto label_2154fc;
        case 0x215500u: goto label_215500;
        case 0x215504u: goto label_215504;
        case 0x215508u: goto label_215508;
        case 0x21550cu: goto label_21550c;
        case 0x215510u: goto label_215510;
        case 0x215514u: goto label_215514;
        case 0x215518u: goto label_215518;
        case 0x21551cu: goto label_21551c;
        case 0x215520u: goto label_215520;
        case 0x215524u: goto label_215524;
        case 0x215528u: goto label_215528;
        case 0x21552cu: goto label_21552c;
        case 0x215530u: goto label_215530;
        case 0x215534u: goto label_215534;
        case 0x215538u: goto label_215538;
        case 0x21553cu: goto label_21553c;
        case 0x215540u: goto label_215540;
        case 0x215544u: goto label_215544;
        case 0x215548u: goto label_215548;
        case 0x21554cu: goto label_21554c;
        case 0x215550u: goto label_215550;
        case 0x215554u: goto label_215554;
        case 0x215558u: goto label_215558;
        case 0x21555cu: goto label_21555c;
        case 0x215560u: goto label_215560;
        case 0x215564u: goto label_215564;
        case 0x215568u: goto label_215568;
        case 0x21556cu: goto label_21556c;
        case 0x215570u: goto label_215570;
        case 0x215574u: goto label_215574;
        case 0x215578u: goto label_215578;
        case 0x21557cu: goto label_21557c;
        case 0x215580u: goto label_215580;
        case 0x215584u: goto label_215584;
        case 0x215588u: goto label_215588;
        case 0x21558cu: goto label_21558c;
        case 0x215590u: goto label_215590;
        case 0x215594u: goto label_215594;
        case 0x215598u: goto label_215598;
        case 0x21559cu: goto label_21559c;
        case 0x2155a0u: goto label_2155a0;
        case 0x2155a4u: goto label_2155a4;
        case 0x2155a8u: goto label_2155a8;
        case 0x2155acu: goto label_2155ac;
        case 0x2155b0u: goto label_2155b0;
        case 0x2155b4u: goto label_2155b4;
        case 0x2155b8u: goto label_2155b8;
        case 0x2155bcu: goto label_2155bc;
        case 0x2155c0u: goto label_2155c0;
        case 0x2155c4u: goto label_2155c4;
        case 0x2155c8u: goto label_2155c8;
        case 0x2155ccu: goto label_2155cc;
        case 0x2155d0u: goto label_2155d0;
        case 0x2155d4u: goto label_2155d4;
        case 0x2155d8u: goto label_2155d8;
        case 0x2155dcu: goto label_2155dc;
        case 0x2155e0u: goto label_2155e0;
        case 0x2155e4u: goto label_2155e4;
        case 0x2155e8u: goto label_2155e8;
        case 0x2155ecu: goto label_2155ec;
        case 0x2155f0u: goto label_2155f0;
        case 0x2155f4u: goto label_2155f4;
        case 0x2155f8u: goto label_2155f8;
        case 0x2155fcu: goto label_2155fc;
        case 0x215600u: goto label_215600;
        case 0x215604u: goto label_215604;
        case 0x215608u: goto label_215608;
        case 0x21560cu: goto label_21560c;
        case 0x215610u: goto label_215610;
        case 0x215614u: goto label_215614;
        case 0x215618u: goto label_215618;
        case 0x21561cu: goto label_21561c;
        case 0x215620u: goto label_215620;
        case 0x215624u: goto label_215624;
        case 0x215628u: goto label_215628;
        case 0x21562cu: goto label_21562c;
        case 0x215630u: goto label_215630;
        case 0x215634u: goto label_215634;
        case 0x215638u: goto label_215638;
        case 0x21563cu: goto label_21563c;
        case 0x215640u: goto label_215640;
        case 0x215644u: goto label_215644;
        case 0x215648u: goto label_215648;
        case 0x21564cu: goto label_21564c;
        case 0x215650u: goto label_215650;
        case 0x215654u: goto label_215654;
        case 0x215658u: goto label_215658;
        case 0x21565cu: goto label_21565c;
        case 0x215660u: goto label_215660;
        case 0x215664u: goto label_215664;
        case 0x215668u: goto label_215668;
        case 0x21566cu: goto label_21566c;
        case 0x215670u: goto label_215670;
        case 0x215674u: goto label_215674;
        case 0x215678u: goto label_215678;
        case 0x21567cu: goto label_21567c;
        case 0x215680u: goto label_215680;
        case 0x215684u: goto label_215684;
        case 0x215688u: goto label_215688;
        case 0x21568cu: goto label_21568c;
        case 0x215690u: goto label_215690;
        case 0x215694u: goto label_215694;
        case 0x215698u: goto label_215698;
        case 0x21569cu: goto label_21569c;
        case 0x2156a0u: goto label_2156a0;
        case 0x2156a4u: goto label_2156a4;
        case 0x2156a8u: goto label_2156a8;
        case 0x2156acu: goto label_2156ac;
        case 0x2156b0u: goto label_2156b0;
        case 0x2156b4u: goto label_2156b4;
        case 0x2156b8u: goto label_2156b8;
        case 0x2156bcu: goto label_2156bc;
        case 0x2156c0u: goto label_2156c0;
        case 0x2156c4u: goto label_2156c4;
        case 0x2156c8u: goto label_2156c8;
        case 0x2156ccu: goto label_2156cc;
        case 0x2156d0u: goto label_2156d0;
        case 0x2156d4u: goto label_2156d4;
        case 0x2156d8u: goto label_2156d8;
        case 0x2156dcu: goto label_2156dc;
        case 0x2156e0u: goto label_2156e0;
        case 0x2156e4u: goto label_2156e4;
        case 0x2156e8u: goto label_2156e8;
        case 0x2156ecu: goto label_2156ec;
        case 0x2156f0u: goto label_2156f0;
        case 0x2156f4u: goto label_2156f4;
        case 0x2156f8u: goto label_2156f8;
        case 0x2156fcu: goto label_2156fc;
        case 0x215700u: goto label_215700;
        case 0x215704u: goto label_215704;
        case 0x215708u: goto label_215708;
        case 0x21570cu: goto label_21570c;
        case 0x215710u: goto label_215710;
        case 0x215714u: goto label_215714;
        case 0x215718u: goto label_215718;
        case 0x21571cu: goto label_21571c;
        case 0x215720u: goto label_215720;
        case 0x215724u: goto label_215724;
        case 0x215728u: goto label_215728;
        case 0x21572cu: goto label_21572c;
        case 0x215730u: goto label_215730;
        case 0x215734u: goto label_215734;
        default: return;
    }

label_214f68:
    if (ctx->pc == 0x214F68u) {
        ctx->pc = 0x214F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F64u;
        // 0x214f68: 0xaf8591c8  sw          $a1, -0x6E38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939080), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214F6Cu;
        goto label_214f6c;
    }
    ctx->pc = 0x214F64u;
    {
        const bool branch_taken_0x214f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F64u;
        // 0x214f68: 0xaf8591c8  sw          $a1, -0x6E38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939080), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f64) {
            ctx->pc = 0x2150BCu;
            goto label_2150bc;
        }
    }
    ctx->pc = 0x214F6Cu;
label_214f6c:
    // 0x214f6c: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x214f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_214f70:
    // 0x214f70: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_214f74:
    if (ctx->pc == 0x214F74u) {
        ctx->pc = 0x214F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F70u;
        // 0x214f74: 0x30830004  andi        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x214F78u;
        goto label_214f78;
    }
    ctx->pc = 0x214F70u;
    {
        const bool branch_taken_0x214f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F70u;
        // 0x214f74: 0x30830004  andi        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f70) {
            ctx->pc = 0x214F88u;
            goto label_214f88;
        }
    }
    ctx->pc = 0x214F78u;
label_214f78:
    // 0x214f78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x214f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214f7c:
    // 0x214f7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x214f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_214f80:
    // 0x214f80: 0x1000004d  b           . + 4 + (0x4D << 2)
label_214f84:
    if (ctx->pc == 0x214F84u) {
        ctx->pc = 0x214F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F80u;
        // 0x214f84: 0xaf8391e0  sw          $v1, -0x6E20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214F88u;
        goto label_214f88;
    }
    ctx->pc = 0x214F80u;
    {
        const bool branch_taken_0x214f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F80u;
        // 0x214f84: 0xaf8391e0  sw          $v1, -0x6E20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f80) {
            ctx->pc = 0x2150B8u;
            goto label_2150b8;
        }
    }
    ctx->pc = 0x214F88u;
label_214f88:
    // 0x214f88: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_214f8c:
    if (ctx->pc == 0x214F8Cu) {
        ctx->pc = 0x214F90u;
        goto label_214f90;
    }
    ctx->pc = 0x214F88u;
    {
        const bool branch_taken_0x214f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x214f88) {
            ctx->pc = 0x214FACu;
            goto label_214fac;
        }
    }
    ctx->pc = 0x214F90u;
label_214f90:
    // 0x214f90: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x214f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_214f94:
    // 0x214f94: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_214f98:
    if (ctx->pc == 0x214F98u) {
        ctx->pc = 0x214F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F94u;
        // 0x214f98: 0x30830008  andi        $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x214F9Cu;
        goto label_214f9c;
    }
    ctx->pc = 0x214F94u;
    {
        const bool branch_taken_0x214f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F94u;
        // 0x214f98: 0x30830008  andi        $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f94) {
            ctx->pc = 0x214FB0u;
            goto label_214fb0;
        }
    }
    ctx->pc = 0x214F9Cu;
label_214f9c:
    // 0x214f9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x214f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214fa0:
    // 0x214fa0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x214fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_214fa4:
    // 0x214fa4: 0x10000044  b           . + 4 + (0x44 << 2)
label_214fa8:
    if (ctx->pc == 0x214FA8u) {
        ctx->pc = 0x214FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FA4u;
        // 0x214fa8: 0xaf8391e0  sw          $v1, -0x6E20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214FACu;
        goto label_214fac;
    }
    ctx->pc = 0x214FA4u;
    {
        const bool branch_taken_0x214fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FA4u;
        // 0x214fa8: 0xaf8391e0  sw          $v1, -0x6E20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fa4) {
            ctx->pc = 0x2150B8u;
            goto label_2150b8;
        }
    }
    ctx->pc = 0x214FACu;
label_214fac:
    // 0x214fac: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x214facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_214fb0:
    // 0x214fb0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_214fb4:
    if (ctx->pc == 0x214FB4u) {
        ctx->pc = 0x214FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FB0u;
        // 0x214fb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214FB8u;
        goto label_214fb8;
    }
    ctx->pc = 0x214FB0u;
    {
        const bool branch_taken_0x214fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FB0u;
        // 0x214fb4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fb0) {
            ctx->pc = 0x214FC4u;
            goto label_214fc4;
        }
    }
    ctx->pc = 0x214FB8u;
label_214fb8:
    // 0x214fb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x214fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214fbc:
    // 0x214fbc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_214fc0:
    if (ctx->pc == 0x214FC0u) {
        ctx->pc = 0x214FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FBCu;
        // 0x214fc0: 0xaf8591e0  sw          $a1, -0x6E20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939104), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214FC4u;
        goto label_214fc4;
    }
    ctx->pc = 0x214FBCu;
    {
        const bool branch_taken_0x214fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FBCu;
        // 0x214fc0: 0xaf8591e0  sw          $a1, -0x6E20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939104), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fbc) {
            ctx->pc = 0x2150B8u;
            goto label_2150b8;
        }
    }
    ctx->pc = 0x214FC4u;
label_214fc4:
    // 0x214fc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214fc8:
    // 0x214fc8: 0x1000003b  b           . + 4 + (0x3B << 2)
label_214fcc:
    if (ctx->pc == 0x214FCCu) {
        ctx->pc = 0x214FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FC8u;
        // 0x214fcc: 0xaf8391e0  sw          $v1, -0x6E20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214FD0u;
        goto label_214fd0;
    }
    ctx->pc = 0x214FC8u;
    {
        const bool branch_taken_0x214fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FC8u;
        // 0x214fcc: 0xaf8391e0  sw          $v1, -0x6E20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fc8) {
            ctx->pc = 0x2150B8u;
            goto label_2150b8;
        }
    }
    ctx->pc = 0x214FD0u;
label_214fd0:
    // 0x214fd0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x214fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_214fd4:
    // 0x214fd4: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
label_214fd8:
    if (ctx->pc == 0x214FD8u) {
        ctx->pc = 0x214FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FD4u;
        // 0x214fd8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214FDCu;
        goto label_214fdc;
    }
    ctx->pc = 0x214FD4u;
    {
        const bool branch_taken_0x214fd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x214FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FD4u;
        // 0x214fd8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fd4) {
            ctx->pc = 0x215054u;
            goto label_215054;
        }
    }
    ctx->pc = 0x214FDCu;
label_214fdc:
    // 0x214fdc: 0x8f8491dc  lw          $a0, -0x6E24($gp)
    ctx->pc = 0x214fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939100)));
label_214fe0:
    // 0x214fe0: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x214fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_214fe4:
    // 0x214fe4: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_214fe8:
    if (ctx->pc == 0x214FE8u) {
        ctx->pc = 0x214FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FE4u;
        // 0x214fe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214FECu;
        goto label_214fec;
    }
    ctx->pc = 0x214FE4u;
    {
        const bool branch_taken_0x214fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x214FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FE4u;
        // 0x214fe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fe4) {
            ctx->pc = 0x215004u;
            goto label_215004;
        }
    }
    ctx->pc = 0x214FECu;
label_214fec:
    // 0x214fec: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x214fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_214ff0:
    // 0x214ff0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_214ff4:
    if (ctx->pc == 0x214FF4u) {
        ctx->pc = 0x214FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FF0u;
        // 0x214ff4: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214FF8u;
        goto label_214ff8;
    }
    ctx->pc = 0x214FF0u;
    {
        const bool branch_taken_0x214ff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x214FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FF0u;
        // 0x214ff4: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ff0) {
            ctx->pc = 0x215000u;
            goto label_215000;
        }
    }
    ctx->pc = 0x214FF8u;
label_214ff8:
    // 0x214ff8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_214ffc:
    if (ctx->pc == 0x214FFCu) {
        ctx->pc = 0x214FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FF8u;
        // 0x214ffc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215000u;
        goto label_215000;
    }
    ctx->pc = 0x214FF8u;
    {
        const bool branch_taken_0x214ff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x214FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FF8u;
        // 0x214ffc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ff8) {
            ctx->pc = 0x21500Cu;
            goto label_21500c;
        }
    }
    ctx->pc = 0x215000u;
label_215000:
    // 0x215000: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x215000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215004:
    // 0x215004: 0x1000002c  b           . + 4 + (0x2C << 2)
label_215008:
    if (ctx->pc == 0x215008u) {
        ctx->pc = 0x21500Cu;
        goto label_21500c;
    }
    ctx->pc = 0x215004u;
    {
        const bool branch_taken_0x215004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215004) {
            ctx->pc = 0x2150B8u;
            goto label_2150b8;
        }
    }
    ctx->pc = 0x21500Cu;
label_21500c:
    // 0x21500c: 0x90244af3  lbu         $a0, 0x4AF3($at)
    ctx->pc = 0x21500cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19187)));
label_215010:
    // 0x215010: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x215010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_215014:
    // 0x215014: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_215018:
    if (ctx->pc == 0x215018u) {
        ctx->pc = 0x215018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215014u;
        // 0x215018: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21501Cu;
        goto label_21501c;
    }
    ctx->pc = 0x215014u;
    {
        const bool branch_taken_0x215014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215014u;
        // 0x215018: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215014) {
            ctx->pc = 0x215028u;
            goto label_215028;
        }
    }
    ctx->pc = 0x21501Cu;
label_21501c:
    // 0x21501c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21501cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215020:
    // 0x215020: 0x10000025  b           . + 4 + (0x25 << 2)
label_215024:
    if (ctx->pc == 0x215024u) {
        ctx->pc = 0x215024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215020u;
        // 0x215024: 0xaf8591d4  sw          $a1, -0x6E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215028u;
        goto label_215028;
    }
    ctx->pc = 0x215020u;
    {
        const bool branch_taken_0x215020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215020u;
        // 0x215024: 0xaf8591d4  sw          $a1, -0x6E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215020) {
            ctx->pc = 0x2150B8u;
            goto label_2150b8;
        }
    }
    ctx->pc = 0x215028u;
label_215028:
    // 0x215028: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_21502c:
    if (ctx->pc == 0x21502Cu) {
        ctx->pc = 0x215030u;
        goto label_215030;
    }
    ctx->pc = 0x215028u;
    {
        const bool branch_taken_0x215028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215028) {
            ctx->pc = 0x215044u;
            goto label_215044;
        }
    }
    ctx->pc = 0x215030u;
label_215030:
    // 0x215030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x215030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215034:
    // 0x215034: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x215034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_215038:
    // 0x215038: 0xaf8391d4  sw          $v1, -0x6E2C($gp)
    ctx->pc = 0x215038u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939092), GPR_U32(ctx, 3));
label_21503c:
    // 0x21503c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_215040:
    if (ctx->pc == 0x215040u) {
        ctx->pc = 0x215040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21503Cu;
        // 0x215040: 0xaf8391e0  sw          $v1, -0x6E20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215044u;
        goto label_215044;
    }
    ctx->pc = 0x21503Cu;
    {
        const bool branch_taken_0x21503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21503Cu;
        // 0x215040: 0xaf8391e0  sw          $v1, -0x6E20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21503c) {
            ctx->pc = 0x2150B8u;
            goto label_2150b8;
        }
    }
    ctx->pc = 0x215044u;
label_215044:
    // 0x215044: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x215044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215048:
    // 0x215048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x215048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21504c:
    // 0x21504c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_215050:
    if (ctx->pc == 0x215050u) {
        ctx->pc = 0x215050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21504Cu;
        // 0x215050: 0xaf8391e0  sw          $v1, -0x6E20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215054u;
        goto label_215054;
    }
    ctx->pc = 0x21504Cu;
    {
        const bool branch_taken_0x21504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21504Cu;
        // 0x215050: 0xaf8391e0  sw          $v1, -0x6E20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21504c) {
            ctx->pc = 0x2150B8u;
            goto label_2150b8;
        }
    }
    ctx->pc = 0x215054u;
label_215054:
    // 0x215054: 0x90244af3  lbu         $a0, 0x4AF3($at)
    ctx->pc = 0x215054u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19187)));
label_215058:
    // 0x215058: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x215058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_21505c:
    // 0x21505c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_215060:
    if (ctx->pc == 0x215060u) {
        ctx->pc = 0x215060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21505Cu;
        // 0x215060: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x215064u;
        goto label_215064;
    }
    ctx->pc = 0x21505Cu;
    {
        const bool branch_taken_0x21505c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21505Cu;
        // 0x215060: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21505c) {
            ctx->pc = 0x215074u;
            goto label_215074;
        }
    }
    ctx->pc = 0x215064u;
label_215064:
    // 0x215064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x215064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215068:
    // 0x215068: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x215068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21506c:
    // 0x21506c: 0x10000012  b           . + 4 + (0x12 << 2)
label_215070:
    if (ctx->pc == 0x215070u) {
        ctx->pc = 0x215070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21506Cu;
        // 0x215070: 0xaf8391d4  sw          $v1, -0x6E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215074u;
        goto label_215074;
    }
    ctx->pc = 0x21506Cu;
    {
        const bool branch_taken_0x21506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21506Cu;
        // 0x215070: 0xaf8391d4  sw          $v1, -0x6E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21506c) {
            ctx->pc = 0x2150B8u;
            goto label_2150b8;
        }
    }
    ctx->pc = 0x215074u;
label_215074:
    // 0x215074: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_215078:
    if (ctx->pc == 0x215078u) {
        ctx->pc = 0x21507Cu;
        goto label_21507c;
    }
    ctx->pc = 0x215074u;
    {
        const bool branch_taken_0x215074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215074) {
            ctx->pc = 0x21508Cu;
            goto label_21508c;
        }
    }
    ctx->pc = 0x21507Cu;
label_21507c:
    // 0x21507c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21507cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215080:
    // 0x215080: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x215080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_215084:
    // 0x215084: 0x1000000c  b           . + 4 + (0xC << 2)
label_215088:
    if (ctx->pc == 0x215088u) {
        ctx->pc = 0x215088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215084u;
        // 0x215088: 0xaf8391d4  sw          $v1, -0x6E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21508Cu;
        goto label_21508c;
    }
    ctx->pc = 0x215084u;
    {
        const bool branch_taken_0x215084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215084u;
        // 0x215088: 0xaf8391d4  sw          $v1, -0x6E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215084) {
            ctx->pc = 0x2150B8u;
            goto label_2150b8;
        }
    }
    ctx->pc = 0x21508Cu;
label_21508c:
    // 0x21508c: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x21508cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_215090:
    // 0x215090: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_215094:
    if (ctx->pc == 0x215094u) {
        ctx->pc = 0x215094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215090u;
        // 0x215094: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215098u;
        goto label_215098;
    }
    ctx->pc = 0x215090u;
    {
        const bool branch_taken_0x215090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x215094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215090u;
        // 0x215094: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215090) {
            ctx->pc = 0x2150A4u;
            goto label_2150a4;
        }
    }
    ctx->pc = 0x215098u;
label_215098:
    // 0x215098: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x215098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_21509c:
    // 0x21509c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2150a0:
    if (ctx->pc == 0x2150A0u) {
        ctx->pc = 0x2150A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21509Cu;
        // 0x2150a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2150A4u;
        goto label_2150a4;
    }
    ctx->pc = 0x21509Cu;
    {
        const bool branch_taken_0x21509c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2150A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21509Cu;
        // 0x2150a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21509c) {
            ctx->pc = 0x2150B0u;
            goto label_2150b0;
        }
    }
    ctx->pc = 0x2150A4u;
label_2150a4:
    // 0x2150a4: 0xaf8591e0  sw          $a1, -0x6E20($gp)
    ctx->pc = 0x2150a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939104), GPR_U32(ctx, 5));
label_2150a8:
    // 0x2150a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2150ac:
    if (ctx->pc == 0x2150ACu) {
        ctx->pc = 0x2150ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2150A8u;
        // 0x2150ac: 0xaf8591d4  sw          $a1, -0x6E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2150B0u;
        goto label_2150b0;
    }
    ctx->pc = 0x2150A8u;
    {
        const bool branch_taken_0x2150a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2150ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2150A8u;
        // 0x2150ac: 0xaf8591d4  sw          $a1, -0x6E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939092), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150a8) {
            ctx->pc = 0x2150B8u;
            goto label_2150b8;
        }
    }
    ctx->pc = 0x2150B0u;
label_2150b0:
    // 0x2150b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2150b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2150b4:
    // 0x2150b4: 0xaf8391e0  sw          $v1, -0x6E20($gp)
    ctx->pc = 0x2150b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939104), GPR_U32(ctx, 3));
label_2150b8:
    // 0x2150b8: 0xaf8591c8  sw          $a1, -0x6E38($gp)
    ctx->pc = 0x2150b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939080), GPR_U32(ctx, 5));
label_2150bc:
    // 0x2150bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2150bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2150c0:
    // 0x2150c0: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x2150c0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2150c4:
    // 0x2150c4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2150c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_2150c8:
    // 0x2150c8: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x2150c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
label_2150cc:
    // 0x2150cc: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2150ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2150d0:
    // 0x2150d0: 0x246382b0  addiu       $v1, $v1, -0x7D50
    ctx->pc = 0x2150d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935216));
label_2150d4:
    // 0x2150d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2150d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2150d8:
    // 0x2150d8: 0x53980  sll         $a3, $a1, 6
    ctx->pc = 0x2150d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_2150dc:
    // 0x2150dc: 0x24690000  addiu       $t1, $v1, 0x0
    ctx->pc = 0x2150dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_2150e0:
    // 0x2150e0: 0x254a7930  addiu       $t2, $t2, 0x7930
    ctx->pc = 0x2150e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 31024));
label_2150e4:
    // 0x2150e4: 0x51a80  sll         $v1, $a1, 10
    ctx->pc = 0x2150e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
label_2150e8:
    // 0x2150e8: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x2150e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2150ec:
    // 0x2150ec: 0x24e5003f  addiu       $a1, $a3, 0x3F
    ctx->pc = 0x2150ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
label_2150f0:
    // 0x2150f0: 0x24e30040  addiu       $v1, $a3, 0x40
    ctx->pc = 0x2150f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_2150f4:
    // 0x2150f4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2150f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_2150f8:
    // 0x2150f8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2150f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2150fc:
    // 0x2150fc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2150fcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_215100:
    // 0x215100: 0x71e38  dsll        $v1, $a3, 24
    ctx->pc = 0x215100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 24);
label_215104:
    // 0x215104: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x215104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_215108:
    // 0x215108: 0x588bc  dsll32      $s1, $a1, 2
    ctx->pc = 0x215108u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 2));
label_21510c:
    // 0x21510c: 0x1596821  addu        $t5, $t2, $t9
    ctx->pc = 0x21510cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 25)));
label_215110:
    // 0x215110: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x215110u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215114:
    // 0x215114: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x215114u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215118:
    // 0x215118: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x215118u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21511c:
    // 0x21511c: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x21511cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215120:
    // 0x215120: 0x12e2821  addu        $a1, $t1, $t6
    ctx->pc = 0x215120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
label_215124:
    // 0x215124: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x215124u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_215128:
    // 0x215128: 0x1af8021  addu        $s0, $t5, $t7
    ctx->pc = 0x215128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_21512c:
    // 0x21512c: 0x18903c  dsll32      $s2, $t8, 0
    ctx->pc = 0x21512cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 24) << (32 + 0));
label_215130:
    // 0x215130: 0x183900  sll         $a3, $t8, 4
    ctx->pc = 0x215130u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
label_215134:
    // 0x215134: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x215134u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_215138:
    // 0x215138: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x215138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_21513c:
    // 0x21513c: 0x129938  dsll        $s3, $s2, 4
    ctx->pc = 0x21513cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << 4);
label_215140:
    // 0x215140: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x215140u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_215144:
    // 0x215144: 0x271200ff  addiu       $s2, $t8, 0xFF
    ctx->pc = 0x215144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 24), 255));
label_215148:
    // 0x215148: 0x3673000a  ori         $s3, $s3, 0xA
    ctx->pc = 0x215148u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)10);
label_21514c:
    // 0x21514c: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x21514cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
label_215150:
    // 0x215150: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x215150u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
label_215154:
    // 0x215154: 0x27050100  addiu       $a1, $t8, 0x100
    ctx->pc = 0x215154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 256));
label_215158:
    // 0x215158: 0xfe080280  sd          $t0, 0x280($s0)
    ctx->pc = 0x215158u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 640), GPR_U64(ctx, 8));
label_21515c:
    // 0x21515c: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x21515cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_215160:
    // 0x215160: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x215160u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_215164:
    // 0x215164: 0x1243b8  dsll        $t0, $s2, 14
    ctx->pc = 0x215164u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << 14);
label_215168:
    // 0x215168: 0xa6070298  sh          $a3, 0x298($s0)
    ctx->pc = 0x215168u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 664), (uint16_t)GPR_U32(ctx, 7));
label_21516c:
    // 0x21516c: 0x2684025  or          $t0, $s3, $t0
    ctx->pc = 0x21516cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) | GPR_U64(ctx, 8));
label_215170:
    // 0x215170: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x215170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_215174:
    // 0x215174: 0xa606029a  sh          $a2, 0x29A($s0)
    ctx->pc = 0x215174u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 666), (uint16_t)GPR_U32(ctx, 6));
label_215178:
    // 0x215178: 0x683825  or          $a3, $v1, $t0
    ctx->pc = 0x215178u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_21517c:
    // 0x21517c: 0xa60502a8  sh          $a1, 0x2A8($s0)
    ctx->pc = 0x21517cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 680), (uint16_t)GPR_U32(ctx, 5));
label_215180:
    // 0x215180: 0x25ef00a0  addiu       $t7, $t7, 0xA0
    ctx->pc = 0x215180u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 160));
label_215184:
    // 0x215184: 0xf12825  or          $a1, $a3, $s1
    ctx->pc = 0x215184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
label_215188:
    // 0x215188: 0xa60402aa  sh          $a0, 0x2AA($s0)
    ctx->pc = 0x215188u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 682), (uint16_t)GPR_U32(ctx, 4));
label_21518c:
    // 0x21518c: 0xfe050260  sd          $a1, 0x260($s0)
    ctx->pc = 0x21518cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 608), GPR_U64(ctx, 5));
label_215190:
    // 0x215190: 0x29850002  slti        $a1, $t4, 0x2
    ctx->pc = 0x215190u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)2) ? 1 : 0);
label_215194:
    // 0x215194: 0x14a0ffe2  bnez        $a1, . + 4 + (-0x1E << 2)
label_215198:
    if (ctx->pc == 0x215198u) {
        ctx->pc = 0x215198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215194u;
        // 0x215198: 0x27180100  addiu       $t8, $t8, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21519Cu;
        goto label_21519c;
    }
    ctx->pc = 0x215194u;
    {
        const bool branch_taken_0x215194 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x215198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215194u;
        // 0x215198: 0x27180100  addiu       $t8, $t8, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215194) {
            ctx->pc = 0x215120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215120;
        }
    }
    ctx->pc = 0x21519Cu;
label_21519c:
    // 0x21519c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x21519cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_2151a0:
    // 0x2151a0: 0x29650002  slti        $a1, $t3, 0x2
    ctx->pc = 0x2151a0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
label_2151a4:
    // 0x2151a4: 0x14a0ffd9  bnez        $a1, . + 4 + (-0x27 << 2)
label_2151a8:
    if (ctx->pc == 0x2151A8u) {
        ctx->pc = 0x2151A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151A4u;
        // 0x2151a8: 0x273904c0  addiu       $t9, $t9, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2151ACu;
        goto label_2151ac;
    }
    ctx->pc = 0x2151A4u;
    {
        const bool branch_taken_0x2151a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2151A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151A4u;
        // 0x2151a8: 0x273904c0  addiu       $t9, $t9, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2151a4) {
            ctx->pc = 0x21510Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21510c;
        }
    }
    ctx->pc = 0x2151ACu;
label_2151ac:
    // 0x2151ac: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2151acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2151b0:
    // 0x2151b0: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x2151b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2151b4:
    // 0x2151b4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2151b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2151b8:
    // 0x2151b8: 0xaf8391f4  sw          $v1, -0x6E0C($gp)
    ctx->pc = 0x2151b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939124), GPR_U32(ctx, 3));
label_2151bc:
    // 0x2151bc: 0xac2478d0  sw          $a0, 0x78D0($at)
    ctx->pc = 0x2151bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30928), GPR_U32(ctx, 4));
label_2151c0:
    // 0x2151c0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x2151c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2151c4:
    // 0x2151c4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2151c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2151c8:
    // 0x2151c8: 0xaf8391ec  sw          $v1, -0x6E14($gp)
    ctx->pc = 0x2151c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939116), GPR_U32(ctx, 3));
label_2151cc:
    // 0x2151cc: 0xac2478d4  sw          $a0, 0x78D4($at)
    ctx->pc = 0x2151ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30932), GPR_U32(ctx, 4));
label_2151d0:
    // 0x2151d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2151d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2151d4:
    // 0x2151d4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2151d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2151d8:
    // 0x2151d8: 0xaf839214  sw          $v1, -0x6DEC($gp)
    ctx->pc = 0x2151d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939156), GPR_U32(ctx, 3));
label_2151dc:
    // 0x2151dc: 0xac2478d8  sw          $a0, 0x78D8($at)
    ctx->pc = 0x2151dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30936), GPR_U32(ctx, 4));
label_2151e0:
    // 0x2151e0: 0x24030120  addiu       $v1, $zero, 0x120
    ctx->pc = 0x2151e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_2151e4:
    // 0x2151e4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2151e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2151e8:
    // 0x2151e8: 0xaf8491f0  sw          $a0, -0x6E10($gp)
    ctx->pc = 0x2151e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939120), GPR_U32(ctx, 4));
label_2151ec:
    // 0x2151ec: 0xac2378fc  sw          $v1, 0x78FC($at)
    ctx->pc = 0x2151ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30972), GPR_U32(ctx, 3));
label_2151f0:
    // 0x2151f0: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x2151f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_2151f4:
    // 0x2151f4: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x2151f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2151f8:
    // 0x2151f8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2151f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2151fc:
    // 0x2151fc: 0xaf8391fc  sw          $v1, -0x6E04($gp)
    ctx->pc = 0x2151fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939132), GPR_U32(ctx, 3));
label_215200:
    // 0x215200: 0x240500df  addiu       $a1, $zero, 0xDF
    ctx->pc = 0x215200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
label_215204:
    // 0x215204: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x215204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_215208:
    // 0x215208: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x215208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21520c:
    // 0x21520c: 0xaf83920c  sw          $v1, -0x6DF4($gp)
    ctx->pc = 0x21520cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939148), GPR_U32(ctx, 3));
label_215210:
    // 0x215210: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x215210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_215214:
    // 0x215214: 0xaf8091e8  sw          $zero, -0x6E18($gp)
    ctx->pc = 0x215214u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939112), GPR_U32(ctx, 0));
label_215218:
    // 0x215218: 0xaf839200  sw          $v1, -0x6E00($gp)
    ctx->pc = 0x215218u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939136), GPR_U32(ctx, 3));
label_21521c:
    // 0x21521c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x21521cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_215220:
    // 0x215220: 0xaf809210  sw          $zero, -0x6DF0($gp)
    ctx->pc = 0x215220u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939152), GPR_U32(ctx, 0));
label_215224:
    // 0x215224: 0xac23790c  sw          $v1, 0x790C($at)
    ctx->pc = 0x215224u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30988), GPR_U32(ctx, 3));
label_215228:
    // 0x215228: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21522c:
    // 0x21522c: 0xaf8091f8  sw          $zero, -0x6E08($gp)
    ctx->pc = 0x21522cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939128), GPR_U32(ctx, 0));
label_215230:
    // 0x215230: 0xac2078dc  sw          $zero, 0x78DC($at)
    ctx->pc = 0x215230u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30940), GPR_U32(ctx, 0));
label_215234:
    // 0x215234: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215238:
    // 0x215238: 0xaf809208  sw          $zero, -0x6DF8($gp)
    ctx->pc = 0x215238u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939144), GPR_U32(ctx, 0));
label_21523c:
    // 0x21523c: 0xac267920  sw          $a2, 0x7920($at)
    ctx->pc = 0x21523cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31008), GPR_U32(ctx, 6));
label_215240:
    // 0x215240: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215244:
    // 0x215244: 0xaf809204  sw          $zero, -0x6DFC($gp)
    ctx->pc = 0x215244u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939140), GPR_U32(ctx, 0));
label_215248:
    // 0x215248: 0xac267928  sw          $a2, 0x7928($at)
    ctx->pc = 0x215248u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31016), GPR_U32(ctx, 6));
label_21524c:
    // 0x21524c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21524cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215250:
    // 0x215250: 0xac257924  sw          $a1, 0x7924($at)
    ctx->pc = 0x215250u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31012), GPR_U32(ctx, 5));
label_215254:
    // 0x215254: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215258:
    // 0x215258: 0xac25792c  sw          $a1, 0x792C($at)
    ctx->pc = 0x215258u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31020), GPR_U32(ctx, 5));
label_21525c:
    // 0x21525c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21525cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215260:
    // 0x215260: 0xac247910  sw          $a0, 0x7910($at)
    ctx->pc = 0x215260u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30992), GPR_U32(ctx, 4));
label_215264:
    // 0x215264: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215268:
    // 0x215268: 0xac247914  sw          $a0, 0x7914($at)
    ctx->pc = 0x215268u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30996), GPR_U32(ctx, 4));
label_21526c:
    // 0x21526c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21526cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215270:
    // 0x215270: 0xac247918  sw          $a0, 0x7918($at)
    ctx->pc = 0x215270u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31000), GPR_U32(ctx, 4));
label_215274:
    // 0x215274: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215278:
    // 0x215278: 0xac20791c  sw          $zero, 0x791C($at)
    ctx->pc = 0x215278u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31004), GPR_U32(ctx, 0));
label_21527c:
    // 0x21527c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21527cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215280:
    // 0x215280: 0xac2078f0  sw          $zero, 0x78F0($at)
    ctx->pc = 0x215280u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30960), GPR_U32(ctx, 0));
label_215284:
    // 0x215284: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215288:
    // 0x215288: 0xac2078f4  sw          $zero, 0x78F4($at)
    ctx->pc = 0x215288u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30964), GPR_U32(ctx, 0));
label_21528c:
    // 0x21528c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21528cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215290:
    // 0x215290: 0xac2078f8  sw          $zero, 0x78F8($at)
    ctx->pc = 0x215290u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30968), GPR_U32(ctx, 0));
label_215294:
    // 0x215294: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215298:
    // 0x215298: 0xac2478e0  sw          $a0, 0x78E0($at)
    ctx->pc = 0x215298u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30944), GPR_U32(ctx, 4));
label_21529c:
    // 0x21529c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21529cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2152a0:
    // 0x2152a0: 0xac2478e4  sw          $a0, 0x78E4($at)
    ctx->pc = 0x2152a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30948), GPR_U32(ctx, 4));
label_2152a4:
    // 0x2152a4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2152a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2152a8:
    // 0x2152a8: 0xac2478e8  sw          $a0, 0x78E8($at)
    ctx->pc = 0x2152a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30952), GPR_U32(ctx, 4));
label_2152ac:
    // 0x2152ac: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2152acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2152b0:
    // 0x2152b0: 0xac2078ec  sw          $zero, 0x78EC($at)
    ctx->pc = 0x2152b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30956), GPR_U32(ctx, 0));
label_2152b4:
    // 0x2152b4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2152b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2152b8:
    // 0x2152b8: 0xac207900  sw          $zero, 0x7900($at)
    ctx->pc = 0x2152b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30976), GPR_U32(ctx, 0));
label_2152bc:
    // 0x2152bc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2152bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2152c0:
    // 0x2152c0: 0xac207904  sw          $zero, 0x7904($at)
    ctx->pc = 0x2152c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30980), GPR_U32(ctx, 0));
label_2152c4:
    // 0x2152c4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2152c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2152c8:
    // 0x2152c8: 0xac207908  sw          $zero, 0x7908($at)
    ctx->pc = 0x2152c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30984), GPR_U32(ctx, 0));
label_2152cc:
    // 0x2152cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2152ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2152d0:
    // 0x2152d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2152d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2152d4:
    // 0x2152d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2152d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2152d8:
    // 0x2152d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2152d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2152dc:
    // 0x2152dc: 0x3e00008  jr          $ra
label_2152e0:
    if (ctx->pc == 0x2152E0u) {
        ctx->pc = 0x2152E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152DCu;
        // 0x2152e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2152E4u;
        goto label_2152e4;
    }
    ctx->pc = 0x2152DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2152E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152DCu;
        // 0x2152e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2152DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2152E4u;
label_2152e4:
    // 0x2152e4: 0x0  nop
    ctx->pc = 0x2152e4u;
    // NOP
label_2152e8:
    // 0x2152e8: 0x0  nop
    ctx->pc = 0x2152e8u;
    // NOP
label_2152ec:
    // 0x2152ec: 0x0  nop
    ctx->pc = 0x2152ecu;
    // NOP
label_2152f0:
    // 0x2152f0: 0x8f8391d0  lw          $v1, -0x6E30($gp)
    ctx->pc = 0x2152f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
label_2152f4:
    // 0x2152f4: 0x460003a  bltz        $v1, . + 4 + (0x3A << 2)
label_2152f8:
    if (ctx->pc == 0x2152F8u) {
        ctx->pc = 0x2152F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152F4u;
        // 0x2152f8: 0x28640040  slti        $a0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2152FCu;
        goto label_2152fc;
    }
    ctx->pc = 0x2152F4u;
    {
        const bool branch_taken_0x2152f4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2152F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152F4u;
        // 0x2152f8: 0x28640040  slti        $a0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2152f4) {
            ctx->pc = 0x2153E0u;
            goto label_2153e0;
        }
    }
    ctx->pc = 0x2152FCu;
label_2152fc:
    // 0x2152fc: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x2152fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
label_215300:
    // 0x215300: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
label_215304:
    if (ctx->pc == 0x215304u) {
        ctx->pc = 0x215304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215300u;
        // 0x215304: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215308u;
        goto label_215308;
    }
    ctx->pc = 0x215300u;
    {
        const bool branch_taken_0x215300 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x215304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215300u;
        // 0x215304: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215300) {
            ctx->pc = 0x2153DCu;
            goto label_2153dc;
        }
    }
    ctx->pc = 0x215308u;
label_215308:
    // 0x215308: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x215308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_21530c:
    // 0x21530c: 0xac2078f0  sw          $zero, 0x78F0($at)
    ctx->pc = 0x21530cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30960), GPR_U32(ctx, 0));
label_215310:
    // 0x215310: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x215310u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_215314:
    // 0x215314: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215318:
    // 0x215318: 0xac2078f4  sw          $zero, 0x78F4($at)
    ctx->pc = 0x215318u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30964), GPR_U32(ctx, 0));
label_21531c:
    // 0x21531c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21531cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215320:
    // 0x215320: 0xac2478fc  sw          $a0, 0x78FC($at)
    ctx->pc = 0x215320u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30972), GPR_U32(ctx, 4));
label_215324:
    // 0x215324: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x215324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_215328:
    // 0x215328: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21532c:
    // 0x21532c: 0xaf8491f8  sw          $a0, -0x6E08($gp)
    ctx->pc = 0x21532cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939128), GPR_U32(ctx, 4));
label_215330:
    // 0x215330: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x215330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_215334:
    // 0x215334: 0xac2078f8  sw          $zero, 0x78F8($at)
    ctx->pc = 0x215334u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30968), GPR_U32(ctx, 0));
label_215338:
    // 0x215338: 0xaf8491fc  sw          $a0, -0x6E04($gp)
    ctx->pc = 0x215338u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939132), GPR_U32(ctx, 4));
label_21533c:
    // 0x21533c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21533cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215340:
    // 0x215340: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x215340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_215344:
    // 0x215344: 0xac2478e0  sw          $a0, 0x78E0($at)
    ctx->pc = 0x215344u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30944), GPR_U32(ctx, 4));
label_215348:
    // 0x215348: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21534c:
    // 0x21534c: 0xac2478e4  sw          $a0, 0x78E4($at)
    ctx->pc = 0x21534cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30948), GPR_U32(ctx, 4));
label_215350:
    // 0x215350: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215354:
    // 0x215354: 0xac2478e8  sw          $a0, 0x78E8($at)
    ctx->pc = 0x215354u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30952), GPR_U32(ctx, 4));
label_215358:
    // 0x215358: 0x28a10081  slti        $at, $a1, 0x81
    ctx->pc = 0x215358u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)129) ? 1 : 0);
label_21535c:
    // 0x21535c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_215360:
    if (ctx->pc == 0x215360u) {
        ctx->pc = 0x215364u;
        goto label_215364;
    }
    ctx->pc = 0x21535Cu;
    {
        const bool branch_taken_0x21535c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21535c) {
            ctx->pc = 0x215368u;
            goto label_215368;
        }
    }
    ctx->pc = 0x215364u;
label_215364:
    // 0x215364: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x215364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_215368:
    // 0x215368: 0x8f8491d4  lw          $a0, -0x6E2C($gp)
    ctx->pc = 0x215368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939092)));
label_21536c:
    // 0x21536c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21536cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215370:
    // 0x215370: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_215374:
    if (ctx->pc == 0x215374u) {
        ctx->pc = 0x215374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215370u;
        // 0x215374: 0xac2578ec  sw          $a1, 0x78EC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30956), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215378u;
        goto label_215378;
    }
    ctx->pc = 0x215370u;
    {
        const bool branch_taken_0x215370 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x215374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215370u;
        // 0x215374: 0xac2578ec  sw          $a1, 0x78EC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30956), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215370) {
            ctx->pc = 0x215388u;
            goto label_215388;
        }
    }
    ctx->pc = 0x215378u;
label_215378:
    // 0x215378: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x215378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_21537c:
    // 0x21537c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x21537cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_215380:
    // 0x215380: 0x10000003  b           . + 4 + (0x3 << 2)
label_215384:
    if (ctx->pc == 0x215384u) {
        ctx->pc = 0x215384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215380u;
        // 0x215384: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215388u;
        goto label_215388;
    }
    ctx->pc = 0x215380u;
    {
        const bool branch_taken_0x215380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215380u;
        // 0x215384: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215380) {
            ctx->pc = 0x215390u;
            goto label_215390;
        }
    }
    ctx->pc = 0x215388u;
label_215388:
    // 0x215388: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x215388u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_21538c:
    // 0x21538c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x21538cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_215390:
    // 0x215390: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215394:
    // 0x215394: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x215394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_215398:
    // 0x215398: 0xac267900  sw          $a2, 0x7900($at)
    ctx->pc = 0x215398u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30976), GPR_U32(ctx, 6));
label_21539c:
    // 0x21539c: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x21539cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2153a0:
    // 0x2153a0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2153a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2153a4:
    // 0x2153a4: 0xaf85920c  sw          $a1, -0x6DF4($gp)
    ctx->pc = 0x2153a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939148), GPR_U32(ctx, 5));
label_2153a8:
    // 0x2153a8: 0xac267904  sw          $a2, 0x7904($at)
    ctx->pc = 0x2153a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30980), GPR_U32(ctx, 6));
label_2153ac:
    // 0x2153ac: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x2153acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2153b0:
    // 0x2153b0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2153b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2153b4:
    // 0x2153b4: 0xaf859200  sw          $a1, -0x6E00($gp)
    ctx->pc = 0x2153b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939136), GPR_U32(ctx, 5));
label_2153b8:
    // 0x2153b8: 0xac267908  sw          $a2, 0x7908($at)
    ctx->pc = 0x2153b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30984), GPR_U32(ctx, 6));
label_2153bc:
    // 0x2153bc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2153bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2153c0:
    // 0x2153c0: 0x28810100  slti        $at, $a0, 0x100
    ctx->pc = 0x2153c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
label_2153c4:
    // 0x2153c4: 0xaf809208  sw          $zero, -0x6DF8($gp)
    ctx->pc = 0x2153c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939144), GPR_U32(ctx, 0));
label_2153c8:
    // 0x2153c8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2153cc:
    if (ctx->pc == 0x2153CCu) {
        ctx->pc = 0x2153CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153C8u;
        // 0x2153cc: 0xaf859204  sw          $a1, -0x6DFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939140), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2153D0u;
        goto label_2153d0;
    }
    ctx->pc = 0x2153C8u;
    {
        const bool branch_taken_0x2153c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2153CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153C8u;
        // 0x2153cc: 0xaf859204  sw          $a1, -0x6DFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939140), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153c8) {
            ctx->pc = 0x2153D4u;
            goto label_2153d4;
        }
    }
    ctx->pc = 0x2153D0u;
label_2153d0:
    // 0x2153d0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2153d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2153d4:
    // 0x2153d4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2153d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2153d8:
    // 0x2153d8: 0xac24790c  sw          $a0, 0x790C($at)
    ctx->pc = 0x2153d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30988), GPR_U32(ctx, 4));
label_2153dc:
    // 0x2153dc: 0x28640040  slti        $a0, $v1, 0x40
    ctx->pc = 0x2153dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_2153e0:
    // 0x2153e0: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
label_2153e4:
    if (ctx->pc == 0x2153E4u) {
        ctx->pc = 0x2153E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153E0u;
        // 0x2153e4: 0x28640048  slti        $a0, $v1, 0x48 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)72) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2153E8u;
        goto label_2153e8;
    }
    ctx->pc = 0x2153E0u;
    {
        const bool branch_taken_0x2153e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2153E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153E0u;
        // 0x2153e4: 0x28640048  slti        $a0, $v1, 0x48 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)72) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153e0) {
            ctx->pc = 0x21546Cu;
            goto label_21546c;
        }
    }
    ctx->pc = 0x2153E8u;
label_2153e8:
    // 0x2153e8: 0x28610049  slti        $at, $v1, 0x49
    ctx->pc = 0x2153e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)73) ? 1 : 0);
label_2153ec:
    // 0x2153ec: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_2153f0:
    if (ctx->pc == 0x2153F0u) {
        ctx->pc = 0x2153F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153ECu;
        // 0x2153f0: 0x2465ffc0  addiu       $a1, $v1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2153F4u;
        goto label_2153f4;
    }
    ctx->pc = 0x2153ECu;
    {
        const bool branch_taken_0x2153ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2153F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153ECu;
        // 0x2153f0: 0x2465ffc0  addiu       $a1, $v1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153ec) {
            ctx->pc = 0x215468u;
            goto label_215468;
        }
    }
    ctx->pc = 0x2153F4u;
label_2153f4:
    // 0x2153f4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2153f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2153f8:
    // 0x2153f8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2153f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2153fc:
    // 0x2153fc: 0x53980  sll         $a3, $a1, 6
    ctx->pc = 0x2153fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_215400:
    // 0x215400: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x215400u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_215404:
    // 0x215404: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_215408:
    if (ctx->pc == 0x215408u) {
        ctx->pc = 0x215408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215404u;
        // 0x215408: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21540Cu;
        goto label_21540c;
    }
    ctx->pc = 0x215404u;
    {
        const bool branch_taken_0x215404 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x215408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215404u;
        // 0x215408: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215404) {
            ctx->pc = 0x215414u;
            goto label_215414;
        }
    }
    ctx->pc = 0x21540Cu;
label_21540c:
    // 0x21540c: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x21540cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_215410:
    // 0x215410: 0x43043  sra         $a2, $a0, 1
    ctx->pc = 0x215410u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 1));
label_215414:
    // 0x215414: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x215414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_215418:
    // 0x215418: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x215418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_21541c:
    // 0x21541c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x21541cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_215420:
    // 0x215420: 0xaf8491f4  sw          $a0, -0x6E0C($gp)
    ctx->pc = 0x215420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939124), GPR_U32(ctx, 4));
label_215424:
    // 0x215424: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_215428:
    if (ctx->pc == 0x215428u) {
        ctx->pc = 0x215428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215424u;
        // 0x215428: 0xaf8591f0  sw          $a1, -0x6E10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21542Cu;
        goto label_21542c;
    }
    ctx->pc = 0x215424u;
    {
        const bool branch_taken_0x215424 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x215428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215424u;
        // 0x215428: 0xaf8591f0  sw          $a1, -0x6E10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215424) {
            ctx->pc = 0x215434u;
            goto label_215434;
        }
    }
    ctx->pc = 0x21542Cu;
label_21542c:
    // 0x21542c: 0x10000002  b           . + 4 + (0x2 << 2)
label_215430:
    if (ctx->pc == 0x215430u) {
        ctx->pc = 0x215430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21542Cu;
        // 0x215430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215434u;
        goto label_215434;
    }
    ctx->pc = 0x21542Cu;
    {
        const bool branch_taken_0x21542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21542Cu;
        // 0x215430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21542c) {
            ctx->pc = 0x215438u;
            goto label_215438;
        }
    }
    ctx->pc = 0x215434u;
label_215434:
    // 0x215434: 0x24e40180  addiu       $a0, $a3, 0x180
    ctx->pc = 0x215434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 384));
label_215438:
    // 0x215438: 0xaf8491e8  sw          $a0, -0x6E18($gp)
    ctx->pc = 0x215438u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939112), GPR_U32(ctx, 4));
label_21543c:
    // 0x21543c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21543cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215440:
    // 0x215440: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x215440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_215444:
    // 0x215444: 0xac2878dc  sw          $t0, 0x78DC($at)
    ctx->pc = 0x215444u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30940), GPR_U32(ctx, 8));
label_215448:
    // 0x215448: 0xaf8491ec  sw          $a0, -0x6E14($gp)
    ctx->pc = 0x215448u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939116), GPR_U32(ctx, 4));
label_21544c:
    // 0x21544c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21544cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215450:
    // 0x215450: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x215450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_215454:
    // 0x215454: 0xac2478d0  sw          $a0, 0x78D0($at)
    ctx->pc = 0x215454u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30928), GPR_U32(ctx, 4));
label_215458:
    // 0x215458: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21545c:
    // 0x21545c: 0xac2478d4  sw          $a0, 0x78D4($at)
    ctx->pc = 0x21545cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30932), GPR_U32(ctx, 4));
label_215460:
    // 0x215460: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215464:
    // 0x215464: 0xac2478d8  sw          $a0, 0x78D8($at)
    ctx->pc = 0x215464u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30936), GPR_U32(ctx, 4));
label_215468:
    // 0x215468: 0x28640048  slti        $a0, $v1, 0x48
    ctx->pc = 0x215468u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)72) ? 1 : 0);
label_21546c:
    // 0x21546c: 0x14800068  bnez        $a0, . + 4 + (0x68 << 2)
label_215470:
    if (ctx->pc == 0x215470u) {
        ctx->pc = 0x215470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21546Cu;
        // 0x215470: 0x28640058  slti        $a0, $v1, 0x58 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)88) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x215474u;
        goto label_215474;
    }
    ctx->pc = 0x21546Cu;
    {
        const bool branch_taken_0x21546c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x215470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21546Cu;
        // 0x215470: 0x28640058  slti        $a0, $v1, 0x58 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)88) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21546c) {
            ctx->pc = 0x215610u;
            goto label_215610;
        }
    }
    ctx->pc = 0x215474u;
label_215474:
    // 0x215474: 0x28610059  slti        $at, $v1, 0x59
    ctx->pc = 0x215474u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)89) ? 1 : 0);
label_215478:
    // 0x215478: 0x10200064  beqz        $at, . + 4 + (0x64 << 2)
label_21547c:
    if (ctx->pc == 0x21547Cu) {
        ctx->pc = 0x21547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215478u;
        // 0x21547c: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215480u;
        goto label_215480;
    }
    ctx->pc = 0x215478u;
    {
        const bool branch_taken_0x215478 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215478u;
        // 0x21547c: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215478) {
            ctx->pc = 0x21560Cu;
            goto label_21560c;
        }
    }
    ctx->pc = 0x215480u;
label_215480:
    // 0x215480: 0x2464ffb8  addiu       $a0, $v1, -0x48
    ctx->pc = 0x215480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967224));
label_215484:
    // 0x215484: 0xac207920  sw          $zero, 0x7920($at)
    ctx->pc = 0x215484u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31008), GPR_U32(ctx, 0));
label_215488:
    // 0x215488: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x215488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21548c:
    // 0x21548c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21548cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215490:
    // 0x215490: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x215490u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_215494:
    // 0x215494: 0xac207928  sw          $zero, 0x7928($at)
    ctx->pc = 0x215494u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31016), GPR_U32(ctx, 0));
label_215498:
    // 0x215498: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x215498u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_21549c:
    // 0x21549c: 0x240600df  addiu       $a2, $zero, 0xDF
    ctx->pc = 0x21549cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
label_2154a0:
    // 0x2154a0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2154a4:
    // 0x2154a4: 0xc83823  subu        $a3, $a2, $t0
    ctx->pc = 0x2154a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_2154a8:
    // 0x2154a8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2154a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2154ac:
    // 0x2154ac: 0xac277924  sw          $a3, 0x7924($at)
    ctx->pc = 0x2154acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31012), GPR_U32(ctx, 7));
label_2154b0:
    // 0x2154b0: 0x250600df  addiu       $a2, $t0, 0xDF
    ctx->pc = 0x2154b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 223));
label_2154b4:
    // 0x2154b4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2154b8:
    // 0x2154b8: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x2154b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2154bc:
    // 0x2154bc: 0xac26792c  sw          $a2, 0x792C($at)
    ctx->pc = 0x2154bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31020), GPR_U32(ctx, 6));
label_2154c0:
    // 0x2154c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2154c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2154c4:
    // 0x2154c4: 0xaf879210  sw          $a3, -0x6DF0($gp)
    ctx->pc = 0x2154c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939152), GPR_U32(ctx, 7));
label_2154c8:
    // 0x2154c8: 0xaf869214  sw          $a2, -0x6DEC($gp)
    ctx->pc = 0x2154c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939156), GPR_U32(ctx, 6));
label_2154cc:
    // 0x2154cc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2154d0:
    // 0x2154d0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2154d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2154d4:
    // 0x2154d4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2154d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2154d8:
    // 0x2154d8: 0xac26791c  sw          $a2, 0x791C($at)
    ctx->pc = 0x2154d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31004), GPR_U32(ctx, 6));
label_2154dc:
    // 0x2154dc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2154e0:
    // 0x2154e0: 0x8f8691d4  lw          $a2, -0x6E2C($gp)
    ctx->pc = 0x2154e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939092)));
label_2154e4:
    // 0x2154e4: 0xac277910  sw          $a3, 0x7910($at)
    ctx->pc = 0x2154e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30992), GPR_U32(ctx, 7));
label_2154e8:
    // 0x2154e8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2154ec:
    // 0x2154ec: 0xac277914  sw          $a3, 0x7914($at)
    ctx->pc = 0x2154ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30996), GPR_U32(ctx, 7));
label_2154f0:
    // 0x2154f0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2154f4:
    // 0x2154f4: 0x14c00017  bnez        $a2, . + 4 + (0x17 << 2)
label_2154f8:
    if (ctx->pc == 0x2154F8u) {
        ctx->pc = 0x2154F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154F4u;
        // 0x2154f8: 0xac277918  sw          $a3, 0x7918($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31000), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2154FCu;
        goto label_2154fc;
    }
    ctx->pc = 0x2154F4u;
    {
        const bool branch_taken_0x2154f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2154F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154F4u;
        // 0x2154f8: 0xac277918  sw          $a3, 0x7918($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31000), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154f4) {
            ctx->pc = 0x215554u;
            goto label_215554;
        }
    }
    ctx->pc = 0x2154FCu;
label_2154fc:
    // 0x2154fc: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x2154fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_215500:
    // 0x215500: 0xaf809208  sw          $zero, -0x6DF8($gp)
    ctx->pc = 0x215500u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939144), GPR_U32(ctx, 0));
label_215504:
    // 0x215504: 0xc53823  subu        $a3, $a2, $a1
    ctx->pc = 0x215504u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_215508:
    // 0x215508: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_21550c:
    if (ctx->pc == 0x21550Cu) {
        ctx->pc = 0x21550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215508u;
        // 0x21550c: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215510u;
        goto label_215510;
    }
    ctx->pc = 0x215508u;
    {
        const bool branch_taken_0x215508 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x21550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215508u;
        // 0x21550c: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215508) {
            ctx->pc = 0x215518u;
            goto label_215518;
        }
    }
    ctx->pc = 0x215510u;
label_215510:
    // 0x215510: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x215510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_215514:
    // 0x215514: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x215514u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_215518:
    // 0x215518: 0xaf86920c  sw          $a2, -0x6DF4($gp)
    ctx->pc = 0x215518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939148), GPR_U32(ctx, 6));
label_21551c:
    // 0x21551c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21551cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215520:
    // 0x215520: 0xaf859204  sw          $a1, -0x6DFC($gp)
    ctx->pc = 0x215520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939140), GPR_U32(ctx, 5));
label_215524:
    // 0x215524: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x215524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_215528:
    // 0x215528: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x215528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_21552c:
    // 0x21552c: 0xaf869200  sw          $a2, -0x6E00($gp)
    ctx->pc = 0x21552cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939136), GPR_U32(ctx, 6));
label_215530:
    // 0x215530: 0xac25790c  sw          $a1, 0x790C($at)
    ctx->pc = 0x215530u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30988), GPR_U32(ctx, 5));
label_215534:
    // 0x215534: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x215534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_215538:
    // 0x215538: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21553c:
    // 0x21553c: 0xac267900  sw          $a2, 0x7900($at)
    ctx->pc = 0x21553cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30976), GPR_U32(ctx, 6));
label_215540:
    // 0x215540: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215544:
    // 0x215544: 0xac267904  sw          $a2, 0x7904($at)
    ctx->pc = 0x215544u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30980), GPR_U32(ctx, 6));
label_215548:
    // 0x215548: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21554c:
    // 0x21554c: 0x10000016  b           . + 4 + (0x16 << 2)
label_215550:
    if (ctx->pc == 0x215550u) {
        ctx->pc = 0x215550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21554Cu;
        // 0x215550: 0xac267908  sw          $a2, 0x7908($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30984), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215554u;
        goto label_215554;
    }
    ctx->pc = 0x21554Cu;
    {
        const bool branch_taken_0x21554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21554Cu;
        // 0x215550: 0xac267908  sw          $a2, 0x7908($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30984), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21554c) {
            ctx->pc = 0x2155A8u;
            goto label_2155a8;
        }
    }
    ctx->pc = 0x215554u;
label_215554:
    // 0x215554: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x215554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_215558:
    // 0x215558: 0xaf809208  sw          $zero, -0x6DF8($gp)
    ctx->pc = 0x215558u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939144), GPR_U32(ctx, 0));
label_21555c:
    // 0x21555c: 0xc53823  subu        $a3, $a2, $a1
    ctx->pc = 0x21555cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_215560:
    // 0x215560: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_215564:
    if (ctx->pc == 0x215564u) {
        ctx->pc = 0x215564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215560u;
        // 0x215564: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215568u;
        goto label_215568;
    }
    ctx->pc = 0x215560u;
    {
        const bool branch_taken_0x215560 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x215564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215560u;
        // 0x215564: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215560) {
            ctx->pc = 0x215570u;
            goto label_215570;
        }
    }
    ctx->pc = 0x215568u;
label_215568:
    // 0x215568: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x215568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_21556c:
    // 0x21556c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x21556cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_215570:
    // 0x215570: 0xaf86920c  sw          $a2, -0x6DF4($gp)
    ctx->pc = 0x215570u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939148), GPR_U32(ctx, 6));
label_215574:
    // 0x215574: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215578:
    // 0x215578: 0xaf859204  sw          $a1, -0x6DFC($gp)
    ctx->pc = 0x215578u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939140), GPR_U32(ctx, 5));
label_21557c:
    // 0x21557c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21557cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_215580:
    // 0x215580: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x215580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_215584:
    // 0x215584: 0xaf869200  sw          $a2, -0x6E00($gp)
    ctx->pc = 0x215584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939136), GPR_U32(ctx, 6));
label_215588:
    // 0x215588: 0xac25790c  sw          $a1, 0x790C($at)
    ctx->pc = 0x215588u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30988), GPR_U32(ctx, 5));
label_21558c:
    // 0x21558c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x21558cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_215590:
    // 0x215590: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215594:
    // 0x215594: 0xac267900  sw          $a2, 0x7900($at)
    ctx->pc = 0x215594u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30976), GPR_U32(ctx, 6));
label_215598:
    // 0x215598: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21559c:
    // 0x21559c: 0xac267904  sw          $a2, 0x7904($at)
    ctx->pc = 0x21559cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30980), GPR_U32(ctx, 6));
label_2155a0:
    // 0x2155a0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2155a4:
    // 0x2155a4: 0xac267908  sw          $a2, 0x7908($at)
    ctx->pc = 0x2155a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30984), GPR_U32(ctx, 6));
label_2155a8:
    // 0x2155a8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2155ac:
    // 0x2155ac: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x2155acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2155b0:
    // 0x2155b0: 0xac2078f0  sw          $zero, 0x78F0($at)
    ctx->pc = 0x2155b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30960), GPR_U32(ctx, 0));
label_2155b4:
    // 0x2155b4: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x2155b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_2155b8:
    // 0x2155b8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2155bc:
    // 0x2155bc: 0x862823  subu        $a1, $a0, $a2
    ctx->pc = 0x2155bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2155c0:
    // 0x2155c0: 0xac2078f4  sw          $zero, 0x78F4($at)
    ctx->pc = 0x2155c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30964), GPR_U32(ctx, 0));
label_2155c4:
    // 0x2155c4: 0x24c400a0  addiu       $a0, $a2, 0xA0
    ctx->pc = 0x2155c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
label_2155c8:
    // 0x2155c8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2155cc:
    // 0x2155cc: 0xaf8491fc  sw          $a0, -0x6E04($gp)
    ctx->pc = 0x2155ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939132), GPR_U32(ctx, 4));
label_2155d0:
    // 0x2155d0: 0xac2578fc  sw          $a1, 0x78FC($at)
    ctx->pc = 0x2155d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30972), GPR_U32(ctx, 5));
label_2155d4:
    // 0x2155d4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2155d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2155d8:
    // 0x2155d8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2155dc:
    // 0x2155dc: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x2155dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2155e0:
    // 0x2155e0: 0xac2478ec  sw          $a0, 0x78EC($at)
    ctx->pc = 0x2155e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30956), GPR_U32(ctx, 4));
label_2155e4:
    // 0x2155e4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2155e8:
    // 0x2155e8: 0xaf8591f8  sw          $a1, -0x6E08($gp)
    ctx->pc = 0x2155e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939128), GPR_U32(ctx, 5));
label_2155ec:
    // 0x2155ec: 0xac2078f8  sw          $zero, 0x78F8($at)
    ctx->pc = 0x2155ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30968), GPR_U32(ctx, 0));
label_2155f0:
    // 0x2155f0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2155f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2155f4:
    // 0x2155f4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2155f8:
    // 0x2155f8: 0xac2578e0  sw          $a1, 0x78E0($at)
    ctx->pc = 0x2155f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30944), GPR_U32(ctx, 5));
label_2155fc:
    // 0x2155fc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215600:
    // 0x215600: 0xac2578e4  sw          $a1, 0x78E4($at)
    ctx->pc = 0x215600u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30948), GPR_U32(ctx, 5));
label_215604:
    // 0x215604: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215608:
    // 0x215608: 0xac2578e8  sw          $a1, 0x78E8($at)
    ctx->pc = 0x215608u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30952), GPR_U32(ctx, 5));
label_21560c:
    // 0x21560c: 0x28640058  slti        $a0, $v1, 0x58
    ctx->pc = 0x21560cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)88) ? 1 : 0);
label_215610:
    // 0x215610: 0x14800025  bnez        $a0, . + 4 + (0x25 << 2)
label_215614:
    if (ctx->pc == 0x215614u) {
        ctx->pc = 0x215614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215610u;
        // 0x215614: 0x28610061  slti        $at, $v1, 0x61 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)97) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x215618u;
        goto label_215618;
    }
    ctx->pc = 0x215610u;
    {
        const bool branch_taken_0x215610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x215614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215610u;
        // 0x215614: 0x28610061  slti        $at, $v1, 0x61 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)97) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215610) {
            ctx->pc = 0x2156A8u;
            goto label_2156a8;
        }
    }
    ctx->pc = 0x215618u;
label_215618:
    // 0x215618: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_21561c:
    if (ctx->pc == 0x21561Cu) {
        ctx->pc = 0x215620u;
        goto label_215620;
    }
    ctx->pc = 0x215618u;
    {
        const bool branch_taken_0x215618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x215618) {
            ctx->pc = 0x2156A8u;
            goto label_2156a8;
        }
    }
    ctx->pc = 0x215620u;
label_215620:
    // 0x215620: 0x2463ffa8  addiu       $v1, $v1, -0x58
    ctx->pc = 0x215620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967208));
label_215624:
    // 0x215624: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x215624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_215628:
    // 0x215628: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x215628u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21562c:
    // 0x21562c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x21562cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_215630:
    // 0x215630: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x215630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_215634:
    // 0x215634: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x215634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_215638:
    // 0x215638: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x215638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_21563c:
    // 0x21563c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x21563cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_215640:
    // 0x215640: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_215644:
    if (ctx->pc == 0x215644u) {
        ctx->pc = 0x215644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215640u;
        // 0x215644: 0x33043  sra         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215648u;
        goto label_215648;
    }
    ctx->pc = 0x215640u;
    {
        const bool branch_taken_0x215640 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x215644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215640u;
        // 0x215644: 0x33043  sra         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215640) {
            ctx->pc = 0x215650u;
            goto label_215650;
        }
    }
    ctx->pc = 0x215648u;
label_215648:
    // 0x215648: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x215648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21564c:
    // 0x21564c: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x21564cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
label_215650:
    // 0x215650: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x215650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_215654:
    // 0x215654: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215658:
    // 0x215658: 0xac23791c  sw          $v1, 0x791C($at)
    ctx->pc = 0x215658u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31004), GPR_U32(ctx, 3));
label_21565c:
    // 0x21565c: 0x240500df  addiu       $a1, $zero, 0xDF
    ctx->pc = 0x21565cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
label_215660:
    // 0x215660: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215664:
    // 0x215664: 0xaf849210  sw          $a0, -0x6DF0($gp)
    ctx->pc = 0x215664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939152), GPR_U32(ctx, 4));
label_215668:
    // 0x215668: 0xac267920  sw          $a2, 0x7920($at)
    ctx->pc = 0x215668u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31008), GPR_U32(ctx, 6));
label_21566c:
    // 0x21566c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21566cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_215670:
    // 0x215670: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215674:
    // 0x215674: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x215674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_215678:
    // 0x215678: 0xac267928  sw          $a2, 0x7928($at)
    ctx->pc = 0x215678u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31016), GPR_U32(ctx, 6));
label_21567c:
    // 0x21567c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21567cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215680:
    // 0x215680: 0xaf849214  sw          $a0, -0x6DEC($gp)
    ctx->pc = 0x215680u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939156), GPR_U32(ctx, 4));
label_215684:
    // 0x215684: 0xac257924  sw          $a1, 0x7924($at)
    ctx->pc = 0x215684u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31012), GPR_U32(ctx, 5));
label_215688:
    // 0x215688: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21568c:
    // 0x21568c: 0xac25792c  sw          $a1, 0x792C($at)
    ctx->pc = 0x21568cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31020), GPR_U32(ctx, 5));
label_215690:
    // 0x215690: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215694:
    // 0x215694: 0xac237910  sw          $v1, 0x7910($at)
    ctx->pc = 0x215694u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30992), GPR_U32(ctx, 3));
label_215698:
    // 0x215698: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21569c:
    // 0x21569c: 0xac237914  sw          $v1, 0x7914($at)
    ctx->pc = 0x21569cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30996), GPR_U32(ctx, 3));
label_2156a0:
    // 0x2156a0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2156a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2156a4:
    // 0x2156a4: 0xac237918  sw          $v1, 0x7918($at)
    ctx->pc = 0x2156a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31000), GPR_U32(ctx, 3));
label_2156a8:
    // 0x2156a8: 0x3e00008  jr          $ra
label_2156ac:
    if (ctx->pc == 0x2156ACu) {
        ctx->pc = 0x2156B0u;
        goto label_2156b0;
    }
    ctx->pc = 0x2156A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2156A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2156B0u;
label_2156b0:
    // 0x2156b0: 0x8f8391d0  lw          $v1, -0x6E30($gp)
    ctx->pc = 0x2156b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
label_2156b4:
    // 0x2156b4: 0x4600023  bltz        $v1, . + 4 + (0x23 << 2)
label_2156b8:
    if (ctx->pc == 0x2156B8u) {
        ctx->pc = 0x2156B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156B4u;
        // 0x2156b8: 0x28640008  slti        $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2156BCu;
        goto label_2156bc;
    }
    ctx->pc = 0x2156B4u;
    {
        const bool branch_taken_0x2156b4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2156B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156B4u;
        // 0x2156b8: 0x28640008  slti        $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156b4) {
            ctx->pc = 0x215744u;
            { ctx->pc = 0x215744; return; }
        }
    }
    ctx->pc = 0x2156BCu;
label_2156bc:
    // 0x2156bc: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x2156bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_2156c0:
    // 0x2156c0: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_2156c4:
    if (ctx->pc == 0x2156C4u) {
        ctx->pc = 0x2156C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156C0u;
        // 0x2156c4: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2156C8u;
        goto label_2156c8;
    }
    ctx->pc = 0x2156C0u;
    {
        const bool branch_taken_0x2156c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2156C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156C0u;
        // 0x2156c4: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156c0) {
            ctx->pc = 0x215740u;
            { ctx->pc = 0x215740; return; }
        }
    }
    ctx->pc = 0x2156C8u;
label_2156c8:
    // 0x2156c8: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x2156c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2156cc:
    // 0x2156cc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2156ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2156d0:
    // 0x2156d0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2156d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2156d4:
    // 0x2156d4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2156d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2156d8:
    // 0x2156d8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_2156dc:
    if (ctx->pc == 0x2156DCu) {
        ctx->pc = 0x2156DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156D8u;
        // 0x2156dc: 0x43843  sra         $a3, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2156E0u;
        goto label_2156e0;
    }
    ctx->pc = 0x2156D8u;
    {
        const bool branch_taken_0x2156d8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2156DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156D8u;
        // 0x2156dc: 0x43843  sra         $a3, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156d8) {
            ctx->pc = 0x2156E8u;
            goto label_2156e8;
        }
    }
    ctx->pc = 0x2156E0u;
label_2156e0:
    // 0x2156e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2156e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2156e4:
    // 0x2156e4: 0x43843  sra         $a3, $a0, 1
    ctx->pc = 0x2156e4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 1));
label_2156e8:
    // 0x2156e8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2156e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2156ec:
    // 0x2156ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2156ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2156f0:
    // 0x2156f0: 0xac277920  sw          $a3, 0x7920($at)
    ctx->pc = 0x2156f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31008), GPR_U32(ctx, 7));
label_2156f4:
    // 0x2156f4: 0x240600df  addiu       $a2, $zero, 0xDF
    ctx->pc = 0x2156f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
label_2156f8:
    // 0x2156f8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2156f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2156fc:
    // 0x2156fc: 0xaf849214  sw          $a0, -0x6DEC($gp)
    ctx->pc = 0x2156fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939156), GPR_U32(ctx, 4));
label_215700:
    // 0x215700: 0xac277928  sw          $a3, 0x7928($at)
    ctx->pc = 0x215700u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31016), GPR_U32(ctx, 7));
label_215704:
    // 0x215704: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x215704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_215708:
    // 0x215708: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21570c:
    // 0x21570c: 0xaf859210  sw          $a1, -0x6DF0($gp)
    ctx->pc = 0x21570cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939152), GPR_U32(ctx, 5));
label_215710:
    // 0x215710: 0xac24791c  sw          $a0, 0x791C($at)
    ctx->pc = 0x215710u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31004), GPR_U32(ctx, 4));
label_215714:
    // 0x215714: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x215714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_215718:
    // 0x215718: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21571c:
    // 0x21571c: 0xac267924  sw          $a2, 0x7924($at)
    ctx->pc = 0x21571cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31012), GPR_U32(ctx, 6));
label_215720:
    // 0x215720: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215724:
    // 0x215724: 0xac26792c  sw          $a2, 0x792C($at)
    ctx->pc = 0x215724u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31020), GPR_U32(ctx, 6));
label_215728:
    // 0x215728: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21572c:
    // 0x21572c: 0xac257910  sw          $a1, 0x7910($at)
    ctx->pc = 0x21572cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30992), GPR_U32(ctx, 5));
label_215730:
    // 0x215730: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215734:
    // 0x215734: 0xac257914  sw          $a1, 0x7914($at)
    ctx->pc = 0x215734u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30996), GPR_U32(ctx, 5));
    ctx->pc = 0x215738u;
    return;
}

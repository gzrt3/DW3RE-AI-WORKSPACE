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


void FUN_0014eba0_part135(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x190280u: goto label_190280;
        case 0x190284u: goto label_190284;
        case 0x190288u: goto label_190288;
        case 0x19028cu: goto label_19028c;
        case 0x190290u: goto label_190290;
        case 0x190294u: goto label_190294;
        case 0x190298u: goto label_190298;
        case 0x19029cu: goto label_19029c;
        case 0x1902a0u: goto label_1902a0;
        case 0x1902a4u: goto label_1902a4;
        case 0x1902a8u: goto label_1902a8;
        case 0x1902acu: goto label_1902ac;
        case 0x1902b0u: goto label_1902b0;
        case 0x1902b4u: goto label_1902b4;
        case 0x1902b8u: goto label_1902b8;
        case 0x1902bcu: goto label_1902bc;
        case 0x1902c0u: goto label_1902c0;
        case 0x1902c4u: goto label_1902c4;
        case 0x1902c8u: goto label_1902c8;
        case 0x1902ccu: goto label_1902cc;
        case 0x1902d0u: goto label_1902d0;
        case 0x1902d4u: goto label_1902d4;
        case 0x1902d8u: goto label_1902d8;
        case 0x1902dcu: goto label_1902dc;
        case 0x1902e0u: goto label_1902e0;
        case 0x1902e4u: goto label_1902e4;
        case 0x1902e8u: goto label_1902e8;
        case 0x1902ecu: goto label_1902ec;
        case 0x1902f0u: goto label_1902f0;
        case 0x1902f4u: goto label_1902f4;
        case 0x1902f8u: goto label_1902f8;
        case 0x1902fcu: goto label_1902fc;
        case 0x190300u: goto label_190300;
        case 0x190304u: goto label_190304;
        case 0x190308u: goto label_190308;
        case 0x19030cu: goto label_19030c;
        case 0x190310u: goto label_190310;
        case 0x190314u: goto label_190314;
        case 0x190318u: goto label_190318;
        case 0x19031cu: goto label_19031c;
        case 0x190320u: goto label_190320;
        case 0x190324u: goto label_190324;
        case 0x190328u: goto label_190328;
        case 0x19032cu: goto label_19032c;
        case 0x190330u: goto label_190330;
        case 0x190334u: goto label_190334;
        case 0x190338u: goto label_190338;
        case 0x19033cu: goto label_19033c;
        case 0x190340u: goto label_190340;
        case 0x190344u: goto label_190344;
        case 0x190348u: goto label_190348;
        case 0x19034cu: goto label_19034c;
        case 0x190350u: goto label_190350;
        case 0x190354u: goto label_190354;
        case 0x190358u: goto label_190358;
        case 0x19035cu: goto label_19035c;
        case 0x190360u: goto label_190360;
        case 0x190364u: goto label_190364;
        case 0x190368u: goto label_190368;
        case 0x19036cu: goto label_19036c;
        case 0x190370u: goto label_190370;
        case 0x190374u: goto label_190374;
        case 0x190378u: goto label_190378;
        case 0x19037cu: goto label_19037c;
        case 0x190380u: goto label_190380;
        case 0x190384u: goto label_190384;
        case 0x190388u: goto label_190388;
        case 0x19038cu: goto label_19038c;
        case 0x190390u: goto label_190390;
        case 0x190394u: goto label_190394;
        case 0x190398u: goto label_190398;
        case 0x19039cu: goto label_19039c;
        case 0x1903a0u: goto label_1903a0;
        case 0x1903a4u: goto label_1903a4;
        case 0x1903a8u: goto label_1903a8;
        case 0x1903acu: goto label_1903ac;
        case 0x1903b0u: goto label_1903b0;
        case 0x1903b4u: goto label_1903b4;
        case 0x1903b8u: goto label_1903b8;
        case 0x1903bcu: goto label_1903bc;
        case 0x1903c0u: goto label_1903c0;
        case 0x1903c4u: goto label_1903c4;
        case 0x1903c8u: goto label_1903c8;
        case 0x1903ccu: goto label_1903cc;
        case 0x1903d0u: goto label_1903d0;
        case 0x1903d4u: goto label_1903d4;
        case 0x1903d8u: goto label_1903d8;
        case 0x1903dcu: goto label_1903dc;
        case 0x1903e0u: goto label_1903e0;
        case 0x1903e4u: goto label_1903e4;
        case 0x1903e8u: goto label_1903e8;
        case 0x1903ecu: goto label_1903ec;
        case 0x1903f0u: goto label_1903f0;
        case 0x1903f4u: goto label_1903f4;
        case 0x1903f8u: goto label_1903f8;
        case 0x1903fcu: goto label_1903fc;
        case 0x190400u: goto label_190400;
        case 0x190404u: goto label_190404;
        case 0x190408u: goto label_190408;
        case 0x19040cu: goto label_19040c;
        case 0x190410u: goto label_190410;
        case 0x190414u: goto label_190414;
        case 0x190418u: goto label_190418;
        case 0x19041cu: goto label_19041c;
        case 0x190420u: goto label_190420;
        case 0x190424u: goto label_190424;
        case 0x190428u: goto label_190428;
        case 0x19042cu: goto label_19042c;
        case 0x190430u: goto label_190430;
        case 0x190434u: goto label_190434;
        case 0x190438u: goto label_190438;
        case 0x19043cu: goto label_19043c;
        case 0x190440u: goto label_190440;
        case 0x190444u: goto label_190444;
        case 0x190448u: goto label_190448;
        case 0x19044cu: goto label_19044c;
        case 0x190450u: goto label_190450;
        case 0x190454u: goto label_190454;
        case 0x190458u: goto label_190458;
        case 0x19045cu: goto label_19045c;
        case 0x190460u: goto label_190460;
        case 0x190464u: goto label_190464;
        case 0x190468u: goto label_190468;
        case 0x19046cu: goto label_19046c;
        case 0x190470u: goto label_190470;
        case 0x190474u: goto label_190474;
        case 0x190478u: goto label_190478;
        case 0x19047cu: goto label_19047c;
        case 0x190480u: goto label_190480;
        case 0x190484u: goto label_190484;
        case 0x190488u: goto label_190488;
        case 0x19048cu: goto label_19048c;
        case 0x190490u: goto label_190490;
        case 0x190494u: goto label_190494;
        case 0x190498u: goto label_190498;
        case 0x19049cu: goto label_19049c;
        case 0x1904a0u: goto label_1904a0;
        case 0x1904a4u: goto label_1904a4;
        case 0x1904a8u: goto label_1904a8;
        case 0x1904acu: goto label_1904ac;
        case 0x1904b0u: goto label_1904b0;
        case 0x1904b4u: goto label_1904b4;
        case 0x1904b8u: goto label_1904b8;
        case 0x1904bcu: goto label_1904bc;
        case 0x1904c0u: goto label_1904c0;
        case 0x1904c4u: goto label_1904c4;
        case 0x1904c8u: goto label_1904c8;
        case 0x1904ccu: goto label_1904cc;
        case 0x1904d0u: goto label_1904d0;
        case 0x1904d4u: goto label_1904d4;
        case 0x1904d8u: goto label_1904d8;
        case 0x1904dcu: goto label_1904dc;
        case 0x1904e0u: goto label_1904e0;
        case 0x1904e4u: goto label_1904e4;
        case 0x1904e8u: goto label_1904e8;
        case 0x1904ecu: goto label_1904ec;
        case 0x1904f0u: goto label_1904f0;
        case 0x1904f4u: goto label_1904f4;
        case 0x1904f8u: goto label_1904f8;
        case 0x1904fcu: goto label_1904fc;
        case 0x190500u: goto label_190500;
        case 0x190504u: goto label_190504;
        case 0x190508u: goto label_190508;
        case 0x19050cu: goto label_19050c;
        case 0x190510u: goto label_190510;
        case 0x190514u: goto label_190514;
        case 0x190518u: goto label_190518;
        case 0x19051cu: goto label_19051c;
        case 0x190520u: goto label_190520;
        case 0x190524u: goto label_190524;
        case 0x190528u: goto label_190528;
        case 0x19052cu: goto label_19052c;
        case 0x190530u: goto label_190530;
        case 0x190534u: goto label_190534;
        case 0x190538u: goto label_190538;
        case 0x19053cu: goto label_19053c;
        case 0x190540u: goto label_190540;
        case 0x190544u: goto label_190544;
        case 0x190548u: goto label_190548;
        case 0x19054cu: goto label_19054c;
        case 0x190550u: goto label_190550;
        case 0x190554u: goto label_190554;
        case 0x190558u: goto label_190558;
        case 0x19055cu: goto label_19055c;
        case 0x190560u: goto label_190560;
        case 0x190564u: goto label_190564;
        case 0x190568u: goto label_190568;
        case 0x19056cu: goto label_19056c;
        case 0x190570u: goto label_190570;
        case 0x190574u: goto label_190574;
        case 0x190578u: goto label_190578;
        case 0x19057cu: goto label_19057c;
        case 0x190580u: goto label_190580;
        case 0x190584u: goto label_190584;
        case 0x190588u: goto label_190588;
        case 0x19058cu: goto label_19058c;
        case 0x190590u: goto label_190590;
        case 0x190594u: goto label_190594;
        case 0x190598u: goto label_190598;
        case 0x19059cu: goto label_19059c;
        case 0x1905a0u: goto label_1905a0;
        case 0x1905a4u: goto label_1905a4;
        case 0x1905a8u: goto label_1905a8;
        case 0x1905acu: goto label_1905ac;
        case 0x1905b0u: goto label_1905b0;
        case 0x1905b4u: goto label_1905b4;
        case 0x1905b8u: goto label_1905b8;
        case 0x1905bcu: goto label_1905bc;
        case 0x1905c0u: goto label_1905c0;
        case 0x1905c4u: goto label_1905c4;
        case 0x1905c8u: goto label_1905c8;
        case 0x1905ccu: goto label_1905cc;
        case 0x1905d0u: goto label_1905d0;
        case 0x1905d4u: goto label_1905d4;
        case 0x1905d8u: goto label_1905d8;
        case 0x1905dcu: goto label_1905dc;
        case 0x1905e0u: goto label_1905e0;
        case 0x1905e4u: goto label_1905e4;
        case 0x1905e8u: goto label_1905e8;
        case 0x1905ecu: goto label_1905ec;
        case 0x1905f0u: goto label_1905f0;
        case 0x1905f4u: goto label_1905f4;
        case 0x1905f8u: goto label_1905f8;
        case 0x1905fcu: goto label_1905fc;
        case 0x190600u: goto label_190600;
        case 0x190604u: goto label_190604;
        case 0x190608u: goto label_190608;
        case 0x19060cu: goto label_19060c;
        case 0x190610u: goto label_190610;
        case 0x190614u: goto label_190614;
        case 0x190618u: goto label_190618;
        case 0x19061cu: goto label_19061c;
        case 0x190620u: goto label_190620;
        case 0x190624u: goto label_190624;
        case 0x190628u: goto label_190628;
        case 0x19062cu: goto label_19062c;
        case 0x190630u: goto label_190630;
        case 0x190634u: goto label_190634;
        case 0x190638u: goto label_190638;
        case 0x19063cu: goto label_19063c;
        case 0x190640u: goto label_190640;
        case 0x190644u: goto label_190644;
        case 0x190648u: goto label_190648;
        case 0x19064cu: goto label_19064c;
        case 0x190650u: goto label_190650;
        case 0x190654u: goto label_190654;
        case 0x190658u: goto label_190658;
        case 0x19065cu: goto label_19065c;
        case 0x190660u: goto label_190660;
        case 0x190664u: goto label_190664;
        case 0x190668u: goto label_190668;
        case 0x19066cu: goto label_19066c;
        case 0x190670u: goto label_190670;
        case 0x190674u: goto label_190674;
        case 0x190678u: goto label_190678;
        case 0x19067cu: goto label_19067c;
        case 0x190680u: goto label_190680;
        case 0x190684u: goto label_190684;
        case 0x190688u: goto label_190688;
        case 0x19068cu: goto label_19068c;
        case 0x190690u: goto label_190690;
        case 0x190694u: goto label_190694;
        case 0x190698u: goto label_190698;
        case 0x19069cu: goto label_19069c;
        case 0x1906a0u: goto label_1906a0;
        case 0x1906a4u: goto label_1906a4;
        case 0x1906a8u: goto label_1906a8;
        case 0x1906acu: goto label_1906ac;
        case 0x1906b0u: goto label_1906b0;
        case 0x1906b4u: goto label_1906b4;
        case 0x1906b8u: goto label_1906b8;
        case 0x1906bcu: goto label_1906bc;
        case 0x1906c0u: goto label_1906c0;
        case 0x1906c4u: goto label_1906c4;
        case 0x1906c8u: goto label_1906c8;
        case 0x1906ccu: goto label_1906cc;
        case 0x1906d0u: goto label_1906d0;
        case 0x1906d4u: goto label_1906d4;
        case 0x1906d8u: goto label_1906d8;
        case 0x1906dcu: goto label_1906dc;
        case 0x1906e0u: goto label_1906e0;
        case 0x1906e4u: goto label_1906e4;
        case 0x1906e8u: goto label_1906e8;
        case 0x1906ecu: goto label_1906ec;
        case 0x1906f0u: goto label_1906f0;
        case 0x1906f4u: goto label_1906f4;
        case 0x1906f8u: goto label_1906f8;
        case 0x1906fcu: goto label_1906fc;
        case 0x190700u: goto label_190700;
        case 0x190704u: goto label_190704;
        case 0x190708u: goto label_190708;
        case 0x19070cu: goto label_19070c;
        case 0x190710u: goto label_190710;
        case 0x190714u: goto label_190714;
        case 0x190718u: goto label_190718;
        case 0x19071cu: goto label_19071c;
        case 0x190720u: goto label_190720;
        case 0x190724u: goto label_190724;
        case 0x190728u: goto label_190728;
        case 0x19072cu: goto label_19072c;
        case 0x190730u: goto label_190730;
        case 0x190734u: goto label_190734;
        case 0x190738u: goto label_190738;
        case 0x19073cu: goto label_19073c;
        case 0x190740u: goto label_190740;
        case 0x190744u: goto label_190744;
        case 0x190748u: goto label_190748;
        case 0x19074cu: goto label_19074c;
        case 0x190750u: goto label_190750;
        case 0x190754u: goto label_190754;
        case 0x190758u: goto label_190758;
        case 0x19075cu: goto label_19075c;
        case 0x190760u: goto label_190760;
        case 0x190764u: goto label_190764;
        case 0x190768u: goto label_190768;
        case 0x19076cu: goto label_19076c;
        case 0x190770u: goto label_190770;
        case 0x190774u: goto label_190774;
        case 0x190778u: goto label_190778;
        case 0x19077cu: goto label_19077c;
        case 0x190780u: goto label_190780;
        case 0x190784u: goto label_190784;
        case 0x190788u: goto label_190788;
        case 0x19078cu: goto label_19078c;
        case 0x190790u: goto label_190790;
        case 0x190794u: goto label_190794;
        case 0x190798u: goto label_190798;
        case 0x19079cu: goto label_19079c;
        case 0x1907a0u: goto label_1907a0;
        case 0x1907a4u: goto label_1907a4;
        case 0x1907a8u: goto label_1907a8;
        case 0x1907acu: goto label_1907ac;
        case 0x1907b0u: goto label_1907b0;
        case 0x1907b4u: goto label_1907b4;
        case 0x1907b8u: goto label_1907b8;
        case 0x1907bcu: goto label_1907bc;
        case 0x1907c0u: goto label_1907c0;
        case 0x1907c4u: goto label_1907c4;
        case 0x1907c8u: goto label_1907c8;
        case 0x1907ccu: goto label_1907cc;
        case 0x1907d0u: goto label_1907d0;
        case 0x1907d4u: goto label_1907d4;
        case 0x1907d8u: goto label_1907d8;
        case 0x1907dcu: goto label_1907dc;
        case 0x1907e0u: goto label_1907e0;
        case 0x1907e4u: goto label_1907e4;
        case 0x1907e8u: goto label_1907e8;
        case 0x1907ecu: goto label_1907ec;
        case 0x1907f0u: goto label_1907f0;
        case 0x1907f4u: goto label_1907f4;
        case 0x1907f8u: goto label_1907f8;
        case 0x1907fcu: goto label_1907fc;
        case 0x190800u: goto label_190800;
        case 0x190804u: goto label_190804;
        case 0x190808u: goto label_190808;
        case 0x19080cu: goto label_19080c;
        case 0x190810u: goto label_190810;
        case 0x190814u: goto label_190814;
        case 0x190818u: goto label_190818;
        case 0x19081cu: goto label_19081c;
        case 0x190820u: goto label_190820;
        case 0x190824u: goto label_190824;
        case 0x190828u: goto label_190828;
        case 0x19082cu: goto label_19082c;
        case 0x190830u: goto label_190830;
        case 0x190834u: goto label_190834;
        case 0x190838u: goto label_190838;
        case 0x19083cu: goto label_19083c;
        case 0x190840u: goto label_190840;
        case 0x190844u: goto label_190844;
        case 0x190848u: goto label_190848;
        case 0x19084cu: goto label_19084c;
        case 0x190850u: goto label_190850;
        case 0x190854u: goto label_190854;
        case 0x190858u: goto label_190858;
        case 0x19085cu: goto label_19085c;
        case 0x190860u: goto label_190860;
        case 0x190864u: goto label_190864;
        case 0x190868u: goto label_190868;
        case 0x19086cu: goto label_19086c;
        case 0x190870u: goto label_190870;
        case 0x190874u: goto label_190874;
        case 0x190878u: goto label_190878;
        case 0x19087cu: goto label_19087c;
        case 0x190880u: goto label_190880;
        case 0x190884u: goto label_190884;
        case 0x190888u: goto label_190888;
        case 0x19088cu: goto label_19088c;
        case 0x190890u: goto label_190890;
        case 0x190894u: goto label_190894;
        case 0x190898u: goto label_190898;
        case 0x19089cu: goto label_19089c;
        case 0x1908a0u: goto label_1908a0;
        case 0x1908a4u: goto label_1908a4;
        case 0x1908a8u: goto label_1908a8;
        case 0x1908acu: goto label_1908ac;
        case 0x1908b0u: goto label_1908b0;
        case 0x1908b4u: goto label_1908b4;
        case 0x1908b8u: goto label_1908b8;
        case 0x1908bcu: goto label_1908bc;
        case 0x1908c0u: goto label_1908c0;
        case 0x1908c4u: goto label_1908c4;
        case 0x1908c8u: goto label_1908c8;
        case 0x1908ccu: goto label_1908cc;
        case 0x1908d0u: goto label_1908d0;
        case 0x1908d4u: goto label_1908d4;
        case 0x1908d8u: goto label_1908d8;
        case 0x1908dcu: goto label_1908dc;
        case 0x1908e0u: goto label_1908e0;
        case 0x1908e4u: goto label_1908e4;
        case 0x1908e8u: goto label_1908e8;
        case 0x1908ecu: goto label_1908ec;
        case 0x1908f0u: goto label_1908f0;
        case 0x1908f4u: goto label_1908f4;
        case 0x1908f8u: goto label_1908f8;
        case 0x1908fcu: goto label_1908fc;
        case 0x190900u: goto label_190900;
        case 0x190904u: goto label_190904;
        case 0x190908u: goto label_190908;
        case 0x19090cu: goto label_19090c;
        case 0x190910u: goto label_190910;
        case 0x190914u: goto label_190914;
        case 0x190918u: goto label_190918;
        case 0x19091cu: goto label_19091c;
        case 0x190920u: goto label_190920;
        case 0x190924u: goto label_190924;
        case 0x190928u: goto label_190928;
        case 0x19092cu: goto label_19092c;
        case 0x190930u: goto label_190930;
        case 0x190934u: goto label_190934;
        case 0x190938u: goto label_190938;
        case 0x19093cu: goto label_19093c;
        case 0x190940u: goto label_190940;
        case 0x190944u: goto label_190944;
        case 0x190948u: goto label_190948;
        case 0x19094cu: goto label_19094c;
        case 0x190950u: goto label_190950;
        case 0x190954u: goto label_190954;
        case 0x190958u: goto label_190958;
        case 0x19095cu: goto label_19095c;
        case 0x190960u: goto label_190960;
        case 0x190964u: goto label_190964;
        case 0x190968u: goto label_190968;
        case 0x19096cu: goto label_19096c;
        case 0x190970u: goto label_190970;
        case 0x190974u: goto label_190974;
        case 0x190978u: goto label_190978;
        case 0x19097cu: goto label_19097c;
        case 0x190980u: goto label_190980;
        case 0x190984u: goto label_190984;
        case 0x190988u: goto label_190988;
        case 0x19098cu: goto label_19098c;
        case 0x190990u: goto label_190990;
        case 0x190994u: goto label_190994;
        case 0x190998u: goto label_190998;
        case 0x19099cu: goto label_19099c;
        case 0x1909a0u: goto label_1909a0;
        case 0x1909a4u: goto label_1909a4;
        case 0x1909a8u: goto label_1909a8;
        case 0x1909acu: goto label_1909ac;
        case 0x1909b0u: goto label_1909b0;
        case 0x1909b4u: goto label_1909b4;
        case 0x1909b8u: goto label_1909b8;
        case 0x1909bcu: goto label_1909bc;
        case 0x1909c0u: goto label_1909c0;
        case 0x1909c4u: goto label_1909c4;
        case 0x1909c8u: goto label_1909c8;
        case 0x1909ccu: goto label_1909cc;
        case 0x1909d0u: goto label_1909d0;
        case 0x1909d4u: goto label_1909d4;
        case 0x1909d8u: goto label_1909d8;
        case 0x1909dcu: goto label_1909dc;
        case 0x1909e0u: goto label_1909e0;
        case 0x1909e4u: goto label_1909e4;
        case 0x1909e8u: goto label_1909e8;
        case 0x1909ecu: goto label_1909ec;
        case 0x1909f0u: goto label_1909f0;
        case 0x1909f4u: goto label_1909f4;
        case 0x1909f8u: goto label_1909f8;
        case 0x1909fcu: goto label_1909fc;
        case 0x190a00u: goto label_190a00;
        case 0x190a04u: goto label_190a04;
        case 0x190a08u: goto label_190a08;
        case 0x190a0cu: goto label_190a0c;
        case 0x190a10u: goto label_190a10;
        case 0x190a14u: goto label_190a14;
        case 0x190a18u: goto label_190a18;
        case 0x190a1cu: goto label_190a1c;
        case 0x190a20u: goto label_190a20;
        case 0x190a24u: goto label_190a24;
        case 0x190a28u: goto label_190a28;
        case 0x190a2cu: goto label_190a2c;
        case 0x190a30u: goto label_190a30;
        case 0x190a34u: goto label_190a34;
        case 0x190a38u: goto label_190a38;
        case 0x190a3cu: goto label_190a3c;
        case 0x190a40u: goto label_190a40;
        case 0x190a44u: goto label_190a44;
        case 0x190a48u: goto label_190a48;
        case 0x190a4cu: goto label_190a4c;
        default: return;
    }

label_190280:
    // 0x190280: 0x0  nop
    ctx->pc = 0x190280u;
    // NOP
label_190284:
    // 0x190284: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x190284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190288:
    // 0x190288: 0x0  nop
    ctx->pc = 0x190288u;
    // NOP
label_19028c:
    // 0x19028c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_190290:
    if (ctx->pc == 0x190290u) {
        ctx->pc = 0x190290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19028Cu;
        // 0x190290: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190294u;
        goto label_190294;
    }
    ctx->pc = 0x19028Cu;
    {
        const bool branch_taken_0x19028c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19028Cu;
        // 0x190290: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19028c) {
            ctx->pc = 0x1902ACu;
            goto label_1902ac;
        }
    }
    ctx->pc = 0x190294u;
label_190294:
    // 0x190294: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x190294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190298:
    // 0x190298: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19029c:
    // 0x19029c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19029cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1902a0:
    // 0x1902a0: 0x0  nop
    ctx->pc = 0x1902a0u;
    // NOP
label_1902a4:
    // 0x1902a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1902a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1902a8:
    // 0x1902a8: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x1902a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_1902ac:
    // 0x1902ac: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x1902acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_1902b0:
    // 0x1902b0: 0xc066e08  jal         func_19B820
label_1902b4:
    if (ctx->pc == 0x1902B4u) {
        ctx->pc = 0x1902B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902B0u;
        // 0x1902b4: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1902B8u;
        goto label_1902b8;
    }
    ctx->pc = 0x1902B0u;
    SET_GPR_U32(ctx, 31, 0x1902B8u);
    ctx->pc = 0x1902B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902B0u;
    // 0x1902b4: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x1902B8u;
label_1902b8:
    // 0x1902b8: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x1902b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1902bc:
    // 0x1902bc: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x1902bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1902c0:
    // 0x1902c0: 0xc7ac0194  lwc1        $f12, 0x194($sp)
    ctx->pc = 0x1902c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1902c4:
    // 0x1902c4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1902c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_1902c8:
    // 0x1902c8: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1902c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_1902cc:
    // 0x1902cc: 0x46000344  c1          0x344
    ctx->pc = 0x1902ccu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_1902d0:
    // 0x1902d0: 0x0  nop
    ctx->pc = 0x1902d0u;
    // NOP
label_1902d4:
    // 0x1902d4: 0x0  nop
    ctx->pc = 0x1902d4u;
    // NOP
label_1902d8:
    // 0x1902d8: 0xc06d51e  jal         func_1B5478
label_1902dc:
    if (ctx->pc == 0x1902DCu) {
        ctx->pc = 0x1902E0u;
        goto label_1902e0;
    }
    ctx->pc = 0x1902D8u;
    SET_GPR_U32(ctx, 31, 0x1902E0u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x1902E0u;
label_1902e0:
    // 0x1902e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1902e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1902e4:
    // 0x1902e4: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x1902e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_1902e8:
    // 0x1902e8: 0xc7ad0198  lwc1        $f13, 0x198($sp)
    ctx->pc = 0x1902e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1902ec:
    // 0x1902ec: 0xc06d51e  jal         func_1B5478
label_1902f0:
    if (ctx->pc == 0x1902F0u) {
        ctx->pc = 0x1902F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902ECu;
        // 0x1902f0: 0xc7ac0190  lwc1        $f12, 0x190($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1902F4u;
        goto label_1902f4;
    }
    ctx->pc = 0x1902ECu;
    SET_GPR_U32(ctx, 31, 0x1902F4u);
    ctx->pc = 0x1902F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902ECu;
    // 0x1902f0: 0xc7ac0190  lwc1        $f12, 0x190($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x1902F4u;
label_1902f4:
    // 0x1902f4: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x1902f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_1902f8:
    // 0x1902f8: 0xc066e44  jal         func_19B910
label_1902fc:
    if (ctx->pc == 0x1902FCu) {
        ctx->pc = 0x1902FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902F8u;
        // 0x1902fc: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190300u;
        goto label_190300;
    }
    ctx->pc = 0x1902F8u;
    SET_GPR_U32(ctx, 31, 0x190300u);
    ctx->pc = 0x1902FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902F8u;
    // 0x1902fc: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x190300u;
label_190300:
    // 0x190300: 0xc66c0028  lwc1        $f12, 0x28($s3)
    ctx->pc = 0x190300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190304:
    // 0x190304: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x190304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_190308:
    // 0x190308: 0xc066e6c  jal         func_19B9B0
label_19030c:
    if (ctx->pc == 0x19030Cu) {
        ctx->pc = 0x19030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190308u;
        // 0x19030c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190310u;
        goto label_190310;
    }
    ctx->pc = 0x190308u;
    SET_GPR_U32(ctx, 31, 0x190310u);
    ctx->pc = 0x19030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190308u;
    // 0x19030c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x190310u;
label_190310:
    // 0x190310: 0xc66c0020  lwc1        $f12, 0x20($s3)
    ctx->pc = 0x190310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190314:
    // 0x190314: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x190314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_190318:
    // 0x190318: 0xc066e96  jal         func_19BA58
label_19031c:
    if (ctx->pc == 0x19031Cu) {
        ctx->pc = 0x19031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190318u;
        // 0x19031c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190320u;
        goto label_190320;
    }
    ctx->pc = 0x190318u;
    SET_GPR_U32(ctx, 31, 0x190320u);
    ctx->pc = 0x19031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190318u;
    // 0x19031c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x190320u;
label_190320:
    // 0x190320: 0xc66c0024  lwc1        $f12, 0x24($s3)
    ctx->pc = 0x190320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190324:
    // 0x190324: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x190324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_190328:
    // 0x190328: 0xc066ec0  jal         func_19BB00
label_19032c:
    if (ctx->pc == 0x19032Cu) {
        ctx->pc = 0x19032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190328u;
        // 0x19032c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190330u;
        goto label_190330;
    }
    ctx->pc = 0x190328u;
    SET_GPR_U32(ctx, 31, 0x190330u);
    ctx->pc = 0x19032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190328u;
    // 0x19032c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x190330u;
label_190330:
    // 0x190330: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x190330u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_190334:
    // 0x190334: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x190334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_190338:
    // 0x190338: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x190338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_19033c:
    // 0x19033c: 0xc066d7a  jal         func_19B5E8
label_190340:
    if (ctx->pc == 0x190340u) {
        ctx->pc = 0x190340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19033Cu;
        // 0x190340: 0x24c62f70  addiu       $a2, $a2, 0x2F70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190344u;
        goto label_190344;
    }
    ctx->pc = 0x19033Cu;
    SET_GPR_U32(ctx, 31, 0x190344u);
    ctx->pc = 0x190340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19033Cu;
    // 0x190340: 0x24c62f70  addiu       $a2, $a2, 0x2F70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x190344u;
label_190344:
    // 0x190344: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x190344u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_190348:
    // 0x190348: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x190348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19034c:
    // 0x19034c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x19034cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_190350:
    // 0x190350: 0xc066d7a  jal         func_19B5E8
label_190354:
    if (ctx->pc == 0x190354u) {
        ctx->pc = 0x190354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190350u;
        // 0x190354: 0x24c62f80  addiu       $a2, $a2, 0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190358u;
        goto label_190358;
    }
    ctx->pc = 0x190350u;
    SET_GPR_U32(ctx, 31, 0x190358u);
    ctx->pc = 0x190354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190350u;
    // 0x190354: 0x24c62f80  addiu       $a2, $a2, 0x2F80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x190358u;
label_190358:
    // 0x190358: 0x8e6300e8  lw          $v1, 0xE8($s3)
    ctx->pc = 0x190358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_19035c:
    // 0x19035c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x19035cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_190360:
    // 0x190360: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x190360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_190364:
    // 0x190364: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x190364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_190368:
    // 0x190368: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x190368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_19036c:
    // 0x19036c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x19036cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190370:
    // 0x190370: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x190370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_190374:
    // 0x190374: 0xc066f08  jal         func_19BC20
label_190378:
    if (ctx->pc == 0x190378u) {
        ctx->pc = 0x190378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190374u;
        // 0x190378: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19037Cu;
        goto label_19037c;
    }
    ctx->pc = 0x190374u;
    SET_GPR_U32(ctx, 31, 0x19037Cu);
    ctx->pc = 0x190378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190374u;
    // 0x190378: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BC20u;
    { ctx->pc = 0x19bc20; return; }
    ctx->pc = 0x19037Cu;
label_19037c:
    // 0x19037c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x19037cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_190380:
    // 0x190380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190384:
    // 0x190384: 0x0  nop
    ctx->pc = 0x190384u;
    // NOP
label_190388:
    // 0x190388: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x190388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19038c:
    // 0x19038c: 0x0  nop
    ctx->pc = 0x19038cu;
    // NOP
label_190390:
    // 0x190390: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_190394:
    if (ctx->pc == 0x190394u) {
        ctx->pc = 0x190394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190390u;
        // 0x190394: 0xaf808880  sw          $zero, -0x7780($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190398u;
        goto label_190398;
    }
    ctx->pc = 0x190390u;
    {
        const bool branch_taken_0x190390 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x190394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190390u;
        // 0x190394: 0xaf808880  sw          $zero, -0x7780($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190390) {
            ctx->pc = 0x1903A4u;
            goto label_1903a4;
        }
    }
    ctx->pc = 0x190398u;
label_190398:
    // 0x190398: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x190398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_19039c:
    // 0x19039c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1903a0:
    if (ctx->pc == 0x1903A0u) {
        ctx->pc = 0x1903A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19039Cu;
        // 0x1903a0: 0xaf828880  sw          $v0, -0x7780($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1903A4u;
        goto label_1903a4;
    }
    ctx->pc = 0x19039Cu;
    {
        const bool branch_taken_0x19039c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1903A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19039Cu;
        // 0x1903a0: 0xaf828880  sw          $v0, -0x7780($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19039c) {
            ctx->pc = 0x1903DCu;
            goto label_1903dc;
        }
    }
    ctx->pc = 0x1903A4u;
label_1903a4:
    // 0x1903a4: 0x461aa834  c.lt.s      $f21, $f26
    ctx->pc = 0x1903a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1903a8:
    // 0x1903a8: 0x0  nop
    ctx->pc = 0x1903a8u;
    // NOP
label_1903ac:
    // 0x1903ac: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_1903b0:
    if (ctx->pc == 0x1903B0u) {
        ctx->pc = 0x1903B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903ACu;
        // 0x1903b0: 0x4600d081  sub.s       $f2, $f26, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1903B4u;
        goto label_1903b4;
    }
    ctx->pc = 0x1903ACu;
    {
        const bool branch_taken_0x1903ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1903B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903ACu;
        // 0x1903b0: 0x4600d081  sub.s       $f2, $f26, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903ac) {
            ctx->pc = 0x1903DCu;
            goto label_1903dc;
        }
    }
    ctx->pc = 0x1903B4u;
label_1903b4:
    // 0x1903b4: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x1903b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
label_1903b8:
    // 0x1903b8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1903b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1903bc:
    // 0x1903bc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1903bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1903c0:
    // 0x1903c0: 0x4600a841  sub.s       $f1, $f21, $f0
    ctx->pc = 0x1903c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_1903c4:
    // 0x1903c4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1903c4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_1903c8:
    // 0x1903c8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1903c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1903cc:
    // 0x1903cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1903ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1903d0:
    // 0x1903d0: 0x0  nop
    ctx->pc = 0x1903d0u;
    // NOP
label_1903d4:
    // 0x1903d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1903d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1903d8:
    // 0x1903d8: 0xe7808880  swc1        $f0, -0x7780($gp)
    ctx->pc = 0x1903d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936704), bits); }
label_1903dc:
    // 0x1903dc: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1903dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1903e0:
    // 0x1903e0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1903e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1903e4:
    // 0x1903e4: 0xc7808880  lwc1        $f0, -0x7780($gp)
    ctx->pc = 0x1903e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1903e8:
    // 0x1903e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1903e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1903ec:
    // 0x1903ec: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x1903ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_1903f0:
    // 0x1903f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1903f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1903f4:
    // 0x1903f4: 0xc066e08  jal         func_19B820
label_1903f8:
    if (ctx->pc == 0x1903F8u) {
        ctx->pc = 0x1903F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903F4u;
        // 0x1903f8: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1903FCu;
        goto label_1903fc;
    }
    ctx->pc = 0x1903F4u;
    SET_GPR_U32(ctx, 31, 0x1903FCu);
    ctx->pc = 0x1903F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1903F4u;
    // 0x1903f8: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x1903FCu;
label_1903fc:
    // 0x1903fc: 0x8e6300e8  lw          $v1, 0xE8($s3)
    ctx->pc = 0x1903fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_190400:
    // 0x190400: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x190400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_190404:
    // 0x190404: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x190404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_190408:
    // 0x190408: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x190408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_19040c:
    // 0x19040c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19040cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190410:
    // 0x190410: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x190410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_190414:
    // 0x190414: 0xc066d7a  jal         func_19B5E8
label_190418:
    if (ctx->pc == 0x190418u) {
        ctx->pc = 0x190418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190414u;
        // 0x190418: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19041Cu;
        goto label_19041c;
    }
    ctx->pc = 0x190414u;
    SET_GPR_U32(ctx, 31, 0x19041Cu);
    ctx->pc = 0x190418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190414u;
    // 0x190418: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x19041Cu;
label_19041c:
    // 0x19041c: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x19041cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_190420:
    // 0x190420: 0xc066daa  jal         func_19B6A8
label_190424:
    if (ctx->pc == 0x190424u) {
        ctx->pc = 0x190424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190420u;
        // 0x190424: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190428u;
        goto label_190428;
    }
    ctx->pc = 0x190420u;
    SET_GPR_U32(ctx, 31, 0x190428u);
    ctx->pc = 0x190424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190420u;
    // 0x190424: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x190428u;
label_190428:
    // 0x190428: 0xc06d448  jal         func_1B5120
label_19042c:
    if (ctx->pc == 0x19042Cu) {
        ctx->pc = 0x19042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190428u;
        // 0x19042c: 0xc7ac01e4  lwc1        $f12, 0x1E4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190430u;
        goto label_190430;
    }
    ctx->pc = 0x190428u;
    SET_GPR_U32(ctx, 31, 0x190430u);
    ctx->pc = 0x19042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190428u;
    // 0x19042c: 0xc7ac01e4  lwc1        $f12, 0x1E4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x190430u;
label_190430:
    // 0x190430: 0xc66200c0  lwc1        $f2, 0xC0($s3)
    ctx->pc = 0x190430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_190434:
    // 0x190434: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x190434u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190438:
    // 0x190438: 0x0  nop
    ctx->pc = 0x190438u;
    // NOP
label_19043c:
    // 0x19043c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_190440:
    if (ctx->pc == 0x190440u) {
        ctx->pc = 0x190444u;
        goto label_190444;
    }
    ctx->pc = 0x19043Cu;
    {
        const bool branch_taken_0x19043c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19043c) {
            ctx->pc = 0x190484u;
            goto label_190484;
        }
    }
    ctx->pc = 0x190444u;
label_190444:
    // 0x190444: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x190444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190448:
    // 0x190448: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x190448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19044c:
    // 0x19044c: 0x0  nop
    ctx->pc = 0x19044cu;
    // NOP
label_190450:
    // 0x190450: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x190450u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_190454:
    // 0x190454: 0x0  nop
    ctx->pc = 0x190454u;
    // NOP
label_190458:
    // 0x190458: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_19045c:
    if (ctx->pc == 0x19045Cu) {
        ctx->pc = 0x190460u;
        goto label_190460;
    }
    ctx->pc = 0x190458u;
    {
        const bool branch_taken_0x190458 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190458) {
            ctx->pc = 0x190474u;
            goto label_190474;
        }
    }
    ctx->pc = 0x190460u;
label_190460:
    // 0x190460: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x190460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190464:
    // 0x190464: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x190464u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_190468:
    // 0x190468: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_19046c:
    // 0x19046c: 0x10000005  b           . + 4 + (0x5 << 2)
label_190470:
    if (ctx->pc == 0x190470u) {
        ctx->pc = 0x190470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19046Cu;
        // 0x190470: 0xe6600020  swc1        $f0, 0x20($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190474u;
        goto label_190474;
    }
    ctx->pc = 0x19046Cu;
    {
        const bool branch_taken_0x19046c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19046Cu;
        // 0x190470: 0xe6600020  swc1        $f0, 0x20($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19046c) {
            ctx->pc = 0x190484u;
            goto label_190484;
        }
    }
    ctx->pc = 0x190474u;
label_190474:
    // 0x190474: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x190474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190478:
    // 0x190478: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x190478u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19047c:
    // 0x19047c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19047cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_190480:
    // 0x190480: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x190480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_190484:
    // 0x190484: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x190484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_190488:
    // 0x190488: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x190488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_19048c:
    // 0x19048c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19048cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_190490:
    // 0x190490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_190494:
    // 0x190494: 0x0  nop
    ctx->pc = 0x190494u;
    // NOP
label_190498:
    // 0x190498: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x190498u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19049c:
    // 0x19049c: 0x0  nop
    ctx->pc = 0x19049cu;
    // NOP
label_1904a0:
    // 0x1904a0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1904a4:
    if (ctx->pc == 0x1904A4u) {
        ctx->pc = 0x1904A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904A0u;
        // 0x1904a4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1904A8u;
        goto label_1904a8;
    }
    ctx->pc = 0x1904A0u;
    {
        const bool branch_taken_0x1904a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1904A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904A0u;
        // 0x1904a4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1904a0) {
            ctx->pc = 0x1904BCu;
            goto label_1904bc;
        }
    }
    ctx->pc = 0x1904A8u;
label_1904a8:
    // 0x1904a8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1904a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1904ac:
    // 0x1904ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1904acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1904b0:
    // 0x1904b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1904b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1904b4:
    // 0x1904b4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1904b8:
    if (ctx->pc == 0x1904B8u) {
        ctx->pc = 0x1904B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904B4u;
        // 0x1904b8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1904BCu;
        goto label_1904bc;
    }
    ctx->pc = 0x1904B4u;
    {
        const bool branch_taken_0x1904b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1904B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904B4u;
        // 0x1904b8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1904b4) {
            ctx->pc = 0x1904ECu;
            goto label_1904ec;
        }
    }
    ctx->pc = 0x1904BCu;
label_1904bc:
    // 0x1904bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1904bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1904c0:
    // 0x1904c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1904c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1904c4:
    // 0x1904c4: 0x0  nop
    ctx->pc = 0x1904c4u;
    // NOP
label_1904c8:
    // 0x1904c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1904c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1904cc:
    // 0x1904cc: 0x0  nop
    ctx->pc = 0x1904ccu;
    // NOP
label_1904d0:
    // 0x1904d0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1904d4:
    if (ctx->pc == 0x1904D4u) {
        ctx->pc = 0x1904D8u;
        goto label_1904d8;
    }
    ctx->pc = 0x1904D0u;
    {
        const bool branch_taken_0x1904d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1904d0) {
            ctx->pc = 0x1904ECu;
            goto label_1904ec;
        }
    }
    ctx->pc = 0x1904D8u;
label_1904d8:
    // 0x1904d8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1904d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1904dc:
    // 0x1904dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1904dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1904e0:
    // 0x1904e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1904e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1904e4:
    // 0x1904e4: 0x0  nop
    ctx->pc = 0x1904e4u;
    // NOP
label_1904e8:
    // 0x1904e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1904e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1904ec:
    // 0x1904ec: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1904ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1904f0:
    // 0x1904f0: 0x27a30270  addiu       $v1, $sp, 0x270
    ctx->pc = 0x1904f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_1904f4:
    // 0x1904f4: 0xe6610020  swc1        $f1, 0x20($s3)
    ctx->pc = 0x1904f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
label_1904f8:
    // 0x1904f8: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x1904f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_1904fc:
    // 0x1904fc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1904fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_190500:
    // 0x190500: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x190500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_190504:
    // 0x190504: 0xc066e44  jal         func_19B910
label_190508:
    if (ctx->pc == 0x190508u) {
        ctx->pc = 0x190508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190504u;
        // 0x190508: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19050Cu;
        goto label_19050c;
    }
    ctx->pc = 0x190504u;
    SET_GPR_U32(ctx, 31, 0x19050Cu);
    ctx->pc = 0x190508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190504u;
    // 0x190508: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x19050Cu;
label_19050c:
    // 0x19050c: 0xc66c0028  lwc1        $f12, 0x28($s3)
    ctx->pc = 0x19050cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190510:
    // 0x190510: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x190510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_190514:
    // 0x190514: 0xc066e6c  jal         func_19B9B0
label_190518:
    if (ctx->pc == 0x190518u) {
        ctx->pc = 0x190518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190514u;
        // 0x190518: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19051Cu;
        goto label_19051c;
    }
    ctx->pc = 0x190514u;
    SET_GPR_U32(ctx, 31, 0x19051Cu);
    ctx->pc = 0x190518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190514u;
    // 0x190518: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x19051Cu;
label_19051c:
    // 0x19051c: 0xc66c0020  lwc1        $f12, 0x20($s3)
    ctx->pc = 0x19051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190520:
    // 0x190520: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x190520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_190524:
    // 0x190524: 0xc066e96  jal         func_19BA58
label_190528:
    if (ctx->pc == 0x190528u) {
        ctx->pc = 0x190528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190524u;
        // 0x190528: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19052Cu;
        goto label_19052c;
    }
    ctx->pc = 0x190524u;
    SET_GPR_U32(ctx, 31, 0x19052Cu);
    ctx->pc = 0x190528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190524u;
    // 0x190528: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x19052Cu;
label_19052c:
    // 0x19052c: 0xc66c0024  lwc1        $f12, 0x24($s3)
    ctx->pc = 0x19052cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_190530:
    // 0x190530: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x190530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_190534:
    // 0x190534: 0xc066ec0  jal         func_19BB00
label_190538:
    if (ctx->pc == 0x190538u) {
        ctx->pc = 0x190538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190534u;
        // 0x190538: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19053Cu;
        goto label_19053c;
    }
    ctx->pc = 0x190534u;
    SET_GPR_U32(ctx, 31, 0x19053Cu);
    ctx->pc = 0x190538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190534u;
    // 0x190538: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x19053Cu;
label_19053c:
    // 0x19053c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x19053cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_190540:
    // 0x190540: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x190540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_190544:
    // 0x190544: 0xc066d7a  jal         func_19B5E8
label_190548:
    if (ctx->pc == 0x190548u) {
        ctx->pc = 0x190548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190544u;
        // 0x190548: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19054Cu;
        goto label_19054c;
    }
    ctx->pc = 0x190544u;
    SET_GPR_U32(ctx, 31, 0x19054Cu);
    ctx->pc = 0x190548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190544u;
    // 0x190548: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x19054Cu;
label_19054c:
    // 0x19054c: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x19054cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_190550:
    // 0x190550: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x190550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_190554:
    // 0x190554: 0xc066e02  jal         func_19B808
label_190558:
    if (ctx->pc == 0x190558u) {
        ctx->pc = 0x190558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190554u;
        // 0x190558: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19055Cu;
        goto label_19055c;
    }
    ctx->pc = 0x190554u;
    SET_GPR_U32(ctx, 31, 0x19055Cu);
    ctx->pc = 0x190558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190554u;
    // 0x190558: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x19055Cu;
label_19055c:
    // 0x19055c: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x19055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_190560:
    // 0x190560: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x190560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_190564:
    // 0x190564: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x190564u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_190568:
    // 0x190568: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x190568u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_19056c:
    // 0x19056c: 0x4a0002ff  vnop
    ctx->pc = 0x19056cu;
    // NOP operation, no action needed for VU0
label_190570:
    // 0x190570: 0x4a0002ff  vnop
    ctx->pc = 0x190570u;
    // NOP operation, no action needed for VU0
label_190574:
    // 0x190574: 0x4a0002ff  vnop
    ctx->pc = 0x190574u;
    // NOP operation, no action needed for VU0
label_190578:
    // 0x190578: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x190578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_19057c:
    // 0x19057c: 0x4a0002ff  vnop
    ctx->pc = 0x19057cu;
    // NOP operation, no action needed for VU0
label_190580:
    // 0x190580: 0x4a0002ff  vnop
    ctx->pc = 0x190580u;
    // NOP operation, no action needed for VU0
label_190584:
    // 0x190584: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x190584u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_190588:
    // 0x190588: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x190588u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_19058c:
    // 0x19058c: 0x4a0002ff  vnop
    ctx->pc = 0x19058cu;
    // NOP operation, no action needed for VU0
label_190590:
    // 0x190590: 0x4a0002ff  vnop
    ctx->pc = 0x190590u;
    // NOP operation, no action needed for VU0
label_190594:
    // 0x190594: 0x4a0002ff  vnop
    ctx->pc = 0x190594u;
    // NOP operation, no action needed for VU0
label_190598:
    // 0x190598: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x190598u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_19059c:
    // 0x19059c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19059cu;
    // VWAITQ (Q already resolved in this runtime)
label_1905a0:
    // 0x1905a0: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1905a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1905a4:
    // 0x1905a4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1905a4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1905a8:
    // 0x1905a8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1905a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_1905ac:
    // 0x1905ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1905acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1905b0:
    // 0x1905b0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1905b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1905b4:
    // 0x1905b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1905b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1905b8:
    // 0x1905b8: 0x0  nop
    ctx->pc = 0x1905b8u;
    // NOP
label_1905bc:
    // 0x1905bc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1905c0:
    if (ctx->pc == 0x1905C0u) {
        ctx->pc = 0x1905C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905BCu;
        // 0x1905c0: 0x3c024226  lui         $v0, 0x4226 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16934 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1905C4u;
        goto label_1905c4;
    }
    ctx->pc = 0x1905BCu;
    {
        const bool branch_taken_0x1905bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1905C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905BCu;
        // 0x1905c0: 0x3c024226  lui         $v0, 0x4226 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16934 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1905bc) {
            ctx->pc = 0x1905E0u;
            goto label_1905e0;
        }
    }
    ctx->pc = 0x1905C4u;
label_1905c4:
    // 0x1905c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1905c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1905c8:
    // 0x1905c8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1905c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_1905cc:
    // 0x1905cc: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1905ccu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_1905d0:
    // 0x1905d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1905d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1905d4:
    // 0x1905d4: 0x0  nop
    ctx->pc = 0x1905d4u;
    // NOP
label_1905d8:
    // 0x1905d8: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1905d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1905dc:
    // 0x1905dc: 0x3c024226  lui         $v0, 0x4226
    ctx->pc = 0x1905dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16934 << 16));
label_1905e0:
    // 0x1905e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1905e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1905e4:
    // 0x1905e4: 0x344227f0  ori         $v0, $v0, 0x27F0
    ctx->pc = 0x1905e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10224);
label_1905e8:
    // 0x1905e8: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x1905e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_1905ec:
    // 0x1905ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1905ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1905f0:
    // 0x1905f0: 0x0  nop
    ctx->pc = 0x1905f0u;
    // NOP
label_1905f4:
    // 0x1905f4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1905f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1905f8:
    // 0x1905f8: 0xc066e26  jal         func_19B898
label_1905fc:
    if (ctx->pc == 0x1905FCu) {
        ctx->pc = 0x1905FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905F8u;
        // 0x1905fc: 0xe6600098  swc1        $f0, 0x98($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x190600u;
        goto label_190600;
    }
    ctx->pc = 0x1905F8u;
    SET_GPR_U32(ctx, 31, 0x190600u);
    ctx->pc = 0x1905FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1905F8u;
    // 0x1905fc: 0xe6600098  swc1        $f0, 0x98($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190600u;
label_190600:
    // 0x190600: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x190600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190604:
    // 0x190604: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x190604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_190608:
    // 0x190608: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x190608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_19060c:
    // 0x19060c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19060cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_190610:
    // 0x190610: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x190610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_190614:
    // 0x190614: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x190614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_190618:
    // 0x190618: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x190618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_19061c:
    // 0x19061c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19061cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_190620:
    // 0x190620: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x190620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_190624:
    // 0x190624: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x190624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_190628:
    // 0x190628: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x190628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_19062c:
    // 0x19062c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x19062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_190630:
    // 0x190630: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x190630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_190634:
    // 0x190634: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x190634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_190638:
    // 0x190638: 0x3e00008  jr          $ra
label_19063c:
    if (ctx->pc == 0x19063Cu) {
        ctx->pc = 0x19063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190638u;
        // 0x19063c: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190640u;
        goto label_190640;
    }
    ctx->pc = 0x190638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190638u;
        // 0x19063c: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190640u;
label_190640:
    // 0x190640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_190644:
    // 0x190644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_190648:
    // 0x190648: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x190648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_19064c:
    // 0x19064c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x19064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_190650:
    // 0x190650: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_190654:
    if (ctx->pc == 0x190654u) {
        ctx->pc = 0x190654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190650u;
        // 0x190654: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190658u;
        goto label_190658;
    }
    ctx->pc = 0x190650u;
    {
        const bool branch_taken_0x190650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190650u;
        // 0x190654: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190650) {
            ctx->pc = 0x190670u;
            goto label_190670;
        }
    }
    ctx->pc = 0x190658u;
label_190658:
    // 0x190658: 0xc0641a4  jal         func_190690
label_19065c:
    if (ctx->pc == 0x19065Cu) {
        ctx->pc = 0x19065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190658u;
        // 0x19065c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190660u;
        goto label_190660;
    }
    ctx->pc = 0x190658u;
    SET_GPR_U32(ctx, 31, 0x190660u);
    ctx->pc = 0x19065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190658u;
    // 0x19065c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190690u;
    goto label_190690;
    ctx->pc = 0x190660u;
label_190660:
    // 0x190660: 0xc0641a4  jal         func_190690
label_190664:
    if (ctx->pc == 0x190664u) {
        ctx->pc = 0x190664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190660u;
        // 0x190664: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190668u;
        goto label_190668;
    }
    ctx->pc = 0x190660u;
    SET_GPR_U32(ctx, 31, 0x190668u);
    ctx->pc = 0x190664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190660u;
    // 0x190664: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190690u;
    goto label_190690;
    ctx->pc = 0x190668u;
label_190668:
    // 0x190668: 0x10000004  b           . + 4 + (0x4 << 2)
label_19066c:
    if (ctx->pc == 0x19066Cu) {
        ctx->pc = 0x19066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190668u;
        // 0x19066c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190670u;
        goto label_190670;
    }
    ctx->pc = 0x190668u;
    {
        const bool branch_taken_0x190668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190668u;
        // 0x19066c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190668) {
            ctx->pc = 0x19067Cu;
            goto label_19067c;
        }
    }
    ctx->pc = 0x190670u;
label_190670:
    // 0x190670: 0xc0641a4  jal         func_190690
label_190674:
    if (ctx->pc == 0x190674u) {
        ctx->pc = 0x190678u;
        goto label_190678;
    }
    ctx->pc = 0x190670u;
    SET_GPR_U32(ctx, 31, 0x190678u);
    ctx->pc = 0x190690u;
    goto label_190690;
    ctx->pc = 0x190678u;
label_190678:
    // 0x190678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19067c:
    // 0x19067c: 0x3e00008  jr          $ra
label_190680:
    if (ctx->pc == 0x190680u) {
        ctx->pc = 0x190680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19067Cu;
        // 0x190680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190684u;
        goto label_190684;
    }
    ctx->pc = 0x19067Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19067Cu;
        // 0x190680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19067Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190684u;
label_190684:
    // 0x190684: 0x0  nop
    ctx->pc = 0x190684u;
    // NOP
label_190688:
    // 0x190688: 0x0  nop
    ctx->pc = 0x190688u;
    // NOP
label_19068c:
    // 0x19068c: 0x0  nop
    ctx->pc = 0x19068cu;
    // NOP
label_190690:
    // 0x190690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_190694:
    // 0x190694: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x190694u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_190698:
    // 0x190698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x190698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19069c:
    // 0x19069c: 0x278381e8  addiu       $v1, $gp, -0x7E18
    ctx->pc = 0x19069cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935016));
label_1906a0:
    // 0x1906a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1906a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1906a4:
    // 0x1906a4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1906a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1906a8:
    // 0x1906a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1906a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1906ac:
    // 0x1906ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1906acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1906b0:
    // 0x1906b0: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
label_1906b4:
    if (ctx->pc == 0x1906B4u) {
        ctx->pc = 0x1906B8u;
        goto label_1906b8;
    }
    ctx->pc = 0x1906B0u;
    {
        const bool branch_taken_0x1906b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1906b0) {
            ctx->pc = 0x190824u;
            goto label_190824;
        }
    }
    ctx->pc = 0x1906B8u;
label_1906b8:
    // 0x1906b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1906b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1906bc:
    // 0x1906bc: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1906bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1906c0:
    // 0x1906c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1906c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1906c4:
    // 0x1906c4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1906c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1906c8:
    // 0x1906c8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1906c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1906cc:
    // 0x1906cc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1906ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1906d0:
    // 0x1906d0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1906d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1906d4:
    // 0x1906d4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1906d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1906d8:
    // 0x1906d8: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x1906d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
label_1906dc:
    // 0x1906dc: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x1906dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1906e0:
    // 0x1906e0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1906e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1906e4:
    // 0x1906e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1906e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1906e8:
    // 0x1906e8: 0x24429d40  addiu       $v0, $v0, -0x62C0
    ctx->pc = 0x1906e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942016));
label_1906ec:
    // 0x1906ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1906ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1906f0:
    // 0x1906f0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1906f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1906f4:
    // 0x1906f4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1906f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1906f8:
    // 0x1906f8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1906f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1906fc:
    // 0x1906fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1906fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_190700:
    // 0x190700: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x190700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_190704:
    // 0x190704: 0xc066e26  jal         func_19B898
label_190708:
    if (ctx->pc == 0x190708u) {
        ctx->pc = 0x190708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190704u;
        // 0x190708: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19070Cu;
        goto label_19070c;
    }
    ctx->pc = 0x190704u;
    SET_GPR_U32(ctx, 31, 0x19070Cu);
    ctx->pc = 0x190708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190704u;
    // 0x190708: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x19070Cu;
label_19070c:
    // 0x19070c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x19070cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_190710:
    // 0x190710: 0xc066e26  jal         func_19B898
label_190714:
    if (ctx->pc == 0x190714u) {
        ctx->pc = 0x190714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190710u;
        // 0x190714: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190718u;
        goto label_190718;
    }
    ctx->pc = 0x190710u;
    SET_GPR_U32(ctx, 31, 0x190718u);
    ctx->pc = 0x190714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190710u;
    // 0x190714: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190718u;
label_190718:
    // 0x190718: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x190718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_19071c:
    // 0x19071c: 0xc066e26  jal         func_19B898
label_190720:
    if (ctx->pc == 0x190720u) {
        ctx->pc = 0x190720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19071Cu;
        // 0x190720: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190724u;
        goto label_190724;
    }
    ctx->pc = 0x19071Cu;
    SET_GPR_U32(ctx, 31, 0x190724u);
    ctx->pc = 0x190720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19071Cu;
    // 0x190720: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190724u;
label_190724:
    // 0x190724: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x190724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_190728:
    // 0x190728: 0xc066e26  jal         func_19B898
label_19072c:
    if (ctx->pc == 0x19072Cu) {
        ctx->pc = 0x19072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190728u;
        // 0x19072c: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190730u;
        goto label_190730;
    }
    ctx->pc = 0x190728u;
    SET_GPR_U32(ctx, 31, 0x190730u);
    ctx->pc = 0x19072Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190728u;
    // 0x19072c: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190730u;
label_190730:
    // 0x190730: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x190730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_190734:
    // 0x190734: 0xc066e26  jal         func_19B898
label_190738:
    if (ctx->pc == 0x190738u) {
        ctx->pc = 0x190738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190734u;
        // 0x190738: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19073Cu;
        goto label_19073c;
    }
    ctx->pc = 0x190734u;
    SET_GPR_U32(ctx, 31, 0x19073Cu);
    ctx->pc = 0x190738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190734u;
    // 0x190738: 0x26250040  addiu       $a1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x19073Cu;
label_19073c:
    // 0x19073c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x19073cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_190740:
    // 0x190740: 0xc066e26  jal         func_19B898
label_190744:
    if (ctx->pc == 0x190744u) {
        ctx->pc = 0x190744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190740u;
        // 0x190744: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190748u;
        goto label_190748;
    }
    ctx->pc = 0x190740u;
    SET_GPR_U32(ctx, 31, 0x190748u);
    ctx->pc = 0x190744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190740u;
    // 0x190744: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190748u;
label_190748:
    // 0x190748: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x190748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_19074c:
    // 0x19074c: 0xc066e26  jal         func_19B898
label_190750:
    if (ctx->pc == 0x190750u) {
        ctx->pc = 0x190750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19074Cu;
        // 0x190750: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190754u;
        goto label_190754;
    }
    ctx->pc = 0x19074Cu;
    SET_GPR_U32(ctx, 31, 0x190754u);
    ctx->pc = 0x190750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19074Cu;
    // 0x190750: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190754u;
label_190754:
    // 0x190754: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x190754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_190758:
    // 0x190758: 0xc066e26  jal         func_19B898
label_19075c:
    if (ctx->pc == 0x19075Cu) {
        ctx->pc = 0x19075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190758u;
        // 0x19075c: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190760u;
        goto label_190760;
    }
    ctx->pc = 0x190758u;
    SET_GPR_U32(ctx, 31, 0x190760u);
    ctx->pc = 0x19075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190758u;
    // 0x19075c: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190760u;
label_190760:
    // 0x190760: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x190760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_190764:
    // 0x190764: 0xc066e26  jal         func_19B898
label_190768:
    if (ctx->pc == 0x190768u) {
        ctx->pc = 0x190768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190764u;
        // 0x190768: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19076Cu;
        goto label_19076c;
    }
    ctx->pc = 0x190764u;
    SET_GPR_U32(ctx, 31, 0x19076Cu);
    ctx->pc = 0x190768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190764u;
    // 0x190768: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x19076Cu;
label_19076c:
    // 0x19076c: 0xc6200090  lwc1        $f0, 0x90($s1)
    ctx->pc = 0x19076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190770:
    // 0x190770: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x190770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_190774:
    // 0x190774: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x190774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190778:
    // 0x190778: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x190778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_19077c:
    // 0x19077c: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x19077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190780:
    // 0x190780: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x190780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_190784:
    // 0x190784: 0xc620009c  lwc1        $f0, 0x9C($s1)
    ctx->pc = 0x190784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190788:
    // 0x190788: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x190788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_19078c:
    // 0x19078c: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x19078cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_190790:
    // 0x190790: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x190790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_190794:
    // 0x190794: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x190794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_190798:
    // 0x190798: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x190798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
label_19079c:
    // 0x19079c: 0x8e2300a8  lw          $v1, 0xA8($s1)
    ctx->pc = 0x19079cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_1907a0:
    // 0x1907a0: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x1907a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_1907a4:
    // 0x1907a4: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x1907a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_1907a8:
    // 0x1907a8: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x1907a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
label_1907ac:
    // 0x1907ac: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x1907acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1907b0:
    // 0x1907b0: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x1907b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_1907b4:
    // 0x1907b4: 0xc62000b4  lwc1        $f0, 0xB4($s1)
    ctx->pc = 0x1907b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1907b8:
    // 0x1907b8: 0xe60000b4  swc1        $f0, 0xB4($s0)
    ctx->pc = 0x1907b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
label_1907bc:
    // 0x1907bc: 0xc62000b8  lwc1        $f0, 0xB8($s1)
    ctx->pc = 0x1907bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1907c0:
    // 0x1907c0: 0xe60000b8  swc1        $f0, 0xB8($s0)
    ctx->pc = 0x1907c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_1907c4:
    // 0x1907c4: 0xc62000bc  lwc1        $f0, 0xBC($s1)
    ctx->pc = 0x1907c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1907c8:
    // 0x1907c8: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x1907c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_1907cc:
    // 0x1907cc: 0xc62000c0  lwc1        $f0, 0xC0($s1)
    ctx->pc = 0x1907ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1907d0:
    // 0x1907d0: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1907d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_1907d4:
    // 0x1907d4: 0xc62000c4  lwc1        $f0, 0xC4($s1)
    ctx->pc = 0x1907d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1907d8:
    // 0x1907d8: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1907d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
label_1907dc:
    // 0x1907dc: 0xc62000c8  lwc1        $f0, 0xC8($s1)
    ctx->pc = 0x1907dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1907e0:
    // 0x1907e0: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1907e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
label_1907e4:
    // 0x1907e4: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x1907e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_1907e8:
    // 0x1907e8: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x1907e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
label_1907ec:
    // 0x1907ec: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x1907ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_1907f0:
    // 0x1907f0: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1907f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_1907f4:
    // 0x1907f4: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x1907f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_1907f8:
    // 0x1907f8: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1907f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_1907fc:
    // 0x1907fc: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x1907fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_190800:
    // 0x190800: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x190800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
label_190804:
    // 0x190804: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x190804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_190808:
    // 0x190808: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x190808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
label_19080c:
    // 0x19080c: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x19080cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_190810:
    // 0x190810: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x190810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
label_190814:
    // 0x190814: 0x962300e4  lhu         $v1, 0xE4($s1)
    ctx->pc = 0x190814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
label_190818:
    // 0x190818: 0xa60300e4  sh          $v1, 0xE4($s0)
    ctx->pc = 0x190818u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 228), (uint16_t)GPR_U32(ctx, 3));
label_19081c:
    // 0x19081c: 0x8e2300e8  lw          $v1, 0xE8($s1)
    ctx->pc = 0x19081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_190820:
    // 0x190820: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x190820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_190824:
    // 0x190824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x190824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_190828:
    // 0x190828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19082c:
    // 0x19082c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19082cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_190830:
    // 0x190830: 0x3e00008  jr          $ra
label_190834:
    if (ctx->pc == 0x190834u) {
        ctx->pc = 0x190834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190830u;
        // 0x190834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190838u;
        goto label_190838;
    }
    ctx->pc = 0x190830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190830u;
        // 0x190834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190838u;
label_190838:
    // 0x190838: 0x0  nop
    ctx->pc = 0x190838u;
    // NOP
label_19083c:
    // 0x19083c: 0x0  nop
    ctx->pc = 0x19083cu;
    // NOP
label_190840:
    // 0x190840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_190844:
    // 0x190844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_190848:
    // 0x190848: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x190848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_19084c:
    // 0x19084c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x19084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_190850:
    // 0x190850: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_190854:
    if (ctx->pc == 0x190854u) {
        ctx->pc = 0x190854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190850u;
        // 0x190854: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190858u;
        goto label_190858;
    }
    ctx->pc = 0x190850u;
    {
        const bool branch_taken_0x190850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190850u;
        // 0x190854: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190850) {
            ctx->pc = 0x190870u;
            goto label_190870;
        }
    }
    ctx->pc = 0x190858u;
label_190858:
    // 0x190858: 0xc064224  jal         func_190890
label_19085c:
    if (ctx->pc == 0x19085Cu) {
        ctx->pc = 0x19085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190858u;
        // 0x19085c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190860u;
        goto label_190860;
    }
    ctx->pc = 0x190858u;
    SET_GPR_U32(ctx, 31, 0x190860u);
    ctx->pc = 0x19085Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190858u;
    // 0x19085c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190890u;
    goto label_190890;
    ctx->pc = 0x190860u;
label_190860:
    // 0x190860: 0xc064224  jal         func_190890
label_190864:
    if (ctx->pc == 0x190864u) {
        ctx->pc = 0x190864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190860u;
        // 0x190864: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190868u;
        goto label_190868;
    }
    ctx->pc = 0x190860u;
    SET_GPR_U32(ctx, 31, 0x190868u);
    ctx->pc = 0x190864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190860u;
    // 0x190864: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190890u;
    goto label_190890;
    ctx->pc = 0x190868u;
label_190868:
    // 0x190868: 0x10000004  b           . + 4 + (0x4 << 2)
label_19086c:
    if (ctx->pc == 0x19086Cu) {
        ctx->pc = 0x19086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190868u;
        // 0x19086c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190870u;
        goto label_190870;
    }
    ctx->pc = 0x190868u;
    {
        const bool branch_taken_0x190868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190868u;
        // 0x19086c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190868) {
            ctx->pc = 0x19087Cu;
            goto label_19087c;
        }
    }
    ctx->pc = 0x190870u;
label_190870:
    // 0x190870: 0xc064224  jal         func_190890
label_190874:
    if (ctx->pc == 0x190874u) {
        ctx->pc = 0x190878u;
        goto label_190878;
    }
    ctx->pc = 0x190870u;
    SET_GPR_U32(ctx, 31, 0x190878u);
    ctx->pc = 0x190890u;
    goto label_190890;
    ctx->pc = 0x190878u;
label_190878:
    // 0x190878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19087c:
    // 0x19087c: 0x3e00008  jr          $ra
label_190880:
    if (ctx->pc == 0x190880u) {
        ctx->pc = 0x190880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19087Cu;
        // 0x190880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190884u;
        goto label_190884;
    }
    ctx->pc = 0x19087Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19087Cu;
        // 0x190880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19087Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190884u;
label_190884:
    // 0x190884: 0x0  nop
    ctx->pc = 0x190884u;
    // NOP
label_190888:
    // 0x190888: 0x0  nop
    ctx->pc = 0x190888u;
    // NOP
label_19088c:
    // 0x19088c: 0x0  nop
    ctx->pc = 0x19088cu;
    // NOP
label_190890:
    // 0x190890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_190894:
    // 0x190894: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x190894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_190898:
    // 0x190898: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x190898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19089c:
    // 0x19089c: 0x278281e8  addiu       $v0, $gp, -0x7E18
    ctx->pc = 0x19089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935016));
label_1908a0:
    // 0x1908a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1908a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1908a4:
    // 0x1908a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1908a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1908a8:
    // 0x1908a8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1908a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1908ac:
    // 0x1908ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1908acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1908b0:
    // 0x1908b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1908b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1908b4:
    // 0x1908b4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1908b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1908b8:
    // 0x1908b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1908bc:
    if (ctx->pc == 0x1908BCu) {
        ctx->pc = 0x1908BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908B8u;
        // 0x1908bc: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1908C0u;
        goto label_1908c0;
    }
    ctx->pc = 0x1908B8u;
    {
        const bool branch_taken_0x1908b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1908BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908B8u;
        // 0x1908bc: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1908b8) {
            ctx->pc = 0x1908CCu;
            goto label_1908cc;
        }
    }
    ctx->pc = 0x1908C0u;
label_1908c0:
    // 0x1908c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1908c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1908c4:
    // 0x1908c4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1908c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1908c8:
    // 0x1908c8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1908c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1908cc:
    // 0x1908cc: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1908ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_1908d0:
    // 0x1908d0: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x1908d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1908d4:
    // 0x1908d4: 0x24a52cc0  addiu       $a1, $a1, 0x2CC0
    ctx->pc = 0x1908d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11456));
label_1908d8:
    // 0x1908d8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1908d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1908dc:
    // 0x1908dc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1908dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1908e0:
    // 0x1908e0: 0xa48021  addu        $s0, $a1, $a0
    ctx->pc = 0x1908e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1908e4:
    // 0x1908e4: 0x24429d40  addiu       $v0, $v0, -0x62C0
    ctx->pc = 0x1908e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942016));
label_1908e8:
    // 0x1908e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1908e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1908ec:
    // 0x1908ec: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1908ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1908f0:
    // 0x1908f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1908f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1908f4:
    // 0x1908f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1908f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1908f8:
    // 0x1908f8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1908f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1908fc:
    // 0x1908fc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1908fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_190900:
    // 0x190900: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x190900u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_190904:
    // 0x190904: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x190904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_190908:
    // 0x190908: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x190908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19090c:
    // 0x19090c: 0xc066e26  jal         func_19B898
label_190910:
    if (ctx->pc == 0x190910u) {
        ctx->pc = 0x190910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19090Cu;
        // 0x190910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190914u;
        goto label_190914;
    }
    ctx->pc = 0x19090Cu;
    SET_GPR_U32(ctx, 31, 0x190914u);
    ctx->pc = 0x190910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19090Cu;
    // 0x190910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190914u;
label_190914:
    // 0x190914: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x190914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_190918:
    // 0x190918: 0xc066e26  jal         func_19B898
label_19091c:
    if (ctx->pc == 0x19091Cu) {
        ctx->pc = 0x19091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190918u;
        // 0x19091c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190920u;
        goto label_190920;
    }
    ctx->pc = 0x190918u;
    SET_GPR_U32(ctx, 31, 0x190920u);
    ctx->pc = 0x19091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190918u;
    // 0x19091c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190920u;
label_190920:
    // 0x190920: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x190920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_190924:
    // 0x190924: 0xc066e26  jal         func_19B898
label_190928:
    if (ctx->pc == 0x190928u) {
        ctx->pc = 0x190928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190924u;
        // 0x190928: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19092Cu;
        goto label_19092c;
    }
    ctx->pc = 0x190924u;
    SET_GPR_U32(ctx, 31, 0x19092Cu);
    ctx->pc = 0x190928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190924u;
    // 0x190928: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x19092Cu;
label_19092c:
    // 0x19092c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x19092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_190930:
    // 0x190930: 0xc066e26  jal         func_19B898
label_190934:
    if (ctx->pc == 0x190934u) {
        ctx->pc = 0x190934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190930u;
        // 0x190934: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190938u;
        goto label_190938;
    }
    ctx->pc = 0x190930u;
    SET_GPR_U32(ctx, 31, 0x190938u);
    ctx->pc = 0x190934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190930u;
    // 0x190934: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190938u;
label_190938:
    // 0x190938: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x190938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_19093c:
    // 0x19093c: 0xc066e26  jal         func_19B898
label_190940:
    if (ctx->pc == 0x190940u) {
        ctx->pc = 0x190940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19093Cu;
        // 0x190940: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190944u;
        goto label_190944;
    }
    ctx->pc = 0x19093Cu;
    SET_GPR_U32(ctx, 31, 0x190944u);
    ctx->pc = 0x190940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19093Cu;
    // 0x190940: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190944u;
label_190944:
    // 0x190944: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x190944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_190948:
    // 0x190948: 0xc066e26  jal         func_19B898
label_19094c:
    if (ctx->pc == 0x19094Cu) {
        ctx->pc = 0x19094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190948u;
        // 0x19094c: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190950u;
        goto label_190950;
    }
    ctx->pc = 0x190948u;
    SET_GPR_U32(ctx, 31, 0x190950u);
    ctx->pc = 0x19094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190948u;
    // 0x19094c: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190950u;
label_190950:
    // 0x190950: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x190950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_190954:
    // 0x190954: 0xc066e26  jal         func_19B898
label_190958:
    if (ctx->pc == 0x190958u) {
        ctx->pc = 0x190958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190954u;
        // 0x190958: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19095Cu;
        goto label_19095c;
    }
    ctx->pc = 0x190954u;
    SET_GPR_U32(ctx, 31, 0x19095Cu);
    ctx->pc = 0x190958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190954u;
    // 0x190958: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x19095Cu;
label_19095c:
    // 0x19095c: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x19095cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_190960:
    // 0x190960: 0xc066e26  jal         func_19B898
label_190964:
    if (ctx->pc == 0x190964u) {
        ctx->pc = 0x190964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190960u;
        // 0x190964: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190968u;
        goto label_190968;
    }
    ctx->pc = 0x190960u;
    SET_GPR_U32(ctx, 31, 0x190968u);
    ctx->pc = 0x190964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190960u;
    // 0x190964: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190968u;
label_190968:
    // 0x190968: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x190968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_19096c:
    // 0x19096c: 0xc066e26  jal         func_19B898
label_190970:
    if (ctx->pc == 0x190970u) {
        ctx->pc = 0x190970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19096Cu;
        // 0x190970: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190974u;
        goto label_190974;
    }
    ctx->pc = 0x19096Cu;
    SET_GPR_U32(ctx, 31, 0x190974u);
    ctx->pc = 0x190970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19096Cu;
    // 0x190970: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x190974u;
label_190974:
    // 0x190974: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x190974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190978:
    // 0x190978: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x190978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_19097c:
    // 0x19097c: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x19097cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190980:
    // 0x190980: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x190980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
label_190984:
    // 0x190984: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x190984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190988:
    // 0x190988: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x190988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
label_19098c:
    // 0x19098c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x19098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_190990:
    // 0x190990: 0xe620009c  swc1        $f0, 0x9C($s1)
    ctx->pc = 0x190990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
label_190994:
    // 0x190994: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x190994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_190998:
    // 0x190998: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x190998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
label_19099c:
    // 0x19099c: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x19099cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1909a0:
    // 0x1909a0: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x1909a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
label_1909a4:
    // 0x1909a4: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x1909a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1909a8:
    // 0x1909a8: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x1909a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
label_1909ac:
    // 0x1909ac: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x1909acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_1909b0:
    // 0x1909b0: 0xae2300ac  sw          $v1, 0xAC($s1)
    ctx->pc = 0x1909b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
label_1909b4:
    // 0x1909b4: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x1909b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1909b8:
    // 0x1909b8: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x1909b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_1909bc:
    // 0x1909bc: 0xc60000b4  lwc1        $f0, 0xB4($s0)
    ctx->pc = 0x1909bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1909c0:
    // 0x1909c0: 0xe62000b4  swc1        $f0, 0xB4($s1)
    ctx->pc = 0x1909c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
label_1909c4:
    // 0x1909c4: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x1909c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1909c8:
    // 0x1909c8: 0xe62000b8  swc1        $f0, 0xB8($s1)
    ctx->pc = 0x1909c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
label_1909cc:
    // 0x1909cc: 0xc60000bc  lwc1        $f0, 0xBC($s0)
    ctx->pc = 0x1909ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1909d0:
    // 0x1909d0: 0xe62000bc  swc1        $f0, 0xBC($s1)
    ctx->pc = 0x1909d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_1909d4:
    // 0x1909d4: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x1909d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1909d8:
    // 0x1909d8: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x1909d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_1909dc:
    // 0x1909dc: 0xc60000c4  lwc1        $f0, 0xC4($s0)
    ctx->pc = 0x1909dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1909e0:
    // 0x1909e0: 0xe62000c4  swc1        $f0, 0xC4($s1)
    ctx->pc = 0x1909e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 196), bits); }
label_1909e4:
    // 0x1909e4: 0xc60000c8  lwc1        $f0, 0xC8($s0)
    ctx->pc = 0x1909e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1909e8:
    // 0x1909e8: 0xe62000c8  swc1        $f0, 0xC8($s1)
    ctx->pc = 0x1909e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 200), bits); }
label_1909ec:
    // 0x1909ec: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x1909ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_1909f0:
    // 0x1909f0: 0xae2300cc  sw          $v1, 0xCC($s1)
    ctx->pc = 0x1909f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
label_1909f4:
    // 0x1909f4: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x1909f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_1909f8:
    // 0x1909f8: 0xae2300d0  sw          $v1, 0xD0($s1)
    ctx->pc = 0x1909f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
label_1909fc:
    // 0x1909fc: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x1909fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_190a00:
    // 0x190a00: 0xae2300d4  sw          $v1, 0xD4($s1)
    ctx->pc = 0x190a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
label_190a04:
    // 0x190a04: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x190a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_190a08:
    // 0x190a08: 0xae2300d8  sw          $v1, 0xD8($s1)
    ctx->pc = 0x190a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 3));
label_190a0c:
    // 0x190a0c: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x190a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_190a10:
    // 0x190a10: 0xae2300dc  sw          $v1, 0xDC($s1)
    ctx->pc = 0x190a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 3));
label_190a14:
    // 0x190a14: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x190a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_190a18:
    // 0x190a18: 0xae2300e0  sw          $v1, 0xE0($s1)
    ctx->pc = 0x190a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
label_190a1c:
    // 0x190a1c: 0x960300e4  lhu         $v1, 0xE4($s0)
    ctx->pc = 0x190a1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 228)));
label_190a20:
    // 0x190a20: 0xa62300e4  sh          $v1, 0xE4($s1)
    ctx->pc = 0x190a20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 3));
label_190a24:
    // 0x190a24: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x190a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_190a28:
    // 0x190a28: 0xae2300e8  sw          $v1, 0xE8($s1)
    ctx->pc = 0x190a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 3));
label_190a2c:
    // 0x190a2c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x190a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_190a30:
    // 0x190a30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x190a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_190a34:
    // 0x190a34: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x190a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_190a38:
    // 0x190a38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x190a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_190a3c:
    // 0x190a3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x190a3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_190a40:
    // 0x190a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_190a44:
    // 0x190a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_190a48:
    // 0x190a48: 0x3e00008  jr          $ra
label_190a4c:
    if (ctx->pc == 0x190A4Cu) {
        ctx->pc = 0x190A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A48u;
        // 0x190a4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x190A50u;
        { ctx->pc = 0x190a50; return; }
    }
    ctx->pc = 0x190A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A48u;
        // 0x190a4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190A50u;
    ctx->pc = 0x190a50u;
    return;
}

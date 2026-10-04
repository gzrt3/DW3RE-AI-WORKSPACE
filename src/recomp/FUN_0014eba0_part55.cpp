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


void FUN_0014eba0_part55(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x169180u: goto label_169180;
        case 0x169184u: goto label_169184;
        case 0x169188u: goto label_169188;
        case 0x16918cu: goto label_16918c;
        case 0x169190u: goto label_169190;
        case 0x169194u: goto label_169194;
        case 0x169198u: goto label_169198;
        case 0x16919cu: goto label_16919c;
        case 0x1691a0u: goto label_1691a0;
        case 0x1691a4u: goto label_1691a4;
        case 0x1691a8u: goto label_1691a8;
        case 0x1691acu: goto label_1691ac;
        case 0x1691b0u: goto label_1691b0;
        case 0x1691b4u: goto label_1691b4;
        case 0x1691b8u: goto label_1691b8;
        case 0x1691bcu: goto label_1691bc;
        case 0x1691c0u: goto label_1691c0;
        case 0x1691c4u: goto label_1691c4;
        case 0x1691c8u: goto label_1691c8;
        case 0x1691ccu: goto label_1691cc;
        case 0x1691d0u: goto label_1691d0;
        case 0x1691d4u: goto label_1691d4;
        case 0x1691d8u: goto label_1691d8;
        case 0x1691dcu: goto label_1691dc;
        case 0x1691e0u: goto label_1691e0;
        case 0x1691e4u: goto label_1691e4;
        case 0x1691e8u: goto label_1691e8;
        case 0x1691ecu: goto label_1691ec;
        case 0x1691f0u: goto label_1691f0;
        case 0x1691f4u: goto label_1691f4;
        case 0x1691f8u: goto label_1691f8;
        case 0x1691fcu: goto label_1691fc;
        case 0x169200u: goto label_169200;
        case 0x169204u: goto label_169204;
        case 0x169208u: goto label_169208;
        case 0x16920cu: goto label_16920c;
        case 0x169210u: goto label_169210;
        case 0x169214u: goto label_169214;
        case 0x169218u: goto label_169218;
        case 0x16921cu: goto label_16921c;
        case 0x169220u: goto label_169220;
        case 0x169224u: goto label_169224;
        case 0x169228u: goto label_169228;
        case 0x16922cu: goto label_16922c;
        case 0x169230u: goto label_169230;
        case 0x169234u: goto label_169234;
        case 0x169238u: goto label_169238;
        case 0x16923cu: goto label_16923c;
        case 0x169240u: goto label_169240;
        case 0x169244u: goto label_169244;
        case 0x169248u: goto label_169248;
        case 0x16924cu: goto label_16924c;
        case 0x169250u: goto label_169250;
        case 0x169254u: goto label_169254;
        case 0x169258u: goto label_169258;
        case 0x16925cu: goto label_16925c;
        case 0x169260u: goto label_169260;
        case 0x169264u: goto label_169264;
        case 0x169268u: goto label_169268;
        case 0x16926cu: goto label_16926c;
        case 0x169270u: goto label_169270;
        case 0x169274u: goto label_169274;
        case 0x169278u: goto label_169278;
        case 0x16927cu: goto label_16927c;
        case 0x169280u: goto label_169280;
        case 0x169284u: goto label_169284;
        case 0x169288u: goto label_169288;
        case 0x16928cu: goto label_16928c;
        case 0x169290u: goto label_169290;
        case 0x169294u: goto label_169294;
        case 0x169298u: goto label_169298;
        case 0x16929cu: goto label_16929c;
        case 0x1692a0u: goto label_1692a0;
        case 0x1692a4u: goto label_1692a4;
        case 0x1692a8u: goto label_1692a8;
        case 0x1692acu: goto label_1692ac;
        case 0x1692b0u: goto label_1692b0;
        case 0x1692b4u: goto label_1692b4;
        case 0x1692b8u: goto label_1692b8;
        case 0x1692bcu: goto label_1692bc;
        case 0x1692c0u: goto label_1692c0;
        case 0x1692c4u: goto label_1692c4;
        case 0x1692c8u: goto label_1692c8;
        case 0x1692ccu: goto label_1692cc;
        case 0x1692d0u: goto label_1692d0;
        case 0x1692d4u: goto label_1692d4;
        case 0x1692d8u: goto label_1692d8;
        case 0x1692dcu: goto label_1692dc;
        case 0x1692e0u: goto label_1692e0;
        case 0x1692e4u: goto label_1692e4;
        case 0x1692e8u: goto label_1692e8;
        case 0x1692ecu: goto label_1692ec;
        case 0x1692f0u: goto label_1692f0;
        case 0x1692f4u: goto label_1692f4;
        case 0x1692f8u: goto label_1692f8;
        case 0x1692fcu: goto label_1692fc;
        case 0x169300u: goto label_169300;
        case 0x169304u: goto label_169304;
        case 0x169308u: goto label_169308;
        case 0x16930cu: goto label_16930c;
        case 0x169310u: goto label_169310;
        case 0x169314u: goto label_169314;
        case 0x169318u: goto label_169318;
        case 0x16931cu: goto label_16931c;
        case 0x169320u: goto label_169320;
        case 0x169324u: goto label_169324;
        case 0x169328u: goto label_169328;
        case 0x16932cu: goto label_16932c;
        case 0x169330u: goto label_169330;
        case 0x169334u: goto label_169334;
        case 0x169338u: goto label_169338;
        case 0x16933cu: goto label_16933c;
        case 0x169340u: goto label_169340;
        case 0x169344u: goto label_169344;
        case 0x169348u: goto label_169348;
        case 0x16934cu: goto label_16934c;
        case 0x169350u: goto label_169350;
        case 0x169354u: goto label_169354;
        case 0x169358u: goto label_169358;
        case 0x16935cu: goto label_16935c;
        case 0x169360u: goto label_169360;
        case 0x169364u: goto label_169364;
        case 0x169368u: goto label_169368;
        case 0x16936cu: goto label_16936c;
        case 0x169370u: goto label_169370;
        case 0x169374u: goto label_169374;
        case 0x169378u: goto label_169378;
        case 0x16937cu: goto label_16937c;
        case 0x169380u: goto label_169380;
        case 0x169384u: goto label_169384;
        case 0x169388u: goto label_169388;
        case 0x16938cu: goto label_16938c;
        case 0x169390u: goto label_169390;
        case 0x169394u: goto label_169394;
        case 0x169398u: goto label_169398;
        case 0x16939cu: goto label_16939c;
        case 0x1693a0u: goto label_1693a0;
        case 0x1693a4u: goto label_1693a4;
        case 0x1693a8u: goto label_1693a8;
        case 0x1693acu: goto label_1693ac;
        case 0x1693b0u: goto label_1693b0;
        case 0x1693b4u: goto label_1693b4;
        case 0x1693b8u: goto label_1693b8;
        case 0x1693bcu: goto label_1693bc;
        case 0x1693c0u: goto label_1693c0;
        case 0x1693c4u: goto label_1693c4;
        case 0x1693c8u: goto label_1693c8;
        case 0x1693ccu: goto label_1693cc;
        case 0x1693d0u: goto label_1693d0;
        case 0x1693d4u: goto label_1693d4;
        case 0x1693d8u: goto label_1693d8;
        case 0x1693dcu: goto label_1693dc;
        case 0x1693e0u: goto label_1693e0;
        case 0x1693e4u: goto label_1693e4;
        case 0x1693e8u: goto label_1693e8;
        case 0x1693ecu: goto label_1693ec;
        case 0x1693f0u: goto label_1693f0;
        case 0x1693f4u: goto label_1693f4;
        case 0x1693f8u: goto label_1693f8;
        case 0x1693fcu: goto label_1693fc;
        case 0x169400u: goto label_169400;
        case 0x169404u: goto label_169404;
        case 0x169408u: goto label_169408;
        case 0x16940cu: goto label_16940c;
        case 0x169410u: goto label_169410;
        case 0x169414u: goto label_169414;
        case 0x169418u: goto label_169418;
        case 0x16941cu: goto label_16941c;
        case 0x169420u: goto label_169420;
        case 0x169424u: goto label_169424;
        case 0x169428u: goto label_169428;
        case 0x16942cu: goto label_16942c;
        case 0x169430u: goto label_169430;
        case 0x169434u: goto label_169434;
        case 0x169438u: goto label_169438;
        case 0x16943cu: goto label_16943c;
        case 0x169440u: goto label_169440;
        case 0x169444u: goto label_169444;
        case 0x169448u: goto label_169448;
        case 0x16944cu: goto label_16944c;
        case 0x169450u: goto label_169450;
        case 0x169454u: goto label_169454;
        case 0x169458u: goto label_169458;
        case 0x16945cu: goto label_16945c;
        case 0x169460u: goto label_169460;
        case 0x169464u: goto label_169464;
        case 0x169468u: goto label_169468;
        case 0x16946cu: goto label_16946c;
        case 0x169470u: goto label_169470;
        case 0x169474u: goto label_169474;
        case 0x169478u: goto label_169478;
        case 0x16947cu: goto label_16947c;
        case 0x169480u: goto label_169480;
        case 0x169484u: goto label_169484;
        case 0x169488u: goto label_169488;
        case 0x16948cu: goto label_16948c;
        case 0x169490u: goto label_169490;
        case 0x169494u: goto label_169494;
        case 0x169498u: goto label_169498;
        case 0x16949cu: goto label_16949c;
        case 0x1694a0u: goto label_1694a0;
        case 0x1694a4u: goto label_1694a4;
        case 0x1694a8u: goto label_1694a8;
        case 0x1694acu: goto label_1694ac;
        case 0x1694b0u: goto label_1694b0;
        case 0x1694b4u: goto label_1694b4;
        case 0x1694b8u: goto label_1694b8;
        case 0x1694bcu: goto label_1694bc;
        case 0x1694c0u: goto label_1694c0;
        case 0x1694c4u: goto label_1694c4;
        case 0x1694c8u: goto label_1694c8;
        case 0x1694ccu: goto label_1694cc;
        case 0x1694d0u: goto label_1694d0;
        case 0x1694d4u: goto label_1694d4;
        case 0x1694d8u: goto label_1694d8;
        case 0x1694dcu: goto label_1694dc;
        case 0x1694e0u: goto label_1694e0;
        case 0x1694e4u: goto label_1694e4;
        case 0x1694e8u: goto label_1694e8;
        case 0x1694ecu: goto label_1694ec;
        case 0x1694f0u: goto label_1694f0;
        case 0x1694f4u: goto label_1694f4;
        case 0x1694f8u: goto label_1694f8;
        case 0x1694fcu: goto label_1694fc;
        case 0x169500u: goto label_169500;
        case 0x169504u: goto label_169504;
        case 0x169508u: goto label_169508;
        case 0x16950cu: goto label_16950c;
        case 0x169510u: goto label_169510;
        case 0x169514u: goto label_169514;
        case 0x169518u: goto label_169518;
        case 0x16951cu: goto label_16951c;
        case 0x169520u: goto label_169520;
        case 0x169524u: goto label_169524;
        case 0x169528u: goto label_169528;
        case 0x16952cu: goto label_16952c;
        case 0x169530u: goto label_169530;
        case 0x169534u: goto label_169534;
        case 0x169538u: goto label_169538;
        case 0x16953cu: goto label_16953c;
        case 0x169540u: goto label_169540;
        case 0x169544u: goto label_169544;
        case 0x169548u: goto label_169548;
        case 0x16954cu: goto label_16954c;
        case 0x169550u: goto label_169550;
        case 0x169554u: goto label_169554;
        case 0x169558u: goto label_169558;
        case 0x16955cu: goto label_16955c;
        case 0x169560u: goto label_169560;
        case 0x169564u: goto label_169564;
        case 0x169568u: goto label_169568;
        case 0x16956cu: goto label_16956c;
        case 0x169570u: goto label_169570;
        case 0x169574u: goto label_169574;
        case 0x169578u: goto label_169578;
        case 0x16957cu: goto label_16957c;
        case 0x169580u: goto label_169580;
        case 0x169584u: goto label_169584;
        case 0x169588u: goto label_169588;
        case 0x16958cu: goto label_16958c;
        case 0x169590u: goto label_169590;
        case 0x169594u: goto label_169594;
        case 0x169598u: goto label_169598;
        case 0x16959cu: goto label_16959c;
        case 0x1695a0u: goto label_1695a0;
        case 0x1695a4u: goto label_1695a4;
        case 0x1695a8u: goto label_1695a8;
        case 0x1695acu: goto label_1695ac;
        case 0x1695b0u: goto label_1695b0;
        case 0x1695b4u: goto label_1695b4;
        case 0x1695b8u: goto label_1695b8;
        case 0x1695bcu: goto label_1695bc;
        case 0x1695c0u: goto label_1695c0;
        case 0x1695c4u: goto label_1695c4;
        case 0x1695c8u: goto label_1695c8;
        case 0x1695ccu: goto label_1695cc;
        case 0x1695d0u: goto label_1695d0;
        case 0x1695d4u: goto label_1695d4;
        case 0x1695d8u: goto label_1695d8;
        case 0x1695dcu: goto label_1695dc;
        case 0x1695e0u: goto label_1695e0;
        case 0x1695e4u: goto label_1695e4;
        case 0x1695e8u: goto label_1695e8;
        case 0x1695ecu: goto label_1695ec;
        case 0x1695f0u: goto label_1695f0;
        case 0x1695f4u: goto label_1695f4;
        case 0x1695f8u: goto label_1695f8;
        case 0x1695fcu: goto label_1695fc;
        case 0x169600u: goto label_169600;
        case 0x169604u: goto label_169604;
        case 0x169608u: goto label_169608;
        case 0x16960cu: goto label_16960c;
        case 0x169610u: goto label_169610;
        case 0x169614u: goto label_169614;
        case 0x169618u: goto label_169618;
        case 0x16961cu: goto label_16961c;
        case 0x169620u: goto label_169620;
        case 0x169624u: goto label_169624;
        case 0x169628u: goto label_169628;
        case 0x16962cu: goto label_16962c;
        case 0x169630u: goto label_169630;
        case 0x169634u: goto label_169634;
        case 0x169638u: goto label_169638;
        case 0x16963cu: goto label_16963c;
        case 0x169640u: goto label_169640;
        case 0x169644u: goto label_169644;
        case 0x169648u: goto label_169648;
        case 0x16964cu: goto label_16964c;
        case 0x169650u: goto label_169650;
        case 0x169654u: goto label_169654;
        case 0x169658u: goto label_169658;
        case 0x16965cu: goto label_16965c;
        case 0x169660u: goto label_169660;
        case 0x169664u: goto label_169664;
        case 0x169668u: goto label_169668;
        case 0x16966cu: goto label_16966c;
        case 0x169670u: goto label_169670;
        case 0x169674u: goto label_169674;
        case 0x169678u: goto label_169678;
        case 0x16967cu: goto label_16967c;
        case 0x169680u: goto label_169680;
        case 0x169684u: goto label_169684;
        case 0x169688u: goto label_169688;
        case 0x16968cu: goto label_16968c;
        case 0x169690u: goto label_169690;
        case 0x169694u: goto label_169694;
        case 0x169698u: goto label_169698;
        case 0x16969cu: goto label_16969c;
        case 0x1696a0u: goto label_1696a0;
        case 0x1696a4u: goto label_1696a4;
        case 0x1696a8u: goto label_1696a8;
        case 0x1696acu: goto label_1696ac;
        case 0x1696b0u: goto label_1696b0;
        case 0x1696b4u: goto label_1696b4;
        case 0x1696b8u: goto label_1696b8;
        case 0x1696bcu: goto label_1696bc;
        case 0x1696c0u: goto label_1696c0;
        case 0x1696c4u: goto label_1696c4;
        case 0x1696c8u: goto label_1696c8;
        case 0x1696ccu: goto label_1696cc;
        case 0x1696d0u: goto label_1696d0;
        case 0x1696d4u: goto label_1696d4;
        case 0x1696d8u: goto label_1696d8;
        case 0x1696dcu: goto label_1696dc;
        case 0x1696e0u: goto label_1696e0;
        case 0x1696e4u: goto label_1696e4;
        case 0x1696e8u: goto label_1696e8;
        case 0x1696ecu: goto label_1696ec;
        case 0x1696f0u: goto label_1696f0;
        case 0x1696f4u: goto label_1696f4;
        case 0x1696f8u: goto label_1696f8;
        case 0x1696fcu: goto label_1696fc;
        case 0x169700u: goto label_169700;
        case 0x169704u: goto label_169704;
        case 0x169708u: goto label_169708;
        case 0x16970cu: goto label_16970c;
        case 0x169710u: goto label_169710;
        case 0x169714u: goto label_169714;
        case 0x169718u: goto label_169718;
        case 0x16971cu: goto label_16971c;
        case 0x169720u: goto label_169720;
        case 0x169724u: goto label_169724;
        case 0x169728u: goto label_169728;
        case 0x16972cu: goto label_16972c;
        case 0x169730u: goto label_169730;
        case 0x169734u: goto label_169734;
        case 0x169738u: goto label_169738;
        case 0x16973cu: goto label_16973c;
        case 0x169740u: goto label_169740;
        case 0x169744u: goto label_169744;
        case 0x169748u: goto label_169748;
        case 0x16974cu: goto label_16974c;
        case 0x169750u: goto label_169750;
        case 0x169754u: goto label_169754;
        case 0x169758u: goto label_169758;
        case 0x16975cu: goto label_16975c;
        case 0x169760u: goto label_169760;
        case 0x169764u: goto label_169764;
        case 0x169768u: goto label_169768;
        case 0x16976cu: goto label_16976c;
        case 0x169770u: goto label_169770;
        case 0x169774u: goto label_169774;
        case 0x169778u: goto label_169778;
        case 0x16977cu: goto label_16977c;
        case 0x169780u: goto label_169780;
        case 0x169784u: goto label_169784;
        case 0x169788u: goto label_169788;
        case 0x16978cu: goto label_16978c;
        case 0x169790u: goto label_169790;
        case 0x169794u: goto label_169794;
        case 0x169798u: goto label_169798;
        case 0x16979cu: goto label_16979c;
        case 0x1697a0u: goto label_1697a0;
        case 0x1697a4u: goto label_1697a4;
        case 0x1697a8u: goto label_1697a8;
        case 0x1697acu: goto label_1697ac;
        case 0x1697b0u: goto label_1697b0;
        case 0x1697b4u: goto label_1697b4;
        case 0x1697b8u: goto label_1697b8;
        case 0x1697bcu: goto label_1697bc;
        case 0x1697c0u: goto label_1697c0;
        case 0x1697c4u: goto label_1697c4;
        case 0x1697c8u: goto label_1697c8;
        case 0x1697ccu: goto label_1697cc;
        case 0x1697d0u: goto label_1697d0;
        case 0x1697d4u: goto label_1697d4;
        case 0x1697d8u: goto label_1697d8;
        case 0x1697dcu: goto label_1697dc;
        case 0x1697e0u: goto label_1697e0;
        case 0x1697e4u: goto label_1697e4;
        case 0x1697e8u: goto label_1697e8;
        case 0x1697ecu: goto label_1697ec;
        case 0x1697f0u: goto label_1697f0;
        case 0x1697f4u: goto label_1697f4;
        case 0x1697f8u: goto label_1697f8;
        case 0x1697fcu: goto label_1697fc;
        case 0x169800u: goto label_169800;
        case 0x169804u: goto label_169804;
        case 0x169808u: goto label_169808;
        case 0x16980cu: goto label_16980c;
        case 0x169810u: goto label_169810;
        case 0x169814u: goto label_169814;
        case 0x169818u: goto label_169818;
        case 0x16981cu: goto label_16981c;
        case 0x169820u: goto label_169820;
        case 0x169824u: goto label_169824;
        case 0x169828u: goto label_169828;
        case 0x16982cu: goto label_16982c;
        case 0x169830u: goto label_169830;
        case 0x169834u: goto label_169834;
        case 0x169838u: goto label_169838;
        case 0x16983cu: goto label_16983c;
        case 0x169840u: goto label_169840;
        case 0x169844u: goto label_169844;
        case 0x169848u: goto label_169848;
        case 0x16984cu: goto label_16984c;
        case 0x169850u: goto label_169850;
        case 0x169854u: goto label_169854;
        case 0x169858u: goto label_169858;
        case 0x16985cu: goto label_16985c;
        case 0x169860u: goto label_169860;
        case 0x169864u: goto label_169864;
        case 0x169868u: goto label_169868;
        case 0x16986cu: goto label_16986c;
        case 0x169870u: goto label_169870;
        case 0x169874u: goto label_169874;
        case 0x169878u: goto label_169878;
        case 0x16987cu: goto label_16987c;
        case 0x169880u: goto label_169880;
        case 0x169884u: goto label_169884;
        case 0x169888u: goto label_169888;
        case 0x16988cu: goto label_16988c;
        case 0x169890u: goto label_169890;
        case 0x169894u: goto label_169894;
        case 0x169898u: goto label_169898;
        case 0x16989cu: goto label_16989c;
        case 0x1698a0u: goto label_1698a0;
        case 0x1698a4u: goto label_1698a4;
        case 0x1698a8u: goto label_1698a8;
        case 0x1698acu: goto label_1698ac;
        case 0x1698b0u: goto label_1698b0;
        case 0x1698b4u: goto label_1698b4;
        case 0x1698b8u: goto label_1698b8;
        case 0x1698bcu: goto label_1698bc;
        case 0x1698c0u: goto label_1698c0;
        case 0x1698c4u: goto label_1698c4;
        case 0x1698c8u: goto label_1698c8;
        case 0x1698ccu: goto label_1698cc;
        case 0x1698d0u: goto label_1698d0;
        case 0x1698d4u: goto label_1698d4;
        case 0x1698d8u: goto label_1698d8;
        case 0x1698dcu: goto label_1698dc;
        case 0x1698e0u: goto label_1698e0;
        case 0x1698e4u: goto label_1698e4;
        case 0x1698e8u: goto label_1698e8;
        case 0x1698ecu: goto label_1698ec;
        case 0x1698f0u: goto label_1698f0;
        case 0x1698f4u: goto label_1698f4;
        case 0x1698f8u: goto label_1698f8;
        case 0x1698fcu: goto label_1698fc;
        case 0x169900u: goto label_169900;
        case 0x169904u: goto label_169904;
        case 0x169908u: goto label_169908;
        case 0x16990cu: goto label_16990c;
        case 0x169910u: goto label_169910;
        case 0x169914u: goto label_169914;
        case 0x169918u: goto label_169918;
        case 0x16991cu: goto label_16991c;
        case 0x169920u: goto label_169920;
        case 0x169924u: goto label_169924;
        case 0x169928u: goto label_169928;
        case 0x16992cu: goto label_16992c;
        case 0x169930u: goto label_169930;
        case 0x169934u: goto label_169934;
        case 0x169938u: goto label_169938;
        case 0x16993cu: goto label_16993c;
        case 0x169940u: goto label_169940;
        case 0x169944u: goto label_169944;
        case 0x169948u: goto label_169948;
        case 0x16994cu: goto label_16994c;
        default: return;
    }

label_169180:
    // 0x169180: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x169180u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
label_169184:
    // 0x169184: 0xc06614a  jal         func_198528
label_169188:
    if (ctx->pc == 0x169188u) {
        ctx->pc = 0x169188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169184u;
        // 0x169188: 0xfcc20050  sd          $v0, 0x50($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16918Cu;
        goto label_16918c;
    }
    ctx->pc = 0x169184u;
    SET_GPR_U32(ctx, 31, 0x16918Cu);
    ctx->pc = 0x169188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169184u;
    // 0x169188: 0xfcc20050  sd          $v0, 0x50($a2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198528u;
    { ctx->pc = 0x198528; return; }
    ctx->pc = 0x16918Cu;
label_16918c:
    // 0x16918c: 0xc06614a  jal         func_198528
label_169190:
    if (ctx->pc == 0x169190u) {
        ctx->pc = 0x169190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16918Cu;
        // 0x169190: 0x945e0004  lhu         $fp, 0x4($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169194u;
        goto label_169194;
    }
    ctx->pc = 0x16918Cu;
    SET_GPR_U32(ctx, 31, 0x169194u);
    ctx->pc = 0x169190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16918Cu;
    // 0x169190: 0x945e0004  lhu         $fp, 0x4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198528u;
    { ctx->pc = 0x198528; return; }
    ctx->pc = 0x169194u;
label_169194:
    // 0x169194: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x169194u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
label_169198:
    // 0x169198: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16919c:
    // 0x16919c: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x16919cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1691a0:
    // 0x1691a0: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1691a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1691a4:
    // 0x1691a4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1691a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1691a8:
    // 0x1691a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1691a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1691ac:
    // 0x1691ac: 0x24090032  addiu       $t1, $zero, 0x32
    ctx->pc = 0x1691acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1691b0:
    // 0x1691b0: 0xc0668b8  jal         func_19A2E0
label_1691b4:
    if (ctx->pc == 0x1691B4u) {
        ctx->pc = 0x1691B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691B0u;
        // 0x1691b4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1691B8u;
        goto label_1691b8;
    }
    ctx->pc = 0x1691B0u;
    SET_GPR_U32(ctx, 31, 0x1691B8u);
    ctx->pc = 0x1691B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1691B0u;
    // 0x1691b4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A2E0u;
    { ctx->pc = 0x19a2e0; return; }
    ctx->pc = 0x1691B8u;
label_1691b8:
    // 0x1691b8: 0x8f8887b0  lw          $t0, -0x7850($gp)
    ctx->pc = 0x1691b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1691bc:
    // 0x1691bc: 0x3c04ff80  lui         $a0, 0xFF80
    ctx->pc = 0x1691bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65408 << 16));
label_1691c0:
    // 0x1691c0: 0x34850fff  ori         $a1, $a0, 0xFFF
    ctx->pc = 0x1691c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4095);
label_1691c4:
    // 0x1691c4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1691c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1691c8:
    // 0x1691c8: 0x30070001  andi        $a3, $zero, 0x1
    ctx->pc = 0x1691c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_1691cc:
    // 0x1691cc: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x1691ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
label_1691d0:
    // 0x1691d0: 0x2406f000  addiu       $a2, $zero, -0x1000
    ctx->pc = 0x1691d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_1691d4:
    // 0x1691d4: 0x910402b0  lbu         $a0, 0x2B0($t0)
    ctx->pc = 0x1691d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 688)));
label_1691d8:
    // 0x1691d8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1691d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1691dc:
    // 0x1691dc: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x1691dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_1691e0:
    // 0x1691e0: 0xa10402b0  sb          $a0, 0x2B0($t0)
    ctx->pc = 0x1691e0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 688), (uint8_t)GPR_U32(ctx, 4));
label_1691e4:
    // 0x1691e4: 0x8f8787b0  lw          $a3, -0x7850($gp)
    ctx->pc = 0x1691e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1691e8:
    // 0x1691e8: 0x30880001  andi        $t0, $a0, 0x1
    ctx->pc = 0x1691e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1691ec:
    // 0x1691ec: 0x90e40140  lbu         $a0, 0x140($a3)
    ctx->pc = 0x1691ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 320)));
label_1691f0:
    // 0x1691f0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1691f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1691f4:
    // 0x1691f4: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x1691f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_1691f8:
    // 0x1691f8: 0xa0e40140  sb          $a0, 0x140($a3)
    ctx->pc = 0x1691f8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 320), (uint8_t)GPR_U32(ctx, 4));
label_1691fc:
    // 0x1691fc: 0x30880001  andi        $t0, $a0, 0x1
    ctx->pc = 0x1691fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_169200:
    // 0x169200: 0x8f8787b0  lw          $a3, -0x7850($gp)
    ctx->pc = 0x169200u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_169204:
    // 0x169204: 0x90e40230  lbu         $a0, 0x230($a3)
    ctx->pc = 0x169204u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 560)));
label_169208:
    // 0x169208: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x169208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16920c:
    // 0x16920c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x16920cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_169210:
    // 0x169210: 0xa0e40230  sb          $a0, 0x230($a3)
    ctx->pc = 0x169210u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 560), (uint8_t)GPR_U32(ctx, 4));
label_169214:
    // 0x169214: 0x30880001  andi        $t0, $a0, 0x1
    ctx->pc = 0x169214u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_169218:
    // 0x169218: 0x8f8787b0  lw          $a3, -0x7850($gp)
    ctx->pc = 0x169218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_16921c:
    // 0x16921c: 0x90e400c0  lbu         $a0, 0xC0($a3)
    ctx->pc = 0x16921cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 192)));
label_169220:
    // 0x169220: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x169220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_169224:
    // 0x169224: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x169224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_169228:
    // 0x169228: 0xa0e300c0  sb          $v1, 0xC0($a3)
    ctx->pc = 0x169228u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 192), (uint8_t)GPR_U32(ctx, 3));
label_16922c:
    // 0x16922c: 0x8f8787b0  lw          $a3, -0x7850($gp)
    ctx->pc = 0x16922cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_169230:
    // 0x169230: 0x94e40070  lhu         $a0, 0x70($a3)
    ctx->pc = 0x169230u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 112)));
label_169234:
    // 0x169234: 0x94e30038  lhu         $v1, 0x38($a3)
    ctx->pc = 0x169234u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 56)));
label_169238:
    // 0x169238: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x169238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
label_16923c:
    // 0x16923c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x16923cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_169240:
    // 0x169240: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x169240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_169244:
    // 0x169244: 0xa4e30038  sh          $v1, 0x38($a3)
    ctx->pc = 0x169244u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 56), (uint16_t)GPR_U32(ctx, 3));
label_169248:
    // 0x169248: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x169248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_16924c:
    // 0x16924c: 0x306701ff  andi        $a3, $v1, 0x1FF
    ctx->pc = 0x16924cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
label_169250:
    // 0x169250: 0x948300e0  lhu         $v1, 0xE0($a0)
    ctx->pc = 0x169250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 224)));
label_169254:
    // 0x169254: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x169254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_169258:
    // 0x169258: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x169258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_16925c:
    // 0x16925c: 0xa48300e0  sh          $v1, 0xE0($a0)
    ctx->pc = 0x16925cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 224), (uint16_t)GPR_U32(ctx, 3));
label_169260:
    // 0x169260: 0x306701ff  andi        $a3, $v1, 0x1FF
    ctx->pc = 0x169260u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
label_169264:
    // 0x169264: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x169264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_169268:
    // 0x169268: 0x94830060  lhu         $v1, 0x60($a0)
    ctx->pc = 0x169268u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
label_16926c:
    // 0x16926c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x16926cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_169270:
    // 0x169270: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x169270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_169274:
    // 0x169274: 0xa4830060  sh          $v1, 0x60($a0)
    ctx->pc = 0x169274u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 3));
label_169278:
    // 0x169278: 0x8f8787b0  lw          $a3, -0x7850($gp)
    ctx->pc = 0x169278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_16927c:
    // 0x16927c: 0x94e40070  lhu         $a0, 0x70($a3)
    ctx->pc = 0x16927cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 112)));
label_169280:
    // 0x169280: 0x94e30260  lhu         $v1, 0x260($a3)
    ctx->pc = 0x169280u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 608)));
label_169284:
    // 0x169284: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x169284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
label_169288:
    // 0x169288: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x169288u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_16928c:
    // 0x16928c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x16928cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_169290:
    // 0x169290: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x169290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
label_169294:
    // 0x169294: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x169294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_169298:
    // 0x169298: 0xa4e30260  sh          $v1, 0x260($a3)
    ctx->pc = 0x169298u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 608), (uint16_t)GPR_U32(ctx, 3));
label_16929c:
    // 0x16929c: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x16929cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1692a0:
    // 0x1692a0: 0x306701ff  andi        $a3, $v1, 0x1FF
    ctx->pc = 0x1692a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
label_1692a4:
    // 0x1692a4: 0x948300f0  lhu         $v1, 0xF0($a0)
    ctx->pc = 0x1692a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 240)));
label_1692a8:
    // 0x1692a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1692a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1692ac:
    // 0x1692ac: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1692acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_1692b0:
    // 0x1692b0: 0xa48300f0  sh          $v1, 0xF0($a0)
    ctx->pc = 0x1692b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 240), (uint16_t)GPR_U32(ctx, 3));
label_1692b4:
    // 0x1692b4: 0x306701ff  andi        $a3, $v1, 0x1FF
    ctx->pc = 0x1692b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
label_1692b8:
    // 0x1692b8: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x1692b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1692bc:
    // 0x1692bc: 0x948301e0  lhu         $v1, 0x1E0($a0)
    ctx->pc = 0x1692bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 480)));
label_1692c0:
    // 0x1692c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1692c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1692c4:
    // 0x1692c4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1692c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_1692c8:
    // 0x1692c8: 0xa48301e0  sh          $v1, 0x1E0($a0)
    ctx->pc = 0x1692c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 480), (uint16_t)GPR_U32(ctx, 3));
label_1692cc:
    // 0x1692cc: 0x306701ff  andi        $a3, $v1, 0x1FF
    ctx->pc = 0x1692ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
label_1692d0:
    // 0x1692d0: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x1692d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1692d4:
    // 0x1692d4: 0x94830070  lhu         $v1, 0x70($a0)
    ctx->pc = 0x1692d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 112)));
label_1692d8:
    // 0x1692d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1692d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1692dc:
    // 0x1692dc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1692dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_1692e0:
    // 0x1692e0: 0xa4820070  sh          $v0, 0x70($a0)
    ctx->pc = 0x1692e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 2));
label_1692e4:
    // 0x1692e4: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x1692e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1692e8:
    // 0x1692e8: 0x94440042  lhu         $a0, 0x42($v0)
    ctx->pc = 0x1692e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
label_1692ec:
    // 0x1692ec: 0x94430040  lhu         $v1, 0x40($v0)
    ctx->pc = 0x1692ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1692f0:
    // 0x1692f0: 0x4257c  dsll32      $a0, $a0, 21
    ctx->pc = 0x1692f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 21));
label_1692f4:
    // 0x1692f4: 0x43f3e  dsrl32      $a3, $a0, 28
    ctx->pc = 0x1692f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) >> (32 + 28));
label_1692f8:
    // 0x1692f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1692f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1692fc:
    // 0x1692fc: 0x30640fff  andi        $a0, $v1, 0xFFF
    ctx->pc = 0x1692fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_169300:
    // 0x169300: 0x2c73818  mult        $a3, $s6, $a3
    ctx->pc = 0x169300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_169304:
    // 0x169304: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x169304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_169308:
    // 0x169308: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x169308u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_16930c:
    // 0x16930c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x16930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_169310:
    // 0x169310: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x169310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_169314:
    // 0x169314: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x169314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_169318:
    // 0x169318: 0xa4430040  sh          $v1, 0x40($v0)
    ctx->pc = 0x169318u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 3));
label_16931c:
    // 0x16931c: 0x30640fff  andi        $a0, $v1, 0xFFF
    ctx->pc = 0x16931cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_169320:
    // 0x169320: 0x8f8387b0  lw          $v1, -0x7850($gp)
    ctx->pc = 0x169320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_169324:
    // 0x169324: 0x94620018  lhu         $v0, 0x18($v1)
    ctx->pc = 0x169324u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_169328:
    // 0x169328: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x169328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_16932c:
    // 0x16932c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x16932cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_169330:
    // 0x169330: 0xa4620018  sh          $v0, 0x18($v1)
    ctx->pc = 0x169330u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 2));
label_169334:
    // 0x169334: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x169334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_169338:
    // 0x169338: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x169338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_16933c:
    // 0x16933c: 0x21a7c  dsll32      $v1, $v0, 9
    ctx->pc = 0x16933cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 9));
label_169340:
    // 0x169340: 0x31d7e  dsrl32      $v1, $v1, 21
    ctx->pc = 0x169340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 21));
label_169344:
    // 0x169344: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x169344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_169348:
    // 0x169348: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x169348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_16934c:
    // 0x16934c: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x16934cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
label_169350:
    // 0x169350: 0x31b00  sll         $v1, $v1, 12
    ctx->pc = 0x169350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
label_169354:
    // 0x169354: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x169354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_169358:
    // 0x169358: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x169358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_16935c:
    // 0x16935c: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x16935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_169360:
    // 0x169360: 0x2127c  dsll32      $v0, $v0, 9
    ctx->pc = 0x169360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 9));
label_169364:
    // 0x169364: 0x2157e  dsrl32      $v0, $v0, 21
    ctx->pc = 0x169364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 21));
label_169368:
    // 0x169368: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x169368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_16936c:
    // 0x16936c: 0x21b00  sll         $v1, $v0, 12
    ctx->pc = 0x16936cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
label_169370:
    // 0x169370: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x169370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_169374:
    // 0x169374: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x169374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_169378:
    // 0x169378: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x169378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_16937c:
    // 0x16937c: 0xc06614a  jal         func_198528
label_169380:
    if (ctx->pc == 0x169380u) {
        ctx->pc = 0x169380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16937Cu;
        // 0x169380: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169384u;
        goto label_169384;
    }
    ctx->pc = 0x16937Cu;
    SET_GPR_U32(ctx, 31, 0x169384u);
    ctx->pc = 0x169380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16937Cu;
    // 0x169380: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198528u;
    { ctx->pc = 0x198528; return; }
    ctx->pc = 0x169384u;
label_169384:
    // 0x169384: 0xa45e0004  sh          $fp, 0x4($v0)
    ctx->pc = 0x169384u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 30));
label_169388:
    // 0x169388: 0xc0692a8  jal         func_1A4AA0
label_16938c:
    if (ctx->pc == 0x16938Cu) {
        ctx->pc = 0x16938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169388u;
        // 0x16938c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169390u;
        goto label_169390;
    }
    ctx->pc = 0x169388u;
    SET_GPR_U32(ctx, 31, 0x169390u);
    ctx->pc = 0x16938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169388u;
    // 0x16938c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x169390u;
label_169390:
    // 0x169390: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x169390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_169394:
    // 0x169394: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x169394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_169398:
    // 0x169398: 0xac2304b4  sw          $v1, 0x4B4($at)
    ctx->pc = 0x169398u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1204), GPR_U32(ctx, 3));
label_16939c:
    // 0x16939c: 0x3c043f7f  lui         $a0, 0x3F7F
    ctx->pc = 0x16939cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16255 << 16));
label_1693a0:
    // 0x1693a0: 0x8f8387b0  lw          $v1, -0x7850($gp)
    ctx->pc = 0x1693a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1693a4:
    // 0x1693a4: 0x348cbe76  ori         $t4, $a0, 0xBE76
    ctx->pc = 0x1693a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)48758);
label_1693a8:
    // 0x1693a8: 0x3c0b0017  lui         $t3, 0x17
    ctx->pc = 0x1693a8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)23 << 16));
label_1693ac:
    // 0x1693ac: 0x3c0a0017  lui         $t2, 0x17
    ctx->pc = 0x1693acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)23 << 16));
label_1693b0:
    // 0x1693b0: 0x3c090017  lui         $t1, 0x17
    ctx->pc = 0x1693b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)23 << 16));
label_1693b4:
    // 0x1693b4: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x1693b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
label_1693b8:
    // 0x1693b8: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1693b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
label_1693bc:
    // 0x1693bc: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x1693bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1693c0:
    // 0x1693c0: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1693c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1693c4:
    // 0x1693c4: 0x241601e0  addiu       $s6, $zero, 0x1E0
    ctx->pc = 0x1693c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_1693c8:
    // 0x1693c8: 0xac2204b0  sw          $v0, 0x4B0($at)
    ctx->pc = 0x1693c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1200), GPR_U32(ctx, 2));
label_1693cc:
    // 0x1693cc: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x1693ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1693d0:
    // 0x1693d0: 0x94770060  lhu         $s7, 0x60($v1)
    ctx->pc = 0x1693d0u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_1693d4:
    // 0x1693d4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1693d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1693d8:
    // 0x1693d8: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1693d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1693dc:
    // 0x1693dc: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x1693dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1693e0:
    // 0x1693e0: 0x256b9610  addiu       $t3, $t3, -0x69F0
    ctx->pc = 0x1693e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294940176));
label_1693e4:
    // 0x1693e4: 0x254a9550  addiu       $t2, $t2, -0x6AB0
    ctx->pc = 0x1693e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294939984));
label_1693e8:
    // 0x1693e8: 0x25299700  addiu       $t1, $t1, -0x6900
    ctx->pc = 0x1693e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294940416));
label_1693ec:
    // 0x1693ec: 0x25080200  addiu       $t0, $t0, 0x200
    ctx->pc = 0x1693ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
label_1693f0:
    // 0x1693f0: 0x24c600e0  addiu       $a2, $a2, 0xE0
    ctx->pc = 0x1693f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
label_1693f4:
    // 0x1693f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1693f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1693f8:
    // 0x1693f8: 0x32840100  andi        $a0, $s4, 0x100
    ctx->pc = 0x1693f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
label_1693fc:
    // 0x1693fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1693fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169400:
    // 0x169400: 0x32f701ff  andi        $s7, $s7, 0x1FF
    ctx->pc = 0x169400u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)511);
label_169404:
    // 0x169404: 0x17b940  sll         $s7, $s7, 5
    ctx->pc = 0x169404u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
label_169408:
    // 0x169408: 0xac3704b8  sw          $s7, 0x4B8($at)
    ctx->pc = 0x169408u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1208), GPR_U32(ctx, 23));
label_16940c:
    // 0x16940c: 0x947701d0  lhu         $s7, 0x1D0($v1)
    ctx->pc = 0x16940cu;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 464)));
label_169410:
    // 0x169410: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x169410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_169414:
    // 0x169414: 0x32f701ff  andi        $s7, $s7, 0x1FF
    ctx->pc = 0x169414u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)511);
label_169418:
    // 0x169418: 0x17b940  sll         $s7, $s7, 5
    ctx->pc = 0x169418u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
label_16941c:
    // 0x16941c: 0xac3704bc  sw          $s7, 0x4BC($at)
    ctx->pc = 0x16941cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1212), GPR_U32(ctx, 23));
label_169420:
    // 0x169420: 0x90630062  lbu         $v1, 0x62($v1)
    ctx->pc = 0x169420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 98)));
label_169424:
    // 0x169424: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x169424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_169428:
    // 0x169428: 0xac2204c4  sw          $v0, 0x4C4($at)
    ctx->pc = 0x169428u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1220), GPR_U32(ctx, 2));
label_16942c:
    // 0x16942c: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x16942cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_169430:
    // 0x169430: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x169430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_169434:
    // 0x169434: 0xac2204c0  sw          $v0, 0x4C0($at)
    ctx->pc = 0x169434u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1216), GPR_U32(ctx, 2));
label_169438:
    // 0x169438: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x169438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_16943c:
    // 0x16943c: 0xaf9486ec  sw          $s4, -0x7914($gp)
    ctx->pc = 0x16943cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936300), GPR_U32(ctx, 20));
label_169440:
    // 0x169440: 0xac3604c8  sw          $s6, 0x4C8($at)
    ctx->pc = 0x169440u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1224), GPR_U32(ctx, 22));
label_169444:
    // 0x169444: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x169444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_169448:
    // 0x169448: 0xa03104cc  sb          $s1, 0x4CC($at)
    ctx->pc = 0x169448u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 1228), (uint8_t)GPR_U32(ctx, 17));
label_16944c:
    // 0x16944c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x16944cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_169450:
    // 0x169450: 0xa02f04cd  sb          $t7, 0x4CD($at)
    ctx->pc = 0x169450u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 1229), (uint8_t)GPR_U32(ctx, 15));
label_169454:
    // 0x169454: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x169454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_169458:
    // 0x169458: 0xa02e04ce  sb          $t6, 0x4CE($at)
    ctx->pc = 0x169458u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 1230), (uint8_t)GPR_U32(ctx, 14));
label_16945c:
    // 0x16945c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x16945cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_169460:
    // 0x169460: 0xa02d04cf  sb          $t5, 0x4CF($at)
    ctx->pc = 0x169460u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 1231), (uint8_t)GPR_U32(ctx, 13));
label_169464:
    // 0x169464: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x169464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_169468:
    // 0x169468: 0xac2c04d0  sw          $t4, 0x4D0($at)
    ctx->pc = 0x169468u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1232), GPR_U32(ctx, 12));
label_16946c:
    // 0x16946c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x16946cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_169470:
    // 0x169470: 0xac2b04d4  sw          $t3, 0x4D4($at)
    ctx->pc = 0x169470u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1236), GPR_U32(ctx, 11));
label_169474:
    // 0x169474: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x169474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_169478:
    // 0x169478: 0xac2a04d8  sw          $t2, 0x4D8($at)
    ctx->pc = 0x169478u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1240), GPR_U32(ctx, 10));
label_16947c:
    // 0x16947c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x16947cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_169480:
    // 0x169480: 0xac3004e0  sw          $s0, 0x4E0($at)
    ctx->pc = 0x169480u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1248), GPR_U32(ctx, 16));
label_169484:
    // 0x169484: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x169484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_169488:
    // 0x169488: 0xac3504e4  sw          $s5, 0x4E4($at)
    ctx->pc = 0x169488u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1252), GPR_U32(ctx, 21));
label_16948c:
    // 0x16948c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x16948cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_169490:
    // 0x169490: 0xac2904e8  sw          $t1, 0x4E8($at)
    ctx->pc = 0x169490u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1256), GPR_U32(ctx, 9));
label_169494:
    // 0x169494: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x169494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_169498:
    // 0x169498: 0xac2804ec  sw          $t0, 0x4EC($at)
    ctx->pc = 0x169498u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1260), GPR_U32(ctx, 8));
label_16949c:
    // 0x16949c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x16949cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1694a0:
    // 0x1694a0: 0xac2604f0  sw          $a2, 0x4F0($at)
    ctx->pc = 0x1694a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1264), GPR_U32(ctx, 6));
label_1694a4:
    // 0x1694a4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1694a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1694a8:
    // 0x1694a8: 0xac2004dc  sw          $zero, 0x4DC($at)
    ctx->pc = 0x1694a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1244), GPR_U32(ctx, 0));
label_1694ac:
    // 0x1694ac: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1694acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1694b0:
    // 0x1694b0: 0xac2504f4  sw          $a1, 0x4F4($at)
    ctx->pc = 0x1694b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1268), GPR_U32(ctx, 5));
label_1694b4:
    // 0x1694b4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1694b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1694b8:
    // 0x1694b8: 0xac250500  sw          $a1, 0x500($at)
    ctx->pc = 0x1694b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1280), GPR_U32(ctx, 5));
label_1694bc:
    // 0x1694bc: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1694bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1694c0:
    // 0x1694c0: 0xac2004f8  sw          $zero, 0x4F8($at)
    ctx->pc = 0x1694c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1272), GPR_U32(ctx, 0));
label_1694c4:
    // 0x1694c4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1694c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1694c8:
    // 0x1694c8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_1694cc:
    if (ctx->pc == 0x1694CCu) {
        ctx->pc = 0x1694CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694C8u;
        // 0x1694cc: 0xac2004fc  sw          $zero, 0x4FC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1694D0u;
        goto label_1694d0;
    }
    ctx->pc = 0x1694C8u;
    {
        const bool branch_taken_0x1694c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1694CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694C8u;
        // 0x1694cc: 0xac2004fc  sw          $zero, 0x4FC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694c8) {
            ctx->pc = 0x1694D4u;
            goto label_1694d4;
        }
    }
    ctx->pc = 0x1694D0u;
label_1694d0:
    // 0x1694d0: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x1694d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
label_1694d4:
    // 0x1694d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1694d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1694d8:
    // 0x1694d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1694d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1694dc:
    // 0x1694dc: 0xc08c318  jal         func_230C60
label_1694e0:
    if (ctx->pc == 0x1694E0u) {
        ctx->pc = 0x1694E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694DCu;
        // 0x1694e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1694E4u;
        goto label_1694e4;
    }
    ctx->pc = 0x1694DCu;
    SET_GPR_U32(ctx, 31, 0x1694E4u);
    ctx->pc = 0x1694E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1694DCu;
    // 0x1694e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230C60u;
    { ctx->pc = 0x230c60; return; }
    ctx->pc = 0x1694E4u;
label_1694e4:
    // 0x1694e4: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x1694e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1694e8:
    // 0x1694e8: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x1694e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_1694ec:
    // 0x1694ec: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x1694ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_1694f0:
    // 0x1694f0: 0x24e704b0  addiu       $a3, $a3, 0x4B0
    ctx->pc = 0x1694f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1200));
label_1694f4:
    // 0x1694f4: 0x79050010  lq          $a1, 0x10($t0)
    ctx->pc = 0x1694f4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 16)));
label_1694f8:
    // 0x1694f8: 0x79040020  lq          $a0, 0x20($t0)
    ctx->pc = 0x1694f8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 32)));
label_1694fc:
    // 0x1694fc: 0x79030030  lq          $v1, 0x30($t0)
    ctx->pc = 0x1694fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 48)));
label_169500:
    // 0x169500: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x169500u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_169504:
    // 0x169504: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x169504u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
label_169508:
    // 0x169508: 0x7ce40020  sq          $a0, 0x20($a3)
    ctx->pc = 0x169508u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 4));
label_16950c:
    // 0x16950c: 0x7ce30030  sq          $v1, 0x30($a3)
    ctx->pc = 0x16950cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 3));
label_169510:
    // 0x169510: 0x79040040  lq          $a0, 0x40($t0)
    ctx->pc = 0x169510u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 64)));
label_169514:
    // 0x169514: 0xdd030050  ld          $v1, 0x50($t0)
    ctx->pc = 0x169514u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 80)));
label_169518:
    // 0x169518: 0x7ce40040  sq          $a0, 0x40($a3)
    ctx->pc = 0x169518u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 64), GPR_VEC(ctx, 4));
label_16951c:
    // 0x16951c: 0xfce30050  sd          $v1, 0x50($a3)
    ctx->pc = 0x16951cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 80), GPR_U64(ctx, 3));
label_169520:
    // 0x169520: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x169520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_169524:
    // 0x169524: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x169524u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_169528:
    // 0x169528: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x169528u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16952c:
    // 0x16952c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16952cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_169530:
    // 0x169530: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x169530u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_169534:
    // 0x169534: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x169534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_169538:
    // 0x169538: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x169538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16953c:
    // 0x16953c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16953cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_169540:
    // 0x169540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_169544:
    // 0x169544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_169548:
    // 0x169548: 0x3e00008  jr          $ra
label_16954c:
    if (ctx->pc == 0x16954Cu) {
        ctx->pc = 0x16954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169548u;
        // 0x16954c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169550u;
        goto label_169550;
    }
    ctx->pc = 0x169548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169548u;
        // 0x16954c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169550u;
label_169550:
    // 0x169550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_169554:
    // 0x169554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_169558:
    // 0x169558: 0x8f8386ec  lw          $v1, -0x7914($gp)
    ctx->pc = 0x169558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936300)));
label_16955c:
    // 0x16955c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x16955cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_169560:
    // 0x169560: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_169564:
    if (ctx->pc == 0x169564u) {
        ctx->pc = 0x169564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169560u;
        // 0x169564: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169568u;
        goto label_169568;
    }
    ctx->pc = 0x169560u;
    {
        const bool branch_taken_0x169560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x169564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169560u;
        // 0x169564: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169560) {
            ctx->pc = 0x169604u;
            goto label_169604;
        }
    }
    ctx->pc = 0x169568u;
label_169568:
    // 0x169568: 0xc06641a  jal         func_199068
label_16956c:
    if (ctx->pc == 0x16956Cu) {
        ctx->pc = 0x169570u;
        goto label_169570;
    }
    ctx->pc = 0x169568u;
    SET_GPR_U32(ctx, 31, 0x169570u);
    ctx->pc = 0x199068u;
    { ctx->pc = 0x199068; return; }
    ctx->pc = 0x169570u;
label_169570:
    // 0x169570: 0x8f8687b0  lw          $a2, -0x7850($gp)
    ctx->pc = 0x169570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_169574:
    // 0x169574: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x169574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_169578:
    // 0x169578: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x169578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_16957c:
    // 0x16957c: 0x24a56620  addiu       $a1, $a1, 0x6620
    ctx->pc = 0x16957cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26144));
label_169580:
    // 0x169580: 0x24636670  addiu       $v1, $v1, 0x6670
    ctx->pc = 0x169580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26224));
label_169584:
    // 0x169584: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169588:
    // 0x169588: 0xdcc20060  ld          $v0, 0x60($a2)
    ctx->pc = 0x169588u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 96)));
label_16958c:
    // 0x16958c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x16958cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_169590:
    // 0x169590: 0xdcc201d0  ld          $v0, 0x1D0($a2)
    ctx->pc = 0x169590u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 464)));
label_169594:
    // 0x169594: 0xc0692a8  jal         func_1A4AA0
label_169598:
    if (ctx->pc == 0x169598u) {
        ctx->pc = 0x169598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169594u;
        // 0x169598: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16959Cu;
        goto label_16959c;
    }
    ctx->pc = 0x169594u;
    SET_GPR_U32(ctx, 31, 0x16959Cu);
    ctx->pc = 0x169598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169594u;
    // 0x169598: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x16959Cu;
label_16959c:
    // 0x16959c: 0xc06641a  jal         func_199068
label_1695a0:
    if (ctx->pc == 0x1695A0u) {
        ctx->pc = 0x1695A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16959Cu;
        // 0x1695a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1695A4u;
        goto label_1695a4;
    }
    ctx->pc = 0x16959Cu;
    SET_GPR_U32(ctx, 31, 0x1695A4u);
    ctx->pc = 0x1695A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16959Cu;
    // 0x1695a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    { ctx->pc = 0x199068; return; }
    ctx->pc = 0x1695A4u;
label_1695a4:
    // 0x1695a4: 0xc066998  jal         func_19A660
label_1695a8:
    if (ctx->pc == 0x1695A8u) {
        ctx->pc = 0x1695A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695A4u;
        // 0x1695a8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1695ACu;
        goto label_1695ac;
    }
    ctx->pc = 0x1695A4u;
    SET_GPR_U32(ctx, 31, 0x1695ACu);
    ctx->pc = 0x1695A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695A4u;
    // 0x1695a8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    { ctx->pc = 0x19a660; return; }
    ctx->pc = 0x1695ACu;
label_1695ac:
    // 0x1695ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1695acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1695b0:
    // 0x1695b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1695b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1695b4:
    // 0x1695b4: 0xc066bc0  jal         func_19AF00
label_1695b8:
    if (ctx->pc == 0x1695B8u) {
        ctx->pc = 0x1695B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695B4u;
        // 0x1695b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1695BCu;
        goto label_1695bc;
    }
    ctx->pc = 0x1695B4u;
    SET_GPR_U32(ctx, 31, 0x1695BCu);
    ctx->pc = 0x1695B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695B4u;
    // 0x1695b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AF00u;
    { ctx->pc = 0x19af00; return; }
    ctx->pc = 0x1695BCu;
label_1695bc:
    // 0x1695bc: 0xc066998  jal         func_19A660
label_1695c0:
    if (ctx->pc == 0x1695C0u) {
        ctx->pc = 0x1695C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695BCu;
        // 0x1695c0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1695C4u;
        goto label_1695c4;
    }
    ctx->pc = 0x1695BCu;
    SET_GPR_U32(ctx, 31, 0x1695C4u);
    ctx->pc = 0x1695C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695BCu;
    // 0x1695c0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    { ctx->pc = 0x19a660; return; }
    ctx->pc = 0x1695C4u;
label_1695c4:
    // 0x1695c4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1695c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1695c8:
    // 0x1695c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1695c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1695cc:
    // 0x1695cc: 0x24a565d0  addiu       $a1, $a1, 0x65D0
    ctx->pc = 0x1695ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26064));
label_1695d0:
    // 0x1695d0: 0xc066aa2  jal         func_19AA88
label_1695d4:
    if (ctx->pc == 0x1695D4u) {
        ctx->pc = 0x1695D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695D0u;
        // 0x1695d4: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1695D8u;
        goto label_1695d8;
    }
    ctx->pc = 0x1695D0u;
    SET_GPR_U32(ctx, 31, 0x1695D8u);
    ctx->pc = 0x1695D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695D0u;
    // 0x1695d4: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AA88u;
    { ctx->pc = 0x19aa88; return; }
    ctx->pc = 0x1695D8u;
label_1695d8:
    // 0x1695d8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1695d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1695dc:
    // 0x1695dc: 0x8c220508  lw          $v0, 0x508($at)
    ctx->pc = 0x1695dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1288)));
label_1695e0:
    // 0x1695e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1695e4:
    if (ctx->pc == 0x1695E4u) {
        ctx->pc = 0x1695E8u;
        goto label_1695e8;
    }
    ctx->pc = 0x1695E0u;
    {
        const bool branch_taken_0x1695e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1695e0) {
            ctx->pc = 0x1695F4u;
            goto label_1695f4;
        }
    }
    ctx->pc = 0x1695E8u;
label_1695e8:
    // 0x1695e8: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x1695e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1695ec:
    // 0x1695ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_1695f0:
    if (ctx->pc == 0x1695F0u) {
        ctx->pc = 0x1695F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695ECu;
        // 0x1695f0: 0x244401c0  addiu       $a0, $v0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1695F4u;
        goto label_1695f4;
    }
    ctx->pc = 0x1695ECu;
    {
        const bool branch_taken_0x1695ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1695F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1695ECu;
        // 0x1695f0: 0x244401c0  addiu       $a0, $v0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1695ec) {
            ctx->pc = 0x1695FCu;
            goto label_1695fc;
        }
    }
    ctx->pc = 0x1695F4u;
label_1695f4:
    // 0x1695f4: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x1695f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1695f8:
    // 0x1695f8: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x1695f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1695fc:
    // 0x1695fc: 0xc066322  jal         func_198C88
label_169600:
    if (ctx->pc == 0x169600u) {
        ctx->pc = 0x169604u;
        goto label_169604;
    }
    ctx->pc = 0x1695FCu;
    SET_GPR_U32(ctx, 31, 0x169604u);
    ctx->pc = 0x198C88u;
    { ctx->pc = 0x198c88; return; }
    ctx->pc = 0x169604u;
label_169604:
    // 0x169604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_169608:
    // 0x169608: 0x3e00008  jr          $ra
label_16960c:
    if (ctx->pc == 0x16960Cu) {
        ctx->pc = 0x16960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169608u;
        // 0x16960c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169610u;
        goto label_169610;
    }
    ctx->pc = 0x169608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169608u;
        // 0x16960c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169610u;
label_169610:
    // 0x169610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_169614:
    // 0x169614: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169618:
    // 0x169618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16961c:
    // 0x16961c: 0xc066440  jal         func_199100
label_169620:
    if (ctx->pc == 0x169620u) {
        ctx->pc = 0x169620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16961Cu;
        // 0x169620: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169624u;
        goto label_169624;
    }
    ctx->pc = 0x16961Cu;
    SET_GPR_U32(ctx, 31, 0x169624u);
    ctx->pc = 0x169620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16961Cu;
    // 0x169620: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    { ctx->pc = 0x199100; return; }
    ctx->pc = 0x169624u;
label_169624:
    // 0x169624: 0xc06641a  jal         func_199068
label_169628:
    if (ctx->pc == 0x169628u) {
        ctx->pc = 0x169628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169624u;
        // 0x169628: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16962Cu;
        goto label_16962c;
    }
    ctx->pc = 0x169624u;
    SET_GPR_U32(ctx, 31, 0x16962Cu);
    ctx->pc = 0x169628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169624u;
    // 0x169628: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    { ctx->pc = 0x199068; return; }
    ctx->pc = 0x16962Cu;
label_16962c:
    // 0x16962c: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x16962cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_169630:
    // 0x169630: 0xc066972  jal         func_19A5C8
label_169634:
    if (ctx->pc == 0x169634u) {
        ctx->pc = 0x169634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169630u;
        // 0x169634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169638u;
        goto label_169638;
    }
    ctx->pc = 0x169630u;
    SET_GPR_U32(ctx, 31, 0x169638u);
    ctx->pc = 0x169634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169630u;
    // 0x169634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A5C8u;
    { ctx->pc = 0x19a5c8; return; }
    ctx->pc = 0x169638u;
label_169638:
    // 0x169638: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16963c:
    // 0x16963c: 0xc066440  jal         func_199100
label_169640:
    if (ctx->pc == 0x169640u) {
        ctx->pc = 0x169640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16963Cu;
        // 0x169640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169644u;
        goto label_169644;
    }
    ctx->pc = 0x16963Cu;
    SET_GPR_U32(ctx, 31, 0x169644u);
    ctx->pc = 0x169640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16963Cu;
    // 0x169640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    { ctx->pc = 0x199100; return; }
    ctx->pc = 0x169644u;
label_169644:
    // 0x169644: 0x8f8386ec  lw          $v1, -0x7914($gp)
    ctx->pc = 0x169644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936300)));
label_169648:
    // 0x169648: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x169648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_16964c:
    // 0x16964c: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
label_169650:
    if (ctx->pc == 0x169650u) {
        ctx->pc = 0x169654u;
        goto label_169654;
    }
    ctx->pc = 0x16964Cu;
    {
        const bool branch_taken_0x16964c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16964c) {
            ctx->pc = 0x1696E8u;
            goto label_1696e8;
        }
    }
    ctx->pc = 0x169654u;
label_169654:
    // 0x169654: 0x8f8687b0  lw          $a2, -0x7850($gp)
    ctx->pc = 0x169654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_169658:
    // 0x169658: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x169658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_16965c:
    // 0x16965c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x16965cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_169660:
    // 0x169660: 0x24a56620  addiu       $a1, $a1, 0x6620
    ctx->pc = 0x169660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26144));
label_169664:
    // 0x169664: 0x24636670  addiu       $v1, $v1, 0x6670
    ctx->pc = 0x169664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26224));
label_169668:
    // 0x169668: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x169668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16966c:
    // 0x16966c: 0xdcc20060  ld          $v0, 0x60($a2)
    ctx->pc = 0x16966cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 96)));
label_169670:
    // 0x169670: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x169670u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_169674:
    // 0x169674: 0xdcc201d0  ld          $v0, 0x1D0($a2)
    ctx->pc = 0x169674u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 464)));
label_169678:
    // 0x169678: 0xc0692a8  jal         func_1A4AA0
label_16967c:
    if (ctx->pc == 0x16967Cu) {
        ctx->pc = 0x16967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169678u;
        // 0x16967c: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169680u;
        goto label_169680;
    }
    ctx->pc = 0x169678u;
    SET_GPR_U32(ctx, 31, 0x169680u);
    ctx->pc = 0x16967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169678u;
    // 0x16967c: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x169680u;
label_169680:
    // 0x169680: 0xc06641a  jal         func_199068
label_169684:
    if (ctx->pc == 0x169684u) {
        ctx->pc = 0x169684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169680u;
        // 0x169684: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169688u;
        goto label_169688;
    }
    ctx->pc = 0x169680u;
    SET_GPR_U32(ctx, 31, 0x169688u);
    ctx->pc = 0x169684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169680u;
    // 0x169684: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    { ctx->pc = 0x199068; return; }
    ctx->pc = 0x169688u;
label_169688:
    // 0x169688: 0xc066998  jal         func_19A660
label_16968c:
    if (ctx->pc == 0x16968Cu) {
        ctx->pc = 0x16968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169688u;
        // 0x16968c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169690u;
        goto label_169690;
    }
    ctx->pc = 0x169688u;
    SET_GPR_U32(ctx, 31, 0x169690u);
    ctx->pc = 0x16968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169688u;
    // 0x16968c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    { ctx->pc = 0x19a660; return; }
    ctx->pc = 0x169690u;
label_169690:
    // 0x169690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x169690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_169694:
    // 0x169694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x169694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169698:
    // 0x169698: 0xc066bc0  jal         func_19AF00
label_16969c:
    if (ctx->pc == 0x16969Cu) {
        ctx->pc = 0x16969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169698u;
        // 0x16969c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1696A0u;
        goto label_1696a0;
    }
    ctx->pc = 0x169698u;
    SET_GPR_U32(ctx, 31, 0x1696A0u);
    ctx->pc = 0x16969Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169698u;
    // 0x16969c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AF00u;
    { ctx->pc = 0x19af00; return; }
    ctx->pc = 0x1696A0u;
label_1696a0:
    // 0x1696a0: 0xc066998  jal         func_19A660
label_1696a4:
    if (ctx->pc == 0x1696A4u) {
        ctx->pc = 0x1696A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696A0u;
        // 0x1696a4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1696A8u;
        goto label_1696a8;
    }
    ctx->pc = 0x1696A0u;
    SET_GPR_U32(ctx, 31, 0x1696A8u);
    ctx->pc = 0x1696A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1696A0u;
    // 0x1696a4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    { ctx->pc = 0x19a660; return; }
    ctx->pc = 0x1696A8u;
label_1696a8:
    // 0x1696a8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1696a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1696ac:
    // 0x1696ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1696acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1696b0:
    // 0x1696b0: 0x24a565d0  addiu       $a1, $a1, 0x65D0
    ctx->pc = 0x1696b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26064));
label_1696b4:
    // 0x1696b4: 0xc066aa2  jal         func_19AA88
label_1696b8:
    if (ctx->pc == 0x1696B8u) {
        ctx->pc = 0x1696B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696B4u;
        // 0x1696b8: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1696BCu;
        goto label_1696bc;
    }
    ctx->pc = 0x1696B4u;
    SET_GPR_U32(ctx, 31, 0x1696BCu);
    ctx->pc = 0x1696B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1696B4u;
    // 0x1696b8: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19AA88u;
    { ctx->pc = 0x19aa88; return; }
    ctx->pc = 0x1696BCu;
label_1696bc:
    // 0x1696bc: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1696bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1696c0:
    // 0x1696c0: 0x8c220508  lw          $v0, 0x508($at)
    ctx->pc = 0x1696c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1288)));
label_1696c4:
    // 0x1696c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1696c8:
    if (ctx->pc == 0x1696C8u) {
        ctx->pc = 0x1696CCu;
        goto label_1696cc;
    }
    ctx->pc = 0x1696C4u;
    {
        const bool branch_taken_0x1696c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1696c4) {
            ctx->pc = 0x1696D8u;
            goto label_1696d8;
        }
    }
    ctx->pc = 0x1696CCu;
label_1696cc:
    // 0x1696cc: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x1696ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1696d0:
    // 0x1696d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1696d4:
    if (ctx->pc == 0x1696D4u) {
        ctx->pc = 0x1696D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696D0u;
        // 0x1696d4: 0x244401c0  addiu       $a0, $v0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1696D8u;
        goto label_1696d8;
    }
    ctx->pc = 0x1696D0u;
    {
        const bool branch_taken_0x1696d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1696D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696D0u;
        // 0x1696d4: 0x244401c0  addiu       $a0, $v0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1696d0) {
            ctx->pc = 0x1696E0u;
            goto label_1696e0;
        }
    }
    ctx->pc = 0x1696D8u;
label_1696d8:
    // 0x1696d8: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x1696d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1696dc:
    // 0x1696dc: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x1696dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1696e0:
    // 0x1696e0: 0xc066322  jal         func_198C88
label_1696e4:
    if (ctx->pc == 0x1696E4u) {
        ctx->pc = 0x1696E8u;
        goto label_1696e8;
    }
    ctx->pc = 0x1696E0u;
    SET_GPR_U32(ctx, 31, 0x1696E8u);
    ctx->pc = 0x198C88u;
    { ctx->pc = 0x198c88; return; }
    ctx->pc = 0x1696E8u;
label_1696e8:
    // 0x1696e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1696e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1696ec:
    // 0x1696ec: 0x3e00008  jr          $ra
label_1696f0:
    if (ctx->pc == 0x1696F0u) {
        ctx->pc = 0x1696F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696ECu;
        // 0x1696f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1696F4u;
        goto label_1696f4;
    }
    ctx->pc = 0x1696ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1696F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1696ECu;
        // 0x1696f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1696ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1696F4u;
label_1696f4:
    // 0x1696f4: 0x0  nop
    ctx->pc = 0x1696f4u;
    // NOP
label_1696f8:
    // 0x1696f8: 0x0  nop
    ctx->pc = 0x1696f8u;
    // NOP
label_1696fc:
    // 0x1696fc: 0x0  nop
    ctx->pc = 0x1696fcu;
    // NOP
label_169700:
    // 0x169700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_169704:
    // 0x169704: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x169704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_169708:
    // 0x169708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16970c:
    // 0x16970c: 0xc066972  jal         func_19A5C8
label_169710:
    if (ctx->pc == 0x169710u) {
        ctx->pc = 0x169710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16970Cu;
        // 0x169710: 0x8f8487b0  lw          $a0, -0x7850($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169714u;
        goto label_169714;
    }
    ctx->pc = 0x16970Cu;
    SET_GPR_U32(ctx, 31, 0x169714u);
    ctx->pc = 0x169710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16970Cu;
    // 0x169710: 0x8f8487b0  lw          $a0, -0x7850($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A5C8u;
    { ctx->pc = 0x19a5c8; return; }
    ctx->pc = 0x169714u;
label_169714:
    // 0x169714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_169718:
    // 0x169718: 0x3e00008  jr          $ra
label_16971c:
    if (ctx->pc == 0x16971Cu) {
        ctx->pc = 0x16971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169718u;
        // 0x16971c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169720u;
        goto label_169720;
    }
    ctx->pc = 0x169718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169718u;
        // 0x16971c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169720u;
label_169720:
    // 0x169720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_169724:
    // 0x169724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_169728:
    // 0x169728: 0x8f8386e8  lw          $v1, -0x7918($gp)
    ctx->pc = 0x169728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936296)));
label_16972c:
    // 0x16972c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_169730:
    if (ctx->pc == 0x169730u) {
        ctx->pc = 0x169734u;
        goto label_169734;
    }
    ctx->pc = 0x16972Cu;
    {
        const bool branch_taken_0x16972c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16972c) {
            ctx->pc = 0x16973Cu;
            goto label_16973c;
        }
    }
    ctx->pc = 0x169734u;
label_169734:
    // 0x169734: 0x60f809  jalr        $v1
label_169738:
    if (ctx->pc == 0x169738u) {
        ctx->pc = 0x16973Cu;
        goto label_16973c;
    }
    ctx->pc = 0x169734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16973Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169734u, 0x16973Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16973Cu;
label_16973c:
    // 0x16973c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16973cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_169740:
    // 0x169740: 0x3e00008  jr          $ra
label_169744:
    if (ctx->pc == 0x169744u) {
        ctx->pc = 0x169744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169740u;
        // 0x169744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169748u;
        goto label_169748;
    }
    ctx->pc = 0x169740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169740u;
        // 0x169744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169748u;
label_169748:
    // 0x169748: 0x0  nop
    ctx->pc = 0x169748u;
    // NOP
label_16974c:
    // 0x16974c: 0x0  nop
    ctx->pc = 0x16974cu;
    // NOP
label_169750:
    // 0x169750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_169754:
    // 0x169754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_169758:
    // 0x169758: 0x8f8286e4  lw          $v0, -0x791C($gp)
    ctx->pc = 0x169758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936292)));
label_16975c:
    // 0x16975c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_169760:
    if (ctx->pc == 0x169760u) {
        ctx->pc = 0x169764u;
        goto label_169764;
    }
    ctx->pc = 0x16975Cu;
    {
        const bool branch_taken_0x16975c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16975c) {
            ctx->pc = 0x169774u;
            goto label_169774;
        }
    }
    ctx->pc = 0x169764u;
label_169764:
    // 0x169764: 0x40f809  jalr        $v0
label_169768:
    if (ctx->pc == 0x169768u) {
        ctx->pc = 0x16976Cu;
        goto label_16976c;
    }
    ctx->pc = 0x169764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16976Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169764u, 0x16976Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16976Cu;
label_16976c:
    // 0x16976c: 0x10000003  b           . + 4 + (0x3 << 2)
label_169770:
    if (ctx->pc == 0x169770u) {
        ctx->pc = 0x169770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16976Cu;
        // 0x169770: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169774u;
        goto label_169774;
    }
    ctx->pc = 0x16976Cu;
    {
        const bool branch_taken_0x16976c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16976Cu;
        // 0x169770: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16976c) {
            ctx->pc = 0x16977Cu;
            goto label_16977c;
        }
    }
    ctx->pc = 0x169774u;
label_169774:
    // 0x169774: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x169774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169778:
    // 0x169778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16977c:
    // 0x16977c: 0x3e00008  jr          $ra
label_169780:
    if (ctx->pc == 0x169780u) {
        ctx->pc = 0x169780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16977Cu;
        // 0x169780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169784u;
        goto label_169784;
    }
    ctx->pc = 0x16977Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16977Cu;
        // 0x169780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16977Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169784u;
label_169784:
    // 0x169784: 0x0  nop
    ctx->pc = 0x169784u;
    // NOP
label_169788:
    // 0x169788: 0x0  nop
    ctx->pc = 0x169788u;
    // NOP
label_16978c:
    // 0x16978c: 0x0  nop
    ctx->pc = 0x16978cu;
    // NOP
label_169790:
    // 0x169790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_169794:
    // 0x169794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_169798:
    // 0x169798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16979c:
    // 0x16979c: 0xc06026c  jal         func_1809B0
label_1697a0:
    if (ctx->pc == 0x1697A0u) {
        ctx->pc = 0x1697A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16979Cu;
        // 0x1697a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1697A4u;
        goto label_1697a4;
    }
    ctx->pc = 0x16979Cu;
    SET_GPR_U32(ctx, 31, 0x1697A4u);
    ctx->pc = 0x1697A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16979Cu;
    // 0x1697a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1809B0u;
    { ctx->pc = 0x1809b0; return; }
    ctx->pc = 0x1697A4u;
label_1697a4:
    // 0x1697a4: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1697a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1697a8:
    // 0x1697a8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1697a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1697ac:
    // 0x1697ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1697b0:
    if (ctx->pc == 0x1697B0u) {
        ctx->pc = 0x1697B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697ACu;
        // 0x1697b0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1697B4u;
        goto label_1697b4;
    }
    ctx->pc = 0x1697ACu;
    {
        const bool branch_taken_0x1697ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1697B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697ACu;
        // 0x1697b0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697ac) {
            ctx->pc = 0x1697C8u;
            goto label_1697c8;
        }
    }
    ctx->pc = 0x1697B4u;
label_1697b4:
    // 0x1697b4: 0xc05b420  jal         func_16D080
label_1697b8:
    if (ctx->pc == 0x1697B8u) {
        ctx->pc = 0x1697B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697B4u;
        // 0x1697b8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1697BCu;
        goto label_1697bc;
    }
    ctx->pc = 0x1697B4u;
    SET_GPR_U32(ctx, 31, 0x1697BCu);
    ctx->pc = 0x1697B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1697B4u;
    // 0x1697b8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1697BCu;
label_1697bc:
    // 0x1697bc: 0xc05b578  jal         func_16D5E0
label_1697c0:
    if (ctx->pc == 0x1697C0u) {
        ctx->pc = 0x1697C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697BCu;
        // 0x1697c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1697C4u;
        goto label_1697c4;
    }
    ctx->pc = 0x1697BCu;
    SET_GPR_U32(ctx, 31, 0x1697C4u);
    ctx->pc = 0x1697C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1697BCu;
    // 0x1697c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    { ctx->pc = 0x16d5e0; return; }
    ctx->pc = 0x1697C4u;
label_1697c4:
    // 0x1697c4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1697c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1697c8:
    // 0x1697c8: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_1697cc:
    if (ctx->pc == 0x1697CCu) {
        ctx->pc = 0x1697CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697C8u;
        // 0x1697cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1697D0u;
        goto label_1697d0;
    }
    ctx->pc = 0x1697C8u;
    {
        const bool branch_taken_0x1697c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1697CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697C8u;
        // 0x1697cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697c8) {
            ctx->pc = 0x1697FCu;
            goto label_1697fc;
        }
    }
    ctx->pc = 0x1697D0u;
label_1697d0:
    // 0x1697d0: 0xc06c1da  jal         func_1B0768
label_1697d4:
    if (ctx->pc == 0x1697D4u) {
        ctx->pc = 0x1697D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697D0u;
        // 0x1697d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1697D8u;
        goto label_1697d8;
    }
    ctx->pc = 0x1697D0u;
    SET_GPR_U32(ctx, 31, 0x1697D8u);
    ctx->pc = 0x1697D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1697D0u;
    // 0x1697d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0768u;
    { ctx->pc = 0x1b0768; return; }
    ctx->pc = 0x1697D8u;
label_1697d8:
    // 0x1697d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1697d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1697dc:
    // 0x1697dc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_1697e0:
    if (ctx->pc == 0x1697E0u) {
        ctx->pc = 0x1697E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697DCu;
        // 0x1697e0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1697E4u;
        goto label_1697e4;
    }
    ctx->pc = 0x1697DCu;
    {
        const bool branch_taken_0x1697dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1697E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697DCu;
        // 0x1697e0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1697dc) {
            ctx->pc = 0x1697F8u;
            goto label_1697f8;
        }
    }
    ctx->pc = 0x1697E4u;
label_1697e4:
    // 0x1697e4: 0xc05b420  jal         func_16D080
label_1697e8:
    if (ctx->pc == 0x1697E8u) {
        ctx->pc = 0x1697E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697E4u;
        // 0x1697e8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1697ECu;
        goto label_1697ec;
    }
    ctx->pc = 0x1697E4u;
    SET_GPR_U32(ctx, 31, 0x1697ECu);
    ctx->pc = 0x1697E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1697E4u;
    // 0x1697e8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1697ECu;
label_1697ec:
    // 0x1697ec: 0xc05b578  jal         func_16D5E0
label_1697f0:
    if (ctx->pc == 0x1697F0u) {
        ctx->pc = 0x1697F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697ECu;
        // 0x1697f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1697F4u;
        goto label_1697f4;
    }
    ctx->pc = 0x1697ECu;
    SET_GPR_U32(ctx, 31, 0x1697F4u);
    ctx->pc = 0x1697F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1697ECu;
    // 0x1697f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    { ctx->pc = 0x16d5e0; return; }
    ctx->pc = 0x1697F4u;
label_1697f4:
    // 0x1697f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1697f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1697f8:
    // 0x1697f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1697f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1697fc:
    // 0x1697fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1697fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_169800:
    // 0x169800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_169804:
    // 0x169804: 0x3e00008  jr          $ra
label_169808:
    if (ctx->pc == 0x169808u) {
        ctx->pc = 0x169808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169804u;
        // 0x169808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16980Cu;
        goto label_16980c;
    }
    ctx->pc = 0x169804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169804u;
        // 0x169808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16980Cu;
label_16980c:
    // 0x16980c: 0x0  nop
    ctx->pc = 0x16980cu;
    // NOP
label_169810:
    // 0x169810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_169814:
    // 0x169814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_169818:
    // 0x169818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16981c:
    // 0x16981c: 0xc06c1da  jal         func_1B0768
label_169820:
    if (ctx->pc == 0x169820u) {
        ctx->pc = 0x169820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16981Cu;
        // 0x169820: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169824u;
        goto label_169824;
    }
    ctx->pc = 0x16981Cu;
    SET_GPR_U32(ctx, 31, 0x169824u);
    ctx->pc = 0x169820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16981Cu;
    // 0x169820: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0768u;
    { ctx->pc = 0x1b0768; return; }
    ctx->pc = 0x169824u;
label_169824:
    // 0x169824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169828:
    // 0x169828: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_16982c:
    if (ctx->pc == 0x16982Cu) {
        ctx->pc = 0x16982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169828u;
        // 0x16982c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169830u;
        goto label_169830;
    }
    ctx->pc = 0x169828u;
    {
        const bool branch_taken_0x169828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169828u;
        // 0x16982c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169828) {
            ctx->pc = 0x169844u;
            goto label_169844;
        }
    }
    ctx->pc = 0x169830u;
label_169830:
    // 0x169830: 0xc05b420  jal         func_16D080
label_169834:
    if (ctx->pc == 0x169834u) {
        ctx->pc = 0x169834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169830u;
        // 0x169834: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169838u;
        goto label_169838;
    }
    ctx->pc = 0x169830u;
    SET_GPR_U32(ctx, 31, 0x169838u);
    ctx->pc = 0x169834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169830u;
    // 0x169834: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x169838u;
label_169838:
    // 0x169838: 0xc05b578  jal         func_16D5E0
label_16983c:
    if (ctx->pc == 0x16983Cu) {
        ctx->pc = 0x16983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169838u;
        // 0x16983c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169840u;
        goto label_169840;
    }
    ctx->pc = 0x169838u;
    SET_GPR_U32(ctx, 31, 0x169840u);
    ctx->pc = 0x16983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169838u;
    // 0x16983c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    { ctx->pc = 0x16d5e0; return; }
    ctx->pc = 0x169840u;
label_169840:
    // 0x169840: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x169840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169844:
    // 0x169844: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169848:
    // 0x169848: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16984c:
    // 0x16984c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16984cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_169850:
    // 0x169850: 0x3e00008  jr          $ra
label_169854:
    if (ctx->pc == 0x169854u) {
        ctx->pc = 0x169854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169850u;
        // 0x169854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169858u;
        goto label_169858;
    }
    ctx->pc = 0x169850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169850u;
        // 0x169854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169858u;
label_169858:
    // 0x169858: 0x0  nop
    ctx->pc = 0x169858u;
    // NOP
label_16985c:
    // 0x16985c: 0x0  nop
    ctx->pc = 0x16985cu;
    // NOP
label_169860:
    // 0x169860: 0x3e00008  jr          $ra
label_169864:
    if (ctx->pc == 0x169864u) {
        ctx->pc = 0x169864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169860u;
        // 0x169864: 0x8f82870c  lw          $v0, -0x78F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169868u;
        goto label_169868;
    }
    ctx->pc = 0x169860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169860u;
        // 0x169864: 0x8f82870c  lw          $v0, -0x78F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936332)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169868u;
label_169868:
    // 0x169868: 0x0  nop
    ctx->pc = 0x169868u;
    // NOP
label_16986c:
    // 0x16986c: 0x0  nop
    ctx->pc = 0x16986cu;
    // NOP
label_169870:
    // 0x169870: 0x3e00008  jr          $ra
label_169874:
    if (ctx->pc == 0x169874u) {
        ctx->pc = 0x169874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169870u;
        // 0x169874: 0x8f8286f4  lw          $v0, -0x790C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169878u;
        goto label_169878;
    }
    ctx->pc = 0x169870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169870u;
        // 0x169874: 0x8f8286f4  lw          $v0, -0x790C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936308)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169878u;
label_169878:
    // 0x169878: 0x0  nop
    ctx->pc = 0x169878u;
    // NOP
label_16987c:
    // 0x16987c: 0x0  nop
    ctx->pc = 0x16987cu;
    // NOP
label_169880:
    // 0x169880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_169884:
    // 0x169884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_169888:
    // 0x169888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16988c:
    // 0x16988c: 0x8f908524  lw          $s0, -0x7ADC($gp)
    ctx->pc = 0x16988cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935844)));
label_169890:
    // 0x169890: 0xc06468c  jal         func_191A30
label_169894:
    if (ctx->pc == 0x169894u) {
        ctx->pc = 0x169894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169890u;
        // 0x169894: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169898u;
        goto label_169898;
    }
    ctx->pc = 0x169890u;
    SET_GPR_U32(ctx, 31, 0x169898u);
    ctx->pc = 0x169894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169890u;
    // 0x169894: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    { ctx->pc = 0x191a30; return; }
    ctx->pc = 0x169898u;
label_169898:
    // 0x169898: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x169898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_16989c:
    // 0x16989c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x16989cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1698a0:
    // 0x1698a0: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x1698a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1698a4:
    // 0x1698a4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_1698a8:
    if (ctx->pc == 0x1698A8u) {
        ctx->pc = 0x1698A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698A4u;
        // 0x1698a8: 0x27a30028  addiu       $v1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1698ACu;
        goto label_1698ac;
    }
    ctx->pc = 0x1698A4u;
    {
        const bool branch_taken_0x1698a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1698A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698A4u;
        // 0x1698a8: 0x27a30028  addiu       $v1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698a4) {
            ctx->pc = 0x1698F8u;
            goto label_1698f8;
        }
    }
    ctx->pc = 0x1698ACu;
label_1698ac:
    // 0x1698ac: 0x3c02479c  lui         $v0, 0x479C
    ctx->pc = 0x1698acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18332 << 16));
label_1698b0:
    // 0x1698b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1698b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1698b4:
    // 0x1698b4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1698b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1698b8:
    // 0x1698b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1698b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1698bc:
    // 0x1698bc: 0x0  nop
    ctx->pc = 0x1698bcu;
    // NOP
label_1698c0:
    // 0x1698c0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1698c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1698c4:
    // 0x1698c4: 0x0  nop
    ctx->pc = 0x1698c4u;
    // NOP
label_1698c8:
    // 0x1698c8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_1698cc:
    if (ctx->pc == 0x1698CCu) {
        ctx->pc = 0x1698D0u;
        goto label_1698d0;
    }
    ctx->pc = 0x1698C8u;
    {
        const bool branch_taken_0x1698c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1698c8) {
            ctx->pc = 0x1698F8u;
            goto label_1698f8;
        }
    }
    ctx->pc = 0x1698D0u;
label_1698d0:
    // 0x1698d0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1698d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1698d4:
    // 0x1698d4: 0x3c02471c  lui         $v0, 0x471C
    ctx->pc = 0x1698d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18204 << 16));
label_1698d8:
    // 0x1698d8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1698d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1698dc:
    // 0x1698dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1698dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1698e0:
    // 0x1698e0: 0x0  nop
    ctx->pc = 0x1698e0u;
    // NOP
label_1698e4:
    // 0x1698e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1698e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1698e8:
    // 0x1698e8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1698e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1698ec:
    // 0x1698ec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1698ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1698f0:
    // 0x1698f0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1698f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1698f4:
    // 0x1698f4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1698f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1698f8:
    // 0x1698f8: 0xc088d68  jal         func_2235A0
label_1698fc:
    if (ctx->pc == 0x1698FCu) {
        ctx->pc = 0x169900u;
        goto label_169900;
    }
    ctx->pc = 0x1698F8u;
    SET_GPR_U32(ctx, 31, 0x169900u);
    ctx->pc = 0x2235A0u;
    { ctx->pc = 0x2235a0; return; }
    ctx->pc = 0x169900u;
label_169900:
    // 0x169900: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_169904:
    if (ctx->pc == 0x169904u) {
        ctx->pc = 0x169908u;
        goto label_169908;
    }
    ctx->pc = 0x169900u;
    {
        const bool branch_taken_0x169900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169900) {
            ctx->pc = 0x169978u;
            { ctx->pc = 0x169978; return; }
        }
    }
    ctx->pc = 0x169908u;
label_169908:
    // 0x169908: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x169908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16990c:
    // 0x16990c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x16990cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
label_169910:
    // 0x169910: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x169910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_169914:
    // 0x169914: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x169914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
label_169918:
    // 0x169918: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x169918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16991c:
    // 0x16991c: 0x24637b50  addiu       $v1, $v1, 0x7B50
    ctx->pc = 0x16991cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31568));
label_169920:
    // 0x169920: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x169920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_169924:
    // 0x169924: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x169924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_169928:
    // 0x169928: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x169928u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_16992c:
    // 0x16992c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x16992cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_169930:
    // 0x169930: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169930u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_169934:
    // 0x169934: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x169934u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_169938:
    // 0x169938: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169938u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_16993c:
    // 0x16993c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16993cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_169940:
    // 0x169940: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_169944:
    // 0x169944: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x169944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_169948:
    // 0x169948: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x169948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16994c:
    // 0x16994c: 0x0  nop
    ctx->pc = 0x16994cu;
    // NOP
    ctx->pc = 0x169950u;
    return;
}

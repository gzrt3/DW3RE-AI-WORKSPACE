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


void FUN_0014eba0_part53(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1681e0u: goto label_1681e0;
        case 0x1681e4u: goto label_1681e4;
        case 0x1681e8u: goto label_1681e8;
        case 0x1681ecu: goto label_1681ec;
        case 0x1681f0u: goto label_1681f0;
        case 0x1681f4u: goto label_1681f4;
        case 0x1681f8u: goto label_1681f8;
        case 0x1681fcu: goto label_1681fc;
        case 0x168200u: goto label_168200;
        case 0x168204u: goto label_168204;
        case 0x168208u: goto label_168208;
        case 0x16820cu: goto label_16820c;
        case 0x168210u: goto label_168210;
        case 0x168214u: goto label_168214;
        case 0x168218u: goto label_168218;
        case 0x16821cu: goto label_16821c;
        case 0x168220u: goto label_168220;
        case 0x168224u: goto label_168224;
        case 0x168228u: goto label_168228;
        case 0x16822cu: goto label_16822c;
        case 0x168230u: goto label_168230;
        case 0x168234u: goto label_168234;
        case 0x168238u: goto label_168238;
        case 0x16823cu: goto label_16823c;
        case 0x168240u: goto label_168240;
        case 0x168244u: goto label_168244;
        case 0x168248u: goto label_168248;
        case 0x16824cu: goto label_16824c;
        case 0x168250u: goto label_168250;
        case 0x168254u: goto label_168254;
        case 0x168258u: goto label_168258;
        case 0x16825cu: goto label_16825c;
        case 0x168260u: goto label_168260;
        case 0x168264u: goto label_168264;
        case 0x168268u: goto label_168268;
        case 0x16826cu: goto label_16826c;
        case 0x168270u: goto label_168270;
        case 0x168274u: goto label_168274;
        case 0x168278u: goto label_168278;
        case 0x16827cu: goto label_16827c;
        case 0x168280u: goto label_168280;
        case 0x168284u: goto label_168284;
        case 0x168288u: goto label_168288;
        case 0x16828cu: goto label_16828c;
        case 0x168290u: goto label_168290;
        case 0x168294u: goto label_168294;
        case 0x168298u: goto label_168298;
        case 0x16829cu: goto label_16829c;
        case 0x1682a0u: goto label_1682a0;
        case 0x1682a4u: goto label_1682a4;
        case 0x1682a8u: goto label_1682a8;
        case 0x1682acu: goto label_1682ac;
        case 0x1682b0u: goto label_1682b0;
        case 0x1682b4u: goto label_1682b4;
        case 0x1682b8u: goto label_1682b8;
        case 0x1682bcu: goto label_1682bc;
        case 0x1682c0u: goto label_1682c0;
        case 0x1682c4u: goto label_1682c4;
        case 0x1682c8u: goto label_1682c8;
        case 0x1682ccu: goto label_1682cc;
        case 0x1682d0u: goto label_1682d0;
        case 0x1682d4u: goto label_1682d4;
        case 0x1682d8u: goto label_1682d8;
        case 0x1682dcu: goto label_1682dc;
        case 0x1682e0u: goto label_1682e0;
        case 0x1682e4u: goto label_1682e4;
        case 0x1682e8u: goto label_1682e8;
        case 0x1682ecu: goto label_1682ec;
        case 0x1682f0u: goto label_1682f0;
        case 0x1682f4u: goto label_1682f4;
        case 0x1682f8u: goto label_1682f8;
        case 0x1682fcu: goto label_1682fc;
        case 0x168300u: goto label_168300;
        case 0x168304u: goto label_168304;
        case 0x168308u: goto label_168308;
        case 0x16830cu: goto label_16830c;
        case 0x168310u: goto label_168310;
        case 0x168314u: goto label_168314;
        case 0x168318u: goto label_168318;
        case 0x16831cu: goto label_16831c;
        case 0x168320u: goto label_168320;
        case 0x168324u: goto label_168324;
        case 0x168328u: goto label_168328;
        case 0x16832cu: goto label_16832c;
        case 0x168330u: goto label_168330;
        case 0x168334u: goto label_168334;
        case 0x168338u: goto label_168338;
        case 0x16833cu: goto label_16833c;
        case 0x168340u: goto label_168340;
        case 0x168344u: goto label_168344;
        case 0x168348u: goto label_168348;
        case 0x16834cu: goto label_16834c;
        case 0x168350u: goto label_168350;
        case 0x168354u: goto label_168354;
        case 0x168358u: goto label_168358;
        case 0x16835cu: goto label_16835c;
        case 0x168360u: goto label_168360;
        case 0x168364u: goto label_168364;
        case 0x168368u: goto label_168368;
        case 0x16836cu: goto label_16836c;
        case 0x168370u: goto label_168370;
        case 0x168374u: goto label_168374;
        case 0x168378u: goto label_168378;
        case 0x16837cu: goto label_16837c;
        case 0x168380u: goto label_168380;
        case 0x168384u: goto label_168384;
        case 0x168388u: goto label_168388;
        case 0x16838cu: goto label_16838c;
        case 0x168390u: goto label_168390;
        case 0x168394u: goto label_168394;
        case 0x168398u: goto label_168398;
        case 0x16839cu: goto label_16839c;
        case 0x1683a0u: goto label_1683a0;
        case 0x1683a4u: goto label_1683a4;
        case 0x1683a8u: goto label_1683a8;
        case 0x1683acu: goto label_1683ac;
        case 0x1683b0u: goto label_1683b0;
        case 0x1683b4u: goto label_1683b4;
        case 0x1683b8u: goto label_1683b8;
        case 0x1683bcu: goto label_1683bc;
        case 0x1683c0u: goto label_1683c0;
        case 0x1683c4u: goto label_1683c4;
        case 0x1683c8u: goto label_1683c8;
        case 0x1683ccu: goto label_1683cc;
        case 0x1683d0u: goto label_1683d0;
        case 0x1683d4u: goto label_1683d4;
        case 0x1683d8u: goto label_1683d8;
        case 0x1683dcu: goto label_1683dc;
        case 0x1683e0u: goto label_1683e0;
        case 0x1683e4u: goto label_1683e4;
        case 0x1683e8u: goto label_1683e8;
        case 0x1683ecu: goto label_1683ec;
        case 0x1683f0u: goto label_1683f0;
        case 0x1683f4u: goto label_1683f4;
        case 0x1683f8u: goto label_1683f8;
        case 0x1683fcu: goto label_1683fc;
        case 0x168400u: goto label_168400;
        case 0x168404u: goto label_168404;
        case 0x168408u: goto label_168408;
        case 0x16840cu: goto label_16840c;
        case 0x168410u: goto label_168410;
        case 0x168414u: goto label_168414;
        case 0x168418u: goto label_168418;
        case 0x16841cu: goto label_16841c;
        case 0x168420u: goto label_168420;
        case 0x168424u: goto label_168424;
        case 0x168428u: goto label_168428;
        case 0x16842cu: goto label_16842c;
        case 0x168430u: goto label_168430;
        case 0x168434u: goto label_168434;
        case 0x168438u: goto label_168438;
        case 0x16843cu: goto label_16843c;
        case 0x168440u: goto label_168440;
        case 0x168444u: goto label_168444;
        case 0x168448u: goto label_168448;
        case 0x16844cu: goto label_16844c;
        case 0x168450u: goto label_168450;
        case 0x168454u: goto label_168454;
        case 0x168458u: goto label_168458;
        case 0x16845cu: goto label_16845c;
        case 0x168460u: goto label_168460;
        case 0x168464u: goto label_168464;
        case 0x168468u: goto label_168468;
        case 0x16846cu: goto label_16846c;
        case 0x168470u: goto label_168470;
        case 0x168474u: goto label_168474;
        case 0x168478u: goto label_168478;
        case 0x16847cu: goto label_16847c;
        case 0x168480u: goto label_168480;
        case 0x168484u: goto label_168484;
        case 0x168488u: goto label_168488;
        case 0x16848cu: goto label_16848c;
        case 0x168490u: goto label_168490;
        case 0x168494u: goto label_168494;
        case 0x168498u: goto label_168498;
        case 0x16849cu: goto label_16849c;
        case 0x1684a0u: goto label_1684a0;
        case 0x1684a4u: goto label_1684a4;
        case 0x1684a8u: goto label_1684a8;
        case 0x1684acu: goto label_1684ac;
        case 0x1684b0u: goto label_1684b0;
        case 0x1684b4u: goto label_1684b4;
        case 0x1684b8u: goto label_1684b8;
        case 0x1684bcu: goto label_1684bc;
        case 0x1684c0u: goto label_1684c0;
        case 0x1684c4u: goto label_1684c4;
        case 0x1684c8u: goto label_1684c8;
        case 0x1684ccu: goto label_1684cc;
        case 0x1684d0u: goto label_1684d0;
        case 0x1684d4u: goto label_1684d4;
        case 0x1684d8u: goto label_1684d8;
        case 0x1684dcu: goto label_1684dc;
        case 0x1684e0u: goto label_1684e0;
        case 0x1684e4u: goto label_1684e4;
        case 0x1684e8u: goto label_1684e8;
        case 0x1684ecu: goto label_1684ec;
        case 0x1684f0u: goto label_1684f0;
        case 0x1684f4u: goto label_1684f4;
        case 0x1684f8u: goto label_1684f8;
        case 0x1684fcu: goto label_1684fc;
        case 0x168500u: goto label_168500;
        case 0x168504u: goto label_168504;
        case 0x168508u: goto label_168508;
        case 0x16850cu: goto label_16850c;
        case 0x168510u: goto label_168510;
        case 0x168514u: goto label_168514;
        case 0x168518u: goto label_168518;
        case 0x16851cu: goto label_16851c;
        case 0x168520u: goto label_168520;
        case 0x168524u: goto label_168524;
        case 0x168528u: goto label_168528;
        case 0x16852cu: goto label_16852c;
        case 0x168530u: goto label_168530;
        case 0x168534u: goto label_168534;
        case 0x168538u: goto label_168538;
        case 0x16853cu: goto label_16853c;
        case 0x168540u: goto label_168540;
        case 0x168544u: goto label_168544;
        case 0x168548u: goto label_168548;
        case 0x16854cu: goto label_16854c;
        case 0x168550u: goto label_168550;
        case 0x168554u: goto label_168554;
        case 0x168558u: goto label_168558;
        case 0x16855cu: goto label_16855c;
        case 0x168560u: goto label_168560;
        case 0x168564u: goto label_168564;
        case 0x168568u: goto label_168568;
        case 0x16856cu: goto label_16856c;
        case 0x168570u: goto label_168570;
        case 0x168574u: goto label_168574;
        case 0x168578u: goto label_168578;
        case 0x16857cu: goto label_16857c;
        case 0x168580u: goto label_168580;
        case 0x168584u: goto label_168584;
        case 0x168588u: goto label_168588;
        case 0x16858cu: goto label_16858c;
        case 0x168590u: goto label_168590;
        case 0x168594u: goto label_168594;
        case 0x168598u: goto label_168598;
        case 0x16859cu: goto label_16859c;
        case 0x1685a0u: goto label_1685a0;
        case 0x1685a4u: goto label_1685a4;
        case 0x1685a8u: goto label_1685a8;
        case 0x1685acu: goto label_1685ac;
        case 0x1685b0u: goto label_1685b0;
        case 0x1685b4u: goto label_1685b4;
        case 0x1685b8u: goto label_1685b8;
        case 0x1685bcu: goto label_1685bc;
        case 0x1685c0u: goto label_1685c0;
        case 0x1685c4u: goto label_1685c4;
        case 0x1685c8u: goto label_1685c8;
        case 0x1685ccu: goto label_1685cc;
        case 0x1685d0u: goto label_1685d0;
        case 0x1685d4u: goto label_1685d4;
        case 0x1685d8u: goto label_1685d8;
        case 0x1685dcu: goto label_1685dc;
        case 0x1685e0u: goto label_1685e0;
        case 0x1685e4u: goto label_1685e4;
        case 0x1685e8u: goto label_1685e8;
        case 0x1685ecu: goto label_1685ec;
        case 0x1685f0u: goto label_1685f0;
        case 0x1685f4u: goto label_1685f4;
        case 0x1685f8u: goto label_1685f8;
        case 0x1685fcu: goto label_1685fc;
        case 0x168600u: goto label_168600;
        case 0x168604u: goto label_168604;
        case 0x168608u: goto label_168608;
        case 0x16860cu: goto label_16860c;
        case 0x168610u: goto label_168610;
        case 0x168614u: goto label_168614;
        case 0x168618u: goto label_168618;
        case 0x16861cu: goto label_16861c;
        case 0x168620u: goto label_168620;
        case 0x168624u: goto label_168624;
        case 0x168628u: goto label_168628;
        case 0x16862cu: goto label_16862c;
        case 0x168630u: goto label_168630;
        case 0x168634u: goto label_168634;
        case 0x168638u: goto label_168638;
        case 0x16863cu: goto label_16863c;
        case 0x168640u: goto label_168640;
        case 0x168644u: goto label_168644;
        case 0x168648u: goto label_168648;
        case 0x16864cu: goto label_16864c;
        case 0x168650u: goto label_168650;
        case 0x168654u: goto label_168654;
        case 0x168658u: goto label_168658;
        case 0x16865cu: goto label_16865c;
        case 0x168660u: goto label_168660;
        case 0x168664u: goto label_168664;
        case 0x168668u: goto label_168668;
        case 0x16866cu: goto label_16866c;
        case 0x168670u: goto label_168670;
        case 0x168674u: goto label_168674;
        case 0x168678u: goto label_168678;
        case 0x16867cu: goto label_16867c;
        case 0x168680u: goto label_168680;
        case 0x168684u: goto label_168684;
        case 0x168688u: goto label_168688;
        case 0x16868cu: goto label_16868c;
        case 0x168690u: goto label_168690;
        case 0x168694u: goto label_168694;
        case 0x168698u: goto label_168698;
        case 0x16869cu: goto label_16869c;
        case 0x1686a0u: goto label_1686a0;
        case 0x1686a4u: goto label_1686a4;
        case 0x1686a8u: goto label_1686a8;
        case 0x1686acu: goto label_1686ac;
        case 0x1686b0u: goto label_1686b0;
        case 0x1686b4u: goto label_1686b4;
        case 0x1686b8u: goto label_1686b8;
        case 0x1686bcu: goto label_1686bc;
        case 0x1686c0u: goto label_1686c0;
        case 0x1686c4u: goto label_1686c4;
        case 0x1686c8u: goto label_1686c8;
        case 0x1686ccu: goto label_1686cc;
        case 0x1686d0u: goto label_1686d0;
        case 0x1686d4u: goto label_1686d4;
        case 0x1686d8u: goto label_1686d8;
        case 0x1686dcu: goto label_1686dc;
        case 0x1686e0u: goto label_1686e0;
        case 0x1686e4u: goto label_1686e4;
        case 0x1686e8u: goto label_1686e8;
        case 0x1686ecu: goto label_1686ec;
        case 0x1686f0u: goto label_1686f0;
        case 0x1686f4u: goto label_1686f4;
        case 0x1686f8u: goto label_1686f8;
        case 0x1686fcu: goto label_1686fc;
        case 0x168700u: goto label_168700;
        case 0x168704u: goto label_168704;
        case 0x168708u: goto label_168708;
        case 0x16870cu: goto label_16870c;
        case 0x168710u: goto label_168710;
        case 0x168714u: goto label_168714;
        case 0x168718u: goto label_168718;
        case 0x16871cu: goto label_16871c;
        case 0x168720u: goto label_168720;
        case 0x168724u: goto label_168724;
        case 0x168728u: goto label_168728;
        case 0x16872cu: goto label_16872c;
        case 0x168730u: goto label_168730;
        case 0x168734u: goto label_168734;
        case 0x168738u: goto label_168738;
        case 0x16873cu: goto label_16873c;
        case 0x168740u: goto label_168740;
        case 0x168744u: goto label_168744;
        case 0x168748u: goto label_168748;
        case 0x16874cu: goto label_16874c;
        case 0x168750u: goto label_168750;
        case 0x168754u: goto label_168754;
        case 0x168758u: goto label_168758;
        case 0x16875cu: goto label_16875c;
        case 0x168760u: goto label_168760;
        case 0x168764u: goto label_168764;
        case 0x168768u: goto label_168768;
        case 0x16876cu: goto label_16876c;
        case 0x168770u: goto label_168770;
        case 0x168774u: goto label_168774;
        case 0x168778u: goto label_168778;
        case 0x16877cu: goto label_16877c;
        case 0x168780u: goto label_168780;
        case 0x168784u: goto label_168784;
        case 0x168788u: goto label_168788;
        case 0x16878cu: goto label_16878c;
        case 0x168790u: goto label_168790;
        case 0x168794u: goto label_168794;
        case 0x168798u: goto label_168798;
        case 0x16879cu: goto label_16879c;
        case 0x1687a0u: goto label_1687a0;
        case 0x1687a4u: goto label_1687a4;
        case 0x1687a8u: goto label_1687a8;
        case 0x1687acu: goto label_1687ac;
        case 0x1687b0u: goto label_1687b0;
        case 0x1687b4u: goto label_1687b4;
        case 0x1687b8u: goto label_1687b8;
        case 0x1687bcu: goto label_1687bc;
        case 0x1687c0u: goto label_1687c0;
        case 0x1687c4u: goto label_1687c4;
        case 0x1687c8u: goto label_1687c8;
        case 0x1687ccu: goto label_1687cc;
        case 0x1687d0u: goto label_1687d0;
        case 0x1687d4u: goto label_1687d4;
        case 0x1687d8u: goto label_1687d8;
        case 0x1687dcu: goto label_1687dc;
        case 0x1687e0u: goto label_1687e0;
        case 0x1687e4u: goto label_1687e4;
        case 0x1687e8u: goto label_1687e8;
        case 0x1687ecu: goto label_1687ec;
        case 0x1687f0u: goto label_1687f0;
        case 0x1687f4u: goto label_1687f4;
        case 0x1687f8u: goto label_1687f8;
        case 0x1687fcu: goto label_1687fc;
        case 0x168800u: goto label_168800;
        case 0x168804u: goto label_168804;
        case 0x168808u: goto label_168808;
        case 0x16880cu: goto label_16880c;
        case 0x168810u: goto label_168810;
        case 0x168814u: goto label_168814;
        case 0x168818u: goto label_168818;
        case 0x16881cu: goto label_16881c;
        case 0x168820u: goto label_168820;
        case 0x168824u: goto label_168824;
        case 0x168828u: goto label_168828;
        case 0x16882cu: goto label_16882c;
        case 0x168830u: goto label_168830;
        case 0x168834u: goto label_168834;
        case 0x168838u: goto label_168838;
        case 0x16883cu: goto label_16883c;
        case 0x168840u: goto label_168840;
        case 0x168844u: goto label_168844;
        case 0x168848u: goto label_168848;
        case 0x16884cu: goto label_16884c;
        case 0x168850u: goto label_168850;
        case 0x168854u: goto label_168854;
        case 0x168858u: goto label_168858;
        case 0x16885cu: goto label_16885c;
        case 0x168860u: goto label_168860;
        case 0x168864u: goto label_168864;
        case 0x168868u: goto label_168868;
        case 0x16886cu: goto label_16886c;
        case 0x168870u: goto label_168870;
        case 0x168874u: goto label_168874;
        case 0x168878u: goto label_168878;
        case 0x16887cu: goto label_16887c;
        case 0x168880u: goto label_168880;
        case 0x168884u: goto label_168884;
        case 0x168888u: goto label_168888;
        case 0x16888cu: goto label_16888c;
        case 0x168890u: goto label_168890;
        case 0x168894u: goto label_168894;
        case 0x168898u: goto label_168898;
        case 0x16889cu: goto label_16889c;
        case 0x1688a0u: goto label_1688a0;
        case 0x1688a4u: goto label_1688a4;
        case 0x1688a8u: goto label_1688a8;
        case 0x1688acu: goto label_1688ac;
        case 0x1688b0u: goto label_1688b0;
        case 0x1688b4u: goto label_1688b4;
        case 0x1688b8u: goto label_1688b8;
        case 0x1688bcu: goto label_1688bc;
        case 0x1688c0u: goto label_1688c0;
        case 0x1688c4u: goto label_1688c4;
        case 0x1688c8u: goto label_1688c8;
        case 0x1688ccu: goto label_1688cc;
        case 0x1688d0u: goto label_1688d0;
        case 0x1688d4u: goto label_1688d4;
        case 0x1688d8u: goto label_1688d8;
        case 0x1688dcu: goto label_1688dc;
        case 0x1688e0u: goto label_1688e0;
        case 0x1688e4u: goto label_1688e4;
        case 0x1688e8u: goto label_1688e8;
        case 0x1688ecu: goto label_1688ec;
        case 0x1688f0u: goto label_1688f0;
        case 0x1688f4u: goto label_1688f4;
        case 0x1688f8u: goto label_1688f8;
        case 0x1688fcu: goto label_1688fc;
        case 0x168900u: goto label_168900;
        case 0x168904u: goto label_168904;
        case 0x168908u: goto label_168908;
        case 0x16890cu: goto label_16890c;
        case 0x168910u: goto label_168910;
        case 0x168914u: goto label_168914;
        case 0x168918u: goto label_168918;
        case 0x16891cu: goto label_16891c;
        case 0x168920u: goto label_168920;
        case 0x168924u: goto label_168924;
        case 0x168928u: goto label_168928;
        case 0x16892cu: goto label_16892c;
        case 0x168930u: goto label_168930;
        case 0x168934u: goto label_168934;
        case 0x168938u: goto label_168938;
        case 0x16893cu: goto label_16893c;
        case 0x168940u: goto label_168940;
        case 0x168944u: goto label_168944;
        case 0x168948u: goto label_168948;
        case 0x16894cu: goto label_16894c;
        case 0x168950u: goto label_168950;
        case 0x168954u: goto label_168954;
        case 0x168958u: goto label_168958;
        case 0x16895cu: goto label_16895c;
        case 0x168960u: goto label_168960;
        case 0x168964u: goto label_168964;
        case 0x168968u: goto label_168968;
        case 0x16896cu: goto label_16896c;
        case 0x168970u: goto label_168970;
        case 0x168974u: goto label_168974;
        case 0x168978u: goto label_168978;
        case 0x16897cu: goto label_16897c;
        case 0x168980u: goto label_168980;
        case 0x168984u: goto label_168984;
        case 0x168988u: goto label_168988;
        case 0x16898cu: goto label_16898c;
        case 0x168990u: goto label_168990;
        case 0x168994u: goto label_168994;
        case 0x168998u: goto label_168998;
        case 0x16899cu: goto label_16899c;
        case 0x1689a0u: goto label_1689a0;
        case 0x1689a4u: goto label_1689a4;
        case 0x1689a8u: goto label_1689a8;
        case 0x1689acu: goto label_1689ac;
        default: return;
    }

label_1681e0:
    // 0x1681e0: 0x46066101  sub.s       $f4, $f12, $f6
    ctx->pc = 0x1681e0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
label_1681e4:
    // 0x1681e4: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x1681e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1681e8:
    // 0x1681e8: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x1681e8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_1681ec:
    // 0x1681ec: 0x46052143  div.s       $f5, $f4, $f5
    ctx->pc = 0x1681ecu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[5] = ctx->f[4] / ctx->f[5];
label_1681f0:
    // 0x1681f0: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x1681f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_1681f4:
    // 0x1681f4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1681f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_1681f8:
    // 0x1681f8: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x1681f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1681fc:
    // 0x1681fc: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x1681fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_168200:
    // 0x168200: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x168200u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_168204:
    // 0x168204: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x168204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168208:
    // 0x168208: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x168208u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[2]));
label_16820c:
    // 0x16820c: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x16820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168210:
    // 0x168210: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x168210u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_168214:
    // 0x168214: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x168214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_168218:
    // 0x168218: 0x130b000e  beq         $t8, $t3, . + 4 + (0xE << 2)
label_16821c:
    if (ctx->pc == 0x16821Cu) {
        ctx->pc = 0x168220u;
        goto label_168220;
    }
    ctx->pc = 0x168218u;
    {
        const bool branch_taken_0x168218 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 11));
        if (branch_taken_0x168218) {
            ctx->pc = 0x168254u;
            goto label_168254;
        }
    }
    ctx->pc = 0x168220u;
label_168220:
    // 0x168220: 0x130a0008  beq         $t8, $t2, . + 4 + (0x8 << 2)
label_168224:
    if (ctx->pc == 0x168224u) {
        ctx->pc = 0x168228u;
        goto label_168228;
    }
    ctx->pc = 0x168220u;
    {
        const bool branch_taken_0x168220 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 10));
        if (branch_taken_0x168220) {
            ctx->pc = 0x168244u;
            goto label_168244;
        }
    }
    ctx->pc = 0x168228u;
label_168228:
    // 0x168228: 0x13090003  beq         $t8, $t1, . + 4 + (0x3 << 2)
label_16822c:
    if (ctx->pc == 0x16822Cu) {
        ctx->pc = 0x168230u;
        goto label_168230;
    }
    ctx->pc = 0x168228u;
    {
        const bool branch_taken_0x168228 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 9));
        if (branch_taken_0x168228) {
            ctx->pc = 0x168238u;
            goto label_168238;
        }
    }
    ctx->pc = 0x168230u;
label_168230:
    // 0x168230: 0x1000000b  b           . + 4 + (0xB << 2)
label_168234:
    if (ctx->pc == 0x168234u) {
        ctx->pc = 0x168238u;
        goto label_168238;
    }
    ctx->pc = 0x168230u;
    {
        const bool branch_taken_0x168230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168230) {
            ctx->pc = 0x168260u;
            goto label_168260;
        }
    }
    ctx->pc = 0x168238u;
label_168238:
    // 0x168238: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x168238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_16823c:
    // 0x16823c: 0x10000008  b           . + 4 + (0x8 << 2)
label_168240:
    if (ctx->pc == 0x168240u) {
        ctx->pc = 0x168240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16823Cu;
        // 0x168240: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168244u;
        goto label_168244;
    }
    ctx->pc = 0x16823Cu;
    {
        const bool branch_taken_0x16823c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16823Cu;
        // 0x168240: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16823c) {
            ctx->pc = 0x168260u;
            goto label_168260;
        }
    }
    ctx->pc = 0x168244u;
label_168244:
    // 0x168244: 0x0  nop
    ctx->pc = 0x168244u;
    // NOP
label_168248:
    // 0x168248: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x168248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_16824c:
    // 0x16824c: 0x10000004  b           . + 4 + (0x4 << 2)
label_168250:
    if (ctx->pc == 0x168250u) {
        ctx->pc = 0x168250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16824Cu;
        // 0x168250: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168254u;
        goto label_168254;
    }
    ctx->pc = 0x16824Cu;
    {
        const bool branch_taken_0x16824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16824Cu;
        // 0x168250: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16824c) {
            ctx->pc = 0x168260u;
            goto label_168260;
        }
    }
    ctx->pc = 0x168254u;
label_168254:
    // 0x168254: 0x0  nop
    ctx->pc = 0x168254u;
    // NOP
label_168258:
    // 0x168258: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x168258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
label_16825c:
    // 0x16825c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x16825cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_168260:
    // 0x168260: 0x10c80008  beq         $a2, $t0, . + 4 + (0x8 << 2)
label_168264:
    if (ctx->pc == 0x168264u) {
        ctx->pc = 0x168268u;
        goto label_168268;
    }
    ctx->pc = 0x168260u;
    {
        const bool branch_taken_0x168260 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x168260) {
            ctx->pc = 0x168284u;
            goto label_168284;
        }
    }
    ctx->pc = 0x168268u;
label_168268:
    // 0x168268: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x168268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_16826c:
    // 0x16826c: 0x32f3818  mult        $a3, $t9, $t7
    ctx->pc = 0x16826cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_168270:
    // 0x168270: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x168270u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_168274:
    // 0x168274: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x168274u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
label_168278:
    // 0x168278: 0x83382b  sltu        $a3, $a0, $v1
    ctx->pc = 0x168278u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_16827c:
    // 0x16827c: 0x14e0ffad  bnez        $a3, . + 4 + (-0x53 << 2)
label_168280:
    if (ctx->pc == 0x168280u) {
        ctx->pc = 0x168284u;
        goto label_168284;
    }
    ctx->pc = 0x16827Cu;
    {
        const bool branch_taken_0x16827c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x16827c) {
            ctx->pc = 0x168134u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x168134; return; }
        }
    }
    ctx->pc = 0x168284u;
label_168284:
    // 0x168284: 0x0  nop
    ctx->pc = 0x168284u;
    // NOP
label_168288:
    // 0x168288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16828c:
    // 0x16828c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16828cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_168290:
    // 0x168290: 0x3e00008  jr          $ra
label_168294:
    if (ctx->pc == 0x168294u) {
        ctx->pc = 0x168294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168290u;
        // 0x168294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168298u;
        goto label_168298;
    }
    ctx->pc = 0x168290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168290u;
        // 0x168294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168298u;
label_168298:
    // 0x168298: 0x0  nop
    ctx->pc = 0x168298u;
    // NOP
label_16829c:
    // 0x16829c: 0x0  nop
    ctx->pc = 0x16829cu;
    // NOP
label_1682a0:
    // 0x1682a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1682a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1682a4:
    // 0x1682a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1682a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1682a8:
    // 0x1682a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1682a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1682ac:
    // 0x1682ac: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1682acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1682b0:
    // 0x1682b0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1682b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1682b4:
    // 0x1682b4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1682b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1682b8:
    // 0x1682b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1682b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1682bc:
    // 0x1682bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1682bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1682c0:
    // 0x1682c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1682c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1682c4:
    // 0x1682c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1682c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1682c8:
    // 0x1682c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1682c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1682cc:
    // 0x1682cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1682ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1682d0:
    // 0x1682d0: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1682d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1682d4:
    // 0x1682d4: 0xc6cd0010  lwc1        $f13, 0x10($s6)
    ctx->pc = 0x1682d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1682d8:
    // 0x1682d8: 0x8491001c  lh          $s1, 0x1C($a0)
    ctx->pc = 0x1682d8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
label_1682dc:
    // 0x1682dc: 0x8492001e  lh          $s2, 0x1E($a0)
    ctx->pc = 0x1682dcu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
label_1682e0:
    // 0x1682e0: 0x8ed40008  lw          $s4, 0x8($s6)
    ctx->pc = 0x1682e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1682e4:
    // 0x1682e4: 0x86c20018  lh          $v0, 0x18($s6)
    ctx->pc = 0x1682e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 24)));
label_1682e8:
    // 0x1682e8: 0xc6140000  lwc1        $f20, 0x0($s0)
    ctx->pc = 0x1682e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1682ec:
    // 0x1682ec: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1682ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1682f0:
    // 0x1682f0: 0x460ca034  c.lt.s      $f20, $f12
    ctx->pc = 0x1682f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1682f4:
    // 0x1682f4: 0x0  nop
    ctx->pc = 0x1682f4u;
    // NOP
label_1682f8:
    // 0x1682f8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1682fc:
    if (ctx->pc == 0x1682FCu) {
        ctx->pc = 0x1682FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1682F8u;
        // 0x1682fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168300u;
        goto label_168300;
    }
    ctx->pc = 0x1682F8u;
    {
        const bool branch_taken_0x1682f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1682FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1682F8u;
        // 0x1682fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682f8) {
            ctx->pc = 0x168338u;
            goto label_168338;
        }
    }
    ctx->pc = 0x168300u;
label_168300:
    // 0x168300: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_168304:
    if (ctx->pc == 0x168304u) {
        ctx->pc = 0x168304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168300u;
        // 0x168304: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168308u;
        goto label_168308;
    }
    ctx->pc = 0x168300u;
    {
        const bool branch_taken_0x168300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168300u;
        // 0x168304: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168300) {
            ctx->pc = 0x16831Cu;
            goto label_16831c;
        }
    }
    ctx->pc = 0x168308u;
label_168308:
    // 0x168308: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x168308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16830c:
    // 0x16830c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x16830cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_168310:
    // 0x168310: 0xc05a1c0  jal         func_168700
label_168314:
    if (ctx->pc == 0x168314u) {
        ctx->pc = 0x168314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168310u;
        // 0x168314: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168318u;
        goto label_168318;
    }
    ctx->pc = 0x168310u;
    SET_GPR_U32(ctx, 31, 0x168318u);
    ctx->pc = 0x168314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168310u;
    // 0x168314: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168700u;
    goto label_168700;
    ctx->pc = 0x168318u;
label_168318:
    // 0x168318: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x168318u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16831c:
    // 0x16831c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16831cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_168320:
    // 0x168320: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x168320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_168324:
    // 0x168324: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_168328:
    // 0x168328: 0xc05a18c  jal         func_168630
label_16832c:
    if (ctx->pc == 0x16832Cu) {
        ctx->pc = 0x16832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168328u;
        // 0x16832c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168330u;
        goto label_168330;
    }
    ctx->pc = 0x168328u;
    SET_GPR_U32(ctx, 31, 0x168330u);
    ctx->pc = 0x16832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168328u;
    // 0x16832c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168630u;
    goto label_168630;
    ctx->pc = 0x168330u;
label_168330:
    // 0x168330: 0x10000006  b           . + 4 + (0x6 << 2)
label_168334:
    if (ctx->pc == 0x168334u) {
        ctx->pc = 0x168338u;
        goto label_168338;
    }
    ctx->pc = 0x168330u;
    {
        const bool branch_taken_0x168330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168330) {
            ctx->pc = 0x16834Cu;
            goto label_16834c;
        }
    }
    ctx->pc = 0x168338u;
label_168338:
    // 0x168338: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168338u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16833c:
    // 0x16833c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16833cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_168340:
    // 0x168340: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x168340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_168344:
    // 0x168344: 0xc05a124  jal         func_168490
label_168348:
    if (ctx->pc == 0x168348u) {
        ctx->pc = 0x168348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168344u;
        // 0x168348: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16834Cu;
        goto label_16834c;
    }
    ctx->pc = 0x168344u;
    SET_GPR_U32(ctx, 31, 0x16834Cu);
    ctx->pc = 0x168348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168344u;
    // 0x168348: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168490u;
    goto label_168490;
    ctx->pc = 0x16834Cu;
label_16834c:
    // 0x16834c: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_168350:
    if (ctx->pc == 0x168350u) {
        ctx->pc = 0x168350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16834Cu;
        // 0x168350: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168354u;
        goto label_168354;
    }
    ctx->pc = 0x16834Cu;
    {
        const bool branch_taken_0x16834c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x168350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16834Cu;
        // 0x168350: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16834c) {
            ctx->pc = 0x168358u;
            goto label_168358;
        }
    }
    ctx->pc = 0x168354u;
label_168354:
    // 0x168354: 0xa6c30018  sh          $v1, 0x18($s6)
    ctx->pc = 0x168354u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 24), (uint16_t)GPR_U32(ctx, 3));
label_168358:
    // 0x168358: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x168358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16835c:
    // 0x16835c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16835cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168360:
    // 0x168360: 0x0  nop
    ctx->pc = 0x168360u;
    // NOP
label_168364:
    // 0x168364: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x168364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168368:
    // 0x168368: 0x0  nop
    ctx->pc = 0x168368u;
    // NOP
label_16836c:
    // 0x16836c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_168370:
    if (ctx->pc == 0x168370u) {
        ctx->pc = 0x168374u;
        goto label_168374;
    }
    ctx->pc = 0x16836Cu;
    {
        const bool branch_taken_0x16836c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16836c) {
            ctx->pc = 0x168378u;
            goto label_168378;
        }
    }
    ctx->pc = 0x168374u;
label_168374:
    // 0x168374: 0xa6c00018  sh          $zero, 0x18($s6)
    ctx->pc = 0x168374u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 24), (uint16_t)GPR_U32(ctx, 0));
label_168378:
    // 0x168378: 0x8ec30068  lw          $v1, 0x68($s6)
    ctx->pc = 0x168378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_16837c:
    // 0x16837c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_168380:
    if (ctx->pc == 0x168380u) {
        ctx->pc = 0x168380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16837Cu;
        // 0x168380: 0x26d10020  addiu       $s1, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168384u;
        goto label_168384;
    }
    ctx->pc = 0x16837Cu;
    {
        const bool branch_taken_0x16837c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16837Cu;
        // 0x168380: 0x26d10020  addiu       $s1, $s6, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16837c) {
            ctx->pc = 0x168458u;
            goto label_168458;
        }
    }
    ctx->pc = 0x168384u;
label_168384:
    // 0x168384: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x168384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168388:
    // 0x168388: 0xc6340000  lwc1        $f20, 0x0($s1)
    ctx->pc = 0x168388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16838c:
    // 0x16838c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16838cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168390:
    // 0x168390: 0x0  nop
    ctx->pc = 0x168390u;
    // NOP
label_168394:
    // 0x168394: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x168394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168398:
    // 0x168398: 0x0  nop
    ctx->pc = 0x168398u;
    // NOP
label_16839c:
    // 0x16839c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_1683a0:
    if (ctx->pc == 0x1683A0u) {
        ctx->pc = 0x1683A4u;
        goto label_1683a4;
    }
    ctx->pc = 0x16839Cu;
    {
        const bool branch_taken_0x16839c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16839c) {
            ctx->pc = 0x168448u;
            goto label_168448;
        }
    }
    ctx->pc = 0x1683A4u;
label_1683a4:
    // 0x1683a4: 0x86350012  lh          $s5, 0x12($s1)
    ctx->pc = 0x1683a4u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_1683a8:
    // 0x1683a8: 0xc6cd0010  lwc1        $f13, 0x10($s6)
    ctx->pc = 0x1683a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1683ac:
    // 0x1683ac: 0x86340010  lh          $s4, 0x10($s1)
    ctx->pc = 0x1683acu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
label_1683b0:
    // 0x1683b0: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1683b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1683b4:
    // 0x1683b4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1683b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1683b8:
    // 0x1683b8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1683b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1683bc:
    // 0x1683bc: 0x8ed30008  lw          $s3, 0x8($s6)
    ctx->pc = 0x1683bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1683c0:
    // 0x1683c0: 0x86220014  lh          $v0, 0x14($s1)
    ctx->pc = 0x1683c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_1683c4:
    // 0x1683c4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_1683c8:
    if (ctx->pc == 0x1683C8u) {
        ctx->pc = 0x1683C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683C4u;
        // 0x1683c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1683CCu;
        goto label_1683cc;
    }
    ctx->pc = 0x1683C4u;
    {
        const bool branch_taken_0x1683c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1683C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683C4u;
        // 0x1683c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683c4) {
            ctx->pc = 0x168404u;
            goto label_168404;
        }
    }
    ctx->pc = 0x1683CCu;
label_1683cc:
    // 0x1683cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1683d0:
    if (ctx->pc == 0x1683D0u) {
        ctx->pc = 0x1683D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683CCu;
        // 0x1683d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1683D4u;
        goto label_1683d4;
    }
    ctx->pc = 0x1683CCu;
    {
        const bool branch_taken_0x1683cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1683D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683CCu;
        // 0x1683d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1683cc) {
            ctx->pc = 0x1683E8u;
            goto label_1683e8;
        }
    }
    ctx->pc = 0x1683D4u;
label_1683d4:
    // 0x1683d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1683d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1683d8:
    // 0x1683d8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1683d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1683dc:
    // 0x1683dc: 0xc05a1c0  jal         func_168700
label_1683e0:
    if (ctx->pc == 0x1683E0u) {
        ctx->pc = 0x1683E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683DCu;
        // 0x1683e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1683E4u;
        goto label_1683e4;
    }
    ctx->pc = 0x1683DCu;
    SET_GPR_U32(ctx, 31, 0x1683E4u);
    ctx->pc = 0x1683E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1683DCu;
    // 0x1683e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168700u;
    goto label_168700;
    ctx->pc = 0x1683E4u;
label_1683e4:
    // 0x1683e4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1683e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1683e8:
    // 0x1683e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1683e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1683ec:
    // 0x1683ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1683ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1683f0:
    // 0x1683f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1683f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1683f4:
    // 0x1683f4: 0xc05a18c  jal         func_168630
label_1683f8:
    if (ctx->pc == 0x1683F8u) {
        ctx->pc = 0x1683F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1683F4u;
        // 0x1683f8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1683FCu;
        goto label_1683fc;
    }
    ctx->pc = 0x1683F4u;
    SET_GPR_U32(ctx, 31, 0x1683FCu);
    ctx->pc = 0x1683F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1683F4u;
    // 0x1683f8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168630u;
    goto label_168630;
    ctx->pc = 0x1683FCu;
label_1683fc:
    // 0x1683fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_168400:
    if (ctx->pc == 0x168400u) {
        ctx->pc = 0x168404u;
        goto label_168404;
    }
    ctx->pc = 0x1683FCu;
    {
        const bool branch_taken_0x1683fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1683fc) {
            ctx->pc = 0x16841Cu;
            goto label_16841c;
        }
    }
    ctx->pc = 0x168404u;
label_168404:
    // 0x168404: 0x0  nop
    ctx->pc = 0x168404u;
    // NOP
label_168408:
    // 0x168408: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x168408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16840c:
    // 0x16840c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16840cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_168410:
    // 0x168410: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x168410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_168414:
    // 0x168414: 0xc05a124  jal         func_168490
label_168418:
    if (ctx->pc == 0x168418u) {
        ctx->pc = 0x168418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168414u;
        // 0x168418: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16841Cu;
        goto label_16841c;
    }
    ctx->pc = 0x168414u;
    SET_GPR_U32(ctx, 31, 0x16841Cu);
    ctx->pc = 0x168418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168414u;
    // 0x168418: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168490u;
    goto label_168490;
    ctx->pc = 0x16841Cu;
label_16841c:
    // 0x16841c: 0x0  nop
    ctx->pc = 0x16841cu;
    // NOP
label_168420:
    // 0x168420: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_168424:
    if (ctx->pc == 0x168424u) {
        ctx->pc = 0x168424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168420u;
        // 0x168424: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168428u;
        goto label_168428;
    }
    ctx->pc = 0x168420u;
    {
        const bool branch_taken_0x168420 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x168424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168420u;
        // 0x168424: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168420) {
            ctx->pc = 0x16842Cu;
            goto label_16842c;
        }
    }
    ctx->pc = 0x168428u;
label_168428:
    // 0x168428: 0xa6230014  sh          $v1, 0x14($s1)
    ctx->pc = 0x168428u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 3));
label_16842c:
    // 0x16842c: 0x0  nop
    ctx->pc = 0x16842cu;
    // NOP
label_168430:
    // 0x168430: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x168430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_168434:
    // 0x168434: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x168434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168438:
    // 0x168438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x168438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16843c:
    // 0x16843c: 0x0  nop
    ctx->pc = 0x16843cu;
    // NOP
label_168440:
    // 0x168440: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x168440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_168444:
    // 0x168444: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x168444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_168448:
    // 0x168448: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x168448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16844c:
    // 0x16844c: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x16844cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_168450:
    // 0x168450: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
label_168454:
    if (ctx->pc == 0x168454u) {
        ctx->pc = 0x168454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168450u;
        // 0x168454: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168458u;
        goto label_168458;
    }
    ctx->pc = 0x168450u;
    {
        const bool branch_taken_0x168450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168450u;
        // 0x168454: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168450) {
            ctx->pc = 0x168388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168388;
        }
    }
    ctx->pc = 0x168458u;
label_168458:
    // 0x168458: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x168458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_16845c:
    // 0x16845c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x16845cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_168460:
    // 0x168460: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x168460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_168464:
    // 0x168464: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x168464u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_168468:
    // 0x168468: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x168468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16846c:
    // 0x16846c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16846cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_168470:
    // 0x168470: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x168470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_168474:
    // 0x168474: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x168474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_168478:
    // 0x168478: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x168478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16847c:
    // 0x16847c: 0x3e00008  jr          $ra
label_168480:
    if (ctx->pc == 0x168480u) {
        ctx->pc = 0x168480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16847Cu;
        // 0x168480: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168484u;
        goto label_168484;
    }
    ctx->pc = 0x16847Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16847Cu;
        // 0x168480: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16847Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168484u;
label_168484:
    // 0x168484: 0x0  nop
    ctx->pc = 0x168484u;
    // NOP
label_168488:
    // 0x168488: 0x0  nop
    ctx->pc = 0x168488u;
    // NOP
label_16848c:
    // 0x16848c: 0x0  nop
    ctx->pc = 0x16848cu;
    // NOP
label_168490:
    // 0x168490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_168494:
    // 0x168494: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x168494u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_168498:
    // 0x168498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16849c:
    // 0x16849c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x16849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1684a0:
    // 0x1684a0: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1684a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1684a4:
    // 0x1684a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1684a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1684a8:
    // 0x1684a8: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1684a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1684ac:
    // 0x1684ac: 0x10000058  b           . + 4 + (0x58 << 2)
label_1684b0:
    if (ctx->pc == 0x1684B0u) {
        ctx->pc = 0x1684B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684ACu;
        // 0x1684b0: 0x256b8940  addiu       $t3, $t3, -0x76C0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294936896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1684B4u;
        goto label_1684b4;
    }
    ctx->pc = 0x1684ACu;
    {
        const bool branch_taken_0x1684ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1684B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684ACu;
        // 0x1684b0: 0x256b8940  addiu       $t3, $t3, -0x76C0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294936896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684ac) {
            ctx->pc = 0x168610u;
            goto label_168610;
        }
    }
    ctx->pc = 0x1684B4u;
label_1684b4:
    // 0x1684b4: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x1684b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1684b8:
    // 0x1684b8: 0xa2202  srl         $a0, $t2, 8
    ctx->pc = 0x1684b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
label_1684bc:
    // 0x1684bc: 0x314e00ff  andi        $t6, $t2, 0xFF
    ctx->pc = 0x1684bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_1684c0:
    // 0x1684c0: 0x3098001f  andi        $t8, $a0, 0x1F
    ctx->pc = 0x1684c0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_1684c4:
    // 0x1684c4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1684c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1684c8:
    // 0x1684c8: 0xa2342  srl         $a0, $t2, 13
    ctx->pc = 0x1684c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 13));
label_1684cc:
    // 0x1684cc: 0xa5482  srl         $t2, $t2, 18
    ctx->pc = 0x1684ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 18));
label_1684d0:
    // 0x1684d0: 0x314f3fff  andi        $t7, $t2, 0x3FFF
    ctx->pc = 0x1684d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16383);
label_1684d4:
    // 0x1684d4: 0x1c6502b  sltu        $t2, $t6, $a2
    ctx->pc = 0x1684d4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1684d8:
    // 0x1684d8: 0x15400048  bnez        $t2, . + 4 + (0x48 << 2)
label_1684dc:
    if (ctx->pc == 0x1684DCu) {
        ctx->pc = 0x1684DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684D8u;
        // 0x1684dc: 0x30840007  andi        $a0, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1684E0u;
        goto label_1684e0;
    }
    ctx->pc = 0x1684D8u;
    {
        const bool branch_taken_0x1684d8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1684DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684D8u;
        // 0x1684dc: 0x30840007  andi        $a0, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684d8) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1684E0u;
label_1684e0:
    // 0x1684e0: 0xee082b  sltu        $at, $a3, $t6
    ctx->pc = 0x1684e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_1684e4:
    // 0x1684e4: 0x14200045  bnez        $at, . + 4 + (0x45 << 2)
label_1684e8:
    if (ctx->pc == 0x1684E8u) {
        ctx->pc = 0x1684ECu;
        goto label_1684ec;
    }
    ctx->pc = 0x1684E4u;
    {
        const bool branch_taken_0x1684e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1684e4) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1684ECu;
label_1684ec:
    // 0x1684ec: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_1684f0:
    if (ctx->pc == 0x1684F0u) {
        ctx->pc = 0x1684F4u;
        goto label_1684f4;
    }
    ctx->pc = 0x1684ECu;
    {
        const bool branch_taken_0x1684ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1684ec) {
            ctx->pc = 0x168500u;
            goto label_168500;
        }
    }
    ctx->pc = 0x1684F4u;
label_1684f4:
    // 0x1684f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1684f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1684f8:
    // 0x1684f8: 0x10000025  b           . + 4 + (0x25 << 2)
label_1684fc:
    if (ctx->pc == 0x1684FCu) {
        ctx->pc = 0x168500u;
        goto label_168500;
    }
    ctx->pc = 0x1684F8u;
    {
        const bool branch_taken_0x1684f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1684f8) {
            ctx->pc = 0x168590u;
            goto label_168590;
        }
    }
    ctx->pc = 0x168500u;
label_168500:
    // 0x168500: 0x148c0003  bne         $a0, $t4, . + 4 + (0x3 << 2)
label_168504:
    if (ctx->pc == 0x168504u) {
        ctx->pc = 0x168508u;
        goto label_168508;
    }
    ctx->pc = 0x168500u;
    {
        const bool branch_taken_0x168500 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 12));
        if (branch_taken_0x168500) {
            ctx->pc = 0x168510u;
            goto label_168510;
        }
    }
    ctx->pc = 0x168508u;
label_168508:
    // 0x168508: 0x10000021  b           . + 4 + (0x21 << 2)
label_16850c:
    if (ctx->pc == 0x16850Cu) {
        ctx->pc = 0x16850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168508u;
        // 0x16850c: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168510u;
        goto label_168510;
    }
    ctx->pc = 0x168508u;
    {
        const bool branch_taken_0x168508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168508u;
        // 0x16850c: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168508) {
            ctx->pc = 0x168590u;
            goto label_168590;
        }
    }
    ctx->pc = 0x168510u;
label_168510:
    // 0x168510: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x168510u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168514:
    // 0x168514: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x168514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_168518:
    // 0x168518: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x168518u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16851c:
    // 0x16851c: 0x10000005  b           . + 4 + (0x5 << 2)
label_168520:
    if (ctx->pc == 0x168520u) {
        ctx->pc = 0x168520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16851Cu;
        // 0x168520: 0x48080  sll         $s0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168524u;
        goto label_168524;
    }
    ctx->pc = 0x16851Cu;
    {
        const bool branch_taken_0x16851c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16851Cu;
        // 0x168520: 0x48080  sll         $s0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16851c) {
            ctx->pc = 0x168534u;
            goto label_168534;
        }
    }
    ctx->pc = 0x168524u;
label_168524:
    // 0x168524: 0x0  nop
    ctx->pc = 0x168524u;
    // NOP
label_168528:
    // 0x168528: 0x330c821  addu        $t9, $t9, $s0
    ctx->pc = 0x168528u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 16)));
label_16852c:
    // 0x16852c: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x16852cu;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
label_168530:
    // 0x168530: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x168530u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_168534:
    // 0x168534: 0x0  nop
    ctx->pc = 0x168534u;
    // NOP
label_168538:
    // 0x168538: 0x795021  addu        $t2, $v1, $t9
    ctx->pc = 0x168538u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
label_16853c:
    // 0x16853c: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x16853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168540:
    // 0x168540: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x168540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168544:
    // 0x168544: 0x0  nop
    ctx->pc = 0x168544u;
    // NOP
label_168548:
    // 0x168548: 0x4501fff6  bc1t        . + 4 + (-0xA << 2)
label_16854c:
    if (ctx->pc == 0x16854Cu) {
        ctx->pc = 0x16854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168548u;
        // 0x16854c: 0xd5080  sll         $t2, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168550u;
        goto label_168550;
    }
    ctx->pc = 0x168548u;
    {
        const bool branch_taken_0x168548 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168548u;
        // 0x16854c: 0xd5080  sll         $t2, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168548) {
            ctx->pc = 0x168524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168524;
        }
    }
    ctx->pc = 0x168550u;
label_168550:
    // 0x168550: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x168550u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_168554:
    // 0x168554: 0xc5450000  lwc1        $f5, 0x0($t2)
    ctx->pc = 0x168554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_168558:
    // 0x168558: 0x46066101  sub.s       $f4, $f12, $f6
    ctx->pc = 0x168558u;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
label_16855c:
    // 0x16855c: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x16855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_168560:
    // 0x168560: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x168560u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_168564:
    // 0x168564: 0x46052143  div.s       $f5, $f4, $f5
    ctx->pc = 0x168564u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[5] = ctx->f[4] / ctx->f[5];
label_168568:
    // 0x168568: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x168568u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_16856c:
    // 0x16856c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x16856cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_168570:
    // 0x168570: 0xc5430004  lwc1        $f3, 0x4($t2)
    ctx->pc = 0x168570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_168574:
    // 0x168574: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x168574u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_168578:
    // 0x168578: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x168578u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_16857c:
    // 0x16857c: 0xc541000c  lwc1        $f1, 0xC($t2)
    ctx->pc = 0x16857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168580:
    // 0x168580: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x168580u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[2]));
label_168584:
    // 0x168584: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x168584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168588:
    // 0x168588: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x168588u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_16858c:
    // 0x16858c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16858cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_168590:
    // 0x168590: 0xe50c0  sll         $t2, $t6, 3
    ctx->pc = 0x168590u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
label_168594:
    // 0x168594: 0x14e5021  addu        $t2, $t2, $t6
    ctx->pc = 0x168594u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
label_168598:
    // 0x168598: 0x2f010006  sltiu       $at, $t8, 0x6
    ctx->pc = 0x168598u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_16859c:
    // 0x16859c: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x16859cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1685a0:
    // 0x1685a0: 0xaa6821  addu        $t5, $a1, $t2
    ctx->pc = 0x1685a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1685a4:
    // 0x1685a4: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_1685a8:
    if (ctx->pc == 0x1685A8u) {
        ctx->pc = 0x1685A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685A4u;
        // 0x1685a8: 0xa1a0008c  sb          $zero, 0x8C($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 140), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685ACu;
        goto label_1685ac;
    }
    ctx->pc = 0x1685A4u;
    {
        const bool branch_taken_0x1685a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685A4u;
        // 0x1685a8: 0xa1a0008c  sb          $zero, 0x8C($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 140), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685a4) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1685ACu;
label_1685ac:
    // 0x1685ac: 0x185080  sll         $t2, $t8, 2
    ctx->pc = 0x1685acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
label_1685b0:
    // 0x1685b0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1685b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_1685b4:
    // 0x1685b4: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x1685b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1685b8:
    // 0x1685b8: 0x1400008  jr          $t2
label_1685bc:
    if (ctx->pc == 0x1685BCu) {
        ctx->pc = 0x1685C0u;
        goto label_1685c0;
    }
    ctx->pc = 0x1685B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 10);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1685B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1685C0u;
label_1685c0:
    // 0x1685c0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1685c4:
    if (ctx->pc == 0x1685C4u) {
        ctx->pc = 0x1685C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685C0u;
        // 0x1685c4: 0xe5a00000  swc1        $f0, 0x0($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685C8u;
        goto label_1685c8;
    }
    ctx->pc = 0x1685C0u;
    {
        const bool branch_taken_0x1685c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685C0u;
        // 0x1685c4: 0xe5a00000  swc1        $f0, 0x0($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685c0) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1685C8u;
label_1685c8:
    // 0x1685c8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1685cc:
    if (ctx->pc == 0x1685CCu) {
        ctx->pc = 0x1685CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685C8u;
        // 0x1685cc: 0xe5a00004  swc1        $f0, 0x4($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685D0u;
        goto label_1685d0;
    }
    ctx->pc = 0x1685C8u;
    {
        const bool branch_taken_0x1685c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685C8u;
        // 0x1685cc: 0xe5a00004  swc1        $f0, 0x4($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685c8) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1685D0u;
label_1685d0:
    // 0x1685d0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1685d4:
    if (ctx->pc == 0x1685D4u) {
        ctx->pc = 0x1685D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685D0u;
        // 0x1685d4: 0xe5a00008  swc1        $f0, 0x8($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685D8u;
        goto label_1685d8;
    }
    ctx->pc = 0x1685D0u;
    {
        const bool branch_taken_0x1685d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685D0u;
        // 0x1685d4: 0xe5a00008  swc1        $f0, 0x8($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685d0) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1685D8u;
label_1685d8:
    // 0x1685d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1685dc:
    if (ctx->pc == 0x1685DCu) {
        ctx->pc = 0x1685DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685D8u;
        // 0x1685dc: 0xe5a00010  swc1        $f0, 0x10($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685E0u;
        goto label_1685e0;
    }
    ctx->pc = 0x1685D8u;
    {
        const bool branch_taken_0x1685d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685D8u;
        // 0x1685dc: 0xe5a00010  swc1        $f0, 0x10($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685d8) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1685E0u;
label_1685e0:
    // 0x1685e0: 0x15c00006  bnez        $t6, . + 4 + (0x6 << 2)
label_1685e4:
    if (ctx->pc == 0x1685E4u) {
        ctx->pc = 0x1685E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685E0u;
        // 0x1685e4: 0xe5a00014  swc1        $f0, 0x14($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685E8u;
        goto label_1685e8;
    }
    ctx->pc = 0x1685E0u;
    {
        const bool branch_taken_0x1685e0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1685E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685E0u;
        // 0x1685e4: 0xe5a00014  swc1        $f0, 0x14($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685e0) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1685E8u;
label_1685e8:
    // 0x1685e8: 0xc5a00014  lwc1        $f0, 0x14($t5)
    ctx->pc = 0x1685e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1685ec:
    // 0x1685ec: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1685ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_1685f0:
    // 0x1685f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1685f4:
    if (ctx->pc == 0x1685F4u) {
        ctx->pc = 0x1685F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685F0u;
        // 0x1685f4: 0xe5a00014  swc1        $f0, 0x14($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685F8u;
        goto label_1685f8;
    }
    ctx->pc = 0x1685F0u;
    {
        const bool branch_taken_0x1685f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685F0u;
        // 0x1685f4: 0xe5a00014  swc1        $f0, 0x14($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685f0) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1685F8u;
label_1685f8:
    // 0x1685f8: 0xe5a00018  swc1        $f0, 0x18($t5)
    ctx->pc = 0x1685f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 24), bits); }
label_1685fc:
    // 0x1685fc: 0x0  nop
    ctx->pc = 0x1685fcu;
    // NOP
label_168600:
    // 0x168600: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x168600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_168604:
    // 0x168604: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x168604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_168608:
    // 0x168608: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x168608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16860c:
    // 0x16860c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_168610:
    // 0x168610: 0x128202b  sltu        $a0, $t1, $t0
    ctx->pc = 0x168610u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_168614:
    // 0x168614: 0x1480ffa7  bnez        $a0, . + 4 + (-0x59 << 2)
label_168618:
    if (ctx->pc == 0x168618u) {
        ctx->pc = 0x16861Cu;
        goto label_16861c;
    }
    ctx->pc = 0x168614u;
    {
        const bool branch_taken_0x168614 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x168614) {
            ctx->pc = 0x1684B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1684b4;
        }
    }
    ctx->pc = 0x16861Cu;
label_16861c:
    // 0x16861c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16861cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_168620:
    // 0x168620: 0x3e00008  jr          $ra
label_168624:
    if (ctx->pc == 0x168624u) {
        ctx->pc = 0x168624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168620u;
        // 0x168624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168628u;
        goto label_168628;
    }
    ctx->pc = 0x168620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168620u;
        // 0x168624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168628u;
label_168628:
    // 0x168628: 0x0  nop
    ctx->pc = 0x168628u;
    // NOP
label_16862c:
    // 0x16862c: 0x0  nop
    ctx->pc = 0x16862cu;
    // NOP
label_168630:
    // 0x168630: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x168630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_168634:
    // 0x168634: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x168634u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_168638:
    // 0x168638: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x168638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16863c:
    // 0x16863c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16863cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_168640:
    // 0x168640: 0x1420002c  bnez        $at, . + 4 + (0x2C << 2)
label_168644:
    if (ctx->pc == 0x168644u) {
        ctx->pc = 0x168644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168640u;
        // 0x168644: 0x834021  addu        $t0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168648u;
        goto label_168648;
    }
    ctx->pc = 0x168640u;
    {
        const bool branch_taken_0x168640 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x168644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168640u;
        // 0x168644: 0x834021  addu        $t0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168640) {
            ctx->pc = 0x1686F4u;
            goto label_1686f4;
        }
    }
    ctx->pc = 0x168648u;
label_168648:
    // 0x168648: 0x46006087  neg.s       $f2, $f12
    ctx->pc = 0x168648u;
    ctx->f[2] = FPU_NEG_S(ctx->f[12]);
label_16864c:
    // 0x16864c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16864cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168650:
    // 0x168650: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x168650u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168654:
    // 0x168654: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x168654u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168658:
    // 0x168658: 0x9104008d  lbu         $a0, 0x8D($t0)
    ctx->pc = 0x168658u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 141)));
label_16865c:
    // 0x16865c: 0x25230003  addiu       $v1, $t1, 0x3
    ctx->pc = 0x16865cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
label_168660:
    // 0x168660: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x168660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
label_168664:
    // 0x168664: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x168664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_168668:
    // 0x168668: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_16866c:
    if (ctx->pc == 0x16866Cu) {
        ctx->pc = 0x16866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168668u;
        // 0x16866c: 0x10a1821  addu        $v1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168670u;
        goto label_168670;
    }
    ctx->pc = 0x168668u;
    {
        const bool branch_taken_0x168668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168668u;
        // 0x16866c: 0x10a1821  addu        $v1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168668) {
            ctx->pc = 0x168688u;
            goto label_168688;
        }
    }
    ctx->pc = 0x168670u;
label_168670:
    // 0x168670: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x168670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168674:
    // 0x168674: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x168674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168678:
    // 0x168678: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x168678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_16867c:
    // 0x16867c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x16867cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_168680:
    // 0x168680: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x168680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_168684:
    // 0x168684: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x168684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_168688:
    // 0x168688: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x168688u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_16868c:
    // 0x16868c: 0x29230003  slti        $v1, $t1, 0x3
    ctx->pc = 0x16868cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
label_168690:
    // 0x168690: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_168694:
    if (ctx->pc == 0x168694u) {
        ctx->pc = 0x168694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168690u;
        // 0x168694: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168698u;
        goto label_168698;
    }
    ctx->pc = 0x168690u;
    {
        const bool branch_taken_0x168690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168690u;
        // 0x168694: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168690) {
            ctx->pc = 0x168658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168658;
        }
    }
    ctx->pc = 0x168698u;
label_168698:
    // 0x168698: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x168698u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16869c:
    // 0x16869c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16869cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1686a0:
    // 0x1686a0: 0x9104008d  lbu         $a0, 0x8D($t0)
    ctx->pc = 0x1686a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 141)));
label_1686a4:
    // 0x1686a4: 0x1471804  sllv        $v1, $a3, $t2
    ctx->pc = 0x1686a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
label_1686a8:
    // 0x1686a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1686a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1686ac:
    // 0x1686ac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1686b0:
    if (ctx->pc == 0x1686B0u) {
        ctx->pc = 0x1686B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686ACu;
        // 0x1686b0: 0x1091821  addu        $v1, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1686B4u;
        goto label_1686b4;
    }
    ctx->pc = 0x1686ACu;
    {
        const bool branch_taken_0x1686ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1686B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686ACu;
        // 0x1686b0: 0x1091821  addu        $v1, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686ac) {
            ctx->pc = 0x1686CCu;
            goto label_1686cc;
        }
    }
    ctx->pc = 0x1686B4u;
label_1686b4:
    // 0x1686b4: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1686b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1686b8:
    // 0x1686b8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1686b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1686bc:
    // 0x1686bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1686bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1686c0:
    // 0x1686c0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1686c0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_1686c4:
    // 0x1686c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1686c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1686c8:
    // 0x1686c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1686c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1686cc:
    // 0x1686cc: 0x0  nop
    ctx->pc = 0x1686ccu;
    // NOP
label_1686d0:
    // 0x1686d0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1686d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1686d4:
    // 0x1686d4: 0x29430003  slti        $v1, $t2, 0x3
    ctx->pc = 0x1686d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
label_1686d8:
    // 0x1686d8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1686dc:
    if (ctx->pc == 0x1686DCu) {
        ctx->pc = 0x1686DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686D8u;
        // 0x1686dc: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1686E0u;
        goto label_1686e0;
    }
    ctx->pc = 0x1686D8u;
    {
        const bool branch_taken_0x1686d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1686DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686D8u;
        // 0x1686dc: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686d8) {
            ctx->pc = 0x1686A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1686a0;
        }
    }
    ctx->pc = 0x1686E0u;
label_1686e0:
    // 0x1686e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1686e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1686e4:
    // 0x1686e4: 0xa100008c  sb          $zero, 0x8C($t0)
    ctx->pc = 0x1686e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 140), (uint8_t)GPR_U32(ctx, 0));
label_1686e8:
    // 0x1686e8: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x1686e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1686ec:
    // 0x1686ec: 0x1020ffd8  beqz        $at, . + 4 + (-0x28 << 2)
label_1686f0:
    if (ctx->pc == 0x1686F0u) {
        ctx->pc = 0x1686F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686ECu;
        // 0x1686f0: 0x25080090  addiu       $t0, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1686F4u;
        goto label_1686f4;
    }
    ctx->pc = 0x1686ECu;
    {
        const bool branch_taken_0x1686ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1686F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686ECu;
        // 0x1686f0: 0x25080090  addiu       $t0, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686ec) {
            ctx->pc = 0x168650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168650;
        }
    }
    ctx->pc = 0x1686F4u;
label_1686f4:
    // 0x1686f4: 0x0  nop
    ctx->pc = 0x1686f4u;
    // NOP
label_1686f8:
    // 0x1686f8: 0x3e00008  jr          $ra
label_1686fc:
    if (ctx->pc == 0x1686FCu) {
        ctx->pc = 0x168700u;
        goto label_168700;
    }
    ctx->pc = 0x1686F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1686F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168700u;
label_168700:
    // 0x168700: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x168700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_168704:
    // 0x168704: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x168704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_168708:
    // 0x168708: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x168708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_16870c:
    // 0x16870c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x16870cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_168710:
    // 0x168710: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x168710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_168714:
    // 0x168714: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x168714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_168718:
    // 0x168718: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x168718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_16871c:
    // 0x16871c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x16871cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_168720:
    // 0x168720: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x168720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_168724:
    // 0x168724: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x168724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_168728:
    // 0x168728: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x168728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_16872c:
    // 0x16872c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x16872cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_168730:
    // 0x168730: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x168730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_168734:
    // 0x168734: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x168734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_168738:
    // 0x168738: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x168738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_16873c:
    // 0x16873c: 0x274082a  slt         $at, $s3, $s4
    ctx->pc = 0x16873cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_168740:
    // 0x168740: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x168740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_168744:
    // 0x168744: 0xa38821  addu        $s1, $a1, $v1
    ctx->pc = 0x168744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_168748:
    // 0x168748: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x168748u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_16874c:
    // 0x16874c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x16874cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_168750:
    // 0x168750: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x168750u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_168754:
    // 0x168754: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x168754u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_168758:
    // 0x168758: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x168758u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16875c:
    // 0x16875c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x16875cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_168760:
    // 0x168760: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x168760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_168764:
    // 0x168764: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_168768:
    if (ctx->pc == 0x168768u) {
        ctx->pc = 0x168768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168764u;
        // 0x168768: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16876Cu;
        goto label_16876c;
    }
    ctx->pc = 0x168764u;
    {
        const bool branch_taken_0x168764 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x168768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168764u;
        // 0x168768: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168764) {
            ctx->pc = 0x16878Cu;
            goto label_16878c;
        }
    }
    ctx->pc = 0x16876Cu;
label_16876c:
    // 0x16876c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x16876cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_168770:
    // 0x168770: 0xa060008d  sb          $zero, 0x8D($v1)
    ctx->pc = 0x168770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 141), (uint8_t)GPR_U32(ctx, 0));
label_168774:
    // 0x168774: 0x267082a  slt         $at, $s3, $a3
    ctx->pc = 0x168774u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_168778:
    // 0x168778: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x168778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_16877c:
    // 0x16877c: 0x0  nop
    ctx->pc = 0x16877cu;
    // NOP
label_168780:
    // 0x168780: 0x0  nop
    ctx->pc = 0x168780u;
    // NOP
label_168784:
    // 0x168784: 0x1020fff9  beqz        $at, . + 4 + (-0x7 << 2)
label_168788:
    if (ctx->pc == 0x168788u) {
        ctx->pc = 0x16878Cu;
        goto label_16878c;
    }
    ctx->pc = 0x168784u;
    {
        const bool branch_taken_0x168784 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x168784) {
            ctx->pc = 0x16876Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16876c;
        }
    }
    ctx->pc = 0x16878Cu;
label_16878c:
    // 0x16878c: 0x0  nop
    ctx->pc = 0x16878cu;
    // NOP
label_168790:
    // 0x168790: 0x8c9e0000  lw          $fp, 0x0($a0)
    ctx->pc = 0x168790u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_168794:
    // 0x168794: 0x8c950004  lw          $s5, 0x4($a0)
    ctx->pc = 0x168794u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_168798:
    // 0x168798: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x168798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_16879c:
    // 0x16879c: 0x10000095  b           . + 4 + (0x95 << 2)
label_1687a0:
    if (ctx->pc == 0x1687A0u) {
        ctx->pc = 0x1687A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16879Cu;
        // 0x1687a0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1687A4u;
        goto label_1687a4;
    }
    ctx->pc = 0x16879Cu;
    {
        const bool branch_taken_0x16879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1687A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16879Cu;
        // 0x1687a0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16879c) {
            ctx->pc = 0x1689F4u;
            { ctx->pc = 0x1689f4; return; }
        }
    }
    ctx->pc = 0x1687A4u;
label_1687a4:
    // 0x1687a4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1687a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1687a8:
    // 0x1687a8: 0x62b42  srl         $a1, $a2, 13
    ctx->pc = 0x1687a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 13));
label_1687ac:
    // 0x1687ac: 0x62202  srl         $a0, $a2, 8
    ctx->pc = 0x1687acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
label_1687b0:
    // 0x1687b0: 0x30b60007  andi        $s6, $a1, 0x7
    ctx->pc = 0x1687b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_1687b4:
    // 0x1687b4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1687b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1687b8:
    // 0x1687b8: 0x62c82  srl         $a1, $a2, 18
    ctx->pc = 0x1687b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 18));
label_1687bc:
    // 0x1687bc: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x1687bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_1687c0:
    // 0x1687c0: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x1687c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
label_1687c4:
    // 0x1687c4: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x1687c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
label_1687c8:
    // 0x1687c8: 0x74282b  sltu        $a1, $v1, $s4
    ctx->pc = 0x1687c8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_1687cc:
    // 0x1687cc: 0x14a00083  bnez        $a1, . + 4 + (0x83 << 2)
label_1687d0:
    if (ctx->pc == 0x1687D0u) {
        ctx->pc = 0x1687D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687CCu;
        // 0x1687d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1687D4u;
        goto label_1687d4;
    }
    ctx->pc = 0x1687CCu;
    {
        const bool branch_taken_0x1687cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1687D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687CCu;
        // 0x1687d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687cc) {
            ctx->pc = 0x1689DCu;
            { ctx->pc = 0x1689dc; return; }
        }
    }
    ctx->pc = 0x1687D4u;
label_1687d4:
    // 0x1687d4: 0x263082b  sltu        $at, $s3, $v1
    ctx->pc = 0x1687d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1687d8:
    // 0x1687d8: 0x14200080  bnez        $at, . + 4 + (0x80 << 2)
label_1687dc:
    if (ctx->pc == 0x1687DCu) {
        ctx->pc = 0x1687E0u;
        goto label_1687e0;
    }
    ctx->pc = 0x1687D8u;
    {
        const bool branch_taken_0x1687d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1687d8) {
            ctx->pc = 0x1689DCu;
            { ctx->pc = 0x1689dc; return; }
        }
    }
    ctx->pc = 0x1687E0u;
label_1687e0:
    // 0x1687e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1687e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1687e4:
    // 0x1687e4: 0x16c00012  bnez        $s6, . + 4 + (0x12 << 2)
label_1687e8:
    if (ctx->pc == 0x1687E8u) {
        ctx->pc = 0x1687E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687E4u;
        // 0x1687e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1687ECu;
        goto label_1687ec;
    }
    ctx->pc = 0x1687E4u;
    {
        const bool branch_taken_0x1687e4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1687E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687E4u;
        // 0x1687e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687e4) {
            ctx->pc = 0x168830u;
            goto label_168830;
        }
    }
    ctx->pc = 0x1687ECu;
label_1687ec:
    // 0x1687ec: 0x6a00004  bltz        $s5, . + 4 + (0x4 << 2)
label_1687f0:
    if (ctx->pc == 0x1687F0u) {
        ctx->pc = 0x1687F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687ECu;
        // 0x1687f0: 0x153042  srl         $a2, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1687F4u;
        goto label_1687f4;
    }
    ctx->pc = 0x1687ECu;
    {
        const bool branch_taken_0x1687ec = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x1687F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687ECu;
        // 0x1687f0: 0x153042  srl         $a2, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687ec) {
            ctx->pc = 0x168800u;
            goto label_168800;
        }
    }
    ctx->pc = 0x1687F4u;
label_1687f4:
    // 0x1687f4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1687f4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1687f8:
    // 0x1687f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1687fc:
    if (ctx->pc == 0x1687FCu) {
        ctx->pc = 0x1687FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687F8u;
        // 0x1687fc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168800u;
        goto label_168800;
    }
    ctx->pc = 0x1687F8u;
    {
        const bool branch_taken_0x1687f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1687FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1687F8u;
        // 0x1687fc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687f8) {
            ctx->pc = 0x168818u;
            goto label_168818;
        }
    }
    ctx->pc = 0x168800u;
label_168800:
    // 0x168800: 0x32a50001  andi        $a1, $s5, 0x1
    ctx->pc = 0x168800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_168804:
    // 0x168804: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x168804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_168808:
    // 0x168808: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x168808u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16880c:
    // 0x16880c: 0x0  nop
    ctx->pc = 0x16880cu;
    // NOP
label_168810:
    // 0x168810: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x168810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_168814:
    // 0x168814: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x168814u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_168818:
    // 0x168818: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x168818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_16881c:
    // 0x16881c: 0x0  nop
    ctx->pc = 0x16881cu;
    // NOP
label_168820:
    // 0x168820: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x168820u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
label_168824:
    // 0x168824: 0x46001946  mov.s       $f5, $f3
    ctx->pc = 0x168824u;
    ctx->f[5] = FPU_MOV_S(ctx->f[3]);
label_168828:
    // 0x168828: 0x1000002a  b           . + 4 + (0x2A << 2)
label_16882c:
    if (ctx->pc == 0x16882Cu) {
        ctx->pc = 0x16882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168828u;
        // 0x16882c: 0x46001986  mov.s       $f6, $f3 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168830u;
        goto label_168830;
    }
    ctx->pc = 0x168828u;
    {
        const bool branch_taken_0x168828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168828u;
        // 0x16882c: 0x46001986  mov.s       $f6, $f3 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168828) {
            ctx->pc = 0x1688D4u;
            goto label_1688d4;
        }
    }
    ctx->pc = 0x168830u;
label_168830:
    // 0x168830: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x168830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168834:
    // 0x168834: 0x16c50012  bne         $s6, $a1, . + 4 + (0x12 << 2)
label_168838:
    if (ctx->pc == 0x168838u) {
        ctx->pc = 0x16883Cu;
        goto label_16883c;
    }
    ctx->pc = 0x168834u;
    {
        const bool branch_taken_0x168834 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 5));
        if (branch_taken_0x168834) {
            ctx->pc = 0x168880u;
            goto label_168880;
        }
    }
    ctx->pc = 0x16883Cu;
label_16883c:
    // 0x16883c: 0x6a00004  bltz        $s5, . + 4 + (0x4 << 2)
label_168840:
    if (ctx->pc == 0x168840u) {
        ctx->pc = 0x168840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16883Cu;
        // 0x168840: 0x153042  srl         $a2, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168844u;
        goto label_168844;
    }
    ctx->pc = 0x16883Cu;
    {
        const bool branch_taken_0x16883c = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x168840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16883Cu;
        // 0x168840: 0x153042  srl         $a2, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16883c) {
            ctx->pc = 0x168850u;
            goto label_168850;
        }
    }
    ctx->pc = 0x168844u;
label_168844:
    // 0x168844: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x168844u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168848:
    // 0x168848: 0x10000007  b           . + 4 + (0x7 << 2)
label_16884c:
    if (ctx->pc == 0x16884Cu) {
        ctx->pc = 0x16884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168848u;
        // 0x16884c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168850u;
        goto label_168850;
    }
    ctx->pc = 0x168848u;
    {
        const bool branch_taken_0x168848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168848u;
        // 0x16884c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168848) {
            ctx->pc = 0x168868u;
            goto label_168868;
        }
    }
    ctx->pc = 0x168850u;
label_168850:
    // 0x168850: 0x32a50001  andi        $a1, $s5, 0x1
    ctx->pc = 0x168850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_168854:
    // 0x168854: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x168854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_168858:
    // 0x168858: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x168858u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16885c:
    // 0x16885c: 0x0  nop
    ctx->pc = 0x16885cu;
    // NOP
label_168860:
    // 0x168860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x168860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_168864:
    // 0x168864: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x168864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_168868:
    // 0x168868: 0xc6060000  lwc1        $f6, 0x0($s0)
    ctx->pc = 0x168868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_16886c:
    // 0x16886c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x16886cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_168870:
    // 0x168870: 0x0  nop
    ctx->pc = 0x168870u;
    // NOP
label_168874:
    // 0x168874: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x168874u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
label_168878:
    // 0x168878: 0x10000016  b           . + 4 + (0x16 << 2)
label_16887c:
    if (ctx->pc == 0x16887Cu) {
        ctx->pc = 0x16887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168878u;
        // 0x16887c: 0x46001946  mov.s       $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168880u;
        goto label_168880;
    }
    ctx->pc = 0x168878u;
    {
        const bool branch_taken_0x168878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168878u;
        // 0x16887c: 0x46001946  mov.s       $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168878) {
            ctx->pc = 0x1688D4u;
            goto label_1688d4;
        }
    }
    ctx->pc = 0x168880u;
label_168880:
    // 0x168880: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x168880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168884:
    // 0x168884: 0x10000005  b           . + 4 + (0x5 << 2)
label_168888:
    if (ctx->pc == 0x168888u) {
        ctx->pc = 0x168888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168884u;
        // 0x168888: 0x164080  sll         $t0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16888Cu;
        goto label_16888c;
    }
    ctx->pc = 0x168884u;
    {
        const bool branch_taken_0x168884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168884u;
        // 0x168888: 0x164080  sll         $t0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168884) {
            ctx->pc = 0x16889Cu;
            goto label_16889c;
        }
    }
    ctx->pc = 0x16888Cu;
label_16888c:
    // 0x16888c: 0x0  nop
    ctx->pc = 0x16888cu;
    // NOP
label_168890:
    // 0x168890: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x168890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_168894:
    // 0x168894: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x168894u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_168898:
    // 0x168898: 0xd63021  addu        $a2, $a2, $s6
    ctx->pc = 0x168898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
label_16889c:
    // 0x16889c: 0x0  nop
    ctx->pc = 0x16889cu;
    // NOP
label_1688a0:
    // 0x1688a0: 0x2072821  addu        $a1, $s0, $a3
    ctx->pc = 0x1688a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_1688a4:
    // 0x1688a4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1688a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1688a8:
    // 0x1688a8: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x1688a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1688ac:
    // 0x1688ac: 0x0  nop
    ctx->pc = 0x1688acu;
    // NOP
label_1688b0:
    // 0x1688b0: 0x4501fff6  bc1t        . + 4 + (-0xA << 2)
label_1688b4:
    if (ctx->pc == 0x1688B4u) {
        ctx->pc = 0x1688B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1688B0u;
        // 0x1688b4: 0x62880  sll         $a1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1688B8u;
        goto label_1688b8;
    }
    ctx->pc = 0x1688B0u;
    {
        const bool branch_taken_0x1688b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1688B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1688B0u;
        // 0x1688b4: 0x62880  sll         $a1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1688b0) {
            ctx->pc = 0x16888Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16888c;
        }
    }
    ctx->pc = 0x1688B8u;
label_1688b8:
    // 0x1688b8: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1688b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1688bc:
    // 0x1688bc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1688bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1688c0:
    // 0x1688c0: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x1688c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1688c4:
    // 0x1688c4: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x1688c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1688c8:
    // 0x1688c8: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x1688c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1688cc:
    // 0x1688cc: 0xc4a60010  lwc1        $f6, 0x10($a1)
    ctx->pc = 0x1688ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1688d0:
    // 0x1688d0: 0x0  nop
    ctx->pc = 0x1688d0u;
    // NOP
label_1688d4:
    // 0x1688d4: 0x0  nop
    ctx->pc = 0x1688d4u;
    // NOP
label_1688d8:
    // 0x1688d8: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1688d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1688dc:
    // 0x1688dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1688dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1688e0:
    // 0x1688e0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1688e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1688e4:
    // 0x1688e4: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x1688e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1688e8:
    // 0x1688e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1688e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1688ec:
    // 0x1688ec: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1688ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1688f0:
    // 0x1688f0: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x1688f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1688f4:
    // 0x1688f4: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x1688f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_1688f8:
    // 0x1688f8: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1688f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_1688fc:
    // 0x1688fc: 0xa79021  addu        $s2, $a1, $a3
    ctx->pc = 0x1688fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_168900:
    // 0x168900: 0x862804  sllv        $a1, $a2, $a0
    ctx->pc = 0x168900u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
label_168904:
    // 0x168904: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x168904u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_168908:
    // 0x168908: 0x9245008d  lbu         $a1, 0x8D($s2)
    ctx->pc = 0x168908u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 141)));
label_16890c:
    // 0x16890c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x16890cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_168910:
    // 0x168910: 0xa245008d  sb          $a1, 0x8D($s2)
    ctx->pc = 0x168910u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 141), (uint8_t)GPR_U32(ctx, 5));
label_168914:
    // 0x168914: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x168914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_168918:
    // 0x168918: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x168918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_16891c:
    // 0x16891c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x16891cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_168920:
    // 0x168920: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x168920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_168924:
    // 0x168924: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x168924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_168928:
    // 0x168928: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x168928u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
label_16892c:
    // 0x16892c: 0x4602281c  madd.s      $f0, $f5, $f2
    ctx->pc = 0x16892cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_168930:
    // 0x168930: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
label_168934:
    if (ctx->pc == 0x168934u) {
        ctx->pc = 0x168934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168930u;
        // 0x168934: 0x46003300  add.s       $f12, $f6, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168938u;
        goto label_168938;
    }
    ctx->pc = 0x168930u;
    {
        const bool branch_taken_0x168930 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x168934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168930u;
        // 0x168934: 0x46003300  add.s       $f12, $f6, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168930) {
            ctx->pc = 0x1689DCu;
            { ctx->pc = 0x1689dc; return; }
        }
    }
    ctx->pc = 0x168938u;
label_168938:
    // 0x168938: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x168938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_16893c:
    // 0x16893c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16893cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_168940:
    // 0x168940: 0x24a58960  addiu       $a1, $a1, -0x76A0
    ctx->pc = 0x168940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936928));
label_168944:
    // 0x168944: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x168944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_168948:
    // 0x168948: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x168948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16894c:
    // 0x16894c: 0x800008  jr          $a0
label_168950:
    if (ctx->pc == 0x168950u) {
        ctx->pc = 0x168954u;
        goto label_168954;
    }
    ctx->pc = 0x16894Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168954u: goto label_168954;
            case 0x168974u: goto label_168974;
            case 0x168994u: goto label_168994;
            case 0x1689B4u: { ctx->pc = 0x1689b4; return; }
            case 0x1689C0u: { ctx->pc = 0x1689c0; return; }
            case 0x1689D8u: { ctx->pc = 0x1689d8; return; }
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16894Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x168954u;
label_168954:
    // 0x168954: 0x0  nop
    ctx->pc = 0x168954u;
    // NOP
label_168958:
    // 0x168958: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16895c:
    // 0x16895c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16895cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168960:
    // 0x168960: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x168960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_168964:
    // 0x168964: 0xc06d52a  jal         func_1B54A8
label_168968:
    if (ctx->pc == 0x168968u) {
        ctx->pc = 0x16896Cu;
        goto label_16896c;
    }
    ctx->pc = 0x168964u;
    SET_GPR_U32(ctx, 31, 0x16896Cu);
    ctx->pc = 0x1B54A8u;
    { ctx->pc = 0x1b54a8; return; }
    ctx->pc = 0x16896Cu;
label_16896c:
    // 0x16896c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_168970:
    if (ctx->pc == 0x168970u) {
        ctx->pc = 0x168970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16896Cu;
        // 0x168970: 0xe6400020  swc1        $f0, 0x20($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168974u;
        goto label_168974;
    }
    ctx->pc = 0x16896Cu;
    {
        const bool branch_taken_0x16896c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16896Cu;
        // 0x168970: 0xe6400020  swc1        $f0, 0x20($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16896c) {
            ctx->pc = 0x1689DCu;
            { ctx->pc = 0x1689dc; return; }
        }
    }
    ctx->pc = 0x168974u;
label_168974:
    // 0x168974: 0x0  nop
    ctx->pc = 0x168974u;
    // NOP
label_168978:
    // 0x168978: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16897c:
    // 0x16897c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168980:
    // 0x168980: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x168980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_168984:
    // 0x168984: 0xc06d52a  jal         func_1B54A8
label_168988:
    if (ctx->pc == 0x168988u) {
        ctx->pc = 0x16898Cu;
        goto label_16898c;
    }
    ctx->pc = 0x168984u;
    SET_GPR_U32(ctx, 31, 0x16898Cu);
    ctx->pc = 0x1B54A8u;
    { ctx->pc = 0x1b54a8; return; }
    ctx->pc = 0x16898Cu;
label_16898c:
    // 0x16898c: 0x10000013  b           . + 4 + (0x13 << 2)
label_168990:
    if (ctx->pc == 0x168990u) {
        ctx->pc = 0x168990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16898Cu;
        // 0x168990: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168994u;
        goto label_168994;
    }
    ctx->pc = 0x16898Cu;
    {
        const bool branch_taken_0x16898c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16898Cu;
        // 0x168990: 0xe6400024  swc1        $f0, 0x24($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16898c) {
            ctx->pc = 0x1689DCu;
            { ctx->pc = 0x1689dc; return; }
        }
    }
    ctx->pc = 0x168994u;
label_168994:
    // 0x168994: 0x0  nop
    ctx->pc = 0x168994u;
    // NOP
label_168998:
    // 0x168998: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16899c:
    // 0x16899c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16899cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1689a0:
    // 0x1689a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1689a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1689a4:
    // 0x1689a4: 0xc06d52a  jal         func_1B54A8
label_1689a8:
    if (ctx->pc == 0x1689A8u) {
        ctx->pc = 0x1689ACu;
        goto label_1689ac;
    }
    ctx->pc = 0x1689A4u;
    SET_GPR_U32(ctx, 31, 0x1689ACu);
    ctx->pc = 0x1B54A8u;
    { ctx->pc = 0x1b54a8; return; }
    ctx->pc = 0x1689ACu;
label_1689ac:
    // 0x1689ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1689b0u;
    return;
}

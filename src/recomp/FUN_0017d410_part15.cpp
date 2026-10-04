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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part15(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x184170u: goto label_184170;
        case 0x184174u: goto label_184174;
        case 0x184178u: goto label_184178;
        case 0x18417cu: goto label_18417c;
        case 0x184180u: goto label_184180;
        case 0x184184u: goto label_184184;
        case 0x184188u: goto label_184188;
        case 0x18418cu: goto label_18418c;
        case 0x184190u: goto label_184190;
        case 0x184194u: goto label_184194;
        case 0x184198u: goto label_184198;
        case 0x18419cu: goto label_18419c;
        case 0x1841a0u: goto label_1841a0;
        case 0x1841a4u: goto label_1841a4;
        case 0x1841a8u: goto label_1841a8;
        case 0x1841acu: goto label_1841ac;
        case 0x1841b0u: goto label_1841b0;
        case 0x1841b4u: goto label_1841b4;
        case 0x1841b8u: goto label_1841b8;
        case 0x1841bcu: goto label_1841bc;
        case 0x1841c0u: goto label_1841c0;
        case 0x1841c4u: goto label_1841c4;
        case 0x1841c8u: goto label_1841c8;
        case 0x1841ccu: goto label_1841cc;
        case 0x1841d0u: goto label_1841d0;
        case 0x1841d4u: goto label_1841d4;
        case 0x1841d8u: goto label_1841d8;
        case 0x1841dcu: goto label_1841dc;
        case 0x1841e0u: goto label_1841e0;
        case 0x1841e4u: goto label_1841e4;
        case 0x1841e8u: goto label_1841e8;
        case 0x1841ecu: goto label_1841ec;
        case 0x1841f0u: goto label_1841f0;
        case 0x1841f4u: goto label_1841f4;
        case 0x1841f8u: goto label_1841f8;
        case 0x1841fcu: goto label_1841fc;
        case 0x184200u: goto label_184200;
        case 0x184204u: goto label_184204;
        case 0x184208u: goto label_184208;
        case 0x18420cu: goto label_18420c;
        case 0x184210u: goto label_184210;
        case 0x184214u: goto label_184214;
        case 0x184218u: goto label_184218;
        case 0x18421cu: goto label_18421c;
        case 0x184220u: goto label_184220;
        case 0x184224u: goto label_184224;
        case 0x184228u: goto label_184228;
        case 0x18422cu: goto label_18422c;
        case 0x184230u: goto label_184230;
        case 0x184234u: goto label_184234;
        case 0x184238u: goto label_184238;
        case 0x18423cu: goto label_18423c;
        case 0x184240u: goto label_184240;
        case 0x184244u: goto label_184244;
        case 0x184248u: goto label_184248;
        case 0x18424cu: goto label_18424c;
        case 0x184250u: goto label_184250;
        case 0x184254u: goto label_184254;
        case 0x184258u: goto label_184258;
        case 0x18425cu: goto label_18425c;
        case 0x184260u: goto label_184260;
        case 0x184264u: goto label_184264;
        case 0x184268u: goto label_184268;
        case 0x18426cu: goto label_18426c;
        case 0x184270u: goto label_184270;
        case 0x184274u: goto label_184274;
        case 0x184278u: goto label_184278;
        case 0x18427cu: goto label_18427c;
        case 0x184280u: goto label_184280;
        case 0x184284u: goto label_184284;
        case 0x184288u: goto label_184288;
        case 0x18428cu: goto label_18428c;
        case 0x184290u: goto label_184290;
        case 0x184294u: goto label_184294;
        case 0x184298u: goto label_184298;
        case 0x18429cu: goto label_18429c;
        case 0x1842a0u: goto label_1842a0;
        case 0x1842a4u: goto label_1842a4;
        case 0x1842a8u: goto label_1842a8;
        case 0x1842acu: goto label_1842ac;
        case 0x1842b0u: goto label_1842b0;
        case 0x1842b4u: goto label_1842b4;
        case 0x1842b8u: goto label_1842b8;
        case 0x1842bcu: goto label_1842bc;
        case 0x1842c0u: goto label_1842c0;
        case 0x1842c4u: goto label_1842c4;
        case 0x1842c8u: goto label_1842c8;
        case 0x1842ccu: goto label_1842cc;
        case 0x1842d0u: goto label_1842d0;
        case 0x1842d4u: goto label_1842d4;
        case 0x1842d8u: goto label_1842d8;
        case 0x1842dcu: goto label_1842dc;
        case 0x1842e0u: goto label_1842e0;
        case 0x1842e4u: goto label_1842e4;
        case 0x1842e8u: goto label_1842e8;
        case 0x1842ecu: goto label_1842ec;
        case 0x1842f0u: goto label_1842f0;
        case 0x1842f4u: goto label_1842f4;
        case 0x1842f8u: goto label_1842f8;
        case 0x1842fcu: goto label_1842fc;
        case 0x184300u: goto label_184300;
        case 0x184304u: goto label_184304;
        case 0x184308u: goto label_184308;
        case 0x18430cu: goto label_18430c;
        case 0x184310u: goto label_184310;
        case 0x184314u: goto label_184314;
        case 0x184318u: goto label_184318;
        case 0x18431cu: goto label_18431c;
        case 0x184320u: goto label_184320;
        case 0x184324u: goto label_184324;
        case 0x184328u: goto label_184328;
        case 0x18432cu: goto label_18432c;
        case 0x184330u: goto label_184330;
        case 0x184334u: goto label_184334;
        case 0x184338u: goto label_184338;
        case 0x18433cu: goto label_18433c;
        case 0x184340u: goto label_184340;
        case 0x184344u: goto label_184344;
        case 0x184348u: goto label_184348;
        case 0x18434cu: goto label_18434c;
        case 0x184350u: goto label_184350;
        case 0x184354u: goto label_184354;
        case 0x184358u: goto label_184358;
        case 0x18435cu: goto label_18435c;
        case 0x184360u: goto label_184360;
        case 0x184364u: goto label_184364;
        case 0x184368u: goto label_184368;
        case 0x18436cu: goto label_18436c;
        case 0x184370u: goto label_184370;
        case 0x184374u: goto label_184374;
        case 0x184378u: goto label_184378;
        case 0x18437cu: goto label_18437c;
        case 0x184380u: goto label_184380;
        case 0x184384u: goto label_184384;
        case 0x184388u: goto label_184388;
        case 0x18438cu: goto label_18438c;
        case 0x184390u: goto label_184390;
        case 0x184394u: goto label_184394;
        case 0x184398u: goto label_184398;
        case 0x18439cu: goto label_18439c;
        case 0x1843a0u: goto label_1843a0;
        case 0x1843a4u: goto label_1843a4;
        case 0x1843a8u: goto label_1843a8;
        case 0x1843acu: goto label_1843ac;
        case 0x1843b0u: goto label_1843b0;
        case 0x1843b4u: goto label_1843b4;
        case 0x1843b8u: goto label_1843b8;
        case 0x1843bcu: goto label_1843bc;
        case 0x1843c0u: goto label_1843c0;
        case 0x1843c4u: goto label_1843c4;
        case 0x1843c8u: goto label_1843c8;
        case 0x1843ccu: goto label_1843cc;
        case 0x1843d0u: goto label_1843d0;
        case 0x1843d4u: goto label_1843d4;
        case 0x1843d8u: goto label_1843d8;
        case 0x1843dcu: goto label_1843dc;
        case 0x1843e0u: goto label_1843e0;
        case 0x1843e4u: goto label_1843e4;
        case 0x1843e8u: goto label_1843e8;
        case 0x1843ecu: goto label_1843ec;
        case 0x1843f0u: goto label_1843f0;
        case 0x1843f4u: goto label_1843f4;
        case 0x1843f8u: goto label_1843f8;
        case 0x1843fcu: goto label_1843fc;
        case 0x184400u: goto label_184400;
        case 0x184404u: goto label_184404;
        case 0x184408u: goto label_184408;
        case 0x18440cu: goto label_18440c;
        case 0x184410u: goto label_184410;
        case 0x184414u: goto label_184414;
        case 0x184418u: goto label_184418;
        case 0x18441cu: goto label_18441c;
        case 0x184420u: goto label_184420;
        case 0x184424u: goto label_184424;
        case 0x184428u: goto label_184428;
        case 0x18442cu: goto label_18442c;
        case 0x184430u: goto label_184430;
        case 0x184434u: goto label_184434;
        case 0x184438u: goto label_184438;
        case 0x18443cu: goto label_18443c;
        case 0x184440u: goto label_184440;
        case 0x184444u: goto label_184444;
        case 0x184448u: goto label_184448;
        case 0x18444cu: goto label_18444c;
        case 0x184450u: goto label_184450;
        case 0x184454u: goto label_184454;
        case 0x184458u: goto label_184458;
        case 0x18445cu: goto label_18445c;
        case 0x184460u: goto label_184460;
        case 0x184464u: goto label_184464;
        case 0x184468u: goto label_184468;
        case 0x18446cu: goto label_18446c;
        case 0x184470u: goto label_184470;
        case 0x184474u: goto label_184474;
        case 0x184478u: goto label_184478;
        case 0x18447cu: goto label_18447c;
        case 0x184480u: goto label_184480;
        case 0x184484u: goto label_184484;
        case 0x184488u: goto label_184488;
        case 0x18448cu: goto label_18448c;
        case 0x184490u: goto label_184490;
        case 0x184494u: goto label_184494;
        case 0x184498u: goto label_184498;
        case 0x18449cu: goto label_18449c;
        case 0x1844a0u: goto label_1844a0;
        case 0x1844a4u: goto label_1844a4;
        case 0x1844a8u: goto label_1844a8;
        case 0x1844acu: goto label_1844ac;
        case 0x1844b0u: goto label_1844b0;
        case 0x1844b4u: goto label_1844b4;
        case 0x1844b8u: goto label_1844b8;
        case 0x1844bcu: goto label_1844bc;
        case 0x1844c0u: goto label_1844c0;
        case 0x1844c4u: goto label_1844c4;
        case 0x1844c8u: goto label_1844c8;
        case 0x1844ccu: goto label_1844cc;
        case 0x1844d0u: goto label_1844d0;
        case 0x1844d4u: goto label_1844d4;
        case 0x1844d8u: goto label_1844d8;
        case 0x1844dcu: goto label_1844dc;
        case 0x1844e0u: goto label_1844e0;
        case 0x1844e4u: goto label_1844e4;
        case 0x1844e8u: goto label_1844e8;
        case 0x1844ecu: goto label_1844ec;
        case 0x1844f0u: goto label_1844f0;
        case 0x1844f4u: goto label_1844f4;
        case 0x1844f8u: goto label_1844f8;
        case 0x1844fcu: goto label_1844fc;
        case 0x184500u: goto label_184500;
        case 0x184504u: goto label_184504;
        case 0x184508u: goto label_184508;
        case 0x18450cu: goto label_18450c;
        case 0x184510u: goto label_184510;
        case 0x184514u: goto label_184514;
        case 0x184518u: goto label_184518;
        case 0x18451cu: goto label_18451c;
        case 0x184520u: goto label_184520;
        case 0x184524u: goto label_184524;
        case 0x184528u: goto label_184528;
        case 0x18452cu: goto label_18452c;
        case 0x184530u: goto label_184530;
        case 0x184534u: goto label_184534;
        case 0x184538u: goto label_184538;
        case 0x18453cu: goto label_18453c;
        case 0x184540u: goto label_184540;
        case 0x184544u: goto label_184544;
        case 0x184548u: goto label_184548;
        case 0x18454cu: goto label_18454c;
        case 0x184550u: goto label_184550;
        case 0x184554u: goto label_184554;
        case 0x184558u: goto label_184558;
        case 0x18455cu: goto label_18455c;
        case 0x184560u: goto label_184560;
        case 0x184564u: goto label_184564;
        case 0x184568u: goto label_184568;
        case 0x18456cu: goto label_18456c;
        case 0x184570u: goto label_184570;
        case 0x184574u: goto label_184574;
        case 0x184578u: goto label_184578;
        case 0x18457cu: goto label_18457c;
        case 0x184580u: goto label_184580;
        case 0x184584u: goto label_184584;
        case 0x184588u: goto label_184588;
        case 0x18458cu: goto label_18458c;
        case 0x184590u: goto label_184590;
        case 0x184594u: goto label_184594;
        case 0x184598u: goto label_184598;
        case 0x18459cu: goto label_18459c;
        case 0x1845a0u: goto label_1845a0;
        case 0x1845a4u: goto label_1845a4;
        case 0x1845a8u: goto label_1845a8;
        case 0x1845acu: goto label_1845ac;
        case 0x1845b0u: goto label_1845b0;
        case 0x1845b4u: goto label_1845b4;
        case 0x1845b8u: goto label_1845b8;
        case 0x1845bcu: goto label_1845bc;
        case 0x1845c0u: goto label_1845c0;
        case 0x1845c4u: goto label_1845c4;
        case 0x1845c8u: goto label_1845c8;
        case 0x1845ccu: goto label_1845cc;
        case 0x1845d0u: goto label_1845d0;
        case 0x1845d4u: goto label_1845d4;
        case 0x1845d8u: goto label_1845d8;
        case 0x1845dcu: goto label_1845dc;
        case 0x1845e0u: goto label_1845e0;
        case 0x1845e4u: goto label_1845e4;
        case 0x1845e8u: goto label_1845e8;
        case 0x1845ecu: goto label_1845ec;
        case 0x1845f0u: goto label_1845f0;
        case 0x1845f4u: goto label_1845f4;
        case 0x1845f8u: goto label_1845f8;
        case 0x1845fcu: goto label_1845fc;
        case 0x184600u: goto label_184600;
        case 0x184604u: goto label_184604;
        case 0x184608u: goto label_184608;
        case 0x18460cu: goto label_18460c;
        case 0x184610u: goto label_184610;
        case 0x184614u: goto label_184614;
        case 0x184618u: goto label_184618;
        case 0x18461cu: goto label_18461c;
        case 0x184620u: goto label_184620;
        case 0x184624u: goto label_184624;
        case 0x184628u: goto label_184628;
        case 0x18462cu: goto label_18462c;
        case 0x184630u: goto label_184630;
        case 0x184634u: goto label_184634;
        case 0x184638u: goto label_184638;
        case 0x18463cu: goto label_18463c;
        case 0x184640u: goto label_184640;
        case 0x184644u: goto label_184644;
        case 0x184648u: goto label_184648;
        case 0x18464cu: goto label_18464c;
        case 0x184650u: goto label_184650;
        case 0x184654u: goto label_184654;
        case 0x184658u: goto label_184658;
        case 0x18465cu: goto label_18465c;
        case 0x184660u: goto label_184660;
        case 0x184664u: goto label_184664;
        case 0x184668u: goto label_184668;
        case 0x18466cu: goto label_18466c;
        case 0x184670u: goto label_184670;
        case 0x184674u: goto label_184674;
        case 0x184678u: goto label_184678;
        case 0x18467cu: goto label_18467c;
        case 0x184680u: goto label_184680;
        case 0x184684u: goto label_184684;
        case 0x184688u: goto label_184688;
        case 0x18468cu: goto label_18468c;
        case 0x184690u: goto label_184690;
        case 0x184694u: goto label_184694;
        case 0x184698u: goto label_184698;
        case 0x18469cu: goto label_18469c;
        case 0x1846a0u: goto label_1846a0;
        case 0x1846a4u: goto label_1846a4;
        case 0x1846a8u: goto label_1846a8;
        case 0x1846acu: goto label_1846ac;
        case 0x1846b0u: goto label_1846b0;
        case 0x1846b4u: goto label_1846b4;
        case 0x1846b8u: goto label_1846b8;
        case 0x1846bcu: goto label_1846bc;
        case 0x1846c0u: goto label_1846c0;
        case 0x1846c4u: goto label_1846c4;
        case 0x1846c8u: goto label_1846c8;
        case 0x1846ccu: goto label_1846cc;
        case 0x1846d0u: goto label_1846d0;
        case 0x1846d4u: goto label_1846d4;
        case 0x1846d8u: goto label_1846d8;
        case 0x1846dcu: goto label_1846dc;
        case 0x1846e0u: goto label_1846e0;
        case 0x1846e4u: goto label_1846e4;
        case 0x1846e8u: goto label_1846e8;
        case 0x1846ecu: goto label_1846ec;
        case 0x1846f0u: goto label_1846f0;
        case 0x1846f4u: goto label_1846f4;
        case 0x1846f8u: goto label_1846f8;
        case 0x1846fcu: goto label_1846fc;
        case 0x184700u: goto label_184700;
        case 0x184704u: goto label_184704;
        case 0x184708u: goto label_184708;
        case 0x18470cu: goto label_18470c;
        case 0x184710u: goto label_184710;
        case 0x184714u: goto label_184714;
        case 0x184718u: goto label_184718;
        case 0x18471cu: goto label_18471c;
        case 0x184720u: goto label_184720;
        case 0x184724u: goto label_184724;
        case 0x184728u: goto label_184728;
        case 0x18472cu: goto label_18472c;
        case 0x184730u: goto label_184730;
        case 0x184734u: goto label_184734;
        case 0x184738u: goto label_184738;
        case 0x18473cu: goto label_18473c;
        case 0x184740u: goto label_184740;
        case 0x184744u: goto label_184744;
        case 0x184748u: goto label_184748;
        case 0x18474cu: goto label_18474c;
        case 0x184750u: goto label_184750;
        case 0x184754u: goto label_184754;
        case 0x184758u: goto label_184758;
        case 0x18475cu: goto label_18475c;
        case 0x184760u: goto label_184760;
        case 0x184764u: goto label_184764;
        case 0x184768u: goto label_184768;
        case 0x18476cu: goto label_18476c;
        case 0x184770u: goto label_184770;
        case 0x184774u: goto label_184774;
        case 0x184778u: goto label_184778;
        case 0x18477cu: goto label_18477c;
        case 0x184780u: goto label_184780;
        case 0x184784u: goto label_184784;
        case 0x184788u: goto label_184788;
        case 0x18478cu: goto label_18478c;
        case 0x184790u: goto label_184790;
        case 0x184794u: goto label_184794;
        case 0x184798u: goto label_184798;
        case 0x18479cu: goto label_18479c;
        case 0x1847a0u: goto label_1847a0;
        case 0x1847a4u: goto label_1847a4;
        case 0x1847a8u: goto label_1847a8;
        case 0x1847acu: goto label_1847ac;
        case 0x1847b0u: goto label_1847b0;
        case 0x1847b4u: goto label_1847b4;
        case 0x1847b8u: goto label_1847b8;
        case 0x1847bcu: goto label_1847bc;
        case 0x1847c0u: goto label_1847c0;
        case 0x1847c4u: goto label_1847c4;
        case 0x1847c8u: goto label_1847c8;
        case 0x1847ccu: goto label_1847cc;
        case 0x1847d0u: goto label_1847d0;
        case 0x1847d4u: goto label_1847d4;
        case 0x1847d8u: goto label_1847d8;
        case 0x1847dcu: goto label_1847dc;
        case 0x1847e0u: goto label_1847e0;
        case 0x1847e4u: goto label_1847e4;
        case 0x1847e8u: goto label_1847e8;
        case 0x1847ecu: goto label_1847ec;
        case 0x1847f0u: goto label_1847f0;
        case 0x1847f4u: goto label_1847f4;
        case 0x1847f8u: goto label_1847f8;
        case 0x1847fcu: goto label_1847fc;
        case 0x184800u: goto label_184800;
        case 0x184804u: goto label_184804;
        case 0x184808u: goto label_184808;
        case 0x18480cu: goto label_18480c;
        case 0x184810u: goto label_184810;
        case 0x184814u: goto label_184814;
        case 0x184818u: goto label_184818;
        case 0x18481cu: goto label_18481c;
        case 0x184820u: goto label_184820;
        case 0x184824u: goto label_184824;
        case 0x184828u: goto label_184828;
        case 0x18482cu: goto label_18482c;
        case 0x184830u: goto label_184830;
        case 0x184834u: goto label_184834;
        case 0x184838u: goto label_184838;
        case 0x18483cu: goto label_18483c;
        case 0x184840u: goto label_184840;
        case 0x184844u: goto label_184844;
        case 0x184848u: goto label_184848;
        case 0x18484cu: goto label_18484c;
        case 0x184850u: goto label_184850;
        case 0x184854u: goto label_184854;
        case 0x184858u: goto label_184858;
        case 0x18485cu: goto label_18485c;
        case 0x184860u: goto label_184860;
        case 0x184864u: goto label_184864;
        case 0x184868u: goto label_184868;
        case 0x18486cu: goto label_18486c;
        case 0x184870u: goto label_184870;
        case 0x184874u: goto label_184874;
        case 0x184878u: goto label_184878;
        case 0x18487cu: goto label_18487c;
        case 0x184880u: goto label_184880;
        case 0x184884u: goto label_184884;
        case 0x184888u: goto label_184888;
        case 0x18488cu: goto label_18488c;
        case 0x184890u: goto label_184890;
        case 0x184894u: goto label_184894;
        case 0x184898u: goto label_184898;
        case 0x18489cu: goto label_18489c;
        case 0x1848a0u: goto label_1848a0;
        case 0x1848a4u: goto label_1848a4;
        case 0x1848a8u: goto label_1848a8;
        case 0x1848acu: goto label_1848ac;
        case 0x1848b0u: goto label_1848b0;
        case 0x1848b4u: goto label_1848b4;
        case 0x1848b8u: goto label_1848b8;
        case 0x1848bcu: goto label_1848bc;
        case 0x1848c0u: goto label_1848c0;
        case 0x1848c4u: goto label_1848c4;
        case 0x1848c8u: goto label_1848c8;
        case 0x1848ccu: goto label_1848cc;
        case 0x1848d0u: goto label_1848d0;
        case 0x1848d4u: goto label_1848d4;
        case 0x1848d8u: goto label_1848d8;
        case 0x1848dcu: goto label_1848dc;
        case 0x1848e0u: goto label_1848e0;
        case 0x1848e4u: goto label_1848e4;
        case 0x1848e8u: goto label_1848e8;
        case 0x1848ecu: goto label_1848ec;
        case 0x1848f0u: goto label_1848f0;
        case 0x1848f4u: goto label_1848f4;
        case 0x1848f8u: goto label_1848f8;
        case 0x1848fcu: goto label_1848fc;
        case 0x184900u: goto label_184900;
        case 0x184904u: goto label_184904;
        case 0x184908u: goto label_184908;
        case 0x18490cu: goto label_18490c;
        case 0x184910u: goto label_184910;
        case 0x184914u: goto label_184914;
        case 0x184918u: goto label_184918;
        case 0x18491cu: goto label_18491c;
        case 0x184920u: goto label_184920;
        case 0x184924u: goto label_184924;
        case 0x184928u: goto label_184928;
        case 0x18492cu: goto label_18492c;
        case 0x184930u: goto label_184930;
        case 0x184934u: goto label_184934;
        case 0x184938u: goto label_184938;
        case 0x18493cu: goto label_18493c;
        default: return;
    }

label_184170:
    // 0x184170: 0x0  nop
    ctx->pc = 0x184170u;
    // NOP
label_184174:
    // 0x184174: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x184174u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_184178:
    // 0x184178: 0x0  nop
    ctx->pc = 0x184178u;
    // NOP
label_18417c:
    // 0x18417c: 0x0  nop
    ctx->pc = 0x18417cu;
    // NOP
label_184180:
    // 0x184180: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x184180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184184:
    // 0x184184: 0x0  nop
    ctx->pc = 0x184184u;
    // NOP
label_184188:
    // 0x184188: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_18418c:
    if (ctx->pc == 0x18418Cu) {
        ctx->pc = 0x184190u;
        goto label_184190;
    }
    ctx->pc = 0x184188u;
    {
        const bool branch_taken_0x184188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x184188) {
            ctx->pc = 0x184194u;
            goto label_184194;
        }
    }
    ctx->pc = 0x184190u;
label_184190:
    // 0x184190: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x184190u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184194:
    // 0x184194: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_184198:
    if (ctx->pc == 0x184198u) {
        ctx->pc = 0x184198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184194u;
        // 0x184198: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18419Cu;
        goto label_18419c;
    }
    ctx->pc = 0x184194u;
    {
        const bool branch_taken_0x184194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x184198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184194u;
        // 0x184198: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184194) {
            ctx->pc = 0x1841B0u;
            goto label_1841b0;
        }
    }
    ctx->pc = 0x18419Cu;
label_18419c:
    // 0x18419c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18419cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1841a0:
    // 0x1841a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1841a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1841a4:
    // 0x1841a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1841a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1841a8:
    // 0x1841a8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1841ac:
    if (ctx->pc == 0x1841ACu) {
        ctx->pc = 0x1841ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1841A8u;
        // 0x1841ac: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1841B0u;
        goto label_1841b0;
    }
    ctx->pc = 0x1841A8u;
    {
        const bool branch_taken_0x1841a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1841ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1841A8u;
        // 0x1841ac: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1841a8) {
            ctx->pc = 0x1841E0u;
            goto label_1841e0;
        }
    }
    ctx->pc = 0x1841B0u;
label_1841b0:
    // 0x1841b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1841b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1841b4:
    // 0x1841b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1841b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1841b8:
    // 0x1841b8: 0x0  nop
    ctx->pc = 0x1841b8u;
    // NOP
label_1841bc:
    // 0x1841bc: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1841bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1841c0:
    // 0x1841c0: 0x0  nop
    ctx->pc = 0x1841c0u;
    // NOP
label_1841c4:
    // 0x1841c4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1841c8:
    if (ctx->pc == 0x1841C8u) {
        ctx->pc = 0x1841CCu;
        goto label_1841cc;
    }
    ctx->pc = 0x1841C4u;
    {
        const bool branch_taken_0x1841c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1841c4) {
            ctx->pc = 0x1841E0u;
            goto label_1841e0;
        }
    }
    ctx->pc = 0x1841CCu;
label_1841cc:
    // 0x1841cc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1841ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1841d0:
    // 0x1841d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1841d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1841d4:
    // 0x1841d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1841d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1841d8:
    // 0x1841d8: 0x10000001  b           . + 4 + (0x1 << 2)
label_1841dc:
    if (ctx->pc == 0x1841DCu) {
        ctx->pc = 0x1841DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1841D8u;
        // 0x1841dc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1841E0u;
        goto label_1841e0;
    }
    ctx->pc = 0x1841D8u;
    {
        const bool branch_taken_0x1841d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1841DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1841D8u;
        // 0x1841dc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1841d8) {
            ctx->pc = 0x1841E0u;
            goto label_1841e0;
        }
    }
    ctx->pc = 0x1841E0u;
label_1841e0:
    // 0x1841e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1841e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1841e4:
    // 0x1841e4: 0xc062900  jal         func_18A400
label_1841e8:
    if (ctx->pc == 0x1841E8u) {
        ctx->pc = 0x1841E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1841E4u;
        // 0x1841e8: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1841ECu;
        goto label_1841ec;
    }
    ctx->pc = 0x1841E4u;
    SET_GPR_U32(ctx, 31, 0x1841ECu);
    ctx->pc = 0x1841E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1841E4u;
    // 0x1841e8: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A400u;
    { ctx->pc = 0x18a400; return; }
    ctx->pc = 0x1841ECu;
label_1841ec:
    // 0x1841ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1841ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1841f0:
    // 0x1841f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1841f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1841f4:
    // 0x1841f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1841f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1841f8:
    // 0x1841f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1841f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1841fc:
    // 0x1841fc: 0x3e00008  jr          $ra
label_184200:
    if (ctx->pc == 0x184200u) {
        ctx->pc = 0x184200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1841FCu;
        // 0x184200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184204u;
        goto label_184204;
    }
    ctx->pc = 0x1841FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1841FCu;
        // 0x184200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1841FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184204u;
label_184204:
    // 0x184204: 0x0  nop
    ctx->pc = 0x184204u;
    // NOP
label_184208:
    // 0x184208: 0x0  nop
    ctx->pc = 0x184208u;
    // NOP
label_18420c:
    // 0x18420c: 0x0  nop
    ctx->pc = 0x18420cu;
    // NOP
label_184210:
    // 0x184210: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x184210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_184214:
    // 0x184214: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x184214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_184218:
    // 0x184218: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x184218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_18421c:
    // 0x18421c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18421cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_184220:
    // 0x184220: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x184220u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184224:
    // 0x184224: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x184224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_184228:
    // 0x184228: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x184228u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18422c:
    // 0x18422c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18422cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_184230:
    // 0x184230: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x184230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_184234:
    // 0x184234: 0xc061238  jal         func_1848E0
label_184238:
    if (ctx->pc == 0x184238u) {
        ctx->pc = 0x184238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184234u;
        // 0x184238: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18423Cu;
        goto label_18423c;
    }
    ctx->pc = 0x184234u;
    SET_GPR_U32(ctx, 31, 0x18423Cu);
    ctx->pc = 0x184238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184234u;
    // 0x184238: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1848E0u;
    goto label_1848e0;
    ctx->pc = 0x18423Cu;
label_18423c:
    // 0x18423c: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
label_184240:
    if (ctx->pc == 0x184240u) {
        ctx->pc = 0x184244u;
        goto label_184244;
    }
    ctx->pc = 0x18423Cu;
    {
        const bool branch_taken_0x18423c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18423c) {
            ctx->pc = 0x1843FCu;
            goto label_1843fc;
        }
    }
    ctx->pc = 0x184244u;
label_184244:
    // 0x184244: 0x92840236  lbu         $a0, 0x236($s4)
    ctx->pc = 0x184244u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 566)));
label_184248:
    // 0x184248: 0x2881004a  slti        $at, $a0, 0x4A
    ctx->pc = 0x184248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)74) ? 1 : 0);
label_18424c:
    // 0x18424c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_184250:
    if (ctx->pc == 0x184250u) {
        ctx->pc = 0x184250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18424Cu;
        // 0x184250: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184254u;
        goto label_184254;
    }
    ctx->pc = 0x18424Cu;
    {
        const bool branch_taken_0x18424c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x184250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18424Cu;
        // 0x184250: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18424c) {
            ctx->pc = 0x1842A8u;
            goto label_1842a8;
        }
    }
    ctx->pc = 0x184254u;
label_184254:
    // 0x184254: 0x92830235  lbu         $v1, 0x235($s4)
    ctx->pc = 0x184254u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 565)));
label_184258:
    // 0x184258: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x184258u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_18425c:
    // 0x18425c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_184260:
    if (ctx->pc == 0x184260u) {
        ctx->pc = 0x184260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18425Cu;
        // 0x184260: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x184264u;
        goto label_184264;
    }
    ctx->pc = 0x18425Cu;
    {
        const bool branch_taken_0x18425c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x184260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18425Cu;
        // 0x184260: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18425c) {
            ctx->pc = 0x1842A8u;
            goto label_1842a8;
        }
    }
    ctx->pc = 0x184264u;
label_184264:
    // 0x184264: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x184264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_184268:
    // 0x184268: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x184268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_18426c:
    // 0x18426c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18426cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_184270:
    // 0x184270: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x184270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_184274:
    // 0x184274: 0x8f8484e0  lw          $a0, -0x7B20($gp)
    ctx->pc = 0x184274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_184278:
    // 0x184278: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x184278u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_18427c:
    // 0x18427c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18427cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_184280:
    // 0x184280: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x184280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_184284:
    // 0x184284: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x184284u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_184288:
    // 0x184288: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_18428c:
    if (ctx->pc == 0x18428Cu) {
        ctx->pc = 0x18428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184288u;
        // 0x18428c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184290u;
        goto label_184290;
    }
    ctx->pc = 0x184288u;
    {
        const bool branch_taken_0x184288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184288u;
        // 0x18428c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184288) {
            ctx->pc = 0x1842B4u;
            goto label_1842b4;
        }
    }
    ctx->pc = 0x184290u;
label_184290:
    // 0x184290: 0xc0624ec  jal         func_1893B0
label_184294:
    if (ctx->pc == 0x184294u) {
        ctx->pc = 0x184294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184290u;
        // 0x184294: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184298u;
        goto label_184298;
    }
    ctx->pc = 0x184290u;
    SET_GPR_U32(ctx, 31, 0x184298u);
    ctx->pc = 0x184294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184290u;
    // 0x184294: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1893B0u;
    { ctx->pc = 0x1893b0; return; }
    ctx->pc = 0x184298u;
label_184298:
    // 0x184298: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_18429c:
    if (ctx->pc == 0x18429Cu) {
        ctx->pc = 0x1842A0u;
        goto label_1842a0;
    }
    ctx->pc = 0x184298u;
    {
        const bool branch_taken_0x184298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184298) {
            ctx->pc = 0x1842B4u;
            goto label_1842b4;
        }
    }
    ctx->pc = 0x1842A0u;
label_1842a0:
    // 0x1842a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1842a4:
    if (ctx->pc == 0x1842A4u) {
        ctx->pc = 0x1842A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842A0u;
        // 0x1842a4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1842A8u;
        goto label_1842a8;
    }
    ctx->pc = 0x1842A0u;
    {
        const bool branch_taken_0x1842a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1842A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842A0u;
        // 0x1842a4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1842a0) {
            ctx->pc = 0x1842B4u;
            goto label_1842b4;
        }
    }
    ctx->pc = 0x1842A8u;
label_1842a8:
    // 0x1842a8: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x1842a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1842ac:
    // 0x1842ac: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1842acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1842b0:
    // 0x1842b0: 0x0  nop
    ctx->pc = 0x1842b0u;
    // NOP
label_1842b4:
    // 0x1842b4: 0x1240003b  beqz        $s2, . + 4 + (0x3B << 2)
label_1842b8:
    if (ctx->pc == 0x1842B8u) {
        ctx->pc = 0x1842BCu;
        goto label_1842bc;
    }
    ctx->pc = 0x1842B4u;
    {
        const bool branch_taken_0x1842b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1842b4) {
            ctx->pc = 0x1843A4u;
            goto label_1843a4;
        }
    }
    ctx->pc = 0x1842BCu;
label_1842bc:
    // 0x1842bc: 0x9264002d  lbu         $a0, 0x2D($s3)
    ctx->pc = 0x1842bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 45)));
label_1842c0:
    // 0x1842c0: 0x92830233  lbu         $v1, 0x233($s4)
    ctx->pc = 0x1842c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 563)));
label_1842c4:
    // 0x1842c4: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_1842c8:
    if (ctx->pc == 0x1842C8u) {
        ctx->pc = 0x1842C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842C4u;
        // 0x1842c8: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1842CCu;
        goto label_1842cc;
    }
    ctx->pc = 0x1842C4u;
    {
        const bool branch_taken_0x1842c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1842C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1842C4u;
        // 0x1842c8: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1842c4) {
            ctx->pc = 0x184300u;
            goto label_184300;
        }
    }
    ctx->pc = 0x1842CCu;
label_1842cc:
    // 0x1842cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1842ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1842d0:
    // 0x1842d0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1842d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1842d4:
    // 0x1842d4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1842d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1842d8:
    // 0x1842d8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1842dc:
    if (ctx->pc == 0x1842DCu) {
        ctx->pc = 0x1842E0u;
        goto label_1842e0;
    }
    ctx->pc = 0x1842D8u;
    {
        const bool branch_taken_0x1842d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1842d8) {
            ctx->pc = 0x184300u;
            goto label_184300;
        }
    }
    ctx->pc = 0x1842E0u;
label_1842e0:
    // 0x1842e0: 0xc6230150  lwc1        $f3, 0x150($s1)
    ctx->pc = 0x1842e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1842e4:
    // 0x1842e4: 0xc6820150  lwc1        $f2, 0x150($s4)
    ctx->pc = 0x1842e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1842e8:
    // 0x1842e8: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x1842e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1842ec:
    // 0x1842ec: 0xc6800158  lwc1        $f0, 0x158($s4)
    ctx->pc = 0x1842ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1842f0:
    // 0x1842f0: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1842f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1842f4:
    // 0x1842f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1842f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1842f8:
    // 0x1842f8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1842f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1842fc:
    // 0x1842fc: 0x4600051c  madd.s      $f20, $f0, $f0
    ctx->pc = 0x1842fcu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_184300:
    // 0x184300: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
label_184304:
    if (ctx->pc == 0x184304u) {
        ctx->pc = 0x184308u;
        goto label_184308;
    }
    ctx->pc = 0x184300u;
    {
        const bool branch_taken_0x184300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x184300) {
            ctx->pc = 0x184344u;
            goto label_184344;
        }
    }
    ctx->pc = 0x184308u;
label_184308:
    // 0x184308: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_18430c:
    if (ctx->pc == 0x18430Cu) {
        ctx->pc = 0x18430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184308u;
        // 0x18430c: 0x3c0249ce  lui         $v0, 0x49CE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18894 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184310u;
        goto label_184310;
    }
    ctx->pc = 0x184308u;
    {
        const bool branch_taken_0x184308 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184308u;
        // 0x18430c: 0x3c0249ce  lui         $v0, 0x49CE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18894 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184308) {
            ctx->pc = 0x184344u;
            goto label_184344;
        }
    }
    ctx->pc = 0x184310u;
label_184310:
    // 0x184310: 0x34424c80  ori         $v0, $v0, 0x4C80
    ctx->pc = 0x184310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19584);
label_184314:
    // 0x184314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184318:
    // 0x184318: 0x0  nop
    ctx->pc = 0x184318u;
    // NOP
label_18431c:
    // 0x18431c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18431cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184320:
    // 0x184320: 0x0  nop
    ctx->pc = 0x184320u;
    // NOP
label_184324:
    // 0x184324: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_184328:
    if (ctx->pc == 0x184328u) {
        ctx->pc = 0x18432Cu;
        goto label_18432c;
    }
    ctx->pc = 0x184324u;
    {
        const bool branch_taken_0x184324 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x184324) {
            ctx->pc = 0x184344u;
            goto label_184344;
        }
    }
    ctx->pc = 0x18432Cu;
label_18432c:
    // 0x18432c: 0x9226023f  lbu         $a2, 0x23F($s1)
    ctx->pc = 0x18432cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 575)));
label_184330:
    // 0x184330: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x184330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184334:
    // 0x184334: 0xc06261c  jal         func_189870
label_184338:
    if (ctx->pc == 0x184338u) {
        ctx->pc = 0x184338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184334u;
        // 0x184338: 0x26250150  addiu       $a1, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18433Cu;
        goto label_18433c;
    }
    ctx->pc = 0x184334u;
    SET_GPR_U32(ctx, 31, 0x18433Cu);
    ctx->pc = 0x184338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184334u;
    // 0x184338: 0x26250150  addiu       $a1, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189870u;
    { ctx->pc = 0x189870; return; }
    ctx->pc = 0x18433Cu;
label_18433c:
    // 0x18433c: 0x10000030  b           . + 4 + (0x30 << 2)
label_184340:
    if (ctx->pc == 0x184340u) {
        ctx->pc = 0x184340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18433Cu;
        // 0x184340: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184344u;
        goto label_184344;
    }
    ctx->pc = 0x18433Cu;
    {
        const bool branch_taken_0x18433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18433Cu;
        // 0x184340: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18433c) {
            ctx->pc = 0x184400u;
            goto label_184400;
        }
    }
    ctx->pc = 0x184344u;
label_184344:
    // 0x184344: 0x92830231  lbu         $v1, 0x231($s4)
    ctx->pc = 0x184344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 561)));
label_184348:
    // 0x184348: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x184348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18434c:
    // 0x18434c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_184350:
    if (ctx->pc == 0x184350u) {
        ctx->pc = 0x184350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18434Cu;
        // 0x184350: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184354u;
        goto label_184354;
    }
    ctx->pc = 0x18434Cu;
    {
        const bool branch_taken_0x18434c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x184350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18434Cu;
        // 0x184350: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18434c) {
            ctx->pc = 0x184360u;
            goto label_184360;
        }
    }
    ctx->pc = 0x184354u;
label_184354:
    // 0x184354: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x184354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_184358:
    // 0x184358: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_18435c:
    if (ctx->pc == 0x18435Cu) {
        ctx->pc = 0x18435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184358u;
        // 0x18435c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184360u;
        goto label_184360;
    }
    ctx->pc = 0x184358u;
    {
        const bool branch_taken_0x184358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184358u;
        // 0x18435c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184358) {
            ctx->pc = 0x184374u;
            goto label_184374;
        }
    }
    ctx->pc = 0x184360u;
label_184360:
    // 0x184360: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x184360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_184364:
    // 0x184364: 0xc06138c  jal         func_184E30
label_184368:
    if (ctx->pc == 0x184368u) {
        ctx->pc = 0x184368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184364u;
        // 0x184368: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18436Cu;
        goto label_18436c;
    }
    ctx->pc = 0x184364u;
    SET_GPR_U32(ctx, 31, 0x18436Cu);
    ctx->pc = 0x184368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184364u;
    // 0x184368: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184E30u;
    { ctx->pc = 0x184e30; return; }
    ctx->pc = 0x18436Cu;
label_18436c:
    // 0x18436c: 0x10000023  b           . + 4 + (0x23 << 2)
label_184370:
    if (ctx->pc == 0x184370u) {
        ctx->pc = 0x184374u;
        goto label_184374;
    }
    ctx->pc = 0x18436Cu;
    {
        const bool branch_taken_0x18436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18436c) {
            ctx->pc = 0x1843FCu;
            goto label_1843fc;
        }
    }
    ctx->pc = 0x184374u;
label_184374:
    // 0x184374: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_184378:
    if (ctx->pc == 0x184378u) {
        ctx->pc = 0x184378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184374u;
        // 0x184378: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18437Cu;
        goto label_18437c;
    }
    ctx->pc = 0x184374u;
    {
        const bool branch_taken_0x184374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x184378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184374u;
        // 0x184378: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184374) {
            ctx->pc = 0x184390u;
            goto label_184390;
        }
    }
    ctx->pc = 0x18437Cu;
label_18437c:
    // 0x18437c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18437cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_184380:
    // 0x184380: 0xc0616a4  jal         func_185A90
label_184384:
    if (ctx->pc == 0x184384u) {
        ctx->pc = 0x184384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184380u;
        // 0x184384: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184388u;
        goto label_184388;
    }
    ctx->pc = 0x184380u;
    SET_GPR_U32(ctx, 31, 0x184388u);
    ctx->pc = 0x184384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184380u;
    // 0x184384: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185A90u;
    { ctx->pc = 0x185a90; return; }
    ctx->pc = 0x184388u;
label_184388:
    // 0x184388: 0x1000001c  b           . + 4 + (0x1C << 2)
label_18438c:
    if (ctx->pc == 0x18438Cu) {
        ctx->pc = 0x184390u;
        goto label_184390;
    }
    ctx->pc = 0x184388u;
    {
        const bool branch_taken_0x184388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184388) {
            ctx->pc = 0x1843FCu;
            goto label_1843fc;
        }
    }
    ctx->pc = 0x184390u;
label_184390:
    // 0x184390: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x184390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_184394:
    // 0x184394: 0xc061a48  jal         func_186920
label_184398:
    if (ctx->pc == 0x184398u) {
        ctx->pc = 0x184398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184394u;
        // 0x184398: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18439Cu;
        goto label_18439c;
    }
    ctx->pc = 0x184394u;
    SET_GPR_U32(ctx, 31, 0x18439Cu);
    ctx->pc = 0x184398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184394u;
    // 0x184398: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186920u;
    { ctx->pc = 0x186920; return; }
    ctx->pc = 0x18439Cu;
label_18439c:
    // 0x18439c: 0x10000017  b           . + 4 + (0x17 << 2)
label_1843a0:
    if (ctx->pc == 0x1843A0u) {
        ctx->pc = 0x1843A4u;
        goto label_1843a4;
    }
    ctx->pc = 0x18439Cu;
    {
        const bool branch_taken_0x18439c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18439c) {
            ctx->pc = 0x1843FCu;
            goto label_1843fc;
        }
    }
    ctx->pc = 0x1843A4u;
label_1843a4:
    // 0x1843a4: 0x9266002d  lbu         $a2, 0x2D($s3)
    ctx->pc = 0x1843a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 45)));
label_1843a8:
    // 0x1843a8: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x1843a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
label_1843ac:
    // 0x1843ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1843acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1843b0:
    // 0x1843b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1843b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1843b4:
    // 0x1843b4: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x1843b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_1843b8:
    // 0x1843b8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1843b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1843bc:
    // 0x1843bc: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x1843bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_1843c0:
    // 0x1843c0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1843c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1843c4:
    // 0x1843c4: 0x90c60236  lbu         $a2, 0x236($a2)
    ctx->pc = 0x1843c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 566)));
label_1843c8:
    // 0x1843c8: 0xa2860236  sb          $a2, 0x236($s4)
    ctx->pc = 0x1843c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 566), (uint8_t)GPR_U32(ctx, 6));
label_1843cc:
    // 0x1843cc: 0xa2850237  sb          $a1, 0x237($s4)
    ctx->pc = 0x1843ccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 567), (uint8_t)GPR_U32(ctx, 5));
label_1843d0:
    // 0x1843d0: 0xa284023c  sb          $a0, 0x23C($s4)
    ctx->pc = 0x1843d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 572), (uint8_t)GPR_U32(ctx, 4));
label_1843d4:
    // 0x1843d4: 0xae830260  sw          $v1, 0x260($s4)
    ctx->pc = 0x1843d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 608), GPR_U32(ctx, 3));
label_1843d8:
    // 0x1843d8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1843dc:
    if (ctx->pc == 0x1843DCu) {
        ctx->pc = 0x1843DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843D8u;
        // 0x1843dc: 0xae800264  sw          $zero, 0x264($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843E0u;
        goto label_1843e0;
    }
    ctx->pc = 0x1843D8u;
    {
        const bool branch_taken_0x1843d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1843DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843D8u;
        // 0x1843dc: 0xae800264  sw          $zero, 0x264($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1843d8) {
            ctx->pc = 0x1843FCu;
            goto label_1843fc;
        }
    }
    ctx->pc = 0x1843E0u;
label_1843e0:
    // 0x1843e0: 0x9203023a  lbu         $v1, 0x23A($s0)
    ctx->pc = 0x1843e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 570)));
label_1843e4:
    // 0x1843e4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1843e8:
    if (ctx->pc == 0x1843E8u) {
        ctx->pc = 0x1843ECu;
        goto label_1843ec;
    }
    ctx->pc = 0x1843E4u;
    {
        const bool branch_taken_0x1843e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1843e4) {
            ctx->pc = 0x1843FCu;
            goto label_1843fc;
        }
    }
    ctx->pc = 0x1843ECu;
label_1843ec:
    // 0x1843ec: 0x9203023b  lbu         $v1, 0x23B($s0)
    ctx->pc = 0x1843ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 571)));
label_1843f0:
    // 0x1843f0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1843f4:
    if (ctx->pc == 0x1843F4u) {
        ctx->pc = 0x1843F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843F0u;
        // 0x1843f4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1843F8u;
        goto label_1843f8;
    }
    ctx->pc = 0x1843F0u;
    {
        const bool branch_taken_0x1843f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1843F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1843F0u;
        // 0x1843f4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1843f0) {
            ctx->pc = 0x1843FCu;
            goto label_1843fc;
        }
    }
    ctx->pc = 0x1843F8u;
label_1843f8:
    // 0x1843f8: 0xa2830235  sb          $v1, 0x235($s4)
    ctx->pc = 0x1843f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 565), (uint8_t)GPR_U32(ctx, 3));
label_1843fc:
    // 0x1843fc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1843fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_184400:
    // 0x184400: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x184400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_184404:
    // 0x184404: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x184404u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_184408:
    // 0x184408: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x184408u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18440c:
    // 0x18440c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18440cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_184410:
    // 0x184410: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x184410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_184414:
    // 0x184414: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x184414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_184418:
    // 0x184418: 0x3e00008  jr          $ra
label_18441c:
    if (ctx->pc == 0x18441Cu) {
        ctx->pc = 0x18441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184418u;
        // 0x18441c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184420u;
        goto label_184420;
    }
    ctx->pc = 0x184418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184418u;
        // 0x18441c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184420u;
label_184420:
    // 0x184420: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x184420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_184424:
    // 0x184424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184428:
    // 0x184428: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x184428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_18442c:
    // 0x18442c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18442cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_184430:
    // 0x184430: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x184430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_184434:
    // 0x184434: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x184434u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_184438:
    // 0x184438: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x184438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_18443c:
    // 0x18443c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18443cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_184440:
    // 0x184440: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x184440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_184444:
    // 0x184444: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x184444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_184448:
    // 0x184448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18444c:
    // 0x18444c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18444cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_184450:
    // 0x184450: 0x90a30232  lbu         $v1, 0x232($a1)
    ctx->pc = 0x184450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
label_184454:
    // 0x184454: 0x14620065  bne         $v1, $v0, . + 4 + (0x65 << 2)
label_184458:
    if (ctx->pc == 0x184458u) {
        ctx->pc = 0x184458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184454u;
        // 0x184458: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18445Cu;
        goto label_18445c;
    }
    ctx->pc = 0x184454u;
    {
        const bool branch_taken_0x184454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x184458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184454u;
        // 0x184458: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184454) {
            ctx->pc = 0x1845ECu;
            goto label_1845ec;
        }
    }
    ctx->pc = 0x18445Cu;
label_18445c:
    // 0x18445c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x18445cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_184460:
    // 0x184460: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x184460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_184464:
    // 0x184464: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x184464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_184468:
    // 0x184468: 0x14620060  bne         $v1, $v0, . + 4 + (0x60 << 2)
label_18446c:
    if (ctx->pc == 0x18446Cu) {
        ctx->pc = 0x184470u;
        goto label_184470;
    }
    ctx->pc = 0x184468u;
    {
        const bool branch_taken_0x184468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x184468) {
            ctx->pc = 0x1845ECu;
            goto label_1845ec;
        }
    }
    ctx->pc = 0x184470u;
label_184470:
    // 0x184470: 0x92a50238  lbu         $a1, 0x238($s5)
    ctx->pc = 0x184470u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 568)));
label_184474:
    // 0x184474: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x184474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_184478:
    // 0x184478: 0x2442210b  addiu       $v0, $v0, 0x210B
    ctx->pc = 0x184478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8459));
label_18447c:
    // 0x18447c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x18447cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_184480:
    // 0x184480: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x184480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_184484:
    // 0x184484: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x184484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_184488:
    // 0x184488: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x184488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18448c:
    // 0x18448c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_184490:
    // 0x184490: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x184490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_184494:
    // 0x184494: 0x14470055  bne         $v0, $a3, . + 4 + (0x55 << 2)
label_184498:
    if (ctx->pc == 0x184498u) {
        ctx->pc = 0x184498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184494u;
        // 0x184498: 0x3c024b09  lui         $v0, 0x4B09 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19209 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18449Cu;
        goto label_18449c;
    }
    ctx->pc = 0x184494u;
    {
        const bool branch_taken_0x184494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x184498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184494u;
        // 0x184498: 0x3c024b09  lui         $v0, 0x4B09 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19209 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184494) {
            ctx->pc = 0x1845ECu;
            goto label_1845ec;
        }
    }
    ctx->pc = 0x18449Cu;
label_18449c:
    // 0x18449c: 0x90850034  lbu         $a1, 0x34($a0)
    ctx->pc = 0x18449cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
label_1844a0:
    // 0x1844a0: 0x34425440  ori         $v0, $v0, 0x5440
    ctx->pc = 0x1844a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21568);
label_1844a4:
    // 0x1844a4: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x1844a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_1844a8:
    // 0x1844a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1844a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1844ac:
    // 0x1844ac: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x1844acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_1844b0:
    // 0x1844b0: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1844b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1844b4:
    // 0x1844b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1844b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1844b8:
    // 0x1844b8: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x1844b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1844bc:
    // 0x1844bc: 0x38a60001  xori        $a2, $a1, 0x1
    ctx->pc = 0x1844bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_1844c0:
    // 0x1844c0: 0x62a00  sll         $a1, $a2, 8
    ctx->pc = 0x1844c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1844c4:
    // 0x1844c4: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x1844c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1844c8:
    // 0x1844c8: 0x90450013  lbu         $a1, 0x13($v0)
    ctx->pc = 0x1844c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
label_1844cc:
    // 0x1844cc: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1844ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1844d0:
    // 0x1844d0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1844d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1844d4:
    // 0x1844d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1844d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1844d8:
    // 0x1844d8: 0x10a70004  beq         $a1, $a3, . + 4 + (0x4 << 2)
label_1844dc:
    if (ctx->pc == 0x1844DCu) {
        ctx->pc = 0x1844DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844D8u;
        // 0x1844dc: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1844E0u;
        goto label_1844e0;
    }
    ctx->pc = 0x1844D8u;
    {
        const bool branch_taken_0x1844d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x1844DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844D8u;
        // 0x1844dc: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1844d8) {
            ctx->pc = 0x1844ECu;
            goto label_1844ec;
        }
    }
    ctx->pc = 0x1844E0u;
label_1844e0:
    // 0x1844e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1844e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1844e4:
    // 0x1844e4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
label_1844e8:
    if (ctx->pc == 0x1844E8u) {
        ctx->pc = 0x1844ECu;
        goto label_1844ec;
    }
    ctx->pc = 0x1844E4u;
    {
        const bool branch_taken_0x1844e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1844e4) {
            ctx->pc = 0x1844F4u;
            goto label_1844f4;
        }
    }
    ctx->pc = 0x1844ECu;
label_1844ec:
    // 0x1844ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_1844f0:
    if (ctx->pc == 0x1844F0u) {
        ctx->pc = 0x1844F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844ECu;
        // 0x1844f0: 0x64030003  daddiu      $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1844F4u;
        goto label_1844f4;
    }
    ctx->pc = 0x1844ECu;
    {
        const bool branch_taken_0x1844ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1844F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1844ECu;
        // 0x1844f0: 0x64030003  daddiu      $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1844ec) {
            ctx->pc = 0x1844FCu;
            goto label_1844fc;
        }
    }
    ctx->pc = 0x1844F4u;
label_1844f4:
    // 0x1844f4: 0x8083003a  lb          $v1, 0x3A($a0)
    ctx->pc = 0x1844f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
label_1844f8:
    // 0x1844f8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1844f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1844fc:
    // 0x1844fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1844fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184500:
    // 0x184500: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x184500u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184504:
    // 0x184504: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x184504u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_184508:
    // 0x184508: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x184508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18450c:
    // 0x18450c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18450cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_184510:
    // 0x184510: 0x9103003d  lbu         $v1, 0x3D($t0)
    ctx->pc = 0x184510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 61)));
label_184514:
    // 0x184514: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_184518:
    if (ctx->pc == 0x184518u) {
        ctx->pc = 0x18451Cu;
        goto label_18451c;
    }
    ctx->pc = 0x184514u;
    {
        const bool branch_taken_0x184514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184514) {
            ctx->pc = 0x18457Cu;
            goto label_18457c;
        }
    }
    ctx->pc = 0x18451Cu;
label_18451c:
    // 0x18451c: 0x9103003a  lbu         $v1, 0x3A($t0)
    ctx->pc = 0x18451cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 58)));
label_184520:
    // 0x184520: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x184520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_184524:
    // 0x184524: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_184528:
    if (ctx->pc == 0x184528u) {
        ctx->pc = 0x18452Cu;
        goto label_18452c;
    }
    ctx->pc = 0x184524u;
    {
        const bool branch_taken_0x184524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184524) {
            ctx->pc = 0x18457Cu;
            goto label_18457c;
        }
    }
    ctx->pc = 0x18452Cu;
label_18452c:
    // 0x18452c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x18452cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_184530:
    // 0x184530: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x184530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
label_184534:
    // 0x184534: 0x10660003  beq         $v1, $a2, . + 4 + (0x3 << 2)
label_184538:
    if (ctx->pc == 0x184538u) {
        ctx->pc = 0x18453Cu;
        goto label_18453c;
    }
    ctx->pc = 0x184534u;
    {
        const bool branch_taken_0x184534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x184534) {
            ctx->pc = 0x184544u;
            goto label_184544;
        }
    }
    ctx->pc = 0x18453Cu;
label_18453c:
    // 0x18453c: 0x1465000f  bne         $v1, $a1, . + 4 + (0xF << 2)
label_184540:
    if (ctx->pc == 0x184540u) {
        ctx->pc = 0x184544u;
        goto label_184544;
    }
    ctx->pc = 0x18453Cu;
    {
        const bool branch_taken_0x18453c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x18453c) {
            ctx->pc = 0x18457Cu;
            goto label_18457c;
        }
    }
    ctx->pc = 0x184544u;
label_184544:
    // 0x184544: 0x0  nop
    ctx->pc = 0x184544u;
    // NOP
label_184548:
    // 0x184548: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x184548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18454c:
    // 0x18454c: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x18454cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_184550:
    // 0x184550: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x184550u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_184554:
    // 0x184554: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x184554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_184558:
    // 0x184558: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x184558u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_18455c:
    // 0x18455c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x18455cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_184560:
    // 0x184560: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x184560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_184564:
    // 0x184564: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x184564u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_184568:
    // 0x184568: 0x0  nop
    ctx->pc = 0x184568u;
    // NOP
label_18456c:
    // 0x18456c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_184570:
    if (ctx->pc == 0x184570u) {
        ctx->pc = 0x184574u;
        goto label_184574;
    }
    ctx->pc = 0x18456Cu;
    {
        const bool branch_taken_0x18456c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18456c) {
            ctx->pc = 0x18457Cu;
            goto label_18457c;
        }
    }
    ctx->pc = 0x184574u;
label_184574:
    // 0x184574: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x184574u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_184578:
    // 0x184578: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x184578u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_18457c:
    // 0x18457c: 0x0  nop
    ctx->pc = 0x18457cu;
    // NOP
label_184580:
    // 0x184580: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x184580u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_184584:
    // 0x184584: 0x294300ff  slti        $v1, $t2, 0xFF
    ctx->pc = 0x184584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)255) ? 1 : 0);
label_184588:
    // 0x184588: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_18458c:
    if (ctx->pc == 0x18458Cu) {
        ctx->pc = 0x18458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184588u;
        // 0x18458c: 0x25080048  addiu       $t0, $t0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184590u;
        goto label_184590;
    }
    ctx->pc = 0x184588u;
    {
        const bool branch_taken_0x184588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184588u;
        // 0x18458c: 0x25080048  addiu       $t0, $t0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184588) {
            ctx->pc = 0x184510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184510;
        }
    }
    ctx->pc = 0x184590u;
label_184590:
    // 0x184590: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
label_184594:
    if (ctx->pc == 0x184594u) {
        ctx->pc = 0x184598u;
        goto label_184598;
    }
    ctx->pc = 0x184590u;
    {
        const bool branch_taken_0x184590 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x184590) {
            ctx->pc = 0x1845B0u;
            goto label_1845b0;
        }
    }
    ctx->pc = 0x184598u;
label_184598:
    // 0x184598: 0x91300039  lbu         $s0, 0x39($t1)
    ctx->pc = 0x184598u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 57)));
label_18459c:
    // 0x18459c: 0x92a20236  lbu         $v0, 0x236($s5)
    ctx->pc = 0x18459cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 566)));
label_1845a0:
    // 0x1845a0: 0x10500028  beq         $v0, $s0, . + 4 + (0x28 << 2)
label_1845a4:
    if (ctx->pc == 0x1845A4u) {
        ctx->pc = 0x1845A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845A0u;
        // 0x1845a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1845A8u;
        goto label_1845a8;
    }
    ctx->pc = 0x1845A0u;
    {
        const bool branch_taken_0x1845a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1845A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845A0u;
        // 0x1845a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1845a0) {
            ctx->pc = 0x184644u;
            goto label_184644;
        }
    }
    ctx->pc = 0x1845A8u;
label_1845a8:
    // 0x1845a8: 0x10000025  b           . + 4 + (0x25 << 2)
label_1845ac:
    if (ctx->pc == 0x1845ACu) {
        ctx->pc = 0x1845ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845A8u;
        // 0x1845ac: 0xa2b00236  sb          $s0, 0x236($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 566), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1845B0u;
        goto label_1845b0;
    }
    ctx->pc = 0x1845A8u;
    {
        const bool branch_taken_0x1845a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1845ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845A8u;
        // 0x1845ac: 0xa2b00236  sb          $s0, 0x236($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 566), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1845a8) {
            ctx->pc = 0x184640u;
            goto label_184640;
        }
    }
    ctx->pc = 0x1845B0u;
label_1845b0:
    // 0x1845b0: 0x90860038  lbu         $a2, 0x38($a0)
    ctx->pc = 0x1845b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
label_1845b4:
    // 0x1845b4: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x1845b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_1845b8:
    // 0x1845b8: 0x246325a9  addiu       $v1, $v1, 0x25A9
    ctx->pc = 0x1845b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9641));
label_1845bc:
    // 0x1845bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1845bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1845c0:
    // 0x1845c0: 0x92a30236  lbu         $v1, 0x236($s5)
    ctx->pc = 0x1845c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 566)));
label_1845c4:
    // 0x1845c4: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1845c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1845c8:
    // 0x1845c8: 0x24440000  addiu       $a0, $v0, 0x0
    ctx->pc = 0x1845c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1845cc:
    // 0x1845cc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1845ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1845d0:
    // 0x1845d0: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x1845d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1845d4:
    // 0x1845d4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1845d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1845d8:
    // 0x1845d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1845d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1845dc:
    // 0x1845dc: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_1845e0:
    if (ctx->pc == 0x1845E0u) {
        ctx->pc = 0x1845E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845DCu;
        // 0x1845e0: 0x90900000  lbu         $s0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1845E4u;
        goto label_1845e4;
    }
    ctx->pc = 0x1845DCu;
    {
        const bool branch_taken_0x1845dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1845E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845DCu;
        // 0x1845e0: 0x90900000  lbu         $s0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1845dc) {
            ctx->pc = 0x184640u;
            goto label_184640;
        }
    }
    ctx->pc = 0x1845E4u;
label_1845e4:
    // 0x1845e4: 0x10000016  b           . + 4 + (0x16 << 2)
label_1845e8:
    if (ctx->pc == 0x1845E8u) {
        ctx->pc = 0x1845E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845E4u;
        // 0x1845e8: 0xa2b00236  sb          $s0, 0x236($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 566), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1845ECu;
        goto label_1845ec;
    }
    ctx->pc = 0x1845E4u;
    {
        const bool branch_taken_0x1845e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1845E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1845E4u;
        // 0x1845e8: 0xa2b00236  sb          $s0, 0x236($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 566), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1845e4) {
            ctx->pc = 0x184640u;
            goto label_184640;
        }
    }
    ctx->pc = 0x1845ECu;
label_1845ec:
    // 0x1845ec: 0x90870034  lbu         $a3, 0x34($a0)
    ctx->pc = 0x1845ecu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
label_1845f0:
    // 0x1845f0: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x1845f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_1845f4:
    // 0x1845f4: 0x90850038  lbu         $a1, 0x38($a0)
    ctx->pc = 0x1845f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
label_1845f8:
    // 0x1845f8: 0x24c625a9  addiu       $a2, $a2, 0x25A9
    ctx->pc = 0x1845f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9641));
label_1845fc:
    // 0x1845fc: 0x92a30236  lbu         $v1, 0x236($s5)
    ctx->pc = 0x1845fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 566)));
label_184600:
    // 0x184600: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x184600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_184604:
    // 0x184604: 0x38e80001  xori        $t0, $a3, 0x1
    ctx->pc = 0x184604u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
label_184608:
    // 0x184608: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x184608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_18460c:
    // 0x18460c: 0x83a00  sll         $a3, $t0, 8
    ctx->pc = 0x18460cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_184610:
    // 0x184610: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x184610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_184614:
    // 0x184614: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x184614u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_184618:
    // 0x184618: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x184618u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_18461c:
    // 0x18461c: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x18461cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_184620:
    // 0x184620: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x184620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_184624:
    // 0x184624: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x184624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_184628:
    // 0x184628: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x184628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_18462c:
    // 0x18462c: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x18462cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_184630:
    // 0x184630: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x184630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_184634:
    // 0x184634: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_184638:
    if (ctx->pc == 0x184638u) {
        ctx->pc = 0x184638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184634u;
        // 0x184638: 0x90900000  lbu         $s0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18463Cu;
        goto label_18463c;
    }
    ctx->pc = 0x184634u;
    {
        const bool branch_taken_0x184634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x184638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184634u;
        // 0x184638: 0x90900000  lbu         $s0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184634) {
            ctx->pc = 0x184640u;
            goto label_184640;
        }
    }
    ctx->pc = 0x18463Cu;
label_18463c:
    // 0x18463c: 0xa2b00236  sb          $s0, 0x236($s5)
    ctx->pc = 0x18463cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 566), (uint8_t)GPR_U32(ctx, 16));
label_184640:
    // 0x184640: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x184640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_184644:
    // 0x184644: 0xc061238  jal         func_1848E0
label_184648:
    if (ctx->pc == 0x184648u) {
        ctx->pc = 0x18464Cu;
        goto label_18464c;
    }
    ctx->pc = 0x184644u;
    SET_GPR_U32(ctx, 31, 0x18464Cu);
    ctx->pc = 0x1848E0u;
    goto label_1848e0;
    ctx->pc = 0x18464Cu;
label_18464c:
    // 0x18464c: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
label_184650:
    if (ctx->pc == 0x184650u) {
        ctx->pc = 0x184654u;
        goto label_184654;
    }
    ctx->pc = 0x18464Cu;
    {
        const bool branch_taken_0x18464c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18464c) {
            ctx->pc = 0x1848ACu;
            goto label_1848ac;
        }
    }
    ctx->pc = 0x184654u;
label_184654:
    // 0x184654: 0x92b60236  lbu         $s6, 0x236($s5)
    ctx->pc = 0x184654u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 566)));
label_184658:
    // 0x184658: 0x2ac1004a  slti        $at, $s6, 0x4A
    ctx->pc = 0x184658u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)74) ? 1 : 0);
label_18465c:
    // 0x18465c: 0x10200093  beqz        $at, . + 4 + (0x93 << 2)
label_184660:
    if (ctx->pc == 0x184660u) {
        ctx->pc = 0x184660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18465Cu;
        // 0x184660: 0x161840  sll         $v1, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184664u;
        goto label_184664;
    }
    ctx->pc = 0x18465Cu;
    {
        const bool branch_taken_0x18465c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x184660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18465Cu;
        // 0x184660: 0x161840  sll         $v1, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18465c) {
            ctx->pc = 0x1848ACu;
            goto label_1848ac;
        }
    }
    ctx->pc = 0x184664u;
label_184664:
    // 0x184664: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x184664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184668:
    // 0x184668: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x184668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_18466c:
    // 0x18466c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18466cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184670:
    // 0x184670: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x184670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_184674:
    // 0x184674: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x184674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_184678:
    // 0x184678: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x184678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18467c:
    // 0x18467c: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x18467cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_184680:
    // 0x184680: 0x0  nop
    ctx->pc = 0x184680u;
    // NOP
label_184684:
    // 0x184684: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x184684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_184688:
    // 0x184688: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x184688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18468c:
    // 0x18468c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_184690:
    if (ctx->pc == 0x184690u) {
        ctx->pc = 0x184690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18468Cu;
        // 0x184690: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184694u;
        goto label_184694;
    }
    ctx->pc = 0x18468Cu;
    {
        const bool branch_taken_0x18468c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x184690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18468Cu;
        // 0x184690: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18468c) {
            ctx->pc = 0x1846B4u;
            goto label_1846b4;
        }
    }
    ctx->pc = 0x184694u;
label_184694:
    // 0x184694: 0xc0624ec  jal         func_1893B0
label_184698:
    if (ctx->pc == 0x184698u) {
        ctx->pc = 0x18469Cu;
        goto label_18469c;
    }
    ctx->pc = 0x184694u;
    SET_GPR_U32(ctx, 31, 0x18469Cu);
    ctx->pc = 0x1893B0u;
    { ctx->pc = 0x1893b0; return; }
    ctx->pc = 0x18469Cu;
label_18469c:
    // 0x18469c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1846a0:
    if (ctx->pc == 0x1846A0u) {
        ctx->pc = 0x1846A4u;
        goto label_1846a4;
    }
    ctx->pc = 0x18469Cu;
    {
        const bool branch_taken_0x18469c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18469c) {
            ctx->pc = 0x1846B4u;
            goto label_1846b4;
        }
    }
    ctx->pc = 0x1846A4u;
label_1846a4:
    // 0x1846a4: 0xa2b30235  sb          $s3, 0x235($s5)
    ctx->pc = 0x1846a4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 565), (uint8_t)GPR_U32(ctx, 19));
label_1846a8:
    // 0x1846a8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1846a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1846ac:
    // 0x1846ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_1846b0:
    if (ctx->pc == 0x1846B0u) {
        ctx->pc = 0x1846B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846ACu;
        // 0x1846b0: 0xa2b60236  sb          $s6, 0x236($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 566), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1846B4u;
        goto label_1846b4;
    }
    ctx->pc = 0x1846ACu;
    {
        const bool branch_taken_0x1846ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1846B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846ACu;
        // 0x1846b0: 0xa2b60236  sb          $s6, 0x236($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 566), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1846ac) {
            ctx->pc = 0x1846C4u;
            goto label_1846c4;
        }
    }
    ctx->pc = 0x1846B4u;
label_1846b4:
    // 0x1846b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1846b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1846b8:
    // 0x1846b8: 0x2a630009  slti        $v1, $s3, 0x9
    ctx->pc = 0x1846b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
label_1846bc:
    // 0x1846bc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_1846c0:
    if (ctx->pc == 0x1846C0u) {
        ctx->pc = 0x1846C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846BCu;
        // 0x1846c0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1846C4u;
        goto label_1846c4;
    }
    ctx->pc = 0x1846BCu;
    {
        const bool branch_taken_0x1846bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1846C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846BCu;
        // 0x1846c0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1846bc) {
            ctx->pc = 0x184680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184680;
        }
    }
    ctx->pc = 0x1846C4u;
label_1846c4:
    // 0x1846c4: 0x0  nop
    ctx->pc = 0x1846c4u;
    // NOP
label_1846c8:
    // 0x1846c8: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
label_1846cc:
    if (ctx->pc == 0x1846CCu) {
        ctx->pc = 0x1846CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846C8u;
        // 0x1846cc: 0x2a01004a  slti        $at, $s0, 0x4A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)74) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1846D0u;
        goto label_1846d0;
    }
    ctx->pc = 0x1846C8u;
    {
        const bool branch_taken_0x1846c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1846CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846C8u;
        // 0x1846cc: 0x2a01004a  slti        $at, $s0, 0x4A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)74) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1846c8) {
            ctx->pc = 0x18472Cu;
            goto label_18472c;
        }
    }
    ctx->pc = 0x1846D0u;
label_1846d0:
    // 0x1846d0: 0x8ee40024  lw          $a0, 0x24($s7)
    ctx->pc = 0x1846d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_1846d4:
    // 0x1846d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1846d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1846d8:
    // 0x1846d8: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x1846d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_1846dc:
    // 0x1846dc: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
label_1846e0:
    if (ctx->pc == 0x1846E0u) {
        ctx->pc = 0x1846E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846DCu;
        // 0x1846e0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1846E4u;
        goto label_1846e4;
    }
    ctx->pc = 0x1846DCu;
    {
        const bool branch_taken_0x1846dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1846E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1846DCu;
        // 0x1846e0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1846dc) {
            ctx->pc = 0x184720u;
            goto label_184720;
        }
    }
    ctx->pc = 0x1846E4u;
label_1846e4:
    // 0x1846e4: 0x92a60236  lbu         $a2, 0x236($s5)
    ctx->pc = 0x1846e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 566)));
label_1846e8:
    // 0x1846e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1846e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1846ec:
    // 0x1846ec: 0x92a20235  lbu         $v0, 0x235($s5)
    ctx->pc = 0x1846ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 565)));
label_1846f0:
    // 0x1846f0: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x1846f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1846f4:
    // 0x1846f4: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1846f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1846f8:
    // 0x1846f8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1846f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1846fc:
    // 0x1846fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1846fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_184700:
    // 0x184700: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x184700u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_184704:
    // 0x184704: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x184704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_184708:
    // 0x184708: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x184708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18470c:
    // 0x18470c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_184710:
    // 0x184710: 0x9046023f  lbu         $a2, 0x23F($v0)
    ctx->pc = 0x184710u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 575)));
label_184714:
    // 0x184714: 0xc06261c  jal         func_189870
label_184718:
    if (ctx->pc == 0x184718u) {
        ctx->pc = 0x184718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184714u;
        // 0x184718: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18471Cu;
        goto label_18471c;
    }
    ctx->pc = 0x184714u;
    SET_GPR_U32(ctx, 31, 0x18471Cu);
    ctx->pc = 0x184718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184714u;
    // 0x184718: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189870u;
    { ctx->pc = 0x189870; return; }
    ctx->pc = 0x18471Cu;
label_18471c:
    // 0x18471c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18471cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_184720:
    // 0x184720: 0xa2a30237  sb          $v1, 0x237($s5)
    ctx->pc = 0x184720u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 567), (uint8_t)GPR_U32(ctx, 3));
label_184724:
    // 0x184724: 0x10000061  b           . + 4 + (0x61 << 2)
label_184728:
    if (ctx->pc == 0x184728u) {
        ctx->pc = 0x184728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184724u;
        // 0x184728: 0xa6a00224  sh          $zero, 0x224($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 548), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18472Cu;
        goto label_18472c;
    }
    ctx->pc = 0x184724u;
    {
        const bool branch_taken_0x184724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184724u;
        // 0x184728: 0xa6a00224  sh          $zero, 0x224($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 548), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184724) {
            ctx->pc = 0x1848ACu;
            goto label_1848ac;
        }
    }
    ctx->pc = 0x18472Cu;
label_18472c:
    // 0x18472c: 0x1020005f  beqz        $at, . + 4 + (0x5F << 2)
label_184730:
    if (ctx->pc == 0x184730u) {
        ctx->pc = 0x184730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18472Cu;
        // 0x184730: 0xa2b00236  sb          $s0, 0x236($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 566), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184734u;
        goto label_184734;
    }
    ctx->pc = 0x18472Cu;
    {
        const bool branch_taken_0x18472c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x184730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18472Cu;
        // 0x184730: 0xa2b00236  sb          $s0, 0x236($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 566), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18472c) {
            ctx->pc = 0x1848ACu;
            goto label_1848ac;
        }
    }
    ctx->pc = 0x184734u;
label_184734:
    // 0x184734: 0x8ee40024  lw          $a0, 0x24($s7)
    ctx->pc = 0x184734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_184738:
    // 0x184738: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x184738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18473c:
    // 0x18473c: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x18473cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_184740:
    // 0x184740: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
label_184744:
    if (ctx->pc == 0x184744u) {
        ctx->pc = 0x184744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184740u;
        // 0x184744: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184748u;
        goto label_184748;
    }
    ctx->pc = 0x184740u;
    {
        const bool branch_taken_0x184740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x184744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184740u;
        // 0x184744: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184740) {
            ctx->pc = 0x1848ACu;
            goto label_1848ac;
        }
    }
    ctx->pc = 0x184748u;
label_184748:
    // 0x184748: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x184748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18474c:
    // 0x18474c: 0xc062734  jal         func_189CD0
label_184750:
    if (ctx->pc == 0x184750u) {
        ctx->pc = 0x184750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18474Cu;
        // 0x184750: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184754u;
        goto label_184754;
    }
    ctx->pc = 0x18474Cu;
    SET_GPR_U32(ctx, 31, 0x184754u);
    ctx->pc = 0x184750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18474Cu;
    // 0x184750: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189CD0u;
    { ctx->pc = 0x189cd0; return; }
    ctx->pc = 0x184754u;
label_184754:
    // 0x184754: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x184754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_184758:
    // 0x184758: 0x10430052  beq         $v0, $v1, . + 4 + (0x52 << 2)
label_18475c:
    if (ctx->pc == 0x18475Cu) {
        ctx->pc = 0x18475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184758u;
        // 0x18475c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184760u;
        goto label_184760;
    }
    ctx->pc = 0x184758u;
    {
        const bool branch_taken_0x184758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184758u;
        // 0x18475c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184758) {
            ctx->pc = 0x1848A4u;
            goto label_1848a4;
        }
    }
    ctx->pc = 0x184760u;
label_184760:
    // 0x184760: 0x1047003d  beq         $v0, $a3, . + 4 + (0x3D << 2)
label_184764:
    if (ctx->pc == 0x184764u) {
        ctx->pc = 0x184764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184760u;
        // 0x184764: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184768u;
        goto label_184768;
    }
    ctx->pc = 0x184760u;
    {
        const bool branch_taken_0x184760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x184764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184760u;
        // 0x184764: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184760) {
            ctx->pc = 0x184858u;
            goto label_184858;
        }
    }
    ctx->pc = 0x184768u;
label_184768:
    // 0x184768: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x184768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18476c:
    // 0x18476c: 0x10460039  beq         $v0, $a2, . + 4 + (0x39 << 2)
label_184770:
    if (ctx->pc == 0x184770u) {
        ctx->pc = 0x184770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18476Cu;
        // 0x184770: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184774u;
        goto label_184774;
    }
    ctx->pc = 0x18476Cu;
    {
        const bool branch_taken_0x18476c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x184770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18476Cu;
        // 0x184770: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18476c) {
            ctx->pc = 0x184854u;
            goto label_184854;
        }
    }
    ctx->pc = 0x184774u;
label_184774:
    // 0x184774: 0x10430037  beq         $v0, $v1, . + 4 + (0x37 << 2)
label_184778:
    if (ctx->pc == 0x184778u) {
        ctx->pc = 0x18477Cu;
        goto label_18477c;
    }
    ctx->pc = 0x184774u;
    {
        const bool branch_taken_0x184774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x184774) {
            ctx->pc = 0x184854u;
            goto label_184854;
        }
    }
    ctx->pc = 0x18477Cu;
label_18477c:
    // 0x18477c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_184780:
    if (ctx->pc == 0x184780u) {
        ctx->pc = 0x184784u;
        goto label_184784;
    }
    ctx->pc = 0x18477Cu;
    {
        const bool branch_taken_0x18477c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18477c) {
            ctx->pc = 0x18478Cu;
            goto label_18478c;
        }
    }
    ctx->pc = 0x184784u;
label_184784:
    // 0x184784: 0x1000004a  b           . + 4 + (0x4A << 2)
label_184788:
    if (ctx->pc == 0x184788u) {
        ctx->pc = 0x184788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184784u;
        // 0x184788: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18478Cu;
        goto label_18478c;
    }
    ctx->pc = 0x184784u;
    {
        const bool branch_taken_0x184784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184784u;
        // 0x184788: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184784) {
            ctx->pc = 0x1848B0u;
            goto label_1848b0;
        }
    }
    ctx->pc = 0x18478Cu;
label_18478c:
    // 0x18478c: 0x92a30235  lbu         $v1, 0x235($s5)
    ctx->pc = 0x18478cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 565)));
label_184790:
    // 0x184790: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x184790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_184794:
    // 0x184794: 0x8f8484e0  lw          $a0, -0x7B20($gp)
    ctx->pc = 0x184794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_184798:
    // 0x184798: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x184798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_18479c:
    // 0x18479c: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x18479cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1847a0:
    // 0x1847a0: 0x92a20231  lbu         $v0, 0x231($s5)
    ctx->pc = 0x1847a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 561)));
label_1847a4:
    // 0x1847a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1847a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1847a8:
    // 0x1847a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1847a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1847ac:
    // 0x1847ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1847acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1847b0:
    // 0x1847b0: 0x10460018  beq         $v0, $a2, . + 4 + (0x18 << 2)
label_1847b4:
    if (ctx->pc == 0x1847B4u) {
        ctx->pc = 0x1847B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847B0u;
        // 0x1847b4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1847B8u;
        goto label_1847b8;
    }
    ctx->pc = 0x1847B0u;
    {
        const bool branch_taken_0x1847b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1847B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847B0u;
        // 0x1847b4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1847b0) {
            ctx->pc = 0x184814u;
            goto label_184814;
        }
    }
    ctx->pc = 0x1847B8u;
label_1847b8:
    // 0x1847b8: 0x10470016  beq         $v0, $a3, . + 4 + (0x16 << 2)
label_1847bc:
    if (ctx->pc == 0x1847BCu) {
        ctx->pc = 0x1847C0u;
        goto label_1847c0;
    }
    ctx->pc = 0x1847B8u;
    {
        const bool branch_taken_0x1847b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x1847b8) {
            ctx->pc = 0x184814u;
            goto label_184814;
        }
    }
    ctx->pc = 0x1847C0u;
label_1847c0:
    // 0x1847c0: 0x92a2023c  lbu         $v0, 0x23C($s5)
    ctx->pc = 0x1847c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 572)));
label_1847c4:
    // 0x1847c4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1847c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1847c8:
    // 0x1847c8: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1847cc:
    if (ctx->pc == 0x1847CCu) {
        ctx->pc = 0x1847D0u;
        goto label_1847d0;
    }
    ctx->pc = 0x1847C8u;
    {
        const bool branch_taken_0x1847c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1847c8) {
            ctx->pc = 0x1847ECu;
            goto label_1847ec;
        }
    }
    ctx->pc = 0x1847D0u;
label_1847d0:
    // 0x1847d0: 0x92a20233  lbu         $v0, 0x233($s5)
    ctx->pc = 0x1847d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 563)));
label_1847d4:
    // 0x1847d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1847d8:
    if (ctx->pc == 0x1847D8u) {
        ctx->pc = 0x1847DCu;
        goto label_1847dc;
    }
    ctx->pc = 0x1847D4u;
    {
        const bool branch_taken_0x1847d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1847d4) {
            ctx->pc = 0x184804u;
            goto label_184804;
        }
    }
    ctx->pc = 0x1847DCu;
label_1847dc:
    // 0x1847dc: 0x92a30232  lbu         $v1, 0x232($s5)
    ctx->pc = 0x1847dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 562)));
label_1847e0:
    // 0x1847e0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1847e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1847e4:
    // 0x1847e4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1847e8:
    if (ctx->pc == 0x1847E8u) {
        ctx->pc = 0x1847ECu;
        goto label_1847ec;
    }
    ctx->pc = 0x1847E4u;
    {
        const bool branch_taken_0x1847e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1847e4) {
            ctx->pc = 0x184804u;
            goto label_184804;
        }
    }
    ctx->pc = 0x1847ECu;
label_1847ec:
    // 0x1847ec: 0x8ea30194  lw          $v1, 0x194($s5)
    ctx->pc = 0x1847ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 404)));
label_1847f0:
    // 0x1847f0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1847f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1847f4:
    // 0x1847f4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1847f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1847f8:
    // 0x1847f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1847f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1847fc:
    // 0x1847fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_184800:
    if (ctx->pc == 0x184800u) {
        ctx->pc = 0x184800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847FCu;
        // 0x184800: 0xaea20194  sw          $v0, 0x194($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184804u;
        goto label_184804;
    }
    ctx->pc = 0x1847FCu;
    {
        const bool branch_taken_0x1847fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1847FCu;
        // 0x184800: 0xaea20194  sw          $v0, 0x194($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1847fc) {
            ctx->pc = 0x184820u;
            goto label_184820;
        }
    }
    ctx->pc = 0x184804u;
label_184804:
    // 0x184804: 0x8ea20194  lw          $v0, 0x194($s5)
    ctx->pc = 0x184804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 404)));
label_184808:
    // 0x184808: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x184808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_18480c:
    // 0x18480c: 0x10000004  b           . + 4 + (0x4 << 2)
label_184810:
    if (ctx->pc == 0x184810u) {
        ctx->pc = 0x184810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18480Cu;
        // 0x184810: 0xaea20194  sw          $v0, 0x194($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184814u;
        goto label_184814;
    }
    ctx->pc = 0x18480Cu;
    {
        const bool branch_taken_0x18480c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18480Cu;
        // 0x184810: 0xaea20194  sw          $v0, 0x194($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18480c) {
            ctx->pc = 0x184820u;
            goto label_184820;
        }
    }
    ctx->pc = 0x184814u;
label_184814:
    // 0x184814: 0x8ea20194  lw          $v0, 0x194($s5)
    ctx->pc = 0x184814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 404)));
label_184818:
    // 0x184818: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x184818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_18481c:
    // 0x18481c: 0xaea20194  sw          $v0, 0x194($s5)
    ctx->pc = 0x18481cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 404), GPR_U32(ctx, 2));
label_184820:
    // 0x184820: 0x24860150  addiu       $a2, $a0, 0x150
    ctx->pc = 0x184820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
label_184824:
    // 0x184824: 0x26a50150  addiu       $a1, $s5, 0x150
    ctx->pc = 0x184824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
label_184828:
    // 0x184828: 0xc0439e8  jal         func_10E7A0
label_18482c:
    if (ctx->pc == 0x18482Cu) {
        ctx->pc = 0x18482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184828u;
        // 0x18482c: 0x26a40264  addiu       $a0, $s5, 0x264 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 612));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184830u;
        goto label_184830;
    }
    ctx->pc = 0x184828u;
    SET_GPR_U32(ctx, 31, 0x184830u);
    ctx->pc = 0x18482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184828u;
    // 0x18482c: 0x26a40264  addiu       $a0, $s5, 0x264 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x184828u, 0x184830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184830u;
label_184830:
    // 0x184830: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_184834:
    if (ctx->pc == 0x184834u) {
        ctx->pc = 0x184834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184830u;
        // 0x184834: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184838u;
        goto label_184838;
    }
    ctx->pc = 0x184830u;
    {
        const bool branch_taken_0x184830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184830u;
        // 0x184834: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184830) {
            ctx->pc = 0x184844u;
            goto label_184844;
        }
    }
    ctx->pc = 0x184838u;
label_184838:
    // 0x184838: 0x82a2023d  lb          $v0, 0x23D($s5)
    ctx->pc = 0x184838u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 573)));
label_18483c:
    // 0x18483c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x18483cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_184840:
    // 0x184840: 0xa2a2023d  sb          $v0, 0x23D($s5)
    ctx->pc = 0x184840u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 573), (uint8_t)GPR_U32(ctx, 2));
label_184844:
    // 0x184844: 0xc062948  jal         func_18A520
label_184848:
    if (ctx->pc == 0x184848u) {
        ctx->pc = 0x18484Cu;
        goto label_18484c;
    }
    ctx->pc = 0x184844u;
    SET_GPR_U32(ctx, 31, 0x18484Cu);
    ctx->pc = 0x18A520u;
    { ctx->pc = 0x18a520; return; }
    ctx->pc = 0x18484Cu;
label_18484c:
    // 0x18484c: 0x10000017  b           . + 4 + (0x17 << 2)
label_184850:
    if (ctx->pc == 0x184850u) {
        ctx->pc = 0x184854u;
        goto label_184854;
    }
    ctx->pc = 0x18484Cu;
    {
        const bool branch_taken_0x18484c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18484c) {
            ctx->pc = 0x1848ACu;
            goto label_1848ac;
        }
    }
    ctx->pc = 0x184854u;
label_184854:
    // 0x184854: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x184854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_184858:
    // 0x184858: 0x8f8484e0  lw          $a0, -0x7B20($gp)
    ctx->pc = 0x184858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_18485c:
    // 0x18485c: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x18485cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_184860:
    // 0x184860: 0x92a30235  lbu         $v1, 0x235($s5)
    ctx->pc = 0x184860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 565)));
label_184864:
    // 0x184864: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x184864u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_184868:
    // 0x184868: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x184868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_18486c:
    // 0x18486c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18486cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_184870:
    // 0x184870: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x184870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_184874:
    // 0x184874: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x184874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_184878:
    // 0x184878: 0x90c3023a  lbu         $v1, 0x23A($a2)
    ctx->pc = 0x184878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 570)));
label_18487c:
    // 0x18487c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_184880:
    if (ctx->pc == 0x184880u) {
        ctx->pc = 0x184880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18487Cu;
        // 0x184880: 0x24c50150  addiu       $a1, $a2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184884u;
        goto label_184884;
    }
    ctx->pc = 0x18487Cu;
    {
        const bool branch_taken_0x18487c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x184880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18487Cu;
        // 0x184880: 0x24c50150  addiu       $a1, $a2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18487c) {
            ctx->pc = 0x184890u;
            goto label_184890;
        }
    }
    ctx->pc = 0x184884u;
label_184884:
    // 0x184884: 0xa6a0019e  sh          $zero, 0x19E($s5)
    ctx->pc = 0x184884u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 414), (uint16_t)GPR_U32(ctx, 0));
label_184888:
    // 0x184888: 0x10000008  b           . + 4 + (0x8 << 2)
label_18488c:
    if (ctx->pc == 0x18488Cu) {
        ctx->pc = 0x18488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184888u;
        // 0x18488c: 0xa6a0019c  sh          $zero, 0x19C($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184890u;
        goto label_184890;
    }
    ctx->pc = 0x184888u;
    {
        const bool branch_taken_0x184888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184888u;
        // 0x18488c: 0xa6a0019c  sh          $zero, 0x19C($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184888) {
            ctx->pc = 0x1848ACu;
            goto label_1848ac;
        }
    }
    ctx->pc = 0x184890u;
label_184890:
    // 0x184890: 0x90c6023f  lbu         $a2, 0x23F($a2)
    ctx->pc = 0x184890u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 575)));
label_184894:
    // 0x184894: 0xc06261c  jal         func_189870
label_184898:
    if (ctx->pc == 0x184898u) {
        ctx->pc = 0x184898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184894u;
        // 0x184898: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18489Cu;
        goto label_18489c;
    }
    ctx->pc = 0x184894u;
    SET_GPR_U32(ctx, 31, 0x18489Cu);
    ctx->pc = 0x184898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184894u;
    // 0x184898: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189870u;
    { ctx->pc = 0x189870; return; }
    ctx->pc = 0x18489Cu;
label_18489c:
    // 0x18489c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1848a0:
    if (ctx->pc == 0x1848A0u) {
        ctx->pc = 0x1848A4u;
        goto label_1848a4;
    }
    ctx->pc = 0x18489Cu;
    {
        const bool branch_taken_0x18489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18489c) {
            ctx->pc = 0x1848ACu;
            goto label_1848ac;
        }
    }
    ctx->pc = 0x1848A4u;
label_1848a4:
    // 0x1848a4: 0xa6a0019e  sh          $zero, 0x19E($s5)
    ctx->pc = 0x1848a4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 414), (uint16_t)GPR_U32(ctx, 0));
label_1848a8:
    // 0x1848a8: 0xa6a0019c  sh          $zero, 0x19C($s5)
    ctx->pc = 0x1848a8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 412), (uint16_t)GPR_U32(ctx, 0));
label_1848ac:
    // 0x1848ac: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1848acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1848b0:
    // 0x1848b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1848b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1848b4:
    // 0x1848b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1848b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1848b8:
    // 0x1848b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1848b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1848bc:
    // 0x1848bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1848bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1848c0:
    // 0x1848c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1848c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1848c4:
    // 0x1848c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1848c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1848c8:
    // 0x1848c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1848c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1848cc:
    // 0x1848cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1848ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1848d0:
    // 0x1848d0: 0x3e00008  jr          $ra
label_1848d4:
    if (ctx->pc == 0x1848D4u) {
        ctx->pc = 0x1848D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848D0u;
        // 0x1848d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1848D8u;
        goto label_1848d8;
    }
    ctx->pc = 0x1848D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1848D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848D0u;
        // 0x1848d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1848D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1848D8u;
label_1848d8:
    // 0x1848d8: 0x0  nop
    ctx->pc = 0x1848d8u;
    // NOP
label_1848dc:
    // 0x1848dc: 0x0  nop
    ctx->pc = 0x1848dcu;
    // NOP
label_1848e0:
    // 0x1848e0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1848e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1848e4:
    // 0x1848e4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1848e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1848e8:
    // 0x1848e8: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x1848e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1848ec:
    // 0x1848ec: 0x10a30056  beq         $a1, $v1, . + 4 + (0x56 << 2)
label_1848f0:
    if (ctx->pc == 0x1848F0u) {
        ctx->pc = 0x1848F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848ECu;
        // 0x1848f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1848F4u;
        goto label_1848f4;
    }
    ctx->pc = 0x1848ECu;
    {
        const bool branch_taken_0x1848ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1848F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848ECu;
        // 0x1848f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1848ec) {
            ctx->pc = 0x184A48u;
            { ctx->pc = 0x184a48; return; }
        }
    }
    ctx->pc = 0x1848F4u;
label_1848f4:
    // 0x1848f4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1848f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1848f8:
    // 0x1848f8: 0x10a30053  beq         $a1, $v1, . + 4 + (0x53 << 2)
label_1848fc:
    if (ctx->pc == 0x1848FCu) {
        ctx->pc = 0x184900u;
        goto label_184900;
    }
    ctx->pc = 0x1848F8u;
    {
        const bool branch_taken_0x1848f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1848f8) {
            ctx->pc = 0x184A48u;
            { ctx->pc = 0x184a48; return; }
        }
    }
    ctx->pc = 0x184900u;
label_184900:
    // 0x184900: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x184900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_184904:
    // 0x184904: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
label_184908:
    if (ctx->pc == 0x184908u) {
        ctx->pc = 0x18490Cu;
        goto label_18490c;
    }
    ctx->pc = 0x184904u;
    {
        const bool branch_taken_0x184904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184904) {
            ctx->pc = 0x184A48u;
            { ctx->pc = 0x184a48; return; }
        }
    }
    ctx->pc = 0x18490Cu;
label_18490c:
    // 0x18490c: 0x90850236  lbu         $a1, 0x236($a0)
    ctx->pc = 0x18490cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 566)));
label_184910:
    // 0x184910: 0x28a1004a  slti        $at, $a1, 0x4A
    ctx->pc = 0x184910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)74) ? 1 : 0);
label_184914:
    // 0x184914: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
label_184918:
    if (ctx->pc == 0x184918u) {
        ctx->pc = 0x18491Cu;
        goto label_18491c;
    }
    ctx->pc = 0x184914u;
    {
        const bool branch_taken_0x184914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184914) {
            ctx->pc = 0x184A48u;
            { ctx->pc = 0x184a48; return; }
        }
    }
    ctx->pc = 0x18491Cu;
label_18491c:
    // 0x18491c: 0x90830235  lbu         $v1, 0x235($a0)
    ctx->pc = 0x18491cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 565)));
label_184920:
    // 0x184920: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x184920u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_184924:
    // 0x184924: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
label_184928:
    if (ctx->pc == 0x184928u) {
        ctx->pc = 0x18492Cu;
        goto label_18492c;
    }
    ctx->pc = 0x184924u;
    {
        const bool branch_taken_0x184924 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184924) {
            ctx->pc = 0x184A48u;
            { ctx->pc = 0x184a48; return; }
        }
    }
    ctx->pc = 0x18492Cu;
label_18492c:
    // 0x18492c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x18492cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_184930:
    // 0x184930: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x184930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_184934:
    // 0x184934: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x184934u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_184938:
    // 0x184938: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x184938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18493c:
    // 0x18493c: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x18493cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    ctx->pc = 0x184940u;
    return;
}

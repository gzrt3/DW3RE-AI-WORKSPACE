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


void FUN_0014eba0_part110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x183f30u: goto label_183f30;
        case 0x183f34u: goto label_183f34;
        case 0x183f38u: goto label_183f38;
        case 0x183f3cu: goto label_183f3c;
        case 0x183f40u: goto label_183f40;
        case 0x183f44u: goto label_183f44;
        case 0x183f48u: goto label_183f48;
        case 0x183f4cu: goto label_183f4c;
        case 0x183f50u: goto label_183f50;
        case 0x183f54u: goto label_183f54;
        case 0x183f58u: goto label_183f58;
        case 0x183f5cu: goto label_183f5c;
        case 0x183f60u: goto label_183f60;
        case 0x183f64u: goto label_183f64;
        case 0x183f68u: goto label_183f68;
        case 0x183f6cu: goto label_183f6c;
        case 0x183f70u: goto label_183f70;
        case 0x183f74u: goto label_183f74;
        case 0x183f78u: goto label_183f78;
        case 0x183f7cu: goto label_183f7c;
        case 0x183f80u: goto label_183f80;
        case 0x183f84u: goto label_183f84;
        case 0x183f88u: goto label_183f88;
        case 0x183f8cu: goto label_183f8c;
        case 0x183f90u: goto label_183f90;
        case 0x183f94u: goto label_183f94;
        case 0x183f98u: goto label_183f98;
        case 0x183f9cu: goto label_183f9c;
        case 0x183fa0u: goto label_183fa0;
        case 0x183fa4u: goto label_183fa4;
        case 0x183fa8u: goto label_183fa8;
        case 0x183facu: goto label_183fac;
        case 0x183fb0u: goto label_183fb0;
        case 0x183fb4u: goto label_183fb4;
        case 0x183fb8u: goto label_183fb8;
        case 0x183fbcu: goto label_183fbc;
        case 0x183fc0u: goto label_183fc0;
        case 0x183fc4u: goto label_183fc4;
        case 0x183fc8u: goto label_183fc8;
        case 0x183fccu: goto label_183fcc;
        case 0x183fd0u: goto label_183fd0;
        case 0x183fd4u: goto label_183fd4;
        case 0x183fd8u: goto label_183fd8;
        case 0x183fdcu: goto label_183fdc;
        case 0x183fe0u: goto label_183fe0;
        case 0x183fe4u: goto label_183fe4;
        case 0x183fe8u: goto label_183fe8;
        case 0x183fecu: goto label_183fec;
        case 0x183ff0u: goto label_183ff0;
        case 0x183ff4u: goto label_183ff4;
        case 0x183ff8u: goto label_183ff8;
        case 0x183ffcu: goto label_183ffc;
        case 0x184000u: goto label_184000;
        case 0x184004u: goto label_184004;
        case 0x184008u: goto label_184008;
        case 0x18400cu: goto label_18400c;
        case 0x184010u: goto label_184010;
        case 0x184014u: goto label_184014;
        case 0x184018u: goto label_184018;
        case 0x18401cu: goto label_18401c;
        case 0x184020u: goto label_184020;
        case 0x184024u: goto label_184024;
        case 0x184028u: goto label_184028;
        case 0x18402cu: goto label_18402c;
        case 0x184030u: goto label_184030;
        case 0x184034u: goto label_184034;
        case 0x184038u: goto label_184038;
        case 0x18403cu: goto label_18403c;
        case 0x184040u: goto label_184040;
        case 0x184044u: goto label_184044;
        case 0x184048u: goto label_184048;
        case 0x18404cu: goto label_18404c;
        case 0x184050u: goto label_184050;
        case 0x184054u: goto label_184054;
        case 0x184058u: goto label_184058;
        case 0x18405cu: goto label_18405c;
        case 0x184060u: goto label_184060;
        case 0x184064u: goto label_184064;
        case 0x184068u: goto label_184068;
        case 0x18406cu: goto label_18406c;
        case 0x184070u: goto label_184070;
        case 0x184074u: goto label_184074;
        case 0x184078u: goto label_184078;
        case 0x18407cu: goto label_18407c;
        case 0x184080u: goto label_184080;
        case 0x184084u: goto label_184084;
        case 0x184088u: goto label_184088;
        case 0x18408cu: goto label_18408c;
        case 0x184090u: goto label_184090;
        case 0x184094u: goto label_184094;
        case 0x184098u: goto label_184098;
        case 0x18409cu: goto label_18409c;
        case 0x1840a0u: goto label_1840a0;
        case 0x1840a4u: goto label_1840a4;
        case 0x1840a8u: goto label_1840a8;
        case 0x1840acu: goto label_1840ac;
        case 0x1840b0u: goto label_1840b0;
        case 0x1840b4u: goto label_1840b4;
        case 0x1840b8u: goto label_1840b8;
        case 0x1840bcu: goto label_1840bc;
        case 0x1840c0u: goto label_1840c0;
        case 0x1840c4u: goto label_1840c4;
        case 0x1840c8u: goto label_1840c8;
        case 0x1840ccu: goto label_1840cc;
        case 0x1840d0u: goto label_1840d0;
        case 0x1840d4u: goto label_1840d4;
        case 0x1840d8u: goto label_1840d8;
        case 0x1840dcu: goto label_1840dc;
        case 0x1840e0u: goto label_1840e0;
        case 0x1840e4u: goto label_1840e4;
        case 0x1840e8u: goto label_1840e8;
        case 0x1840ecu: goto label_1840ec;
        case 0x1840f0u: goto label_1840f0;
        case 0x1840f4u: goto label_1840f4;
        case 0x1840f8u: goto label_1840f8;
        case 0x1840fcu: goto label_1840fc;
        case 0x184100u: goto label_184100;
        case 0x184104u: goto label_184104;
        case 0x184108u: goto label_184108;
        case 0x18410cu: goto label_18410c;
        case 0x184110u: goto label_184110;
        case 0x184114u: goto label_184114;
        case 0x184118u: goto label_184118;
        case 0x18411cu: goto label_18411c;
        case 0x184120u: goto label_184120;
        case 0x184124u: goto label_184124;
        case 0x184128u: goto label_184128;
        case 0x18412cu: goto label_18412c;
        case 0x184130u: goto label_184130;
        case 0x184134u: goto label_184134;
        case 0x184138u: goto label_184138;
        case 0x18413cu: goto label_18413c;
        case 0x184140u: goto label_184140;
        case 0x184144u: goto label_184144;
        case 0x184148u: goto label_184148;
        case 0x18414cu: goto label_18414c;
        case 0x184150u: goto label_184150;
        case 0x184154u: goto label_184154;
        case 0x184158u: goto label_184158;
        case 0x18415cu: goto label_18415c;
        case 0x184160u: goto label_184160;
        case 0x184164u: goto label_184164;
        case 0x184168u: goto label_184168;
        case 0x18416cu: goto label_18416c;
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
        default: return;
    }

label_183f30:
    // 0x183f30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183f34:
    // 0x183f34: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x183f34u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_183f38:
    // 0x183f38: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x183f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_183f3c:
    // 0x183f3c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x183f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_183f40:
    // 0x183f40: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x183f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_183f44:
    // 0x183f44: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x183f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_183f48:
    // 0x183f48: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x183f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_183f4c:
    // 0x183f4c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x183f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_183f50:
    // 0x183f50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183f54:
    // 0x183f54: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x183f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_183f58:
    // 0x183f58: 0x1000002b  b           . + 4 + (0x2B << 2)
label_183f5c:
    if (ctx->pc == 0x183F5Cu) {
        ctx->pc = 0x183F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F58u;
        // 0x183f5c: 0xa2030236  sb          $v1, 0x236($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 566), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183F60u;
        goto label_183f60;
    }
    ctx->pc = 0x183F58u;
    {
        const bool branch_taken_0x183f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F58u;
        // 0x183f5c: 0xa2030236  sb          $v1, 0x236($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 566), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f58) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x183F60u;
label_183f60:
    // 0x183f60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183f64:
    // 0x183f64: 0xc05247c  jal         func_1491F0
label_183f68:
    if (ctx->pc == 0x183F68u) {
        ctx->pc = 0x183F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F64u;
        // 0x183f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183F6Cu;
        goto label_183f6c;
    }
    ctx->pc = 0x183F64u;
    SET_GPR_U32(ctx, 31, 0x183F6Cu);
    ctx->pc = 0x183F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183F64u;
    // 0x183f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1491F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1491F0u, 0x183F64u, 0x183F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F6Cu;
label_183f6c:
    // 0x183f6c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_183f70:
    if (ctx->pc == 0x183F70u) {
        ctx->pc = 0x183F74u;
        goto label_183f74;
    }
    ctx->pc = 0x183F6Cu;
    {
        const bool branch_taken_0x183f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183f6c) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x183F74u;
label_183f74:
    // 0x183f74: 0x92260036  lbu         $a2, 0x36($s1)
    ctx->pc = 0x183f74u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_183f78:
    // 0x183f78: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x183f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
label_183f7c:
    // 0x183f7c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x183f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_183f80:
    // 0x183f80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x183f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_183f84:
    // 0x183f84: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x183f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_183f88:
    // 0x183f88: 0xa2060237  sb          $a2, 0x237($s0)
    ctx->pc = 0x183f88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 567), (uint8_t)GPR_U32(ctx, 6));
label_183f8c:
    // 0x183f8c: 0xa2050235  sb          $a1, 0x235($s0)
    ctx->pc = 0x183f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 5));
label_183f90:
    // 0x183f90: 0xa204023c  sb          $a0, 0x23C($s0)
    ctx->pc = 0x183f90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 572), (uint8_t)GPR_U32(ctx, 4));
label_183f94:
    // 0x183f94: 0xae030260  sw          $v1, 0x260($s0)
    ctx->pc = 0x183f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 3));
label_183f98:
    // 0x183f98: 0x1000001b  b           . + 4 + (0x1B << 2)
label_183f9c:
    if (ctx->pc == 0x183F9Cu) {
        ctx->pc = 0x183F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F98u;
        // 0x183f9c: 0xae000264  sw          $zero, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183FA0u;
        goto label_183fa0;
    }
    ctx->pc = 0x183F98u;
    {
        const bool branch_taken_0x183f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F98u;
        // 0x183f9c: 0xae000264  sw          $zero, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f98) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x183FA0u;
label_183fa0:
    // 0x183fa0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x183fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183fa4:
    // 0x183fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_183fa8:
    // 0x183fa8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x183fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_183fac:
    // 0x183fac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x183facu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183fb0:
    // 0x183fb0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x183fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_183fb4:
    // 0x183fb4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x183fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183fb8:
    // 0x183fb8: 0xc062adc  jal         func_18AB70
label_183fbc:
    if (ctx->pc == 0x183FBCu) {
        ctx->pc = 0x183FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FB8u;
        // 0x183fbc: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x183FC0u;
        goto label_183fc0;
    }
    ctx->pc = 0x183FB8u;
    SET_GPR_U32(ctx, 31, 0x183FC0u);
    ctx->pc = 0x183FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183FB8u;
    // 0x183fbc: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AB70u;
    { ctx->pc = 0x18ab70; return; }
    ctx->pc = 0x183FC0u;
label_183fc0:
    // 0x183fc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_183fc4:
    if (ctx->pc == 0x183FC4u) {
        ctx->pc = 0x183FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FC0u;
        // 0x183fc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183FC8u;
        goto label_183fc8;
    }
    ctx->pc = 0x183FC0u;
    {
        const bool branch_taken_0x183fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FC0u;
        // 0x183fc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fc0) {
            ctx->pc = 0x183FD0u;
            goto label_183fd0;
        }
    }
    ctx->pc = 0x183FC8u;
label_183fc8:
    // 0x183fc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x183fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183fcc:
    // 0x183fcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x183fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_183fd0:
    // 0x183fd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183fd4:
    // 0x183fd4: 0xc052408  jal         func_149020
label_183fd8:
    if (ctx->pc == 0x183FD8u) {
        ctx->pc = 0x183FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FD4u;
        // 0x183fd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183FDCu;
        goto label_183fdc;
    }
    ctx->pc = 0x183FD4u;
    SET_GPR_U32(ctx, 31, 0x183FDCu);
    ctx->pc = 0x183FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183FD4u;
    // 0x183fd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149020u, 0x183FD4u, 0x183FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183FDCu;
label_183fdc:
    // 0x183fdc: 0x92230036  lbu         $v1, 0x36($s1)
    ctx->pc = 0x183fdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_183fe0:
    // 0x183fe0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_183fe4:
    if (ctx->pc == 0x183FE4u) {
        ctx->pc = 0x183FE8u;
        goto label_183fe8;
    }
    ctx->pc = 0x183FE0u;
    {
        const bool branch_taken_0x183fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x183fe0) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x183FE8u;
label_183fe8:
    // 0x183fe8: 0x10000007  b           . + 4 + (0x7 << 2)
label_183fec:
    if (ctx->pc == 0x183FECu) {
        ctx->pc = 0x183FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FE8u;
        // 0x183fec: 0xa2000237  sb          $zero, 0x237($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 567), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183FF0u;
        goto label_183ff0;
    }
    ctx->pc = 0x183FE8u;
    {
        const bool branch_taken_0x183fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FE8u;
        // 0x183fec: 0xa2000237  sb          $zero, 0x237($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 567), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fe8) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x183FF0u;
label_183ff0:
    // 0x183ff0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x183ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_183ff4:
    // 0x183ff4: 0xc062a80  jal         func_18AA00
label_183ff8:
    if (ctx->pc == 0x183FF8u) {
        ctx->pc = 0x183FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FF4u;
        // 0x183ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183FFCu;
        goto label_183ffc;
    }
    ctx->pc = 0x183FF4u;
    SET_GPR_U32(ctx, 31, 0x183FFCu);
    ctx->pc = 0x183FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183FF4u;
    // 0x183ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AA00u;
    { ctx->pc = 0x18aa00; return; }
    ctx->pc = 0x183FFCu;
label_183ffc:
    // 0x183ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184000:
    // 0x184000: 0xc0523a4  jal         func_148E90
label_184004:
    if (ctx->pc == 0x184004u) {
        ctx->pc = 0x184004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184000u;
        // 0x184004: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184008u;
        goto label_184008;
    }
    ctx->pc = 0x184000u;
    SET_GPR_U32(ctx, 31, 0x184008u);
    ctx->pc = 0x184004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184000u;
    // 0x184004: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E90u, 0x184000u, 0x184008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184008u;
label_184008:
    // 0x184008: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x184008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18400c:
    // 0x18400c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18400cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_184010:
    // 0x184010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_184014:
    // 0x184014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_184018:
    // 0x184018: 0x3e00008  jr          $ra
label_18401c:
    if (ctx->pc == 0x18401Cu) {
        ctx->pc = 0x18401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184018u;
        // 0x18401c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184020u;
        goto label_184020;
    }
    ctx->pc = 0x184018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184018u;
        // 0x18401c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184020u;
label_184020:
    // 0x184020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x184020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_184024:
    // 0x184024: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x184024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_184028:
    // 0x184028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x184028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18402c:
    // 0x18402c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18402cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_184030:
    // 0x184030: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x184030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184034:
    // 0x184034: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_184038:
    // 0x184038: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x184038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18403c:
    // 0x18403c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18403cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_184040:
    // 0x184040: 0xc05247c  jal         func_1491F0
label_184044:
    if (ctx->pc == 0x184044u) {
        ctx->pc = 0x184044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184040u;
        // 0x184044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184048u;
        goto label_184048;
    }
    ctx->pc = 0x184040u;
    SET_GPR_U32(ctx, 31, 0x184048u);
    ctx->pc = 0x184044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184040u;
    // 0x184044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1491F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1491F0u, 0x184040u, 0x184048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184048u;
label_184048:
    // 0x184048: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_18404c:
    if (ctx->pc == 0x18404Cu) {
        ctx->pc = 0x184050u;
        goto label_184050;
    }
    ctx->pc = 0x184048u;
    {
        const bool branch_taken_0x184048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184048) {
            ctx->pc = 0x184088u;
            goto label_184088;
        }
    }
    ctx->pc = 0x184050u;
label_184050:
    // 0x184050: 0x92230237  lbu         $v1, 0x237($s1)
    ctx->pc = 0x184050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 567)));
label_184054:
    // 0x184054: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x184054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_184058:
    // 0x184058: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_18405c:
    if (ctx->pc == 0x18405Cu) {
        ctx->pc = 0x18405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184058u;
        // 0x18405c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184060u;
        goto label_184060;
    }
    ctx->pc = 0x184058u;
    {
        const bool branch_taken_0x184058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184058u;
        // 0x18405c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184058) {
            ctx->pc = 0x184078u;
            goto label_184078;
        }
    }
    ctx->pc = 0x184060u;
label_184060:
    // 0x184060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x184060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184064:
    // 0x184064: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x184064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184068:
    // 0x184068: 0xc061108  jal         func_184420
label_18406c:
    if (ctx->pc == 0x18406Cu) {
        ctx->pc = 0x18406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184068u;
        // 0x18406c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184070u;
        goto label_184070;
    }
    ctx->pc = 0x184068u;
    SET_GPR_U32(ctx, 31, 0x184070u);
    ctx->pc = 0x18406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184068u;
    // 0x18406c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184420u;
    goto label_184420;
    ctx->pc = 0x184070u;
label_184070:
    // 0x184070: 0x1000005f  b           . + 4 + (0x5F << 2)
label_184074:
    if (ctx->pc == 0x184074u) {
        ctx->pc = 0x184074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184070u;
        // 0x184074: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184078u;
        goto label_184078;
    }
    ctx->pc = 0x184070u;
    {
        const bool branch_taken_0x184070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184070u;
        // 0x184074: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184070) {
            ctx->pc = 0x1841F0u;
            goto label_1841f0;
        }
    }
    ctx->pc = 0x184078u;
label_184078:
    // 0x184078: 0xc061084  jal         func_184210
label_18407c:
    if (ctx->pc == 0x18407Cu) {
        ctx->pc = 0x18407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184078u;
        // 0x18407c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184080u;
        goto label_184080;
    }
    ctx->pc = 0x184078u;
    SET_GPR_U32(ctx, 31, 0x184080u);
    ctx->pc = 0x18407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184078u;
    // 0x18407c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    goto label_184210;
    ctx->pc = 0x184080u;
label_184080:
    // 0x184080: 0x1000005a  b           . + 4 + (0x5A << 2)
label_184084:
    if (ctx->pc == 0x184084u) {
        ctx->pc = 0x184088u;
        goto label_184088;
    }
    ctx->pc = 0x184080u;
    {
        const bool branch_taken_0x184080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184080) {
            ctx->pc = 0x1841ECu;
            goto label_1841ec;
        }
    }
    ctx->pc = 0x184088u;
label_184088:
    // 0x184088: 0x92460036  lbu         $a2, 0x36($s2)
    ctx->pc = 0x184088u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_18408c:
    // 0x18408c: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x18408cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
label_184090:
    // 0x184090: 0x34432400  ori         $v1, $v0, 0x2400
    ctx->pc = 0x184090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_184094:
    // 0x184094: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x184094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_184098:
    // 0x184098: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x184098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18409c:
    // 0x18409c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18409cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1840a0:
    // 0x1840a0: 0xa2260237  sb          $a2, 0x237($s1)
    ctx->pc = 0x1840a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 567), (uint8_t)GPR_U32(ctx, 6));
label_1840a4:
    // 0x1840a4: 0xa2250235  sb          $a1, 0x235($s1)
    ctx->pc = 0x1840a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 565), (uint8_t)GPR_U32(ctx, 5));
label_1840a8:
    // 0x1840a8: 0xa224023c  sb          $a0, 0x23C($s1)
    ctx->pc = 0x1840a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 4));
label_1840ac:
    // 0x1840ac: 0xae230260  sw          $v1, 0x260($s1)
    ctx->pc = 0x1840acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 3));
label_1840b0:
    // 0x1840b0: 0xae200264  sw          $zero, 0x264($s1)
    ctx->pc = 0x1840b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
label_1840b4:
    // 0x1840b4: 0x92430036  lbu         $v1, 0x36($s2)
    ctx->pc = 0x1840b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_1840b8:
    // 0x1840b8: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_1840bc:
    if (ctx->pc == 0x1840BCu) {
        ctx->pc = 0x1840C0u;
        goto label_1840c0;
    }
    ctx->pc = 0x1840B8u;
    {
        const bool branch_taken_0x1840b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1840b8) {
            ctx->pc = 0x184118u;
            goto label_184118;
        }
    }
    ctx->pc = 0x1840C0u;
label_1840c0:
    // 0x1840c0: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x1840c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1840c4:
    // 0x1840c4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x1840c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_1840c8:
    // 0x1840c8: 0x92430038  lbu         $v1, 0x38($s2)
    ctx->pc = 0x1840c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
label_1840cc:
    // 0x1840cc: 0xc62c0044  lwc1        $f12, 0x44($s1)
    ctx->pc = 0x1840ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1840d0:
    // 0x1840d0: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x1840d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_1840d4:
    // 0x1840d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1840d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1840d8:
    // 0x1840d8: 0x38470001  xori        $a3, $v0, 0x1
    ctx->pc = 0x1840d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1840dc:
    // 0x1840dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1840dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1840e0:
    // 0x1840e0: 0x73200  sll         $a2, $a3, 8
    ctx->pc = 0x1840e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1840e4:
    // 0x1840e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1840e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1840e8:
    // 0x1840e8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1840e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1840ec:
    // 0x1840ec: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1840ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1840f0:
    // 0x1840f0: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1840f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1840f4:
    // 0x1840f4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1840f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1840f8:
    // 0x1840f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1840f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1840fc:
    // 0x1840fc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1840fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_184100:
    // 0x184100: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x184100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_184104:
    // 0x184104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x184104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_184108:
    // 0x184108: 0xc062900  jal         func_18A400
label_18410c:
    if (ctx->pc == 0x18410Cu) {
        ctx->pc = 0x18410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184108u;
        // 0x18410c: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184110u;
        goto label_184110;
    }
    ctx->pc = 0x184108u;
    SET_GPR_U32(ctx, 31, 0x184110u);
    ctx->pc = 0x18410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184108u;
    // 0x18410c: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A400u;
    { ctx->pc = 0x18a400; return; }
    ctx->pc = 0x184110u;
label_184110:
    // 0x184110: 0x10000036  b           . + 4 + (0x36 << 2)
label_184114:
    if (ctx->pc == 0x184114u) {
        ctx->pc = 0x184118u;
        goto label_184118;
    }
    ctx->pc = 0x184110u;
    {
        const bool branch_taken_0x184110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184110) {
            ctx->pc = 0x1841ECu;
            goto label_1841ec;
        }
    }
    ctx->pc = 0x184118u;
label_184118:
    // 0x184118: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x184118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_18411c:
    // 0x18411c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_184120:
    if (ctx->pc == 0x184120u) {
        ctx->pc = 0x184120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18411Cu;
        // 0x184120: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x184124u;
        goto label_184124;
    }
    ctx->pc = 0x18411Cu;
    {
        const bool branch_taken_0x18411c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x184120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18411Cu;
        // 0x184120: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18411c) {
            ctx->pc = 0x184130u;
            goto label_184130;
        }
    }
    ctx->pc = 0x184124u;
label_184124:
    // 0x184124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184128:
    // 0x184128: 0x10000007  b           . + 4 + (0x7 << 2)
label_18412c:
    if (ctx->pc == 0x18412Cu) {
        ctx->pc = 0x18412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184128u;
        // 0x18412c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x184130u;
        goto label_184130;
    }
    ctx->pc = 0x184128u;
    {
        const bool branch_taken_0x184128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184128u;
        // 0x18412c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x184128) {
            ctx->pc = 0x184148u;
            goto label_184148;
        }
    }
    ctx->pc = 0x184130u;
label_184130:
    // 0x184130: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x184130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_184134:
    // 0x184134: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x184134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_184138:
    // 0x184138: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18413c:
    // 0x18413c: 0x0  nop
    ctx->pc = 0x18413cu;
    // NOP
label_184140:
    // 0x184140: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x184140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_184144:
    // 0x184144: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x184144u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_184148:
    // 0x184148: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x184148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_18414c:
    // 0x18414c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18414cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_184150:
    // 0x184150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184154:
    // 0x184154: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x184154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_184158:
    // 0x184158: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x184158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18415c:
    // 0x18415c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18415cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_184160:
    // 0x184160: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x184160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184164:
    // 0x184164: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x184164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_184168:
    // 0x184168: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x184168u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_18416c:
    // 0x18416c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18416cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
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
    { ctx->pc = 0x1848e0; return; }
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
    { ctx->pc = 0x1848e0; return; }
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
            { ctx->pc = 0x1848ac; return; }
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
            { ctx->pc = 0x1848ac; return; }
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
            { ctx->pc = 0x18472c; return; }
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
            { ctx->pc = 0x184720; return; }
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
    ctx->pc = 0x184700u;
    return;
}

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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part477(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x283f28u: goto label_283f28;
        case 0x283f2cu: goto label_283f2c;
        case 0x283f30u: goto label_283f30;
        case 0x283f34u: goto label_283f34;
        case 0x283f38u: goto label_283f38;
        case 0x283f3cu: goto label_283f3c;
        case 0x283f40u: goto label_283f40;
        case 0x283f44u: goto label_283f44;
        case 0x283f48u: goto label_283f48;
        case 0x283f4cu: goto label_283f4c;
        case 0x283f50u: goto label_283f50;
        case 0x283f54u: goto label_283f54;
        case 0x283f58u: goto label_283f58;
        case 0x283f5cu: goto label_283f5c;
        case 0x283f60u: goto label_283f60;
        case 0x283f64u: goto label_283f64;
        case 0x283f68u: goto label_283f68;
        case 0x283f6cu: goto label_283f6c;
        case 0x283f70u: goto label_283f70;
        case 0x283f74u: goto label_283f74;
        case 0x283f78u: goto label_283f78;
        case 0x283f7cu: goto label_283f7c;
        case 0x283f80u: goto label_283f80;
        case 0x283f84u: goto label_283f84;
        case 0x283f88u: goto label_283f88;
        case 0x283f8cu: goto label_283f8c;
        case 0x283f90u: goto label_283f90;
        case 0x283f94u: goto label_283f94;
        case 0x283f98u: goto label_283f98;
        case 0x283f9cu: goto label_283f9c;
        case 0x283fa0u: goto label_283fa0;
        case 0x283fa4u: goto label_283fa4;
        case 0x283fa8u: goto label_283fa8;
        case 0x283facu: goto label_283fac;
        case 0x283fb0u: goto label_283fb0;
        case 0x283fb4u: goto label_283fb4;
        case 0x283fb8u: goto label_283fb8;
        case 0x283fbcu: goto label_283fbc;
        case 0x283fc0u: goto label_283fc0;
        case 0x283fc4u: goto label_283fc4;
        case 0x283fc8u: goto label_283fc8;
        case 0x283fccu: goto label_283fcc;
        case 0x283fd0u: goto label_283fd0;
        case 0x283fd4u: goto label_283fd4;
        case 0x283fd8u: goto label_283fd8;
        case 0x283fdcu: goto label_283fdc;
        case 0x283fe0u: goto label_283fe0;
        case 0x283fe4u: goto label_283fe4;
        case 0x283fe8u: goto label_283fe8;
        case 0x283fecu: goto label_283fec;
        case 0x283ff0u: goto label_283ff0;
        case 0x283ff4u: goto label_283ff4;
        case 0x283ff8u: goto label_283ff8;
        case 0x283ffcu: goto label_283ffc;
        case 0x284000u: goto label_284000;
        case 0x284004u: goto label_284004;
        case 0x284008u: goto label_284008;
        case 0x28400cu: goto label_28400c;
        case 0x284010u: goto label_284010;
        case 0x284014u: goto label_284014;
        case 0x284018u: goto label_284018;
        case 0x28401cu: goto label_28401c;
        case 0x284020u: goto label_284020;
        case 0x284024u: goto label_284024;
        case 0x284028u: goto label_284028;
        case 0x28402cu: goto label_28402c;
        case 0x284030u: goto label_284030;
        case 0x284034u: goto label_284034;
        case 0x284038u: goto label_284038;
        case 0x28403cu: goto label_28403c;
        case 0x284040u: goto label_284040;
        case 0x284044u: goto label_284044;
        case 0x284048u: goto label_284048;
        case 0x28404cu: goto label_28404c;
        case 0x284050u: goto label_284050;
        case 0x284054u: goto label_284054;
        case 0x284058u: goto label_284058;
        case 0x28405cu: goto label_28405c;
        case 0x284060u: goto label_284060;
        case 0x284064u: goto label_284064;
        case 0x284068u: goto label_284068;
        case 0x28406cu: goto label_28406c;
        case 0x284070u: goto label_284070;
        case 0x284074u: goto label_284074;
        case 0x284078u: goto label_284078;
        case 0x28407cu: goto label_28407c;
        case 0x284080u: goto label_284080;
        case 0x284084u: goto label_284084;
        case 0x284088u: goto label_284088;
        case 0x28408cu: goto label_28408c;
        case 0x284090u: goto label_284090;
        case 0x284094u: goto label_284094;
        case 0x284098u: goto label_284098;
        case 0x28409cu: goto label_28409c;
        case 0x2840a0u: goto label_2840a0;
        case 0x2840a4u: goto label_2840a4;
        case 0x2840a8u: goto label_2840a8;
        case 0x2840acu: goto label_2840ac;
        case 0x2840b0u: goto label_2840b0;
        case 0x2840b4u: goto label_2840b4;
        case 0x2840b8u: goto label_2840b8;
        case 0x2840bcu: goto label_2840bc;
        case 0x2840c0u: goto label_2840c0;
        case 0x2840c4u: goto label_2840c4;
        case 0x2840c8u: goto label_2840c8;
        case 0x2840ccu: goto label_2840cc;
        case 0x2840d0u: goto label_2840d0;
        case 0x2840d4u: goto label_2840d4;
        case 0x2840d8u: goto label_2840d8;
        case 0x2840dcu: goto label_2840dc;
        case 0x2840e0u: goto label_2840e0;
        case 0x2840e4u: goto label_2840e4;
        case 0x2840e8u: goto label_2840e8;
        case 0x2840ecu: goto label_2840ec;
        case 0x2840f0u: goto label_2840f0;
        case 0x2840f4u: goto label_2840f4;
        case 0x2840f8u: goto label_2840f8;
        case 0x2840fcu: goto label_2840fc;
        case 0x284100u: goto label_284100;
        case 0x284104u: goto label_284104;
        case 0x284108u: goto label_284108;
        case 0x28410cu: goto label_28410c;
        case 0x284110u: goto label_284110;
        case 0x284114u: goto label_284114;
        case 0x284118u: goto label_284118;
        case 0x28411cu: goto label_28411c;
        case 0x284120u: goto label_284120;
        case 0x284124u: goto label_284124;
        case 0x284128u: goto label_284128;
        case 0x28412cu: goto label_28412c;
        case 0x284130u: goto label_284130;
        case 0x284134u: goto label_284134;
        case 0x284138u: goto label_284138;
        case 0x28413cu: goto label_28413c;
        case 0x284140u: goto label_284140;
        case 0x284144u: goto label_284144;
        case 0x284148u: goto label_284148;
        case 0x28414cu: goto label_28414c;
        case 0x284150u: goto label_284150;
        case 0x284154u: goto label_284154;
        case 0x284158u: goto label_284158;
        case 0x28415cu: goto label_28415c;
        case 0x284160u: goto label_284160;
        case 0x284164u: goto label_284164;
        case 0x284168u: goto label_284168;
        case 0x28416cu: goto label_28416c;
        case 0x284170u: goto label_284170;
        case 0x284174u: goto label_284174;
        case 0x284178u: goto label_284178;
        case 0x28417cu: goto label_28417c;
        case 0x284180u: goto label_284180;
        case 0x284184u: goto label_284184;
        case 0x284188u: goto label_284188;
        case 0x28418cu: goto label_28418c;
        case 0x284190u: goto label_284190;
        case 0x284194u: goto label_284194;
        case 0x284198u: goto label_284198;
        case 0x28419cu: goto label_28419c;
        case 0x2841a0u: goto label_2841a0;
        case 0x2841a4u: goto label_2841a4;
        case 0x2841a8u: goto label_2841a8;
        case 0x2841acu: goto label_2841ac;
        case 0x2841b0u: goto label_2841b0;
        case 0x2841b4u: goto label_2841b4;
        case 0x2841b8u: goto label_2841b8;
        case 0x2841bcu: goto label_2841bc;
        case 0x2841c0u: goto label_2841c0;
        case 0x2841c4u: goto label_2841c4;
        case 0x2841c8u: goto label_2841c8;
        case 0x2841ccu: goto label_2841cc;
        case 0x2841d0u: goto label_2841d0;
        case 0x2841d4u: goto label_2841d4;
        case 0x2841d8u: goto label_2841d8;
        case 0x2841dcu: goto label_2841dc;
        case 0x2841e0u: goto label_2841e0;
        case 0x2841e4u: goto label_2841e4;
        case 0x2841e8u: goto label_2841e8;
        case 0x2841ecu: goto label_2841ec;
        case 0x2841f0u: goto label_2841f0;
        case 0x2841f4u: goto label_2841f4;
        case 0x2841f8u: goto label_2841f8;
        case 0x2841fcu: goto label_2841fc;
        case 0x284200u: goto label_284200;
        case 0x284204u: goto label_284204;
        case 0x284208u: goto label_284208;
        case 0x28420cu: goto label_28420c;
        case 0x284210u: goto label_284210;
        case 0x284214u: goto label_284214;
        case 0x284218u: goto label_284218;
        case 0x28421cu: goto label_28421c;
        case 0x284220u: goto label_284220;
        case 0x284224u: goto label_284224;
        case 0x284228u: goto label_284228;
        case 0x28422cu: goto label_28422c;
        case 0x284230u: goto label_284230;
        case 0x284234u: goto label_284234;
        case 0x284238u: goto label_284238;
        case 0x28423cu: goto label_28423c;
        case 0x284240u: goto label_284240;
        case 0x284244u: goto label_284244;
        case 0x284248u: goto label_284248;
        case 0x28424cu: goto label_28424c;
        case 0x284250u: goto label_284250;
        case 0x284254u: goto label_284254;
        case 0x284258u: goto label_284258;
        case 0x28425cu: goto label_28425c;
        case 0x284260u: goto label_284260;
        case 0x284264u: goto label_284264;
        case 0x284268u: goto label_284268;
        case 0x28426cu: goto label_28426c;
        case 0x284270u: goto label_284270;
        case 0x284274u: goto label_284274;
        case 0x284278u: goto label_284278;
        case 0x28427cu: goto label_28427c;
        case 0x284280u: goto label_284280;
        case 0x284284u: goto label_284284;
        case 0x284288u: goto label_284288;
        case 0x28428cu: goto label_28428c;
        case 0x284290u: goto label_284290;
        case 0x284294u: goto label_284294;
        case 0x284298u: goto label_284298;
        case 0x28429cu: goto label_28429c;
        case 0x2842a0u: goto label_2842a0;
        case 0x2842a4u: goto label_2842a4;
        case 0x2842a8u: goto label_2842a8;
        case 0x2842acu: goto label_2842ac;
        case 0x2842b0u: goto label_2842b0;
        case 0x2842b4u: goto label_2842b4;
        case 0x2842b8u: goto label_2842b8;
        case 0x2842bcu: goto label_2842bc;
        case 0x2842c0u: goto label_2842c0;
        case 0x2842c4u: goto label_2842c4;
        case 0x2842c8u: goto label_2842c8;
        case 0x2842ccu: goto label_2842cc;
        case 0x2842d0u: goto label_2842d0;
        case 0x2842d4u: goto label_2842d4;
        case 0x2842d8u: goto label_2842d8;
        case 0x2842dcu: goto label_2842dc;
        case 0x2842e0u: goto label_2842e0;
        case 0x2842e4u: goto label_2842e4;
        case 0x2842e8u: goto label_2842e8;
        case 0x2842ecu: goto label_2842ec;
        case 0x2842f0u: goto label_2842f0;
        case 0x2842f4u: goto label_2842f4;
        case 0x2842f8u: goto label_2842f8;
        case 0x2842fcu: goto label_2842fc;
        case 0x284300u: goto label_284300;
        case 0x284304u: goto label_284304;
        case 0x284308u: goto label_284308;
        case 0x28430cu: goto label_28430c;
        case 0x284310u: goto label_284310;
        case 0x284314u: goto label_284314;
        case 0x284318u: goto label_284318;
        case 0x28431cu: goto label_28431c;
        case 0x284320u: goto label_284320;
        case 0x284324u: goto label_284324;
        case 0x284328u: goto label_284328;
        case 0x28432cu: goto label_28432c;
        case 0x284330u: goto label_284330;
        case 0x284334u: goto label_284334;
        case 0x284338u: goto label_284338;
        case 0x28433cu: goto label_28433c;
        case 0x284340u: goto label_284340;
        case 0x284344u: goto label_284344;
        case 0x284348u: goto label_284348;
        case 0x28434cu: goto label_28434c;
        case 0x284350u: goto label_284350;
        case 0x284354u: goto label_284354;
        case 0x284358u: goto label_284358;
        case 0x28435cu: goto label_28435c;
        case 0x284360u: goto label_284360;
        case 0x284364u: goto label_284364;
        case 0x284368u: goto label_284368;
        case 0x28436cu: goto label_28436c;
        case 0x284370u: goto label_284370;
        case 0x284374u: goto label_284374;
        case 0x284378u: goto label_284378;
        case 0x28437cu: goto label_28437c;
        case 0x284380u: goto label_284380;
        case 0x284384u: goto label_284384;
        case 0x284388u: goto label_284388;
        case 0x28438cu: goto label_28438c;
        case 0x284390u: goto label_284390;
        case 0x284394u: goto label_284394;
        case 0x284398u: goto label_284398;
        case 0x28439cu: goto label_28439c;
        case 0x2843a0u: goto label_2843a0;
        case 0x2843a4u: goto label_2843a4;
        case 0x2843a8u: goto label_2843a8;
        case 0x2843acu: goto label_2843ac;
        case 0x2843b0u: goto label_2843b0;
        case 0x2843b4u: goto label_2843b4;
        case 0x2843b8u: goto label_2843b8;
        case 0x2843bcu: goto label_2843bc;
        case 0x2843c0u: goto label_2843c0;
        case 0x2843c4u: goto label_2843c4;
        case 0x2843c8u: goto label_2843c8;
        case 0x2843ccu: goto label_2843cc;
        case 0x2843d0u: goto label_2843d0;
        case 0x2843d4u: goto label_2843d4;
        case 0x2843d8u: goto label_2843d8;
        case 0x2843dcu: goto label_2843dc;
        case 0x2843e0u: goto label_2843e0;
        case 0x2843e4u: goto label_2843e4;
        case 0x2843e8u: goto label_2843e8;
        case 0x2843ecu: goto label_2843ec;
        case 0x2843f0u: goto label_2843f0;
        case 0x2843f4u: goto label_2843f4;
        case 0x2843f8u: goto label_2843f8;
        case 0x2843fcu: goto label_2843fc;
        case 0x284400u: goto label_284400;
        case 0x284404u: goto label_284404;
        case 0x284408u: goto label_284408;
        case 0x28440cu: goto label_28440c;
        case 0x284410u: goto label_284410;
        case 0x284414u: goto label_284414;
        case 0x284418u: goto label_284418;
        case 0x28441cu: goto label_28441c;
        case 0x284420u: goto label_284420;
        case 0x284424u: goto label_284424;
        case 0x284428u: goto label_284428;
        case 0x28442cu: goto label_28442c;
        case 0x284430u: goto label_284430;
        case 0x284434u: goto label_284434;
        case 0x284438u: goto label_284438;
        case 0x28443cu: goto label_28443c;
        case 0x284440u: goto label_284440;
        case 0x284444u: goto label_284444;
        case 0x284448u: goto label_284448;
        case 0x28444cu: goto label_28444c;
        case 0x284450u: goto label_284450;
        case 0x284454u: goto label_284454;
        case 0x284458u: goto label_284458;
        case 0x28445cu: goto label_28445c;
        case 0x284460u: goto label_284460;
        case 0x284464u: goto label_284464;
        case 0x284468u: goto label_284468;
        case 0x28446cu: goto label_28446c;
        case 0x284470u: goto label_284470;
        case 0x284474u: goto label_284474;
        case 0x284478u: goto label_284478;
        case 0x28447cu: goto label_28447c;
        case 0x284480u: goto label_284480;
        case 0x284484u: goto label_284484;
        case 0x284488u: goto label_284488;
        case 0x28448cu: goto label_28448c;
        case 0x284490u: goto label_284490;
        case 0x284494u: goto label_284494;
        case 0x284498u: goto label_284498;
        case 0x28449cu: goto label_28449c;
        case 0x2844a0u: goto label_2844a0;
        case 0x2844a4u: goto label_2844a4;
        case 0x2844a8u: goto label_2844a8;
        case 0x2844acu: goto label_2844ac;
        case 0x2844b0u: goto label_2844b0;
        case 0x2844b4u: goto label_2844b4;
        case 0x2844b8u: goto label_2844b8;
        case 0x2844bcu: goto label_2844bc;
        case 0x2844c0u: goto label_2844c0;
        case 0x2844c4u: goto label_2844c4;
        case 0x2844c8u: goto label_2844c8;
        case 0x2844ccu: goto label_2844cc;
        case 0x2844d0u: goto label_2844d0;
        case 0x2844d4u: goto label_2844d4;
        case 0x2844d8u: goto label_2844d8;
        case 0x2844dcu: goto label_2844dc;
        case 0x2844e0u: goto label_2844e0;
        case 0x2844e4u: goto label_2844e4;
        case 0x2844e8u: goto label_2844e8;
        case 0x2844ecu: goto label_2844ec;
        case 0x2844f0u: goto label_2844f0;
        case 0x2844f4u: goto label_2844f4;
        case 0x2844f8u: goto label_2844f8;
        case 0x2844fcu: goto label_2844fc;
        case 0x284500u: goto label_284500;
        case 0x284504u: goto label_284504;
        case 0x284508u: goto label_284508;
        case 0x28450cu: goto label_28450c;
        case 0x284510u: goto label_284510;
        case 0x284514u: goto label_284514;
        case 0x284518u: goto label_284518;
        case 0x28451cu: goto label_28451c;
        case 0x284520u: goto label_284520;
        case 0x284524u: goto label_284524;
        case 0x284528u: goto label_284528;
        case 0x28452cu: goto label_28452c;
        case 0x284530u: goto label_284530;
        case 0x284534u: goto label_284534;
        case 0x284538u: goto label_284538;
        case 0x28453cu: goto label_28453c;
        case 0x284540u: goto label_284540;
        case 0x284544u: goto label_284544;
        case 0x284548u: goto label_284548;
        case 0x28454cu: goto label_28454c;
        case 0x284550u: goto label_284550;
        case 0x284554u: goto label_284554;
        case 0x284558u: goto label_284558;
        case 0x28455cu: goto label_28455c;
        case 0x284560u: goto label_284560;
        case 0x284564u: goto label_284564;
        case 0x284568u: goto label_284568;
        case 0x28456cu: goto label_28456c;
        case 0x284570u: goto label_284570;
        case 0x284574u: goto label_284574;
        case 0x284578u: goto label_284578;
        case 0x28457cu: goto label_28457c;
        case 0x284580u: goto label_284580;
        case 0x284584u: goto label_284584;
        case 0x284588u: goto label_284588;
        case 0x28458cu: goto label_28458c;
        case 0x284590u: goto label_284590;
        case 0x284594u: goto label_284594;
        case 0x284598u: goto label_284598;
        case 0x28459cu: goto label_28459c;
        case 0x2845a0u: goto label_2845a0;
        case 0x2845a4u: goto label_2845a4;
        case 0x2845a8u: goto label_2845a8;
        case 0x2845acu: goto label_2845ac;
        case 0x2845b0u: goto label_2845b0;
        case 0x2845b4u: goto label_2845b4;
        case 0x2845b8u: goto label_2845b8;
        case 0x2845bcu: goto label_2845bc;
        case 0x2845c0u: goto label_2845c0;
        case 0x2845c4u: goto label_2845c4;
        case 0x2845c8u: goto label_2845c8;
        case 0x2845ccu: goto label_2845cc;
        case 0x2845d0u: goto label_2845d0;
        case 0x2845d4u: goto label_2845d4;
        case 0x2845d8u: goto label_2845d8;
        case 0x2845dcu: goto label_2845dc;
        case 0x2845e0u: goto label_2845e0;
        case 0x2845e4u: goto label_2845e4;
        case 0x2845e8u: goto label_2845e8;
        case 0x2845ecu: goto label_2845ec;
        case 0x2845f0u: goto label_2845f0;
        case 0x2845f4u: goto label_2845f4;
        case 0x2845f8u: goto label_2845f8;
        case 0x2845fcu: goto label_2845fc;
        case 0x284600u: goto label_284600;
        case 0x284604u: goto label_284604;
        case 0x284608u: goto label_284608;
        case 0x28460cu: goto label_28460c;
        case 0x284610u: goto label_284610;
        case 0x284614u: goto label_284614;
        case 0x284618u: goto label_284618;
        case 0x28461cu: goto label_28461c;
        case 0x284620u: goto label_284620;
        case 0x284624u: goto label_284624;
        case 0x284628u: goto label_284628;
        case 0x28462cu: goto label_28462c;
        case 0x284630u: goto label_284630;
        case 0x284634u: goto label_284634;
        case 0x284638u: goto label_284638;
        case 0x28463cu: goto label_28463c;
        case 0x284640u: goto label_284640;
        case 0x284644u: goto label_284644;
        case 0x284648u: goto label_284648;
        case 0x28464cu: goto label_28464c;
        case 0x284650u: goto label_284650;
        case 0x284654u: goto label_284654;
        case 0x284658u: goto label_284658;
        case 0x28465cu: goto label_28465c;
        case 0x284660u: goto label_284660;
        case 0x284664u: goto label_284664;
        case 0x284668u: goto label_284668;
        case 0x28466cu: goto label_28466c;
        case 0x284670u: goto label_284670;
        case 0x284674u: goto label_284674;
        case 0x284678u: goto label_284678;
        case 0x28467cu: goto label_28467c;
        case 0x284680u: goto label_284680;
        case 0x284684u: goto label_284684;
        case 0x284688u: goto label_284688;
        case 0x28468cu: goto label_28468c;
        case 0x284690u: goto label_284690;
        case 0x284694u: goto label_284694;
        case 0x284698u: goto label_284698;
        case 0x28469cu: goto label_28469c;
        case 0x2846a0u: goto label_2846a0;
        case 0x2846a4u: goto label_2846a4;
        case 0x2846a8u: goto label_2846a8;
        case 0x2846acu: goto label_2846ac;
        case 0x2846b0u: goto label_2846b0;
        case 0x2846b4u: goto label_2846b4;
        case 0x2846b8u: goto label_2846b8;
        case 0x2846bcu: goto label_2846bc;
        case 0x2846c0u: goto label_2846c0;
        case 0x2846c4u: goto label_2846c4;
        case 0x2846c8u: goto label_2846c8;
        case 0x2846ccu: goto label_2846cc;
        case 0x2846d0u: goto label_2846d0;
        case 0x2846d4u: goto label_2846d4;
        case 0x2846d8u: goto label_2846d8;
        case 0x2846dcu: goto label_2846dc;
        case 0x2846e0u: goto label_2846e0;
        case 0x2846e4u: goto label_2846e4;
        case 0x2846e8u: goto label_2846e8;
        case 0x2846ecu: goto label_2846ec;
        case 0x2846f0u: goto label_2846f0;
        case 0x2846f4u: goto label_2846f4;
        default: return;
    }

label_283f28:
    // 0x283f28: 0x2f020034  sltiu       $v0, $t8, 0x34
    ctx->pc = 0x283f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
label_283f2c:
    // 0x283f2c: 0x0  nop
    ctx->pc = 0x283f2cu;
    // NOP
label_283f30:
    // 0x283f30: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x283f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283f34:
    // 0x283f34: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283f38:
    // 0x283f38: 0xc1980000  ll          $t8, 0x0($t4)
    ctx->pc = 0x283f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283f3c:
    // 0x283f3c: 0x43360000  .word       0x43360000                   # INVALID     $t9, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283f3cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x283F3C raw=0x43360000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283f40:
    // 0x283f40: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283f40u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283f44:
    // 0x283f44: 0x41d00000  .word       0x41D00000                   # INVALID     $t6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283f44u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x283F44 raw=0x41D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283f48:
    // 0x283f48: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x283f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283f4c:
    // 0x283f4c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283f50:
    // 0x283f50: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x283f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283f54:
    // 0x283f54: 0x43360000  .word       0x43360000                   # INVALID     $t9, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283f54u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x283F54 raw=0x43360000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283f58:
    // 0x283f58: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x283f58u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_283f5c:
    // 0x283f5c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283f5cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x283F5C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283f60:
    // 0x283f60: 0x0  nop
    ctx->pc = 0x283f60u;
    // NOP
label_283f64:
    // 0x283f64: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x283f64u;
    
label_283f68:
    // 0x283f68: 0x30010035  andi        $at, $zero, 0x35
    ctx->pc = 0x283f68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)53);
label_283f6c:
    // 0x283f6c: 0x0  nop
    ctx->pc = 0x283f6cu;
    // NOP
label_283f70:
    // 0x283f70: 0xc1c00000  ll          $zero, 0x0($t6)
    ctx->pc = 0x283f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283f74:
    // 0x283f74: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x283f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283f78:
    // 0x283f78: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x283f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283f7c:
    // 0x283f7c: 0x43180000  .word       0x43180000                   # INVALID     $t8, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283f7cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x283F7C raw=0x43180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283f80:
    // 0x283f80: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283f80u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x283F80 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283f84:
    // 0x283f84: 0x425c0000  .word       0x425C0000                   # INVALID     $s2, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283f84u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x283F84 raw=0x425C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283f88:
    // 0x283f88: 0xc1c00000  ll          $zero, 0x0($t6)
    ctx->pc = 0x283f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283f8c:
    // 0x283f8c: 0xc21c0000  ll          $gp, 0x0($s0)
    ctx->pc = 0x283f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283f90:
    // 0x283f90: 0xc2780000  ll          $t8, 0x0($s3)
    ctx->pc = 0x283f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283f94:
    // 0x283f94: 0x43200000  .word       0x43200000                   # INVALID     $t9, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283f94u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x283F94 raw=0x43200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283f98:
    // 0x283f98: 0x42960000  .word       0x42960000                   # INVALID     $s4, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283f98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x283F98 raw=0x42960000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283f9c:
    // 0x283f9c: 0x42de0000  .word       0x42DE0000                   # INVALID     $s6, $fp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283f9cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x283F9C raw=0x42DE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283fa0:
    // 0x283fa0: 0x0  nop
    ctx->pc = 0x283fa0u;
    // NOP
label_283fa4:
    // 0x283fa4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x283fa4u;
    
label_283fa8:
    // 0x283fa8: 0x31000036  andi        $zero, $t0, 0x36
    ctx->pc = 0x283fa8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)54);
label_283fac:
    // 0x283fac: 0x0  nop
    ctx->pc = 0x283facu;
    // NOP
label_283fb0:
    // 0x283fb0: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x283fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283fb4:
    // 0x283fb4: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x283fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283fb8:
    // 0x283fb8: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x283fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283fbc:
    // 0x283fbc: 0x43280000  .word       0x43280000                   # INVALID     $t9, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283fbcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x283FBC raw=0x43280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283fc0:
    // 0x283fc0: 0x42680000  .word       0x42680000                   # INVALID     $s3, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283fc0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x283FC0 raw=0x42680000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283fc4:
    // 0x283fc4: 0x42740000  .word       0x42740000                   # INVALID     $s3, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283fc4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x283FC4 raw=0x42740000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283fc8:
    // 0x283fc8: 0xc1d00000  ll          $s0, 0x0($t6)
    ctx->pc = 0x283fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283fcc:
    // 0x283fcc: 0xc2100000  ll          $s0, 0x0($s0)
    ctx->pc = 0x283fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283fd0:
    // 0x283fd0: 0xc2400000  ll          $zero, 0x0($s2)
    ctx->pc = 0x283fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283fd4:
    // 0x283fd4: 0x434c0000  .word       0x434C0000                   # INVALID     $k0, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283fd4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x283FD4 raw=0x434C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283fd8:
    // 0x283fd8: 0x429c0000  .word       0x429C0000                   # INVALID     $s4, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283fd8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x283FD8 raw=0x429C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283fdc:
    // 0x283fdc: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283fdcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x283FDC raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_283fe0:
    // 0x283fe0: 0x0  nop
    ctx->pc = 0x283fe0u;
    // NOP
label_283fe4:
    // 0x283fe4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x283fe4u;
    
label_283fe8:
    // 0x283fe8: 0x32010037  andi        $at, $s0, 0x37
    ctx->pc = 0x283fe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)55);
label_283fec:
    // 0x283fec: 0x0  nop
    ctx->pc = 0x283fecu;
    // NOP
label_283ff0:
    // 0x283ff0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x283ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283ff4:
    // 0x283ff4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x283ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283ff8:
    // 0x283ff8: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x283ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_283ffc:
    // 0x283ffc: 0x43240000  .word       0x43240000                   # INVALID     $t9, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x283ffcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x283FFC raw=0x43240000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284000:
    // 0x284000: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284000u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284004:
    // 0x284004: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284004u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284004 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284008:
    // 0x284008: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x284008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28400c:
    // 0x28400c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28400cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284010:
    // 0x284010: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x284010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284014:
    // 0x284014: 0x43240000  .word       0x43240000                   # INVALID     $t9, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284014u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284014 raw=0x43240000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284018:
    // 0x284018: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284018u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28401c:
    // 0x28401c: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28401cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x28401C raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284020:
    // 0x284020: 0x0  nop
    ctx->pc = 0x284020u;
    // NOP
label_284024:
    // 0x284024: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284024u;
    
label_284028:
    // 0x284028: 0x2e000038  sltiu       $zero, $s0, 0x38
    ctx->pc = 0x284028u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)56) ? 1 : 0);
label_28402c:
    // 0x28402c: 0x0  nop
    ctx->pc = 0x28402cu;
    // NOP
label_284030:
    // 0x284030: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x284030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284034:
    // 0x284034: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284038:
    // 0x284038: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x284038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28403c:
    // 0x28403c: 0x42fa0000  .word       0x42FA0000                   # INVALID     $s7, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28403cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x28403C raw=0x42FA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284040:
    // 0x284040: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284040u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284044:
    // 0x284044: 0x41c80000  .word       0x41C80000                   # INVALID     $t6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284044u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284044 raw=0x41C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284048:
    // 0x284048: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x284048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28404c:
    // 0x28404c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28404cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284050:
    // 0x284050: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x284050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284054:
    // 0x284054: 0x42fa0000  .word       0x42FA0000                   # INVALID     $s7, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284054u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x284054 raw=0x42FA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284058:
    // 0x284058: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284058u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28405c:
    // 0x28405c: 0x41c80000  .word       0x41C80000                   # INVALID     $t6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28405cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x28405C raw=0x41C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284060:
    // 0x284060: 0x0  nop
    ctx->pc = 0x284060u;
    // NOP
label_284064:
    // 0x284064: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284064u;
    
label_284068:
    // 0x284068: 0x2a030039  slti        $v1, $s0, 0x39
    ctx->pc = 0x284068u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)57) ? 1 : 0);
label_28406c:
    // 0x28406c: 0x0  nop
    ctx->pc = 0x28406cu;
    // NOP
label_284070:
    // 0x284070: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x284070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284074:
    // 0x284074: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x284074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284078:
    // 0x284078: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x284078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28407c:
    // 0x28407c: 0x43170000  .word       0x43170000                   # INVALID     $t8, $s7, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28407cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x28407C raw=0x43170000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284080:
    // 0x284080: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284080u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x284080 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284084:
    // 0x284084: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284084u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284084 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284088:
    // 0x284088: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x284088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28408c:
    // 0x28408c: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x28408cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284090:
    // 0x284090: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x284090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284094:
    // 0x284094: 0x43070000  .word       0x43070000                   # INVALID     $t8, $a3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284094u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284094 raw=0x43070000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284098:
    // 0x284098: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284098u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x284098 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28409c:
    // 0x28409c: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28409cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x28409C raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2840a0:
    // 0x2840a0: 0x0  nop
    ctx->pc = 0x2840a0u;
    // NOP
label_2840a4:
    // 0x2840a4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2840a4u;
    
label_2840a8:
    // 0x2840a8: 0x2d03003a  sltiu       $v1, $t0, 0x3A
    ctx->pc = 0x2840a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)58) ? 1 : 0);
label_2840ac:
    // 0x2840ac: 0x0  nop
    ctx->pc = 0x2840acu;
    // NOP
label_2840b0:
    // 0x2840b0: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x2840b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2840b4:
    // 0x2840b4: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x2840b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2840b8:
    // 0x2840b8: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x2840b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2840bc:
    // 0x2840bc: 0x42c20000  .word       0x42C20000                   # INVALID     $s6, $v0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2840bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2840BC raw=0x42C20000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2840c0:
    // 0x2840c0: 0x41d00000  .word       0x41D00000                   # INVALID     $t6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2840c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x2840C0 raw=0x41D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2840c4:
    // 0x2840c4: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2840c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x2840C4 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2840c8:
    // 0x2840c8: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x2840c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2840cc:
    // 0x2840cc: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x2840ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2840d0:
    // 0x2840d0: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x2840d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2840d4:
    // 0x2840d4: 0x42c20000  .word       0x42C20000                   # INVALID     $s6, $v0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2840d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2840D4 raw=0x42C20000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2840d8:
    // 0x2840d8: 0x41d00000  .word       0x41D00000                   # INVALID     $t6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2840d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x2840D8 raw=0x41D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2840dc:
    // 0x2840dc: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2840dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x2840DC raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2840e0:
    // 0x2840e0: 0x0  nop
    ctx->pc = 0x2840e0u;
    // NOP
label_2840e4:
    // 0x2840e4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2840e4u;
    
label_2840e8:
    // 0x2840e8: 0x2803003b  slti        $v1, $zero, 0x3B
    ctx->pc = 0x2840e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)59) ? 1 : 0);
label_2840ec:
    // 0x2840ec: 0x0  nop
    ctx->pc = 0x2840ecu;
    // NOP
label_2840f0:
    // 0x2840f0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x2840f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2840f4:
    // 0x2840f4: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2840f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2840f8:
    // 0x2840f8: 0xc1c00000  ll          $zero, 0x0($t6)
    ctx->pc = 0x2840f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2840fc:
    // 0x2840fc: 0x42a40000  .word       0x42A40000                   # INVALID     $s5, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2840fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x2840FC raw=0x42A40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284100:
    // 0x284100: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284100u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284100 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284104:
    // 0x284104: 0x42400000  .word       0x42400000                   # INVALID     $s2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284104u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x284104 raw=0x42400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284108:
    // 0x284108: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x284108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28410c:
    // 0x28410c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28410cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284110:
    // 0x284110: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284114:
    // 0x284114: 0x42ba0000  .word       0x42BA0000                   # INVALID     $s5, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284114u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284114 raw=0x42BA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284118:
    // 0x284118: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x284118u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x284118 raw=0x40400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28411c:
    // 0x28411c: 0x421c0000  .word       0x421C0000                   # INVALID     $s0, $gp, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x28411cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x28411C raw=0x421C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284120:
    // 0x284120: 0x0  nop
    ctx->pc = 0x284120u;
    // NOP
label_284124:
    // 0x284124: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284124u;
    
label_284128:
    // 0x284128: 0x2800003c  slti        $zero, $zero, 0x3C
    ctx->pc = 0x284128u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)60) ? 1 : 0);
label_28412c:
    // 0x28412c: 0x0  nop
    ctx->pc = 0x28412cu;
    // NOP
label_284130:
    // 0x284130: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x284130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284134:
    // 0x284134: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284138:
    // 0x284138: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x284138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28413c:
    // 0x28413c: 0x43270000  .word       0x43270000                   # INVALID     $t9, $a3, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28413cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28413C raw=0x43270000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284140:
    // 0x284140: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284140u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284144:
    // 0x284144: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_284148:
    if (ctx->pc == 0x284148u) {
        ctx->pc = 0x284148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284144u;
        // 0x284148: 0xc1880000  ll          $t0, 0x0($t4) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28414Cu;
        goto label_28414c;
    }
    ctx->pc = 0x284144u;
    {
        const bool branch_taken_0x284144 = (false);
        ctx->pc = 0x284148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284144u;
        // 0x284148: 0xc1880000  ll          $t0, 0x0($t4) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284144) {
            ctx->pc = 0x284148u;
            goto label_284148;
        }
    }
    ctx->pc = 0x28414Cu;
label_28414c:
    // 0x28414c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28414cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284150:
    // 0x284150: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x284150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284154:
    // 0x284154: 0x43220000  .word       0x43220000                   # INVALID     $t9, $v0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284154u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284154 raw=0x43220000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284158:
    // 0x284158: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284158u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28415c:
    // 0x28415c: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28415cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x28415C raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284160:
    // 0x284160: 0x0  nop
    ctx->pc = 0x284160u;
    // NOP
label_284164:
    // 0x284164: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284164u;
    
label_284168:
    // 0x284168: 0x2d00003d  sltiu       $zero, $t0, 0x3D
    ctx->pc = 0x284168u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
label_28416c:
    // 0x28416c: 0x0  nop
    ctx->pc = 0x28416cu;
    // NOP
label_284170:
    // 0x284170: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284170u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x284170 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284174:
    // 0x284174: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x284174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284178:
    // 0x284178: 0xc1e00000  ll          $zero, 0x0($t7)
    ctx->pc = 0x284178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28417c:
    // 0x28417c: 0x43340000  .word       0x43340000                   # INVALID     $t9, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28417cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28417C raw=0x43340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284180:
    // 0x284180: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284180u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284180 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284184:
    // 0x284184: 0x426c0000  .word       0x426C0000                   # INVALID     $s3, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284184u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x284184 raw=0x426C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284188:
    // 0x284188: 0xc22c0000  ll          $t4, 0x0($s1)
    ctx->pc = 0x284188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28418c:
    // 0x28418c: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x28418cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284190:
    // 0x284190: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x284190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284194:
    // 0x284194: 0x43110000  .word       0x43110000                   # INVALID     $t8, $s1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284194u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284194 raw=0x43110000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284198:
    // 0x284198: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_28419c:
    if (ctx->pc == 0x28419Cu) {
        ctx->pc = 0x28419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284198u;
        // 0x28419c: 0x41000000  bc0f        . + 4 + (0x0 << 2) (Delay Slot)
        // BC0 (Condition: 0x0) - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2841A0u;
        goto label_2841a0;
    }
    ctx->pc = 0x284198u;
    {
        const bool branch_taken_0x284198 = (false);
        ctx->pc = 0x28419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284198u;
        // 0x28419c: 0x41000000  bc0f        . + 4 + (0x0 << 2) (Delay Slot)
        // BC0 (Condition: 0x0) - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x284198) {
            ctx->pc = 0x28419Cu;
            goto label_28419c;
        }
    }
    ctx->pc = 0x2841A0u;
label_2841a0:
    // 0x2841a0: 0x0  nop
    ctx->pc = 0x2841a0u;
    // NOP
label_2841a4:
    // 0x2841a4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2841a4u;
    
label_2841a8:
    // 0x2841a8: 0x3202003e  andi        $v0, $s0, 0x3E
    ctx->pc = 0x2841a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)62);
label_2841ac:
    // 0x2841ac: 0x0  nop
    ctx->pc = 0x2841acu;
    // NOP
label_2841b0:
    // 0x2841b0: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2841b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2841b4:
    // 0x2841b4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2841b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2841b8:
    // 0x2841b8: 0xc2200000  ll          $zero, 0x0($s1)
    ctx->pc = 0x2841b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2841bc:
    // 0x2841bc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2841bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2841BC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2841c0:
    // 0x2841c0: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2841c0u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2841c4:
    // 0x2841c4: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2841c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x2841C4 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2841c8:
    // 0x2841c8: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2841c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2841cc:
    // 0x2841cc: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2841ccu;
    // CACHE instruction (ignored)
label_2841d0:
    // 0x2841d0: 0xc1f80000  ll          $t8, 0x0($t7)
    ctx->pc = 0x2841d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2841d4:
    // 0x2841d4: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2841d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2841D4 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2841d8:
    // 0x2841d8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x2841d8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2841dc:
    // 0x2841dc: 0x42780000  .word       0x42780000                   # INVALID     $s3, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2841dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x2841DC raw=0x42780000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2841e0:
    // 0x2841e0: 0x0  nop
    ctx->pc = 0x2841e0u;
    // NOP
label_2841e4:
    // 0x2841e4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2841e4u;
    
label_2841e8:
    // 0x2841e8: 0x2803003f  slti        $v1, $zero, 0x3F
    ctx->pc = 0x2841e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)63) ? 1 : 0);
label_2841ec:
    // 0x2841ec: 0x0  nop
    ctx->pc = 0x2841ecu;
    // NOP
label_2841f0:
    // 0x2841f0: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x2841f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2841f4:
    // 0x2841f4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2841f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2841f8:
    // 0x2841f8: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x2841f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2841fc:
    // 0x2841fc: 0x43310000  .word       0x43310000                   # INVALID     $t9, $s1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2841fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2841FC raw=0x43310000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284200:
    // 0x284200: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284200u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284204:
    // 0x284204: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284204u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284204 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284208:
    // 0x284208: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x284208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28420c:
    // 0x28420c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x28420cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284210:
    // 0x284210: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284214:
    // 0x284214: 0x431d0000  .word       0x431D0000                   # INVALID     $t8, $sp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284214u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284214 raw=0x431D0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284218:
    // 0x284218: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284218u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284218 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28421c:
    // 0x28421c: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28421cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x28421C raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284220:
    // 0x284220: 0x0  nop
    ctx->pc = 0x284220u;
    // NOP
label_284224:
    // 0x284224: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284224u;
    
label_284228:
    // 0x284228: 0x28000050  slti        $zero, $zero, 0x50
    ctx->pc = 0x284228u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)80) ? 1 : 0);
label_28422c:
    // 0x28422c: 0x0  nop
    ctx->pc = 0x28422cu;
    // NOP
label_284230:
    // 0x284230: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x284230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284234:
    // 0x284234: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284238:
    // 0x284238: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x284238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28423c:
    // 0x28423c: 0x43310000  .word       0x43310000                   # INVALID     $t9, $s1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28423cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28423C raw=0x43310000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284240:
    // 0x284240: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284240u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284244:
    // 0x284244: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284244u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284244 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284248:
    // 0x284248: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x284248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28424c:
    // 0x28424c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x28424cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284250:
    // 0x284250: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284254:
    // 0x284254: 0x431d0000  .word       0x431D0000                   # INVALID     $t8, $sp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284254u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284254 raw=0x431D0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284258:
    // 0x284258: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284258u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284258 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28425c:
    // 0x28425c: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28425cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x28425C raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284260:
    // 0x284260: 0x0  nop
    ctx->pc = 0x284260u;
    // NOP
label_284264:
    // 0x284264: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284264u;
    
label_284268:
    // 0x284268: 0x2b000050  slti        $zero, $t8, 0x50
    ctx->pc = 0x284268u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)80) ? 1 : 0);
label_28426c:
    // 0x28426c: 0x0  nop
    ctx->pc = 0x28426cu;
    // NOP
label_284270:
    // 0x284270: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x284270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284274:
    // 0x284274: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284278:
    // 0x284278: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x284278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28427c:
    // 0x28427c: 0x43310000  .word       0x43310000                   # INVALID     $t9, $s1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28427cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28427C raw=0x43310000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284280:
    // 0x284280: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284280u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284284:
    // 0x284284: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284284u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284284 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284288:
    // 0x284288: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x284288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28428c:
    // 0x28428c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x28428cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284290:
    // 0x284290: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284294:
    // 0x284294: 0x431d0000  .word       0x431D0000                   # INVALID     $t8, $sp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284294u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284294 raw=0x431D0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284298:
    // 0x284298: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284298u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284298 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28429c:
    // 0x28429c: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28429cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x28429C raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2842a0:
    // 0x2842a0: 0x0  nop
    ctx->pc = 0x2842a0u;
    // NOP
label_2842a4:
    // 0x2842a4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2842a4u;
    
label_2842a8:
    // 0x2842a8: 0x2a000050  slti        $zero, $s0, 0x50
    ctx->pc = 0x2842a8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)80) ? 1 : 0);
label_2842ac:
    // 0x2842ac: 0x0  nop
    ctx->pc = 0x2842acu;
    // NOP
label_2842b0:
    // 0x2842b0: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x2842b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2842b4:
    // 0x2842b4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2842b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2842b8:
    // 0x2842b8: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x2842b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2842bc:
    // 0x2842bc: 0x43310000  .word       0x43310000                   # INVALID     $t9, $s1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2842bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2842BC raw=0x43310000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2842c0:
    // 0x2842c0: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x2842c0u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2842c4:
    // 0x2842c4: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2842c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x2842C4 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2842c8:
    // 0x2842c8: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x2842c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2842cc:
    // 0x2842cc: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2842ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2842d0:
    // 0x2842d0: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x2842d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2842d4:
    // 0x2842d4: 0x431d0000  .word       0x431D0000                   # INVALID     $t8, $sp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2842d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2842D4 raw=0x431D0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2842d8:
    // 0x2842d8: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x2842d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x2842D8 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2842dc:
    // 0x2842dc: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2842dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x2842DC raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2842e0:
    // 0x2842e0: 0x0  nop
    ctx->pc = 0x2842e0u;
    // NOP
label_2842e4:
    // 0x2842e4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2842e4u;
    
label_2842e8:
    // 0x2842e8: 0x29000050  slti        $zero, $t0, 0x50
    ctx->pc = 0x2842e8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)80) ? 1 : 0);
label_2842ec:
    // 0x2842ec: 0x0  nop
    ctx->pc = 0x2842ecu;
    // NOP
label_2842f0:
    // 0x2842f0: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x2842f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2842f4:
    // 0x2842f4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2842f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2842f8:
    // 0x2842f8: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x2842f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2842fc:
    // 0x2842fc: 0x43310000  .word       0x43310000                   # INVALID     $t9, $s1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2842fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2842FC raw=0x43310000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284300:
    // 0x284300: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284300u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284304:
    // 0x284304: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284304u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284304 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284308:
    // 0x284308: 0xc1700000  ll          $s0, 0x0($t3)
    ctx->pc = 0x284308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28430c:
    // 0x28430c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x28430cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284310:
    // 0x284310: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284314:
    // 0x284314: 0x431d0000  .word       0x431D0000                   # INVALID     $t8, $sp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284314u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x284314 raw=0x431D0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284318:
    // 0x284318: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284318u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284318 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28431c:
    // 0x28431c: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28431cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x28431C raw=0x41C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284320:
    // 0x284320: 0x0  nop
    ctx->pc = 0x284320u;
    // NOP
label_284324:
    // 0x284324: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284324u;
    
label_284328:
    // 0x284328: 0x2c000050  sltiu       $zero, $zero, 0x50
    ctx->pc = 0x284328u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
label_28432c:
    // 0x28432c: 0x0  nop
    ctx->pc = 0x28432cu;
    // NOP
label_284330:
    // 0x284330: 0x42aa0000  .word       0x42AA0000                   # INVALID     $s5, $t2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284330u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284330 raw=0x42AA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284334:
    // 0x284334: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x284334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284338:
    // 0x284338: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28433c:
    // 0x28433c: 0x43200000  .word       0x43200000                   # INVALID     $t9, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28433cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28433C raw=0x43200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284340:
    // 0x284340: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284340u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x284340 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284344:
    // 0x284344: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284344u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284348:
    // 0x284348: 0xc20c0000  ll          $t4, 0x0($s0)
    ctx->pc = 0x284348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28434c:
    // 0x28434c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28434cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284350:
    // 0x284350: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284354:
    // 0x284354: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284354u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x284354 raw=0x42F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284358:
    // 0x284358: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284358u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28435c:
    // 0x28435c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28435cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284360:
    // 0x284360: 0x0  nop
    ctx->pc = 0x284360u;
    // NOP
label_284364:
    // 0x284364: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284364u;
    
label_284368:
    // 0x284368: 0x2a020051  slti        $v0, $s0, 0x51
    ctx->pc = 0x284368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)81) ? 1 : 0);
label_28436c:
    // 0x28436c: 0x0  nop
    ctx->pc = 0x28436cu;
    // NOP
label_284370:
    // 0x284370: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284374:
    // 0x284374: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x284374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284378:
    // 0x284378: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28437c:
    // 0x28437c: 0x43210000  .word       0x43210000                   # INVALID     $t9, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28437cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28437C raw=0x43210000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284380:
    // 0x284380: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284380u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x284380 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284384:
    // 0x284384: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284384u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284384 raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284388:
    // 0x284388: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28438c:
    // 0x28438c: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x28438cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284390:
    // 0x284390: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284394:
    // 0x284394: 0x43210000  .word       0x43210000                   # INVALID     $t9, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284394u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284394 raw=0x43210000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284398:
    // 0x284398: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284398u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x284398 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28439c:
    // 0x28439c: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x28439cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x28439C raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2843a0:
    // 0x2843a0: 0x0  nop
    ctx->pc = 0x2843a0u;
    // NOP
label_2843a4:
    // 0x2843a4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2843a4u;
    
label_2843a8:
    // 0x2843a8: 0x2c00004f  sltiu       $zero, $zero, 0x4F
    ctx->pc = 0x2843a8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)79) ? 1 : 0);
label_2843ac:
    // 0x2843ac: 0x0  nop
    ctx->pc = 0x2843acu;
    // NOP
label_2843b0:
    // 0x2843b0: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x2843b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2843b4:
    // 0x2843b4: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x2843b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2843b8:
    // 0x2843b8: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x2843b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2843bc:
    // 0x2843bc: 0x43210000  .word       0x43210000                   # INVALID     $t9, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2843bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2843BC raw=0x43210000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2843c0:
    // 0x2843c0: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2843c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x2843C0 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2843c4:
    // 0x2843c4: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2843c4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2843C4 raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2843c8:
    // 0x2843c8: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x2843c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2843cc:
    // 0x2843cc: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x2843ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2843d0:
    // 0x2843d0: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x2843d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2843d4:
    // 0x2843d4: 0x43210000  .word       0x43210000                   # INVALID     $t9, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2843d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2843D4 raw=0x43210000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2843d8:
    // 0x2843d8: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2843d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x2843D8 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2843dc:
    // 0x2843dc: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2843dcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2843DC raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2843e0:
    // 0x2843e0: 0x0  nop
    ctx->pc = 0x2843e0u;
    // NOP
label_2843e4:
    // 0x2843e4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2843e4u;
    
label_2843e8:
    // 0x2843e8: 0x2d00004f  sltiu       $zero, $t0, 0x4F
    ctx->pc = 0x2843e8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)79) ? 1 : 0);
label_2843ec:
    // 0x2843ec: 0x0  nop
    ctx->pc = 0x2843ecu;
    // NOP
label_2843f0:
    // 0x2843f0: 0x428c0000  .word       0x428C0000                   # INVALID     $s4, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2843f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2843F0 raw=0x428C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2843f4:
    // 0x2843f4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2843f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2843f8:
    // 0x2843f8: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x2843f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2843fc:
    // 0x2843fc: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2843fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2843FC raw=0x43480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284400:
    // 0x284400: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284400u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284404:
    // 0x284404: 0x41d00000  .word       0x41D00000                   # INVALID     $t6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284404u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284404 raw=0x41D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284408:
    // 0x284408: 0xc2400000  ll          $zero, 0x0($s2)
    ctx->pc = 0x284408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28440c:
    // 0x28440c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x28440cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284410:
    // 0x284410: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284414:
    // 0x284414: 0x42ec0000  .word       0x42EC0000                   # INVALID     $s7, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284414u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x284414 raw=0x42EC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284418:
    // 0x284418: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284418u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284418 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28441c:
    // 0x28441c: 0x40a00000  dmtc0       $zero, Index
    ctx->pc = 0x28441cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x28441C raw=0x40A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284420:
    // 0x284420: 0x0  nop
    ctx->pc = 0x284420u;
    // NOP
label_284424:
    // 0x284424: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284424u;
    
label_284428:
    // 0x284428: 0x30020033  andi        $v0, $zero, 0x33
    ctx->pc = 0x284428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)51);
label_28442c:
    // 0x28442c: 0x0  nop
    ctx->pc = 0x28442cu;
    // NOP
label_284430:
    // 0x284430: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x284430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284434:
    // 0x284434: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284438:
    // 0x284438: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x284438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28443c:
    // 0x28443c: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28443cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x28443C raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284440:
    // 0x284440: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284440u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284444:
    // 0x284444: 0x42680000  .word       0x42680000                   # INVALID     $s3, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284444u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x284444 raw=0x42680000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284448:
    // 0x284448: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x284448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28444c:
    // 0x28444c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28444cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284450:
    // 0x284450: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x284450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284454:
    // 0x284454: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284454u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284454 raw=0x42A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284458:
    // 0x284458: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284458u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28445c:
    // 0x28445c: 0x42680000  .word       0x42680000                   # INVALID     $s3, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28445cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x28445C raw=0x42680000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284460:
    // 0x284460: 0x0  nop
    ctx->pc = 0x284460u;
    // NOP
label_284464:
    // 0x284464: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284464u;
    
label_284468:
    // 0x284468: 0x28000040  slti        $zero, $zero, 0x40
    ctx->pc = 0x284468u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)64) ? 1 : 0);
label_28446c:
    // 0x28446c: 0x0  nop
    ctx->pc = 0x28446cu;
    // NOP
label_284470:
    // 0x284470: 0x428c0000  .word       0x428C0000                   # INVALID     $s4, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284470u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x284470 raw=0x428C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284474:
    // 0x284474: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284478:
    // 0x284478: 0xc2280000  ll          $t0, 0x0($s1)
    ctx->pc = 0x284478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28447c:
    // 0x28447c: 0x433b0000  .word       0x433B0000                   # INVALID     $t9, $k1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28447cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28447C raw=0x433B0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284480:
    // 0x284480: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284480u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284484:
    // 0x284484: 0x423c0000  .word       0x423C0000                   # INVALID     $s1, $gp, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284484u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x284484 raw=0x423C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284488:
    // 0x284488: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x284488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28448c:
    // 0x28448c: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x28448cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284490:
    // 0x284490: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284494:
    // 0x284494: 0x42b40000  .word       0x42B40000                   # INVALID     $s5, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284494u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284494 raw=0x42B40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284498:
    // 0x284498: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284498u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284498 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28449c:
    // 0x28449c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28449cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2844a0:
    // 0x2844a0: 0x0  nop
    ctx->pc = 0x2844a0u;
    // NOP
label_2844a4:
    // 0x2844a4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2844a4u;
    
label_2844a8:
    // 0x2844a8: 0x2d020052  sltiu       $v0, $t0, 0x52
    ctx->pc = 0x2844a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)82) ? 1 : 0);
label_2844ac:
    // 0x2844ac: 0x0  nop
    ctx->pc = 0x2844acu;
    // NOP
label_2844b0:
    // 0x2844b0: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x2844b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2844b4:
    // 0x2844b4: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x2844b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2844b8:
    // 0x2844b8: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x2844b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2844bc:
    // 0x2844bc: 0x43210000  .word       0x43210000                   # INVALID     $t9, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2844bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2844BC raw=0x43210000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2844c0:
    // 0x2844c0: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2844c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x2844C0 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2844c4:
    // 0x2844c4: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2844c4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2844C4 raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2844c8:
    // 0x2844c8: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x2844c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2844cc:
    // 0x2844cc: 0xc0e00000  ll          $zero, 0x0($a3)
    ctx->pc = 0x2844ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2844d0:
    // 0x2844d0: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x2844d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2844d4:
    // 0x2844d4: 0x43210000  .word       0x43210000                   # INVALID     $t9, $at, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2844d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2844D4 raw=0x43210000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2844d8:
    // 0x2844d8: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2844d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x2844D8 raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2844dc:
    // 0x2844dc: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2844dcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x2844DC raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2844e0:
    // 0x2844e0: 0x0  nop
    ctx->pc = 0x2844e0u;
    // NOP
label_2844e4:
    // 0x2844e4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2844e4u;
    
label_2844e8:
    // 0x2844e8: 0x2e00004f  sltiu       $zero, $s0, 0x4F
    ctx->pc = 0x2844e8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)79) ? 1 : 0);
label_2844ec:
    // 0x2844ec: 0x0  nop
    ctx->pc = 0x2844ecu;
    // NOP
label_2844f0:
    // 0x2844f0: 0x42aa0000  .word       0x42AA0000                   # INVALID     $s5, $t2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2844f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x2844F0 raw=0x42AA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2844f4:
    // 0x2844f4: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x2844f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2844f8:
    // 0x2844f8: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2844f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2844fc:
    // 0x2844fc: 0x43200000  .word       0x43200000                   # INVALID     $t9, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2844fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2844FC raw=0x43200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284500:
    // 0x284500: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284500u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x284500 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284504:
    // 0x284504: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284504u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284508:
    // 0x284508: 0xc20c0000  ll          $t4, 0x0($s0)
    ctx->pc = 0x284508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28450c:
    // 0x28450c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28450cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284510:
    // 0x284510: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284514:
    // 0x284514: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284514u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x284514 raw=0x42F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284518:
    // 0x284518: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284518u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28451c:
    // 0x28451c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28451cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_284520:
    // 0x284520: 0x0  nop
    ctx->pc = 0x284520u;
    // NOP
label_284524:
    // 0x284524: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284524u;
    
label_284528:
    // 0x284528: 0x29020051  slti        $v0, $t0, 0x51
    ctx->pc = 0x284528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)81) ? 1 : 0);
label_28452c:
    // 0x28452c: 0x0  nop
    ctx->pc = 0x28452cu;
    // NOP
label_284530:
    // 0x284530: 0xc2a60000  ll          $a2, 0x0($s5)
    ctx->pc = 0x284530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); SET_GPR_S32(ctx, 6, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284534:
    // 0x284534: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284538:
    // 0x284538: 0xc1980000  ll          $t8, 0x0($t4)
    ctx->pc = 0x284538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28453c:
    // 0x28453c: 0x43280000  .word       0x43280000                   # INVALID     $t9, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28453cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28453C raw=0x43280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284540:
    // 0x284540: 0x41b80000  .word       0x41B80000                   # INVALID     $t5, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284540u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284540 raw=0x41B80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284544:
    // 0x284544: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284544u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284544 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284548:
    // 0x284548: 0xc1e00000  ll          $zero, 0x0($t7)
    ctx->pc = 0x284548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28454c:
    // 0x28454c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x28454cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284550:
    // 0x284550: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x284550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284554:
    // 0x284554: 0x433a0000  .word       0x433A0000                   # INVALID     $t9, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284554u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x284554 raw=0x433A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284558:
    // 0x284558: 0x41d00000  .word       0x41D00000                   # INVALID     $t6, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284558u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x284558 raw=0x41D00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28455c:
    // 0x28455c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x28455cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x28455C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284560:
    // 0x284560: 0x0  nop
    ctx->pc = 0x284560u;
    // NOP
label_284564:
    // 0x284564: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284564u;
    
label_284568:
    // 0x284568: 0x25000041  addiu       $zero, $t0, 0x41
    ctx->pc = 0x284568u;
    // NOP (addiu $zero, ...)
label_28456c:
    // 0x28456c: 0x0  nop
    ctx->pc = 0x28456cu;
    // NOP
label_284570:
    // 0x284570: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284570u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x284570 raw=0x42700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284574:
    // 0x284574: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x284574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284578:
    // 0x284578: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x284578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28457c:
    // 0x28457c: 0x43140000  .word       0x43140000                   # INVALID     $t8, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28457cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x28457C raw=0x43140000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284580:
    // 0x284580: 0x40c00000  ctc0        $zero, Index
    ctx->pc = 0x284580u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x284580 raw=0x40C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284584:
    // 0x284584: 0x42500000  .word       0x42500000                   # INVALID     $s2, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284584u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x284584 raw=0x42500000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284588:
    // 0x284588: 0xc1f00000  ll          $s0, 0x0($t7)
    ctx->pc = 0x284588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28458c:
    // 0x28458c: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x28458cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284590:
    // 0x284590: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x284590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284594:
    // 0x284594: 0x42b40000  .word       0x42B40000                   # INVALID     $s5, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284594u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284594 raw=0x42B40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284598:
    // 0x284598: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x284598u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_28459c:
    // 0x28459c: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x28459cu;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_2845a0:
    // 0x2845a0: 0x0  nop
    ctx->pc = 0x2845a0u;
    // NOP
label_2845a4:
    // 0x2845a4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2845a4u;
    
label_2845a8:
    // 0x2845a8: 0x2e020042  sltiu       $v0, $s0, 0x42
    ctx->pc = 0x2845a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)66) ? 1 : 0);
label_2845ac:
    // 0x2845ac: 0x0  nop
    ctx->pc = 0x2845acu;
    // NOP
label_2845b0:
    // 0x2845b0: 0xc2280000  ll          $t0, 0x0($s1)
    ctx->pc = 0x2845b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2845b4:
    // 0x2845b4: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x2845b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2845b8:
    // 0x2845b8: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x2845b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2845bc:
    // 0x2845bc: 0x42ee0000  .word       0x42EE0000                   # INVALID     $s7, $t6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2845bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x2845BC raw=0x42EE0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2845c0:
    // 0x2845c0: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2845c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x2845C0 raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2845c4:
    // 0x2845c4: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2845c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x2845C4 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2845c8:
    // 0x2845c8: 0xc2280000  ll          $t0, 0x0($s1)
    ctx->pc = 0x2845c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2845cc:
    // 0x2845cc: 0x0  nop
    ctx->pc = 0x2845ccu;
    // NOP
label_2845d0:
    // 0x2845d0: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x2845d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2845d4:
    // 0x2845d4: 0x42f20000  .word       0x42F20000                   # INVALID     $s7, $s2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2845d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x2845D4 raw=0x42F20000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2845d8:
    // 0x2845d8: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2845d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2845D8 raw=0x41200000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2845dc:
    // 0x2845dc: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2845dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x2845DC raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2845e0:
    // 0x2845e0: 0x0  nop
    ctx->pc = 0x2845e0u;
    // NOP
label_2845e4:
    // 0x2845e4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2845e4u;
    
label_2845e8:
    // 0x2845e8: 0x2b030043  slti        $v1, $t8, 0x43
    ctx->pc = 0x2845e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)67) ? 1 : 0);
label_2845ec:
    // 0x2845ec: 0x0  nop
    ctx->pc = 0x2845ecu;
    // NOP
label_2845f0:
    // 0x2845f0: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x2845f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2845f4:
    // 0x2845f4: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x2845f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2845f8:
    // 0x2845f8: 0xc0400000  ll          $zero, 0x0($v0)
    ctx->pc = 0x2845f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2845fc:
    // 0x2845fc: 0x42c00000  .word       0x42C00000                   # INVALID     $s6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2845fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x2845FC raw=0x42C00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284600:
    // 0x284600: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_284604:
    if (ctx->pc == 0x284604u) {
        ctx->pc = 0x284604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284600u;
        // 0x284604: 0x40e00000  .word       0x40E00000                   # INVALID     $a3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x284604 raw=0x40E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x284608u;
        goto label_284608;
    }
    ctx->pc = 0x284600u;
    {
        const bool branch_taken_0x284600 = (false);
        ctx->pc = 0x284604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284600u;
        // 0x284604: 0x40e00000  .word       0x40E00000                   # INVALID     $a3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x284604 raw=0x40E00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x284600) {
            ctx->pc = 0x284604u;
            goto label_284604;
        }
    }
    ctx->pc = 0x284608u;
label_284608:
    // 0x284608: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x284608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28460c:
    // 0x28460c: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x28460cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284610:
    // 0x284610: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x284610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284614:
    // 0x284614: 0x42b60000  .word       0x42B60000                   # INVALID     $s5, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284614u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x284614 raw=0x42B60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284618:
    // 0x284618: 0x41000000  bc0f        . + 4 + (0x0 << 2)
label_28461c:
    if (ctx->pc == 0x28461Cu) {
        ctx->pc = 0x28461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284618u;
        // 0x28461c: 0x41000000  bc0f        . + 4 + (0x0 << 2) (Delay Slot)
        // BC0 (Condition: 0x0) - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x284620u;
        goto label_284620;
    }
    ctx->pc = 0x284618u;
    {
        const bool branch_taken_0x284618 = (false);
        ctx->pc = 0x28461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284618u;
        // 0x28461c: 0x41000000  bc0f        . + 4 + (0x0 << 2) (Delay Slot)
        // BC0 (Condition: 0x0) - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x284618) {
            ctx->pc = 0x28461Cu;
            goto label_28461c;
        }
    }
    ctx->pc = 0x284620u;
label_284620:
    // 0x284620: 0x0  nop
    ctx->pc = 0x284620u;
    // NOP
label_284624:
    // 0x284624: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284624u;
    
label_284628:
    // 0x284628: 0x25000044  addiu       $zero, $t0, 0x44
    ctx->pc = 0x284628u;
    // NOP (addiu $zero, ...)
label_28462c:
    // 0x28462c: 0x0  nop
    ctx->pc = 0x28462cu;
    // NOP
label_284630:
    // 0x284630: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x284630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284634:
    // 0x284634: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x284634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284638:
    // 0x284638: 0xc1300000  ll          $s0, 0x0($t1)
    ctx->pc = 0x284638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28463c:
    // 0x28463c: 0x43260000  .word       0x43260000                   # INVALID     $t9, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28463cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x28463C raw=0x43260000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284640:
    // 0x284640: 0x41b80000  .word       0x41B80000                   # INVALID     $t5, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284640u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284640 raw=0x41B80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284644:
    // 0x284644: 0x41b80000  .word       0x41B80000                   # INVALID     $t5, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284644u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x284644 raw=0x41B80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284648:
    // 0x284648: 0xc1980000  ll          $t8, 0x0($t4)
    ctx->pc = 0x284648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28464c:
    // 0x28464c: 0xc1c00000  ll          $zero, 0x0($t6)
    ctx->pc = 0x28464cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284650:
    // 0x284650: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x284650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284654:
    // 0x284654: 0x421c0000  .word       0x421C0000                   # INVALID     $s0, $gp, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x284654u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x284654 raw=0x421C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284658:
    // 0x284658: 0xc1f80000  ll          $t8, 0x0($t7)
    ctx->pc = 0x284658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28465c:
    // 0x28465c: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28465cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x28465C raw=0x41F00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284660:
    // 0x284660: 0x0  nop
    ctx->pc = 0x284660u;
    // NOP
label_284664:
    // 0x284664: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x284664u;
    
label_284668:
    // 0x284668: 0x2c040045  sltiu       $a0, $zero, 0x45
    ctx->pc = 0x284668u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
label_28466c:
    // 0x28466c: 0x0  nop
    ctx->pc = 0x28466cu;
    // NOP
label_284670:
    // 0x284670: 0x42540000  .word       0x42540000                   # INVALID     $s2, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284670u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x284670 raw=0x42540000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284674:
    // 0x284674: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x284674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284678:
    // 0x284678: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x284678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28467c:
    // 0x28467c: 0xc30f0000  ll          $t7, 0x0($t8)
    ctx->pc = 0x28467cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); SET_GPR_S32(ctx, 15, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284680:
    // 0x284680: 0x41700000  .word       0x41700000                   # INVALID     $t3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284680u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x284680 raw=0x41700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284684:
    // 0x284684: 0xc1880000  ll          $t0, 0x0($t4)
    ctx->pc = 0x284684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284688:
    // 0x284688: 0xc2a00000  ll          $zero, 0x0($s5)
    ctx->pc = 0x284688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28468c:
    // 0x28468c: 0xc1000000  ll          $zero, 0x0($t0)
    ctx->pc = 0x28468cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284690:
    // 0x284690: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x284690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_284694:
    // 0x284694: 0x42fa0000  .word       0x42FA0000                   # INVALID     $s7, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284694u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x284694 raw=0x42FA0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_284698:
    // 0x284698: 0x41700000  .word       0x41700000                   # INVALID     $t3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x284698u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x284698 raw=0x41700000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28469c:
    // 0x28469c: 0x42180000  .word       0x42180000                   # INVALID     $s0, $t8, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x28469cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x28469C raw=0x42180000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2846a0:
    // 0x2846a0: 0x0  nop
    ctx->pc = 0x2846a0u;
    // NOP
label_2846a4:
    // 0x2846a4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2846a4u;
    
label_2846a8:
    // 0x2846a8: 0x2a030046  slti        $v1, $s0, 0x46
    ctx->pc = 0x2846a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)70) ? 1 : 0);
label_2846ac:
    // 0x2846ac: 0x0  nop
    ctx->pc = 0x2846acu;
    // NOP
label_2846b0:
    // 0x2846b0: 0x42280000  .word       0x42280000                   # INVALID     $s1, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2846b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2846B0 raw=0x42280000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2846b4:
    // 0x2846b4: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2846b4u;
    // CACHE instruction (ignored)
label_2846b8:
    // 0x2846b8: 0xc1400000  ll          $zero, 0x0($t2)
    ctx->pc = 0x2846b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2846bc:
    // 0x2846bc: 0x431a0000  .word       0x431A0000                   # INVALID     $t8, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2846bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2846BC raw=0x431A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2846c0:
    // 0x2846c0: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x2846c0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2846c4:
    // 0x2846c4: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2846c4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x2846C4 raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2846c8:
    // 0x2846c8: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x2846c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2846cc:
    // 0x2846cc: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2846ccu;
    // CACHE instruction (ignored)
label_2846d0:
    // 0x2846d0: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x2846d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2846d4:
    // 0x2846d4: 0x431a0000  .word       0x431A0000                   # INVALID     $t8, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2846d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2846D4 raw=0x431A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2846d8:
    // 0x2846d8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x2846d8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2846dc:
    // 0x2846dc: 0x41b00000  .word       0x41B00000                   # INVALID     $t5, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2846dcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x2846DC raw=0x41B00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2846e0:
    // 0x2846e0: 0x0  nop
    ctx->pc = 0x2846e0u;
    // NOP
label_2846e4:
    // 0x2846e4: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x2846e4u;
    
label_2846e8:
    // 0x2846e8: 0x2e020047  sltiu       $v0, $s0, 0x47
    ctx->pc = 0x2846e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)71) ? 1 : 0);
label_2846ec:
    // 0x2846ec: 0x0  nop
    ctx->pc = 0x2846ecu;
    // NOP
label_2846f0:
    // 0x2846f0: 0xc2b80000  ll          $t8, 0x0($s5)
    ctx->pc = 0x2846f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2846f4:
    // 0x2846f4: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x2846f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    ctx->pc = 0x2846f8u;
    return;
}

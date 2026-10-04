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


void FUN_0014eba0_part16(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1560d0u: goto label_1560d0;
        case 0x1560d4u: goto label_1560d4;
        case 0x1560d8u: goto label_1560d8;
        case 0x1560dcu: goto label_1560dc;
        case 0x1560e0u: goto label_1560e0;
        case 0x1560e4u: goto label_1560e4;
        case 0x1560e8u: goto label_1560e8;
        case 0x1560ecu: goto label_1560ec;
        case 0x1560f0u: goto label_1560f0;
        case 0x1560f4u: goto label_1560f4;
        case 0x1560f8u: goto label_1560f8;
        case 0x1560fcu: goto label_1560fc;
        case 0x156100u: goto label_156100;
        case 0x156104u: goto label_156104;
        case 0x156108u: goto label_156108;
        case 0x15610cu: goto label_15610c;
        case 0x156110u: goto label_156110;
        case 0x156114u: goto label_156114;
        case 0x156118u: goto label_156118;
        case 0x15611cu: goto label_15611c;
        case 0x156120u: goto label_156120;
        case 0x156124u: goto label_156124;
        case 0x156128u: goto label_156128;
        case 0x15612cu: goto label_15612c;
        case 0x156130u: goto label_156130;
        case 0x156134u: goto label_156134;
        case 0x156138u: goto label_156138;
        case 0x15613cu: goto label_15613c;
        case 0x156140u: goto label_156140;
        case 0x156144u: goto label_156144;
        case 0x156148u: goto label_156148;
        case 0x15614cu: goto label_15614c;
        case 0x156150u: goto label_156150;
        case 0x156154u: goto label_156154;
        case 0x156158u: goto label_156158;
        case 0x15615cu: goto label_15615c;
        case 0x156160u: goto label_156160;
        case 0x156164u: goto label_156164;
        case 0x156168u: goto label_156168;
        case 0x15616cu: goto label_15616c;
        case 0x156170u: goto label_156170;
        case 0x156174u: goto label_156174;
        case 0x156178u: goto label_156178;
        case 0x15617cu: goto label_15617c;
        case 0x156180u: goto label_156180;
        case 0x156184u: goto label_156184;
        case 0x156188u: goto label_156188;
        case 0x15618cu: goto label_15618c;
        case 0x156190u: goto label_156190;
        case 0x156194u: goto label_156194;
        case 0x156198u: goto label_156198;
        case 0x15619cu: goto label_15619c;
        case 0x1561a0u: goto label_1561a0;
        case 0x1561a4u: goto label_1561a4;
        case 0x1561a8u: goto label_1561a8;
        case 0x1561acu: goto label_1561ac;
        case 0x1561b0u: goto label_1561b0;
        case 0x1561b4u: goto label_1561b4;
        case 0x1561b8u: goto label_1561b8;
        case 0x1561bcu: goto label_1561bc;
        case 0x1561c0u: goto label_1561c0;
        case 0x1561c4u: goto label_1561c4;
        case 0x1561c8u: goto label_1561c8;
        case 0x1561ccu: goto label_1561cc;
        case 0x1561d0u: goto label_1561d0;
        case 0x1561d4u: goto label_1561d4;
        case 0x1561d8u: goto label_1561d8;
        case 0x1561dcu: goto label_1561dc;
        case 0x1561e0u: goto label_1561e0;
        case 0x1561e4u: goto label_1561e4;
        case 0x1561e8u: goto label_1561e8;
        case 0x1561ecu: goto label_1561ec;
        case 0x1561f0u: goto label_1561f0;
        case 0x1561f4u: goto label_1561f4;
        case 0x1561f8u: goto label_1561f8;
        case 0x1561fcu: goto label_1561fc;
        case 0x156200u: goto label_156200;
        case 0x156204u: goto label_156204;
        case 0x156208u: goto label_156208;
        case 0x15620cu: goto label_15620c;
        case 0x156210u: goto label_156210;
        case 0x156214u: goto label_156214;
        case 0x156218u: goto label_156218;
        case 0x15621cu: goto label_15621c;
        case 0x156220u: goto label_156220;
        case 0x156224u: goto label_156224;
        case 0x156228u: goto label_156228;
        case 0x15622cu: goto label_15622c;
        case 0x156230u: goto label_156230;
        case 0x156234u: goto label_156234;
        case 0x156238u: goto label_156238;
        case 0x15623cu: goto label_15623c;
        case 0x156240u: goto label_156240;
        case 0x156244u: goto label_156244;
        case 0x156248u: goto label_156248;
        case 0x15624cu: goto label_15624c;
        case 0x156250u: goto label_156250;
        case 0x156254u: goto label_156254;
        case 0x156258u: goto label_156258;
        case 0x15625cu: goto label_15625c;
        case 0x156260u: goto label_156260;
        case 0x156264u: goto label_156264;
        case 0x156268u: goto label_156268;
        case 0x15626cu: goto label_15626c;
        case 0x156270u: goto label_156270;
        case 0x156274u: goto label_156274;
        case 0x156278u: goto label_156278;
        case 0x15627cu: goto label_15627c;
        case 0x156280u: goto label_156280;
        case 0x156284u: goto label_156284;
        case 0x156288u: goto label_156288;
        case 0x15628cu: goto label_15628c;
        case 0x156290u: goto label_156290;
        case 0x156294u: goto label_156294;
        case 0x156298u: goto label_156298;
        case 0x15629cu: goto label_15629c;
        case 0x1562a0u: goto label_1562a0;
        case 0x1562a4u: goto label_1562a4;
        case 0x1562a8u: goto label_1562a8;
        case 0x1562acu: goto label_1562ac;
        case 0x1562b0u: goto label_1562b0;
        case 0x1562b4u: goto label_1562b4;
        case 0x1562b8u: goto label_1562b8;
        case 0x1562bcu: goto label_1562bc;
        case 0x1562c0u: goto label_1562c0;
        case 0x1562c4u: goto label_1562c4;
        case 0x1562c8u: goto label_1562c8;
        case 0x1562ccu: goto label_1562cc;
        case 0x1562d0u: goto label_1562d0;
        case 0x1562d4u: goto label_1562d4;
        case 0x1562d8u: goto label_1562d8;
        case 0x1562dcu: goto label_1562dc;
        case 0x1562e0u: goto label_1562e0;
        case 0x1562e4u: goto label_1562e4;
        case 0x1562e8u: goto label_1562e8;
        case 0x1562ecu: goto label_1562ec;
        case 0x1562f0u: goto label_1562f0;
        case 0x1562f4u: goto label_1562f4;
        case 0x1562f8u: goto label_1562f8;
        case 0x1562fcu: goto label_1562fc;
        case 0x156300u: goto label_156300;
        case 0x156304u: goto label_156304;
        case 0x156308u: goto label_156308;
        case 0x15630cu: goto label_15630c;
        case 0x156310u: goto label_156310;
        case 0x156314u: goto label_156314;
        case 0x156318u: goto label_156318;
        case 0x15631cu: goto label_15631c;
        case 0x156320u: goto label_156320;
        case 0x156324u: goto label_156324;
        case 0x156328u: goto label_156328;
        case 0x15632cu: goto label_15632c;
        case 0x156330u: goto label_156330;
        case 0x156334u: goto label_156334;
        case 0x156338u: goto label_156338;
        case 0x15633cu: goto label_15633c;
        case 0x156340u: goto label_156340;
        case 0x156344u: goto label_156344;
        case 0x156348u: goto label_156348;
        case 0x15634cu: goto label_15634c;
        case 0x156350u: goto label_156350;
        case 0x156354u: goto label_156354;
        case 0x156358u: goto label_156358;
        case 0x15635cu: goto label_15635c;
        case 0x156360u: goto label_156360;
        case 0x156364u: goto label_156364;
        case 0x156368u: goto label_156368;
        case 0x15636cu: goto label_15636c;
        case 0x156370u: goto label_156370;
        case 0x156374u: goto label_156374;
        case 0x156378u: goto label_156378;
        case 0x15637cu: goto label_15637c;
        case 0x156380u: goto label_156380;
        case 0x156384u: goto label_156384;
        case 0x156388u: goto label_156388;
        case 0x15638cu: goto label_15638c;
        case 0x156390u: goto label_156390;
        case 0x156394u: goto label_156394;
        case 0x156398u: goto label_156398;
        case 0x15639cu: goto label_15639c;
        case 0x1563a0u: goto label_1563a0;
        case 0x1563a4u: goto label_1563a4;
        case 0x1563a8u: goto label_1563a8;
        case 0x1563acu: goto label_1563ac;
        case 0x1563b0u: goto label_1563b0;
        case 0x1563b4u: goto label_1563b4;
        case 0x1563b8u: goto label_1563b8;
        case 0x1563bcu: goto label_1563bc;
        case 0x1563c0u: goto label_1563c0;
        case 0x1563c4u: goto label_1563c4;
        case 0x1563c8u: goto label_1563c8;
        case 0x1563ccu: goto label_1563cc;
        case 0x1563d0u: goto label_1563d0;
        case 0x1563d4u: goto label_1563d4;
        case 0x1563d8u: goto label_1563d8;
        case 0x1563dcu: goto label_1563dc;
        case 0x1563e0u: goto label_1563e0;
        case 0x1563e4u: goto label_1563e4;
        case 0x1563e8u: goto label_1563e8;
        case 0x1563ecu: goto label_1563ec;
        case 0x1563f0u: goto label_1563f0;
        case 0x1563f4u: goto label_1563f4;
        case 0x1563f8u: goto label_1563f8;
        case 0x1563fcu: goto label_1563fc;
        case 0x156400u: goto label_156400;
        case 0x156404u: goto label_156404;
        case 0x156408u: goto label_156408;
        case 0x15640cu: goto label_15640c;
        case 0x156410u: goto label_156410;
        case 0x156414u: goto label_156414;
        case 0x156418u: goto label_156418;
        case 0x15641cu: goto label_15641c;
        case 0x156420u: goto label_156420;
        case 0x156424u: goto label_156424;
        case 0x156428u: goto label_156428;
        case 0x15642cu: goto label_15642c;
        case 0x156430u: goto label_156430;
        case 0x156434u: goto label_156434;
        case 0x156438u: goto label_156438;
        case 0x15643cu: goto label_15643c;
        case 0x156440u: goto label_156440;
        case 0x156444u: goto label_156444;
        case 0x156448u: goto label_156448;
        case 0x15644cu: goto label_15644c;
        case 0x156450u: goto label_156450;
        case 0x156454u: goto label_156454;
        case 0x156458u: goto label_156458;
        case 0x15645cu: goto label_15645c;
        case 0x156460u: goto label_156460;
        case 0x156464u: goto label_156464;
        case 0x156468u: goto label_156468;
        case 0x15646cu: goto label_15646c;
        case 0x156470u: goto label_156470;
        case 0x156474u: goto label_156474;
        case 0x156478u: goto label_156478;
        case 0x15647cu: goto label_15647c;
        case 0x156480u: goto label_156480;
        case 0x156484u: goto label_156484;
        case 0x156488u: goto label_156488;
        case 0x15648cu: goto label_15648c;
        case 0x156490u: goto label_156490;
        case 0x156494u: goto label_156494;
        case 0x156498u: goto label_156498;
        case 0x15649cu: goto label_15649c;
        case 0x1564a0u: goto label_1564a0;
        case 0x1564a4u: goto label_1564a4;
        case 0x1564a8u: goto label_1564a8;
        case 0x1564acu: goto label_1564ac;
        case 0x1564b0u: goto label_1564b0;
        case 0x1564b4u: goto label_1564b4;
        case 0x1564b8u: goto label_1564b8;
        case 0x1564bcu: goto label_1564bc;
        case 0x1564c0u: goto label_1564c0;
        case 0x1564c4u: goto label_1564c4;
        case 0x1564c8u: goto label_1564c8;
        case 0x1564ccu: goto label_1564cc;
        case 0x1564d0u: goto label_1564d0;
        case 0x1564d4u: goto label_1564d4;
        case 0x1564d8u: goto label_1564d8;
        case 0x1564dcu: goto label_1564dc;
        case 0x1564e0u: goto label_1564e0;
        case 0x1564e4u: goto label_1564e4;
        case 0x1564e8u: goto label_1564e8;
        case 0x1564ecu: goto label_1564ec;
        case 0x1564f0u: goto label_1564f0;
        case 0x1564f4u: goto label_1564f4;
        case 0x1564f8u: goto label_1564f8;
        case 0x1564fcu: goto label_1564fc;
        case 0x156500u: goto label_156500;
        case 0x156504u: goto label_156504;
        case 0x156508u: goto label_156508;
        case 0x15650cu: goto label_15650c;
        case 0x156510u: goto label_156510;
        case 0x156514u: goto label_156514;
        case 0x156518u: goto label_156518;
        case 0x15651cu: goto label_15651c;
        case 0x156520u: goto label_156520;
        case 0x156524u: goto label_156524;
        case 0x156528u: goto label_156528;
        case 0x15652cu: goto label_15652c;
        case 0x156530u: goto label_156530;
        case 0x156534u: goto label_156534;
        case 0x156538u: goto label_156538;
        case 0x15653cu: goto label_15653c;
        case 0x156540u: goto label_156540;
        case 0x156544u: goto label_156544;
        case 0x156548u: goto label_156548;
        case 0x15654cu: goto label_15654c;
        case 0x156550u: goto label_156550;
        case 0x156554u: goto label_156554;
        case 0x156558u: goto label_156558;
        case 0x15655cu: goto label_15655c;
        case 0x156560u: goto label_156560;
        case 0x156564u: goto label_156564;
        case 0x156568u: goto label_156568;
        case 0x15656cu: goto label_15656c;
        case 0x156570u: goto label_156570;
        case 0x156574u: goto label_156574;
        case 0x156578u: goto label_156578;
        case 0x15657cu: goto label_15657c;
        case 0x156580u: goto label_156580;
        case 0x156584u: goto label_156584;
        case 0x156588u: goto label_156588;
        case 0x15658cu: goto label_15658c;
        case 0x156590u: goto label_156590;
        case 0x156594u: goto label_156594;
        case 0x156598u: goto label_156598;
        case 0x15659cu: goto label_15659c;
        case 0x1565a0u: goto label_1565a0;
        case 0x1565a4u: goto label_1565a4;
        case 0x1565a8u: goto label_1565a8;
        case 0x1565acu: goto label_1565ac;
        case 0x1565b0u: goto label_1565b0;
        case 0x1565b4u: goto label_1565b4;
        case 0x1565b8u: goto label_1565b8;
        case 0x1565bcu: goto label_1565bc;
        case 0x1565c0u: goto label_1565c0;
        case 0x1565c4u: goto label_1565c4;
        case 0x1565c8u: goto label_1565c8;
        case 0x1565ccu: goto label_1565cc;
        case 0x1565d0u: goto label_1565d0;
        case 0x1565d4u: goto label_1565d4;
        case 0x1565d8u: goto label_1565d8;
        case 0x1565dcu: goto label_1565dc;
        case 0x1565e0u: goto label_1565e0;
        case 0x1565e4u: goto label_1565e4;
        case 0x1565e8u: goto label_1565e8;
        case 0x1565ecu: goto label_1565ec;
        case 0x1565f0u: goto label_1565f0;
        case 0x1565f4u: goto label_1565f4;
        case 0x1565f8u: goto label_1565f8;
        case 0x1565fcu: goto label_1565fc;
        case 0x156600u: goto label_156600;
        case 0x156604u: goto label_156604;
        case 0x156608u: goto label_156608;
        case 0x15660cu: goto label_15660c;
        case 0x156610u: goto label_156610;
        case 0x156614u: goto label_156614;
        case 0x156618u: goto label_156618;
        case 0x15661cu: goto label_15661c;
        case 0x156620u: goto label_156620;
        case 0x156624u: goto label_156624;
        case 0x156628u: goto label_156628;
        case 0x15662cu: goto label_15662c;
        case 0x156630u: goto label_156630;
        case 0x156634u: goto label_156634;
        case 0x156638u: goto label_156638;
        case 0x15663cu: goto label_15663c;
        case 0x156640u: goto label_156640;
        case 0x156644u: goto label_156644;
        case 0x156648u: goto label_156648;
        case 0x15664cu: goto label_15664c;
        case 0x156650u: goto label_156650;
        case 0x156654u: goto label_156654;
        case 0x156658u: goto label_156658;
        case 0x15665cu: goto label_15665c;
        case 0x156660u: goto label_156660;
        case 0x156664u: goto label_156664;
        case 0x156668u: goto label_156668;
        case 0x15666cu: goto label_15666c;
        case 0x156670u: goto label_156670;
        case 0x156674u: goto label_156674;
        case 0x156678u: goto label_156678;
        case 0x15667cu: goto label_15667c;
        case 0x156680u: goto label_156680;
        case 0x156684u: goto label_156684;
        case 0x156688u: goto label_156688;
        case 0x15668cu: goto label_15668c;
        case 0x156690u: goto label_156690;
        case 0x156694u: goto label_156694;
        case 0x156698u: goto label_156698;
        case 0x15669cu: goto label_15669c;
        case 0x1566a0u: goto label_1566a0;
        case 0x1566a4u: goto label_1566a4;
        case 0x1566a8u: goto label_1566a8;
        case 0x1566acu: goto label_1566ac;
        case 0x1566b0u: goto label_1566b0;
        case 0x1566b4u: goto label_1566b4;
        case 0x1566b8u: goto label_1566b8;
        case 0x1566bcu: goto label_1566bc;
        case 0x1566c0u: goto label_1566c0;
        case 0x1566c4u: goto label_1566c4;
        case 0x1566c8u: goto label_1566c8;
        case 0x1566ccu: goto label_1566cc;
        case 0x1566d0u: goto label_1566d0;
        case 0x1566d4u: goto label_1566d4;
        case 0x1566d8u: goto label_1566d8;
        case 0x1566dcu: goto label_1566dc;
        case 0x1566e0u: goto label_1566e0;
        case 0x1566e4u: goto label_1566e4;
        case 0x1566e8u: goto label_1566e8;
        case 0x1566ecu: goto label_1566ec;
        case 0x1566f0u: goto label_1566f0;
        case 0x1566f4u: goto label_1566f4;
        case 0x1566f8u: goto label_1566f8;
        case 0x1566fcu: goto label_1566fc;
        case 0x156700u: goto label_156700;
        case 0x156704u: goto label_156704;
        case 0x156708u: goto label_156708;
        case 0x15670cu: goto label_15670c;
        case 0x156710u: goto label_156710;
        case 0x156714u: goto label_156714;
        case 0x156718u: goto label_156718;
        case 0x15671cu: goto label_15671c;
        case 0x156720u: goto label_156720;
        case 0x156724u: goto label_156724;
        case 0x156728u: goto label_156728;
        case 0x15672cu: goto label_15672c;
        case 0x156730u: goto label_156730;
        case 0x156734u: goto label_156734;
        case 0x156738u: goto label_156738;
        case 0x15673cu: goto label_15673c;
        case 0x156740u: goto label_156740;
        case 0x156744u: goto label_156744;
        case 0x156748u: goto label_156748;
        case 0x15674cu: goto label_15674c;
        case 0x156750u: goto label_156750;
        case 0x156754u: goto label_156754;
        case 0x156758u: goto label_156758;
        case 0x15675cu: goto label_15675c;
        case 0x156760u: goto label_156760;
        case 0x156764u: goto label_156764;
        case 0x156768u: goto label_156768;
        case 0x15676cu: goto label_15676c;
        case 0x156770u: goto label_156770;
        case 0x156774u: goto label_156774;
        case 0x156778u: goto label_156778;
        case 0x15677cu: goto label_15677c;
        case 0x156780u: goto label_156780;
        case 0x156784u: goto label_156784;
        case 0x156788u: goto label_156788;
        case 0x15678cu: goto label_15678c;
        case 0x156790u: goto label_156790;
        case 0x156794u: goto label_156794;
        case 0x156798u: goto label_156798;
        case 0x15679cu: goto label_15679c;
        case 0x1567a0u: goto label_1567a0;
        case 0x1567a4u: goto label_1567a4;
        case 0x1567a8u: goto label_1567a8;
        case 0x1567acu: goto label_1567ac;
        case 0x1567b0u: goto label_1567b0;
        case 0x1567b4u: goto label_1567b4;
        case 0x1567b8u: goto label_1567b8;
        case 0x1567bcu: goto label_1567bc;
        case 0x1567c0u: goto label_1567c0;
        case 0x1567c4u: goto label_1567c4;
        case 0x1567c8u: goto label_1567c8;
        case 0x1567ccu: goto label_1567cc;
        case 0x1567d0u: goto label_1567d0;
        case 0x1567d4u: goto label_1567d4;
        case 0x1567d8u: goto label_1567d8;
        case 0x1567dcu: goto label_1567dc;
        case 0x1567e0u: goto label_1567e0;
        case 0x1567e4u: goto label_1567e4;
        case 0x1567e8u: goto label_1567e8;
        case 0x1567ecu: goto label_1567ec;
        case 0x1567f0u: goto label_1567f0;
        case 0x1567f4u: goto label_1567f4;
        case 0x1567f8u: goto label_1567f8;
        case 0x1567fcu: goto label_1567fc;
        case 0x156800u: goto label_156800;
        case 0x156804u: goto label_156804;
        case 0x156808u: goto label_156808;
        case 0x15680cu: goto label_15680c;
        case 0x156810u: goto label_156810;
        case 0x156814u: goto label_156814;
        case 0x156818u: goto label_156818;
        case 0x15681cu: goto label_15681c;
        case 0x156820u: goto label_156820;
        case 0x156824u: goto label_156824;
        case 0x156828u: goto label_156828;
        case 0x15682cu: goto label_15682c;
        case 0x156830u: goto label_156830;
        case 0x156834u: goto label_156834;
        case 0x156838u: goto label_156838;
        case 0x15683cu: goto label_15683c;
        case 0x156840u: goto label_156840;
        case 0x156844u: goto label_156844;
        case 0x156848u: goto label_156848;
        case 0x15684cu: goto label_15684c;
        case 0x156850u: goto label_156850;
        case 0x156854u: goto label_156854;
        case 0x156858u: goto label_156858;
        case 0x15685cu: goto label_15685c;
        case 0x156860u: goto label_156860;
        case 0x156864u: goto label_156864;
        case 0x156868u: goto label_156868;
        case 0x15686cu: goto label_15686c;
        case 0x156870u: goto label_156870;
        case 0x156874u: goto label_156874;
        case 0x156878u: goto label_156878;
        case 0x15687cu: goto label_15687c;
        case 0x156880u: goto label_156880;
        case 0x156884u: goto label_156884;
        case 0x156888u: goto label_156888;
        case 0x15688cu: goto label_15688c;
        case 0x156890u: goto label_156890;
        case 0x156894u: goto label_156894;
        case 0x156898u: goto label_156898;
        case 0x15689cu: goto label_15689c;
        default: return;
    }

label_1560d0:
    // 0x1560d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1560d4:
    if (ctx->pc == 0x1560D4u) {
        ctx->pc = 0x1560D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560D0u;
        // 0x1560d4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1560D8u;
        goto label_1560d8;
    }
    ctx->pc = 0x1560D0u;
    {
        const bool branch_taken_0x1560d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1560D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560D0u;
        // 0x1560d4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560d0) {
            ctx->pc = 0x1560E0u;
            goto label_1560e0;
        }
    }
    ctx->pc = 0x1560D8u;
label_1560d8:
    // 0x1560d8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1560d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1560dc:
    // 0x1560dc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1560dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1560e0:
    // 0x1560e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1560e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1560e4:
    // 0x1560e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1560e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1560e8:
    // 0x1560e8: 0xc4800284  lwc1        $f0, 0x284($a0)
    ctx->pc = 0x1560e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1560ec:
    // 0x1560ec: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1560ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1560f0:
    // 0x1560f0: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x1560f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1560f4:
    // 0x1560f4: 0x0  nop
    ctx->pc = 0x1560f4u;
    // NOP
label_1560f8:
    // 0x1560f8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1560fc:
    if (ctx->pc == 0x1560FCu) {
        ctx->pc = 0x156100u;
        goto label_156100;
    }
    ctx->pc = 0x1560F8u;
    {
        const bool branch_taken_0x1560f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1560f8) {
            ctx->pc = 0x156104u;
            goto label_156104;
        }
    }
    ctx->pc = 0x156100u;
label_156100:
    // 0x156100: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x156100u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_156104:
    // 0x156104: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x156104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_156108:
    // 0x156108: 0x2161021  addu        $v0, $s0, $s6
    ctx->pc = 0x156108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_15610c:
    // 0x15610c: 0x245e03b0  addiu       $fp, $v0, 0x3B0
    ctx->pc = 0x15610cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 944));
label_156110:
    // 0x156110: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x156110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156114:
    // 0x156114: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x156114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_156118:
    // 0x156118: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x156118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_15611c:
    // 0x15611c: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x15611cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
label_156120:
    // 0x156120: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x156120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_156124:
    // 0x156124: 0xc0559a4  jal         func_156690
label_156128:
    if (ctx->pc == 0x156128u) {
        ctx->pc = 0x156128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156124u;
        // 0x156128: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15612Cu;
        goto label_15612c;
    }
    ctx->pc = 0x156124u;
    SET_GPR_U32(ctx, 31, 0x15612Cu);
    ctx->pc = 0x156128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156124u;
    // 0x156128: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156690u;
    goto label_156690;
    ctx->pc = 0x15612Cu;
label_15612c:
    // 0x15612c: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x15612cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_156130:
    // 0x156130: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x156130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_156134:
    // 0x156134: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x156134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_156138:
    // 0x156138: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x156138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_15613c:
    // 0x15613c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x15613cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_156140:
    // 0x156140: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x156140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_156144:
    // 0x156144: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x156144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_156148:
    // 0x156148: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x156148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15614c:
    // 0x15614c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15614cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_156150:
    // 0x156150: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x156150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_156154:
    // 0x156154: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x156154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_156158:
    // 0x156158: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x156158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_15615c:
    // 0x15615c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_156160:
    // 0x156160: 0x8c460080  lw          $a2, 0x80($v0)
    ctx->pc = 0x156160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_156164:
    // 0x156164: 0xc0558e8  jal         func_1563A0
label_156168:
    if (ctx->pc == 0x156168u) {
        ctx->pc = 0x156168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156164u;
        // 0x156168: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15616Cu;
        goto label_15616c;
    }
    ctx->pc = 0x156164u;
    SET_GPR_U32(ctx, 31, 0x15616Cu);
    ctx->pc = 0x156168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156164u;
    // 0x156168: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1563A0u;
    goto label_1563a0;
    ctx->pc = 0x15616Cu;
label_15616c:
    // 0x15616c: 0x10000004  b           . + 4 + (0x4 << 2)
label_156170:
    if (ctx->pc == 0x156170u) {
        ctx->pc = 0x156174u;
        goto label_156174;
    }
    ctx->pc = 0x15616Cu;
    {
        const bool branch_taken_0x15616c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15616c) {
            ctx->pc = 0x156180u;
            goto label_156180;
        }
    }
    ctx->pc = 0x156174u;
label_156174:
    // 0x156174: 0x0  nop
    ctx->pc = 0x156174u;
    // NOP
label_156178:
    // 0x156178: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x156178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_15617c:
    // 0x15617c: 0xac601250  sw          $zero, 0x1250($v1)
    ctx->pc = 0x15617cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4688), GPR_U32(ctx, 0));
label_156180:
    // 0x156180: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x156180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_156184:
    // 0x156184: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x156184u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_156188:
    // 0x156188: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x156188u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_15618c:
    // 0x15618c: 0x1460ff7a  bnez        $v1, . + 4 + (-0x86 << 2)
label_156190:
    if (ctx->pc == 0x156190u) {
        ctx->pc = 0x156190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15618Cu;
        // 0x156190: 0x26d60eb0  addiu       $s6, $s6, 0xEB0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156194u;
        goto label_156194;
    }
    ctx->pc = 0x15618Cu;
    {
        const bool branch_taken_0x15618c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15618Cu;
        // 0x156190: 0x26d60eb0  addiu       $s6, $s6, 0xEB0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15618c) {
            ctx->pc = 0x155F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x155f78; return; }
        }
    }
    ctx->pc = 0x156194u;
label_156194:
    // 0x156194: 0x0  nop
    ctx->pc = 0x156194u;
    // NOP
label_156198:
    // 0x156198: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x156198u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_15619c:
    // 0x15619c: 0x2ae3001c  slti        $v1, $s7, 0x1C
    ctx->pc = 0x15619cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)28) ? 1 : 0);
label_1561a0:
    // 0x1561a0: 0x1460ff6d  bnez        $v1, . + 4 + (-0x93 << 2)
label_1561a4:
    if (ctx->pc == 0x1561A4u) {
        ctx->pc = 0x1561A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561A0u;
        // 0x1561a4: 0x26102150  addiu       $s0, $s0, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1561A8u;
        goto label_1561a8;
    }
    ctx->pc = 0x1561A0u;
    {
        const bool branch_taken_0x1561a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1561A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561A0u;
        // 0x1561a4: 0x26102150  addiu       $s0, $s0, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561a0) {
            ctx->pc = 0x155F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x155f58; return; }
        }
    }
    ctx->pc = 0x1561A8u;
label_1561a8:
    // 0x1561a8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1561a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1561ac:
    // 0x1561ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1561acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1561b0:
    // 0x1561b0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1561b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1561b4:
    // 0x1561b4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1561b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1561b8:
    // 0x1561b8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1561b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1561bc:
    // 0x1561bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1561bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1561c0:
    // 0x1561c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1561c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1561c4:
    // 0x1561c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1561c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1561c8:
    // 0x1561c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1561c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1561cc:
    // 0x1561cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1561ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1561d0:
    // 0x1561d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1561d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1561d4:
    // 0x1561d4: 0x3e00008  jr          $ra
label_1561d8:
    if (ctx->pc == 0x1561D8u) {
        ctx->pc = 0x1561D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561D4u;
        // 0x1561d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1561DCu;
        goto label_1561dc;
    }
    ctx->pc = 0x1561D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1561D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561D4u;
        // 0x1561d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1561D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1561DCu;
label_1561dc:
    // 0x1561dc: 0x0  nop
    ctx->pc = 0x1561dcu;
    // NOP
label_1561e0:
    // 0x1561e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1561e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1561e4:
    // 0x1561e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1561e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1561e8:
    // 0x1561e8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1561e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1561ec:
    // 0x1561ec: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1561ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1561f0:
    // 0x1561f0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1561f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1561f4:
    // 0x1561f4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1561f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1561f8:
    // 0x1561f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1561f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1561fc:
    // 0x1561fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1561fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_156200:
    // 0x156200: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x156200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_156204:
    // 0x156204: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x156204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_156208:
    // 0x156208: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x156208u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_15620c:
    // 0x15620c: 0x8ca30ea0  lw          $v1, 0xEA0($a1)
    ctx->pc = 0x15620cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3744)));
label_156210:
    // 0x156210: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
label_156214:
    if (ctx->pc == 0x156214u) {
        ctx->pc = 0x156214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156210u;
        // 0x156214: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156218u;
        goto label_156218;
    }
    ctx->pc = 0x156210u;
    {
        const bool branch_taken_0x156210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x156214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156210u;
        // 0x156214: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156210) {
            ctx->pc = 0x156370u;
            goto label_156370;
        }
    }
    ctx->pc = 0x156218u;
label_156218:
    // 0x156218: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x156218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_15621c:
    // 0x15621c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15621cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156220:
    // 0x156220: 0x34423ffc  ori         $v0, $v0, 0x3FFC
    ctx->pc = 0x156220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_156224:
    // 0x156224: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x156224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_156228:
    // 0x156228: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x156228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_15622c:
    // 0x15622c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15622cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_156230:
    // 0x156230: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x156230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_156234:
    // 0x156234: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x156234u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_156238:
    // 0x156238: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x156238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_15623c:
    // 0x15623c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_156240:
    // 0x156240: 0x24560120  addiu       $s6, $v0, 0x120
    ctx->pc = 0x156240u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_156244:
    // 0x156244: 0x26d00060  addiu       $s0, $s6, 0x60
    ctx->pc = 0x156244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
label_156248:
    // 0x156248: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x156248u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15624c:
    // 0x15624c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x15624cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_156250:
    // 0x156250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_156254:
    // 0x156254: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x156254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156258:
    // 0x156258: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x156258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15625c:
    // 0x15625c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15625cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156260:
    // 0x156260: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x156260u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_156264:
    // 0x156264: 0x0  nop
    ctx->pc = 0x156264u;
    // NOP
label_156268:
    // 0x156268: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15626c:
    // 0x15626c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15626cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156270:
    // 0x156270: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x156270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156274:
    // 0x156274: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x156274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_156278:
    // 0x156278: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x156278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_15627c:
    // 0x15627c: 0x0  nop
    ctx->pc = 0x15627cu;
    // NOP
label_156280:
    // 0x156280: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x156280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_156284:
    // 0x156284: 0xc44300c0  lwc1        $f3, 0xC0($v0)
    ctx->pc = 0x156284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_156288:
    // 0x156288: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x156288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_15628c:
    // 0x15628c: 0xc44200c4  lwc1        $f2, 0xC4($v0)
    ctx->pc = 0x15628cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_156290:
    // 0x156290: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x156290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_156294:
    // 0x156294: 0xc44100c8  lwc1        $f1, 0xC8($v0)
    ctx->pc = 0x156294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_156298:
    // 0x156298: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x156298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_15629c:
    // 0x15629c: 0xc44000cc  lwc1        $f0, 0xCC($v0)
    ctx->pc = 0x15629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1562a0:
    // 0x1562a0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1562a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1562a4:
    // 0x1562a4: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x1562a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_1562a8:
    // 0x1562a8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x1562a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_1562ac:
    // 0x1562ac: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x1562acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_1562b0:
    // 0x1562b0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1562b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_1562b4:
    // 0x1562b4: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x1562b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_1562b8:
    // 0x1562b8: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1562b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_1562bc:
    // 0x1562bc: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x1562bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[2]));
label_1562c0:
    // 0x1562c0: 0x4614085c  madd.s      $f1, $f1, $f20
    ctx->pc = 0x1562c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[20]));
label_1562c4:
    // 0x1562c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1562c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1562c8:
    // 0x1562c8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1562cc:
    if (ctx->pc == 0x1562CCu) {
        ctx->pc = 0x1562CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1562C8u;
        // 0x1562cc: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1562D0u;
        goto label_1562d0;
    }
    ctx->pc = 0x1562C8u;
    {
        const bool branch_taken_0x1562c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1562CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1562C8u;
        // 0x1562cc: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1562c8) {
            ctx->pc = 0x15627Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15627c;
        }
    }
    ctx->pc = 0x1562D0u;
label_1562d0:
    // 0x1562d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1562d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1562d4:
    // 0x1562d4: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x1562d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_1562d8:
    // 0x1562d8: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1562d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_1562dc:
    // 0x1562dc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1562dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1562e0:
    // 0x1562e0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1562e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1562e4:
    // 0x1562e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1562e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1562e8:
    // 0x1562e8: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1562e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_1562ec:
    // 0x1562ec: 0xc06703a  jal         func_19C0E8
label_1562f0:
    if (ctx->pc == 0x1562F0u) {
        ctx->pc = 0x1562F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1562ECu;
        // 0x1562f0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1562F4u;
        goto label_1562f4;
    }
    ctx->pc = 0x1562ECu;
    SET_GPR_U32(ctx, 31, 0x1562F4u);
    ctx->pc = 0x1562F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1562ECu;
    // 0x1562f0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C0E8u;
    { ctx->pc = 0x19c0e8; return; }
    ctx->pc = 0x1562F4u;
label_1562f4:
    // 0x1562f4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1562f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1562f8:
    // 0x1562f8: 0x34019c41  ori         $at, $zero, 0x9C41
    ctx->pc = 0x1562f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40001);
label_1562fc:
    // 0x1562fc: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1562fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_156300:
    // 0x156300: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_156304:
    if (ctx->pc == 0x156304u) {
        ctx->pc = 0x156308u;
        goto label_156308;
    }
    ctx->pc = 0x156300u;
    {
        const bool branch_taken_0x156300 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x156300) {
            ctx->pc = 0x156314u;
            goto label_156314;
        }
    }
    ctx->pc = 0x156308u;
label_156308:
    // 0x156308: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x156308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_15630c:
    // 0x15630c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15630cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_156310:
    // 0x156310: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x156310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_156314:
    // 0x156314: 0x0  nop
    ctx->pc = 0x156314u;
    // NOP
label_156318:
    // 0x156318: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x156318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15631c:
    // 0x15631c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x15631cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_156320:
    // 0x156320: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x156320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_156324:
    // 0x156324: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_156328:
    if (ctx->pc == 0x156328u) {
        ctx->pc = 0x156328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156324u;
        // 0x156328: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15632Cu;
        goto label_15632c;
    }
    ctx->pc = 0x156324u;
    {
        const bool branch_taken_0x156324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156324u;
        // 0x156328: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156324) {
            ctx->pc = 0x156264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156264;
        }
    }
    ctx->pc = 0x15632Cu;
label_15632c:
    // 0x15632c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15632cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_156330:
    // 0x156330: 0x2a220011  slti        $v0, $s1, 0x11
    ctx->pc = 0x156330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
label_156334:
    // 0x156334: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_156338:
    if (ctx->pc == 0x156338u) {
        ctx->pc = 0x156338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156334u;
        // 0x156338: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15633Cu;
        goto label_15633c;
    }
    ctx->pc = 0x156334u;
    {
        const bool branch_taken_0x156334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156334u;
        // 0x156338: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156334) {
            ctx->pc = 0x156248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156248;
        }
    }
    ctx->pc = 0x15633Cu;
label_15633c:
    // 0x15633c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x15633cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_156340:
    // 0x156340: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x156340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_156344:
    // 0x156344: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x156344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_156348:
    // 0x156348: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x156348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15634c:
    // 0x15634c: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x15634cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_156350:
    // 0x156350: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x156350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156354:
    // 0x156354: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x156354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156358:
    // 0x156358: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x156358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15635c:
    // 0x15635c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x15635cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_156360:
    // 0x156360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_156364:
    // 0x156364: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x156364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
label_156368:
    // 0x156368: 0xc066c72  jal         func_19B1C8
label_15636c:
    if (ctx->pc == 0x15636Cu) {
        ctx->pc = 0x15636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156368u;
        // 0x15636c: 0x4213e  dsrl32      $a0, $a0, 4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156370u;
        goto label_156370;
    }
    ctx->pc = 0x156368u;
    SET_GPR_U32(ctx, 31, 0x156370u);
    ctx->pc = 0x15636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156368u;
    // 0x15636c: 0x4213e  dsrl32      $a0, $a0, 4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x156370u;
label_156370:
    // 0x156370: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x156370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_156374:
    // 0x156374: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x156374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_156378:
    // 0x156378: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x156378u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15637c:
    // 0x15637c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x15637cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_156380:
    // 0x156380: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x156380u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_156384:
    // 0x156384: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x156384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_156388:
    // 0x156388: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x156388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15638c:
    // 0x15638c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15638cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_156390:
    // 0x156390: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x156390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_156394:
    // 0x156394: 0x3e00008  jr          $ra
label_156398:
    if (ctx->pc == 0x156398u) {
        ctx->pc = 0x156398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156394u;
        // 0x156398: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15639Cu;
        goto label_15639c;
    }
    ctx->pc = 0x156394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156394u;
        // 0x156398: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15639Cu;
label_15639c:
    // 0x15639c: 0x0  nop
    ctx->pc = 0x15639cu;
    // NOP
label_1563a0:
    // 0x1563a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1563a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1563a4:
    // 0x1563a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1563a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1563a8:
    // 0x1563a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1563a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1563ac:
    // 0x1563ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1563acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1563b0:
    // 0x1563b0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1563b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1563b4:
    // 0x1563b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1563b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1563b8:
    // 0x1563b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1563b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1563bc:
    // 0x1563bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1563bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1563c0:
    // 0x1563c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1563c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1563c4:
    // 0x1563c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1563c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1563c8:
    // 0x1563c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1563c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1563cc:
    // 0x1563cc: 0xc05593c  jal         func_1564F0
label_1563d0:
    if (ctx->pc == 0x1563D0u) {
        ctx->pc = 0x1563D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563CCu;
        // 0x1563d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1563D4u;
        goto label_1563d4;
    }
    ctx->pc = 0x1563CCu;
    SET_GPR_U32(ctx, 31, 0x1563D4u);
    ctx->pc = 0x1563D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1563CCu;
    // 0x1563d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1564F0u;
    goto label_1564f0;
    ctx->pc = 0x1563D4u;
label_1563d4:
    // 0x1563d4: 0x8ec20ea0  lw          $v0, 0xEA0($s6)
    ctx->pc = 0x1563d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3744)));
label_1563d8:
    // 0x1563d8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1563dc:
    if (ctx->pc == 0x1563DCu) {
        ctx->pc = 0x1563DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563D8u;
        // 0x1563dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1563E0u;
        goto label_1563e0;
    }
    ctx->pc = 0x1563D8u;
    {
        const bool branch_taken_0x1563d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1563DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563D8u;
        // 0x1563dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563d8) {
            ctx->pc = 0x15644Cu;
            goto label_15644c;
        }
    }
    ctx->pc = 0x1563E0u;
label_1563e0:
    // 0x1563e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1563e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1563e4:
    // 0x1563e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1563e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1563e8:
    // 0x1563e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1563e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1563ec:
    // 0x1563ec: 0x2c71821  addu        $v1, $s6, $a3
    ctx->pc = 0x1563ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
label_1563f0:
    // 0x1563f0: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x1563f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1563f4:
    // 0x1563f4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1563f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1563f8:
    // 0x1563f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1563f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1563fc:
    // 0x1563fc: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x1563fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_156400:
    // 0x156400: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x156400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_156404:
    // 0x156404: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x156404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_156408:
    // 0x156408: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x156408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15640c:
    // 0x15640c: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x15640cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_156410:
    // 0x156410: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x156410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_156414:
    // 0x156414: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x156414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_156418:
    // 0x156418: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x156418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15641c:
    // 0x15641c: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x15641cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
label_156420:
    // 0x156420: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x156420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_156424:
    // 0x156424: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x156424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
label_156428:
    // 0x156428: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x156428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15642c:
    // 0x15642c: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x15642cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
label_156430:
    // 0x156430: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x156430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_156434:
    // 0x156434: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_156438:
    if (ctx->pc == 0x156438u) {
        ctx->pc = 0x156438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156434u;
        // 0x156438: 0xe500001c  swc1        $f0, 0x1C($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15643Cu;
        goto label_15643c;
    }
    ctx->pc = 0x156434u;
    {
        const bool branch_taken_0x156434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156434u;
        // 0x156438: 0xe500001c  swc1        $f0, 0x1C($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156434) {
            ctx->pc = 0x1563F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1563f0;
        }
    }
    ctx->pc = 0x15643Cu;
label_15643c:
    // 0x15643c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15643cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_156440:
    // 0x156440: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x156440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_156444:
    // 0x156444: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_156448:
    if (ctx->pc == 0x156448u) {
        ctx->pc = 0x156448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156444u;
        // 0x156448: 0x24e70060  addiu       $a3, $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15644Cu;
        goto label_15644c;
    }
    ctx->pc = 0x156444u;
    {
        const bool branch_taken_0x156444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156444u;
        // 0x156448: 0x24e70060  addiu       $a3, $a3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156444) {
            ctx->pc = 0x1563E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1563e4;
        }
    }
    ctx->pc = 0x15644Cu;
label_15644c:
    // 0x15644c: 0x0  nop
    ctx->pc = 0x15644cu;
    // NOP
label_156450:
    // 0x156450: 0x8ec20ea0  lw          $v0, 0xEA0($s6)
    ctx->pc = 0x156450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3744)));
label_156454:
    // 0x156454: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x156454u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_156458:
    // 0x156458: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15645c:
    if (ctx->pc == 0x15645Cu) {
        ctx->pc = 0x15645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156458u;
        // 0x15645c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156460u;
        goto label_156460;
    }
    ctx->pc = 0x156458u;
    {
        const bool branch_taken_0x156458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156458u;
        // 0x15645c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156458) {
            ctx->pc = 0x156468u;
            goto label_156468;
        }
    }
    ctx->pc = 0x156460u;
label_156460:
    // 0x156460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x156460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_156464:
    // 0x156464: 0xaec20ea0  sw          $v0, 0xEA0($s6)
    ctx->pc = 0x156464u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 3744), GPR_U32(ctx, 2));
label_156468:
    // 0x156468: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x156468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15646c:
    // 0x15646c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15646cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156470:
    // 0x156470: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x156470u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156474:
    // 0x156474: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x156474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156478:
    // 0x156478: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x156478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15647c:
    // 0x15647c: 0x0  nop
    ctx->pc = 0x15647cu;
    // NOP
label_156480:
    // 0x156480: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x156480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_156484:
    // 0x156484: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x156484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_156488:
    // 0x156488: 0x2d21021  addu        $v0, $s6, $s2
    ctx->pc = 0x156488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_15648c:
    // 0x15648c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x15648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_156490:
    // 0x156490: 0xc055c54  jal         func_157150
label_156494:
    if (ctx->pc == 0x156494u) {
        ctx->pc = 0x156494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156490u;
        // 0x156494: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156498u;
        goto label_156498;
    }
    ctx->pc = 0x156490u;
    SET_GPR_U32(ctx, 31, 0x156498u);
    ctx->pc = 0x156494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156490u;
    // 0x156494: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157150u;
    { ctx->pc = 0x157150; return; }
    ctx->pc = 0x156498u;
label_156498:
    // 0x156498: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x156498u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_15649c:
    // 0x15649c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15649cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1564a0:
    // 0x1564a0: 0x2aa30003  slti        $v1, $s5, 0x3
    ctx->pc = 0x1564a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
label_1564a4:
    // 0x1564a4: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_1564a8:
    if (ctx->pc == 0x1564A8u) {
        ctx->pc = 0x1564A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564A4u;
        // 0x1564a8: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1564ACu;
        goto label_1564ac;
    }
    ctx->pc = 0x1564A4u;
    {
        const bool branch_taken_0x1564a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1564A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564A4u;
        // 0x1564a8: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564a4) {
            ctx->pc = 0x15647Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15647c;
        }
    }
    ctx->pc = 0x1564ACu;
label_1564ac:
    // 0x1564ac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1564acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1564b0:
    // 0x1564b0: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1564b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1564b4:
    // 0x1564b4: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x1564b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_1564b8:
    // 0x1564b8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_1564bc:
    if (ctx->pc == 0x1564BCu) {
        ctx->pc = 0x1564BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564B8u;
        // 0x1564bc: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1564C0u;
        goto label_1564c0;
    }
    ctx->pc = 0x1564B8u;
    {
        const bool branch_taken_0x1564b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1564BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564B8u;
        // 0x1564bc: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564b8) {
            ctx->pc = 0x156470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156470;
        }
    }
    ctx->pc = 0x1564C0u;
label_1564c0:
    // 0x1564c0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1564c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1564c4:
    // 0x1564c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1564c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1564c8:
    // 0x1564c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1564c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1564cc:
    // 0x1564cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1564ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1564d0:
    // 0x1564d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1564d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1564d4:
    // 0x1564d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1564d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1564d8:
    // 0x1564d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1564d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1564dc:
    // 0x1564dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1564dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1564e0:
    // 0x1564e0: 0x3e00008  jr          $ra
label_1564e4:
    if (ctx->pc == 0x1564E4u) {
        ctx->pc = 0x1564E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564E0u;
        // 0x1564e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1564E8u;
        goto label_1564e8;
    }
    ctx->pc = 0x1564E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1564E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1564E0u;
        // 0x1564e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1564E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1564E8u;
label_1564e8:
    // 0x1564e8: 0x0  nop
    ctx->pc = 0x1564e8u;
    // NOP
label_1564ec:
    // 0x1564ec: 0x0  nop
    ctx->pc = 0x1564ecu;
    // NOP
label_1564f0:
    // 0x1564f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1564f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1564f4:
    // 0x1564f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1564f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1564f8:
    // 0x1564f8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1564f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1564fc:
    // 0x1564fc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1564fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_156500:
    // 0x156500: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x156500u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_156504:
    // 0x156504: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x156504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_156508:
    // 0x156508: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x156508u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15650c:
    // 0x15650c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x15650cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_156510:
    // 0x156510: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x156510u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_156514:
    // 0x156514: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x156514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_156518:
    // 0x156518: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x156518u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15651c:
    // 0x15651c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15651cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_156520:
    // 0x156520: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x156520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156524:
    // 0x156524: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x156524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_156528:
    // 0x156528: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x156528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_15652c:
    // 0x15652c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15652cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_156530:
    // 0x156530: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x156530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156534:
    // 0x156534: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x156534u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_156538:
    // 0x156538: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x156538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15653c:
    // 0x15653c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15653cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156540:
    // 0x156540: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x156540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_156544:
    // 0x156544: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x156544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_156548:
    // 0x156548: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x156548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_15654c:
    // 0x15654c: 0xc08e96a  jal         func_23A5A8
label_156550:
    if (ctx->pc == 0x156550u) {
        ctx->pc = 0x156550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15654Cu;
        // 0x156550: 0x24a40004  addiu       $a0, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156554u;
        goto label_156554;
    }
    ctx->pc = 0x15654Cu;
    SET_GPR_U32(ctx, 31, 0x156554u);
    ctx->pc = 0x156550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15654Cu;
    // 0x156550: 0x24a40004  addiu       $a0, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    { ctx->pc = 0x23a5a8; return; }
    ctx->pc = 0x156554u;
label_156554:
    // 0x156554: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x156554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_156558:
    // 0x156558: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x156558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_15655c:
    // 0x15655c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_156560:
    if (ctx->pc == 0x156560u) {
        ctx->pc = 0x156560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15655Cu;
        // 0x156560: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156564u;
        goto label_156564;
    }
    ctx->pc = 0x15655Cu;
    {
        const bool branch_taken_0x15655c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15655Cu;
        // 0x156560: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15655c) {
            ctx->pc = 0x156540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156540;
        }
    }
    ctx->pc = 0x156564u;
label_156564:
    // 0x156564: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x156564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_156568:
    // 0x156568: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x156568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_15656c:
    // 0x15656c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_156570:
    if (ctx->pc == 0x156570u) {
        ctx->pc = 0x156570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15656Cu;
        // 0x156570: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156574u;
        goto label_156574;
    }
    ctx->pc = 0x15656Cu;
    {
        const bool branch_taken_0x15656c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15656Cu;
        // 0x156570: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15656c) {
            ctx->pc = 0x156538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156538;
        }
    }
    ctx->pc = 0x156574u;
label_156574:
    // 0x156574: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x156574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_156578:
    // 0x156578: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x156578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_15657c:
    // 0x15657c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15657cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_156580:
    // 0x156580: 0x27b000a4  addiu       $s0, $sp, 0xA4
    ctx->pc = 0x156580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_156584:
    // 0x156584: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x156584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_156588:
    // 0x156588: 0x27b100a8  addiu       $s1, $sp, 0xA8
    ctx->pc = 0x156588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_15658c:
    // 0x15658c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15658cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_156590:
    // 0x156590: 0x27b300b4  addiu       $s3, $sp, 0xB4
    ctx->pc = 0x156590u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_156594:
    // 0x156594: 0x27b200b8  addiu       $s2, $sp, 0xB8
    ctx->pc = 0x156594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_156598:
    // 0x156598: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x156598u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_15659c:
    // 0x15659c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15659cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1565a0:
    // 0x1565a0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1565a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1565a4:
    // 0x1565a4: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x1565a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1565a8:
    // 0x1565a8: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x1565a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1565ac:
    // 0x1565ac: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1565acu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_1565b0:
    // 0x1565b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1565b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1565b4:
    // 0x1565b4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1565b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1565b8:
    // 0x1565b8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1565b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_1565bc:
    // 0x1565bc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1565bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1565c0:
    // 0x1565c0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1565c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1565c4:
    // 0x1565c4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1565c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1565c8:
    // 0x1565c8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1565c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1565cc:
    // 0x1565cc: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
label_1565d0:
    if (ctx->pc == 0x1565D0u) {
        ctx->pc = 0x1565D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565CCu;
        // 0x1565d0: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1565D4u;
        goto label_1565d4;
    }
    ctx->pc = 0x1565CCu;
    {
        const bool branch_taken_0x1565cc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1565D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565CCu;
        // 0x1565d0: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565cc) {
            ctx->pc = 0x1565F4u;
            goto label_1565f4;
        }
    }
    ctx->pc = 0x1565D4u;
label_1565d4:
    // 0x1565d4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1565d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1565d8:
    // 0x1565d8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1565d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1565dc:
    // 0x1565dc: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x1565dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1565e0:
    // 0x1565e0: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1565e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1565e4:
    // 0x1565e4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1565e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1565e8:
    // 0x1565e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1565e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1565ec:
    // 0x1565ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_1565f0:
    if (ctx->pc == 0x1565F0u) {
        ctx->pc = 0x1565F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565ECu;
        // 0x1565f0: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1565F4u;
        goto label_1565f4;
    }
    ctx->pc = 0x1565ECu;
    {
        const bool branch_taken_0x1565ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1565F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1565ECu;
        // 0x1565f0: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565ec) {
            ctx->pc = 0x156610u;
            goto label_156610;
        }
    }
    ctx->pc = 0x1565F4u;
label_1565f4:
    // 0x1565f4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1565f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1565f8:
    // 0x1565f8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1565f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1565fc:
    // 0x1565fc: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x1565fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_156600:
    // 0x156600: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x156600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_156604:
    // 0x156604: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x156604u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_156608:
    // 0x156608: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_15660c:
    // 0x15660c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x15660cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_156610:
    // 0x156610: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x156610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_156614:
    // 0x156614: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x156614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_156618:
    // 0x156618: 0xc066d7a  jal         func_19B5E8
label_15661c:
    if (ctx->pc == 0x15661Cu) {
        ctx->pc = 0x15661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156618u;
        // 0x15661c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156620u;
        goto label_156620;
    }
    ctx->pc = 0x156618u;
    SET_GPR_U32(ctx, 31, 0x156620u);
    ctx->pc = 0x15661Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156618u;
    // 0x15661c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x156620u;
label_156620:
    // 0x156620: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x156620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_156624:
    // 0x156624: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x156624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_156628:
    // 0x156628: 0xc066d7a  jal         func_19B5E8
label_15662c:
    if (ctx->pc == 0x15662Cu) {
        ctx->pc = 0x15662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156628u;
        // 0x15662c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156630u;
        goto label_156630;
    }
    ctx->pc = 0x156628u;
    SET_GPR_U32(ctx, 31, 0x156630u);
    ctx->pc = 0x15662Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156628u;
    // 0x15662c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x156630u;
label_156630:
    // 0x156630: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x156630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_156634:
    // 0x156634: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x156634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_156638:
    // 0x156638: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x156638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15663c:
    // 0x15663c: 0xe6800060  swc1        $f0, 0x60($s4)
    ctx->pc = 0x15663cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 96), bits); }
label_156640:
    // 0x156640: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x156640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_156644:
    // 0x156644: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x156644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_156648:
    // 0x156648: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x156648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15664c:
    // 0x15664c: 0xe6800080  swc1        $f0, 0x80($s4)
    ctx->pc = 0x15664cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 128), bits); }
label_156650:
    // 0x156650: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x156650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_156654:
    // 0x156654: 0xe6800040  swc1        $f0, 0x40($s4)
    ctx->pc = 0x156654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 64), bits); }
label_156658:
    // 0x156658: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x156658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15665c:
    // 0x15665c: 0xe68000a0  swc1        $f0, 0xA0($s4)
    ctx->pc = 0x15665cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 160), bits); }
label_156660:
    // 0x156660: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x156660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_156664:
    // 0x156664: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x156664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_156668:
    // 0x156668: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x156668u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15666c:
    // 0x15666c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x15666cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_156670:
    // 0x156670: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x156670u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_156674:
    // 0x156674: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x156674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_156678:
    // 0x156678: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x156678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15667c:
    // 0x15667c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15667cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_156680:
    // 0x156680: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x156680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_156684:
    // 0x156684: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x156684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_156688:
    // 0x156688: 0x3e00008  jr          $ra
label_15668c:
    if (ctx->pc == 0x15668Cu) {
        ctx->pc = 0x15668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156688u;
        // 0x15668c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156690u;
        goto label_156690;
    }
    ctx->pc = 0x156688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156688u;
        // 0x15668c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156690u;
label_156690:
    // 0x156690: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x156690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_156694:
    // 0x156694: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x156694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_156698:
    // 0x156698: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x156698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_15669c:
    // 0x15669c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x15669cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1566a0:
    // 0x1566a0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1566a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1566a4:
    // 0x1566a4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1566a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1566a8:
    // 0x1566a8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1566a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1566ac:
    // 0x1566ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1566acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1566b0:
    // 0x1566b0: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
label_1566b4:
    if (ctx->pc == 0x1566B4u) {
        ctx->pc = 0x1566B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566B0u;
        // 0x1566b4: 0x24670120  addiu       $a3, $v1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566B8u;
        goto label_1566b8;
    }
    ctx->pc = 0x1566B0u;
    {
        const bool branch_taken_0x1566b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1566B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566B0u;
        // 0x1566b4: 0x24670120  addiu       $a3, $v1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566b0) {
            ctx->pc = 0x156740u;
            goto label_156740;
        }
    }
    ctx->pc = 0x1566B8u;
label_1566b8:
    // 0x1566b8: 0xdce40050  ld          $a0, 0x50($a3)
    ctx->pc = 0x1566b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 80)));
label_1566bc:
    // 0x1566bc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1566bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_1566c0:
    // 0x1566c0: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1566c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_1566c4:
    // 0x1566c4: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1566c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1566c8:
    // 0x1566c8: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
label_1566cc:
    if (ctx->pc == 0x1566CCu) {
        ctx->pc = 0x1566CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566C8u;
        // 0x1566cc: 0x851825  or          $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1566D0u;
        goto label_1566d0;
    }
    ctx->pc = 0x1566C8u;
    {
        const bool branch_taken_0x1566c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1566CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1566C8u;
        // 0x1566cc: 0x851825  or          $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1566c8) {
            ctx->pc = 0x1567E8u;
            goto label_1567e8;
        }
    }
    ctx->pc = 0x1566D0u;
label_1566d0:
    // 0x1566d0: 0x24e80060  addiu       $t0, $a3, 0x60
    ctx->pc = 0x1566d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
label_1566d4:
    // 0x1566d4: 0xfce30050  sd          $v1, 0x50($a3)
    ctx->pc = 0x1566d4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 80), GPR_U64(ctx, 3));
label_1566d8:
    // 0x1566d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1566d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1566dc:
    // 0x1566dc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1566dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1566e0:
    // 0x1566e0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1566e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1566e4:
    // 0x1566e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1566e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1566e8:
    // 0x1566e8: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x1566e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1566ec:
    // 0x1566ec: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1566ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1566f0:
    // 0x1566f0: 0x32102  srl         $a0, $v1, 4
    ctx->pc = 0x1566f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_1566f4:
    // 0x1566f4: 0x0  nop
    ctx->pc = 0x1566f4u;
    // NOP
label_1566f8:
    // 0x1566f8: 0xad060010  sw          $a2, 0x10($t0)
    ctx->pc = 0x1566f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
label_1566fc:
    // 0x1566fc: 0xad060014  sw          $a2, 0x14($t0)
    ctx->pc = 0x1566fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 6));
label_156700:
    // 0x156700: 0xad060018  sw          $a2, 0x18($t0)
    ctx->pc = 0x156700u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 6));
label_156704:
    // 0x156704: 0x15200004  bnez        $t1, . + 4 + (0x4 << 2)
label_156708:
    if (ctx->pc == 0x156708u) {
        ctx->pc = 0x156708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156704u;
        // 0x156708: 0xad04001c  sw          $a0, 0x1C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15670Cu;
        goto label_15670c;
    }
    ctx->pc = 0x156704u;
    {
        const bool branch_taken_0x156704 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x156708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156704u;
        // 0x156708: 0xad04001c  sw          $a0, 0x1C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156704) {
            ctx->pc = 0x156718u;
            goto label_156718;
        }
    }
    ctx->pc = 0x15670Cu;
label_15670c:
    // 0x15670c: 0x8d03001c  lw          $v1, 0x1C($t0)
    ctx->pc = 0x15670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_156710:
    // 0x156710: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x156710u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_156714:
    // 0x156714: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x156714u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
label_156718:
    // 0x156718: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x156718u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_15671c:
    // 0x15671c: 0x2d230002  sltiu       $v1, $t1, 0x2
    ctx->pc = 0x15671cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_156720:
    // 0x156720: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_156724:
    if (ctx->pc == 0x156724u) {
        ctx->pc = 0x156724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156720u;
        // 0x156724: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156728u;
        goto label_156728;
    }
    ctx->pc = 0x156720u;
    {
        const bool branch_taken_0x156720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156720u;
        // 0x156724: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156720) {
            ctx->pc = 0x1566F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1566f4;
        }
    }
    ctx->pc = 0x156728u;
label_156728:
    // 0x156728: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x156728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_15672c:
    // 0x15672c: 0x2ce30011  sltiu       $v1, $a3, 0x11
    ctx->pc = 0x15672cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_156730:
    // 0x156730: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_156734:
    if (ctx->pc == 0x156734u) {
        ctx->pc = 0x156734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156730u;
        // 0x156734: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156738u;
        goto label_156738;
    }
    ctx->pc = 0x156730u;
    {
        const bool branch_taken_0x156730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156730u;
        // 0x156734: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156730) {
            ctx->pc = 0x1566E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1566e8;
        }
    }
    ctx->pc = 0x156738u;
label_156738:
    // 0x156738: 0x1000002b  b           . + 4 + (0x2B << 2)
label_15673c:
    if (ctx->pc == 0x15673Cu) {
        ctx->pc = 0x156740u;
        goto label_156740;
    }
    ctx->pc = 0x156738u;
    {
        const bool branch_taken_0x156738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156738) {
            ctx->pc = 0x1567E8u;
            goto label_1567e8;
        }
    }
    ctx->pc = 0x156740u;
label_156740:
    // 0x156740: 0xdce60050  ld          $a2, 0x50($a3)
    ctx->pc = 0x156740u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 80)));
label_156744:
    // 0x156744: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x156744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_156748:
    // 0x156748: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x156748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_15674c:
    // 0x15674c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x15674cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_156750:
    // 0x156750: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_156754:
    if (ctx->pc == 0x156754u) {
        ctx->pc = 0x156754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156750u;
        // 0x156754: 0x3c05fff7  lui         $a1, 0xFFF7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65527 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156758u;
        goto label_156758;
    }
    ctx->pc = 0x156750u;
    {
        const bool branch_taken_0x156750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x156754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156750u;
        // 0x156754: 0x3c05fff7  lui         $a1, 0xFFF7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65527 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156750) {
            ctx->pc = 0x1567E8u;
            goto label_1567e8;
        }
    }
    ctx->pc = 0x156758u;
label_156758:
    // 0x156758: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x156758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_15675c:
    // 0x15675c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x15675cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_156760:
    // 0x156760: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x156760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_156764:
    // 0x156764: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x156764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_156768:
    // 0x156768: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x156768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_15676c:
    // 0x15676c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x15676cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_156770:
    // 0x156770: 0x24e80060  addiu       $t0, $a3, 0x60
    ctx->pc = 0x156770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
label_156774:
    // 0x156774: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x156774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_156778:
    // 0x156778: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x156778u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15677c:
    // 0x15677c: 0xfce30050  sd          $v1, 0x50($a3)
    ctx->pc = 0x15677cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 80), GPR_U64(ctx, 3));
label_156780:
    // 0x156780: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x156780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_156784:
    // 0x156784: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x156784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156788:
    // 0x156788: 0xc91823  subu        $v1, $a2, $t1
    ctx->pc = 0x156788u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_15678c:
    // 0x15678c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x15678cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_156790:
    // 0x156790: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x156790u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_156794:
    // 0x156794: 0x0  nop
    ctx->pc = 0x156794u;
    // NOP
label_156798:
    // 0x156798: 0x90830ea4  lbu         $v1, 0xEA4($a0)
    ctx->pc = 0x156798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3748)));
label_15679c:
    // 0x15679c: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x15679cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
label_1567a0:
    // 0x1567a0: 0x90830ea5  lbu         $v1, 0xEA5($a0)
    ctx->pc = 0x1567a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3749)));
label_1567a4:
    // 0x1567a4: 0xad030014  sw          $v1, 0x14($t0)
    ctx->pc = 0x1567a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
label_1567a8:
    // 0x1567a8: 0x90830ea6  lbu         $v1, 0xEA6($a0)
    ctx->pc = 0x1567a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3750)));
label_1567ac:
    // 0x1567ac: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x1567acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
label_1567b0:
    // 0x1567b0: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
label_1567b4:
    if (ctx->pc == 0x1567B4u) {
        ctx->pc = 0x1567B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567B0u;
        // 0x1567b4: 0xad05001c  sw          $a1, 0x1C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1567B8u;
        goto label_1567b8;
    }
    ctx->pc = 0x1567B0u;
    {
        const bool branch_taken_0x1567b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1567B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567B0u;
        // 0x1567b4: 0xad05001c  sw          $a1, 0x1C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1567b0) {
            ctx->pc = 0x1567C4u;
            goto label_1567c4;
        }
    }
    ctx->pc = 0x1567B8u;
label_1567b8:
    // 0x1567b8: 0x8d03001c  lw          $v1, 0x1C($t0)
    ctx->pc = 0x1567b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_1567bc:
    // 0x1567bc: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x1567bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_1567c0:
    // 0x1567c0: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x1567c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
label_1567c4:
    // 0x1567c4: 0x0  nop
    ctx->pc = 0x1567c4u;
    // NOP
label_1567c8:
    // 0x1567c8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1567c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1567cc:
    // 0x1567cc: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x1567ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1567d0:
    // 0x1567d0: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_1567d4:
    if (ctx->pc == 0x1567D4u) {
        ctx->pc = 0x1567D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567D0u;
        // 0x1567d4: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1567D8u;
        goto label_1567d8;
    }
    ctx->pc = 0x1567D0u;
    {
        const bool branch_taken_0x1567d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1567D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567D0u;
        // 0x1567d4: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1567d0) {
            ctx->pc = 0x156794u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156794;
        }
    }
    ctx->pc = 0x1567D8u;
label_1567d8:
    // 0x1567d8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1567d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1567dc:
    // 0x1567dc: 0x2d230011  sltiu       $v1, $t1, 0x11
    ctx->pc = 0x1567dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_1567e0:
    // 0x1567e0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_1567e4:
    if (ctx->pc == 0x1567E4u) {
        ctx->pc = 0x1567E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567E0u;
        // 0x1567e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1567E8u;
        goto label_1567e8;
    }
    ctx->pc = 0x1567E0u;
    {
        const bool branch_taken_0x1567e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1567E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1567E0u;
        // 0x1567e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1567e0) {
            ctx->pc = 0x156788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156788;
        }
    }
    ctx->pc = 0x1567E8u;
label_1567e8:
    // 0x1567e8: 0x3e00008  jr          $ra
label_1567ec:
    if (ctx->pc == 0x1567ECu) {
        ctx->pc = 0x1567F0u;
        goto label_1567f0;
    }
    ctx->pc = 0x1567E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1567E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1567F0u;
label_1567f0:
    // 0x1567f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1567f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1567f4:
    // 0x1567f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1567f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1567f8:
    // 0x1567f8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1567f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1567fc:
    // 0x1567fc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1567fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_156800:
    // 0x156800: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x156800u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_156804:
    // 0x156804: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x156804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_156808:
    // 0x156808: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x156808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_15680c:
    // 0x15680c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15680cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156810:
    // 0x156810: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x156810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_156814:
    // 0x156814: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x156814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_156818:
    // 0x156818: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x156818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_15681c:
    // 0x15681c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15681cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_156820:
    // 0x156820: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x156820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156824:
    // 0x156824: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x156824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156828:
    // 0x156828: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x156828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15682c:
    // 0x15682c: 0x0  nop
    ctx->pc = 0x15682cu;
    // NOP
label_156830:
    // 0x156830: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_156834:
    if (ctx->pc == 0x156834u) {
        ctx->pc = 0x156838u;
        goto label_156838;
    }
    ctx->pc = 0x156830u;
    {
        const bool branch_taken_0x156830 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x156830) {
            ctx->pc = 0x15685Cu;
            goto label_15685c;
        }
    }
    ctx->pc = 0x156838u;
label_156838:
    // 0x156838: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_15683c:
    if (ctx->pc == 0x15683Cu) {
        ctx->pc = 0x15683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156838u;
        // 0x15683c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156840u;
        goto label_156840;
    }
    ctx->pc = 0x156838u;
    {
        const bool branch_taken_0x156838 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x15683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156838u;
        // 0x15683c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156838) {
            ctx->pc = 0x15685Cu;
            goto label_15685c;
        }
    }
    ctx->pc = 0x156840u;
label_156840:
    // 0x156840: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x156840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_156844:
    // 0x156844: 0x244212c0  addiu       $v0, $v0, 0x12C0
    ctx->pc = 0x156844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_156848:
    // 0x156848: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x156848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_15684c:
    // 0x15684c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x15684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_156850:
    // 0x156850: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x156850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_156854:
    // 0x156854: 0x10000030  b           . + 4 + (0x30 << 2)
label_156858:
    if (ctx->pc == 0x156858u) {
        ctx->pc = 0x156858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156854u;
        // 0x156858: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15685Cu;
        goto label_15685c;
    }
    ctx->pc = 0x156854u;
    {
        const bool branch_taken_0x156854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156854u;
        // 0x156858: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156854) {
            ctx->pc = 0x156918u;
            { ctx->pc = 0x156918; return; }
        }
    }
    ctx->pc = 0x15685Cu;
label_15685c:
    // 0x15685c: 0x0  nop
    ctx->pc = 0x15685cu;
    // NOP
label_156860:
    // 0x156860: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x156860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_156864:
    // 0x156864: 0x244212c0  addiu       $v0, $v0, 0x12C0
    ctx->pc = 0x156864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_156868:
    // 0x156868: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x156868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15686c:
    // 0x15686c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x15686cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_156870:
    // 0x156870: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x156870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_156874:
    // 0x156874: 0x53a821  addu        $s5, $v0, $s3
    ctx->pc = 0x156874u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_156878:
    // 0x156878: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x156878u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_15687c:
    // 0x15687c: 0x0  nop
    ctx->pc = 0x15687cu;
    // NOP
label_156880:
    // 0x156880: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
label_156884:
    if (ctx->pc == 0x156884u) {
        ctx->pc = 0x156884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156880u;
        // 0x156884: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156888u;
        goto label_156888;
    }
    ctx->pc = 0x156880u;
    {
        const bool branch_taken_0x156880 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x156884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156880u;
        // 0x156884: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156880) {
            ctx->pc = 0x156894u;
            goto label_156894;
        }
    }
    ctx->pc = 0x156888u;
label_156888:
    // 0x156888: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x156888u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15688c:
    // 0x15688c: 0x10000007  b           . + 4 + (0x7 << 2)
label_156890:
    if (ctx->pc == 0x156890u) {
        ctx->pc = 0x156890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15688Cu;
        // 0x156890: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x156894u;
        goto label_156894;
    }
    ctx->pc = 0x15688Cu;
    {
        const bool branch_taken_0x15688c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15688Cu;
        // 0x156890: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15688c) {
            ctx->pc = 0x1568ACu;
            { ctx->pc = 0x1568ac; return; }
        }
    }
    ctx->pc = 0x156894u;
label_156894:
    // 0x156894: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x156894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_156898:
    // 0x156898: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x156898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_15689c:
    // 0x15689c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15689cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x1568a0u;
    return;
}

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


void FUN_0017d410_part480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x267240u: goto label_267240;
        case 0x267244u: goto label_267244;
        case 0x267248u: goto label_267248;
        case 0x26724cu: goto label_26724c;
        case 0x267250u: goto label_267250;
        case 0x267254u: goto label_267254;
        case 0x267258u: goto label_267258;
        case 0x26725cu: goto label_26725c;
        case 0x267260u: goto label_267260;
        case 0x267264u: goto label_267264;
        case 0x267268u: goto label_267268;
        case 0x26726cu: goto label_26726c;
        case 0x267270u: goto label_267270;
        case 0x267274u: goto label_267274;
        case 0x267278u: goto label_267278;
        case 0x26727cu: goto label_26727c;
        case 0x267280u: goto label_267280;
        case 0x267284u: goto label_267284;
        case 0x267288u: goto label_267288;
        case 0x26728cu: goto label_26728c;
        case 0x267290u: goto label_267290;
        case 0x267294u: goto label_267294;
        case 0x267298u: goto label_267298;
        case 0x26729cu: goto label_26729c;
        case 0x2672a0u: goto label_2672a0;
        case 0x2672a4u: goto label_2672a4;
        case 0x2672a8u: goto label_2672a8;
        case 0x2672acu: goto label_2672ac;
        case 0x2672b0u: goto label_2672b0;
        case 0x2672b4u: goto label_2672b4;
        case 0x2672b8u: goto label_2672b8;
        case 0x2672bcu: goto label_2672bc;
        case 0x2672c0u: goto label_2672c0;
        case 0x2672c4u: goto label_2672c4;
        case 0x2672c8u: goto label_2672c8;
        case 0x2672ccu: goto label_2672cc;
        case 0x2672d0u: goto label_2672d0;
        case 0x2672d4u: goto label_2672d4;
        case 0x2672d8u: goto label_2672d8;
        case 0x2672dcu: goto label_2672dc;
        case 0x2672e0u: goto label_2672e0;
        case 0x2672e4u: goto label_2672e4;
        case 0x2672e8u: goto label_2672e8;
        case 0x2672ecu: goto label_2672ec;
        case 0x2672f0u: goto label_2672f0;
        case 0x2672f4u: goto label_2672f4;
        case 0x2672f8u: goto label_2672f8;
        case 0x2672fcu: goto label_2672fc;
        case 0x267300u: goto label_267300;
        case 0x267304u: goto label_267304;
        case 0x267308u: goto label_267308;
        case 0x26730cu: goto label_26730c;
        case 0x267310u: goto label_267310;
        case 0x267314u: goto label_267314;
        case 0x267318u: goto label_267318;
        case 0x26731cu: goto label_26731c;
        case 0x267320u: goto label_267320;
        case 0x267324u: goto label_267324;
        case 0x267328u: goto label_267328;
        case 0x26732cu: goto label_26732c;
        case 0x267330u: goto label_267330;
        case 0x267334u: goto label_267334;
        case 0x267338u: goto label_267338;
        case 0x26733cu: goto label_26733c;
        case 0x267340u: goto label_267340;
        case 0x267344u: goto label_267344;
        case 0x267348u: goto label_267348;
        case 0x26734cu: goto label_26734c;
        case 0x267350u: goto label_267350;
        case 0x267354u: goto label_267354;
        case 0x267358u: goto label_267358;
        case 0x26735cu: goto label_26735c;
        case 0x267360u: goto label_267360;
        case 0x267364u: goto label_267364;
        case 0x267368u: goto label_267368;
        case 0x26736cu: goto label_26736c;
        case 0x267370u: goto label_267370;
        case 0x267374u: goto label_267374;
        case 0x267378u: goto label_267378;
        case 0x26737cu: goto label_26737c;
        case 0x267380u: goto label_267380;
        case 0x267384u: goto label_267384;
        case 0x267388u: goto label_267388;
        case 0x26738cu: goto label_26738c;
        case 0x267390u: goto label_267390;
        case 0x267394u: goto label_267394;
        case 0x267398u: goto label_267398;
        case 0x26739cu: goto label_26739c;
        case 0x2673a0u: goto label_2673a0;
        case 0x2673a4u: goto label_2673a4;
        case 0x2673a8u: goto label_2673a8;
        case 0x2673acu: goto label_2673ac;
        case 0x2673b0u: goto label_2673b0;
        case 0x2673b4u: goto label_2673b4;
        case 0x2673b8u: goto label_2673b8;
        case 0x2673bcu: goto label_2673bc;
        case 0x2673c0u: goto label_2673c0;
        case 0x2673c4u: goto label_2673c4;
        case 0x2673c8u: goto label_2673c8;
        case 0x2673ccu: goto label_2673cc;
        case 0x2673d0u: goto label_2673d0;
        case 0x2673d4u: goto label_2673d4;
        case 0x2673d8u: goto label_2673d8;
        case 0x2673dcu: goto label_2673dc;
        case 0x2673e0u: goto label_2673e0;
        case 0x2673e4u: goto label_2673e4;
        case 0x2673e8u: goto label_2673e8;
        case 0x2673ecu: goto label_2673ec;
        case 0x2673f0u: goto label_2673f0;
        case 0x2673f4u: goto label_2673f4;
        case 0x2673f8u: goto label_2673f8;
        case 0x2673fcu: goto label_2673fc;
        case 0x267400u: goto label_267400;
        case 0x267404u: goto label_267404;
        case 0x267408u: goto label_267408;
        case 0x26740cu: goto label_26740c;
        case 0x267410u: goto label_267410;
        case 0x267414u: goto label_267414;
        case 0x267418u: goto label_267418;
        case 0x26741cu: goto label_26741c;
        case 0x267420u: goto label_267420;
        case 0x267424u: goto label_267424;
        case 0x267428u: goto label_267428;
        case 0x26742cu: goto label_26742c;
        case 0x267430u: goto label_267430;
        case 0x267434u: goto label_267434;
        case 0x267438u: goto label_267438;
        case 0x26743cu: goto label_26743c;
        case 0x267440u: goto label_267440;
        case 0x267444u: goto label_267444;
        case 0x267448u: goto label_267448;
        case 0x26744cu: goto label_26744c;
        case 0x267450u: goto label_267450;
        case 0x267454u: goto label_267454;
        case 0x267458u: goto label_267458;
        case 0x26745cu: goto label_26745c;
        case 0x267460u: goto label_267460;
        case 0x267464u: goto label_267464;
        case 0x267468u: goto label_267468;
        case 0x26746cu: goto label_26746c;
        case 0x267470u: goto label_267470;
        case 0x267474u: goto label_267474;
        case 0x267478u: goto label_267478;
        case 0x26747cu: goto label_26747c;
        case 0x267480u: goto label_267480;
        case 0x267484u: goto label_267484;
        case 0x267488u: goto label_267488;
        case 0x26748cu: goto label_26748c;
        case 0x267490u: goto label_267490;
        case 0x267494u: goto label_267494;
        case 0x267498u: goto label_267498;
        case 0x26749cu: goto label_26749c;
        case 0x2674a0u: goto label_2674a0;
        case 0x2674a4u: goto label_2674a4;
        case 0x2674a8u: goto label_2674a8;
        case 0x2674acu: goto label_2674ac;
        case 0x2674b0u: goto label_2674b0;
        case 0x2674b4u: goto label_2674b4;
        case 0x2674b8u: goto label_2674b8;
        case 0x2674bcu: goto label_2674bc;
        case 0x2674c0u: goto label_2674c0;
        case 0x2674c4u: goto label_2674c4;
        case 0x2674c8u: goto label_2674c8;
        case 0x2674ccu: goto label_2674cc;
        case 0x2674d0u: goto label_2674d0;
        case 0x2674d4u: goto label_2674d4;
        case 0x2674d8u: goto label_2674d8;
        case 0x2674dcu: goto label_2674dc;
        case 0x2674e0u: goto label_2674e0;
        case 0x2674e4u: goto label_2674e4;
        case 0x2674e8u: goto label_2674e8;
        case 0x2674ecu: goto label_2674ec;
        case 0x2674f0u: goto label_2674f0;
        case 0x2674f4u: goto label_2674f4;
        case 0x2674f8u: goto label_2674f8;
        case 0x2674fcu: goto label_2674fc;
        case 0x267500u: goto label_267500;
        case 0x267504u: goto label_267504;
        case 0x267508u: goto label_267508;
        case 0x26750cu: goto label_26750c;
        case 0x267510u: goto label_267510;
        case 0x267514u: goto label_267514;
        case 0x267518u: goto label_267518;
        case 0x26751cu: goto label_26751c;
        case 0x267520u: goto label_267520;
        case 0x267524u: goto label_267524;
        case 0x267528u: goto label_267528;
        case 0x26752cu: goto label_26752c;
        case 0x267530u: goto label_267530;
        case 0x267534u: goto label_267534;
        case 0x267538u: goto label_267538;
        case 0x26753cu: goto label_26753c;
        case 0x267540u: goto label_267540;
        case 0x267544u: goto label_267544;
        case 0x267548u: goto label_267548;
        case 0x26754cu: goto label_26754c;
        case 0x267550u: goto label_267550;
        case 0x267554u: goto label_267554;
        case 0x267558u: goto label_267558;
        case 0x26755cu: goto label_26755c;
        case 0x267560u: goto label_267560;
        case 0x267564u: goto label_267564;
        case 0x267568u: goto label_267568;
        case 0x26756cu: goto label_26756c;
        case 0x267570u: goto label_267570;
        case 0x267574u: goto label_267574;
        case 0x267578u: goto label_267578;
        case 0x26757cu: goto label_26757c;
        case 0x267580u: goto label_267580;
        case 0x267584u: goto label_267584;
        case 0x267588u: goto label_267588;
        case 0x26758cu: goto label_26758c;
        case 0x267590u: goto label_267590;
        case 0x267594u: goto label_267594;
        case 0x267598u: goto label_267598;
        case 0x26759cu: goto label_26759c;
        case 0x2675a0u: goto label_2675a0;
        case 0x2675a4u: goto label_2675a4;
        case 0x2675a8u: goto label_2675a8;
        case 0x2675acu: goto label_2675ac;
        case 0x2675b0u: goto label_2675b0;
        case 0x2675b4u: goto label_2675b4;
        case 0x2675b8u: goto label_2675b8;
        case 0x2675bcu: goto label_2675bc;
        case 0x2675c0u: goto label_2675c0;
        case 0x2675c4u: goto label_2675c4;
        case 0x2675c8u: goto label_2675c8;
        case 0x2675ccu: goto label_2675cc;
        case 0x2675d0u: goto label_2675d0;
        case 0x2675d4u: goto label_2675d4;
        case 0x2675d8u: goto label_2675d8;
        case 0x2675dcu: goto label_2675dc;
        case 0x2675e0u: goto label_2675e0;
        case 0x2675e4u: goto label_2675e4;
        case 0x2675e8u: goto label_2675e8;
        case 0x2675ecu: goto label_2675ec;
        case 0x2675f0u: goto label_2675f0;
        case 0x2675f4u: goto label_2675f4;
        case 0x2675f8u: goto label_2675f8;
        case 0x2675fcu: goto label_2675fc;
        case 0x267600u: goto label_267600;
        case 0x267604u: goto label_267604;
        case 0x267608u: goto label_267608;
        case 0x26760cu: goto label_26760c;
        case 0x267610u: goto label_267610;
        case 0x267614u: goto label_267614;
        case 0x267618u: goto label_267618;
        case 0x26761cu: goto label_26761c;
        case 0x267620u: goto label_267620;
        case 0x267624u: goto label_267624;
        case 0x267628u: goto label_267628;
        case 0x26762cu: goto label_26762c;
        case 0x267630u: goto label_267630;
        case 0x267634u: goto label_267634;
        case 0x267638u: goto label_267638;
        case 0x26763cu: goto label_26763c;
        case 0x267640u: goto label_267640;
        case 0x267644u: goto label_267644;
        case 0x267648u: goto label_267648;
        case 0x26764cu: goto label_26764c;
        case 0x267650u: goto label_267650;
        case 0x267654u: goto label_267654;
        case 0x267658u: goto label_267658;
        case 0x26765cu: goto label_26765c;
        case 0x267660u: goto label_267660;
        case 0x267664u: goto label_267664;
        case 0x267668u: goto label_267668;
        case 0x26766cu: goto label_26766c;
        case 0x267670u: goto label_267670;
        case 0x267674u: goto label_267674;
        case 0x267678u: goto label_267678;
        case 0x26767cu: goto label_26767c;
        case 0x267680u: goto label_267680;
        case 0x267684u: goto label_267684;
        case 0x267688u: goto label_267688;
        case 0x26768cu: goto label_26768c;
        case 0x267690u: goto label_267690;
        case 0x267694u: goto label_267694;
        case 0x267698u: goto label_267698;
        case 0x26769cu: goto label_26769c;
        case 0x2676a0u: goto label_2676a0;
        case 0x2676a4u: goto label_2676a4;
        case 0x2676a8u: goto label_2676a8;
        case 0x2676acu: goto label_2676ac;
        case 0x2676b0u: goto label_2676b0;
        case 0x2676b4u: goto label_2676b4;
        case 0x2676b8u: goto label_2676b8;
        case 0x2676bcu: goto label_2676bc;
        case 0x2676c0u: goto label_2676c0;
        case 0x2676c4u: goto label_2676c4;
        case 0x2676c8u: goto label_2676c8;
        case 0x2676ccu: goto label_2676cc;
        case 0x2676d0u: goto label_2676d0;
        case 0x2676d4u: goto label_2676d4;
        case 0x2676d8u: goto label_2676d8;
        case 0x2676dcu: goto label_2676dc;
        case 0x2676e0u: goto label_2676e0;
        case 0x2676e4u: goto label_2676e4;
        case 0x2676e8u: goto label_2676e8;
        case 0x2676ecu: goto label_2676ec;
        case 0x2676f0u: goto label_2676f0;
        case 0x2676f4u: goto label_2676f4;
        case 0x2676f8u: goto label_2676f8;
        case 0x2676fcu: goto label_2676fc;
        case 0x267700u: goto label_267700;
        case 0x267704u: goto label_267704;
        case 0x267708u: goto label_267708;
        case 0x26770cu: goto label_26770c;
        case 0x267710u: goto label_267710;
        case 0x267714u: goto label_267714;
        case 0x267718u: goto label_267718;
        case 0x26771cu: goto label_26771c;
        case 0x267720u: goto label_267720;
        case 0x267724u: goto label_267724;
        case 0x267728u: goto label_267728;
        case 0x26772cu: goto label_26772c;
        case 0x267730u: goto label_267730;
        case 0x267734u: goto label_267734;
        case 0x267738u: goto label_267738;
        case 0x26773cu: goto label_26773c;
        case 0x267740u: goto label_267740;
        case 0x267744u: goto label_267744;
        case 0x267748u: goto label_267748;
        case 0x26774cu: goto label_26774c;
        case 0x267750u: goto label_267750;
        case 0x267754u: goto label_267754;
        case 0x267758u: goto label_267758;
        case 0x26775cu: goto label_26775c;
        case 0x267760u: goto label_267760;
        case 0x267764u: goto label_267764;
        case 0x267768u: goto label_267768;
        case 0x26776cu: goto label_26776c;
        case 0x267770u: goto label_267770;
        case 0x267774u: goto label_267774;
        case 0x267778u: goto label_267778;
        case 0x26777cu: goto label_26777c;
        case 0x267780u: goto label_267780;
        case 0x267784u: goto label_267784;
        case 0x267788u: goto label_267788;
        case 0x26778cu: goto label_26778c;
        case 0x267790u: goto label_267790;
        case 0x267794u: goto label_267794;
        case 0x267798u: goto label_267798;
        case 0x26779cu: goto label_26779c;
        case 0x2677a0u: goto label_2677a0;
        case 0x2677a4u: goto label_2677a4;
        case 0x2677a8u: goto label_2677a8;
        case 0x2677acu: goto label_2677ac;
        case 0x2677b0u: goto label_2677b0;
        case 0x2677b4u: goto label_2677b4;
        case 0x2677b8u: goto label_2677b8;
        case 0x2677bcu: goto label_2677bc;
        case 0x2677c0u: goto label_2677c0;
        case 0x2677c4u: goto label_2677c4;
        case 0x2677c8u: goto label_2677c8;
        case 0x2677ccu: goto label_2677cc;
        case 0x2677d0u: goto label_2677d0;
        case 0x2677d4u: goto label_2677d4;
        case 0x2677d8u: goto label_2677d8;
        case 0x2677dcu: goto label_2677dc;
        case 0x2677e0u: goto label_2677e0;
        case 0x2677e4u: goto label_2677e4;
        case 0x2677e8u: goto label_2677e8;
        case 0x2677ecu: goto label_2677ec;
        case 0x2677f0u: goto label_2677f0;
        case 0x2677f4u: goto label_2677f4;
        case 0x2677f8u: goto label_2677f8;
        case 0x2677fcu: goto label_2677fc;
        case 0x267800u: goto label_267800;
        case 0x267804u: goto label_267804;
        case 0x267808u: goto label_267808;
        case 0x26780cu: goto label_26780c;
        case 0x267810u: goto label_267810;
        case 0x267814u: goto label_267814;
        case 0x267818u: goto label_267818;
        case 0x26781cu: goto label_26781c;
        case 0x267820u: goto label_267820;
        case 0x267824u: goto label_267824;
        case 0x267828u: goto label_267828;
        case 0x26782cu: goto label_26782c;
        case 0x267830u: goto label_267830;
        case 0x267834u: goto label_267834;
        case 0x267838u: goto label_267838;
        case 0x26783cu: goto label_26783c;
        case 0x267840u: goto label_267840;
        case 0x267844u: goto label_267844;
        case 0x267848u: goto label_267848;
        case 0x26784cu: goto label_26784c;
        case 0x267850u: goto label_267850;
        case 0x267854u: goto label_267854;
        case 0x267858u: goto label_267858;
        case 0x26785cu: goto label_26785c;
        case 0x267860u: goto label_267860;
        case 0x267864u: goto label_267864;
        case 0x267868u: goto label_267868;
        case 0x26786cu: goto label_26786c;
        case 0x267870u: goto label_267870;
        case 0x267874u: goto label_267874;
        case 0x267878u: goto label_267878;
        case 0x26787cu: goto label_26787c;
        case 0x267880u: goto label_267880;
        case 0x267884u: goto label_267884;
        case 0x267888u: goto label_267888;
        case 0x26788cu: goto label_26788c;
        case 0x267890u: goto label_267890;
        case 0x267894u: goto label_267894;
        case 0x267898u: goto label_267898;
        case 0x26789cu: goto label_26789c;
        case 0x2678a0u: goto label_2678a0;
        case 0x2678a4u: goto label_2678a4;
        case 0x2678a8u: goto label_2678a8;
        case 0x2678acu: goto label_2678ac;
        case 0x2678b0u: goto label_2678b0;
        case 0x2678b4u: goto label_2678b4;
        case 0x2678b8u: goto label_2678b8;
        case 0x2678bcu: goto label_2678bc;
        case 0x2678c0u: goto label_2678c0;
        case 0x2678c4u: goto label_2678c4;
        case 0x2678c8u: goto label_2678c8;
        case 0x2678ccu: goto label_2678cc;
        case 0x2678d0u: goto label_2678d0;
        case 0x2678d4u: goto label_2678d4;
        case 0x2678d8u: goto label_2678d8;
        case 0x2678dcu: goto label_2678dc;
        case 0x2678e0u: goto label_2678e0;
        case 0x2678e4u: goto label_2678e4;
        case 0x2678e8u: goto label_2678e8;
        case 0x2678ecu: goto label_2678ec;
        case 0x2678f0u: goto label_2678f0;
        case 0x2678f4u: goto label_2678f4;
        case 0x2678f8u: goto label_2678f8;
        case 0x2678fcu: goto label_2678fc;
        case 0x267900u: goto label_267900;
        case 0x267904u: goto label_267904;
        case 0x267908u: goto label_267908;
        case 0x26790cu: goto label_26790c;
        case 0x267910u: goto label_267910;
        case 0x267914u: goto label_267914;
        case 0x267918u: goto label_267918;
        case 0x26791cu: goto label_26791c;
        case 0x267920u: goto label_267920;
        case 0x267924u: goto label_267924;
        case 0x267928u: goto label_267928;
        case 0x26792cu: goto label_26792c;
        case 0x267930u: goto label_267930;
        case 0x267934u: goto label_267934;
        case 0x267938u: goto label_267938;
        case 0x26793cu: goto label_26793c;
        case 0x267940u: goto label_267940;
        case 0x267944u: goto label_267944;
        case 0x267948u: goto label_267948;
        case 0x26794cu: goto label_26794c;
        case 0x267950u: goto label_267950;
        case 0x267954u: goto label_267954;
        case 0x267958u: goto label_267958;
        case 0x26795cu: goto label_26795c;
        case 0x267960u: goto label_267960;
        case 0x267964u: goto label_267964;
        case 0x267968u: goto label_267968;
        case 0x26796cu: goto label_26796c;
        case 0x267970u: goto label_267970;
        case 0x267974u: goto label_267974;
        case 0x267978u: goto label_267978;
        case 0x26797cu: goto label_26797c;
        case 0x267980u: goto label_267980;
        case 0x267984u: goto label_267984;
        case 0x267988u: goto label_267988;
        case 0x26798cu: goto label_26798c;
        case 0x267990u: goto label_267990;
        case 0x267994u: goto label_267994;
        case 0x267998u: goto label_267998;
        case 0x26799cu: goto label_26799c;
        case 0x2679a0u: goto label_2679a0;
        case 0x2679a4u: goto label_2679a4;
        case 0x2679a8u: goto label_2679a8;
        case 0x2679acu: goto label_2679ac;
        case 0x2679b0u: goto label_2679b0;
        case 0x2679b4u: goto label_2679b4;
        case 0x2679b8u: goto label_2679b8;
        case 0x2679bcu: goto label_2679bc;
        case 0x2679c0u: goto label_2679c0;
        case 0x2679c4u: goto label_2679c4;
        case 0x2679c8u: goto label_2679c8;
        case 0x2679ccu: goto label_2679cc;
        case 0x2679d0u: goto label_2679d0;
        case 0x2679d4u: goto label_2679d4;
        case 0x2679d8u: goto label_2679d8;
        case 0x2679dcu: goto label_2679dc;
        case 0x2679e0u: goto label_2679e0;
        case 0x2679e4u: goto label_2679e4;
        case 0x2679e8u: goto label_2679e8;
        case 0x2679ecu: goto label_2679ec;
        case 0x2679f0u: goto label_2679f0;
        case 0x2679f4u: goto label_2679f4;
        case 0x2679f8u: goto label_2679f8;
        case 0x2679fcu: goto label_2679fc;
        case 0x267a00u: goto label_267a00;
        case 0x267a04u: goto label_267a04;
        case 0x267a08u: goto label_267a08;
        case 0x267a0cu: goto label_267a0c;
        default: return;
    }

label_267240:
    // 0x267240: 0x113ba  dsrl        $v0, $at, 14
    ctx->pc = 0x267240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> 14);
label_267244:
    // 0x267244: 0x4450  .word       0x00004450                   # mfhi        $t0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267244u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_267248:
    // 0x267248: 0x0  nop
    ctx->pc = 0x267248u;
    // NOP
label_26724c:
    // 0x26724c: 0x0  nop
    ctx->pc = 0x26724cu;
    // NOP
label_267250:
    // 0x267250: 0x113c3  sra         $v0, $at, 15
    ctx->pc = 0x267250u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), 15));
label_267254:
    // 0x267254: 0x4d00  sll         $t1, $zero, 20
    ctx->pc = 0x267254u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_267258:
    // 0x267258: 0x0  nop
    ctx->pc = 0x267258u;
    // NOP
label_26725c:
    // 0x26725c: 0x0  nop
    ctx->pc = 0x26725cu;
    // NOP
label_267260:
    // 0x267260: 0x113cd  break       1, 79
    ctx->pc = 0x267260u;
    runtime->handleBreak(rdram, ctx);
label_267264:
    // 0x267264: 0x5cb0  tge         $zero, $zero, 370
    ctx->pc = 0x267264u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267268:
    // 0x267268: 0x0  nop
    ctx->pc = 0x267268u;
    // NOP
label_26726c:
    // 0x26726c: 0x0  nop
    ctx->pc = 0x26726cu;
    // NOP
label_267270:
    // 0x267270: 0x113d9  .word       0x000113D9                   # multu       $zero, $at # 000013C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267270u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_267274:
    // 0x267274: 0x2fe0  .word       0x00002FE0                   # add         $a1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267274u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_267278:
    // 0x267278: 0x0  nop
    ctx->pc = 0x267278u;
    // NOP
label_26727c:
    // 0x26727c: 0x0  nop
    ctx->pc = 0x26727cu;
    // NOP
label_267280:
    // 0x267280: 0x113df  .word       0x000113DF                   # ddivu       $v0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x267280 raw=0x000113DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267284:
    // 0x267284: 0x5b20  .word       0x00005B20                   # add         $t3, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_267288:
    // 0x267288: 0x0  nop
    ctx->pc = 0x267288u;
    // NOP
label_26728c:
    // 0x26728c: 0x0  nop
    ctx->pc = 0x26728cu;
    // NOP
label_267290:
    // 0x267290: 0x113eb  .word       0x000113EB                   # sltu        $v0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_267294:
    // 0x267294: 0x4470  tge         $zero, $zero, 273
    ctx->pc = 0x267294u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267298:
    // 0x267298: 0x0  nop
    ctx->pc = 0x267298u;
    // NOP
label_26729c:
    // 0x26729c: 0x0  nop
    ctx->pc = 0x26729cu;
    // NOP
label_2672a0:
    // 0x2672a0: 0x113f4  teq         $zero, $at, 79
    ctx->pc = 0x2672a0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2672a4:
    // 0x2672a4: 0x44b0  tge         $zero, $zero, 274
    ctx->pc = 0x2672a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2672a8:
    // 0x2672a8: 0x0  nop
    ctx->pc = 0x2672a8u;
    // NOP
label_2672ac:
    // 0x2672ac: 0x0  nop
    ctx->pc = 0x2672acu;
    // NOP
label_2672b0:
    // 0x2672b0: 0x113fd  .word       0x000113FD                   # INVALID     $zero, $at, 0x13FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2672b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2672B0 raw=0x000113FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2672b4:
    // 0x2672b4: 0x4390  .word       0x00004390                   # mfhi        $t0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2672b4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2672b8:
    // 0x2672b8: 0x0  nop
    ctx->pc = 0x2672b8u;
    // NOP
label_2672bc:
    // 0x2672bc: 0x0  nop
    ctx->pc = 0x2672bcu;
    // NOP
label_2672c0:
    // 0x2672c0: 0x11406  .word       0x00011406                   # srlv        $v0, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2672c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2672c4:
    // 0x2672c4: 0x34b0  tge         $zero, $zero, 210
    ctx->pc = 0x2672c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2672c8:
    // 0x2672c8: 0x0  nop
    ctx->pc = 0x2672c8u;
    // NOP
label_2672cc:
    // 0x2672cc: 0x0  nop
    ctx->pc = 0x2672ccu;
    // NOP
label_2672d0:
    // 0x2672d0: 0x1140d  break       1, 80
    ctx->pc = 0x2672d0u;
    runtime->handleBreak(rdram, ctx);
label_2672d4:
    // 0x2672d4: 0x4470  tge         $zero, $zero, 273
    ctx->pc = 0x2672d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2672d8:
    // 0x2672d8: 0x0  nop
    ctx->pc = 0x2672d8u;
    // NOP
label_2672dc:
    // 0x2672dc: 0x0  nop
    ctx->pc = 0x2672dcu;
    // NOP
label_2672e0:
    // 0x2672e0: 0x11416  .word       0x00011416                   # dsrlv       $v0, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2672e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2672e4:
    // 0x2672e4: 0x3190  .word       0x00003190                   # mfhi        $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2672e4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2672e8:
    // 0x2672e8: 0x0  nop
    ctx->pc = 0x2672e8u;
    // NOP
label_2672ec:
    // 0x2672ec: 0x0  nop
    ctx->pc = 0x2672ecu;
    // NOP
label_2672f0:
    // 0x2672f0: 0x1141d  .word       0x0001141D                   # dmultu      $zero, $at # 00001400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2672f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2672F0 raw=0x0001141D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2672f4:
    // 0x2672f4: 0x2bd0  .word       0x00002BD0                   # mfhi        $a1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2672f4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2672f8:
    // 0x2672f8: 0x0  nop
    ctx->pc = 0x2672f8u;
    // NOP
label_2672fc:
    // 0x2672fc: 0x0  nop
    ctx->pc = 0x2672fcu;
    // NOP
label_267300:
    // 0x267300: 0x11423  .word       0x00011423                   # negu        $v0, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267300u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_267304:
    // 0x267304: 0x25d0  .word       0x000025D0                   # mfhi        $a0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267304u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_267308:
    // 0x267308: 0x0  nop
    ctx->pc = 0x267308u;
    // NOP
label_26730c:
    // 0x26730c: 0x0  nop
    ctx->pc = 0x26730cu;
    // NOP
label_267310:
    // 0x267310: 0x11428  .word       0x00011428                   # mfsa        $v0 # 00010400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x267310u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_267314:
    // 0x267314: 0x7e90  .word       0x00007E90                   # mfhi        $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267314u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_267318:
    // 0x267318: 0x0  nop
    ctx->pc = 0x267318u;
    // NOP
label_26731c:
    // 0x26731c: 0x0  nop
    ctx->pc = 0x26731cu;
    // NOP
label_267320:
    // 0x267320: 0x11438  dsll        $v0, $at, 16
    ctx->pc = 0x267320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << 16);
label_267324:
    // 0x267324: 0x3690  .word       0x00003690                   # mfhi        $a2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267324u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_267328:
    // 0x267328: 0x0  nop
    ctx->pc = 0x267328u;
    // NOP
label_26732c:
    // 0x26732c: 0x0  nop
    ctx->pc = 0x26732cu;
    // NOP
label_267330:
    // 0x267330: 0x1143f  dsra32      $v0, $at, 16
    ctx->pc = 0x267330u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> (32 + 16));
label_267334:
    // 0x267334: 0x2a50  .word       0x00002A50                   # mfhi        $a1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267334u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_267338:
    // 0x267338: 0x0  nop
    ctx->pc = 0x267338u;
    // NOP
label_26733c:
    // 0x26733c: 0x0  nop
    ctx->pc = 0x26733cu;
    // NOP
label_267340:
    // 0x267340: 0x11445  .word       0x00011445                   # INVALID     $zero, $at, 0x1445 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x267340 raw=0x00011445"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267344:
    // 0x267344: 0x7280  sll         $t6, $zero, 10
    ctx->pc = 0x267344u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_267348:
    // 0x267348: 0x0  nop
    ctx->pc = 0x267348u;
    // NOP
label_26734c:
    // 0x26734c: 0x0  nop
    ctx->pc = 0x26734cu;
    // NOP
label_267350:
    // 0x267350: 0x11454  .word       0x00011454                   # dsllv       $v0, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_267354:
    // 0x267354: 0x40b0  tge         $zero, $zero, 258
    ctx->pc = 0x267354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267358:
    // 0x267358: 0x0  nop
    ctx->pc = 0x267358u;
    // NOP
label_26735c:
    // 0x26735c: 0x0  nop
    ctx->pc = 0x26735cu;
    // NOP
label_267360:
    // 0x267360: 0x1145d  .word       0x0001145D                   # dmultu      $zero, $at # 00001440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x267360 raw=0x0001145D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267364:
    // 0x267364: 0x6630  tge         $zero, $zero, 408
    ctx->pc = 0x267364u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267368:
    // 0x267368: 0x0  nop
    ctx->pc = 0x267368u;
    // NOP
label_26736c:
    // 0x26736c: 0x0  nop
    ctx->pc = 0x26736cu;
    // NOP
label_267370:
    // 0x267370: 0x1146a  .word       0x0001146A                   # slt         $v0, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_267374:
    // 0x267374: 0xa480  sll         $s4, $zero, 18
    ctx->pc = 0x267374u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_267378:
    // 0x267378: 0x0  nop
    ctx->pc = 0x267378u;
    // NOP
label_26737c:
    // 0x26737c: 0x0  nop
    ctx->pc = 0x26737cu;
    // NOP
label_267380:
    // 0x267380: 0x1147f  dsra32      $v0, $at, 17
    ctx->pc = 0x267380u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> (32 + 17));
label_267384:
    // 0x267384: 0x36b0  tge         $zero, $zero, 218
    ctx->pc = 0x267384u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267388:
    // 0x267388: 0x0  nop
    ctx->pc = 0x267388u;
    // NOP
label_26738c:
    // 0x26738c: 0x0  nop
    ctx->pc = 0x26738cu;
    // NOP
label_267390:
    // 0x267390: 0x11486  .word       0x00011486                   # srlv        $v0, $at, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267390u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267394:
    // 0x267394: 0x3b30  tge         $zero, $zero, 236
    ctx->pc = 0x267394u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267398:
    // 0x267398: 0x0  nop
    ctx->pc = 0x267398u;
    // NOP
label_26739c:
    // 0x26739c: 0x0  nop
    ctx->pc = 0x26739cu;
    // NOP
label_2673a0:
    // 0x2673a0: 0x1148e  .word       0x0001148E                   # INVALID     $zero, $at, 0x148E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2673a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2673A0 raw=0x0001148E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2673a4:
    // 0x2673a4: 0x4610  .word       0x00004610                   # mfhi        $t0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2673a4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2673a8:
    // 0x2673a8: 0x0  nop
    ctx->pc = 0x2673a8u;
    // NOP
label_2673ac:
    // 0x2673ac: 0x0  nop
    ctx->pc = 0x2673acu;
    // NOP
label_2673b0:
    // 0x2673b0: 0x11497  .word       0x00011497                   # dsrav       $v0, $at, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2673b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2673b4:
    // 0x2673b4: 0x7610  .word       0x00007610                   # mfhi        $t6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2673b4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2673b8:
    // 0x2673b8: 0x0  nop
    ctx->pc = 0x2673b8u;
    // NOP
label_2673bc:
    // 0x2673bc: 0x0  nop
    ctx->pc = 0x2673bcu;
    // NOP
label_2673c0:
    // 0x2673c0: 0x114a6  .word       0x000114A6                   # xor         $v0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2673c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_2673c4:
    // 0x2673c4: 0x72a0  .word       0x000072A0                   # add         $t6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2673c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2673c8:
    // 0x2673c8: 0x0  nop
    ctx->pc = 0x2673c8u;
    // NOP
label_2673cc:
    // 0x2673cc: 0x0  nop
    ctx->pc = 0x2673ccu;
    // NOP
label_2673d0:
    // 0x2673d0: 0x114b5  .word       0x000114B5                   # INVALID     $zero, $at, 0x14B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2673d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2673D0 raw=0x000114B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2673d4:
    // 0x2673d4: 0x40c0  sll         $t0, $zero, 3
    ctx->pc = 0x2673d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_2673d8:
    // 0x2673d8: 0x0  nop
    ctx->pc = 0x2673d8u;
    // NOP
label_2673dc:
    // 0x2673dc: 0x0  nop
    ctx->pc = 0x2673dcu;
    // NOP
label_2673e0:
    // 0x2673e0: 0x114be  dsrl32      $v0, $at, 18
    ctx->pc = 0x2673e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (32 + 18));
label_2673e4:
    // 0x2673e4: 0x4ec0  sll         $t1, $zero, 27
    ctx->pc = 0x2673e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2673e8:
    // 0x2673e8: 0x0  nop
    ctx->pc = 0x2673e8u;
    // NOP
label_2673ec:
    // 0x2673ec: 0x0  nop
    ctx->pc = 0x2673ecu;
    // NOP
label_2673f0:
    // 0x2673f0: 0x114c8  .word       0x000114C8                   # jr          $zero # 000114C0 <InstrIdType: CPU_SPECIAL>
label_2673f4:
    if (ctx->pc == 0x2673F4u) {
        ctx->pc = 0x2673F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673F0u;
        // 0x2673f4: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2673F8u;
        goto label_2673f8;
    }
    ctx->pc = 0x2673F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2673F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2673F0u;
        // 0x2673f4: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2673F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2673F8u;
label_2673f8:
    // 0x2673f8: 0x0  nop
    ctx->pc = 0x2673f8u;
    // NOP
label_2673fc:
    // 0x2673fc: 0x0  nop
    ctx->pc = 0x2673fcu;
    // NOP
label_267400:
    // 0x267400: 0x114d5  .word       0x000114D5                   # INVALID     $zero, $at, 0x14D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267400u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x267400 raw=0x000114D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267404:
    // 0x267404: 0x4210  .word       0x00004210                   # mfhi        $t0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267404u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_267408:
    // 0x267408: 0x0  nop
    ctx->pc = 0x267408u;
    // NOP
label_26740c:
    // 0x26740c: 0x0  nop
    ctx->pc = 0x26740cu;
    // NOP
label_267410:
    // 0x267410: 0x114de  .word       0x000114DE                   # ddiv        $v0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x267410 raw=0x000114DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267414:
    // 0x267414: 0x44f0  tge         $zero, $zero, 275
    ctx->pc = 0x267414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267418:
    // 0x267418: 0x0  nop
    ctx->pc = 0x267418u;
    // NOP
label_26741c:
    // 0x26741c: 0x0  nop
    ctx->pc = 0x26741cu;
    // NOP
label_267420:
    // 0x267420: 0x114e7  .word       0x000114E7                   # nor         $v0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267420u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_267424:
    // 0x267424: 0x2fd0  .word       0x00002FD0                   # mfhi        $a1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267424u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_267428:
    // 0x267428: 0x0  nop
    ctx->pc = 0x267428u;
    // NOP
label_26742c:
    // 0x26742c: 0x0  nop
    ctx->pc = 0x26742cu;
    // NOP
label_267430:
    // 0x267430: 0x114ed  .word       0x000114ED                   # daddu       $v0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_267434:
    // 0x267434: 0x4280  sll         $t0, $zero, 10
    ctx->pc = 0x267434u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_267438:
    // 0x267438: 0x0  nop
    ctx->pc = 0x267438u;
    // NOP
label_26743c:
    // 0x26743c: 0x0  nop
    ctx->pc = 0x26743cu;
    // NOP
label_267440:
    // 0x267440: 0x114f6  tne         $zero, $at, 83
    ctx->pc = 0x267440u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267444:
    // 0x267444: 0x3700  sll         $a2, $zero, 28
    ctx->pc = 0x267444u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_267448:
    // 0x267448: 0x0  nop
    ctx->pc = 0x267448u;
    // NOP
label_26744c:
    // 0x26744c: 0x0  nop
    ctx->pc = 0x26744cu;
    // NOP
label_267450:
    // 0x267450: 0x114fd  .word       0x000114FD                   # INVALID     $zero, $at, 0x14FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x267450 raw=0x000114FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267454:
    // 0x267454: 0x4890  .word       0x00004890                   # mfhi        $t1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267454u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_267458:
    // 0x267458: 0x0  nop
    ctx->pc = 0x267458u;
    // NOP
label_26745c:
    // 0x26745c: 0x0  nop
    ctx->pc = 0x26745cu;
    // NOP
label_267460:
    // 0x267460: 0x11507  .word       0x00011507                   # srav        $v0, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267460u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267464:
    // 0x267464: 0x4bc0  sll         $t1, $zero, 15
    ctx->pc = 0x267464u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_267468:
    // 0x267468: 0x0  nop
    ctx->pc = 0x267468u;
    // NOP
label_26746c:
    // 0x26746c: 0x0  nop
    ctx->pc = 0x26746cu;
    // NOP
label_267470:
    // 0x267470: 0x11511  .word       0x00011511                   # mthi        $zero # 00011500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267470u;
    ctx->hi = GPR_U64(ctx, 0);
label_267474:
    // 0x267474: 0x67d0  .word       0x000067D0                   # mfhi        $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267474u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_267478:
    // 0x267478: 0x0  nop
    ctx->pc = 0x267478u;
    // NOP
label_26747c:
    // 0x26747c: 0x0  nop
    ctx->pc = 0x26747cu;
    // NOP
label_267480:
    // 0x267480: 0x1151e  .word       0x0001151E                   # ddiv        $v0, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x267480 raw=0x0001151E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267484:
    // 0x267484: 0x44f0  tge         $zero, $zero, 275
    ctx->pc = 0x267484u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267488:
    // 0x267488: 0x0  nop
    ctx->pc = 0x267488u;
    // NOP
label_26748c:
    // 0x26748c: 0x0  nop
    ctx->pc = 0x26748cu;
    // NOP
label_267490:
    // 0x267490: 0x11527  .word       0x00011527                   # nor         $v0, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267490u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_267494:
    // 0x267494: 0x7d70  tge         $zero, $zero, 501
    ctx->pc = 0x267494u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267498:
    // 0x267498: 0x0  nop
    ctx->pc = 0x267498u;
    // NOP
label_26749c:
    // 0x26749c: 0x0  nop
    ctx->pc = 0x26749cu;
    // NOP
label_2674a0:
    // 0x2674a0: 0x11537  .word       0x00011537                   # INVALID     $zero, $at, 0x1537 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2674a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2674A0 raw=0x00011537"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2674a4:
    // 0x2674a4: 0x7650  .word       0x00007650                   # mfhi        $t6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2674a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2674a8:
    // 0x2674a8: 0x0  nop
    ctx->pc = 0x2674a8u;
    // NOP
label_2674ac:
    // 0x2674ac: 0x0  nop
    ctx->pc = 0x2674acu;
    // NOP
label_2674b0:
    // 0x2674b0: 0x11546  .word       0x00011546                   # srlv        $v0, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2674b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2674b4:
    // 0x2674b4: 0x53f0  tge         $zero, $zero, 335
    ctx->pc = 0x2674b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2674b8:
    // 0x2674b8: 0x0  nop
    ctx->pc = 0x2674b8u;
    // NOP
label_2674bc:
    // 0x2674bc: 0x0  nop
    ctx->pc = 0x2674bcu;
    // NOP
label_2674c0:
    // 0x2674c0: 0x11551  .word       0x00011551                   # mthi        $zero # 00011540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2674c0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2674c4:
    // 0x2674c4: 0x7d00  sll         $t7, $zero, 20
    ctx->pc = 0x2674c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2674c8:
    // 0x2674c8: 0x0  nop
    ctx->pc = 0x2674c8u;
    // NOP
label_2674cc:
    // 0x2674cc: 0x0  nop
    ctx->pc = 0x2674ccu;
    // NOP
label_2674d0:
    // 0x2674d0: 0x11561  .word       0x00011561                   # addu        $v0, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2674d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2674d4:
    // 0x2674d4: 0x6940  sll         $t5, $zero, 5
    ctx->pc = 0x2674d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2674d8:
    // 0x2674d8: 0x0  nop
    ctx->pc = 0x2674d8u;
    // NOP
label_2674dc:
    // 0x2674dc: 0x0  nop
    ctx->pc = 0x2674dcu;
    // NOP
label_2674e0:
    // 0x2674e0: 0x1156f  .word       0x0001156F                   # dsubu       $v0, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2674e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_2674e4:
    // 0x2674e4: 0x35e0  .word       0x000035E0                   # add         $a2, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2674e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2674e8:
    // 0x2674e8: 0x0  nop
    ctx->pc = 0x2674e8u;
    // NOP
label_2674ec:
    // 0x2674ec: 0x0  nop
    ctx->pc = 0x2674ecu;
    // NOP
label_2674f0:
    // 0x2674f0: 0x11576  tne         $zero, $at, 85
    ctx->pc = 0x2674f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2674f4:
    // 0x2674f4: 0x9c40  sll         $s3, $zero, 17
    ctx->pc = 0x2674f4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2674f8:
    // 0x2674f8: 0x0  nop
    ctx->pc = 0x2674f8u;
    // NOP
label_2674fc:
    // 0x2674fc: 0x0  nop
    ctx->pc = 0x2674fcu;
    // NOP
label_267500:
    // 0x267500: 0x1158a  .word       0x0001158A                   # movz        $v0, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267500u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_267504:
    // 0x267504: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x267504u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_267508:
    // 0x267508: 0x0  nop
    ctx->pc = 0x267508u;
    // NOP
label_26750c:
    // 0x26750c: 0x0  nop
    ctx->pc = 0x26750cu;
    // NOP
label_267510:
    // 0x267510: 0x1159a  .word       0x0001159A                   # div         $v0, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267510u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_267514:
    // 0x267514: 0x8810  mfhi        $s1
    ctx->pc = 0x267514u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_267518:
    // 0x267518: 0x0  nop
    ctx->pc = 0x267518u;
    // NOP
label_26751c:
    // 0x26751c: 0x0  nop
    ctx->pc = 0x26751cu;
    // NOP
label_267520:
    // 0x267520: 0x115ac  .word       0x000115AC                   # dadd        $v0, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267520u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_267524:
    // 0x267524: 0x6b00  sll         $t5, $zero, 12
    ctx->pc = 0x267524u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_267528:
    // 0x267528: 0x0  nop
    ctx->pc = 0x267528u;
    // NOP
label_26752c:
    // 0x26752c: 0x0  nop
    ctx->pc = 0x26752cu;
    // NOP
label_267530:
    // 0x267530: 0x115ba  dsrl        $v0, $at, 22
    ctx->pc = 0x267530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> 22);
label_267534:
    // 0x267534: 0x5340  sll         $t2, $zero, 13
    ctx->pc = 0x267534u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_267538:
    // 0x267538: 0x0  nop
    ctx->pc = 0x267538u;
    // NOP
label_26753c:
    // 0x26753c: 0x0  nop
    ctx->pc = 0x26753cu;
    // NOP
label_267540:
    // 0x267540: 0x115c5  .word       0x000115C5                   # INVALID     $zero, $at, 0x15C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267540u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x267540 raw=0x000115C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267544:
    // 0x267544: 0x5c20  .word       0x00005C20                   # add         $t3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_267548:
    // 0x267548: 0x0  nop
    ctx->pc = 0x267548u;
    // NOP
label_26754c:
    // 0x26754c: 0x0  nop
    ctx->pc = 0x26754cu;
    // NOP
label_267550:
    // 0x267550: 0x115d1  .word       0x000115D1                   # mthi        $zero # 000115C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267550u;
    ctx->hi = GPR_U64(ctx, 0);
label_267554:
    // 0x267554: 0x5a90  .word       0x00005A90                   # mfhi        $t3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267554u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_267558:
    // 0x267558: 0x0  nop
    ctx->pc = 0x267558u;
    // NOP
label_26755c:
    // 0x26755c: 0x0  nop
    ctx->pc = 0x26755cu;
    // NOP
label_267560:
    // 0x267560: 0x115dd  .word       0x000115DD                   # dmultu      $zero, $at # 000015C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267560u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x267560 raw=0x000115DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267564:
    // 0x267564: 0x7190  .word       0x00007190                   # mfhi        $t6 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267564u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_267568:
    // 0x267568: 0x0  nop
    ctx->pc = 0x267568u;
    // NOP
label_26756c:
    // 0x26756c: 0x0  nop
    ctx->pc = 0x26756cu;
    // NOP
label_267570:
    // 0x267570: 0x115ec  .word       0x000115EC                   # dadd        $v0, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267570u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_267574:
    // 0x267574: 0x7940  sll         $t7, $zero, 5
    ctx->pc = 0x267574u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_267578:
    // 0x267578: 0x0  nop
    ctx->pc = 0x267578u;
    // NOP
label_26757c:
    // 0x26757c: 0x0  nop
    ctx->pc = 0x26757cu;
    // NOP
label_267580:
    // 0x267580: 0x115fc  dsll32      $v0, $at, 23
    ctx->pc = 0x267580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << (32 + 23));
label_267584:
    // 0x267584: 0x96a0  .word       0x000096A0                   # add         $s2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267584u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_267588:
    // 0x267588: 0x0  nop
    ctx->pc = 0x267588u;
    // NOP
label_26758c:
    // 0x26758c: 0x0  nop
    ctx->pc = 0x26758cu;
    // NOP
label_267590:
    // 0x267590: 0x1160f  .word       0x0001160F                   # sync.p # 00011000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267590u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_267594:
    // 0x267594: 0x6e70  tge         $zero, $zero, 441
    ctx->pc = 0x267594u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267598:
    // 0x267598: 0x0  nop
    ctx->pc = 0x267598u;
    // NOP
label_26759c:
    // 0x26759c: 0x0  nop
    ctx->pc = 0x26759cu;
    // NOP
label_2675a0:
    // 0x2675a0: 0x1161d  .word       0x0001161D                   # dmultu      $zero, $at # 00001600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2675a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2675A0 raw=0x0001161D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2675a4:
    // 0x2675a4: 0x98e0  .word       0x000098E0                   # add         $s3, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2675a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2675a8:
    // 0x2675a8: 0x0  nop
    ctx->pc = 0x2675a8u;
    // NOP
label_2675ac:
    // 0x2675ac: 0x0  nop
    ctx->pc = 0x2675acu;
    // NOP
label_2675b0:
    // 0x2675b0: 0x11631  tgeu        $zero, $at, 88
    ctx->pc = 0x2675b0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2675b4:
    // 0x2675b4: 0x6c80  sll         $t5, $zero, 18
    ctx->pc = 0x2675b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2675b8:
    // 0x2675b8: 0x0  nop
    ctx->pc = 0x2675b8u;
    // NOP
label_2675bc:
    // 0x2675bc: 0x0  nop
    ctx->pc = 0x2675bcu;
    // NOP
label_2675c0:
    // 0x2675c0: 0x1163f  dsra32      $v0, $at, 24
    ctx->pc = 0x2675c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> (32 + 24));
label_2675c4:
    // 0x2675c4: 0x82a0  .word       0x000082A0                   # add         $s0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2675c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2675c8:
    // 0x2675c8: 0x0  nop
    ctx->pc = 0x2675c8u;
    // NOP
label_2675cc:
    // 0x2675cc: 0x0  nop
    ctx->pc = 0x2675ccu;
    // NOP
label_2675d0:
    // 0x2675d0: 0x11650  .word       0x00011650                   # mfhi        $v0 # 00010640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2675d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2675d4:
    // 0x2675d4: 0x8e80  sll         $s1, $zero, 26
    ctx->pc = 0x2675d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_2675d8:
    // 0x2675d8: 0x0  nop
    ctx->pc = 0x2675d8u;
    // NOP
label_2675dc:
    // 0x2675dc: 0x0  nop
    ctx->pc = 0x2675dcu;
    // NOP
label_2675e0:
    // 0x2675e0: 0x11662  .word       0x00011662                   # neg         $v0, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2675e0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_2675e4:
    // 0x2675e4: 0x74f0  tge         $zero, $zero, 467
    ctx->pc = 0x2675e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2675e8:
    // 0x2675e8: 0x0  nop
    ctx->pc = 0x2675e8u;
    // NOP
label_2675ec:
    // 0x2675ec: 0x0  nop
    ctx->pc = 0x2675ecu;
    // NOP
label_2675f0:
    // 0x2675f0: 0x11671  tgeu        $zero, $at, 89
    ctx->pc = 0x2675f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2675f4:
    // 0x2675f4: 0x7f30  tge         $zero, $zero, 508
    ctx->pc = 0x2675f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2675f8:
    // 0x2675f8: 0x0  nop
    ctx->pc = 0x2675f8u;
    // NOP
label_2675fc:
    // 0x2675fc: 0x0  nop
    ctx->pc = 0x2675fcu;
    // NOP
label_267600:
    // 0x267600: 0x11681  .word       0x00011681                   # INVALID     $zero, $at, 0x1681 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x267600 raw=0x00011681"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267604:
    // 0x267604: 0x7680  sll         $t6, $zero, 26
    ctx->pc = 0x267604u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_267608:
    // 0x267608: 0x0  nop
    ctx->pc = 0x267608u;
    // NOP
label_26760c:
    // 0x26760c: 0x0  nop
    ctx->pc = 0x26760cu;
    // NOP
label_267610:
    // 0x267610: 0x11690  .word       0x00011690                   # mfhi        $v0 # 00010680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267610u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_267614:
    // 0x267614: 0x7d60  .word       0x00007D60                   # add         $t7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267614u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_267618:
    // 0x267618: 0x0  nop
    ctx->pc = 0x267618u;
    // NOP
label_26761c:
    // 0x26761c: 0x0  nop
    ctx->pc = 0x26761cu;
    // NOP
label_267620:
    // 0x267620: 0x116a0  .word       0x000116A0                   # add         $v0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267620u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_267624:
    // 0x267624: 0x9ce0  .word       0x00009CE0                   # add         $s3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_267628:
    // 0x267628: 0x0  nop
    ctx->pc = 0x267628u;
    // NOP
label_26762c:
    // 0x26762c: 0x0  nop
    ctx->pc = 0x26762cu;
    // NOP
label_267630:
    // 0x267630: 0x116b4  teq         $zero, $at, 90
    ctx->pc = 0x267630u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267634:
    // 0x267634: 0x7dc0  sll         $t7, $zero, 23
    ctx->pc = 0x267634u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_267638:
    // 0x267638: 0x0  nop
    ctx->pc = 0x267638u;
    // NOP
label_26763c:
    // 0x26763c: 0x0  nop
    ctx->pc = 0x26763cu;
    // NOP
label_267640:
    // 0x267640: 0x116c4  .word       0x000116C4                   # sllv        $v0, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267644:
    // 0x267644: 0x7290  .word       0x00007290                   # mfhi        $t6 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267644u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_267648:
    // 0x267648: 0x0  nop
    ctx->pc = 0x267648u;
    // NOP
label_26764c:
    // 0x26764c: 0x0  nop
    ctx->pc = 0x26764cu;
    // NOP
label_267650:
    // 0x267650: 0x116d3  .word       0x000116D3                   # mtlo        $zero # 000116C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267650u;
    ctx->lo = GPR_U64(ctx, 0);
label_267654:
    // 0x267654: 0x7dd0  .word       0x00007DD0                   # mfhi        $t7 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267654u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_267658:
    // 0x267658: 0x0  nop
    ctx->pc = 0x267658u;
    // NOP
label_26765c:
    // 0x26765c: 0x0  nop
    ctx->pc = 0x26765cu;
    // NOP
label_267660:
    // 0x267660: 0x116e3  .word       0x000116E3                   # negu        $v0, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_267664:
    // 0x267664: 0x96c0  sll         $s2, $zero, 27
    ctx->pc = 0x267664u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_267668:
    // 0x267668: 0x0  nop
    ctx->pc = 0x267668u;
    // NOP
label_26766c:
    // 0x26766c: 0x0  nop
    ctx->pc = 0x26766cu;
    // NOP
label_267670:
    // 0x267670: 0x116f6  tne         $zero, $at, 91
    ctx->pc = 0x267670u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267674:
    // 0x267674: 0x5b50  .word       0x00005B50                   # mfhi        $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267674u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_267678:
    // 0x267678: 0x0  nop
    ctx->pc = 0x267678u;
    // NOP
label_26767c:
    // 0x26767c: 0x0  nop
    ctx->pc = 0x26767cu;
    // NOP
label_267680:
    // 0x267680: 0x11702  srl         $v0, $at, 28
    ctx->pc = 0x267680u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 1), 28));
label_267684:
    // 0x267684: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x267684u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_267688:
    // 0x267688: 0x0  nop
    ctx->pc = 0x267688u;
    // NOP
label_26768c:
    // 0x26768c: 0x0  nop
    ctx->pc = 0x26768cu;
    // NOP
label_267690:
    // 0x267690: 0x11713  .word       0x00011713                   # mtlo        $zero # 00011700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267690u;
    ctx->lo = GPR_U64(ctx, 0);
label_267694:
    // 0x267694: 0x67a0  .word       0x000067A0                   # add         $t4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_267698:
    // 0x267698: 0x0  nop
    ctx->pc = 0x267698u;
    // NOP
label_26769c:
    // 0x26769c: 0x0  nop
    ctx->pc = 0x26769cu;
    // NOP
label_2676a0:
    // 0x2676a0: 0x11720  .word       0x00011720                   # add         $v0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676a0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2676a4:
    // 0x2676a4: 0x68e0  .word       0x000068E0                   # add         $t5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2676a8:
    // 0x2676a8: 0x0  nop
    ctx->pc = 0x2676a8u;
    // NOP
label_2676ac:
    // 0x2676ac: 0x0  nop
    ctx->pc = 0x2676acu;
    // NOP
label_2676b0:
    // 0x2676b0: 0x1172e  .word       0x0001172E                   # dsub        $v0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_2676b4:
    // 0x2676b4: 0x5bd0  .word       0x00005BD0                   # mfhi        $t3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676b4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2676b8:
    // 0x2676b8: 0x0  nop
    ctx->pc = 0x2676b8u;
    // NOP
label_2676bc:
    // 0x2676bc: 0x0  nop
    ctx->pc = 0x2676bcu;
    // NOP
label_2676c0:
    // 0x2676c0: 0x1173a  dsrl        $v0, $at, 28
    ctx->pc = 0x2676c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> 28);
label_2676c4:
    // 0x2676c4: 0x7ff0  tge         $zero, $zero, 511
    ctx->pc = 0x2676c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2676c8:
    // 0x2676c8: 0x0  nop
    ctx->pc = 0x2676c8u;
    // NOP
label_2676cc:
    // 0x2676cc: 0x0  nop
    ctx->pc = 0x2676ccu;
    // NOP
label_2676d0:
    // 0x2676d0: 0x1174a  .word       0x0001174A                   # movz        $v0, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676d0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2676d4:
    // 0x2676d4: 0x6f80  sll         $t5, $zero, 30
    ctx->pc = 0x2676d4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_2676d8:
    // 0x2676d8: 0x0  nop
    ctx->pc = 0x2676d8u;
    // NOP
label_2676dc:
    // 0x2676dc: 0x0  nop
    ctx->pc = 0x2676dcu;
    // NOP
label_2676e0:
    // 0x2676e0: 0x11758  .word       0x00011758                   # mult        $v0, $zero, $at # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2676e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2676e4:
    // 0x2676e4: 0x74f0  tge         $zero, $zero, 467
    ctx->pc = 0x2676e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2676e8:
    // 0x2676e8: 0x0  nop
    ctx->pc = 0x2676e8u;
    // NOP
label_2676ec:
    // 0x2676ec: 0x0  nop
    ctx->pc = 0x2676ecu;
    // NOP
label_2676f0:
    // 0x2676f0: 0x11767  .word       0x00011767                   # nor         $v0, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676f0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_2676f4:
    // 0x2676f4: 0x80a0  .word       0x000080A0                   # add         $s0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2676f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_2676f8:
    // 0x2676f8: 0x0  nop
    ctx->pc = 0x2676f8u;
    // NOP
label_2676fc:
    // 0x2676fc: 0x0  nop
    ctx->pc = 0x2676fcu;
    // NOP
label_267700:
    // 0x267700: 0x11778  dsll        $v0, $at, 29
    ctx->pc = 0x267700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << 29);
label_267704:
    // 0x267704: 0x59c0  sll         $t3, $zero, 7
    ctx->pc = 0x267704u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_267708:
    // 0x267708: 0x0  nop
    ctx->pc = 0x267708u;
    // NOP
label_26770c:
    // 0x26770c: 0x0  nop
    ctx->pc = 0x26770cu;
    // NOP
label_267710:
    // 0x267710: 0x11784  .word       0x00011784                   # sllv        $v0, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267714:
    // 0x267714: 0x3e90  .word       0x00003E90                   # mfhi        $a3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267714u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_267718:
    // 0x267718: 0x0  nop
    ctx->pc = 0x267718u;
    // NOP
label_26771c:
    // 0x26771c: 0x0  nop
    ctx->pc = 0x26771cu;
    // NOP
label_267720:
    // 0x267720: 0x1178c  .word       0x0001178C                   # syscall     94 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267720u;
    ctx->pc = 0x267724u;
runtime->handleSyscall(rdram, ctx, 0x45Eu);
label_267724:
    // 0x267724: 0x9260  .word       0x00009260                   # add         $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_267728:
    // 0x267728: 0x0  nop
    ctx->pc = 0x267728u;
    // NOP
label_26772c:
    // 0x26772c: 0x0  nop
    ctx->pc = 0x26772cu;
    // NOP
label_267730:
    // 0x267730: 0x1179f  .word       0x0001179F                   # ddivu       $v0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x267730 raw=0x0001179F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267734:
    // 0x267734: 0xab70  tge         $zero, $zero, 685
    ctx->pc = 0x267734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267738:
    // 0x267738: 0x0  nop
    ctx->pc = 0x267738u;
    // NOP
label_26773c:
    // 0x26773c: 0x0  nop
    ctx->pc = 0x26773cu;
    // NOP
label_267740:
    // 0x267740: 0x117b5  .word       0x000117B5                   # INVALID     $zero, $at, 0x17B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x267740 raw=0x000117B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267744:
    // 0x267744: 0x7600  sll         $t6, $zero, 24
    ctx->pc = 0x267744u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_267748:
    // 0x267748: 0x0  nop
    ctx->pc = 0x267748u;
    // NOP
label_26774c:
    // 0x26774c: 0x0  nop
    ctx->pc = 0x26774cu;
    // NOP
label_267750:
    // 0x267750: 0x117c4  .word       0x000117C4                   # sllv        $v0, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267754:
    // 0x267754: 0x9bd0  .word       0x00009BD0                   # mfhi        $s3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267754u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_267758:
    // 0x267758: 0x0  nop
    ctx->pc = 0x267758u;
    // NOP
label_26775c:
    // 0x26775c: 0x0  nop
    ctx->pc = 0x26775cu;
    // NOP
label_267760:
    // 0x267760: 0x117d8  .word       0x000117D8                   # mult        $v0, $zero, $at # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x267760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_267764:
    // 0x267764: 0x97f0  tge         $zero, $zero, 607
    ctx->pc = 0x267764u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267768:
    // 0x267768: 0x0  nop
    ctx->pc = 0x267768u;
    // NOP
label_26776c:
    // 0x26776c: 0x0  nop
    ctx->pc = 0x26776cu;
    // NOP
label_267770:
    // 0x267770: 0x117eb  .word       0x000117EB                   # sltu        $v0, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_267774:
    // 0x267774: 0x9790  .word       0x00009790                   # mfhi        $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267774u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_267778:
    // 0x267778: 0x0  nop
    ctx->pc = 0x267778u;
    // NOP
label_26777c:
    // 0x26777c: 0x0  nop
    ctx->pc = 0x26777cu;
    // NOP
label_267780:
    // 0x267780: 0x117fe  dsrl32      $v0, $at, 31
    ctx->pc = 0x267780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (32 + 31));
label_267784:
    // 0x267784: 0xf270  tge         $zero, $zero, 969
    ctx->pc = 0x267784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267788:
    // 0x267788: 0x0  nop
    ctx->pc = 0x267788u;
    // NOP
label_26778c:
    // 0x26778c: 0x0  nop
    ctx->pc = 0x26778cu;
    // NOP
label_267790:
    // 0x267790: 0x1181d  .word       0x0001181D                   # dmultu      $zero, $at # 00001800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x267790 raw=0x0001181D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267794:
    // 0x267794: 0xa300  sll         $s4, $zero, 12
    ctx->pc = 0x267794u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_267798:
    // 0x267798: 0x0  nop
    ctx->pc = 0x267798u;
    // NOP
label_26779c:
    // 0x26779c: 0x0  nop
    ctx->pc = 0x26779cu;
    // NOP
label_2677a0:
    // 0x2677a0: 0x11832  tlt         $zero, $at, 96
    ctx->pc = 0x2677a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2677a4:
    // 0x2677a4: 0xadd0  .word       0x0000ADD0                   # mfhi        $s5 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2677a4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2677a8:
    // 0x2677a8: 0x0  nop
    ctx->pc = 0x2677a8u;
    // NOP
label_2677ac:
    // 0x2677ac: 0x0  nop
    ctx->pc = 0x2677acu;
    // NOP
label_2677b0:
    // 0x2677b0: 0x11848  .word       0x00011848                   # jr          $zero # 00011840 <InstrIdType: CPU_SPECIAL>
label_2677b4:
    if (ctx->pc == 0x2677B4u) {
        ctx->pc = 0x2677B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677B0u;
        // 0x2677b4: 0x8550  .word       0x00008550                   # mfhi        $s0 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 16, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2677B8u;
        goto label_2677b8;
    }
    ctx->pc = 0x2677B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2677B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2677B0u;
        // 0x2677b4: 0x8550  .word       0x00008550                   # mfhi        $s0 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 16, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2677B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2677B8u;
label_2677b8:
    // 0x2677b8: 0x0  nop
    ctx->pc = 0x2677b8u;
    // NOP
label_2677bc:
    // 0x2677bc: 0x0  nop
    ctx->pc = 0x2677bcu;
    // NOP
label_2677c0:
    // 0x2677c0: 0x11859  .word       0x00011859                   # multu       $zero, $at # 00001840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2677c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2677c4:
    // 0x2677c4: 0xb4b0  tge         $zero, $zero, 722
    ctx->pc = 0x2677c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2677c8:
    // 0x2677c8: 0x0  nop
    ctx->pc = 0x2677c8u;
    // NOP
label_2677cc:
    // 0x2677cc: 0x0  nop
    ctx->pc = 0x2677ccu;
    // NOP
label_2677d0:
    // 0x2677d0: 0x11870  tge         $zero, $at, 97
    ctx->pc = 0x2677d0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2677d4:
    // 0x2677d4: 0xde70  tge         $zero, $zero, 889
    ctx->pc = 0x2677d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2677d8:
    // 0x2677d8: 0x0  nop
    ctx->pc = 0x2677d8u;
    // NOP
label_2677dc:
    // 0x2677dc: 0x0  nop
    ctx->pc = 0x2677dcu;
    // NOP
label_2677e0:
    // 0x2677e0: 0x1188c  .word       0x0001188C                   # syscall     98 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2677e0u;
    ctx->pc = 0x2677E4u;
runtime->handleSyscall(rdram, ctx, 0x462u);
label_2677e4:
    // 0x2677e4: 0x83f0  tge         $zero, $zero, 527
    ctx->pc = 0x2677e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2677e8:
    // 0x2677e8: 0x0  nop
    ctx->pc = 0x2677e8u;
    // NOP
label_2677ec:
    // 0x2677ec: 0x0  nop
    ctx->pc = 0x2677ecu;
    // NOP
label_2677f0:
    // 0x2677f0: 0x1189d  .word       0x0001189D                   # dmultu      $zero, $at # 00001880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2677f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2677F0 raw=0x0001189D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2677f4:
    // 0x2677f4: 0xcb30  tge         $zero, $zero, 812
    ctx->pc = 0x2677f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2677f8:
    // 0x2677f8: 0x0  nop
    ctx->pc = 0x2677f8u;
    // NOP
label_2677fc:
    // 0x2677fc: 0x0  nop
    ctx->pc = 0x2677fcu;
    // NOP
label_267800:
    // 0x267800: 0x118b7  .word       0x000118B7                   # INVALID     $zero, $at, 0x18B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x267800 raw=0x000118B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267804:
    // 0x267804: 0x9f20  .word       0x00009F20                   # add         $s3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267804u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_267808:
    // 0x267808: 0x0  nop
    ctx->pc = 0x267808u;
    // NOP
label_26780c:
    // 0x26780c: 0x0  nop
    ctx->pc = 0x26780cu;
    // NOP
label_267810:
    // 0x267810: 0x118cb  .word       0x000118CB                   # movn        $v1, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267810u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_267814:
    // 0x267814: 0xc3b0  tge         $zero, $zero, 782
    ctx->pc = 0x267814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267818:
    // 0x267818: 0x0  nop
    ctx->pc = 0x267818u;
    // NOP
label_26781c:
    // 0x26781c: 0x0  nop
    ctx->pc = 0x26781cu;
    // NOP
label_267820:
    // 0x267820: 0x118e4  .word       0x000118E4                   # and         $v1, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_267824:
    // 0x267824: 0x6c00  sll         $t5, $zero, 16
    ctx->pc = 0x267824u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_267828:
    // 0x267828: 0x0  nop
    ctx->pc = 0x267828u;
    // NOP
label_26782c:
    // 0x26782c: 0x0  nop
    ctx->pc = 0x26782cu;
    // NOP
label_267830:
    // 0x267830: 0x118f2  tlt         $zero, $at, 99
    ctx->pc = 0x267830u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267834:
    // 0x267834: 0xf060  .word       0x0000F060                   # add         $fp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267834u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_267838:
    // 0x267838: 0x0  nop
    ctx->pc = 0x267838u;
    // NOP
label_26783c:
    // 0x26783c: 0x0  nop
    ctx->pc = 0x26783cu;
    // NOP
label_267840:
    // 0x267840: 0x11911  .word       0x00011911                   # mthi        $zero # 00011900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267840u;
    ctx->hi = GPR_U64(ctx, 0);
label_267844:
    // 0x267844: 0xb800  sll         $s7, $zero, 0
    ctx->pc = 0x267844u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_267848:
    // 0x267848: 0x0  nop
    ctx->pc = 0x267848u;
    // NOP
label_26784c:
    // 0x26784c: 0x0  nop
    ctx->pc = 0x26784cu;
    // NOP
label_267850:
    // 0x267850: 0x11928  .word       0x00011928                   # mfsa        $v1 # 00010100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x267850u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_267854:
    // 0x267854: 0x9ae0  .word       0x00009AE0                   # add         $s3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_267858:
    // 0x267858: 0x0  nop
    ctx->pc = 0x267858u;
    // NOP
label_26785c:
    // 0x26785c: 0x0  nop
    ctx->pc = 0x26785cu;
    // NOP
label_267860:
    // 0x267860: 0x1193c  dsll32      $v1, $at, 4
    ctx->pc = 0x267860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << (32 + 4));
label_267864:
    // 0x267864: 0x71c0  sll         $t6, $zero, 7
    ctx->pc = 0x267864u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_267868:
    // 0x267868: 0x0  nop
    ctx->pc = 0x267868u;
    // NOP
label_26786c:
    // 0x26786c: 0x0  nop
    ctx->pc = 0x26786cu;
    // NOP
label_267870:
    // 0x267870: 0x1194b  .word       0x0001194B                   # movn        $v1, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267870u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_267874:
    // 0x267874: 0x77a0  .word       0x000077A0                   # add         $t6, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267874u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_267878:
    // 0x267878: 0x0  nop
    ctx->pc = 0x267878u;
    // NOP
label_26787c:
    // 0x26787c: 0x0  nop
    ctx->pc = 0x26787cu;
    // NOP
label_267880:
    // 0x267880: 0x1195a  .word       0x0001195A                   # div         $v1, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267880u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_267884:
    // 0x267884: 0xf180  sll         $fp, $zero, 6
    ctx->pc = 0x267884u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_267888:
    // 0x267888: 0x0  nop
    ctx->pc = 0x267888u;
    // NOP
label_26788c:
    // 0x26788c: 0x0  nop
    ctx->pc = 0x26788cu;
    // NOP
label_267890:
    // 0x267890: 0x11979  .word       0x00011979                   # INVALID     $zero, $at, 0x1979 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267890u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x267890 raw=0x00011979"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267894:
    // 0x267894: 0x97d0  .word       0x000097D0                   # mfhi        $s2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267894u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_267898:
    // 0x267898: 0x0  nop
    ctx->pc = 0x267898u;
    // NOP
label_26789c:
    // 0x26789c: 0x0  nop
    ctx->pc = 0x26789cu;
    // NOP
label_2678a0:
    // 0x2678a0: 0x1198c  .word       0x0001198C                   # syscall     102 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2678a0u;
    ctx->pc = 0x2678A4u;
runtime->handleSyscall(rdram, ctx, 0x466u);
label_2678a4:
    // 0x2678a4: 0x7510  .word       0x00007510                   # mfhi        $t6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2678a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2678a8:
    // 0x2678a8: 0x0  nop
    ctx->pc = 0x2678a8u;
    // NOP
label_2678ac:
    // 0x2678ac: 0x0  nop
    ctx->pc = 0x2678acu;
    // NOP
label_2678b0:
    // 0x2678b0: 0x1199b  .word       0x0001199B                   # divu        $v1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2678b0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2678b4:
    // 0x2678b4: 0xa670  tge         $zero, $zero, 665
    ctx->pc = 0x2678b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2678b8:
    // 0x2678b8: 0x0  nop
    ctx->pc = 0x2678b8u;
    // NOP
label_2678bc:
    // 0x2678bc: 0x0  nop
    ctx->pc = 0x2678bcu;
    // NOP
label_2678c0:
    // 0x2678c0: 0x119b0  tge         $zero, $at, 102
    ctx->pc = 0x2678c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2678c4:
    // 0x2678c4: 0x9770  tge         $zero, $zero, 605
    ctx->pc = 0x2678c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2678c8:
    // 0x2678c8: 0x0  nop
    ctx->pc = 0x2678c8u;
    // NOP
label_2678cc:
    // 0x2678cc: 0x0  nop
    ctx->pc = 0x2678ccu;
    // NOP
label_2678d0:
    // 0x2678d0: 0x119c3  sra         $v1, $at, 7
    ctx->pc = 0x2678d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 1), 7));
label_2678d4:
    // 0x2678d4: 0xa8e0  .word       0x0000A8E0                   # add         $s5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2678d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2678d8:
    // 0x2678d8: 0x0  nop
    ctx->pc = 0x2678d8u;
    // NOP
label_2678dc:
    // 0x2678dc: 0x0  nop
    ctx->pc = 0x2678dcu;
    // NOP
label_2678e0:
    // 0x2678e0: 0x119d9  .word       0x000119D9                   # multu       $zero, $at # 000019C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2678e0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2678e4:
    // 0x2678e4: 0x8570  tge         $zero, $zero, 533
    ctx->pc = 0x2678e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2678e8:
    // 0x2678e8: 0x0  nop
    ctx->pc = 0x2678e8u;
    // NOP
label_2678ec:
    // 0x2678ec: 0x0  nop
    ctx->pc = 0x2678ecu;
    // NOP
label_2678f0:
    // 0x2678f0: 0x119ea  .word       0x000119EA                   # slt         $v1, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2678f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2678f4:
    // 0x2678f4: 0xdd90  .word       0x0000DD90                   # mfhi        $k1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2678f4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_2678f8:
    // 0x2678f8: 0x0  nop
    ctx->pc = 0x2678f8u;
    // NOP
label_2678fc:
    // 0x2678fc: 0x0  nop
    ctx->pc = 0x2678fcu;
    // NOP
label_267900:
    // 0x267900: 0x11a06  .word       0x00011A06                   # srlv        $v1, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267900u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_267904:
    // 0x267904: 0xa150  .word       0x0000A150                   # mfhi        $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267904u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_267908:
    // 0x267908: 0x0  nop
    ctx->pc = 0x267908u;
    // NOP
label_26790c:
    // 0x26790c: 0x0  nop
    ctx->pc = 0x26790cu;
    // NOP
label_267910:
    // 0x267910: 0x11a1b  .word       0x00011A1B                   # divu        $v1, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267910u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_267914:
    // 0x267914: 0xa150  .word       0x0000A150                   # mfhi        $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267914u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_267918:
    // 0x267918: 0x0  nop
    ctx->pc = 0x267918u;
    // NOP
label_26791c:
    // 0x26791c: 0x0  nop
    ctx->pc = 0x26791cu;
    // NOP
label_267920:
    // 0x267920: 0x11a30  tge         $zero, $at, 104
    ctx->pc = 0x267920u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_267924:
    // 0x267924: 0x8620  .word       0x00008620                   # add         $s0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_267928:
    // 0x267928: 0x0  nop
    ctx->pc = 0x267928u;
    // NOP
label_26792c:
    // 0x26792c: 0x0  nop
    ctx->pc = 0x26792cu;
    // NOP
label_267930:
    // 0x267930: 0x11a41  .word       0x00011A41                   # INVALID     $zero, $at, 0x1A41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267930u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x267930 raw=0x00011A41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267934:
    // 0x267934: 0x8050  .word       0x00008050                   # mfhi        $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267934u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_267938:
    // 0x267938: 0x0  nop
    ctx->pc = 0x267938u;
    // NOP
label_26793c:
    // 0x26793c: 0x0  nop
    ctx->pc = 0x26793cu;
    // NOP
label_267940:
    // 0x267940: 0x11a52  .word       0x00011A52                   # mflo        $v1 # 00010240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267940u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_267944:
    // 0x267944: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x267944u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_267948:
    // 0x267948: 0x0  nop
    ctx->pc = 0x267948u;
    // NOP
label_26794c:
    // 0x26794c: 0x0  nop
    ctx->pc = 0x26794cu;
    // NOP
label_267950:
    // 0x267950: 0x11a5f  .word       0x00011A5F                   # ddivu       $v1, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x267950 raw=0x00011A5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267954:
    // 0x267954: 0xad90  .word       0x0000AD90                   # mfhi        $s5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267954u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_267958:
    // 0x267958: 0x0  nop
    ctx->pc = 0x267958u;
    // NOP
label_26795c:
    // 0x26795c: 0x0  nop
    ctx->pc = 0x26795cu;
    // NOP
label_267960:
    // 0x267960: 0x11a75  .word       0x00011A75                   # INVALID     $zero, $at, 0x1A75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x267960 raw=0x00011A75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_267964:
    // 0x267964: 0xc8b0  tge         $zero, $zero, 802
    ctx->pc = 0x267964u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267968:
    // 0x267968: 0x0  nop
    ctx->pc = 0x267968u;
    // NOP
label_26796c:
    // 0x26796c: 0x0  nop
    ctx->pc = 0x26796cu;
    // NOP
label_267970:
    // 0x267970: 0x11a8f  .word       0x00011A8F                   # sync # 00011800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267970u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_267974:
    // 0x267974: 0xb140  sll         $s6, $zero, 5
    ctx->pc = 0x267974u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_267978:
    // 0x267978: 0x0  nop
    ctx->pc = 0x267978u;
    // NOP
label_26797c:
    // 0x26797c: 0x0  nop
    ctx->pc = 0x26797cu;
    // NOP
label_267980:
    // 0x267980: 0x11aa6  .word       0x00011AA6                   # xor         $v1, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_267984:
    // 0x267984: 0x9f20  .word       0x00009F20                   # add         $s3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_267988:
    // 0x267988: 0x0  nop
    ctx->pc = 0x267988u;
    // NOP
label_26798c:
    // 0x26798c: 0x0  nop
    ctx->pc = 0x26798cu;
    // NOP
label_267990:
    // 0x267990: 0x11aba  dsrl        $v1, $at, 10
    ctx->pc = 0x267990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> 10);
label_267994:
    // 0x267994: 0xa090  .word       0x0000A090                   # mfhi        $s4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267994u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_267998:
    // 0x267998: 0x0  nop
    ctx->pc = 0x267998u;
    // NOP
label_26799c:
    // 0x26799c: 0x0  nop
    ctx->pc = 0x26799cu;
    // NOP
label_2679a0:
    // 0x2679a0: 0x11acf  .word       0x00011ACF                   # sync # 00011800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2679a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2679a4:
    // 0x2679a4: 0xab80  sll         $s5, $zero, 14
    ctx->pc = 0x2679a4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_2679a8:
    // 0x2679a8: 0x0  nop
    ctx->pc = 0x2679a8u;
    // NOP
label_2679ac:
    // 0x2679ac: 0x0  nop
    ctx->pc = 0x2679acu;
    // NOP
label_2679b0:
    // 0x2679b0: 0x11ae5  .word       0x00011AE5                   # or          $v1, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2679b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_2679b4:
    // 0x2679b4: 0x5410  .word       0x00005410                   # mfhi        $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2679b4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2679b8:
    // 0x2679b8: 0x0  nop
    ctx->pc = 0x2679b8u;
    // NOP
label_2679bc:
    // 0x2679bc: 0x0  nop
    ctx->pc = 0x2679bcu;
    // NOP
label_2679c0:
    // 0x2679c0: 0x11af0  tge         $zero, $at, 107
    ctx->pc = 0x2679c0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2679c4:
    // 0x2679c4: 0x3530  tge         $zero, $zero, 212
    ctx->pc = 0x2679c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2679c8:
    // 0x2679c8: 0x0  nop
    ctx->pc = 0x2679c8u;
    // NOP
label_2679cc:
    // 0x2679cc: 0x0  nop
    ctx->pc = 0x2679ccu;
    // NOP
label_2679d0:
    // 0x2679d0: 0x11af7  .word       0x00011AF7                   # INVALID     $zero, $at, 0x1AF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2679d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2679D0 raw=0x00011AF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2679d4:
    // 0x2679d4: 0x8e20  .word       0x00008E20                   # add         $s1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2679d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2679d8:
    // 0x2679d8: 0x0  nop
    ctx->pc = 0x2679d8u;
    // NOP
label_2679dc:
    // 0x2679dc: 0x0  nop
    ctx->pc = 0x2679dcu;
    // NOP
label_2679e0:
    // 0x2679e0: 0x11b09  .word       0x00011B09                   # jalr        $v1, $zero # 00010300 <InstrIdType: CPU_SPECIAL>
label_2679e4:
    if (ctx->pc == 0x2679E4u) {
        ctx->pc = 0x2679E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679E0u;
        // 0x2679e4: 0xb9c0  sll         $s7, $zero, 7 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2679E8u;
        goto label_2679e8;
    }
    ctx->pc = 0x2679E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 3, 0x2679E8u);
        ctx->pc = 0x2679E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679E0u;
        // 0x2679e4: 0xb9c0  sll         $s7, $zero, 7 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2679E0u, 0x2679E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2679E8u;
label_2679e8:
    // 0x2679e8: 0x0  nop
    ctx->pc = 0x2679e8u;
    // NOP
label_2679ec:
    // 0x2679ec: 0x0  nop
    ctx->pc = 0x2679ecu;
    // NOP
label_2679f0:
    // 0x2679f0: 0x11b21  .word       0x00011B21                   # addu        $v1, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2679f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2679f4:
    // 0x2679f4: 0x51d0  .word       0x000051D0                   # mfhi        $t2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2679f4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2679f8:
    // 0x2679f8: 0x0  nop
    ctx->pc = 0x2679f8u;
    // NOP
label_2679fc:
    // 0x2679fc: 0x0  nop
    ctx->pc = 0x2679fcu;
    // NOP
label_267a00:
    // 0x267a00: 0x11b2c  .word       0x00011B2C                   # dadd        $v1, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x267a00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_267a04:
    // 0x267a04: 0xe270  tge         $zero, $zero, 905
    ctx->pc = 0x267a04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_267a08:
    // 0x267a08: 0x0  nop
    ctx->pc = 0x267a08u;
    // NOP
label_267a0c:
    // 0x267a0c: 0x0  nop
    ctx->pc = 0x267a0cu;
    // NOP
    ctx->pc = 0x267a10u;
    return;
}

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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part61(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2721f8u: goto label_2721f8;
        case 0x2721fcu: goto label_2721fc;
        case 0x272200u: goto label_272200;
        case 0x272204u: goto label_272204;
        case 0x272208u: goto label_272208;
        case 0x27220cu: goto label_27220c;
        case 0x272210u: goto label_272210;
        case 0x272214u: goto label_272214;
        case 0x272218u: goto label_272218;
        case 0x27221cu: goto label_27221c;
        case 0x272220u: goto label_272220;
        case 0x272224u: goto label_272224;
        case 0x272228u: goto label_272228;
        case 0x27222cu: goto label_27222c;
        case 0x272230u: goto label_272230;
        case 0x272234u: goto label_272234;
        case 0x272238u: goto label_272238;
        case 0x27223cu: goto label_27223c;
        case 0x272240u: goto label_272240;
        case 0x272244u: goto label_272244;
        case 0x272248u: goto label_272248;
        case 0x27224cu: goto label_27224c;
        case 0x272250u: goto label_272250;
        case 0x272254u: goto label_272254;
        case 0x272258u: goto label_272258;
        case 0x27225cu: goto label_27225c;
        case 0x272260u: goto label_272260;
        case 0x272264u: goto label_272264;
        case 0x272268u: goto label_272268;
        case 0x27226cu: goto label_27226c;
        case 0x272270u: goto label_272270;
        case 0x272274u: goto label_272274;
        case 0x272278u: goto label_272278;
        case 0x27227cu: goto label_27227c;
        case 0x272280u: goto label_272280;
        case 0x272284u: goto label_272284;
        case 0x272288u: goto label_272288;
        case 0x27228cu: goto label_27228c;
        case 0x272290u: goto label_272290;
        case 0x272294u: goto label_272294;
        case 0x272298u: goto label_272298;
        case 0x27229cu: goto label_27229c;
        case 0x2722a0u: goto label_2722a0;
        case 0x2722a4u: goto label_2722a4;
        case 0x2722a8u: goto label_2722a8;
        case 0x2722acu: goto label_2722ac;
        case 0x2722b0u: goto label_2722b0;
        case 0x2722b4u: goto label_2722b4;
        case 0x2722b8u: goto label_2722b8;
        case 0x2722bcu: goto label_2722bc;
        case 0x2722c0u: goto label_2722c0;
        case 0x2722c4u: goto label_2722c4;
        case 0x2722c8u: goto label_2722c8;
        case 0x2722ccu: goto label_2722cc;
        case 0x2722d0u: goto label_2722d0;
        case 0x2722d4u: goto label_2722d4;
        case 0x2722d8u: goto label_2722d8;
        case 0x2722dcu: goto label_2722dc;
        case 0x2722e0u: goto label_2722e0;
        case 0x2722e4u: goto label_2722e4;
        case 0x2722e8u: goto label_2722e8;
        case 0x2722ecu: goto label_2722ec;
        case 0x2722f0u: goto label_2722f0;
        case 0x2722f4u: goto label_2722f4;
        case 0x2722f8u: goto label_2722f8;
        case 0x2722fcu: goto label_2722fc;
        case 0x272300u: goto label_272300;
        case 0x272304u: goto label_272304;
        case 0x272308u: goto label_272308;
        case 0x27230cu: goto label_27230c;
        case 0x272310u: goto label_272310;
        case 0x272314u: goto label_272314;
        case 0x272318u: goto label_272318;
        case 0x27231cu: goto label_27231c;
        case 0x272320u: goto label_272320;
        case 0x272324u: goto label_272324;
        case 0x272328u: goto label_272328;
        case 0x27232cu: goto label_27232c;
        case 0x272330u: goto label_272330;
        case 0x272334u: goto label_272334;
        case 0x272338u: goto label_272338;
        case 0x27233cu: goto label_27233c;
        case 0x272340u: goto label_272340;
        case 0x272344u: goto label_272344;
        case 0x272348u: goto label_272348;
        case 0x27234cu: goto label_27234c;
        case 0x272350u: goto label_272350;
        case 0x272354u: goto label_272354;
        case 0x272358u: goto label_272358;
        case 0x27235cu: goto label_27235c;
        case 0x272360u: goto label_272360;
        case 0x272364u: goto label_272364;
        case 0x272368u: goto label_272368;
        case 0x27236cu: goto label_27236c;
        case 0x272370u: goto label_272370;
        case 0x272374u: goto label_272374;
        case 0x272378u: goto label_272378;
        case 0x27237cu: goto label_27237c;
        case 0x272380u: goto label_272380;
        case 0x272384u: goto label_272384;
        case 0x272388u: goto label_272388;
        case 0x27238cu: goto label_27238c;
        case 0x272390u: goto label_272390;
        case 0x272394u: goto label_272394;
        case 0x272398u: goto label_272398;
        case 0x27239cu: goto label_27239c;
        case 0x2723a0u: goto label_2723a0;
        case 0x2723a4u: goto label_2723a4;
        case 0x2723a8u: goto label_2723a8;
        case 0x2723acu: goto label_2723ac;
        case 0x2723b0u: goto label_2723b0;
        case 0x2723b4u: goto label_2723b4;
        case 0x2723b8u: goto label_2723b8;
        case 0x2723bcu: goto label_2723bc;
        case 0x2723c0u: goto label_2723c0;
        case 0x2723c4u: goto label_2723c4;
        case 0x2723c8u: goto label_2723c8;
        case 0x2723ccu: goto label_2723cc;
        case 0x2723d0u: goto label_2723d0;
        case 0x2723d4u: goto label_2723d4;
        case 0x2723d8u: goto label_2723d8;
        case 0x2723dcu: goto label_2723dc;
        case 0x2723e0u: goto label_2723e0;
        case 0x2723e4u: goto label_2723e4;
        case 0x2723e8u: goto label_2723e8;
        case 0x2723ecu: goto label_2723ec;
        case 0x2723f0u: goto label_2723f0;
        case 0x2723f4u: goto label_2723f4;
        case 0x2723f8u: goto label_2723f8;
        case 0x2723fcu: goto label_2723fc;
        case 0x272400u: goto label_272400;
        case 0x272404u: goto label_272404;
        case 0x272408u: goto label_272408;
        case 0x27240cu: goto label_27240c;
        case 0x272410u: goto label_272410;
        case 0x272414u: goto label_272414;
        case 0x272418u: goto label_272418;
        case 0x27241cu: goto label_27241c;
        case 0x272420u: goto label_272420;
        case 0x272424u: goto label_272424;
        case 0x272428u: goto label_272428;
        case 0x27242cu: goto label_27242c;
        case 0x272430u: goto label_272430;
        case 0x272434u: goto label_272434;
        case 0x272438u: goto label_272438;
        case 0x27243cu: goto label_27243c;
        case 0x272440u: goto label_272440;
        case 0x272444u: goto label_272444;
        case 0x272448u: goto label_272448;
        case 0x27244cu: goto label_27244c;
        case 0x272450u: goto label_272450;
        case 0x272454u: goto label_272454;
        case 0x272458u: goto label_272458;
        case 0x27245cu: goto label_27245c;
        case 0x272460u: goto label_272460;
        case 0x272464u: goto label_272464;
        case 0x272468u: goto label_272468;
        case 0x27246cu: goto label_27246c;
        case 0x272470u: goto label_272470;
        case 0x272474u: goto label_272474;
        case 0x272478u: goto label_272478;
        case 0x27247cu: goto label_27247c;
        case 0x272480u: goto label_272480;
        case 0x272484u: goto label_272484;
        case 0x272488u: goto label_272488;
        case 0x27248cu: goto label_27248c;
        case 0x272490u: goto label_272490;
        case 0x272494u: goto label_272494;
        case 0x272498u: goto label_272498;
        case 0x27249cu: goto label_27249c;
        case 0x2724a0u: goto label_2724a0;
        case 0x2724a4u: goto label_2724a4;
        case 0x2724a8u: goto label_2724a8;
        case 0x2724acu: goto label_2724ac;
        case 0x2724b0u: goto label_2724b0;
        case 0x2724b4u: goto label_2724b4;
        case 0x2724b8u: goto label_2724b8;
        case 0x2724bcu: goto label_2724bc;
        case 0x2724c0u: goto label_2724c0;
        case 0x2724c4u: goto label_2724c4;
        case 0x2724c8u: goto label_2724c8;
        case 0x2724ccu: goto label_2724cc;
        case 0x2724d0u: goto label_2724d0;
        case 0x2724d4u: goto label_2724d4;
        case 0x2724d8u: goto label_2724d8;
        case 0x2724dcu: goto label_2724dc;
        case 0x2724e0u: goto label_2724e0;
        case 0x2724e4u: goto label_2724e4;
        case 0x2724e8u: goto label_2724e8;
        case 0x2724ecu: goto label_2724ec;
        case 0x2724f0u: goto label_2724f0;
        case 0x2724f4u: goto label_2724f4;
        case 0x2724f8u: goto label_2724f8;
        case 0x2724fcu: goto label_2724fc;
        case 0x272500u: goto label_272500;
        case 0x272504u: goto label_272504;
        case 0x272508u: goto label_272508;
        case 0x27250cu: goto label_27250c;
        case 0x272510u: goto label_272510;
        case 0x272514u: goto label_272514;
        case 0x272518u: goto label_272518;
        case 0x27251cu: goto label_27251c;
        case 0x272520u: goto label_272520;
        case 0x272524u: goto label_272524;
        case 0x272528u: goto label_272528;
        case 0x27252cu: goto label_27252c;
        case 0x272530u: goto label_272530;
        case 0x272534u: goto label_272534;
        case 0x272538u: goto label_272538;
        case 0x27253cu: goto label_27253c;
        case 0x272540u: goto label_272540;
        case 0x272544u: goto label_272544;
        case 0x272548u: goto label_272548;
        case 0x27254cu: goto label_27254c;
        case 0x272550u: goto label_272550;
        case 0x272554u: goto label_272554;
        case 0x272558u: goto label_272558;
        case 0x27255cu: goto label_27255c;
        case 0x272560u: goto label_272560;
        case 0x272564u: goto label_272564;
        case 0x272568u: goto label_272568;
        case 0x27256cu: goto label_27256c;
        case 0x272570u: goto label_272570;
        case 0x272574u: goto label_272574;
        case 0x272578u: goto label_272578;
        case 0x27257cu: goto label_27257c;
        case 0x272580u: goto label_272580;
        case 0x272584u: goto label_272584;
        case 0x272588u: goto label_272588;
        case 0x27258cu: goto label_27258c;
        case 0x272590u: goto label_272590;
        case 0x272594u: goto label_272594;
        case 0x272598u: goto label_272598;
        case 0x27259cu: goto label_27259c;
        case 0x2725a0u: goto label_2725a0;
        case 0x2725a4u: goto label_2725a4;
        case 0x2725a8u: goto label_2725a8;
        case 0x2725acu: goto label_2725ac;
        case 0x2725b0u: goto label_2725b0;
        case 0x2725b4u: goto label_2725b4;
        case 0x2725b8u: goto label_2725b8;
        case 0x2725bcu: goto label_2725bc;
        case 0x2725c0u: goto label_2725c0;
        case 0x2725c4u: goto label_2725c4;
        case 0x2725c8u: goto label_2725c8;
        case 0x2725ccu: goto label_2725cc;
        case 0x2725d0u: goto label_2725d0;
        case 0x2725d4u: goto label_2725d4;
        case 0x2725d8u: goto label_2725d8;
        case 0x2725dcu: goto label_2725dc;
        case 0x2725e0u: goto label_2725e0;
        case 0x2725e4u: goto label_2725e4;
        case 0x2725e8u: goto label_2725e8;
        case 0x2725ecu: goto label_2725ec;
        case 0x2725f0u: goto label_2725f0;
        case 0x2725f4u: goto label_2725f4;
        case 0x2725f8u: goto label_2725f8;
        case 0x2725fcu: goto label_2725fc;
        case 0x272600u: goto label_272600;
        case 0x272604u: goto label_272604;
        case 0x272608u: goto label_272608;
        case 0x27260cu: goto label_27260c;
        case 0x272610u: goto label_272610;
        case 0x272614u: goto label_272614;
        case 0x272618u: goto label_272618;
        case 0x27261cu: goto label_27261c;
        case 0x272620u: goto label_272620;
        case 0x272624u: goto label_272624;
        case 0x272628u: goto label_272628;
        case 0x27262cu: goto label_27262c;
        case 0x272630u: goto label_272630;
        case 0x272634u: goto label_272634;
        case 0x272638u: goto label_272638;
        case 0x27263cu: goto label_27263c;
        case 0x272640u: goto label_272640;
        case 0x272644u: goto label_272644;
        case 0x272648u: goto label_272648;
        case 0x27264cu: goto label_27264c;
        case 0x272650u: goto label_272650;
        case 0x272654u: goto label_272654;
        case 0x272658u: goto label_272658;
        case 0x27265cu: goto label_27265c;
        case 0x272660u: goto label_272660;
        case 0x272664u: goto label_272664;
        case 0x272668u: goto label_272668;
        case 0x27266cu: goto label_27266c;
        case 0x272670u: goto label_272670;
        case 0x272674u: goto label_272674;
        case 0x272678u: goto label_272678;
        case 0x27267cu: goto label_27267c;
        case 0x272680u: goto label_272680;
        case 0x272684u: goto label_272684;
        case 0x272688u: goto label_272688;
        case 0x27268cu: goto label_27268c;
        case 0x272690u: goto label_272690;
        case 0x272694u: goto label_272694;
        case 0x272698u: goto label_272698;
        case 0x27269cu: goto label_27269c;
        case 0x2726a0u: goto label_2726a0;
        case 0x2726a4u: goto label_2726a4;
        case 0x2726a8u: goto label_2726a8;
        case 0x2726acu: goto label_2726ac;
        case 0x2726b0u: goto label_2726b0;
        case 0x2726b4u: goto label_2726b4;
        case 0x2726b8u: goto label_2726b8;
        case 0x2726bcu: goto label_2726bc;
        case 0x2726c0u: goto label_2726c0;
        case 0x2726c4u: goto label_2726c4;
        case 0x2726c8u: goto label_2726c8;
        case 0x2726ccu: goto label_2726cc;
        case 0x2726d0u: goto label_2726d0;
        case 0x2726d4u: goto label_2726d4;
        case 0x2726d8u: goto label_2726d8;
        case 0x2726dcu: goto label_2726dc;
        case 0x2726e0u: goto label_2726e0;
        case 0x2726e4u: goto label_2726e4;
        case 0x2726e8u: goto label_2726e8;
        case 0x2726ecu: goto label_2726ec;
        case 0x2726f0u: goto label_2726f0;
        case 0x2726f4u: goto label_2726f4;
        case 0x2726f8u: goto label_2726f8;
        case 0x2726fcu: goto label_2726fc;
        case 0x272700u: goto label_272700;
        case 0x272704u: goto label_272704;
        case 0x272708u: goto label_272708;
        case 0x27270cu: goto label_27270c;
        case 0x272710u: goto label_272710;
        case 0x272714u: goto label_272714;
        case 0x272718u: goto label_272718;
        case 0x27271cu: goto label_27271c;
        case 0x272720u: goto label_272720;
        case 0x272724u: goto label_272724;
        case 0x272728u: goto label_272728;
        case 0x27272cu: goto label_27272c;
        case 0x272730u: goto label_272730;
        case 0x272734u: goto label_272734;
        case 0x272738u: goto label_272738;
        case 0x27273cu: goto label_27273c;
        case 0x272740u: goto label_272740;
        case 0x272744u: goto label_272744;
        case 0x272748u: goto label_272748;
        case 0x27274cu: goto label_27274c;
        case 0x272750u: goto label_272750;
        case 0x272754u: goto label_272754;
        case 0x272758u: goto label_272758;
        case 0x27275cu: goto label_27275c;
        case 0x272760u: goto label_272760;
        case 0x272764u: goto label_272764;
        case 0x272768u: goto label_272768;
        case 0x27276cu: goto label_27276c;
        case 0x272770u: goto label_272770;
        case 0x272774u: goto label_272774;
        case 0x272778u: goto label_272778;
        case 0x27277cu: goto label_27277c;
        case 0x272780u: goto label_272780;
        case 0x272784u: goto label_272784;
        case 0x272788u: goto label_272788;
        case 0x27278cu: goto label_27278c;
        case 0x272790u: goto label_272790;
        case 0x272794u: goto label_272794;
        case 0x272798u: goto label_272798;
        case 0x27279cu: goto label_27279c;
        case 0x2727a0u: goto label_2727a0;
        case 0x2727a4u: goto label_2727a4;
        case 0x2727a8u: goto label_2727a8;
        case 0x2727acu: goto label_2727ac;
        case 0x2727b0u: goto label_2727b0;
        case 0x2727b4u: goto label_2727b4;
        case 0x2727b8u: goto label_2727b8;
        case 0x2727bcu: goto label_2727bc;
        case 0x2727c0u: goto label_2727c0;
        case 0x2727c4u: goto label_2727c4;
        case 0x2727c8u: goto label_2727c8;
        case 0x2727ccu: goto label_2727cc;
        case 0x2727d0u: goto label_2727d0;
        case 0x2727d4u: goto label_2727d4;
        case 0x2727d8u: goto label_2727d8;
        case 0x2727dcu: goto label_2727dc;
        case 0x2727e0u: goto label_2727e0;
        case 0x2727e4u: goto label_2727e4;
        case 0x2727e8u: goto label_2727e8;
        case 0x2727ecu: goto label_2727ec;
        case 0x2727f0u: goto label_2727f0;
        case 0x2727f4u: goto label_2727f4;
        case 0x2727f8u: goto label_2727f8;
        case 0x2727fcu: goto label_2727fc;
        case 0x272800u: goto label_272800;
        case 0x272804u: goto label_272804;
        case 0x272808u: goto label_272808;
        case 0x27280cu: goto label_27280c;
        case 0x272810u: goto label_272810;
        case 0x272814u: goto label_272814;
        case 0x272818u: goto label_272818;
        case 0x27281cu: goto label_27281c;
        case 0x272820u: goto label_272820;
        case 0x272824u: goto label_272824;
        case 0x272828u: goto label_272828;
        case 0x27282cu: goto label_27282c;
        case 0x272830u: goto label_272830;
        case 0x272834u: goto label_272834;
        case 0x272838u: goto label_272838;
        case 0x27283cu: goto label_27283c;
        case 0x272840u: goto label_272840;
        case 0x272844u: goto label_272844;
        case 0x272848u: goto label_272848;
        case 0x27284cu: goto label_27284c;
        case 0x272850u: goto label_272850;
        case 0x272854u: goto label_272854;
        case 0x272858u: goto label_272858;
        case 0x27285cu: goto label_27285c;
        case 0x272860u: goto label_272860;
        case 0x272864u: goto label_272864;
        case 0x272868u: goto label_272868;
        case 0x27286cu: goto label_27286c;
        case 0x272870u: goto label_272870;
        case 0x272874u: goto label_272874;
        case 0x272878u: goto label_272878;
        case 0x27287cu: goto label_27287c;
        case 0x272880u: goto label_272880;
        case 0x272884u: goto label_272884;
        case 0x272888u: goto label_272888;
        case 0x27288cu: goto label_27288c;
        case 0x272890u: goto label_272890;
        case 0x272894u: goto label_272894;
        case 0x272898u: goto label_272898;
        case 0x27289cu: goto label_27289c;
        case 0x2728a0u: goto label_2728a0;
        case 0x2728a4u: goto label_2728a4;
        case 0x2728a8u: goto label_2728a8;
        case 0x2728acu: goto label_2728ac;
        case 0x2728b0u: goto label_2728b0;
        case 0x2728b4u: goto label_2728b4;
        case 0x2728b8u: goto label_2728b8;
        case 0x2728bcu: goto label_2728bc;
        case 0x2728c0u: goto label_2728c0;
        case 0x2728c4u: goto label_2728c4;
        case 0x2728c8u: goto label_2728c8;
        case 0x2728ccu: goto label_2728cc;
        case 0x2728d0u: goto label_2728d0;
        case 0x2728d4u: goto label_2728d4;
        case 0x2728d8u: goto label_2728d8;
        case 0x2728dcu: goto label_2728dc;
        case 0x2728e0u: goto label_2728e0;
        case 0x2728e4u: goto label_2728e4;
        case 0x2728e8u: goto label_2728e8;
        case 0x2728ecu: goto label_2728ec;
        case 0x2728f0u: goto label_2728f0;
        case 0x2728f4u: goto label_2728f4;
        case 0x2728f8u: goto label_2728f8;
        case 0x2728fcu: goto label_2728fc;
        case 0x272900u: goto label_272900;
        case 0x272904u: goto label_272904;
        case 0x272908u: goto label_272908;
        case 0x27290cu: goto label_27290c;
        case 0x272910u: goto label_272910;
        case 0x272914u: goto label_272914;
        case 0x272918u: goto label_272918;
        case 0x27291cu: goto label_27291c;
        case 0x272920u: goto label_272920;
        case 0x272924u: goto label_272924;
        case 0x272928u: goto label_272928;
        case 0x27292cu: goto label_27292c;
        case 0x272930u: goto label_272930;
        case 0x272934u: goto label_272934;
        case 0x272938u: goto label_272938;
        case 0x27293cu: goto label_27293c;
        case 0x272940u: goto label_272940;
        case 0x272944u: goto label_272944;
        case 0x272948u: goto label_272948;
        case 0x27294cu: goto label_27294c;
        case 0x272950u: goto label_272950;
        case 0x272954u: goto label_272954;
        case 0x272958u: goto label_272958;
        case 0x27295cu: goto label_27295c;
        case 0x272960u: goto label_272960;
        case 0x272964u: goto label_272964;
        case 0x272968u: goto label_272968;
        case 0x27296cu: goto label_27296c;
        case 0x272970u: goto label_272970;
        case 0x272974u: goto label_272974;
        case 0x272978u: goto label_272978;
        case 0x27297cu: goto label_27297c;
        case 0x272980u: goto label_272980;
        case 0x272984u: goto label_272984;
        case 0x272988u: goto label_272988;
        case 0x27298cu: goto label_27298c;
        case 0x272990u: goto label_272990;
        case 0x272994u: goto label_272994;
        case 0x272998u: goto label_272998;
        case 0x27299cu: goto label_27299c;
        case 0x2729a0u: goto label_2729a0;
        case 0x2729a4u: goto label_2729a4;
        case 0x2729a8u: goto label_2729a8;
        case 0x2729acu: goto label_2729ac;
        case 0x2729b0u: goto label_2729b0;
        case 0x2729b4u: goto label_2729b4;
        case 0x2729b8u: goto label_2729b8;
        case 0x2729bcu: goto label_2729bc;
        case 0x2729c0u: goto label_2729c0;
        case 0x2729c4u: goto label_2729c4;
        default: return;
    }

label_2721f8:
    // 0x2721f8: 0x0  nop
    ctx->pc = 0x2721f8u;
    // NOP
label_2721fc:
    // 0x2721fc: 0x0  nop
    ctx->pc = 0x2721fcu;
    // NOP
label_272200:
    // 0x272200: 0x89a6  .word       0x000089A6                   # xor         $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272200u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_272204:
    // 0x272204: 0x5ec0  sll         $t3, $zero, 27
    ctx->pc = 0x272204u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_272208:
    // 0x272208: 0x0  nop
    ctx->pc = 0x272208u;
    // NOP
label_27220c:
    // 0x27220c: 0x0  nop
    ctx->pc = 0x27220cu;
    // NOP
label_272210:
    // 0x272210: 0x89b2  tlt         $zero, $zero, 550
    ctx->pc = 0x272210u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272214:
    // 0x272214: 0x5ea0  .word       0x00005EA0                   # add         $t3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_272218:
    // 0x272218: 0x0  nop
    ctx->pc = 0x272218u;
    // NOP
label_27221c:
    // 0x27221c: 0x0  nop
    ctx->pc = 0x27221cu;
    // NOP
label_272220:
    // 0x272220: 0x89be  dsrl32      $s1, $zero, 6
    ctx->pc = 0x272220u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> (32 + 6));
label_272224:
    // 0x272224: 0x6a90  .word       0x00006A90                   # mfhi        $t5 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272224u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_272228:
    // 0x272228: 0x0  nop
    ctx->pc = 0x272228u;
    // NOP
label_27222c:
    // 0x27222c: 0x0  nop
    ctx->pc = 0x27222cu;
    // NOP
label_272230:
    // 0x272230: 0x89cc  syscall     551
    ctx->pc = 0x272230u;
    ctx->pc = 0x272234u;
runtime->handleSyscall(rdram, ctx, 0x227u);
label_272234:
    // 0x272234: 0x7c40  sll         $t7, $zero, 17
    ctx->pc = 0x272234u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_272238:
    // 0x272238: 0x0  nop
    ctx->pc = 0x272238u;
    // NOP
label_27223c:
    // 0x27223c: 0x0  nop
    ctx->pc = 0x27223cu;
    // NOP
label_272240:
    // 0x272240: 0x89dc  .word       0x000089DC                   # dmult       $zero, $zero # 000089C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x272240 raw=0x000089DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272244:
    // 0x272244: 0xa840  sll         $s5, $zero, 1
    ctx->pc = 0x272244u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_272248:
    // 0x272248: 0x0  nop
    ctx->pc = 0x272248u;
    // NOP
label_27224c:
    // 0x27224c: 0x0  nop
    ctx->pc = 0x27224cu;
    // NOP
label_272250:
    // 0x272250: 0x89f2  tlt         $zero, $zero, 551
    ctx->pc = 0x272250u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272254:
    // 0x272254: 0x6fb0  tge         $zero, $zero, 446
    ctx->pc = 0x272254u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272258:
    // 0x272258: 0x0  nop
    ctx->pc = 0x272258u;
    // NOP
label_27225c:
    // 0x27225c: 0x0  nop
    ctx->pc = 0x27225cu;
    // NOP
label_272260:
    // 0x272260: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x272260u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_272264:
    // 0x272264: 0x6250  .word       0x00006250                   # mfhi        $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272264u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_272268:
    // 0x272268: 0x0  nop
    ctx->pc = 0x272268u;
    // NOP
label_27226c:
    // 0x27226c: 0x0  nop
    ctx->pc = 0x27226cu;
    // NOP
label_272270:
    // 0x272270: 0x8a0d  break       0, 552
    ctx->pc = 0x272270u;
    runtime->handleBreak(rdram, ctx);
label_272274:
    // 0x272274: 0x5800  sll         $t3, $zero, 0
    ctx->pc = 0x272274u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_272278:
    // 0x272278: 0x0  nop
    ctx->pc = 0x272278u;
    // NOP
label_27227c:
    // 0x27227c: 0x0  nop
    ctx->pc = 0x27227cu;
    // NOP
label_272280:
    // 0x272280: 0x8a18  .word       0x00008A18                   # mult        $s1, $zero, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x272280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_272284:
    // 0x272284: 0x59a0  .word       0x000059A0                   # add         $t3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_272288:
    // 0x272288: 0x0  nop
    ctx->pc = 0x272288u;
    // NOP
label_27228c:
    // 0x27228c: 0x0  nop
    ctx->pc = 0x27228cu;
    // NOP
label_272290:
    // 0x272290: 0x8a24  .word       0x00008A24                   # and         $s1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272290u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_272294:
    // 0x272294: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x272294u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_272298:
    // 0x272298: 0x0  nop
    ctx->pc = 0x272298u;
    // NOP
label_27229c:
    // 0x27229c: 0x0  nop
    ctx->pc = 0x27229cu;
    // NOP
label_2722a0:
    // 0x2722a0: 0x8a35  .word       0x00008A35                   # INVALID     $zero, $zero, -0x75CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2722a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2722A0 raw=0x00008A35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2722a4:
    // 0x2722a4: 0x6c20  .word       0x00006C20                   # add         $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2722a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2722a8:
    // 0x2722a8: 0x0  nop
    ctx->pc = 0x2722a8u;
    // NOP
label_2722ac:
    // 0x2722ac: 0x0  nop
    ctx->pc = 0x2722acu;
    // NOP
label_2722b0:
    // 0x2722b0: 0x8a43  sra         $s1, $zero, 9
    ctx->pc = 0x2722b0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), 9));
label_2722b4:
    // 0x2722b4: 0x6230  tge         $zero, $zero, 392
    ctx->pc = 0x2722b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2722b8:
    // 0x2722b8: 0x0  nop
    ctx->pc = 0x2722b8u;
    // NOP
label_2722bc:
    // 0x2722bc: 0x0  nop
    ctx->pc = 0x2722bcu;
    // NOP
label_2722c0:
    // 0x2722c0: 0x8a50  .word       0x00008A50                   # mfhi        $s1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2722c0u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2722c4:
    // 0x2722c4: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x2722c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_2722c8:
    // 0x2722c8: 0x0  nop
    ctx->pc = 0x2722c8u;
    // NOP
label_2722cc:
    // 0x2722cc: 0x0  nop
    ctx->pc = 0x2722ccu;
    // NOP
label_2722d0:
    // 0x2722d0: 0x8a5b  .word       0x00008A5B                   # divu        $s1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2722d0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2722d4:
    // 0x2722d4: 0x5e90  .word       0x00005E90                   # mfhi        $t3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2722d4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2722d8:
    // 0x2722d8: 0x0  nop
    ctx->pc = 0x2722d8u;
    // NOP
label_2722dc:
    // 0x2722dc: 0x0  nop
    ctx->pc = 0x2722dcu;
    // NOP
label_2722e0:
    // 0x2722e0: 0x8a67  .word       0x00008A67                   # not         $s1, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2722e0u;
    SET_GPR_U64(ctx, 17, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2722e4:
    // 0x2722e4: 0x52c0  sll         $t2, $zero, 11
    ctx->pc = 0x2722e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2722e8:
    // 0x2722e8: 0x0  nop
    ctx->pc = 0x2722e8u;
    // NOP
label_2722ec:
    // 0x2722ec: 0x0  nop
    ctx->pc = 0x2722ecu;
    // NOP
label_2722f0:
    // 0x2722f0: 0x8a72  tlt         $zero, $zero, 553
    ctx->pc = 0x2722f0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2722f4:
    // 0x2722f4: 0x67a0  .word       0x000067A0                   # add         $t4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2722f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2722f8:
    // 0x2722f8: 0x0  nop
    ctx->pc = 0x2722f8u;
    // NOP
label_2722fc:
    // 0x2722fc: 0x0  nop
    ctx->pc = 0x2722fcu;
    // NOP
label_272300:
    // 0x272300: 0x8a7f  dsra32      $s1, $zero, 9
    ctx->pc = 0x272300u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (32 + 9));
label_272304:
    // 0x272304: 0x66c0  sll         $t4, $zero, 27
    ctx->pc = 0x272304u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_272308:
    // 0x272308: 0x0  nop
    ctx->pc = 0x272308u;
    // NOP
label_27230c:
    // 0x27230c: 0x0  nop
    ctx->pc = 0x27230cu;
    // NOP
label_272310:
    // 0x272310: 0x8a8c  syscall     554
    ctx->pc = 0x272310u;
    ctx->pc = 0x272314u;
runtime->handleSyscall(rdram, ctx, 0x22Au);
label_272314:
    // 0x272314: 0x5f60  .word       0x00005F60                   # add         $t3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_272318:
    // 0x272318: 0x0  nop
    ctx->pc = 0x272318u;
    // NOP
label_27231c:
    // 0x27231c: 0x0  nop
    ctx->pc = 0x27231cu;
    // NOP
label_272320:
    // 0x272320: 0x8a98  .word       0x00008A98                   # mult        $s1, $zero, $zero # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x272320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_272324:
    // 0x272324: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272324u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_272328:
    // 0x272328: 0x0  nop
    ctx->pc = 0x272328u;
    // NOP
label_27232c:
    // 0x27232c: 0x0  nop
    ctx->pc = 0x27232cu;
    // NOP
label_272330:
    // 0x272330: 0x8aa5  .word       0x00008AA5                   # move        $s1, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272330u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_272334:
    // 0x272334: 0x9080  sll         $s2, $zero, 2
    ctx->pc = 0x272334u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_272338:
    // 0x272338: 0x0  nop
    ctx->pc = 0x272338u;
    // NOP
label_27233c:
    // 0x27233c: 0x0  nop
    ctx->pc = 0x27233cu;
    // NOP
label_272340:
    // 0x272340: 0x8ab8  dsll        $s1, $zero, 10
    ctx->pc = 0x272340u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 10);
label_272344:
    // 0x272344: 0x5d50  .word       0x00005D50                   # mfhi        $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272344u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_272348:
    // 0x272348: 0x0  nop
    ctx->pc = 0x272348u;
    // NOP
label_27234c:
    // 0x27234c: 0x0  nop
    ctx->pc = 0x27234cu;
    // NOP
label_272350:
    // 0x272350: 0x8ac4  .word       0x00008AC4                   # sllv        $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272350u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_272354:
    // 0x272354: 0x5230  tge         $zero, $zero, 328
    ctx->pc = 0x272354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272358:
    // 0x272358: 0x0  nop
    ctx->pc = 0x272358u;
    // NOP
label_27235c:
    // 0x27235c: 0x0  nop
    ctx->pc = 0x27235cu;
    // NOP
label_272360:
    // 0x272360: 0x8acf  .word       0x00008ACF                   # sync # 00008800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272360u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_272364:
    // 0x272364: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x272364u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_272368:
    // 0x272368: 0x0  nop
    ctx->pc = 0x272368u;
    // NOP
label_27236c:
    // 0x27236c: 0x0  nop
    ctx->pc = 0x27236cu;
    // NOP
label_272370:
    // 0x272370: 0x8adb  .word       0x00008ADB                   # divu        $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272370u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_272374:
    // 0x272374: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_272378:
    // 0x272378: 0x0  nop
    ctx->pc = 0x272378u;
    // NOP
label_27237c:
    // 0x27237c: 0x0  nop
    ctx->pc = 0x27237cu;
    // NOP
label_272380:
    // 0x272380: 0x8aeb  .word       0x00008AEB                   # sltu        $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272380u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_272384:
    // 0x272384: 0x8910  .word       0x00008910                   # mfhi        $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272384u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_272388:
    // 0x272388: 0x0  nop
    ctx->pc = 0x272388u;
    // NOP
label_27238c:
    // 0x27238c: 0x0  nop
    ctx->pc = 0x27238cu;
    // NOP
label_272390:
    // 0x272390: 0x8afd  .word       0x00008AFD                   # INVALID     $zero, $zero, -0x7503 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x272390 raw=0x00008AFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272394:
    // 0x272394: 0xa650  .word       0x0000A650                   # mfhi        $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272394u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_272398:
    // 0x272398: 0x0  nop
    ctx->pc = 0x272398u;
    // NOP
label_27239c:
    // 0x27239c: 0x0  nop
    ctx->pc = 0x27239cu;
    // NOP
label_2723a0:
    // 0x2723a0: 0x8b12  .word       0x00008B12                   # mflo        $s1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2723a0u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_2723a4:
    // 0x2723a4: 0x7da0  .word       0x00007DA0                   # add         $t7, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2723a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2723a8:
    // 0x2723a8: 0x0  nop
    ctx->pc = 0x2723a8u;
    // NOP
label_2723ac:
    // 0x2723ac: 0x0  nop
    ctx->pc = 0x2723acu;
    // NOP
label_2723b0:
    // 0x2723b0: 0x8b22  .word       0x00008B22                   # neg         $s1, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2723b0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_2723b4:
    // 0x2723b4: 0x7720  .word       0x00007720                   # add         $t6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2723b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2723b8:
    // 0x2723b8: 0x0  nop
    ctx->pc = 0x2723b8u;
    // NOP
label_2723bc:
    // 0x2723bc: 0x0  nop
    ctx->pc = 0x2723bcu;
    // NOP
label_2723c0:
    // 0x2723c0: 0x8b31  tgeu        $zero, $zero, 556
    ctx->pc = 0x2723c0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2723c4:
    // 0x2723c4: 0x8cc0  sll         $s1, $zero, 19
    ctx->pc = 0x2723c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_2723c8:
    // 0x2723c8: 0x0  nop
    ctx->pc = 0x2723c8u;
    // NOP
label_2723cc:
    // 0x2723cc: 0x0  nop
    ctx->pc = 0x2723ccu;
    // NOP
label_2723d0:
    // 0x2723d0: 0x8b43  sra         $s1, $zero, 13
    ctx->pc = 0x2723d0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), 13));
label_2723d4:
    // 0x2723d4: 0x5b00  sll         $t3, $zero, 12
    ctx->pc = 0x2723d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2723d8:
    // 0x2723d8: 0x0  nop
    ctx->pc = 0x2723d8u;
    // NOP
label_2723dc:
    // 0x2723dc: 0x0  nop
    ctx->pc = 0x2723dcu;
    // NOP
label_2723e0:
    // 0x2723e0: 0x8b4f  .word       0x00008B4F                   # sync # 00008800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2723e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2723e4:
    // 0x2723e4: 0x8630  tge         $zero, $zero, 536
    ctx->pc = 0x2723e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2723e8:
    // 0x2723e8: 0x0  nop
    ctx->pc = 0x2723e8u;
    // NOP
label_2723ec:
    // 0x2723ec: 0x0  nop
    ctx->pc = 0x2723ecu;
    // NOP
label_2723f0:
    // 0x2723f0: 0x8b60  .word       0x00008B60                   # add         $s1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2723f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2723f4:
    // 0x2723f4: 0x6080  sll         $t4, $zero, 2
    ctx->pc = 0x2723f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2723f8:
    // 0x2723f8: 0x0  nop
    ctx->pc = 0x2723f8u;
    // NOP
label_2723fc:
    // 0x2723fc: 0x0  nop
    ctx->pc = 0x2723fcu;
    // NOP
label_272400:
    // 0x272400: 0x8b6d  .word       0x00008B6D                   # daddu       $s1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272404:
    // 0x272404: 0x3fe0  .word       0x00003FE0                   # add         $a3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272404u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_272408:
    // 0x272408: 0x0  nop
    ctx->pc = 0x272408u;
    // NOP
label_27240c:
    // 0x27240c: 0x0  nop
    ctx->pc = 0x27240cu;
    // NOP
label_272410:
    // 0x272410: 0x8b75  .word       0x00008B75                   # INVALID     $zero, $zero, -0x748B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x272410 raw=0x00008B75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272414:
    // 0x272414: 0x8f10  .word       0x00008F10                   # mfhi        $s1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272414u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_272418:
    // 0x272418: 0x0  nop
    ctx->pc = 0x272418u;
    // NOP
label_27241c:
    // 0x27241c: 0x0  nop
    ctx->pc = 0x27241cu;
    // NOP
label_272420:
    // 0x272420: 0x8b87  .word       0x00008B87                   # srav        $s1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272420u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_272424:
    // 0x272424: 0x7820  add         $t7, $zero, $zero
    ctx->pc = 0x272424u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_272428:
    // 0x272428: 0x0  nop
    ctx->pc = 0x272428u;
    // NOP
label_27242c:
    // 0x27242c: 0x0  nop
    ctx->pc = 0x27242cu;
    // NOP
label_272430:
    // 0x272430: 0x8b97  .word       0x00008B97                   # dsrav       $s1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272430u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_272434:
    // 0x272434: 0x80d0  .word       0x000080D0                   # mfhi        $s0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272434u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_272438:
    // 0x272438: 0x0  nop
    ctx->pc = 0x272438u;
    // NOP
label_27243c:
    // 0x27243c: 0x0  nop
    ctx->pc = 0x27243cu;
    // NOP
label_272440:
    // 0x272440: 0x8ba8  .word       0x00008BA8                   # mfsa        $s1 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x272440u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_272444:
    // 0x272444: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x272444u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_272448:
    // 0x272448: 0x0  nop
    ctx->pc = 0x272448u;
    // NOP
label_27244c:
    // 0x27244c: 0x0  nop
    ctx->pc = 0x27244cu;
    // NOP
label_272450:
    // 0x272450: 0x8bb4  teq         $zero, $zero, 558
    ctx->pc = 0x272450u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272454:
    // 0x272454: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272454u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_272458:
    // 0x272458: 0x0  nop
    ctx->pc = 0x272458u;
    // NOP
label_27245c:
    // 0x27245c: 0x0  nop
    ctx->pc = 0x27245cu;
    // NOP
label_272460:
    // 0x272460: 0x8bc2  srl         $s1, $zero, 15
    ctx->pc = 0x272460u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_272464:
    // 0x272464: 0x94c0  sll         $s2, $zero, 19
    ctx->pc = 0x272464u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_272468:
    // 0x272468: 0x0  nop
    ctx->pc = 0x272468u;
    // NOP
label_27246c:
    // 0x27246c: 0x0  nop
    ctx->pc = 0x27246cu;
    // NOP
label_272470:
    // 0x272470: 0x8bd5  .word       0x00008BD5                   # INVALID     $zero, $zero, -0x742B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x272470 raw=0x00008BD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272474:
    // 0x272474: 0x8680  sll         $s0, $zero, 26
    ctx->pc = 0x272474u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_272478:
    // 0x272478: 0x0  nop
    ctx->pc = 0x272478u;
    // NOP
label_27247c:
    // 0x27247c: 0x0  nop
    ctx->pc = 0x27247cu;
    // NOP
label_272480:
    // 0x272480: 0x8be6  .word       0x00008BE6                   # xor         $s1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272480u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_272484:
    // 0x272484: 0x3020  add         $a2, $zero, $zero
    ctx->pc = 0x272484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_272488:
    // 0x272488: 0x0  nop
    ctx->pc = 0x272488u;
    // NOP
label_27248c:
    // 0x27248c: 0x0  nop
    ctx->pc = 0x27248cu;
    // NOP
label_272490:
    // 0x272490: 0x8bed  .word       0x00008BED                   # daddu       $s1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272494:
    // 0x272494: 0x2cc0  sll         $a1, $zero, 19
    ctx->pc = 0x272494u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_272498:
    // 0x272498: 0x0  nop
    ctx->pc = 0x272498u;
    // NOP
label_27249c:
    // 0x27249c: 0x0  nop
    ctx->pc = 0x27249cu;
    // NOP
label_2724a0:
    // 0x2724a0: 0x8bf3  tltu        $zero, $zero, 559
    ctx->pc = 0x2724a0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2724a4:
    // 0x2724a4: 0x6880  sll         $t5, $zero, 2
    ctx->pc = 0x2724a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2724a8:
    // 0x2724a8: 0x0  nop
    ctx->pc = 0x2724a8u;
    // NOP
label_2724ac:
    // 0x2724ac: 0x0  nop
    ctx->pc = 0x2724acu;
    // NOP
label_2724b0:
    // 0x2724b0: 0x8c01  .word       0x00008C01                   # INVALID     $zero, $zero, -0x73FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2724b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2724B0 raw=0x00008C01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2724b4:
    // 0x2724b4: 0x3a50  .word       0x00003A50                   # mfhi        $a3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2724b4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2724b8:
    // 0x2724b8: 0x0  nop
    ctx->pc = 0x2724b8u;
    // NOP
label_2724bc:
    // 0x2724bc: 0x0  nop
    ctx->pc = 0x2724bcu;
    // NOP
label_2724c0:
    // 0x2724c0: 0x8c09  .word       0x00008C09                   # jalr        $s1, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
label_2724c4:
    if (ctx->pc == 0x2724C4u) {
        ctx->pc = 0x2724C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724C0u;
        // 0x2724c4: 0x7f10  .word       0x00007F10                   # mfhi        $t7 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2724C8u;
        goto label_2724c8;
    }
    ctx->pc = 0x2724C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 17, 0x2724C8u);
        ctx->pc = 0x2724C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724C0u;
        // 0x2724c4: 0x7f10  .word       0x00007F10                   # mfhi        $t7 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2724C0u, 0x2724C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2724C8u;
label_2724c8:
    // 0x2724c8: 0x0  nop
    ctx->pc = 0x2724c8u;
    // NOP
label_2724cc:
    // 0x2724cc: 0x0  nop
    ctx->pc = 0x2724ccu;
    // NOP
label_2724d0:
    // 0x2724d0: 0x8c19  .word       0x00008C19                   # multu       $zero, $zero # 00008C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2724d0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2724d4:
    // 0x2724d4: 0x7730  tge         $zero, $zero, 476
    ctx->pc = 0x2724d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2724d8:
    // 0x2724d8: 0x0  nop
    ctx->pc = 0x2724d8u;
    // NOP
label_2724dc:
    // 0x2724dc: 0x0  nop
    ctx->pc = 0x2724dcu;
    // NOP
label_2724e0:
    // 0x2724e0: 0x8c28  .word       0x00008C28                   # mfsa        $s1 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2724e0u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2724e4:
    // 0x2724e4: 0x2e40  sll         $a1, $zero, 25
    ctx->pc = 0x2724e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2724e8:
    // 0x2724e8: 0x0  nop
    ctx->pc = 0x2724e8u;
    // NOP
label_2724ec:
    // 0x2724ec: 0x0  nop
    ctx->pc = 0x2724ecu;
    // NOP
label_2724f0:
    // 0x2724f0: 0x8c2e  .word       0x00008C2E                   # dsub        $s1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2724f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2724f4:
    // 0x2724f4: 0x1ad0  .word       0x00001AD0                   # mfhi        $v1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2724f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2724f8:
    // 0x2724f8: 0x0  nop
    ctx->pc = 0x2724f8u;
    // NOP
label_2724fc:
    // 0x2724fc: 0x0  nop
    ctx->pc = 0x2724fcu;
    // NOP
label_272500:
    // 0x272500: 0x8c32  tlt         $zero, $zero, 560
    ctx->pc = 0x272500u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272504:
    // 0x272504: 0x3090  .word       0x00003090                   # mfhi        $a2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272504u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_272508:
    // 0x272508: 0x0  nop
    ctx->pc = 0x272508u;
    // NOP
label_27250c:
    // 0x27250c: 0x0  nop
    ctx->pc = 0x27250cu;
    // NOP
label_272510:
    // 0x272510: 0x8c39  .word       0x00008C39                   # INVALID     $zero, $zero, -0x73C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x272510 raw=0x00008C39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272514:
    // 0x272514: 0x23e0  .word       0x000023E0                   # add         $a0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272514u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_272518:
    // 0x272518: 0x0  nop
    ctx->pc = 0x272518u;
    // NOP
label_27251c:
    // 0x27251c: 0x0  nop
    ctx->pc = 0x27251cu;
    // NOP
label_272520:
    // 0x272520: 0x8c3e  dsrl32      $s1, $zero, 16
    ctx->pc = 0x272520u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> (32 + 16));
label_272524:
    // 0x272524: 0x7b00  sll         $t7, $zero, 12
    ctx->pc = 0x272524u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_272528:
    // 0x272528: 0x0  nop
    ctx->pc = 0x272528u;
    // NOP
label_27252c:
    // 0x27252c: 0x0  nop
    ctx->pc = 0x27252cu;
    // NOP
label_272530:
    // 0x272530: 0x8c4e  .word       0x00008C4E                   # INVALID     $zero, $zero, -0x73B2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272530u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x272530 raw=0x00008C4E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272534:
    // 0x272534: 0x4100  sll         $t0, $zero, 4
    ctx->pc = 0x272534u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_272538:
    // 0x272538: 0x0  nop
    ctx->pc = 0x272538u;
    // NOP
label_27253c:
    // 0x27253c: 0x0  nop
    ctx->pc = 0x27253cu;
    // NOP
label_272540:
    // 0x272540: 0x8c57  .word       0x00008C57                   # dsrav       $s1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272540u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_272544:
    // 0x272544: 0x2670  tge         $zero, $zero, 153
    ctx->pc = 0x272544u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272548:
    // 0x272548: 0x0  nop
    ctx->pc = 0x272548u;
    // NOP
label_27254c:
    // 0x27254c: 0x0  nop
    ctx->pc = 0x27254cu;
    // NOP
label_272550:
    // 0x272550: 0x8c5c  .word       0x00008C5C                   # dmult       $zero, $zero # 00008C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x272550 raw=0x00008C5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272554:
    // 0x272554: 0x2500  sll         $a0, $zero, 20
    ctx->pc = 0x272554u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_272558:
    // 0x272558: 0x0  nop
    ctx->pc = 0x272558u;
    // NOP
label_27255c:
    // 0x27255c: 0x0  nop
    ctx->pc = 0x27255cu;
    // NOP
label_272560:
    // 0x272560: 0x8c61  .word       0x00008C61                   # addu        $s1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_272564:
    // 0x272564: 0x1b70  tge         $zero, $zero, 109
    ctx->pc = 0x272564u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272568:
    // 0x272568: 0x0  nop
    ctx->pc = 0x272568u;
    // NOP
label_27256c:
    // 0x27256c: 0x0  nop
    ctx->pc = 0x27256cu;
    // NOP
label_272570:
    // 0x272570: 0x8c65  .word       0x00008C65                   # move        $s1, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272570u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_272574:
    // 0x272574: 0x21e0  .word       0x000021E0                   # add         $a0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272574u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_272578:
    // 0x272578: 0x0  nop
    ctx->pc = 0x272578u;
    // NOP
label_27257c:
    // 0x27257c: 0x0  nop
    ctx->pc = 0x27257cu;
    // NOP
label_272580:
    // 0x272580: 0x8c6a  .word       0x00008C6A                   # slt         $s1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272580u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_272584:
    // 0x272584: 0x2b80  sll         $a1, $zero, 14
    ctx->pc = 0x272584u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_272588:
    // 0x272588: 0x0  nop
    ctx->pc = 0x272588u;
    // NOP
label_27258c:
    // 0x27258c: 0x0  nop
    ctx->pc = 0x27258cu;
    // NOP
label_272590:
    // 0x272590: 0x8c70  tge         $zero, $zero, 561
    ctx->pc = 0x272590u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272594:
    // 0x272594: 0x3b90  .word       0x00003B90                   # mfhi        $a3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272594u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_272598:
    // 0x272598: 0x0  nop
    ctx->pc = 0x272598u;
    // NOP
label_27259c:
    // 0x27259c: 0x0  nop
    ctx->pc = 0x27259cu;
    // NOP
label_2725a0:
    // 0x2725a0: 0x8c78  dsll        $s1, $zero, 17
    ctx->pc = 0x2725a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 17);
label_2725a4:
    // 0x2725a4: 0x36d0  .word       0x000036D0                   # mfhi        $a2 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2725a4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2725a8:
    // 0x2725a8: 0x0  nop
    ctx->pc = 0x2725a8u;
    // NOP
label_2725ac:
    // 0x2725ac: 0x0  nop
    ctx->pc = 0x2725acu;
    // NOP
label_2725b0:
    // 0x2725b0: 0x8c7f  dsra32      $s1, $zero, 17
    ctx->pc = 0x2725b0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (32 + 17));
label_2725b4:
    // 0x2725b4: 0x25e0  .word       0x000025E0                   # add         $a0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2725b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2725b8:
    // 0x2725b8: 0x0  nop
    ctx->pc = 0x2725b8u;
    // NOP
label_2725bc:
    // 0x2725bc: 0x0  nop
    ctx->pc = 0x2725bcu;
    // NOP
label_2725c0:
    // 0x2725c0: 0x8c84  .word       0x00008C84                   # sllv        $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2725c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2725c4:
    // 0x2725c4: 0x5fc0  sll         $t3, $zero, 31
    ctx->pc = 0x2725c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2725c8:
    // 0x2725c8: 0x0  nop
    ctx->pc = 0x2725c8u;
    // NOP
label_2725cc:
    // 0x2725cc: 0x0  nop
    ctx->pc = 0x2725ccu;
    // NOP
label_2725d0:
    // 0x2725d0: 0x8c90  .word       0x00008C90                   # mfhi        $s1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2725d0u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2725d4:
    // 0x2725d4: 0x66d0  .word       0x000066D0                   # mfhi        $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2725d4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2725d8:
    // 0x2725d8: 0x0  nop
    ctx->pc = 0x2725d8u;
    // NOP
label_2725dc:
    // 0x2725dc: 0x0  nop
    ctx->pc = 0x2725dcu;
    // NOP
label_2725e0:
    // 0x2725e0: 0x8c9d  .word       0x00008C9D                   # dmultu      $zero, $zero # 00008C80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2725e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2725E0 raw=0x00008C9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2725e4:
    // 0x2725e4: 0x2040  sll         $a0, $zero, 1
    ctx->pc = 0x2725e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2725e8:
    // 0x2725e8: 0x0  nop
    ctx->pc = 0x2725e8u;
    // NOP
label_2725ec:
    // 0x2725ec: 0x0  nop
    ctx->pc = 0x2725ecu;
    // NOP
label_2725f0:
    // 0x2725f0: 0x8ca2  .word       0x00008CA2                   # neg         $s1, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2725f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_2725f4:
    // 0x2725f4: 0x6d90  .word       0x00006D90                   # mfhi        $t5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2725f4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2725f8:
    // 0x2725f8: 0x0  nop
    ctx->pc = 0x2725f8u;
    // NOP
label_2725fc:
    // 0x2725fc: 0x0  nop
    ctx->pc = 0x2725fcu;
    // NOP
label_272600:
    // 0x272600: 0x8cb0  tge         $zero, $zero, 562
    ctx->pc = 0x272600u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272604:
    // 0x272604: 0x2e40  sll         $a1, $zero, 25
    ctx->pc = 0x272604u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_272608:
    // 0x272608: 0x0  nop
    ctx->pc = 0x272608u;
    // NOP
label_27260c:
    // 0x27260c: 0x0  nop
    ctx->pc = 0x27260cu;
    // NOP
label_272610:
    // 0x272610: 0x8cb6  tne         $zero, $zero, 562
    ctx->pc = 0x272610u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272614:
    // 0x272614: 0x6780  sll         $t4, $zero, 30
    ctx->pc = 0x272614u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_272618:
    // 0x272618: 0x0  nop
    ctx->pc = 0x272618u;
    // NOP
label_27261c:
    // 0x27261c: 0x0  nop
    ctx->pc = 0x27261cu;
    // NOP
label_272620:
    // 0x272620: 0x8cc3  sra         $s1, $zero, 19
    ctx->pc = 0x272620u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), 19));
label_272624:
    // 0x272624: 0x2440  sll         $a0, $zero, 17
    ctx->pc = 0x272624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_272628:
    // 0x272628: 0x0  nop
    ctx->pc = 0x272628u;
    // NOP
label_27262c:
    // 0x27262c: 0x0  nop
    ctx->pc = 0x27262cu;
    // NOP
label_272630:
    // 0x272630: 0x8cc8  .word       0x00008CC8                   # jr          $zero # 00008CC0 <InstrIdType: CPU_SPECIAL>
label_272634:
    if (ctx->pc == 0x272634u) {
        ctx->pc = 0x272634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272630u;
        // 0x272634: 0x2b30  tge         $zero, $zero, 172 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272638u;
        goto label_272638;
    }
    ctx->pc = 0x272630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x272634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272630u;
        // 0x272634: 0x2b30  tge         $zero, $zero, 172 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272630u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x272638u;
label_272638:
    // 0x272638: 0x0  nop
    ctx->pc = 0x272638u;
    // NOP
label_27263c:
    // 0x27263c: 0x0  nop
    ctx->pc = 0x27263cu;
    // NOP
label_272640:
    // 0x272640: 0x8cce  .word       0x00008CCE                   # INVALID     $zero, $zero, -0x7332 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x272640 raw=0x00008CCE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272644:
    // 0x272644: 0x22a0  .word       0x000022A0                   # add         $a0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_272648:
    // 0x272648: 0x0  nop
    ctx->pc = 0x272648u;
    // NOP
label_27264c:
    // 0x27264c: 0x0  nop
    ctx->pc = 0x27264cu;
    // NOP
label_272650:
    // 0x272650: 0x8cd3  .word       0x00008CD3                   # mtlo        $zero # 00008CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272650u;
    ctx->lo = GPR_U64(ctx, 0);
label_272654:
    // 0x272654: 0x2d90  .word       0x00002D90                   # mfhi        $a1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272654u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_272658:
    // 0x272658: 0x0  nop
    ctx->pc = 0x272658u;
    // NOP
label_27265c:
    // 0x27265c: 0x0  nop
    ctx->pc = 0x27265cu;
    // NOP
label_272660:
    // 0x272660: 0x8cd9  .word       0x00008CD9                   # multu       $zero, $zero # 00008CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272660u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_272664:
    // 0x272664: 0x2440  sll         $a0, $zero, 17
    ctx->pc = 0x272664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_272668:
    // 0x272668: 0x0  nop
    ctx->pc = 0x272668u;
    // NOP
label_27266c:
    // 0x27266c: 0x0  nop
    ctx->pc = 0x27266cu;
    // NOP
label_272670:
    // 0x272670: 0x8cde  .word       0x00008CDE                   # ddiv        $s1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272670u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x272670 raw=0x00008CDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272674:
    // 0x272674: 0x2990  .word       0x00002990                   # mfhi        $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272674u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_272678:
    // 0x272678: 0x0  nop
    ctx->pc = 0x272678u;
    // NOP
label_27267c:
    // 0x27267c: 0x0  nop
    ctx->pc = 0x27267cu;
    // NOP
label_272680:
    // 0x272680: 0x8ce4  .word       0x00008CE4                   # and         $s1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272680u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_272684:
    // 0x272684: 0x4e30  tge         $zero, $zero, 312
    ctx->pc = 0x272684u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272688:
    // 0x272688: 0x0  nop
    ctx->pc = 0x272688u;
    // NOP
label_27268c:
    // 0x27268c: 0x0  nop
    ctx->pc = 0x27268cu;
    // NOP
label_272690:
    // 0x272690: 0x8cee  .word       0x00008CEE                   # dsub        $s1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272690u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_272694:
    // 0x272694: 0x4ae0  .word       0x00004AE0                   # add         $t1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_272698:
    // 0x272698: 0x0  nop
    ctx->pc = 0x272698u;
    // NOP
label_27269c:
    // 0x27269c: 0x0  nop
    ctx->pc = 0x27269cu;
    // NOP
label_2726a0:
    // 0x2726a0: 0x8cf8  dsll        $s1, $zero, 19
    ctx->pc = 0x2726a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 19);
label_2726a4:
    // 0x2726a4: 0xafa0  .word       0x0000AFA0                   # add         $s5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2726a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2726a8:
    // 0x2726a8: 0x0  nop
    ctx->pc = 0x2726a8u;
    // NOP
label_2726ac:
    // 0x2726ac: 0x0  nop
    ctx->pc = 0x2726acu;
    // NOP
label_2726b0:
    // 0x2726b0: 0x8d0e  .word       0x00008D0E                   # INVALID     $zero, $zero, -0x72F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2726b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2726B0 raw=0x00008D0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2726b4:
    // 0x2726b4: 0x7200  sll         $t6, $zero, 8
    ctx->pc = 0x2726b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_2726b8:
    // 0x2726b8: 0x0  nop
    ctx->pc = 0x2726b8u;
    // NOP
label_2726bc:
    // 0x2726bc: 0x0  nop
    ctx->pc = 0x2726bcu;
    // NOP
label_2726c0:
    // 0x2726c0: 0x8d1d  .word       0x00008D1D                   # dmultu      $zero, $zero # 00008D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2726c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2726C0 raw=0x00008D1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2726c4:
    // 0x2726c4: 0x3010  mfhi        $a2
    ctx->pc = 0x2726c4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2726c8:
    // 0x2726c8: 0x0  nop
    ctx->pc = 0x2726c8u;
    // NOP
label_2726cc:
    // 0x2726cc: 0x0  nop
    ctx->pc = 0x2726ccu;
    // NOP
label_2726d0:
    // 0x2726d0: 0x8d24  .word       0x00008D24                   # and         $s1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2726d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2726d4:
    // 0x2726d4: 0x4d70  tge         $zero, $zero, 309
    ctx->pc = 0x2726d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2726d8:
    // 0x2726d8: 0x0  nop
    ctx->pc = 0x2726d8u;
    // NOP
label_2726dc:
    // 0x2726dc: 0x0  nop
    ctx->pc = 0x2726dcu;
    // NOP
label_2726e0:
    // 0x2726e0: 0x8d2e  .word       0x00008D2E                   # dsub        $s1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2726e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2726e4:
    // 0x2726e4: 0x3960  .word       0x00003960                   # add         $a3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2726e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2726e8:
    // 0x2726e8: 0x0  nop
    ctx->pc = 0x2726e8u;
    // NOP
label_2726ec:
    // 0x2726ec: 0x0  nop
    ctx->pc = 0x2726ecu;
    // NOP
label_2726f0:
    // 0x2726f0: 0x8d36  tne         $zero, $zero, 564
    ctx->pc = 0x2726f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2726f4:
    // 0x2726f4: 0x1c30  tge         $zero, $zero, 112
    ctx->pc = 0x2726f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2726f8:
    // 0x2726f8: 0x0  nop
    ctx->pc = 0x2726f8u;
    // NOP
label_2726fc:
    // 0x2726fc: 0x0  nop
    ctx->pc = 0x2726fcu;
    // NOP
label_272700:
    // 0x272700: 0x8d3a  dsrl        $s1, $zero, 20
    ctx->pc = 0x272700u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> 20);
label_272704:
    // 0x272704: 0x1da0  .word       0x00001DA0                   # add         $v1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272704u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_272708:
    // 0x272708: 0x0  nop
    ctx->pc = 0x272708u;
    // NOP
label_27270c:
    // 0x27270c: 0x0  nop
    ctx->pc = 0x27270cu;
    // NOP
label_272710:
    // 0x272710: 0x8d3e  dsrl32      $s1, $zero, 20
    ctx->pc = 0x272710u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> (32 + 20));
label_272714:
    // 0x272714: 0x74c0  sll         $t6, $zero, 19
    ctx->pc = 0x272714u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_272718:
    // 0x272718: 0x0  nop
    ctx->pc = 0x272718u;
    // NOP
label_27271c:
    // 0x27271c: 0x0  nop
    ctx->pc = 0x27271cu;
    // NOP
label_272720:
    // 0x272720: 0x8d4d  break       0, 565
    ctx->pc = 0x272720u;
    runtime->handleBreak(rdram, ctx);
label_272724:
    // 0x272724: 0x5ff0  tge         $zero, $zero, 383
    ctx->pc = 0x272724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272728:
    // 0x272728: 0x0  nop
    ctx->pc = 0x272728u;
    // NOP
label_27272c:
    // 0x27272c: 0x0  nop
    ctx->pc = 0x27272cu;
    // NOP
label_272730:
    // 0x272730: 0x8d59  .word       0x00008D59                   # multu       $zero, $zero # 00008D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272730u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_272734:
    // 0x272734: 0xbcc0  sll         $s7, $zero, 19
    ctx->pc = 0x272734u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_272738:
    // 0x272738: 0x0  nop
    ctx->pc = 0x272738u;
    // NOP
label_27273c:
    // 0x27273c: 0x0  nop
    ctx->pc = 0x27273cu;
    // NOP
label_272740:
    // 0x272740: 0x8d71  tgeu        $zero, $zero, 565
    ctx->pc = 0x272740u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272744:
    // 0x272744: 0x5730  tge         $zero, $zero, 348
    ctx->pc = 0x272744u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272748:
    // 0x272748: 0x0  nop
    ctx->pc = 0x272748u;
    // NOP
label_27274c:
    // 0x27274c: 0x0  nop
    ctx->pc = 0x27274cu;
    // NOP
label_272750:
    // 0x272750: 0x8d7c  dsll32      $s1, $zero, 21
    ctx->pc = 0x272750u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << (32 + 21));
label_272754:
    // 0x272754: 0xb9e0  .word       0x0000B9E0                   # add         $s7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_272758:
    // 0x272758: 0x0  nop
    ctx->pc = 0x272758u;
    // NOP
label_27275c:
    // 0x27275c: 0x0  nop
    ctx->pc = 0x27275cu;
    // NOP
label_272760:
    // 0x272760: 0x8d94  .word       0x00008D94                   # dsllv       $s1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272760u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_272764:
    // 0x272764: 0x6b60  .word       0x00006B60                   # add         $t5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272764u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_272768:
    // 0x272768: 0x0  nop
    ctx->pc = 0x272768u;
    // NOP
label_27276c:
    // 0x27276c: 0x0  nop
    ctx->pc = 0x27276cu;
    // NOP
label_272770:
    // 0x272770: 0x8da2  .word       0x00008DA2                   # neg         $s1, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272770u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_272774:
    // 0x272774: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x272774u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272778:
    // 0x272778: 0x0  nop
    ctx->pc = 0x272778u;
    // NOP
label_27277c:
    // 0x27277c: 0x0  nop
    ctx->pc = 0x27277cu;
    // NOP
label_272780:
    // 0x272780: 0x8dad  .word       0x00008DAD                   # daddu       $s1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272784:
    // 0x272784: 0x6970  tge         $zero, $zero, 421
    ctx->pc = 0x272784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272788:
    // 0x272788: 0x0  nop
    ctx->pc = 0x272788u;
    // NOP
label_27278c:
    // 0x27278c: 0x0  nop
    ctx->pc = 0x27278cu;
    // NOP
label_272790:
    // 0x272790: 0x8dbb  dsra        $s1, $zero, 22
    ctx->pc = 0x272790u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> 22);
label_272794:
    // 0x272794: 0x4e30  tge         $zero, $zero, 312
    ctx->pc = 0x272794u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272798:
    // 0x272798: 0x0  nop
    ctx->pc = 0x272798u;
    // NOP
label_27279c:
    // 0x27279c: 0x0  nop
    ctx->pc = 0x27279cu;
    // NOP
label_2727a0:
    // 0x2727a0: 0x8dc5  .word       0x00008DC5                   # INVALID     $zero, $zero, -0x723B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2727a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2727A0 raw=0x00008DC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2727a4:
    // 0x2727a4: 0x8c80  sll         $s1, $zero, 18
    ctx->pc = 0x2727a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2727a8:
    // 0x2727a8: 0x0  nop
    ctx->pc = 0x2727a8u;
    // NOP
label_2727ac:
    // 0x2727ac: 0x0  nop
    ctx->pc = 0x2727acu;
    // NOP
label_2727b0:
    // 0x2727b0: 0x8dd7  .word       0x00008DD7                   # dsrav       $s1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2727b0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2727b4:
    // 0x2727b4: 0x9420  .word       0x00009420                   # add         $s2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2727b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2727b8:
    // 0x2727b8: 0x0  nop
    ctx->pc = 0x2727b8u;
    // NOP
label_2727bc:
    // 0x2727bc: 0x0  nop
    ctx->pc = 0x2727bcu;
    // NOP
label_2727c0:
    // 0x2727c0: 0x8dea  .word       0x00008DEA                   # slt         $s1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2727c0u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2727c4:
    // 0x2727c4: 0x7a70  tge         $zero, $zero, 489
    ctx->pc = 0x2727c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2727c8:
    // 0x2727c8: 0x0  nop
    ctx->pc = 0x2727c8u;
    // NOP
label_2727cc:
    // 0x2727cc: 0x0  nop
    ctx->pc = 0x2727ccu;
    // NOP
label_2727d0:
    // 0x2727d0: 0x8dfa  dsrl        $s1, $zero, 23
    ctx->pc = 0x2727d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> 23);
label_2727d4:
    // 0x2727d4: 0x43a0  .word       0x000043A0                   # add         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2727d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2727d8:
    // 0x2727d8: 0x0  nop
    ctx->pc = 0x2727d8u;
    // NOP
label_2727dc:
    // 0x2727dc: 0x0  nop
    ctx->pc = 0x2727dcu;
    // NOP
label_2727e0:
    // 0x2727e0: 0x8e03  sra         $s1, $zero, 24
    ctx->pc = 0x2727e0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), 24));
label_2727e4:
    // 0x2727e4: 0x6fa0  .word       0x00006FA0                   # add         $t5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2727e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2727e8:
    // 0x2727e8: 0x0  nop
    ctx->pc = 0x2727e8u;
    // NOP
label_2727ec:
    // 0x2727ec: 0x0  nop
    ctx->pc = 0x2727ecu;
    // NOP
label_2727f0:
    // 0x2727f0: 0x8e11  .word       0x00008E11                   # mthi        $zero # 00008E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2727f0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2727f4:
    // 0x2727f4: 0x43d0  .word       0x000043D0                   # mfhi        $t0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2727f4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2727f8:
    // 0x2727f8: 0x0  nop
    ctx->pc = 0x2727f8u;
    // NOP
label_2727fc:
    // 0x2727fc: 0x0  nop
    ctx->pc = 0x2727fcu;
    // NOP
label_272800:
    // 0x272800: 0x8e1a  .word       0x00008E1A                   # div         $s1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272800u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_272804:
    // 0x272804: 0x3f00  sll         $a3, $zero, 28
    ctx->pc = 0x272804u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_272808:
    // 0x272808: 0x0  nop
    ctx->pc = 0x272808u;
    // NOP
label_27280c:
    // 0x27280c: 0x0  nop
    ctx->pc = 0x27280cu;
    // NOP
label_272810:
    // 0x272810: 0x8e22  .word       0x00008E22                   # neg         $s1, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272810u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_272814:
    // 0x272814: 0x42b0  tge         $zero, $zero, 266
    ctx->pc = 0x272814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272818:
    // 0x272818: 0x0  nop
    ctx->pc = 0x272818u;
    // NOP
label_27281c:
    // 0x27281c: 0x0  nop
    ctx->pc = 0x27281cu;
    // NOP
label_272820:
    // 0x272820: 0x8e2b  .word       0x00008E2B                   # sltu        $s1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272820u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_272824:
    // 0x272824: 0xb150  .word       0x0000B150                   # mfhi        $s6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272824u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_272828:
    // 0x272828: 0x0  nop
    ctx->pc = 0x272828u;
    // NOP
label_27282c:
    // 0x27282c: 0x0  nop
    ctx->pc = 0x27282cu;
    // NOP
label_272830:
    // 0x272830: 0x8e42  srl         $s1, $zero, 25
    ctx->pc = 0x272830u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 0), 25));
label_272834:
    // 0x272834: 0x64c0  sll         $t4, $zero, 19
    ctx->pc = 0x272834u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_272838:
    // 0x272838: 0x0  nop
    ctx->pc = 0x272838u;
    // NOP
label_27283c:
    // 0x27283c: 0x0  nop
    ctx->pc = 0x27283cu;
    // NOP
label_272840:
    // 0x272840: 0x8e4f  .word       0x00008E4F                   # sync.p # 00008800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272840u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_272844:
    // 0x272844: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x272844u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_272848:
    // 0x272848: 0x0  nop
    ctx->pc = 0x272848u;
    // NOP
label_27284c:
    // 0x27284c: 0x0  nop
    ctx->pc = 0x27284cu;
    // NOP
label_272850:
    // 0x272850: 0x8e5b  .word       0x00008E5B                   # divu        $s1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272850u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_272854:
    // 0x272854: 0x7470  tge         $zero, $zero, 465
    ctx->pc = 0x272854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272858:
    // 0x272858: 0x0  nop
    ctx->pc = 0x272858u;
    // NOP
label_27285c:
    // 0x27285c: 0x0  nop
    ctx->pc = 0x27285cu;
    // NOP
label_272860:
    // 0x272860: 0x8e6a  .word       0x00008E6A                   # slt         $s1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272860u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_272864:
    // 0x272864: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272864u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_272868:
    // 0x272868: 0x0  nop
    ctx->pc = 0x272868u;
    // NOP
label_27286c:
    // 0x27286c: 0x0  nop
    ctx->pc = 0x27286cu;
    // NOP
label_272870:
    // 0x272870: 0x8e75  .word       0x00008E75                   # INVALID     $zero, $zero, -0x718B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x272870 raw=0x00008E75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272874:
    // 0x272874: 0x7550  .word       0x00007550                   # mfhi        $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272874u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_272878:
    // 0x272878: 0x0  nop
    ctx->pc = 0x272878u;
    // NOP
label_27287c:
    // 0x27287c: 0x0  nop
    ctx->pc = 0x27287cu;
    // NOP
label_272880:
    // 0x272880: 0x8e84  .word       0x00008E84                   # sllv        $s1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272880u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_272884:
    // 0x272884: 0x2f50  .word       0x00002F50                   # mfhi        $a1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272884u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_272888:
    // 0x272888: 0x0  nop
    ctx->pc = 0x272888u;
    // NOP
label_27288c:
    // 0x27288c: 0x0  nop
    ctx->pc = 0x27288cu;
    // NOP
label_272890:
    // 0x272890: 0x8e8a  .word       0x00008E8A                   # movz        $s1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272890u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_272894:
    // 0x272894: 0x7770  tge         $zero, $zero, 477
    ctx->pc = 0x272894u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272898:
    // 0x272898: 0x0  nop
    ctx->pc = 0x272898u;
    // NOP
label_27289c:
    // 0x27289c: 0x0  nop
    ctx->pc = 0x27289cu;
    // NOP
label_2728a0:
    // 0x2728a0: 0x8e99  .word       0x00008E99                   # multu       $zero, $zero # 00008E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2728a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2728a4:
    // 0x2728a4: 0xb7c0  sll         $s6, $zero, 31
    ctx->pc = 0x2728a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2728a8:
    // 0x2728a8: 0x0  nop
    ctx->pc = 0x2728a8u;
    // NOP
label_2728ac:
    // 0x2728ac: 0x0  nop
    ctx->pc = 0x2728acu;
    // NOP
label_2728b0:
    // 0x2728b0: 0x8eb0  tge         $zero, $zero, 570
    ctx->pc = 0x2728b0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2728b4:
    // 0x2728b4: 0x7120  .word       0x00007120                   # add         $t6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2728b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2728b8:
    // 0x2728b8: 0x0  nop
    ctx->pc = 0x2728b8u;
    // NOP
label_2728bc:
    // 0x2728bc: 0x0  nop
    ctx->pc = 0x2728bcu;
    // NOP
label_2728c0:
    // 0x2728c0: 0x8ebf  dsra32      $s1, $zero, 26
    ctx->pc = 0x2728c0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (32 + 26));
label_2728c4:
    // 0x2728c4: 0xec70  tge         $zero, $zero, 945
    ctx->pc = 0x2728c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2728c8:
    // 0x2728c8: 0x0  nop
    ctx->pc = 0x2728c8u;
    // NOP
label_2728cc:
    // 0x2728cc: 0x0  nop
    ctx->pc = 0x2728ccu;
    // NOP
label_2728d0:
    // 0x2728d0: 0x8edd  .word       0x00008EDD                   # dmultu      $zero, $zero # 00008EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2728d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2728D0 raw=0x00008EDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2728d4:
    // 0x2728d4: 0x42d0  .word       0x000042D0                   # mfhi        $t0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2728d4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2728d8:
    // 0x2728d8: 0x0  nop
    ctx->pc = 0x2728d8u;
    // NOP
label_2728dc:
    // 0x2728dc: 0x0  nop
    ctx->pc = 0x2728dcu;
    // NOP
label_2728e0:
    // 0x2728e0: 0x8ee6  .word       0x00008EE6                   # xor         $s1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2728e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2728e4:
    // 0x2728e4: 0x32c0  sll         $a2, $zero, 11
    ctx->pc = 0x2728e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2728e8:
    // 0x2728e8: 0x0  nop
    ctx->pc = 0x2728e8u;
    // NOP
label_2728ec:
    // 0x2728ec: 0x0  nop
    ctx->pc = 0x2728ecu;
    // NOP
label_2728f0:
    // 0x2728f0: 0x8eed  .word       0x00008EED                   # daddu       $s1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2728f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2728f4:
    // 0x2728f4: 0x9300  sll         $s2, $zero, 12
    ctx->pc = 0x2728f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2728f8:
    // 0x2728f8: 0x0  nop
    ctx->pc = 0x2728f8u;
    // NOP
label_2728fc:
    // 0x2728fc: 0x0  nop
    ctx->pc = 0x2728fcu;
    // NOP
label_272900:
    // 0x272900: 0x8f00  sll         $s1, $zero, 28
    ctx->pc = 0x272900u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_272904:
    // 0x272904: 0x4c70  tge         $zero, $zero, 305
    ctx->pc = 0x272904u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272908:
    // 0x272908: 0x0  nop
    ctx->pc = 0x272908u;
    // NOP
label_27290c:
    // 0x27290c: 0x0  nop
    ctx->pc = 0x27290cu;
    // NOP
label_272910:
    // 0x272910: 0x8f0a  .word       0x00008F0A                   # movz        $s1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272910u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_272914:
    // 0x272914: 0xac60  .word       0x0000AC60                   # add         $s5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_272918:
    // 0x272918: 0x0  nop
    ctx->pc = 0x272918u;
    // NOP
label_27291c:
    // 0x27291c: 0x0  nop
    ctx->pc = 0x27291cu;
    // NOP
label_272920:
    // 0x272920: 0x8f20  .word       0x00008F20                   # add         $s1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272920u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_272924:
    // 0x272924: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_272928:
    // 0x272928: 0x0  nop
    ctx->pc = 0x272928u;
    // NOP
label_27292c:
    // 0x27292c: 0x0  nop
    ctx->pc = 0x27292cu;
    // NOP
label_272930:
    // 0x272930: 0x8f2b  .word       0x00008F2B                   # sltu        $s1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272930u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_272934:
    // 0x272934: 0xc880  sll         $t9, $zero, 2
    ctx->pc = 0x272934u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_272938:
    // 0x272938: 0x0  nop
    ctx->pc = 0x272938u;
    // NOP
label_27293c:
    // 0x27293c: 0x0  nop
    ctx->pc = 0x27293cu;
    // NOP
label_272940:
    // 0x272940: 0x8f45  .word       0x00008F45                   # INVALID     $zero, $zero, -0x70BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x272940 raw=0x00008F45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272944:
    // 0x272944: 0xbc70  tge         $zero, $zero, 753
    ctx->pc = 0x272944u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272948:
    // 0x272948: 0x0  nop
    ctx->pc = 0x272948u;
    // NOP
label_27294c:
    // 0x27294c: 0x0  nop
    ctx->pc = 0x27294cu;
    // NOP
label_272950:
    // 0x272950: 0x8f5d  .word       0x00008F5D                   # dmultu      $zero, $zero # 00008F40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x272950 raw=0x00008F5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272954:
    // 0x272954: 0x9c60  .word       0x00009C60                   # add         $s3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_272958:
    // 0x272958: 0x0  nop
    ctx->pc = 0x272958u;
    // NOP
label_27295c:
    // 0x27295c: 0x0  nop
    ctx->pc = 0x27295cu;
    // NOP
label_272960:
    // 0x272960: 0x8f71  tgeu        $zero, $zero, 573
    ctx->pc = 0x272960u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272964:
    // 0x272964: 0x97b0  tge         $zero, $zero, 606
    ctx->pc = 0x272964u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272968:
    // 0x272968: 0x0  nop
    ctx->pc = 0x272968u;
    // NOP
label_27296c:
    // 0x27296c: 0x0  nop
    ctx->pc = 0x27296cu;
    // NOP
label_272970:
    // 0x272970: 0x8f84  .word       0x00008F84                   # sllv        $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272970u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_272974:
    // 0x272974: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272974u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_272978:
    // 0x272978: 0x0  nop
    ctx->pc = 0x272978u;
    // NOP
label_27297c:
    // 0x27297c: 0x0  nop
    ctx->pc = 0x27297cu;
    // NOP
label_272980:
    // 0x272980: 0x8f94  .word       0x00008F94                   # dsllv       $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272980u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_272984:
    // 0x272984: 0x6a70  tge         $zero, $zero, 425
    ctx->pc = 0x272984u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272988:
    // 0x272988: 0x0  nop
    ctx->pc = 0x272988u;
    // NOP
label_27298c:
    // 0x27298c: 0x0  nop
    ctx->pc = 0x27298cu;
    // NOP
label_272990:
    // 0x272990: 0x8fa2  .word       0x00008FA2                   # neg         $s1, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272990u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_272994:
    // 0x272994: 0x6e40  sll         $t5, $zero, 25
    ctx->pc = 0x272994u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_272998:
    // 0x272998: 0x0  nop
    ctx->pc = 0x272998u;
    // NOP
label_27299c:
    // 0x27299c: 0x0  nop
    ctx->pc = 0x27299cu;
    // NOP
label_2729a0:
    // 0x2729a0: 0x8fb0  tge         $zero, $zero, 574
    ctx->pc = 0x2729a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2729a4:
    // 0x2729a4: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2729a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2729a8:
    // 0x2729a8: 0x0  nop
    ctx->pc = 0x2729a8u;
    // NOP
label_2729ac:
    // 0x2729ac: 0x0  nop
    ctx->pc = 0x2729acu;
    // NOP
label_2729b0:
    // 0x2729b0: 0x8fbd  .word       0x00008FBD                   # INVALID     $zero, $zero, -0x7043 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2729b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2729B0 raw=0x00008FBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2729b4:
    // 0x2729b4: 0xa890  .word       0x0000A890                   # mfhi        $s5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2729b4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2729b8:
    // 0x2729b8: 0x0  nop
    ctx->pc = 0x2729b8u;
    // NOP
label_2729bc:
    // 0x2729bc: 0x0  nop
    ctx->pc = 0x2729bcu;
    // NOP
label_2729c0:
    // 0x2729c0: 0x8fd3  .word       0x00008FD3                   # mtlo        $zero # 00008FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2729c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2729c4:
    // 0x2729c4: 0x98a0  .word       0x000098A0                   # add         $s3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2729c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
    ctx->pc = 0x2729c8u;
    return;
}

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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part383(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x256170u: goto label_256170;
        case 0x256174u: goto label_256174;
        case 0x256178u: goto label_256178;
        case 0x25617cu: goto label_25617c;
        case 0x256180u: goto label_256180;
        case 0x256184u: goto label_256184;
        case 0x256188u: goto label_256188;
        case 0x25618cu: goto label_25618c;
        case 0x256190u: goto label_256190;
        case 0x256194u: goto label_256194;
        case 0x256198u: goto label_256198;
        case 0x25619cu: goto label_25619c;
        case 0x2561a0u: goto label_2561a0;
        case 0x2561a4u: goto label_2561a4;
        case 0x2561a8u: goto label_2561a8;
        case 0x2561acu: goto label_2561ac;
        case 0x2561b0u: goto label_2561b0;
        case 0x2561b4u: goto label_2561b4;
        case 0x2561b8u: goto label_2561b8;
        case 0x2561bcu: goto label_2561bc;
        case 0x2561c0u: goto label_2561c0;
        case 0x2561c4u: goto label_2561c4;
        case 0x2561c8u: goto label_2561c8;
        case 0x2561ccu: goto label_2561cc;
        case 0x2561d0u: goto label_2561d0;
        case 0x2561d4u: goto label_2561d4;
        case 0x2561d8u: goto label_2561d8;
        case 0x2561dcu: goto label_2561dc;
        case 0x2561e0u: goto label_2561e0;
        case 0x2561e4u: goto label_2561e4;
        case 0x2561e8u: goto label_2561e8;
        case 0x2561ecu: goto label_2561ec;
        case 0x2561f0u: goto label_2561f0;
        case 0x2561f4u: goto label_2561f4;
        case 0x2561f8u: goto label_2561f8;
        case 0x2561fcu: goto label_2561fc;
        case 0x256200u: goto label_256200;
        case 0x256204u: goto label_256204;
        case 0x256208u: goto label_256208;
        case 0x25620cu: goto label_25620c;
        case 0x256210u: goto label_256210;
        case 0x256214u: goto label_256214;
        case 0x256218u: goto label_256218;
        case 0x25621cu: goto label_25621c;
        case 0x256220u: goto label_256220;
        case 0x256224u: goto label_256224;
        case 0x256228u: goto label_256228;
        case 0x25622cu: goto label_25622c;
        case 0x256230u: goto label_256230;
        case 0x256234u: goto label_256234;
        case 0x256238u: goto label_256238;
        case 0x25623cu: goto label_25623c;
        case 0x256240u: goto label_256240;
        case 0x256244u: goto label_256244;
        case 0x256248u: goto label_256248;
        case 0x25624cu: goto label_25624c;
        case 0x256250u: goto label_256250;
        case 0x256254u: goto label_256254;
        case 0x256258u: goto label_256258;
        case 0x25625cu: goto label_25625c;
        case 0x256260u: goto label_256260;
        case 0x256264u: goto label_256264;
        case 0x256268u: goto label_256268;
        case 0x25626cu: goto label_25626c;
        case 0x256270u: goto label_256270;
        case 0x256274u: goto label_256274;
        case 0x256278u: goto label_256278;
        case 0x25627cu: goto label_25627c;
        case 0x256280u: goto label_256280;
        case 0x256284u: goto label_256284;
        case 0x256288u: goto label_256288;
        case 0x25628cu: goto label_25628c;
        case 0x256290u: goto label_256290;
        case 0x256294u: goto label_256294;
        case 0x256298u: goto label_256298;
        case 0x25629cu: goto label_25629c;
        case 0x2562a0u: goto label_2562a0;
        case 0x2562a4u: goto label_2562a4;
        case 0x2562a8u: goto label_2562a8;
        case 0x2562acu: goto label_2562ac;
        case 0x2562b0u: goto label_2562b0;
        case 0x2562b4u: goto label_2562b4;
        case 0x2562b8u: goto label_2562b8;
        case 0x2562bcu: goto label_2562bc;
        case 0x2562c0u: goto label_2562c0;
        case 0x2562c4u: goto label_2562c4;
        case 0x2562c8u: goto label_2562c8;
        case 0x2562ccu: goto label_2562cc;
        case 0x2562d0u: goto label_2562d0;
        case 0x2562d4u: goto label_2562d4;
        case 0x2562d8u: goto label_2562d8;
        case 0x2562dcu: goto label_2562dc;
        case 0x2562e0u: goto label_2562e0;
        case 0x2562e4u: goto label_2562e4;
        case 0x2562e8u: goto label_2562e8;
        case 0x2562ecu: goto label_2562ec;
        case 0x2562f0u: goto label_2562f0;
        case 0x2562f4u: goto label_2562f4;
        case 0x2562f8u: goto label_2562f8;
        case 0x2562fcu: goto label_2562fc;
        case 0x256300u: goto label_256300;
        case 0x256304u: goto label_256304;
        case 0x256308u: goto label_256308;
        case 0x25630cu: goto label_25630c;
        case 0x256310u: goto label_256310;
        case 0x256314u: goto label_256314;
        case 0x256318u: goto label_256318;
        case 0x25631cu: goto label_25631c;
        case 0x256320u: goto label_256320;
        case 0x256324u: goto label_256324;
        case 0x256328u: goto label_256328;
        case 0x25632cu: goto label_25632c;
        case 0x256330u: goto label_256330;
        case 0x256334u: goto label_256334;
        case 0x256338u: goto label_256338;
        case 0x25633cu: goto label_25633c;
        case 0x256340u: goto label_256340;
        case 0x256344u: goto label_256344;
        case 0x256348u: goto label_256348;
        case 0x25634cu: goto label_25634c;
        case 0x256350u: goto label_256350;
        case 0x256354u: goto label_256354;
        case 0x256358u: goto label_256358;
        case 0x25635cu: goto label_25635c;
        case 0x256360u: goto label_256360;
        case 0x256364u: goto label_256364;
        case 0x256368u: goto label_256368;
        case 0x25636cu: goto label_25636c;
        case 0x256370u: goto label_256370;
        case 0x256374u: goto label_256374;
        case 0x256378u: goto label_256378;
        case 0x25637cu: goto label_25637c;
        case 0x256380u: goto label_256380;
        case 0x256384u: goto label_256384;
        case 0x256388u: goto label_256388;
        case 0x25638cu: goto label_25638c;
        case 0x256390u: goto label_256390;
        case 0x256394u: goto label_256394;
        case 0x256398u: goto label_256398;
        case 0x25639cu: goto label_25639c;
        case 0x2563a0u: goto label_2563a0;
        case 0x2563a4u: goto label_2563a4;
        case 0x2563a8u: goto label_2563a8;
        case 0x2563acu: goto label_2563ac;
        case 0x2563b0u: goto label_2563b0;
        case 0x2563b4u: goto label_2563b4;
        case 0x2563b8u: goto label_2563b8;
        case 0x2563bcu: goto label_2563bc;
        case 0x2563c0u: goto label_2563c0;
        case 0x2563c4u: goto label_2563c4;
        case 0x2563c8u: goto label_2563c8;
        case 0x2563ccu: goto label_2563cc;
        case 0x2563d0u: goto label_2563d0;
        case 0x2563d4u: goto label_2563d4;
        case 0x2563d8u: goto label_2563d8;
        case 0x2563dcu: goto label_2563dc;
        case 0x2563e0u: goto label_2563e0;
        case 0x2563e4u: goto label_2563e4;
        case 0x2563e8u: goto label_2563e8;
        case 0x2563ecu: goto label_2563ec;
        case 0x2563f0u: goto label_2563f0;
        case 0x2563f4u: goto label_2563f4;
        case 0x2563f8u: goto label_2563f8;
        case 0x2563fcu: goto label_2563fc;
        case 0x256400u: goto label_256400;
        case 0x256404u: goto label_256404;
        case 0x256408u: goto label_256408;
        case 0x25640cu: goto label_25640c;
        case 0x256410u: goto label_256410;
        case 0x256414u: goto label_256414;
        case 0x256418u: goto label_256418;
        case 0x25641cu: goto label_25641c;
        case 0x256420u: goto label_256420;
        case 0x256424u: goto label_256424;
        case 0x256428u: goto label_256428;
        case 0x25642cu: goto label_25642c;
        case 0x256430u: goto label_256430;
        case 0x256434u: goto label_256434;
        case 0x256438u: goto label_256438;
        case 0x25643cu: goto label_25643c;
        case 0x256440u: goto label_256440;
        case 0x256444u: goto label_256444;
        case 0x256448u: goto label_256448;
        case 0x25644cu: goto label_25644c;
        case 0x256450u: goto label_256450;
        case 0x256454u: goto label_256454;
        case 0x256458u: goto label_256458;
        case 0x25645cu: goto label_25645c;
        case 0x256460u: goto label_256460;
        case 0x256464u: goto label_256464;
        case 0x256468u: goto label_256468;
        case 0x25646cu: goto label_25646c;
        case 0x256470u: goto label_256470;
        case 0x256474u: goto label_256474;
        case 0x256478u: goto label_256478;
        case 0x25647cu: goto label_25647c;
        case 0x256480u: goto label_256480;
        case 0x256484u: goto label_256484;
        case 0x256488u: goto label_256488;
        case 0x25648cu: goto label_25648c;
        case 0x256490u: goto label_256490;
        case 0x256494u: goto label_256494;
        case 0x256498u: goto label_256498;
        case 0x25649cu: goto label_25649c;
        case 0x2564a0u: goto label_2564a0;
        case 0x2564a4u: goto label_2564a4;
        case 0x2564a8u: goto label_2564a8;
        case 0x2564acu: goto label_2564ac;
        case 0x2564b0u: goto label_2564b0;
        case 0x2564b4u: goto label_2564b4;
        case 0x2564b8u: goto label_2564b8;
        case 0x2564bcu: goto label_2564bc;
        case 0x2564c0u: goto label_2564c0;
        case 0x2564c4u: goto label_2564c4;
        case 0x2564c8u: goto label_2564c8;
        case 0x2564ccu: goto label_2564cc;
        case 0x2564d0u: goto label_2564d0;
        case 0x2564d4u: goto label_2564d4;
        case 0x2564d8u: goto label_2564d8;
        case 0x2564dcu: goto label_2564dc;
        case 0x2564e0u: goto label_2564e0;
        case 0x2564e4u: goto label_2564e4;
        case 0x2564e8u: goto label_2564e8;
        case 0x2564ecu: goto label_2564ec;
        case 0x2564f0u: goto label_2564f0;
        case 0x2564f4u: goto label_2564f4;
        case 0x2564f8u: goto label_2564f8;
        case 0x2564fcu: goto label_2564fc;
        case 0x256500u: goto label_256500;
        case 0x256504u: goto label_256504;
        case 0x256508u: goto label_256508;
        case 0x25650cu: goto label_25650c;
        case 0x256510u: goto label_256510;
        case 0x256514u: goto label_256514;
        case 0x256518u: goto label_256518;
        case 0x25651cu: goto label_25651c;
        case 0x256520u: goto label_256520;
        case 0x256524u: goto label_256524;
        case 0x256528u: goto label_256528;
        case 0x25652cu: goto label_25652c;
        case 0x256530u: goto label_256530;
        case 0x256534u: goto label_256534;
        case 0x256538u: goto label_256538;
        case 0x25653cu: goto label_25653c;
        case 0x256540u: goto label_256540;
        case 0x256544u: goto label_256544;
        case 0x256548u: goto label_256548;
        case 0x25654cu: goto label_25654c;
        case 0x256550u: goto label_256550;
        case 0x256554u: goto label_256554;
        case 0x256558u: goto label_256558;
        case 0x25655cu: goto label_25655c;
        case 0x256560u: goto label_256560;
        case 0x256564u: goto label_256564;
        case 0x256568u: goto label_256568;
        case 0x25656cu: goto label_25656c;
        case 0x256570u: goto label_256570;
        case 0x256574u: goto label_256574;
        case 0x256578u: goto label_256578;
        case 0x25657cu: goto label_25657c;
        case 0x256580u: goto label_256580;
        case 0x256584u: goto label_256584;
        case 0x256588u: goto label_256588;
        case 0x25658cu: goto label_25658c;
        case 0x256590u: goto label_256590;
        case 0x256594u: goto label_256594;
        case 0x256598u: goto label_256598;
        case 0x25659cu: goto label_25659c;
        case 0x2565a0u: goto label_2565a0;
        case 0x2565a4u: goto label_2565a4;
        case 0x2565a8u: goto label_2565a8;
        case 0x2565acu: goto label_2565ac;
        case 0x2565b0u: goto label_2565b0;
        case 0x2565b4u: goto label_2565b4;
        case 0x2565b8u: goto label_2565b8;
        case 0x2565bcu: goto label_2565bc;
        case 0x2565c0u: goto label_2565c0;
        case 0x2565c4u: goto label_2565c4;
        case 0x2565c8u: goto label_2565c8;
        case 0x2565ccu: goto label_2565cc;
        case 0x2565d0u: goto label_2565d0;
        case 0x2565d4u: goto label_2565d4;
        case 0x2565d8u: goto label_2565d8;
        case 0x2565dcu: goto label_2565dc;
        case 0x2565e0u: goto label_2565e0;
        case 0x2565e4u: goto label_2565e4;
        case 0x2565e8u: goto label_2565e8;
        case 0x2565ecu: goto label_2565ec;
        case 0x2565f0u: goto label_2565f0;
        case 0x2565f4u: goto label_2565f4;
        case 0x2565f8u: goto label_2565f8;
        case 0x2565fcu: goto label_2565fc;
        case 0x256600u: goto label_256600;
        case 0x256604u: goto label_256604;
        case 0x256608u: goto label_256608;
        case 0x25660cu: goto label_25660c;
        case 0x256610u: goto label_256610;
        case 0x256614u: goto label_256614;
        case 0x256618u: goto label_256618;
        case 0x25661cu: goto label_25661c;
        case 0x256620u: goto label_256620;
        case 0x256624u: goto label_256624;
        case 0x256628u: goto label_256628;
        case 0x25662cu: goto label_25662c;
        case 0x256630u: goto label_256630;
        case 0x256634u: goto label_256634;
        case 0x256638u: goto label_256638;
        case 0x25663cu: goto label_25663c;
        case 0x256640u: goto label_256640;
        case 0x256644u: goto label_256644;
        case 0x256648u: goto label_256648;
        case 0x25664cu: goto label_25664c;
        case 0x256650u: goto label_256650;
        case 0x256654u: goto label_256654;
        case 0x256658u: goto label_256658;
        case 0x25665cu: goto label_25665c;
        case 0x256660u: goto label_256660;
        case 0x256664u: goto label_256664;
        case 0x256668u: goto label_256668;
        case 0x25666cu: goto label_25666c;
        case 0x256670u: goto label_256670;
        case 0x256674u: goto label_256674;
        case 0x256678u: goto label_256678;
        case 0x25667cu: goto label_25667c;
        case 0x256680u: goto label_256680;
        case 0x256684u: goto label_256684;
        case 0x256688u: goto label_256688;
        case 0x25668cu: goto label_25668c;
        case 0x256690u: goto label_256690;
        case 0x256694u: goto label_256694;
        case 0x256698u: goto label_256698;
        case 0x25669cu: goto label_25669c;
        case 0x2566a0u: goto label_2566a0;
        case 0x2566a4u: goto label_2566a4;
        case 0x2566a8u: goto label_2566a8;
        case 0x2566acu: goto label_2566ac;
        case 0x2566b0u: goto label_2566b0;
        case 0x2566b4u: goto label_2566b4;
        case 0x2566b8u: goto label_2566b8;
        case 0x2566bcu: goto label_2566bc;
        case 0x2566c0u: goto label_2566c0;
        case 0x2566c4u: goto label_2566c4;
        case 0x2566c8u: goto label_2566c8;
        case 0x2566ccu: goto label_2566cc;
        case 0x2566d0u: goto label_2566d0;
        case 0x2566d4u: goto label_2566d4;
        case 0x2566d8u: goto label_2566d8;
        case 0x2566dcu: goto label_2566dc;
        case 0x2566e0u: goto label_2566e0;
        case 0x2566e4u: goto label_2566e4;
        case 0x2566e8u: goto label_2566e8;
        case 0x2566ecu: goto label_2566ec;
        case 0x2566f0u: goto label_2566f0;
        case 0x2566f4u: goto label_2566f4;
        case 0x2566f8u: goto label_2566f8;
        case 0x2566fcu: goto label_2566fc;
        case 0x256700u: goto label_256700;
        case 0x256704u: goto label_256704;
        case 0x256708u: goto label_256708;
        case 0x25670cu: goto label_25670c;
        case 0x256710u: goto label_256710;
        case 0x256714u: goto label_256714;
        case 0x256718u: goto label_256718;
        case 0x25671cu: goto label_25671c;
        case 0x256720u: goto label_256720;
        case 0x256724u: goto label_256724;
        case 0x256728u: goto label_256728;
        case 0x25672cu: goto label_25672c;
        case 0x256730u: goto label_256730;
        case 0x256734u: goto label_256734;
        case 0x256738u: goto label_256738;
        case 0x25673cu: goto label_25673c;
        case 0x256740u: goto label_256740;
        case 0x256744u: goto label_256744;
        case 0x256748u: goto label_256748;
        case 0x25674cu: goto label_25674c;
        case 0x256750u: goto label_256750;
        case 0x256754u: goto label_256754;
        case 0x256758u: goto label_256758;
        case 0x25675cu: goto label_25675c;
        case 0x256760u: goto label_256760;
        case 0x256764u: goto label_256764;
        case 0x256768u: goto label_256768;
        case 0x25676cu: goto label_25676c;
        case 0x256770u: goto label_256770;
        case 0x256774u: goto label_256774;
        case 0x256778u: goto label_256778;
        case 0x25677cu: goto label_25677c;
        case 0x256780u: goto label_256780;
        case 0x256784u: goto label_256784;
        case 0x256788u: goto label_256788;
        case 0x25678cu: goto label_25678c;
        case 0x256790u: goto label_256790;
        case 0x256794u: goto label_256794;
        case 0x256798u: goto label_256798;
        case 0x25679cu: goto label_25679c;
        case 0x2567a0u: goto label_2567a0;
        case 0x2567a4u: goto label_2567a4;
        case 0x2567a8u: goto label_2567a8;
        case 0x2567acu: goto label_2567ac;
        case 0x2567b0u: goto label_2567b0;
        case 0x2567b4u: goto label_2567b4;
        case 0x2567b8u: goto label_2567b8;
        case 0x2567bcu: goto label_2567bc;
        case 0x2567c0u: goto label_2567c0;
        case 0x2567c4u: goto label_2567c4;
        case 0x2567c8u: goto label_2567c8;
        case 0x2567ccu: goto label_2567cc;
        case 0x2567d0u: goto label_2567d0;
        case 0x2567d4u: goto label_2567d4;
        case 0x2567d8u: goto label_2567d8;
        case 0x2567dcu: goto label_2567dc;
        case 0x2567e0u: goto label_2567e0;
        case 0x2567e4u: goto label_2567e4;
        case 0x2567e8u: goto label_2567e8;
        case 0x2567ecu: goto label_2567ec;
        case 0x2567f0u: goto label_2567f0;
        case 0x2567f4u: goto label_2567f4;
        case 0x2567f8u: goto label_2567f8;
        case 0x2567fcu: goto label_2567fc;
        case 0x256800u: goto label_256800;
        case 0x256804u: goto label_256804;
        case 0x256808u: goto label_256808;
        case 0x25680cu: goto label_25680c;
        case 0x256810u: goto label_256810;
        case 0x256814u: goto label_256814;
        case 0x256818u: goto label_256818;
        case 0x25681cu: goto label_25681c;
        case 0x256820u: goto label_256820;
        case 0x256824u: goto label_256824;
        case 0x256828u: goto label_256828;
        case 0x25682cu: goto label_25682c;
        case 0x256830u: goto label_256830;
        case 0x256834u: goto label_256834;
        case 0x256838u: goto label_256838;
        case 0x25683cu: goto label_25683c;
        case 0x256840u: goto label_256840;
        case 0x256844u: goto label_256844;
        case 0x256848u: goto label_256848;
        case 0x25684cu: goto label_25684c;
        case 0x256850u: goto label_256850;
        case 0x256854u: goto label_256854;
        case 0x256858u: goto label_256858;
        case 0x25685cu: goto label_25685c;
        case 0x256860u: goto label_256860;
        case 0x256864u: goto label_256864;
        case 0x256868u: goto label_256868;
        case 0x25686cu: goto label_25686c;
        case 0x256870u: goto label_256870;
        case 0x256874u: goto label_256874;
        case 0x256878u: goto label_256878;
        case 0x25687cu: goto label_25687c;
        case 0x256880u: goto label_256880;
        case 0x256884u: goto label_256884;
        case 0x256888u: goto label_256888;
        case 0x25688cu: goto label_25688c;
        case 0x256890u: goto label_256890;
        case 0x256894u: goto label_256894;
        case 0x256898u: goto label_256898;
        case 0x25689cu: goto label_25689c;
        case 0x2568a0u: goto label_2568a0;
        case 0x2568a4u: goto label_2568a4;
        case 0x2568a8u: goto label_2568a8;
        case 0x2568acu: goto label_2568ac;
        case 0x2568b0u: goto label_2568b0;
        case 0x2568b4u: goto label_2568b4;
        case 0x2568b8u: goto label_2568b8;
        case 0x2568bcu: goto label_2568bc;
        case 0x2568c0u: goto label_2568c0;
        case 0x2568c4u: goto label_2568c4;
        case 0x2568c8u: goto label_2568c8;
        case 0x2568ccu: goto label_2568cc;
        case 0x2568d0u: goto label_2568d0;
        case 0x2568d4u: goto label_2568d4;
        case 0x2568d8u: goto label_2568d8;
        case 0x2568dcu: goto label_2568dc;
        case 0x2568e0u: goto label_2568e0;
        case 0x2568e4u: goto label_2568e4;
        case 0x2568e8u: goto label_2568e8;
        case 0x2568ecu: goto label_2568ec;
        case 0x2568f0u: goto label_2568f0;
        case 0x2568f4u: goto label_2568f4;
        case 0x2568f8u: goto label_2568f8;
        case 0x2568fcu: goto label_2568fc;
        case 0x256900u: goto label_256900;
        case 0x256904u: goto label_256904;
        case 0x256908u: goto label_256908;
        case 0x25690cu: goto label_25690c;
        case 0x256910u: goto label_256910;
        case 0x256914u: goto label_256914;
        case 0x256918u: goto label_256918;
        case 0x25691cu: goto label_25691c;
        case 0x256920u: goto label_256920;
        case 0x256924u: goto label_256924;
        case 0x256928u: goto label_256928;
        case 0x25692cu: goto label_25692c;
        case 0x256930u: goto label_256930;
        case 0x256934u: goto label_256934;
        case 0x256938u: goto label_256938;
        case 0x25693cu: goto label_25693c;
        default: return;
    }

label_256170:
    // 0x256170: 0x0  nop
    ctx->pc = 0x256170u;
    // NOP
label_256174:
    // 0x256174: 0x0  nop
    ctx->pc = 0x256174u;
    // NOP
label_256178:
    // 0x256178: 0xbd00adfd  cache       0x00, -0x5203($t0)
    ctx->pc = 0x256178u;
    // CACHE instruction (ignored)
label_25617c:
    // 0x25617c: 0x0  nop
    ctx->pc = 0x25617cu;
    // NOP
label_256180:
    // 0x256180: 0x0  nop
    ctx->pc = 0x256180u;
    // NOP
label_256184:
    // 0x256184: 0x0  nop
    ctx->pc = 0x256184u;
    // NOP
label_256188:
    // 0x256188: 0x3d00adfd  .word       0x3D00ADFD                   # lui         $zero, 0xADFD # 01000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x256188u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_25618c:
    // 0x25618c: 0x0  nop
    ctx->pc = 0x25618cu;
    // NOP
label_256190:
    // 0x256190: 0x0  nop
    ctx->pc = 0x256190u;
    // NOP
label_256194:
    // 0x256194: 0x0  nop
    ctx->pc = 0x256194u;
    // NOP
label_256198:
    // 0x256198: 0x3d00adfd  .word       0x3D00ADFD                   # lui         $zero, 0xADFD # 01000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x256198u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)44541 << 16));
label_25619c:
    // 0x25619c: 0x0  nop
    ctx->pc = 0x25619cu;
    // NOP
label_2561a0:
    // 0x2561a0: 0x0  nop
    ctx->pc = 0x2561a0u;
    // NOP
label_2561a4:
    // 0x2561a4: 0x0  nop
    ctx->pc = 0x2561a4u;
    // NOP
label_2561a8:
    // 0x2561a8: 0xbd00adfd  cache       0x00, -0x5203($t0)
    ctx->pc = 0x2561a8u;
    // CACHE instruction (ignored)
label_2561ac:
    // 0x2561ac: 0x0  nop
    ctx->pc = 0x2561acu;
    // NOP
label_2561b0:
    // 0x2561b0: 0x0  nop
    ctx->pc = 0x2561b0u;
    // NOP
label_2561b4:
    // 0x2561b4: 0x0  nop
    ctx->pc = 0x2561b4u;
    // NOP
label_2561b8:
    // 0x2561b8: 0x0  nop
    ctx->pc = 0x2561b8u;
    // NOP
label_2561bc:
    // 0x2561bc: 0x0  nop
    ctx->pc = 0x2561bcu;
    // NOP
label_2561c0:
    // 0x2561c0: 0x3dd6774f  .word       0x3DD6774F                   # lui         $s6, 0x774F # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2561c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)30543 << 16));
label_2561c4:
    // 0x2561c4: 0x0  nop
    ctx->pc = 0x2561c4u;
    // NOP
label_2561c8:
    // 0x2561c8: 0x0  nop
    ctx->pc = 0x2561c8u;
    // NOP
label_2561cc:
    // 0x2561cc: 0x0  nop
    ctx->pc = 0x2561ccu;
    // NOP
label_2561d0:
    // 0x2561d0: 0x2558e0  .word       0x002558E0                   # add         $t3, $at, $a1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561d0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2561d4:
    // 0x2561d4: 0x255be0  .word       0x00255BE0                   # add         $t3, $at, $a1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2561d8:
    // 0x2561d8: 0x2557f0  tge         $at, $a1, 351
    ctx->pc = 0x2561d8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_2561dc:
    // 0x2561dc: 0x255e20  .word       0x00255E20                   # add         $t3, $at, $a1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561dcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2561e0:
    // 0x2561e0: 0x2560b0  tge         $at, $a1, 386
    ctx->pc = 0x2561e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_2561e4:
    // 0x2561e4: 0x255fc0  .word       0x00255FC0                   # sll         $t3, $a1, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 31));
label_2561e8:
    // 0x2561e8: 0x2558e0  .word       0x002558E0                   # add         $t3, $at, $a1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2561ec:
    // 0x2561ec: 0x0  nop
    ctx->pc = 0x2561ecu;
    // NOP
label_2561f0:
    // 0x2561f0: 0x255ae0  .word       0x00255AE0                   # add         $t3, $at, $a1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561f0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2561f4:
    // 0x2561f4: 0x255c60  .word       0x00255C60                   # add         $t3, $at, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561f4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2561f8:
    // 0x2561f8: 0x255840  .word       0x00255840                   # sll         $t3, $a1, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2561fc:
    // 0x2561fc: 0x255d60  .word       0x00255D60                   # add         $t3, $at, $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2561fcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_256200:
    // 0x256200: 0x256110  .word       0x00256110                   # mfhi        $t4 # 00250100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256200u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_256204:
    // 0x256204: 0x256010  .word       0x00256010                   # mfhi        $t4 # 00250000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256204u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_256208:
    // 0x256208: 0x255ae0  .word       0x00255AE0                   # add         $t3, $at, $a1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256208u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25620c:
    // 0x25620c: 0x0  nop
    ctx->pc = 0x25620cu;
    // NOP
label_256210:
    // 0x256210: 0x2559e0  .word       0x002559E0                   # add         $t3, $at, $a1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256210u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_256214:
    // 0x256214: 0x255ce0  .word       0x00255CE0                   # add         $t3, $at, $a1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256214u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_256218:
    // 0x256218: 0x255890  .word       0x00255890                   # mfhi        $t3 # 00250080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256218u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25621c:
    // 0x25621c: 0x255ee0  .word       0x00255EE0                   # add         $t3, $at, $a1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25621cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_256220:
    // 0x256220: 0x256170  tge         $at, $a1, 389
    ctx->pc = 0x256220u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_256224:
    // 0x256224: 0x256060  .word       0x00256060                   # add         $t4, $at, $a1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256224u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_256228:
    // 0x256228: 0x2559e0  .word       0x002559E0                   # add         $t3, $at, $a1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256228u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25622c:
    // 0x25622c: 0x0  nop
    ctx->pc = 0x25622cu;
    // NOP
label_256230:
    // 0x256230: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x256230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_256234:
    // 0x256234: 0x19  multu       $zero, $zero
    ctx->pc = 0x256234u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_256238:
    // 0x256238: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x256238u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25623c:
    // 0x25623c: 0x37  .word       0x00000037                   # INVALID     $zero, $zero, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25623cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25623C raw=0x00000037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256240:
    // 0x256240: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x256240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_256244:
    // 0x256244: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x256244u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_256248:
    // 0x256248: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x256248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_25624c:
    // 0x25624c: 0x0  nop
    ctx->pc = 0x25624cu;
    // NOP
label_256250:
    // 0x256250: 0x1677e0  .word       0x001677E0                   # add         $t6, $zero, $s6 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256250u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 22);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_256254:
    // 0x256254: 0x1677b0  tge         $zero, $s6, 478
    ctx->pc = 0x256254u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_256258:
    // 0x256258: 0x167110  .word       0x00167110                   # mfhi        $t6 # 00160100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256258u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25625c:
    // 0x25625c: 0x166080  sll         $t4, $s6, 2
    ctx->pc = 0x25625cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_256260:
    // 0x256260: 0x167100  sll         $t6, $s6, 4
    ctx->pc = 0x256260u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_256264:
    // 0x256264: 0x167100  sll         $t6, $s6, 4
    ctx->pc = 0x256264u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_256268:
    // 0x256268: 0x1675b0  tge         $zero, $s6, 470
    ctx->pc = 0x256268u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_25626c:
    // 0x25626c: 0x166b10  .word       0x00166B10                   # mfhi        $t5 # 00160300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25626cu;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_256270:
    // 0x256270: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256270u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x256270 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256274:
    // 0x256274: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256274u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x256274 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256278:
    // 0x256278: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256278u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x256278 raw=0x41A00000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25627c:
    // 0x25627c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x25627cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256280:
    // 0x256280: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256280u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x256280 raw=0x42C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256284:
    // 0x256284: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256284u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x256284 raw=0x42C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256288:
    // 0x256288: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x256288u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x256288 raw=0x42C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25628c:
    // 0x25628c: 0x0  nop
    ctx->pc = 0x25628cu;
    // NOP
label_256290:
    // 0x256290: 0x2c8980  .word       0x002C8980                   # sll         $s1, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256290u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_256294:
    // 0x256294: 0x0  nop
    ctx->pc = 0x256294u;
    // NOP
label_256298:
    // 0x256298: 0x2c89a0  .word       0x002C89A0                   # add         $s1, $at, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256298u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25629c:
    // 0x25629c: 0x0  nop
    ctx->pc = 0x25629cu;
    // NOP
label_2562a0:
    // 0x2562a0: 0x2c89c0  .word       0x002C89C0                   # sll         $s1, $t4, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 7));
label_2562a4:
    // 0x2562a4: 0x0  nop
    ctx->pc = 0x2562a4u;
    // NOP
label_2562a8:
    // 0x2562a8: 0x2c89e0  .word       0x002C89E0                   # add         $s1, $at, $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2562ac:
    // 0x2562ac: 0x0  nop
    ctx->pc = 0x2562acu;
    // NOP
label_2562b0:
    // 0x2562b0: 0x2c8a00  .word       0x002C8A00                   # sll         $s1, $t4, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
label_2562b4:
    // 0x2562b4: 0x0  nop
    ctx->pc = 0x2562b4u;
    // NOP
label_2562b8:
    // 0x2562b8: 0x2c8a20  .word       0x002C8A20                   # add         $s1, $at, $t4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562b8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2562bc:
    // 0x2562bc: 0x0  nop
    ctx->pc = 0x2562bcu;
    // NOP
label_2562c0:
    // 0x2562c0: 0x2c8a40  .word       0x002C8A40                   # sll         $s1, $t4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 9));
label_2562c4:
    // 0x2562c4: 0x0  nop
    ctx->pc = 0x2562c4u;
    // NOP
label_2562c8:
    // 0x2562c8: 0x2c8a60  .word       0x002C8A60                   # add         $s1, $at, $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2562cc:
    // 0x2562cc: 0x0  nop
    ctx->pc = 0x2562ccu;
    // NOP
label_2562d0:
    // 0x2562d0: 0x2c8a80  .word       0x002C8A80                   # sll         $s1, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_2562d4:
    // 0x2562d4: 0x0  nop
    ctx->pc = 0x2562d4u;
    // NOP
label_2562d8:
    // 0x2562d8: 0x2c8aa0  .word       0x002C8AA0                   # add         $s1, $at, $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562d8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2562dc:
    // 0x2562dc: 0x0  nop
    ctx->pc = 0x2562dcu;
    // NOP
label_2562e0:
    // 0x2562e0: 0x2c8ac0  .word       0x002C8AC0                   # sll         $s1, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
label_2562e4:
    // 0x2562e4: 0x0  nop
    ctx->pc = 0x2562e4u;
    // NOP
label_2562e8:
    // 0x2562e8: 0x2c8ae0  .word       0x002C8AE0                   # add         $s1, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2562ec:
    // 0x2562ec: 0x0  nop
    ctx->pc = 0x2562ecu;
    // NOP
label_2562f0:
    // 0x2562f0: 0x2c8b00  .word       0x002C8B00                   # sll         $s1, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 12));
label_2562f4:
    // 0x2562f4: 0x0  nop
    ctx->pc = 0x2562f4u;
    // NOP
label_2562f8:
    // 0x2562f8: 0x2c8b20  .word       0x002C8B20                   # add         $s1, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2562f8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2562fc:
    // 0x2562fc: 0x0  nop
    ctx->pc = 0x2562fcu;
    // NOP
label_256300:
    // 0x256300: 0x2c8b40  .word       0x002C8B40                   # sll         $s1, $t4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256300u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 13));
label_256304:
    // 0x256304: 0x0  nop
    ctx->pc = 0x256304u;
    // NOP
label_256308:
    // 0x256308: 0x2c8b60  .word       0x002C8B60                   # add         $s1, $at, $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256308u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25630c:
    // 0x25630c: 0x0  nop
    ctx->pc = 0x25630cu;
    // NOP
label_256310:
    // 0x256310: 0x2c8b80  .word       0x002C8B80                   # sll         $s1, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256310u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 14));
label_256314:
    // 0x256314: 0x0  nop
    ctx->pc = 0x256314u;
    // NOP
label_256318:
    // 0x256318: 0x2c8ba0  .word       0x002C8BA0                   # add         $s1, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256318u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25631c:
    // 0x25631c: 0x0  nop
    ctx->pc = 0x25631cu;
    // NOP
label_256320:
    // 0x256320: 0x2c8bc0  .word       0x002C8BC0                   # sll         $s1, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256320u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_256324:
    // 0x256324: 0x0  nop
    ctx->pc = 0x256324u;
    // NOP
label_256328:
    // 0x256328: 0x2c8be0  .word       0x002C8BE0                   # add         $s1, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256328u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25632c:
    // 0x25632c: 0x0  nop
    ctx->pc = 0x25632cu;
    // NOP
label_256330:
    // 0x256330: 0x2c8c00  .word       0x002C8C00                   # sll         $s1, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256330u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_256334:
    // 0x256334: 0x0  nop
    ctx->pc = 0x256334u;
    // NOP
label_256338:
    // 0x256338: 0x2c8c20  .word       0x002C8C20                   # add         $s1, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256338u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25633c:
    // 0x25633c: 0x0  nop
    ctx->pc = 0x25633cu;
    // NOP
label_256340:
    // 0x256340: 0x2c8c40  .word       0x002C8C40                   # sll         $s1, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256340u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 17));
label_256344:
    // 0x256344: 0x0  nop
    ctx->pc = 0x256344u;
    // NOP
label_256348:
    // 0x256348: 0x2c8c60  .word       0x002C8C60                   # add         $s1, $at, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256348u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25634c:
    // 0x25634c: 0x0  nop
    ctx->pc = 0x25634cu;
    // NOP
label_256350:
    // 0x256350: 0x2c8c80  .word       0x002C8C80                   # sll         $s1, $t4, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256350u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 18));
label_256354:
    // 0x256354: 0x0  nop
    ctx->pc = 0x256354u;
    // NOP
label_256358:
    // 0x256358: 0x2c8ca0  .word       0x002C8CA0                   # add         $s1, $at, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256358u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25635c:
    // 0x25635c: 0x0  nop
    ctx->pc = 0x25635cu;
    // NOP
label_256360:
    // 0x256360: 0x2c8cc0  .word       0x002C8CC0                   # sll         $s1, $t4, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256360u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 19));
label_256364:
    // 0x256364: 0x0  nop
    ctx->pc = 0x256364u;
    // NOP
label_256368:
    // 0x256368: 0x2c8ce0  .word       0x002C8CE0                   # add         $s1, $at, $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256368u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25636c:
    // 0x25636c: 0x0  nop
    ctx->pc = 0x25636cu;
    // NOP
label_256370:
    // 0x256370: 0x2c8d00  .word       0x002C8D00                   # sll         $s1, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256370u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_256374:
    // 0x256374: 0x0  nop
    ctx->pc = 0x256374u;
    // NOP
label_256378:
    // 0x256378: 0x2c8d20  .word       0x002C8D20                   # add         $s1, $at, $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256378u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25637c:
    // 0x25637c: 0x0  nop
    ctx->pc = 0x25637cu;
    // NOP
label_256380:
    // 0x256380: 0x2c8d40  .word       0x002C8D40                   # sll         $s1, $t4, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256380u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 21));
label_256384:
    // 0x256384: 0x0  nop
    ctx->pc = 0x256384u;
    // NOP
label_256388:
    // 0x256388: 0x2c8d60  .word       0x002C8D60                   # add         $s1, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256388u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25638c:
    // 0x25638c: 0x0  nop
    ctx->pc = 0x25638cu;
    // NOP
label_256390:
    // 0x256390: 0x2c8d80  .word       0x002C8D80                   # sll         $s1, $t4, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256390u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 22));
label_256394:
    // 0x256394: 0x0  nop
    ctx->pc = 0x256394u;
    // NOP
label_256398:
    // 0x256398: 0x2c8da0  .word       0x002C8DA0                   # add         $s1, $at, $t4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256398u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25639c:
    // 0x25639c: 0x0  nop
    ctx->pc = 0x25639cu;
    // NOP
label_2563a0:
    // 0x2563a0: 0x2c8dc0  .word       0x002C8DC0                   # sll         $s1, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 23));
label_2563a4:
    // 0x2563a4: 0x0  nop
    ctx->pc = 0x2563a4u;
    // NOP
label_2563a8:
    // 0x2563a8: 0x2c8de0  .word       0x002C8DE0                   # add         $s1, $at, $t4 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2563ac:
    // 0x2563ac: 0x0  nop
    ctx->pc = 0x2563acu;
    // NOP
label_2563b0:
    // 0x2563b0: 0x2c8e00  .word       0x002C8E00                   # sll         $s1, $t4, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_2563b4:
    // 0x2563b4: 0x0  nop
    ctx->pc = 0x2563b4u;
    // NOP
label_2563b8:
    // 0x2563b8: 0x2c8e20  .word       0x002C8E20                   # add         $s1, $at, $t4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563b8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2563bc:
    // 0x2563bc: 0x0  nop
    ctx->pc = 0x2563bcu;
    // NOP
label_2563c0:
    // 0x2563c0: 0x2c8e40  .word       0x002C8E40                   # sll         $s1, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_2563c4:
    // 0x2563c4: 0x0  nop
    ctx->pc = 0x2563c4u;
    // NOP
label_2563c8:
    // 0x2563c8: 0x2c8e60  .word       0x002C8E60                   # add         $s1, $at, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2563cc:
    // 0x2563cc: 0x0  nop
    ctx->pc = 0x2563ccu;
    // NOP
label_2563d0:
    // 0x2563d0: 0x2c8e80  .word       0x002C8E80                   # sll         $s1, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_2563d4:
    // 0x2563d4: 0x0  nop
    ctx->pc = 0x2563d4u;
    // NOP
label_2563d8:
    // 0x2563d8: 0x2c8ea0  .word       0x002C8EA0                   # add         $s1, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563d8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2563dc:
    // 0x2563dc: 0x0  nop
    ctx->pc = 0x2563dcu;
    // NOP
label_2563e0:
    // 0x2563e0: 0x2c8ec0  .word       0x002C8EC0                   # sll         $s1, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 27));
label_2563e4:
    // 0x2563e4: 0x0  nop
    ctx->pc = 0x2563e4u;
    // NOP
label_2563e8:
    // 0x2563e8: 0x2c8ee0  .word       0x002C8EE0                   # add         $s1, $at, $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2563ec:
    // 0x2563ec: 0x0  nop
    ctx->pc = 0x2563ecu;
    // NOP
label_2563f0:
    // 0x2563f0: 0x2c8f00  .word       0x002C8F00                   # sll         $s1, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 28));
label_2563f4:
    // 0x2563f4: 0x0  nop
    ctx->pc = 0x2563f4u;
    // NOP
label_2563f8:
    // 0x2563f8: 0x2c8f20  .word       0x002C8F20                   # add         $s1, $at, $t4 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2563f8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2563fc:
    // 0x2563fc: 0x0  nop
    ctx->pc = 0x2563fcu;
    // NOP
label_256400:
    // 0x256400: 0x2c8f40  .word       0x002C8F40                   # sll         $s1, $t4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256400u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 29));
label_256404:
    // 0x256404: 0x0  nop
    ctx->pc = 0x256404u;
    // NOP
label_256408:
    // 0x256408: 0x2c8f60  .word       0x002C8F60                   # add         $s1, $at, $t4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256408u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25640c:
    // 0x25640c: 0x0  nop
    ctx->pc = 0x25640cu;
    // NOP
label_256410:
    // 0x256410: 0x2c8f80  .word       0x002C8F80                   # sll         $s1, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256410u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 30));
label_256414:
    // 0x256414: 0x0  nop
    ctx->pc = 0x256414u;
    // NOP
label_256418:
    // 0x256418: 0x2c8fa0  .word       0x002C8FA0                   # add         $s1, $at, $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256418u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25641c:
    // 0x25641c: 0x0  nop
    ctx->pc = 0x25641cu;
    // NOP
label_256420:
    // 0x256420: 0x2c8fc0  .word       0x002C8FC0                   # sll         $s1, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256420u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 31));
label_256424:
    // 0x256424: 0x0  nop
    ctx->pc = 0x256424u;
    // NOP
label_256428:
    // 0x256428: 0x2c8fe0  .word       0x002C8FE0                   # add         $s1, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256428u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25642c:
    // 0x25642c: 0x0  nop
    ctx->pc = 0x25642cu;
    // NOP
label_256430:
    // 0x256430: 0x2c8980  .word       0x002C8980                   # sll         $s1, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256430u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_256434:
    // 0x256434: 0x0  nop
    ctx->pc = 0x256434u;
    // NOP
label_256438:
    // 0x256438: 0x2c89a0  .word       0x002C89A0                   # add         $s1, $at, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256438u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25643c:
    // 0x25643c: 0x0  nop
    ctx->pc = 0x25643cu;
    // NOP
label_256440:
    // 0x256440: 0x2c89c0  .word       0x002C89C0                   # sll         $s1, $t4, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256440u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 7));
label_256444:
    // 0x256444: 0x0  nop
    ctx->pc = 0x256444u;
    // NOP
label_256448:
    // 0x256448: 0x2c9000  .word       0x002C9000                   # sll         $s2, $t4, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256448u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 0));
label_25644c:
    // 0x25644c: 0x0  nop
    ctx->pc = 0x25644cu;
    // NOP
label_256450:
    // 0x256450: 0x2c9020  add         $s2, $at, $t4
    ctx->pc = 0x256450u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256454:
    // 0x256454: 0x0  nop
    ctx->pc = 0x256454u;
    // NOP
label_256458:
    // 0x256458: 0x2c9040  .word       0x002C9040                   # sll         $s2, $t4, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256458u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_25645c:
    // 0x25645c: 0x0  nop
    ctx->pc = 0x25645cu;
    // NOP
label_256460:
    // 0x256460: 0x2c9060  .word       0x002C9060                   # add         $s2, $at, $t4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256460u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256464:
    // 0x256464: 0x0  nop
    ctx->pc = 0x256464u;
    // NOP
label_256468:
    // 0x256468: 0x2c9080  .word       0x002C9080                   # sll         $s2, $t4, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256468u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_25646c:
    // 0x25646c: 0x0  nop
    ctx->pc = 0x25646cu;
    // NOP
label_256470:
    // 0x256470: 0x2c90a0  .word       0x002C90A0                   # add         $s2, $at, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256470u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256474:
    // 0x256474: 0x0  nop
    ctx->pc = 0x256474u;
    // NOP
label_256478:
    // 0x256478: 0x2c90c0  .word       0x002C90C0                   # sll         $s2, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256478u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_25647c:
    // 0x25647c: 0x0  nop
    ctx->pc = 0x25647cu;
    // NOP
label_256480:
    // 0x256480: 0x2c90e0  .word       0x002C90E0                   # add         $s2, $at, $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256480u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256484:
    // 0x256484: 0x0  nop
    ctx->pc = 0x256484u;
    // NOP
label_256488:
    // 0x256488: 0x2c9100  .word       0x002C9100                   # sll         $s2, $t4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256488u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_25648c:
    // 0x25648c: 0x0  nop
    ctx->pc = 0x25648cu;
    // NOP
label_256490:
    // 0x256490: 0x2c9120  .word       0x002C9120                   # add         $s2, $at, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256490u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256494:
    // 0x256494: 0x0  nop
    ctx->pc = 0x256494u;
    // NOP
label_256498:
    // 0x256498: 0x2c9140  .word       0x002C9140                   # sll         $s2, $t4, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256498u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_25649c:
    // 0x25649c: 0x0  nop
    ctx->pc = 0x25649cu;
    // NOP
label_2564a0:
    // 0x2564a0: 0x2c9160  .word       0x002C9160                   # add         $s2, $at, $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564a0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2564a4:
    // 0x2564a4: 0x0  nop
    ctx->pc = 0x2564a4u;
    // NOP
label_2564a8:
    // 0x2564a8: 0x2c9180  .word       0x002C9180                   # sll         $s2, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_2564ac:
    // 0x2564ac: 0x0  nop
    ctx->pc = 0x2564acu;
    // NOP
label_2564b0:
    // 0x2564b0: 0x2c91a0  .word       0x002C91A0                   # add         $s2, $at, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564b0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2564b4:
    // 0x2564b4: 0x0  nop
    ctx->pc = 0x2564b4u;
    // NOP
label_2564b8:
    // 0x2564b8: 0x2c91c0  .word       0x002C91C0                   # sll         $s2, $t4, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 7));
label_2564bc:
    // 0x2564bc: 0x0  nop
    ctx->pc = 0x2564bcu;
    // NOP
label_2564c0:
    // 0x2564c0: 0x2c91e0  .word       0x002C91E0                   # add         $s2, $at, $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564c0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2564c4:
    // 0x2564c4: 0x0  nop
    ctx->pc = 0x2564c4u;
    // NOP
label_2564c8:
    // 0x2564c8: 0x2c9200  .word       0x002C9200                   # sll         $s2, $t4, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
label_2564cc:
    // 0x2564cc: 0x0  nop
    ctx->pc = 0x2564ccu;
    // NOP
label_2564d0:
    // 0x2564d0: 0x2c9220  .word       0x002C9220                   # add         $s2, $at, $t4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564d0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2564d4:
    // 0x2564d4: 0x0  nop
    ctx->pc = 0x2564d4u;
    // NOP
label_2564d8:
    // 0x2564d8: 0x2c8c20  .word       0x002C8C20                   # add         $s1, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564d8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2564dc:
    // 0x2564dc: 0x0  nop
    ctx->pc = 0x2564dcu;
    // NOP
label_2564e0:
    // 0x2564e0: 0x2c8c40  .word       0x002C8C40                   # sll         $s1, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 17));
label_2564e4:
    // 0x2564e4: 0x0  nop
    ctx->pc = 0x2564e4u;
    // NOP
label_2564e8:
    // 0x2564e8: 0x2c8c60  .word       0x002C8C60                   # add         $s1, $at, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2564ec:
    // 0x2564ec: 0x0  nop
    ctx->pc = 0x2564ecu;
    // NOP
label_2564f0:
    // 0x2564f0: 0x2c8c80  .word       0x002C8C80                   # sll         $s1, $t4, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564f0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 12), 18));
label_2564f4:
    // 0x2564f4: 0x0  nop
    ctx->pc = 0x2564f4u;
    // NOP
label_2564f8:
    // 0x2564f8: 0x2c9240  .word       0x002C9240                   # sll         $s2, $t4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2564f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 9));
label_2564fc:
    // 0x2564fc: 0x0  nop
    ctx->pc = 0x2564fcu;
    // NOP
label_256500:
    // 0x256500: 0x2c9260  .word       0x002C9260                   # add         $s2, $at, $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256500u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256504:
    // 0x256504: 0x0  nop
    ctx->pc = 0x256504u;
    // NOP
label_256508:
    // 0x256508: 0x2c9280  .word       0x002C9280                   # sll         $s2, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256508u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_25650c:
    // 0x25650c: 0x0  nop
    ctx->pc = 0x25650cu;
    // NOP
label_256510:
    // 0x256510: 0x2c92a0  .word       0x002C92A0                   # add         $s2, $at, $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256510u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256514:
    // 0x256514: 0x0  nop
    ctx->pc = 0x256514u;
    // NOP
label_256518:
    // 0x256518: 0x2c92c0  .word       0x002C92C0                   # sll         $s2, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256518u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
label_25651c:
    // 0x25651c: 0x0  nop
    ctx->pc = 0x25651cu;
    // NOP
label_256520:
    // 0x256520: 0x2c92e0  .word       0x002C92E0                   # add         $s2, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256520u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256524:
    // 0x256524: 0x0  nop
    ctx->pc = 0x256524u;
    // NOP
label_256528:
    // 0x256528: 0x2c9300  .word       0x002C9300                   # sll         $s2, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256528u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 12));
label_25652c:
    // 0x25652c: 0x0  nop
    ctx->pc = 0x25652cu;
    // NOP
label_256530:
    // 0x256530: 0x2c9320  .word       0x002C9320                   # add         $s2, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256530u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256534:
    // 0x256534: 0x0  nop
    ctx->pc = 0x256534u;
    // NOP
label_256538:
    // 0x256538: 0x2c9340  .word       0x002C9340                   # sll         $s2, $t4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256538u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 13));
label_25653c:
    // 0x25653c: 0x0  nop
    ctx->pc = 0x25653cu;
    // NOP
label_256540:
    // 0x256540: 0x2c9360  .word       0x002C9360                   # add         $s2, $at, $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256540u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256544:
    // 0x256544: 0x0  nop
    ctx->pc = 0x256544u;
    // NOP
label_256548:
    // 0x256548: 0x2c9380  .word       0x002C9380                   # sll         $s2, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256548u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 14));
label_25654c:
    // 0x25654c: 0x0  nop
    ctx->pc = 0x25654cu;
    // NOP
label_256550:
    // 0x256550: 0x2c93a0  .word       0x002C93A0                   # add         $s2, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256550u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256554:
    // 0x256554: 0x0  nop
    ctx->pc = 0x256554u;
    // NOP
label_256558:
    // 0x256558: 0x2c93c0  .word       0x002C93C0                   # sll         $s2, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256558u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_25655c:
    // 0x25655c: 0x0  nop
    ctx->pc = 0x25655cu;
    // NOP
label_256560:
    // 0x256560: 0x2c93e0  .word       0x002C93E0                   # add         $s2, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256560u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256564:
    // 0x256564: 0x0  nop
    ctx->pc = 0x256564u;
    // NOP
label_256568:
    // 0x256568: 0x2c9400  .word       0x002C9400                   # sll         $s2, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256568u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_25656c:
    // 0x25656c: 0x0  nop
    ctx->pc = 0x25656cu;
    // NOP
label_256570:
    // 0x256570: 0x2c9420  .word       0x002C9420                   # add         $s2, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256570u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256574:
    // 0x256574: 0x0  nop
    ctx->pc = 0x256574u;
    // NOP
label_256578:
    // 0x256578: 0x2c9440  .word       0x002C9440                   # sll         $s2, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256578u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 17));
label_25657c:
    // 0x25657c: 0x0  nop
    ctx->pc = 0x25657cu;
    // NOP
label_256580:
    // 0x256580: 0x2c9460  .word       0x002C9460                   # add         $s2, $at, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256580u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256584:
    // 0x256584: 0x0  nop
    ctx->pc = 0x256584u;
    // NOP
label_256588:
    // 0x256588: 0x2c9480  .word       0x002C9480                   # sll         $s2, $t4, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256588u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 18));
label_25658c:
    // 0x25658c: 0x0  nop
    ctx->pc = 0x25658cu;
    // NOP
label_256590:
    // 0x256590: 0x2c94a0  .word       0x002C94A0                   # add         $s2, $at, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256590u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_256594:
    // 0x256594: 0x0  nop
    ctx->pc = 0x256594u;
    // NOP
label_256598:
    // 0x256598: 0x2c94c0  .word       0x002C94C0                   # sll         $s2, $t4, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256598u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 19));
label_25659c:
    // 0x25659c: 0x0  nop
    ctx->pc = 0x25659cu;
    // NOP
label_2565a0:
    // 0x2565a0: 0x2c94e0  .word       0x002C94E0                   # add         $s2, $at, $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2565a0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2565a4:
    // 0x2565a4: 0x0  nop
    ctx->pc = 0x2565a4u;
    // NOP
label_2565a8:
    // 0x2565a8: 0x2c9500  .word       0x002C9500                   # sll         $s2, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2565a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_2565ac:
    // 0x2565ac: 0x0  nop
    ctx->pc = 0x2565acu;
    // NOP
label_2565b0:
    // 0x2565b0: 0x2c9520  .word       0x002C9520                   # add         $s2, $at, $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2565b0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2565b4:
    // 0x2565b4: 0x0  nop
    ctx->pc = 0x2565b4u;
    // NOP
label_2565b8:
    // 0x2565b8: 0x2c9540  .word       0x002C9540                   # sll         $s2, $t4, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2565b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 12), 21));
label_2565bc:
    // 0x2565bc: 0x0  nop
    ctx->pc = 0x2565bcu;
    // NOP
label_2565c0:
    // 0x2565c0: 0x2c9560  .word       0x002C9560                   # add         $s2, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2565c0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2565c4:
    // 0x2565c4: 0x0  nop
    ctx->pc = 0x2565c4u;
    // NOP
label_2565c8:
    // 0x2565c8: 0x2c8fe0  .word       0x002C8FE0                   # add         $s1, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2565c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2565cc:
    // 0x2565cc: 0x0  nop
    ctx->pc = 0x2565ccu;
    // NOP
label_2565d0:
    // 0x2565d0: 0x800e  .word       0x0000800E                   # INVALID     $zero, $zero, -0x7FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2565d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2565D0 raw=0x0000800E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2565d4:
    // 0x2565d4: 0x10000000  b           . + 4 + (0x0 << 2)
label_2565d8:
    if (ctx->pc == 0x2565D8u) {
        ctx->pc = 0x2565D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565D4u;
        // 0x2565d8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2565D8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2565DCu;
        goto label_2565dc;
    }
    ctx->pc = 0x2565D4u;
    {
        const bool branch_taken_0x2565d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2565D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565D4u;
        // 0x2565d8: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2565D8 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565d4) {
            ctx->pc = 0x2565D8u;
            goto label_2565d8;
        }
    }
    ctx->pc = 0x2565DCu;
label_2565dc:
    // 0x2565dc: 0x0  nop
    ctx->pc = 0x2565dcu;
    // NOP
label_2565e0:
    // 0x2565e0: 0x0  nop
    ctx->pc = 0x2565e0u;
    // NOP
label_2565e4:
    // 0x2565e4: 0x0  nop
    ctx->pc = 0x2565e4u;
    // NOP
label_2565e8:
    // 0x2565e8: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x2565e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2565ec:
    // 0x2565ec: 0x0  nop
    ctx->pc = 0x2565ecu;
    // NOP
label_2565f0:
    // 0x2565f0: 0x7ff0000  .word       0x07FF0000                   # INVALID     $ra, $ra, 0x0 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2565f0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1F at 0x2565F0 raw=0x07FF0000");
 /* MITIGATED */
label_2565f4:
    // 0x2565f4: 0x7ff0000  .word       0x07FF0000                   # INVALID     $ra, $ra, 0x0 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2565f4u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1F at 0x2565F4 raw=0x07FF0000");
 /* MITIGATED */
label_2565f8:
    // 0x2565f8: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x2565f8u;
    
label_2565fc:
    // 0x2565fc: 0x0  nop
    ctx->pc = 0x2565fcu;
    // NOP
label_256600:
    // 0x256600: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x256600 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256604:
    // 0x256604: 0x0  nop
    ctx->pc = 0x256604u;
    // NOP
label_256608:
    // 0x256608: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x256608u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25660c:
    // 0x25660c: 0x0  nop
    ctx->pc = 0x25660cu;
    // NOP
label_256610:
    // 0x256610: 0x30000  sll         $zero, $v1, 0
    ctx->pc = 0x256610u;
    
label_256614:
    // 0x256614: 0x0  nop
    ctx->pc = 0x256614u;
    // NOP
label_256618:
    // 0x256618: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256618u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25661c:
    // 0x25661c: 0x0  nop
    ctx->pc = 0x25661cu;
    // NOP
label_256620:
    // 0x256620: 0x0  nop
    ctx->pc = 0x256620u;
    // NOP
label_256624:
    // 0x256624: 0x0  nop
    ctx->pc = 0x256624u;
    // NOP
label_256628:
    // 0x256628: 0x4c  syscall     1
    ctx->pc = 0x256628u;
    ctx->pc = 0x25662Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_25662c:
    // 0x25662c: 0x0  nop
    ctx->pc = 0x25662cu;
    // NOP
label_256630:
    // 0x256630: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x256630u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_256634:
    // 0x256634: 0x0  nop
    ctx->pc = 0x256634u;
    // NOP
label_256638:
    // 0x256638: 0x0  nop
    ctx->pc = 0x256638u;
    // NOP
label_25663c:
    // 0x25663c: 0x0  nop
    ctx->pc = 0x25663cu;
    // NOP
label_256640:
    // 0x256640: 0x0  nop
    ctx->pc = 0x256640u;
    // NOP
label_256644:
    // 0x256644: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x256644u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256648:
    // 0x256648: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256648u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x256648 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25664c:
    // 0x25664c: 0x0  nop
    ctx->pc = 0x25664cu;
    // NOP
label_256650:
    // 0x256650: 0x0  nop
    ctx->pc = 0x256650u;
    // NOP
label_256654:
    // 0x256654: 0x0  nop
    ctx->pc = 0x256654u;
    // NOP
label_256658:
    // 0x256658: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256658u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x256658 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25665c:
    // 0x25665c: 0x0  nop
    ctx->pc = 0x25665cu;
    // NOP
label_256660:
    // 0x256660: 0x1c002800  bgtz        $zero, . + 4 + (0x2800 << 2)
label_256664:
    if (ctx->pc == 0x256664u) {
        ctx->pc = 0x256668u;
        goto label_256668;
    }
    ctx->pc = 0x256660u;
    {
        const bool branch_taken_0x256660 = (GPR_S32(ctx, 0) > 0);
        if (branch_taken_0x256660) {
            ctx->pc = 0x260664u;
            { ctx->pc = 0x260664; return; }
        }
    }
    ctx->pc = 0x256668u;
label_256668:
    // 0x256668: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256668u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x256668 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25666c:
    // 0x25666c: 0x0  nop
    ctx->pc = 0x25666cu;
    // NOP
label_256670:
    // 0x256670: 0x0  nop
    ctx->pc = 0x256670u;
    // NOP
label_256674:
    // 0x256674: 0x0  nop
    ctx->pc = 0x256674u;
    // NOP
label_256678:
    // 0x256678: 0x4c  syscall     1
    ctx->pc = 0x256678u;
    ctx->pc = 0x25667Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_25667c:
    // 0x25667c: 0x0  nop
    ctx->pc = 0x25667cu;
    // NOP
label_256680:
    // 0x256680: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x256680u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_256684:
    // 0x256684: 0x0  nop
    ctx->pc = 0x256684u;
    // NOP
label_256688:
    // 0x256688: 0x0  nop
    ctx->pc = 0x256688u;
    // NOP
label_25668c:
    // 0x25668c: 0x0  nop
    ctx->pc = 0x25668cu;
    // NOP
label_256690:
    // 0x256690: 0x0  nop
    ctx->pc = 0x256690u;
    // NOP
label_256694:
    // 0x256694: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x256694u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256698:
    // 0x256698: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256698u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x256698 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25669c:
    // 0x25669c: 0x0  nop
    ctx->pc = 0x25669cu;
    // NOP
label_2566a0:
    // 0x2566a0: 0x0  nop
    ctx->pc = 0x2566a0u;
    // NOP
label_2566a4:
    // 0x2566a4: 0x0  nop
    ctx->pc = 0x2566a4u;
    // NOP
label_2566a8:
    // 0x2566a8: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2566a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2566A8 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2566ac:
    // 0x2566ac: 0x0  nop
    ctx->pc = 0x2566acu;
    // NOP
label_2566b0:
    // 0x2566b0: 0x1c002800  bgtz        $zero, . + 4 + (0x2800 << 2)
label_2566b4:
    if (ctx->pc == 0x2566B4u) {
        ctx->pc = 0x2566B8u;
        goto label_2566b8;
    }
    ctx->pc = 0x2566B0u;
    {
        const bool branch_taken_0x2566b0 = (GPR_S32(ctx, 0) > 0);
        if (branch_taken_0x2566b0) {
            ctx->pc = 0x2606B4u;
            { ctx->pc = 0x2606b4; return; }
        }
    }
    ctx->pc = 0x2566B8u;
label_2566b8:
    // 0x2566b8: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2566b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2566B8 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2566bc:
    // 0x2566bc: 0x0  nop
    ctx->pc = 0x2566bcu;
    // NOP
label_2566c0:
    // 0x2566c0: 0x0  nop
    ctx->pc = 0x2566c0u;
    // NOP
label_2566c4:
    // 0x2566c4: 0x120  .word       0x00000120                   # add         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2566c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2566c8:
    // 0x2566c8: 0x0  nop
    ctx->pc = 0x2566c8u;
    // NOP
label_2566cc:
    // 0x2566cc: 0x0  nop
    ctx->pc = 0x2566ccu;
    // NOP
label_2566d0:
    // 0x2566d0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2566d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2566D0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2566d4:
    // 0x2566d4: 0x6170  tge         $zero, $zero, 389
    ctx->pc = 0x2566d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2566d8:
    // 0x2566d8: 0x0  nop
    ctx->pc = 0x2566d8u;
    // NOP
label_2566dc:
    // 0x2566dc: 0x0  nop
    ctx->pc = 0x2566dcu;
    // NOP
label_2566e0:
    // 0x2566e0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2566e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2566E0 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2566e4:
    // 0x2566e4: 0xa880  sll         $s5, $zero, 2
    ctx->pc = 0x2566e4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2566e8:
    // 0x2566e8: 0x0  nop
    ctx->pc = 0x2566e8u;
    // NOP
label_2566ec:
    // 0x2566ec: 0x0  nop
    ctx->pc = 0x2566ecu;
    // NOP
label_2566f0:
    // 0x2566f0: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x2566f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2566f4:
    // 0x2566f4: 0x8f10  .word       0x00008F10                   # mfhi        $s1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2566f4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2566f8:
    // 0x2566f8: 0x0  nop
    ctx->pc = 0x2566f8u;
    // NOP
label_2566fc:
    // 0x2566fc: 0x0  nop
    ctx->pc = 0x2566fcu;
    // NOP
label_256700:
    // 0x256700: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x256700u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256704:
    // 0x256704: 0x6c40  sll         $t5, $zero, 17
    ctx->pc = 0x256704u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_256708:
    // 0x256708: 0x0  nop
    ctx->pc = 0x256708u;
    // NOP
label_25670c:
    // 0x25670c: 0x0  nop
    ctx->pc = 0x25670cu;
    // NOP
label_256710:
    // 0x256710: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256710u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_256714:
    // 0x256714: 0x7710  .word       0x00007710                   # mfhi        $t6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256714u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_256718:
    // 0x256718: 0x0  nop
    ctx->pc = 0x256718u;
    // NOP
label_25671c:
    // 0x25671c: 0x0  nop
    ctx->pc = 0x25671cu;
    // NOP
label_256720:
    // 0x256720: 0x53  .word       0x00000053                   # mtlo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256720u;
    ctx->lo = GPR_U64(ctx, 0);
label_256724:
    // 0x256724: 0xcdb0  tge         $zero, $zero, 822
    ctx->pc = 0x256724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256728:
    // 0x256728: 0x0  nop
    ctx->pc = 0x256728u;
    // NOP
label_25672c:
    // 0x25672c: 0x0  nop
    ctx->pc = 0x25672cu;
    // NOP
label_256730:
    // 0x256730: 0x6d  .word       0x0000006D                   # daddu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256730u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256734:
    // 0x256734: 0x16370  tge         $zero, $at, 397
    ctx->pc = 0x256734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_256738:
    // 0x256738: 0x0  nop
    ctx->pc = 0x256738u;
    // NOP
label_25673c:
    // 0x25673c: 0x0  nop
    ctx->pc = 0x25673cu;
    // NOP
label_256740:
    // 0x256740: 0x9a  .word       0x0000009A                   # div         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256740u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_256744:
    // 0x256744: 0x7f20  .word       0x00007F20                   # add         $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_256748:
    // 0x256748: 0x0  nop
    ctx->pc = 0x256748u;
    // NOP
label_25674c:
    // 0x25674c: 0x0  nop
    ctx->pc = 0x25674cu;
    // NOP
label_256750:
    // 0x256750: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256750u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_256754:
    // 0x256754: 0x7460  .word       0x00007460                   # add         $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_256758:
    // 0x256758: 0x0  nop
    ctx->pc = 0x256758u;
    // NOP
label_25675c:
    // 0x25675c: 0x0  nop
    ctx->pc = 0x25675cu;
    // NOP
label_256760:
    // 0x256760: 0xb9  .word       0x000000B9                   # INVALID     $zero, $zero, 0xB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256760u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x256760 raw=0x000000B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256764:
    // 0x256764: 0xe910  .word       0x0000E910                   # mfhi        $sp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256764u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_256768:
    // 0x256768: 0x0  nop
    ctx->pc = 0x256768u;
    // NOP
label_25676c:
    // 0x25676c: 0x0  nop
    ctx->pc = 0x25676cu;
    // NOP
label_256770:
    // 0x256770: 0xd7  .word       0x000000D7                   # dsrav       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256770u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_256774:
    // 0x256774: 0x7a40  sll         $t7, $zero, 9
    ctx->pc = 0x256774u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_256778:
    // 0x256778: 0x0  nop
    ctx->pc = 0x256778u;
    // NOP
label_25677c:
    // 0x25677c: 0x0  nop
    ctx->pc = 0x25677cu;
    // NOP
label_256780:
    // 0x256780: 0xe7  .word       0x000000E7                   # not         $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256780u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_256784:
    // 0x256784: 0x5df0  tge         $zero, $zero, 375
    ctx->pc = 0x256784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256788:
    // 0x256788: 0x0  nop
    ctx->pc = 0x256788u;
    // NOP
label_25678c:
    // 0x25678c: 0x0  nop
    ctx->pc = 0x25678cu;
    // NOP
label_256790:
    // 0x256790: 0xf3  tltu        $zero, $zero, 3
    ctx->pc = 0x256790u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256794:
    // 0x256794: 0x9310  .word       0x00009310                   # mfhi        $s2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256794u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_256798:
    // 0x256798: 0x0  nop
    ctx->pc = 0x256798u;
    // NOP
label_25679c:
    // 0x25679c: 0x0  nop
    ctx->pc = 0x25679cu;
    // NOP
label_2567a0:
    // 0x2567a0: 0x106  .word       0x00000106                   # srlv        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2567a0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2567a4:
    // 0x2567a4: 0xe3b0  tge         $zero, $zero, 910
    ctx->pc = 0x2567a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2567a8:
    // 0x2567a8: 0x0  nop
    ctx->pc = 0x2567a8u;
    // NOP
label_2567ac:
    // 0x2567ac: 0x0  nop
    ctx->pc = 0x2567acu;
    // NOP
label_2567b0:
    // 0x2567b0: 0x123  .word       0x00000123                   # negu        $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2567b0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2567b4:
    // 0x2567b4: 0x5920  .word       0x00005920                   # add         $t3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2567b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2567b8:
    // 0x2567b8: 0x0  nop
    ctx->pc = 0x2567b8u;
    // NOP
label_2567bc:
    // 0x2567bc: 0x0  nop
    ctx->pc = 0x2567bcu;
    // NOP
label_2567c0:
    // 0x2567c0: 0x12f  .word       0x0000012F                   # dsubu       $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2567c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2567c4:
    // 0x2567c4: 0x41b0  tge         $zero, $zero, 262
    ctx->pc = 0x2567c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2567c8:
    // 0x2567c8: 0x0  nop
    ctx->pc = 0x2567c8u;
    // NOP
label_2567cc:
    // 0x2567cc: 0x0  nop
    ctx->pc = 0x2567ccu;
    // NOP
label_2567d0:
    // 0x2567d0: 0x138  dsll        $zero, $zero, 4
    ctx->pc = 0x2567d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 4);
label_2567d4:
    // 0x2567d4: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x2567d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2567d8:
    // 0x2567d8: 0x0  nop
    ctx->pc = 0x2567d8u;
    // NOP
label_2567dc:
    // 0x2567dc: 0x0  nop
    ctx->pc = 0x2567dcu;
    // NOP
label_2567e0:
    // 0x2567e0: 0x13f  dsra32      $zero, $zero, 4
    ctx->pc = 0x2567e0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 4));
label_2567e4:
    // 0x2567e4: 0x7e80  sll         $t7, $zero, 26
    ctx->pc = 0x2567e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_2567e8:
    // 0x2567e8: 0x0  nop
    ctx->pc = 0x2567e8u;
    // NOP
label_2567ec:
    // 0x2567ec: 0x0  nop
    ctx->pc = 0x2567ecu;
    // NOP
label_2567f0:
    // 0x2567f0: 0x14f  sync
    ctx->pc = 0x2567f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2567f4:
    // 0x2567f4: 0x5480  sll         $t2, $zero, 18
    ctx->pc = 0x2567f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2567f8:
    // 0x2567f8: 0x0  nop
    ctx->pc = 0x2567f8u;
    // NOP
label_2567fc:
    // 0x2567fc: 0x0  nop
    ctx->pc = 0x2567fcu;
    // NOP
label_256800:
    // 0x256800: 0x15a  .word       0x0000015A                   # div         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256800u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_256804:
    // 0x256804: 0x89b0  tge         $zero, $zero, 550
    ctx->pc = 0x256804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256808:
    // 0x256808: 0x0  nop
    ctx->pc = 0x256808u;
    // NOP
label_25680c:
    // 0x25680c: 0x0  nop
    ctx->pc = 0x25680cu;
    // NOP
label_256810:
    // 0x256810: 0x16c  .word       0x0000016C                   # dadd        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256810u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_256814:
    // 0x256814: 0xa570  tge         $zero, $zero, 661
    ctx->pc = 0x256814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256818:
    // 0x256818: 0x0  nop
    ctx->pc = 0x256818u;
    // NOP
label_25681c:
    // 0x25681c: 0x0  nop
    ctx->pc = 0x25681cu;
    // NOP
label_256820:
    // 0x256820: 0x181  .word       0x00000181                   # INVALID     $zero, $zero, 0x181 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x256820 raw=0x00000181"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256824:
    // 0x256824: 0x8040  sll         $s0, $zero, 1
    ctx->pc = 0x256824u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_256828:
    // 0x256828: 0x0  nop
    ctx->pc = 0x256828u;
    // NOP
label_25682c:
    // 0x25682c: 0x0  nop
    ctx->pc = 0x25682cu;
    // NOP
label_256830:
    // 0x256830: 0x192  .word       0x00000192                   # mflo        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256830u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_256834:
    // 0x256834: 0x5880  sll         $t3, $zero, 2
    ctx->pc = 0x256834u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_256838:
    // 0x256838: 0x0  nop
    ctx->pc = 0x256838u;
    // NOP
label_25683c:
    // 0x25683c: 0x0  nop
    ctx->pc = 0x25683cu;
    // NOP
label_256840:
    // 0x256840: 0x19e  .word       0x0000019E                   # ddiv        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256840u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x256840 raw=0x0000019E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256844:
    // 0x256844: 0x8880  sll         $s1, $zero, 2
    ctx->pc = 0x256844u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_256848:
    // 0x256848: 0x0  nop
    ctx->pc = 0x256848u;
    // NOP
label_25684c:
    // 0x25684c: 0x0  nop
    ctx->pc = 0x25684cu;
    // NOP
label_256850:
    // 0x256850: 0x1b0  tge         $zero, $zero, 6
    ctx->pc = 0x256850u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256854:
    // 0x256854: 0x4510  .word       0x00004510                   # mfhi        $t0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256854u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_256858:
    // 0x256858: 0x0  nop
    ctx->pc = 0x256858u;
    // NOP
label_25685c:
    // 0x25685c: 0x0  nop
    ctx->pc = 0x25685cu;
    // NOP
label_256860:
    // 0x256860: 0x1b9  .word       0x000001B9                   # INVALID     $zero, $zero, 0x1B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x256860 raw=0x000001B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_256864:
    // 0x256864: 0x4cd0  .word       0x00004CD0                   # mfhi        $t1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256864u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_256868:
    // 0x256868: 0x0  nop
    ctx->pc = 0x256868u;
    // NOP
label_25686c:
    // 0x25686c: 0x0  nop
    ctx->pc = 0x25686cu;
    // NOP
label_256870:
    // 0x256870: 0x1c3  sra         $zero, $zero, 7
    ctx->pc = 0x256870u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 7));
label_256874:
    // 0x256874: 0x4df0  tge         $zero, $zero, 311
    ctx->pc = 0x256874u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256878:
    // 0x256878: 0x0  nop
    ctx->pc = 0x256878u;
    // NOP
label_25687c:
    // 0x25687c: 0x0  nop
    ctx->pc = 0x25687cu;
    // NOP
label_256880:
    // 0x256880: 0x1cd  break       0, 7
    ctx->pc = 0x256880u;
    runtime->handleBreak(rdram, ctx);
label_256884:
    // 0x256884: 0xc320  .word       0x0000C320                   # add         $t8, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256884u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_256888:
    // 0x256888: 0x0  nop
    ctx->pc = 0x256888u;
    // NOP
label_25688c:
    // 0x25688c: 0x0  nop
    ctx->pc = 0x25688cu;
    // NOP
label_256890:
    // 0x256890: 0x1e6  .word       0x000001E6                   # xor         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256890u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_256894:
    // 0x256894: 0x7a00  sll         $t7, $zero, 8
    ctx->pc = 0x256894u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_256898:
    // 0x256898: 0x0  nop
    ctx->pc = 0x256898u;
    // NOP
label_25689c:
    // 0x25689c: 0x0  nop
    ctx->pc = 0x25689cu;
    // NOP
label_2568a0:
    // 0x2568a0: 0x1f6  tne         $zero, $zero, 7
    ctx->pc = 0x2568a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2568a4:
    // 0x2568a4: 0x7480  sll         $t6, $zero, 18
    ctx->pc = 0x2568a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2568a8:
    // 0x2568a8: 0x0  nop
    ctx->pc = 0x2568a8u;
    // NOP
label_2568ac:
    // 0x2568ac: 0x0  nop
    ctx->pc = 0x2568acu;
    // NOP
label_2568b0:
    // 0x2568b0: 0x205  .word       0x00000205                   # INVALID     $zero, $zero, 0x205 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2568b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2568B0 raw=0x00000205"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2568b4:
    // 0x2568b4: 0x7080  sll         $t6, $zero, 2
    ctx->pc = 0x2568b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2568b8:
    // 0x2568b8: 0x0  nop
    ctx->pc = 0x2568b8u;
    // NOP
label_2568bc:
    // 0x2568bc: 0x0  nop
    ctx->pc = 0x2568bcu;
    // NOP
label_2568c0:
    // 0x2568c0: 0x214  .word       0x00000214                   # dsllv       $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2568c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2568c4:
    // 0x2568c4: 0x9040  sll         $s2, $zero, 1
    ctx->pc = 0x2568c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2568c8:
    // 0x2568c8: 0x0  nop
    ctx->pc = 0x2568c8u;
    // NOP
label_2568cc:
    // 0x2568cc: 0x0  nop
    ctx->pc = 0x2568ccu;
    // NOP
label_2568d0:
    // 0x2568d0: 0x227  .word       0x00000227                   # not         $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2568d0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2568d4:
    // 0x2568d4: 0x83b0  tge         $zero, $zero, 526
    ctx->pc = 0x2568d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2568d8:
    // 0x2568d8: 0x0  nop
    ctx->pc = 0x2568d8u;
    // NOP
label_2568dc:
    // 0x2568dc: 0x0  nop
    ctx->pc = 0x2568dcu;
    // NOP
label_2568e0:
    // 0x2568e0: 0x238  dsll        $zero, $zero, 8
    ctx->pc = 0x2568e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 8);
label_2568e4:
    // 0x2568e4: 0x8840  sll         $s1, $zero, 1
    ctx->pc = 0x2568e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2568e8:
    // 0x2568e8: 0x0  nop
    ctx->pc = 0x2568e8u;
    // NOP
label_2568ec:
    // 0x2568ec: 0x0  nop
    ctx->pc = 0x2568ecu;
    // NOP
label_2568f0:
    // 0x2568f0: 0x24a  .word       0x0000024A                   # movz        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2568f0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2568f4:
    // 0x2568f4: 0x13970  tge         $zero, $at, 229
    ctx->pc = 0x2568f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2568f8:
    // 0x2568f8: 0x0  nop
    ctx->pc = 0x2568f8u;
    // NOP
label_2568fc:
    // 0x2568fc: 0x0  nop
    ctx->pc = 0x2568fcu;
    // NOP
label_256900:
    // 0x256900: 0x272  tlt         $zero, $zero, 9
    ctx->pc = 0x256900u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256904:
    // 0x256904: 0x4c00  sll         $t1, $zero, 16
    ctx->pc = 0x256904u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_256908:
    // 0x256908: 0x0  nop
    ctx->pc = 0x256908u;
    // NOP
label_25690c:
    // 0x25690c: 0x0  nop
    ctx->pc = 0x25690cu;
    // NOP
label_256910:
    // 0x256910: 0x27c  dsll32      $zero, $zero, 9
    ctx->pc = 0x256910u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 9));
label_256914:
    // 0x256914: 0x69f0  tge         $zero, $zero, 423
    ctx->pc = 0x256914u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256918:
    // 0x256918: 0x0  nop
    ctx->pc = 0x256918u;
    // NOP
label_25691c:
    // 0x25691c: 0x0  nop
    ctx->pc = 0x25691cu;
    // NOP
label_256920:
    // 0x256920: 0x28a  .word       0x0000028A                   # movz        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256920u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_256924:
    // 0x256924: 0x8310  .word       0x00008310                   # mfhi        $s0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256924u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_256928:
    // 0x256928: 0x0  nop
    ctx->pc = 0x256928u;
    // NOP
label_25692c:
    // 0x25692c: 0x0  nop
    ctx->pc = 0x25692cu;
    // NOP
label_256930:
    // 0x256930: 0x29b  .word       0x0000029B                   # divu        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256930u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_256934:
    // 0x256934: 0x7240  sll         $t6, $zero, 9
    ctx->pc = 0x256934u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_256938:
    // 0x256938: 0x0  nop
    ctx->pc = 0x256938u;
    // NOP
label_25693c:
    // 0x25693c: 0x0  nop
    ctx->pc = 0x25693cu;
    // NOP
    ctx->pc = 0x256940u;
    return;
}

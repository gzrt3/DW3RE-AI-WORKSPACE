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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part371(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2500b8u: goto label_2500b8;
        case 0x2500bcu: goto label_2500bc;
        case 0x2500c0u: goto label_2500c0;
        case 0x2500c4u: goto label_2500c4;
        case 0x2500c8u: goto label_2500c8;
        case 0x2500ccu: goto label_2500cc;
        case 0x2500d0u: goto label_2500d0;
        case 0x2500d4u: goto label_2500d4;
        case 0x2500d8u: goto label_2500d8;
        case 0x2500dcu: goto label_2500dc;
        case 0x2500e0u: goto label_2500e0;
        case 0x2500e4u: goto label_2500e4;
        case 0x2500e8u: goto label_2500e8;
        case 0x2500ecu: goto label_2500ec;
        case 0x2500f0u: goto label_2500f0;
        case 0x2500f4u: goto label_2500f4;
        case 0x2500f8u: goto label_2500f8;
        case 0x2500fcu: goto label_2500fc;
        case 0x250100u: goto label_250100;
        case 0x250104u: goto label_250104;
        case 0x250108u: goto label_250108;
        case 0x25010cu: goto label_25010c;
        case 0x250110u: goto label_250110;
        case 0x250114u: goto label_250114;
        case 0x250118u: goto label_250118;
        case 0x25011cu: goto label_25011c;
        case 0x250120u: goto label_250120;
        case 0x250124u: goto label_250124;
        case 0x250128u: goto label_250128;
        case 0x25012cu: goto label_25012c;
        case 0x250130u: goto label_250130;
        case 0x250134u: goto label_250134;
        case 0x250138u: goto label_250138;
        case 0x25013cu: goto label_25013c;
        case 0x250140u: goto label_250140;
        case 0x250144u: goto label_250144;
        case 0x250148u: goto label_250148;
        case 0x25014cu: goto label_25014c;
        case 0x250150u: goto label_250150;
        case 0x250154u: goto label_250154;
        case 0x250158u: goto label_250158;
        case 0x25015cu: goto label_25015c;
        case 0x250160u: goto label_250160;
        case 0x250164u: goto label_250164;
        case 0x250168u: goto label_250168;
        case 0x25016cu: goto label_25016c;
        case 0x250170u: goto label_250170;
        case 0x250174u: goto label_250174;
        case 0x250178u: goto label_250178;
        case 0x25017cu: goto label_25017c;
        case 0x250180u: goto label_250180;
        case 0x250184u: goto label_250184;
        case 0x250188u: goto label_250188;
        case 0x25018cu: goto label_25018c;
        case 0x250190u: goto label_250190;
        case 0x250194u: goto label_250194;
        case 0x250198u: goto label_250198;
        case 0x25019cu: goto label_25019c;
        case 0x2501a0u: goto label_2501a0;
        case 0x2501a4u: goto label_2501a4;
        case 0x2501a8u: goto label_2501a8;
        case 0x2501acu: goto label_2501ac;
        case 0x2501b0u: goto label_2501b0;
        case 0x2501b4u: goto label_2501b4;
        case 0x2501b8u: goto label_2501b8;
        case 0x2501bcu: goto label_2501bc;
        case 0x2501c0u: goto label_2501c0;
        case 0x2501c4u: goto label_2501c4;
        case 0x2501c8u: goto label_2501c8;
        case 0x2501ccu: goto label_2501cc;
        case 0x2501d0u: goto label_2501d0;
        case 0x2501d4u: goto label_2501d4;
        case 0x2501d8u: goto label_2501d8;
        case 0x2501dcu: goto label_2501dc;
        case 0x2501e0u: goto label_2501e0;
        case 0x2501e4u: goto label_2501e4;
        case 0x2501e8u: goto label_2501e8;
        case 0x2501ecu: goto label_2501ec;
        case 0x2501f0u: goto label_2501f0;
        case 0x2501f4u: goto label_2501f4;
        case 0x2501f8u: goto label_2501f8;
        case 0x2501fcu: goto label_2501fc;
        case 0x250200u: goto label_250200;
        case 0x250204u: goto label_250204;
        case 0x250208u: goto label_250208;
        case 0x25020cu: goto label_25020c;
        case 0x250210u: goto label_250210;
        case 0x250214u: goto label_250214;
        case 0x250218u: goto label_250218;
        case 0x25021cu: goto label_25021c;
        case 0x250220u: goto label_250220;
        case 0x250224u: goto label_250224;
        case 0x250228u: goto label_250228;
        case 0x25022cu: goto label_25022c;
        case 0x250230u: goto label_250230;
        case 0x250234u: goto label_250234;
        case 0x250238u: goto label_250238;
        case 0x25023cu: goto label_25023c;
        case 0x250240u: goto label_250240;
        case 0x250244u: goto label_250244;
        case 0x250248u: goto label_250248;
        case 0x25024cu: goto label_25024c;
        case 0x250250u: goto label_250250;
        case 0x250254u: goto label_250254;
        case 0x250258u: goto label_250258;
        case 0x25025cu: goto label_25025c;
        case 0x250260u: goto label_250260;
        case 0x250264u: goto label_250264;
        case 0x250268u: goto label_250268;
        case 0x25026cu: goto label_25026c;
        case 0x250270u: goto label_250270;
        case 0x250274u: goto label_250274;
        case 0x250278u: goto label_250278;
        case 0x25027cu: goto label_25027c;
        case 0x250280u: goto label_250280;
        case 0x250284u: goto label_250284;
        case 0x250288u: goto label_250288;
        case 0x25028cu: goto label_25028c;
        case 0x250290u: goto label_250290;
        case 0x250294u: goto label_250294;
        case 0x250298u: goto label_250298;
        case 0x25029cu: goto label_25029c;
        case 0x2502a0u: goto label_2502a0;
        case 0x2502a4u: goto label_2502a4;
        case 0x2502a8u: goto label_2502a8;
        case 0x2502acu: goto label_2502ac;
        case 0x2502b0u: goto label_2502b0;
        case 0x2502b4u: goto label_2502b4;
        case 0x2502b8u: goto label_2502b8;
        case 0x2502bcu: goto label_2502bc;
        case 0x2502c0u: goto label_2502c0;
        case 0x2502c4u: goto label_2502c4;
        case 0x2502c8u: goto label_2502c8;
        case 0x2502ccu: goto label_2502cc;
        case 0x2502d0u: goto label_2502d0;
        case 0x2502d4u: goto label_2502d4;
        case 0x2502d8u: goto label_2502d8;
        case 0x2502dcu: goto label_2502dc;
        case 0x2502e0u: goto label_2502e0;
        case 0x2502e4u: goto label_2502e4;
        case 0x2502e8u: goto label_2502e8;
        case 0x2502ecu: goto label_2502ec;
        case 0x2502f0u: goto label_2502f0;
        case 0x2502f4u: goto label_2502f4;
        case 0x2502f8u: goto label_2502f8;
        case 0x2502fcu: goto label_2502fc;
        case 0x250300u: goto label_250300;
        case 0x250304u: goto label_250304;
        case 0x250308u: goto label_250308;
        case 0x25030cu: goto label_25030c;
        case 0x250310u: goto label_250310;
        case 0x250314u: goto label_250314;
        case 0x250318u: goto label_250318;
        case 0x25031cu: goto label_25031c;
        case 0x250320u: goto label_250320;
        case 0x250324u: goto label_250324;
        case 0x250328u: goto label_250328;
        case 0x25032cu: goto label_25032c;
        case 0x250330u: goto label_250330;
        case 0x250334u: goto label_250334;
        case 0x250338u: goto label_250338;
        case 0x25033cu: goto label_25033c;
        case 0x250340u: goto label_250340;
        case 0x250344u: goto label_250344;
        case 0x250348u: goto label_250348;
        case 0x25034cu: goto label_25034c;
        case 0x250350u: goto label_250350;
        case 0x250354u: goto label_250354;
        case 0x250358u: goto label_250358;
        case 0x25035cu: goto label_25035c;
        case 0x250360u: goto label_250360;
        case 0x250364u: goto label_250364;
        case 0x250368u: goto label_250368;
        case 0x25036cu: goto label_25036c;
        case 0x250370u: goto label_250370;
        case 0x250374u: goto label_250374;
        case 0x250378u: goto label_250378;
        case 0x25037cu: goto label_25037c;
        case 0x250380u: goto label_250380;
        case 0x250384u: goto label_250384;
        case 0x250388u: goto label_250388;
        case 0x25038cu: goto label_25038c;
        case 0x250390u: goto label_250390;
        case 0x250394u: goto label_250394;
        case 0x250398u: goto label_250398;
        case 0x25039cu: goto label_25039c;
        case 0x2503a0u: goto label_2503a0;
        case 0x2503a4u: goto label_2503a4;
        case 0x2503a8u: goto label_2503a8;
        case 0x2503acu: goto label_2503ac;
        case 0x2503b0u: goto label_2503b0;
        case 0x2503b4u: goto label_2503b4;
        case 0x2503b8u: goto label_2503b8;
        case 0x2503bcu: goto label_2503bc;
        case 0x2503c0u: goto label_2503c0;
        case 0x2503c4u: goto label_2503c4;
        case 0x2503c8u: goto label_2503c8;
        case 0x2503ccu: goto label_2503cc;
        case 0x2503d0u: goto label_2503d0;
        case 0x2503d4u: goto label_2503d4;
        case 0x2503d8u: goto label_2503d8;
        case 0x2503dcu: goto label_2503dc;
        case 0x2503e0u: goto label_2503e0;
        case 0x2503e4u: goto label_2503e4;
        case 0x2503e8u: goto label_2503e8;
        case 0x2503ecu: goto label_2503ec;
        case 0x2503f0u: goto label_2503f0;
        case 0x2503f4u: goto label_2503f4;
        case 0x2503f8u: goto label_2503f8;
        case 0x2503fcu: goto label_2503fc;
        case 0x250400u: goto label_250400;
        case 0x250404u: goto label_250404;
        case 0x250408u: goto label_250408;
        case 0x25040cu: goto label_25040c;
        case 0x250410u: goto label_250410;
        case 0x250414u: goto label_250414;
        case 0x250418u: goto label_250418;
        case 0x25041cu: goto label_25041c;
        case 0x250420u: goto label_250420;
        case 0x250424u: goto label_250424;
        case 0x250428u: goto label_250428;
        case 0x25042cu: goto label_25042c;
        case 0x250430u: goto label_250430;
        case 0x250434u: goto label_250434;
        case 0x250438u: goto label_250438;
        case 0x25043cu: goto label_25043c;
        case 0x250440u: goto label_250440;
        case 0x250444u: goto label_250444;
        case 0x250448u: goto label_250448;
        case 0x25044cu: goto label_25044c;
        case 0x250450u: goto label_250450;
        case 0x250454u: goto label_250454;
        case 0x250458u: goto label_250458;
        case 0x25045cu: goto label_25045c;
        case 0x250460u: goto label_250460;
        case 0x250464u: goto label_250464;
        case 0x250468u: goto label_250468;
        case 0x25046cu: goto label_25046c;
        case 0x250470u: goto label_250470;
        case 0x250474u: goto label_250474;
        case 0x250478u: goto label_250478;
        case 0x25047cu: goto label_25047c;
        case 0x250480u: goto label_250480;
        case 0x250484u: goto label_250484;
        case 0x250488u: goto label_250488;
        case 0x25048cu: goto label_25048c;
        case 0x250490u: goto label_250490;
        case 0x250494u: goto label_250494;
        case 0x250498u: goto label_250498;
        case 0x25049cu: goto label_25049c;
        case 0x2504a0u: goto label_2504a0;
        case 0x2504a4u: goto label_2504a4;
        case 0x2504a8u: goto label_2504a8;
        case 0x2504acu: goto label_2504ac;
        case 0x2504b0u: goto label_2504b0;
        case 0x2504b4u: goto label_2504b4;
        case 0x2504b8u: goto label_2504b8;
        case 0x2504bcu: goto label_2504bc;
        case 0x2504c0u: goto label_2504c0;
        case 0x2504c4u: goto label_2504c4;
        case 0x2504c8u: goto label_2504c8;
        case 0x2504ccu: goto label_2504cc;
        case 0x2504d0u: goto label_2504d0;
        case 0x2504d4u: goto label_2504d4;
        case 0x2504d8u: goto label_2504d8;
        case 0x2504dcu: goto label_2504dc;
        case 0x2504e0u: goto label_2504e0;
        case 0x2504e4u: goto label_2504e4;
        case 0x2504e8u: goto label_2504e8;
        case 0x2504ecu: goto label_2504ec;
        case 0x2504f0u: goto label_2504f0;
        case 0x2504f4u: goto label_2504f4;
        case 0x2504f8u: goto label_2504f8;
        case 0x2504fcu: goto label_2504fc;
        case 0x250500u: goto label_250500;
        case 0x250504u: goto label_250504;
        case 0x250508u: goto label_250508;
        case 0x25050cu: goto label_25050c;
        case 0x250510u: goto label_250510;
        case 0x250514u: goto label_250514;
        case 0x250518u: goto label_250518;
        case 0x25051cu: goto label_25051c;
        case 0x250520u: goto label_250520;
        case 0x250524u: goto label_250524;
        case 0x250528u: goto label_250528;
        case 0x25052cu: goto label_25052c;
        case 0x250530u: goto label_250530;
        case 0x250534u: goto label_250534;
        case 0x250538u: goto label_250538;
        case 0x25053cu: goto label_25053c;
        case 0x250540u: goto label_250540;
        case 0x250544u: goto label_250544;
        case 0x250548u: goto label_250548;
        case 0x25054cu: goto label_25054c;
        case 0x250550u: goto label_250550;
        case 0x250554u: goto label_250554;
        case 0x250558u: goto label_250558;
        case 0x25055cu: goto label_25055c;
        case 0x250560u: goto label_250560;
        case 0x250564u: goto label_250564;
        case 0x250568u: goto label_250568;
        case 0x25056cu: goto label_25056c;
        case 0x250570u: goto label_250570;
        case 0x250574u: goto label_250574;
        case 0x250578u: goto label_250578;
        case 0x25057cu: goto label_25057c;
        case 0x250580u: goto label_250580;
        case 0x250584u: goto label_250584;
        case 0x250588u: goto label_250588;
        case 0x25058cu: goto label_25058c;
        case 0x250590u: goto label_250590;
        case 0x250594u: goto label_250594;
        case 0x250598u: goto label_250598;
        case 0x25059cu: goto label_25059c;
        case 0x2505a0u: goto label_2505a0;
        case 0x2505a4u: goto label_2505a4;
        case 0x2505a8u: goto label_2505a8;
        case 0x2505acu: goto label_2505ac;
        case 0x2505b0u: goto label_2505b0;
        case 0x2505b4u: goto label_2505b4;
        case 0x2505b8u: goto label_2505b8;
        case 0x2505bcu: goto label_2505bc;
        case 0x2505c0u: goto label_2505c0;
        case 0x2505c4u: goto label_2505c4;
        case 0x2505c8u: goto label_2505c8;
        case 0x2505ccu: goto label_2505cc;
        case 0x2505d0u: goto label_2505d0;
        case 0x2505d4u: goto label_2505d4;
        case 0x2505d8u: goto label_2505d8;
        case 0x2505dcu: goto label_2505dc;
        case 0x2505e0u: goto label_2505e0;
        case 0x2505e4u: goto label_2505e4;
        case 0x2505e8u: goto label_2505e8;
        case 0x2505ecu: goto label_2505ec;
        case 0x2505f0u: goto label_2505f0;
        case 0x2505f4u: goto label_2505f4;
        case 0x2505f8u: goto label_2505f8;
        case 0x2505fcu: goto label_2505fc;
        case 0x250600u: goto label_250600;
        case 0x250604u: goto label_250604;
        case 0x250608u: goto label_250608;
        case 0x25060cu: goto label_25060c;
        case 0x250610u: goto label_250610;
        case 0x250614u: goto label_250614;
        case 0x250618u: goto label_250618;
        case 0x25061cu: goto label_25061c;
        case 0x250620u: goto label_250620;
        case 0x250624u: goto label_250624;
        case 0x250628u: goto label_250628;
        case 0x25062cu: goto label_25062c;
        case 0x250630u: goto label_250630;
        case 0x250634u: goto label_250634;
        case 0x250638u: goto label_250638;
        case 0x25063cu: goto label_25063c;
        case 0x250640u: goto label_250640;
        case 0x250644u: goto label_250644;
        case 0x250648u: goto label_250648;
        case 0x25064cu: goto label_25064c;
        case 0x250650u: goto label_250650;
        case 0x250654u: goto label_250654;
        case 0x250658u: goto label_250658;
        case 0x25065cu: goto label_25065c;
        case 0x250660u: goto label_250660;
        case 0x250664u: goto label_250664;
        case 0x250668u: goto label_250668;
        case 0x25066cu: goto label_25066c;
        case 0x250670u: goto label_250670;
        case 0x250674u: goto label_250674;
        case 0x250678u: goto label_250678;
        case 0x25067cu: goto label_25067c;
        case 0x250680u: goto label_250680;
        case 0x250684u: goto label_250684;
        case 0x250688u: goto label_250688;
        case 0x25068cu: goto label_25068c;
        case 0x250690u: goto label_250690;
        case 0x250694u: goto label_250694;
        case 0x250698u: goto label_250698;
        case 0x25069cu: goto label_25069c;
        case 0x2506a0u: goto label_2506a0;
        case 0x2506a4u: goto label_2506a4;
        case 0x2506a8u: goto label_2506a8;
        case 0x2506acu: goto label_2506ac;
        case 0x2506b0u: goto label_2506b0;
        case 0x2506b4u: goto label_2506b4;
        case 0x2506b8u: goto label_2506b8;
        case 0x2506bcu: goto label_2506bc;
        case 0x2506c0u: goto label_2506c0;
        case 0x2506c4u: goto label_2506c4;
        case 0x2506c8u: goto label_2506c8;
        case 0x2506ccu: goto label_2506cc;
        case 0x2506d0u: goto label_2506d0;
        case 0x2506d4u: goto label_2506d4;
        case 0x2506d8u: goto label_2506d8;
        case 0x2506dcu: goto label_2506dc;
        case 0x2506e0u: goto label_2506e0;
        case 0x2506e4u: goto label_2506e4;
        case 0x2506e8u: goto label_2506e8;
        case 0x2506ecu: goto label_2506ec;
        case 0x2506f0u: goto label_2506f0;
        case 0x2506f4u: goto label_2506f4;
        case 0x2506f8u: goto label_2506f8;
        case 0x2506fcu: goto label_2506fc;
        case 0x250700u: goto label_250700;
        case 0x250704u: goto label_250704;
        case 0x250708u: goto label_250708;
        case 0x25070cu: goto label_25070c;
        case 0x250710u: goto label_250710;
        case 0x250714u: goto label_250714;
        case 0x250718u: goto label_250718;
        case 0x25071cu: goto label_25071c;
        case 0x250720u: goto label_250720;
        case 0x250724u: goto label_250724;
        case 0x250728u: goto label_250728;
        case 0x25072cu: goto label_25072c;
        case 0x250730u: goto label_250730;
        case 0x250734u: goto label_250734;
        case 0x250738u: goto label_250738;
        case 0x25073cu: goto label_25073c;
        case 0x250740u: goto label_250740;
        case 0x250744u: goto label_250744;
        case 0x250748u: goto label_250748;
        case 0x25074cu: goto label_25074c;
        case 0x250750u: goto label_250750;
        case 0x250754u: goto label_250754;
        case 0x250758u: goto label_250758;
        case 0x25075cu: goto label_25075c;
        case 0x250760u: goto label_250760;
        case 0x250764u: goto label_250764;
        case 0x250768u: goto label_250768;
        case 0x25076cu: goto label_25076c;
        case 0x250770u: goto label_250770;
        case 0x250774u: goto label_250774;
        case 0x250778u: goto label_250778;
        case 0x25077cu: goto label_25077c;
        case 0x250780u: goto label_250780;
        case 0x250784u: goto label_250784;
        case 0x250788u: goto label_250788;
        case 0x25078cu: goto label_25078c;
        case 0x250790u: goto label_250790;
        case 0x250794u: goto label_250794;
        case 0x250798u: goto label_250798;
        case 0x25079cu: goto label_25079c;
        case 0x2507a0u: goto label_2507a0;
        case 0x2507a4u: goto label_2507a4;
        case 0x2507a8u: goto label_2507a8;
        case 0x2507acu: goto label_2507ac;
        case 0x2507b0u: goto label_2507b0;
        case 0x2507b4u: goto label_2507b4;
        case 0x2507b8u: goto label_2507b8;
        case 0x2507bcu: goto label_2507bc;
        case 0x2507c0u: goto label_2507c0;
        case 0x2507c4u: goto label_2507c4;
        case 0x2507c8u: goto label_2507c8;
        case 0x2507ccu: goto label_2507cc;
        case 0x2507d0u: goto label_2507d0;
        case 0x2507d4u: goto label_2507d4;
        case 0x2507d8u: goto label_2507d8;
        case 0x2507dcu: goto label_2507dc;
        case 0x2507e0u: goto label_2507e0;
        case 0x2507e4u: goto label_2507e4;
        case 0x2507e8u: goto label_2507e8;
        case 0x2507ecu: goto label_2507ec;
        case 0x2507f0u: goto label_2507f0;
        case 0x2507f4u: goto label_2507f4;
        case 0x2507f8u: goto label_2507f8;
        case 0x2507fcu: goto label_2507fc;
        case 0x250800u: goto label_250800;
        case 0x250804u: goto label_250804;
        case 0x250808u: goto label_250808;
        case 0x25080cu: goto label_25080c;
        case 0x250810u: goto label_250810;
        case 0x250814u: goto label_250814;
        case 0x250818u: goto label_250818;
        case 0x25081cu: goto label_25081c;
        case 0x250820u: goto label_250820;
        case 0x250824u: goto label_250824;
        case 0x250828u: goto label_250828;
        case 0x25082cu: goto label_25082c;
        case 0x250830u: goto label_250830;
        case 0x250834u: goto label_250834;
        case 0x250838u: goto label_250838;
        case 0x25083cu: goto label_25083c;
        case 0x250840u: goto label_250840;
        case 0x250844u: goto label_250844;
        case 0x250848u: goto label_250848;
        case 0x25084cu: goto label_25084c;
        case 0x250850u: goto label_250850;
        case 0x250854u: goto label_250854;
        case 0x250858u: goto label_250858;
        case 0x25085cu: goto label_25085c;
        case 0x250860u: goto label_250860;
        case 0x250864u: goto label_250864;
        case 0x250868u: goto label_250868;
        case 0x25086cu: goto label_25086c;
        case 0x250870u: goto label_250870;
        case 0x250874u: goto label_250874;
        case 0x250878u: goto label_250878;
        case 0x25087cu: goto label_25087c;
        case 0x250880u: goto label_250880;
        case 0x250884u: goto label_250884;
        default: return;
    }

label_2500b8:
    // 0x2500b8: 0x0  nop
    ctx->pc = 0x2500b8u;
    // NOP
label_2500bc:
    // 0x2500bc: 0x0  nop
    ctx->pc = 0x2500bcu;
    // NOP
label_2500c0:
    // 0x2500c0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2500c0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2500c4:
    // 0x2500c4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2500c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2500c8:
    // 0x2500c8: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x2500c8u;
    
label_2500cc:
    // 0x2500cc: 0x0  nop
    ctx->pc = 0x2500ccu;
    // NOP
label_2500d0:
    // 0x2500d0: 0x3c020  add         $t8, $zero, $v1
    ctx->pc = 0x2500d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_2500d4:
    // 0x2500d4: 0x0  nop
    ctx->pc = 0x2500d4u;
    // NOP
label_2500d8:
    // 0x2500d8: 0x0  nop
    ctx->pc = 0x2500d8u;
    // NOP
label_2500dc:
    // 0x2500dc: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2500dcu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2500e0:
    // 0x2500e0: 0x10  mfhi        $zero
    ctx->pc = 0x2500e0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2500e4:
    // 0x2500e4: 0x0  nop
    ctx->pc = 0x2500e4u;
    // NOP
label_2500e8:
    // 0x2500e8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2500e8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2500ec:
    // 0x2500ec: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x2500ecu;
    
label_2500f0:
    // 0x2500f0: 0x0  nop
    ctx->pc = 0x2500f0u;
    // NOP
label_2500f4:
    // 0x2500f4: 0x0  nop
    ctx->pc = 0x2500f4u;
    // NOP
label_2500f8:
    // 0x2500f8: 0x0  nop
    ctx->pc = 0x2500f8u;
    // NOP
label_2500fc:
    // 0x2500fc: 0x1540  sll         $v0, $zero, 21
    ctx->pc = 0x2500fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_250100:
    // 0x250100: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x250100u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250104:
    // 0x250104: 0x0  nop
    ctx->pc = 0x250104u;
    // NOP
label_250108:
    // 0x250108: 0x0  nop
    ctx->pc = 0x250108u;
    // NOP
label_25010c:
    // 0x25010c: 0x0  nop
    ctx->pc = 0x25010cu;
    // NOP
label_250110:
    // 0x250110: 0x650064e  bltzal      $s2, . + 4 + (0x64E << 2)
label_250114:
    if (ctx->pc == 0x250114u) {
        ctx->pc = 0x250114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250110u;
        // 0x250114: 0x6520c2d  bltzall     $s2, . + 4 + (0xC2D << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2531CC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250118u;
        goto label_250118;
    }
    ctx->pc = 0x250110u;
    {
        const bool branch_taken_0x250110 = (GPR_S32(ctx, 18) < 0);
        SET_GPR_U32(ctx, 31, 0x250118u);
        ctx->pc = 0x250114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250110u;
        // 0x250114: 0x6520c2d  bltzall     $s2, . + 4 + (0xC2D << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2531CC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x250110) {
            ctx->pc = 0x251A4Cu;
            { ctx->pc = 0x251a4c; return; }
        }
    }
    ctx->pc = 0x250118u;
label_250118:
    // 0x250118: 0xc2d0654  jal         func_B41950
label_25011c:
    if (ctx->pc == 0x25011Cu) {
        ctx->pc = 0x25011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250118u;
        // 0x25011c: 0x6580656  mtsab       $s2, 0x656 (Delay Slot)
        ctx->sa = ((GPR_U32(ctx, 18) ^ (uint32_t)1622) & 0xF) << 3;
        ctx->in_delay_slot = false;
        ctx->pc = 0x250120u;
        goto label_250120;
    }
    ctx->pc = 0x250118u;
    SET_GPR_U32(ctx, 31, 0x250120u);
    ctx->pc = 0x25011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250118u;
    // 0x25011c: 0x6580656  mtsab       $s2, 0x656 (Delay Slot)
    ctx->sa = ((GPR_U32(ctx, 18) ^ (uint32_t)1622) & 0xF) << 3;
    ctx->in_delay_slot = false;
    ctx->pc = 0xB41950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB41950u, 0x250118u, 0x250120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250120u;
label_250120:
    // 0x250120: 0x65a0c2d  .word       0x065A0C2D                   # INVALID     $s2, $k0, 0xC2D # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x250120u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1A at 0x250120 raw=0x065A0C2D");
 /* MITIGATED */
label_250124:
    // 0x250124: 0xc2d065c  jal         func_B41970
label_250128:
    if (ctx->pc == 0x250128u) {
        ctx->pc = 0x250128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250124u;
        // 0x250128: 0x660065e  bltz        $s3, . + 4 + (0x65E << 2) (Delay Slot)
        // REGIMM branch instruction to 0x251AA4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x25012Cu;
        goto label_25012c;
    }
    ctx->pc = 0x250124u;
    SET_GPR_U32(ctx, 31, 0x25012Cu);
    ctx->pc = 0x250128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250124u;
    // 0x250128: 0x660065e  bltz        $s3, . + 4 + (0x65E << 2) (Delay Slot)
    // REGIMM branch instruction to 0x251AA4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB41970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB41970u, 0x250124u, 0x25012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25012Cu;
label_25012c:
    // 0x25012c: 0x6620c2d  bltzl       $s3, . + 4 + (0xC2D << 2)
label_250130:
    if (ctx->pc == 0x250130u) {
        ctx->pc = 0x250130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25012Cu;
        // 0x250130: 0xc2d0664  jal         func_B41990 (Delay Slot)
        // JAL 0xB41990 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250134u;
        goto label_250134;
    }
    ctx->pc = 0x25012Cu;
    {
        const bool branch_taken_0x25012c = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x25012c) {
            ctx->pc = 0x250130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25012Cu;
            // 0x250130: 0xc2d0664  jal         func_B41990 (Delay Slot)
            // JAL 0xB41990 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2531E4u;
            { ctx->pc = 0x2531e4; return; }
        }
    }
    ctx->pc = 0x250134u;
label_250134:
    // 0x250134: 0x6680666  tgei        $s3, 0x666
    ctx->pc = 0x250134u;
    if (GPR_S64(ctx, 19) >= (int64_t)(int32_t)1638) { runtime->handleTrap(rdram, ctx); }
label_250138:
    // 0x250138: 0x66a0c2d  tlti        $s3, 0xC2D
    ctx->pc = 0x250138u;
    if (GPR_S64(ctx, 19) < (int64_t)(int32_t)3117) { runtime->handleTrap(rdram, ctx); }
label_25013c:
    // 0x25013c: 0xc2d066c  jal         func_B419B0
label_250140:
    if (ctx->pc == 0x250140u) {
        ctx->pc = 0x250140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25013Cu;
        // 0x250140: 0x670066e  bltzal      $s3, . + 4 + (0x66E << 2) (Delay Slot)
        // REGIMM branch instruction to 0x251AFC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250144u;
        goto label_250144;
    }
    ctx->pc = 0x25013Cu;
    SET_GPR_U32(ctx, 31, 0x250144u);
    ctx->pc = 0x250140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25013Cu;
    // 0x250140: 0x670066e  bltzal      $s3, . + 4 + (0x66E << 2) (Delay Slot)
    // REGIMM branch instruction to 0x251AFC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB419B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB419B0u, 0x25013Cu, 0x250144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250144u;
label_250144:
    // 0x250144: 0x6740672  .word       0x06740672                   # INVALID     $s3, $s4, 0x672 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x250144u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x14 at 0x250144 raw=0x06740672");
 /* MITIGATED */
label_250148:
    // 0x250148: 0xc2d0676  jal         func_B419D8
label_25014c:
    if (ctx->pc == 0x25014Cu) {
        ctx->pc = 0x25014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250148u;
        // 0x25014c: 0x67a0678  .word       0x067A0678                   # INVALID     $s3, $k0, 0x678 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x1A at 0x25014C raw=0x067A0678");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x250150u;
        goto label_250150;
    }
    ctx->pc = 0x250148u;
    SET_GPR_U32(ctx, 31, 0x250150u);
    ctx->pc = 0x25014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250148u;
    // 0x25014c: 0x67a0678  .word       0x067A0678                   # INVALID     $s3, $k0, 0x678 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1A at 0x25014C raw=0x067A0678");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xB419D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB419D8u, 0x250148u, 0x250150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250150u;
label_250150:
    // 0x250150: 0x67c0c2d  .word       0x067C0C2D                   # INVALID     $s3, $gp, 0xC2D # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x250150u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1C at 0x250150 raw=0x067C0C2D");
 /* MITIGATED */
label_250154:
    // 0x250154: 0xc2d067e  jal         func_B419F8
label_250158:
    if (ctx->pc == 0x250158u) {
        ctx->pc = 0x250158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250154u;
        // 0x250158: 0x6820680  bltzl       $s4, . + 4 + (0x680 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x251B5C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x25015Cu;
        goto label_25015c;
    }
    ctx->pc = 0x250154u;
    SET_GPR_U32(ctx, 31, 0x25015Cu);
    ctx->pc = 0x250158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250154u;
    // 0x250158: 0x6820680  bltzl       $s4, . + 4 + (0x680 << 2) (Delay Slot)
    // REGIMM branch instruction to 0x251B5C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB419F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB419F8u, 0x250154u, 0x25015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25015Cu;
label_25015c:
    // 0x25015c: 0x6860684  .word       0x06860684                   # INVALID     $s4, $a2, 0x684 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x25015cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x25015C raw=0x06860684");
 /* MITIGATED */
label_250160:
    // 0x250160: 0xc2d0688  jal         func_B41A20
label_250164:
    if (ctx->pc == 0x250164u) {
        ctx->pc = 0x250164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250160u;
        // 0x250164: 0x68c068a  teqi        $s4, 0x68A (Delay Slot)
        if (GPR_S64(ctx, 20) == (int64_t)(int32_t)1674) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x250168u;
        goto label_250168;
    }
    ctx->pc = 0x250160u;
    SET_GPR_U32(ctx, 31, 0x250168u);
    ctx->pc = 0x250164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250160u;
    // 0x250164: 0x68c068a  teqi        $s4, 0x68A (Delay Slot)
    if (GPR_S64(ctx, 20) == (int64_t)(int32_t)1674) { runtime->handleTrap(rdram, ctx); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB41A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB41A20u, 0x250160u, 0x250168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250168u;
label_250168:
    // 0x250168: 0x68e0c2d  tnei        $s4, 0xC2D
    ctx->pc = 0x250168u;
    if (GPR_S64(ctx, 20) != (int64_t)(int32_t)3117) { runtime->handleTrap(rdram, ctx); }
label_25016c:
    // 0x25016c: 0x6920690  bltzall     $s4, . + 4 + (0x690 << 2)
label_250170:
    if (ctx->pc == 0x250170u) {
        ctx->pc = 0x250170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25016Cu;
        // 0x250170: 0x6960694  .word       0x06960694                   # INVALID     $s4, $s6, 0x694 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x16 at 0x250170 raw=0x06960694");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x250174u;
        goto label_250174;
    }
    ctx->pc = 0x25016Cu;
    {
        const bool branch_taken_0x25016c = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x25016c) {
            SET_GPR_U32(ctx, 31, 0x250174u);
            ctx->pc = 0x250170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25016Cu;
            // 0x250170: 0x6960694  .word       0x06960694                   # INVALID     $s4, $s6, 0x694 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//             throw std::runtime_error("Unhandled REGIMM instruction: 0x16 at 0x250170 raw=0x06960694");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x251BB0u;
            { ctx->pc = 0x251bb0; return; }
        }
    }
    ctx->pc = 0x250174u;
label_250174:
    // 0x250174: 0x6980c2d  mtsab       $s4, 0xC2D
    ctx->pc = 0x250174u;
    ctx->sa = ((GPR_U32(ctx, 20) ^ (uint32_t)3117) & 0xF) << 3;
label_250178:
    // 0x250178: 0xc2d069a  jal         func_B41A68
label_25017c:
    if (ctx->pc == 0x25017Cu) {
        ctx->pc = 0x25017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250178u;
        // 0x25017c: 0x69e069c  .word       0x069E069C                   # INVALID     $s4, $fp, 0x69C # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x1E at 0x25017C raw=0x069E069C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x250180u;
        goto label_250180;
    }
    ctx->pc = 0x250178u;
    SET_GPR_U32(ctx, 31, 0x250180u);
    ctx->pc = 0x25017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250178u;
    // 0x25017c: 0x69e069c  .word       0x069E069C                   # INVALID     $s4, $fp, 0x69C # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1E at 0x25017C raw=0x069E069C");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xB41A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB41A68u, 0x250178u, 0x250180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250180u;
label_250180:
    // 0x250180: 0x6a00c2d  bltz        $s5, . + 4 + (0xC2D << 2)
label_250184:
    if (ctx->pc == 0x250184u) {
        ctx->pc = 0x250184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250180u;
        // 0x250184: 0xc2d06a2  jal         func_B41A88 (Delay Slot)
        // JAL 0xB41A88 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250188u;
        goto label_250188;
    }
    ctx->pc = 0x250180u;
    {
        const bool branch_taken_0x250180 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x250184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250180u;
        // 0x250184: 0xc2d06a2  jal         func_B41A88 (Delay Slot)
        // JAL 0xB41A88 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x250180) {
            ctx->pc = 0x253238u;
            { ctx->pc = 0x253238; return; }
        }
    }
    ctx->pc = 0x250188u;
label_250188:
    // 0x250188: 0xc2d06a4  jal         func_B41A90
label_25018c:
    if (ctx->pc == 0x25018Cu) {
        ctx->pc = 0x25018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250188u;
        // 0x25018c: 0x6a60c2d  .word       0x06A60C2D                   # INVALID     $s5, $a2, 0xC2D # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x25018C raw=0x06A60C2D");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x250190u;
        goto label_250190;
    }
    ctx->pc = 0x250188u;
    SET_GPR_U32(ctx, 31, 0x250190u);
    ctx->pc = 0x25018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250188u;
    // 0x25018c: 0x6a60c2d  .word       0x06A60C2D                   # INVALID     $s5, $a2, 0xC2D # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x25018C raw=0x06A60C2D");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xB41A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB41A90u, 0x250188u, 0x250190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250190u;
label_250190:
    // 0x250190: 0xc2d0c2d  jal         func_B430B4
label_250194:
    if (ctx->pc == 0x250194u) {
        ctx->pc = 0x250194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250190u;
        // 0x250194: 0xc2d06a8  jal         func_B41AA0 (Delay Slot)
        // JAL 0xB41AA0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250198u;
        goto label_250198;
    }
    ctx->pc = 0x250190u;
    SET_GPR_U32(ctx, 31, 0x250198u);
    ctx->pc = 0x250194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250190u;
    // 0x250194: 0xc2d06a8  jal         func_B41AA0 (Delay Slot)
    // JAL 0xB41AA0 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x250190u, 0x250198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250198u;
label_250198:
    // 0x250198: 0xc2d  .word       0x00000C2D                   # daddu       $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250198u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25019c:
    // 0x25019c: 0x0  nop
    ctx->pc = 0x25019cu;
    // NOP
label_2501a0:
    // 0x2501a0: 0x9f509f3  j           func_7D427CC
label_2501a4:
    if (ctx->pc == 0x2501A4u) {
        ctx->pc = 0x2501A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501A0u;
        // 0x2501a4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501A8u;
        goto label_2501a8;
    }
    ctx->pc = 0x2501A0u;
    ctx->pc = 0x2501A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501A0u;
    // 0x2501a4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7D427CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7D427CCu, 0x2501A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2501A8u;
label_2501a8:
    // 0x2501a8: 0x9f909f7  j           func_7E427DC
label_2501ac:
    if (ctx->pc == 0x2501ACu) {
        ctx->pc = 0x2501ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501A8u;
        // 0x2501ac: 0xc2d09fb  jal         func_B427EC (Delay Slot)
        // JAL 0xB427EC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501B0u;
        goto label_2501b0;
    }
    ctx->pc = 0x2501A8u;
    ctx->pc = 0x2501ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501A8u;
    // 0x2501ac: 0xc2d09fb  jal         func_B427EC (Delay Slot)
    // JAL 0xB427EC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x7E427DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7E427DCu, 0x2501A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2501B0u;
label_2501b0:
    // 0x2501b0: 0xc2d09fd  jal         func_B427F4
label_2501b4:
    if (ctx->pc == 0x2501B4u) {
        ctx->pc = 0x2501B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501B0u;
        // 0x2501b4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501B8u;
        goto label_2501b8;
    }
    ctx->pc = 0x2501B0u;
    SET_GPR_U32(ctx, 31, 0x2501B8u);
    ctx->pc = 0x2501B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501B0u;
    // 0x2501b4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB427F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB427F4u, 0x2501B0u, 0x2501B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501B8u;
label_2501b8:
    // 0x2501b8: 0xc2d09ff  jal         func_B427FC
label_2501bc:
    if (ctx->pc == 0x2501BCu) {
        ctx->pc = 0x2501BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501B8u;
        // 0x2501bc: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501C0u;
        goto label_2501c0;
    }
    ctx->pc = 0x2501B8u;
    SET_GPR_U32(ctx, 31, 0x2501C0u);
    ctx->pc = 0x2501BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501B8u;
    // 0x2501bc: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB427FCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB427FCu, 0x2501B8u, 0x2501C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501C0u;
label_2501c0:
    // 0x2501c0: 0xc2d0a01  jal         func_B42804
label_2501c4:
    if (ctx->pc == 0x2501C4u) {
        ctx->pc = 0x2501C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501C0u;
        // 0x2501c4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501C8u;
        goto label_2501c8;
    }
    ctx->pc = 0x2501C0u;
    SET_GPR_U32(ctx, 31, 0x2501C8u);
    ctx->pc = 0x2501C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501C0u;
    // 0x2501c4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB42804u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB42804u, 0x2501C0u, 0x2501C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501C8u;
label_2501c8:
    // 0x2501c8: 0xa050a03  j           func_814280C
label_2501cc:
    if (ctx->pc == 0x2501CCu) {
        ctx->pc = 0x2501CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501C8u;
        // 0x2501cc: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501D0u;
        goto label_2501d0;
    }
    ctx->pc = 0x2501C8u;
    ctx->pc = 0x2501CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501C8u;
    // 0x2501cc: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x814280Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x814280Cu, 0x2501C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2501D0u;
label_2501d0:
    // 0x2501d0: 0xa090a07  j           func_824281C
label_2501d4:
    if (ctx->pc == 0x2501D4u) {
        ctx->pc = 0x2501D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501D0u;
        // 0x2501d4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501D8u;
        goto label_2501d8;
    }
    ctx->pc = 0x2501D0u;
    ctx->pc = 0x2501D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501D0u;
    // 0x2501d4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x824281Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x824281Cu, 0x2501D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2501D8u;
label_2501d8:
    // 0x2501d8: 0xa0d0a0b  j           func_834282C
label_2501dc:
    if (ctx->pc == 0x2501DCu) {
        ctx->pc = 0x2501DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501D8u;
        // 0x2501dc: 0xa110a0f  j           func_844283C (Delay Slot)
        // J 0x844283C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501E0u;
        goto label_2501e0;
    }
    ctx->pc = 0x2501D8u;
    ctx->pc = 0x2501DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501D8u;
    // 0x2501dc: 0xa110a0f  j           func_844283C (Delay Slot)
    // J 0x844283C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x834282Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x834282Cu, 0x2501D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2501E0u;
label_2501e0:
    // 0x2501e0: 0xa150a13  j           func_854284C
label_2501e4:
    if (ctx->pc == 0x2501E4u) {
        ctx->pc = 0x2501E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501E0u;
        // 0x2501e4: 0xa190a17  j           func_864285C (Delay Slot)
        // J 0x864285C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501E8u;
        goto label_2501e8;
    }
    ctx->pc = 0x2501E0u;
    ctx->pc = 0x2501E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501E0u;
    // 0x2501e4: 0xa190a17  j           func_864285C (Delay Slot)
    // J 0x864285C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x854284Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x854284Cu, 0x2501E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2501E8u;
label_2501e8:
    // 0x2501e8: 0xc2d0a1b  jal         func_B4286C
label_2501ec:
    if (ctx->pc == 0x2501ECu) {
        ctx->pc = 0x2501ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501E8u;
        // 0x2501ec: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501F0u;
        goto label_2501f0;
    }
    ctx->pc = 0x2501E8u;
    SET_GPR_U32(ctx, 31, 0x2501F0u);
    ctx->pc = 0x2501ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501E8u;
    // 0x2501ec: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB4286Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB4286Cu, 0x2501E8u, 0x2501F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501F0u;
label_2501f0:
    // 0x2501f0: 0xc2d0a1d  jal         func_B42874
label_2501f4:
    if (ctx->pc == 0x2501F4u) {
        ctx->pc = 0x2501F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501F0u;
        // 0x2501f4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2501F8u;
        goto label_2501f8;
    }
    ctx->pc = 0x2501F0u;
    SET_GPR_U32(ctx, 31, 0x2501F8u);
    ctx->pc = 0x2501F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501F0u;
    // 0x2501f4: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB42874u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB42874u, 0x2501F0u, 0x2501F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2501F8u;
label_2501f8:
    // 0x2501f8: 0xa210a1f  j           func_884287C
label_2501fc:
    if (ctx->pc == 0x2501FCu) {
        ctx->pc = 0x2501FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501F8u;
        // 0x2501fc: 0xc2d0a23  jal         func_B4288C (Delay Slot)
        // JAL 0xB4288C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250200u;
        goto label_250200;
    }
    ctx->pc = 0x2501F8u;
    ctx->pc = 0x2501FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501F8u;
    // 0x2501fc: 0xc2d0a23  jal         func_B4288C (Delay Slot)
    // JAL 0xB4288C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x884287Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884287Cu, 0x2501F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x250200u;
label_250200:
    // 0x250200: 0xc2d0a25  jal         func_B42894
label_250204:
    if (ctx->pc == 0x250204u) {
        ctx->pc = 0x250204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250200u;
        // 0x250204: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250208u;
        goto label_250208;
    }
    ctx->pc = 0x250200u;
    SET_GPR_U32(ctx, 31, 0x250208u);
    ctx->pc = 0x250204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250200u;
    // 0x250204: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB42894u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB42894u, 0x250200u, 0x250208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250208u;
label_250208:
    // 0x250208: 0xc2d0a27  jal         func_B4289C
label_25020c:
    if (ctx->pc == 0x25020Cu) {
        ctx->pc = 0x25020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250208u;
        // 0x25020c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250210u;
        goto label_250210;
    }
    ctx->pc = 0x250208u;
    SET_GPR_U32(ctx, 31, 0x250210u);
    ctx->pc = 0x25020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250208u;
    // 0x25020c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB4289Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB4289Cu, 0x250208u, 0x250210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250210u;
label_250210:
    // 0x250210: 0xa2b0a29  j           func_8AC28A4
label_250214:
    if (ctx->pc == 0x250214u) {
        ctx->pc = 0x250214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250210u;
        // 0x250214: 0xc2d0a2d  jal         func_B428B4 (Delay Slot)
        // JAL 0xB428B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250218u;
        goto label_250218;
    }
    ctx->pc = 0x250210u;
    ctx->pc = 0x250214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250210u;
    // 0x250214: 0xc2d0a2d  jal         func_B428B4 (Delay Slot)
    // JAL 0xB428B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8AC28A4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8AC28A4u, 0x250210u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x250218u;
label_250218:
    // 0x250218: 0xa310a2f  j           func_8C428BC
label_25021c:
    if (ctx->pc == 0x25021Cu) {
        ctx->pc = 0x25021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250218u;
        // 0x25021c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250220u;
        goto label_250220;
    }
    ctx->pc = 0x250218u;
    ctx->pc = 0x25021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250218u;
    // 0x25021c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8C428BCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8C428BCu, 0x250218u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x250220u;
label_250220:
    // 0x250220: 0xc2d0a33  jal         func_B428CC
label_250224:
    if (ctx->pc == 0x250224u) {
        ctx->pc = 0x250224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250220u;
        // 0x250224: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250228u;
        goto label_250228;
    }
    ctx->pc = 0x250220u;
    SET_GPR_U32(ctx, 31, 0x250228u);
    ctx->pc = 0x250224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250220u;
    // 0x250224: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB428CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB428CCu, 0x250220u, 0x250228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250228u;
label_250228:
    // 0x250228: 0xc2d0a35  jal         func_B428D4
label_25022c:
    if (ctx->pc == 0x25022Cu) {
        ctx->pc = 0x25022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250228u;
        // 0x25022c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250230u;
        goto label_250230;
    }
    ctx->pc = 0x250228u;
    SET_GPR_U32(ctx, 31, 0x250230u);
    ctx->pc = 0x25022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250228u;
    // 0x25022c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB428D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB428D4u, 0x250228u, 0x250230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250230u;
label_250230:
    // 0x250230: 0xa390a37  j           func_8E428DC
label_250234:
    if (ctx->pc == 0x250234u) {
        ctx->pc = 0x250234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250230u;
        // 0x250234: 0xc2d0a3b  jal         func_B428EC (Delay Slot)
        // JAL 0xB428EC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250238u;
        goto label_250238;
    }
    ctx->pc = 0x250230u;
    ctx->pc = 0x250234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250230u;
    // 0x250234: 0xc2d0a3b  jal         func_B428EC (Delay Slot)
    // JAL 0xB428EC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8E428DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8E428DCu, 0x250230u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x250238u;
label_250238:
    // 0x250238: 0xa3f0a3d  j           func_8FC28F4
label_25023c:
    if (ctx->pc == 0x25023Cu) {
        ctx->pc = 0x25023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250238u;
        // 0x25023c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250240u;
        goto label_250240;
    }
    ctx->pc = 0x250238u;
    ctx->pc = 0x25023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250238u;
    // 0x25023c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x8FC28F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8FC28F4u, 0x250238u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x250240u;
label_250240:
    // 0x250240: 0xc2d0a41  jal         func_B42904
label_250244:
    if (ctx->pc == 0x250244u) {
        ctx->pc = 0x250244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250240u;
        // 0x250244: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250248u;
        goto label_250248;
    }
    ctx->pc = 0x250240u;
    SET_GPR_U32(ctx, 31, 0x250248u);
    ctx->pc = 0x250244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250240u;
    // 0x250244: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB42904u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB42904u, 0x250240u, 0x250248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250248u;
label_250248:
    // 0x250248: 0xc2d0a43  jal         func_B4290C
label_25024c:
    if (ctx->pc == 0x25024Cu) {
        ctx->pc = 0x25024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250248u;
        // 0x25024c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250250u;
        goto label_250250;
    }
    ctx->pc = 0x250248u;
    SET_GPR_U32(ctx, 31, 0x250250u);
    ctx->pc = 0x25024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250248u;
    // 0x25024c: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB4290Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB4290Cu, 0x250248u, 0x250250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250250u;
label_250250:
    // 0x250250: 0xc2d0a45  jal         func_B42914
label_250254:
    if (ctx->pc == 0x250254u) {
        ctx->pc = 0x250254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250250u;
        // 0x250254: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
        // JAL 0xB430B4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x250258u;
        goto label_250258;
    }
    ctx->pc = 0x250250u;
    SET_GPR_U32(ctx, 31, 0x250258u);
    ctx->pc = 0x250254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250250u;
    // 0x250254: 0xc2d0c2d  jal         func_B430B4 (Delay Slot)
    // JAL 0xB430B4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB42914u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB42914u, 0x250250u, 0x250258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250258u;
label_250258:
    // 0x250258: 0x0  nop
    ctx->pc = 0x250258u;
    // NOP
label_25025c:
    // 0x25025c: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x25025cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25025C raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250260:
    // 0x250260: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x250260u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_250264:
    // 0x250264: 0x0  nop
    ctx->pc = 0x250264u;
    // NOP
label_250268:
    // 0x250268: 0x0  nop
    ctx->pc = 0x250268u;
    // NOP
label_25026c:
    // 0x25026c: 0x0  nop
    ctx->pc = 0x25026cu;
    // NOP
label_250270:
    // 0x250270: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x250270u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x250270 raw=0x481C4000");
 /* MITIGATED */
label_250274:
    // 0x250274: 0xc7c35000  lwc1        $f3, 0x5000($fp)
    ctx->pc = 0x250274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_250278:
    // 0x250278: 0x0  nop
    ctx->pc = 0x250278u;
    // NOP
label_25027c:
    // 0x25027c: 0x0  nop
    ctx->pc = 0x25027cu;
    // NOP
label_250280:
    // 0x250280: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x250280u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x250280 raw=0x481C4000");
 /* MITIGATED */
label_250284:
    // 0x250284: 0xc7435000  lwc1        $f3, 0x5000($k0)
    ctx->pc = 0x250284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 26), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_250288:
    // 0x250288: 0x0  nop
    ctx->pc = 0x250288u;
    // NOP
label_25028c:
    // 0x25028c: 0x0  nop
    ctx->pc = 0x25028cu;
    // NOP
label_250290:
    // 0x250290: 0x461c4000  add.s       $f0, $f8, $f28
    ctx->pc = 0x250290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[28]);
label_250294:
    // 0x250294: 0xc7c35000  lwc1        $f3, 0x5000($fp)
    ctx->pc = 0x250294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_250298:
    // 0x250298: 0xc81c4000  lwc2        $28, 0x4000($zero)
    ctx->pc = 0x250298u;
//     throw std::runtime_error("Unhandled opcode: 0x32 at 0x250298 raw=0xC81C4000");
 /* MITIGATED */
label_25029c:
    // 0x25029c: 0x0  nop
    ctx->pc = 0x25029cu;
    // NOP
label_2502a0:
    // 0x2502a0: 0x461c4000  add.s       $f0, $f8, $f28
    ctx->pc = 0x2502a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[28]);
label_2502a4:
    // 0x2502a4: 0xc79c4000  lwc1        $f28, 0x4000($gp)
    ctx->pc = 0x2502a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_2502a8:
    // 0x2502a8: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2502a8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2502A8 raw=0x481C4000");
 /* MITIGATED */
label_2502ac:
    // 0x2502ac: 0x0  nop
    ctx->pc = 0x2502acu;
    // NOP
label_2502b0:
    // 0x2502b0: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2502b0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2502B0 raw=0x481C4000");
 /* MITIGATED */
label_2502b4:
    // 0x2502b4: 0xc79c4000  lwc1        $f28, 0x4000($gp)
    ctx->pc = 0x2502b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_2502b8:
    // 0x2502b8: 0x0  nop
    ctx->pc = 0x2502b8u;
    // NOP
label_2502bc:
    // 0x2502bc: 0x0  nop
    ctx->pc = 0x2502bcu;
    // NOP
label_2502c0:
    // 0x2502c0: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2502c0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2502C0 raw=0x481C4000");
 /* MITIGATED */
label_2502c4:
    // 0x2502c4: 0xc79c4000  lwc1        $f28, 0x4000($gp)
    ctx->pc = 0x2502c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_2502c8:
    // 0x2502c8: 0x0  nop
    ctx->pc = 0x2502c8u;
    // NOP
label_2502cc:
    // 0x2502cc: 0x0  nop
    ctx->pc = 0x2502ccu;
    // NOP
label_2502d0:
    // 0x2502d0: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2502d0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2502D0 raw=0x481C4000");
 /* MITIGATED */
label_2502d4:
    // 0x2502d4: 0xc788b800  lwc1        $f8, -0x4800($gp)
    ctx->pc = 0x2502d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294948864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2502d8:
    // 0x2502d8: 0x0  nop
    ctx->pc = 0x2502d8u;
    // NOP
label_2502dc:
    // 0x2502dc: 0x0  nop
    ctx->pc = 0x2502dcu;
    // NOP
label_2502e0:
    // 0x2502e0: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2502e0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2502E0 raw=0x481C4000");
 /* MITIGATED */
label_2502e4:
    // 0x2502e4: 0xc7435000  lwc1        $f3, 0x5000($k0)
    ctx->pc = 0x2502e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 26), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2502e8:
    // 0x2502e8: 0x0  nop
    ctx->pc = 0x2502e8u;
    // NOP
label_2502ec:
    // 0x2502ec: 0x0  nop
    ctx->pc = 0x2502ecu;
    // NOP
label_2502f0:
    // 0x2502f0: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2502f0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2502F0 raw=0x481C4000");
 /* MITIGATED */
label_2502f4:
    // 0x2502f4: 0xc7435000  lwc1        $f3, 0x5000($k0)
    ctx->pc = 0x2502f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 26), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2502f8:
    // 0x2502f8: 0x0  nop
    ctx->pc = 0x2502f8u;
    // NOP
label_2502fc:
    // 0x2502fc: 0x0  nop
    ctx->pc = 0x2502fcu;
    // NOP
label_250300:
    // 0x250300: 0x461c4000  add.s       $f0, $f8, $f28
    ctx->pc = 0x250300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[28]);
label_250304:
    // 0x250304: 0xc7435000  lwc1        $f3, 0x5000($k0)
    ctx->pc = 0x250304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 26), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_250308:
    // 0x250308: 0xc81c4000  lwc2        $28, 0x4000($zero)
    ctx->pc = 0x250308u;
//     throw std::runtime_error("Unhandled opcode: 0x32 at 0x250308 raw=0xC81C4000");
 /* MITIGATED */
label_25030c:
    // 0x25030c: 0x0  nop
    ctx->pc = 0x25030cu;
    // NOP
label_250310:
    // 0x250310: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x250310u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x250310 raw=0x481C4000");
 /* MITIGATED */
label_250314:
    // 0x250314: 0xc7435000  lwc1        $f3, 0x5000($k0)
    ctx->pc = 0x250314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 26), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_250318:
    // 0x250318: 0x0  nop
    ctx->pc = 0x250318u;
    // NOP
label_25031c:
    // 0x25031c: 0x0  nop
    ctx->pc = 0x25031cu;
    // NOP
label_250320:
    // 0x250320: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x250320u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x250320 raw=0x481C4000");
 /* MITIGATED */
label_250324:
    // 0x250324: 0xc7435000  lwc1        $f3, 0x5000($k0)
    ctx->pc = 0x250324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 26), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_250328:
    // 0x250328: 0x0  nop
    ctx->pc = 0x250328u;
    // NOP
label_25032c:
    // 0x25032c: 0x0  nop
    ctx->pc = 0x25032cu;
    // NOP
label_250330:
    // 0x250330: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x250330u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x250330 raw=0x481C4000");
 /* MITIGATED */
label_250334:
    // 0x250334: 0xc79c4000  lwc1        $f28, 0x4000($gp)
    ctx->pc = 0x250334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_250338:
    // 0x250338: 0x0  nop
    ctx->pc = 0x250338u;
    // NOP
label_25033c:
    // 0x25033c: 0x0  nop
    ctx->pc = 0x25033cu;
    // NOP
label_250340:
    // 0x250340: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x250340u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x250340 raw=0x481C4000");
 /* MITIGATED */
label_250344:
    // 0x250344: 0xc7435000  lwc1        $f3, 0x5000($k0)
    ctx->pc = 0x250344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 26), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_250348:
    // 0x250348: 0x0  nop
    ctx->pc = 0x250348u;
    // NOP
label_25034c:
    // 0x25034c: 0x0  nop
    ctx->pc = 0x25034cu;
    // NOP
label_250350:
    // 0x250350: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x250350u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x250350 raw=0x481C4000");
 /* MITIGATED */
label_250354:
    // 0x250354: 0xc7435000  lwc1        $f3, 0x5000($k0)
    ctx->pc = 0x250354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 26), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_250358:
    // 0x250358: 0x0  nop
    ctx->pc = 0x250358u;
    // NOP
label_25035c:
    // 0x25035c: 0x0  nop
    ctx->pc = 0x25035cu;
    // NOP
label_250360:
    // 0x250360: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x250360u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x250360 raw=0x481C4000");
 /* MITIGATED */
label_250364:
    // 0x250364: 0xc7c35000  lwc1        $f3, 0x5000($fp)
    ctx->pc = 0x250364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_250368:
    // 0x250368: 0x0  nop
    ctx->pc = 0x250368u;
    // NOP
label_25036c:
    // 0x25036c: 0x0  nop
    ctx->pc = 0x25036cu;
    // NOP
label_250370:
    // 0x250370: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x250370u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x250370 raw=0x481C4000");
 /* MITIGATED */
label_250374:
    // 0x250374: 0xc7c35000  lwc1        $f3, 0x5000($fp)
    ctx->pc = 0x250374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_250378:
    // 0x250378: 0x0  nop
    ctx->pc = 0x250378u;
    // NOP
label_25037c:
    // 0x25037c: 0x0  nop
    ctx->pc = 0x25037cu;
    // NOP
label_250380:
    // 0x250380: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x250380u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x250380 raw=0x481C4000");
 /* MITIGATED */
label_250384:
    // 0x250384: 0xc7c35000  lwc1        $f3, 0x5000($fp)
    ctx->pc = 0x250384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_250388:
    // 0x250388: 0x0  nop
    ctx->pc = 0x250388u;
    // NOP
label_25038c:
    // 0x25038c: 0x0  nop
    ctx->pc = 0x25038cu;
    // NOP
label_250390:
    // 0x250390: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x250390u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x250390 raw=0x481C4000");
 /* MITIGATED */
label_250394:
    // 0x250394: 0xc7435000  lwc1        $f3, 0x5000($k0)
    ctx->pc = 0x250394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 26), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_250398:
    // 0x250398: 0x0  nop
    ctx->pc = 0x250398u;
    // NOP
label_25039c:
    // 0x25039c: 0x0  nop
    ctx->pc = 0x25039cu;
    // NOP
label_2503a0:
    // 0x2503a0: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2503a0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2503A0 raw=0x481C4000");
 /* MITIGATED */
label_2503a4:
    // 0x2503a4: 0xc7435000  lwc1        $f3, 0x5000($k0)
    ctx->pc = 0x2503a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 26), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2503a8:
    // 0x2503a8: 0x0  nop
    ctx->pc = 0x2503a8u;
    // NOP
label_2503ac:
    // 0x2503ac: 0x0  nop
    ctx->pc = 0x2503acu;
    // NOP
label_2503b0:
    // 0x2503b0: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2503b0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2503B0 raw=0x481C4000");
 /* MITIGATED */
label_2503b4:
    // 0x2503b4: 0xc7435000  lwc1        $f3, 0x5000($k0)
    ctx->pc = 0x2503b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 26), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2503b8:
    // 0x2503b8: 0x0  nop
    ctx->pc = 0x2503b8u;
    // NOP
label_2503bc:
    // 0x2503bc: 0x0  nop
    ctx->pc = 0x2503bcu;
    // NOP
label_2503c0:
    // 0x2503c0: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2503c0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2503C0 raw=0x481C4000");
 /* MITIGATED */
label_2503c4:
    // 0x2503c4: 0xc7435000  lwc1        $f3, 0x5000($k0)
    ctx->pc = 0x2503c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 26), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2503c8:
    // 0x2503c8: 0x0  nop
    ctx->pc = 0x2503c8u;
    // NOP
label_2503cc:
    // 0x2503cc: 0x0  nop
    ctx->pc = 0x2503ccu;
    // NOP
label_2503d0:
    // 0x2503d0: 0x481c4000  .word       0x481C4000                   # INVALID     $zero, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2503d0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2503D0 raw=0x481C4000");
 /* MITIGATED */
label_2503d4:
    // 0x2503d4: 0xc7435000  lwc1        $f3, 0x5000($k0)
    ctx->pc = 0x2503d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 26), 20480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2503d8:
    // 0x2503d8: 0x0  nop
    ctx->pc = 0x2503d8u;
    // NOP
label_2503dc:
    // 0x2503dc: 0x0  nop
    ctx->pc = 0x2503dcu;
    // NOP
label_2503e0:
    // 0x2503e0: 0x0  nop
    ctx->pc = 0x2503e0u;
    // NOP
label_2503e4:
    // 0x2503e4: 0x0  nop
    ctx->pc = 0x2503e4u;
    // NOP
label_2503e8:
    // 0x2503e8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2503e8u;
    // CACHE instruction (ignored)
label_2503ec:
    // 0x2503ec: 0x0  nop
    ctx->pc = 0x2503ecu;
    // NOP
label_2503f0:
    // 0x2503f0: 0x0  nop
    ctx->pc = 0x2503f0u;
    // NOP
label_2503f4:
    // 0x2503f4: 0x0  nop
    ctx->pc = 0x2503f4u;
    // NOP
label_2503f8:
    // 0x2503f8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2503f8u;
    // CACHE instruction (ignored)
label_2503fc:
    // 0x2503fc: 0x0  nop
    ctx->pc = 0x2503fcu;
    // NOP
label_250400:
    // 0x250400: 0x0  nop
    ctx->pc = 0x250400u;
    // NOP
label_250404:
    // 0x250404: 0x0  nop
    ctx->pc = 0x250404u;
    // NOP
label_250408:
    // 0x250408: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x250408u;
    // CACHE instruction (ignored)
label_25040c:
    // 0x25040c: 0x0  nop
    ctx->pc = 0x25040cu;
    // NOP
label_250410:
    // 0x250410: 0x0  nop
    ctx->pc = 0x250410u;
    // NOP
label_250414:
    // 0x250414: 0x0  nop
    ctx->pc = 0x250414u;
    // NOP
label_250418:
    // 0x250418: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x250418u;
    // CACHE instruction (ignored)
label_25041c:
    // 0x25041c: 0x0  nop
    ctx->pc = 0x25041cu;
    // NOP
label_250420:
    // 0x250420: 0x0  nop
    ctx->pc = 0x250420u;
    // NOP
label_250424:
    // 0x250424: 0x0  nop
    ctx->pc = 0x250424u;
    // NOP
label_250428:
    // 0x250428: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x250428u;
    // CACHE instruction (ignored)
label_25042c:
    // 0x25042c: 0x0  nop
    ctx->pc = 0x25042cu;
    // NOP
label_250430:
    // 0x250430: 0x0  nop
    ctx->pc = 0x250430u;
    // NOP
label_250434:
    // 0x250434: 0x0  nop
    ctx->pc = 0x250434u;
    // NOP
label_250438:
    // 0x250438: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x250438u;
    // CACHE instruction (ignored)
label_25043c:
    // 0x25043c: 0x0  nop
    ctx->pc = 0x25043cu;
    // NOP
label_250440:
    // 0x250440: 0x0  nop
    ctx->pc = 0x250440u;
    // NOP
label_250444:
    // 0x250444: 0x0  nop
    ctx->pc = 0x250444u;
    // NOP
label_250448:
    // 0x250448: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x250448u;
    // CACHE instruction (ignored)
label_25044c:
    // 0x25044c: 0x0  nop
    ctx->pc = 0x25044cu;
    // NOP
label_250450:
    // 0x250450: 0x0  nop
    ctx->pc = 0x250450u;
    // NOP
label_250454:
    // 0x250454: 0x0  nop
    ctx->pc = 0x250454u;
    // NOP
label_250458:
    // 0x250458: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x250458u;
    // CACHE instruction (ignored)
label_25045c:
    // 0x25045c: 0x0  nop
    ctx->pc = 0x25045cu;
    // NOP
label_250460:
    // 0x250460: 0x0  nop
    ctx->pc = 0x250460u;
    // NOP
label_250464:
    // 0x250464: 0x0  nop
    ctx->pc = 0x250464u;
    // NOP
label_250468:
    // 0x250468: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x250468u;
    // CACHE instruction (ignored)
label_25046c:
    // 0x25046c: 0x0  nop
    ctx->pc = 0x25046cu;
    // NOP
label_250470:
    // 0x250470: 0x0  nop
    ctx->pc = 0x250470u;
    // NOP
label_250474:
    // 0x250474: 0x0  nop
    ctx->pc = 0x250474u;
    // NOP
label_250478:
    // 0x250478: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x250478u;
    // CACHE instruction (ignored)
label_25047c:
    // 0x25047c: 0x0  nop
    ctx->pc = 0x25047cu;
    // NOP
label_250480:
    // 0x250480: 0x0  nop
    ctx->pc = 0x250480u;
    // NOP
label_250484:
    // 0x250484: 0x0  nop
    ctx->pc = 0x250484u;
    // NOP
label_250488:
    // 0x250488: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x250488u;
    // CACHE instruction (ignored)
label_25048c:
    // 0x25048c: 0x0  nop
    ctx->pc = 0x25048cu;
    // NOP
label_250490:
    // 0x250490: 0x0  nop
    ctx->pc = 0x250490u;
    // NOP
label_250494:
    // 0x250494: 0x0  nop
    ctx->pc = 0x250494u;
    // NOP
label_250498:
    // 0x250498: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x250498u;
    // CACHE instruction (ignored)
label_25049c:
    // 0x25049c: 0x0  nop
    ctx->pc = 0x25049cu;
    // NOP
label_2504a0:
    // 0x2504a0: 0x0  nop
    ctx->pc = 0x2504a0u;
    // NOP
label_2504a4:
    // 0x2504a4: 0x0  nop
    ctx->pc = 0x2504a4u;
    // NOP
label_2504a8:
    // 0x2504a8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2504a8u;
    // CACHE instruction (ignored)
label_2504ac:
    // 0x2504ac: 0x0  nop
    ctx->pc = 0x2504acu;
    // NOP
label_2504b0:
    // 0x2504b0: 0x0  nop
    ctx->pc = 0x2504b0u;
    // NOP
label_2504b4:
    // 0x2504b4: 0x0  nop
    ctx->pc = 0x2504b4u;
    // NOP
label_2504b8:
    // 0x2504b8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2504b8u;
    // CACHE instruction (ignored)
label_2504bc:
    // 0x2504bc: 0x0  nop
    ctx->pc = 0x2504bcu;
    // NOP
label_2504c0:
    // 0x2504c0: 0x0  nop
    ctx->pc = 0x2504c0u;
    // NOP
label_2504c4:
    // 0x2504c4: 0x0  nop
    ctx->pc = 0x2504c4u;
    // NOP
label_2504c8:
    // 0x2504c8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2504c8u;
    // CACHE instruction (ignored)
label_2504cc:
    // 0x2504cc: 0x0  nop
    ctx->pc = 0x2504ccu;
    // NOP
label_2504d0:
    // 0x2504d0: 0x0  nop
    ctx->pc = 0x2504d0u;
    // NOP
label_2504d4:
    // 0x2504d4: 0x0  nop
    ctx->pc = 0x2504d4u;
    // NOP
label_2504d8:
    // 0x2504d8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2504d8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2504dc:
    // 0x2504dc: 0x0  nop
    ctx->pc = 0x2504dcu;
    // NOP
label_2504e0:
    // 0x2504e0: 0x0  nop
    ctx->pc = 0x2504e0u;
    // NOP
label_2504e4:
    // 0x2504e4: 0x0  nop
    ctx->pc = 0x2504e4u;
    // NOP
label_2504e8:
    // 0x2504e8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2504e8u;
    // CACHE instruction (ignored)
label_2504ec:
    // 0x2504ec: 0x0  nop
    ctx->pc = 0x2504ecu;
    // NOP
label_2504f0:
    // 0x2504f0: 0x0  nop
    ctx->pc = 0x2504f0u;
    // NOP
label_2504f4:
    // 0x2504f4: 0x0  nop
    ctx->pc = 0x2504f4u;
    // NOP
label_2504f8:
    // 0x2504f8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2504f8u;
    // CACHE instruction (ignored)
label_2504fc:
    // 0x2504fc: 0x0  nop
    ctx->pc = 0x2504fcu;
    // NOP
label_250500:
    // 0x250500: 0x0  nop
    ctx->pc = 0x250500u;
    // NOP
label_250504:
    // 0x250504: 0x0  nop
    ctx->pc = 0x250504u;
    // NOP
label_250508:
    // 0x250508: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x250508u;
    // CACHE instruction (ignored)
label_25050c:
    // 0x25050c: 0x0  nop
    ctx->pc = 0x25050cu;
    // NOP
label_250510:
    // 0x250510: 0x0  nop
    ctx->pc = 0x250510u;
    // NOP
label_250514:
    // 0x250514: 0x0  nop
    ctx->pc = 0x250514u;
    // NOP
label_250518:
    // 0x250518: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x250518u;
    // CACHE instruction (ignored)
label_25051c:
    // 0x25051c: 0x0  nop
    ctx->pc = 0x25051cu;
    // NOP
label_250520:
    // 0x250520: 0x0  nop
    ctx->pc = 0x250520u;
    // NOP
label_250524:
    // 0x250524: 0x0  nop
    ctx->pc = 0x250524u;
    // NOP
label_250528:
    // 0x250528: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x250528u;
    // CACHE instruction (ignored)
label_25052c:
    // 0x25052c: 0x0  nop
    ctx->pc = 0x25052cu;
    // NOP
label_250530:
    // 0x250530: 0x0  nop
    ctx->pc = 0x250530u;
    // NOP
label_250534:
    // 0x250534: 0x0  nop
    ctx->pc = 0x250534u;
    // NOP
label_250538:
    // 0x250538: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x250538u;
    // CACHE instruction (ignored)
label_25053c:
    // 0x25053c: 0x0  nop
    ctx->pc = 0x25053cu;
    // NOP
label_250540:
    // 0x250540: 0x0  nop
    ctx->pc = 0x250540u;
    // NOP
label_250544:
    // 0x250544: 0x0  nop
    ctx->pc = 0x250544u;
    // NOP
label_250548:
    // 0x250548: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x250548u;
    // CACHE instruction (ignored)
label_25054c:
    // 0x25054c: 0x0  nop
    ctx->pc = 0x25054cu;
    // NOP
label_250550:
    // 0x250550: 0x44d08000  ctc1        $s0, $16
    ctx->pc = 0x250550u;
    // CTC1 to FCR16 ignored
label_250554:
    // 0x250554: 0x44ebc000  .word       0x44EBC000                   # INVALID     $a3, $t3, -0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x250554u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x250554 raw=0x44EBC000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250558:
    // 0x250558: 0x0  nop
    ctx->pc = 0x250558u;
    // NOP
label_25055c:
    // 0x25055c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x25055cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x25055C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250560:
    // 0x250560: 0x4517c000  .word       0x4517C000                   # INVALID     $t0, $s7, -0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x250560u;
    // FPU branch instruction - handled elsewhere
label_250564:
    // 0x250564: 0x450a2000  .word       0x450A2000                   # INVALID     $t0, $t2, 0x2000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x250564u;
    // FPU branch instruction - handled elsewhere
label_250568:
    // 0x250568: 0x0  nop
    ctx->pc = 0x250568u;
    // NOP
label_25056c:
    // 0x25056c: 0x463b8000  .word       0x463B8000                   # INVALID     $s1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x25056cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x0 at 0x25056C raw=0x463B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250570:
    // 0x250570: 0x45000000  bc1f        . + 4 + (0x0 << 2)
label_250574:
    if (ctx->pc == 0x250574u) {
        ctx->pc = 0x250574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250570u;
        // 0x250574: 0x45000000  bc1f        . + 4 + (0x0 << 2) (Delay Slot)
        // FPU branch instruction - handled elsewhere
        ctx->in_delay_slot = false;
        ctx->pc = 0x250578u;
        goto label_250578;
    }
    ctx->pc = 0x250570u;
    {
        const bool branch_taken_0x250570 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250570u;
        // 0x250574: 0x45000000  bc1f        . + 4 + (0x0 << 2) (Delay Slot)
        // FPU branch instruction - handled elsewhere
        ctx->in_delay_slot = false;
        if (branch_taken_0x250570) {
            ctx->pc = 0x250574u;
            goto label_250574;
        }
    }
    ctx->pc = 0x250578u;
label_250578:
    // 0x250578: 0x0  nop
    ctx->pc = 0x250578u;
    // NOP
label_25057c:
    // 0x25057c: 0x0  nop
    ctx->pc = 0x25057cu;
    // NOP
label_250580:
    // 0x250580: 0x44d08000  ctc1        $s0, $16
    ctx->pc = 0x250580u;
    // CTC1 to FCR16 ignored
label_250584:
    // 0x250584: 0x44ebc000  .word       0x44EBC000                   # INVALID     $a3, $t3, -0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x250584u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x250584 raw=0x44EBC000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250588:
    // 0x250588: 0x0  nop
    ctx->pc = 0x250588u;
    // NOP
label_25058c:
    // 0x25058c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x25058cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x25058C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250590:
    // 0x250590: 0x4517c000  .word       0x4517C000                   # INVALID     $t0, $s7, -0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x250590u;
    // FPU branch instruction - handled elsewhere
label_250594:
    // 0x250594: 0x450a2000  .word       0x450A2000                   # INVALID     $t0, $t2, 0x2000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x250594u;
    // FPU branch instruction - handled elsewhere
label_250598:
    // 0x250598: 0x0  nop
    ctx->pc = 0x250598u;
    // NOP
label_25059c:
    // 0x25059c: 0x463b8000  .word       0x463B8000                   # INVALID     $s1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x25059cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x0 at 0x25059C raw=0x463B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2505a0:
    // 0x2505a0: 0x45000000  bc1f        . + 4 + (0x0 << 2)
label_2505a4:
    if (ctx->pc == 0x2505A4u) {
        ctx->pc = 0x2505A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505A0u;
        // 0x2505a4: 0x45000000  bc1f        . + 4 + (0x0 << 2) (Delay Slot)
        // FPU branch instruction - handled elsewhere
        ctx->in_delay_slot = false;
        ctx->pc = 0x2505A8u;
        goto label_2505a8;
    }
    ctx->pc = 0x2505A0u;
    {
        const bool branch_taken_0x2505a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2505A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505A0u;
        // 0x2505a4: 0x45000000  bc1f        . + 4 + (0x0 << 2) (Delay Slot)
        // FPU branch instruction - handled elsewhere
        ctx->in_delay_slot = false;
        if (branch_taken_0x2505a0) {
            ctx->pc = 0x2505A4u;
            goto label_2505a4;
        }
    }
    ctx->pc = 0x2505A8u;
label_2505a8:
    // 0x2505a8: 0x0  nop
    ctx->pc = 0x2505a8u;
    // NOP
label_2505ac:
    // 0x2505ac: 0x0  nop
    ctx->pc = 0x2505acu;
    // NOP
label_2505b0:
    // 0x2505b0: 0x44d08000  ctc1        $s0, $16
    ctx->pc = 0x2505b0u;
    // CTC1 to FCR16 ignored
label_2505b4:
    // 0x2505b4: 0x44ebc000  .word       0x44EBC000                   # INVALID     $a3, $t3, -0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2505b4u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x2505B4 raw=0x44EBC000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2505b8:
    // 0x2505b8: 0x0  nop
    ctx->pc = 0x2505b8u;
    // NOP
label_2505bc:
    // 0x2505bc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2505bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x2505BC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2505c0:
    // 0x2505c0: 0x4517c000  .word       0x4517C000                   # INVALID     $t0, $s7, -0x4000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2505c0u;
    // FPU branch instruction - handled elsewhere
label_2505c4:
    // 0x2505c4: 0x450a2000  .word       0x450A2000                   # INVALID     $t0, $t2, 0x2000 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2505c4u;
    // FPU branch instruction - handled elsewhere
label_2505c8:
    // 0x2505c8: 0x0  nop
    ctx->pc = 0x2505c8u;
    // NOP
label_2505cc:
    // 0x2505cc: 0x463b8000  .word       0x463B8000                   # INVALID     $s1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2505ccu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x0 at 0x2505CC raw=0x463B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2505d0:
    // 0x2505d0: 0x283  sra         $zero, $zero, 10
    ctx->pc = 0x2505d0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 10));
label_2505d4:
    // 0x2505d4: 0x295  .word       0x00000295                   # INVALID     $zero, $zero, 0x295 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2505d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2505D4 raw=0x00000295"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2505d8:
    // 0x2505d8: 0x2ac  .word       0x000002AC                   # dadd        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2505d8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2505dc:
    // 0x2505dc: 0x2be  dsrl32      $zero, $zero, 10
    ctx->pc = 0x2505dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 10));
label_2505e0:
    // 0x2505e0: 0x2d1  .word       0x000002D1                   # mthi        $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2505e0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2505e4:
    // 0x2505e4: 0x2e7  .word       0x000002E7                   # not         $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2505e4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2505e8:
    // 0x2505e8: 0x2fd  .word       0x000002FD                   # INVALID     $zero, $zero, 0x2FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2505e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2505E8 raw=0x000002FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2505ec:
    // 0x2505ec: 0x310  .word       0x00000310                   # mfhi        $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2505ecu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2505f0:
    // 0x2505f0: 0x327  .word       0x00000327                   # not         $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2505f0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2505f4:
    // 0x2505f4: 0x33c  dsll32      $zero, $zero, 12
    ctx->pc = 0x2505f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 12));
label_2505f8:
    // 0x2505f8: 0x34f  sync
    ctx->pc = 0x2505f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2505fc:
    // 0x2505fc: 0x364  .word       0x00000364                   # and         $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2505fcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_250600:
    // 0x250600: 0x377  .word       0x00000377                   # INVALID     $zero, $zero, 0x377 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x250600 raw=0x00000377"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250604:
    // 0x250604: 0x38d  break       0, 14
    ctx->pc = 0x250604u;
    runtime->handleBreak(rdram, ctx);
label_250608:
    // 0x250608: 0x3a4  .word       0x000003A4                   # and         $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250608u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25060c:
    // 0x25060c: 0x3bc  dsll32      $zero, $zero, 14
    ctx->pc = 0x25060cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 14));
label_250610:
    // 0x250610: 0x3ce  .word       0x000003CE                   # INVALID     $zero, $zero, 0x3CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250610u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x250610 raw=0x000003CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250614:
    // 0x250614: 0x3e3  .word       0x000003E3                   # negu        $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250614u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_250618:
    // 0x250618: 0x3f5  .word       0x000003F5                   # INVALID     $zero, $zero, 0x3F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250618u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x250618 raw=0x000003F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25061c:
    // 0x25061c: 0x408  .word       0x00000408                   # jr          $zero # 00000400 <InstrIdType: CPU_SPECIAL>
label_250620:
    if (ctx->pc == 0x250620u) {
        ctx->pc = 0x250620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25061Cu;
        // 0x250620: 0x41a  .word       0x0000041A                   # div         $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x250624u;
        goto label_250624;
    }
    ctx->pc = 0x25061Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x250620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25061Cu;
        // 0x250620: 0x41a  .word       0x0000041A                   # div         $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25061Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x250624u;
label_250624:
    // 0x250624: 0x42d  .word       0x0000042D                   # daddu       $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250624u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250628:
    // 0x250628: 0x442  srl         $zero, $zero, 17
    ctx->pc = 0x250628u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 17));
label_25062c:
    // 0x25062c: 0x0  nop
    ctx->pc = 0x25062cu;
    // NOP
label_250630:
    // 0x250630: 0x286  .word       0x00000286                   # srlv        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250630u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250634:
    // 0x250634: 0x298  .word       0x00000298                   # mult        $zero, $zero, $zero # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x250634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_250638:
    // 0x250638: 0x2ad  .word       0x000002AD                   # daddu       $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250638u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25063c:
    // 0x25063c: 0x2bf  dsra32      $zero, $zero, 10
    ctx->pc = 0x25063cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 10));
label_250640:
    // 0x250640: 0x2d2  .word       0x000002D2                   # mflo        $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250640u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_250644:
    // 0x250644: 0x2ed  .word       0x000002ED                   # daddu       $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250644u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250648:
    // 0x250648: 0x300  sll         $zero, $zero, 12
    ctx->pc = 0x250648u;
    
label_25064c:
    // 0x25064c: 0x313  .word       0x00000313                   # mtlo        $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25064cu;
    ctx->lo = GPR_U64(ctx, 0);
label_250650:
    // 0x250650: 0x32a  .word       0x0000032A                   # slt         $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250650u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_250654:
    // 0x250654: 0x33f  dsra32      $zero, $zero, 12
    ctx->pc = 0x250654u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 12));
label_250658:
    // 0x250658: 0x355  .word       0x00000355                   # INVALID     $zero, $zero, 0x355 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250658u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x250658 raw=0x00000355"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25065c:
    // 0x25065c: 0x36a  .word       0x0000036A                   # slt         $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25065cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_250660:
    // 0x250660: 0x37a  dsrl        $zero, $zero, 13
    ctx->pc = 0x250660u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 13);
label_250664:
    // 0x250664: 0x38e  .word       0x0000038E                   # INVALID     $zero, $zero, 0x38E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250664u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x250664 raw=0x0000038E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250668:
    // 0x250668: 0x3a5  .word       0x000003A5                   # move        $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250668u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25066c:
    // 0x25066c: 0x3bf  dsra32      $zero, $zero, 14
    ctx->pc = 0x25066cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 14));
label_250670:
    // 0x250670: 0x3cf  sync
    ctx->pc = 0x250670u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_250674:
    // 0x250674: 0x3e6  .word       0x000003E6                   # xor         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250674u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_250678:
    // 0x250678: 0x3f8  dsll        $zero, $zero, 15
    ctx->pc = 0x250678u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 15);
label_25067c:
    // 0x25067c: 0x40e  .word       0x0000040E                   # INVALID     $zero, $zero, 0x40E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25067cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25067C raw=0x0000040E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250680:
    // 0x250680: 0x41d  .word       0x0000041D                   # dmultu      $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x250680 raw=0x0000041D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250684:
    // 0x250684: 0x430  tge         $zero, $zero, 16
    ctx->pc = 0x250684u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250688:
    // 0x250688: 0x445  .word       0x00000445                   # INVALID     $zero, $zero, 0x445 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250688u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250688 raw=0x00000445"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25068c:
    // 0x25068c: 0x0  nop
    ctx->pc = 0x25068cu;
    // NOP
label_250690:
    // 0x250690: 0x286  .word       0x00000286                   # srlv        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250690u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250694:
    // 0x250694: 0x29c  .word       0x0000029C                   # dmult       $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250694u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x250694 raw=0x0000029C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250698:
    // 0x250698: 0x2ad  .word       0x000002AD                   # daddu       $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250698u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25069c:
    // 0x25069c: 0x2bf  dsra32      $zero, $zero, 10
    ctx->pc = 0x25069cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 10));
label_2506a0:
    // 0x2506a0: 0x2d8  .word       0x000002D8                   # mult        $zero, $zero, $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2506a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2506a4:
    // 0x2506a4: 0x2ed  .word       0x000002ED                   # daddu       $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2506a4u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2506a8:
    // 0x2506a8: 0x300  sll         $zero, $zero, 12
    ctx->pc = 0x2506a8u;
    
label_2506ac:
    // 0x2506ac: 0x317  .word       0x00000317                   # dsrav       $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2506acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2506b0:
    // 0x2506b0: 0x32f  .word       0x0000032F                   # dsubu       $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2506b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2506b4:
    // 0x2506b4: 0x33f  dsra32      $zero, $zero, 12
    ctx->pc = 0x2506b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 12));
label_2506b8:
    // 0x2506b8: 0x356  .word       0x00000356                   # dsrlv       $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2506b8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2506bc:
    // 0x2506bc: 0x36a  .word       0x0000036A                   # slt         $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2506bcu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2506c0:
    // 0x2506c0: 0x37e  dsrl32      $zero, $zero, 13
    ctx->pc = 0x2506c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 13));
label_2506c4:
    // 0x2506c4: 0x394  .word       0x00000394                   # dsllv       $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2506c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2506c8:
    // 0x2506c8: 0x3ac  .word       0x000003AC                   # dadd        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2506c8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2506cc:
    // 0x2506cc: 0x3bf  dsra32      $zero, $zero, 14
    ctx->pc = 0x2506ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 14));
label_2506d0:
    // 0x2506d0: 0x3d5  .word       0x000003D5                   # INVALID     $zero, $zero, 0x3D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2506d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2506D0 raw=0x000003D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2506d4:
    // 0x2506d4: 0x3e6  .word       0x000003E6                   # xor         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2506d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2506d8:
    // 0x2506d8: 0x3f8  dsll        $zero, $zero, 15
    ctx->pc = 0x2506d8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 15);
label_2506dc:
    // 0x2506dc: 0x40e  .word       0x0000040E                   # INVALID     $zero, $zero, 0x40E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2506dcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2506DC raw=0x0000040E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2506e0:
    // 0x2506e0: 0x41d  .word       0x0000041D                   # dmultu      $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2506e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2506E0 raw=0x0000041D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2506e4:
    // 0x2506e4: 0x434  teq         $zero, $zero, 16
    ctx->pc = 0x2506e4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2506e8:
    // 0x2506e8: 0x445  .word       0x00000445                   # INVALID     $zero, $zero, 0x445 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2506e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2506E8 raw=0x00000445"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2506ec:
    // 0x2506ec: 0x0  nop
    ctx->pc = 0x2506ecu;
    // NOP
label_2506f0:
    // 0x2506f0: 0x286  .word       0x00000286                   # srlv        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2506f0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2506f4:
    // 0x2506f4: 0x298  .word       0x00000298                   # mult        $zero, $zero, $zero # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2506f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2506f8:
    // 0x2506f8: 0x2ad  .word       0x000002AD                   # daddu       $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2506f8u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2506fc:
    // 0x2506fc: 0x2bf  dsra32      $zero, $zero, 10
    ctx->pc = 0x2506fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 10));
label_250700:
    // 0x250700: 0x2d2  .word       0x000002D2                   # mflo        $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250700u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_250704:
    // 0x250704: 0x2ed  .word       0x000002ED                   # daddu       $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250704u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250708:
    // 0x250708: 0x300  sll         $zero, $zero, 12
    ctx->pc = 0x250708u;
    
label_25070c:
    // 0x25070c: 0x313  .word       0x00000313                   # mtlo        $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25070cu;
    ctx->lo = GPR_U64(ctx, 0);
label_250710:
    // 0x250710: 0x32a  .word       0x0000032A                   # slt         $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250710u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_250714:
    // 0x250714: 0x33f  dsra32      $zero, $zero, 12
    ctx->pc = 0x250714u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 12));
label_250718:
    // 0x250718: 0x355  .word       0x00000355                   # INVALID     $zero, $zero, 0x355 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250718u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x250718 raw=0x00000355"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25071c:
    // 0x25071c: 0x36a  .word       0x0000036A                   # slt         $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25071cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_250720:
    // 0x250720: 0x37a  dsrl        $zero, $zero, 13
    ctx->pc = 0x250720u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 13);
label_250724:
    // 0x250724: 0x38e  .word       0x0000038E                   # INVALID     $zero, $zero, 0x38E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250724u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x250724 raw=0x0000038E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250728:
    // 0x250728: 0x3a5  .word       0x000003A5                   # move        $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250728u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25072c:
    // 0x25072c: 0x3bf  dsra32      $zero, $zero, 14
    ctx->pc = 0x25072cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 14));
label_250730:
    // 0x250730: 0x3cf  sync
    ctx->pc = 0x250730u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_250734:
    // 0x250734: 0x3e6  .word       0x000003E6                   # xor         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250734u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_250738:
    // 0x250738: 0x979  .word       0x00000979                   # INVALID     $zero, $zero, 0x979 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250738u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x250738 raw=0x00000979"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25073c:
    // 0x25073c: 0x40e  .word       0x0000040E                   # INVALID     $zero, $zero, 0x40E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25073cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25073C raw=0x0000040E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250740:
    // 0x250740: 0x41d  .word       0x0000041D                   # dmultu      $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x250740 raw=0x0000041D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250744:
    // 0x250744: 0x430  tge         $zero, $zero, 16
    ctx->pc = 0x250744u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250748:
    // 0x250748: 0x445  .word       0x00000445                   # INVALID     $zero, $zero, 0x445 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250748u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x250748 raw=0x00000445"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25074c:
    // 0x25074c: 0x0  nop
    ctx->pc = 0x25074cu;
    // NOP
label_250750:
    // 0x250750: 0x287  .word       0x00000287                   # srav        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250750u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250754:
    // 0x250754: 0x299  .word       0x00000299                   # multu       $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250754u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_250758:
    // 0x250758: 0x2ae  .word       0x000002AE                   # dsub        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250758u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_25075c:
    // 0x25075c: 0x2c0  sll         $zero, $zero, 11
    ctx->pc = 0x25075cu;
    
label_250760:
    // 0x250760: 0x2d3  .word       0x000002D3                   # mtlo        $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250760u;
    ctx->lo = GPR_U64(ctx, 0);
label_250764:
    // 0x250764: 0x2e9  .word       0x000002E9                   # mtsa        $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x250764u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_250768:
    // 0x250768: 0x301  .word       0x00000301                   # INVALID     $zero, $zero, 0x301 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250768u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250768 raw=0x00000301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25076c:
    // 0x25076c: 0x314  .word       0x00000314                   # dsllv       $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25076cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_250770:
    // 0x250770: 0x32b  .word       0x0000032B                   # sltu        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250770u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_250774:
    // 0x250774: 0x340  sll         $zero, $zero, 13
    ctx->pc = 0x250774u;
    
label_250778:
    // 0x250778: 0x352  .word       0x00000352                   # mflo        $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250778u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_25077c:
    // 0x25077c: 0x367  .word       0x00000367                   # not         $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25077cu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_250780:
    // 0x250780: 0x37b  dsra        $zero, $zero, 13
    ctx->pc = 0x250780u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 13);
label_250784:
    // 0x250784: 0x38f  sync
    ctx->pc = 0x250784u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_250788:
    // 0x250788: 0x3a6  .word       0x000003A6                   # xor         $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250788u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25078c:
    // 0x25078c: 0x3c0  sll         $zero, $zero, 15
    ctx->pc = 0x25078cu;
    
label_250790:
    // 0x250790: 0x3d0  .word       0x000003D0                   # mfhi        $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250790u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_250794:
    // 0x250794: 0x3e7  .word       0x000003E7                   # not         $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250794u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_250798:
    // 0x250798: 0x3f9  .word       0x000003F9                   # INVALID     $zero, $zero, 0x3F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250798u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x250798 raw=0x000003F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25079c:
    // 0x25079c: 0x409  .word       0x00000409                   # jalr        $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
label_2507a0:
    if (ctx->pc == 0x2507A0u) {
        ctx->pc = 0x2507A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25079Cu;
        // 0x2507a0: 0x41e  .word       0x0000041E                   # ddiv        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2507A0 raw=0x0000041E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2507A4u;
        goto label_2507a4;
    }
    ctx->pc = 0x25079Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2507A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25079Cu;
        // 0x2507a0: 0x41e  .word       0x0000041E                   # ddiv        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2507A0 raw=0x0000041E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25079Cu, 0x2507A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2507A4u;
label_2507a4:
    // 0x2507a4: 0x431  tgeu        $zero, $zero, 16
    ctx->pc = 0x2507a4u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2507a8:
    // 0x2507a8: 0x448  .word       0x00000448                   # jr          $zero # 00000440 <InstrIdType: CPU_SPECIAL>
label_2507ac:
    if (ctx->pc == 0x2507ACu) {
        ctx->pc = 0x2507B0u;
        goto label_2507b0;
    }
    ctx->pc = 0x2507A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2507A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2507B0u;
label_2507b0:
    // 0x2507b0: 0x287  .word       0x00000287                   # srav        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2507b0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2507b4:
    // 0x2507b4: 0x29d  .word       0x0000029D                   # dmultu      $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2507b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2507B4 raw=0x0000029D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2507b8:
    // 0x2507b8: 0x2ae  .word       0x000002AE                   # dsub        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2507b8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2507bc:
    // 0x2507bc: 0x2c0  sll         $zero, $zero, 11
    ctx->pc = 0x2507bcu;
    
label_2507c0:
    // 0x2507c0: 0x2d9  .word       0x000002D9                   # multu       $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2507c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2507c4:
    // 0x2507c4: 0x2e9  .word       0x000002E9                   # mtsa        $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2507c4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2507c8:
    // 0x2507c8: 0x301  .word       0x00000301                   # INVALID     $zero, $zero, 0x301 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2507c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2507C8 raw=0x00000301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2507cc:
    // 0x2507cc: 0x314  .word       0x00000314                   # dsllv       $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2507ccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2507d0:
    // 0x2507d0: 0x32b  .word       0x0000032B                   # sltu        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2507d0u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2507d4:
    // 0x2507d4: 0x340  sll         $zero, $zero, 13
    ctx->pc = 0x2507d4u;
    
label_2507d8:
    // 0x2507d8: 0x352  .word       0x00000352                   # mflo        $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2507d8u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2507dc:
    // 0x2507dc: 0x367  .word       0x00000367                   # not         $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2507dcu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2507e0:
    // 0x2507e0: 0x37b  dsra        $zero, $zero, 13
    ctx->pc = 0x2507e0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 13);
label_2507e4:
    // 0x2507e4: 0x395  .word       0x00000395                   # INVALID     $zero, $zero, 0x395 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2507e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2507E4 raw=0x00000395"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2507e8:
    // 0x2507e8: 0x3af  .word       0x000003AF                   # dsubu       $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2507e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2507ec:
    // 0x2507ec: 0x3c0  sll         $zero, $zero, 15
    ctx->pc = 0x2507ecu;
    
label_2507f0:
    // 0x2507f0: 0x3d0  .word       0x000003D0                   # mfhi        $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2507f0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2507f4:
    // 0x2507f4: 0x3e7  .word       0x000003E7                   # not         $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2507f4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2507f8:
    // 0x2507f8: 0x3f9  .word       0x000003F9                   # INVALID     $zero, $zero, 0x3F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2507f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2507F8 raw=0x000003F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2507fc:
    // 0x2507fc: 0x409  .word       0x00000409                   # jalr        $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
label_250800:
    if (ctx->pc == 0x250800u) {
        ctx->pc = 0x250800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2507FCu;
        // 0x250800: 0x41e  .word       0x0000041E                   # ddiv        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x250800 raw=0x0000041E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x250804u;
        goto label_250804;
    }
    ctx->pc = 0x2507FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x250800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2507FCu;
        // 0x250800: 0x41e  .word       0x0000041E                   # ddiv        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x250800 raw=0x0000041E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2507FCu, 0x250804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250804u;
label_250804:
    // 0x250804: 0x431  tgeu        $zero, $zero, 16
    ctx->pc = 0x250804u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250808:
    // 0x250808: 0x448  .word       0x00000448                   # jr          $zero # 00000440 <InstrIdType: CPU_SPECIAL>
label_25080c:
    if (ctx->pc == 0x25080Cu) {
        ctx->pc = 0x250810u;
        goto label_250810;
    }
    ctx->pc = 0x250808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250808u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x250810u;
label_250810:
    // 0x250810: 0x287  .word       0x00000287                   # srav        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250810u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_250814:
    // 0x250814: 0x299  .word       0x00000299                   # multu       $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250814u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_250818:
    // 0x250818: 0x2ae  .word       0x000002AE                   # dsub        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250818u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_25081c:
    // 0x25081c: 0x2c0  sll         $zero, $zero, 11
    ctx->pc = 0x25081cu;
    
label_250820:
    // 0x250820: 0x2d3  .word       0x000002D3                   # mtlo        $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250820u;
    ctx->lo = GPR_U64(ctx, 0);
label_250824:
    // 0x250824: 0x2e9  .word       0x000002E9                   # mtsa        $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x250824u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_250828:
    // 0x250828: 0x301  .word       0x00000301                   # INVALID     $zero, $zero, 0x301 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250828u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250828 raw=0x00000301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25082c:
    // 0x25082c: 0x314  .word       0x00000314                   # dsllv       $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25082cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_250830:
    // 0x250830: 0x32b  .word       0x0000032B                   # sltu        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250830u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_250834:
    // 0x250834: 0x340  sll         $zero, $zero, 13
    ctx->pc = 0x250834u;
    
label_250838:
    // 0x250838: 0x352  .word       0x00000352                   # mflo        $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250838u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_25083c:
    // 0x25083c: 0x367  .word       0x00000367                   # not         $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25083cu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_250840:
    // 0x250840: 0x37b  dsra        $zero, $zero, 13
    ctx->pc = 0x250840u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 13);
label_250844:
    // 0x250844: 0x38f  sync
    ctx->pc = 0x250844u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_250848:
    // 0x250848: 0x3a6  .word       0x000003A6                   # xor         $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250848u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25084c:
    // 0x25084c: 0x3c0  sll         $zero, $zero, 15
    ctx->pc = 0x25084cu;
    
label_250850:
    // 0x250850: 0x3d0  .word       0x000003D0                   # mfhi        $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250850u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_250854:
    // 0x250854: 0x3e7  .word       0x000003E7                   # not         $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250854u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_250858:
    // 0x250858: 0x3f9  .word       0x000003F9                   # INVALID     $zero, $zero, 0x3F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250858u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x250858 raw=0x000003F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25085c:
    // 0x25085c: 0x409  .word       0x00000409                   # jalr        $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
label_250860:
    if (ctx->pc == 0x250860u) {
        ctx->pc = 0x250860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25085Cu;
        // 0x250860: 0x41e  .word       0x0000041E                   # ddiv        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x250860 raw=0x0000041E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x250864u;
        goto label_250864;
    }
    ctx->pc = 0x25085Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x250860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25085Cu;
        // 0x250860: 0x41e  .word       0x0000041E                   # ddiv        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x250860 raw=0x0000041E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25085Cu, 0x250864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250864u;
label_250864:
    // 0x250864: 0x431  tgeu        $zero, $zero, 16
    ctx->pc = 0x250864u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250868:
    // 0x250868: 0x448  .word       0x00000448                   # jr          $zero # 00000440 <InstrIdType: CPU_SPECIAL>
label_25086c:
    if (ctx->pc == 0x25086Cu) {
        ctx->pc = 0x250870u;
        goto label_250870;
    }
    ctx->pc = 0x250868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250868u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x250870u;
label_250870:
    // 0x250870: 0x288  .word       0x00000288                   # jr          $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_250874:
    if (ctx->pc == 0x250874u) {
        ctx->pc = 0x250874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250870u;
        // 0x250874: 0x29a  .word       0x0000029A                   # div         $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x250878u;
        goto label_250878;
    }
    ctx->pc = 0x250870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x250874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250870u;
        // 0x250874: 0x29a  .word       0x0000029A                   # div         $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250870u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x250878u;
label_250878:
    // 0x250878: 0x2b1  tgeu        $zero, $zero, 10
    ctx->pc = 0x250878u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25087c:
    // 0x25087c: 0x2c3  sra         $zero, $zero, 11
    ctx->pc = 0x25087cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 11));
label_250880:
    // 0x250880: 0x2d6  .word       0x000002D6                   # dsrlv       $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250880u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_250884:
    // 0x250884: 0x2e8  .word       0x000002E8                   # mfsa        $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x250884u;
    SET_GPR_U32(ctx, 0, ctx->sa);
    ctx->pc = 0x250888u;
    return;
}

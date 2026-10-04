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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part371(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x250888u: goto label_250888;
        case 0x25088cu: goto label_25088c;
        case 0x250890u: goto label_250890;
        case 0x250894u: goto label_250894;
        case 0x250898u: goto label_250898;
        case 0x25089cu: goto label_25089c;
        case 0x2508a0u: goto label_2508a0;
        case 0x2508a4u: goto label_2508a4;
        case 0x2508a8u: goto label_2508a8;
        case 0x2508acu: goto label_2508ac;
        case 0x2508b0u: goto label_2508b0;
        case 0x2508b4u: goto label_2508b4;
        case 0x2508b8u: goto label_2508b8;
        case 0x2508bcu: goto label_2508bc;
        case 0x2508c0u: goto label_2508c0;
        case 0x2508c4u: goto label_2508c4;
        case 0x2508c8u: goto label_2508c8;
        case 0x2508ccu: goto label_2508cc;
        case 0x2508d0u: goto label_2508d0;
        case 0x2508d4u: goto label_2508d4;
        case 0x2508d8u: goto label_2508d8;
        case 0x2508dcu: goto label_2508dc;
        case 0x2508e0u: goto label_2508e0;
        case 0x2508e4u: goto label_2508e4;
        case 0x2508e8u: goto label_2508e8;
        case 0x2508ecu: goto label_2508ec;
        case 0x2508f0u: goto label_2508f0;
        case 0x2508f4u: goto label_2508f4;
        case 0x2508f8u: goto label_2508f8;
        case 0x2508fcu: goto label_2508fc;
        case 0x250900u: goto label_250900;
        case 0x250904u: goto label_250904;
        case 0x250908u: goto label_250908;
        case 0x25090cu: goto label_25090c;
        case 0x250910u: goto label_250910;
        case 0x250914u: goto label_250914;
        case 0x250918u: goto label_250918;
        case 0x25091cu: goto label_25091c;
        case 0x250920u: goto label_250920;
        case 0x250924u: goto label_250924;
        case 0x250928u: goto label_250928;
        case 0x25092cu: goto label_25092c;
        case 0x250930u: goto label_250930;
        case 0x250934u: goto label_250934;
        case 0x250938u: goto label_250938;
        case 0x25093cu: goto label_25093c;
        case 0x250940u: goto label_250940;
        case 0x250944u: goto label_250944;
        case 0x250948u: goto label_250948;
        case 0x25094cu: goto label_25094c;
        case 0x250950u: goto label_250950;
        case 0x250954u: goto label_250954;
        case 0x250958u: goto label_250958;
        case 0x25095cu: goto label_25095c;
        case 0x250960u: goto label_250960;
        case 0x250964u: goto label_250964;
        case 0x250968u: goto label_250968;
        case 0x25096cu: goto label_25096c;
        case 0x250970u: goto label_250970;
        case 0x250974u: goto label_250974;
        case 0x250978u: goto label_250978;
        case 0x25097cu: goto label_25097c;
        case 0x250980u: goto label_250980;
        case 0x250984u: goto label_250984;
        case 0x250988u: goto label_250988;
        case 0x25098cu: goto label_25098c;
        case 0x250990u: goto label_250990;
        case 0x250994u: goto label_250994;
        case 0x250998u: goto label_250998;
        case 0x25099cu: goto label_25099c;
        case 0x2509a0u: goto label_2509a0;
        case 0x2509a4u: goto label_2509a4;
        case 0x2509a8u: goto label_2509a8;
        case 0x2509acu: goto label_2509ac;
        case 0x2509b0u: goto label_2509b0;
        case 0x2509b4u: goto label_2509b4;
        case 0x2509b8u: goto label_2509b8;
        case 0x2509bcu: goto label_2509bc;
        case 0x2509c0u: goto label_2509c0;
        case 0x2509c4u: goto label_2509c4;
        case 0x2509c8u: goto label_2509c8;
        case 0x2509ccu: goto label_2509cc;
        case 0x2509d0u: goto label_2509d0;
        case 0x2509d4u: goto label_2509d4;
        case 0x2509d8u: goto label_2509d8;
        case 0x2509dcu: goto label_2509dc;
        case 0x2509e0u: goto label_2509e0;
        case 0x2509e4u: goto label_2509e4;
        case 0x2509e8u: goto label_2509e8;
        case 0x2509ecu: goto label_2509ec;
        case 0x2509f0u: goto label_2509f0;
        case 0x2509f4u: goto label_2509f4;
        case 0x2509f8u: goto label_2509f8;
        case 0x2509fcu: goto label_2509fc;
        case 0x250a00u: goto label_250a00;
        case 0x250a04u: goto label_250a04;
        case 0x250a08u: goto label_250a08;
        case 0x250a0cu: goto label_250a0c;
        case 0x250a10u: goto label_250a10;
        case 0x250a14u: goto label_250a14;
        case 0x250a18u: goto label_250a18;
        case 0x250a1cu: goto label_250a1c;
        case 0x250a20u: goto label_250a20;
        case 0x250a24u: goto label_250a24;
        case 0x250a28u: goto label_250a28;
        case 0x250a2cu: goto label_250a2c;
        case 0x250a30u: goto label_250a30;
        case 0x250a34u: goto label_250a34;
        case 0x250a38u: goto label_250a38;
        case 0x250a3cu: goto label_250a3c;
        case 0x250a40u: goto label_250a40;
        case 0x250a44u: goto label_250a44;
        case 0x250a48u: goto label_250a48;
        case 0x250a4cu: goto label_250a4c;
        case 0x250a50u: goto label_250a50;
        case 0x250a54u: goto label_250a54;
        case 0x250a58u: goto label_250a58;
        case 0x250a5cu: goto label_250a5c;
        case 0x250a60u: goto label_250a60;
        case 0x250a64u: goto label_250a64;
        case 0x250a68u: goto label_250a68;
        case 0x250a6cu: goto label_250a6c;
        case 0x250a70u: goto label_250a70;
        case 0x250a74u: goto label_250a74;
        default: return;
    }

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
label_250888:
    // 0x250888: 0x302  srl         $zero, $zero, 12
    ctx->pc = 0x250888u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 12));
label_25088c:
    // 0x25088c: 0x315  .word       0x00000315                   # INVALID     $zero, $zero, 0x315 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25088cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25088C raw=0x00000315"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250890:
    // 0x250890: 0x32c  .word       0x0000032C                   # dadd        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250890u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_250894:
    // 0x250894: 0x341  .word       0x00000341                   # INVALID     $zero, $zero, 0x341 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250894u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250894 raw=0x00000341"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250898:
    // 0x250898: 0x353  .word       0x00000353                   # mtlo        $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250898u;
    ctx->lo = GPR_U64(ctx, 0);
label_25089c:
    // 0x25089c: 0x368  .word       0x00000368                   # mfsa        $zero # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25089cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2508a0:
    // 0x2508a0: 0x37c  dsll32      $zero, $zero, 13
    ctx->pc = 0x2508a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 13));
label_2508a4:
    // 0x2508a4: 0x392  .word       0x00000392                   # mflo        $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508a4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2508a8:
    // 0x2508a8: 0x3a9  .word       0x000003A9                   # mtsa        $zero # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2508a8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2508ac:
    // 0x2508ac: 0x3c1  .word       0x000003C1                   # INVALID     $zero, $zero, 0x3C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2508AC raw=0x000003C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2508b0:
    // 0x2508b0: 0x3d3  .word       0x000003D3                   # mtlo        $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508b0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2508b4:
    // 0x2508b4: 0x3e8  .word       0x000003E8                   # mfsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2508b4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2508b8:
    // 0x2508b8: 0x3fa  dsrl        $zero, $zero, 15
    ctx->pc = 0x2508b8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 15);
label_2508bc:
    // 0x2508bc: 0x40a  .word       0x0000040A                   # movz        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508bcu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2508c0:
    // 0x2508c0: 0x41f  .word       0x0000041F                   # ddivu       $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2508C0 raw=0x0000041F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2508c4:
    // 0x2508c4: 0x432  tlt         $zero, $zero, 16
    ctx->pc = 0x2508c4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2508c8:
    // 0x2508c8: 0x446  .word       0x00000446                   # srlv        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508c8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2508cc:
    // 0x2508cc: 0x0  nop
    ctx->pc = 0x2508ccu;
    // NOP
label_2508d0:
    // 0x2508d0: 0x289  .word       0x00000289                   # jalr        $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_2508d4:
    if (ctx->pc == 0x2508D4u) {
        ctx->pc = 0x2508D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508D0u;
        // 0x2508d4: 0x29b  .word       0x0000029B                   # divu        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2508D8u;
        goto label_2508d8;
    }
    ctx->pc = 0x2508D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2508D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508D0u;
        // 0x2508d4: 0x29b  .word       0x0000029B                   # divu        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2508D0u, 0x2508D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2508D8u;
label_2508d8:
    // 0x2508d8: 0x2b2  tlt         $zero, $zero, 10
    ctx->pc = 0x2508d8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2508dc:
    // 0x2508dc: 0x2c4  .word       0x000002C4                   # sllv        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508dcu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2508e0:
    // 0x2508e0: 0x2d7  .word       0x000002D7                   # dsrav       $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508e0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2508e4:
    // 0x2508e4: 0x2ea  .word       0x000002EA                   # slt         $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508e4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2508e8:
    // 0x2508e8: 0x303  sra         $zero, $zero, 12
    ctx->pc = 0x2508e8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 12));
label_2508ec:
    // 0x2508ec: 0x316  .word       0x00000316                   # dsrlv       $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508ecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2508f0:
    // 0x2508f0: 0x32d  .word       0x0000032D                   # daddu       $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508f0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2508f4:
    // 0x2508f4: 0x342  srl         $zero, $zero, 13
    ctx->pc = 0x2508f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 13));
label_2508f8:
    // 0x2508f8: 0x354  .word       0x00000354                   # dsllv       $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2508f8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2508fc:
    // 0x2508fc: 0x369  .word       0x00000369                   # mtsa        $zero # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2508fcu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_250900:
    // 0x250900: 0x37d  .word       0x0000037D                   # INVALID     $zero, $zero, 0x37D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250900u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x250900 raw=0x0000037D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250904:
    // 0x250904: 0x393  .word       0x00000393                   # mtlo        $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250904u;
    ctx->lo = GPR_U64(ctx, 0);
label_250908:
    // 0x250908: 0x3aa  .word       0x000003AA                   # slt         $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250908u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25090c:
    // 0x25090c: 0x3c2  srl         $zero, $zero, 15
    ctx->pc = 0x25090cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_250910:
    // 0x250910: 0x3d4  .word       0x000003D4                   # dsllv       $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250910u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_250914:
    // 0x250914: 0x3e9  .word       0x000003E9                   # mtsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x250914u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_250918:
    // 0x250918: 0x3fb  dsra        $zero, $zero, 15
    ctx->pc = 0x250918u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 15);
label_25091c:
    // 0x25091c: 0x40b  .word       0x0000040B                   # movn        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25091cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_250920:
    // 0x250920: 0x420  .word       0x00000420                   # add         $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250920u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_250924:
    // 0x250924: 0x433  tltu        $zero, $zero, 16
    ctx->pc = 0x250924u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250928:
    // 0x250928: 0x447  .word       0x00000447                   # srav        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250928u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25092c:
    // 0x25092c: 0x0  nop
    ctx->pc = 0x25092cu;
    // NOP
label_250930:
    // 0x250930: 0x289  .word       0x00000289                   # jalr        $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_250934:
    if (ctx->pc == 0x250934u) {
        ctx->pc = 0x250934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250930u;
        // 0x250934: 0x29b  .word       0x0000029B                   # divu        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x250938u;
        goto label_250938;
    }
    ctx->pc = 0x250930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x250934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250930u;
        // 0x250934: 0x29b  .word       0x0000029B                   # divu        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250930u, 0x250938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250938u;
label_250938:
    // 0x250938: 0x2b2  tlt         $zero, $zero, 10
    ctx->pc = 0x250938u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25093c:
    // 0x25093c: 0x2c5  .word       0x000002C5                   # INVALID     $zero, $zero, 0x2C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25093cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25093C raw=0x000002C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250940:
    // 0x250940: 0x2d7  .word       0x000002D7                   # dsrav       $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250940u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_250944:
    // 0x250944: 0x2ee  .word       0x000002EE                   # dsub        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250944u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_250948:
    // 0x250948: 0x303  sra         $zero, $zero, 12
    ctx->pc = 0x250948u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 12));
label_25094c:
    // 0x25094c: 0x316  .word       0x00000316                   # dsrlv       $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25094cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_250950:
    // 0x250950: 0x32e  .word       0x0000032E                   # dsub        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250950u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_250954:
    // 0x250954: 0x342  srl         $zero, $zero, 13
    ctx->pc = 0x250954u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 13));
label_250958:
    // 0x250958: 0x354  .word       0x00000354                   # dsllv       $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250958u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25095c:
    // 0x25095c: 0x369  .word       0x00000369                   # mtsa        $zero # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25095cu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_250960:
    // 0x250960: 0x37d  .word       0x0000037D                   # INVALID     $zero, $zero, 0x37D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x250960 raw=0x0000037D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250964:
    // 0x250964: 0x393  .word       0x00000393                   # mtlo        $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250964u;
    ctx->lo = GPR_U64(ctx, 0);
label_250968:
    // 0x250968: 0x3ab  .word       0x000003AB                   # sltu        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250968u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25096c:
    // 0x25096c: 0x3c2  srl         $zero, $zero, 15
    ctx->pc = 0x25096cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_250970:
    // 0x250970: 0x3d4  .word       0x000003D4                   # dsllv       $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250970u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_250974:
    // 0x250974: 0x3e9  .word       0x000003E9                   # mtsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x250974u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_250978:
    // 0x250978: 0x3fc  dsll32      $zero, $zero, 15
    ctx->pc = 0x250978u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 15));
label_25097c:
    // 0x25097c: 0x40b  .word       0x0000040B                   # movn        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25097cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_250980:
    // 0x250980: 0x420  .word       0x00000420                   # add         $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250980u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_250984:
    // 0x250984: 0x433  tltu        $zero, $zero, 16
    ctx->pc = 0x250984u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250988:
    // 0x250988: 0x447  .word       0x00000447                   # srav        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250988u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25098c:
    // 0x25098c: 0x0  nop
    ctx->pc = 0x25098cu;
    // NOP
label_250990:
    // 0x250990: 0x2ee  .word       0x000002EE                   # dsub        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250990u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_250994:
    // 0x250994: 0x2ef  .word       0x000002EF                   # dsubu       $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250994u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_250998:
    // 0x250998: 0x2f0  tge         $zero, $zero, 11
    ctx->pc = 0x250998u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25099c:
    // 0x25099c: 0x2f1  tgeu        $zero, $zero, 11
    ctx->pc = 0x25099cu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2509a0:
    // 0x2509a0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2509a0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2509a4:
    // 0x2509a4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2509a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2509a8:
    // 0x2509a8: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2509a8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2509ac:
    // 0x2509ac: 0x8  jr          $zero
label_2509b0:
    if (ctx->pc == 0x2509B0u) {
        ctx->pc = 0x2509B4u;
        goto label_2509b4;
    }
    ctx->pc = 0x2509ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2509ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2509B4u;
label_2509b4:
    // 0x2509b4: 0x12  mflo        $zero
    ctx->pc = 0x2509b4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2509b8:
    // 0x2509b8: 0x0  nop
    ctx->pc = 0x2509b8u;
    // NOP
label_2509bc:
    // 0x2509bc: 0x0  nop
    ctx->pc = 0x2509bcu;
    // NOP
label_2509c0:
    // 0x2509c0: 0xc0c00000  ll          $zero, 0x0($a2)
    ctx->pc = 0x2509c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2509c4:
    // 0x2509c4: 0xc2100000  ll          $s0, 0x0($s0)
    ctx->pc = 0x2509c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2509c8:
    // 0x2509c8: 0x43340000  .word       0x43340000                   # INVALID     $t9, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2509c8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2509C8 raw=0x43340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2509cc:
    // 0x2509cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2509ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2509d0:
    // 0x2509d0: 0xf  sync
    ctx->pc = 0x2509d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2509d4:
    // 0x2509d4: 0x13  mtlo        $zero
    ctx->pc = 0x2509d4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2509d8:
    // 0x2509d8: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2509d8u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2509dc:
    // 0x2509dc: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x2509dcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2509e0:
    // 0x2509e0: 0x0  nop
    ctx->pc = 0x2509e0u;
    // NOP
label_2509e4:
    // 0x2509e4: 0x0  nop
    ctx->pc = 0x2509e4u;
    // NOP
label_2509e8:
    // 0x2509e8: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x2509e8u;
    
label_2509ec:
    // 0x2509ec: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x2509ecu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2509f0:
    // 0x2509f0: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2509f0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2509f4:
    // 0x2509f4: 0x7c8  .word       0x000007C8                   # jr          $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
label_2509f8:
    if (ctx->pc == 0x2509F8u) {
        ctx->pc = 0x2509FCu;
        goto label_2509fc;
    }
    ctx->pc = 0x2509F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2509F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2509FCu;
label_2509fc:
    // 0x2509fc: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x2509fcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250a00:
    // 0x250a00: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x250a00u;
    
label_250a04:
    // 0x250a04: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x250a04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_250a08:
    // 0x250a08: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x250a08u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_250a0c:
    // 0x250a0c: 0x838  dsll        $at, $zero, 0
    ctx->pc = 0x250a0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 0);
label_250a10:
    // 0x250a10: 0x0  nop
    ctx->pc = 0x250a10u;
    // NOP
label_250a14:
    // 0x250a14: 0x0  nop
    ctx->pc = 0x250a14u;
    // NOP
label_250a18:
    // 0x250a18: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x250a18u;
    
label_250a1c:
    // 0x250a1c: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250a1cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_250a20:
    // 0x250a20: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x250a20u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_250a24:
    // 0x250a24: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x250a24u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_250a28:
    // 0x250a28: 0x0  nop
    ctx->pc = 0x250a28u;
    // NOP
label_250a2c:
    // 0x250a2c: 0x0  nop
    ctx->pc = 0x250a2cu;
    // NOP
label_250a30:
    // 0x250a30: 0x0  nop
    ctx->pc = 0x250a30u;
    // NOP
label_250a34:
    // 0x250a34: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x250a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_250a38:
    // 0x250a38: 0xc47a0000  lwc1        $f26, 0x0($v1)
    ctx->pc = 0x250a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_250a3c:
    // 0x250a3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x250a3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_250a40:
    // 0x250a40: 0x0  nop
    ctx->pc = 0x250a40u;
    // NOP
label_250a44:
    // 0x250a44: 0x0  nop
    ctx->pc = 0x250a44u;
    // NOP
label_250a48:
    // 0x250a48: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250a48u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250A48 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250a4c:
    // 0x250a4c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250a4cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x250A4C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250a50:
    // 0x250a50: 0x10  mfhi        $zero
    ctx->pc = 0x250a50u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_250a54:
    // 0x250a54: 0x11  mthi        $zero
    ctx->pc = 0x250a54u;
    ctx->hi = GPR_U64(ctx, 0);
label_250a58:
    // 0x250a58: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x250a58u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_250a5c:
    // 0x250a5c: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250a5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x250A5C raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_250a60:
    // 0x250a60: 0x11  mthi        $zero
    ctx->pc = 0x250a60u;
    ctx->hi = GPR_U64(ctx, 0);
label_250a64:
    // 0x250a64: 0x13  mtlo        $zero
    ctx->pc = 0x250a64u;
    ctx->lo = GPR_U64(ctx, 0);
label_250a68:
    // 0x250a68: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x250a68u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_250a6c:
    // 0x250a6c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x250a6cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_250a70:
    // 0x250a70: 0x10  mfhi        $zero
    ctx->pc = 0x250a70u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_250a74:
    // 0x250a74: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x250a74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x250A74 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x250a78u;
    return;
}

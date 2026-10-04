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


void FUN_0019b618_part273(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x220318u: goto label_220318;
        case 0x22031cu: goto label_22031c;
        case 0x220320u: goto label_220320;
        case 0x220324u: goto label_220324;
        case 0x220328u: goto label_220328;
        case 0x22032cu: goto label_22032c;
        case 0x220330u: goto label_220330;
        case 0x220334u: goto label_220334;
        case 0x220338u: goto label_220338;
        case 0x22033cu: goto label_22033c;
        case 0x220340u: goto label_220340;
        case 0x220344u: goto label_220344;
        case 0x220348u: goto label_220348;
        case 0x22034cu: goto label_22034c;
        case 0x220350u: goto label_220350;
        case 0x220354u: goto label_220354;
        case 0x220358u: goto label_220358;
        case 0x22035cu: goto label_22035c;
        case 0x220360u: goto label_220360;
        case 0x220364u: goto label_220364;
        case 0x220368u: goto label_220368;
        case 0x22036cu: goto label_22036c;
        case 0x220370u: goto label_220370;
        case 0x220374u: goto label_220374;
        case 0x220378u: goto label_220378;
        case 0x22037cu: goto label_22037c;
        case 0x220380u: goto label_220380;
        case 0x220384u: goto label_220384;
        case 0x220388u: goto label_220388;
        case 0x22038cu: goto label_22038c;
        case 0x220390u: goto label_220390;
        case 0x220394u: goto label_220394;
        case 0x220398u: goto label_220398;
        case 0x22039cu: goto label_22039c;
        case 0x2203a0u: goto label_2203a0;
        case 0x2203a4u: goto label_2203a4;
        case 0x2203a8u: goto label_2203a8;
        case 0x2203acu: goto label_2203ac;
        case 0x2203b0u: goto label_2203b0;
        case 0x2203b4u: goto label_2203b4;
        case 0x2203b8u: goto label_2203b8;
        case 0x2203bcu: goto label_2203bc;
        case 0x2203c0u: goto label_2203c0;
        case 0x2203c4u: goto label_2203c4;
        case 0x2203c8u: goto label_2203c8;
        case 0x2203ccu: goto label_2203cc;
        case 0x2203d0u: goto label_2203d0;
        case 0x2203d4u: goto label_2203d4;
        case 0x2203d8u: goto label_2203d8;
        case 0x2203dcu: goto label_2203dc;
        case 0x2203e0u: goto label_2203e0;
        case 0x2203e4u: goto label_2203e4;
        case 0x2203e8u: goto label_2203e8;
        case 0x2203ecu: goto label_2203ec;
        case 0x2203f0u: goto label_2203f0;
        case 0x2203f4u: goto label_2203f4;
        case 0x2203f8u: goto label_2203f8;
        case 0x2203fcu: goto label_2203fc;
        case 0x220400u: goto label_220400;
        case 0x220404u: goto label_220404;
        case 0x220408u: goto label_220408;
        case 0x22040cu: goto label_22040c;
        case 0x220410u: goto label_220410;
        case 0x220414u: goto label_220414;
        case 0x220418u: goto label_220418;
        case 0x22041cu: goto label_22041c;
        case 0x220420u: goto label_220420;
        case 0x220424u: goto label_220424;
        case 0x220428u: goto label_220428;
        case 0x22042cu: goto label_22042c;
        case 0x220430u: goto label_220430;
        case 0x220434u: goto label_220434;
        case 0x220438u: goto label_220438;
        case 0x22043cu: goto label_22043c;
        case 0x220440u: goto label_220440;
        case 0x220444u: goto label_220444;
        case 0x220448u: goto label_220448;
        case 0x22044cu: goto label_22044c;
        case 0x220450u: goto label_220450;
        case 0x220454u: goto label_220454;
        case 0x220458u: goto label_220458;
        case 0x22045cu: goto label_22045c;
        case 0x220460u: goto label_220460;
        case 0x220464u: goto label_220464;
        case 0x220468u: goto label_220468;
        case 0x22046cu: goto label_22046c;
        case 0x220470u: goto label_220470;
        case 0x220474u: goto label_220474;
        case 0x220478u: goto label_220478;
        case 0x22047cu: goto label_22047c;
        case 0x220480u: goto label_220480;
        case 0x220484u: goto label_220484;
        case 0x220488u: goto label_220488;
        case 0x22048cu: goto label_22048c;
        case 0x220490u: goto label_220490;
        case 0x220494u: goto label_220494;
        case 0x220498u: goto label_220498;
        case 0x22049cu: goto label_22049c;
        case 0x2204a0u: goto label_2204a0;
        case 0x2204a4u: goto label_2204a4;
        case 0x2204a8u: goto label_2204a8;
        case 0x2204acu: goto label_2204ac;
        case 0x2204b0u: goto label_2204b0;
        case 0x2204b4u: goto label_2204b4;
        case 0x2204b8u: goto label_2204b8;
        case 0x2204bcu: goto label_2204bc;
        case 0x2204c0u: goto label_2204c0;
        case 0x2204c4u: goto label_2204c4;
        case 0x2204c8u: goto label_2204c8;
        case 0x2204ccu: goto label_2204cc;
        case 0x2204d0u: goto label_2204d0;
        case 0x2204d4u: goto label_2204d4;
        case 0x2204d8u: goto label_2204d8;
        case 0x2204dcu: goto label_2204dc;
        case 0x2204e0u: goto label_2204e0;
        case 0x2204e4u: goto label_2204e4;
        case 0x2204e8u: goto label_2204e8;
        case 0x2204ecu: goto label_2204ec;
        case 0x2204f0u: goto label_2204f0;
        case 0x2204f4u: goto label_2204f4;
        case 0x2204f8u: goto label_2204f8;
        case 0x2204fcu: goto label_2204fc;
        case 0x220500u: goto label_220500;
        case 0x220504u: goto label_220504;
        case 0x220508u: goto label_220508;
        case 0x22050cu: goto label_22050c;
        case 0x220510u: goto label_220510;
        case 0x220514u: goto label_220514;
        case 0x220518u: goto label_220518;
        case 0x22051cu: goto label_22051c;
        case 0x220520u: goto label_220520;
        case 0x220524u: goto label_220524;
        case 0x220528u: goto label_220528;
        case 0x22052cu: goto label_22052c;
        case 0x220530u: goto label_220530;
        case 0x220534u: goto label_220534;
        case 0x220538u: goto label_220538;
        case 0x22053cu: goto label_22053c;
        case 0x220540u: goto label_220540;
        case 0x220544u: goto label_220544;
        case 0x220548u: goto label_220548;
        case 0x22054cu: goto label_22054c;
        case 0x220550u: goto label_220550;
        case 0x220554u: goto label_220554;
        case 0x220558u: goto label_220558;
        case 0x22055cu: goto label_22055c;
        case 0x220560u: goto label_220560;
        case 0x220564u: goto label_220564;
        case 0x220568u: goto label_220568;
        case 0x22056cu: goto label_22056c;
        case 0x220570u: goto label_220570;
        case 0x220574u: goto label_220574;
        case 0x220578u: goto label_220578;
        case 0x22057cu: goto label_22057c;
        case 0x220580u: goto label_220580;
        case 0x220584u: goto label_220584;
        case 0x220588u: goto label_220588;
        case 0x22058cu: goto label_22058c;
        case 0x220590u: goto label_220590;
        case 0x220594u: goto label_220594;
        case 0x220598u: goto label_220598;
        case 0x22059cu: goto label_22059c;
        case 0x2205a0u: goto label_2205a0;
        case 0x2205a4u: goto label_2205a4;
        case 0x2205a8u: goto label_2205a8;
        case 0x2205acu: goto label_2205ac;
        case 0x2205b0u: goto label_2205b0;
        case 0x2205b4u: goto label_2205b4;
        case 0x2205b8u: goto label_2205b8;
        case 0x2205bcu: goto label_2205bc;
        case 0x2205c0u: goto label_2205c0;
        case 0x2205c4u: goto label_2205c4;
        case 0x2205c8u: goto label_2205c8;
        case 0x2205ccu: goto label_2205cc;
        case 0x2205d0u: goto label_2205d0;
        case 0x2205d4u: goto label_2205d4;
        case 0x2205d8u: goto label_2205d8;
        case 0x2205dcu: goto label_2205dc;
        case 0x2205e0u: goto label_2205e0;
        case 0x2205e4u: goto label_2205e4;
        case 0x2205e8u: goto label_2205e8;
        case 0x2205ecu: goto label_2205ec;
        case 0x2205f0u: goto label_2205f0;
        case 0x2205f4u: goto label_2205f4;
        case 0x2205f8u: goto label_2205f8;
        case 0x2205fcu: goto label_2205fc;
        case 0x220600u: goto label_220600;
        case 0x220604u: goto label_220604;
        case 0x220608u: goto label_220608;
        case 0x22060cu: goto label_22060c;
        case 0x220610u: goto label_220610;
        case 0x220614u: goto label_220614;
        case 0x220618u: goto label_220618;
        case 0x22061cu: goto label_22061c;
        case 0x220620u: goto label_220620;
        case 0x220624u: goto label_220624;
        case 0x220628u: goto label_220628;
        case 0x22062cu: goto label_22062c;
        case 0x220630u: goto label_220630;
        case 0x220634u: goto label_220634;
        case 0x220638u: goto label_220638;
        case 0x22063cu: goto label_22063c;
        case 0x220640u: goto label_220640;
        case 0x220644u: goto label_220644;
        case 0x220648u: goto label_220648;
        case 0x22064cu: goto label_22064c;
        case 0x220650u: goto label_220650;
        case 0x220654u: goto label_220654;
        case 0x220658u: goto label_220658;
        case 0x22065cu: goto label_22065c;
        case 0x220660u: goto label_220660;
        case 0x220664u: goto label_220664;
        case 0x220668u: goto label_220668;
        case 0x22066cu: goto label_22066c;
        case 0x220670u: goto label_220670;
        case 0x220674u: goto label_220674;
        case 0x220678u: goto label_220678;
        case 0x22067cu: goto label_22067c;
        case 0x220680u: goto label_220680;
        case 0x220684u: goto label_220684;
        case 0x220688u: goto label_220688;
        case 0x22068cu: goto label_22068c;
        case 0x220690u: goto label_220690;
        case 0x220694u: goto label_220694;
        case 0x220698u: goto label_220698;
        case 0x22069cu: goto label_22069c;
        case 0x2206a0u: goto label_2206a0;
        case 0x2206a4u: goto label_2206a4;
        case 0x2206a8u: goto label_2206a8;
        case 0x2206acu: goto label_2206ac;
        case 0x2206b0u: goto label_2206b0;
        case 0x2206b4u: goto label_2206b4;
        case 0x2206b8u: goto label_2206b8;
        case 0x2206bcu: goto label_2206bc;
        case 0x2206c0u: goto label_2206c0;
        case 0x2206c4u: goto label_2206c4;
        case 0x2206c8u: goto label_2206c8;
        case 0x2206ccu: goto label_2206cc;
        case 0x2206d0u: goto label_2206d0;
        case 0x2206d4u: goto label_2206d4;
        case 0x2206d8u: goto label_2206d8;
        case 0x2206dcu: goto label_2206dc;
        case 0x2206e0u: goto label_2206e0;
        case 0x2206e4u: goto label_2206e4;
        case 0x2206e8u: goto label_2206e8;
        case 0x2206ecu: goto label_2206ec;
        case 0x2206f0u: goto label_2206f0;
        case 0x2206f4u: goto label_2206f4;
        case 0x2206f8u: goto label_2206f8;
        case 0x2206fcu: goto label_2206fc;
        case 0x220700u: goto label_220700;
        case 0x220704u: goto label_220704;
        case 0x220708u: goto label_220708;
        case 0x22070cu: goto label_22070c;
        case 0x220710u: goto label_220710;
        case 0x220714u: goto label_220714;
        case 0x220718u: goto label_220718;
        case 0x22071cu: goto label_22071c;
        case 0x220720u: goto label_220720;
        case 0x220724u: goto label_220724;
        case 0x220728u: goto label_220728;
        case 0x22072cu: goto label_22072c;
        case 0x220730u: goto label_220730;
        case 0x220734u: goto label_220734;
        case 0x220738u: goto label_220738;
        case 0x22073cu: goto label_22073c;
        case 0x220740u: goto label_220740;
        case 0x220744u: goto label_220744;
        case 0x220748u: goto label_220748;
        case 0x22074cu: goto label_22074c;
        case 0x220750u: goto label_220750;
        case 0x220754u: goto label_220754;
        case 0x220758u: goto label_220758;
        case 0x22075cu: goto label_22075c;
        case 0x220760u: goto label_220760;
        case 0x220764u: goto label_220764;
        case 0x220768u: goto label_220768;
        case 0x22076cu: goto label_22076c;
        case 0x220770u: goto label_220770;
        case 0x220774u: goto label_220774;
        case 0x220778u: goto label_220778;
        case 0x22077cu: goto label_22077c;
        case 0x220780u: goto label_220780;
        case 0x220784u: goto label_220784;
        case 0x220788u: goto label_220788;
        case 0x22078cu: goto label_22078c;
        case 0x220790u: goto label_220790;
        case 0x220794u: goto label_220794;
        case 0x220798u: goto label_220798;
        case 0x22079cu: goto label_22079c;
        case 0x2207a0u: goto label_2207a0;
        case 0x2207a4u: goto label_2207a4;
        case 0x2207a8u: goto label_2207a8;
        case 0x2207acu: goto label_2207ac;
        case 0x2207b0u: goto label_2207b0;
        case 0x2207b4u: goto label_2207b4;
        case 0x2207b8u: goto label_2207b8;
        case 0x2207bcu: goto label_2207bc;
        case 0x2207c0u: goto label_2207c0;
        case 0x2207c4u: goto label_2207c4;
        case 0x2207c8u: goto label_2207c8;
        case 0x2207ccu: goto label_2207cc;
        case 0x2207d0u: goto label_2207d0;
        case 0x2207d4u: goto label_2207d4;
        case 0x2207d8u: goto label_2207d8;
        case 0x2207dcu: goto label_2207dc;
        case 0x2207e0u: goto label_2207e0;
        case 0x2207e4u: goto label_2207e4;
        case 0x2207e8u: goto label_2207e8;
        case 0x2207ecu: goto label_2207ec;
        case 0x2207f0u: goto label_2207f0;
        case 0x2207f4u: goto label_2207f4;
        case 0x2207f8u: goto label_2207f8;
        case 0x2207fcu: goto label_2207fc;
        case 0x220800u: goto label_220800;
        case 0x220804u: goto label_220804;
        case 0x220808u: goto label_220808;
        case 0x22080cu: goto label_22080c;
        case 0x220810u: goto label_220810;
        case 0x220814u: goto label_220814;
        case 0x220818u: goto label_220818;
        case 0x22081cu: goto label_22081c;
        case 0x220820u: goto label_220820;
        case 0x220824u: goto label_220824;
        case 0x220828u: goto label_220828;
        case 0x22082cu: goto label_22082c;
        case 0x220830u: goto label_220830;
        case 0x220834u: goto label_220834;
        case 0x220838u: goto label_220838;
        case 0x22083cu: goto label_22083c;
        case 0x220840u: goto label_220840;
        case 0x220844u: goto label_220844;
        case 0x220848u: goto label_220848;
        case 0x22084cu: goto label_22084c;
        case 0x220850u: goto label_220850;
        case 0x220854u: goto label_220854;
        case 0x220858u: goto label_220858;
        case 0x22085cu: goto label_22085c;
        case 0x220860u: goto label_220860;
        case 0x220864u: goto label_220864;
        case 0x220868u: goto label_220868;
        case 0x22086cu: goto label_22086c;
        case 0x220870u: goto label_220870;
        case 0x220874u: goto label_220874;
        case 0x220878u: goto label_220878;
        case 0x22087cu: goto label_22087c;
        case 0x220880u: goto label_220880;
        case 0x220884u: goto label_220884;
        case 0x220888u: goto label_220888;
        case 0x22088cu: goto label_22088c;
        case 0x220890u: goto label_220890;
        case 0x220894u: goto label_220894;
        case 0x220898u: goto label_220898;
        case 0x22089cu: goto label_22089c;
        case 0x2208a0u: goto label_2208a0;
        case 0x2208a4u: goto label_2208a4;
        case 0x2208a8u: goto label_2208a8;
        case 0x2208acu: goto label_2208ac;
        case 0x2208b0u: goto label_2208b0;
        case 0x2208b4u: goto label_2208b4;
        case 0x2208b8u: goto label_2208b8;
        case 0x2208bcu: goto label_2208bc;
        case 0x2208c0u: goto label_2208c0;
        case 0x2208c4u: goto label_2208c4;
        case 0x2208c8u: goto label_2208c8;
        case 0x2208ccu: goto label_2208cc;
        case 0x2208d0u: goto label_2208d0;
        case 0x2208d4u: goto label_2208d4;
        case 0x2208d8u: goto label_2208d8;
        case 0x2208dcu: goto label_2208dc;
        case 0x2208e0u: goto label_2208e0;
        case 0x2208e4u: goto label_2208e4;
        case 0x2208e8u: goto label_2208e8;
        case 0x2208ecu: goto label_2208ec;
        case 0x2208f0u: goto label_2208f0;
        case 0x2208f4u: goto label_2208f4;
        case 0x2208f8u: goto label_2208f8;
        case 0x2208fcu: goto label_2208fc;
        case 0x220900u: goto label_220900;
        case 0x220904u: goto label_220904;
        case 0x220908u: goto label_220908;
        case 0x22090cu: goto label_22090c;
        case 0x220910u: goto label_220910;
        case 0x220914u: goto label_220914;
        case 0x220918u: goto label_220918;
        case 0x22091cu: goto label_22091c;
        case 0x220920u: goto label_220920;
        case 0x220924u: goto label_220924;
        case 0x220928u: goto label_220928;
        case 0x22092cu: goto label_22092c;
        case 0x220930u: goto label_220930;
        case 0x220934u: goto label_220934;
        case 0x220938u: goto label_220938;
        case 0x22093cu: goto label_22093c;
        case 0x220940u: goto label_220940;
        case 0x220944u: goto label_220944;
        case 0x220948u: goto label_220948;
        case 0x22094cu: goto label_22094c;
        case 0x220950u: goto label_220950;
        case 0x220954u: goto label_220954;
        case 0x220958u: goto label_220958;
        case 0x22095cu: goto label_22095c;
        case 0x220960u: goto label_220960;
        case 0x220964u: goto label_220964;
        case 0x220968u: goto label_220968;
        case 0x22096cu: goto label_22096c;
        case 0x220970u: goto label_220970;
        case 0x220974u: goto label_220974;
        case 0x220978u: goto label_220978;
        case 0x22097cu: goto label_22097c;
        case 0x220980u: goto label_220980;
        case 0x220984u: goto label_220984;
        case 0x220988u: goto label_220988;
        case 0x22098cu: goto label_22098c;
        case 0x220990u: goto label_220990;
        case 0x220994u: goto label_220994;
        case 0x220998u: goto label_220998;
        case 0x22099cu: goto label_22099c;
        case 0x2209a0u: goto label_2209a0;
        case 0x2209a4u: goto label_2209a4;
        case 0x2209a8u: goto label_2209a8;
        case 0x2209acu: goto label_2209ac;
        case 0x2209b0u: goto label_2209b0;
        case 0x2209b4u: goto label_2209b4;
        case 0x2209b8u: goto label_2209b8;
        case 0x2209bcu: goto label_2209bc;
        case 0x2209c0u: goto label_2209c0;
        case 0x2209c4u: goto label_2209c4;
        case 0x2209c8u: goto label_2209c8;
        case 0x2209ccu: goto label_2209cc;
        case 0x2209d0u: goto label_2209d0;
        case 0x2209d4u: goto label_2209d4;
        case 0x2209d8u: goto label_2209d8;
        case 0x2209dcu: goto label_2209dc;
        case 0x2209e0u: goto label_2209e0;
        case 0x2209e4u: goto label_2209e4;
        case 0x2209e8u: goto label_2209e8;
        case 0x2209ecu: goto label_2209ec;
        case 0x2209f0u: goto label_2209f0;
        case 0x2209f4u: goto label_2209f4;
        case 0x2209f8u: goto label_2209f8;
        case 0x2209fcu: goto label_2209fc;
        case 0x220a00u: goto label_220a00;
        case 0x220a04u: goto label_220a04;
        case 0x220a08u: goto label_220a08;
        case 0x220a0cu: goto label_220a0c;
        case 0x220a10u: goto label_220a10;
        case 0x220a14u: goto label_220a14;
        case 0x220a18u: goto label_220a18;
        case 0x220a1cu: goto label_220a1c;
        case 0x220a20u: goto label_220a20;
        case 0x220a24u: goto label_220a24;
        case 0x220a28u: goto label_220a28;
        case 0x220a2cu: goto label_220a2c;
        case 0x220a30u: goto label_220a30;
        case 0x220a34u: goto label_220a34;
        case 0x220a38u: goto label_220a38;
        case 0x220a3cu: goto label_220a3c;
        case 0x220a40u: goto label_220a40;
        case 0x220a44u: goto label_220a44;
        case 0x220a48u: goto label_220a48;
        case 0x220a4cu: goto label_220a4c;
        case 0x220a50u: goto label_220a50;
        case 0x220a54u: goto label_220a54;
        case 0x220a58u: goto label_220a58;
        case 0x220a5cu: goto label_220a5c;
        case 0x220a60u: goto label_220a60;
        case 0x220a64u: goto label_220a64;
        case 0x220a68u: goto label_220a68;
        case 0x220a6cu: goto label_220a6c;
        case 0x220a70u: goto label_220a70;
        case 0x220a74u: goto label_220a74;
        case 0x220a78u: goto label_220a78;
        case 0x220a7cu: goto label_220a7c;
        case 0x220a80u: goto label_220a80;
        case 0x220a84u: goto label_220a84;
        case 0x220a88u: goto label_220a88;
        case 0x220a8cu: goto label_220a8c;
        case 0x220a90u: goto label_220a90;
        case 0x220a94u: goto label_220a94;
        case 0x220a98u: goto label_220a98;
        case 0x220a9cu: goto label_220a9c;
        case 0x220aa0u: goto label_220aa0;
        case 0x220aa4u: goto label_220aa4;
        case 0x220aa8u: goto label_220aa8;
        case 0x220aacu: goto label_220aac;
        case 0x220ab0u: goto label_220ab0;
        case 0x220ab4u: goto label_220ab4;
        case 0x220ab8u: goto label_220ab8;
        case 0x220abcu: goto label_220abc;
        case 0x220ac0u: goto label_220ac0;
        case 0x220ac4u: goto label_220ac4;
        case 0x220ac8u: goto label_220ac8;
        case 0x220accu: goto label_220acc;
        case 0x220ad0u: goto label_220ad0;
        case 0x220ad4u: goto label_220ad4;
        case 0x220ad8u: goto label_220ad8;
        case 0x220adcu: goto label_220adc;
        case 0x220ae0u: goto label_220ae0;
        case 0x220ae4u: goto label_220ae4;
        default: return;
    }

label_220318:
    // 0x220318: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x220318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_22031c:
    // 0x22031c: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x22031cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_220320:
    // 0x220320: 0x90e30010  lbu         $v1, 0x10($a3)
    ctx->pc = 0x220320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_220324:
    // 0x220324: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_220328:
    if (ctx->pc == 0x220328u) {
        ctx->pc = 0x22032Cu;
        goto label_22032c;
    }
    ctx->pc = 0x220324u;
    {
        const bool branch_taken_0x220324 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x220324) {
            ctx->pc = 0x220364u;
            goto label_220364;
        }
    }
    ctx->pc = 0x22032Cu;
label_22032c:
    // 0x22032c: 0x94e4000a  lhu         $a0, 0xA($a3)
    ctx->pc = 0x22032cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_220330:
    // 0x220330: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220330u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
label_220334:
    // 0x220334: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_220338:
    if (ctx->pc == 0x220338u) {
        ctx->pc = 0x220338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220334u;
        // 0x220338: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22033Cu;
        goto label_22033c;
    }
    ctx->pc = 0x220334u;
    {
        const bool branch_taken_0x220334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220334u;
        // 0x220338: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220334) {
            ctx->pc = 0x220348u;
            goto label_220348;
        }
    }
    ctx->pc = 0x22033Cu;
label_22033c:
    // 0x22033c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_220340:
    if (ctx->pc == 0x220340u) {
        ctx->pc = 0x220340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22033Cu;
        // 0x220340: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220344u;
        goto label_220344;
    }
    ctx->pc = 0x22033Cu;
    {
        const bool branch_taken_0x22033c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22033Cu;
        // 0x220340: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22033c) {
            ctx->pc = 0x220348u;
            goto label_220348;
        }
    }
    ctx->pc = 0x220344u;
label_220344:
    // 0x220344: 0xa4e3000a  sh          $v1, 0xA($a3)
    ctx->pc = 0x220344u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 3));
label_220348:
    // 0x220348: 0x94e4000c  lhu         $a0, 0xC($a3)
    ctx->pc = 0x220348u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
label_22034c:
    // 0x22034c: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x22034cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
label_220350:
    // 0x220350: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_220354:
    if (ctx->pc == 0x220354u) {
        ctx->pc = 0x220354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220350u;
        // 0x220354: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x220358u;
        goto label_220358;
    }
    ctx->pc = 0x220350u;
    {
        const bool branch_taken_0x220350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220350u;
        // 0x220354: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220350) {
            ctx->pc = 0x220364u;
            goto label_220364;
        }
    }
    ctx->pc = 0x220358u;
label_220358:
    // 0x220358: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_22035c:
    if (ctx->pc == 0x22035Cu) {
        ctx->pc = 0x22035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220358u;
        // 0x22035c: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220360u;
        goto label_220360;
    }
    ctx->pc = 0x220358u;
    {
        const bool branch_taken_0x220358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220358u;
        // 0x22035c: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220358) {
            ctx->pc = 0x220364u;
            goto label_220364;
        }
    }
    ctx->pc = 0x220360u;
label_220360:
    // 0x220360: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x220360u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
label_220364:
    // 0x220364: 0x0  nop
    ctx->pc = 0x220364u;
    // NOP
label_220368:
    // 0x220368: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x220368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22036c:
    // 0x22036c: 0x28c300ff  slti        $v1, $a2, 0xFF
    ctx->pc = 0x22036cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)255) ? 1 : 0);
label_220370:
    // 0x220370: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_220374:
    if (ctx->pc == 0x220374u) {
        ctx->pc = 0x220374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220370u;
        // 0x220374: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220378u;
        goto label_220378;
    }
    ctx->pc = 0x220370u;
    {
        const bool branch_taken_0x220370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220370u;
        // 0x220374: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220370) {
            ctx->pc = 0x220320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220320;
        }
    }
    ctx->pc = 0x220378u;
label_220378:
    // 0x220378: 0x9504000a  lhu         $a0, 0xA($t0)
    ctx->pc = 0x220378u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
label_22037c:
    // 0x22037c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x22037cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_220380:
    // 0x220380: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_220384:
    if (ctx->pc == 0x220384u) {
        ctx->pc = 0x220384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220380u;
        // 0x220384: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220388u;
        goto label_220388;
    }
    ctx->pc = 0x220380u;
    {
        const bool branch_taken_0x220380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x220384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220380u;
        // 0x220384: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220380) {
            ctx->pc = 0x22039Cu;
            goto label_22039c;
        }
    }
    ctx->pc = 0x220388u;
label_220388:
    // 0x220388: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x220388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_22038c:
    // 0x22038c: 0xc0882f8  jal         func_220BE0
label_220390:
    if (ctx->pc == 0x220390u) {
        ctx->pc = 0x220390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22038Cu;
        // 0x220390: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220394u;
        goto label_220394;
    }
    ctx->pc = 0x22038Cu;
    SET_GPR_U32(ctx, 31, 0x220394u);
    ctx->pc = 0x220390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22038Cu;
    // 0x220390: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220394u;
label_220394:
    // 0x220394: 0x1000003e  b           . + 4 + (0x3E << 2)
label_220398:
    if (ctx->pc == 0x220398u) {
        ctx->pc = 0x22039Cu;
        goto label_22039c;
    }
    ctx->pc = 0x220394u;
    {
        const bool branch_taken_0x220394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220394) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x22039Cu;
label_22039c:
    // 0x22039c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_2203a0:
    if (ctx->pc == 0x2203A0u) {
        ctx->pc = 0x2203A4u;
        goto label_2203a4;
    }
    ctx->pc = 0x22039Cu;
    {
        const bool branch_taken_0x22039c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22039c) {
            ctx->pc = 0x2203B8u;
            goto label_2203b8;
        }
    }
    ctx->pc = 0x2203A4u;
label_2203a4:
    // 0x2203a4: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x2203a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_2203a8:
    // 0x2203a8: 0xc0882f8  jal         func_220BE0
label_2203ac:
    if (ctx->pc == 0x2203ACu) {
        ctx->pc = 0x2203ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203A8u;
        // 0x2203ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2203B0u;
        goto label_2203b0;
    }
    ctx->pc = 0x2203A8u;
    SET_GPR_U32(ctx, 31, 0x2203B0u);
    ctx->pc = 0x2203ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203A8u;
    // 0x2203ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2203B0u;
label_2203b0:
    // 0x2203b0: 0x10000037  b           . + 4 + (0x37 << 2)
label_2203b4:
    if (ctx->pc == 0x2203B4u) {
        ctx->pc = 0x2203B8u;
        goto label_2203b8;
    }
    ctx->pc = 0x2203B0u;
    {
        const bool branch_taken_0x2203b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2203b0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x2203B8u;
label_2203b8:
    // 0x2203b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2203b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2203bc:
    // 0x2203bc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_2203c0:
    if (ctx->pc == 0x2203C0u) {
        ctx->pc = 0x2203C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203BCu;
        // 0x2203c0: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2203C4u;
        goto label_2203c4;
    }
    ctx->pc = 0x2203BCu;
    {
        const bool branch_taken_0x2203bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2203C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203BCu;
        // 0x2203c0: 0x2403001a  addiu       $v1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2203bc) {
            ctx->pc = 0x2203D8u;
            goto label_2203d8;
        }
    }
    ctx->pc = 0x2203C4u;
label_2203c4:
    // 0x2203c4: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x2203c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_2203c8:
    // 0x2203c8: 0xc0882f8  jal         func_220BE0
label_2203cc:
    if (ctx->pc == 0x2203CCu) {
        ctx->pc = 0x2203CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203C8u;
        // 0x2203cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2203D0u;
        goto label_2203d0;
    }
    ctx->pc = 0x2203C8u;
    SET_GPR_U32(ctx, 31, 0x2203D0u);
    ctx->pc = 0x2203CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203C8u;
    // 0x2203cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2203D0u;
label_2203d0:
    // 0x2203d0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2203d4:
    if (ctx->pc == 0x2203D4u) {
        ctx->pc = 0x2203D8u;
        goto label_2203d8;
    }
    ctx->pc = 0x2203D0u;
    {
        const bool branch_taken_0x2203d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2203d0) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x2203D8u;
label_2203d8:
    // 0x2203d8: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
label_2203dc:
    if (ctx->pc == 0x2203DCu) {
        ctx->pc = 0x2203E0u;
        goto label_2203e0;
    }
    ctx->pc = 0x2203D8u;
    {
        const bool branch_taken_0x2203d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2203d8) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x2203E0u;
label_2203e0:
    // 0x2203e0: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x2203e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_2203e4:
    // 0x2203e4: 0xc0882f8  jal         func_220BE0
label_2203e8:
    if (ctx->pc == 0x2203E8u) {
        ctx->pc = 0x2203E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2203E4u;
        // 0x2203e8: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2203ECu;
        goto label_2203ec;
    }
    ctx->pc = 0x2203E4u;
    SET_GPR_U32(ctx, 31, 0x2203ECu);
    ctx->pc = 0x2203E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203E4u;
    // 0x2203e8: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2203ECu;
label_2203ec:
    // 0x2203ec: 0x10000028  b           . + 4 + (0x28 << 2)
label_2203f0:
    if (ctx->pc == 0x2203F0u) {
        ctx->pc = 0x2203F4u;
        goto label_2203f4;
    }
    ctx->pc = 0x2203ECu;
    {
        const bool branch_taken_0x2203ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2203ec) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x2203F4u;
label_2203f4:
    // 0x2203f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2203f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2203f8:
    // 0x2203f8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x2203f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_2203fc:
    // 0x2203fc: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x2203fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_220400:
    // 0x220400: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x220400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
label_220404:
    // 0x220404: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x220404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_220408:
    // 0x220408: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x220408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22040c:
    // 0x22040c: 0xa424b4ea  sh          $a0, -0x4B16($at)
    ctx->pc = 0x22040cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948074), (uint16_t)GPR_U32(ctx, 4));
label_220410:
    // 0x220410: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x220410u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_220414:
    // 0x220414: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_220418:
    if (ctx->pc == 0x220418u) {
        ctx->pc = 0x220418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220414u;
        // 0x220418: 0x3c070030  lui         $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22041Cu;
        goto label_22041c;
    }
    ctx->pc = 0x220414u;
    {
        const bool branch_taken_0x220414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x220418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220414u;
        // 0x220418: 0x3c070030  lui         $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220414) {
            ctx->pc = 0x220490u;
            goto label_220490;
        }
    }
    ctx->pc = 0x22041Cu;
label_22041c:
    // 0x22041c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22041cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220420:
    // 0x220420: 0x24e7b4e0  addiu       $a3, $a3, -0x4B20
    ctx->pc = 0x220420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948064));
label_220424:
    // 0x220424: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x220424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_220428:
    // 0x220428: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x220428u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22042c:
    // 0x22042c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x22042cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_220430:
    // 0x220430: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x220430u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_220434:
    // 0x220434: 0x90e30010  lbu         $v1, 0x10($a3)
    ctx->pc = 0x220434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_220438:
    // 0x220438: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
label_22043c:
    if (ctx->pc == 0x22043Cu) {
        ctx->pc = 0x220440u;
        goto label_220440;
    }
    ctx->pc = 0x220438u;
    {
        const bool branch_taken_0x220438 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x220438) {
            ctx->pc = 0x22047Cu;
            goto label_22047c;
        }
    }
    ctx->pc = 0x220440u;
label_220440:
    // 0x220440: 0x94e4000a  lhu         $a0, 0xA($a3)
    ctx->pc = 0x220440u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_220444:
    // 0x220444: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220444u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
label_220448:
    // 0x220448: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_22044c:
    if (ctx->pc == 0x22044Cu) {
        ctx->pc = 0x22044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220448u;
        // 0x22044c: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x220450u;
        goto label_220450;
    }
    ctx->pc = 0x220448u;
    {
        const bool branch_taken_0x220448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220448u;
        // 0x22044c: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220448) {
            ctx->pc = 0x22045Cu;
            goto label_22045c;
        }
    }
    ctx->pc = 0x220450u;
label_220450:
    // 0x220450: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_220454:
    if (ctx->pc == 0x220454u) {
        ctx->pc = 0x220454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220450u;
        // 0x220454: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220458u;
        goto label_220458;
    }
    ctx->pc = 0x220450u;
    {
        const bool branch_taken_0x220450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220450u;
        // 0x220454: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220450) {
            ctx->pc = 0x22045Cu;
            goto label_22045c;
        }
    }
    ctx->pc = 0x220458u;
label_220458:
    // 0x220458: 0xa4e3000a  sh          $v1, 0xA($a3)
    ctx->pc = 0x220458u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 3));
label_22045c:
    // 0x22045c: 0x0  nop
    ctx->pc = 0x22045cu;
    // NOP
label_220460:
    // 0x220460: 0x94e4000c  lhu         $a0, 0xC($a3)
    ctx->pc = 0x220460u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
label_220464:
    // 0x220464: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
label_220468:
    // 0x220468: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_22046c:
    if (ctx->pc == 0x22046Cu) {
        ctx->pc = 0x22046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220468u;
        // 0x22046c: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x220470u;
        goto label_220470;
    }
    ctx->pc = 0x220468u;
    {
        const bool branch_taken_0x220468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220468u;
        // 0x22046c: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220468) {
            ctx->pc = 0x22047Cu;
            goto label_22047c;
        }
    }
    ctx->pc = 0x220470u;
label_220470:
    // 0x220470: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_220474:
    if (ctx->pc == 0x220474u) {
        ctx->pc = 0x220474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220470u;
        // 0x220474: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220478u;
        goto label_220478;
    }
    ctx->pc = 0x220470u;
    {
        const bool branch_taken_0x220470 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220470u;
        // 0x220474: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220470) {
            ctx->pc = 0x22047Cu;
            goto label_22047c;
        }
    }
    ctx->pc = 0x220478u;
label_220478:
    // 0x220478: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x220478u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
label_22047c:
    // 0x22047c: 0x0  nop
    ctx->pc = 0x22047cu;
    // NOP
label_220480:
    // 0x220480: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x220480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_220484:
    // 0x220484: 0x28c300ff  slti        $v1, $a2, 0xFF
    ctx->pc = 0x220484u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)255) ? 1 : 0);
label_220488:
    // 0x220488: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_22048c:
    if (ctx->pc == 0x22048Cu) {
        ctx->pc = 0x22048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220488u;
        // 0x22048c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220490u;
        goto label_220490;
    }
    ctx->pc = 0x220488u;
    {
        const bool branch_taken_0x220488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220488u;
        // 0x22048c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220488) {
            ctx->pc = 0x220434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220434;
        }
    }
    ctx->pc = 0x220490u;
label_220490:
    // 0x220490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_220494:
    // 0x220494: 0x3e00008  jr          $ra
label_220498:
    if (ctx->pc == 0x220498u) {
        ctx->pc = 0x220498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220494u;
        // 0x220498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22049Cu;
        goto label_22049c;
    }
    ctx->pc = 0x220494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220494u;
        // 0x220498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22049Cu;
label_22049c:
    // 0x22049c: 0x0  nop
    ctx->pc = 0x22049cu;
    // NOP
label_2204a0:
    // 0x2204a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2204a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2204a4:
    // 0x2204a4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2204a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2204a8:
    // 0x2204a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2204a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2204ac:
    // 0x2204ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2204acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2204b0:
    // 0x2204b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2204b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2204b4:
    // 0x2204b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2204b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2204b8:
    // 0x2204b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2204b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2204bc:
    // 0x2204bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2204bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2204c0:
    // 0x2204c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2204c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2204c4:
    // 0x2204c4: 0x16630010  bne         $s3, $v1, . + 4 + (0x10 << 2)
label_2204c8:
    if (ctx->pc == 0x2204C8u) {
        ctx->pc = 0x2204C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204C4u;
        // 0x2204c8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2204CCu;
        goto label_2204cc;
    }
    ctx->pc = 0x2204C4u;
    {
        const bool branch_taken_0x2204c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x2204C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204C4u;
        // 0x2204c8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204c4) {
            ctx->pc = 0x220508u;
            goto label_220508;
        }
    }
    ctx->pc = 0x2204CCu;
label_2204cc:
    // 0x2204cc: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_2204d0:
    if (ctx->pc == 0x2204D0u) {
        ctx->pc = 0x2204D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204CCu;
        // 0x2204d0: 0x24030043  addiu       $v1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2204D4u;
        goto label_2204d4;
    }
    ctx->pc = 0x2204CCu;
    {
        const bool branch_taken_0x2204cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2204D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204CCu;
        // 0x2204d0: 0x24030043  addiu       $v1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204cc) {
            ctx->pc = 0x22050Cu;
            goto label_22050c;
        }
    }
    ctx->pc = 0x2204D4u;
label_2204d4:
    // 0x2204d4: 0x262200e6  addiu       $v0, $s1, 0xE6
    ctx->pc = 0x2204d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 230));
label_2204d8:
    // 0x2204d8: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x2204d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
label_2204dc:
    // 0x2204dc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2204dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2204e0:
    // 0x2204e0: 0x2610f180  addiu       $s0, $s0, -0xE80
    ctx->pc = 0x2204e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963584));
label_2204e4:
    // 0x2204e4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x2204e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_2204e8:
    // 0x2204e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2204e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2204ec:
    // 0x2204ec: 0x2442b4e0  addiu       $v0, $v0, -0x4B20
    ctx->pc = 0x2204ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948064));
label_2204f0:
    // 0x2204f0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2204f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2204f4:
    // 0x2204f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2204f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2204f8:
    // 0x2204f8: 0xc08e93e  jal         func_23A4F8
label_2204fc:
    if (ctx->pc == 0x2204FCu) {
        ctx->pc = 0x2204FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204F8u;
        // 0x2204fc: 0x24451fe0  addiu       $a1, $v0, 0x1FE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220500u;
        goto label_220500;
    }
    ctx->pc = 0x2204F8u;
    SET_GPR_U32(ctx, 31, 0x220500u);
    ctx->pc = 0x2204FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2204F8u;
    // 0x2204fc: 0x24451fe0  addiu       $a1, $v0, 0x1FE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x220500u;
label_220500:
    // 0x220500: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_220504:
    // 0x220504: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x220504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
label_220508:
    // 0x220508: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x220508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_22050c:
    // 0x22050c: 0x1663000e  bne         $s3, $v1, . + 4 + (0xE << 2)
label_220510:
    if (ctx->pc == 0x220510u) {
        ctx->pc = 0x220510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22050Cu;
        // 0x220510: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220514u;
        goto label_220514;
    }
    ctx->pc = 0x22050Cu;
    {
        const bool branch_taken_0x22050c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x220510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22050Cu;
        // 0x220510: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22050c) {
            ctx->pc = 0x220548u;
            goto label_220548;
        }
    }
    ctx->pc = 0x220514u;
label_220514:
    // 0x220514: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x220514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_220518:
    // 0x220518: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x220518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22051c:
    // 0x22051c: 0x8c244afc  lw          $a0, 0x4AFC($at)
    ctx->pc = 0x22051cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_220520:
    // 0x220520: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
label_220524:
    if (ctx->pc == 0x220524u) {
        ctx->pc = 0x220524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220520u;
        // 0x220524: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220528u;
        goto label_220528;
    }
    ctx->pc = 0x220520u;
    {
        const bool branch_taken_0x220520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x220524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220520u;
        // 0x220524: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220520) {
            ctx->pc = 0x2205C8u;
            goto label_2205c8;
        }
    }
    ctx->pc = 0x220528u;
label_220528:
    // 0x220528: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x220528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_22052c:
    // 0x22052c: 0xc056ff8  jal         func_15BFE0
label_220530:
    if (ctx->pc == 0x220530u) {
        ctx->pc = 0x220530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22052Cu;
        // 0x220530: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220534u;
        goto label_220534;
    }
    ctx->pc = 0x22052Cu;
    SET_GPR_U32(ctx, 31, 0x220534u);
    ctx->pc = 0x220530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22052Cu;
    // 0x220530: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x22052Cu, 0x220534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220534u;
label_220534:
    // 0x220534: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_220538:
    if (ctx->pc == 0x220538u) {
        ctx->pc = 0x220538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220534u;
        // 0x220538: 0x240300bd  addiu       $v1, $zero, 0xBD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22053Cu;
        goto label_22053c;
    }
    ctx->pc = 0x220534u;
    {
        const bool branch_taken_0x220534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220534u;
        // 0x220538: 0x240300bd  addiu       $v1, $zero, 0xBD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220534) {
            ctx->pc = 0x2205C4u;
            goto label_2205c4;
        }
    }
    ctx->pc = 0x22053Cu;
label_22053c:
    // 0x22053c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x22053cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_220540:
    // 0x220540: 0x10000020  b           . + 4 + (0x20 << 2)
label_220544:
    if (ctx->pc == 0x220544u) {
        ctx->pc = 0x220544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220540u;
        // 0x220544: 0xa023d4d7  sb          $v1, -0x2B29($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294956247), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220548u;
        goto label_220548;
    }
    ctx->pc = 0x220540u;
    {
        const bool branch_taken_0x220540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220540u;
        // 0x220544: 0xa023d4d7  sb          $v1, -0x2B29($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294956247), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220540) {
            ctx->pc = 0x2205C4u;
            goto label_2205c4;
        }
    }
    ctx->pc = 0x220548u;
label_220548:
    // 0x220548: 0x16630015  bne         $s3, $v1, . + 4 + (0x15 << 2)
label_22054c:
    if (ctx->pc == 0x22054Cu) {
        ctx->pc = 0x22054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220548u;
        // 0x22054c: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220550u;
        goto label_220550;
    }
    ctx->pc = 0x220548u;
    {
        const bool branch_taken_0x220548 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x22054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220548u;
        // 0x22054c: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220548) {
            ctx->pc = 0x2205A0u;
            goto label_2205a0;
        }
    }
    ctx->pc = 0x220550u;
label_220550:
    // 0x220550: 0xc056ff8  jal         func_15BFE0
label_220554:
    if (ctx->pc == 0x220554u) {
        ctx->pc = 0x220554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220550u;
        // 0x220554: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220558u;
        goto label_220558;
    }
    ctx->pc = 0x220550u;
    SET_GPR_U32(ctx, 31, 0x220558u);
    ctx->pc = 0x220554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220550u;
    // 0x220554: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x220550u, 0x220558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220558u;
label_220558:
    // 0x220558: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_22055c:
    if (ctx->pc == 0x22055Cu) {
        ctx->pc = 0x220560u;
        goto label_220560;
    }
    ctx->pc = 0x220558u;
    {
        const bool branch_taken_0x220558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220558) {
            ctx->pc = 0x2205C4u;
            goto label_2205c4;
        }
    }
    ctx->pc = 0x220560u;
label_220560:
    // 0x220560: 0x262200e6  addiu       $v0, $s1, 0xE6
    ctx->pc = 0x220560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 230));
label_220564:
    // 0x220564: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x220564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_220568:
    // 0x220568: 0x2484b4e0  addiu       $a0, $a0, -0x4B20
    ctx->pc = 0x220568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
label_22056c:
    // 0x22056c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x22056cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_220570:
    // 0x220570: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x220570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_220574:
    // 0x220574: 0xc08e93e  jal         func_23A4F8
label_220578:
    if (ctx->pc == 0x220578u) {
        ctx->pc = 0x220578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220574u;
        // 0x220578: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22057Cu;
        goto label_22057c;
    }
    ctx->pc = 0x220574u;
    SET_GPR_U32(ctx, 31, 0x22057Cu);
    ctx->pc = 0x220578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220574u;
    // 0x220578: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x22057Cu;
label_22057c:
    // 0x22057c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x22057cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_220580:
    // 0x220580: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x220580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_220584:
    // 0x220584: 0xa024b4f0  sb          $a0, -0x4B10($at)
    ctx->pc = 0x220584u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948080), (uint8_t)GPR_U32(ctx, 4));
label_220588:
    // 0x220588: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x220588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22058c:
    // 0x22058c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x22058cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_220590:
    // 0x220590: 0xa023b4f2  sb          $v1, -0x4B0E($at)
    ctx->pc = 0x220590u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294948082), (uint8_t)GPR_U32(ctx, 3));
label_220594:
    // 0x220594: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x220594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_220598:
    // 0x220598: 0x1000000a  b           . + 4 + (0xA << 2)
label_22059c:
    if (ctx->pc == 0x22059Cu) {
        ctx->pc = 0x22059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220598u;
        // 0x22059c: 0xa023b4f5  sb          $v1, -0x4B0B($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948085), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2205A0u;
        goto label_2205a0;
    }
    ctx->pc = 0x220598u;
    {
        const bool branch_taken_0x220598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220598u;
        // 0x22059c: 0xa023b4f5  sb          $v1, -0x4B0B($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294948085), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220598) {
            ctx->pc = 0x2205C4u;
            goto label_2205c4;
        }
    }
    ctx->pc = 0x2205A0u;
label_2205a0:
    // 0x2205a0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x2205a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2205a4:
    // 0x2205a4: 0x16630007  bne         $s3, $v1, . + 4 + (0x7 << 2)
label_2205a8:
    if (ctx->pc == 0x2205A8u) {
        ctx->pc = 0x2205A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205A4u;
        // 0x2205a8: 0x3c040030  lui         $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2205ACu;
        goto label_2205ac;
    }
    ctx->pc = 0x2205A4u;
    {
        const bool branch_taken_0x2205a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x2205A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205A4u;
        // 0x2205a8: 0x3c040030  lui         $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2205a4) {
            ctx->pc = 0x2205C4u;
            goto label_2205c4;
        }
    }
    ctx->pc = 0x2205ACu;
label_2205ac:
    // 0x2205ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2205acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2205b0:
    // 0x2205b0: 0x2484d4c0  addiu       $a0, $a0, -0x2B40
    ctx->pc = 0x2205b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956224));
label_2205b4:
    // 0x2205b4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x2205b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_2205b8:
    // 0x2205b8: 0xa483000a  sh          $v1, 0xA($a0)
    ctx->pc = 0x2205b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
label_2205bc:
    // 0x2205bc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2205bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2205c0:
    // 0x2205c0: 0xa423d4ea  sh          $v1, -0x2B16($at)
    ctx->pc = 0x2205c0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294956266), (uint16_t)GPR_U32(ctx, 3));
label_2205c4:
    // 0x2205c4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2205c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2205c8:
    // 0x2205c8: 0x1263004c  beq         $s3, $v1, . + 4 + (0x4C << 2)
label_2205cc:
    if (ctx->pc == 0x2205CCu) {
        ctx->pc = 0x2205CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205C8u;
        // 0x2205cc: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2205D0u;
        goto label_2205d0;
    }
    ctx->pc = 0x2205C8u;
    {
        const bool branch_taken_0x2205c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2205CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205C8u;
        // 0x2205cc: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2205c8) {
            ctx->pc = 0x2206FCu;
            goto label_2206fc;
        }
    }
    ctx->pc = 0x2205D0u;
label_2205d0:
    // 0x2205d0: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2205d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2205d4:
    // 0x2205d4: 0x12630048  beq         $s3, $v1, . + 4 + (0x48 << 2)
label_2205d8:
    if (ctx->pc == 0x2205D8u) {
        ctx->pc = 0x2205D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205D4u;
        // 0x2205d8: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2205DCu;
        goto label_2205dc;
    }
    ctx->pc = 0x2205D4u;
    {
        const bool branch_taken_0x2205d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2205D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205D4u;
        // 0x2205d8: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2205d4) {
            ctx->pc = 0x2206F8u;
            goto label_2206f8;
        }
    }
    ctx->pc = 0x2205DCu;
label_2205dc:
    // 0x2205dc: 0x12630021  beq         $s3, $v1, . + 4 + (0x21 << 2)
label_2205e0:
    if (ctx->pc == 0x2205E0u) {
        ctx->pc = 0x2205E4u;
        goto label_2205e4;
    }
    ctx->pc = 0x2205DCu;
    {
        const bool branch_taken_0x2205dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2205dc) {
            ctx->pc = 0x220664u;
            goto label_220664;
        }
    }
    ctx->pc = 0x2205E4u;
label_2205e4:
    // 0x2205e4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2205e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2205e8:
    // 0x2205e8: 0x1263001f  beq         $s3, $v1, . + 4 + (0x1F << 2)
label_2205ec:
    if (ctx->pc == 0x2205ECu) {
        ctx->pc = 0x2205ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205E8u;
        // 0x2205ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2205F0u;
        goto label_2205f0;
    }
    ctx->pc = 0x2205E8u;
    {
        const bool branch_taken_0x2205e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2205ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205E8u;
        // 0x2205ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2205e8) {
            ctx->pc = 0x220668u;
            goto label_220668;
        }
    }
    ctx->pc = 0x2205F0u;
label_2205f0:
    // 0x2205f0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2205f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2205f4:
    // 0x2205f4: 0x12630007  beq         $s3, $v1, . + 4 + (0x7 << 2)
label_2205f8:
    if (ctx->pc == 0x2205F8u) {
        ctx->pc = 0x2205F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205F4u;
        // 0x2205f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2205FCu;
        goto label_2205fc;
    }
    ctx->pc = 0x2205F4u;
    {
        const bool branch_taken_0x2205f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2205F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205F4u;
        // 0x2205f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2205f4) {
            ctx->pc = 0x220614u;
            goto label_220614;
        }
    }
    ctx->pc = 0x2205FCu;
label_2205fc:
    // 0x2205fc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2205fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_220600:
    // 0x220600: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
label_220604:
    if (ctx->pc == 0x220604u) {
        ctx->pc = 0x220608u;
        goto label_220608;
    }
    ctx->pc = 0x220600u;
    {
        const bool branch_taken_0x220600 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x220600) {
            ctx->pc = 0x220610u;
            goto label_220610;
        }
    }
    ctx->pc = 0x220608u;
label_220608:
    // 0x220608: 0x1000004b  b           . + 4 + (0x4B << 2)
label_22060c:
    if (ctx->pc == 0x22060Cu) {
        ctx->pc = 0x220610u;
        goto label_220610;
    }
    ctx->pc = 0x220608u;
    {
        const bool branch_taken_0x220608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220608) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x220610u;
label_220610:
    // 0x220610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x220610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220614:
    // 0x220614: 0x16430009  bne         $s2, $v1, . + 4 + (0x9 << 2)
label_220618:
    if (ctx->pc == 0x220618u) {
        ctx->pc = 0x220618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220614u;
        // 0x220618: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22061Cu;
        goto label_22061c;
    }
    ctx->pc = 0x220614u;
    {
        const bool branch_taken_0x220614 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x220618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220614u;
        // 0x220618: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220614) {
            ctx->pc = 0x22063Cu;
            goto label_22063c;
        }
    }
    ctx->pc = 0x22061Cu;
label_22061c:
    // 0x22061c: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x22061cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_220620:
    // 0x220620: 0xc0882f8  jal         func_220BE0
label_220624:
    if (ctx->pc == 0x220624u) {
        ctx->pc = 0x220624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220620u;
        // 0x220624: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220628u;
        goto label_220628;
    }
    ctx->pc = 0x220620u;
    SET_GPR_U32(ctx, 31, 0x220628u);
    ctx->pc = 0x220624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220620u;
    // 0x220624: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220628u;
label_220628:
    // 0x220628: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x220628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_22062c:
    // 0x22062c: 0xc0882f8  jal         func_220BE0
label_220630:
    if (ctx->pc == 0x220630u) {
        ctx->pc = 0x220630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22062Cu;
        // 0x220630: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220634u;
        goto label_220634;
    }
    ctx->pc = 0x22062Cu;
    SET_GPR_U32(ctx, 31, 0x220634u);
    ctx->pc = 0x220630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22062Cu;
    // 0x220630: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220634u;
label_220634:
    // 0x220634: 0x10000040  b           . + 4 + (0x40 << 2)
label_220638:
    if (ctx->pc == 0x220638u) {
        ctx->pc = 0x22063Cu;
        goto label_22063c;
    }
    ctx->pc = 0x220634u;
    {
        const bool branch_taken_0x220634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220634) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x22063Cu;
label_22063c:
    // 0x22063c: 0x1643003e  bne         $s2, $v1, . + 4 + (0x3E << 2)
label_220640:
    if (ctx->pc == 0x220640u) {
        ctx->pc = 0x220644u;
        goto label_220644;
    }
    ctx->pc = 0x22063Cu;
    {
        const bool branch_taken_0x22063c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x22063c) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x220644u;
label_220644:
    // 0x220644: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x220644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_220648:
    // 0x220648: 0xc0882f8  jal         func_220BE0
label_22064c:
    if (ctx->pc == 0x22064Cu) {
        ctx->pc = 0x22064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220648u;
        // 0x22064c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220650u;
        goto label_220650;
    }
    ctx->pc = 0x220648u;
    SET_GPR_U32(ctx, 31, 0x220650u);
    ctx->pc = 0x22064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220648u;
    // 0x22064c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220650u;
label_220650:
    // 0x220650: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x220650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_220654:
    // 0x220654: 0xc0882f8  jal         func_220BE0
label_220658:
    if (ctx->pc == 0x220658u) {
        ctx->pc = 0x220658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220654u;
        // 0x220658: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22065Cu;
        goto label_22065c;
    }
    ctx->pc = 0x220654u;
    SET_GPR_U32(ctx, 31, 0x22065Cu);
    ctx->pc = 0x220658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220654u;
    // 0x220658: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x22065Cu;
label_22065c:
    // 0x22065c: 0x10000036  b           . + 4 + (0x36 << 2)
label_220660:
    if (ctx->pc == 0x220660u) {
        ctx->pc = 0x220664u;
        goto label_220664;
    }
    ctx->pc = 0x22065Cu;
    {
        const bool branch_taken_0x22065c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22065c) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x220664u;
label_220664:
    // 0x220664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x220664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220668:
    // 0x220668: 0x16430016  bne         $s2, $v1, . + 4 + (0x16 << 2)
label_22066c:
    if (ctx->pc == 0x22066Cu) {
        ctx->pc = 0x22066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220668u;
        // 0x22066c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220670u;
        goto label_220670;
    }
    ctx->pc = 0x220668u;
    {
        const bool branch_taken_0x220668 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x22066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220668u;
        // 0x22066c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220668) {
            ctx->pc = 0x2206C4u;
            goto label_2206c4;
        }
    }
    ctx->pc = 0x220670u;
label_220670:
    // 0x220670: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x220670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_220674:
    // 0x220674: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
label_220678:
    if (ctx->pc == 0x220678u) {
        ctx->pc = 0x220678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220674u;
        // 0x220678: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22067Cu;
        goto label_22067c;
    }
    ctx->pc = 0x220674u;
    {
        const bool branch_taken_0x220674 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x220678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220674u;
        // 0x220678: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220674) {
            ctx->pc = 0x22069Cu;
            goto label_22069c;
        }
    }
    ctx->pc = 0x22067Cu;
label_22067c:
    // 0x22067c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x22067cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_220680:
    // 0x220680: 0xc0882f8  jal         func_220BE0
label_220684:
    if (ctx->pc == 0x220684u) {
        ctx->pc = 0x220684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220680u;
        // 0x220684: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220688u;
        goto label_220688;
    }
    ctx->pc = 0x220680u;
    SET_GPR_U32(ctx, 31, 0x220688u);
    ctx->pc = 0x220684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220680u;
    // 0x220684: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220688u;
label_220688:
    // 0x220688: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x220688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_22068c:
    // 0x22068c: 0xc0882f8  jal         func_220BE0
label_220690:
    if (ctx->pc == 0x220690u) {
        ctx->pc = 0x220690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22068Cu;
        // 0x220690: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220694u;
        goto label_220694;
    }
    ctx->pc = 0x22068Cu;
    SET_GPR_U32(ctx, 31, 0x220694u);
    ctx->pc = 0x220690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22068Cu;
    // 0x220690: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220694u;
label_220694:
    // 0x220694: 0x10000007  b           . + 4 + (0x7 << 2)
label_220698:
    if (ctx->pc == 0x220698u) {
        ctx->pc = 0x220698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220694u;
        // 0x220698: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22069Cu;
        goto label_22069c;
    }
    ctx->pc = 0x220694u;
    {
        const bool branch_taken_0x220694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220694u;
        // 0x220698: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220694) {
            ctx->pc = 0x2206B4u;
            goto label_2206b4;
        }
    }
    ctx->pc = 0x22069Cu;
label_22069c:
    // 0x22069c: 0xc0882f8  jal         func_220BE0
label_2206a0:
    if (ctx->pc == 0x2206A0u) {
        ctx->pc = 0x2206A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22069Cu;
        // 0x2206a0: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206A4u;
        goto label_2206a4;
    }
    ctx->pc = 0x22069Cu;
    SET_GPR_U32(ctx, 31, 0x2206A4u);
    ctx->pc = 0x2206A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22069Cu;
    // 0x2206a0: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2206A4u;
label_2206a4:
    // 0x2206a4: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x2206a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2206a8:
    // 0x2206a8: 0xc0882f8  jal         func_220BE0
label_2206ac:
    if (ctx->pc == 0x2206ACu) {
        ctx->pc = 0x2206ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206A8u;
        // 0x2206ac: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206B0u;
        goto label_2206b0;
    }
    ctx->pc = 0x2206A8u;
    SET_GPR_U32(ctx, 31, 0x2206B0u);
    ctx->pc = 0x2206ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206A8u;
    // 0x2206ac: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2206B0u;
label_2206b0:
    // 0x2206b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2206b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2206b4:
    // 0x2206b4: 0xc0882f8  jal         func_220BE0
label_2206b8:
    if (ctx->pc == 0x2206B8u) {
        ctx->pc = 0x2206B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206B4u;
        // 0x2206b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206BCu;
        goto label_2206bc;
    }
    ctx->pc = 0x2206B4u;
    SET_GPR_U32(ctx, 31, 0x2206BCu);
    ctx->pc = 0x2206B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206B4u;
    // 0x2206b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2206BCu;
label_2206bc:
    // 0x2206bc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2206c0:
    if (ctx->pc == 0x2206C0u) {
        ctx->pc = 0x2206C4u;
        goto label_2206c4;
    }
    ctx->pc = 0x2206BCu;
    {
        const bool branch_taken_0x2206bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2206bc) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x2206C4u;
label_2206c4:
    // 0x2206c4: 0x1643001c  bne         $s2, $v1, . + 4 + (0x1C << 2)
label_2206c8:
    if (ctx->pc == 0x2206C8u) {
        ctx->pc = 0x2206CCu;
        goto label_2206cc;
    }
    ctx->pc = 0x2206C4u;
    {
        const bool branch_taken_0x2206c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x2206c4) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x2206CCu;
label_2206cc:
    // 0x2206cc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2206ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2206d0:
    // 0x2206d0: 0xc0882f8  jal         func_220BE0
label_2206d4:
    if (ctx->pc == 0x2206D4u) {
        ctx->pc = 0x2206D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206D0u;
        // 0x2206d4: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206D8u;
        goto label_2206d8;
    }
    ctx->pc = 0x2206D0u;
    SET_GPR_U32(ctx, 31, 0x2206D8u);
    ctx->pc = 0x2206D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206D0u;
    // 0x2206d4: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2206D8u;
label_2206d8:
    // 0x2206d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2206d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2206dc:
    // 0x2206dc: 0xc0882f8  jal         func_220BE0
label_2206e0:
    if (ctx->pc == 0x2206E0u) {
        ctx->pc = 0x2206E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206DCu;
        // 0x2206e0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206E4u;
        goto label_2206e4;
    }
    ctx->pc = 0x2206DCu;
    SET_GPR_U32(ctx, 31, 0x2206E4u);
    ctx->pc = 0x2206E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206DCu;
    // 0x2206e0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2206E4u;
label_2206e4:
    // 0x2206e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2206e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2206e8:
    // 0x2206e8: 0xc0882f8  jal         func_220BE0
label_2206ec:
    if (ctx->pc == 0x2206ECu) {
        ctx->pc = 0x2206ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206E8u;
        // 0x2206ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206F0u;
        goto label_2206f0;
    }
    ctx->pc = 0x2206E8u;
    SET_GPR_U32(ctx, 31, 0x2206F0u);
    ctx->pc = 0x2206ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206E8u;
    // 0x2206ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2206F0u;
label_2206f0:
    // 0x2206f0: 0x10000011  b           . + 4 + (0x11 << 2)
label_2206f4:
    if (ctx->pc == 0x2206F4u) {
        ctx->pc = 0x2206F8u;
        goto label_2206f8;
    }
    ctx->pc = 0x2206F0u;
    {
        const bool branch_taken_0x2206f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2206f0) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x2206F8u;
label_2206f8:
    // 0x2206f8: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2206f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2206fc:
    // 0x2206fc: 0x1663000e  bne         $s3, $v1, . + 4 + (0xE << 2)
label_220700:
    if (ctx->pc == 0x220700u) {
        ctx->pc = 0x220704u;
        goto label_220704;
    }
    ctx->pc = 0x2206FCu;
    {
        const bool branch_taken_0x2206fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x2206fc) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x220704u;
label_220704:
    // 0x220704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x220704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220708:
    // 0x220708: 0x16430006  bne         $s2, $v1, . + 4 + (0x6 << 2)
label_22070c:
    if (ctx->pc == 0x22070Cu) {
        ctx->pc = 0x22070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220708u;
        // 0x22070c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220710u;
        goto label_220710;
    }
    ctx->pc = 0x220708u;
    {
        const bool branch_taken_0x220708 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x22070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220708u;
        // 0x22070c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220708) {
            ctx->pc = 0x220724u;
            goto label_220724;
        }
    }
    ctx->pc = 0x220710u;
label_220710:
    // 0x220710: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x220710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_220714:
    // 0x220714: 0xc0882f8  jal         func_220BE0
label_220718:
    if (ctx->pc == 0x220718u) {
        ctx->pc = 0x220718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220714u;
        // 0x220718: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22071Cu;
        goto label_22071c;
    }
    ctx->pc = 0x220714u;
    SET_GPR_U32(ctx, 31, 0x22071Cu);
    ctx->pc = 0x220718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220714u;
    // 0x220718: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x22071Cu;
label_22071c:
    // 0x22071c: 0x10000006  b           . + 4 + (0x6 << 2)
label_220720:
    if (ctx->pc == 0x220720u) {
        ctx->pc = 0x220724u;
        goto label_220724;
    }
    ctx->pc = 0x22071Cu;
    {
        const bool branch_taken_0x22071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22071c) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x220724u;
label_220724:
    // 0x220724: 0x16430004  bne         $s2, $v1, . + 4 + (0x4 << 2)
label_220728:
    if (ctx->pc == 0x220728u) {
        ctx->pc = 0x22072Cu;
        goto label_22072c;
    }
    ctx->pc = 0x220724u;
    {
        const bool branch_taken_0x220724 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x220724) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x22072Cu;
label_22072c:
    // 0x22072c: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x22072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_220730:
    // 0x220730: 0xc0882f8  jal         func_220BE0
label_220734:
    if (ctx->pc == 0x220734u) {
        ctx->pc = 0x220734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220730u;
        // 0x220734: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220738u;
        goto label_220738;
    }
    ctx->pc = 0x220730u;
    SET_GPR_U32(ctx, 31, 0x220738u);
    ctx->pc = 0x220734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220730u;
    // 0x220734: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220738u;
label_220738:
    // 0x220738: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x220738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22073c:
    // 0x22073c: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x22073cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_220740:
    // 0x220740: 0x28810029  slti        $at, $a0, 0x29
    ctx->pc = 0x220740u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
label_220744:
    // 0x220744: 0x1020011c  beqz        $at, . + 4 + (0x11C << 2)
label_220748:
    if (ctx->pc == 0x220748u) {
        ctx->pc = 0x220748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220744u;
        // 0x220748: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22074Cu;
        goto label_22074c;
    }
    ctx->pc = 0x220744u;
    {
        const bool branch_taken_0x220744 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220744u;
        // 0x220748: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220744) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x22074Cu;
label_22074c:
    // 0x22074c: 0x1263010c  beq         $s3, $v1, . + 4 + (0x10C << 2)
label_220750:
    if (ctx->pc == 0x220750u) {
        ctx->pc = 0x220754u;
        goto label_220754;
    }
    ctx->pc = 0x22074Cu;
    {
        const bool branch_taken_0x22074c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x22074c) {
            ctx->pc = 0x220B80u;
            { ctx->pc = 0x220b80; return; }
        }
    }
    ctx->pc = 0x220754u;
label_220754:
    // 0x220754: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x220754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_220758:
    // 0x220758: 0x12630100  beq         $s3, $v1, . + 4 + (0x100 << 2)
label_22075c:
    if (ctx->pc == 0x22075Cu) {
        ctx->pc = 0x22075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220758u;
        // 0x22075c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220760u;
        goto label_220760;
    }
    ctx->pc = 0x220758u;
    {
        const bool branch_taken_0x220758 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x22075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220758u;
        // 0x22075c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220758) {
            ctx->pc = 0x220B5Cu;
            { ctx->pc = 0x220b5c; return; }
        }
    }
    ctx->pc = 0x220760u;
label_220760:
    // 0x220760: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x220760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_220764:
    // 0x220764: 0x126300f7  beq         $s3, $v1, . + 4 + (0xF7 << 2)
label_220768:
    if (ctx->pc == 0x220768u) {
        ctx->pc = 0x220768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220764u;
        // 0x220768: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22076Cu;
        goto label_22076c;
    }
    ctx->pc = 0x220764u;
    {
        const bool branch_taken_0x220764 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x220768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220764u;
        // 0x220768: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220764) {
            ctx->pc = 0x220B44u;
            { ctx->pc = 0x220b44; return; }
        }
    }
    ctx->pc = 0x22076Cu;
label_22076c:
    // 0x22076c: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x22076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_220770:
    // 0x220770: 0x126300e8  beq         $s3, $v1, . + 4 + (0xE8 << 2)
label_220774:
    if (ctx->pc == 0x220774u) {
        ctx->pc = 0x220774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220770u;
        // 0x220774: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220778u;
        goto label_220778;
    }
    ctx->pc = 0x220770u;
    {
        const bool branch_taken_0x220770 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x220774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220770u;
        // 0x220774: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220770) {
            ctx->pc = 0x220B14u;
            { ctx->pc = 0x220b14; return; }
        }
    }
    ctx->pc = 0x220778u;
label_220778:
    // 0x220778: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x220778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_22077c:
    // 0x22077c: 0x126500d8  beq         $s3, $a1, . + 4 + (0xD8 << 2)
label_220780:
    if (ctx->pc == 0x220780u) {
        ctx->pc = 0x220780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22077Cu;
        // 0x220780: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220784u;
        goto label_220784;
    }
    ctx->pc = 0x22077Cu;
    {
        const bool branch_taken_0x22077c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x220780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22077Cu;
        // 0x220780: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22077c) {
            ctx->pc = 0x220AE0u;
            goto label_220ae0;
        }
    }
    ctx->pc = 0x220784u;
label_220784:
    // 0x220784: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x220784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_220788:
    // 0x220788: 0x126300c9  beq         $s3, $v1, . + 4 + (0xC9 << 2)
label_22078c:
    if (ctx->pc == 0x22078Cu) {
        ctx->pc = 0x22078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220788u;
        // 0x22078c: 0x2409001f  addiu       $t1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220790u;
        goto label_220790;
    }
    ctx->pc = 0x220788u;
    {
        const bool branch_taken_0x220788 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x22078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220788u;
        // 0x22078c: 0x2409001f  addiu       $t1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220788) {
            ctx->pc = 0x220AB0u;
            goto label_220ab0;
        }
    }
    ctx->pc = 0x220790u;
label_220790:
    // 0x220790: 0x126900bb  beq         $s3, $t1, . + 4 + (0xBB << 2)
label_220794:
    if (ctx->pc == 0x220794u) {
        ctx->pc = 0x220794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220790u;
        // 0x220794: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220798u;
        goto label_220798;
    }
    ctx->pc = 0x220790u;
    {
        const bool branch_taken_0x220790 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 9));
        ctx->pc = 0x220794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220790u;
        // 0x220794: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220790) {
            ctx->pc = 0x220A80u;
            goto label_220a80;
        }
    }
    ctx->pc = 0x220798u;
label_220798:
    // 0x220798: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x220798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_22079c:
    // 0x22079c: 0x126300ad  beq         $s3, $v1, . + 4 + (0xAD << 2)
label_2207a0:
    if (ctx->pc == 0x2207A0u) {
        ctx->pc = 0x2207A4u;
        goto label_2207a4;
    }
    ctx->pc = 0x22079Cu;
    {
        const bool branch_taken_0x22079c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x22079c) {
            ctx->pc = 0x220A54u;
            goto label_220a54;
        }
    }
    ctx->pc = 0x2207A4u;
label_2207a4:
    // 0x2207a4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2207a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2207a8:
    // 0x2207a8: 0x126500a2  beq         $s3, $a1, . + 4 + (0xA2 << 2)
label_2207ac:
    if (ctx->pc == 0x2207ACu) {
        ctx->pc = 0x2207ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207A8u;
        // 0x2207ac: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2207B0u;
        goto label_2207b0;
    }
    ctx->pc = 0x2207A8u;
    {
        const bool branch_taken_0x2207a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x2207ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207A8u;
        // 0x2207ac: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207a8) {
            ctx->pc = 0x220A34u;
            goto label_220a34;
        }
    }
    ctx->pc = 0x2207B0u;
label_2207b0:
    // 0x2207b0: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2207b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2207b4:
    // 0x2207b4: 0x12630093  beq         $s3, $v1, . + 4 + (0x93 << 2)
label_2207b8:
    if (ctx->pc == 0x2207B8u) {
        ctx->pc = 0x2207B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207B4u;
        // 0x2207b8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2207BCu;
        goto label_2207bc;
    }
    ctx->pc = 0x2207B4u;
    {
        const bool branch_taken_0x2207b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2207B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207B4u;
        // 0x2207b8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207b4) {
            ctx->pc = 0x220A04u;
            goto label_220a04;
        }
    }
    ctx->pc = 0x2207BCu;
label_2207bc:
    // 0x2207bc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2207bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2207c0:
    // 0x2207c0: 0x12630084  beq         $s3, $v1, . + 4 + (0x84 << 2)
label_2207c4:
    if (ctx->pc == 0x2207C4u) {
        ctx->pc = 0x2207C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207C0u;
        // 0x2207c4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2207C8u;
        goto label_2207c8;
    }
    ctx->pc = 0x2207C0u;
    {
        const bool branch_taken_0x2207c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2207C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207C0u;
        // 0x2207c4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207c0) {
            ctx->pc = 0x2209D4u;
            goto label_2209d4;
        }
    }
    ctx->pc = 0x2207C8u;
label_2207c8:
    // 0x2207c8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2207c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2207cc:
    // 0x2207cc: 0x12630078  beq         $s3, $v1, . + 4 + (0x78 << 2)
label_2207d0:
    if (ctx->pc == 0x2207D0u) {
        ctx->pc = 0x2207D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207CCu;
        // 0x2207d0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2207D4u;
        goto label_2207d4;
    }
    ctx->pc = 0x2207CCu;
    {
        const bool branch_taken_0x2207cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2207D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207CCu;
        // 0x2207d0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207cc) {
            ctx->pc = 0x2209B0u;
            goto label_2209b0;
        }
    }
    ctx->pc = 0x2207D4u;
label_2207d4:
    // 0x2207d4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2207d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2207d8:
    // 0x2207d8: 0x12630074  beq         $s3, $v1, . + 4 + (0x74 << 2)
label_2207dc:
    if (ctx->pc == 0x2207DCu) {
        ctx->pc = 0x2207DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207D8u;
        // 0x2207dc: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2207E0u;
        goto label_2207e0;
    }
    ctx->pc = 0x2207D8u;
    {
        const bool branch_taken_0x2207d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2207DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207D8u;
        // 0x2207dc: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207d8) {
            ctx->pc = 0x2209ACu;
            goto label_2209ac;
        }
    }
    ctx->pc = 0x2207E0u;
label_2207e0:
    // 0x2207e0: 0x12680060  beq         $s3, $t0, . + 4 + (0x60 << 2)
label_2207e4:
    if (ctx->pc == 0x2207E4u) {
        ctx->pc = 0x2207E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207E0u;
        // 0x2207e4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2207E8u;
        goto label_2207e8;
    }
    ctx->pc = 0x2207E0u;
    {
        const bool branch_taken_0x2207e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 8));
        ctx->pc = 0x2207E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207E0u;
        // 0x2207e4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207e0) {
            ctx->pc = 0x220964u;
            goto label_220964;
        }
    }
    ctx->pc = 0x2207E8u;
label_2207e8:
    // 0x2207e8: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2207e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2207ec:
    // 0x2207ec: 0x12670054  beq         $s3, $a3, . + 4 + (0x54 << 2)
label_2207f0:
    if (ctx->pc == 0x2207F0u) {
        ctx->pc = 0x2207F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207ECu;
        // 0x2207f0: 0x2c810003  sltiu       $at, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2207F4u;
        goto label_2207f4;
    }
    ctx->pc = 0x2207ECu;
    {
        const bool branch_taken_0x2207ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        ctx->pc = 0x2207F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207ECu;
        // 0x2207f0: 0x2c810003  sltiu       $at, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207ec) {
            ctx->pc = 0x220940u;
            goto label_220940;
        }
    }
    ctx->pc = 0x2207F4u;
label_2207f4:
    // 0x2207f4: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2207f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2207f8:
    // 0x2207f8: 0x1266004b  beq         $s3, $a2, . + 4 + (0x4B << 2)
label_2207fc:
    if (ctx->pc == 0x2207FCu) {
        ctx->pc = 0x2207FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207F8u;
        // 0x2207fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220800u;
        goto label_220800;
    }
    ctx->pc = 0x2207F8u;
    {
        const bool branch_taken_0x2207f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 6));
        ctx->pc = 0x2207FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207F8u;
        // 0x2207fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207f8) {
            ctx->pc = 0x220928u;
            goto label_220928;
        }
    }
    ctx->pc = 0x220800u;
label_220800:
    // 0x220800: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x220800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_220804:
    // 0x220804: 0x12630038  beq         $s3, $v1, . + 4 + (0x38 << 2)
label_220808:
    if (ctx->pc == 0x220808u) {
        ctx->pc = 0x220808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220804u;
        // 0x220808: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22080Cu;
        goto label_22080c;
    }
    ctx->pc = 0x220804u;
    {
        const bool branch_taken_0x220804 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x220808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220804u;
        // 0x220808: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220804) {
            ctx->pc = 0x2208E8u;
            goto label_2208e8;
        }
    }
    ctx->pc = 0x22080Cu;
label_22080c:
    // 0x22080c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x22080cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220810:
    // 0x220810: 0x12650021  beq         $s3, $a1, . + 4 + (0x21 << 2)
label_220814:
    if (ctx->pc == 0x220814u) {
        ctx->pc = 0x220814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220810u;
        // 0x220814: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220818u;
        goto label_220818;
    }
    ctx->pc = 0x220810u;
    {
        const bool branch_taken_0x220810 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x220814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220810u;
        // 0x220814: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220810) {
            ctx->pc = 0x220898u;
            goto label_220898;
        }
    }
    ctx->pc = 0x220818u;
label_220818:
    // 0x220818: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_22081c:
    if (ctx->pc == 0x22081Cu) {
        ctx->pc = 0x22081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220818u;
        // 0x22081c: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220820u;
        goto label_220820;
    }
    ctx->pc = 0x220818u;
    {
        const bool branch_taken_0x220818 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220818u;
        // 0x22081c: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220818) {
            ctx->pc = 0x220828u;
            goto label_220828;
        }
    }
    ctx->pc = 0x220820u;
label_220820:
    // 0x220820: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_220824:
    if (ctx->pc == 0x220824u) {
        ctx->pc = 0x220824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220820u;
        // 0x220824: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220828u;
        goto label_220828;
    }
    ctx->pc = 0x220820u;
    {
        const bool branch_taken_0x220820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220820u;
        // 0x220824: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220820) {
            ctx->pc = 0x220BBCu;
            { ctx->pc = 0x220bbc; return; }
        }
    }
    ctx->pc = 0x220828u;
label_220828:
    // 0x220828: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x220828u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22082c:
    // 0x22082c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_220830:
    if (ctx->pc == 0x220830u) {
        ctx->pc = 0x220830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22082Cu;
        // 0x220830: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220834u;
        goto label_220834;
    }
    ctx->pc = 0x22082Cu;
    {
        const bool branch_taken_0x22082c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x220830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22082Cu;
        // 0x220830: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22082c) {
            ctx->pc = 0x22083Cu;
            goto label_22083c;
        }
    }
    ctx->pc = 0x220834u;
label_220834:
    // 0x220834: 0x14870005  bne         $a0, $a3, . + 4 + (0x5 << 2)
label_220838:
    if (ctx->pc == 0x220838u) {
        ctx->pc = 0x220838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220834u;
        // 0x220838: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22083Cu;
        goto label_22083c;
    }
    ctx->pc = 0x220834u;
    {
        const bool branch_taken_0x220834 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x220838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220834u;
        // 0x220838: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220834) {
            ctx->pc = 0x22084Cu;
            goto label_22084c;
        }
    }
    ctx->pc = 0x22083Cu;
label_22083c:
    // 0x22083c: 0xc0882f8  jal         func_220BE0
label_220840:
    if (ctx->pc == 0x220840u) {
        ctx->pc = 0x220844u;
        goto label_220844;
    }
    ctx->pc = 0x22083Cu;
    SET_GPR_U32(ctx, 31, 0x220844u);
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220844u;
label_220844:
    // 0x220844: 0x100000dc  b           . + 4 + (0xDC << 2)
label_220848:
    if (ctx->pc == 0x220848u) {
        ctx->pc = 0x22084Cu;
        goto label_22084c;
    }
    ctx->pc = 0x220844u;
    {
        const bool branch_taken_0x220844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220844) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x22084Cu;
label_22084c:
    // 0x22084c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_220850:
    if (ctx->pc == 0x220850u) {
        ctx->pc = 0x220850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22084Cu;
        // 0x220850: 0x2405004a  addiu       $a1, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220854u;
        goto label_220854;
    }
    ctx->pc = 0x22084Cu;
    {
        const bool branch_taken_0x22084c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22084Cu;
        // 0x220850: 0x2405004a  addiu       $a1, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22084c) {
            ctx->pc = 0x220868u;
            goto label_220868;
        }
    }
    ctx->pc = 0x220854u;
label_220854:
    // 0x220854: 0x10860003  beq         $a0, $a2, . + 4 + (0x3 << 2)
label_220858:
    if (ctx->pc == 0x220858u) {
        ctx->pc = 0x220858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220854u;
        // 0x220858: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22085Cu;
        goto label_22085c;
    }
    ctx->pc = 0x220854u;
    {
        const bool branch_taken_0x220854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x220858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220854u;
        // 0x220858: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220854) {
            ctx->pc = 0x220864u;
            goto label_220864;
        }
    }
    ctx->pc = 0x22085Cu;
label_22085c:
    // 0x22085c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_220860:
    if (ctx->pc == 0x220860u) {
        ctx->pc = 0x220864u;
        goto label_220864;
    }
    ctx->pc = 0x22085Cu;
    {
        const bool branch_taken_0x22085c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22085c) {
            ctx->pc = 0x220878u;
            goto label_220878;
        }
    }
    ctx->pc = 0x220864u;
label_220864:
    // 0x220864: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x220864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_220868:
    // 0x220868: 0xc0882f8  jal         func_220BE0
label_22086c:
    if (ctx->pc == 0x22086Cu) {
        ctx->pc = 0x220870u;
        goto label_220870;
    }
    ctx->pc = 0x220868u;
    SET_GPR_U32(ctx, 31, 0x220870u);
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220870u;
label_220870:
    // 0x220870: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_220874:
    if (ctx->pc == 0x220874u) {
        ctx->pc = 0x220878u;
        goto label_220878;
    }
    ctx->pc = 0x220870u;
    {
        const bool branch_taken_0x220870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220870) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220878u;
label_220878:
    // 0x220878: 0x10880003  beq         $a0, $t0, . + 4 + (0x3 << 2)
label_22087c:
    if (ctx->pc == 0x22087Cu) {
        ctx->pc = 0x22087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220878u;
        // 0x22087c: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220880u;
        goto label_220880;
    }
    ctx->pc = 0x220878u;
    {
        const bool branch_taken_0x220878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x22087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220878u;
        // 0x22087c: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220878) {
            ctx->pc = 0x220888u;
            goto label_220888;
        }
    }
    ctx->pc = 0x220880u;
label_220880:
    // 0x220880: 0x148900cd  bne         $a0, $t1, . + 4 + (0xCD << 2)
label_220884:
    if (ctx->pc == 0x220884u) {
        ctx->pc = 0x220888u;
        goto label_220888;
    }
    ctx->pc = 0x220880u;
    {
        const bool branch_taken_0x220880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        if (branch_taken_0x220880) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220888u;
label_220888:
    // 0x220888: 0xc0882f8  jal         func_220BE0
label_22088c:
    if (ctx->pc == 0x22088Cu) {
        ctx->pc = 0x220890u;
        goto label_220890;
    }
    ctx->pc = 0x220888u;
    SET_GPR_U32(ctx, 31, 0x220890u);
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220890u;
label_220890:
    // 0x220890: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_220894:
    if (ctx->pc == 0x220894u) {
        ctx->pc = 0x220898u;
        goto label_220898;
    }
    ctx->pc = 0x220890u;
    {
        const bool branch_taken_0x220890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220890) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220898u;
label_220898:
    // 0x220898: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_22089c:
    if (ctx->pc == 0x22089Cu) {
        ctx->pc = 0x2208A0u;
        goto label_2208a0;
    }
    ctx->pc = 0x220898u;
    {
        const bool branch_taken_0x220898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x220898) {
            ctx->pc = 0x2208A8u;
            goto label_2208a8;
        }
    }
    ctx->pc = 0x2208A0u;
label_2208a0:
    // 0x2208a0: 0x14850005  bne         $a0, $a1, . + 4 + (0x5 << 2)
label_2208a4:
    if (ctx->pc == 0x2208A4u) {
        ctx->pc = 0x2208A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208A0u;
        // 0x2208a4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2208A8u;
        goto label_2208a8;
    }
    ctx->pc = 0x2208A0u;
    {
        const bool branch_taken_0x2208a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2208A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208A0u;
        // 0x2208a4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208a0) {
            ctx->pc = 0x2208B8u;
            goto label_2208b8;
        }
    }
    ctx->pc = 0x2208A8u;
label_2208a8:
    // 0x2208a8: 0xc0882f8  jal         func_220BE0
label_2208ac:
    if (ctx->pc == 0x2208ACu) {
        ctx->pc = 0x2208ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208A8u;
        // 0x2208ac: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2208B0u;
        goto label_2208b0;
    }
    ctx->pc = 0x2208A8u;
    SET_GPR_U32(ctx, 31, 0x2208B0u);
    ctx->pc = 0x2208ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2208A8u;
    // 0x2208ac: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2208B0u;
label_2208b0:
    // 0x2208b0: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_2208b4:
    if (ctx->pc == 0x2208B4u) {
        ctx->pc = 0x2208B8u;
        goto label_2208b8;
    }
    ctx->pc = 0x2208B0u;
    {
        const bool branch_taken_0x2208b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2208b0) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x2208B8u;
label_2208b8:
    // 0x2208b8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_2208bc:
    if (ctx->pc == 0x2208BCu) {
        ctx->pc = 0x2208BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208B8u;
        // 0x2208bc: 0x2405004a  addiu       $a1, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2208C0u;
        goto label_2208c0;
    }
    ctx->pc = 0x2208B8u;
    {
        const bool branch_taken_0x2208b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2208BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208B8u;
        // 0x2208bc: 0x2405004a  addiu       $a1, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208b8) {
            ctx->pc = 0x2208D0u;
            goto label_2208d0;
        }
    }
    ctx->pc = 0x2208C0u;
label_2208c0:
    // 0x2208c0: 0xc0882f8  jal         func_220BE0
label_2208c4:
    if (ctx->pc == 0x2208C4u) {
        ctx->pc = 0x2208C8u;
        goto label_2208c8;
    }
    ctx->pc = 0x2208C0u;
    SET_GPR_U32(ctx, 31, 0x2208C8u);
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2208C8u;
label_2208c8:
    // 0x2208c8: 0x100000bb  b           . + 4 + (0xBB << 2)
label_2208cc:
    if (ctx->pc == 0x2208CCu) {
        ctx->pc = 0x2208D0u;
        goto label_2208d0;
    }
    ctx->pc = 0x2208C8u;
    {
        const bool branch_taken_0x2208c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2208c8) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x2208D0u;
label_2208d0:
    // 0x2208d0: 0x148900b9  bne         $a0, $t1, . + 4 + (0xB9 << 2)
label_2208d4:
    if (ctx->pc == 0x2208D4u) {
        ctx->pc = 0x2208D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208D0u;
        // 0x2208d4: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2208D8u;
        goto label_2208d8;
    }
    ctx->pc = 0x2208D0u;
    {
        const bool branch_taken_0x2208d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x2208D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208D0u;
        // 0x2208d4: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208d0) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x2208D8u;
label_2208d8:
    // 0x2208d8: 0xc0882f8  jal         func_220BE0
label_2208dc:
    if (ctx->pc == 0x2208DCu) {
        ctx->pc = 0x2208E0u;
        goto label_2208e0;
    }
    ctx->pc = 0x2208D8u;
    SET_GPR_U32(ctx, 31, 0x2208E0u);
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2208E0u;
label_2208e0:
    // 0x2208e0: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_2208e4:
    if (ctx->pc == 0x2208E4u) {
        ctx->pc = 0x2208E8u;
        goto label_2208e8;
    }
    ctx->pc = 0x2208E0u;
    {
        const bool branch_taken_0x2208e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2208e0) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x2208E8u;
label_2208e8:
    // 0x2208e8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_2208ec:
    if (ctx->pc == 0x2208ECu) {
        ctx->pc = 0x2208ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208E8u;
        // 0x2208ec: 0x240500be  addiu       $a1, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2208F0u;
        goto label_2208f0;
    }
    ctx->pc = 0x2208E8u;
    {
        const bool branch_taken_0x2208e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2208ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208E8u;
        // 0x2208ec: 0x240500be  addiu       $a1, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208e8) {
            ctx->pc = 0x220918u;
            goto label_220918;
        }
    }
    ctx->pc = 0x2208F0u;
label_2208f0:
    // 0x2208f0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2208f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2208f4:
    // 0x2208f4: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_2208f8:
    if (ctx->pc == 0x2208F8u) {
        ctx->pc = 0x2208F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208F4u;
        // 0x2208f8: 0x2483ffeb  addiu       $v1, $a0, -0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967275));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2208FCu;
        goto label_2208fc;
    }
    ctx->pc = 0x2208F4u;
    {
        const bool branch_taken_0x2208f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2208F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208F4u;
        // 0x2208f8: 0x2483ffeb  addiu       $v1, $a0, -0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208f4) {
            ctx->pc = 0x220914u;
            goto label_220914;
        }
    }
    ctx->pc = 0x2208FCu;
label_2208fc:
    // 0x2208fc: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2208fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_220900:
    // 0x220900: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_220904:
    if (ctx->pc == 0x220904u) {
        ctx->pc = 0x220908u;
        goto label_220908;
    }
    ctx->pc = 0x220900u;
    {
        const bool branch_taken_0x220900 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x220900) {
            ctx->pc = 0x220914u;
            goto label_220914;
        }
    }
    ctx->pc = 0x220908u;
label_220908:
    // 0x220908: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x220908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_22090c:
    // 0x22090c: 0x148300aa  bne         $a0, $v1, . + 4 + (0xAA << 2)
label_220910:
    if (ctx->pc == 0x220910u) {
        ctx->pc = 0x220914u;
        goto label_220914;
    }
    ctx->pc = 0x22090Cu;
    {
        const bool branch_taken_0x22090c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22090c) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220914u;
label_220914:
    // 0x220914: 0x240500be  addiu       $a1, $zero, 0xBE
    ctx->pc = 0x220914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
label_220918:
    // 0x220918: 0xc0882f8  jal         func_220BE0
label_22091c:
    if (ctx->pc == 0x22091Cu) {
        ctx->pc = 0x220920u;
        goto label_220920;
    }
    ctx->pc = 0x220918u;
    SET_GPR_U32(ctx, 31, 0x220920u);
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220920u;
label_220920:
    // 0x220920: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_220924:
    if (ctx->pc == 0x220924u) {
        ctx->pc = 0x220928u;
        goto label_220928;
    }
    ctx->pc = 0x220920u;
    {
        const bool branch_taken_0x220920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220920) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220928u;
label_220928:
    // 0x220928: 0x148300a3  bne         $a0, $v1, . + 4 + (0xA3 << 2)
label_22092c:
    if (ctx->pc == 0x22092Cu) {
        ctx->pc = 0x22092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220928u;
        // 0x22092c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220930u;
        goto label_220930;
    }
    ctx->pc = 0x220928u;
    {
        const bool branch_taken_0x220928 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x22092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220928u;
        // 0x22092c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220928) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220930u;
label_220930:
    // 0x220930: 0xc0882f8  jal         func_220BE0
label_220934:
    if (ctx->pc == 0x220934u) {
        ctx->pc = 0x220938u;
        goto label_220938;
    }
    ctx->pc = 0x220930u;
    SET_GPR_U32(ctx, 31, 0x220938u);
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220938u;
label_220938:
    // 0x220938: 0x1000009f  b           . + 4 + (0x9F << 2)
label_22093c:
    if (ctx->pc == 0x22093Cu) {
        ctx->pc = 0x220940u;
        goto label_220940;
    }
    ctx->pc = 0x220938u;
    {
        const bool branch_taken_0x220938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220938) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220940u;
label_220940:
    // 0x220940: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_220944:
    if (ctx->pc == 0x220944u) {
        ctx->pc = 0x220944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220940u;
        // 0x220944: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220948u;
        goto label_220948;
    }
    ctx->pc = 0x220940u;
    {
        const bool branch_taken_0x220940 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x220944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220940u;
        // 0x220944: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220940) {
            ctx->pc = 0x220954u;
            goto label_220954;
        }
    }
    ctx->pc = 0x220948u;
label_220948:
    // 0x220948: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x220948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22094c:
    // 0x22094c: 0x1483009a  bne         $a0, $v1, . + 4 + (0x9A << 2)
label_220950:
    if (ctx->pc == 0x220950u) {
        ctx->pc = 0x220954u;
        goto label_220954;
    }
    ctx->pc = 0x22094Cu;
    {
        const bool branch_taken_0x22094c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22094c) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220954u;
label_220954:
    // 0x220954: 0xc0882f8  jal         func_220BE0
label_220958:
    if (ctx->pc == 0x220958u) {
        ctx->pc = 0x22095Cu;
        goto label_22095c;
    }
    ctx->pc = 0x220954u;
    SET_GPR_U32(ctx, 31, 0x22095Cu);
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x22095Cu;
label_22095c:
    // 0x22095c: 0x10000096  b           . + 4 + (0x96 << 2)
label_220960:
    if (ctx->pc == 0x220960u) {
        ctx->pc = 0x220964u;
        goto label_220964;
    }
    ctx->pc = 0x22095Cu;
    {
        const bool branch_taken_0x22095c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22095c) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220964u;
label_220964:
    // 0x220964: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_220968:
    if (ctx->pc == 0x220968u) {
        ctx->pc = 0x220968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220964u;
        // 0x220968: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22096Cu;
        goto label_22096c;
    }
    ctx->pc = 0x220964u;
    {
        const bool branch_taken_0x220964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220964u;
        // 0x220968: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220964) {
            ctx->pc = 0x22099Cu;
            goto label_22099c;
        }
    }
    ctx->pc = 0x22096Cu;
label_22096c:
    // 0x22096c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_220970:
    // 0x220970: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_220974:
    if (ctx->pc == 0x220974u) {
        ctx->pc = 0x220974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220970u;
        // 0x220974: 0x2483ffeb  addiu       $v1, $a0, -0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967275));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220978u;
        goto label_220978;
    }
    ctx->pc = 0x220970u;
    {
        const bool branch_taken_0x220970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220970u;
        // 0x220974: 0x2483ffeb  addiu       $v1, $a0, -0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220970) {
            ctx->pc = 0x220998u;
            goto label_220998;
        }
    }
    ctx->pc = 0x220978u;
label_220978:
    // 0x220978: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x220978u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22097c:
    // 0x22097c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_220980:
    if (ctx->pc == 0x220980u) {
        ctx->pc = 0x220984u;
        goto label_220984;
    }
    ctx->pc = 0x22097Cu;
    {
        const bool branch_taken_0x22097c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x22097c) {
            ctx->pc = 0x220998u;
            goto label_220998;
        }
    }
    ctx->pc = 0x220984u;
label_220984:
    // 0x220984: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x220984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_220988:
    // 0x220988: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_22098c:
    if (ctx->pc == 0x22098Cu) {
        ctx->pc = 0x22098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220988u;
        // 0x22098c: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220990u;
        goto label_220990;
    }
    ctx->pc = 0x220988u;
    {
        const bool branch_taken_0x220988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220988u;
        // 0x22098c: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220988) {
            ctx->pc = 0x220998u;
            goto label_220998;
        }
    }
    ctx->pc = 0x220990u;
label_220990:
    // 0x220990: 0x14830089  bne         $a0, $v1, . + 4 + (0x89 << 2)
label_220994:
    if (ctx->pc == 0x220994u) {
        ctx->pc = 0x220998u;
        goto label_220998;
    }
    ctx->pc = 0x220990u;
    {
        const bool branch_taken_0x220990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x220990) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220998u;
label_220998:
    // 0x220998: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x220998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_22099c:
    // 0x22099c: 0xc0882f8  jal         func_220BE0
label_2209a0:
    if (ctx->pc == 0x2209A0u) {
        ctx->pc = 0x2209A4u;
        goto label_2209a4;
    }
    ctx->pc = 0x22099Cu;
    SET_GPR_U32(ctx, 31, 0x2209A4u);
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2209A4u;
label_2209a4:
    // 0x2209a4: 0x10000084  b           . + 4 + (0x84 << 2)
label_2209a8:
    if (ctx->pc == 0x2209A8u) {
        ctx->pc = 0x2209ACu;
        goto label_2209ac;
    }
    ctx->pc = 0x2209A4u;
    {
        const bool branch_taken_0x2209a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2209a4) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x2209ACu;
label_2209ac:
    // 0x2209ac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2209acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2209b0:
    // 0x2209b0: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_2209b4:
    if (ctx->pc == 0x2209B4u) {
        ctx->pc = 0x2209B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209B0u;
        // 0x2209b4: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2209B8u;
        goto label_2209b8;
    }
    ctx->pc = 0x2209B0u;
    {
        const bool branch_taken_0x2209b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2209B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209B0u;
        // 0x2209b4: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209b0) {
            ctx->pc = 0x2209C4u;
            goto label_2209c4;
        }
    }
    ctx->pc = 0x2209B8u;
label_2209b8:
    // 0x2209b8: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2209b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2209bc:
    // 0x2209bc: 0x1483007e  bne         $a0, $v1, . + 4 + (0x7E << 2)
label_2209c0:
    if (ctx->pc == 0x2209C0u) {
        ctx->pc = 0x2209C4u;
        goto label_2209c4;
    }
    ctx->pc = 0x2209BCu;
    {
        const bool branch_taken_0x2209bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2209bc) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x2209C4u;
label_2209c4:
    // 0x2209c4: 0xc0882f8  jal         func_220BE0
label_2209c8:
    if (ctx->pc == 0x2209C8u) {
        ctx->pc = 0x2209CCu;
        goto label_2209cc;
    }
    ctx->pc = 0x2209C4u;
    SET_GPR_U32(ctx, 31, 0x2209CCu);
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2209CCu;
label_2209cc:
    // 0x2209cc: 0x1000007a  b           . + 4 + (0x7A << 2)
label_2209d0:
    if (ctx->pc == 0x2209D0u) {
        ctx->pc = 0x2209D4u;
        goto label_2209d4;
    }
    ctx->pc = 0x2209CCu;
    {
        const bool branch_taken_0x2209cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2209cc) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x2209D4u;
label_2209d4:
    // 0x2209d4: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_2209d8:
    if (ctx->pc == 0x2209D8u) {
        ctx->pc = 0x2209D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209D4u;
        // 0x2209d8: 0x240500d7  addiu       $a1, $zero, 0xD7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2209DCu;
        goto label_2209dc;
    }
    ctx->pc = 0x2209D4u;
    {
        const bool branch_taken_0x2209d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2209D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209D4u;
        // 0x2209d8: 0x240500d7  addiu       $a1, $zero, 0xD7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209d4) {
            ctx->pc = 0x2209F4u;
            goto label_2209f4;
        }
    }
    ctx->pc = 0x2209DCu;
label_2209dc:
    // 0x2209dc: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2209dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2209e0:
    // 0x2209e0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2209e4:
    if (ctx->pc == 0x2209E4u) {
        ctx->pc = 0x2209E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209E0u;
        // 0x2209e4: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2209E8u;
        goto label_2209e8;
    }
    ctx->pc = 0x2209E0u;
    {
        const bool branch_taken_0x2209e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2209E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209E0u;
        // 0x2209e4: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209e0) {
            ctx->pc = 0x2209F0u;
            goto label_2209f0;
        }
    }
    ctx->pc = 0x2209E8u;
label_2209e8:
    // 0x2209e8: 0x14830073  bne         $a0, $v1, . + 4 + (0x73 << 2)
label_2209ec:
    if (ctx->pc == 0x2209ECu) {
        ctx->pc = 0x2209F0u;
        goto label_2209f0;
    }
    ctx->pc = 0x2209E8u;
    {
        const bool branch_taken_0x2209e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2209e8) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x2209F0u;
label_2209f0:
    // 0x2209f0: 0x240500d7  addiu       $a1, $zero, 0xD7
    ctx->pc = 0x2209f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
label_2209f4:
    // 0x2209f4: 0xc0882f8  jal         func_220BE0
label_2209f8:
    if (ctx->pc == 0x2209F8u) {
        ctx->pc = 0x2209FCu;
        goto label_2209fc;
    }
    ctx->pc = 0x2209F4u;
    SET_GPR_U32(ctx, 31, 0x2209FCu);
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x2209FCu;
label_2209fc:
    // 0x2209fc: 0x1000006e  b           . + 4 + (0x6E << 2)
label_220a00:
    if (ctx->pc == 0x220A00u) {
        ctx->pc = 0x220A04u;
        goto label_220a04;
    }
    ctx->pc = 0x2209FCu;
    {
        const bool branch_taken_0x2209fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2209fc) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220A04u;
label_220a04:
    // 0x220a04: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_220a08:
    if (ctx->pc == 0x220A08u) {
        ctx->pc = 0x220A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A04u;
        // 0x220a08: 0x240500bd  addiu       $a1, $zero, 0xBD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220A0Cu;
        goto label_220a0c;
    }
    ctx->pc = 0x220A04u;
    {
        const bool branch_taken_0x220a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A04u;
        // 0x220a08: 0x240500bd  addiu       $a1, $zero, 0xBD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a04) {
            ctx->pc = 0x220A24u;
            goto label_220a24;
        }
    }
    ctx->pc = 0x220A0Cu;
label_220a0c:
    // 0x220a0c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_220a10:
    // 0x220a10: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_220a14:
    if (ctx->pc == 0x220A14u) {
        ctx->pc = 0x220A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A10u;
        // 0x220a14: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220A18u;
        goto label_220a18;
    }
    ctx->pc = 0x220A10u;
    {
        const bool branch_taken_0x220a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A10u;
        // 0x220a14: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a10) {
            ctx->pc = 0x220A20u;
            goto label_220a20;
        }
    }
    ctx->pc = 0x220A18u;
label_220a18:
    // 0x220a18: 0x14830067  bne         $a0, $v1, . + 4 + (0x67 << 2)
label_220a1c:
    if (ctx->pc == 0x220A1Cu) {
        ctx->pc = 0x220A20u;
        goto label_220a20;
    }
    ctx->pc = 0x220A18u;
    {
        const bool branch_taken_0x220a18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x220a18) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220A20u;
label_220a20:
    // 0x220a20: 0x240500bd  addiu       $a1, $zero, 0xBD
    ctx->pc = 0x220a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_220a24:
    // 0x220a24: 0xc0882f8  jal         func_220BE0
label_220a28:
    if (ctx->pc == 0x220A28u) {
        ctx->pc = 0x220A2Cu;
        goto label_220a2c;
    }
    ctx->pc = 0x220A24u;
    SET_GPR_U32(ctx, 31, 0x220A2Cu);
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220A2Cu;
label_220a2c:
    // 0x220a2c: 0x10000062  b           . + 4 + (0x62 << 2)
label_220a30:
    if (ctx->pc == 0x220A30u) {
        ctx->pc = 0x220A34u;
        goto label_220a34;
    }
    ctx->pc = 0x220A2Cu;
    {
        const bool branch_taken_0x220a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220a2c) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220A34u;
label_220a34:
    // 0x220a34: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_220a38:
    if (ctx->pc == 0x220A38u) {
        ctx->pc = 0x220A3Cu;
        goto label_220a3c;
    }
    ctx->pc = 0x220A34u;
    {
        const bool branch_taken_0x220a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x220a34) {
            ctx->pc = 0x220A44u;
            goto label_220a44;
        }
    }
    ctx->pc = 0x220A3Cu;
label_220a3c:
    // 0x220a3c: 0x1485005e  bne         $a0, $a1, . + 4 + (0x5E << 2)
label_220a40:
    if (ctx->pc == 0x220A40u) {
        ctx->pc = 0x220A44u;
        goto label_220a44;
    }
    ctx->pc = 0x220A3Cu;
    {
        const bool branch_taken_0x220a3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x220a3c) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220A44u;
label_220a44:
    // 0x220a44: 0xc0882f8  jal         func_220BE0
label_220a48:
    if (ctx->pc == 0x220A48u) {
        ctx->pc = 0x220A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A44u;
        // 0x220a48: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220A4Cu;
        goto label_220a4c;
    }
    ctx->pc = 0x220A44u;
    SET_GPR_U32(ctx, 31, 0x220A4Cu);
    ctx->pc = 0x220A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A44u;
    // 0x220a48: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220A4Cu;
label_220a4c:
    // 0x220a4c: 0x1000005a  b           . + 4 + (0x5A << 2)
label_220a50:
    if (ctx->pc == 0x220A50u) {
        ctx->pc = 0x220A54u;
        goto label_220a54;
    }
    ctx->pc = 0x220A4Cu;
    {
        const bool branch_taken_0x220a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220a4c) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220A54u;
label_220a54:
    // 0x220a54: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_220a58:
    if (ctx->pc == 0x220A58u) {
        ctx->pc = 0x220A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A54u;
        // 0x220a58: 0x2483ffed  addiu       $v1, $a0, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967277));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220A5Cu;
        goto label_220a5c;
    }
    ctx->pc = 0x220A54u;
    {
        const bool branch_taken_0x220a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A54u;
        // 0x220a58: 0x2483ffed  addiu       $v1, $a0, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a54) {
            ctx->pc = 0x220A70u;
            goto label_220a70;
        }
    }
    ctx->pc = 0x220A5Cu;
label_220a5c:
    // 0x220a5c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x220a5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_220a60:
    // 0x220a60: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_220a64:
    if (ctx->pc == 0x220A64u) {
        ctx->pc = 0x220A68u;
        goto label_220a68;
    }
    ctx->pc = 0x220A60u;
    {
        const bool branch_taken_0x220a60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x220a60) {
            ctx->pc = 0x220A70u;
            goto label_220a70;
        }
    }
    ctx->pc = 0x220A68u;
label_220a68:
    // 0x220a68: 0x14850053  bne         $a0, $a1, . + 4 + (0x53 << 2)
label_220a6c:
    if (ctx->pc == 0x220A6Cu) {
        ctx->pc = 0x220A70u;
        goto label_220a70;
    }
    ctx->pc = 0x220A68u;
    {
        const bool branch_taken_0x220a68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x220a68) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220A70u;
label_220a70:
    // 0x220a70: 0xc0882f8  jal         func_220BE0
label_220a74:
    if (ctx->pc == 0x220A74u) {
        ctx->pc = 0x220A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A70u;
        // 0x220a74: 0x2405009d  addiu       $a1, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220A78u;
        goto label_220a78;
    }
    ctx->pc = 0x220A70u;
    SET_GPR_U32(ctx, 31, 0x220A78u);
    ctx->pc = 0x220A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A70u;
    // 0x220a74: 0x2405009d  addiu       $a1, $zero, 0x9D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220A78u;
label_220a78:
    // 0x220a78: 0x1000004f  b           . + 4 + (0x4F << 2)
label_220a7c:
    if (ctx->pc == 0x220A7Cu) {
        ctx->pc = 0x220A80u;
        goto label_220a80;
    }
    ctx->pc = 0x220A78u;
    {
        const bool branch_taken_0x220a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220a78) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220A80u;
label_220a80:
    // 0x220a80: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_220a84:
    if (ctx->pc == 0x220A84u) {
        ctx->pc = 0x220A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A80u;
        // 0x220a84: 0x240500bb  addiu       $a1, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220A88u;
        goto label_220a88;
    }
    ctx->pc = 0x220A80u;
    {
        const bool branch_taken_0x220a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A80u;
        // 0x220a84: 0x240500bb  addiu       $a1, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a80) {
            ctx->pc = 0x220AA0u;
            goto label_220aa0;
        }
    }
    ctx->pc = 0x220A88u;
label_220a88:
    // 0x220a88: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x220a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_220a8c:
    // 0x220a8c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_220a90:
    if (ctx->pc == 0x220A90u) {
        ctx->pc = 0x220A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A8Cu;
        // 0x220a90: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220A94u;
        goto label_220a94;
    }
    ctx->pc = 0x220A8Cu;
    {
        const bool branch_taken_0x220a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A8Cu;
        // 0x220a90: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a8c) {
            ctx->pc = 0x220A9Cu;
            goto label_220a9c;
        }
    }
    ctx->pc = 0x220A94u;
label_220a94:
    // 0x220a94: 0x14830048  bne         $a0, $v1, . + 4 + (0x48 << 2)
label_220a98:
    if (ctx->pc == 0x220A98u) {
        ctx->pc = 0x220A9Cu;
        goto label_220a9c;
    }
    ctx->pc = 0x220A94u;
    {
        const bool branch_taken_0x220a94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x220a94) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220A9Cu;
label_220a9c:
    // 0x220a9c: 0x240500bb  addiu       $a1, $zero, 0xBB
    ctx->pc = 0x220a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
label_220aa0:
    // 0x220aa0: 0xc0882f8  jal         func_220BE0
label_220aa4:
    if (ctx->pc == 0x220AA4u) {
        ctx->pc = 0x220AA8u;
        goto label_220aa8;
    }
    ctx->pc = 0x220AA0u;
    SET_GPR_U32(ctx, 31, 0x220AA8u);
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220AA8u;
label_220aa8:
    // 0x220aa8: 0x10000043  b           . + 4 + (0x43 << 2)
label_220aac:
    if (ctx->pc == 0x220AACu) {
        ctx->pc = 0x220AB0u;
        goto label_220ab0;
    }
    ctx->pc = 0x220AA8u;
    {
        const bool branch_taken_0x220aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220aa8) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220AB0u;
label_220ab0:
    // 0x220ab0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_220ab4:
    if (ctx->pc == 0x220AB4u) {
        ctx->pc = 0x220AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AB0u;
        // 0x220ab4: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220AB8u;
        goto label_220ab8;
    }
    ctx->pc = 0x220AB0u;
    {
        const bool branch_taken_0x220ab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x220AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AB0u;
        // 0x220ab4: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ab0) {
            ctx->pc = 0x220AD0u;
            goto label_220ad0;
        }
    }
    ctx->pc = 0x220AB8u;
label_220ab8:
    // 0x220ab8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x220ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220abc:
    // 0x220abc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_220ac0:
    if (ctx->pc == 0x220AC0u) {
        ctx->pc = 0x220AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220ABCu;
        // 0x220ac0: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220AC4u;
        goto label_220ac4;
    }
    ctx->pc = 0x220ABCu;
    {
        const bool branch_taken_0x220abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220ABCu;
        // 0x220ac0: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220abc) {
            ctx->pc = 0x220ACCu;
            goto label_220acc;
        }
    }
    ctx->pc = 0x220AC4u;
label_220ac4:
    // 0x220ac4: 0x1483003c  bne         $a0, $v1, . + 4 + (0x3C << 2)
label_220ac8:
    if (ctx->pc == 0x220AC8u) {
        ctx->pc = 0x220ACCu;
        goto label_220acc;
    }
    ctx->pc = 0x220AC4u;
    {
        const bool branch_taken_0x220ac4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x220ac4) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220ACCu;
label_220acc:
    // 0x220acc: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x220accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_220ad0:
    // 0x220ad0: 0xc0882f8  jal         func_220BE0
label_220ad4:
    if (ctx->pc == 0x220AD4u) {
        ctx->pc = 0x220AD8u;
        goto label_220ad8;
    }
    ctx->pc = 0x220AD0u;
    SET_GPR_U32(ctx, 31, 0x220AD8u);
    ctx->pc = 0x220BE0u;
    { ctx->pc = 0x220be0; return; }
    ctx->pc = 0x220AD8u;
label_220ad8:
    // 0x220ad8: 0x10000037  b           . + 4 + (0x37 << 2)
label_220adc:
    if (ctx->pc == 0x220ADCu) {
        ctx->pc = 0x220AE0u;
        goto label_220ae0;
    }
    ctx->pc = 0x220AD8u;
    {
        const bool branch_taken_0x220ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220ad8) {
            ctx->pc = 0x220BB8u;
            { ctx->pc = 0x220bb8; return; }
        }
    }
    ctx->pc = 0x220AE0u;
label_220ae0:
    // 0x220ae0: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_220ae4:
    if (ctx->pc == 0x220AE4u) {
        ctx->pc = 0x220AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AE0u;
        // 0x220ae4: 0x240500e4  addiu       $a1, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220AE8u;
        { ctx->pc = 0x220ae8; return; }
    }
    ctx->pc = 0x220AE0u;
    {
        const bool branch_taken_0x220ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AE0u;
        // 0x220ae4: 0x240500e4  addiu       $a1, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ae0) {
            ctx->pc = 0x220B04u;
            { ctx->pc = 0x220b04; return; }
        }
    }
    ctx->pc = 0x220AE8u;
    ctx->pc = 0x220ae8u;
    return;
}

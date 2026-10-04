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


void FUN_0019b618_part312(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2333c8u: goto label_2333c8;
        case 0x2333ccu: goto label_2333cc;
        case 0x2333d0u: goto label_2333d0;
        case 0x2333d4u: goto label_2333d4;
        case 0x2333d8u: goto label_2333d8;
        case 0x2333dcu: goto label_2333dc;
        case 0x2333e0u: goto label_2333e0;
        case 0x2333e4u: goto label_2333e4;
        case 0x2333e8u: goto label_2333e8;
        case 0x2333ecu: goto label_2333ec;
        case 0x2333f0u: goto label_2333f0;
        case 0x2333f4u: goto label_2333f4;
        case 0x2333f8u: goto label_2333f8;
        case 0x2333fcu: goto label_2333fc;
        case 0x233400u: goto label_233400;
        case 0x233404u: goto label_233404;
        case 0x233408u: goto label_233408;
        case 0x23340cu: goto label_23340c;
        case 0x233410u: goto label_233410;
        case 0x233414u: goto label_233414;
        case 0x233418u: goto label_233418;
        case 0x23341cu: goto label_23341c;
        case 0x233420u: goto label_233420;
        case 0x233424u: goto label_233424;
        case 0x233428u: goto label_233428;
        case 0x23342cu: goto label_23342c;
        case 0x233430u: goto label_233430;
        case 0x233434u: goto label_233434;
        case 0x233438u: goto label_233438;
        case 0x23343cu: goto label_23343c;
        case 0x233440u: goto label_233440;
        case 0x233444u: goto label_233444;
        case 0x233448u: goto label_233448;
        case 0x23344cu: goto label_23344c;
        case 0x233450u: goto label_233450;
        case 0x233454u: goto label_233454;
        case 0x233458u: goto label_233458;
        case 0x23345cu: goto label_23345c;
        case 0x233460u: goto label_233460;
        case 0x233464u: goto label_233464;
        case 0x233468u: goto label_233468;
        case 0x23346cu: goto label_23346c;
        case 0x233470u: goto label_233470;
        case 0x233474u: goto label_233474;
        case 0x233478u: goto label_233478;
        case 0x23347cu: goto label_23347c;
        case 0x233480u: goto label_233480;
        case 0x233484u: goto label_233484;
        case 0x233488u: goto label_233488;
        case 0x23348cu: goto label_23348c;
        case 0x233490u: goto label_233490;
        case 0x233494u: goto label_233494;
        case 0x233498u: goto label_233498;
        case 0x23349cu: goto label_23349c;
        case 0x2334a0u: goto label_2334a0;
        case 0x2334a4u: goto label_2334a4;
        case 0x2334a8u: goto label_2334a8;
        case 0x2334acu: goto label_2334ac;
        case 0x2334b0u: goto label_2334b0;
        case 0x2334b4u: goto label_2334b4;
        case 0x2334b8u: goto label_2334b8;
        case 0x2334bcu: goto label_2334bc;
        case 0x2334c0u: goto label_2334c0;
        case 0x2334c4u: goto label_2334c4;
        case 0x2334c8u: goto label_2334c8;
        case 0x2334ccu: goto label_2334cc;
        case 0x2334d0u: goto label_2334d0;
        case 0x2334d4u: goto label_2334d4;
        case 0x2334d8u: goto label_2334d8;
        case 0x2334dcu: goto label_2334dc;
        case 0x2334e0u: goto label_2334e0;
        case 0x2334e4u: goto label_2334e4;
        case 0x2334e8u: goto label_2334e8;
        case 0x2334ecu: goto label_2334ec;
        case 0x2334f0u: goto label_2334f0;
        case 0x2334f4u: goto label_2334f4;
        case 0x2334f8u: goto label_2334f8;
        case 0x2334fcu: goto label_2334fc;
        case 0x233500u: goto label_233500;
        case 0x233504u: goto label_233504;
        case 0x233508u: goto label_233508;
        case 0x23350cu: goto label_23350c;
        case 0x233510u: goto label_233510;
        case 0x233514u: goto label_233514;
        case 0x233518u: goto label_233518;
        case 0x23351cu: goto label_23351c;
        case 0x233520u: goto label_233520;
        case 0x233524u: goto label_233524;
        case 0x233528u: goto label_233528;
        case 0x23352cu: goto label_23352c;
        case 0x233530u: goto label_233530;
        case 0x233534u: goto label_233534;
        case 0x233538u: goto label_233538;
        case 0x23353cu: goto label_23353c;
        case 0x233540u: goto label_233540;
        case 0x233544u: goto label_233544;
        case 0x233548u: goto label_233548;
        case 0x23354cu: goto label_23354c;
        case 0x233550u: goto label_233550;
        case 0x233554u: goto label_233554;
        case 0x233558u: goto label_233558;
        case 0x23355cu: goto label_23355c;
        case 0x233560u: goto label_233560;
        case 0x233564u: goto label_233564;
        case 0x233568u: goto label_233568;
        case 0x23356cu: goto label_23356c;
        case 0x233570u: goto label_233570;
        case 0x233574u: goto label_233574;
        case 0x233578u: goto label_233578;
        case 0x23357cu: goto label_23357c;
        case 0x233580u: goto label_233580;
        case 0x233584u: goto label_233584;
        case 0x233588u: goto label_233588;
        case 0x23358cu: goto label_23358c;
        case 0x233590u: goto label_233590;
        case 0x233594u: goto label_233594;
        case 0x233598u: goto label_233598;
        case 0x23359cu: goto label_23359c;
        case 0x2335a0u: goto label_2335a0;
        case 0x2335a4u: goto label_2335a4;
        case 0x2335a8u: goto label_2335a8;
        case 0x2335acu: goto label_2335ac;
        case 0x2335b0u: goto label_2335b0;
        case 0x2335b4u: goto label_2335b4;
        case 0x2335b8u: goto label_2335b8;
        case 0x2335bcu: goto label_2335bc;
        case 0x2335c0u: goto label_2335c0;
        case 0x2335c4u: goto label_2335c4;
        case 0x2335c8u: goto label_2335c8;
        case 0x2335ccu: goto label_2335cc;
        case 0x2335d0u: goto label_2335d0;
        case 0x2335d4u: goto label_2335d4;
        case 0x2335d8u: goto label_2335d8;
        case 0x2335dcu: goto label_2335dc;
        case 0x2335e0u: goto label_2335e0;
        case 0x2335e4u: goto label_2335e4;
        case 0x2335e8u: goto label_2335e8;
        case 0x2335ecu: goto label_2335ec;
        case 0x2335f0u: goto label_2335f0;
        case 0x2335f4u: goto label_2335f4;
        case 0x2335f8u: goto label_2335f8;
        case 0x2335fcu: goto label_2335fc;
        case 0x233600u: goto label_233600;
        case 0x233604u: goto label_233604;
        case 0x233608u: goto label_233608;
        case 0x23360cu: goto label_23360c;
        case 0x233610u: goto label_233610;
        case 0x233614u: goto label_233614;
        case 0x233618u: goto label_233618;
        case 0x23361cu: goto label_23361c;
        case 0x233620u: goto label_233620;
        case 0x233624u: goto label_233624;
        case 0x233628u: goto label_233628;
        case 0x23362cu: goto label_23362c;
        case 0x233630u: goto label_233630;
        case 0x233634u: goto label_233634;
        case 0x233638u: goto label_233638;
        case 0x23363cu: goto label_23363c;
        case 0x233640u: goto label_233640;
        case 0x233644u: goto label_233644;
        case 0x233648u: goto label_233648;
        case 0x23364cu: goto label_23364c;
        case 0x233650u: goto label_233650;
        case 0x233654u: goto label_233654;
        case 0x233658u: goto label_233658;
        case 0x23365cu: goto label_23365c;
        case 0x233660u: goto label_233660;
        case 0x233664u: goto label_233664;
        case 0x233668u: goto label_233668;
        case 0x23366cu: goto label_23366c;
        case 0x233670u: goto label_233670;
        case 0x233674u: goto label_233674;
        case 0x233678u: goto label_233678;
        case 0x23367cu: goto label_23367c;
        case 0x233680u: goto label_233680;
        case 0x233684u: goto label_233684;
        case 0x233688u: goto label_233688;
        case 0x23368cu: goto label_23368c;
        case 0x233690u: goto label_233690;
        case 0x233694u: goto label_233694;
        case 0x233698u: goto label_233698;
        case 0x23369cu: goto label_23369c;
        case 0x2336a0u: goto label_2336a0;
        case 0x2336a4u: goto label_2336a4;
        case 0x2336a8u: goto label_2336a8;
        case 0x2336acu: goto label_2336ac;
        case 0x2336b0u: goto label_2336b0;
        case 0x2336b4u: goto label_2336b4;
        case 0x2336b8u: goto label_2336b8;
        case 0x2336bcu: goto label_2336bc;
        case 0x2336c0u: goto label_2336c0;
        case 0x2336c4u: goto label_2336c4;
        case 0x2336c8u: goto label_2336c8;
        case 0x2336ccu: goto label_2336cc;
        case 0x2336d0u: goto label_2336d0;
        case 0x2336d4u: goto label_2336d4;
        case 0x2336d8u: goto label_2336d8;
        case 0x2336dcu: goto label_2336dc;
        case 0x2336e0u: goto label_2336e0;
        case 0x2336e4u: goto label_2336e4;
        case 0x2336e8u: goto label_2336e8;
        case 0x2336ecu: goto label_2336ec;
        case 0x2336f0u: goto label_2336f0;
        case 0x2336f4u: goto label_2336f4;
        case 0x2336f8u: goto label_2336f8;
        case 0x2336fcu: goto label_2336fc;
        case 0x233700u: goto label_233700;
        case 0x233704u: goto label_233704;
        case 0x233708u: goto label_233708;
        case 0x23370cu: goto label_23370c;
        case 0x233710u: goto label_233710;
        case 0x233714u: goto label_233714;
        case 0x233718u: goto label_233718;
        case 0x23371cu: goto label_23371c;
        case 0x233720u: goto label_233720;
        case 0x233724u: goto label_233724;
        case 0x233728u: goto label_233728;
        case 0x23372cu: goto label_23372c;
        case 0x233730u: goto label_233730;
        case 0x233734u: goto label_233734;
        case 0x233738u: goto label_233738;
        case 0x23373cu: goto label_23373c;
        case 0x233740u: goto label_233740;
        case 0x233744u: goto label_233744;
        case 0x233748u: goto label_233748;
        case 0x23374cu: goto label_23374c;
        case 0x233750u: goto label_233750;
        case 0x233754u: goto label_233754;
        case 0x233758u: goto label_233758;
        case 0x23375cu: goto label_23375c;
        case 0x233760u: goto label_233760;
        case 0x233764u: goto label_233764;
        case 0x233768u: goto label_233768;
        case 0x23376cu: goto label_23376c;
        case 0x233770u: goto label_233770;
        case 0x233774u: goto label_233774;
        case 0x233778u: goto label_233778;
        case 0x23377cu: goto label_23377c;
        case 0x233780u: goto label_233780;
        case 0x233784u: goto label_233784;
        case 0x233788u: goto label_233788;
        case 0x23378cu: goto label_23378c;
        case 0x233790u: goto label_233790;
        case 0x233794u: goto label_233794;
        case 0x233798u: goto label_233798;
        case 0x23379cu: goto label_23379c;
        case 0x2337a0u: goto label_2337a0;
        case 0x2337a4u: goto label_2337a4;
        case 0x2337a8u: goto label_2337a8;
        case 0x2337acu: goto label_2337ac;
        case 0x2337b0u: goto label_2337b0;
        case 0x2337b4u: goto label_2337b4;
        case 0x2337b8u: goto label_2337b8;
        case 0x2337bcu: goto label_2337bc;
        case 0x2337c0u: goto label_2337c0;
        case 0x2337c4u: goto label_2337c4;
        case 0x2337c8u: goto label_2337c8;
        case 0x2337ccu: goto label_2337cc;
        case 0x2337d0u: goto label_2337d0;
        case 0x2337d4u: goto label_2337d4;
        case 0x2337d8u: goto label_2337d8;
        case 0x2337dcu: goto label_2337dc;
        case 0x2337e0u: goto label_2337e0;
        case 0x2337e4u: goto label_2337e4;
        case 0x2337e8u: goto label_2337e8;
        case 0x2337ecu: goto label_2337ec;
        case 0x2337f0u: goto label_2337f0;
        case 0x2337f4u: goto label_2337f4;
        case 0x2337f8u: goto label_2337f8;
        case 0x2337fcu: goto label_2337fc;
        case 0x233800u: goto label_233800;
        case 0x233804u: goto label_233804;
        case 0x233808u: goto label_233808;
        case 0x23380cu: goto label_23380c;
        case 0x233810u: goto label_233810;
        case 0x233814u: goto label_233814;
        case 0x233818u: goto label_233818;
        case 0x23381cu: goto label_23381c;
        case 0x233820u: goto label_233820;
        case 0x233824u: goto label_233824;
        case 0x233828u: goto label_233828;
        case 0x23382cu: goto label_23382c;
        case 0x233830u: goto label_233830;
        case 0x233834u: goto label_233834;
        case 0x233838u: goto label_233838;
        case 0x23383cu: goto label_23383c;
        case 0x233840u: goto label_233840;
        case 0x233844u: goto label_233844;
        case 0x233848u: goto label_233848;
        case 0x23384cu: goto label_23384c;
        case 0x233850u: goto label_233850;
        case 0x233854u: goto label_233854;
        case 0x233858u: goto label_233858;
        case 0x23385cu: goto label_23385c;
        case 0x233860u: goto label_233860;
        case 0x233864u: goto label_233864;
        case 0x233868u: goto label_233868;
        case 0x23386cu: goto label_23386c;
        case 0x233870u: goto label_233870;
        case 0x233874u: goto label_233874;
        case 0x233878u: goto label_233878;
        case 0x23387cu: goto label_23387c;
        case 0x233880u: goto label_233880;
        case 0x233884u: goto label_233884;
        case 0x233888u: goto label_233888;
        case 0x23388cu: goto label_23388c;
        case 0x233890u: goto label_233890;
        case 0x233894u: goto label_233894;
        case 0x233898u: goto label_233898;
        case 0x23389cu: goto label_23389c;
        case 0x2338a0u: goto label_2338a0;
        case 0x2338a4u: goto label_2338a4;
        case 0x2338a8u: goto label_2338a8;
        case 0x2338acu: goto label_2338ac;
        case 0x2338b0u: goto label_2338b0;
        case 0x2338b4u: goto label_2338b4;
        case 0x2338b8u: goto label_2338b8;
        case 0x2338bcu: goto label_2338bc;
        case 0x2338c0u: goto label_2338c0;
        case 0x2338c4u: goto label_2338c4;
        case 0x2338c8u: goto label_2338c8;
        case 0x2338ccu: goto label_2338cc;
        case 0x2338d0u: goto label_2338d0;
        case 0x2338d4u: goto label_2338d4;
        case 0x2338d8u: goto label_2338d8;
        case 0x2338dcu: goto label_2338dc;
        case 0x2338e0u: goto label_2338e0;
        case 0x2338e4u: goto label_2338e4;
        case 0x2338e8u: goto label_2338e8;
        case 0x2338ecu: goto label_2338ec;
        case 0x2338f0u: goto label_2338f0;
        case 0x2338f4u: goto label_2338f4;
        case 0x2338f8u: goto label_2338f8;
        case 0x2338fcu: goto label_2338fc;
        case 0x233900u: goto label_233900;
        case 0x233904u: goto label_233904;
        case 0x233908u: goto label_233908;
        case 0x23390cu: goto label_23390c;
        case 0x233910u: goto label_233910;
        case 0x233914u: goto label_233914;
        case 0x233918u: goto label_233918;
        case 0x23391cu: goto label_23391c;
        case 0x233920u: goto label_233920;
        case 0x233924u: goto label_233924;
        case 0x233928u: goto label_233928;
        case 0x23392cu: goto label_23392c;
        case 0x233930u: goto label_233930;
        case 0x233934u: goto label_233934;
        case 0x233938u: goto label_233938;
        case 0x23393cu: goto label_23393c;
        case 0x233940u: goto label_233940;
        case 0x233944u: goto label_233944;
        case 0x233948u: goto label_233948;
        case 0x23394cu: goto label_23394c;
        case 0x233950u: goto label_233950;
        case 0x233954u: goto label_233954;
        case 0x233958u: goto label_233958;
        case 0x23395cu: goto label_23395c;
        case 0x233960u: goto label_233960;
        case 0x233964u: goto label_233964;
        case 0x233968u: goto label_233968;
        case 0x23396cu: goto label_23396c;
        case 0x233970u: goto label_233970;
        case 0x233974u: goto label_233974;
        case 0x233978u: goto label_233978;
        case 0x23397cu: goto label_23397c;
        case 0x233980u: goto label_233980;
        case 0x233984u: goto label_233984;
        case 0x233988u: goto label_233988;
        case 0x23398cu: goto label_23398c;
        case 0x233990u: goto label_233990;
        case 0x233994u: goto label_233994;
        case 0x233998u: goto label_233998;
        case 0x23399cu: goto label_23399c;
        case 0x2339a0u: goto label_2339a0;
        case 0x2339a4u: goto label_2339a4;
        case 0x2339a8u: goto label_2339a8;
        case 0x2339acu: goto label_2339ac;
        case 0x2339b0u: goto label_2339b0;
        case 0x2339b4u: goto label_2339b4;
        case 0x2339b8u: goto label_2339b8;
        case 0x2339bcu: goto label_2339bc;
        case 0x2339c0u: goto label_2339c0;
        case 0x2339c4u: goto label_2339c4;
        case 0x2339c8u: goto label_2339c8;
        case 0x2339ccu: goto label_2339cc;
        case 0x2339d0u: goto label_2339d0;
        case 0x2339d4u: goto label_2339d4;
        case 0x2339d8u: goto label_2339d8;
        case 0x2339dcu: goto label_2339dc;
        case 0x2339e0u: goto label_2339e0;
        case 0x2339e4u: goto label_2339e4;
        case 0x2339e8u: goto label_2339e8;
        case 0x2339ecu: goto label_2339ec;
        case 0x2339f0u: goto label_2339f0;
        case 0x2339f4u: goto label_2339f4;
        case 0x2339f8u: goto label_2339f8;
        case 0x2339fcu: goto label_2339fc;
        case 0x233a00u: goto label_233a00;
        case 0x233a04u: goto label_233a04;
        case 0x233a08u: goto label_233a08;
        case 0x233a0cu: goto label_233a0c;
        case 0x233a10u: goto label_233a10;
        case 0x233a14u: goto label_233a14;
        case 0x233a18u: goto label_233a18;
        case 0x233a1cu: goto label_233a1c;
        case 0x233a20u: goto label_233a20;
        case 0x233a24u: goto label_233a24;
        case 0x233a28u: goto label_233a28;
        case 0x233a2cu: goto label_233a2c;
        case 0x233a30u: goto label_233a30;
        case 0x233a34u: goto label_233a34;
        case 0x233a38u: goto label_233a38;
        case 0x233a3cu: goto label_233a3c;
        case 0x233a40u: goto label_233a40;
        case 0x233a44u: goto label_233a44;
        case 0x233a48u: goto label_233a48;
        case 0x233a4cu: goto label_233a4c;
        case 0x233a50u: goto label_233a50;
        case 0x233a54u: goto label_233a54;
        case 0x233a58u: goto label_233a58;
        case 0x233a5cu: goto label_233a5c;
        case 0x233a60u: goto label_233a60;
        case 0x233a64u: goto label_233a64;
        case 0x233a68u: goto label_233a68;
        case 0x233a6cu: goto label_233a6c;
        case 0x233a70u: goto label_233a70;
        case 0x233a74u: goto label_233a74;
        case 0x233a78u: goto label_233a78;
        case 0x233a7cu: goto label_233a7c;
        case 0x233a80u: goto label_233a80;
        case 0x233a84u: goto label_233a84;
        case 0x233a88u: goto label_233a88;
        case 0x233a8cu: goto label_233a8c;
        case 0x233a90u: goto label_233a90;
        case 0x233a94u: goto label_233a94;
        case 0x233a98u: goto label_233a98;
        case 0x233a9cu: goto label_233a9c;
        case 0x233aa0u: goto label_233aa0;
        case 0x233aa4u: goto label_233aa4;
        case 0x233aa8u: goto label_233aa8;
        case 0x233aacu: goto label_233aac;
        case 0x233ab0u: goto label_233ab0;
        case 0x233ab4u: goto label_233ab4;
        case 0x233ab8u: goto label_233ab8;
        case 0x233abcu: goto label_233abc;
        case 0x233ac0u: goto label_233ac0;
        case 0x233ac4u: goto label_233ac4;
        case 0x233ac8u: goto label_233ac8;
        case 0x233accu: goto label_233acc;
        case 0x233ad0u: goto label_233ad0;
        case 0x233ad4u: goto label_233ad4;
        case 0x233ad8u: goto label_233ad8;
        case 0x233adcu: goto label_233adc;
        case 0x233ae0u: goto label_233ae0;
        case 0x233ae4u: goto label_233ae4;
        case 0x233ae8u: goto label_233ae8;
        case 0x233aecu: goto label_233aec;
        case 0x233af0u: goto label_233af0;
        case 0x233af4u: goto label_233af4;
        case 0x233af8u: goto label_233af8;
        case 0x233afcu: goto label_233afc;
        case 0x233b00u: goto label_233b00;
        case 0x233b04u: goto label_233b04;
        case 0x233b08u: goto label_233b08;
        case 0x233b0cu: goto label_233b0c;
        case 0x233b10u: goto label_233b10;
        case 0x233b14u: goto label_233b14;
        case 0x233b18u: goto label_233b18;
        case 0x233b1cu: goto label_233b1c;
        case 0x233b20u: goto label_233b20;
        case 0x233b24u: goto label_233b24;
        case 0x233b28u: goto label_233b28;
        case 0x233b2cu: goto label_233b2c;
        case 0x233b30u: goto label_233b30;
        case 0x233b34u: goto label_233b34;
        case 0x233b38u: goto label_233b38;
        case 0x233b3cu: goto label_233b3c;
        case 0x233b40u: goto label_233b40;
        case 0x233b44u: goto label_233b44;
        case 0x233b48u: goto label_233b48;
        case 0x233b4cu: goto label_233b4c;
        case 0x233b50u: goto label_233b50;
        case 0x233b54u: goto label_233b54;
        case 0x233b58u: goto label_233b58;
        case 0x233b5cu: goto label_233b5c;
        case 0x233b60u: goto label_233b60;
        case 0x233b64u: goto label_233b64;
        case 0x233b68u: goto label_233b68;
        case 0x233b6cu: goto label_233b6c;
        case 0x233b70u: goto label_233b70;
        case 0x233b74u: goto label_233b74;
        case 0x233b78u: goto label_233b78;
        case 0x233b7cu: goto label_233b7c;
        case 0x233b80u: goto label_233b80;
        case 0x233b84u: goto label_233b84;
        case 0x233b88u: goto label_233b88;
        case 0x233b8cu: goto label_233b8c;
        case 0x233b90u: goto label_233b90;
        case 0x233b94u: goto label_233b94;
        default: return;
    }

label_2333c8:
    if (ctx->pc == 0x2333C8u) {
        ctx->pc = 0x2333C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333C4u;
        // 0x2333c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2333CCu;
        goto label_2333cc;
    }
    ctx->pc = 0x2333C4u;
    SET_GPR_U32(ctx, 31, 0x2333CCu);
    ctx->pc = 0x2333C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333C4u;
    // 0x2333c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C20u;
    { ctx->pc = 0x1a2c20; return; }
    ctx->pc = 0x2333CCu;
label_2333cc:
    // 0x2333cc: 0xc08cd20  jal         func_233480
label_2333d0:
    if (ctx->pc == 0x2333D0u) {
        ctx->pc = 0x2333D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333CCu;
        // 0x2333d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2333D4u;
        goto label_2333d4;
    }
    ctx->pc = 0x2333CCu;
    SET_GPR_U32(ctx, 31, 0x2333D4u);
    ctx->pc = 0x2333D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333CCu;
    // 0x2333d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233480u;
    goto label_233480;
    ctx->pc = 0x2333D4u;
label_2333d4:
    // 0x2333d4: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x2333d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_2333d8:
    // 0x2333d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2333d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2333dc:
    // 0x2333dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2333dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2333e0:
    // 0x2333e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2333e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2333e4:
    // 0x2333e4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2333e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2333e8:
    // 0x2333e8: 0xc08c930  jal         func_2324C0
label_2333ec:
    if (ctx->pc == 0x2333ECu) {
        ctx->pc = 0x2333ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333E8u;
        // 0x2333ec: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2333F0u;
        goto label_2333f0;
    }
    ctx->pc = 0x2333E8u;
    SET_GPR_U32(ctx, 31, 0x2333F0u);
    ctx->pc = 0x2333ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333E8u;
    // 0x2333ec: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2324C0u;
    { ctx->pc = 0x2324c0; return; }
    ctx->pc = 0x2333F0u;
label_2333f0:
    // 0x2333f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2333f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2333f4:
    // 0x2333f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2333f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2333f8:
    // 0x2333f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2333f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2333fc:
    // 0x2333fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2333fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_233400:
    // 0x233400: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_233404:
    // 0x233404: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233404u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_233408:
    // 0x233408: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x233408u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23340c:
    // 0x23340c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23340cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_233410:
    // 0x233410: 0x3e00008  jr          $ra
label_233414:
    if (ctx->pc == 0x233414u) {
        ctx->pc = 0x233414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233410u;
        // 0x233414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233418u;
        goto label_233418;
    }
    ctx->pc = 0x233410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233410u;
        // 0x233414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233418u;
label_233418:
    // 0x233418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23341c:
    // 0x23341c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23341cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233420:
    // 0x233420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233424:
    // 0x233424: 0x8068ac8  j           func_1A2B20
label_233428:
    if (ctx->pc == 0x233428u) {
        ctx->pc = 0x233428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233424u;
        // 0x233428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23342Cu;
        goto label_23342c;
    }
    ctx->pc = 0x233424u;
    ctx->pc = 0x233428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233424u;
    // 0x233428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2B20u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a2b20; return; }
    ctx->pc = 0x23342Cu;
label_23342c:
    // 0x23342c: 0x0  nop
    ctx->pc = 0x23342cu;
    // NOP
label_233430:
    // 0x233430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233434:
    // 0x233434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233438:
    // 0x233438: 0xc0687c0  jal         func_1A1F00
label_23343c:
    if (ctx->pc == 0x23343Cu) {
        ctx->pc = 0x233440u;
        goto label_233440;
    }
    ctx->pc = 0x233438u;
    SET_GPR_U32(ctx, 31, 0x233440u);
    ctx->pc = 0x1A1F00u;
    { ctx->pc = 0x1a1f00; return; }
    ctx->pc = 0x233440u;
label_233440:
    // 0x233440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233444:
    // 0x233444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233448:
    // 0x233448: 0x3e00008  jr          $ra
label_23344c:
    if (ctx->pc == 0x23344Cu) {
        ctx->pc = 0x23344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233448u;
        // 0x23344c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233450u;
        goto label_233450;
    }
    ctx->pc = 0x233448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233448u;
        // 0x23344c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233450u;
label_233450:
    // 0x233450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233454:
    // 0x233454: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x233454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_233458:
    // 0x233458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23345c:
    // 0x23345c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23345cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233460:
    // 0x233460: 0x808c99e  j           func_232678
label_233464:
    if (ctx->pc == 0x233464u) {
        ctx->pc = 0x233464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233460u;
        // 0x233464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233468u;
        goto label_233468;
    }
    ctx->pc = 0x233460u;
    ctx->pc = 0x233464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233460u;
    // 0x233464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232678u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x232678; return; }
    ctx->pc = 0x233468u;
label_233468:
    // 0x233468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23346c:
    // 0x23346c: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x23346cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_233470:
    // 0x233470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233474:
    // 0x233474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233478:
    // 0x233478: 0x808c9da  j           func_232768
label_23347c:
    if (ctx->pc == 0x23347Cu) {
        ctx->pc = 0x23347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233478u;
        // 0x23347c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233480u;
        goto label_233480;
    }
    ctx->pc = 0x233478u;
    ctx->pc = 0x23347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233478u;
    // 0x23347c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232768u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x232768; return; }
    ctx->pc = 0x233480u;
label_233480:
    // 0x233480: 0x3e00008  jr          $ra
label_233484:
    if (ctx->pc == 0x233484u) {
        ctx->pc = 0x233484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233480u;
        // 0x233484: 0xac8000a8  sw          $zero, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233488u;
        goto label_233488;
    }
    ctx->pc = 0x233480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233480u;
        // 0x233484: 0xac8000a8  sw          $zero, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233488u;
label_233488:
    // 0x233488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23348c:
    // 0x23348c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23348cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233490:
    // 0x233490: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_233494:
    // 0x233494: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x233494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_233498:
    // 0x233498: 0xc08cb7a  jal         func_232DE8
label_23349c:
    if (ctx->pc == 0x23349Cu) {
        ctx->pc = 0x23349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233498u;
        // 0x23349c: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2334A0u;
        goto label_2334a0;
    }
    ctx->pc = 0x233498u;
    SET_GPR_U32(ctx, 31, 0x2334A0u);
    ctx->pc = 0x23349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233498u;
    // 0x23349c: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232DE8u;
    { ctx->pc = 0x232de8; return; }
    ctx->pc = 0x2334A0u;
label_2334a0:
    // 0x2334a0: 0xc068a84  jal         func_1A2A10
label_2334a4:
    if (ctx->pc == 0x2334A4u) {
        ctx->pc = 0x2334A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334A0u;
        // 0x2334a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2334A8u;
        goto label_2334a8;
    }
    ctx->pc = 0x2334A0u;
    SET_GPR_U32(ctx, 31, 0x2334A8u);
    ctx->pc = 0x2334A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2334A0u;
    // 0x2334a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2A10u;
    { ctx->pc = 0x1a2a10; return; }
    ctx->pc = 0x2334A8u;
label_2334a8:
    // 0x2334a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2334a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2334ac:
    // 0x2334ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2334acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2334b0:
    // 0x2334b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2334b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2334b4:
    // 0x2334b4: 0x3e00008  jr          $ra
label_2334b8:
    if (ctx->pc == 0x2334B8u) {
        ctx->pc = 0x2334B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334B4u;
        // 0x2334b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2334BCu;
        goto label_2334bc;
    }
    ctx->pc = 0x2334B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2334B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334B4u;
        // 0x2334b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2334B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2334BCu;
label_2334bc:
    // 0x2334bc: 0x0  nop
    ctx->pc = 0x2334bcu;
    // NOP
label_2334c0:
    // 0x2334c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2334c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2334c4:
    // 0x2334c4: 0x3e00008  jr          $ra
label_2334c8:
    if (ctx->pc == 0x2334C8u) {
        ctx->pc = 0x2334C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334C4u;
        // 0x2334c8: 0xac8200a8  sw          $v0, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2334CCu;
        goto label_2334cc;
    }
    ctx->pc = 0x2334C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2334C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334C4u;
        // 0x2334c8: 0xac8200a8  sw          $v0, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2334C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2334CCu;
label_2334cc:
    // 0x2334cc: 0x0  nop
    ctx->pc = 0x2334ccu;
    // NOP
label_2334d0:
    // 0x2334d0: 0x3e00008  jr          $ra
label_2334d4:
    if (ctx->pc == 0x2334D4u) {
        ctx->pc = 0x2334D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334D0u;
        // 0x2334d4: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2334D8u;
        goto label_2334d8;
    }
    ctx->pc = 0x2334D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2334D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334D0u;
        // 0x2334d4: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2334D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2334D8u;
label_2334d8:
    // 0x2334d8: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x2334d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
label_2334dc:
    // 0x2334dc: 0x3e00008  jr          $ra
label_2334e0:
    if (ctx->pc == 0x2334E0u) {
        ctx->pc = 0x2334E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334DCu;
        // 0x2334e0: 0xac8500a8  sw          $a1, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2334E4u;
        goto label_2334e4;
    }
    ctx->pc = 0x2334DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2334E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334DCu;
        // 0x2334e0: 0xac8500a8  sw          $a1, 0xA8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2334DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2334E4u;
label_2334e4:
    // 0x2334e4: 0x0  nop
    ctx->pc = 0x2334e4u;
    // NOP
label_2334e8:
    // 0x2334e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2334e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2334ec:
    // 0x2334ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2334ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2334f0:
    // 0x2334f0: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x2334f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_2334f4:
    // 0x2334f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2334f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2334f8:
    // 0x2334f8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2334f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2334fc:
    // 0x2334fc: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x2334fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_233500:
    // 0x233500: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x233500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
label_233504:
    // 0x233504: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x233504u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_233508:
    // 0x233508: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x233508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
label_23350c:
    // 0x23350c: 0xc08cc22  jal         func_233088
label_233510:
    if (ctx->pc == 0x233510u) {
        ctx->pc = 0x233510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23350Cu;
        // 0x233510: 0xafa70010  sw          $a3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233514u;
        goto label_233514;
    }
    ctx->pc = 0x23350Cu;
    SET_GPR_U32(ctx, 31, 0x233514u);
    ctx->pc = 0x233510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23350Cu;
    // 0x233510: 0xafa70010  sw          $a3, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233088u;
    { ctx->pc = 0x233088; return; }
    ctx->pc = 0x233514u;
label_233514:
    // 0x233514: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x233514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_233518:
    // 0x233518: 0x3e00008  jr          $ra
label_23351c:
    if (ctx->pc == 0x23351Cu) {
        ctx->pc = 0x23351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233518u;
        // 0x23351c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233520u;
        goto label_233520;
    }
    ctx->pc = 0x233518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233518u;
        // 0x23351c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233520u;
label_233520:
    // 0x233520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233524:
    // 0x233524: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x233524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_233528:
    // 0x233528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23352c:
    // 0x23352c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23352cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233530:
    // 0x233530: 0x808cba0  j           func_232E80
label_233534:
    if (ctx->pc == 0x233534u) {
        ctx->pc = 0x233534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233530u;
        // 0x233534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233538u;
        goto label_233538;
    }
    ctx->pc = 0x233530u;
    ctx->pc = 0x233534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233530u;
    // 0x233534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232E80u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x232e80; return; }
    ctx->pc = 0x233538u;
label_233538:
    // 0x233538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23353c:
    // 0x23353c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23353cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_233540:
    // 0x233540: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x233540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_233544:
    // 0x233544: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x233544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_233548:
    // 0x233548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x233548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23354c:
    // 0x23354c: 0xc08cd14  jal         func_233450
label_233550:
    if (ctx->pc == 0x233550u) {
        ctx->pc = 0x233550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23354Cu;
        // 0x233550: 0x27a8000c  addiu       $t0, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233554u;
        goto label_233554;
    }
    ctx->pc = 0x23354Cu;
    SET_GPR_U32(ctx, 31, 0x233554u);
    ctx->pc = 0x233550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23354Cu;
    // 0x233550: 0x27a8000c  addiu       $t0, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233450u;
    goto label_233450;
    ctx->pc = 0x233554u;
label_233554:
    // 0x233554: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x233554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_233558:
    // 0x233558: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x233558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_23355c:
    // 0x23355c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23355cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_233560:
    // 0x233560: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x233560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233564:
    // 0x233564: 0x3e00008  jr          $ra
label_233568:
    if (ctx->pc == 0x233568u) {
        ctx->pc = 0x233568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233564u;
        // 0x233568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23356Cu;
        goto label_23356c;
    }
    ctx->pc = 0x233564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233564u;
        // 0x233568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23356Cu;
label_23356c:
    // 0x23356c: 0x0  nop
    ctx->pc = 0x23356cu;
    // NOP
label_233570:
    // 0x233570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_233574:
    // 0x233574: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x233574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_233578:
    // 0x233578: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x233578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23357c:
    // 0x23357c: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x23357cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_233580:
    // 0x233580: 0x27a8001c  addiu       $t0, $sp, 0x1C
    ctx->pc = 0x233580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_233584:
    // 0x233584: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x233584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_233588:
    // 0x233588: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x233588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_23358c:
    // 0x23358c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23358cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_233590:
    // 0x233590: 0x244b0450  addiu       $t3, $v0, 0x450
    ctx->pc = 0x233590u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 1104));
label_233594:
    // 0x233594: 0x89630003  lwl         $v1, 0x3($t3)
    ctx->pc = 0x233594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_233598:
    // 0x233598: 0x99630000  lwr         $v1, 0x0($t3)
    ctx->pc = 0x233598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_23359c:
    // 0x23359c: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x23359cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_2335a0:
    // 0x2335a0: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x2335a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_2335a4:
    // 0x2335a4: 0xc08cd14  jal         func_233450
label_2335a8:
    if (ctx->pc == 0x2335A8u) {
        ctx->pc = 0x2335A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335A4u;
        // 0x2335a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2335ACu;
        goto label_2335ac;
    }
    ctx->pc = 0x2335A4u;
    SET_GPR_U32(ctx, 31, 0x2335ACu);
    ctx->pc = 0x2335A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335A4u;
    // 0x2335a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233450u;
    goto label_233450;
    ctx->pc = 0x2335ACu;
label_2335ac:
    // 0x2335ac: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2335acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2335b0:
    // 0x2335b0: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x2335b0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
label_2335b4:
    // 0x2335b4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x2335b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2335b8:
    // 0x2335b8: 0x3c0d2000  lui         $t5, 0x2000
    ctx->pc = 0x2335b8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8192 << 16));
label_2335bc:
    // 0x2335bc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2335bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2335c0:
    // 0x2335c0: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x2335c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
label_2335c4:
    // 0x2335c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2335c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2335c8:
    // 0x2335c8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2335c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2335cc:
    // 0x2335cc: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x2335ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_2335d0:
    // 0x2335d0: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2335d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2335d4:
    // 0x2335d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2335d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2335d8:
    // 0x2335d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2335d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2335dc:
    // 0x2335dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2335dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2335e0:
    // 0x2335e0: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_2335e4:
    if (ctx->pc == 0x2335E4u) {
        ctx->pc = 0x2335E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335E0u;
        // 0x2335e4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2335E8u;
        goto label_2335e8;
    }
    ctx->pc = 0x2335E0u;
    {
        const bool branch_taken_0x2335e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2335E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335E0u;
        // 0x2335e4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335e0) {
            ctx->pc = 0x23362Cu;
            goto label_23362c;
        }
    }
    ctx->pc = 0x2335E8u;
label_2335e8:
    // 0x2335e8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2335e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2335ec:
    // 0x2335ec: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x2335ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2335f0:
    // 0x2335f0: 0x8c2024  and         $a0, $a0, $t4
    ctx->pc = 0x2335f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
label_2335f4:
    // 0x2335f4: 0xcc3024  and         $a2, $a2, $t4
    ctx->pc = 0x2335f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 12));
label_2335f8:
    // 0x2335f8: 0x8d2025  or          $a0, $a0, $t5
    ctx->pc = 0x2335f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 13));
label_2335fc:
    // 0x2335fc: 0xc08cf0c  jal         func_233C30
label_233600:
    if (ctx->pc == 0x233600u) {
        ctx->pc = 0x233600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335FCu;
        // 0x233600: 0xcd3025  or          $a2, $a2, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233604u;
        goto label_233604;
    }
    ctx->pc = 0x2335FCu;
    SET_GPR_U32(ctx, 31, 0x233604u);
    ctx->pc = 0x233600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335FCu;
    // 0x233600: 0xcd3025  or          $a2, $a2, $t5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233C30u;
    { ctx->pc = 0x233c30; return; }
    ctx->pc = 0x233604u;
label_233604:
    // 0x233604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233608:
    // 0x233608: 0xc08cd1a  jal         func_233468
label_23360c:
    if (ctx->pc == 0x23360Cu) {
        ctx->pc = 0x23360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233608u;
        // 0x23360c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233610u;
        goto label_233610;
    }
    ctx->pc = 0x233608u;
    SET_GPR_U32(ctx, 31, 0x233610u);
    ctx->pc = 0x23360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233608u;
    // 0x23360c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233468u;
    goto label_233468;
    ctx->pc = 0x233610u;
label_233610:
    // 0x233610: 0xc08cbb4  jal         func_232ED0
label_233614:
    if (ctx->pc == 0x233614u) {
        ctx->pc = 0x233614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233610u;
        // 0x233614: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233618u;
        goto label_233618;
    }
    ctx->pc = 0x233610u;
    SET_GPR_U32(ctx, 31, 0x233618u);
    ctx->pc = 0x233614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233610u;
    // 0x233614: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232ED0u;
    { ctx->pc = 0x232ed0; return; }
    ctx->pc = 0x233618u;
label_233618:
    // 0x233618: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x233618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_23361c:
    // 0x23361c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_233620:
    if (ctx->pc == 0x233620u) {
        ctx->pc = 0x233620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23361Cu;
        // 0x233620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233624u;
        goto label_233624;
    }
    ctx->pc = 0x23361Cu;
    {
        const bool branch_taken_0x23361c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x233620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23361Cu;
        // 0x233620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23361c) {
            ctx->pc = 0x23362Cu;
            goto label_23362c;
        }
    }
    ctx->pc = 0x233624u;
label_233624:
    // 0x233624: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x233624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_233628:
    // 0x233628: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x233628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_23362c:
    // 0x23362c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23362cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_233630:
    // 0x233630: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x233630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_233634:
    // 0x233634: 0x3e00008  jr          $ra
label_233638:
    if (ctx->pc == 0x233638u) {
        ctx->pc = 0x233638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233634u;
        // 0x233638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23363Cu;
        goto label_23363c;
    }
    ctx->pc = 0x233634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233634u;
        // 0x233638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23363Cu;
label_23363c:
    // 0x23363c: 0x0  nop
    ctx->pc = 0x23363cu;
    // NOP
label_233640:
    // 0x233640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x233640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_233644:
    // 0x233644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233648:
    // 0x233648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23364c:
    // 0x23364c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23364cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_233650:
    // 0x233650: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x233650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_233654:
    // 0x233654: 0xc08cd48  jal         func_233520
label_233658:
    if (ctx->pc == 0x233658u) {
        ctx->pc = 0x233658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233654u;
        // 0x233658: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23365Cu;
        goto label_23365c;
    }
    ctx->pc = 0x233654u;
    SET_GPR_U32(ctx, 31, 0x23365Cu);
    ctx->pc = 0x233658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233654u;
    // 0x233658: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233520u;
    goto label_233520;
    ctx->pc = 0x23365Cu;
label_23365c:
    // 0x23365c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_233660:
    if (ctx->pc == 0x233660u) {
        ctx->pc = 0x233660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23365Cu;
        // 0x233660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233664u;
        goto label_233664;
    }
    ctx->pc = 0x23365Cu;
    {
        const bool branch_taken_0x23365c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23365Cu;
        // 0x233660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23365c) {
            ctx->pc = 0x233670u;
            goto label_233670;
        }
    }
    ctx->pc = 0x233664u;
label_233664:
    // 0x233664: 0xc068ada  jal         func_1A2B68
label_233668:
    if (ctx->pc == 0x233668u) {
        ctx->pc = 0x23366Cu;
        goto label_23366c;
    }
    ctx->pc = 0x233664u;
    SET_GPR_U32(ctx, 31, 0x23366Cu);
    ctx->pc = 0x1A2B68u;
    { ctx->pc = 0x1a2b68; return; }
    ctx->pc = 0x23366Cu;
label_23366c:
    // 0x23366c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x23366cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_233670:
    // 0x233670: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x233670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233674:
    // 0x233674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233678:
    // 0x233678: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23367c:
    // 0x23367c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23367cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_233680:
    // 0x233680: 0x3e00008  jr          $ra
label_233684:
    if (ctx->pc == 0x233684u) {
        ctx->pc = 0x233684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233680u;
        // 0x233684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233688u;
        goto label_233688;
    }
    ctx->pc = 0x233680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233680u;
        // 0x233684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233688u;
label_233688:
    // 0x233688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23368c:
    // 0x23368c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23368cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233690:
    // 0x233690: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_233694:
    // 0x233694: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x233694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_233698:
    // 0x233698: 0xc08c94e  jal         func_232538
label_23369c:
    if (ctx->pc == 0x23369Cu) {
        ctx->pc = 0x23369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233698u;
        // 0x23369c: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2336A0u;
        goto label_2336a0;
    }
    ctx->pc = 0x233698u;
    SET_GPR_U32(ctx, 31, 0x2336A0u);
    ctx->pc = 0x23369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233698u;
    // 0x23369c: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232538u;
    { ctx->pc = 0x232538; return; }
    ctx->pc = 0x2336A0u;
label_2336a0:
    // 0x2336a0: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x2336a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2336a4:
    // 0x2336a4: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2336a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_2336a8:
    // 0x2336a8: 0x34211144  ori         $at, $at, 0x1144
    ctx->pc = 0x2336a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4420);
label_2336ac:
    // 0x2336ac: 0xc08cf68  jal         func_233DA0
label_2336b0:
    if (ctx->pc == 0x2336B0u) {
        ctx->pc = 0x2336B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336ACu;
        // 0x2336b0: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2336B4u;
        goto label_2336b4;
    }
    ctx->pc = 0x2336ACu;
    SET_GPR_U32(ctx, 31, 0x2336B4u);
    ctx->pc = 0x2336B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336ACu;
    // 0x2336b0: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233DA0u;
    { ctx->pc = 0x233da0; return; }
    ctx->pc = 0x2336B4u;
label_2336b4:
    // 0x2336b4: 0xc08ce00  jal         func_233800
label_2336b8:
    if (ctx->pc == 0x2336B8u) {
        ctx->pc = 0x2336B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336B4u;
        // 0x2336b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2336BCu;
        goto label_2336bc;
    }
    ctx->pc = 0x2336B4u;
    SET_GPR_U32(ctx, 31, 0x2336BCu);
    ctx->pc = 0x2336B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336B4u;
    // 0x2336b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233800u;
    goto label_233800;
    ctx->pc = 0x2336BCu;
label_2336bc:
    // 0x2336bc: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2336bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2336c0:
    // 0x2336c0: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2336c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2336c4:
    // 0x2336c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2336c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2336c8:
    // 0x2336c8: 0x8c421150  lw          $v0, 0x1150($v0)
    ctx->pc = 0x2336c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4432)));
label_2336cc:
    // 0x2336cc: 0x0  nop
    ctx->pc = 0x2336ccu;
    // NOP
label_2336d0:
    // 0x2336d0: 0x0  nop
    ctx->pc = 0x2336d0u;
    // NOP
label_2336d4:
    // 0x2336d4: 0x0  nop
    ctx->pc = 0x2336d4u;
    // NOP
label_2336d8:
    // 0x2336d8: 0x0  nop
    ctx->pc = 0x2336d8u;
    // NOP
label_2336dc:
    // 0x2336dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2336e0:
    if (ctx->pc == 0x2336E0u) {
        ctx->pc = 0x2336E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336DCu;
        // 0x2336e0: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2336E4u;
        goto label_2336e4;
    }
    ctx->pc = 0x2336DCu;
    {
        const bool branch_taken_0x2336dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2336E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336DCu;
        // 0x2336e0: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336dc) {
            ctx->pc = 0x2336C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2336c0;
        }
    }
    ctx->pc = 0x2336E4u;
label_2336e4:
    // 0x2336e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2336e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2336e8:
    // 0x2336e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2336e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2336ec:
    // 0x2336ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2336ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2336f0:
    // 0x2336f0: 0x808cd36  j           func_2334D8
label_2336f4:
    if (ctx->pc == 0x2336F4u) {
        ctx->pc = 0x2336F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336F0u;
        // 0x2336f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2336F8u;
        goto label_2336f8;
    }
    ctx->pc = 0x2336F0u;
    ctx->pc = 0x2336F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336F0u;
    // 0x2336f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334D8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_2334d8;
    ctx->pc = 0x2336F8u;
label_2336f8:
    // 0x2336f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2336f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2336fc:
    // 0x2336fc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2336fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_233700:
    // 0x233700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x233700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_233704:
    // 0x233704: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x233704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_233708:
    // 0x233708: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23370c:
    // 0x23370c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23370cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_233710:
    // 0x233710: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x233710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_233714:
    // 0x233714: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x233714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_233718:
    // 0x233718: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x233718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_23371c:
    // 0x23371c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x23371cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_233720:
    // 0x233720: 0xc08cfc4  jal         func_233F10
label_233724:
    if (ctx->pc == 0x233724u) {
        ctx->pc = 0x233724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233720u;
        // 0x233724: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233728u;
        goto label_233728;
    }
    ctx->pc = 0x233720u;
    SET_GPR_U32(ctx, 31, 0x233728u);
    ctx->pc = 0x233724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233720u;
    // 0x233724: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233F10u;
    { ctx->pc = 0x233f10; return; }
    ctx->pc = 0x233728u;
label_233728:
    // 0x233728: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x233728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23372c:
    // 0x23372c: 0x8c4204dc  lw          $v0, 0x4DC($v0)
    ctx->pc = 0x23372cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1244)));
label_233730:
    // 0x233730: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_233734:
    if (ctx->pc == 0x233734u) {
        ctx->pc = 0x233734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233730u;
        // 0x233734: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233738u;
        goto label_233738;
    }
    ctx->pc = 0x233730u;
    {
        const bool branch_taken_0x233730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233730) {
            ctx->pc = 0x233734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233730u;
            // 0x233734: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233744u;
            goto label_233744;
        }
    }
    ctx->pc = 0x233738u;
label_233738:
    // 0x233738: 0x40f809  jalr        $v0
label_23373c:
    if (ctx->pc == 0x23373Cu) {
        ctx->pc = 0x23373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233738u;
        // 0x23373c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233740u;
        goto label_233740;
    }
    ctx->pc = 0x233738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233740u);
        ctx->pc = 0x23373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233738u;
        // 0x23373c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233738u, 0x233740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x233740u;
label_233740:
    // 0x233740: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233744:
    // 0x233744: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233748:
    // 0x233748: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x233748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23374c:
    // 0x23374c: 0x8c421154  lw          $v0, 0x1154($v0)
    ctx->pc = 0x23374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4436)));
label_233750:
    // 0x233750: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_233754:
    if (ctx->pc == 0x233754u) {
        ctx->pc = 0x233754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233750u;
        // 0x233754: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233758u;
        goto label_233758;
    }
    ctx->pc = 0x233750u;
    {
        const bool branch_taken_0x233750 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x233754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233750u;
        // 0x233754: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233750) {
            ctx->pc = 0x2337E0u;
            goto label_2337e0;
        }
    }
    ctx->pc = 0x233758u;
label_233758:
    // 0x233758: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x233758u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23375c:
    // 0x23375c: 0x0  nop
    ctx->pc = 0x23375cu;
    // NOP
label_233760:
    // 0x233760: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x233760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233764:
    // 0x233764: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x233764u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_233768:
    // 0x233768: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_23376c:
    // 0x23376c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_233770:
    // 0x233770: 0x8c421148  lw          $v0, 0x1148($v0)
    ctx->pc = 0x233770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4424)));
label_233774:
    // 0x233774: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x233774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_233778:
    // 0x233778: 0x3c090009  lui         $t1, 0x9
    ctx->pc = 0x233778u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)9 << 16));
label_23377c:
    // 0x23377c: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x23377cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_233780:
    // 0x233780: 0x8d291144  lw          $t1, 0x1144($t1)
    ctx->pc = 0x233780u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4420)));
label_233784:
    // 0x233784: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_233788:
    // 0x233788: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x233788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_23378c:
    // 0x23378c: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x23378cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_233790:
    // 0x233790: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233794:
    // 0x233794: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x233794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_233798:
    // 0x233798: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x233798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_23379c:
    // 0x23379c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23379cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2337a0:
    // 0x2337a0: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x2337a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2337a4:
    // 0x2337a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2337a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2337a8:
    // 0x2337a8: 0xc08cff4  jal         func_233FD0
label_2337ac:
    if (ctx->pc == 0x2337ACu) {
        ctx->pc = 0x2337ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337A8u;
        // 0x2337ac: 0x8e290004  lw          $t1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2337B0u;
        goto label_2337b0;
    }
    ctx->pc = 0x2337A8u;
    SET_GPR_U32(ctx, 31, 0x2337B0u);
    ctx->pc = 0x2337ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2337A8u;
    // 0x2337ac: 0x8e290004  lw          $t1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233FD0u;
    { ctx->pc = 0x233fd0; return; }
    ctx->pc = 0x2337B0u;
label_2337b0:
    // 0x2337b0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2337b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_2337b4:
    // 0x2337b4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_2337b8:
    if (ctx->pc == 0x2337B8u) {
        ctx->pc = 0x2337B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337B4u;
        // 0x2337b8: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2337BCu;
        goto label_2337bc;
    }
    ctx->pc = 0x2337B4u;
    {
        const bool branch_taken_0x2337b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2337B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337B4u;
        // 0x2337b8: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337b4) {
            ctx->pc = 0x233768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233768;
        }
    }
    ctx->pc = 0x2337BCu;
label_2337bc:
    // 0x2337bc: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2337bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2337c0:
    // 0x2337c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2337c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2337c4:
    // 0x2337c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2337c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2337c8:
    // 0x2337c8: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2337c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2337cc:
    // 0x2337cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2337ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2337d0:
    // 0x2337d0: 0x8c421154  lw          $v0, 0x1154($v0)
    ctx->pc = 0x2337d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4436)));
label_2337d4:
    // 0x2337d4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2337d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2337d8:
    // 0x2337d8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_2337dc:
    if (ctx->pc == 0x2337DCu) {
        ctx->pc = 0x2337DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337D8u;
        // 0x2337dc: 0x26940048  addiu       $s4, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2337E0u;
        goto label_2337e0;
    }
    ctx->pc = 0x2337D8u;
    {
        const bool branch_taken_0x2337d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2337DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337D8u;
        // 0x2337dc: 0x26940048  addiu       $s4, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337d8) {
            ctx->pc = 0x233760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233760;
        }
    }
    ctx->pc = 0x2337E0u;
label_2337e0:
    // 0x2337e0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2337e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2337e4:
    // 0x2337e4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2337e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2337e8:
    // 0x2337e8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2337e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2337ec:
    // 0x2337ec: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2337ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2337f0:
    // 0x2337f0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2337f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2337f4:
    // 0x2337f4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2337f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2337f8:
    // 0x2337f8: 0x3e00008  jr          $ra
label_2337fc:
    if (ctx->pc == 0x2337FCu) {
        ctx->pc = 0x2337FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337F8u;
        // 0x2337fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233800u;
        goto label_233800;
    }
    ctx->pc = 0x2337F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2337FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337F8u;
        // 0x2337fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2337F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233800u;
label_233800:
    // 0x233800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_233804:
    // 0x233804: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x233804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_233808:
    // 0x233808: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x233808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23380c:
    // 0x23380c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x23380cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
label_233810:
    // 0x233810: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x233810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_233814:
    // 0x233814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233818:
    // 0x233818: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23381c:
    // 0x23381c: 0x245104b0  addiu       $s1, $v0, 0x4B0
    ctx->pc = 0x23381cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
label_233820:
    // 0x233820: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x233820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_233824:
    // 0x233824: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x233824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233828:
    // 0x233828: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x233828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_23382c:
    // 0x23382c: 0x24740508  addiu       $s4, $v1, 0x508
    ctx->pc = 0x23382cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1288));
label_233830:
    // 0x233830: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x233830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_233834:
    // 0x233834: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x233834u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233838:
    // 0x233838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23383c:
    // 0x23383c: 0x3673a000  ori         $s3, $s3, 0xA000
    ctx->pc = 0x23383cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)40960);
label_233840:
    // 0x233840: 0x10000075  b           . + 4 + (0x75 << 2)
label_233844:
    if (ctx->pc == 0x233844u) {
        ctx->pc = 0x233844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233840u;
        // 0x233844: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233848u;
        goto label_233848;
    }
    ctx->pc = 0x233840u;
    {
        const bool branch_taken_0x233840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233840u;
        // 0x233844: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233840) {
            ctx->pc = 0x233A18u;
            goto label_233a18;
        }
    }
    ctx->pc = 0x233848u;
label_233848:
    // 0x233848: 0xc08c42e  jal         func_2310B8
label_23384c:
    if (ctx->pc == 0x23384Cu) {
        ctx->pc = 0x233850u;
        goto label_233850;
    }
    ctx->pc = 0x233848u;
    SET_GPR_U32(ctx, 31, 0x233850u);
    ctx->pc = 0x2310B8u;
    { ctx->pc = 0x2310b8; return; }
    ctx->pc = 0x233850u;
label_233850:
    // 0x233850: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233854:
    // 0x233854: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_233858:
    // 0x233858: 0x34211144  ori         $at, $at, 0x1144
    ctx->pc = 0x233858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4420);
label_23385c:
    // 0x23385c: 0xc08cf8e  jal         func_233E38
label_233860:
    if (ctx->pc == 0x233860u) {
        ctx->pc = 0x233860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23385Cu;
        // 0x233860: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233864u;
        goto label_233864;
    }
    ctx->pc = 0x23385Cu;
    SET_GPR_U32(ctx, 31, 0x233864u);
    ctx->pc = 0x233860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23385Cu;
    // 0x233860: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233E38u;
    { ctx->pc = 0x233e38; return; }
    ctx->pc = 0x233864u;
label_233864:
    // 0x233864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x233864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233868:
    // 0x233868: 0x10a0fff7  beqz        $a1, . + 4 + (-0x9 << 2)
label_23386c:
    if (ctx->pc == 0x23386Cu) {
        ctx->pc = 0x23386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233868u;
        // 0x23386c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233870u;
        goto label_233870;
    }
    ctx->pc = 0x233868u;
    {
        const bool branch_taken_0x233868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233868u;
        // 0x23386c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233868) {
            ctx->pc = 0x233848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233848;
        }
    }
    ctx->pc = 0x233870u;
label_233870:
    // 0x233870: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x233870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_233874:
    // 0x233874: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x233874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_233878:
    // 0x233878: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x233878u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
label_23387c:
    // 0x23387c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x23387cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_233880:
    // 0x233880: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x233880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_233884:
    // 0x233884: 0xc068a90  jal         func_1A2A40
label_233888:
    if (ctx->pc == 0x233888u) {
        ctx->pc = 0x233888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233884u;
        // 0x233888: 0x63102  srl         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23388Cu;
        goto label_23388c;
    }
    ctx->pc = 0x233884u;
    SET_GPR_U32(ctx, 31, 0x23388Cu);
    ctx->pc = 0x233888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233884u;
    // 0x233888: 0x63102  srl         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2A40u;
    { ctx->pc = 0x1a2a40; return; }
    ctx->pc = 0x23388Cu;
label_23388c:
    // 0x23388c: 0x443000c  bgezl       $v0, . + 4 + (0xC << 2)
label_233890:
    if (ctx->pc == 0x233890u) {
        ctx->pc = 0x233890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23388Cu;
        // 0x233890: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233894u;
        goto label_233894;
    }
    ctx->pc = 0x23388Cu;
    {
        const bool branch_taken_0x23388c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23388c) {
            ctx->pc = 0x233890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23388Cu;
            // 0x233890: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2338C0u;
            goto label_2338c0;
        }
    }
    ctx->pc = 0x233894u;
label_233894:
    // 0x233894: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233898:
    // 0x233898: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_23389c:
    // 0x23389c: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x23389cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_2338a0:
    // 0x2338a0: 0xc08cd30  jal         func_2334C0
label_2338a4:
    if (ctx->pc == 0x2338A4u) {
        ctx->pc = 0x2338A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338A0u;
        // 0x2338a4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338A8u;
        goto label_2338a8;
    }
    ctx->pc = 0x2338A0u;
    SET_GPR_U32(ctx, 31, 0x2338A8u);
    ctx->pc = 0x2338A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338A0u;
    // 0x2338a4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334C0u;
    goto label_2334c0;
    ctx->pc = 0x2338A8u;
label_2338a8:
    // 0x2338a8: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2338a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2338ac:
    // 0x2338ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2338acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2338b0:
    // 0x2338b0: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2338b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_2338b4:
    // 0x2338b4: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x2338b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_2338b8:
    // 0x2338b8: 0x10000055  b           . + 4 + (0x55 << 2)
label_2338bc:
    if (ctx->pc == 0x2338BCu) {
        ctx->pc = 0x2338BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338B8u;
        // 0x2338bc: 0xac221290  sw          $v0, 0x1290($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338C0u;
        goto label_2338c0;
    }
    ctx->pc = 0x2338B8u;
    {
        const bool branch_taken_0x2338b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2338BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338B8u;
        // 0x2338bc: 0xac221290  sw          $v0, 0x1290($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338b8) {
            ctx->pc = 0x233A10u;
            goto label_233a10;
        }
    }
    ctx->pc = 0x2338C0u;
label_2338c0:
    // 0x2338c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2338c4:
    if (ctx->pc == 0x2338C4u) {
        ctx->pc = 0x2338C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338C0u;
        // 0x2338c4: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338C8u;
        goto label_2338c8;
    }
    ctx->pc = 0x2338C0u;
    {
        const bool branch_taken_0x2338c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2338C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338C0u;
        // 0x2338c4: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338c0) {
            ctx->pc = 0x2338E8u;
            goto label_2338e8;
        }
    }
    ctx->pc = 0x2338C8u;
label_2338c8:
    // 0x2338c8: 0xc08cdbe  jal         func_2336F8
label_2338cc:
    if (ctx->pc == 0x2338CCu) {
        ctx->pc = 0x2338CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338C8u;
        // 0x2338cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338D0u;
        goto label_2338d0;
    }
    ctx->pc = 0x2338C8u;
    SET_GPR_U32(ctx, 31, 0x2338D0u);
    ctx->pc = 0x2338CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338C8u;
    // 0x2338cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2336F8u;
    goto label_2336f8;
    ctx->pc = 0x2338D0u;
label_2338d0:
    // 0x2338d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2338d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2338d4:
    // 0x2338d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2338d8:
    if (ctx->pc == 0x2338D8u) {
        ctx->pc = 0x2338D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338D4u;
        // 0x2338d8: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338DCu;
        goto label_2338dc;
    }
    ctx->pc = 0x2338D4u;
    {
        const bool branch_taken_0x2338d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2338d4) {
            ctx->pc = 0x2338D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2338D4u;
            // 0x2338d8: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2338E8u;
            goto label_2338e8;
        }
    }
    ctx->pc = 0x2338DCu;
label_2338dc:
    // 0x2338dc: 0xc08c436  jal         func_2310D8
label_2338e0:
    if (ctx->pc == 0x2338E0u) {
        ctx->pc = 0x2338E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338DCu;
        // 0x2338e0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338E4u;
        goto label_2338e4;
    }
    ctx->pc = 0x2338DCu;
    SET_GPR_U32(ctx, 31, 0x2338E4u);
    ctx->pc = 0x2338E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338DCu;
    // 0x2338e0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2310D8u;
    { ctx->pc = 0x2310d8; return; }
    ctx->pc = 0x2338E4u;
label_2338e4:
    // 0x2338e4: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x2338e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2338e8:
    // 0x2338e8: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2338e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_2338ec:
    // 0x2338ec: 0x34211144  ori         $at, $at, 0x1144
    ctx->pc = 0x2338ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4420);
label_2338f0:
    // 0x2338f0: 0xc08cf72  jal         func_233DC8
label_2338f4:
    if (ctx->pc == 0x2338F4u) {
        ctx->pc = 0x2338F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338F0u;
        // 0x2338f4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338F8u;
        goto label_2338f8;
    }
    ctx->pc = 0x2338F0u;
    SET_GPR_U32(ctx, 31, 0x2338F8u);
    ctx->pc = 0x2338F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338F0u;
    // 0x2338f4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233DC8u;
    { ctx->pc = 0x233dc8; return; }
    ctx->pc = 0x2338F8u;
label_2338f8:
    // 0x2338f8: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2338f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2338fc:
    // 0x2338fc: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2338fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233900:
    // 0x233900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233904:
    // 0x233904: 0x8c421270  lw          $v0, 0x1270($v0)
    ctx->pc = 0x233904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4720)));
label_233908:
    // 0x233908: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_23390c:
    if (ctx->pc == 0x23390Cu) {
        ctx->pc = 0x23390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233908u;
        // 0x23390c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233910u;
        goto label_233910;
    }
    ctx->pc = 0x233908u;
    {
        const bool branch_taken_0x233908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233908u;
        // 0x23390c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233908) {
            ctx->pc = 0x23396Cu;
            goto label_23396c;
        }
    }
    ctx->pc = 0x233910u;
label_233910:
    // 0x233910: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233914:
    // 0x233914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233918:
    // 0x233918: 0x8c421268  lw          $v0, 0x1268($v0)
    ctx->pc = 0x233918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4712)));
label_23391c:
    // 0x23391c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_233920:
    if (ctx->pc == 0x233920u) {
        ctx->pc = 0x233924u;
        goto label_233924;
    }
    ctx->pc = 0x23391Cu;
    {
        const bool branch_taken_0x23391c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23391c) {
            ctx->pc = 0x233948u;
            goto label_233948;
        }
    }
    ctx->pc = 0x233924u;
label_233924:
    // 0x233924: 0x0  nop
    ctx->pc = 0x233924u;
    // NOP
label_233928:
    // 0x233928: 0xc08c42e  jal         func_2310B8
label_23392c:
    if (ctx->pc == 0x23392Cu) {
        ctx->pc = 0x233930u;
        goto label_233930;
    }
    ctx->pc = 0x233928u;
    SET_GPR_U32(ctx, 31, 0x233930u);
    ctx->pc = 0x2310B8u;
    { ctx->pc = 0x2310b8; return; }
    ctx->pc = 0x233930u;
label_233930:
    // 0x233930: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x233930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233934:
    // 0x233934: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233938:
    // 0x233938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23393c:
    // 0x23393c: 0x8c421268  lw          $v0, 0x1268($v0)
    ctx->pc = 0x23393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4712)));
label_233940:
    // 0x233940: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_233944:
    if (ctx->pc == 0x233944u) {
        ctx->pc = 0x233948u;
        goto label_233948;
    }
    ctx->pc = 0x233940u;
    {
        const bool branch_taken_0x233940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233940) {
            ctx->pc = 0x233928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233928;
        }
    }
    ctx->pc = 0x233948u;
label_233948:
    // 0x233948: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_23394c:
    // 0x23394c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23394cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233950:
    // 0x233950: 0x8c421270  lw          $v0, 0x1270($v0)
    ctx->pc = 0x233950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4720)));
label_233954:
    // 0x233954: 0x0  nop
    ctx->pc = 0x233954u;
    // NOP
label_233958:
    // 0x233958: 0x0  nop
    ctx->pc = 0x233958u;
    // NOP
label_23395c:
    // 0x23395c: 0x0  nop
    ctx->pc = 0x23395cu;
    // NOP
label_233960:
    // 0x233960: 0x0  nop
    ctx->pc = 0x233960u;
    // NOP
label_233964:
    // 0x233964: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_233968:
    if (ctx->pc == 0x233968u) {
        ctx->pc = 0x233968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233964u;
        // 0x233968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23396Cu;
        goto label_23396c;
    }
    ctx->pc = 0x233964u;
    {
        const bool branch_taken_0x233964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233964u;
        // 0x233968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233964) {
            ctx->pc = 0x233948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233948;
        }
    }
    ctx->pc = 0x23396Cu;
label_23396c:
    // 0x23396c: 0xc066440  jal         func_199100
label_233970:
    if (ctx->pc == 0x233970u) {
        ctx->pc = 0x233970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23396Cu;
        // 0x233970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233974u;
        goto label_233974;
    }
    ctx->pc = 0x23396Cu;
    SET_GPR_U32(ctx, 31, 0x233974u);
    ctx->pc = 0x233970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23396Cu;
    // 0x233970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x23396Cu, 0x233974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233974u;
label_233974:
    // 0x233974: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x233974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233978:
    // 0x233978: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x233978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23397c:
    // 0x23397c: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x23397cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
label_233980:
    // 0x233980: 0x3c070009  lui         $a3, 0x9
    ctx->pc = 0x233980u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9 << 16));
label_233984:
    // 0x233984: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x233984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_233988:
    // 0x233988: 0x8ce71148  lw          $a3, 0x1148($a3)
    ctx->pc = 0x233988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4424)));
label_23398c:
    // 0x23398c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x23398cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_233990:
    // 0x233990: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x233990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_233994:
    // 0x233994: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x233994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_233998:
    // 0x233998: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x233998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_23399c:
    // 0x23399c: 0x8e270034  lw          $a3, 0x34($s1)
    ctx->pc = 0x23399cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2339a0:
    // 0x2339a0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2339a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2339a4:
    // 0x2339a4: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x2339a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_2339a8:
    // 0x2339a8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2339a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_2339ac:
    // 0x2339ac: 0x34a5a030  ori         $a1, $a1, 0xA030
    ctx->pc = 0x2339acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)41008);
label_2339b0:
    // 0x2339b0: 0x3484a020  ori         $a0, $a0, 0xA020
    ctx->pc = 0x2339b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40992);
label_2339b4:
    // 0x2339b4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2339b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_2339b8:
    // 0x2339b8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2339b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2339bc:
    // 0x2339bc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2339bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2339c0:
    // 0x2339c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2339c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2339c4:
    // 0x2339c4: 0x50e00004  beql        $a3, $zero, . + 4 + (0x4 << 2)
label_2339c8:
    if (ctx->pc == 0x2339C8u) {
        ctx->pc = 0x2339C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339C4u;
        // 0x2339c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2339CCu;
        goto label_2339cc;
    }
    ctx->pc = 0x2339C4u;
    {
        const bool branch_taken_0x2339c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2339c4) {
            ctx->pc = 0x2339C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2339C4u;
            // 0x2339c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2339D8u;
            goto label_2339d8;
        }
    }
    ctx->pc = 0x2339CCu;
label_2339cc:
    // 0x2339cc: 0xe0f809  jalr        $a3
label_2339d0:
    if (ctx->pc == 0x2339D0u) {
        ctx->pc = 0x2339D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339CCu;
        // 0x2339d0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2339D4u;
        goto label_2339d4;
    }
    ctx->pc = 0x2339CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2339D4u);
        ctx->pc = 0x2339D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339CCu;
        // 0x2339d0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2339CCu, 0x2339D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2339D4u;
label_2339d4:
    // 0x2339d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2339d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2339d8:
    // 0x2339d8: 0xc066440  jal         func_199100
label_2339dc:
    if (ctx->pc == 0x2339DCu) {
        ctx->pc = 0x2339DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339D8u;
        // 0x2339dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2339E0u;
        goto label_2339e0;
    }
    ctx->pc = 0x2339D8u;
    SET_GPR_U32(ctx, 31, 0x2339E0u);
    ctx->pc = 0x2339DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2339D8u;
    // 0x2339dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x2339D8u, 0x2339E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2339E0u;
label_2339e0:
    // 0x2339e0: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2339e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2339e4:
    // 0x2339e4: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2339e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2339e8:
    // 0x2339e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2339e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2339ec:
    // 0x2339ec: 0x8c421148  lw          $v0, 0x1148($v0)
    ctx->pc = 0x2339ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4424)));
label_2339f0:
    // 0x2339f0: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x2339f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
label_2339f4:
    // 0x2339f4: 0x34841144  ori         $a0, $a0, 0x1144
    ctx->pc = 0x2339f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4420);
label_2339f8:
    // 0x2339f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2339f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2339fc:
    // 0x2339fc: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2339fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_233a00:
    // 0x233a00: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x233a00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_233a04:
    // 0x233a04: 0xac321270  sw          $s2, 0x1270($at)
    ctx->pc = 0x233a04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4720), GPR_U32(ctx, 18));
label_233a08:
    // 0x233a08: 0xc08cfbc  jal         func_233EF0
label_233a0c:
    if (ctx->pc == 0x233A0Cu) {
        ctx->pc = 0x233A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A08u;
        // 0x233a0c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A10u;
        goto label_233a10;
    }
    ctx->pc = 0x233A08u;
    SET_GPR_U32(ctx, 31, 0x233A10u);
    ctx->pc = 0x233A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A08u;
    // 0x233a0c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233EF0u;
    { ctx->pc = 0x233ef0; return; }
    ctx->pc = 0x233A10u;
label_233a10:
    // 0x233a10: 0xc08c42e  jal         func_2310B8
label_233a14:
    if (ctx->pc == 0x233A14u) {
        ctx->pc = 0x233A18u;
        goto label_233a18;
    }
    ctx->pc = 0x233A10u;
    SET_GPR_U32(ctx, 31, 0x233A18u);
    ctx->pc = 0x2310B8u;
    { ctx->pc = 0x2310b8; return; }
    ctx->pc = 0x233A18u;
label_233a18:
    // 0x233a18: 0xc068ad6  jal         func_1A2B58
label_233a1c:
    if (ctx->pc == 0x233A1Cu) {
        ctx->pc = 0x233A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A18u;
        // 0x233a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A20u;
        goto label_233a20;
    }
    ctx->pc = 0x233A18u;
    SET_GPR_U32(ctx, 31, 0x233A20u);
    ctx->pc = 0x233A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A18u;
    // 0x233a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2B58u;
    { ctx->pc = 0x1a2b58; return; }
    ctx->pc = 0x233A20u;
label_233a20:
    // 0x233a20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_233a24:
    if (ctx->pc == 0x233A24u) {
        ctx->pc = 0x233A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A20u;
        // 0x233a24: 0x8f8282d0  lw          $v0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A28u;
        goto label_233a28;
    }
    ctx->pc = 0x233A20u;
    {
        const bool branch_taken_0x233a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A20u;
        // 0x233a24: 0x8f8282d0  lw          $v0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a20) {
            ctx->pc = 0x233A40u;
            goto label_233a40;
        }
    }
    ctx->pc = 0x233A28u;
label_233a28:
    // 0x233a28: 0xc08cd34  jal         func_2334D0
label_233a2c:
    if (ctx->pc == 0x233A2Cu) {
        ctx->pc = 0x233A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A28u;
        // 0x233a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A30u;
        goto label_233a30;
    }
    ctx->pc = 0x233A28u;
    SET_GPR_U32(ctx, 31, 0x233A30u);
    ctx->pc = 0x233A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A28u;
    // 0x233a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334D0u;
    goto label_2334d0;
    ctx->pc = 0x233A30u;
label_233a30:
    // 0x233a30: 0x5452ff88  bnel        $v0, $s2, . + 4 + (-0x78 << 2)
label_233a34:
    if (ctx->pc == 0x233A34u) {
        ctx->pc = 0x233A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A30u;
        // 0x233a34: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A38u;
        goto label_233a38;
    }
    ctx->pc = 0x233A30u;
    {
        const bool branch_taken_0x233a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x233a30) {
            ctx->pc = 0x233A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233A30u;
            // 0x233a34: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233854;
        }
    }
    ctx->pc = 0x233A38u;
label_233a38:
    // 0x233a38: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x233a38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_233a3c:
    // 0x233a3c: 0x8f8282d0  lw          $v0, -0x7D30($gp)
    ctx->pc = 0x233a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233a40:
    // 0x233a40: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x233a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
label_233a44:
    // 0x233a44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233a48:
    // 0x233a48: 0x8c631270  lw          $v1, 0x1270($v1)
    ctx->pc = 0x233a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4720)));
label_233a4c:
    // 0x233a4c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_233a50:
    if (ctx->pc == 0x233A50u) {
        ctx->pc = 0x233A54u;
        goto label_233a54;
    }
    ctx->pc = 0x233A4Cu;
    {
        const bool branch_taken_0x233a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233a4c) {
            ctx->pc = 0x233AD4u;
            goto label_233ad4;
        }
    }
    ctx->pc = 0x233A54u;
label_233a54:
    // 0x233a54: 0xc08cd34  jal         func_2334D0
label_233a58:
    if (ctx->pc == 0x233A58u) {
        ctx->pc = 0x233A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A54u;
        // 0x233a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A5Cu;
        goto label_233a5c;
    }
    ctx->pc = 0x233A54u;
    SET_GPR_U32(ctx, 31, 0x233A5Cu);
    ctx->pc = 0x233A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A54u;
    // 0x233a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334D0u;
    goto label_2334d0;
    ctx->pc = 0x233A5Cu;
label_233a5c:
    // 0x233a5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x233a5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233a60:
    // 0x233a60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_233a64:
    if (ctx->pc == 0x233A64u) {
        ctx->pc = 0x233A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A60u;
        // 0x233a64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A68u;
        goto label_233a68;
    }
    ctx->pc = 0x233A60u;
    {
        const bool branch_taken_0x233a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A60u;
        // 0x233a64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a60) {
            ctx->pc = 0x233A70u;
            goto label_233a70;
        }
    }
    ctx->pc = 0x233A68u;
label_233a68:
    // 0x233a68: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_233a6c:
    if (ctx->pc == 0x233A6Cu) {
        ctx->pc = 0x233A70u;
        goto label_233a70;
    }
    ctx->pc = 0x233A68u;
    {
        const bool branch_taken_0x233a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x233a68) {
            ctx->pc = 0x233AD4u;
            goto label_233ad4;
        }
    }
    ctx->pc = 0x233A70u;
label_233a70:
    // 0x233a70: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x233a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233a74:
    // 0x233a74: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x233a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_233a78:
    // 0x233a78: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233a7c:
    // 0x233a7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x233a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_233a80:
    // 0x233a80: 0x8c421268  lw          $v0, 0x1268($v0)
    ctx->pc = 0x233a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4712)));
label_233a84:
    // 0x233a84: 0x0  nop
    ctx->pc = 0x233a84u;
    // NOP
label_233a88:
    // 0x233a88: 0x0  nop
    ctx->pc = 0x233a88u;
    // NOP
label_233a8c:
    // 0x233a8c: 0x0  nop
    ctx->pc = 0x233a8cu;
    // NOP
label_233a90:
    // 0x233a90: 0x0  nop
    ctx->pc = 0x233a90u;
    // NOP
label_233a94:
    // 0x233a94: 0x0  nop
    ctx->pc = 0x233a94u;
    // NOP
label_233a98:
    // 0x233a98: 0x0  nop
    ctx->pc = 0x233a98u;
    // NOP
label_233a9c:
    // 0x233a9c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_233aa0:
    if (ctx->pc == 0x233AA0u) {
        ctx->pc = 0x233AA4u;
        goto label_233aa4;
    }
    ctx->pc = 0x233A9Cu;
    {
        const bool branch_taken_0x233a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233a9c) {
            ctx->pc = 0x233A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233a78;
        }
    }
    ctx->pc = 0x233AA4u;
label_233aa4:
    // 0x233aa4: 0x0  nop
    ctx->pc = 0x233aa4u;
    // NOP
label_233aa8:
    // 0x233aa8: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233aac:
    // 0x233aac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233ab0:
    // 0x233ab0: 0x8c421270  lw          $v0, 0x1270($v0)
    ctx->pc = 0x233ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4720)));
label_233ab4:
    // 0x233ab4: 0x0  nop
    ctx->pc = 0x233ab4u;
    // NOP
label_233ab8:
    // 0x233ab8: 0x0  nop
    ctx->pc = 0x233ab8u;
    // NOP
label_233abc:
    // 0x233abc: 0x0  nop
    ctx->pc = 0x233abcu;
    // NOP
label_233ac0:
    // 0x233ac0: 0x0  nop
    ctx->pc = 0x233ac0u;
    // NOP
label_233ac4:
    // 0x233ac4: 0x0  nop
    ctx->pc = 0x233ac4u;
    // NOP
label_233ac8:
    // 0x233ac8: 0x0  nop
    ctx->pc = 0x233ac8u;
    // NOP
label_233acc:
    // 0x233acc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_233ad0:
    if (ctx->pc == 0x233AD0u) {
        ctx->pc = 0x233AD4u;
        goto label_233ad4;
    }
    ctx->pc = 0x233ACCu;
    {
        const bool branch_taken_0x233acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233acc) {
            ctx->pc = 0x233AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233aa8;
        }
    }
    ctx->pc = 0x233AD4u;
label_233ad4:
    // 0x233ad4: 0xc068ade  jal         func_1A2B78
label_233ad8:
    if (ctx->pc == 0x233AD8u) {
        ctx->pc = 0x233AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AD4u;
        // 0x233ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233ADCu;
        goto label_233adc;
    }
    ctx->pc = 0x233AD4u;
    SET_GPR_U32(ctx, 31, 0x233ADCu);
    ctx->pc = 0x233AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233AD4u;
    // 0x233ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2B78u;
    { ctx->pc = 0x1a2b78; return; }
    ctx->pc = 0x233ADCu;
label_233adc:
    // 0x233adc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x233adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_233ae0:
    // 0x233ae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233ae4:
    // 0x233ae4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233ae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_233ae8:
    // 0x233ae8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x233ae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_233aec:
    // 0x233aec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233aecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_233af0:
    // 0x233af0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233af0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_233af4:
    // 0x233af4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x233af4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_233af8:
    // 0x233af8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x233af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_233afc:
    // 0x233afc: 0x3e00008  jr          $ra
label_233b00:
    if (ctx->pc == 0x233B00u) {
        ctx->pc = 0x233B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AFCu;
        // 0x233b00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B04u;
        goto label_233b04;
    }
    ctx->pc = 0x233AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AFCu;
        // 0x233b00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233B04u;
label_233b04:
    // 0x233b04: 0x0  nop
    ctx->pc = 0x233b04u;
    // NOP
label_233b08:
    // 0x233b08: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233b0c:
    // 0x233b0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233b0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233b10:
    // 0x233b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233b14:
    // 0x233b14: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_233b18:
    // 0x233b18: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x233b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_233b1c:
    // 0x233b1c: 0xc08cd30  jal         func_2334C0
label_233b20:
    if (ctx->pc == 0x233B20u) {
        ctx->pc = 0x233B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B1Cu;
        // 0x233b20: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B24u;
        goto label_233b24;
    }
    ctx->pc = 0x233B1Cu;
    SET_GPR_U32(ctx, 31, 0x233B24u);
    ctx->pc = 0x233B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B1Cu;
    // 0x233b20: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334C0u;
    goto label_2334c0;
    ctx->pc = 0x233B24u;
label_233b24:
    // 0x233b24: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233b28:
    // 0x233b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233b2c:
    // 0x233b2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x233b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_233b30:
    // 0x233b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233b34:
    // 0x233b34: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_233b38:
    // 0x233b38: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x233b38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_233b3c:
    // 0x233b3c: 0xac231290  sw          $v1, 0x1290($at)
    ctx->pc = 0x233b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4752), GPR_U32(ctx, 3));
label_233b40:
    // 0x233b40: 0x3e00008  jr          $ra
label_233b44:
    if (ctx->pc == 0x233B44u) {
        ctx->pc = 0x233B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B40u;
        // 0x233b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B48u;
        goto label_233b48;
    }
    ctx->pc = 0x233B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B40u;
        // 0x233b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233B48u;
label_233b48:
    // 0x233b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233b4c:
    // 0x233b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233b50:
    // 0x233b50: 0xc08c42e  jal         func_2310B8
label_233b54:
    if (ctx->pc == 0x233B54u) {
        ctx->pc = 0x233B58u;
        goto label_233b58;
    }
    ctx->pc = 0x233B50u;
    SET_GPR_U32(ctx, 31, 0x233B58u);
    ctx->pc = 0x2310B8u;
    { ctx->pc = 0x2310b8; return; }
    ctx->pc = 0x233B58u;
label_233b58:
    // 0x233b58: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233b5c:
    // 0x233b5c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_233b60:
    // 0x233b60: 0x342111a0  ori         $at, $at, 0x11A0
    ctx->pc = 0x233b60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4512);
label_233b64:
    // 0x233b64: 0xc08c9ee  jal         func_2327B8
label_233b68:
    if (ctx->pc == 0x233B68u) {
        ctx->pc = 0x233B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B64u;
        // 0x233b68: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B6Cu;
        goto label_233b6c;
    }
    ctx->pc = 0x233B64u;
    SET_GPR_U32(ctx, 31, 0x233B6Cu);
    ctx->pc = 0x233B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B64u;
    // 0x233b68: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2327B8u;
    { ctx->pc = 0x2327b8; return; }
    ctx->pc = 0x233B6Cu;
label_233b6c:
    // 0x233b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233b70:
    // 0x233b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233b74:
    // 0x233b74: 0x3e00008  jr          $ra
label_233b78:
    if (ctx->pc == 0x233B78u) {
        ctx->pc = 0x233B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B74u;
        // 0x233b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B7Cu;
        goto label_233b7c;
    }
    ctx->pc = 0x233B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B74u;
        // 0x233b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233B7Cu;
label_233b7c:
    // 0x233b7c: 0x0  nop
    ctx->pc = 0x233b7cu;
    // NOP
label_233b80:
    // 0x233b80: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233b84:
    // 0x233b84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233b88:
    // 0x233b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233b8c:
    // 0x233b8c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_233b90:
    // 0x233b90: 0x342111a0  ori         $at, $at, 0x11A0
    ctx->pc = 0x233b90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4512);
label_233b94:
    // 0x233b94: 0xc08ca6e  jal         func_2329B8
    ctx->pc = 0x233b98u;
    return;
}

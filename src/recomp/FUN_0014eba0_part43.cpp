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


void FUN_0014eba0_part43(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1633c0u: goto label_1633c0;
        case 0x1633c4u: goto label_1633c4;
        case 0x1633c8u: goto label_1633c8;
        case 0x1633ccu: goto label_1633cc;
        case 0x1633d0u: goto label_1633d0;
        case 0x1633d4u: goto label_1633d4;
        case 0x1633d8u: goto label_1633d8;
        case 0x1633dcu: goto label_1633dc;
        case 0x1633e0u: goto label_1633e0;
        case 0x1633e4u: goto label_1633e4;
        case 0x1633e8u: goto label_1633e8;
        case 0x1633ecu: goto label_1633ec;
        case 0x1633f0u: goto label_1633f0;
        case 0x1633f4u: goto label_1633f4;
        case 0x1633f8u: goto label_1633f8;
        case 0x1633fcu: goto label_1633fc;
        case 0x163400u: goto label_163400;
        case 0x163404u: goto label_163404;
        case 0x163408u: goto label_163408;
        case 0x16340cu: goto label_16340c;
        case 0x163410u: goto label_163410;
        case 0x163414u: goto label_163414;
        case 0x163418u: goto label_163418;
        case 0x16341cu: goto label_16341c;
        case 0x163420u: goto label_163420;
        case 0x163424u: goto label_163424;
        case 0x163428u: goto label_163428;
        case 0x16342cu: goto label_16342c;
        case 0x163430u: goto label_163430;
        case 0x163434u: goto label_163434;
        case 0x163438u: goto label_163438;
        case 0x16343cu: goto label_16343c;
        case 0x163440u: goto label_163440;
        case 0x163444u: goto label_163444;
        case 0x163448u: goto label_163448;
        case 0x16344cu: goto label_16344c;
        case 0x163450u: goto label_163450;
        case 0x163454u: goto label_163454;
        case 0x163458u: goto label_163458;
        case 0x16345cu: goto label_16345c;
        case 0x163460u: goto label_163460;
        case 0x163464u: goto label_163464;
        case 0x163468u: goto label_163468;
        case 0x16346cu: goto label_16346c;
        case 0x163470u: goto label_163470;
        case 0x163474u: goto label_163474;
        case 0x163478u: goto label_163478;
        case 0x16347cu: goto label_16347c;
        case 0x163480u: goto label_163480;
        case 0x163484u: goto label_163484;
        case 0x163488u: goto label_163488;
        case 0x16348cu: goto label_16348c;
        case 0x163490u: goto label_163490;
        case 0x163494u: goto label_163494;
        case 0x163498u: goto label_163498;
        case 0x16349cu: goto label_16349c;
        case 0x1634a0u: goto label_1634a0;
        case 0x1634a4u: goto label_1634a4;
        case 0x1634a8u: goto label_1634a8;
        case 0x1634acu: goto label_1634ac;
        case 0x1634b0u: goto label_1634b0;
        case 0x1634b4u: goto label_1634b4;
        case 0x1634b8u: goto label_1634b8;
        case 0x1634bcu: goto label_1634bc;
        case 0x1634c0u: goto label_1634c0;
        case 0x1634c4u: goto label_1634c4;
        case 0x1634c8u: goto label_1634c8;
        case 0x1634ccu: goto label_1634cc;
        case 0x1634d0u: goto label_1634d0;
        case 0x1634d4u: goto label_1634d4;
        case 0x1634d8u: goto label_1634d8;
        case 0x1634dcu: goto label_1634dc;
        case 0x1634e0u: goto label_1634e0;
        case 0x1634e4u: goto label_1634e4;
        case 0x1634e8u: goto label_1634e8;
        case 0x1634ecu: goto label_1634ec;
        case 0x1634f0u: goto label_1634f0;
        case 0x1634f4u: goto label_1634f4;
        case 0x1634f8u: goto label_1634f8;
        case 0x1634fcu: goto label_1634fc;
        case 0x163500u: goto label_163500;
        case 0x163504u: goto label_163504;
        case 0x163508u: goto label_163508;
        case 0x16350cu: goto label_16350c;
        case 0x163510u: goto label_163510;
        case 0x163514u: goto label_163514;
        case 0x163518u: goto label_163518;
        case 0x16351cu: goto label_16351c;
        case 0x163520u: goto label_163520;
        case 0x163524u: goto label_163524;
        case 0x163528u: goto label_163528;
        case 0x16352cu: goto label_16352c;
        case 0x163530u: goto label_163530;
        case 0x163534u: goto label_163534;
        case 0x163538u: goto label_163538;
        case 0x16353cu: goto label_16353c;
        case 0x163540u: goto label_163540;
        case 0x163544u: goto label_163544;
        case 0x163548u: goto label_163548;
        case 0x16354cu: goto label_16354c;
        case 0x163550u: goto label_163550;
        case 0x163554u: goto label_163554;
        case 0x163558u: goto label_163558;
        case 0x16355cu: goto label_16355c;
        case 0x163560u: goto label_163560;
        case 0x163564u: goto label_163564;
        case 0x163568u: goto label_163568;
        case 0x16356cu: goto label_16356c;
        case 0x163570u: goto label_163570;
        case 0x163574u: goto label_163574;
        case 0x163578u: goto label_163578;
        case 0x16357cu: goto label_16357c;
        case 0x163580u: goto label_163580;
        case 0x163584u: goto label_163584;
        case 0x163588u: goto label_163588;
        case 0x16358cu: goto label_16358c;
        case 0x163590u: goto label_163590;
        case 0x163594u: goto label_163594;
        case 0x163598u: goto label_163598;
        case 0x16359cu: goto label_16359c;
        case 0x1635a0u: goto label_1635a0;
        case 0x1635a4u: goto label_1635a4;
        case 0x1635a8u: goto label_1635a8;
        case 0x1635acu: goto label_1635ac;
        case 0x1635b0u: goto label_1635b0;
        case 0x1635b4u: goto label_1635b4;
        case 0x1635b8u: goto label_1635b8;
        case 0x1635bcu: goto label_1635bc;
        case 0x1635c0u: goto label_1635c0;
        case 0x1635c4u: goto label_1635c4;
        case 0x1635c8u: goto label_1635c8;
        case 0x1635ccu: goto label_1635cc;
        case 0x1635d0u: goto label_1635d0;
        case 0x1635d4u: goto label_1635d4;
        case 0x1635d8u: goto label_1635d8;
        case 0x1635dcu: goto label_1635dc;
        case 0x1635e0u: goto label_1635e0;
        case 0x1635e4u: goto label_1635e4;
        case 0x1635e8u: goto label_1635e8;
        case 0x1635ecu: goto label_1635ec;
        case 0x1635f0u: goto label_1635f0;
        case 0x1635f4u: goto label_1635f4;
        case 0x1635f8u: goto label_1635f8;
        case 0x1635fcu: goto label_1635fc;
        case 0x163600u: goto label_163600;
        case 0x163604u: goto label_163604;
        case 0x163608u: goto label_163608;
        case 0x16360cu: goto label_16360c;
        case 0x163610u: goto label_163610;
        case 0x163614u: goto label_163614;
        case 0x163618u: goto label_163618;
        case 0x16361cu: goto label_16361c;
        case 0x163620u: goto label_163620;
        case 0x163624u: goto label_163624;
        case 0x163628u: goto label_163628;
        case 0x16362cu: goto label_16362c;
        case 0x163630u: goto label_163630;
        case 0x163634u: goto label_163634;
        case 0x163638u: goto label_163638;
        case 0x16363cu: goto label_16363c;
        case 0x163640u: goto label_163640;
        case 0x163644u: goto label_163644;
        case 0x163648u: goto label_163648;
        case 0x16364cu: goto label_16364c;
        case 0x163650u: goto label_163650;
        case 0x163654u: goto label_163654;
        case 0x163658u: goto label_163658;
        case 0x16365cu: goto label_16365c;
        case 0x163660u: goto label_163660;
        case 0x163664u: goto label_163664;
        case 0x163668u: goto label_163668;
        case 0x16366cu: goto label_16366c;
        case 0x163670u: goto label_163670;
        case 0x163674u: goto label_163674;
        case 0x163678u: goto label_163678;
        case 0x16367cu: goto label_16367c;
        case 0x163680u: goto label_163680;
        case 0x163684u: goto label_163684;
        case 0x163688u: goto label_163688;
        case 0x16368cu: goto label_16368c;
        case 0x163690u: goto label_163690;
        case 0x163694u: goto label_163694;
        case 0x163698u: goto label_163698;
        case 0x16369cu: goto label_16369c;
        case 0x1636a0u: goto label_1636a0;
        case 0x1636a4u: goto label_1636a4;
        case 0x1636a8u: goto label_1636a8;
        case 0x1636acu: goto label_1636ac;
        case 0x1636b0u: goto label_1636b0;
        case 0x1636b4u: goto label_1636b4;
        case 0x1636b8u: goto label_1636b8;
        case 0x1636bcu: goto label_1636bc;
        case 0x1636c0u: goto label_1636c0;
        case 0x1636c4u: goto label_1636c4;
        case 0x1636c8u: goto label_1636c8;
        case 0x1636ccu: goto label_1636cc;
        case 0x1636d0u: goto label_1636d0;
        case 0x1636d4u: goto label_1636d4;
        case 0x1636d8u: goto label_1636d8;
        case 0x1636dcu: goto label_1636dc;
        case 0x1636e0u: goto label_1636e0;
        case 0x1636e4u: goto label_1636e4;
        case 0x1636e8u: goto label_1636e8;
        case 0x1636ecu: goto label_1636ec;
        case 0x1636f0u: goto label_1636f0;
        case 0x1636f4u: goto label_1636f4;
        case 0x1636f8u: goto label_1636f8;
        case 0x1636fcu: goto label_1636fc;
        case 0x163700u: goto label_163700;
        case 0x163704u: goto label_163704;
        case 0x163708u: goto label_163708;
        case 0x16370cu: goto label_16370c;
        case 0x163710u: goto label_163710;
        case 0x163714u: goto label_163714;
        case 0x163718u: goto label_163718;
        case 0x16371cu: goto label_16371c;
        case 0x163720u: goto label_163720;
        case 0x163724u: goto label_163724;
        case 0x163728u: goto label_163728;
        case 0x16372cu: goto label_16372c;
        case 0x163730u: goto label_163730;
        case 0x163734u: goto label_163734;
        case 0x163738u: goto label_163738;
        case 0x16373cu: goto label_16373c;
        case 0x163740u: goto label_163740;
        case 0x163744u: goto label_163744;
        case 0x163748u: goto label_163748;
        case 0x16374cu: goto label_16374c;
        case 0x163750u: goto label_163750;
        case 0x163754u: goto label_163754;
        case 0x163758u: goto label_163758;
        case 0x16375cu: goto label_16375c;
        case 0x163760u: goto label_163760;
        case 0x163764u: goto label_163764;
        case 0x163768u: goto label_163768;
        case 0x16376cu: goto label_16376c;
        case 0x163770u: goto label_163770;
        case 0x163774u: goto label_163774;
        case 0x163778u: goto label_163778;
        case 0x16377cu: goto label_16377c;
        case 0x163780u: goto label_163780;
        case 0x163784u: goto label_163784;
        case 0x163788u: goto label_163788;
        case 0x16378cu: goto label_16378c;
        case 0x163790u: goto label_163790;
        case 0x163794u: goto label_163794;
        case 0x163798u: goto label_163798;
        case 0x16379cu: goto label_16379c;
        case 0x1637a0u: goto label_1637a0;
        case 0x1637a4u: goto label_1637a4;
        case 0x1637a8u: goto label_1637a8;
        case 0x1637acu: goto label_1637ac;
        case 0x1637b0u: goto label_1637b0;
        case 0x1637b4u: goto label_1637b4;
        case 0x1637b8u: goto label_1637b8;
        case 0x1637bcu: goto label_1637bc;
        case 0x1637c0u: goto label_1637c0;
        case 0x1637c4u: goto label_1637c4;
        case 0x1637c8u: goto label_1637c8;
        case 0x1637ccu: goto label_1637cc;
        case 0x1637d0u: goto label_1637d0;
        case 0x1637d4u: goto label_1637d4;
        case 0x1637d8u: goto label_1637d8;
        case 0x1637dcu: goto label_1637dc;
        case 0x1637e0u: goto label_1637e0;
        case 0x1637e4u: goto label_1637e4;
        case 0x1637e8u: goto label_1637e8;
        case 0x1637ecu: goto label_1637ec;
        case 0x1637f0u: goto label_1637f0;
        case 0x1637f4u: goto label_1637f4;
        case 0x1637f8u: goto label_1637f8;
        case 0x1637fcu: goto label_1637fc;
        case 0x163800u: goto label_163800;
        case 0x163804u: goto label_163804;
        case 0x163808u: goto label_163808;
        case 0x16380cu: goto label_16380c;
        case 0x163810u: goto label_163810;
        case 0x163814u: goto label_163814;
        case 0x163818u: goto label_163818;
        case 0x16381cu: goto label_16381c;
        case 0x163820u: goto label_163820;
        case 0x163824u: goto label_163824;
        case 0x163828u: goto label_163828;
        case 0x16382cu: goto label_16382c;
        case 0x163830u: goto label_163830;
        case 0x163834u: goto label_163834;
        case 0x163838u: goto label_163838;
        case 0x16383cu: goto label_16383c;
        case 0x163840u: goto label_163840;
        case 0x163844u: goto label_163844;
        case 0x163848u: goto label_163848;
        case 0x16384cu: goto label_16384c;
        case 0x163850u: goto label_163850;
        case 0x163854u: goto label_163854;
        case 0x163858u: goto label_163858;
        case 0x16385cu: goto label_16385c;
        case 0x163860u: goto label_163860;
        case 0x163864u: goto label_163864;
        case 0x163868u: goto label_163868;
        case 0x16386cu: goto label_16386c;
        case 0x163870u: goto label_163870;
        case 0x163874u: goto label_163874;
        case 0x163878u: goto label_163878;
        case 0x16387cu: goto label_16387c;
        case 0x163880u: goto label_163880;
        case 0x163884u: goto label_163884;
        case 0x163888u: goto label_163888;
        case 0x16388cu: goto label_16388c;
        case 0x163890u: goto label_163890;
        case 0x163894u: goto label_163894;
        case 0x163898u: goto label_163898;
        case 0x16389cu: goto label_16389c;
        case 0x1638a0u: goto label_1638a0;
        case 0x1638a4u: goto label_1638a4;
        case 0x1638a8u: goto label_1638a8;
        case 0x1638acu: goto label_1638ac;
        case 0x1638b0u: goto label_1638b0;
        case 0x1638b4u: goto label_1638b4;
        case 0x1638b8u: goto label_1638b8;
        case 0x1638bcu: goto label_1638bc;
        case 0x1638c0u: goto label_1638c0;
        case 0x1638c4u: goto label_1638c4;
        case 0x1638c8u: goto label_1638c8;
        case 0x1638ccu: goto label_1638cc;
        case 0x1638d0u: goto label_1638d0;
        case 0x1638d4u: goto label_1638d4;
        case 0x1638d8u: goto label_1638d8;
        case 0x1638dcu: goto label_1638dc;
        case 0x1638e0u: goto label_1638e0;
        case 0x1638e4u: goto label_1638e4;
        case 0x1638e8u: goto label_1638e8;
        case 0x1638ecu: goto label_1638ec;
        case 0x1638f0u: goto label_1638f0;
        case 0x1638f4u: goto label_1638f4;
        case 0x1638f8u: goto label_1638f8;
        case 0x1638fcu: goto label_1638fc;
        case 0x163900u: goto label_163900;
        case 0x163904u: goto label_163904;
        case 0x163908u: goto label_163908;
        case 0x16390cu: goto label_16390c;
        case 0x163910u: goto label_163910;
        case 0x163914u: goto label_163914;
        case 0x163918u: goto label_163918;
        case 0x16391cu: goto label_16391c;
        case 0x163920u: goto label_163920;
        case 0x163924u: goto label_163924;
        case 0x163928u: goto label_163928;
        case 0x16392cu: goto label_16392c;
        case 0x163930u: goto label_163930;
        case 0x163934u: goto label_163934;
        case 0x163938u: goto label_163938;
        case 0x16393cu: goto label_16393c;
        case 0x163940u: goto label_163940;
        case 0x163944u: goto label_163944;
        case 0x163948u: goto label_163948;
        case 0x16394cu: goto label_16394c;
        case 0x163950u: goto label_163950;
        case 0x163954u: goto label_163954;
        case 0x163958u: goto label_163958;
        case 0x16395cu: goto label_16395c;
        case 0x163960u: goto label_163960;
        case 0x163964u: goto label_163964;
        case 0x163968u: goto label_163968;
        case 0x16396cu: goto label_16396c;
        case 0x163970u: goto label_163970;
        case 0x163974u: goto label_163974;
        case 0x163978u: goto label_163978;
        case 0x16397cu: goto label_16397c;
        case 0x163980u: goto label_163980;
        case 0x163984u: goto label_163984;
        case 0x163988u: goto label_163988;
        case 0x16398cu: goto label_16398c;
        case 0x163990u: goto label_163990;
        case 0x163994u: goto label_163994;
        case 0x163998u: goto label_163998;
        case 0x16399cu: goto label_16399c;
        case 0x1639a0u: goto label_1639a0;
        case 0x1639a4u: goto label_1639a4;
        case 0x1639a8u: goto label_1639a8;
        case 0x1639acu: goto label_1639ac;
        case 0x1639b0u: goto label_1639b0;
        case 0x1639b4u: goto label_1639b4;
        case 0x1639b8u: goto label_1639b8;
        case 0x1639bcu: goto label_1639bc;
        case 0x1639c0u: goto label_1639c0;
        case 0x1639c4u: goto label_1639c4;
        case 0x1639c8u: goto label_1639c8;
        case 0x1639ccu: goto label_1639cc;
        case 0x1639d0u: goto label_1639d0;
        case 0x1639d4u: goto label_1639d4;
        case 0x1639d8u: goto label_1639d8;
        case 0x1639dcu: goto label_1639dc;
        case 0x1639e0u: goto label_1639e0;
        case 0x1639e4u: goto label_1639e4;
        case 0x1639e8u: goto label_1639e8;
        case 0x1639ecu: goto label_1639ec;
        case 0x1639f0u: goto label_1639f0;
        case 0x1639f4u: goto label_1639f4;
        case 0x1639f8u: goto label_1639f8;
        case 0x1639fcu: goto label_1639fc;
        case 0x163a00u: goto label_163a00;
        case 0x163a04u: goto label_163a04;
        case 0x163a08u: goto label_163a08;
        case 0x163a0cu: goto label_163a0c;
        case 0x163a10u: goto label_163a10;
        case 0x163a14u: goto label_163a14;
        case 0x163a18u: goto label_163a18;
        case 0x163a1cu: goto label_163a1c;
        case 0x163a20u: goto label_163a20;
        case 0x163a24u: goto label_163a24;
        case 0x163a28u: goto label_163a28;
        case 0x163a2cu: goto label_163a2c;
        case 0x163a30u: goto label_163a30;
        case 0x163a34u: goto label_163a34;
        case 0x163a38u: goto label_163a38;
        case 0x163a3cu: goto label_163a3c;
        case 0x163a40u: goto label_163a40;
        case 0x163a44u: goto label_163a44;
        case 0x163a48u: goto label_163a48;
        case 0x163a4cu: goto label_163a4c;
        case 0x163a50u: goto label_163a50;
        case 0x163a54u: goto label_163a54;
        case 0x163a58u: goto label_163a58;
        case 0x163a5cu: goto label_163a5c;
        case 0x163a60u: goto label_163a60;
        case 0x163a64u: goto label_163a64;
        case 0x163a68u: goto label_163a68;
        case 0x163a6cu: goto label_163a6c;
        case 0x163a70u: goto label_163a70;
        case 0x163a74u: goto label_163a74;
        case 0x163a78u: goto label_163a78;
        case 0x163a7cu: goto label_163a7c;
        case 0x163a80u: goto label_163a80;
        case 0x163a84u: goto label_163a84;
        case 0x163a88u: goto label_163a88;
        case 0x163a8cu: goto label_163a8c;
        case 0x163a90u: goto label_163a90;
        case 0x163a94u: goto label_163a94;
        case 0x163a98u: goto label_163a98;
        case 0x163a9cu: goto label_163a9c;
        case 0x163aa0u: goto label_163aa0;
        case 0x163aa4u: goto label_163aa4;
        case 0x163aa8u: goto label_163aa8;
        case 0x163aacu: goto label_163aac;
        case 0x163ab0u: goto label_163ab0;
        case 0x163ab4u: goto label_163ab4;
        case 0x163ab8u: goto label_163ab8;
        case 0x163abcu: goto label_163abc;
        case 0x163ac0u: goto label_163ac0;
        case 0x163ac4u: goto label_163ac4;
        case 0x163ac8u: goto label_163ac8;
        case 0x163accu: goto label_163acc;
        case 0x163ad0u: goto label_163ad0;
        case 0x163ad4u: goto label_163ad4;
        case 0x163ad8u: goto label_163ad8;
        case 0x163adcu: goto label_163adc;
        case 0x163ae0u: goto label_163ae0;
        case 0x163ae4u: goto label_163ae4;
        case 0x163ae8u: goto label_163ae8;
        case 0x163aecu: goto label_163aec;
        case 0x163af0u: goto label_163af0;
        case 0x163af4u: goto label_163af4;
        case 0x163af8u: goto label_163af8;
        case 0x163afcu: goto label_163afc;
        case 0x163b00u: goto label_163b00;
        case 0x163b04u: goto label_163b04;
        case 0x163b08u: goto label_163b08;
        case 0x163b0cu: goto label_163b0c;
        case 0x163b10u: goto label_163b10;
        case 0x163b14u: goto label_163b14;
        case 0x163b18u: goto label_163b18;
        case 0x163b1cu: goto label_163b1c;
        case 0x163b20u: goto label_163b20;
        case 0x163b24u: goto label_163b24;
        case 0x163b28u: goto label_163b28;
        case 0x163b2cu: goto label_163b2c;
        case 0x163b30u: goto label_163b30;
        case 0x163b34u: goto label_163b34;
        case 0x163b38u: goto label_163b38;
        case 0x163b3cu: goto label_163b3c;
        case 0x163b40u: goto label_163b40;
        case 0x163b44u: goto label_163b44;
        case 0x163b48u: goto label_163b48;
        case 0x163b4cu: goto label_163b4c;
        case 0x163b50u: goto label_163b50;
        case 0x163b54u: goto label_163b54;
        case 0x163b58u: goto label_163b58;
        case 0x163b5cu: goto label_163b5c;
        case 0x163b60u: goto label_163b60;
        case 0x163b64u: goto label_163b64;
        case 0x163b68u: goto label_163b68;
        case 0x163b6cu: goto label_163b6c;
        case 0x163b70u: goto label_163b70;
        case 0x163b74u: goto label_163b74;
        case 0x163b78u: goto label_163b78;
        case 0x163b7cu: goto label_163b7c;
        case 0x163b80u: goto label_163b80;
        case 0x163b84u: goto label_163b84;
        case 0x163b88u: goto label_163b88;
        case 0x163b8cu: goto label_163b8c;
        default: return;
    }

label_1633c0:
    // 0x1633c0: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x1633c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
label_1633c4:
    // 0x1633c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1633c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1633c8:
    // 0x1633c8: 0x0  nop
    ctx->pc = 0x1633c8u;
    // NOP
label_1633cc:
    // 0x1633cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1633ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1633d0:
    // 0x1633d0: 0x0  nop
    ctx->pc = 0x1633d0u;
    // NOP
label_1633d4:
    // 0x1633d4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1633d8:
    if (ctx->pc == 0x1633D8u) {
        ctx->pc = 0x1633DCu;
        goto label_1633dc;
    }
    ctx->pc = 0x1633D4u;
    {
        const bool branch_taken_0x1633d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1633d4) {
            ctx->pc = 0x16340Cu;
            goto label_16340c;
        }
    }
    ctx->pc = 0x1633DCu;
label_1633dc:
    // 0x1633dc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1633dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1633e0:
    // 0x1633e0: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1633e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_1633e4:
    // 0x1633e4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1633e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_1633e8:
    // 0x1633e8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1633e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1633ec:
    // 0x1633ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1633ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1633f0:
    // 0x1633f0: 0x0  nop
    ctx->pc = 0x1633f0u;
    // NOP
label_1633f4:
    // 0x1633f4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1633f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1633f8:
    // 0x1633f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1633f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1633fc:
    // 0x1633fc: 0x0  nop
    ctx->pc = 0x1633fcu;
    // NOP
label_163400:
    // 0x163400: 0x0  nop
    ctx->pc = 0x163400u;
    // NOP
label_163404:
    // 0x163404: 0x10000003  b           . + 4 + (0x3 << 2)
label_163408:
    if (ctx->pc == 0x163408u) {
        ctx->pc = 0x163408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163404u;
        // 0x163408: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x16340Cu;
        goto label_16340c;
    }
    ctx->pc = 0x163404u;
    {
        const bool branch_taken_0x163404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163404u;
        // 0x163408: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x163404) {
            ctx->pc = 0x163414u;
            goto label_163414;
        }
    }
    ctx->pc = 0x16340Cu;
label_16340c:
    // 0x16340c: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x16340cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
label_163410:
    // 0x163410: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x163410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_163414:
    // 0x163414: 0x3e00008  jr          $ra
label_163418:
    if (ctx->pc == 0x163418u) {
        ctx->pc = 0x16341Cu;
        goto label_16341c;
    }
    ctx->pc = 0x163414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16341Cu;
label_16341c:
    // 0x16341c: 0x0  nop
    ctx->pc = 0x16341cu;
    // NOP
label_163420:
    // 0x163420: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x163420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_163424:
    // 0x163424: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x163424u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163428:
    // 0x163428: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x163428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_16342c:
    // 0x16342c: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x16342cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163430:
    // 0x163430: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x163430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_163434:
    // 0x163434: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x163434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_163438:
    // 0x163438: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x163438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16343c:
    // 0x16343c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16343cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_163440:
    // 0x163440: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x163440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_163444:
    // 0x163444: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_163448:
    // 0x163448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16344c:
    // 0x16344c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x16344cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_163450:
    // 0x163450: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x163450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_163454:
    // 0x163454: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x163454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_163458:
    // 0x163458: 0x1a3880a  movz        $s1, $t5, $v1
    ctx->pc = 0x163458u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 13));
label_16345c:
    // 0x16345c: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x16345cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_163460:
    // 0x163460: 0x10200093  beqz        $at, . + 4 + (0x93 << 2)
label_163464:
    if (ctx->pc == 0x163464u) {
        ctx->pc = 0x163464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163460u;
        // 0x163464: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163468u;
        goto label_163468;
    }
    ctx->pc = 0x163460u;
    {
        const bool branch_taken_0x163460 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163460u;
        // 0x163464: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163460) {
            ctx->pc = 0x1636B0u;
            goto label_1636b0;
        }
    }
    ctx->pc = 0x163468u;
label_163468:
    // 0x163468: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x163468u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16346c:
    // 0x16346c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x16346cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_163470:
    // 0x163470: 0x3c0c0033  lui         $t4, 0x33
    ctx->pc = 0x163470u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)51 << 16));
label_163474:
    // 0x163474: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x163474u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_163478:
    // 0x163478: 0x34c77730  ori         $a3, $a2, 0x7730
    ctx->pc = 0x163478u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)30512);
label_16347c:
    // 0x16347c: 0x258c4b40  addiu       $t4, $t4, 0x4B40
    ctx->pc = 0x16347cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 19264));
label_163480:
    // 0x163480: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x163480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_163484:
    // 0x163484: 0x1838021  addu        $s0, $t4, $v1
    ctx->pc = 0x163484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_163488:
    // 0x163488: 0x34217610  ori         $at, $at, 0x7610
    ctx->pc = 0x163488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30224);
label_16348c:
    // 0x16348c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_163490:
    if (ctx->pc == 0x163490u) {
        ctx->pc = 0x163490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16348Cu;
        // 0x163490: 0x201c821  addu        $t9, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163494u;
        goto label_163494;
    }
    ctx->pc = 0x16348Cu;
    {
        const bool branch_taken_0x16348c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x163490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16348Cu;
        // 0x163490: 0x201c821  addu        $t9, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16348c) {
            ctx->pc = 0x1634B4u;
            goto label_1634b4;
        }
    }
    ctx->pc = 0x163494u;
label_163494:
    // 0x163494: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_163498:
    if (ctx->pc == 0x163498u) {
        ctx->pc = 0x16349Cu;
        goto label_16349c;
    }
    ctx->pc = 0x163494u;
    {
        const bool branch_taken_0x163494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x163494) {
            ctx->pc = 0x1634B4u;
            goto label_1634b4;
        }
    }
    ctx->pc = 0x16349Cu;
label_16349c:
    // 0x16349c: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x16349cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1634a0:
    // 0x1634a0: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_1634a4:
    if (ctx->pc == 0x1634A4u) {
        ctx->pc = 0x1634A8u;
        goto label_1634a8;
    }
    ctx->pc = 0x1634A0u;
    {
        const bool branch_taken_0x1634a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1634a0) {
            ctx->pc = 0x1634C0u;
            goto label_1634c0;
        }
    }
    ctx->pc = 0x1634A8u;
label_1634a8:
    // 0x1634a8: 0x84a60002  lh          $a2, 0x2($a1)
    ctx->pc = 0x1634a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_1634ac:
    // 0x1634ac: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
label_1634b0:
    if (ctx->pc == 0x1634B0u) {
        ctx->pc = 0x1634B4u;
        goto label_1634b4;
    }
    ctx->pc = 0x1634ACu;
    {
        const bool branch_taken_0x1634ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1634ac) {
            ctx->pc = 0x1634C0u;
            goto label_1634c0;
        }
    }
    ctx->pc = 0x1634B4u;
label_1634b4:
    // 0x1634b4: 0x0  nop
    ctx->pc = 0x1634b4u;
    // NOP
label_1634b8:
    // 0x1634b8: 0x10000079  b           . + 4 + (0x79 << 2)
label_1634bc:
    if (ctx->pc == 0x1634BCu) {
        ctx->pc = 0x1634BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634B8u;
        // 0x1634bc: 0xaf200000  sw          $zero, 0x0($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1634C0u;
        goto label_1634c0;
    }
    ctx->pc = 0x1634B8u;
    {
        const bool branch_taken_0x1634b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1634BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634B8u;
        // 0x1634bc: 0xaf200000  sw          $zero, 0x0($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634b8) {
            ctx->pc = 0x1636A0u;
            goto label_1636a0;
        }
    }
    ctx->pc = 0x1634C0u;
label_1634c0:
    // 0x1634c0: 0x10800077  beqz        $a0, . + 4 + (0x77 << 2)
label_1634c4:
    if (ctx->pc == 0x1634C4u) {
        ctx->pc = 0x1634C8u;
        goto label_1634c8;
    }
    ctx->pc = 0x1634C0u;
    {
        const bool branch_taken_0x1634c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1634c0) {
            ctx->pc = 0x1636A0u;
            goto label_1636a0;
        }
    }
    ctx->pc = 0x1634C8u;
label_1634c8:
    // 0x1634c8: 0x8f260000  lw          $a2, 0x0($t9)
    ctx->pc = 0x1634c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
label_1634cc:
    // 0x1634cc: 0x10c0002b  beqz        $a2, . + 4 + (0x2B << 2)
label_1634d0:
    if (ctx->pc == 0x1634D0u) {
        ctx->pc = 0x1634D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634CCu;
        // 0x1634d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1634D4u;
        goto label_1634d4;
    }
    ctx->pc = 0x1634CCu;
    {
        const bool branch_taken_0x1634cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1634D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634CCu;
        // 0x1634d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634cc) {
            ctx->pc = 0x16357Cu;
            goto label_16357c;
        }
    }
    ctx->pc = 0x1634D4u;
label_1634d4:
    // 0x1634d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1634d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1634d8:
    // 0x1634d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1634d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1634dc:
    // 0x1634dc: 0x0  nop
    ctx->pc = 0x1634dcu;
    // NOP
label_1634e0:
    // 0x1634e0: 0xa89821  addu        $s3, $a1, $t0
    ctx->pc = 0x1634e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1634e4:
    // 0x1634e4: 0x86720000  lh          $s2, 0x0($s3)
    ctx->pc = 0x1634e4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_1634e8:
    // 0x1634e8: 0x3295021  addu        $t2, $t9, $t1
    ctx->pc = 0x1634e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 9)));
label_1634ec:
    // 0x1634ec: 0xc5410010  lwc1        $f1, 0x10($t2)
    ctx->pc = 0x1634ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1634f0:
    // 0x1634f0: 0x127080  sll         $t6, $s2, 2
    ctx->pc = 0x1634f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1634f4:
    // 0x1634f4: 0x1d29021  addu        $s2, $t6, $s2
    ctx->pc = 0x1634f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
label_1634f8:
    // 0x1634f8: 0x127080  sll         $t6, $s2, 2
    ctx->pc = 0x1634f8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1634fc:
    // 0x1634fc: 0x24e7021  addu        $t6, $s2, $t6
    ctx->pc = 0x1634fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
label_163500:
    // 0x163500: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x163500u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
label_163504:
    // 0x163504: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x163504u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_163508:
    // 0x163508: 0x0  nop
    ctx->pc = 0x163508u;
    // NOP
label_16350c:
    // 0x16350c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16350cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_163510:
    // 0x163510: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x163510u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_163514:
    // 0x163514: 0x0  nop
    ctx->pc = 0x163514u;
    // NOP
label_163518:
    // 0x163518: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_16351c:
    if (ctx->pc == 0x16351Cu) {
        ctx->pc = 0x163520u;
        goto label_163520;
    }
    ctx->pc = 0x163518u;
    {
        const bool branch_taken_0x163518 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163518) {
            ctx->pc = 0x163558u;
            goto label_163558;
        }
    }
    ctx->pc = 0x163520u;
label_163520:
    // 0x163520: 0x866e0002  lh          $t6, 0x2($s3)
    ctx->pc = 0x163520u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_163524:
    // 0x163524: 0xc5400014  lwc1        $f0, 0x14($t2)
    ctx->pc = 0x163524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_163528:
    // 0x163528: 0xe5080  sll         $t2, $t6, 2
    ctx->pc = 0x163528u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
label_16352c:
    // 0x16352c: 0x14e7021  addu        $t6, $t2, $t6
    ctx->pc = 0x16352cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
label_163530:
    // 0x163530: 0xe5080  sll         $t2, $t6, 2
    ctx->pc = 0x163530u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
label_163534:
    // 0x163534: 0x1ca5021  addu        $t2, $t6, $t2
    ctx->pc = 0x163534u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_163538:
    // 0x163538: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x163538u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_16353c:
    // 0x16353c: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x16353cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_163540:
    // 0x163540: 0x0  nop
    ctx->pc = 0x163540u;
    // NOP
label_163544:
    // 0x163544: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x163544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_163548:
    // 0x163548: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x163548u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16354c:
    // 0x16354c: 0x0  nop
    ctx->pc = 0x16354cu;
    // NOP
label_163550:
    // 0x163550: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_163554:
    if (ctx->pc == 0x163554u) {
        ctx->pc = 0x163558u;
        goto label_163558;
    }
    ctx->pc = 0x163550u;
    {
        const bool branch_taken_0x163550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163550) {
            ctx->pc = 0x163560u;
            goto label_163560;
        }
    }
    ctx->pc = 0x163558u;
label_163558:
    // 0x163558: 0x1000000a  b           . + 4 + (0xA << 2)
label_16355c:
    if (ctx->pc == 0x16355Cu) {
        ctx->pc = 0x16355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163558u;
        // 0x16355c: 0x24180001  addiu       $t8, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163560u;
        goto label_163560;
    }
    ctx->pc = 0x163558u;
    {
        const bool branch_taken_0x163558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163558u;
        // 0x16355c: 0x24180001  addiu       $t8, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163558) {
            ctx->pc = 0x163584u;
            goto label_163584;
        }
    }
    ctx->pc = 0x163560u;
label_163560:
    // 0x163560: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x163560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_163564:
    // 0x163564: 0x28ca0008  slti        $t2, $a2, 0x8
    ctx->pc = 0x163564u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_163568:
    // 0x163568: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x163568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_16356c:
    // 0x16356c: 0x1540ffdb  bnez        $t2, . + 4 + (-0x25 << 2)
label_163570:
    if (ctx->pc == 0x163570u) {
        ctx->pc = 0x163570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16356Cu;
        // 0x163570: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163574u;
        goto label_163574;
    }
    ctx->pc = 0x16356Cu;
    {
        const bool branch_taken_0x16356c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x163570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16356Cu;
        // 0x163570: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16356c) {
            ctx->pc = 0x1634DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1634dc;
        }
    }
    ctx->pc = 0x163574u;
label_163574:
    // 0x163574: 0x10000003  b           . + 4 + (0x3 << 2)
label_163578:
    if (ctx->pc == 0x163578u) {
        ctx->pc = 0x16357Cu;
        goto label_16357c;
    }
    ctx->pc = 0x163574u;
    {
        const bool branch_taken_0x163574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163574) {
            ctx->pc = 0x163584u;
            goto label_163584;
        }
    }
    ctx->pc = 0x16357Cu;
label_16357c:
    // 0x16357c: 0x0  nop
    ctx->pc = 0x16357cu;
    // NOP
label_163580:
    // 0x163580: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x163580u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163584:
    // 0x163584: 0x0  nop
    ctx->pc = 0x163584u;
    // NOP
label_163588:
    // 0x163588: 0x13000045  beqz        $t8, . + 4 + (0x45 << 2)
label_16358c:
    if (ctx->pc == 0x16358Cu) {
        ctx->pc = 0x16358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163588u;
        // 0x16358c: 0xaf2d0000  sw          $t5, 0x0($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163590u;
        goto label_163590;
    }
    ctx->pc = 0x163588u;
    {
        const bool branch_taken_0x163588 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x16358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163588u;
        // 0x16358c: 0xaf2d0000  sw          $t5, 0x0($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163588) {
            ctx->pc = 0x1636A0u;
            goto label_1636a0;
        }
    }
    ctx->pc = 0x163590u;
label_163590:
    // 0x163590: 0x9328000e  lbu         $t0, 0xE($t9)
    ctx->pc = 0x163590u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 14)));
label_163594:
    // 0x163594: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163598:
    // 0x163598: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x163598u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16359c:
    // 0x16359c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x16359cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1635a0:
    // 0x1635a0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1635a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1635a4:
    // 0x1635a4: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x1635a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
label_1635a8:
    // 0x1635a8: 0xa328000e  sb          $t0, 0xE($t9)
    ctx->pc = 0x1635a8u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 14), (uint8_t)GPR_U32(ctx, 8));
label_1635ac:
    // 0x1635ac: 0x0  nop
    ctx->pc = 0x1635acu;
    // NOP
label_1635b0:
    // 0x1635b0: 0xb44021  addu        $t0, $a1, $s4
    ctx->pc = 0x1635b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_1635b4:
    // 0x1635b4: 0x85120000  lh          $s2, 0x0($t0)
    ctx->pc = 0x1635b4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_1635b8:
    // 0x1635b8: 0x3354821  addu        $t1, $t9, $s5
    ctx->pc = 0x1635b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 21)));
label_1635bc:
    // 0x1635bc: 0x250a0002  addiu       $t2, $t0, 0x2
    ctx->pc = 0x1635bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_1635c0:
    // 0x1635c0: 0x127080  sll         $t6, $s2, 2
    ctx->pc = 0x1635c0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1635c4:
    // 0x1635c4: 0x1d29021  addu        $s2, $t6, $s2
    ctx->pc = 0x1635c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
label_1635c8:
    // 0x1635c8: 0x127080  sll         $t6, $s2, 2
    ctx->pc = 0x1635c8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1635cc:
    // 0x1635cc: 0x24e7021  addu        $t6, $s2, $t6
    ctx->pc = 0x1635ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
label_1635d0:
    // 0x1635d0: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1635d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
label_1635d4:
    // 0x1635d4: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x1635d4u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1635d8:
    // 0x1635d8: 0x0  nop
    ctx->pc = 0x1635d8u;
    // NOP
label_1635dc:
    // 0x1635dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1635dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1635e0:
    // 0x1635e0: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x1635e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
label_1635e4:
    // 0x1635e4: 0x85120002  lh          $s2, 0x2($t0)
    ctx->pc = 0x1635e4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_1635e8:
    // 0x1635e8: 0x127080  sll         $t6, $s2, 2
    ctx->pc = 0x1635e8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1635ec:
    // 0x1635ec: 0x1d29021  addu        $s2, $t6, $s2
    ctx->pc = 0x1635ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
label_1635f0:
    // 0x1635f0: 0x127080  sll         $t6, $s2, 2
    ctx->pc = 0x1635f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1635f4:
    // 0x1635f4: 0x24e7021  addu        $t6, $s2, $t6
    ctx->pc = 0x1635f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
label_1635f8:
    // 0x1635f8: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1635f8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
label_1635fc:
    // 0x1635fc: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x1635fcu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_163600:
    // 0x163600: 0x0  nop
    ctx->pc = 0x163600u;
    // NOP
label_163604:
    // 0x163604: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x163604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_163608:
    // 0x163608: 0xe5200014  swc1        $f0, 0x14($t1)
    ctx->pc = 0x163608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 20), bits); }
label_16360c:
    // 0x16360c: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x16360cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_163610:
    // 0x163610: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
label_163614:
    if (ctx->pc == 0x163614u) {
        ctx->pc = 0x163618u;
        goto label_163618;
    }
    ctx->pc = 0x163610u;
    {
        const bool branch_taken_0x163610 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x163610) {
            ctx->pc = 0x163624u;
            goto label_163624;
        }
    }
    ctx->pc = 0x163618u;
label_163618:
    // 0x163618: 0x85480000  lh          $t0, 0x0($t2)
    ctx->pc = 0x163618u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_16361c:
    // 0x16361c: 0x11000019  beqz        $t0, . + 4 + (0x19 << 2)
label_163620:
    if (ctx->pc == 0x163620u) {
        ctx->pc = 0x163624u;
        goto label_163624;
    }
    ctx->pc = 0x16361Cu;
    {
        const bool branch_taken_0x16361c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x16361c) {
            ctx->pc = 0x163684u;
            goto label_163684;
        }
    }
    ctx->pc = 0x163624u;
label_163624:
    // 0x163624: 0x0  nop
    ctx->pc = 0x163624u;
    // NOP
label_163628:
    // 0x163628: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x163628u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16362c:
    // 0x16362c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16362cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163630:
    // 0x163630: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x163630u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163634:
    // 0x163634: 0x2164021  addu        $t0, $s0, $s6
    ctx->pc = 0x163634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_163638:
    // 0x163638: 0x9329000e  lbu         $t1, 0xE($t9)
    ctx->pc = 0x163638u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 14)));
label_16363c:
    // 0x16363c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x16363cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_163640:
    // 0x163640: 0x1725023  subu        $t2, $t3, $s2
    ctx->pc = 0x163640u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 18)));
label_163644:
    // 0x163644: 0x9b880  sll         $s7, $t1, 2
    ctx->pc = 0x163644u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_163648:
    // 0x163648: 0x2e9b821  addu        $s7, $s7, $t1
    ctx->pc = 0x163648u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
label_16364c:
    // 0x16364c: 0x17b8c0  sll         $s7, $s7, 3
    ctx->pc = 0x16364cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
label_163650:
    // 0x163650: 0x2e94823  subu        $t1, $s7, $t1
    ctx->pc = 0x163650u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
label_163654:
    // 0x163654: 0x949c0  sll         $t1, $t1, 7
    ctx->pc = 0x163654u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 7));
label_163658:
    // 0x163658: 0x1094821  addu        $t1, $t0, $t1
    ctx->pc = 0x163658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_16365c:
    // 0x16365c: 0x1334821  addu        $t1, $t1, $s3
    ctx->pc = 0x16365cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
label_163660:
    // 0x163660: 0x1210821  addu        $at, $t1, $at
    ctx->pc = 0x163660u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 1)));
label_163664:
    // 0x163664: 0xa42a4fda  sh          $t2, 0x4FDA($at)
    ctx->pc = 0x163664u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20442), (uint16_t)GPR_U32(ctx, 10));
label_163668:
    // 0x163668: 0x0  nop
    ctx->pc = 0x163668u;
    // NOP
label_16366c:
    // 0x16366c: 0x0  nop
    ctx->pc = 0x16366cu;
    // NOP
label_163670:
    // 0x163670: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x163670u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_163674:
    // 0x163674: 0x29c90003  slti        $t1, $t6, 0x3
    ctx->pc = 0x163674u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)3) ? 1 : 0);
label_163678:
    // 0x163678: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x163678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_16367c:
    // 0x16367c: 0x1520ffee  bnez        $t1, . + 4 + (-0x12 << 2)
label_163680:
    if (ctx->pc == 0x163680u) {
        ctx->pc = 0x163680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16367Cu;
        // 0x163680: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163684u;
        goto label_163684;
    }
    ctx->pc = 0x16367Cu;
    {
        const bool branch_taken_0x16367c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x163680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16367Cu;
        // 0x163680: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16367c) {
            ctx->pc = 0x163638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163638;
        }
    }
    ctx->pc = 0x163684u;
label_163684:
    // 0x163684: 0x0  nop
    ctx->pc = 0x163684u;
    // NOP
label_163688:
    // 0x163688: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x163688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_16368c:
    // 0x16368c: 0x28c80008  slti        $t0, $a2, 0x8
    ctx->pc = 0x16368cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_163690:
    // 0x163690: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x163690u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_163694:
    // 0x163694: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x163694u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_163698:
    // 0x163698: 0x1500ffc4  bnez        $t0, . + 4 + (-0x3C << 2)
label_16369c:
    if (ctx->pc == 0x16369Cu) {
        ctx->pc = 0x16369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163698u;
        // 0x16369c: 0x26d60270  addiu       $s6, $s6, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1636A0u;
        goto label_1636a0;
    }
    ctx->pc = 0x163698u;
    {
        const bool branch_taken_0x163698 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x16369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163698u;
        // 0x16369c: 0x26d60270  addiu       $s6, $s6, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163698) {
            ctx->pc = 0x1635ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1635ac;
        }
    }
    ctx->pc = 0x1636A0u;
label_1636a0:
    // 0x1636a0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1636a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_1636a4:
    // 0x1636a4: 0x1f1302a  slt         $a2, $t7, $s1
    ctx->pc = 0x1636a4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1636a8:
    // 0x1636a8: 0x14c0ff75  bnez        $a2, . + 4 + (-0x8B << 2)
label_1636ac:
    if (ctx->pc == 0x1636ACu) {
        ctx->pc = 0x1636ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636A8u;
        // 0x1636ac: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1636B0u;
        goto label_1636b0;
    }
    ctx->pc = 0x1636A8u;
    {
        const bool branch_taken_0x1636a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1636ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636A8u;
        // 0x1636ac: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636a8) {
            ctx->pc = 0x163480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163480;
        }
    }
    ctx->pc = 0x1636B0u;
label_1636b0:
    // 0x1636b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1636b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1636b4:
    // 0x1636b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1636b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1636b8:
    // 0x1636b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1636b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1636bc:
    // 0x1636bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1636bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1636c0:
    // 0x1636c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1636c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1636c4:
    // 0x1636c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1636c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1636c8:
    // 0x1636c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1636c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1636cc:
    // 0x1636cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1636ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1636d0:
    // 0x1636d0: 0x3e00008  jr          $ra
label_1636d4:
    if (ctx->pc == 0x1636D4u) {
        ctx->pc = 0x1636D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636D0u;
        // 0x1636d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1636D8u;
        goto label_1636d8;
    }
    ctx->pc = 0x1636D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1636D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636D0u;
        // 0x1636d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1636D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1636D8u;
label_1636d8:
    // 0x1636d8: 0x0  nop
    ctx->pc = 0x1636d8u;
    // NOP
label_1636dc:
    // 0x1636dc: 0x0  nop
    ctx->pc = 0x1636dcu;
    // NOP
label_1636e0:
    // 0x1636e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1636e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1636e4:
    // 0x1636e4: 0x24864710  addiu       $a2, $a0, 0x4710
    ctx->pc = 0x1636e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
label_1636e8:
    // 0x1636e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1636e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1636ec:
    // 0x1636ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1636ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1636f0:
    // 0x1636f0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1636f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1636f4:
    // 0x1636f4: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x1636f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1636f8:
    // 0x1636f8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1636f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1636fc:
    // 0x1636fc: 0x9063002f  lbu         $v1, 0x2F($v1)
    ctx->pc = 0x1636fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 47)));
label_163700:
    // 0x163700: 0x10650017  beq         $v1, $a1, . + 4 + (0x17 << 2)
label_163704:
    if (ctx->pc == 0x163704u) {
        ctx->pc = 0x163704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163700u;
        // 0x163704: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163708u;
        goto label_163708;
    }
    ctx->pc = 0x163700u;
    {
        const bool branch_taken_0x163700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x163704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163700u;
        // 0x163704: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163700) {
            ctx->pc = 0x163760u;
            goto label_163760;
        }
    }
    ctx->pc = 0x163708u;
label_163708:
    // 0x163708: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x163708u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16370c:
    // 0x16370c: 0x0  nop
    ctx->pc = 0x16370cu;
    // NOP
label_163710:
    // 0x163710: 0x0  nop
    ctx->pc = 0x163710u;
    // NOP
label_163714:
    // 0x163714: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x163714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_163718:
    // 0x163718: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x163718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_16371c:
    // 0x16371c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x16371cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_163720:
    // 0x163720: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x163720u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_163724:
    // 0x163724: 0x11800009  beqz        $t4, . + 4 + (0x9 << 2)
label_163728:
    if (ctx->pc == 0x163728u) {
        ctx->pc = 0x16372Cu;
        goto label_16372c;
    }
    ctx->pc = 0x163724u;
    {
        const bool branch_taken_0x163724 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x163724) {
            ctx->pc = 0x16374Cu;
            goto label_16374c;
        }
    }
    ctx->pc = 0x16372Cu;
label_16372c:
    // 0x16372c: 0x9183023a  lbu         $v1, 0x23A($t4)
    ctx->pc = 0x16372cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 570)));
label_163730:
    // 0x163730: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_163734:
    if (ctx->pc == 0x163734u) {
        ctx->pc = 0x163734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163730u;
        // 0x163734: 0x29210080  slti        $at, $t1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x163738u;
        goto label_163738;
    }
    ctx->pc = 0x163730u;
    {
        const bool branch_taken_0x163730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163730u;
        // 0x163734: 0x29210080  slti        $at, $t1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163730) {
            ctx->pc = 0x16374Cu;
            goto label_16374c;
        }
    }
    ctx->pc = 0x163738u;
label_163738:
    // 0x163738: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_16373c:
    if (ctx->pc == 0x16373Cu) {
        ctx->pc = 0x163740u;
        goto label_163740;
    }
    ctx->pc = 0x163738u;
    {
        const bool branch_taken_0x163738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x163738) {
            ctx->pc = 0x1637B0u;
            goto label_1637b0;
        }
    }
    ctx->pc = 0x163740u;
label_163740:
    // 0x163740: 0xaccc0000  sw          $t4, 0x0($a2)
    ctx->pc = 0x163740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 12));
label_163744:
    // 0x163744: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x163744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_163748:
    // 0x163748: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x163748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_16374c:
    // 0x16374c: 0x0  nop
    ctx->pc = 0x16374cu;
    // NOP
label_163750:
    // 0x163750: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x163750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_163754:
    // 0x163754: 0x29030009  slti        $v1, $t0, 0x9
    ctx->pc = 0x163754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
label_163758:
    // 0x163758: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_16375c:
    if (ctx->pc == 0x16375Cu) {
        ctx->pc = 0x16375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163758u;
        // 0x16375c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163760u;
        goto label_163760;
    }
    ctx->pc = 0x163758u;
    {
        const bool branch_taken_0x163758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163758u;
        // 0x16375c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163758) {
            ctx->pc = 0x16370Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16370c;
        }
    }
    ctx->pc = 0x163760u;
label_163760:
    // 0x163760: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x163760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_163764:
    // 0x163764: 0x28e30048  slti        $v1, $a3, 0x48
    ctx->pc = 0x163764u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)72) ? 1 : 0);
label_163768:
    // 0x163768: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_16376c:
    if (ctx->pc == 0x16376Cu) {
        ctx->pc = 0x16376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163768u;
        // 0x16376c: 0x256b0030  addiu       $t3, $t3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163770u;
        goto label_163770;
    }
    ctx->pc = 0x163768u;
    {
        const bool branch_taken_0x163768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163768u;
        // 0x16376c: 0x256b0030  addiu       $t3, $t3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163768) {
            ctx->pc = 0x1636F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1636f4;
        }
    }
    ctx->pc = 0x163770u;
label_163770:
    // 0x163770: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x163770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_163774:
    // 0x163774: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x163774u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_163778:
    // 0x163778: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x163778u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_16377c:
    // 0x16377c: 0x8c234c7c  lw          $v1, 0x4C7C($at)
    ctx->pc = 0x16377cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19580)));
label_163780:
    // 0x163780: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x163780u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_163784:
    // 0x163784: 0x29210080  slti        $at, $t1, 0x80
    ctx->pc = 0x163784u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)128) ? 1 : 0);
label_163788:
    // 0x163788: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_16378c:
    if (ctx->pc == 0x16378Cu) {
        ctx->pc = 0x16378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163788u;
        // 0x16378c: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163790u;
        goto label_163790;
    }
    ctx->pc = 0x163788u;
    {
        const bool branch_taken_0x163788 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163788u;
        // 0x16378c: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163788) {
            ctx->pc = 0x1637B0u;
            goto label_1637b0;
        }
    }
    ctx->pc = 0x163790u;
label_163790:
    // 0x163790: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x163790u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_163794:
    // 0x163794: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x163794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_163798:
    // 0x163798: 0x0  nop
    ctx->pc = 0x163798u;
    // NOP
label_16379c:
    // 0x16379c: 0x0  nop
    ctx->pc = 0x16379cu;
    // NOP
label_1637a0:
    // 0x1637a0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1637a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1637a4:
    // 0x1637a4: 0x29230080  slti        $v1, $t1, 0x80
    ctx->pc = 0x1637a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)128) ? 1 : 0);
label_1637a8:
    // 0x1637a8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1637ac:
    if (ctx->pc == 0x1637ACu) {
        ctx->pc = 0x1637B0u;
        goto label_1637b0;
    }
    ctx->pc = 0x1637A8u;
    {
        const bool branch_taken_0x1637a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1637a8) {
            ctx->pc = 0x163790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163790;
        }
    }
    ctx->pc = 0x1637B0u;
label_1637b0:
    // 0x1637b0: 0x3e00008  jr          $ra
label_1637b4:
    if (ctx->pc == 0x1637B4u) {
        ctx->pc = 0x1637B8u;
        goto label_1637b8;
    }
    ctx->pc = 0x1637B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1637B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1637B8u;
label_1637b8:
    // 0x1637b8: 0x0  nop
    ctx->pc = 0x1637b8u;
    // NOP
label_1637bc:
    // 0x1637bc: 0x0  nop
    ctx->pc = 0x1637bcu;
    // NOP
label_1637c0:
    // 0x1637c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1637c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1637c4:
    // 0x1637c4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1637c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1637c8:
    // 0x1637c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1637c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1637cc:
    // 0x1637cc: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1637ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1637d0:
    // 0x1637d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1637d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1637d4:
    // 0x1637d4: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1637d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1637d8:
    // 0x1637d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1637d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1637dc:
    // 0x1637dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1637dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1637e0:
    // 0x1637e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1637e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1637e4:
    // 0x1637e4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1637e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1637e8:
    // 0x1637e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1637e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1637ec:
    // 0x1637ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1637ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1637f0:
    // 0x1637f0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1637f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1637f4:
    // 0x1637f4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1637f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1637f8:
    // 0x1637f8: 0x24a54bb0  addiu       $a1, $a1, 0x4BB0
    ctx->pc = 0x1637f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19376));
label_1637fc:
    // 0x1637fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1637fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163800:
    // 0x163800: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163800u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163804:
    // 0x163804: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x163804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163808:
    // 0x163808: 0xc066c72  jal         func_19B1C8
label_16380c:
    if (ctx->pc == 0x16380Cu) {
        ctx->pc = 0x16380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163808u;
        // 0x16380c: 0xaf928640  sw          $s2, -0x79C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936128), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163810u;
        goto label_163810;
    }
    ctx->pc = 0x163808u;
    SET_GPR_U32(ctx, 31, 0x163810u);
    ctx->pc = 0x16380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163808u;
    // 0x16380c: 0xaf928640  sw          $s2, -0x79C0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936128), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x163810u;
label_163810:
    // 0x163810: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x163810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_163814:
    // 0x163814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163818:
    // 0x163818: 0x24a54b80  addiu       $a1, $a1, 0x4B80
    ctx->pc = 0x163818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19328));
label_16381c:
    // 0x16381c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x16381cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163820:
    // 0x163820: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163824:
    // 0x163824: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163828:
    // 0x163828: 0xc066c72  jal         func_19B1C8
label_16382c:
    if (ctx->pc == 0x16382Cu) {
        ctx->pc = 0x16382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163828u;
        // 0x16382c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163830u;
        goto label_163830;
    }
    ctx->pc = 0x163828u;
    SET_GPR_U32(ctx, 31, 0x163830u);
    ctx->pc = 0x16382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163828u;
    // 0x16382c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x163830u;
label_163830:
    // 0x163830: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x163830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_163834:
    // 0x163834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163838:
    // 0x163838: 0x24a54c40  addiu       $a1, $a1, 0x4C40
    ctx->pc = 0x163838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19520));
label_16383c:
    // 0x16383c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x16383cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163840:
    // 0x163840: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163844:
    // 0x163844: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163844u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163848:
    // 0x163848: 0xc066c72  jal         func_19B1C8
label_16384c:
    if (ctx->pc == 0x16384Cu) {
        ctx->pc = 0x16384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163848u;
        // 0x16384c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163850u;
        goto label_163850;
    }
    ctx->pc = 0x163848u;
    SET_GPR_U32(ctx, 31, 0x163850u);
    ctx->pc = 0x16384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163848u;
    // 0x16384c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x163850u;
label_163850:
    // 0x163850: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x163850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_163854:
    // 0x163854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163858:
    // 0x163858: 0x24a54be0  addiu       $a1, $a1, 0x4BE0
    ctx->pc = 0x163858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19424));
label_16385c:
    // 0x16385c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x16385cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163860:
    // 0x163860: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163864:
    // 0x163864: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163864u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163868:
    // 0x163868: 0xc066c72  jal         func_19B1C8
label_16386c:
    if (ctx->pc == 0x16386Cu) {
        ctx->pc = 0x16386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163868u;
        // 0x16386c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163870u;
        goto label_163870;
    }
    ctx->pc = 0x163868u;
    SET_GPR_U32(ctx, 31, 0x163870u);
    ctx->pc = 0x16386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163868u;
    // 0x16386c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x163870u;
label_163870:
    // 0x163870: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x163870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_163874:
    // 0x163874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163878:
    // 0x163878: 0xc06465c  jal         func_191970
label_16387c:
    if (ctx->pc == 0x16387Cu) {
        ctx->pc = 0x16387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163878u;
        // 0x16387c: 0x24a539f0  addiu       $a1, $a1, 0x39F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163880u;
        goto label_163880;
    }
    ctx->pc = 0x163878u;
    SET_GPR_U32(ctx, 31, 0x163880u);
    ctx->pc = 0x16387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163878u;
    // 0x16387c: 0x24a539f0  addiu       $a1, $a1, 0x39F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191970u;
    { ctx->pc = 0x191970; return; }
    ctx->pc = 0x163880u;
label_163880:
    // 0x163880: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x163880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_163884:
    // 0x163884: 0xc066e44  jal         func_19B910
label_163888:
    if (ctx->pc == 0x163888u) {
        ctx->pc = 0x163888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163884u;
        // 0x163888: 0x248439b0  addiu       $a0, $a0, 0x39B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16388Cu;
        goto label_16388c;
    }
    ctx->pc = 0x163884u;
    SET_GPR_U32(ctx, 31, 0x16388Cu);
    ctx->pc = 0x163888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163884u;
    // 0x163888: 0x248439b0  addiu       $a0, $a0, 0x39B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x16388Cu;
label_16388c:
    // 0x16388c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x16388cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_163890:
    // 0x163890: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x163890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_163894:
    // 0x163894: 0xc42c39f0  lwc1        $f12, 0x39F0($at)
    ctx->pc = 0x163894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_163898:
    // 0x163898: 0x248439b0  addiu       $a0, $a0, 0x39B0
    ctx->pc = 0x163898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14768));
label_16389c:
    // 0x16389c: 0xc066e96  jal         func_19BA58
label_1638a0:
    if (ctx->pc == 0x1638A0u) {
        ctx->pc = 0x1638A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16389Cu;
        // 0x1638a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1638A4u;
        goto label_1638a4;
    }
    ctx->pc = 0x16389Cu;
    SET_GPR_U32(ctx, 31, 0x1638A4u);
    ctx->pc = 0x1638A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16389Cu;
    // 0x1638a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1638A4u;
label_1638a4:
    // 0x1638a4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1638a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1638a8:
    // 0x1638a8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1638a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1638ac:
    // 0x1638ac: 0xc42c39f4  lwc1        $f12, 0x39F4($at)
    ctx->pc = 0x1638acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1638b0:
    // 0x1638b0: 0x248439b0  addiu       $a0, $a0, 0x39B0
    ctx->pc = 0x1638b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14768));
label_1638b4:
    // 0x1638b4: 0xc066ec0  jal         func_19BB00
label_1638b8:
    if (ctx->pc == 0x1638B8u) {
        ctx->pc = 0x1638B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638B4u;
        // 0x1638b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1638BCu;
        goto label_1638bc;
    }
    ctx->pc = 0x1638B4u;
    SET_GPR_U32(ctx, 31, 0x1638BCu);
    ctx->pc = 0x1638B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1638B4u;
    // 0x1638b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1638BCu;
label_1638bc:
    // 0x1638bc: 0x8f928698  lw          $s2, -0x7968($gp)
    ctx->pc = 0x1638bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936216)));
label_1638c0:
    // 0x1638c0: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
label_1638c4:
    if (ctx->pc == 0x1638C4u) {
        ctx->pc = 0x1638C8u;
        goto label_1638c8;
    }
    ctx->pc = 0x1638C0u;
    {
        const bool branch_taken_0x1638c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1638c0) {
            ctx->pc = 0x1638FCu;
            goto label_1638fc;
        }
    }
    ctx->pc = 0x1638C8u;
label_1638c8:
    // 0x1638c8: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1638c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1638cc:
    // 0x1638cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1638ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1638d0:
    // 0x1638d0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1638d4:
    if (ctx->pc == 0x1638D4u) {
        ctx->pc = 0x1638D8u;
        goto label_1638d8;
    }
    ctx->pc = 0x1638D0u;
    {
        const bool branch_taken_0x1638d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1638d0) {
            ctx->pc = 0x1638ECu;
            goto label_1638ec;
        }
    }
    ctx->pc = 0x1638D8u;
label_1638d8:
    // 0x1638d8: 0x8e420368  lw          $v0, 0x368($s2)
    ctx->pc = 0x1638d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 872)));
label_1638dc:
    // 0x1638dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1638e0:
    if (ctx->pc == 0x1638E0u) {
        ctx->pc = 0x1638E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638DCu;
        // 0x1638e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1638E4u;
        goto label_1638e4;
    }
    ctx->pc = 0x1638DCu;
    {
        const bool branch_taken_0x1638dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1638E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638DCu;
        // 0x1638e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1638dc) {
            ctx->pc = 0x1638ECu;
            goto label_1638ec;
        }
    }
    ctx->pc = 0x1638E4u;
label_1638e4:
    // 0x1638e4: 0x40f809  jalr        $v0
label_1638e8:
    if (ctx->pc == 0x1638E8u) {
        ctx->pc = 0x1638E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638E4u;
        // 0x1638e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1638ECu;
        goto label_1638ec;
    }
    ctx->pc = 0x1638E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1638ECu);
        ctx->pc = 0x1638E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638E4u;
        // 0x1638e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1638E4u, 0x1638ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1638ECu;
label_1638ec:
    // 0x1638ec: 0x0  nop
    ctx->pc = 0x1638ecu;
    // NOP
label_1638f0:
    // 0x1638f0: 0x8e520008  lw          $s2, 0x8($s2)
    ctx->pc = 0x1638f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1638f4:
    // 0x1638f4: 0x1640fff4  bnez        $s2, . + 4 + (-0xC << 2)
label_1638f8:
    if (ctx->pc == 0x1638F8u) {
        ctx->pc = 0x1638FCu;
        goto label_1638fc;
    }
    ctx->pc = 0x1638F4u;
    {
        const bool branch_taken_0x1638f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1638f4) {
            ctx->pc = 0x1638C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1638c8;
        }
    }
    ctx->pc = 0x1638FCu;
label_1638fc:
    // 0x1638fc: 0x0  nop
    ctx->pc = 0x1638fcu;
    // NOP
label_163900:
    // 0x163900: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x163900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_163904:
    // 0x163904: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163908:
    // 0x163908: 0x24a54b80  addiu       $a1, $a1, 0x4B80
    ctx->pc = 0x163908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19328));
label_16390c:
    // 0x16390c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x16390cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163910:
    // 0x163910: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163914:
    // 0x163914: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163914u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163918:
    // 0x163918: 0xc066c72  jal         func_19B1C8
label_16391c:
    if (ctx->pc == 0x16391Cu) {
        ctx->pc = 0x16391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163918u;
        // 0x16391c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163920u;
        goto label_163920;
    }
    ctx->pc = 0x163918u;
    SET_GPR_U32(ctx, 31, 0x163920u);
    ctx->pc = 0x16391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163918u;
    // 0x16391c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x163920u;
label_163920:
    // 0x163920: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x163920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_163924:
    // 0x163924: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_163928:
    // 0x163928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16392c:
    // 0x16392c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16392cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_163930:
    // 0x163930: 0x3e00008  jr          $ra
label_163934:
    if (ctx->pc == 0x163934u) {
        ctx->pc = 0x163934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163930u;
        // 0x163934: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163938u;
        goto label_163938;
    }
    ctx->pc = 0x163930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163930u;
        // 0x163934: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163938u;
label_163938:
    // 0x163938: 0x0  nop
    ctx->pc = 0x163938u;
    // NOP
label_16393c:
    // 0x16393c: 0x0  nop
    ctx->pc = 0x16393cu;
    // NOP
label_163940:
    // 0x163940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x163940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_163944:
    // 0x163944: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x163944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_163948:
    // 0x163948: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x163948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_16394c:
    // 0x16394c: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x16394cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_163950:
    // 0x163950: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x163950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_163954:
    // 0x163954: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x163954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_163958:
    // 0x163958: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x163958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16395c:
    // 0x16395c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x16395cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163960:
    // 0x163960: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x163960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_163964:
    // 0x163964: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x163964u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_163968:
    // 0x163968: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x163968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16396c:
    // 0x16396c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16396cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163970:
    // 0x163970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_163974:
    // 0x163974: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x163974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163978:
    // 0x163978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16397c:
    // 0x16397c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16397cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_163980:
    // 0x163980: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x163980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_163984:
    // 0x163984: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163984u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163988:
    // 0x163988: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x163988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_16398c:
    // 0x16398c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16398cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163990:
    // 0x163990: 0x24a54bb0  addiu       $a1, $a1, 0x4BB0
    ctx->pc = 0x163990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19376));
label_163994:
    // 0x163994: 0xc066c72  jal         func_19B1C8
label_163998:
    if (ctx->pc == 0x163998u) {
        ctx->pc = 0x163998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163994u;
        // 0x163998: 0xaf928640  sw          $s2, -0x79C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936128), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16399Cu;
        goto label_16399c;
    }
    ctx->pc = 0x163994u;
    SET_GPR_U32(ctx, 31, 0x16399Cu);
    ctx->pc = 0x163998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163994u;
    // 0x163998: 0xaf928640  sw          $s2, -0x79C0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936128), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x16399Cu;
label_16399c:
    // 0x16399c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x16399cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1639a0:
    // 0x1639a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1639a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1639a4:
    // 0x1639a4: 0x24a54b80  addiu       $a1, $a1, 0x4B80
    ctx->pc = 0x1639a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19328));
label_1639a8:
    // 0x1639a8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1639a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1639ac:
    // 0x1639ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1639acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1639b0:
    // 0x1639b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1639b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1639b4:
    // 0x1639b4: 0xc066c72  jal         func_19B1C8
label_1639b8:
    if (ctx->pc == 0x1639B8u) {
        ctx->pc = 0x1639B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639B4u;
        // 0x1639b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1639BCu;
        goto label_1639bc;
    }
    ctx->pc = 0x1639B4u;
    SET_GPR_U32(ctx, 31, 0x1639BCu);
    ctx->pc = 0x1639B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1639B4u;
    // 0x1639b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1639BCu;
label_1639bc:
    // 0x1639bc: 0xc05cd8c  jal         func_173630
label_1639c0:
    if (ctx->pc == 0x1639C0u) {
        ctx->pc = 0x1639C4u;
        goto label_1639c4;
    }
    ctx->pc = 0x1639BCu;
    SET_GPR_U32(ctx, 31, 0x1639C4u);
    ctx->pc = 0x173630u;
    { ctx->pc = 0x173630; return; }
    ctx->pc = 0x1639C4u;
label_1639c4:
    // 0x1639c4: 0xc05cda4  jal         func_173690
label_1639c8:
    if (ctx->pc == 0x1639C8u) {
        ctx->pc = 0x1639C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639C4u;
        // 0x1639c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1639CCu;
        goto label_1639cc;
    }
    ctx->pc = 0x1639C4u;
    SET_GPR_U32(ctx, 31, 0x1639CCu);
    ctx->pc = 0x1639C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1639C4u;
    // 0x1639c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173690u;
    { ctx->pc = 0x173690; return; }
    ctx->pc = 0x1639CCu;
label_1639cc:
    // 0x1639cc: 0x8f918674  lw          $s1, -0x798C($gp)
    ctx->pc = 0x1639ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936180)));
label_1639d0:
    // 0x1639d0: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_1639d4:
    if (ctx->pc == 0x1639D4u) {
        ctx->pc = 0x1639D8u;
        goto label_1639d8;
    }
    ctx->pc = 0x1639D0u;
    {
        const bool branch_taken_0x1639d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1639d0) {
            ctx->pc = 0x163A0Cu;
            goto label_163a0c;
        }
    }
    ctx->pc = 0x1639D8u;
label_1639d8:
    // 0x1639d8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1639d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1639dc:
    // 0x1639dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1639dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1639e0:
    // 0x1639e0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1639e4:
    if (ctx->pc == 0x1639E4u) {
        ctx->pc = 0x1639E8u;
        goto label_1639e8;
    }
    ctx->pc = 0x1639E0u;
    {
        const bool branch_taken_0x1639e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1639e0) {
            ctx->pc = 0x1639FCu;
            goto label_1639fc;
        }
    }
    ctx->pc = 0x1639E8u;
label_1639e8:
    // 0x1639e8: 0x8e220ddc  lw          $v0, 0xDDC($s1)
    ctx->pc = 0x1639e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3548)));
label_1639ec:
    // 0x1639ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1639f0:
    if (ctx->pc == 0x1639F0u) {
        ctx->pc = 0x1639F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639ECu;
        // 0x1639f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1639F4u;
        goto label_1639f4;
    }
    ctx->pc = 0x1639ECu;
    {
        const bool branch_taken_0x1639ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1639F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639ECu;
        // 0x1639f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639ec) {
            ctx->pc = 0x1639FCu;
            goto label_1639fc;
        }
    }
    ctx->pc = 0x1639F4u;
label_1639f4:
    // 0x1639f4: 0x40f809  jalr        $v0
label_1639f8:
    if (ctx->pc == 0x1639F8u) {
        ctx->pc = 0x1639F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639F4u;
        // 0x1639f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1639FCu;
        goto label_1639fc;
    }
    ctx->pc = 0x1639F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1639FCu);
        ctx->pc = 0x1639F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639F4u;
        // 0x1639f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1639F4u, 0x1639FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1639FCu;
label_1639fc:
    // 0x1639fc: 0x0  nop
    ctx->pc = 0x1639fcu;
    // NOP
label_163a00:
    // 0x163a00: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x163a00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_163a04:
    // 0x163a04: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_163a08:
    if (ctx->pc == 0x163A08u) {
        ctx->pc = 0x163A0Cu;
        goto label_163a0c;
    }
    ctx->pc = 0x163A04u;
    {
        const bool branch_taken_0x163a04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x163a04) {
            ctx->pc = 0x1639D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1639d8;
        }
    }
    ctx->pc = 0x163A0Cu;
label_163a0c:
    // 0x163a0c: 0x0  nop
    ctx->pc = 0x163a0cu;
    // NOP
label_163a10:
    // 0x163a10: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x163a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_163a14:
    // 0x163a14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_163a18:
    // 0x163a18: 0x24a54bb0  addiu       $a1, $a1, 0x4BB0
    ctx->pc = 0x163a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19376));
label_163a1c:
    // 0x163a1c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x163a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163a20:
    // 0x163a20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163a24:
    // 0x163a24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163a28:
    // 0x163a28: 0xc066c72  jal         func_19B1C8
label_163a2c:
    if (ctx->pc == 0x163A2Cu) {
        ctx->pc = 0x163A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A28u;
        // 0x163a2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A30u;
        goto label_163a30;
    }
    ctx->pc = 0x163A28u;
    SET_GPR_U32(ctx, 31, 0x163A30u);
    ctx->pc = 0x163A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A28u;
    // 0x163a2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x163A30u;
label_163a30:
    // 0x163a30: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x163a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_163a34:
    // 0x163a34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_163a38:
    // 0x163a38: 0x24a54b80  addiu       $a1, $a1, 0x4B80
    ctx->pc = 0x163a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19328));
label_163a3c:
    // 0x163a3c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x163a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163a40:
    // 0x163a40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163a44:
    // 0x163a44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163a44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163a48:
    // 0x163a48: 0xc066c72  jal         func_19B1C8
label_163a4c:
    if (ctx->pc == 0x163A4Cu) {
        ctx->pc = 0x163A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A48u;
        // 0x163a4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A50u;
        goto label_163a50;
    }
    ctx->pc = 0x163A48u;
    SET_GPR_U32(ctx, 31, 0x163A50u);
    ctx->pc = 0x163A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A48u;
    // 0x163a4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x163A50u;
label_163a50:
    // 0x163a50: 0xc05cd74  jal         func_1735D0
label_163a54:
    if (ctx->pc == 0x163A54u) {
        ctx->pc = 0x163A58u;
        goto label_163a58;
    }
    ctx->pc = 0x163A50u;
    SET_GPR_U32(ctx, 31, 0x163A58u);
    ctx->pc = 0x1735D0u;
    { ctx->pc = 0x1735d0; return; }
    ctx->pc = 0x163A58u;
label_163a58:
    // 0x163a58: 0x8f918668  lw          $s1, -0x7998($gp)
    ctx->pc = 0x163a58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
label_163a5c:
    // 0x163a5c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_163a60:
    if (ctx->pc == 0x163A60u) {
        ctx->pc = 0x163A64u;
        goto label_163a64;
    }
    ctx->pc = 0x163A5Cu;
    {
        const bool branch_taken_0x163a5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x163a5c) {
            ctx->pc = 0x163A94u;
            goto label_163a94;
        }
    }
    ctx->pc = 0x163A64u;
label_163a64:
    // 0x163a64: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x163a64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_163a68:
    // 0x163a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163a6c:
    // 0x163a6c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_163a70:
    if (ctx->pc == 0x163A70u) {
        ctx->pc = 0x163A74u;
        goto label_163a74;
    }
    ctx->pc = 0x163A6Cu;
    {
        const bool branch_taken_0x163a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163a6c) {
            ctx->pc = 0x163A88u;
            goto label_163a88;
        }
    }
    ctx->pc = 0x163A74u;
label_163a74:
    // 0x163a74: 0x8e22199c  lw          $v0, 0x199C($s1)
    ctx->pc = 0x163a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6556)));
label_163a78:
    // 0x163a78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_163a7c:
    if (ctx->pc == 0x163A7Cu) {
        ctx->pc = 0x163A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A78u;
        // 0x163a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A80u;
        goto label_163a80;
    }
    ctx->pc = 0x163A78u;
    {
        const bool branch_taken_0x163a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A78u;
        // 0x163a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a78) {
            ctx->pc = 0x163A88u;
            goto label_163a88;
        }
    }
    ctx->pc = 0x163A80u;
label_163a80:
    // 0x163a80: 0x40f809  jalr        $v0
label_163a84:
    if (ctx->pc == 0x163A84u) {
        ctx->pc = 0x163A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A80u;
        // 0x163a84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163A88u;
        goto label_163a88;
    }
    ctx->pc = 0x163A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163A88u);
        ctx->pc = 0x163A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A80u;
        // 0x163a84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163A80u, 0x163A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163A88u;
label_163a88:
    // 0x163a88: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x163a88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_163a8c:
    // 0x163a8c: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
label_163a90:
    if (ctx->pc == 0x163A90u) {
        ctx->pc = 0x163A94u;
        goto label_163a94;
    }
    ctx->pc = 0x163A8Cu;
    {
        const bool branch_taken_0x163a8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x163a8c) {
            ctx->pc = 0x163A64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163a64;
        }
    }
    ctx->pc = 0x163A94u;
label_163a94:
    // 0x163a94: 0x0  nop
    ctx->pc = 0x163a94u;
    // NOP
label_163a98:
    // 0x163a98: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x163a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_163a9c:
    // 0x163a9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_163aa0:
    // 0x163aa0: 0x24a54bb0  addiu       $a1, $a1, 0x4BB0
    ctx->pc = 0x163aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19376));
label_163aa4:
    // 0x163aa4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x163aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163aa8:
    // 0x163aa8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163aac:
    // 0x163aac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163aacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163ab0:
    // 0x163ab0: 0xc066c72  jal         func_19B1C8
label_163ab4:
    if (ctx->pc == 0x163AB4u) {
        ctx->pc = 0x163AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AB0u;
        // 0x163ab4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163AB8u;
        goto label_163ab8;
    }
    ctx->pc = 0x163AB0u;
    SET_GPR_U32(ctx, 31, 0x163AB8u);
    ctx->pc = 0x163AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AB0u;
    // 0x163ab4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x163AB8u;
label_163ab8:
    // 0x163ab8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x163ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_163abc:
    // 0x163abc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_163ac0:
    // 0x163ac0: 0x24a54b80  addiu       $a1, $a1, 0x4B80
    ctx->pc = 0x163ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19328));
label_163ac4:
    // 0x163ac4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x163ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163ac8:
    // 0x163ac8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163ac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163acc:
    // 0x163acc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163accu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163ad0:
    // 0x163ad0: 0xc066c72  jal         func_19B1C8
label_163ad4:
    if (ctx->pc == 0x163AD4u) {
        ctx->pc = 0x163AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AD0u;
        // 0x163ad4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163AD8u;
        goto label_163ad8;
    }
    ctx->pc = 0x163AD0u;
    SET_GPR_U32(ctx, 31, 0x163AD8u);
    ctx->pc = 0x163AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AD0u;
    // 0x163ad4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x163AD8u;
label_163ad8:
    // 0x163ad8: 0xc07f0c8  jal         func_1FC320
label_163adc:
    if (ctx->pc == 0x163ADCu) {
        ctx->pc = 0x163AE0u;
        goto label_163ae0;
    }
    ctx->pc = 0x163AD8u;
    SET_GPR_U32(ctx, 31, 0x163AE0u);
    ctx->pc = 0x1FC320u;
    { ctx->pc = 0x1fc320; return; }
    ctx->pc = 0x163AE0u;
label_163ae0:
    // 0x163ae0: 0xc07f0e0  jal         func_1FC380
label_163ae4:
    if (ctx->pc == 0x163AE4u) {
        ctx->pc = 0x163AE8u;
        goto label_163ae8;
    }
    ctx->pc = 0x163AE0u;
    SET_GPR_U32(ctx, 31, 0x163AE8u);
    ctx->pc = 0x1FC380u;
    { ctx->pc = 0x1fc380; return; }
    ctx->pc = 0x163AE8u;
label_163ae8:
    // 0x163ae8: 0x8f918650  lw          $s1, -0x79B0($gp)
    ctx->pc = 0x163ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936144)));
label_163aec:
    // 0x163aec: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_163af0:
    if (ctx->pc == 0x163AF0u) {
        ctx->pc = 0x163AF4u;
        goto label_163af4;
    }
    ctx->pc = 0x163AECu;
    {
        const bool branch_taken_0x163aec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x163aec) {
            ctx->pc = 0x163B24u;
            goto label_163b24;
        }
    }
    ctx->pc = 0x163AF4u;
label_163af4:
    // 0x163af4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x163af4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_163af8:
    // 0x163af8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163afc:
    // 0x163afc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_163b00:
    if (ctx->pc == 0x163B00u) {
        ctx->pc = 0x163B04u;
        goto label_163b04;
    }
    ctx->pc = 0x163AFCu;
    {
        const bool branch_taken_0x163afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x163afc) {
            ctx->pc = 0x163B18u;
            goto label_163b18;
        }
    }
    ctx->pc = 0x163B04u;
label_163b04:
    // 0x163b04: 0x8e22155c  lw          $v0, 0x155C($s1)
    ctx->pc = 0x163b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5468)));
label_163b08:
    // 0x163b08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_163b0c:
    if (ctx->pc == 0x163B0Cu) {
        ctx->pc = 0x163B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B08u;
        // 0x163b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B10u;
        goto label_163b10;
    }
    ctx->pc = 0x163B08u;
    {
        const bool branch_taken_0x163b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B08u;
        // 0x163b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b08) {
            ctx->pc = 0x163B18u;
            goto label_163b18;
        }
    }
    ctx->pc = 0x163B10u;
label_163b10:
    // 0x163b10: 0x40f809  jalr        $v0
label_163b14:
    if (ctx->pc == 0x163B14u) {
        ctx->pc = 0x163B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B10u;
        // 0x163b14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B18u;
        goto label_163b18;
    }
    ctx->pc = 0x163B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163B18u);
        ctx->pc = 0x163B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B10u;
        // 0x163b14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163B10u, 0x163B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163B18u;
label_163b18:
    // 0x163b18: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x163b18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_163b1c:
    // 0x163b1c: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
label_163b20:
    if (ctx->pc == 0x163B20u) {
        ctx->pc = 0x163B24u;
        goto label_163b24;
    }
    ctx->pc = 0x163B1Cu;
    {
        const bool branch_taken_0x163b1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x163b1c) {
            ctx->pc = 0x163AF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163af4;
        }
    }
    ctx->pc = 0x163B24u;
label_163b24:
    // 0x163b24: 0x0  nop
    ctx->pc = 0x163b24u;
    // NOP
label_163b28:
    // 0x163b28: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x163b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_163b2c:
    // 0x163b2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x163b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_163b30:
    // 0x163b30: 0x24a54b80  addiu       $a1, $a1, 0x4B80
    ctx->pc = 0x163b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19328));
label_163b34:
    // 0x163b34: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x163b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_163b38:
    // 0x163b38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x163b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163b3c:
    // 0x163b3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x163b3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163b40:
    // 0x163b40: 0xc066c72  jal         func_19B1C8
label_163b44:
    if (ctx->pc == 0x163B44u) {
        ctx->pc = 0x163B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B40u;
        // 0x163b44: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B48u;
        goto label_163b48;
    }
    ctx->pc = 0x163B40u;
    SET_GPR_U32(ctx, 31, 0x163B48u);
    ctx->pc = 0x163B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B40u;
    // 0x163b44: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x163B48u;
label_163b48:
    // 0x163b48: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x163b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_163b4c:
    // 0x163b4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163b50:
    // 0x163b50: 0xc06465c  jal         func_191970
label_163b54:
    if (ctx->pc == 0x163B54u) {
        ctx->pc = 0x163B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B50u;
        // 0x163b54: 0x24a539f0  addiu       $a1, $a1, 0x39F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B58u;
        goto label_163b58;
    }
    ctx->pc = 0x163B50u;
    SET_GPR_U32(ctx, 31, 0x163B58u);
    ctx->pc = 0x163B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B50u;
    // 0x163b54: 0x24a539f0  addiu       $a1, $a1, 0x39F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191970u;
    { ctx->pc = 0x191970; return; }
    ctx->pc = 0x163B58u;
label_163b58:
    // 0x163b58: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x163b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_163b5c:
    // 0x163b5c: 0xc066e44  jal         func_19B910
label_163b60:
    if (ctx->pc == 0x163B60u) {
        ctx->pc = 0x163B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B5Cu;
        // 0x163b60: 0x248439b0  addiu       $a0, $a0, 0x39B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B64u;
        goto label_163b64;
    }
    ctx->pc = 0x163B5Cu;
    SET_GPR_U32(ctx, 31, 0x163B64u);
    ctx->pc = 0x163B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B5Cu;
    // 0x163b60: 0x248439b0  addiu       $a0, $a0, 0x39B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x163B64u;
label_163b64:
    // 0x163b64: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x163b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_163b68:
    // 0x163b68: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x163b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_163b6c:
    // 0x163b6c: 0xc42c39f0  lwc1        $f12, 0x39F0($at)
    ctx->pc = 0x163b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_163b70:
    // 0x163b70: 0x248439b0  addiu       $a0, $a0, 0x39B0
    ctx->pc = 0x163b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14768));
label_163b74:
    // 0x163b74: 0xc066e96  jal         func_19BA58
label_163b78:
    if (ctx->pc == 0x163B78u) {
        ctx->pc = 0x163B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B74u;
        // 0x163b78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163B7Cu;
        goto label_163b7c;
    }
    ctx->pc = 0x163B74u;
    SET_GPR_U32(ctx, 31, 0x163B7Cu);
    ctx->pc = 0x163B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B74u;
    // 0x163b78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x163B7Cu;
label_163b7c:
    // 0x163b7c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x163b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_163b80:
    // 0x163b80: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x163b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_163b84:
    // 0x163b84: 0xc42c39f4  lwc1        $f12, 0x39F4($at)
    ctx->pc = 0x163b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_163b88:
    // 0x163b88: 0x248439b0  addiu       $a0, $a0, 0x39B0
    ctx->pc = 0x163b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14768));
label_163b8c:
    // 0x163b8c: 0xc066ec0  jal         func_19BB00
    ctx->pc = 0x163b90u;
    return;
}

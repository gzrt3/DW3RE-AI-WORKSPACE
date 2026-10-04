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


void FUN_0017d410_part437(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x252250u: goto label_252250;
        case 0x252254u: goto label_252254;
        case 0x252258u: goto label_252258;
        case 0x25225cu: goto label_25225c;
        case 0x252260u: goto label_252260;
        case 0x252264u: goto label_252264;
        case 0x252268u: goto label_252268;
        case 0x25226cu: goto label_25226c;
        case 0x252270u: goto label_252270;
        case 0x252274u: goto label_252274;
        case 0x252278u: goto label_252278;
        case 0x25227cu: goto label_25227c;
        case 0x252280u: goto label_252280;
        case 0x252284u: goto label_252284;
        case 0x252288u: goto label_252288;
        case 0x25228cu: goto label_25228c;
        case 0x252290u: goto label_252290;
        case 0x252294u: goto label_252294;
        case 0x252298u: goto label_252298;
        case 0x25229cu: goto label_25229c;
        case 0x2522a0u: goto label_2522a0;
        case 0x2522a4u: goto label_2522a4;
        case 0x2522a8u: goto label_2522a8;
        case 0x2522acu: goto label_2522ac;
        case 0x2522b0u: goto label_2522b0;
        case 0x2522b4u: goto label_2522b4;
        case 0x2522b8u: goto label_2522b8;
        case 0x2522bcu: goto label_2522bc;
        case 0x2522c0u: goto label_2522c0;
        case 0x2522c4u: goto label_2522c4;
        case 0x2522c8u: goto label_2522c8;
        case 0x2522ccu: goto label_2522cc;
        case 0x2522d0u: goto label_2522d0;
        case 0x2522d4u: goto label_2522d4;
        case 0x2522d8u: goto label_2522d8;
        case 0x2522dcu: goto label_2522dc;
        case 0x2522e0u: goto label_2522e0;
        case 0x2522e4u: goto label_2522e4;
        case 0x2522e8u: goto label_2522e8;
        case 0x2522ecu: goto label_2522ec;
        case 0x2522f0u: goto label_2522f0;
        case 0x2522f4u: goto label_2522f4;
        case 0x2522f8u: goto label_2522f8;
        case 0x2522fcu: goto label_2522fc;
        case 0x252300u: goto label_252300;
        case 0x252304u: goto label_252304;
        case 0x252308u: goto label_252308;
        case 0x25230cu: goto label_25230c;
        case 0x252310u: goto label_252310;
        case 0x252314u: goto label_252314;
        case 0x252318u: goto label_252318;
        case 0x25231cu: goto label_25231c;
        case 0x252320u: goto label_252320;
        case 0x252324u: goto label_252324;
        case 0x252328u: goto label_252328;
        case 0x25232cu: goto label_25232c;
        case 0x252330u: goto label_252330;
        case 0x252334u: goto label_252334;
        case 0x252338u: goto label_252338;
        case 0x25233cu: goto label_25233c;
        case 0x252340u: goto label_252340;
        case 0x252344u: goto label_252344;
        case 0x252348u: goto label_252348;
        case 0x25234cu: goto label_25234c;
        case 0x252350u: goto label_252350;
        case 0x252354u: goto label_252354;
        case 0x252358u: goto label_252358;
        case 0x25235cu: goto label_25235c;
        case 0x252360u: goto label_252360;
        case 0x252364u: goto label_252364;
        case 0x252368u: goto label_252368;
        case 0x25236cu: goto label_25236c;
        case 0x252370u: goto label_252370;
        case 0x252374u: goto label_252374;
        case 0x252378u: goto label_252378;
        case 0x25237cu: goto label_25237c;
        case 0x252380u: goto label_252380;
        case 0x252384u: goto label_252384;
        case 0x252388u: goto label_252388;
        case 0x25238cu: goto label_25238c;
        case 0x252390u: goto label_252390;
        case 0x252394u: goto label_252394;
        case 0x252398u: goto label_252398;
        case 0x25239cu: goto label_25239c;
        case 0x2523a0u: goto label_2523a0;
        case 0x2523a4u: goto label_2523a4;
        case 0x2523a8u: goto label_2523a8;
        case 0x2523acu: goto label_2523ac;
        case 0x2523b0u: goto label_2523b0;
        case 0x2523b4u: goto label_2523b4;
        case 0x2523b8u: goto label_2523b8;
        case 0x2523bcu: goto label_2523bc;
        case 0x2523c0u: goto label_2523c0;
        case 0x2523c4u: goto label_2523c4;
        case 0x2523c8u: goto label_2523c8;
        case 0x2523ccu: goto label_2523cc;
        case 0x2523d0u: goto label_2523d0;
        case 0x2523d4u: goto label_2523d4;
        case 0x2523d8u: goto label_2523d8;
        case 0x2523dcu: goto label_2523dc;
        case 0x2523e0u: goto label_2523e0;
        case 0x2523e4u: goto label_2523e4;
        case 0x2523e8u: goto label_2523e8;
        case 0x2523ecu: goto label_2523ec;
        case 0x2523f0u: goto label_2523f0;
        case 0x2523f4u: goto label_2523f4;
        case 0x2523f8u: goto label_2523f8;
        case 0x2523fcu: goto label_2523fc;
        case 0x252400u: goto label_252400;
        case 0x252404u: goto label_252404;
        case 0x252408u: goto label_252408;
        case 0x25240cu: goto label_25240c;
        case 0x252410u: goto label_252410;
        case 0x252414u: goto label_252414;
        case 0x252418u: goto label_252418;
        case 0x25241cu: goto label_25241c;
        case 0x252420u: goto label_252420;
        case 0x252424u: goto label_252424;
        case 0x252428u: goto label_252428;
        case 0x25242cu: goto label_25242c;
        case 0x252430u: goto label_252430;
        case 0x252434u: goto label_252434;
        case 0x252438u: goto label_252438;
        case 0x25243cu: goto label_25243c;
        case 0x252440u: goto label_252440;
        case 0x252444u: goto label_252444;
        case 0x252448u: goto label_252448;
        case 0x25244cu: goto label_25244c;
        case 0x252450u: goto label_252450;
        case 0x252454u: goto label_252454;
        case 0x252458u: goto label_252458;
        case 0x25245cu: goto label_25245c;
        case 0x252460u: goto label_252460;
        case 0x252464u: goto label_252464;
        case 0x252468u: goto label_252468;
        case 0x25246cu: goto label_25246c;
        case 0x252470u: goto label_252470;
        case 0x252474u: goto label_252474;
        case 0x252478u: goto label_252478;
        case 0x25247cu: goto label_25247c;
        case 0x252480u: goto label_252480;
        case 0x252484u: goto label_252484;
        case 0x252488u: goto label_252488;
        case 0x25248cu: goto label_25248c;
        case 0x252490u: goto label_252490;
        case 0x252494u: goto label_252494;
        case 0x252498u: goto label_252498;
        case 0x25249cu: goto label_25249c;
        case 0x2524a0u: goto label_2524a0;
        case 0x2524a4u: goto label_2524a4;
        case 0x2524a8u: goto label_2524a8;
        case 0x2524acu: goto label_2524ac;
        case 0x2524b0u: goto label_2524b0;
        case 0x2524b4u: goto label_2524b4;
        case 0x2524b8u: goto label_2524b8;
        case 0x2524bcu: goto label_2524bc;
        case 0x2524c0u: goto label_2524c0;
        case 0x2524c4u: goto label_2524c4;
        case 0x2524c8u: goto label_2524c8;
        case 0x2524ccu: goto label_2524cc;
        case 0x2524d0u: goto label_2524d0;
        case 0x2524d4u: goto label_2524d4;
        case 0x2524d8u: goto label_2524d8;
        case 0x2524dcu: goto label_2524dc;
        case 0x2524e0u: goto label_2524e0;
        case 0x2524e4u: goto label_2524e4;
        case 0x2524e8u: goto label_2524e8;
        case 0x2524ecu: goto label_2524ec;
        case 0x2524f0u: goto label_2524f0;
        case 0x2524f4u: goto label_2524f4;
        case 0x2524f8u: goto label_2524f8;
        case 0x2524fcu: goto label_2524fc;
        case 0x252500u: goto label_252500;
        case 0x252504u: goto label_252504;
        case 0x252508u: goto label_252508;
        case 0x25250cu: goto label_25250c;
        case 0x252510u: goto label_252510;
        case 0x252514u: goto label_252514;
        case 0x252518u: goto label_252518;
        case 0x25251cu: goto label_25251c;
        case 0x252520u: goto label_252520;
        case 0x252524u: goto label_252524;
        case 0x252528u: goto label_252528;
        case 0x25252cu: goto label_25252c;
        case 0x252530u: goto label_252530;
        case 0x252534u: goto label_252534;
        case 0x252538u: goto label_252538;
        case 0x25253cu: goto label_25253c;
        case 0x252540u: goto label_252540;
        case 0x252544u: goto label_252544;
        case 0x252548u: goto label_252548;
        case 0x25254cu: goto label_25254c;
        case 0x252550u: goto label_252550;
        case 0x252554u: goto label_252554;
        case 0x252558u: goto label_252558;
        case 0x25255cu: goto label_25255c;
        case 0x252560u: goto label_252560;
        case 0x252564u: goto label_252564;
        case 0x252568u: goto label_252568;
        case 0x25256cu: goto label_25256c;
        case 0x252570u: goto label_252570;
        case 0x252574u: goto label_252574;
        case 0x252578u: goto label_252578;
        case 0x25257cu: goto label_25257c;
        case 0x252580u: goto label_252580;
        case 0x252584u: goto label_252584;
        case 0x252588u: goto label_252588;
        case 0x25258cu: goto label_25258c;
        case 0x252590u: goto label_252590;
        case 0x252594u: goto label_252594;
        case 0x252598u: goto label_252598;
        case 0x25259cu: goto label_25259c;
        case 0x2525a0u: goto label_2525a0;
        case 0x2525a4u: goto label_2525a4;
        case 0x2525a8u: goto label_2525a8;
        case 0x2525acu: goto label_2525ac;
        case 0x2525b0u: goto label_2525b0;
        case 0x2525b4u: goto label_2525b4;
        case 0x2525b8u: goto label_2525b8;
        case 0x2525bcu: goto label_2525bc;
        case 0x2525c0u: goto label_2525c0;
        case 0x2525c4u: goto label_2525c4;
        case 0x2525c8u: goto label_2525c8;
        case 0x2525ccu: goto label_2525cc;
        case 0x2525d0u: goto label_2525d0;
        case 0x2525d4u: goto label_2525d4;
        case 0x2525d8u: goto label_2525d8;
        case 0x2525dcu: goto label_2525dc;
        case 0x2525e0u: goto label_2525e0;
        case 0x2525e4u: goto label_2525e4;
        case 0x2525e8u: goto label_2525e8;
        case 0x2525ecu: goto label_2525ec;
        case 0x2525f0u: goto label_2525f0;
        case 0x2525f4u: goto label_2525f4;
        case 0x2525f8u: goto label_2525f8;
        case 0x2525fcu: goto label_2525fc;
        case 0x252600u: goto label_252600;
        case 0x252604u: goto label_252604;
        case 0x252608u: goto label_252608;
        case 0x25260cu: goto label_25260c;
        case 0x252610u: goto label_252610;
        case 0x252614u: goto label_252614;
        case 0x252618u: goto label_252618;
        case 0x25261cu: goto label_25261c;
        case 0x252620u: goto label_252620;
        case 0x252624u: goto label_252624;
        case 0x252628u: goto label_252628;
        case 0x25262cu: goto label_25262c;
        case 0x252630u: goto label_252630;
        case 0x252634u: goto label_252634;
        case 0x252638u: goto label_252638;
        case 0x25263cu: goto label_25263c;
        case 0x252640u: goto label_252640;
        case 0x252644u: goto label_252644;
        case 0x252648u: goto label_252648;
        case 0x25264cu: goto label_25264c;
        case 0x252650u: goto label_252650;
        case 0x252654u: goto label_252654;
        case 0x252658u: goto label_252658;
        case 0x25265cu: goto label_25265c;
        case 0x252660u: goto label_252660;
        case 0x252664u: goto label_252664;
        case 0x252668u: goto label_252668;
        case 0x25266cu: goto label_25266c;
        case 0x252670u: goto label_252670;
        case 0x252674u: goto label_252674;
        case 0x252678u: goto label_252678;
        case 0x25267cu: goto label_25267c;
        case 0x252680u: goto label_252680;
        case 0x252684u: goto label_252684;
        case 0x252688u: goto label_252688;
        case 0x25268cu: goto label_25268c;
        case 0x252690u: goto label_252690;
        case 0x252694u: goto label_252694;
        case 0x252698u: goto label_252698;
        case 0x25269cu: goto label_25269c;
        case 0x2526a0u: goto label_2526a0;
        case 0x2526a4u: goto label_2526a4;
        case 0x2526a8u: goto label_2526a8;
        case 0x2526acu: goto label_2526ac;
        case 0x2526b0u: goto label_2526b0;
        case 0x2526b4u: goto label_2526b4;
        case 0x2526b8u: goto label_2526b8;
        case 0x2526bcu: goto label_2526bc;
        case 0x2526c0u: goto label_2526c0;
        case 0x2526c4u: goto label_2526c4;
        case 0x2526c8u: goto label_2526c8;
        case 0x2526ccu: goto label_2526cc;
        case 0x2526d0u: goto label_2526d0;
        case 0x2526d4u: goto label_2526d4;
        case 0x2526d8u: goto label_2526d8;
        case 0x2526dcu: goto label_2526dc;
        case 0x2526e0u: goto label_2526e0;
        case 0x2526e4u: goto label_2526e4;
        case 0x2526e8u: goto label_2526e8;
        case 0x2526ecu: goto label_2526ec;
        case 0x2526f0u: goto label_2526f0;
        case 0x2526f4u: goto label_2526f4;
        case 0x2526f8u: goto label_2526f8;
        case 0x2526fcu: goto label_2526fc;
        case 0x252700u: goto label_252700;
        case 0x252704u: goto label_252704;
        case 0x252708u: goto label_252708;
        case 0x25270cu: goto label_25270c;
        case 0x252710u: goto label_252710;
        case 0x252714u: goto label_252714;
        case 0x252718u: goto label_252718;
        case 0x25271cu: goto label_25271c;
        case 0x252720u: goto label_252720;
        case 0x252724u: goto label_252724;
        case 0x252728u: goto label_252728;
        case 0x25272cu: goto label_25272c;
        case 0x252730u: goto label_252730;
        case 0x252734u: goto label_252734;
        case 0x252738u: goto label_252738;
        case 0x25273cu: goto label_25273c;
        case 0x252740u: goto label_252740;
        case 0x252744u: goto label_252744;
        case 0x252748u: goto label_252748;
        case 0x25274cu: goto label_25274c;
        case 0x252750u: goto label_252750;
        case 0x252754u: goto label_252754;
        case 0x252758u: goto label_252758;
        case 0x25275cu: goto label_25275c;
        case 0x252760u: goto label_252760;
        case 0x252764u: goto label_252764;
        case 0x252768u: goto label_252768;
        case 0x25276cu: goto label_25276c;
        case 0x252770u: goto label_252770;
        case 0x252774u: goto label_252774;
        case 0x252778u: goto label_252778;
        case 0x25277cu: goto label_25277c;
        case 0x252780u: goto label_252780;
        case 0x252784u: goto label_252784;
        case 0x252788u: goto label_252788;
        case 0x25278cu: goto label_25278c;
        case 0x252790u: goto label_252790;
        case 0x252794u: goto label_252794;
        case 0x252798u: goto label_252798;
        case 0x25279cu: goto label_25279c;
        case 0x2527a0u: goto label_2527a0;
        case 0x2527a4u: goto label_2527a4;
        case 0x2527a8u: goto label_2527a8;
        case 0x2527acu: goto label_2527ac;
        case 0x2527b0u: goto label_2527b0;
        case 0x2527b4u: goto label_2527b4;
        case 0x2527b8u: goto label_2527b8;
        case 0x2527bcu: goto label_2527bc;
        case 0x2527c0u: goto label_2527c0;
        case 0x2527c4u: goto label_2527c4;
        case 0x2527c8u: goto label_2527c8;
        case 0x2527ccu: goto label_2527cc;
        case 0x2527d0u: goto label_2527d0;
        case 0x2527d4u: goto label_2527d4;
        case 0x2527d8u: goto label_2527d8;
        case 0x2527dcu: goto label_2527dc;
        case 0x2527e0u: goto label_2527e0;
        case 0x2527e4u: goto label_2527e4;
        case 0x2527e8u: goto label_2527e8;
        case 0x2527ecu: goto label_2527ec;
        case 0x2527f0u: goto label_2527f0;
        case 0x2527f4u: goto label_2527f4;
        case 0x2527f8u: goto label_2527f8;
        case 0x2527fcu: goto label_2527fc;
        case 0x252800u: goto label_252800;
        case 0x252804u: goto label_252804;
        case 0x252808u: goto label_252808;
        case 0x25280cu: goto label_25280c;
        case 0x252810u: goto label_252810;
        case 0x252814u: goto label_252814;
        case 0x252818u: goto label_252818;
        case 0x25281cu: goto label_25281c;
        case 0x252820u: goto label_252820;
        case 0x252824u: goto label_252824;
        case 0x252828u: goto label_252828;
        case 0x25282cu: goto label_25282c;
        case 0x252830u: goto label_252830;
        case 0x252834u: goto label_252834;
        case 0x252838u: goto label_252838;
        case 0x25283cu: goto label_25283c;
        case 0x252840u: goto label_252840;
        case 0x252844u: goto label_252844;
        case 0x252848u: goto label_252848;
        case 0x25284cu: goto label_25284c;
        case 0x252850u: goto label_252850;
        case 0x252854u: goto label_252854;
        case 0x252858u: goto label_252858;
        case 0x25285cu: goto label_25285c;
        case 0x252860u: goto label_252860;
        case 0x252864u: goto label_252864;
        case 0x252868u: goto label_252868;
        case 0x25286cu: goto label_25286c;
        case 0x252870u: goto label_252870;
        case 0x252874u: goto label_252874;
        case 0x252878u: goto label_252878;
        case 0x25287cu: goto label_25287c;
        case 0x252880u: goto label_252880;
        case 0x252884u: goto label_252884;
        case 0x252888u: goto label_252888;
        case 0x25288cu: goto label_25288c;
        case 0x252890u: goto label_252890;
        case 0x252894u: goto label_252894;
        case 0x252898u: goto label_252898;
        case 0x25289cu: goto label_25289c;
        case 0x2528a0u: goto label_2528a0;
        case 0x2528a4u: goto label_2528a4;
        case 0x2528a8u: goto label_2528a8;
        case 0x2528acu: goto label_2528ac;
        case 0x2528b0u: goto label_2528b0;
        case 0x2528b4u: goto label_2528b4;
        case 0x2528b8u: goto label_2528b8;
        case 0x2528bcu: goto label_2528bc;
        case 0x2528c0u: goto label_2528c0;
        case 0x2528c4u: goto label_2528c4;
        case 0x2528c8u: goto label_2528c8;
        case 0x2528ccu: goto label_2528cc;
        case 0x2528d0u: goto label_2528d0;
        case 0x2528d4u: goto label_2528d4;
        case 0x2528d8u: goto label_2528d8;
        case 0x2528dcu: goto label_2528dc;
        case 0x2528e0u: goto label_2528e0;
        case 0x2528e4u: goto label_2528e4;
        case 0x2528e8u: goto label_2528e8;
        case 0x2528ecu: goto label_2528ec;
        case 0x2528f0u: goto label_2528f0;
        case 0x2528f4u: goto label_2528f4;
        case 0x2528f8u: goto label_2528f8;
        case 0x2528fcu: goto label_2528fc;
        case 0x252900u: goto label_252900;
        case 0x252904u: goto label_252904;
        case 0x252908u: goto label_252908;
        case 0x25290cu: goto label_25290c;
        case 0x252910u: goto label_252910;
        case 0x252914u: goto label_252914;
        case 0x252918u: goto label_252918;
        case 0x25291cu: goto label_25291c;
        case 0x252920u: goto label_252920;
        case 0x252924u: goto label_252924;
        case 0x252928u: goto label_252928;
        case 0x25292cu: goto label_25292c;
        case 0x252930u: goto label_252930;
        case 0x252934u: goto label_252934;
        case 0x252938u: goto label_252938;
        case 0x25293cu: goto label_25293c;
        case 0x252940u: goto label_252940;
        case 0x252944u: goto label_252944;
        case 0x252948u: goto label_252948;
        case 0x25294cu: goto label_25294c;
        case 0x252950u: goto label_252950;
        case 0x252954u: goto label_252954;
        case 0x252958u: goto label_252958;
        case 0x25295cu: goto label_25295c;
        case 0x252960u: goto label_252960;
        case 0x252964u: goto label_252964;
        case 0x252968u: goto label_252968;
        case 0x25296cu: goto label_25296c;
        case 0x252970u: goto label_252970;
        case 0x252974u: goto label_252974;
        case 0x252978u: goto label_252978;
        case 0x25297cu: goto label_25297c;
        case 0x252980u: goto label_252980;
        case 0x252984u: goto label_252984;
        case 0x252988u: goto label_252988;
        case 0x25298cu: goto label_25298c;
        case 0x252990u: goto label_252990;
        case 0x252994u: goto label_252994;
        case 0x252998u: goto label_252998;
        case 0x25299cu: goto label_25299c;
        case 0x2529a0u: goto label_2529a0;
        case 0x2529a4u: goto label_2529a4;
        case 0x2529a8u: goto label_2529a8;
        case 0x2529acu: goto label_2529ac;
        case 0x2529b0u: goto label_2529b0;
        case 0x2529b4u: goto label_2529b4;
        case 0x2529b8u: goto label_2529b8;
        case 0x2529bcu: goto label_2529bc;
        case 0x2529c0u: goto label_2529c0;
        case 0x2529c4u: goto label_2529c4;
        case 0x2529c8u: goto label_2529c8;
        case 0x2529ccu: goto label_2529cc;
        case 0x2529d0u: goto label_2529d0;
        case 0x2529d4u: goto label_2529d4;
        case 0x2529d8u: goto label_2529d8;
        case 0x2529dcu: goto label_2529dc;
        case 0x2529e0u: goto label_2529e0;
        case 0x2529e4u: goto label_2529e4;
        case 0x2529e8u: goto label_2529e8;
        case 0x2529ecu: goto label_2529ec;
        case 0x2529f0u: goto label_2529f0;
        case 0x2529f4u: goto label_2529f4;
        case 0x2529f8u: goto label_2529f8;
        case 0x2529fcu: goto label_2529fc;
        case 0x252a00u: goto label_252a00;
        case 0x252a04u: goto label_252a04;
        case 0x252a08u: goto label_252a08;
        case 0x252a0cu: goto label_252a0c;
        case 0x252a10u: goto label_252a10;
        case 0x252a14u: goto label_252a14;
        case 0x252a18u: goto label_252a18;
        case 0x252a1cu: goto label_252a1c;
        default: return;
    }

label_252250:
    // 0x252250: 0x0  nop
    ctx->pc = 0x252250u;
    // NOP
label_252254:
    // 0x252254: 0x0  nop
    ctx->pc = 0x252254u;
    // NOP
label_252258:
    // 0x252258: 0x0  nop
    ctx->pc = 0x252258u;
    // NOP
label_25225c:
    // 0x25225c: 0x0  nop
    ctx->pc = 0x25225cu;
    // NOP
label_252260:
    // 0x252260: 0x0  nop
    ctx->pc = 0x252260u;
    // NOP
label_252264:
    // 0x252264: 0x0  nop
    ctx->pc = 0x252264u;
    // NOP
label_252268:
    // 0x252268: 0x0  nop
    ctx->pc = 0x252268u;
    // NOP
label_25226c:
    // 0x25226c: 0x0  nop
    ctx->pc = 0x25226cu;
    // NOP
label_252270:
    // 0x252270: 0x0  nop
    ctx->pc = 0x252270u;
    // NOP
label_252274:
    // 0x252274: 0x0  nop
    ctx->pc = 0x252274u;
    // NOP
label_252278:
    // 0x252278: 0x0  nop
    ctx->pc = 0x252278u;
    // NOP
label_25227c:
    // 0x25227c: 0x0  nop
    ctx->pc = 0x25227cu;
    // NOP
label_252280:
    // 0x252280: 0x0  nop
    ctx->pc = 0x252280u;
    // NOP
label_252284:
    // 0x252284: 0x0  nop
    ctx->pc = 0x252284u;
    // NOP
label_252288:
    // 0x252288: 0x0  nop
    ctx->pc = 0x252288u;
    // NOP
label_25228c:
    // 0x25228c: 0x0  nop
    ctx->pc = 0x25228cu;
    // NOP
label_252290:
    // 0x252290: 0x0  nop
    ctx->pc = 0x252290u;
    // NOP
label_252294:
    // 0x252294: 0x0  nop
    ctx->pc = 0x252294u;
    // NOP
label_252298:
    // 0x252298: 0x5be  dsrl32      $zero, $zero, 22
    ctx->pc = 0x252298u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 22));
label_25229c:
    // 0x25229c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x25229cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2522a0:
    // 0x2522a0: 0x152c70  tge         $zero, $s5, 177
    ctx->pc = 0x2522a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2522a4:
    // 0x2522a4: 0x0  nop
    ctx->pc = 0x2522a4u;
    // NOP
label_2522a8:
    // 0x2522a8: 0x0  nop
    ctx->pc = 0x2522a8u;
    // NOP
label_2522ac:
    // 0x2522ac: 0x0  nop
    ctx->pc = 0x2522acu;
    // NOP
label_2522b0:
    // 0x2522b0: 0x0  nop
    ctx->pc = 0x2522b0u;
    // NOP
label_2522b4:
    // 0x2522b4: 0x0  nop
    ctx->pc = 0x2522b4u;
    // NOP
label_2522b8:
    // 0x2522b8: 0x0  nop
    ctx->pc = 0x2522b8u;
    // NOP
label_2522bc:
    // 0x2522bc: 0x0  nop
    ctx->pc = 0x2522bcu;
    // NOP
label_2522c0:
    // 0x2522c0: 0x0  nop
    ctx->pc = 0x2522c0u;
    // NOP
label_2522c4:
    // 0x2522c4: 0x0  nop
    ctx->pc = 0x2522c4u;
    // NOP
label_2522c8:
    // 0x2522c8: 0x0  nop
    ctx->pc = 0x2522c8u;
    // NOP
label_2522cc:
    // 0x2522cc: 0x0  nop
    ctx->pc = 0x2522ccu;
    // NOP
label_2522d0:
    // 0x2522d0: 0x0  nop
    ctx->pc = 0x2522d0u;
    // NOP
label_2522d4:
    // 0x2522d4: 0x0  nop
    ctx->pc = 0x2522d4u;
    // NOP
label_2522d8:
    // 0x2522d8: 0x0  nop
    ctx->pc = 0x2522d8u;
    // NOP
label_2522dc:
    // 0x2522dc: 0x0  nop
    ctx->pc = 0x2522dcu;
    // NOP
label_2522e0:
    // 0x2522e0: 0x0  nop
    ctx->pc = 0x2522e0u;
    // NOP
label_2522e4:
    // 0x2522e4: 0x0  nop
    ctx->pc = 0x2522e4u;
    // NOP
label_2522e8:
    // 0x2522e8: 0x0  nop
    ctx->pc = 0x2522e8u;
    // NOP
label_2522ec:
    // 0x2522ec: 0x0  nop
    ctx->pc = 0x2522ecu;
    // NOP
label_2522f0:
    // 0x2522f0: 0x0  nop
    ctx->pc = 0x2522f0u;
    // NOP
label_2522f4:
    // 0x2522f4: 0x0  nop
    ctx->pc = 0x2522f4u;
    // NOP
label_2522f8:
    // 0x2522f8: 0x0  nop
    ctx->pc = 0x2522f8u;
    // NOP
label_2522fc:
    // 0x2522fc: 0x0  nop
    ctx->pc = 0x2522fcu;
    // NOP
label_252300:
    // 0x252300: 0x0  nop
    ctx->pc = 0x252300u;
    // NOP
label_252304:
    // 0x252304: 0x0  nop
    ctx->pc = 0x252304u;
    // NOP
label_252308:
    // 0x252308: 0x0  nop
    ctx->pc = 0x252308u;
    // NOP
label_25230c:
    // 0x25230c: 0x0  nop
    ctx->pc = 0x25230cu;
    // NOP
label_252310:
    // 0x252310: 0x0  nop
    ctx->pc = 0x252310u;
    // NOP
label_252314:
    // 0x252314: 0x0  nop
    ctx->pc = 0x252314u;
    // NOP
label_252318:
    // 0x252318: 0x0  nop
    ctx->pc = 0x252318u;
    // NOP
label_25231c:
    // 0x25231c: 0x0  nop
    ctx->pc = 0x25231cu;
    // NOP
label_252320:
    // 0x252320: 0x0  nop
    ctx->pc = 0x252320u;
    // NOP
label_252324:
    // 0x252324: 0x0  nop
    ctx->pc = 0x252324u;
    // NOP
label_252328:
    // 0x252328: 0x0  nop
    ctx->pc = 0x252328u;
    // NOP
label_25232c:
    // 0x25232c: 0x0  nop
    ctx->pc = 0x25232cu;
    // NOP
label_252330:
    // 0x252330: 0x0  nop
    ctx->pc = 0x252330u;
    // NOP
label_252334:
    // 0x252334: 0x0  nop
    ctx->pc = 0x252334u;
    // NOP
label_252338:
    // 0x252338: 0x0  nop
    ctx->pc = 0x252338u;
    // NOP
label_25233c:
    // 0x25233c: 0x0  nop
    ctx->pc = 0x25233cu;
    // NOP
label_252340:
    // 0x252340: 0x0  nop
    ctx->pc = 0x252340u;
    // NOP
label_252344:
    // 0x252344: 0x0  nop
    ctx->pc = 0x252344u;
    // NOP
label_252348:
    // 0x252348: 0x0  nop
    ctx->pc = 0x252348u;
    // NOP
label_25234c:
    // 0x25234c: 0x0  nop
    ctx->pc = 0x25234cu;
    // NOP
label_252350:
    // 0x252350: 0x0  nop
    ctx->pc = 0x252350u;
    // NOP
label_252354:
    // 0x252354: 0x0  nop
    ctx->pc = 0x252354u;
    // NOP
label_252358:
    // 0x252358: 0x0  nop
    ctx->pc = 0x252358u;
    // NOP
label_25235c:
    // 0x25235c: 0x0  nop
    ctx->pc = 0x25235cu;
    // NOP
label_252360:
    // 0x252360: 0x0  nop
    ctx->pc = 0x252360u;
    // NOP
label_252364:
    // 0x252364: 0x0  nop
    ctx->pc = 0x252364u;
    // NOP
label_252368:
    // 0x252368: 0x0  nop
    ctx->pc = 0x252368u;
    // NOP
label_25236c:
    // 0x25236c: 0x0  nop
    ctx->pc = 0x25236cu;
    // NOP
label_252370:
    // 0x252370: 0x5bf  dsra32      $zero, $zero, 22
    ctx->pc = 0x252370u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 22));
label_252374:
    // 0x252374: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x252374u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_252378:
    // 0x252378: 0x152870  tge         $zero, $s5, 161
    ctx->pc = 0x252378u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_25237c:
    // 0x25237c: 0x0  nop
    ctx->pc = 0x25237cu;
    // NOP
label_252380:
    // 0x252380: 0x0  nop
    ctx->pc = 0x252380u;
    // NOP
label_252384:
    // 0x252384: 0x0  nop
    ctx->pc = 0x252384u;
    // NOP
label_252388:
    // 0x252388: 0x0  nop
    ctx->pc = 0x252388u;
    // NOP
label_25238c:
    // 0x25238c: 0x0  nop
    ctx->pc = 0x25238cu;
    // NOP
label_252390:
    // 0x252390: 0x0  nop
    ctx->pc = 0x252390u;
    // NOP
label_252394:
    // 0x252394: 0x0  nop
    ctx->pc = 0x252394u;
    // NOP
label_252398:
    // 0x252398: 0x0  nop
    ctx->pc = 0x252398u;
    // NOP
label_25239c:
    // 0x25239c: 0x0  nop
    ctx->pc = 0x25239cu;
    // NOP
label_2523a0:
    // 0x2523a0: 0x0  nop
    ctx->pc = 0x2523a0u;
    // NOP
label_2523a4:
    // 0x2523a4: 0x0  nop
    ctx->pc = 0x2523a4u;
    // NOP
label_2523a8:
    // 0x2523a8: 0x0  nop
    ctx->pc = 0x2523a8u;
    // NOP
label_2523ac:
    // 0x2523ac: 0x0  nop
    ctx->pc = 0x2523acu;
    // NOP
label_2523b0:
    // 0x2523b0: 0x0  nop
    ctx->pc = 0x2523b0u;
    // NOP
label_2523b4:
    // 0x2523b4: 0x0  nop
    ctx->pc = 0x2523b4u;
    // NOP
label_2523b8:
    // 0x2523b8: 0x0  nop
    ctx->pc = 0x2523b8u;
    // NOP
label_2523bc:
    // 0x2523bc: 0x0  nop
    ctx->pc = 0x2523bcu;
    // NOP
label_2523c0:
    // 0x2523c0: 0x0  nop
    ctx->pc = 0x2523c0u;
    // NOP
label_2523c4:
    // 0x2523c4: 0x0  nop
    ctx->pc = 0x2523c4u;
    // NOP
label_2523c8:
    // 0x2523c8: 0x0  nop
    ctx->pc = 0x2523c8u;
    // NOP
label_2523cc:
    // 0x2523cc: 0x0  nop
    ctx->pc = 0x2523ccu;
    // NOP
label_2523d0:
    // 0x2523d0: 0x0  nop
    ctx->pc = 0x2523d0u;
    // NOP
label_2523d4:
    // 0x2523d4: 0x0  nop
    ctx->pc = 0x2523d4u;
    // NOP
label_2523d8:
    // 0x2523d8: 0x0  nop
    ctx->pc = 0x2523d8u;
    // NOP
label_2523dc:
    // 0x2523dc: 0x0  nop
    ctx->pc = 0x2523dcu;
    // NOP
label_2523e0:
    // 0x2523e0: 0x0  nop
    ctx->pc = 0x2523e0u;
    // NOP
label_2523e4:
    // 0x2523e4: 0x0  nop
    ctx->pc = 0x2523e4u;
    // NOP
label_2523e8:
    // 0x2523e8: 0x0  nop
    ctx->pc = 0x2523e8u;
    // NOP
label_2523ec:
    // 0x2523ec: 0x0  nop
    ctx->pc = 0x2523ecu;
    // NOP
label_2523f0:
    // 0x2523f0: 0x0  nop
    ctx->pc = 0x2523f0u;
    // NOP
label_2523f4:
    // 0x2523f4: 0x0  nop
    ctx->pc = 0x2523f4u;
    // NOP
label_2523f8:
    // 0x2523f8: 0x0  nop
    ctx->pc = 0x2523f8u;
    // NOP
label_2523fc:
    // 0x2523fc: 0x0  nop
    ctx->pc = 0x2523fcu;
    // NOP
label_252400:
    // 0x252400: 0x0  nop
    ctx->pc = 0x252400u;
    // NOP
label_252404:
    // 0x252404: 0x0  nop
    ctx->pc = 0x252404u;
    // NOP
label_252408:
    // 0x252408: 0x0  nop
    ctx->pc = 0x252408u;
    // NOP
label_25240c:
    // 0x25240c: 0x0  nop
    ctx->pc = 0x25240cu;
    // NOP
label_252410:
    // 0x252410: 0x0  nop
    ctx->pc = 0x252410u;
    // NOP
label_252414:
    // 0x252414: 0x0  nop
    ctx->pc = 0x252414u;
    // NOP
label_252418:
    // 0x252418: 0x0  nop
    ctx->pc = 0x252418u;
    // NOP
label_25241c:
    // 0x25241c: 0x0  nop
    ctx->pc = 0x25241cu;
    // NOP
label_252420:
    // 0x252420: 0x0  nop
    ctx->pc = 0x252420u;
    // NOP
label_252424:
    // 0x252424: 0x0  nop
    ctx->pc = 0x252424u;
    // NOP
label_252428:
    // 0x252428: 0x0  nop
    ctx->pc = 0x252428u;
    // NOP
label_25242c:
    // 0x25242c: 0x0  nop
    ctx->pc = 0x25242cu;
    // NOP
label_252430:
    // 0x252430: 0x0  nop
    ctx->pc = 0x252430u;
    // NOP
label_252434:
    // 0x252434: 0x0  nop
    ctx->pc = 0x252434u;
    // NOP
label_252438:
    // 0x252438: 0x0  nop
    ctx->pc = 0x252438u;
    // NOP
label_25243c:
    // 0x25243c: 0x0  nop
    ctx->pc = 0x25243cu;
    // NOP
label_252440:
    // 0x252440: 0x0  nop
    ctx->pc = 0x252440u;
    // NOP
label_252444:
    // 0x252444: 0x0  nop
    ctx->pc = 0x252444u;
    // NOP
label_252448:
    // 0x252448: 0x5c0  sll         $zero, $zero, 23
    ctx->pc = 0x252448u;
    
label_25244c:
    // 0x25244c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x25244cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_252450:
    // 0x252450: 0x152e70  tge         $zero, $s5, 185
    ctx->pc = 0x252450u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_252454:
    // 0x252454: 0x0  nop
    ctx->pc = 0x252454u;
    // NOP
label_252458:
    // 0x252458: 0x0  nop
    ctx->pc = 0x252458u;
    // NOP
label_25245c:
    // 0x25245c: 0x0  nop
    ctx->pc = 0x25245cu;
    // NOP
label_252460:
    // 0x252460: 0x0  nop
    ctx->pc = 0x252460u;
    // NOP
label_252464:
    // 0x252464: 0x0  nop
    ctx->pc = 0x252464u;
    // NOP
label_252468:
    // 0x252468: 0x0  nop
    ctx->pc = 0x252468u;
    // NOP
label_25246c:
    // 0x25246c: 0x0  nop
    ctx->pc = 0x25246cu;
    // NOP
label_252470:
    // 0x252470: 0x0  nop
    ctx->pc = 0x252470u;
    // NOP
label_252474:
    // 0x252474: 0x0  nop
    ctx->pc = 0x252474u;
    // NOP
label_252478:
    // 0x252478: 0x0  nop
    ctx->pc = 0x252478u;
    // NOP
label_25247c:
    // 0x25247c: 0x0  nop
    ctx->pc = 0x25247cu;
    // NOP
label_252480:
    // 0x252480: 0x0  nop
    ctx->pc = 0x252480u;
    // NOP
label_252484:
    // 0x252484: 0x0  nop
    ctx->pc = 0x252484u;
    // NOP
label_252488:
    // 0x252488: 0x0  nop
    ctx->pc = 0x252488u;
    // NOP
label_25248c:
    // 0x25248c: 0x0  nop
    ctx->pc = 0x25248cu;
    // NOP
label_252490:
    // 0x252490: 0x0  nop
    ctx->pc = 0x252490u;
    // NOP
label_252494:
    // 0x252494: 0x0  nop
    ctx->pc = 0x252494u;
    // NOP
label_252498:
    // 0x252498: 0x0  nop
    ctx->pc = 0x252498u;
    // NOP
label_25249c:
    // 0x25249c: 0x0  nop
    ctx->pc = 0x25249cu;
    // NOP
label_2524a0:
    // 0x2524a0: 0x0  nop
    ctx->pc = 0x2524a0u;
    // NOP
label_2524a4:
    // 0x2524a4: 0x0  nop
    ctx->pc = 0x2524a4u;
    // NOP
label_2524a8:
    // 0x2524a8: 0x0  nop
    ctx->pc = 0x2524a8u;
    // NOP
label_2524ac:
    // 0x2524ac: 0x0  nop
    ctx->pc = 0x2524acu;
    // NOP
label_2524b0:
    // 0x2524b0: 0x0  nop
    ctx->pc = 0x2524b0u;
    // NOP
label_2524b4:
    // 0x2524b4: 0x0  nop
    ctx->pc = 0x2524b4u;
    // NOP
label_2524b8:
    // 0x2524b8: 0x0  nop
    ctx->pc = 0x2524b8u;
    // NOP
label_2524bc:
    // 0x2524bc: 0x0  nop
    ctx->pc = 0x2524bcu;
    // NOP
label_2524c0:
    // 0x2524c0: 0x0  nop
    ctx->pc = 0x2524c0u;
    // NOP
label_2524c4:
    // 0x2524c4: 0x0  nop
    ctx->pc = 0x2524c4u;
    // NOP
label_2524c8:
    // 0x2524c8: 0x0  nop
    ctx->pc = 0x2524c8u;
    // NOP
label_2524cc:
    // 0x2524cc: 0x0  nop
    ctx->pc = 0x2524ccu;
    // NOP
label_2524d0:
    // 0x2524d0: 0x0  nop
    ctx->pc = 0x2524d0u;
    // NOP
label_2524d4:
    // 0x2524d4: 0x0  nop
    ctx->pc = 0x2524d4u;
    // NOP
label_2524d8:
    // 0x2524d8: 0x0  nop
    ctx->pc = 0x2524d8u;
    // NOP
label_2524dc:
    // 0x2524dc: 0x0  nop
    ctx->pc = 0x2524dcu;
    // NOP
label_2524e0:
    // 0x2524e0: 0x0  nop
    ctx->pc = 0x2524e0u;
    // NOP
label_2524e4:
    // 0x2524e4: 0x0  nop
    ctx->pc = 0x2524e4u;
    // NOP
label_2524e8:
    // 0x2524e8: 0x0  nop
    ctx->pc = 0x2524e8u;
    // NOP
label_2524ec:
    // 0x2524ec: 0x0  nop
    ctx->pc = 0x2524ecu;
    // NOP
label_2524f0:
    // 0x2524f0: 0x0  nop
    ctx->pc = 0x2524f0u;
    // NOP
label_2524f4:
    // 0x2524f4: 0x0  nop
    ctx->pc = 0x2524f4u;
    // NOP
label_2524f8:
    // 0x2524f8: 0x0  nop
    ctx->pc = 0x2524f8u;
    // NOP
label_2524fc:
    // 0x2524fc: 0x0  nop
    ctx->pc = 0x2524fcu;
    // NOP
label_252500:
    // 0x252500: 0x0  nop
    ctx->pc = 0x252500u;
    // NOP
label_252504:
    // 0x252504: 0x0  nop
    ctx->pc = 0x252504u;
    // NOP
label_252508:
    // 0x252508: 0x0  nop
    ctx->pc = 0x252508u;
    // NOP
label_25250c:
    // 0x25250c: 0x0  nop
    ctx->pc = 0x25250cu;
    // NOP
label_252510:
    // 0x252510: 0x0  nop
    ctx->pc = 0x252510u;
    // NOP
label_252514:
    // 0x252514: 0x0  nop
    ctx->pc = 0x252514u;
    // NOP
label_252518:
    // 0x252518: 0x0  nop
    ctx->pc = 0x252518u;
    // NOP
label_25251c:
    // 0x25251c: 0x0  nop
    ctx->pc = 0x25251cu;
    // NOP
label_252520:
    // 0x252520: 0x5c1  .word       0x000005C1                   # INVALID     $zero, $zero, 0x5C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252520u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x252520 raw=0x000005C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252524:
    // 0x252524: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x252524u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_252528:
    // 0x252528: 0x152510  .word       0x00152510                   # mfhi        $a0 # 00150500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252528u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_25252c:
    // 0x25252c: 0x0  nop
    ctx->pc = 0x25252cu;
    // NOP
label_252530:
    // 0x252530: 0x0  nop
    ctx->pc = 0x252530u;
    // NOP
label_252534:
    // 0x252534: 0x0  nop
    ctx->pc = 0x252534u;
    // NOP
label_252538:
    // 0x252538: 0x0  nop
    ctx->pc = 0x252538u;
    // NOP
label_25253c:
    // 0x25253c: 0x0  nop
    ctx->pc = 0x25253cu;
    // NOP
label_252540:
    // 0x252540: 0x0  nop
    ctx->pc = 0x252540u;
    // NOP
label_252544:
    // 0x252544: 0x0  nop
    ctx->pc = 0x252544u;
    // NOP
label_252548:
    // 0x252548: 0x0  nop
    ctx->pc = 0x252548u;
    // NOP
label_25254c:
    // 0x25254c: 0x0  nop
    ctx->pc = 0x25254cu;
    // NOP
label_252550:
    // 0x252550: 0x0  nop
    ctx->pc = 0x252550u;
    // NOP
label_252554:
    // 0x252554: 0x0  nop
    ctx->pc = 0x252554u;
    // NOP
label_252558:
    // 0x252558: 0x0  nop
    ctx->pc = 0x252558u;
    // NOP
label_25255c:
    // 0x25255c: 0x0  nop
    ctx->pc = 0x25255cu;
    // NOP
label_252560:
    // 0x252560: 0x0  nop
    ctx->pc = 0x252560u;
    // NOP
label_252564:
    // 0x252564: 0x0  nop
    ctx->pc = 0x252564u;
    // NOP
label_252568:
    // 0x252568: 0x0  nop
    ctx->pc = 0x252568u;
    // NOP
label_25256c:
    // 0x25256c: 0x0  nop
    ctx->pc = 0x25256cu;
    // NOP
label_252570:
    // 0x252570: 0x0  nop
    ctx->pc = 0x252570u;
    // NOP
label_252574:
    // 0x252574: 0x0  nop
    ctx->pc = 0x252574u;
    // NOP
label_252578:
    // 0x252578: 0x0  nop
    ctx->pc = 0x252578u;
    // NOP
label_25257c:
    // 0x25257c: 0x0  nop
    ctx->pc = 0x25257cu;
    // NOP
label_252580:
    // 0x252580: 0x0  nop
    ctx->pc = 0x252580u;
    // NOP
label_252584:
    // 0x252584: 0x0  nop
    ctx->pc = 0x252584u;
    // NOP
label_252588:
    // 0x252588: 0x0  nop
    ctx->pc = 0x252588u;
    // NOP
label_25258c:
    // 0x25258c: 0x0  nop
    ctx->pc = 0x25258cu;
    // NOP
label_252590:
    // 0x252590: 0x0  nop
    ctx->pc = 0x252590u;
    // NOP
label_252594:
    // 0x252594: 0x0  nop
    ctx->pc = 0x252594u;
    // NOP
label_252598:
    // 0x252598: 0x0  nop
    ctx->pc = 0x252598u;
    // NOP
label_25259c:
    // 0x25259c: 0x0  nop
    ctx->pc = 0x25259cu;
    // NOP
label_2525a0:
    // 0x2525a0: 0x0  nop
    ctx->pc = 0x2525a0u;
    // NOP
label_2525a4:
    // 0x2525a4: 0x0  nop
    ctx->pc = 0x2525a4u;
    // NOP
label_2525a8:
    // 0x2525a8: 0x0  nop
    ctx->pc = 0x2525a8u;
    // NOP
label_2525ac:
    // 0x2525ac: 0x0  nop
    ctx->pc = 0x2525acu;
    // NOP
label_2525b0:
    // 0x2525b0: 0x0  nop
    ctx->pc = 0x2525b0u;
    // NOP
label_2525b4:
    // 0x2525b4: 0x0  nop
    ctx->pc = 0x2525b4u;
    // NOP
label_2525b8:
    // 0x2525b8: 0x0  nop
    ctx->pc = 0x2525b8u;
    // NOP
label_2525bc:
    // 0x2525bc: 0x0  nop
    ctx->pc = 0x2525bcu;
    // NOP
label_2525c0:
    // 0x2525c0: 0x0  nop
    ctx->pc = 0x2525c0u;
    // NOP
label_2525c4:
    // 0x2525c4: 0x0  nop
    ctx->pc = 0x2525c4u;
    // NOP
label_2525c8:
    // 0x2525c8: 0x0  nop
    ctx->pc = 0x2525c8u;
    // NOP
label_2525cc:
    // 0x2525cc: 0x0  nop
    ctx->pc = 0x2525ccu;
    // NOP
label_2525d0:
    // 0x2525d0: 0x0  nop
    ctx->pc = 0x2525d0u;
    // NOP
label_2525d4:
    // 0x2525d4: 0x0  nop
    ctx->pc = 0x2525d4u;
    // NOP
label_2525d8:
    // 0x2525d8: 0x0  nop
    ctx->pc = 0x2525d8u;
    // NOP
label_2525dc:
    // 0x2525dc: 0x0  nop
    ctx->pc = 0x2525dcu;
    // NOP
label_2525e0:
    // 0x2525e0: 0x0  nop
    ctx->pc = 0x2525e0u;
    // NOP
label_2525e4:
    // 0x2525e4: 0x0  nop
    ctx->pc = 0x2525e4u;
    // NOP
label_2525e8:
    // 0x2525e8: 0x0  nop
    ctx->pc = 0x2525e8u;
    // NOP
label_2525ec:
    // 0x2525ec: 0x0  nop
    ctx->pc = 0x2525ecu;
    // NOP
label_2525f0:
    // 0x2525f0: 0x0  nop
    ctx->pc = 0x2525f0u;
    // NOP
label_2525f4:
    // 0x2525f4: 0x0  nop
    ctx->pc = 0x2525f4u;
    // NOP
label_2525f8:
    // 0x2525f8: 0x0  nop
    ctx->pc = 0x2525f8u;
    // NOP
label_2525fc:
    // 0x2525fc: 0x0  nop
    ctx->pc = 0x2525fcu;
    // NOP
label_252600:
    // 0x252600: 0x27c  dsll32      $zero, $zero, 9
    ctx->pc = 0x252600u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 9));
label_252604:
    // 0x252604: 0x28f  sync
    ctx->pc = 0x252604u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_252608:
    // 0x252608: 0x2a5  .word       0x000002A5                   # move        $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252608u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25260c:
    // 0x25260c: 0x2b8  dsll        $zero, $zero, 10
    ctx->pc = 0x25260cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 10);
label_252610:
    // 0x252610: 0x2cb  .word       0x000002CB                   # movn        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252610u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_252614:
    // 0x252614: 0x2e1  .word       0x000002E1                   # addu        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252614u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_252618:
    // 0x252618: 0x2f7  .word       0x000002F7                   # INVALID     $zero, $zero, 0x2F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252618u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x252618 raw=0x000002F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25261c:
    // 0x25261c: 0x309  .word       0x00000309                   # jalr        $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
label_252620:
    if (ctx->pc == 0x252620u) {
        ctx->pc = 0x252620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25261Cu;
        // 0x252620: 0x31f  .word       0x0000031F                   # ddivu       $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x252620 raw=0x0000031F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x252624u;
        goto label_252624;
    }
    ctx->pc = 0x25261Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x252620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25261Cu;
        // 0x252620: 0x31f  .word       0x0000031F                   # ddivu       $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x252620 raw=0x0000031F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25261Cu, 0x252624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x252624u;
label_252624:
    // 0x252624: 0x337  .word       0x00000337                   # INVALID     $zero, $zero, 0x337 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252624u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x252624 raw=0x00000337"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252628:
    // 0x252628: 0x348  .word       0x00000348                   # jr          $zero # 00000340 <InstrIdType: CPU_SPECIAL>
label_25262c:
    if (ctx->pc == 0x25262Cu) {
        ctx->pc = 0x25262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252628u;
        // 0x25262c: 0x35e  .word       0x0000035E                   # ddiv        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25262C raw=0x0000035E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x252630u;
        goto label_252630;
    }
    ctx->pc = 0x252628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252628u;
        // 0x25262c: 0x35e  .word       0x0000035E                   # ddiv        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25262C raw=0x0000035E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252628u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252630u;
label_252630:
    // 0x252630: 0x370  tge         $zero, $zero, 13
    ctx->pc = 0x252630u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_252634:
    // 0x252634: 0x386  .word       0x00000386                   # srlv        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252634u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_252638:
    // 0x252638: 0x39d  .word       0x0000039D                   # dmultu      $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252638u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x252638 raw=0x0000039D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25263c:
    // 0x25263c: 0x3b5  .word       0x000003B5                   # INVALID     $zero, $zero, 0x3B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25263cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25263C raw=0x000003B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252640:
    // 0x252640: 0x3c8  .word       0x000003C8                   # jr          $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
label_252644:
    if (ctx->pc == 0x252644u) {
        ctx->pc = 0x252644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252640u;
        // 0x252644: 0x3dd  .word       0x000003DD                   # dmultu      $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x252644 raw=0x000003DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x252648u;
        goto label_252648;
    }
    ctx->pc = 0x252640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x252644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252640u;
        // 0x252644: 0x3dd  .word       0x000003DD                   # dmultu      $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x252644 raw=0x000003DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252640u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252648u;
label_252648:
    // 0x252648: 0x3ef  .word       0x000003EF                   # dsubu       $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252648u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_25264c:
    // 0x25264c: 0x402  srl         $zero, $zero, 16
    ctx->pc = 0x25264cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 16));
label_252650:
    // 0x252650: 0x414  .word       0x00000414                   # dsllv       $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252650u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_252654:
    // 0x252654: 0x426  .word       0x00000426                   # xor         $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252654u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_252658:
    // 0x252658: 0x43c  dsll32      $zero, $zero, 16
    ctx->pc = 0x252658u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 16));
label_25265c:
    // 0x25265c: 0x0  nop
    ctx->pc = 0x25265cu;
    // NOP
label_252660:
    // 0x252660: 0x907  .word       0x00000907                   # srav        $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252660u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_252664:
    // 0x252664: 0x90d  break       0, 36
    ctx->pc = 0x252664u;
    runtime->handleBreak(rdram, ctx);
label_252668:
    // 0x252668: 0x913  .word       0x00000913                   # mtlo        $zero # 00000900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252668u;
    ctx->lo = GPR_U64(ctx, 0);
label_25266c:
    // 0x25266c: 0x919  .word       0x00000919                   # multu       $zero, $zero # 00000900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25266cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_252670:
    // 0x252670: 0x91f  .word       0x0000091F                   # ddivu       $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252670u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x252670 raw=0x0000091F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252674:
    // 0x252674: 0x925  .word       0x00000925                   # move        $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252674u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_252678:
    // 0x252678: 0x92b  .word       0x0000092B                   # sltu        $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252678u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25267c:
    // 0x25267c: 0x931  tgeu        $zero, $zero, 36
    ctx->pc = 0x25267cu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_252680:
    // 0x252680: 0x937  .word       0x00000937                   # INVALID     $zero, $zero, 0x937 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x252680 raw=0x00000937"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252684:
    // 0x252684: 0x93d  .word       0x0000093D                   # INVALID     $zero, $zero, 0x93D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252684u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x252684 raw=0x0000093D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252688:
    // 0x252688: 0x943  sra         $at, $zero, 5
    ctx->pc = 0x252688u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 5));
label_25268c:
    // 0x25268c: 0x949  .word       0x00000949                   # jalr        $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
label_252690:
    if (ctx->pc == 0x252690u) {
        ctx->pc = 0x252690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25268Cu;
        // 0x252690: 0x94f  .word       0x0000094F                   # sync # 00000800 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x252694u;
        goto label_252694;
    }
    ctx->pc = 0x25268Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x252694u);
        ctx->pc = 0x252690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25268Cu;
        // 0x252690: 0x94f  .word       0x0000094F                   # sync # 00000800 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25268Cu, 0x252694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x252694u;
label_252694:
    // 0x252694: 0x955  .word       0x00000955                   # INVALID     $zero, $zero, 0x955 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252694u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x252694 raw=0x00000955"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252698:
    // 0x252698: 0x95e  .word       0x0000095E                   # ddiv        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252698u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x252698 raw=0x0000095E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25269c:
    // 0x25269c: 0x964  .word       0x00000964                   # and         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25269cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2526a0:
    // 0x2526a0: 0x96a  .word       0x0000096A                   # slt         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2526a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2526a4:
    // 0x2526a4: 0x970  tge         $zero, $zero, 37
    ctx->pc = 0x2526a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2526a8:
    // 0x2526a8: 0x976  tne         $zero, $zero, 37
    ctx->pc = 0x2526a8u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2526ac:
    // 0x2526ac: 0x97d  .word       0x0000097D                   # INVALID     $zero, $zero, 0x97D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2526acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2526AC raw=0x0000097D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2526b0:
    // 0x2526b0: 0x983  sra         $at, $zero, 6
    ctx->pc = 0x2526b0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 6));
label_2526b4:
    // 0x2526b4: 0x989  .word       0x00000989                   # jalr        $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
label_2526b8:
    if (ctx->pc == 0x2526B8u) {
        ctx->pc = 0x2526B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526B4u;
        // 0x2526b8: 0x992  .word       0x00000992                   # mflo        $at # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2526BCu;
        goto label_2526bc;
    }
    ctx->pc = 0x2526B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x2526BCu);
        ctx->pc = 0x2526B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526B4u;
        // 0x2526b8: 0x992  .word       0x00000992                   # mflo        $at # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2526B4u, 0x2526BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2526BCu;
label_2526bc:
    // 0x2526bc: 0x0  nop
    ctx->pc = 0x2526bcu;
    // NOP
label_2526c0:
    // 0x2526c0: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2526c0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2526C0 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2526c4:
    // 0x2526c4: 0x0  nop
    ctx->pc = 0x2526c4u;
    // NOP
label_2526c8:
    // 0x2526c8: 0x0  nop
    ctx->pc = 0x2526c8u;
    // NOP
label_2526cc:
    // 0x2526cc: 0x0  nop
    ctx->pc = 0x2526ccu;
    // NOP
label_2526d0:
    // 0x2526d0: 0x0  nop
    ctx->pc = 0x2526d0u;
    // NOP
label_2526d4:
    // 0x2526d4: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2526d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2526D4 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2526d8:
    // 0x2526d8: 0x0  nop
    ctx->pc = 0x2526d8u;
    // NOP
label_2526dc:
    // 0x2526dc: 0x0  nop
    ctx->pc = 0x2526dcu;
    // NOP
label_2526e0:
    // 0x2526e0: 0x0  nop
    ctx->pc = 0x2526e0u;
    // NOP
label_2526e4:
    // 0x2526e4: 0x0  nop
    ctx->pc = 0x2526e4u;
    // NOP
label_2526e8:
    // 0x2526e8: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2526e8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2526E8 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2526ec:
    // 0x2526ec: 0x0  nop
    ctx->pc = 0x2526ecu;
    // NOP
label_2526f0:
    // 0x2526f0: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2526f0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2526F0 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2526f4:
    // 0x2526f4: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2526f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2526F4 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2526f8:
    // 0x2526f8: 0x0  nop
    ctx->pc = 0x2526f8u;
    // NOP
label_2526fc:
    // 0x2526fc: 0x0  nop
    ctx->pc = 0x2526fcu;
    // NOP
label_252700:
    // 0x252700: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x252700u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x252700 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252704:
    // 0x252704: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x252704u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x252704 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252708:
    // 0x252708: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x252708u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x252708 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25270c:
    // 0x25270c: 0x0  nop
    ctx->pc = 0x25270cu;
    // NOP
label_252710:
    // 0x252710: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x252710u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x252710 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252714:
    // 0x252714: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x252714u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x252714 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252718:
    // 0x252718: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x252718u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x252718 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25271c:
    // 0x25271c: 0x0  nop
    ctx->pc = 0x25271cu;
    // NOP
label_252720:
    // 0x252720: 0x43733333  .word       0x43733333                   # INVALID     $k1, $s3, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x252720u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x252720 raw=0x43733333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252724:
    // 0x252724: 0x43733333  .word       0x43733333                   # INVALID     $k1, $s3, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x252724u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x252724 raw=0x43733333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252728:
    // 0x252728: 0x43733333  .word       0x43733333                   # INVALID     $k1, $s3, 0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x252728u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x252728 raw=0x43733333"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25272c:
    // 0x25272c: 0x0  nop
    ctx->pc = 0x25272cu;
    // NOP
label_252730:
    // 0x252730: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x252730u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x252730 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_252734:
    // 0x252734: 0x0  nop
    ctx->pc = 0x252734u;
    // NOP
label_252738:
    // 0x252738: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x252738u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x252738 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25273c:
    // 0x25273c: 0x0  nop
    ctx->pc = 0x25273cu;
    // NOP
label_252740:
    // 0x252740: 0x0  nop
    ctx->pc = 0x252740u;
    // NOP
label_252744:
    // 0x252744: 0x0  nop
    ctx->pc = 0x252744u;
    // NOP
label_252748:
    // 0x252748: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252748u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x252748 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25274c:
    // 0x25274c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x25274cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_252750:
    // 0x252750: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x252750u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_252754:
    // 0x252754: 0x8  jr          $zero
label_252758:
    if (ctx->pc == 0x252758u) {
        ctx->pc = 0x252758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252754u;
        // 0x252758: 0x10  mfhi        $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25275Cu;
        goto label_25275c;
    }
    ctx->pc = 0x252754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x252758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252754u;
        // 0x252758: 0x10  mfhi        $zero (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252754u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25275Cu;
label_25275c:
    // 0x25275c: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x25275cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_252760:
    // 0x252760: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x252760u;
    
label_252764:
    // 0x252764: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x252764u;
    
label_252768:
    // 0x252768: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x252768u;
    
label_25276c:
    // 0x25276c: 0x200  sll         $zero, $zero, 8
    ctx->pc = 0x25276cu;
    
label_252770:
    // 0x252770: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x252770u;
    
label_252774:
    // 0x252774: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x252774u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_252778:
    // 0x252778: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x252778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25277c:
    // 0x25277c: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x25277cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_252780:
    // 0x252780: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x252780u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_252784:
    // 0x252784: 0x8000  sll         $s0, $zero, 0
    ctx->pc = 0x252784u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_252788:
    // 0x252788: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x252788u;
    
label_25278c:
    // 0x25278c: 0x20000  sll         $zero, $v0, 0
    ctx->pc = 0x25278cu;
    
label_252790:
    // 0x252790: 0x40000  sll         $zero, $a0, 0
    ctx->pc = 0x252790u;
    
label_252794:
    // 0x252794: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x252794u;
    
label_252798:
    // 0x252798: 0x100000  sll         $zero, $s0, 0
    ctx->pc = 0x252798u;
    
label_25279c:
    // 0x25279c: 0x200000  .word       0x00200000                   # sll         $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25279cu;
    // NOP
label_2527a0:
    // 0x2527a0: 0x0  nop
    ctx->pc = 0x2527a0u;
    // NOP
label_2527a4:
    // 0x2527a4: 0x0  nop
    ctx->pc = 0x2527a4u;
    // NOP
label_2527a8:
    // 0x2527a8: 0x0  nop
    ctx->pc = 0x2527a8u;
    // NOP
label_2527ac:
    // 0x2527ac: 0x0  nop
    ctx->pc = 0x2527acu;
    // NOP
label_2527b0:
    // 0x2527b0: 0x0  nop
    ctx->pc = 0x2527b0u;
    // NOP
label_2527b4:
    // 0x2527b4: 0x0  nop
    ctx->pc = 0x2527b4u;
    // NOP
label_2527b8:
    // 0x2527b8: 0x0  nop
    ctx->pc = 0x2527b8u;
    // NOP
label_2527bc:
    // 0x2527bc: 0x0  nop
    ctx->pc = 0x2527bcu;
    // NOP
label_2527c0:
    // 0x2527c0: 0x0  nop
    ctx->pc = 0x2527c0u;
    // NOP
label_2527c4:
    // 0x2527c4: 0x0  nop
    ctx->pc = 0x2527c4u;
    // NOP
label_2527c8:
    // 0x2527c8: 0x0  nop
    ctx->pc = 0x2527c8u;
    // NOP
label_2527cc:
    // 0x2527cc: 0x0  nop
    ctx->pc = 0x2527ccu;
    // NOP
label_2527d0:
    // 0x2527d0: 0x0  nop
    ctx->pc = 0x2527d0u;
    // NOP
label_2527d4:
    // 0x2527d4: 0x0  nop
    ctx->pc = 0x2527d4u;
    // NOP
label_2527d8:
    // 0x2527d8: 0x0  nop
    ctx->pc = 0x2527d8u;
    // NOP
label_2527dc:
    // 0x2527dc: 0x0  nop
    ctx->pc = 0x2527dcu;
    // NOP
label_2527e0:
    // 0x2527e0: 0x0  nop
    ctx->pc = 0x2527e0u;
    // NOP
label_2527e4:
    // 0x2527e4: 0x0  nop
    ctx->pc = 0x2527e4u;
    // NOP
label_2527e8:
    // 0x2527e8: 0x0  nop
    ctx->pc = 0x2527e8u;
    // NOP
label_2527ec:
    // 0x2527ec: 0x0  nop
    ctx->pc = 0x2527ecu;
    // NOP
label_2527f0:
    // 0x2527f0: 0x0  nop
    ctx->pc = 0x2527f0u;
    // NOP
label_2527f4:
    // 0x2527f4: 0x0  nop
    ctx->pc = 0x2527f4u;
    // NOP
label_2527f8:
    // 0x2527f8: 0x0  nop
    ctx->pc = 0x2527f8u;
    // NOP
label_2527fc:
    // 0x2527fc: 0x0  nop
    ctx->pc = 0x2527fcu;
    // NOP
label_252800:
    // 0x252800: 0x0  nop
    ctx->pc = 0x252800u;
    // NOP
label_252804:
    // 0x252804: 0x0  nop
    ctx->pc = 0x252804u;
    // NOP
label_252808:
    // 0x252808: 0x0  nop
    ctx->pc = 0x252808u;
    // NOP
label_25280c:
    // 0x25280c: 0x0  nop
    ctx->pc = 0x25280cu;
    // NOP
label_252810:
    // 0x252810: 0x2c5a60  .word       0x002C5A60                   # add         $t3, $at, $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252810u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_252814:
    // 0x252814: 0x2c5a80  .word       0x002C5A80                   # sll         $t3, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252814u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_252818:
    // 0x252818: 0x2c5aa0  .word       0x002C5AA0                   # add         $t3, $at, $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252818u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25281c:
    // 0x25281c: 0x2c5ac0  .word       0x002C5AC0                   # sll         $t3, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25281cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
label_252820:
    // 0x252820: 0x2c5ae0  .word       0x002C5AE0                   # add         $t3, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252820u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_252824:
    // 0x252824: 0x2c5b00  .word       0x002C5B00                   # sll         $t3, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252824u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 12));
label_252828:
    // 0x252828: 0x2c5b20  .word       0x002C5B20                   # add         $t3, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252828u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25282c:
    // 0x25282c: 0x2c5b40  .word       0x002C5B40                   # sll         $t3, $t4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25282cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 13));
label_252830:
    // 0x252830: 0x2c5b60  .word       0x002C5B60                   # add         $t3, $at, $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252830u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_252834:
    // 0x252834: 0x2c5b80  .word       0x002C5B80                   # sll         $t3, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252834u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 14));
label_252838:
    // 0x252838: 0x2c5ba0  .word       0x002C5BA0                   # add         $t3, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252838u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25283c:
    // 0x25283c: 0x2c5bc0  .word       0x002C5BC0                   # sll         $t3, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25283cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_252840:
    // 0x252840: 0x2c5be0  .word       0x002C5BE0                   # add         $t3, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252840u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_252844:
    // 0x252844: 0x2c5c00  .word       0x002C5C00                   # sll         $t3, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252844u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_252848:
    // 0x252848: 0x2c5c20  .word       0x002C5C20                   # add         $t3, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252848u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25284c:
    // 0x25284c: 0x2c5c40  .word       0x002C5C40                   # sll         $t3, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25284cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 17));
label_252850:
    // 0x252850: 0x2c5c60  .word       0x002C5C60                   # add         $t3, $at, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252850u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_252854:
    // 0x252854: 0x2c5c80  .word       0x002C5C80                   # sll         $t3, $t4, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252854u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 18));
label_252858:
    // 0x252858: 0x2c5ca0  .word       0x002C5CA0                   # add         $t3, $at, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252858u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25285c:
    // 0x25285c: 0x2c5cc0  .word       0x002C5CC0                   # sll         $t3, $t4, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25285cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 19));
label_252860:
    // 0x252860: 0x2c5ce0  .word       0x002C5CE0                   # add         $t3, $at, $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252860u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_252864:
    // 0x252864: 0x2c5d00  .word       0x002C5D00                   # sll         $t3, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252864u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_252868:
    // 0x252868: 0x2c5d20  .word       0x002C5D20                   # add         $t3, $at, $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252868u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25286c:
    // 0x25286c: 0x0  nop
    ctx->pc = 0x25286cu;
    // NOP
label_252870:
    // 0x252870: 0x2c5e60  .word       0x002C5E60                   # add         $t3, $at, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252870u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_252874:
    // 0x252874: 0x2c5a80  .word       0x002C5A80                   # sll         $t3, $t4, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252874u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 10));
label_252878:
    // 0x252878: 0x2c5aa0  .word       0x002C5AA0                   # add         $t3, $at, $t4 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252878u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25287c:
    // 0x25287c: 0x2c5ac0  .word       0x002C5AC0                   # sll         $t3, $t4, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25287cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
label_252880:
    // 0x252880: 0x2c5ae0  .word       0x002C5AE0                   # add         $t3, $at, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252880u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_252884:
    // 0x252884: 0x2c5b00  .word       0x002C5B00                   # sll         $t3, $t4, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252884u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 12));
label_252888:
    // 0x252888: 0x2c5e80  .word       0x002C5E80                   # sll         $t3, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252888u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_25288c:
    // 0x25288c: 0x2c5b40  .word       0x002C5B40                   # sll         $t3, $t4, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25288cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 13));
label_252890:
    // 0x252890: 0x2c5b60  .word       0x002C5B60                   # add         $t3, $at, $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252890u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_252894:
    // 0x252894: 0x2c5b80  .word       0x002C5B80                   # sll         $t3, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252894u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 14));
label_252898:
    // 0x252898: 0x2c5ba0  .word       0x002C5BA0                   # add         $t3, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252898u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25289c:
    // 0x25289c: 0x2c5bc0  .word       0x002C5BC0                   # sll         $t3, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25289cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_2528a0:
    // 0x2528a0: 0x2c5be0  .word       0x002C5BE0                   # add         $t3, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528a0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2528a4:
    // 0x2528a4: 0x2c5c00  .word       0x002C5C00                   # sll         $t3, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_2528a8:
    // 0x2528a8: 0x2c5c20  .word       0x002C5C20                   # add         $t3, $at, $t4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2528ac:
    // 0x2528ac: 0x2c5c40  .word       0x002C5C40                   # sll         $t3, $t4, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 17));
label_2528b0:
    // 0x2528b0: 0x2c5c60  .word       0x002C5C60                   # add         $t3, $at, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528b0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2528b4:
    // 0x2528b4: 0x2c5ea0  .word       0x002C5EA0                   # add         $t3, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528b4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2528b8:
    // 0x2528b8: 0x2c5ca0  .word       0x002C5CA0                   # add         $t3, $at, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528b8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2528bc:
    // 0x2528bc: 0x2c5cc0  .word       0x002C5CC0                   # sll         $t3, $t4, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 19));
label_2528c0:
    // 0x2528c0: 0x2c5ce0  .word       0x002C5CE0                   # add         $t3, $at, $t4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528c0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2528c4:
    // 0x2528c4: 0x2c5d00  .word       0x002C5D00                   # sll         $t3, $t4, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 20));
label_2528c8:
    // 0x2528c8: 0x2c5ec0  .word       0x002C5EC0                   # sll         $t3, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528c8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 27));
label_2528cc:
    // 0x2528cc: 0x0  nop
    ctx->pc = 0x2528ccu;
    // NOP
label_2528d0:
    // 0x2528d0: 0x2c5ee0  .word       0x002C5EE0                   # add         $t3, $at, $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528d0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2528d4:
    // 0x2528d4: 0x2c5d50  .word       0x002C5D50                   # mfhi        $t3 # 002C0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528d4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2528d8:
    // 0x2528d8: 0x2c5d60  .word       0x002C5D60                   # add         $t3, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528d8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2528dc:
    // 0x2528dc: 0x2c5d70  tge         $at, $t4, 373
    ctx->pc = 0x2528dcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2528e0:
    // 0x2528e0: 0x2c5d80  .word       0x002C5D80                   # sll         $t3, $t4, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 22));
label_2528e4:
    // 0x2528e4: 0x2c5d90  .word       0x002C5D90                   # mfhi        $t3 # 002C0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528e4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2528e8:
    // 0x2528e8: 0x2c5e80  .word       0x002C5E80                   # sll         $t3, $t4, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 26));
label_2528ec:
    // 0x2528ec: 0x2c5d98  .word       0x002C5D98                   # mult        $t3, $at, $t4 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2528ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_2528f0:
    // 0x2528f0: 0x2c5da8  .word       0x002C5DA8                   # mfsa        $t3 # 002C0580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2528f0u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_2528f4:
    // 0x2528f4: 0x2c5db0  tge         $at, $t4, 374
    ctx->pc = 0x2528f4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2528f8:
    // 0x2528f8: 0x2c5dc0  .word       0x002C5DC0                   # sll         $t3, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 23));
label_2528fc:
    // 0x2528fc: 0x2c5dd0  .word       0x002C5DD0                   # mfhi        $t3 # 002C05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2528fcu;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_252900:
    // 0x252900: 0x2c5dd8  .word       0x002C5DD8                   # mult        $t3, $at, $t4 # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_252904:
    // 0x252904: 0x2c5de8  .word       0x002C5DE8                   # mfsa        $t3 # 002C05C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252904u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_252908:
    // 0x252908: 0x2c5df8  .word       0x002C5DF8                   # dsll        $t3, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252908u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 23);
label_25290c:
    // 0x25290c: 0x2c5e00  .word       0x002C5E00                   # sll         $t3, $t4, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25290cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_252910:
    // 0x252910: 0x2c5e08  .word       0x002C5E08                   # jr          $at # 000C5E00 <InstrIdType: CPU_SPECIAL>
label_252914:
    if (ctx->pc == 0x252914u) {
        ctx->pc = 0x252914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252910u;
        // 0x252914: 0x2c5ef8  .word       0x002C5EF8                   # dsll        $t3, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 27);
        ctx->in_delay_slot = false;
        ctx->pc = 0x252918u;
        goto label_252918;
    }
    ctx->pc = 0x252910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252910u;
        // 0x252914: 0x2c5ef8  .word       0x002C5EF8                   # dsll        $t3, $t4, 27 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 27);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252910u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252918u;
label_252918:
    // 0x252918: 0x2c5e18  .word       0x002C5E18                   # mult        $t3, $at, $t4 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_25291c:
    // 0x25291c: 0x2c5e30  tge         $at, $t4, 376
    ctx->pc = 0x25291cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252920:
    // 0x252920: 0x2c5e40  .word       0x002C5E40                   # sll         $t3, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252920u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_252924:
    // 0x252924: 0x2c5e50  .word       0x002C5E50                   # mfhi        $t3 # 002C0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252924u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_252928:
    // 0x252928: 0x2c5f10  .word       0x002C5F10                   # mfhi        $t3 # 002C0700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252928u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25292c:
    // 0x25292c: 0x0  nop
    ctx->pc = 0x25292cu;
    // NOP
label_252930:
    // 0x252930: 0x2c5f28  .word       0x002C5F28                   # mfsa        $t3 # 002C0700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252930u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_252934:
    // 0x252934: 0x2c5f38  .word       0x002C5F38                   # dsll        $t3, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252934u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 28);
label_252938:
    // 0x252938: 0x2c5f40  .word       0x002C5F40                   # sll         $t3, $t4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252938u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 29));
label_25293c:
    // 0x25293c: 0x2c5f50  .word       0x002C5F50                   # mfhi        $t3 # 002C0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25293cu;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_252940:
    // 0x252940: 0x2c5f60  .word       0x002C5F60                   # add         $t3, $at, $t4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252940u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_252944:
    // 0x252944: 0x2c5f70  tge         $at, $t4, 381
    ctx->pc = 0x252944u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252948:
    // 0x252948: 0x2c5f78  .word       0x002C5F78                   # dsll        $t3, $t4, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252948u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 29);
label_25294c:
    // 0x25294c: 0x2c5f80  .word       0x002C5F80                   # sll         $t3, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25294cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 30));
label_252950:
    // 0x252950: 0x2c5f88  .word       0x002C5F88                   # jr          $at # 000C5F80 <InstrIdType: CPU_SPECIAL>
label_252954:
    if (ctx->pc == 0x252954u) {
        ctx->pc = 0x252954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252950u;
        // 0x252954: 0x2c5f98  .word       0x002C5F98                   # mult        $t3, $at, $t4 # 00000780 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252958u;
        goto label_252958;
    }
    ctx->pc = 0x252950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252950u;
        // 0x252954: 0x2c5f98  .word       0x002C5F98                   # mult        $t3, $at, $t4 # 00000780 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252950u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252958u;
label_252958:
    // 0x252958: 0x2c5fa8  .word       0x002C5FA8                   # mfsa        $t3 # 002C0780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252958u;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_25295c:
    // 0x25295c: 0x2c5fb8  .word       0x002C5FB8                   # dsll        $t3, $t4, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25295cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 30);
label_252960:
    // 0x252960: 0x2c5fc0  .word       0x002C5FC0                   # sll         $t3, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252960u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 31));
label_252964:
    // 0x252964: 0x2c5fd0  .word       0x002C5FD0                   # mfhi        $t3 # 002C07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252964u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_252968:
    // 0x252968: 0x2c5fe0  .word       0x002C5FE0                   # add         $t3, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252968u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25296c:
    // 0x25296c: 0x2c5fe8  .word       0x002C5FE8                   # mfsa        $t3 # 002C07C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25296cu;
    SET_GPR_U32(ctx, 11, ctx->sa);
label_252970:
    // 0x252970: 0x2c5ff8  .word       0x002C5FF8                   # dsll        $t3, $t4, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252970u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 31);
label_252974:
    // 0x252974: 0x2c6008  .word       0x002C6008                   # jr          $at # 000C6000 <InstrIdType: CPU_SPECIAL>
label_252978:
    if (ctx->pc == 0x252978u) {
        ctx->pc = 0x252978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252974u;
        // 0x252978: 0x2c6018  mult        $t4, $at, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25297Cu;
        goto label_25297c;
    }
    ctx->pc = 0x252974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252974u;
        // 0x252978: 0x2c6018  mult        $t4, $at, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252974u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25297Cu;
label_25297c:
    // 0x25297c: 0x2c6028  .word       0x002C6028                   # mfsa        $t4 # 002C0000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25297cu;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252980:
    // 0x252980: 0x2c6030  tge         $at, $t4, 384
    ctx->pc = 0x252980u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252984:
    // 0x252984: 0x2c6040  .word       0x002C6040                   # sll         $t4, $t4, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252984u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_252988:
    // 0x252988: 0x2c6050  .word       0x002C6050                   # mfhi        $t4 # 002C0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252988u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25298c:
    // 0x25298c: 0x2c6060  .word       0x002C6060                   # add         $t4, $at, $t4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25298cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252990:
    // 0x252990: 0x2c6068  .word       0x002C6068                   # mfsa        $t4 # 002C0040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x252990u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_252994:
    // 0x252994: 0x2c6070  tge         $at, $t4, 385
    ctx->pc = 0x252994u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252998:
    // 0x252998: 0x2c6080  .word       0x002C6080                   # sll         $t4, $t4, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252998u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_25299c:
    // 0x25299c: 0x2c6090  .word       0x002C6090                   # mfhi        $t4 # 002C0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25299cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2529a0:
    // 0x2529a0: 0x2c60a0  .word       0x002C60A0                   # add         $t4, $at, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529a0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2529a4:
    // 0x2529a4: 0x2c60b0  tge         $at, $t4, 386
    ctx->pc = 0x2529a4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2529a8:
    // 0x2529a8: 0x2c60c0  .word       0x002C60C0                   # sll         $t4, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529a8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_2529ac:
    // 0x2529ac: 0x2c60c8  .word       0x002C60C8                   # jr          $at # 000C60C0 <InstrIdType: CPU_SPECIAL>
label_2529b0:
    if (ctx->pc == 0x2529B0u) {
        ctx->pc = 0x2529B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529ACu;
        // 0x2529b0: 0x2c60d8  .word       0x002C60D8                   # mult        $t4, $at, $t4 # 000000C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2529B4u;
        goto label_2529b4;
    }
    ctx->pc = 0x2529ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2529B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529ACu;
        // 0x2529b0: 0x2c60d8  .word       0x002C60D8                   # mult        $t4, $at, $t4 # 000000C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2529ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2529B4u;
label_2529b4:
    // 0x2529b4: 0x2c60e0  .word       0x002C60E0                   # add         $t4, $at, $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529b4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2529b8:
    // 0x2529b8: 0x2c60e8  .word       0x002C60E8                   # mfsa        $t4 # 002C00C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2529b8u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_2529bc:
    // 0x2529bc: 0x2c60f8  .word       0x002C60F8                   # dsll        $t4, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 3);
label_2529c0:
    // 0x2529c0: 0x2c6108  .word       0x002C6108                   # jr          $at # 000C6100 <InstrIdType: CPU_SPECIAL>
label_2529c4:
    if (ctx->pc == 0x2529C4u) {
        ctx->pc = 0x2529C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529C0u;
        // 0x2529c4: 0x2c6118  .word       0x002C6118                   # mult        $t4, $at, $t4 # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2529C8u;
        goto label_2529c8;
    }
    ctx->pc = 0x2529C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2529C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529C0u;
        // 0x2529c4: 0x2c6118  .word       0x002C6118                   # mult        $t4, $at, $t4 # 00000100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2529C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2529C8u;
label_2529c8:
    // 0x2529c8: 0x2c6120  .word       0x002C6120                   # add         $t4, $at, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529c8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2529cc:
    // 0x2529cc: 0x2c6130  tge         $at, $t4, 388
    ctx->pc = 0x2529ccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2529d0:
    // 0x2529d0: 0x2c6138  .word       0x002C6138                   # dsll        $t4, $t4, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 4);
label_2529d4:
    // 0x2529d4: 0x2c6140  .word       0x002C6140                   # sll         $t4, $t4, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529d4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_2529d8:
    // 0x2529d8: 0x2c6150  .word       0x002C6150                   # mfhi        $t4 # 002C0140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529d8u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2529dc:
    // 0x2529dc: 0x2c6160  .word       0x002C6160                   # add         $t4, $at, $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529dcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2529e0:
    // 0x2529e0: 0x2c6170  tge         $at, $t4, 389
    ctx->pc = 0x2529e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2529e4:
    // 0x2529e4: 0x2c6180  .word       0x002C6180                   # sll         $t4, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529e4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_2529e8:
    // 0x2529e8: 0x2c6188  .word       0x002C6188                   # jr          $at # 000C6180 <InstrIdType: CPU_SPECIAL>
label_2529ec:
    if (ctx->pc == 0x2529ECu) {
        ctx->pc = 0x2529ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529E8u;
        // 0x2529ec: 0x2c6190  .word       0x002C6190                   # mfhi        $t4 # 002C0180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2529F0u;
        goto label_2529f0;
    }
    ctx->pc = 0x2529E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2529ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529E8u;
        // 0x2529ec: 0x2c6190  .word       0x002C6190                   # mfhi        $t4 # 002C0180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2529E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2529F0u;
label_2529f0:
    // 0x2529f0: 0x2c6198  .word       0x002C6198                   # mult        $t4, $at, $t4 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2529f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2529f4:
    // 0x2529f4: 0x2c61a8  .word       0x002C61A8                   # mfsa        $t4 # 002C0180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2529f4u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_2529f8:
    // 0x2529f8: 0x2c61b8  .word       0x002C61B8                   # dsll        $t4, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2529f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 6);
label_2529fc:
    // 0x2529fc: 0x2c61c8  .word       0x002C61C8                   # jr          $at # 000C61C0 <InstrIdType: CPU_SPECIAL>
label_252a00:
    if (ctx->pc == 0x252A00u) {
        ctx->pc = 0x252A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529FCu;
        // 0x252a00: 0x2c61e0  .word       0x002C61E0                   # add         $t4, $at, $t4 # 000001C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x252A04u;
        goto label_252a04;
    }
    ctx->pc = 0x2529FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x252A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529FCu;
        // 0x252a00: 0x2c61e0  .word       0x002C61E0                   # add         $t4, $at, $t4 # 000001C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2529FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252A04u;
label_252a04:
    // 0x252a04: 0x2c61f0  tge         $at, $t4, 391
    ctx->pc = 0x252a04u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252a08:
    // 0x252a08: 0x2c6200  .word       0x002C6200                   # sll         $t4, $t4, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a08u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
label_252a0c:
    // 0x252a0c: 0x2c6210  .word       0x002C6210                   # mfhi        $t4 # 002C0200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a0cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_252a10:
    // 0x252a10: 0x2c6220  .word       0x002C6220                   # add         $t4, $at, $t4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a10u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_252a14:
    // 0x252a14: 0x2c6230  tge         $at, $t4, 392
    ctx->pc = 0x252a14u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_252a18:
    // 0x252a18: 0x2c6240  .word       0x002C6240                   # sll         $t4, $t4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a18u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 9));
label_252a1c:
    // 0x252a1c: 0x2c6250  .word       0x002C6250                   # mfhi        $t4 # 002C0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x252a1cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
    ctx->pc = 0x252a20u;
    return;
}

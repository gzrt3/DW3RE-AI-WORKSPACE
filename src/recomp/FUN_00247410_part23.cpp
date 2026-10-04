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

// Function: FUN_00247410
// Address: 0x247410 - 0x2874a4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_00247410_part23(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x251ff0u: goto label_251ff0;
        case 0x251ff4u: goto label_251ff4;
        case 0x251ff8u: goto label_251ff8;
        case 0x251ffcu: goto label_251ffc;
        case 0x252000u: goto label_252000;
        case 0x252004u: goto label_252004;
        case 0x252008u: goto label_252008;
        case 0x25200cu: goto label_25200c;
        case 0x252010u: goto label_252010;
        case 0x252014u: goto label_252014;
        case 0x252018u: goto label_252018;
        case 0x25201cu: goto label_25201c;
        case 0x252020u: goto label_252020;
        case 0x252024u: goto label_252024;
        case 0x252028u: goto label_252028;
        case 0x25202cu: goto label_25202c;
        case 0x252030u: goto label_252030;
        case 0x252034u: goto label_252034;
        case 0x252038u: goto label_252038;
        case 0x25203cu: goto label_25203c;
        case 0x252040u: goto label_252040;
        case 0x252044u: goto label_252044;
        case 0x252048u: goto label_252048;
        case 0x25204cu: goto label_25204c;
        case 0x252050u: goto label_252050;
        case 0x252054u: goto label_252054;
        case 0x252058u: goto label_252058;
        case 0x25205cu: goto label_25205c;
        case 0x252060u: goto label_252060;
        case 0x252064u: goto label_252064;
        case 0x252068u: goto label_252068;
        case 0x25206cu: goto label_25206c;
        case 0x252070u: goto label_252070;
        case 0x252074u: goto label_252074;
        case 0x252078u: goto label_252078;
        case 0x25207cu: goto label_25207c;
        case 0x252080u: goto label_252080;
        case 0x252084u: goto label_252084;
        case 0x252088u: goto label_252088;
        case 0x25208cu: goto label_25208c;
        case 0x252090u: goto label_252090;
        case 0x252094u: goto label_252094;
        case 0x252098u: goto label_252098;
        case 0x25209cu: goto label_25209c;
        case 0x2520a0u: goto label_2520a0;
        case 0x2520a4u: goto label_2520a4;
        case 0x2520a8u: goto label_2520a8;
        case 0x2520acu: goto label_2520ac;
        case 0x2520b0u: goto label_2520b0;
        case 0x2520b4u: goto label_2520b4;
        case 0x2520b8u: goto label_2520b8;
        case 0x2520bcu: goto label_2520bc;
        case 0x2520c0u: goto label_2520c0;
        case 0x2520c4u: goto label_2520c4;
        case 0x2520c8u: goto label_2520c8;
        case 0x2520ccu: goto label_2520cc;
        case 0x2520d0u: goto label_2520d0;
        case 0x2520d4u: goto label_2520d4;
        case 0x2520d8u: goto label_2520d8;
        case 0x2520dcu: goto label_2520dc;
        case 0x2520e0u: goto label_2520e0;
        case 0x2520e4u: goto label_2520e4;
        case 0x2520e8u: goto label_2520e8;
        case 0x2520ecu: goto label_2520ec;
        case 0x2520f0u: goto label_2520f0;
        case 0x2520f4u: goto label_2520f4;
        case 0x2520f8u: goto label_2520f8;
        case 0x2520fcu: goto label_2520fc;
        case 0x252100u: goto label_252100;
        case 0x252104u: goto label_252104;
        case 0x252108u: goto label_252108;
        case 0x25210cu: goto label_25210c;
        case 0x252110u: goto label_252110;
        case 0x252114u: goto label_252114;
        case 0x252118u: goto label_252118;
        case 0x25211cu: goto label_25211c;
        case 0x252120u: goto label_252120;
        case 0x252124u: goto label_252124;
        case 0x252128u: goto label_252128;
        case 0x25212cu: goto label_25212c;
        case 0x252130u: goto label_252130;
        case 0x252134u: goto label_252134;
        case 0x252138u: goto label_252138;
        case 0x25213cu: goto label_25213c;
        case 0x252140u: goto label_252140;
        case 0x252144u: goto label_252144;
        case 0x252148u: goto label_252148;
        case 0x25214cu: goto label_25214c;
        case 0x252150u: goto label_252150;
        case 0x252154u: goto label_252154;
        case 0x252158u: goto label_252158;
        case 0x25215cu: goto label_25215c;
        case 0x252160u: goto label_252160;
        case 0x252164u: goto label_252164;
        case 0x252168u: goto label_252168;
        case 0x25216cu: goto label_25216c;
        case 0x252170u: goto label_252170;
        case 0x252174u: goto label_252174;
        case 0x252178u: goto label_252178;
        case 0x25217cu: goto label_25217c;
        case 0x252180u: goto label_252180;
        case 0x252184u: goto label_252184;
        case 0x252188u: goto label_252188;
        case 0x25218cu: goto label_25218c;
        case 0x252190u: goto label_252190;
        case 0x252194u: goto label_252194;
        case 0x252198u: goto label_252198;
        case 0x25219cu: goto label_25219c;
        case 0x2521a0u: goto label_2521a0;
        case 0x2521a4u: goto label_2521a4;
        case 0x2521a8u: goto label_2521a8;
        case 0x2521acu: goto label_2521ac;
        case 0x2521b0u: goto label_2521b0;
        case 0x2521b4u: goto label_2521b4;
        case 0x2521b8u: goto label_2521b8;
        case 0x2521bcu: goto label_2521bc;
        case 0x2521c0u: goto label_2521c0;
        case 0x2521c4u: goto label_2521c4;
        case 0x2521c8u: goto label_2521c8;
        case 0x2521ccu: goto label_2521cc;
        case 0x2521d0u: goto label_2521d0;
        case 0x2521d4u: goto label_2521d4;
        case 0x2521d8u: goto label_2521d8;
        case 0x2521dcu: goto label_2521dc;
        case 0x2521e0u: goto label_2521e0;
        case 0x2521e4u: goto label_2521e4;
        case 0x2521e8u: goto label_2521e8;
        case 0x2521ecu: goto label_2521ec;
        case 0x2521f0u: goto label_2521f0;
        case 0x2521f4u: goto label_2521f4;
        case 0x2521f8u: goto label_2521f8;
        case 0x2521fcu: goto label_2521fc;
        case 0x252200u: goto label_252200;
        case 0x252204u: goto label_252204;
        case 0x252208u: goto label_252208;
        case 0x25220cu: goto label_25220c;
        case 0x252210u: goto label_252210;
        case 0x252214u: goto label_252214;
        case 0x252218u: goto label_252218;
        case 0x25221cu: goto label_25221c;
        case 0x252220u: goto label_252220;
        case 0x252224u: goto label_252224;
        case 0x252228u: goto label_252228;
        case 0x25222cu: goto label_25222c;
        case 0x252230u: goto label_252230;
        case 0x252234u: goto label_252234;
        case 0x252238u: goto label_252238;
        case 0x25223cu: goto label_25223c;
        case 0x252240u: goto label_252240;
        case 0x252244u: goto label_252244;
        case 0x252248u: goto label_252248;
        case 0x25224cu: goto label_25224c;
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
        default: return;
    }

label_251ff0:
    // 0x251ff0: 0x0  nop
    ctx->pc = 0x251ff0u;
    // NOP
label_251ff4:
    // 0x251ff4: 0x0  nop
    ctx->pc = 0x251ff4u;
    // NOP
label_251ff8:
    // 0x251ff8: 0x0  nop
    ctx->pc = 0x251ff8u;
    // NOP
label_251ffc:
    // 0x251ffc: 0x0  nop
    ctx->pc = 0x251ffcu;
    // NOP
label_252000:
    // 0x252000: 0x0  nop
    ctx->pc = 0x252000u;
    // NOP
label_252004:
    // 0x252004: 0x0  nop
    ctx->pc = 0x252004u;
    // NOP
label_252008:
    // 0x252008: 0x0  nop
    ctx->pc = 0x252008u;
    // NOP
label_25200c:
    // 0x25200c: 0x0  nop
    ctx->pc = 0x25200cu;
    // NOP
label_252010:
    // 0x252010: 0x5bb  dsra        $zero, $zero, 22
    ctx->pc = 0x252010u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 22);
label_252014:
    // 0x252014: 0x0  nop
    ctx->pc = 0x252014u;
    // NOP
label_252018:
    // 0x252018: 0x152d70  tge         $zero, $s5, 181
    ctx->pc = 0x252018u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_25201c:
    // 0x25201c: 0x0  nop
    ctx->pc = 0x25201cu;
    // NOP
label_252020:
    // 0x252020: 0x0  nop
    ctx->pc = 0x252020u;
    // NOP
label_252024:
    // 0x252024: 0x0  nop
    ctx->pc = 0x252024u;
    // NOP
label_252028:
    // 0x252028: 0x0  nop
    ctx->pc = 0x252028u;
    // NOP
label_25202c:
    // 0x25202c: 0x0  nop
    ctx->pc = 0x25202cu;
    // NOP
label_252030:
    // 0x252030: 0x0  nop
    ctx->pc = 0x252030u;
    // NOP
label_252034:
    // 0x252034: 0x0  nop
    ctx->pc = 0x252034u;
    // NOP
label_252038:
    // 0x252038: 0x0  nop
    ctx->pc = 0x252038u;
    // NOP
label_25203c:
    // 0x25203c: 0x0  nop
    ctx->pc = 0x25203cu;
    // NOP
label_252040:
    // 0x252040: 0x0  nop
    ctx->pc = 0x252040u;
    // NOP
label_252044:
    // 0x252044: 0x0  nop
    ctx->pc = 0x252044u;
    // NOP
label_252048:
    // 0x252048: 0x0  nop
    ctx->pc = 0x252048u;
    // NOP
label_25204c:
    // 0x25204c: 0x0  nop
    ctx->pc = 0x25204cu;
    // NOP
label_252050:
    // 0x252050: 0x0  nop
    ctx->pc = 0x252050u;
    // NOP
label_252054:
    // 0x252054: 0x0  nop
    ctx->pc = 0x252054u;
    // NOP
label_252058:
    // 0x252058: 0x0  nop
    ctx->pc = 0x252058u;
    // NOP
label_25205c:
    // 0x25205c: 0x0  nop
    ctx->pc = 0x25205cu;
    // NOP
label_252060:
    // 0x252060: 0x0  nop
    ctx->pc = 0x252060u;
    // NOP
label_252064:
    // 0x252064: 0x0  nop
    ctx->pc = 0x252064u;
    // NOP
label_252068:
    // 0x252068: 0x0  nop
    ctx->pc = 0x252068u;
    // NOP
label_25206c:
    // 0x25206c: 0x0  nop
    ctx->pc = 0x25206cu;
    // NOP
label_252070:
    // 0x252070: 0x0  nop
    ctx->pc = 0x252070u;
    // NOP
label_252074:
    // 0x252074: 0x0  nop
    ctx->pc = 0x252074u;
    // NOP
label_252078:
    // 0x252078: 0x0  nop
    ctx->pc = 0x252078u;
    // NOP
label_25207c:
    // 0x25207c: 0x0  nop
    ctx->pc = 0x25207cu;
    // NOP
label_252080:
    // 0x252080: 0x0  nop
    ctx->pc = 0x252080u;
    // NOP
label_252084:
    // 0x252084: 0x0  nop
    ctx->pc = 0x252084u;
    // NOP
label_252088:
    // 0x252088: 0x0  nop
    ctx->pc = 0x252088u;
    // NOP
label_25208c:
    // 0x25208c: 0x0  nop
    ctx->pc = 0x25208cu;
    // NOP
label_252090:
    // 0x252090: 0x0  nop
    ctx->pc = 0x252090u;
    // NOP
label_252094:
    // 0x252094: 0x0  nop
    ctx->pc = 0x252094u;
    // NOP
label_252098:
    // 0x252098: 0x0  nop
    ctx->pc = 0x252098u;
    // NOP
label_25209c:
    // 0x25209c: 0x0  nop
    ctx->pc = 0x25209cu;
    // NOP
label_2520a0:
    // 0x2520a0: 0x0  nop
    ctx->pc = 0x2520a0u;
    // NOP
label_2520a4:
    // 0x2520a4: 0x0  nop
    ctx->pc = 0x2520a4u;
    // NOP
label_2520a8:
    // 0x2520a8: 0x0  nop
    ctx->pc = 0x2520a8u;
    // NOP
label_2520ac:
    // 0x2520ac: 0x0  nop
    ctx->pc = 0x2520acu;
    // NOP
label_2520b0:
    // 0x2520b0: 0x0  nop
    ctx->pc = 0x2520b0u;
    // NOP
label_2520b4:
    // 0x2520b4: 0x0  nop
    ctx->pc = 0x2520b4u;
    // NOP
label_2520b8:
    // 0x2520b8: 0x0  nop
    ctx->pc = 0x2520b8u;
    // NOP
label_2520bc:
    // 0x2520bc: 0x0  nop
    ctx->pc = 0x2520bcu;
    // NOP
label_2520c0:
    // 0x2520c0: 0x0  nop
    ctx->pc = 0x2520c0u;
    // NOP
label_2520c4:
    // 0x2520c4: 0x0  nop
    ctx->pc = 0x2520c4u;
    // NOP
label_2520c8:
    // 0x2520c8: 0x0  nop
    ctx->pc = 0x2520c8u;
    // NOP
label_2520cc:
    // 0x2520cc: 0x0  nop
    ctx->pc = 0x2520ccu;
    // NOP
label_2520d0:
    // 0x2520d0: 0x0  nop
    ctx->pc = 0x2520d0u;
    // NOP
label_2520d4:
    // 0x2520d4: 0x0  nop
    ctx->pc = 0x2520d4u;
    // NOP
label_2520d8:
    // 0x2520d8: 0x0  nop
    ctx->pc = 0x2520d8u;
    // NOP
label_2520dc:
    // 0x2520dc: 0x0  nop
    ctx->pc = 0x2520dcu;
    // NOP
label_2520e0:
    // 0x2520e0: 0x0  nop
    ctx->pc = 0x2520e0u;
    // NOP
label_2520e4:
    // 0x2520e4: 0x0  nop
    ctx->pc = 0x2520e4u;
    // NOP
label_2520e8:
    // 0x2520e8: 0x5bc  dsll32      $zero, $zero, 22
    ctx->pc = 0x2520e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 22));
label_2520ec:
    // 0x2520ec: 0x0  nop
    ctx->pc = 0x2520ecu;
    // NOP
label_2520f0:
    // 0x2520f0: 0x152c70  tge         $zero, $s5, 177
    ctx->pc = 0x2520f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2520f4:
    // 0x2520f4: 0x0  nop
    ctx->pc = 0x2520f4u;
    // NOP
label_2520f8:
    // 0x2520f8: 0x0  nop
    ctx->pc = 0x2520f8u;
    // NOP
label_2520fc:
    // 0x2520fc: 0x0  nop
    ctx->pc = 0x2520fcu;
    // NOP
label_252100:
    // 0x252100: 0x0  nop
    ctx->pc = 0x252100u;
    // NOP
label_252104:
    // 0x252104: 0x0  nop
    ctx->pc = 0x252104u;
    // NOP
label_252108:
    // 0x252108: 0x0  nop
    ctx->pc = 0x252108u;
    // NOP
label_25210c:
    // 0x25210c: 0x0  nop
    ctx->pc = 0x25210cu;
    // NOP
label_252110:
    // 0x252110: 0x0  nop
    ctx->pc = 0x252110u;
    // NOP
label_252114:
    // 0x252114: 0x0  nop
    ctx->pc = 0x252114u;
    // NOP
label_252118:
    // 0x252118: 0x0  nop
    ctx->pc = 0x252118u;
    // NOP
label_25211c:
    // 0x25211c: 0x0  nop
    ctx->pc = 0x25211cu;
    // NOP
label_252120:
    // 0x252120: 0x0  nop
    ctx->pc = 0x252120u;
    // NOP
label_252124:
    // 0x252124: 0x0  nop
    ctx->pc = 0x252124u;
    // NOP
label_252128:
    // 0x252128: 0x0  nop
    ctx->pc = 0x252128u;
    // NOP
label_25212c:
    // 0x25212c: 0x0  nop
    ctx->pc = 0x25212cu;
    // NOP
label_252130:
    // 0x252130: 0x0  nop
    ctx->pc = 0x252130u;
    // NOP
label_252134:
    // 0x252134: 0x0  nop
    ctx->pc = 0x252134u;
    // NOP
label_252138:
    // 0x252138: 0x0  nop
    ctx->pc = 0x252138u;
    // NOP
label_25213c:
    // 0x25213c: 0x0  nop
    ctx->pc = 0x25213cu;
    // NOP
label_252140:
    // 0x252140: 0x0  nop
    ctx->pc = 0x252140u;
    // NOP
label_252144:
    // 0x252144: 0x0  nop
    ctx->pc = 0x252144u;
    // NOP
label_252148:
    // 0x252148: 0x0  nop
    ctx->pc = 0x252148u;
    // NOP
label_25214c:
    // 0x25214c: 0x0  nop
    ctx->pc = 0x25214cu;
    // NOP
label_252150:
    // 0x252150: 0x0  nop
    ctx->pc = 0x252150u;
    // NOP
label_252154:
    // 0x252154: 0x0  nop
    ctx->pc = 0x252154u;
    // NOP
label_252158:
    // 0x252158: 0x0  nop
    ctx->pc = 0x252158u;
    // NOP
label_25215c:
    // 0x25215c: 0x0  nop
    ctx->pc = 0x25215cu;
    // NOP
label_252160:
    // 0x252160: 0x0  nop
    ctx->pc = 0x252160u;
    // NOP
label_252164:
    // 0x252164: 0x0  nop
    ctx->pc = 0x252164u;
    // NOP
label_252168:
    // 0x252168: 0x0  nop
    ctx->pc = 0x252168u;
    // NOP
label_25216c:
    // 0x25216c: 0x0  nop
    ctx->pc = 0x25216cu;
    // NOP
label_252170:
    // 0x252170: 0x0  nop
    ctx->pc = 0x252170u;
    // NOP
label_252174:
    // 0x252174: 0x0  nop
    ctx->pc = 0x252174u;
    // NOP
label_252178:
    // 0x252178: 0x0  nop
    ctx->pc = 0x252178u;
    // NOP
label_25217c:
    // 0x25217c: 0x0  nop
    ctx->pc = 0x25217cu;
    // NOP
label_252180:
    // 0x252180: 0x0  nop
    ctx->pc = 0x252180u;
    // NOP
label_252184:
    // 0x252184: 0x0  nop
    ctx->pc = 0x252184u;
    // NOP
label_252188:
    // 0x252188: 0x0  nop
    ctx->pc = 0x252188u;
    // NOP
label_25218c:
    // 0x25218c: 0x0  nop
    ctx->pc = 0x25218cu;
    // NOP
label_252190:
    // 0x252190: 0x0  nop
    ctx->pc = 0x252190u;
    // NOP
label_252194:
    // 0x252194: 0x0  nop
    ctx->pc = 0x252194u;
    // NOP
label_252198:
    // 0x252198: 0x0  nop
    ctx->pc = 0x252198u;
    // NOP
label_25219c:
    // 0x25219c: 0x0  nop
    ctx->pc = 0x25219cu;
    // NOP
label_2521a0:
    // 0x2521a0: 0x0  nop
    ctx->pc = 0x2521a0u;
    // NOP
label_2521a4:
    // 0x2521a4: 0x0  nop
    ctx->pc = 0x2521a4u;
    // NOP
label_2521a8:
    // 0x2521a8: 0x0  nop
    ctx->pc = 0x2521a8u;
    // NOP
label_2521ac:
    // 0x2521ac: 0x0  nop
    ctx->pc = 0x2521acu;
    // NOP
label_2521b0:
    // 0x2521b0: 0x0  nop
    ctx->pc = 0x2521b0u;
    // NOP
label_2521b4:
    // 0x2521b4: 0x0  nop
    ctx->pc = 0x2521b4u;
    // NOP
label_2521b8:
    // 0x2521b8: 0x0  nop
    ctx->pc = 0x2521b8u;
    // NOP
label_2521bc:
    // 0x2521bc: 0x0  nop
    ctx->pc = 0x2521bcu;
    // NOP
label_2521c0:
    // 0x2521c0: 0x5bd  .word       0x000005BD                   # INVALID     $zero, $zero, 0x5BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2521c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2521C0 raw=0x000005BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2521c4:
    // 0x2521c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2521c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2521C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2521c8:
    // 0x2521c8: 0x152c70  tge         $zero, $s5, 177
    ctx->pc = 0x2521c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_2521cc:
    // 0x2521cc: 0x0  nop
    ctx->pc = 0x2521ccu;
    // NOP
label_2521d0:
    // 0x2521d0: 0x0  nop
    ctx->pc = 0x2521d0u;
    // NOP
label_2521d4:
    // 0x2521d4: 0x0  nop
    ctx->pc = 0x2521d4u;
    // NOP
label_2521d8:
    // 0x2521d8: 0x0  nop
    ctx->pc = 0x2521d8u;
    // NOP
label_2521dc:
    // 0x2521dc: 0x0  nop
    ctx->pc = 0x2521dcu;
    // NOP
label_2521e0:
    // 0x2521e0: 0x0  nop
    ctx->pc = 0x2521e0u;
    // NOP
label_2521e4:
    // 0x2521e4: 0x0  nop
    ctx->pc = 0x2521e4u;
    // NOP
label_2521e8:
    // 0x2521e8: 0x0  nop
    ctx->pc = 0x2521e8u;
    // NOP
label_2521ec:
    // 0x2521ec: 0x0  nop
    ctx->pc = 0x2521ecu;
    // NOP
label_2521f0:
    // 0x2521f0: 0x0  nop
    ctx->pc = 0x2521f0u;
    // NOP
label_2521f4:
    // 0x2521f4: 0x0  nop
    ctx->pc = 0x2521f4u;
    // NOP
label_2521f8:
    // 0x2521f8: 0x0  nop
    ctx->pc = 0x2521f8u;
    // NOP
label_2521fc:
    // 0x2521fc: 0x0  nop
    ctx->pc = 0x2521fcu;
    // NOP
label_252200:
    // 0x252200: 0x0  nop
    ctx->pc = 0x252200u;
    // NOP
label_252204:
    // 0x252204: 0x0  nop
    ctx->pc = 0x252204u;
    // NOP
label_252208:
    // 0x252208: 0x0  nop
    ctx->pc = 0x252208u;
    // NOP
label_25220c:
    // 0x25220c: 0x0  nop
    ctx->pc = 0x25220cu;
    // NOP
label_252210:
    // 0x252210: 0x0  nop
    ctx->pc = 0x252210u;
    // NOP
label_252214:
    // 0x252214: 0x0  nop
    ctx->pc = 0x252214u;
    // NOP
label_252218:
    // 0x252218: 0x0  nop
    ctx->pc = 0x252218u;
    // NOP
label_25221c:
    // 0x25221c: 0x0  nop
    ctx->pc = 0x25221cu;
    // NOP
label_252220:
    // 0x252220: 0x0  nop
    ctx->pc = 0x252220u;
    // NOP
label_252224:
    // 0x252224: 0x0  nop
    ctx->pc = 0x252224u;
    // NOP
label_252228:
    // 0x252228: 0x0  nop
    ctx->pc = 0x252228u;
    // NOP
label_25222c:
    // 0x25222c: 0x0  nop
    ctx->pc = 0x25222cu;
    // NOP
label_252230:
    // 0x252230: 0x0  nop
    ctx->pc = 0x252230u;
    // NOP
label_252234:
    // 0x252234: 0x0  nop
    ctx->pc = 0x252234u;
    // NOP
label_252238:
    // 0x252238: 0x0  nop
    ctx->pc = 0x252238u;
    // NOP
label_25223c:
    // 0x25223c: 0x0  nop
    ctx->pc = 0x25223cu;
    // NOP
label_252240:
    // 0x252240: 0x0  nop
    ctx->pc = 0x252240u;
    // NOP
label_252244:
    // 0x252244: 0x0  nop
    ctx->pc = 0x252244u;
    // NOP
label_252248:
    // 0x252248: 0x0  nop
    ctx->pc = 0x252248u;
    // NOP
label_25224c:
    // 0x25224c: 0x0  nop
    ctx->pc = 0x25224cu;
    // NOP
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
    ctx->pc = 0x2527c0u;
    return;
}

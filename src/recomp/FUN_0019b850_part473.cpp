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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part473(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x281fd0u: goto label_281fd0;
        case 0x281fd4u: goto label_281fd4;
        case 0x281fd8u: goto label_281fd8;
        case 0x281fdcu: goto label_281fdc;
        case 0x281fe0u: goto label_281fe0;
        case 0x281fe4u: goto label_281fe4;
        case 0x281fe8u: goto label_281fe8;
        case 0x281fecu: goto label_281fec;
        case 0x281ff0u: goto label_281ff0;
        case 0x281ff4u: goto label_281ff4;
        case 0x281ff8u: goto label_281ff8;
        case 0x281ffcu: goto label_281ffc;
        case 0x282000u: goto label_282000;
        case 0x282004u: goto label_282004;
        case 0x282008u: goto label_282008;
        case 0x28200cu: goto label_28200c;
        case 0x282010u: goto label_282010;
        case 0x282014u: goto label_282014;
        case 0x282018u: goto label_282018;
        case 0x28201cu: goto label_28201c;
        case 0x282020u: goto label_282020;
        case 0x282024u: goto label_282024;
        case 0x282028u: goto label_282028;
        case 0x28202cu: goto label_28202c;
        case 0x282030u: goto label_282030;
        case 0x282034u: goto label_282034;
        case 0x282038u: goto label_282038;
        case 0x28203cu: goto label_28203c;
        case 0x282040u: goto label_282040;
        case 0x282044u: goto label_282044;
        case 0x282048u: goto label_282048;
        case 0x28204cu: goto label_28204c;
        case 0x282050u: goto label_282050;
        case 0x282054u: goto label_282054;
        case 0x282058u: goto label_282058;
        case 0x28205cu: goto label_28205c;
        case 0x282060u: goto label_282060;
        case 0x282064u: goto label_282064;
        case 0x282068u: goto label_282068;
        case 0x28206cu: goto label_28206c;
        case 0x282070u: goto label_282070;
        case 0x282074u: goto label_282074;
        case 0x282078u: goto label_282078;
        case 0x28207cu: goto label_28207c;
        case 0x282080u: goto label_282080;
        case 0x282084u: goto label_282084;
        case 0x282088u: goto label_282088;
        case 0x28208cu: goto label_28208c;
        case 0x282090u: goto label_282090;
        case 0x282094u: goto label_282094;
        case 0x282098u: goto label_282098;
        case 0x28209cu: goto label_28209c;
        case 0x2820a0u: goto label_2820a0;
        case 0x2820a4u: goto label_2820a4;
        case 0x2820a8u: goto label_2820a8;
        case 0x2820acu: goto label_2820ac;
        case 0x2820b0u: goto label_2820b0;
        case 0x2820b4u: goto label_2820b4;
        case 0x2820b8u: goto label_2820b8;
        case 0x2820bcu: goto label_2820bc;
        case 0x2820c0u: goto label_2820c0;
        case 0x2820c4u: goto label_2820c4;
        case 0x2820c8u: goto label_2820c8;
        case 0x2820ccu: goto label_2820cc;
        case 0x2820d0u: goto label_2820d0;
        case 0x2820d4u: goto label_2820d4;
        case 0x2820d8u: goto label_2820d8;
        case 0x2820dcu: goto label_2820dc;
        case 0x2820e0u: goto label_2820e0;
        case 0x2820e4u: goto label_2820e4;
        case 0x2820e8u: goto label_2820e8;
        case 0x2820ecu: goto label_2820ec;
        case 0x2820f0u: goto label_2820f0;
        case 0x2820f4u: goto label_2820f4;
        case 0x2820f8u: goto label_2820f8;
        case 0x2820fcu: goto label_2820fc;
        case 0x282100u: goto label_282100;
        case 0x282104u: goto label_282104;
        case 0x282108u: goto label_282108;
        case 0x28210cu: goto label_28210c;
        case 0x282110u: goto label_282110;
        case 0x282114u: goto label_282114;
        case 0x282118u: goto label_282118;
        case 0x28211cu: goto label_28211c;
        case 0x282120u: goto label_282120;
        case 0x282124u: goto label_282124;
        case 0x282128u: goto label_282128;
        case 0x28212cu: goto label_28212c;
        case 0x282130u: goto label_282130;
        case 0x282134u: goto label_282134;
        case 0x282138u: goto label_282138;
        case 0x28213cu: goto label_28213c;
        case 0x282140u: goto label_282140;
        case 0x282144u: goto label_282144;
        case 0x282148u: goto label_282148;
        case 0x28214cu: goto label_28214c;
        case 0x282150u: goto label_282150;
        case 0x282154u: goto label_282154;
        case 0x282158u: goto label_282158;
        case 0x28215cu: goto label_28215c;
        case 0x282160u: goto label_282160;
        case 0x282164u: goto label_282164;
        case 0x282168u: goto label_282168;
        case 0x28216cu: goto label_28216c;
        case 0x282170u: goto label_282170;
        case 0x282174u: goto label_282174;
        case 0x282178u: goto label_282178;
        case 0x28217cu: goto label_28217c;
        case 0x282180u: goto label_282180;
        case 0x282184u: goto label_282184;
        case 0x282188u: goto label_282188;
        case 0x28218cu: goto label_28218c;
        case 0x282190u: goto label_282190;
        case 0x282194u: goto label_282194;
        case 0x282198u: goto label_282198;
        case 0x28219cu: goto label_28219c;
        case 0x2821a0u: goto label_2821a0;
        case 0x2821a4u: goto label_2821a4;
        case 0x2821a8u: goto label_2821a8;
        case 0x2821acu: goto label_2821ac;
        case 0x2821b0u: goto label_2821b0;
        case 0x2821b4u: goto label_2821b4;
        case 0x2821b8u: goto label_2821b8;
        case 0x2821bcu: goto label_2821bc;
        case 0x2821c0u: goto label_2821c0;
        case 0x2821c4u: goto label_2821c4;
        case 0x2821c8u: goto label_2821c8;
        case 0x2821ccu: goto label_2821cc;
        case 0x2821d0u: goto label_2821d0;
        case 0x2821d4u: goto label_2821d4;
        case 0x2821d8u: goto label_2821d8;
        case 0x2821dcu: goto label_2821dc;
        case 0x2821e0u: goto label_2821e0;
        case 0x2821e4u: goto label_2821e4;
        case 0x2821e8u: goto label_2821e8;
        case 0x2821ecu: goto label_2821ec;
        case 0x2821f0u: goto label_2821f0;
        case 0x2821f4u: goto label_2821f4;
        case 0x2821f8u: goto label_2821f8;
        case 0x2821fcu: goto label_2821fc;
        case 0x282200u: goto label_282200;
        case 0x282204u: goto label_282204;
        case 0x282208u: goto label_282208;
        case 0x28220cu: goto label_28220c;
        case 0x282210u: goto label_282210;
        case 0x282214u: goto label_282214;
        case 0x282218u: goto label_282218;
        case 0x28221cu: goto label_28221c;
        case 0x282220u: goto label_282220;
        case 0x282224u: goto label_282224;
        case 0x282228u: goto label_282228;
        case 0x28222cu: goto label_28222c;
        case 0x282230u: goto label_282230;
        case 0x282234u: goto label_282234;
        case 0x282238u: goto label_282238;
        case 0x28223cu: goto label_28223c;
        case 0x282240u: goto label_282240;
        case 0x282244u: goto label_282244;
        case 0x282248u: goto label_282248;
        case 0x28224cu: goto label_28224c;
        case 0x282250u: goto label_282250;
        case 0x282254u: goto label_282254;
        case 0x282258u: goto label_282258;
        case 0x28225cu: goto label_28225c;
        case 0x282260u: goto label_282260;
        case 0x282264u: goto label_282264;
        case 0x282268u: goto label_282268;
        case 0x28226cu: goto label_28226c;
        case 0x282270u: goto label_282270;
        case 0x282274u: goto label_282274;
        case 0x282278u: goto label_282278;
        case 0x28227cu: goto label_28227c;
        case 0x282280u: goto label_282280;
        case 0x282284u: goto label_282284;
        case 0x282288u: goto label_282288;
        case 0x28228cu: goto label_28228c;
        case 0x282290u: goto label_282290;
        case 0x282294u: goto label_282294;
        case 0x282298u: goto label_282298;
        case 0x28229cu: goto label_28229c;
        case 0x2822a0u: goto label_2822a0;
        case 0x2822a4u: goto label_2822a4;
        case 0x2822a8u: goto label_2822a8;
        case 0x2822acu: goto label_2822ac;
        case 0x2822b0u: goto label_2822b0;
        case 0x2822b4u: goto label_2822b4;
        case 0x2822b8u: goto label_2822b8;
        case 0x2822bcu: goto label_2822bc;
        case 0x2822c0u: goto label_2822c0;
        case 0x2822c4u: goto label_2822c4;
        case 0x2822c8u: goto label_2822c8;
        case 0x2822ccu: goto label_2822cc;
        case 0x2822d0u: goto label_2822d0;
        case 0x2822d4u: goto label_2822d4;
        case 0x2822d8u: goto label_2822d8;
        case 0x2822dcu: goto label_2822dc;
        case 0x2822e0u: goto label_2822e0;
        case 0x2822e4u: goto label_2822e4;
        case 0x2822e8u: goto label_2822e8;
        case 0x2822ecu: goto label_2822ec;
        case 0x2822f0u: goto label_2822f0;
        case 0x2822f4u: goto label_2822f4;
        case 0x2822f8u: goto label_2822f8;
        case 0x2822fcu: goto label_2822fc;
        case 0x282300u: goto label_282300;
        case 0x282304u: goto label_282304;
        case 0x282308u: goto label_282308;
        case 0x28230cu: goto label_28230c;
        case 0x282310u: goto label_282310;
        case 0x282314u: goto label_282314;
        case 0x282318u: goto label_282318;
        case 0x28231cu: goto label_28231c;
        case 0x282320u: goto label_282320;
        case 0x282324u: goto label_282324;
        case 0x282328u: goto label_282328;
        case 0x28232cu: goto label_28232c;
        case 0x282330u: goto label_282330;
        case 0x282334u: goto label_282334;
        case 0x282338u: goto label_282338;
        case 0x28233cu: goto label_28233c;
        case 0x282340u: goto label_282340;
        case 0x282344u: goto label_282344;
        case 0x282348u: goto label_282348;
        case 0x28234cu: goto label_28234c;
        case 0x282350u: goto label_282350;
        case 0x282354u: goto label_282354;
        case 0x282358u: goto label_282358;
        case 0x28235cu: goto label_28235c;
        case 0x282360u: goto label_282360;
        case 0x282364u: goto label_282364;
        case 0x282368u: goto label_282368;
        case 0x28236cu: goto label_28236c;
        case 0x282370u: goto label_282370;
        case 0x282374u: goto label_282374;
        case 0x282378u: goto label_282378;
        case 0x28237cu: goto label_28237c;
        case 0x282380u: goto label_282380;
        case 0x282384u: goto label_282384;
        case 0x282388u: goto label_282388;
        case 0x28238cu: goto label_28238c;
        case 0x282390u: goto label_282390;
        case 0x282394u: goto label_282394;
        case 0x282398u: goto label_282398;
        case 0x28239cu: goto label_28239c;
        case 0x2823a0u: goto label_2823a0;
        case 0x2823a4u: goto label_2823a4;
        case 0x2823a8u: goto label_2823a8;
        case 0x2823acu: goto label_2823ac;
        case 0x2823b0u: goto label_2823b0;
        case 0x2823b4u: goto label_2823b4;
        case 0x2823b8u: goto label_2823b8;
        case 0x2823bcu: goto label_2823bc;
        case 0x2823c0u: goto label_2823c0;
        case 0x2823c4u: goto label_2823c4;
        case 0x2823c8u: goto label_2823c8;
        case 0x2823ccu: goto label_2823cc;
        case 0x2823d0u: goto label_2823d0;
        case 0x2823d4u: goto label_2823d4;
        case 0x2823d8u: goto label_2823d8;
        case 0x2823dcu: goto label_2823dc;
        case 0x2823e0u: goto label_2823e0;
        case 0x2823e4u: goto label_2823e4;
        case 0x2823e8u: goto label_2823e8;
        case 0x2823ecu: goto label_2823ec;
        case 0x2823f0u: goto label_2823f0;
        case 0x2823f4u: goto label_2823f4;
        case 0x2823f8u: goto label_2823f8;
        case 0x2823fcu: goto label_2823fc;
        case 0x282400u: goto label_282400;
        case 0x282404u: goto label_282404;
        case 0x282408u: goto label_282408;
        case 0x28240cu: goto label_28240c;
        case 0x282410u: goto label_282410;
        case 0x282414u: goto label_282414;
        case 0x282418u: goto label_282418;
        case 0x28241cu: goto label_28241c;
        case 0x282420u: goto label_282420;
        case 0x282424u: goto label_282424;
        case 0x282428u: goto label_282428;
        case 0x28242cu: goto label_28242c;
        case 0x282430u: goto label_282430;
        case 0x282434u: goto label_282434;
        case 0x282438u: goto label_282438;
        case 0x28243cu: goto label_28243c;
        case 0x282440u: goto label_282440;
        case 0x282444u: goto label_282444;
        case 0x282448u: goto label_282448;
        case 0x28244cu: goto label_28244c;
        case 0x282450u: goto label_282450;
        case 0x282454u: goto label_282454;
        case 0x282458u: goto label_282458;
        case 0x28245cu: goto label_28245c;
        case 0x282460u: goto label_282460;
        case 0x282464u: goto label_282464;
        case 0x282468u: goto label_282468;
        case 0x28246cu: goto label_28246c;
        case 0x282470u: goto label_282470;
        case 0x282474u: goto label_282474;
        case 0x282478u: goto label_282478;
        case 0x28247cu: goto label_28247c;
        case 0x282480u: goto label_282480;
        case 0x282484u: goto label_282484;
        case 0x282488u: goto label_282488;
        case 0x28248cu: goto label_28248c;
        case 0x282490u: goto label_282490;
        case 0x282494u: goto label_282494;
        case 0x282498u: goto label_282498;
        case 0x28249cu: goto label_28249c;
        case 0x2824a0u: goto label_2824a0;
        case 0x2824a4u: goto label_2824a4;
        case 0x2824a8u: goto label_2824a8;
        case 0x2824acu: goto label_2824ac;
        case 0x2824b0u: goto label_2824b0;
        case 0x2824b4u: goto label_2824b4;
        case 0x2824b8u: goto label_2824b8;
        case 0x2824bcu: goto label_2824bc;
        case 0x2824c0u: goto label_2824c0;
        case 0x2824c4u: goto label_2824c4;
        case 0x2824c8u: goto label_2824c8;
        case 0x2824ccu: goto label_2824cc;
        case 0x2824d0u: goto label_2824d0;
        case 0x2824d4u: goto label_2824d4;
        case 0x2824d8u: goto label_2824d8;
        case 0x2824dcu: goto label_2824dc;
        case 0x2824e0u: goto label_2824e0;
        case 0x2824e4u: goto label_2824e4;
        case 0x2824e8u: goto label_2824e8;
        case 0x2824ecu: goto label_2824ec;
        case 0x2824f0u: goto label_2824f0;
        case 0x2824f4u: goto label_2824f4;
        case 0x2824f8u: goto label_2824f8;
        case 0x2824fcu: goto label_2824fc;
        case 0x282500u: goto label_282500;
        case 0x282504u: goto label_282504;
        case 0x282508u: goto label_282508;
        case 0x28250cu: goto label_28250c;
        case 0x282510u: goto label_282510;
        case 0x282514u: goto label_282514;
        case 0x282518u: goto label_282518;
        case 0x28251cu: goto label_28251c;
        case 0x282520u: goto label_282520;
        case 0x282524u: goto label_282524;
        case 0x282528u: goto label_282528;
        case 0x28252cu: goto label_28252c;
        case 0x282530u: goto label_282530;
        case 0x282534u: goto label_282534;
        case 0x282538u: goto label_282538;
        case 0x28253cu: goto label_28253c;
        case 0x282540u: goto label_282540;
        case 0x282544u: goto label_282544;
        case 0x282548u: goto label_282548;
        case 0x28254cu: goto label_28254c;
        case 0x282550u: goto label_282550;
        case 0x282554u: goto label_282554;
        case 0x282558u: goto label_282558;
        case 0x28255cu: goto label_28255c;
        case 0x282560u: goto label_282560;
        case 0x282564u: goto label_282564;
        case 0x282568u: goto label_282568;
        case 0x28256cu: goto label_28256c;
        case 0x282570u: goto label_282570;
        case 0x282574u: goto label_282574;
        case 0x282578u: goto label_282578;
        case 0x28257cu: goto label_28257c;
        case 0x282580u: goto label_282580;
        case 0x282584u: goto label_282584;
        case 0x282588u: goto label_282588;
        case 0x28258cu: goto label_28258c;
        case 0x282590u: goto label_282590;
        case 0x282594u: goto label_282594;
        case 0x282598u: goto label_282598;
        case 0x28259cu: goto label_28259c;
        case 0x2825a0u: goto label_2825a0;
        case 0x2825a4u: goto label_2825a4;
        case 0x2825a8u: goto label_2825a8;
        case 0x2825acu: goto label_2825ac;
        case 0x2825b0u: goto label_2825b0;
        case 0x2825b4u: goto label_2825b4;
        case 0x2825b8u: goto label_2825b8;
        case 0x2825bcu: goto label_2825bc;
        case 0x2825c0u: goto label_2825c0;
        case 0x2825c4u: goto label_2825c4;
        case 0x2825c8u: goto label_2825c8;
        case 0x2825ccu: goto label_2825cc;
        case 0x2825d0u: goto label_2825d0;
        case 0x2825d4u: goto label_2825d4;
        case 0x2825d8u: goto label_2825d8;
        case 0x2825dcu: goto label_2825dc;
        case 0x2825e0u: goto label_2825e0;
        case 0x2825e4u: goto label_2825e4;
        case 0x2825e8u: goto label_2825e8;
        case 0x2825ecu: goto label_2825ec;
        case 0x2825f0u: goto label_2825f0;
        case 0x2825f4u: goto label_2825f4;
        case 0x2825f8u: goto label_2825f8;
        case 0x2825fcu: goto label_2825fc;
        case 0x282600u: goto label_282600;
        case 0x282604u: goto label_282604;
        case 0x282608u: goto label_282608;
        case 0x28260cu: goto label_28260c;
        case 0x282610u: goto label_282610;
        case 0x282614u: goto label_282614;
        case 0x282618u: goto label_282618;
        case 0x28261cu: goto label_28261c;
        case 0x282620u: goto label_282620;
        case 0x282624u: goto label_282624;
        case 0x282628u: goto label_282628;
        case 0x28262cu: goto label_28262c;
        case 0x282630u: goto label_282630;
        case 0x282634u: goto label_282634;
        case 0x282638u: goto label_282638;
        case 0x28263cu: goto label_28263c;
        case 0x282640u: goto label_282640;
        case 0x282644u: goto label_282644;
        case 0x282648u: goto label_282648;
        case 0x28264cu: goto label_28264c;
        case 0x282650u: goto label_282650;
        case 0x282654u: goto label_282654;
        case 0x282658u: goto label_282658;
        case 0x28265cu: goto label_28265c;
        case 0x282660u: goto label_282660;
        case 0x282664u: goto label_282664;
        case 0x282668u: goto label_282668;
        case 0x28266cu: goto label_28266c;
        case 0x282670u: goto label_282670;
        case 0x282674u: goto label_282674;
        case 0x282678u: goto label_282678;
        case 0x28267cu: goto label_28267c;
        case 0x282680u: goto label_282680;
        case 0x282684u: goto label_282684;
        case 0x282688u: goto label_282688;
        case 0x28268cu: goto label_28268c;
        case 0x282690u: goto label_282690;
        case 0x282694u: goto label_282694;
        case 0x282698u: goto label_282698;
        case 0x28269cu: goto label_28269c;
        case 0x2826a0u: goto label_2826a0;
        case 0x2826a4u: goto label_2826a4;
        case 0x2826a8u: goto label_2826a8;
        case 0x2826acu: goto label_2826ac;
        case 0x2826b0u: goto label_2826b0;
        case 0x2826b4u: goto label_2826b4;
        case 0x2826b8u: goto label_2826b8;
        case 0x2826bcu: goto label_2826bc;
        case 0x2826c0u: goto label_2826c0;
        case 0x2826c4u: goto label_2826c4;
        case 0x2826c8u: goto label_2826c8;
        case 0x2826ccu: goto label_2826cc;
        case 0x2826d0u: goto label_2826d0;
        case 0x2826d4u: goto label_2826d4;
        case 0x2826d8u: goto label_2826d8;
        case 0x2826dcu: goto label_2826dc;
        case 0x2826e0u: goto label_2826e0;
        case 0x2826e4u: goto label_2826e4;
        case 0x2826e8u: goto label_2826e8;
        case 0x2826ecu: goto label_2826ec;
        case 0x2826f0u: goto label_2826f0;
        case 0x2826f4u: goto label_2826f4;
        case 0x2826f8u: goto label_2826f8;
        case 0x2826fcu: goto label_2826fc;
        case 0x282700u: goto label_282700;
        case 0x282704u: goto label_282704;
        case 0x282708u: goto label_282708;
        case 0x28270cu: goto label_28270c;
        case 0x282710u: goto label_282710;
        case 0x282714u: goto label_282714;
        case 0x282718u: goto label_282718;
        case 0x28271cu: goto label_28271c;
        case 0x282720u: goto label_282720;
        case 0x282724u: goto label_282724;
        case 0x282728u: goto label_282728;
        case 0x28272cu: goto label_28272c;
        case 0x282730u: goto label_282730;
        case 0x282734u: goto label_282734;
        case 0x282738u: goto label_282738;
        case 0x28273cu: goto label_28273c;
        case 0x282740u: goto label_282740;
        case 0x282744u: goto label_282744;
        case 0x282748u: goto label_282748;
        case 0x28274cu: goto label_28274c;
        case 0x282750u: goto label_282750;
        case 0x282754u: goto label_282754;
        case 0x282758u: goto label_282758;
        case 0x28275cu: goto label_28275c;
        case 0x282760u: goto label_282760;
        case 0x282764u: goto label_282764;
        case 0x282768u: goto label_282768;
        case 0x28276cu: goto label_28276c;
        case 0x282770u: goto label_282770;
        case 0x282774u: goto label_282774;
        case 0x282778u: goto label_282778;
        case 0x28277cu: goto label_28277c;
        case 0x282780u: goto label_282780;
        case 0x282784u: goto label_282784;
        case 0x282788u: goto label_282788;
        case 0x28278cu: goto label_28278c;
        case 0x282790u: goto label_282790;
        case 0x282794u: goto label_282794;
        case 0x282798u: goto label_282798;
        case 0x28279cu: goto label_28279c;
        default: return;
    }

label_281fd0:
    // 0x281fd0: 0x7ce  .word       0x000007CE                   # INVALID     $zero, $zero, 0x7CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x281FD0 raw=0x000007CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281fd4:
    // 0x281fd4: 0x7cf  sync.p
    ctx->pc = 0x281fd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_281fd8:
    // 0x281fd8: 0x7d0  .word       0x000007D0                   # mfhi        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fd8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_281fdc:
    // 0x281fdc: 0x7d1  .word       0x000007D1                   # mthi        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fdcu;
    ctx->hi = GPR_U64(ctx, 0);
label_281fe0:
    // 0x281fe0: 0x7d2  .word       0x000007D2                   # mflo        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fe0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281fe4:
    // 0x281fe4: 0x7d3  .word       0x000007D3                   # mtlo        $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fe4u;
    ctx->lo = GPR_U64(ctx, 0);
label_281fe8:
    // 0x281fe8: 0x7d4  .word       0x000007D4                   # dsllv       $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fe8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_281fec:
    // 0x281fec: 0x7d5  .word       0x000007D5                   # INVALID     $zero, $zero, 0x7D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281fecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x281FEC raw=0x000007D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281ff0:
    // 0x281ff0: 0x7d6  .word       0x000007D6                   # dsrlv       $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ff0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_281ff4:
    // 0x281ff4: 0x7d7  .word       0x000007D7                   # dsrav       $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_281ff8:
    // 0x281ff8: 0x7d8  .word       0x000007D8                   # mult        $zero, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x281ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_281ffc:
    // 0x281ffc: 0x7d9  .word       0x000007D9                   # multu       $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281ffcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_282000:
    // 0x282000: 0x7da  .word       0x000007DA                   # div         $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282000u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_282004:
    // 0x282004: 0x7db  .word       0x000007DB                   # divu        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282004u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_282008:
    // 0x282008: 0x7dc  .word       0x000007DC                   # dmult       $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282008u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x282008 raw=0x000007DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28200c:
    // 0x28200c: 0x7dd  .word       0x000007DD                   # dmultu      $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28200cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28200C raw=0x000007DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282010:
    // 0x282010: 0x7de  .word       0x000007DE                   # ddiv        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282010u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x282010 raw=0x000007DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282014:
    // 0x282014: 0x7df  .word       0x000007DF                   # ddivu       $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282014u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x282014 raw=0x000007DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282018:
    // 0x282018: 0x7e0  .word       0x000007E0                   # add         $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282018u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28201c:
    // 0x28201c: 0x7e1  .word       0x000007E1                   # addu        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28201cu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_282020:
    // 0x282020: 0x7e2  .word       0x000007E2                   # neg         $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282020u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_282024:
    // 0x282024: 0x7e3  .word       0x000007E3                   # negu        $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282024u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_282028:
    // 0x282028: 0x7e4  .word       0x000007E4                   # and         $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282028u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28202c:
    // 0x28202c: 0x0  nop
    ctx->pc = 0x28202cu;
    // NOP
label_282030:
    // 0x282030: 0x7b7  .word       0x000007B7                   # INVALID     $zero, $zero, 0x7B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282030u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x282030 raw=0x000007B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282034:
    // 0x282034: 0x7b8  dsll        $zero, $zero, 30
    ctx->pc = 0x282034u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 30);
label_282038:
    // 0x282038: 0x7b9  .word       0x000007B9                   # INVALID     $zero, $zero, 0x7B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282038u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x282038 raw=0x000007B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28203c:
    // 0x28203c: 0x7ba  dsrl        $zero, $zero, 30
    ctx->pc = 0x28203cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 30);
label_282040:
    // 0x282040: 0x7bb  dsra        $zero, $zero, 30
    ctx->pc = 0x282040u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 30);
label_282044:
    // 0x282044: 0x7bc  dsll32      $zero, $zero, 30
    ctx->pc = 0x282044u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 30));
label_282048:
    // 0x282048: 0x7bd  .word       0x000007BD                   # INVALID     $zero, $zero, 0x7BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282048u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x282048 raw=0x000007BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28204c:
    // 0x28204c: 0x7be  dsrl32      $zero, $zero, 30
    ctx->pc = 0x28204cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 30));
label_282050:
    // 0x282050: 0x7bf  dsra32      $zero, $zero, 30
    ctx->pc = 0x282050u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 30));
label_282054:
    // 0x282054: 0x7c0  sll         $zero, $zero, 31
    ctx->pc = 0x282054u;
    
label_282058:
    // 0x282058: 0x7c1  .word       0x000007C1                   # INVALID     $zero, $zero, 0x7C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282058u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x282058 raw=0x000007C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28205c:
    // 0x28205c: 0x7c2  srl         $zero, $zero, 31
    ctx->pc = 0x28205cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 31));
label_282060:
    // 0x282060: 0x7c3  sra         $zero, $zero, 31
    ctx->pc = 0x282060u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 31));
label_282064:
    // 0x282064: 0x7c4  .word       0x000007C4                   # sllv        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282064u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_282068:
    // 0x282068: 0x7c5  .word       0x000007C5                   # INVALID     $zero, $zero, 0x7C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282068u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x282068 raw=0x000007C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28206c:
    // 0x28206c: 0x7c6  .word       0x000007C6                   # srlv        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28206cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_282070:
    // 0x282070: 0x7c7  .word       0x000007C7                   # srav        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282070u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_282074:
    // 0x282074: 0x7c8  .word       0x000007C8                   # jr          $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
label_282078:
    if (ctx->pc == 0x282078u) {
        ctx->pc = 0x282078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282074u;
        // 0x282078: 0x7c9  .word       0x000007C9                   # jalr        $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28207Cu;
        goto label_28207c;
    }
    ctx->pc = 0x282074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x282078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282074u;
        // 0x282078: 0x7c9  .word       0x000007C9                   # jalr        $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282074u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28207Cu;
label_28207c:
    // 0x28207c: 0x7ca  .word       0x000007CA                   # movz        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28207cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_282080:
    // 0x282080: 0x7cb  .word       0x000007CB                   # movn        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282080u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_282084:
    // 0x282084: 0x7cc  syscall     31
    ctx->pc = 0x282084u;
    ctx->pc = 0x282088u;
runtime->handleSyscall(rdram, ctx, 0x1Fu);
label_282088:
    // 0x282088: 0x7cd  break       0, 31
    ctx->pc = 0x282088u;
    runtime->handleBreak(rdram, ctx);
label_28208c:
    // 0x28208c: 0x0  nop
    ctx->pc = 0x28208cu;
    // NOP
label_282090:
    // 0x282090: 0xb13  .word       0x00000B13                   # mtlo        $zero # 00000B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282090u;
    ctx->lo = GPR_U64(ctx, 0);
label_282094:
    // 0x282094: 0xb14  .word       0x00000B14                   # dsllv       $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_282098:
    // 0x282098: 0xb15  .word       0x00000B15                   # INVALID     $zero, $zero, 0xB15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282098u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x282098 raw=0x00000B15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28209c:
    // 0x28209c: 0xb16  .word       0x00000B16                   # dsrlv       $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28209cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2820a0:
    // 0x2820a0: 0xb17  .word       0x00000B17                   # dsrav       $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820a0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2820a4:
    // 0x2820a4: 0xb18  .word       0x00000B18                   # mult        $at, $zero, $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2820a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2820a8:
    // 0x2820a8: 0xb19  .word       0x00000B19                   # multu       $zero, $zero # 00000B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820a8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2820ac:
    // 0x2820ac: 0xb1a  .word       0x00000B1A                   # div         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820acu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2820b0:
    // 0x2820b0: 0xb1b  .word       0x00000B1B                   # divu        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820b0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2820b4:
    // 0x2820b4: 0xb1c  .word       0x00000B1C                   # dmult       $zero, $zero # 00000B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2820B4 raw=0x00000B1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2820b8:
    // 0x2820b8: 0xb1d  .word       0x00000B1D                   # dmultu      $zero, $zero # 00000B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2820B8 raw=0x00000B1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2820bc:
    // 0x2820bc: 0xb1e  .word       0x00000B1E                   # ddiv        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820bcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2820BC raw=0x00000B1E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2820c0:
    // 0x2820c0: 0xb1f  .word       0x00000B1F                   # ddivu       $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2820C0 raw=0x00000B1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2820c4:
    // 0x2820c4: 0xb20  .word       0x00000B20                   # add         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2820c8:
    // 0x2820c8: 0xb21  .word       0x00000B21                   # addu        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2820cc:
    // 0x2820cc: 0xb22  .word       0x00000B22                   # neg         $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820ccu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2820d0:
    // 0x2820d0: 0xb23  .word       0x00000B23                   # negu        $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820d0u;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2820d4:
    // 0x2820d4: 0xb24  .word       0x00000B24                   # and         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2820d8:
    // 0x2820d8: 0xb25  .word       0x00000B25                   # move        $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2820dc:
    // 0x2820dc: 0xb26  .word       0x00000B26                   # xor         $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2820e0:
    // 0x2820e0: 0xb27  .word       0x00000B27                   # not         $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820e0u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2820e4:
    // 0x2820e4: 0xb28  .word       0x00000B28                   # mfsa        $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2820e4u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_2820e8:
    // 0x2820e8: 0xb29  .word       0x00000B29                   # mtsa        $zero # 00000B00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2820e8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2820ec:
    // 0x2820ec: 0x0  nop
    ctx->pc = 0x2820ecu;
    // NOP
label_2820f0:
    // 0x2820f0: 0xafb  dsra        $at, $zero, 11
    ctx->pc = 0x2820f0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> 11);
label_2820f4:
    // 0x2820f4: 0xafc  dsll32      $at, $zero, 11
    ctx->pc = 0x2820f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 11));
label_2820f8:
    // 0x2820f8: 0xafd  .word       0x00000AFD                   # INVALID     $zero, $zero, 0xAFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2820f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2820F8 raw=0x00000AFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2820fc:
    // 0x2820fc: 0xafe  dsrl32      $at, $zero, 11
    ctx->pc = 0x2820fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (32 + 11));
label_282100:
    // 0x282100: 0xaff  dsra32      $at, $zero, 11
    ctx->pc = 0x282100u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (32 + 11));
label_282104:
    // 0x282104: 0xb00  sll         $at, $zero, 12
    ctx->pc = 0x282104u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_282108:
    // 0x282108: 0xb01  .word       0x00000B01                   # INVALID     $zero, $zero, 0xB01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282108u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x282108 raw=0x00000B01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28210c:
    // 0x28210c: 0xb02  srl         $at, $zero, 12
    ctx->pc = 0x28210cu;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 12));
label_282110:
    // 0x282110: 0xb03  sra         $at, $zero, 12
    ctx->pc = 0x282110u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 12));
label_282114:
    // 0x282114: 0xb05  .word       0x00000B05                   # INVALID     $zero, $zero, 0xB05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282114u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x282114 raw=0x00000B05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282118:
    // 0x282118: 0xb06  .word       0x00000B06                   # srlv        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282118u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28211c:
    // 0x28211c: 0xb07  .word       0x00000B07                   # srav        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28211cu;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_282120:
    // 0x282120: 0xb08  .word       0x00000B08                   # jr          $zero # 00000B00 <InstrIdType: CPU_SPECIAL>
label_282124:
    if (ctx->pc == 0x282124u) {
        ctx->pc = 0x282124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282120u;
        // 0x282124: 0xb09  .word       0x00000B09                   # jalr        $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $1, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x282128u;
        goto label_282128;
    }
    ctx->pc = 0x282120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x282124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282120u;
        // 0x282124: 0xb09  .word       0x00000B09                   # jalr        $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $1, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282120u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x282128u;
label_282128:
    // 0x282128: 0xb0a  .word       0x00000B0A                   # movz        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282128u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_28212c:
    // 0x28212c: 0xb0b  .word       0x00000B0B                   # movn        $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28212cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_282130:
    // 0x282130: 0xb0c  syscall     44
    ctx->pc = 0x282130u;
    ctx->pc = 0x282134u;
runtime->handleSyscall(rdram, ctx, 0x2Cu);
label_282134:
    // 0x282134: 0xb0d  break       0, 44
    ctx->pc = 0x282134u;
    runtime->handleBreak(rdram, ctx);
label_282138:
    // 0x282138: 0xb0e  .word       0x00000B0E                   # INVALID     $zero, $zero, 0xB0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282138u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x282138 raw=0x00000B0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28213c:
    // 0x28213c: 0xb0f  .word       0x00000B0F                   # sync # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28213cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_282140:
    // 0x282140: 0xb10  .word       0x00000B10                   # mfhi        $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282140u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_282144:
    // 0x282144: 0xb11  .word       0x00000B11                   # mthi        $zero # 00000B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282144u;
    ctx->hi = GPR_U64(ctx, 0);
label_282148:
    // 0x282148: 0xb12  .word       0x00000B12                   # mflo        $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282148u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_28214c:
    // 0x28214c: 0x0  nop
    ctx->pc = 0x28214cu;
    // NOP
label_282150:
    // 0x282150: 0x4783d600  .word       0x4783D600                   # INVALID     $gp, $v1, -0x2A00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x282150u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x282150 raw=0x4783D600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282154:
    // 0x282154: 0x0  nop
    ctx->pc = 0x282154u;
    // NOP
label_282158:
    // 0x282158: 0x46c73800  .word       0x46C73800                   # INVALID     $s6, $a3, 0x3800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x282158u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x282158 raw=0x46C73800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28215c:
    // 0x28215c: 0x0  nop
    ctx->pc = 0x28215cu;
    // NOP
label_282160:
    // 0x282160: 0x4783d600  .word       0x4783D600                   # INVALID     $gp, $v1, -0x2A00 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x282160u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x0 at 0x282160 raw=0x4783D600"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282164:
    // 0x282164: 0x0  nop
    ctx->pc = 0x282164u;
    // NOP
label_282168:
    // 0x282168: 0x46cf0800  .word       0x46CF0800                   # INVALID     $s6, $t7, 0x800 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x282168u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x16, function 0x0 at 0x282168 raw=0x46CF0800"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28216c:
    // 0x28216c: 0x0  nop
    ctx->pc = 0x28216cu;
    // NOP
label_282170:
    // 0x282170: 0x0  nop
    ctx->pc = 0x282170u;
    // NOP
label_282174:
    // 0x282174: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x282174u;
    
label_282178:
    // 0x282178: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_28217c:
    if (ctx->pc == 0x28217Cu) {
        ctx->pc = 0x28217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282178u;
        // 0x28217c: 0x80  sll         $zero, $zero, 2 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = 0x282180u;
        goto label_282180;
    }
    ctx->pc = 0x282178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282178u;
        // 0x28217c: 0x80  sll         $zero, $zero, 2 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282178u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x282180u;
label_282180:
    // 0x282180: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x282180u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_282184:
    // 0x282184: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x282184u;
    
label_282188:
    // 0x282188: 0x42  srl         $zero, $zero, 1
    ctx->pc = 0x282188u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_28218c:
    // 0x28218c: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x28218cu;
    
label_282190:
    // 0x282190: 0x44d80000  ctc1        $t8, $0
    ctx->pc = 0x282190u;
    // CTC1 to FCR0 ignored
label_282194:
    // 0x282194: 0x44f20000  .word       0x44F20000                   # INVALID     $a3, $s2, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x282194u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x0 at 0x282194 raw=0x44F20000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_282198:
    // 0x282198: 0x0  nop
    ctx->pc = 0x282198u;
    // NOP
label_28219c:
    // 0x28219c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28219cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x28219C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2821a0:
    // 0x2821a0: 0x45140000  .word       0x45140000                   # INVALID     $t0, $s4, 0x0 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2821a0u;
    // FPU branch instruction - handled elsewhere
label_2821a4:
    // 0x2821a4: 0x45070000  .word       0x45070000                   # INVALID     $t0, $a3, 0x0 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2821a4u;
    // FPU branch instruction - handled elsewhere
label_2821a8:
    // 0x2821a8: 0x0  nop
    ctx->pc = 0x2821a8u;
    // NOP
label_2821ac:
    // 0x2821ac: 0x463b8000  .word       0x463B8000                   # INVALID     $s1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2821acu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x0 at 0x2821AC raw=0x463B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2821b0:
    // 0x2821b0: 0x0  nop
    ctx->pc = 0x2821b0u;
    // NOP
label_2821b4:
    // 0x2821b4: 0x0  nop
    ctx->pc = 0x2821b4u;
    // NOP
label_2821b8:
    // 0x2821b8: 0x0  nop
    ctx->pc = 0x2821b8u;
    // NOP
label_2821bc:
    // 0x2821bc: 0x0  nop
    ctx->pc = 0x2821bcu;
    // NOP
label_2821c0:
    // 0x2821c0: 0x0  nop
    ctx->pc = 0x2821c0u;
    // NOP
label_2821c4:
    // 0x2821c4: 0x0  nop
    ctx->pc = 0x2821c4u;
    // NOP
label_2821c8:
    // 0x2821c8: 0x0  nop
    ctx->pc = 0x2821c8u;
    // NOP
label_2821cc:
    // 0x2821cc: 0x0  nop
    ctx->pc = 0x2821ccu;
    // NOP
label_2821d0:
    // 0x2821d0: 0x0  nop
    ctx->pc = 0x2821d0u;
    // NOP
label_2821d4:
    // 0x2821d4: 0x0  nop
    ctx->pc = 0x2821d4u;
    // NOP
label_2821d8:
    // 0x2821d8: 0x0  nop
    ctx->pc = 0x2821d8u;
    // NOP
label_2821dc:
    // 0x2821dc: 0x0  nop
    ctx->pc = 0x2821dcu;
    // NOP
label_2821e0:
    // 0x2821e0: 0x0  nop
    ctx->pc = 0x2821e0u;
    // NOP
label_2821e4:
    // 0x2821e4: 0x0  nop
    ctx->pc = 0x2821e4u;
    // NOP
label_2821e8:
    // 0x2821e8: 0x0  nop
    ctx->pc = 0x2821e8u;
    // NOP
label_2821ec:
    // 0x2821ec: 0x0  nop
    ctx->pc = 0x2821ecu;
    // NOP
label_2821f0:
    // 0x2821f0: 0x0  nop
    ctx->pc = 0x2821f0u;
    // NOP
label_2821f4:
    // 0x2821f4: 0x0  nop
    ctx->pc = 0x2821f4u;
    // NOP
label_2821f8:
    // 0x2821f8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2821f8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2821fc:
    // 0x2821fc: 0x0  nop
    ctx->pc = 0x2821fcu;
    // NOP
label_282200:
    // 0x282200: 0xbe9db22d  cache       0x1D, -0x4DD3($s4)
    ctx->pc = 0x282200u;
    // CACHE instruction (ignored)
label_282204:
    // 0x282204: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282204u;
    // CACHE instruction (ignored)
label_282208:
    // 0x282208: 0x0  nop
    ctx->pc = 0x282208u;
    // NOP
label_28220c:
    // 0x28220c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28220cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282210:
    // 0x282210: 0x0  nop
    ctx->pc = 0x282210u;
    // NOP
label_282214:
    // 0x282214: 0x0  nop
    ctx->pc = 0x282214u;
    // NOP
label_282218:
    // 0x282218: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282218u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28221c:
    // 0x28221c: 0x0  nop
    ctx->pc = 0x28221cu;
    // NOP
label_282220:
    // 0x282220: 0x3e9db22d  .word       0x3E9DB22D                   # lui         $sp, 0xB22D # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282220u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)45613 << 16));
label_282224:
    // 0x282224: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282224u;
    // CACHE instruction (ignored)
label_282228:
    // 0x282228: 0x0  nop
    ctx->pc = 0x282228u;
    // NOP
label_28222c:
    // 0x28222c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28222cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282230:
    // 0x282230: 0x0  nop
    ctx->pc = 0x282230u;
    // NOP
label_282234:
    // 0x282234: 0x0  nop
    ctx->pc = 0x282234u;
    // NOP
label_282238:
    // 0x282238: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282238u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28223c:
    // 0x28223c: 0x0  nop
    ctx->pc = 0x28223cu;
    // NOP
label_282240:
    // 0x282240: 0x3e9db22d  .word       0x3E9DB22D                   # lui         $sp, 0xB22D # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282240u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)45613 << 16));
label_282244:
    // 0x282244: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282244u;
    // CACHE instruction (ignored)
label_282248:
    // 0x282248: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28224c:
    // 0x28224c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28224cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282250:
    // 0x282250: 0x0  nop
    ctx->pc = 0x282250u;
    // NOP
label_282254:
    // 0x282254: 0x0  nop
    ctx->pc = 0x282254u;
    // NOP
label_282258:
    // 0x282258: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282258u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28225c:
    // 0x28225c: 0x0  nop
    ctx->pc = 0x28225cu;
    // NOP
label_282260:
    // 0x282260: 0xbe9db22d  cache       0x1D, -0x4DD3($s4)
    ctx->pc = 0x282260u;
    // CACHE instruction (ignored)
label_282264:
    // 0x282264: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282264u;
    // CACHE instruction (ignored)
label_282268:
    // 0x282268: 0x0  nop
    ctx->pc = 0x282268u;
    // NOP
label_28226c:
    // 0x28226c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28226cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282270:
    // 0x282270: 0x0  nop
    ctx->pc = 0x282270u;
    // NOP
label_282274:
    // 0x282274: 0x0  nop
    ctx->pc = 0x282274u;
    // NOP
label_282278:
    // 0x282278: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282278u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28227c:
    // 0x28227c: 0x0  nop
    ctx->pc = 0x28227cu;
    // NOP
label_282280:
    // 0x282280: 0x3e9db22d  .word       0x3E9DB22D                   # lui         $sp, 0xB22D # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282280u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)45613 << 16));
label_282284:
    // 0x282284: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282284u;
    // CACHE instruction (ignored)
label_282288:
    // 0x282288: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28228c:
    // 0x28228c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28228cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282290:
    // 0x282290: 0x0  nop
    ctx->pc = 0x282290u;
    // NOP
label_282294:
    // 0x282294: 0x0  nop
    ctx->pc = 0x282294u;
    // NOP
label_282298:
    // 0x282298: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282298u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28229c:
    // 0x28229c: 0x0  nop
    ctx->pc = 0x28229cu;
    // NOP
label_2822a0:
    // 0x2822a0: 0xbe9db22d  cache       0x1D, -0x4DD3($s4)
    ctx->pc = 0x2822a0u;
    // CACHE instruction (ignored)
label_2822a4:
    // 0x2822a4: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x2822a4u;
    // CACHE instruction (ignored)
label_2822a8:
    // 0x2822a8: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x2822a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2822ac:
    // 0x2822ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2822acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2822b0:
    // 0x2822b0: 0x0  nop
    ctx->pc = 0x2822b0u;
    // NOP
label_2822b4:
    // 0x2822b4: 0x0  nop
    ctx->pc = 0x2822b4u;
    // NOP
label_2822b8:
    // 0x2822b8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2822b8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2822bc:
    // 0x2822bc: 0x0  nop
    ctx->pc = 0x2822bcu;
    // NOP
label_2822c0:
    // 0x2822c0: 0x0  nop
    ctx->pc = 0x2822c0u;
    // NOP
label_2822c4:
    // 0x2822c4: 0x3eb5c28f  .word       0x3EB5C28F                   # lui         $s5, 0xC28F # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2822c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_2822c8:
    // 0x2822c8: 0x0  nop
    ctx->pc = 0x2822c8u;
    // NOP
label_2822cc:
    // 0x2822cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2822ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2822d0:
    // 0x2822d0: 0x0  nop
    ctx->pc = 0x2822d0u;
    // NOP
label_2822d4:
    // 0x2822d4: 0x0  nop
    ctx->pc = 0x2822d4u;
    // NOP
label_2822d8:
    // 0x2822d8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2822d8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2822dc:
    // 0x2822dc: 0x0  nop
    ctx->pc = 0x2822dcu;
    // NOP
label_2822e0:
    // 0x2822e0: 0xbe9db22d  cache       0x1D, -0x4DD3($s4)
    ctx->pc = 0x2822e0u;
    // CACHE instruction (ignored)
label_2822e4:
    // 0x2822e4: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x2822e4u;
    // CACHE instruction (ignored)
label_2822e8:
    // 0x2822e8: 0x0  nop
    ctx->pc = 0x2822e8u;
    // NOP
label_2822ec:
    // 0x2822ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2822ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2822f0:
    // 0x2822f0: 0x0  nop
    ctx->pc = 0x2822f0u;
    // NOP
label_2822f4:
    // 0x2822f4: 0x0  nop
    ctx->pc = 0x2822f4u;
    // NOP
label_2822f8:
    // 0x2822f8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2822f8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2822fc:
    // 0x2822fc: 0x0  nop
    ctx->pc = 0x2822fcu;
    // NOP
label_282300:
    // 0x282300: 0xbe9db22d  cache       0x1D, -0x4DD3($s4)
    ctx->pc = 0x282300u;
    // CACHE instruction (ignored)
label_282304:
    // 0x282304: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282304u;
    // CACHE instruction (ignored)
label_282308:
    // 0x282308: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28230c:
    // 0x28230c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28230cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282310:
    // 0x282310: 0x0  nop
    ctx->pc = 0x282310u;
    // NOP
label_282314:
    // 0x282314: 0x0  nop
    ctx->pc = 0x282314u;
    // NOP
label_282318:
    // 0x282318: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282318u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28231c:
    // 0x28231c: 0x0  nop
    ctx->pc = 0x28231cu;
    // NOP
label_282320:
    // 0x282320: 0x0  nop
    ctx->pc = 0x282320u;
    // NOP
label_282324:
    // 0x282324: 0x3eb5c28f  .word       0x3EB5C28F                   # lui         $s5, 0xC28F # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282324u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_282328:
    // 0x282328: 0x0  nop
    ctx->pc = 0x282328u;
    // NOP
label_28232c:
    // 0x28232c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28232cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282330:
    // 0x282330: 0x0  nop
    ctx->pc = 0x282330u;
    // NOP
label_282334:
    // 0x282334: 0x0  nop
    ctx->pc = 0x282334u;
    // NOP
label_282338:
    // 0x282338: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282338u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28233c:
    // 0x28233c: 0x0  nop
    ctx->pc = 0x28233cu;
    // NOP
label_282340:
    // 0x282340: 0xbe9db22d  cache       0x1D, -0x4DD3($s4)
    ctx->pc = 0x282340u;
    // CACHE instruction (ignored)
label_282344:
    // 0x282344: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282344u;
    // CACHE instruction (ignored)
label_282348:
    // 0x282348: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28234c:
    // 0x28234c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28234cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282350:
    // 0x282350: 0x0  nop
    ctx->pc = 0x282350u;
    // NOP
label_282354:
    // 0x282354: 0x0  nop
    ctx->pc = 0x282354u;
    // NOP
label_282358:
    // 0x282358: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282358u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28235c:
    // 0x28235c: 0x0  nop
    ctx->pc = 0x28235cu;
    // NOP
label_282360:
    // 0x282360: 0x0  nop
    ctx->pc = 0x282360u;
    // NOP
label_282364:
    // 0x282364: 0x3eb5c28f  .word       0x3EB5C28F                   # lui         $s5, 0xC28F # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282364u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_282368:
    // 0x282368: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28236c:
    // 0x28236c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28236cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282370:
    // 0x282370: 0x0  nop
    ctx->pc = 0x282370u;
    // NOP
label_282374:
    // 0x282374: 0x0  nop
    ctx->pc = 0x282374u;
    // NOP
label_282378:
    // 0x282378: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282378u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28237c:
    // 0x28237c: 0x0  nop
    ctx->pc = 0x28237cu;
    // NOP
label_282380:
    // 0x282380: 0x3e9db22d  .word       0x3E9DB22D                   # lui         $sp, 0xB22D # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282380u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)45613 << 16));
label_282384:
    // 0x282384: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282384u;
    // CACHE instruction (ignored)
label_282388:
    // 0x282388: 0x0  nop
    ctx->pc = 0x282388u;
    // NOP
label_28238c:
    // 0x28238c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28238cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282390:
    // 0x282390: 0x0  nop
    ctx->pc = 0x282390u;
    // NOP
label_282394:
    // 0x282394: 0x0  nop
    ctx->pc = 0x282394u;
    // NOP
label_282398:
    // 0x282398: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282398u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28239c:
    // 0x28239c: 0x0  nop
    ctx->pc = 0x28239cu;
    // NOP
label_2823a0:
    // 0x2823a0: 0x0  nop
    ctx->pc = 0x2823a0u;
    // NOP
label_2823a4:
    // 0x2823a4: 0x3eb5c28f  .word       0x3EB5C28F                   # lui         $s5, 0xC28F # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_2823a8:
    // 0x2823a8: 0x0  nop
    ctx->pc = 0x2823a8u;
    // NOP
label_2823ac:
    // 0x2823ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2823b0:
    // 0x2823b0: 0x0  nop
    ctx->pc = 0x2823b0u;
    // NOP
label_2823b4:
    // 0x2823b4: 0x0  nop
    ctx->pc = 0x2823b4u;
    // NOP
label_2823b8:
    // 0x2823b8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823b8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2823bc:
    // 0x2823bc: 0x0  nop
    ctx->pc = 0x2823bcu;
    // NOP
label_2823c0:
    // 0x2823c0: 0x0  nop
    ctx->pc = 0x2823c0u;
    // NOP
label_2823c4:
    // 0x2823c4: 0x3eb5c28f  .word       0x3EB5C28F                   # lui         $s5, 0xC28F # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_2823c8:
    // 0x2823c8: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x2823c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2823cc:
    // 0x2823cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2823d0:
    // 0x2823d0: 0x0  nop
    ctx->pc = 0x2823d0u;
    // NOP
label_2823d4:
    // 0x2823d4: 0x0  nop
    ctx->pc = 0x2823d4u;
    // NOP
label_2823d8:
    // 0x2823d8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823d8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2823dc:
    // 0x2823dc: 0x0  nop
    ctx->pc = 0x2823dcu;
    // NOP
label_2823e0:
    // 0x2823e0: 0x3e9db22d  .word       0x3E9DB22D                   # lui         $sp, 0xB22D # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823e0u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)45613 << 16));
label_2823e4:
    // 0x2823e4: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x2823e4u;
    // CACHE instruction (ignored)
label_2823e8:
    // 0x2823e8: 0x0  nop
    ctx->pc = 0x2823e8u;
    // NOP
label_2823ec:
    // 0x2823ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2823f0:
    // 0x2823f0: 0x0  nop
    ctx->pc = 0x2823f0u;
    // NOP
label_2823f4:
    // 0x2823f4: 0x0  nop
    ctx->pc = 0x2823f4u;
    // NOP
label_2823f8:
    // 0x2823f8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2823f8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2823fc:
    // 0x2823fc: 0x0  nop
    ctx->pc = 0x2823fcu;
    // NOP
label_282400:
    // 0x282400: 0x0  nop
    ctx->pc = 0x282400u;
    // NOP
label_282404:
    // 0x282404: 0x3eb5c28f  .word       0x3EB5C28F                   # lui         $s5, 0xC28F # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282404u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_282408:
    // 0x282408: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28240c:
    // 0x28240c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28240cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282410:
    // 0x282410: 0x0  nop
    ctx->pc = 0x282410u;
    // NOP
label_282414:
    // 0x282414: 0x0  nop
    ctx->pc = 0x282414u;
    // NOP
label_282418:
    // 0x282418: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282418u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28241c:
    // 0x28241c: 0x0  nop
    ctx->pc = 0x28241cu;
    // NOP
label_282420:
    // 0x282420: 0x3e9db22d  .word       0x3E9DB22D                   # lui         $sp, 0xB22D # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282420u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)45613 << 16));
label_282424:
    // 0x282424: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282424u;
    // CACHE instruction (ignored)
label_282428:
    // 0x282428: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28242c:
    // 0x28242c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28242cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282430:
    // 0x282430: 0x0  nop
    ctx->pc = 0x282430u;
    // NOP
label_282434:
    // 0x282434: 0x0  nop
    ctx->pc = 0x282434u;
    // NOP
label_282438:
    // 0x282438: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282438u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28243c:
    // 0x28243c: 0x0  nop
    ctx->pc = 0x28243cu;
    // NOP
label_282440:
    // 0x282440: 0x0  nop
    ctx->pc = 0x282440u;
    // NOP
label_282444:
    // 0x282444: 0x3eb5c28f  .word       0x3EB5C28F                   # lui         $s5, 0xC28F # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282444u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_282448:
    // 0x282448: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28244c:
    // 0x28244c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28244cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282450:
    // 0x282450: 0x0  nop
    ctx->pc = 0x282450u;
    // NOP
label_282454:
    // 0x282454: 0x0  nop
    ctx->pc = 0x282454u;
    // NOP
label_282458:
    // 0x282458: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282458u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28245c:
    // 0x28245c: 0x0  nop
    ctx->pc = 0x28245cu;
    // NOP
label_282460:
    // 0x282460: 0xbe9db22d  cache       0x1D, -0x4DD3($s4)
    ctx->pc = 0x282460u;
    // CACHE instruction (ignored)
label_282464:
    // 0x282464: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282464u;
    // CACHE instruction (ignored)
label_282468:
    // 0x282468: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28246c:
    // 0x28246c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28246cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282470:
    // 0x282470: 0x0  nop
    ctx->pc = 0x282470u;
    // NOP
label_282474:
    // 0x282474: 0x0  nop
    ctx->pc = 0x282474u;
    // NOP
label_282478:
    // 0x282478: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282478u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28247c:
    // 0x28247c: 0x0  nop
    ctx->pc = 0x28247cu;
    // NOP
label_282480:
    // 0x282480: 0x3e9db22d  .word       0x3E9DB22D                   # lui         $sp, 0xB22D # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282480u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)45613 << 16));
label_282484:
    // 0x282484: 0xbe3645a2  cache       0x16, 0x45A2($s1)
    ctx->pc = 0x282484u;
    // CACHE instruction (ignored)
label_282488:
    // 0x282488: 0xc293f021  ll          $s3, -0xFDF($s4)
    ctx->pc = 0x282488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294963233); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28248c:
    // 0x28248c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28248cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282490:
    // 0x282490: 0x0  nop
    ctx->pc = 0x282490u;
    // NOP
label_282494:
    // 0x282494: 0x0  nop
    ctx->pc = 0x282494u;
    // NOP
label_282498:
    // 0x282498: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282498u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28249c:
    // 0x28249c: 0x0  nop
    ctx->pc = 0x28249cu;
    // NOP
label_2824a0:
    // 0x2824a0: 0x3cac0831  .word       0x3CAC0831                   # lui         $t4, 0x831 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824a0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)2097 << 16));
label_2824a4:
    // 0x2824a4: 0xbf251eb8  cache       0x05, 0x1EB8($t9)
    ctx->pc = 0x2824a4u;
    // CACHE instruction (ignored)
label_2824a8:
    // 0x2824a8: 0xc294cccd  ll          $s4, -0x3333($s4)
    ctx->pc = 0x2824a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294954189); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2824ac:
    // 0x2824ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2824b0:
    // 0x2824b0: 0x0  nop
    ctx->pc = 0x2824b0u;
    // NOP
label_2824b4:
    // 0x2824b4: 0x0  nop
    ctx->pc = 0x2824b4u;
    // NOP
label_2824b8:
    // 0x2824b8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824b8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2824bc:
    // 0x2824bc: 0x0  nop
    ctx->pc = 0x2824bcu;
    // NOP
label_2824c0:
    // 0x2824c0: 0x3d03126f  .word       0x3D03126F                   # lui         $v1, 0x126F # 01000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4719 << 16));
label_2824c4:
    // 0x2824c4: 0xbe1db22d  cache       0x1D, -0x4DD3($s0)
    ctx->pc = 0x2824c4u;
    // CACHE instruction (ignored)
label_2824c8:
    // 0x2824c8: 0xc294126f  ll          $s4, 0x126F($s4)
    ctx->pc = 0x2824c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4719); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2824cc:
    // 0x2824cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2824d0:
    // 0x2824d0: 0x0  nop
    ctx->pc = 0x2824d0u;
    // NOP
label_2824d4:
    // 0x2824d4: 0x0  nop
    ctx->pc = 0x2824d4u;
    // NOP
label_2824d8:
    // 0x2824d8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824d8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2824dc:
    // 0x2824dc: 0x0  nop
    ctx->pc = 0x2824dcu;
    // NOP
label_2824e0:
    // 0x2824e0: 0x3d0f5c29  .word       0x3D0F5C29                   # lui         $t7, 0x5C29 # 01000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_2824e4:
    // 0x2824e4: 0xbe1db22d  cache       0x1D, -0x4DD3($s0)
    ctx->pc = 0x2824e4u;
    // CACHE instruction (ignored)
label_2824e8:
    // 0x2824e8: 0xc275a7f0  ll          $s5, -0x5810($s3)
    ctx->pc = 0x2824e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4294944752); SET_GPR_S32(ctx, 21, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2824ec:
    // 0x2824ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2824f0:
    // 0x2824f0: 0x0  nop
    ctx->pc = 0x2824f0u;
    // NOP
label_2824f4:
    // 0x2824f4: 0x0  nop
    ctx->pc = 0x2824f4u;
    // NOP
label_2824f8:
    // 0x2824f8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2824f8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2824fc:
    // 0x2824fc: 0x0  nop
    ctx->pc = 0x2824fcu;
    // NOP
label_282500:
    // 0x282500: 0x3cac0831  .word       0x3CAC0831                   # lui         $t4, 0x831 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282500u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)2097 << 16));
label_282504:
    // 0x282504: 0xbf251eb8  cache       0x05, 0x1EB8($t9)
    ctx->pc = 0x282504u;
    // CACHE instruction (ignored)
label_282508:
    // 0x282508: 0xc294cccd  ll          $s4, -0x3333($s4)
    ctx->pc = 0x282508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294954189); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28250c:
    // 0x28250c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28250cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282510:
    // 0x282510: 0x0  nop
    ctx->pc = 0x282510u;
    // NOP
label_282514:
    // 0x282514: 0x0  nop
    ctx->pc = 0x282514u;
    // NOP
label_282518:
    // 0x282518: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282518u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28251c:
    // 0x28251c: 0x0  nop
    ctx->pc = 0x28251cu;
    // NOP
label_282520:
    // 0x282520: 0x3d0f5c29  .word       0x3D0F5C29                   # lui         $t7, 0x5C29 # 01000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282520u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_282524:
    // 0x282524: 0xbe1db22d  cache       0x1D, -0x4DD3($s0)
    ctx->pc = 0x282524u;
    // CACHE instruction (ignored)
label_282528:
    // 0x282528: 0xc275a7f0  ll          $s5, -0x5810($s3)
    ctx->pc = 0x282528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4294944752); SET_GPR_S32(ctx, 21, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28252c:
    // 0x28252c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28252cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282530:
    // 0x282530: 0x0  nop
    ctx->pc = 0x282530u;
    // NOP
label_282534:
    // 0x282534: 0x0  nop
    ctx->pc = 0x282534u;
    // NOP
label_282538:
    // 0x282538: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282538u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28253c:
    // 0x28253c: 0x0  nop
    ctx->pc = 0x28253cu;
    // NOP
label_282540:
    // 0x282540: 0x3cb43958  .word       0x3CB43958                   # lui         $s4, 0x3958 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282540u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)14680 << 16));
label_282544:
    // 0x282544: 0xbf24dd2f  cache       0x04, -0x22D1($t9)
    ctx->pc = 0x282544u;
    // CACHE instruction (ignored)
label_282548:
    // 0x282548: 0xc28012f2  ll          $zero, 0x12F2($s4)
    ctx->pc = 0x282548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4850); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28254c:
    // 0x28254c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28254cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282550:
    // 0x282550: 0x0  nop
    ctx->pc = 0x282550u;
    // NOP
label_282554:
    // 0x282554: 0x0  nop
    ctx->pc = 0x282554u;
    // NOP
label_282558:
    // 0x282558: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282558u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28255c:
    // 0x28255c: 0x0  nop
    ctx->pc = 0x28255cu;
    // NOP
label_282560:
    // 0x282560: 0x3f133333  .word       0x3F133333                   # lui         $s3, 0x3333 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282560u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_282564:
    // 0x282564: 0x3ea5e354  .word       0x3EA5E354                   # lui         $a1, 0xE354 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58196 << 16));
label_282568:
    // 0x282568: 0xc294cc4a  ll          $s4, -0x33B6($s4)
    ctx->pc = 0x282568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294954058); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28256c:
    // 0x28256c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28256cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282570:
    // 0x282570: 0x0  nop
    ctx->pc = 0x282570u;
    // NOP
label_282574:
    // 0x282574: 0x0  nop
    ctx->pc = 0x282574u;
    // NOP
label_282578:
    // 0x282578: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282578u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28257c:
    // 0x28257c: 0x0  nop
    ctx->pc = 0x28257cu;
    // NOP
label_282580:
    // 0x282580: 0x3e3020c5  .word       0x3E3020C5                   # lui         $s0, 0x20C5 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282580u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8389 << 16));
label_282584:
    // 0x282584: 0x3da3d70a  .word       0x3DA3D70A                   # lui         $v1, 0xD70A # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_282588:
    // 0x282588: 0xc29411ec  ll          $s4, 0x11EC($s4)
    ctx->pc = 0x282588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4588); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28258c:
    // 0x28258c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28258cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282590:
    // 0x282590: 0x0  nop
    ctx->pc = 0x282590u;
    // NOP
label_282594:
    // 0x282594: 0x0  nop
    ctx->pc = 0x282594u;
    // NOP
label_282598:
    // 0x282598: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282598u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28259c:
    // 0x28259c: 0x0  nop
    ctx->pc = 0x28259cu;
    // NOP
label_2825a0:
    // 0x2825a0: 0x3e333333  .word       0x3E333333                   # lui         $s3, 0x3333 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2825a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_2825a4:
    // 0x2825a4: 0x3da3d70a  .word       0x3DA3D70A                   # lui         $v1, 0xD70A # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2825a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_2825a8:
    // 0x2825a8: 0xc275a6ea  ll          $s5, -0x5916($s3)
    ctx->pc = 0x2825a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4294944490); SET_GPR_S32(ctx, 21, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2825ac:
    // 0x2825ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2825acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2825b0:
    // 0x2825b0: 0x0  nop
    ctx->pc = 0x2825b0u;
    // NOP
label_2825b4:
    // 0x2825b4: 0x0  nop
    ctx->pc = 0x2825b4u;
    // NOP
label_2825b8:
    // 0x2825b8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2825b8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2825bc:
    // 0x2825bc: 0x0  nop
    ctx->pc = 0x2825bcu;
    // NOP
label_2825c0:
    // 0x2825c0: 0x3f133333  .word       0x3F133333                   # lui         $s3, 0x3333 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2825c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_2825c4:
    // 0x2825c4: 0x3ea5e354  .word       0x3EA5E354                   # lui         $a1, 0xE354 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2825c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58196 << 16));
label_2825c8:
    // 0x2825c8: 0xc294cc4a  ll          $s4, -0x33B6($s4)
    ctx->pc = 0x2825c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294954058); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2825cc:
    // 0x2825cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2825ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2825d0:
    // 0x2825d0: 0x0  nop
    ctx->pc = 0x2825d0u;
    // NOP
label_2825d4:
    // 0x2825d4: 0x0  nop
    ctx->pc = 0x2825d4u;
    // NOP
label_2825d8:
    // 0x2825d8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2825d8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2825dc:
    // 0x2825dc: 0x0  nop
    ctx->pc = 0x2825dcu;
    // NOP
label_2825e0:
    // 0x2825e0: 0x3e333333  .word       0x3E333333                   # lui         $s3, 0x3333 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2825e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_2825e4:
    // 0x2825e4: 0x3da3d70a  .word       0x3DA3D70A                   # lui         $v1, 0xD70A # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2825e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_2825e8:
    // 0x2825e8: 0xc275a6ea  ll          $s5, -0x5916($s3)
    ctx->pc = 0x2825e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4294944490); SET_GPR_S32(ctx, 21, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2825ec:
    // 0x2825ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2825ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2825f0:
    // 0x2825f0: 0x0  nop
    ctx->pc = 0x2825f0u;
    // NOP
label_2825f4:
    // 0x2825f4: 0x0  nop
    ctx->pc = 0x2825f4u;
    // NOP
label_2825f8:
    // 0x2825f8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2825f8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2825fc:
    // 0x2825fc: 0x0  nop
    ctx->pc = 0x2825fcu;
    // NOP
label_282600:
    // 0x282600: 0x3f1374bc  .word       0x3F1374BC                   # lui         $s3, 0x74BC # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282600u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)29884 << 16));
label_282604:
    // 0x282604: 0x3ea5e354  .word       0x3EA5E354                   # lui         $a1, 0xE354 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58196 << 16));
label_282608:
    // 0x282608: 0xc28012f2  ll          $zero, 0x12F2($s4)
    ctx->pc = 0x282608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4850); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28260c:
    // 0x28260c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28260cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282610:
    // 0x282610: 0x0  nop
    ctx->pc = 0x282610u;
    // NOP
label_282614:
    // 0x282614: 0x0  nop
    ctx->pc = 0x282614u;
    // NOP
label_282618:
    // 0x282618: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282618u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28261c:
    // 0x28261c: 0x0  nop
    ctx->pc = 0x28261cu;
    // NOP
label_282620:
    // 0x282620: 0xbf08b439  cache       0x08, -0x4BC7($t8)
    ctx->pc = 0x282620u;
    // CACHE instruction (ignored)
label_282624:
    // 0x282624: 0x3ea76c8b  .word       0x3EA76C8B                   # lui         $a3, 0x6C8B # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282624u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27787 << 16));
label_282628:
    // 0x282628: 0xc294cccd  ll          $s4, -0x3333($s4)
    ctx->pc = 0x282628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294954189); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28262c:
    // 0x28262c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28262cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282630:
    // 0x282630: 0x0  nop
    ctx->pc = 0x282630u;
    // NOP
label_282634:
    // 0x282634: 0x0  nop
    ctx->pc = 0x282634u;
    // NOP
label_282638:
    // 0x282638: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282638u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28263c:
    // 0x28263c: 0x0  nop
    ctx->pc = 0x28263cu;
    // NOP
label_282640:
    // 0x282640: 0xbddb22d1  cache       0x1B, 0x22D1($t6)
    ctx->pc = 0x282640u;
    // CACHE instruction (ignored)
label_282644:
    // 0x282644: 0x3dac0831  .word       0x3DAC0831                   # lui         $t4, 0x831 # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282644u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)2097 << 16));
label_282648:
    // 0x282648: 0xc294126f  ll          $s4, 0x126F($s4)
    ctx->pc = 0x282648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4719); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28264c:
    // 0x28264c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28264cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282650:
    // 0x282650: 0x0  nop
    ctx->pc = 0x282650u;
    // NOP
label_282654:
    // 0x282654: 0x0  nop
    ctx->pc = 0x282654u;
    // NOP
label_282658:
    // 0x282658: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282658u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28265c:
    // 0x28265c: 0x0  nop
    ctx->pc = 0x28265cu;
    // NOP
label_282660:
    // 0x282660: 0xbdd70a3d  cache       0x17, 0xA3D($t6)
    ctx->pc = 0x282660u;
    // CACHE instruction (ignored)
label_282664:
    // 0x282664: 0x3dac0831  .word       0x3DAC0831                   # lui         $t4, 0x831 # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282664u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)2097 << 16));
label_282668:
    // 0x282668: 0xc275a7f0  ll          $s5, -0x5810($s3)
    ctx->pc = 0x282668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4294944752); SET_GPR_S32(ctx, 21, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28266c:
    // 0x28266c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28266cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282670:
    // 0x282670: 0x0  nop
    ctx->pc = 0x282670u;
    // NOP
label_282674:
    // 0x282674: 0x0  nop
    ctx->pc = 0x282674u;
    // NOP
label_282678:
    // 0x282678: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282678u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28267c:
    // 0x28267c: 0x0  nop
    ctx->pc = 0x28267cu;
    // NOP
label_282680:
    // 0x282680: 0xbf08b439  cache       0x08, -0x4BC7($t8)
    ctx->pc = 0x282680u;
    // CACHE instruction (ignored)
label_282684:
    // 0x282684: 0x3ea76c8b  .word       0x3EA76C8B                   # lui         $a3, 0x6C8B # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282684u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27787 << 16));
label_282688:
    // 0x282688: 0xc294cccd  ll          $s4, -0x3333($s4)
    ctx->pc = 0x282688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294954189); SET_GPR_S32(ctx, 20, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28268c:
    // 0x28268c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28268cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282690:
    // 0x282690: 0x0  nop
    ctx->pc = 0x282690u;
    // NOP
label_282694:
    // 0x282694: 0x0  nop
    ctx->pc = 0x282694u;
    // NOP
label_282698:
    // 0x282698: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282698u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28269c:
    // 0x28269c: 0x0  nop
    ctx->pc = 0x28269cu;
    // NOP
label_2826a0:
    // 0x2826a0: 0xbdd70a3d  cache       0x17, 0xA3D($t6)
    ctx->pc = 0x2826a0u;
    // CACHE instruction (ignored)
label_2826a4:
    // 0x2826a4: 0x3dac0831  .word       0x3DAC0831                   # lui         $t4, 0x831 # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2826a4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)2097 << 16));
label_2826a8:
    // 0x2826a8: 0xc275a7f0  ll          $s5, -0x5810($s3)
    ctx->pc = 0x2826a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4294944752); SET_GPR_S32(ctx, 21, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2826ac:
    // 0x2826ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2826acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2826b0:
    // 0x2826b0: 0x0  nop
    ctx->pc = 0x2826b0u;
    // NOP
label_2826b4:
    // 0x2826b4: 0x0  nop
    ctx->pc = 0x2826b4u;
    // NOP
label_2826b8:
    // 0x2826b8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2826b8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2826bc:
    // 0x2826bc: 0x0  nop
    ctx->pc = 0x2826bcu;
    // NOP
label_2826c0:
    // 0x2826c0: 0xbf083127  cache       0x08, 0x3127($t8)
    ctx->pc = 0x2826c0u;
    // CACHE instruction (ignored)
label_2826c4:
    // 0x2826c4: 0x3ea76c8b  .word       0x3EA76C8B                   # lui         $a3, 0x6C8B # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2826c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27787 << 16));
label_2826c8:
    // 0x2826c8: 0xc28012f2  ll          $zero, 0x12F2($s4)
    ctx->pc = 0x2826c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4850); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2826cc:
    // 0x2826cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2826ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2826d0:
    // 0x2826d0: 0x0  nop
    ctx->pc = 0x2826d0u;
    // NOP
label_2826d4:
    // 0x2826d4: 0x0  nop
    ctx->pc = 0x2826d4u;
    // NOP
label_2826d8:
    // 0x2826d8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2826d8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2826dc:
    // 0x2826dc: 0x0  nop
    ctx->pc = 0x2826dcu;
    // NOP
label_2826e0:
    // 0x2826e0: 0xbf2978d5  cache       0x09, 0x78D5($t9)
    ctx->pc = 0x2826e0u;
    // CACHE instruction (ignored)
label_2826e4:
    // 0x2826e4: 0x3cbc6a7f  .word       0x3CBC6A7F                   # lui         $gp, 0x6A7F # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2826e4u;
    SET_GPR_S32(ctx, 28, (int32_t)((uint32_t)27263 << 16));
label_2826e8:
    // 0x2826e8: 0xc061687f  ll          $at, 0x687F($v1)
    ctx->pc = 0x2826e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26751); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_2826ec:
    // 0x2826ec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2826ecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2826f0:
    // 0x2826f0: 0x0  nop
    ctx->pc = 0x2826f0u;
    // NOP
label_2826f4:
    // 0x2826f4: 0x0  nop
    ctx->pc = 0x2826f4u;
    // NOP
label_2826f8:
    // 0x2826f8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2826f8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2826fc:
    // 0x2826fc: 0x0  nop
    ctx->pc = 0x2826fcu;
    // NOP
label_282700:
    // 0x282700: 0x3c656042  .word       0x3C656042                   # lui         $a1, 0x6042 # 00600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24642 << 16));
label_282704:
    // 0x282704: 0x3f32f1aa  .word       0x3F32F1AA                   # lui         $s2, 0xF1AA # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282704u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)61866 << 16));
label_282708:
    // 0x282708: 0xc061687f  ll          $at, 0x687F($v1)
    ctx->pc = 0x282708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26751); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28270c:
    // 0x28270c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28270cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282710:
    // 0x282710: 0x0  nop
    ctx->pc = 0x282710u;
    // NOP
label_282714:
    // 0x282714: 0x0  nop
    ctx->pc = 0x282714u;
    // NOP
label_282718:
    // 0x282718: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282718u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28271c:
    // 0x28271c: 0x0  nop
    ctx->pc = 0x28271cu;
    // NOP
label_282720:
    // 0x282720: 0x3c83126f  .word       0x3C83126F                   # lui         $v1, 0x126F # 00800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4719 << 16));
label_282724:
    // 0x282724: 0x3cd4fdf4  .word       0x3CD4FDF4                   # lui         $s4, 0xFDF4 # 00C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282724u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65012 << 16));
label_282728:
    // 0x282728: 0x40bd47b0  .word       0x40BD47B0                   # dmtc0       $sp, BadVaddr # 000007B0 <InstrIdType: R5900_COP0>
    ctx->pc = 0x282728u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x282728 raw=0x40BD47B0"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28272c:
    // 0x28272c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28272cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282730:
    // 0x282730: 0x0  nop
    ctx->pc = 0x282730u;
    // NOP
label_282734:
    // 0x282734: 0x0  nop
    ctx->pc = 0x282734u;
    // NOP
label_282738:
    // 0x282738: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282738u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28273c:
    // 0x28273c: 0x0  nop
    ctx->pc = 0x28273cu;
    // NOP
label_282740:
    // 0x282740: 0x3c83126f  .word       0x3C83126F                   # lui         $v1, 0x126F # 00800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4719 << 16));
label_282744:
    // 0x282744: 0x3cd4fdf4  .word       0x3CD4FDF4                   # lui         $s4, 0xFDF4 # 00C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282744u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65012 << 16));
label_282748:
    // 0x282748: 0x40bd47b0  .word       0x40BD47B0                   # dmtc0       $sp, BadVaddr # 000007B0 <InstrIdType: R5900_COP0>
    ctx->pc = 0x282748u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x282748 raw=0x40BD47B0"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28274c:
    // 0x28274c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28274cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282750:
    // 0x282750: 0x0  nop
    ctx->pc = 0x282750u;
    // NOP
label_282754:
    // 0x282754: 0x0  nop
    ctx->pc = 0x282754u;
    // NOP
label_282758:
    // 0x282758: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282758u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28275c:
    // 0x28275c: 0x0  nop
    ctx->pc = 0x28275cu;
    // NOP
label_282760:
    // 0x282760: 0x3c656042  .word       0x3C656042                   # lui         $a1, 0x6042 # 00600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24642 << 16));
label_282764:
    // 0x282764: 0x3f32f1aa  .word       0x3F32F1AA                   # lui         $s2, 0xF1AA # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282764u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)61866 << 16));
label_282768:
    // 0x282768: 0xc061687f  ll          $at, 0x687F($v1)
    ctx->pc = 0x282768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26751); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28276c:
    // 0x28276c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28276cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282770:
    // 0x282770: 0x0  nop
    ctx->pc = 0x282770u;
    // NOP
label_282774:
    // 0x282774: 0x0  nop
    ctx->pc = 0x282774u;
    // NOP
label_282778:
    // 0x282778: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282778u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28277c:
    // 0x28277c: 0x0  nop
    ctx->pc = 0x28277cu;
    // NOP
label_282780:
    // 0x282780: 0x3f30a3d7  .word       0x3F30A3D7                   # lui         $s0, 0xA3D7 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282780u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41943 << 16));
label_282784:
    // 0x282784: 0x3cbc6a7f  .word       0x3CBC6A7F                   # lui         $gp, 0x6A7F # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282784u;
    SET_GPR_S32(ctx, 28, (int32_t)((uint32_t)27263 << 16));
label_282788:
    // 0x282788: 0xc061687f  ll          $at, 0x687F($v1)
    ctx->pc = 0x282788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26751); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_28278c:
    // 0x28278c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28278cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_282790:
    // 0x282790: 0x0  nop
    ctx->pc = 0x282790u;
    // NOP
label_282794:
    // 0x282794: 0x0  nop
    ctx->pc = 0x282794u;
    // NOP
label_282798:
    // 0x282798: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x282798u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28279c:
    // 0x28279c: 0x0  nop
    ctx->pc = 0x28279cu;
    // NOP
    ctx->pc = 0x2827a0u;
    return;
}

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


void FUN_0019b850_part256(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x218080u: goto label_218080;
        case 0x218084u: goto label_218084;
        case 0x218088u: goto label_218088;
        case 0x21808cu: goto label_21808c;
        case 0x218090u: goto label_218090;
        case 0x218094u: goto label_218094;
        case 0x218098u: goto label_218098;
        case 0x21809cu: goto label_21809c;
        case 0x2180a0u: goto label_2180a0;
        case 0x2180a4u: goto label_2180a4;
        case 0x2180a8u: goto label_2180a8;
        case 0x2180acu: goto label_2180ac;
        case 0x2180b0u: goto label_2180b0;
        case 0x2180b4u: goto label_2180b4;
        case 0x2180b8u: goto label_2180b8;
        case 0x2180bcu: goto label_2180bc;
        case 0x2180c0u: goto label_2180c0;
        case 0x2180c4u: goto label_2180c4;
        case 0x2180c8u: goto label_2180c8;
        case 0x2180ccu: goto label_2180cc;
        case 0x2180d0u: goto label_2180d0;
        case 0x2180d4u: goto label_2180d4;
        case 0x2180d8u: goto label_2180d8;
        case 0x2180dcu: goto label_2180dc;
        case 0x2180e0u: goto label_2180e0;
        case 0x2180e4u: goto label_2180e4;
        case 0x2180e8u: goto label_2180e8;
        case 0x2180ecu: goto label_2180ec;
        case 0x2180f0u: goto label_2180f0;
        case 0x2180f4u: goto label_2180f4;
        case 0x2180f8u: goto label_2180f8;
        case 0x2180fcu: goto label_2180fc;
        case 0x218100u: goto label_218100;
        case 0x218104u: goto label_218104;
        case 0x218108u: goto label_218108;
        case 0x21810cu: goto label_21810c;
        case 0x218110u: goto label_218110;
        case 0x218114u: goto label_218114;
        case 0x218118u: goto label_218118;
        case 0x21811cu: goto label_21811c;
        case 0x218120u: goto label_218120;
        case 0x218124u: goto label_218124;
        case 0x218128u: goto label_218128;
        case 0x21812cu: goto label_21812c;
        case 0x218130u: goto label_218130;
        case 0x218134u: goto label_218134;
        case 0x218138u: goto label_218138;
        case 0x21813cu: goto label_21813c;
        case 0x218140u: goto label_218140;
        case 0x218144u: goto label_218144;
        case 0x218148u: goto label_218148;
        case 0x21814cu: goto label_21814c;
        case 0x218150u: goto label_218150;
        case 0x218154u: goto label_218154;
        case 0x218158u: goto label_218158;
        case 0x21815cu: goto label_21815c;
        case 0x218160u: goto label_218160;
        case 0x218164u: goto label_218164;
        case 0x218168u: goto label_218168;
        case 0x21816cu: goto label_21816c;
        case 0x218170u: goto label_218170;
        case 0x218174u: goto label_218174;
        case 0x218178u: goto label_218178;
        case 0x21817cu: goto label_21817c;
        case 0x218180u: goto label_218180;
        case 0x218184u: goto label_218184;
        case 0x218188u: goto label_218188;
        case 0x21818cu: goto label_21818c;
        case 0x218190u: goto label_218190;
        case 0x218194u: goto label_218194;
        case 0x218198u: goto label_218198;
        case 0x21819cu: goto label_21819c;
        case 0x2181a0u: goto label_2181a0;
        case 0x2181a4u: goto label_2181a4;
        case 0x2181a8u: goto label_2181a8;
        case 0x2181acu: goto label_2181ac;
        case 0x2181b0u: goto label_2181b0;
        case 0x2181b4u: goto label_2181b4;
        case 0x2181b8u: goto label_2181b8;
        case 0x2181bcu: goto label_2181bc;
        case 0x2181c0u: goto label_2181c0;
        case 0x2181c4u: goto label_2181c4;
        case 0x2181c8u: goto label_2181c8;
        case 0x2181ccu: goto label_2181cc;
        case 0x2181d0u: goto label_2181d0;
        case 0x2181d4u: goto label_2181d4;
        case 0x2181d8u: goto label_2181d8;
        case 0x2181dcu: goto label_2181dc;
        case 0x2181e0u: goto label_2181e0;
        case 0x2181e4u: goto label_2181e4;
        case 0x2181e8u: goto label_2181e8;
        case 0x2181ecu: goto label_2181ec;
        case 0x2181f0u: goto label_2181f0;
        case 0x2181f4u: goto label_2181f4;
        case 0x2181f8u: goto label_2181f8;
        case 0x2181fcu: goto label_2181fc;
        case 0x218200u: goto label_218200;
        case 0x218204u: goto label_218204;
        case 0x218208u: goto label_218208;
        case 0x21820cu: goto label_21820c;
        case 0x218210u: goto label_218210;
        case 0x218214u: goto label_218214;
        case 0x218218u: goto label_218218;
        case 0x21821cu: goto label_21821c;
        case 0x218220u: goto label_218220;
        case 0x218224u: goto label_218224;
        case 0x218228u: goto label_218228;
        case 0x21822cu: goto label_21822c;
        case 0x218230u: goto label_218230;
        case 0x218234u: goto label_218234;
        case 0x218238u: goto label_218238;
        case 0x21823cu: goto label_21823c;
        case 0x218240u: goto label_218240;
        case 0x218244u: goto label_218244;
        case 0x218248u: goto label_218248;
        case 0x21824cu: goto label_21824c;
        case 0x218250u: goto label_218250;
        case 0x218254u: goto label_218254;
        case 0x218258u: goto label_218258;
        case 0x21825cu: goto label_21825c;
        case 0x218260u: goto label_218260;
        case 0x218264u: goto label_218264;
        case 0x218268u: goto label_218268;
        case 0x21826cu: goto label_21826c;
        case 0x218270u: goto label_218270;
        case 0x218274u: goto label_218274;
        case 0x218278u: goto label_218278;
        case 0x21827cu: goto label_21827c;
        case 0x218280u: goto label_218280;
        case 0x218284u: goto label_218284;
        case 0x218288u: goto label_218288;
        case 0x21828cu: goto label_21828c;
        case 0x218290u: goto label_218290;
        case 0x218294u: goto label_218294;
        case 0x218298u: goto label_218298;
        case 0x21829cu: goto label_21829c;
        case 0x2182a0u: goto label_2182a0;
        case 0x2182a4u: goto label_2182a4;
        case 0x2182a8u: goto label_2182a8;
        case 0x2182acu: goto label_2182ac;
        case 0x2182b0u: goto label_2182b0;
        case 0x2182b4u: goto label_2182b4;
        case 0x2182b8u: goto label_2182b8;
        case 0x2182bcu: goto label_2182bc;
        case 0x2182c0u: goto label_2182c0;
        case 0x2182c4u: goto label_2182c4;
        case 0x2182c8u: goto label_2182c8;
        case 0x2182ccu: goto label_2182cc;
        case 0x2182d0u: goto label_2182d0;
        case 0x2182d4u: goto label_2182d4;
        case 0x2182d8u: goto label_2182d8;
        case 0x2182dcu: goto label_2182dc;
        case 0x2182e0u: goto label_2182e0;
        case 0x2182e4u: goto label_2182e4;
        case 0x2182e8u: goto label_2182e8;
        case 0x2182ecu: goto label_2182ec;
        case 0x2182f0u: goto label_2182f0;
        case 0x2182f4u: goto label_2182f4;
        case 0x2182f8u: goto label_2182f8;
        case 0x2182fcu: goto label_2182fc;
        case 0x218300u: goto label_218300;
        case 0x218304u: goto label_218304;
        case 0x218308u: goto label_218308;
        case 0x21830cu: goto label_21830c;
        case 0x218310u: goto label_218310;
        case 0x218314u: goto label_218314;
        case 0x218318u: goto label_218318;
        case 0x21831cu: goto label_21831c;
        case 0x218320u: goto label_218320;
        case 0x218324u: goto label_218324;
        case 0x218328u: goto label_218328;
        case 0x21832cu: goto label_21832c;
        case 0x218330u: goto label_218330;
        case 0x218334u: goto label_218334;
        case 0x218338u: goto label_218338;
        case 0x21833cu: goto label_21833c;
        case 0x218340u: goto label_218340;
        case 0x218344u: goto label_218344;
        case 0x218348u: goto label_218348;
        case 0x21834cu: goto label_21834c;
        case 0x218350u: goto label_218350;
        case 0x218354u: goto label_218354;
        case 0x218358u: goto label_218358;
        case 0x21835cu: goto label_21835c;
        case 0x218360u: goto label_218360;
        case 0x218364u: goto label_218364;
        case 0x218368u: goto label_218368;
        case 0x21836cu: goto label_21836c;
        case 0x218370u: goto label_218370;
        case 0x218374u: goto label_218374;
        case 0x218378u: goto label_218378;
        case 0x21837cu: goto label_21837c;
        case 0x218380u: goto label_218380;
        case 0x218384u: goto label_218384;
        case 0x218388u: goto label_218388;
        case 0x21838cu: goto label_21838c;
        case 0x218390u: goto label_218390;
        case 0x218394u: goto label_218394;
        case 0x218398u: goto label_218398;
        case 0x21839cu: goto label_21839c;
        case 0x2183a0u: goto label_2183a0;
        case 0x2183a4u: goto label_2183a4;
        case 0x2183a8u: goto label_2183a8;
        case 0x2183acu: goto label_2183ac;
        case 0x2183b0u: goto label_2183b0;
        case 0x2183b4u: goto label_2183b4;
        case 0x2183b8u: goto label_2183b8;
        case 0x2183bcu: goto label_2183bc;
        case 0x2183c0u: goto label_2183c0;
        case 0x2183c4u: goto label_2183c4;
        case 0x2183c8u: goto label_2183c8;
        case 0x2183ccu: goto label_2183cc;
        case 0x2183d0u: goto label_2183d0;
        case 0x2183d4u: goto label_2183d4;
        case 0x2183d8u: goto label_2183d8;
        case 0x2183dcu: goto label_2183dc;
        case 0x2183e0u: goto label_2183e0;
        case 0x2183e4u: goto label_2183e4;
        case 0x2183e8u: goto label_2183e8;
        case 0x2183ecu: goto label_2183ec;
        case 0x2183f0u: goto label_2183f0;
        case 0x2183f4u: goto label_2183f4;
        case 0x2183f8u: goto label_2183f8;
        case 0x2183fcu: goto label_2183fc;
        case 0x218400u: goto label_218400;
        case 0x218404u: goto label_218404;
        case 0x218408u: goto label_218408;
        case 0x21840cu: goto label_21840c;
        case 0x218410u: goto label_218410;
        case 0x218414u: goto label_218414;
        case 0x218418u: goto label_218418;
        case 0x21841cu: goto label_21841c;
        case 0x218420u: goto label_218420;
        case 0x218424u: goto label_218424;
        case 0x218428u: goto label_218428;
        case 0x21842cu: goto label_21842c;
        case 0x218430u: goto label_218430;
        case 0x218434u: goto label_218434;
        case 0x218438u: goto label_218438;
        case 0x21843cu: goto label_21843c;
        case 0x218440u: goto label_218440;
        case 0x218444u: goto label_218444;
        case 0x218448u: goto label_218448;
        case 0x21844cu: goto label_21844c;
        case 0x218450u: goto label_218450;
        case 0x218454u: goto label_218454;
        case 0x218458u: goto label_218458;
        case 0x21845cu: goto label_21845c;
        case 0x218460u: goto label_218460;
        case 0x218464u: goto label_218464;
        case 0x218468u: goto label_218468;
        case 0x21846cu: goto label_21846c;
        case 0x218470u: goto label_218470;
        case 0x218474u: goto label_218474;
        case 0x218478u: goto label_218478;
        case 0x21847cu: goto label_21847c;
        case 0x218480u: goto label_218480;
        case 0x218484u: goto label_218484;
        case 0x218488u: goto label_218488;
        case 0x21848cu: goto label_21848c;
        case 0x218490u: goto label_218490;
        case 0x218494u: goto label_218494;
        case 0x218498u: goto label_218498;
        case 0x21849cu: goto label_21849c;
        case 0x2184a0u: goto label_2184a0;
        case 0x2184a4u: goto label_2184a4;
        case 0x2184a8u: goto label_2184a8;
        case 0x2184acu: goto label_2184ac;
        case 0x2184b0u: goto label_2184b0;
        case 0x2184b4u: goto label_2184b4;
        case 0x2184b8u: goto label_2184b8;
        case 0x2184bcu: goto label_2184bc;
        case 0x2184c0u: goto label_2184c0;
        case 0x2184c4u: goto label_2184c4;
        case 0x2184c8u: goto label_2184c8;
        case 0x2184ccu: goto label_2184cc;
        case 0x2184d0u: goto label_2184d0;
        case 0x2184d4u: goto label_2184d4;
        case 0x2184d8u: goto label_2184d8;
        case 0x2184dcu: goto label_2184dc;
        case 0x2184e0u: goto label_2184e0;
        case 0x2184e4u: goto label_2184e4;
        case 0x2184e8u: goto label_2184e8;
        case 0x2184ecu: goto label_2184ec;
        case 0x2184f0u: goto label_2184f0;
        case 0x2184f4u: goto label_2184f4;
        case 0x2184f8u: goto label_2184f8;
        case 0x2184fcu: goto label_2184fc;
        case 0x218500u: goto label_218500;
        case 0x218504u: goto label_218504;
        case 0x218508u: goto label_218508;
        case 0x21850cu: goto label_21850c;
        case 0x218510u: goto label_218510;
        case 0x218514u: goto label_218514;
        case 0x218518u: goto label_218518;
        case 0x21851cu: goto label_21851c;
        case 0x218520u: goto label_218520;
        case 0x218524u: goto label_218524;
        case 0x218528u: goto label_218528;
        case 0x21852cu: goto label_21852c;
        case 0x218530u: goto label_218530;
        case 0x218534u: goto label_218534;
        case 0x218538u: goto label_218538;
        case 0x21853cu: goto label_21853c;
        case 0x218540u: goto label_218540;
        case 0x218544u: goto label_218544;
        case 0x218548u: goto label_218548;
        case 0x21854cu: goto label_21854c;
        case 0x218550u: goto label_218550;
        case 0x218554u: goto label_218554;
        case 0x218558u: goto label_218558;
        case 0x21855cu: goto label_21855c;
        case 0x218560u: goto label_218560;
        case 0x218564u: goto label_218564;
        case 0x218568u: goto label_218568;
        case 0x21856cu: goto label_21856c;
        case 0x218570u: goto label_218570;
        case 0x218574u: goto label_218574;
        case 0x218578u: goto label_218578;
        case 0x21857cu: goto label_21857c;
        case 0x218580u: goto label_218580;
        case 0x218584u: goto label_218584;
        case 0x218588u: goto label_218588;
        case 0x21858cu: goto label_21858c;
        case 0x218590u: goto label_218590;
        case 0x218594u: goto label_218594;
        case 0x218598u: goto label_218598;
        case 0x21859cu: goto label_21859c;
        case 0x2185a0u: goto label_2185a0;
        case 0x2185a4u: goto label_2185a4;
        case 0x2185a8u: goto label_2185a8;
        case 0x2185acu: goto label_2185ac;
        case 0x2185b0u: goto label_2185b0;
        case 0x2185b4u: goto label_2185b4;
        case 0x2185b8u: goto label_2185b8;
        case 0x2185bcu: goto label_2185bc;
        case 0x2185c0u: goto label_2185c0;
        case 0x2185c4u: goto label_2185c4;
        case 0x2185c8u: goto label_2185c8;
        case 0x2185ccu: goto label_2185cc;
        case 0x2185d0u: goto label_2185d0;
        case 0x2185d4u: goto label_2185d4;
        case 0x2185d8u: goto label_2185d8;
        case 0x2185dcu: goto label_2185dc;
        case 0x2185e0u: goto label_2185e0;
        case 0x2185e4u: goto label_2185e4;
        case 0x2185e8u: goto label_2185e8;
        case 0x2185ecu: goto label_2185ec;
        case 0x2185f0u: goto label_2185f0;
        case 0x2185f4u: goto label_2185f4;
        case 0x2185f8u: goto label_2185f8;
        case 0x2185fcu: goto label_2185fc;
        case 0x218600u: goto label_218600;
        case 0x218604u: goto label_218604;
        case 0x218608u: goto label_218608;
        case 0x21860cu: goto label_21860c;
        case 0x218610u: goto label_218610;
        case 0x218614u: goto label_218614;
        case 0x218618u: goto label_218618;
        case 0x21861cu: goto label_21861c;
        case 0x218620u: goto label_218620;
        case 0x218624u: goto label_218624;
        case 0x218628u: goto label_218628;
        case 0x21862cu: goto label_21862c;
        case 0x218630u: goto label_218630;
        case 0x218634u: goto label_218634;
        case 0x218638u: goto label_218638;
        case 0x21863cu: goto label_21863c;
        case 0x218640u: goto label_218640;
        case 0x218644u: goto label_218644;
        case 0x218648u: goto label_218648;
        case 0x21864cu: goto label_21864c;
        case 0x218650u: goto label_218650;
        case 0x218654u: goto label_218654;
        case 0x218658u: goto label_218658;
        case 0x21865cu: goto label_21865c;
        case 0x218660u: goto label_218660;
        case 0x218664u: goto label_218664;
        case 0x218668u: goto label_218668;
        case 0x21866cu: goto label_21866c;
        case 0x218670u: goto label_218670;
        case 0x218674u: goto label_218674;
        case 0x218678u: goto label_218678;
        case 0x21867cu: goto label_21867c;
        case 0x218680u: goto label_218680;
        case 0x218684u: goto label_218684;
        case 0x218688u: goto label_218688;
        case 0x21868cu: goto label_21868c;
        case 0x218690u: goto label_218690;
        case 0x218694u: goto label_218694;
        case 0x218698u: goto label_218698;
        case 0x21869cu: goto label_21869c;
        case 0x2186a0u: goto label_2186a0;
        case 0x2186a4u: goto label_2186a4;
        case 0x2186a8u: goto label_2186a8;
        case 0x2186acu: goto label_2186ac;
        case 0x2186b0u: goto label_2186b0;
        case 0x2186b4u: goto label_2186b4;
        case 0x2186b8u: goto label_2186b8;
        case 0x2186bcu: goto label_2186bc;
        case 0x2186c0u: goto label_2186c0;
        case 0x2186c4u: goto label_2186c4;
        case 0x2186c8u: goto label_2186c8;
        case 0x2186ccu: goto label_2186cc;
        case 0x2186d0u: goto label_2186d0;
        case 0x2186d4u: goto label_2186d4;
        case 0x2186d8u: goto label_2186d8;
        case 0x2186dcu: goto label_2186dc;
        case 0x2186e0u: goto label_2186e0;
        case 0x2186e4u: goto label_2186e4;
        case 0x2186e8u: goto label_2186e8;
        case 0x2186ecu: goto label_2186ec;
        case 0x2186f0u: goto label_2186f0;
        case 0x2186f4u: goto label_2186f4;
        case 0x2186f8u: goto label_2186f8;
        case 0x2186fcu: goto label_2186fc;
        case 0x218700u: goto label_218700;
        case 0x218704u: goto label_218704;
        case 0x218708u: goto label_218708;
        case 0x21870cu: goto label_21870c;
        case 0x218710u: goto label_218710;
        case 0x218714u: goto label_218714;
        case 0x218718u: goto label_218718;
        case 0x21871cu: goto label_21871c;
        case 0x218720u: goto label_218720;
        case 0x218724u: goto label_218724;
        case 0x218728u: goto label_218728;
        case 0x21872cu: goto label_21872c;
        case 0x218730u: goto label_218730;
        case 0x218734u: goto label_218734;
        case 0x218738u: goto label_218738;
        case 0x21873cu: goto label_21873c;
        case 0x218740u: goto label_218740;
        case 0x218744u: goto label_218744;
        case 0x218748u: goto label_218748;
        case 0x21874cu: goto label_21874c;
        case 0x218750u: goto label_218750;
        case 0x218754u: goto label_218754;
        case 0x218758u: goto label_218758;
        case 0x21875cu: goto label_21875c;
        case 0x218760u: goto label_218760;
        case 0x218764u: goto label_218764;
        case 0x218768u: goto label_218768;
        case 0x21876cu: goto label_21876c;
        case 0x218770u: goto label_218770;
        case 0x218774u: goto label_218774;
        case 0x218778u: goto label_218778;
        case 0x21877cu: goto label_21877c;
        case 0x218780u: goto label_218780;
        case 0x218784u: goto label_218784;
        case 0x218788u: goto label_218788;
        case 0x21878cu: goto label_21878c;
        case 0x218790u: goto label_218790;
        case 0x218794u: goto label_218794;
        case 0x218798u: goto label_218798;
        case 0x21879cu: goto label_21879c;
        case 0x2187a0u: goto label_2187a0;
        case 0x2187a4u: goto label_2187a4;
        case 0x2187a8u: goto label_2187a8;
        case 0x2187acu: goto label_2187ac;
        case 0x2187b0u: goto label_2187b0;
        case 0x2187b4u: goto label_2187b4;
        case 0x2187b8u: goto label_2187b8;
        case 0x2187bcu: goto label_2187bc;
        case 0x2187c0u: goto label_2187c0;
        case 0x2187c4u: goto label_2187c4;
        case 0x2187c8u: goto label_2187c8;
        case 0x2187ccu: goto label_2187cc;
        case 0x2187d0u: goto label_2187d0;
        case 0x2187d4u: goto label_2187d4;
        case 0x2187d8u: goto label_2187d8;
        case 0x2187dcu: goto label_2187dc;
        case 0x2187e0u: goto label_2187e0;
        case 0x2187e4u: goto label_2187e4;
        case 0x2187e8u: goto label_2187e8;
        case 0x2187ecu: goto label_2187ec;
        case 0x2187f0u: goto label_2187f0;
        case 0x2187f4u: goto label_2187f4;
        case 0x2187f8u: goto label_2187f8;
        case 0x2187fcu: goto label_2187fc;
        case 0x218800u: goto label_218800;
        case 0x218804u: goto label_218804;
        case 0x218808u: goto label_218808;
        case 0x21880cu: goto label_21880c;
        case 0x218810u: goto label_218810;
        case 0x218814u: goto label_218814;
        case 0x218818u: goto label_218818;
        case 0x21881cu: goto label_21881c;
        case 0x218820u: goto label_218820;
        case 0x218824u: goto label_218824;
        case 0x218828u: goto label_218828;
        case 0x21882cu: goto label_21882c;
        case 0x218830u: goto label_218830;
        case 0x218834u: goto label_218834;
        case 0x218838u: goto label_218838;
        case 0x21883cu: goto label_21883c;
        case 0x218840u: goto label_218840;
        case 0x218844u: goto label_218844;
        case 0x218848u: goto label_218848;
        case 0x21884cu: goto label_21884c;
        default: return;
    }

label_218080:
    // 0x218080: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_218084:
    if (ctx->pc == 0x218084u) {
        ctx->pc = 0x218088u;
        goto label_218088;
    }
    ctx->pc = 0x218080u;
    {
        const bool branch_taken_0x218080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x218080) {
            ctx->pc = 0x21809Cu;
            goto label_21809c;
        }
    }
    ctx->pc = 0x218088u;
label_218088:
    // 0x218088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x218088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21808c:
    // 0x21808c: 0x10000003  b           . + 4 + (0x3 << 2)
label_218090:
    if (ctx->pc == 0x218090u) {
        ctx->pc = 0x218090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21808Cu;
        // 0x218090: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218094u;
        goto label_218094;
    }
    ctx->pc = 0x21808Cu;
    {
        const bool branch_taken_0x21808c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21808Cu;
        // 0x218090: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21808c) {
            ctx->pc = 0x21809Cu;
            goto label_21809c;
        }
    }
    ctx->pc = 0x218094u;
label_218094:
    // 0x218094: 0x0  nop
    ctx->pc = 0x218094u;
    // NOP
label_218098:
    // 0x218098: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x218098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_21809c:
    // 0x21809c: 0x0  nop
    ctx->pc = 0x21809cu;
    // NOP
label_2180a0:
    // 0x2180a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2180a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2180a4:
    // 0x2180a4: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x2180a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_2180a8:
    // 0x2180a8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2180a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2180ac:
    // 0x2180ac: 0x1460ff91  bnez        $v1, . + 4 + (-0x6F << 2)
label_2180b0:
    if (ctx->pc == 0x2180B0u) {
        ctx->pc = 0x2180B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180ACu;
        // 0x2180b0: 0x26730240  addiu       $s3, $s3, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2180B4u;
        goto label_2180b4;
    }
    ctx->pc = 0x2180ACu;
    {
        const bool branch_taken_0x2180ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2180B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180ACu;
        // 0x2180b0: 0x26730240  addiu       $s3, $s3, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2180ac) {
            ctx->pc = 0x217EF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x217ef4; return; }
        }
    }
    ctx->pc = 0x2180B4u;
label_2180b4:
    // 0x2180b4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2180b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2180b8:
    // 0x2180b8: 0x27de00a0  addiu       $fp, $fp, 0xA0
    ctx->pc = 0x2180b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 160));
label_2180bc:
    // 0x2180bc: 0x2ae30002  slti        $v1, $s7, 0x2
    ctx->pc = 0x2180bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_2180c0:
    // 0x2180c0: 0x1460ff89  bnez        $v1, . + 4 + (-0x77 << 2)
label_2180c4:
    if (ctx->pc == 0x2180C4u) {
        ctx->pc = 0x2180C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180C0u;
        // 0x2180c4: 0x26941b00  addiu       $s4, $s4, 0x1B00 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 6912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2180C8u;
        goto label_2180c8;
    }
    ctx->pc = 0x2180C0u;
    {
        const bool branch_taken_0x2180c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2180C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180C0u;
        // 0x2180c4: 0x26941b00  addiu       $s4, $s4, 0x1B00 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 6912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2180c0) {
            ctx->pc = 0x217EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x217ee8; return; }
        }
    }
    ctx->pc = 0x2180C8u;
label_2180c8:
    // 0x2180c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2180c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2180cc:
    // 0x2180cc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2180ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2180d0:
    // 0x2180d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2180d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2180d4:
    // 0x2180d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2180d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2180d8:
    // 0x2180d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2180d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2180dc:
    // 0x2180dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2180dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2180e0:
    // 0x2180e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2180e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2180e4:
    // 0x2180e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2180e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2180e8:
    // 0x2180e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2180e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2180ec:
    // 0x2180ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2180ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2180f0:
    // 0x2180f0: 0x3e00008  jr          $ra
label_2180f4:
    if (ctx->pc == 0x2180F4u) {
        ctx->pc = 0x2180F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180F0u;
        // 0x2180f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2180F8u;
        goto label_2180f8;
    }
    ctx->pc = 0x2180F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2180F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180F0u;
        // 0x2180f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2180F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2180F8u;
label_2180f8:
    // 0x2180f8: 0x0  nop
    ctx->pc = 0x2180f8u;
    // NOP
label_2180fc:
    // 0x2180fc: 0x0  nop
    ctx->pc = 0x2180fcu;
    // NOP
label_218100:
    // 0x218100: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x218100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_218104:
    // 0x218104: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x218104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_218108:
    // 0x218108: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x218108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_21810c:
    // 0x21810c: 0x34468889  ori         $a2, $v0, 0x8889
    ctx->pc = 0x21810cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_218110:
    // 0x218110: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x218110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_218114:
    // 0x218114: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x218114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_218118:
    // 0x218118: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x218118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_21811c:
    // 0x21811c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21811cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_218120:
    // 0x218120: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x218120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_218124:
    // 0x218124: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x218124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_218128:
    // 0x218128: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x218128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21812c:
    // 0x21812c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21812cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_218130:
    // 0x218130: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x218130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_218134:
    // 0x218134: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x218134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_218138:
    // 0x218138: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x218138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_21813c:
    // 0x21813c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x21813cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_218140:
    // 0x218140: 0x8f88926c  lw          $t0, -0x6D94($gp)
    ctx->pc = 0x218140u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939244)));
label_218144:
    // 0x218144: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x218144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_218148:
    // 0x218148: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x218148u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_21814c:
    // 0x21814c: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x21814cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_218150:
    // 0x218150: 0x1010  mfhi        $v0
    ctx->pc = 0x218150u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_218154:
    // 0x218154: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x218154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_218158:
    // 0x218158: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x218158u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_21815c:
    // 0x21815c: 0x45b821  addu        $s7, $v0, $a1
    ctx->pc = 0x21815cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_218160:
    // 0x218160: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x218160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_218164:
    // 0x218164: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x218164u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_218168:
    // 0x218168: 0x0  nop
    ctx->pc = 0x218168u;
    // NOP
label_21816c:
    // 0x21816c: 0x0  nop
    ctx->pc = 0x21816cu;
    // NOP
label_218170:
    // 0x218170: 0x8810  mfhi        $s1
    ctx->pc = 0x218170u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_218174:
    // 0x218174: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x218174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_218178:
    // 0x218178: 0x0  nop
    ctx->pc = 0x218178u;
    // NOP
label_21817c:
    // 0x21817c: 0x0  nop
    ctx->pc = 0x21817cu;
    // NOP
label_218180:
    // 0x218180: 0x1010  mfhi        $v0
    ctx->pc = 0x218180u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_218184:
    // 0x218184: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x218184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_218188:
    // 0x218188: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x218188u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_21818c:
    // 0x21818c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_218190:
    // 0x218190: 0x16e20008  bne         $s7, $v0, . + 4 + (0x8 << 2)
label_218194:
    if (ctx->pc == 0x218194u) {
        ctx->pc = 0x218194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218190u;
        // 0x218194: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218198u;
        goto label_218198;
    }
    ctx->pc = 0x218190u;
    {
        const bool branch_taken_0x218190 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x218194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218190u;
        // 0x218194: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218190) {
            ctx->pc = 0x2181B4u;
            goto label_2181b4;
        }
    }
    ctx->pc = 0x218198u;
label_218198:
    // 0x218198: 0x107001a  div         $zero, $t0, $a3
    ctx->pc = 0x218198u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21819c:
    // 0x21819c: 0x0  nop
    ctx->pc = 0x21819cu;
    // NOP
label_2181a0:
    // 0x2181a0: 0x0  nop
    ctx->pc = 0x2181a0u;
    // NOP
label_2181a4:
    // 0x2181a4: 0xb010  mfhi        $s6
    ctx->pc = 0x2181a4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_2181a8:
    // 0x2181a8: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
label_2181ac:
    if (ctx->pc == 0x2181ACu) {
        ctx->pc = 0x2181ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181A8u;
        // 0x2181ac: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2181B0u;
        goto label_2181b0;
    }
    ctx->pc = 0x2181A8u;
    {
        const bool branch_taken_0x2181a8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2181ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181A8u;
        // 0x2181ac: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2181a8) {
            ctx->pc = 0x2181B8u;
            goto label_2181b8;
        }
    }
    ctx->pc = 0x2181B0u;
label_2181b0:
    // 0x2181b0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2181b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2181b4:
    // 0x2181b4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2181b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2181b8:
    // 0x2181b8: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2181b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_2181bc:
    // 0x2181bc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2181bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2181c0:
    // 0x2181c0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2181c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2181c4:
    // 0x2181c4: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x2181c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_2181c8:
    // 0x2181c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2181c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2181cc:
    // 0x2181cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2181ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2181d0:
    // 0x2181d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2181d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2181d4:
    // 0x2181d4: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x2181d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2181d8:
    // 0x2181d8: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2181d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2181dc:
    // 0x2181dc: 0x0  nop
    ctx->pc = 0x2181dcu;
    // NOP
label_2181e0:
    // 0x2181e0: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x2181e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2181e4:
    // 0x2181e4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2181e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2181e8:
    // 0x2181e8: 0xc08675c  jal         func_219D70
label_2181ec:
    if (ctx->pc == 0x2181ECu) {
        ctx->pc = 0x2181ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181E8u;
        // 0x2181ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2181F0u;
        goto label_2181f0;
    }
    ctx->pc = 0x2181E8u;
    SET_GPR_U32(ctx, 31, 0x2181F0u);
    ctx->pc = 0x2181ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181E8u;
    // 0x2181ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219D70u;
    { ctx->pc = 0x219d70; return; }
    ctx->pc = 0x2181F0u;
label_2181f0:
    // 0x2181f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2181f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2181f4:
    // 0x2181f4: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
label_2181f8:
    if (ctx->pc == 0x2181F8u) {
        ctx->pc = 0x2181F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181F4u;
        // 0x2181f8: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2181FCu;
        goto label_2181fc;
    }
    ctx->pc = 0x2181F4u;
    {
        const bool branch_taken_0x2181f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2181F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181F4u;
        // 0x2181f8: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2181f4) {
            ctx->pc = 0x218250u;
            goto label_218250;
        }
    }
    ctx->pc = 0x2181FCu;
label_2181fc:
    // 0x2181fc: 0x172040  sll         $a0, $s7, 1
    ctx->pc = 0x2181fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
label_218200:
    // 0x218200: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x218200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_218204:
    // 0x218204: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x218204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_218208:
    // 0x218208: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x218208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_21820c:
    // 0x21820c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x21820cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_218210:
    // 0x218210: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x218210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_218214:
    // 0x218214: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x218214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_218218:
    // 0x218218: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_21821c:
    if (ctx->pc == 0x21821Cu) {
        ctx->pc = 0x21821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218218u;
        // 0x21821c: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218220u;
        goto label_218220;
    }
    ctx->pc = 0x218218u;
    {
        const bool branch_taken_0x218218 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218218u;
        // 0x21821c: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218218) {
            ctx->pc = 0x218240u;
            goto label_218240;
        }
    }
    ctx->pc = 0x218220u;
label_218220:
    // 0x218220: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x218220u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_218224:
    // 0x218224: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x218224u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_218228:
    // 0x218228: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x218228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_21822c:
    // 0x21822c: 0x76001a  div         $zero, $v1, $s6
    ctx->pc = 0x21822cu;
    { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_218230:
    // 0x218230: 0x0  nop
    ctx->pc = 0x218230u;
    // NOP
label_218234:
    // 0x218234: 0x0  nop
    ctx->pc = 0x218234u;
    // NOP
label_218238:
    // 0x218238: 0x1812  mflo        $v1
    ctx->pc = 0x218238u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_21823c:
    // 0x21823c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21823cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_218240:
    // 0x218240: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x218240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_218244:
    // 0x218244: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x218244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_218248:
    // 0x218248: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x218248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21824c:
    // 0x21824c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x21824cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_218250:
    // 0x218250: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x218250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_218254:
    // 0x218254: 0x2a43000a  slti        $v1, $s2, 0xA
    ctx->pc = 0x218254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
label_218258:
    // 0x218258: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
label_21825c:
    if (ctx->pc == 0x21825Cu) {
        ctx->pc = 0x21825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218258u;
        // 0x21825c: 0x26730240  addiu       $s3, $s3, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218260u;
        goto label_218260;
    }
    ctx->pc = 0x218258u;
    {
        const bool branch_taken_0x218258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218258u;
        // 0x21825c: 0x26730240  addiu       $s3, $s3, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218258) {
            ctx->pc = 0x2181DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2181dc;
        }
    }
    ctx->pc = 0x218260u;
label_218260:
    // 0x218260: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
label_218264:
    if (ctx->pc == 0x218264u) {
        ctx->pc = 0x218268u;
        goto label_218268;
    }
    ctx->pc = 0x218260u;
    {
        const bool branch_taken_0x218260 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x218260) {
            ctx->pc = 0x218280u;
            goto label_218280;
        }
    }
    ctx->pc = 0x218268u;
label_218268:
    // 0x218268: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x218268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_21826c:
    // 0x21826c: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x21826cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_218270:
    // 0x218270: 0x0  nop
    ctx->pc = 0x218270u;
    // NOP
label_218274:
    // 0x218274: 0x0  nop
    ctx->pc = 0x218274u;
    // NOP
label_218278:
    // 0x218278: 0x1812  mflo        $v1
    ctx->pc = 0x218278u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_21827c:
    // 0x21827c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x21827cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_218280:
    // 0x218280: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x218280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_218284:
    // 0x218284: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x218284u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_218288:
    // 0x218288: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x218288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_21828c:
    // 0x21828c: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x21828cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_218290:
    // 0x218290: 0x2bc30002  slti        $v1, $fp, 0x2
    ctx->pc = 0x218290u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
label_218294:
    // 0x218294: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
label_218298:
    if (ctx->pc == 0x218298u) {
        ctx->pc = 0x218298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218294u;
        // 0x218298: 0x26b51b00  addiu       $s5, $s5, 0x1B00 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 6912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21829Cu;
        goto label_21829c;
    }
    ctx->pc = 0x218294u;
    {
        const bool branch_taken_0x218294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218294u;
        // 0x218298: 0x26b51b00  addiu       $s5, $s5, 0x1B00 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 6912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218294) {
            ctx->pc = 0x2181C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2181c0;
        }
    }
    ctx->pc = 0x21829Cu;
label_21829c:
    // 0x21829c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x21829cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2182a0:
    // 0x2182a0: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x2182a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2182a4:
    // 0x2182a4: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x2182a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2182a8:
    // 0x2182a8: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x2182a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_2182ac:
    // 0x2182ac: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2182b0:
    if (ctx->pc == 0x2182B0u) {
        ctx->pc = 0x2182B4u;
        goto label_2182b4;
    }
    ctx->pc = 0x2182ACu;
    {
        const bool branch_taken_0x2182ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2182ac) {
            ctx->pc = 0x2182BCu;
            goto label_2182bc;
        }
    }
    ctx->pc = 0x2182B4u;
label_2182b4:
    // 0x2182b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2182b8:
    if (ctx->pc == 0x2182B8u) {
        ctx->pc = 0x2182B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2182B4u;
        // 0x2182b8: 0x519c0  sll         $v1, $a1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2182BCu;
        goto label_2182bc;
    }
    ctx->pc = 0x2182B4u;
    {
        const bool branch_taken_0x2182b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2182B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2182B4u;
        // 0x2182b8: 0x519c0  sll         $v1, $a1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2182b4) {
            ctx->pc = 0x2182C4u;
            goto label_2182c4;
        }
    }
    ctx->pc = 0x2182BCu;
label_2182bc:
    // 0x2182bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2182bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2182c0:
    // 0x2182c0: 0x519c0  sll         $v1, $a1, 7
    ctx->pc = 0x2182c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_2182c4:
    // 0x2182c4: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x2182c4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2182c8:
    // 0x2182c8: 0x0  nop
    ctx->pc = 0x2182c8u;
    // NOP
label_2182cc:
    // 0x2182cc: 0x0  nop
    ctx->pc = 0x2182ccu;
    // NOP
label_2182d0:
    // 0x2182d0: 0x1812  mflo        $v1
    ctx->pc = 0x2182d0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_2182d4:
    // 0x2182d4: 0xaf839250  sw          $v1, -0x6DB0($gp)
    ctx->pc = 0x2182d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939216), GPR_U32(ctx, 3));
label_2182d8:
    // 0x2182d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2182d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2182dc:
    // 0x2182dc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2182dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2182e0:
    // 0x2182e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2182e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2182e4:
    // 0x2182e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2182e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2182e8:
    // 0x2182e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2182e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2182ec:
    // 0x2182ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2182ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2182f0:
    // 0x2182f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2182f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2182f4:
    // 0x2182f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2182f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2182f8:
    // 0x2182f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2182f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2182fc:
    // 0x2182fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2182fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_218300:
    // 0x218300: 0x3e00008  jr          $ra
label_218304:
    if (ctx->pc == 0x218304u) {
        ctx->pc = 0x218304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218300u;
        // 0x218304: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218308u;
        goto label_218308;
    }
    ctx->pc = 0x218300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218300u;
        // 0x218304: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218308u;
label_218308:
    // 0x218308: 0x0  nop
    ctx->pc = 0x218308u;
    // NOP
label_21830c:
    // 0x21830c: 0x0  nop
    ctx->pc = 0x21830cu;
    // NOP
label_218310:
    // 0x218310: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x218310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_218314:
    // 0x218314: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x218314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_218318:
    // 0x218318: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x218318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_21831c:
    // 0x21831c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21831cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_218320:
    // 0x218320: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x218320u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218324:
    // 0x218324: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x218324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_218328:
    // 0x218328: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x218328u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21832c:
    // 0x21832c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21832cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_218330:
    // 0x218330: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x218330u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_218334:
    // 0x218334: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x218334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_218338:
    // 0x218338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x218338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21833c:
    // 0x21833c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21833cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_218340:
    // 0x218340: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x218340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218344:
    // 0x218344: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x218344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218348:
    // 0x218348: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x218348u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21834c:
    // 0x21834c: 0x0  nop
    ctx->pc = 0x21834cu;
    // NOP
label_218350:
    // 0x218350: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x218350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_218354:
    // 0x218354: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218358:
    // 0x218358: 0xc08675c  jal         func_219D70
label_21835c:
    if (ctx->pc == 0x21835Cu) {
        ctx->pc = 0x21835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218358u;
        // 0x21835c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218360u;
        goto label_218360;
    }
    ctx->pc = 0x218358u;
    SET_GPR_U32(ctx, 31, 0x218360u);
    ctx->pc = 0x21835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218358u;
    // 0x21835c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219D70u;
    { ctx->pc = 0x219d70; return; }
    ctx->pc = 0x218360u;
label_218360:
    // 0x218360: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x218360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_218364:
    // 0x218364: 0x1043006f  beq         $v0, $v1, . + 4 + (0x6F << 2)
label_218368:
    if (ctx->pc == 0x218368u) {
        ctx->pc = 0x218368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218364u;
        // 0x218368: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21836Cu;
        goto label_21836c;
    }
    ctx->pc = 0x218364u;
    {
        const bool branch_taken_0x218364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x218368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218364u;
        // 0x218368: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218364) {
            ctx->pc = 0x218524u;
            goto label_218524;
        }
    }
    ctx->pc = 0x21836Cu;
label_21836c:
    // 0x21836c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x21836cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_218370:
    // 0x218370: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x218370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_218374:
    // 0x218374: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x218374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_218378:
    // 0x218378: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x218378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_21837c:
    // 0x21837c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x21837cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_218380:
    // 0x218380: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x218380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_218384:
    // 0x218384: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x218384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_218388:
    // 0x218388: 0x939021  addu        $s2, $a0, $s3
    ctx->pc = 0x218388u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_21838c:
    // 0x21838c: 0x92450220  lbu         $a1, 0x220($s2)
    ctx->pc = 0x21838cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 544)));
label_218390:
    // 0x218390: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x218390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_218394:
    // 0x218394: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x218394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_218398:
    // 0x218398: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x218398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_21839c:
    // 0x21839c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x21839cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2183a0:
    // 0x2183a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2183a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2183a4:
    // 0x2183a4: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x2183a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_2183a8:
    // 0x2183a8: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
label_2183ac:
    if (ctx->pc == 0x2183ACu) {
        ctx->pc = 0x2183B0u;
        goto label_2183b0;
    }
    ctx->pc = 0x2183A8u;
    {
        const bool branch_taken_0x2183a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2183a8) {
            ctx->pc = 0x218524u;
            goto label_218524;
        }
    }
    ctx->pc = 0x2183B0u;
label_2183b0:
    // 0x2183b0: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
label_2183b4:
    if (ctx->pc == 0x2183B4u) {
        ctx->pc = 0x2183B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183B0u;
        // 0x2183b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2183B8u;
        goto label_2183b8;
    }
    ctx->pc = 0x2183B0u;
    {
        const bool branch_taken_0x2183b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2183B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183B0u;
        // 0x2183b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183b0) {
            ctx->pc = 0x218508u;
            goto label_218508;
        }
    }
    ctx->pc = 0x2183B8u;
label_2183b8:
    // 0x2183b8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2183b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2183bc:
    // 0x2183bc: 0x27a70084  addiu       $a3, $sp, 0x84
    ctx->pc = 0x2183bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_2183c0:
    // 0x2183c0: 0x27a80088  addiu       $t0, $sp, 0x88
    ctx->pc = 0x2183c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_2183c4:
    // 0x2183c4: 0x27a9008c  addiu       $t1, $sp, 0x8C
    ctx->pc = 0x2183c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_2183c8:
    // 0x2183c8: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2183c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_2183cc:
    // 0x2183cc: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2183ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_2183d0:
    // 0x2183d0: 0xc0861cc  jal         func_218730
label_2183d4:
    if (ctx->pc == 0x2183D4u) {
        ctx->pc = 0x2183D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183D0u;
        // 0x2183d4: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2183D8u;
        goto label_2183d8;
    }
    ctx->pc = 0x2183D0u;
    SET_GPR_U32(ctx, 31, 0x2183D8u);
    ctx->pc = 0x2183D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183D0u;
    // 0x2183d4: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218730u;
    goto label_218730;
    ctx->pc = 0x2183D8u;
label_2183d8:
    // 0x2183d8: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x2183d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2183dc:
    // 0x2183dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2183dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2183e0:
    // 0x2183e0: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x2183e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2183e4:
    // 0x2183e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2183e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2183e8:
    // 0x2183e8: 0xc7ae0088  lwc1        $f14, 0x88($sp)
    ctx->pc = 0x2183e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2183ec:
    // 0x2183ec: 0x50200b  movn        $a0, $v0, $s0
    ctx->pc = 0x2183ecu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_2183f0:
    // 0x2183f0: 0xc085cf4  jal         func_2173D0
label_2183f4:
    if (ctx->pc == 0x2183F4u) {
        ctx->pc = 0x2183F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183F0u;
        // 0x2183f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2183F8u;
        goto label_2183f8;
    }
    ctx->pc = 0x2183F0u;
    SET_GPR_U32(ctx, 31, 0x2183F8u);
    ctx->pc = 0x2183F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183F0u;
    // 0x2183f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173D0u;
    { ctx->pc = 0x2173d0; return; }
    ctx->pc = 0x2183F8u;
label_2183f8:
    // 0x2183f8: 0x1a80001c  blez        $s4, . + 4 + (0x1C << 2)
label_2183fc:
    if (ctx->pc == 0x2183FCu) {
        ctx->pc = 0x2183FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183F8u;
        // 0x2183fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218400u;
        goto label_218400;
    }
    ctx->pc = 0x2183F8u;
    {
        const bool branch_taken_0x2183f8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2183FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183F8u;
        // 0x2183fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183f8) {
            ctx->pc = 0x21846Cu;
            goto label_21846c;
        }
    }
    ctx->pc = 0x218400u;
label_218400:
    // 0x218400: 0x8f82926c  lw          $v0, -0x6D94($gp)
    ctx->pc = 0x218400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939244)));
label_218404:
    // 0x218404: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x218404u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_218408:
    // 0x218408: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_21840c:
    if (ctx->pc == 0x21840Cu) {
        ctx->pc = 0x218410u;
        goto label_218410;
    }
    ctx->pc = 0x218408u;
    {
        const bool branch_taken_0x218408 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x218408) {
            ctx->pc = 0x21846Cu;
            goto label_21846c;
        }
    }
    ctx->pc = 0x218410u;
label_218410:
    // 0x218410: 0x8e45022c  lw          $a1, 0x22C($s2)
    ctx->pc = 0x218410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
label_218414:
    // 0x218414: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x218414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_218418:
    // 0x218418: 0x34427e40  ori         $v0, $v0, 0x7E40
    ctx->pc = 0x218418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32320);
label_21841c:
    // 0x21841c: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
label_218420:
    if (ctx->pc == 0x218420u) {
        ctx->pc = 0x218424u;
        goto label_218424;
    }
    ctx->pc = 0x21841Cu;
    {
        const bool branch_taken_0x21841c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x21841c) {
            ctx->pc = 0x21846Cu;
            goto label_21846c;
        }
    }
    ctx->pc = 0x218424u;
label_218424:
    // 0x218424: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_218428:
    if (ctx->pc == 0x218428u) {
        ctx->pc = 0x218428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218424u;
        // 0x218428: 0x3c028888  lui         $v0, 0x8888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21842Cu;
        goto label_21842c;
    }
    ctx->pc = 0x218424u;
    {
        const bool branch_taken_0x218424 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x218428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218424u;
        // 0x218428: 0x3c028888  lui         $v0, 0x8888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218424) {
            ctx->pc = 0x21846Cu;
            goto label_21846c;
        }
    }
    ctx->pc = 0x21842Cu;
label_21842c:
    // 0x21842c: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x21842cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_218430:
    // 0x218430: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x218430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_218434:
    // 0x218434: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x218434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_218438:
    // 0x218438: 0x0  nop
    ctx->pc = 0x218438u;
    // NOP
label_21843c:
    // 0x21843c: 0x0  nop
    ctx->pc = 0x21843cu;
    // NOP
label_218440:
    // 0x218440: 0x1010  mfhi        $v0
    ctx->pc = 0x218440u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_218444:
    // 0x218444: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x218444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_218448:
    // 0x218448: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x218448u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_21844c:
    // 0x21844c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x21844cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_218450:
    // 0x218450: 0x2462ff88  addiu       $v0, $v1, -0x78
    ctx->pc = 0x218450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
label_218454:
    // 0x218454: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x218454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_218458:
    // 0x218458: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_21845c:
    if (ctx->pc == 0x21845Cu) {
        ctx->pc = 0x21845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218458u;
        // 0x21845c: 0x283082a  slt         $at, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x218460u;
        goto label_218460;
    }
    ctx->pc = 0x218458u;
    {
        const bool branch_taken_0x218458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218458u;
        // 0x21845c: 0x283082a  slt         $at, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218458) {
            ctx->pc = 0x21846Cu;
            goto label_21846c;
        }
    }
    ctx->pc = 0x218460u;
label_218460:
    // 0x218460: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_218464:
    if (ctx->pc == 0x218464u) {
        ctx->pc = 0x218468u;
        goto label_218468;
    }
    ctx->pc = 0x218460u;
    {
        const bool branch_taken_0x218460 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x218460) {
            ctx->pc = 0x21846Cu;
            goto label_21846c;
        }
    }
    ctx->pc = 0x218468u;
label_218468:
    // 0x218468: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x218468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21846c:
    // 0x21846c: 0x0  nop
    ctx->pc = 0x21846cu;
    // NOP
label_218470:
    // 0x218470: 0x14800021  bnez        $a0, . + 4 + (0x21 << 2)
label_218474:
    if (ctx->pc == 0x218474u) {
        ctx->pc = 0x218478u;
        goto label_218478;
    }
    ctx->pc = 0x218470u;
    {
        const bool branch_taken_0x218470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x218470) {
            ctx->pc = 0x2184F8u;
            goto label_2184f8;
        }
    }
    ctx->pc = 0x218478u;
label_218478:
    // 0x218478: 0x1a80001d  blez        $s4, . + 4 + (0x1D << 2)
label_21847c:
    if (ctx->pc == 0x21847Cu) {
        ctx->pc = 0x21847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218478u;
        // 0x21847c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218480u;
        goto label_218480;
    }
    ctx->pc = 0x218478u;
    {
        const bool branch_taken_0x218478 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x21847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218478u;
        // 0x21847c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218478) {
            ctx->pc = 0x2184F0u;
            goto label_2184f0;
        }
    }
    ctx->pc = 0x218480u;
label_218480:
    // 0x218480: 0x8f82926c  lw          $v0, -0x6D94($gp)
    ctx->pc = 0x218480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939244)));
label_218484:
    // 0x218484: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x218484u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_218488:
    // 0x218488: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_21848c:
    if (ctx->pc == 0x21848Cu) {
        ctx->pc = 0x218490u;
        goto label_218490;
    }
    ctx->pc = 0x218488u;
    {
        const bool branch_taken_0x218488 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x218488) {
            ctx->pc = 0x2184F0u;
            goto label_2184f0;
        }
    }
    ctx->pc = 0x218490u;
label_218490:
    // 0x218490: 0x8e450228  lw          $a1, 0x228($s2)
    ctx->pc = 0x218490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
label_218494:
    // 0x218494: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x218494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_218498:
    // 0x218498: 0x34427e40  ori         $v0, $v0, 0x7E40
    ctx->pc = 0x218498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32320);
label_21849c:
    // 0x21849c: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
label_2184a0:
    if (ctx->pc == 0x2184A0u) {
        ctx->pc = 0x2184A4u;
        goto label_2184a4;
    }
    ctx->pc = 0x21849Cu;
    {
        const bool branch_taken_0x21849c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x21849c) {
            ctx->pc = 0x2184F0u;
            goto label_2184f0;
        }
    }
    ctx->pc = 0x2184A4u;
label_2184a4:
    // 0x2184a4: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_2184a8:
    if (ctx->pc == 0x2184A8u) {
        ctx->pc = 0x2184A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2184A4u;
        // 0x2184a8: 0x3c028888  lui         $v0, 0x8888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2184ACu;
        goto label_2184ac;
    }
    ctx->pc = 0x2184A4u;
    {
        const bool branch_taken_0x2184a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2184A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2184A4u;
        // 0x2184a8: 0x3c028888  lui         $v0, 0x8888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2184a4) {
            ctx->pc = 0x2184F0u;
            goto label_2184f0;
        }
    }
    ctx->pc = 0x2184ACu;
label_2184ac:
    // 0x2184ac: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x2184acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_2184b0:
    // 0x2184b0: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x2184b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_2184b4:
    // 0x2184b4: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x2184b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2184b8:
    // 0x2184b8: 0x0  nop
    ctx->pc = 0x2184b8u;
    // NOP
label_2184bc:
    // 0x2184bc: 0x0  nop
    ctx->pc = 0x2184bcu;
    // NOP
label_2184c0:
    // 0x2184c0: 0x1010  mfhi        $v0
    ctx->pc = 0x2184c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2184c4:
    // 0x2184c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2184c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2184c8:
    // 0x2184c8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2184c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2184cc:
    // 0x2184cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2184ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2184d0:
    // 0x2184d0: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x2184d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2184d4:
    // 0x2184d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2184d8:
    if (ctx->pc == 0x2184D8u) {
        ctx->pc = 0x2184DCu;
        goto label_2184dc;
    }
    ctx->pc = 0x2184D4u;
    {
        const bool branch_taken_0x2184d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2184d4) {
            ctx->pc = 0x2184F0u;
            goto label_2184f0;
        }
    }
    ctx->pc = 0x2184DCu;
label_2184dc:
    // 0x2184dc: 0x24620078  addiu       $v0, $v1, 0x78
    ctx->pc = 0x2184dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_2184e0:
    // 0x2184e0: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x2184e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2184e4:
    // 0x2184e4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2184e8:
    if (ctx->pc == 0x2184E8u) {
        ctx->pc = 0x2184ECu;
        goto label_2184ec;
    }
    ctx->pc = 0x2184E4u;
    {
        const bool branch_taken_0x2184e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2184e4) {
            ctx->pc = 0x2184F0u;
            goto label_2184f0;
        }
    }
    ctx->pc = 0x2184ECu;
label_2184ec:
    // 0x2184ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2184ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2184f0:
    // 0x2184f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2184f4:
    if (ctx->pc == 0x2184F4u) {
        ctx->pc = 0x2184F8u;
        goto label_2184f8;
    }
    ctx->pc = 0x2184F0u;
    {
        const bool branch_taken_0x2184f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2184f0) {
            ctx->pc = 0x218500u;
            goto label_218500;
        }
    }
    ctx->pc = 0x2184F8u;
label_2184f8:
    // 0x2184f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2184fc:
    if (ctx->pc == 0x2184FCu) {
        ctx->pc = 0x2184FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2184F8u;
        // 0x2184fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218500u;
        goto label_218500;
    }
    ctx->pc = 0x2184F8u;
    {
        const bool branch_taken_0x2184f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2184FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2184F8u;
        // 0x2184fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2184f8) {
            ctx->pc = 0x21850Cu;
            goto label_21850c;
        }
    }
    ctx->pc = 0x218500u;
label_218500:
    // 0x218500: 0x10000002  b           . + 4 + (0x2 << 2)
label_218504:
    if (ctx->pc == 0x218504u) {
        ctx->pc = 0x218504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218500u;
        // 0x218504: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218508u;
        goto label_218508;
    }
    ctx->pc = 0x218500u;
    {
        const bool branch_taken_0x218500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218500u;
        // 0x218504: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218500) {
            ctx->pc = 0x21850Cu;
            goto label_21850c;
        }
    }
    ctx->pc = 0x218508u;
label_218508:
    // 0x218508: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x218508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21850c:
    // 0x21850c: 0x0  nop
    ctx->pc = 0x21850cu;
    // NOP
label_218510:
    // 0x218510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218514:
    // 0x218514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218518:
    // 0x218518: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x218518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21851c:
    // 0x21851c: 0xc085cc4  jal         func_217310
label_218520:
    if (ctx->pc == 0x218520u) {
        ctx->pc = 0x218520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21851Cu;
        // 0x218520: 0x50280b  movn        $a1, $v0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218524u;
        goto label_218524;
    }
    ctx->pc = 0x21851Cu;
    SET_GPR_U32(ctx, 31, 0x218524u);
    ctx->pc = 0x218520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21851Cu;
    // 0x218520: 0x50280b  movn        $a1, $v0, $s0 (Delay Slot)
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x218524u;
label_218524:
    // 0x218524: 0x0  nop
    ctx->pc = 0x218524u;
    // NOP
label_218528:
    // 0x218528: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x218528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21852c:
    // 0x21852c: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x21852cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_218530:
    // 0x218530: 0x1460ff86  bnez        $v1, . + 4 + (-0x7A << 2)
label_218534:
    if (ctx->pc == 0x218534u) {
        ctx->pc = 0x218534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218530u;
        // 0x218534: 0x26730240  addiu       $s3, $s3, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218538u;
        goto label_218538;
    }
    ctx->pc = 0x218530u;
    {
        const bool branch_taken_0x218530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218530u;
        // 0x218534: 0x26730240  addiu       $s3, $s3, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218530) {
            ctx->pc = 0x21834Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21834c;
        }
    }
    ctx->pc = 0x218538u;
label_218538:
    // 0x218538: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x218538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21853c:
    // 0x21853c: 0x26d61b00  addiu       $s6, $s6, 0x1B00
    ctx->pc = 0x21853cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 6912));
label_218540:
    // 0x218540: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x218540u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_218544:
    // 0x218544: 0x1460ff7f  bnez        $v1, . + 4 + (-0x81 << 2)
label_218548:
    if (ctx->pc == 0x218548u) {
        ctx->pc = 0x218548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218544u;
        // 0x218548: 0x26b547b8  addiu       $s5, $s5, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 18360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21854Cu;
        goto label_21854c;
    }
    ctx->pc = 0x218544u;
    {
        const bool branch_taken_0x218544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x218548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218544u;
        // 0x218548: 0x26b547b8  addiu       $s5, $s5, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 18360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218544) {
            ctx->pc = 0x218344u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218344;
        }
    }
    ctx->pc = 0x21854Cu;
label_21854c:
    // 0x21854c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21854cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218550:
    // 0x218550: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x218550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218554:
    // 0x218554: 0x0  nop
    ctx->pc = 0x218554u;
    // NOP
label_218558:
    // 0x218558: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x218558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_21855c:
    // 0x21855c: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x21855cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_218560:
    // 0x218560: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x218560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_218564:
    // 0x218564: 0x90a4367c  lbu         $a0, 0x367C($a1)
    ctx->pc = 0x218564u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13948)));
label_218568:
    // 0x218568: 0x10800060  beqz        $a0, . + 4 + (0x60 << 2)
label_21856c:
    if (ctx->pc == 0x21856Cu) {
        ctx->pc = 0x218570u;
        goto label_218570;
    }
    ctx->pc = 0x218568u;
    {
        const bool branch_taken_0x218568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x218568) {
            ctx->pc = 0x2186ECu;
            goto label_2186ec;
        }
    }
    ctx->pc = 0x218570u;
label_218570:
    // 0x218570: 0x8ca93674  lw          $t1, 0x3674($a1)
    ctx->pc = 0x218570u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13940)));
label_218574:
    // 0x218574: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x218574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_218578:
    // 0x218578: 0x8ca7366c  lw          $a3, 0x366C($a1)
    ctx->pc = 0x218578u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13932)));
label_21857c:
    // 0x21857c: 0x3c08002f  lui         $t0, 0x2F
    ctx->pc = 0x21857cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)47 << 16));
label_218580:
    // 0x218580: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x218580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_218584:
    // 0x218584: 0x25082570  addiu       $t0, $t0, 0x2570
    ctx->pc = 0x218584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9584));
label_218588:
    // 0x218588: 0x93200  sll         $a2, $t1, 8
    ctx->pc = 0x218588u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_21858c:
    // 0x21858c: 0x2625000a  addiu       $a1, $s1, 0xA
    ctx->pc = 0x21858cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_218590:
    // 0x218590: 0xc95023  subu        $t2, $a2, $t1
    ctx->pc = 0x218590u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_218594:
    // 0x218594: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x218594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_218598:
    // 0x218598: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x218598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21859c:
    // 0x21859c: 0x928c0  sll         $a1, $t1, 3
    ctx->pc = 0x21859cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2185a0:
    // 0x2185a0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2185a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_2185a4:
    // 0x2185a4: 0xa93021  addu        $a2, $a1, $t1
    ctx->pc = 0x2185a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_2185a8:
    // 0x2185a8: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x2185a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2185ac:
    // 0x2185ac: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x2185acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_2185b0:
    // 0x2185b0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2185b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2185b4:
    // 0x2185b4: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x2185b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_2185b8:
    // 0x2185b8: 0x538c0  sll         $a3, $a1, 3
    ctx->pc = 0x2185b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2185bc:
    // 0x2185bc: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x2185bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_2185c0:
    // 0x2185c0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x2185c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2185c4:
    // 0x2185c4: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2185c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_2185c8:
    // 0x2185c8: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x2185c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2185cc:
    // 0x2185cc: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2185ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_2185d0:
    // 0x2185d0: 0x25050000  addiu       $a1, $t0, 0x0
    ctx->pc = 0x2185d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 0));
label_2185d4:
    // 0x2185d4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2185d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2185d8:
    // 0x2185d8: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x2185d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_2185dc:
    // 0x2185dc: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x2185dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2185e0:
    // 0x2185e0: 0x8e44022c  lw          $a0, 0x22C($s2)
    ctx->pc = 0x2185e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
label_2185e4:
    // 0x2185e4: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x2185e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2185e8:
    // 0x2185e8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2185e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_2185ec:
    // 0x2185ec: 0x0  nop
    ctx->pc = 0x2185ecu;
    // NOP
label_2185f0:
    // 0x2185f0: 0x1010  mfhi        $v0
    ctx->pc = 0x2185f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2185f4:
    // 0x2185f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2185f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2185f8:
    // 0x2185f8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2185f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2185fc:
    // 0x2185fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2185fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_218600:
    // 0x218600: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x218600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_218604:
    // 0x218604: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_218608:
    if (ctx->pc == 0x218608u) {
        ctx->pc = 0x218608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218604u;
        // 0x218608: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21860Cu;
        goto label_21860c;
    }
    ctx->pc = 0x218604u;
    {
        const bool branch_taken_0x218604 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x218608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218604u;
        // 0x218608: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218604) {
            ctx->pc = 0x218614u;
            goto label_218614;
        }
    }
    ctx->pc = 0x21860Cu;
label_21860c:
    // 0x21860c: 0x10000033  b           . + 4 + (0x33 << 2)
label_218610:
    if (ctx->pc == 0x218610u) {
        ctx->pc = 0x218610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21860Cu;
        // 0x218610: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218614u;
        goto label_218614;
    }
    ctx->pc = 0x21860Cu;
    {
        const bool branch_taken_0x21860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21860Cu;
        // 0x218610: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21860c) {
            ctx->pc = 0x2186DCu;
            goto label_2186dc;
        }
    }
    ctx->pc = 0x218614u;
label_218614:
    // 0x218614: 0x0  nop
    ctx->pc = 0x218614u;
    // NOP
label_218618:
    // 0x218618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x218618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21861c:
    // 0x21861c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21861cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_218620:
    // 0x218620: 0x27a70084  addiu       $a3, $sp, 0x84
    ctx->pc = 0x218620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_218624:
    // 0x218624: 0x27a80088  addiu       $t0, $sp, 0x88
    ctx->pc = 0x218624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_218628:
    // 0x218628: 0x27a9008c  addiu       $t1, $sp, 0x8C
    ctx->pc = 0x218628u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_21862c:
    // 0x21862c: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x21862cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_218630:
    // 0x218630: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x218630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_218634:
    // 0x218634: 0xc0861cc  jal         func_218730
label_218638:
    if (ctx->pc == 0x218638u) {
        ctx->pc = 0x218638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218634u;
        // 0x218638: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21863Cu;
        goto label_21863c;
    }
    ctx->pc = 0x218634u;
    SET_GPR_U32(ctx, 31, 0x21863Cu);
    ctx->pc = 0x218638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218634u;
    // 0x218638: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218730u;
    goto label_218730;
    ctx->pc = 0x21863Cu;
label_21863c:
    // 0x21863c: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x21863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_218640:
    // 0x218640: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x218640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218644:
    // 0x218644: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x218644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_218648:
    // 0x218648: 0xc7ae0088  lwc1        $f14, 0x88($sp)
    ctx->pc = 0x218648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_21864c:
    // 0x21864c: 0xc085cf4  jal         func_2173D0
label_218650:
    if (ctx->pc == 0x218650u) {
        ctx->pc = 0x218650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21864Cu;
        // 0x218650: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218654u;
        goto label_218654;
    }
    ctx->pc = 0x21864Cu;
    SET_GPR_U32(ctx, 31, 0x218654u);
    ctx->pc = 0x218650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21864Cu;
    // 0x218650: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173D0u;
    { ctx->pc = 0x2173d0; return; }
    ctx->pc = 0x218654u;
label_218654:
    // 0x218654: 0x1a80001c  blez        $s4, . + 4 + (0x1C << 2)
label_218658:
    if (ctx->pc == 0x218658u) {
        ctx->pc = 0x218658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218654u;
        // 0x218658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21865Cu;
        goto label_21865c;
    }
    ctx->pc = 0x218654u;
    {
        const bool branch_taken_0x218654 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x218658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218654u;
        // 0x218658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218654) {
            ctx->pc = 0x2186C8u;
            goto label_2186c8;
        }
    }
    ctx->pc = 0x21865Cu;
label_21865c:
    // 0x21865c: 0x8f82926c  lw          $v0, -0x6D94($gp)
    ctx->pc = 0x21865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939244)));
label_218660:
    // 0x218660: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x218660u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_218664:
    // 0x218664: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_218668:
    if (ctx->pc == 0x218668u) {
        ctx->pc = 0x21866Cu;
        goto label_21866c;
    }
    ctx->pc = 0x218664u;
    {
        const bool branch_taken_0x218664 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x218664) {
            ctx->pc = 0x2186C8u;
            goto label_2186c8;
        }
    }
    ctx->pc = 0x21866Cu;
label_21866c:
    // 0x21866c: 0x8e45022c  lw          $a1, 0x22C($s2)
    ctx->pc = 0x21866cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 556)));
label_218670:
    // 0x218670: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x218670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_218674:
    // 0x218674: 0x34427e40  ori         $v0, $v0, 0x7E40
    ctx->pc = 0x218674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32320);
label_218678:
    // 0x218678: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
label_21867c:
    if (ctx->pc == 0x21867Cu) {
        ctx->pc = 0x218680u;
        goto label_218680;
    }
    ctx->pc = 0x218678u;
    {
        const bool branch_taken_0x218678 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x218678) {
            ctx->pc = 0x2186C8u;
            goto label_2186c8;
        }
    }
    ctx->pc = 0x218680u;
label_218680:
    // 0x218680: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_218684:
    if (ctx->pc == 0x218684u) {
        ctx->pc = 0x218684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218680u;
        // 0x218684: 0x3c028888  lui         $v0, 0x8888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218688u;
        goto label_218688;
    }
    ctx->pc = 0x218680u;
    {
        const bool branch_taken_0x218680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x218684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218680u;
        // 0x218684: 0x3c028888  lui         $v0, 0x8888 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218680) {
            ctx->pc = 0x2186C8u;
            goto label_2186c8;
        }
    }
    ctx->pc = 0x218688u;
label_218688:
    // 0x218688: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x218688u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_21868c:
    // 0x21868c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x21868cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_218690:
    // 0x218690: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x218690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_218694:
    // 0x218694: 0x0  nop
    ctx->pc = 0x218694u;
    // NOP
label_218698:
    // 0x218698: 0x0  nop
    ctx->pc = 0x218698u;
    // NOP
label_21869c:
    // 0x21869c: 0x1010  mfhi        $v0
    ctx->pc = 0x21869cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2186a0:
    // 0x2186a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2186a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2186a4:
    // 0x2186a4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2186a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2186a8:
    // 0x2186a8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2186a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2186ac:
    // 0x2186ac: 0x2462ff88  addiu       $v0, $v1, -0x78
    ctx->pc = 0x2186acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
label_2186b0:
    // 0x2186b0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2186b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2186b4:
    // 0x2186b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2186b8:
    if (ctx->pc == 0x2186B8u) {
        ctx->pc = 0x2186B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186B4u;
        // 0x2186b8: 0x283082a  slt         $at, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2186BCu;
        goto label_2186bc;
    }
    ctx->pc = 0x2186B4u;
    {
        const bool branch_taken_0x2186b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2186B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186B4u;
        // 0x2186b8: 0x283082a  slt         $at, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2186b4) {
            ctx->pc = 0x2186C8u;
            goto label_2186c8;
        }
    }
    ctx->pc = 0x2186BCu;
label_2186bc:
    // 0x2186bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2186c0:
    if (ctx->pc == 0x2186C0u) {
        ctx->pc = 0x2186C4u;
        goto label_2186c4;
    }
    ctx->pc = 0x2186BCu;
    {
        const bool branch_taken_0x2186bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2186bc) {
            ctx->pc = 0x2186C8u;
            goto label_2186c8;
        }
    }
    ctx->pc = 0x2186C4u;
label_2186c4:
    // 0x2186c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2186c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2186c8:
    // 0x2186c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2186cc:
    if (ctx->pc == 0x2186CCu) {
        ctx->pc = 0x2186D0u;
        goto label_2186d0;
    }
    ctx->pc = 0x2186C8u;
    {
        const bool branch_taken_0x2186c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2186c8) {
            ctx->pc = 0x2186D8u;
            goto label_2186d8;
        }
    }
    ctx->pc = 0x2186D0u;
label_2186d0:
    // 0x2186d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2186d4:
    if (ctx->pc == 0x2186D4u) {
        ctx->pc = 0x2186D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186D0u;
        // 0x2186d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2186D8u;
        goto label_2186d8;
    }
    ctx->pc = 0x2186D0u;
    {
        const bool branch_taken_0x2186d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2186D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186D0u;
        // 0x2186d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2186d0) {
            ctx->pc = 0x2186DCu;
            goto label_2186dc;
        }
    }
    ctx->pc = 0x2186D8u;
label_2186d8:
    // 0x2186d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2186d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2186dc:
    // 0x2186dc: 0x0  nop
    ctx->pc = 0x2186dcu;
    // NOP
label_2186e0:
    // 0x2186e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2186e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2186e4:
    // 0x2186e4: 0xc085cc4  jal         func_217310
label_2186e8:
    if (ctx->pc == 0x2186E8u) {
        ctx->pc = 0x2186E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186E4u;
        // 0x2186e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2186ECu;
        goto label_2186ec;
    }
    ctx->pc = 0x2186E4u;
    SET_GPR_U32(ctx, 31, 0x2186ECu);
    ctx->pc = 0x2186E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2186E4u;
    // 0x2186e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x2186ECu;
label_2186ec:
    // 0x2186ec: 0x0  nop
    ctx->pc = 0x2186ecu;
    // NOP
label_2186f0:
    // 0x2186f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2186f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2186f4:
    // 0x2186f4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x2186f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2186f8:
    // 0x2186f8: 0x1460ff96  bnez        $v1, . + 4 + (-0x6A << 2)
label_2186fc:
    if (ctx->pc == 0x2186FCu) {
        ctx->pc = 0x2186FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186F8u;
        // 0x2186fc: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218700u;
        goto label_218700;
    }
    ctx->pc = 0x2186F8u;
    {
        const bool branch_taken_0x2186f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2186FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186F8u;
        // 0x2186fc: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2186f8) {
            ctx->pc = 0x218554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218554;
        }
    }
    ctx->pc = 0x218700u;
label_218700:
    // 0x218700: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x218700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_218704:
    // 0x218704: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x218704u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_218708:
    // 0x218708: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x218708u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21870c:
    // 0x21870c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21870cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_218710:
    // 0x218710: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x218710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_218714:
    // 0x218714: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x218714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_218718:
    // 0x218718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x218718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21871c:
    // 0x21871c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21871cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_218720:
    // 0x218720: 0x3e00008  jr          $ra
label_218724:
    if (ctx->pc == 0x218724u) {
        ctx->pc = 0x218724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218720u;
        // 0x218724: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218728u;
        goto label_218728;
    }
    ctx->pc = 0x218720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218720u;
        // 0x218724: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218728u;
label_218728:
    // 0x218728: 0x0  nop
    ctx->pc = 0x218728u;
    // NOP
label_21872c:
    // 0x21872c: 0x0  nop
    ctx->pc = 0x21872cu;
    // NOP
label_218730:
    // 0x218730: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x218730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_218734:
    // 0x218734: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x218734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_218738:
    // 0x218738: 0x344a8889  ori         $t2, $v0, 0x8889
    ctx->pc = 0x218738u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_21873c:
    // 0x21873c: 0x240b003c  addiu       $t3, $zero, 0x3C
    ctx->pc = 0x21873cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_218740:
    // 0x218740: 0x1460018  mult        $zero, $t2, $a2
    ctx->pc = 0x218740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_218744:
    // 0x218744: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x218744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_218748:
    // 0x218748: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x218748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_21874c:
    // 0x21874c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21874cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_218750:
    // 0x218750: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x218750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_218754:
    // 0x218754: 0x1810  mfhi        $v1
    ctx->pc = 0x218754u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_218758:
    // 0x218758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x218758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21875c:
    // 0x21875c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21875cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_218760:
    // 0x218760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x218760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_218764:
    // 0x218764: 0x8f8c926c  lw          $t4, -0x6D94($gp)
    ctx->pc = 0x218764u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939244)));
label_218768:
    // 0x218768: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x218768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21876c:
    // 0x21876c: 0xcb001a  div         $zero, $a2, $t3
    ctx->pc = 0x21876cu;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_218770:
    // 0x218770: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x218770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_218774:
    // 0x218774: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x218774u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_218778:
    // 0x218778: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x218778u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_21877c:
    // 0x21877c: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x21877cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_218780:
    // 0x218780: 0xc4fc2  srl         $t1, $t4, 31
    ctx->pc = 0x218780u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_218784:
    // 0x218784: 0x1810  mfhi        $v1
    ctx->pc = 0x218784u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_218788:
    // 0x218788: 0x14c0018  mult        $zero, $t2, $t4
    ctx->pc = 0x218788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21878c:
    // 0x21878c: 0x0  nop
    ctx->pc = 0x21878cu;
    // NOP
label_218790:
    // 0x218790: 0x0  nop
    ctx->pc = 0x218790u;
    // NOP
label_218794:
    // 0x218794: 0x2010  mfhi        $a0
    ctx->pc = 0x218794u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_218798:
    // 0x218798: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x218798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_21879c:
    // 0x21879c: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x21879cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_2187a0:
    // 0x2187a0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2187a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_2187a4:
    // 0x2187a4: 0x16640008  bne         $s3, $a0, . + 4 + (0x8 << 2)
label_2187a8:
    if (ctx->pc == 0x2187A8u) {
        ctx->pc = 0x2187A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187A4u;
        // 0x2187a8: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2187ACu;
        goto label_2187ac;
    }
    ctx->pc = 0x2187A4u;
    {
        const bool branch_taken_0x2187a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x2187A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187A4u;
        // 0x2187a8: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2187a4) {
            ctx->pc = 0x2187C8u;
            goto label_2187c8;
        }
    }
    ctx->pc = 0x2187ACu;
label_2187ac:
    // 0x2187ac: 0x18b001a  div         $zero, $t4, $t3
    ctx->pc = 0x2187acu;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2187b0:
    // 0x2187b0: 0x0  nop
    ctx->pc = 0x2187b0u;
    // NOP
label_2187b4:
    // 0x2187b4: 0x0  nop
    ctx->pc = 0x2187b4u;
    // NOP
label_2187b8:
    // 0x2187b8: 0x1010  mfhi        $v0
    ctx->pc = 0x2187b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2187bc:
    // 0x2187bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2187c0:
    if (ctx->pc == 0x2187C0u) {
        ctx->pc = 0x2187C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187BCu;
        // 0x2187c0: 0x2626016a  addiu       $a2, $s1, 0x16A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 362));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2187C4u;
        goto label_2187c4;
    }
    ctx->pc = 0x2187BCu;
    {
        const bool branch_taken_0x2187bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2187C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187BCu;
        // 0x2187c0: 0x2626016a  addiu       $a2, $s1, 0x16A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 362));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2187bc) {
            ctx->pc = 0x2187CCu;
            goto label_2187cc;
        }
    }
    ctx->pc = 0x2187C4u;
label_2187c4:
    // 0x2187c4: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x2187c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2187c8:
    // 0x2187c8: 0x2626016a  addiu       $a2, $s1, 0x16A
    ctx->pc = 0x2187c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 362));
label_2187cc:
    // 0x2187cc: 0x8f849268  lw          $a0, -0x6D98($gp)
    ctx->pc = 0x2187ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939240)));
label_2187d0:
    // 0x2187d0: 0xd34821  addu        $t1, $a2, $s3
    ctx->pc = 0x2187d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_2187d4:
    // 0x2187d4: 0x912a0000  lbu         $t2, 0x0($t1)
    ctx->pc = 0x2187d4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_2187d8:
    // 0x2187d8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2187d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2187dc:
    // 0x2187dc: 0x314900f0  andi        $t1, $t2, 0xF0
    ctx->pc = 0x2187dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)240);
label_2187e0:
    // 0x2187e0: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x2187e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
label_2187e4:
    // 0x2187e4: 0x14860006  bne         $a0, $a2, . + 4 + (0x6 << 2)
label_2187e8:
    if (ctx->pc == 0x2187E8u) {
        ctx->pc = 0x2187E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187E4u;
        // 0x2187e8: 0x94903  sra         $t1, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2187ECu;
        goto label_2187ec;
    }
    ctx->pc = 0x2187E4u;
    {
        const bool branch_taken_0x2187e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2187E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187E4u;
        // 0x2187e8: 0x94903  sra         $t1, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2187e4) {
            ctx->pc = 0x218800u;
            goto label_218800;
        }
    }
    ctx->pc = 0x2187ECu;
label_2187ec:
    // 0x2187ec: 0x29260008  slti        $a2, $t1, 0x8
    ctx->pc = 0x2187ecu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
label_2187f0:
    // 0x2187f0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_2187f4:
    if (ctx->pc == 0x2187F4u) {
        ctx->pc = 0x2187F8u;
        goto label_2187f8;
    }
    ctx->pc = 0x2187F0u;
    {
        const bool branch_taken_0x2187f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2187f0) {
            ctx->pc = 0x218800u;
            goto label_218800;
        }
    }
    ctx->pc = 0x2187F8u;
label_2187f8:
    // 0x2187f8: 0x2529fff8  addiu       $t1, $t1, -0x8
    ctx->pc = 0x2187f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
label_2187fc:
    // 0x2187fc: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x2187fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_218800:
    // 0x218800: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x218800u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218804:
    // 0x218804: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x218804u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
label_218808:
    // 0x218808: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x218808u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_21880c:
    // 0x21880c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21880cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_218810:
    // 0x218810: 0x3c064248  lui         $a2, 0x4248
    ctx->pc = 0x218810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16968 << 16));
label_218814:
    // 0x218814: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x218814u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_218818:
    // 0x218818: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x218818u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21881c:
    // 0x21881c: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x21881cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_218820:
    // 0x218820: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x218820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_218824:
    // 0x218824: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x218824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_218828:
    // 0x218828: 0x460119c2  mul.s       $f7, $f3, $f1
    ctx->pc = 0x218828u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_21882c:
    // 0x21882c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_218830:
    if (ctx->pc == 0x218830u) {
        ctx->pc = 0x218830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21882Cu;
        // 0x218830: 0x46001a02  mul.s       $f8, $f3, $f0 (Delay Slot)
        ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x218834u;
        goto label_218834;
    }
    ctx->pc = 0x21882Cu;
    {
        const bool branch_taken_0x21882c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x218830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21882Cu;
        // 0x218830: 0x46001a02  mul.s       $f8, $f3, $f0 (Delay Slot)
        ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21882c) {
            ctx->pc = 0x2188D0u;
            { ctx->pc = 0x2188d0; return; }
        }
    }
    ctx->pc = 0x218834u;
label_218834:
    // 0x218834: 0x2629016b  addiu       $t1, $s1, 0x16B
    ctx->pc = 0x218834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 363));
label_218838:
    // 0x218838: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x218838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21883c:
    // 0x21883c: 0x1334821  addu        $t1, $t1, $s3
    ctx->pc = 0x21883cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
label_218840:
    // 0x218840: 0x912a0000  lbu         $t2, 0x0($t1)
    ctx->pc = 0x218840u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_218844:
    // 0x218844: 0x314900f0  andi        $t1, $t2, 0xF0
    ctx->pc = 0x218844u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)240);
label_218848:
    // 0x218848: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x218848u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
label_21884c:
    // 0x21884c: 0x14860006  bne         $a0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x218850u;
    return;
}

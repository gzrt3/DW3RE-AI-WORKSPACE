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


void FUN_0014eba0_part14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x155130u: goto label_155130;
        case 0x155134u: goto label_155134;
        case 0x155138u: goto label_155138;
        case 0x15513cu: goto label_15513c;
        case 0x155140u: goto label_155140;
        case 0x155144u: goto label_155144;
        case 0x155148u: goto label_155148;
        case 0x15514cu: goto label_15514c;
        case 0x155150u: goto label_155150;
        case 0x155154u: goto label_155154;
        case 0x155158u: goto label_155158;
        case 0x15515cu: goto label_15515c;
        case 0x155160u: goto label_155160;
        case 0x155164u: goto label_155164;
        case 0x155168u: goto label_155168;
        case 0x15516cu: goto label_15516c;
        case 0x155170u: goto label_155170;
        case 0x155174u: goto label_155174;
        case 0x155178u: goto label_155178;
        case 0x15517cu: goto label_15517c;
        case 0x155180u: goto label_155180;
        case 0x155184u: goto label_155184;
        case 0x155188u: goto label_155188;
        case 0x15518cu: goto label_15518c;
        case 0x155190u: goto label_155190;
        case 0x155194u: goto label_155194;
        case 0x155198u: goto label_155198;
        case 0x15519cu: goto label_15519c;
        case 0x1551a0u: goto label_1551a0;
        case 0x1551a4u: goto label_1551a4;
        case 0x1551a8u: goto label_1551a8;
        case 0x1551acu: goto label_1551ac;
        case 0x1551b0u: goto label_1551b0;
        case 0x1551b4u: goto label_1551b4;
        case 0x1551b8u: goto label_1551b8;
        case 0x1551bcu: goto label_1551bc;
        case 0x1551c0u: goto label_1551c0;
        case 0x1551c4u: goto label_1551c4;
        case 0x1551c8u: goto label_1551c8;
        case 0x1551ccu: goto label_1551cc;
        case 0x1551d0u: goto label_1551d0;
        case 0x1551d4u: goto label_1551d4;
        case 0x1551d8u: goto label_1551d8;
        case 0x1551dcu: goto label_1551dc;
        case 0x1551e0u: goto label_1551e0;
        case 0x1551e4u: goto label_1551e4;
        case 0x1551e8u: goto label_1551e8;
        case 0x1551ecu: goto label_1551ec;
        case 0x1551f0u: goto label_1551f0;
        case 0x1551f4u: goto label_1551f4;
        case 0x1551f8u: goto label_1551f8;
        case 0x1551fcu: goto label_1551fc;
        case 0x155200u: goto label_155200;
        case 0x155204u: goto label_155204;
        case 0x155208u: goto label_155208;
        case 0x15520cu: goto label_15520c;
        case 0x155210u: goto label_155210;
        case 0x155214u: goto label_155214;
        case 0x155218u: goto label_155218;
        case 0x15521cu: goto label_15521c;
        case 0x155220u: goto label_155220;
        case 0x155224u: goto label_155224;
        case 0x155228u: goto label_155228;
        case 0x15522cu: goto label_15522c;
        case 0x155230u: goto label_155230;
        case 0x155234u: goto label_155234;
        case 0x155238u: goto label_155238;
        case 0x15523cu: goto label_15523c;
        case 0x155240u: goto label_155240;
        case 0x155244u: goto label_155244;
        case 0x155248u: goto label_155248;
        case 0x15524cu: goto label_15524c;
        case 0x155250u: goto label_155250;
        case 0x155254u: goto label_155254;
        case 0x155258u: goto label_155258;
        case 0x15525cu: goto label_15525c;
        case 0x155260u: goto label_155260;
        case 0x155264u: goto label_155264;
        case 0x155268u: goto label_155268;
        case 0x15526cu: goto label_15526c;
        case 0x155270u: goto label_155270;
        case 0x155274u: goto label_155274;
        case 0x155278u: goto label_155278;
        case 0x15527cu: goto label_15527c;
        case 0x155280u: goto label_155280;
        case 0x155284u: goto label_155284;
        case 0x155288u: goto label_155288;
        case 0x15528cu: goto label_15528c;
        case 0x155290u: goto label_155290;
        case 0x155294u: goto label_155294;
        case 0x155298u: goto label_155298;
        case 0x15529cu: goto label_15529c;
        case 0x1552a0u: goto label_1552a0;
        case 0x1552a4u: goto label_1552a4;
        case 0x1552a8u: goto label_1552a8;
        case 0x1552acu: goto label_1552ac;
        case 0x1552b0u: goto label_1552b0;
        case 0x1552b4u: goto label_1552b4;
        case 0x1552b8u: goto label_1552b8;
        case 0x1552bcu: goto label_1552bc;
        case 0x1552c0u: goto label_1552c0;
        case 0x1552c4u: goto label_1552c4;
        case 0x1552c8u: goto label_1552c8;
        case 0x1552ccu: goto label_1552cc;
        case 0x1552d0u: goto label_1552d0;
        case 0x1552d4u: goto label_1552d4;
        case 0x1552d8u: goto label_1552d8;
        case 0x1552dcu: goto label_1552dc;
        case 0x1552e0u: goto label_1552e0;
        case 0x1552e4u: goto label_1552e4;
        case 0x1552e8u: goto label_1552e8;
        case 0x1552ecu: goto label_1552ec;
        case 0x1552f0u: goto label_1552f0;
        case 0x1552f4u: goto label_1552f4;
        case 0x1552f8u: goto label_1552f8;
        case 0x1552fcu: goto label_1552fc;
        case 0x155300u: goto label_155300;
        case 0x155304u: goto label_155304;
        case 0x155308u: goto label_155308;
        case 0x15530cu: goto label_15530c;
        case 0x155310u: goto label_155310;
        case 0x155314u: goto label_155314;
        case 0x155318u: goto label_155318;
        case 0x15531cu: goto label_15531c;
        case 0x155320u: goto label_155320;
        case 0x155324u: goto label_155324;
        case 0x155328u: goto label_155328;
        case 0x15532cu: goto label_15532c;
        case 0x155330u: goto label_155330;
        case 0x155334u: goto label_155334;
        case 0x155338u: goto label_155338;
        case 0x15533cu: goto label_15533c;
        case 0x155340u: goto label_155340;
        case 0x155344u: goto label_155344;
        case 0x155348u: goto label_155348;
        case 0x15534cu: goto label_15534c;
        case 0x155350u: goto label_155350;
        case 0x155354u: goto label_155354;
        case 0x155358u: goto label_155358;
        case 0x15535cu: goto label_15535c;
        case 0x155360u: goto label_155360;
        case 0x155364u: goto label_155364;
        case 0x155368u: goto label_155368;
        case 0x15536cu: goto label_15536c;
        case 0x155370u: goto label_155370;
        case 0x155374u: goto label_155374;
        case 0x155378u: goto label_155378;
        case 0x15537cu: goto label_15537c;
        case 0x155380u: goto label_155380;
        case 0x155384u: goto label_155384;
        case 0x155388u: goto label_155388;
        case 0x15538cu: goto label_15538c;
        case 0x155390u: goto label_155390;
        case 0x155394u: goto label_155394;
        case 0x155398u: goto label_155398;
        case 0x15539cu: goto label_15539c;
        case 0x1553a0u: goto label_1553a0;
        case 0x1553a4u: goto label_1553a4;
        case 0x1553a8u: goto label_1553a8;
        case 0x1553acu: goto label_1553ac;
        case 0x1553b0u: goto label_1553b0;
        case 0x1553b4u: goto label_1553b4;
        case 0x1553b8u: goto label_1553b8;
        case 0x1553bcu: goto label_1553bc;
        case 0x1553c0u: goto label_1553c0;
        case 0x1553c4u: goto label_1553c4;
        case 0x1553c8u: goto label_1553c8;
        case 0x1553ccu: goto label_1553cc;
        case 0x1553d0u: goto label_1553d0;
        case 0x1553d4u: goto label_1553d4;
        case 0x1553d8u: goto label_1553d8;
        case 0x1553dcu: goto label_1553dc;
        case 0x1553e0u: goto label_1553e0;
        case 0x1553e4u: goto label_1553e4;
        case 0x1553e8u: goto label_1553e8;
        case 0x1553ecu: goto label_1553ec;
        case 0x1553f0u: goto label_1553f0;
        case 0x1553f4u: goto label_1553f4;
        case 0x1553f8u: goto label_1553f8;
        case 0x1553fcu: goto label_1553fc;
        case 0x155400u: goto label_155400;
        case 0x155404u: goto label_155404;
        case 0x155408u: goto label_155408;
        case 0x15540cu: goto label_15540c;
        case 0x155410u: goto label_155410;
        case 0x155414u: goto label_155414;
        case 0x155418u: goto label_155418;
        case 0x15541cu: goto label_15541c;
        case 0x155420u: goto label_155420;
        case 0x155424u: goto label_155424;
        case 0x155428u: goto label_155428;
        case 0x15542cu: goto label_15542c;
        case 0x155430u: goto label_155430;
        case 0x155434u: goto label_155434;
        case 0x155438u: goto label_155438;
        case 0x15543cu: goto label_15543c;
        case 0x155440u: goto label_155440;
        case 0x155444u: goto label_155444;
        case 0x155448u: goto label_155448;
        case 0x15544cu: goto label_15544c;
        case 0x155450u: goto label_155450;
        case 0x155454u: goto label_155454;
        case 0x155458u: goto label_155458;
        case 0x15545cu: goto label_15545c;
        case 0x155460u: goto label_155460;
        case 0x155464u: goto label_155464;
        case 0x155468u: goto label_155468;
        case 0x15546cu: goto label_15546c;
        case 0x155470u: goto label_155470;
        case 0x155474u: goto label_155474;
        case 0x155478u: goto label_155478;
        case 0x15547cu: goto label_15547c;
        case 0x155480u: goto label_155480;
        case 0x155484u: goto label_155484;
        case 0x155488u: goto label_155488;
        case 0x15548cu: goto label_15548c;
        case 0x155490u: goto label_155490;
        case 0x155494u: goto label_155494;
        case 0x155498u: goto label_155498;
        case 0x15549cu: goto label_15549c;
        case 0x1554a0u: goto label_1554a0;
        case 0x1554a4u: goto label_1554a4;
        case 0x1554a8u: goto label_1554a8;
        case 0x1554acu: goto label_1554ac;
        case 0x1554b0u: goto label_1554b0;
        case 0x1554b4u: goto label_1554b4;
        case 0x1554b8u: goto label_1554b8;
        case 0x1554bcu: goto label_1554bc;
        case 0x1554c0u: goto label_1554c0;
        case 0x1554c4u: goto label_1554c4;
        case 0x1554c8u: goto label_1554c8;
        case 0x1554ccu: goto label_1554cc;
        case 0x1554d0u: goto label_1554d0;
        case 0x1554d4u: goto label_1554d4;
        case 0x1554d8u: goto label_1554d8;
        case 0x1554dcu: goto label_1554dc;
        case 0x1554e0u: goto label_1554e0;
        case 0x1554e4u: goto label_1554e4;
        case 0x1554e8u: goto label_1554e8;
        case 0x1554ecu: goto label_1554ec;
        case 0x1554f0u: goto label_1554f0;
        case 0x1554f4u: goto label_1554f4;
        case 0x1554f8u: goto label_1554f8;
        case 0x1554fcu: goto label_1554fc;
        case 0x155500u: goto label_155500;
        case 0x155504u: goto label_155504;
        case 0x155508u: goto label_155508;
        case 0x15550cu: goto label_15550c;
        case 0x155510u: goto label_155510;
        case 0x155514u: goto label_155514;
        case 0x155518u: goto label_155518;
        case 0x15551cu: goto label_15551c;
        case 0x155520u: goto label_155520;
        case 0x155524u: goto label_155524;
        case 0x155528u: goto label_155528;
        case 0x15552cu: goto label_15552c;
        case 0x155530u: goto label_155530;
        case 0x155534u: goto label_155534;
        case 0x155538u: goto label_155538;
        case 0x15553cu: goto label_15553c;
        case 0x155540u: goto label_155540;
        case 0x155544u: goto label_155544;
        case 0x155548u: goto label_155548;
        case 0x15554cu: goto label_15554c;
        case 0x155550u: goto label_155550;
        case 0x155554u: goto label_155554;
        case 0x155558u: goto label_155558;
        case 0x15555cu: goto label_15555c;
        case 0x155560u: goto label_155560;
        case 0x155564u: goto label_155564;
        case 0x155568u: goto label_155568;
        case 0x15556cu: goto label_15556c;
        case 0x155570u: goto label_155570;
        case 0x155574u: goto label_155574;
        case 0x155578u: goto label_155578;
        case 0x15557cu: goto label_15557c;
        case 0x155580u: goto label_155580;
        case 0x155584u: goto label_155584;
        case 0x155588u: goto label_155588;
        case 0x15558cu: goto label_15558c;
        case 0x155590u: goto label_155590;
        case 0x155594u: goto label_155594;
        case 0x155598u: goto label_155598;
        case 0x15559cu: goto label_15559c;
        case 0x1555a0u: goto label_1555a0;
        case 0x1555a4u: goto label_1555a4;
        case 0x1555a8u: goto label_1555a8;
        case 0x1555acu: goto label_1555ac;
        case 0x1555b0u: goto label_1555b0;
        case 0x1555b4u: goto label_1555b4;
        case 0x1555b8u: goto label_1555b8;
        case 0x1555bcu: goto label_1555bc;
        case 0x1555c0u: goto label_1555c0;
        case 0x1555c4u: goto label_1555c4;
        case 0x1555c8u: goto label_1555c8;
        case 0x1555ccu: goto label_1555cc;
        case 0x1555d0u: goto label_1555d0;
        case 0x1555d4u: goto label_1555d4;
        case 0x1555d8u: goto label_1555d8;
        case 0x1555dcu: goto label_1555dc;
        case 0x1555e0u: goto label_1555e0;
        case 0x1555e4u: goto label_1555e4;
        case 0x1555e8u: goto label_1555e8;
        case 0x1555ecu: goto label_1555ec;
        case 0x1555f0u: goto label_1555f0;
        case 0x1555f4u: goto label_1555f4;
        case 0x1555f8u: goto label_1555f8;
        case 0x1555fcu: goto label_1555fc;
        case 0x155600u: goto label_155600;
        case 0x155604u: goto label_155604;
        case 0x155608u: goto label_155608;
        case 0x15560cu: goto label_15560c;
        case 0x155610u: goto label_155610;
        case 0x155614u: goto label_155614;
        case 0x155618u: goto label_155618;
        case 0x15561cu: goto label_15561c;
        case 0x155620u: goto label_155620;
        case 0x155624u: goto label_155624;
        case 0x155628u: goto label_155628;
        case 0x15562cu: goto label_15562c;
        case 0x155630u: goto label_155630;
        case 0x155634u: goto label_155634;
        case 0x155638u: goto label_155638;
        case 0x15563cu: goto label_15563c;
        case 0x155640u: goto label_155640;
        case 0x155644u: goto label_155644;
        case 0x155648u: goto label_155648;
        case 0x15564cu: goto label_15564c;
        case 0x155650u: goto label_155650;
        case 0x155654u: goto label_155654;
        case 0x155658u: goto label_155658;
        case 0x15565cu: goto label_15565c;
        case 0x155660u: goto label_155660;
        case 0x155664u: goto label_155664;
        case 0x155668u: goto label_155668;
        case 0x15566cu: goto label_15566c;
        case 0x155670u: goto label_155670;
        case 0x155674u: goto label_155674;
        case 0x155678u: goto label_155678;
        case 0x15567cu: goto label_15567c;
        case 0x155680u: goto label_155680;
        case 0x155684u: goto label_155684;
        case 0x155688u: goto label_155688;
        case 0x15568cu: goto label_15568c;
        case 0x155690u: goto label_155690;
        case 0x155694u: goto label_155694;
        case 0x155698u: goto label_155698;
        case 0x15569cu: goto label_15569c;
        case 0x1556a0u: goto label_1556a0;
        case 0x1556a4u: goto label_1556a4;
        case 0x1556a8u: goto label_1556a8;
        case 0x1556acu: goto label_1556ac;
        case 0x1556b0u: goto label_1556b0;
        case 0x1556b4u: goto label_1556b4;
        case 0x1556b8u: goto label_1556b8;
        case 0x1556bcu: goto label_1556bc;
        case 0x1556c0u: goto label_1556c0;
        case 0x1556c4u: goto label_1556c4;
        case 0x1556c8u: goto label_1556c8;
        case 0x1556ccu: goto label_1556cc;
        case 0x1556d0u: goto label_1556d0;
        case 0x1556d4u: goto label_1556d4;
        case 0x1556d8u: goto label_1556d8;
        case 0x1556dcu: goto label_1556dc;
        case 0x1556e0u: goto label_1556e0;
        case 0x1556e4u: goto label_1556e4;
        case 0x1556e8u: goto label_1556e8;
        case 0x1556ecu: goto label_1556ec;
        case 0x1556f0u: goto label_1556f0;
        case 0x1556f4u: goto label_1556f4;
        case 0x1556f8u: goto label_1556f8;
        case 0x1556fcu: goto label_1556fc;
        case 0x155700u: goto label_155700;
        case 0x155704u: goto label_155704;
        case 0x155708u: goto label_155708;
        case 0x15570cu: goto label_15570c;
        case 0x155710u: goto label_155710;
        case 0x155714u: goto label_155714;
        case 0x155718u: goto label_155718;
        case 0x15571cu: goto label_15571c;
        case 0x155720u: goto label_155720;
        case 0x155724u: goto label_155724;
        case 0x155728u: goto label_155728;
        case 0x15572cu: goto label_15572c;
        case 0x155730u: goto label_155730;
        case 0x155734u: goto label_155734;
        case 0x155738u: goto label_155738;
        case 0x15573cu: goto label_15573c;
        case 0x155740u: goto label_155740;
        case 0x155744u: goto label_155744;
        case 0x155748u: goto label_155748;
        case 0x15574cu: goto label_15574c;
        case 0x155750u: goto label_155750;
        case 0x155754u: goto label_155754;
        case 0x155758u: goto label_155758;
        case 0x15575cu: goto label_15575c;
        case 0x155760u: goto label_155760;
        case 0x155764u: goto label_155764;
        case 0x155768u: goto label_155768;
        case 0x15576cu: goto label_15576c;
        case 0x155770u: goto label_155770;
        case 0x155774u: goto label_155774;
        case 0x155778u: goto label_155778;
        case 0x15577cu: goto label_15577c;
        case 0x155780u: goto label_155780;
        case 0x155784u: goto label_155784;
        case 0x155788u: goto label_155788;
        case 0x15578cu: goto label_15578c;
        case 0x155790u: goto label_155790;
        case 0x155794u: goto label_155794;
        case 0x155798u: goto label_155798;
        case 0x15579cu: goto label_15579c;
        case 0x1557a0u: goto label_1557a0;
        case 0x1557a4u: goto label_1557a4;
        case 0x1557a8u: goto label_1557a8;
        case 0x1557acu: goto label_1557ac;
        case 0x1557b0u: goto label_1557b0;
        case 0x1557b4u: goto label_1557b4;
        case 0x1557b8u: goto label_1557b8;
        case 0x1557bcu: goto label_1557bc;
        case 0x1557c0u: goto label_1557c0;
        case 0x1557c4u: goto label_1557c4;
        case 0x1557c8u: goto label_1557c8;
        case 0x1557ccu: goto label_1557cc;
        case 0x1557d0u: goto label_1557d0;
        case 0x1557d4u: goto label_1557d4;
        case 0x1557d8u: goto label_1557d8;
        case 0x1557dcu: goto label_1557dc;
        case 0x1557e0u: goto label_1557e0;
        case 0x1557e4u: goto label_1557e4;
        case 0x1557e8u: goto label_1557e8;
        case 0x1557ecu: goto label_1557ec;
        case 0x1557f0u: goto label_1557f0;
        case 0x1557f4u: goto label_1557f4;
        case 0x1557f8u: goto label_1557f8;
        case 0x1557fcu: goto label_1557fc;
        case 0x155800u: goto label_155800;
        case 0x155804u: goto label_155804;
        case 0x155808u: goto label_155808;
        case 0x15580cu: goto label_15580c;
        case 0x155810u: goto label_155810;
        case 0x155814u: goto label_155814;
        case 0x155818u: goto label_155818;
        case 0x15581cu: goto label_15581c;
        case 0x155820u: goto label_155820;
        case 0x155824u: goto label_155824;
        case 0x155828u: goto label_155828;
        case 0x15582cu: goto label_15582c;
        case 0x155830u: goto label_155830;
        case 0x155834u: goto label_155834;
        case 0x155838u: goto label_155838;
        case 0x15583cu: goto label_15583c;
        case 0x155840u: goto label_155840;
        case 0x155844u: goto label_155844;
        case 0x155848u: goto label_155848;
        case 0x15584cu: goto label_15584c;
        case 0x155850u: goto label_155850;
        case 0x155854u: goto label_155854;
        case 0x155858u: goto label_155858;
        case 0x15585cu: goto label_15585c;
        case 0x155860u: goto label_155860;
        case 0x155864u: goto label_155864;
        case 0x155868u: goto label_155868;
        case 0x15586cu: goto label_15586c;
        case 0x155870u: goto label_155870;
        case 0x155874u: goto label_155874;
        case 0x155878u: goto label_155878;
        case 0x15587cu: goto label_15587c;
        case 0x155880u: goto label_155880;
        case 0x155884u: goto label_155884;
        case 0x155888u: goto label_155888;
        case 0x15588cu: goto label_15588c;
        case 0x155890u: goto label_155890;
        case 0x155894u: goto label_155894;
        case 0x155898u: goto label_155898;
        case 0x15589cu: goto label_15589c;
        case 0x1558a0u: goto label_1558a0;
        case 0x1558a4u: goto label_1558a4;
        case 0x1558a8u: goto label_1558a8;
        case 0x1558acu: goto label_1558ac;
        case 0x1558b0u: goto label_1558b0;
        case 0x1558b4u: goto label_1558b4;
        case 0x1558b8u: goto label_1558b8;
        case 0x1558bcu: goto label_1558bc;
        case 0x1558c0u: goto label_1558c0;
        case 0x1558c4u: goto label_1558c4;
        case 0x1558c8u: goto label_1558c8;
        case 0x1558ccu: goto label_1558cc;
        case 0x1558d0u: goto label_1558d0;
        case 0x1558d4u: goto label_1558d4;
        case 0x1558d8u: goto label_1558d8;
        case 0x1558dcu: goto label_1558dc;
        case 0x1558e0u: goto label_1558e0;
        case 0x1558e4u: goto label_1558e4;
        case 0x1558e8u: goto label_1558e8;
        case 0x1558ecu: goto label_1558ec;
        case 0x1558f0u: goto label_1558f0;
        case 0x1558f4u: goto label_1558f4;
        case 0x1558f8u: goto label_1558f8;
        case 0x1558fcu: goto label_1558fc;
        default: return;
    }

label_155130:
    // 0x155130: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x155130u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_155134:
    // 0x155134: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x155134u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_155138:
    // 0x155138: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x155138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_15513c:
    // 0x15513c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x15513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_155140:
    // 0x155140: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x155140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_155144:
    // 0x155144: 0xc066e14  jal         func_19B850
label_155148:
    if (ctx->pc == 0x155148u) {
        ctx->pc = 0x155148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155144u;
        // 0x155148: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15514Cu;
        goto label_15514c;
    }
    ctx->pc = 0x155144u;
    SET_GPR_U32(ctx, 31, 0x15514Cu);
    ctx->pc = 0x155148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155144u;
    // 0x155148: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x15514Cu;
label_15514c:
    // 0x15514c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x15514cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_155150:
    // 0x155150: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x155150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_155154:
    // 0x155154: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x155154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_155158:
    // 0x155158: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x155158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15515c:
    // 0x15515c: 0xc066e08  jal         func_19B820
label_155160:
    if (ctx->pc == 0x155160u) {
        ctx->pc = 0x155160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15515Cu;
        // 0x155160: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155164u;
        goto label_155164;
    }
    ctx->pc = 0x15515Cu;
    SET_GPR_U32(ctx, 31, 0x155164u);
    ctx->pc = 0x155160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15515Cu;
    // 0x155160: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x155164u;
label_155164:
    // 0x155164: 0x0  nop
    ctx->pc = 0x155164u;
    // NOP
label_155168:
    // 0x155168: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x155168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15516c:
    // 0x15516c: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x15516cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_155170:
    // 0x155170: 0x1a00ffc6  blez        $s0, . + 4 + (-0x3A << 2)
label_155174:
    if (ctx->pc == 0x155174u) {
        ctx->pc = 0x155174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155170u;
        // 0x155174: 0x3c050033  lui         $a1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155178u;
        goto label_155178;
    }
    ctx->pc = 0x155170u;
    {
        const bool branch_taken_0x155170 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x155174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155170u;
        // 0x155174: 0x3c050033  lui         $a1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155170) {
            ctx->pc = 0x15508Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x15508c; return; }
        }
    }
    ctx->pc = 0x155178u;
label_155178:
    // 0x155178: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x155178u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_15517c:
    // 0x15517c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15517cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_155180:
    // 0x155180: 0x24a5b9a0  addiu       $a1, $a1, -0x4660
    ctx->pc = 0x155180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949280));
label_155184:
    // 0x155184: 0x24c6b9c0  addiu       $a2, $a2, -0x4640
    ctx->pc = 0x155184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949312));
label_155188:
    // 0x155188: 0xc066f34  jal         func_19BCD0
label_15518c:
    if (ctx->pc == 0x15518Cu) {
        ctx->pc = 0x15518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155188u;
        // 0x15518c: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155190u;
        goto label_155190;
    }
    ctx->pc = 0x155188u;
    SET_GPR_U32(ctx, 31, 0x155190u);
    ctx->pc = 0x15518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155188u;
    // 0x15518c: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BCD0u;
    { ctx->pc = 0x19bcd0; return; }
    ctx->pc = 0x155190u;
label_155190:
    // 0x155190: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x155190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_155194:
    // 0x155194: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x155194u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_155198:
    // 0x155198: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x155198u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
label_15519c:
    // 0x15519c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15519cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1551a0:
    // 0x1551a0: 0x24a5b9b0  addiu       $a1, $a1, -0x4650
    ctx->pc = 0x1551a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949296));
label_1551a4:
    // 0x1551a4: 0x24c6b9d0  addiu       $a2, $a2, -0x4630
    ctx->pc = 0x1551a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949328));
label_1551a8:
    // 0x1551a8: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1551a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1551ac:
    // 0x1551ac: 0xc066f64  jal         func_19BD90
label_1551b0:
    if (ctx->pc == 0x1551B0u) {
        ctx->pc = 0x1551B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551ACu;
        // 0x1551b0: 0x2508ba00  addiu       $t0, $t0, -0x4600 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1551B4u;
        goto label_1551b4;
    }
    ctx->pc = 0x1551ACu;
    SET_GPR_U32(ctx, 31, 0x1551B4u);
    ctx->pc = 0x1551B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1551ACu;
    // 0x1551b0: 0x2508ba00  addiu       $t0, $t0, -0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BD90u;
    { ctx->pc = 0x19bd90; return; }
    ctx->pc = 0x1551B4u;
label_1551b4:
    // 0x1551b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1551b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1551b8:
    // 0x1551b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1551b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1551bc:
    // 0x1551bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1551bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1551c0:
    // 0x1551c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1551c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1551c4:
    // 0x1551c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1551c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1551c8:
    // 0x1551c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1551c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1551cc:
    // 0x1551cc: 0x3e00008  jr          $ra
label_1551d0:
    if (ctx->pc == 0x1551D0u) {
        ctx->pc = 0x1551D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551CCu;
        // 0x1551d0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1551D4u;
        goto label_1551d4;
    }
    ctx->pc = 0x1551CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1551D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551CCu;
        // 0x1551d0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1551CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1551D4u;
label_1551d4:
    // 0x1551d4: 0x0  nop
    ctx->pc = 0x1551d4u;
    // NOP
label_1551d8:
    // 0x1551d8: 0x0  nop
    ctx->pc = 0x1551d8u;
    // NOP
label_1551dc:
    // 0x1551dc: 0x0  nop
    ctx->pc = 0x1551dcu;
    // NOP
label_1551e0:
    // 0x1551e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1551e4:
    // 0x1551e4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1551e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_1551e8:
    // 0x1551e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1551e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1551ec:
    // 0x1551ec: 0x2484b970  addiu       $a0, $a0, -0x4690
    ctx->pc = 0x1551ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949232));
label_1551f0:
    // 0x1551f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1551f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1551f4:
    // 0x1551f4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1551f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1551f8:
    // 0x1551f8: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1551fc:
    if (ctx->pc == 0x1551FCu) {
        ctx->pc = 0x155200u;
        goto label_155200;
    }
    ctx->pc = 0x1551F8u;
    {
        const bool branch_taken_0x1551f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1551f8) {
            ctx->pc = 0x155218u;
            goto label_155218;
        }
    }
    ctx->pc = 0x155200u;
label_155200:
    // 0x155200: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x155200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_155204:
    // 0x155204: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x155204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_155208:
    // 0x155208: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_15520c:
    if (ctx->pc == 0x15520Cu) {
        ctx->pc = 0x15520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155208u;
        // 0x15520c: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155210u;
        goto label_155210;
    }
    ctx->pc = 0x155208u;
    {
        const bool branch_taken_0x155208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155208u;
        // 0x15520c: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155208) {
            ctx->pc = 0x155218u;
            goto label_155218;
        }
    }
    ctx->pc = 0x155210u;
label_155210:
    // 0x155210: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x155210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_155214:
    // 0x155214: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x155214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_155218:
    // 0x155218: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15521c:
    // 0x15521c: 0x1860fff5  blez        $v1, . + 4 + (-0xB << 2)
label_155220:
    if (ctx->pc == 0x155220u) {
        ctx->pc = 0x155220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15521Cu;
        // 0x155220: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155224u;
        goto label_155224;
    }
    ctx->pc = 0x15521Cu;
    {
        const bool branch_taken_0x15521c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x155220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15521Cu;
        // 0x155220: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15521c) {
            ctx->pc = 0x1551F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1551f4;
        }
    }
    ctx->pc = 0x155224u;
label_155224:
    // 0x155224: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x155224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_155228:
    // 0x155228: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x155228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_15522c:
    // 0x15522c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x15522cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_155230:
    // 0x155230: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x155230u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
label_155234:
    // 0x155234: 0x2484b930  addiu       $a0, $a0, -0x46D0
    ctx->pc = 0x155234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949168));
label_155238:
    // 0x155238: 0x24a5b9a0  addiu       $a1, $a1, -0x4660
    ctx->pc = 0x155238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949280));
label_15523c:
    // 0x15523c: 0x24c6b9c0  addiu       $a2, $a2, -0x4640
    ctx->pc = 0x15523cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949312));
label_155240:
    // 0x155240: 0xc066f34  jal         func_19BCD0
label_155244:
    if (ctx->pc == 0x155244u) {
        ctx->pc = 0x155244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155240u;
        // 0x155244: 0x24e7b9e0  addiu       $a3, $a3, -0x4620 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155248u;
        goto label_155248;
    }
    ctx->pc = 0x155240u;
    SET_GPR_U32(ctx, 31, 0x155248u);
    ctx->pc = 0x155244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155240u;
    // 0x155244: 0x24e7b9e0  addiu       $a3, $a3, -0x4620 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BCD0u;
    { ctx->pc = 0x19bcd0; return; }
    ctx->pc = 0x155248u;
label_155248:
    // 0x155248: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x155248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_15524c:
    // 0x15524c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x15524cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_155250:
    // 0x155250: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x155250u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_155254:
    // 0x155254: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x155254u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
label_155258:
    // 0x155258: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x155258u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
label_15525c:
    // 0x15525c: 0x2484b8f0  addiu       $a0, $a0, -0x4710
    ctx->pc = 0x15525cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949104));
label_155260:
    // 0x155260: 0x24a5b9b0  addiu       $a1, $a1, -0x4650
    ctx->pc = 0x155260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949296));
label_155264:
    // 0x155264: 0x24c6b9d0  addiu       $a2, $a2, -0x4630
    ctx->pc = 0x155264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949328));
label_155268:
    // 0x155268: 0x24e7b9f0  addiu       $a3, $a3, -0x4610
    ctx->pc = 0x155268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949360));
label_15526c:
    // 0x15526c: 0xc066f64  jal         func_19BD90
label_155270:
    if (ctx->pc == 0x155270u) {
        ctx->pc = 0x155270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15526Cu;
        // 0x155270: 0x2508ba00  addiu       $t0, $t0, -0x4600 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155274u;
        goto label_155274;
    }
    ctx->pc = 0x15526Cu;
    SET_GPR_U32(ctx, 31, 0x155274u);
    ctx->pc = 0x155270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15526Cu;
    // 0x155270: 0x2508ba00  addiu       $t0, $t0, -0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BD90u;
    { ctx->pc = 0x19bd90; return; }
    ctx->pc = 0x155274u;
label_155274:
    // 0x155274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155278:
    // 0x155278: 0x3e00008  jr          $ra
label_15527c:
    if (ctx->pc == 0x15527Cu) {
        ctx->pc = 0x15527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155278u;
        // 0x15527c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155280u;
        goto label_155280;
    }
    ctx->pc = 0x155278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155278u;
        // 0x15527c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155280u;
label_155280:
    // 0x155280: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x155280u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
label_155284:
    // 0x155284: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x155284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155288:
    // 0x155288: 0x2529b970  addiu       $t1, $t1, -0x4690
    ctx->pc = 0x155288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294949232));
label_15528c:
    // 0x15528c: 0x0  nop
    ctx->pc = 0x15528cu;
    // NOP
label_155290:
    // 0x155290: 0x8d230024  lw          $v1, 0x24($t1)
    ctx->pc = 0x155290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
label_155294:
    // 0x155294: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_155298:
    if (ctx->pc == 0x155298u) {
        ctx->pc = 0x15529Cu;
        goto label_15529c;
    }
    ctx->pc = 0x155294u;
    {
        const bool branch_taken_0x155294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155294) {
            ctx->pc = 0x1552B0u;
            goto label_1552b0;
        }
    }
    ctx->pc = 0x15529Cu;
label_15529c:
    // 0x15529c: 0x0  nop
    ctx->pc = 0x15529cu;
    // NOP
label_1552a0:
    // 0x1552a0: 0x0  nop
    ctx->pc = 0x1552a0u;
    // NOP
label_1552a4:
    // 0x1552a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1552a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1552a8:
    // 0x1552a8: 0x18e0fff8  blez        $a3, . + 4 + (-0x8 << 2)
label_1552ac:
    if (ctx->pc == 0x1552ACu) {
        ctx->pc = 0x1552ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552A8u;
        // 0x1552ac: 0x25290030  addiu       $t1, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1552B0u;
        goto label_1552b0;
    }
    ctx->pc = 0x1552A8u;
    {
        const bool branch_taken_0x1552a8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1552ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552A8u;
        // 0x1552ac: 0x25290030  addiu       $t1, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552a8) {
            ctx->pc = 0x15528Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15528c;
        }
    }
    ctx->pc = 0x1552B0u;
label_1552b0:
    // 0x1552b0: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
label_1552b4:
    if (ctx->pc == 0x1552B4u) {
        ctx->pc = 0x1552B8u;
        goto label_1552b8;
    }
    ctx->pc = 0x1552B0u;
    {
        const bool branch_taken_0x1552b0 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x1552b0) {
            ctx->pc = 0x1552C0u;
            goto label_1552c0;
        }
    }
    ctx->pc = 0x1552B8u;
label_1552b8:
    // 0x1552b8: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x1552b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
label_1552bc:
    // 0x1552bc: 0x2529b970  addiu       $t1, $t1, -0x4690
    ctx->pc = 0x1552bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294949232));
label_1552c0:
    // 0x1552c0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1552c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1552c4:
    // 0x1552c4: 0x55100  sll         $t2, $a1, 4
    ctx->pc = 0x1552c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1552c8:
    // 0x1552c8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1552c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1552cc:
    // 0x1552cc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1552ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1552d0:
    // 0x1552d0: 0x24a526c0  addiu       $a1, $a1, 0x26C0
    ctx->pc = 0x1552d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9920));
label_1552d4:
    // 0x1552d4: 0x246326c4  addiu       $v1, $v1, 0x26C4
    ctx->pc = 0x1552d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9924));
label_1552d8:
    // 0x1552d8: 0xaa4021  addu        $t0, $a1, $t2
    ctx->pc = 0x1552d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1552dc:
    // 0x1552dc: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x1552dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1552e0:
    // 0x1552e0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1552e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1552e4:
    // 0x1552e4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1552e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1552e8:
    // 0x1552e8: 0x24a526c8  addiu       $a1, $a1, 0x26C8
    ctx->pc = 0x1552e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9928));
label_1552ec:
    // 0x1552ec: 0x246326cc  addiu       $v1, $v1, 0x26CC
    ctx->pc = 0x1552ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9932));
label_1552f0:
    // 0x1552f0: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x1552f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_1552f4:
    // 0x1552f4: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x1552f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1552f8:
    // 0x1552f8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1552f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1552fc:
    // 0x1552fc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1552fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_155300:
    // 0x155300: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x155300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_155304:
    // 0x155304: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x155304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_155308:
    // 0x155308: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x155308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_15530c:
    // 0x15530c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x15530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_155310:
    // 0x155310: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x155310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_155314:
    // 0x155314: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x155314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_155318:
    // 0x155318: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x155318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
label_15531c:
    // 0x15531c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x15531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_155320:
    // 0x155320: 0xe5200014  swc1        $f0, 0x14($t1)
    ctx->pc = 0x155320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 20), bits); }
label_155324:
    // 0x155324: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x155324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_155328:
    // 0x155328: 0xe5200018  swc1        $f0, 0x18($t1)
    ctx->pc = 0x155328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 24), bits); }
label_15532c:
    // 0x15532c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_155330:
    // 0x155330: 0xe520001c  swc1        $f0, 0x1C($t1)
    ctx->pc = 0x155330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 28), bits); }
label_155334:
    // 0x155334: 0xad260020  sw          $a2, 0x20($t1)
    ctx->pc = 0x155334u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 6));
label_155338:
    // 0x155338: 0xad260024  sw          $a2, 0x24($t1)
    ctx->pc = 0x155338u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 6));
label_15533c:
    // 0x15533c: 0x3e00008  jr          $ra
label_155340:
    if (ctx->pc == 0x155340u) {
        ctx->pc = 0x155340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15533Cu;
        // 0x155340: 0xe52c0028  swc1        $f12, 0x28($t1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x155344u;
        goto label_155344;
    }
    ctx->pc = 0x15533Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15533Cu;
        // 0x155340: 0xe52c0028  swc1        $f12, 0x28($t1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15533Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155344u;
label_155344:
    // 0x155344: 0x0  nop
    ctx->pc = 0x155344u;
    // NOP
label_155348:
    // 0x155348: 0x0  nop
    ctx->pc = 0x155348u;
    // NOP
label_15534c:
    // 0x15534c: 0x0  nop
    ctx->pc = 0x15534cu;
    // NOP
label_155350:
    // 0x155350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_155354:
    // 0x155354: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x155354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_155358:
    // 0x155358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15535c:
    // 0x15535c: 0xc066e26  jal         func_19B898
label_155360:
    if (ctx->pc == 0x155360u) {
        ctx->pc = 0x155360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15535Cu;
        // 0x155360: 0x24a5ba00  addiu       $a1, $a1, -0x4600 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155364u;
        goto label_155364;
    }
    ctx->pc = 0x15535Cu;
    SET_GPR_U32(ctx, 31, 0x155364u);
    ctx->pc = 0x155360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15535Cu;
    // 0x155360: 0x24a5ba00  addiu       $a1, $a1, -0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x155364u;
label_155364:
    // 0x155364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155368:
    // 0x155368: 0x3e00008  jr          $ra
label_15536c:
    if (ctx->pc == 0x15536Cu) {
        ctx->pc = 0x15536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155368u;
        // 0x15536c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155370u;
        goto label_155370;
    }
    ctx->pc = 0x155368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155368u;
        // 0x15536c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155370u;
label_155370:
    // 0x155370: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x155370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_155374:
    // 0x155374: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155378:
    // 0x155378: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x155378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_15537c:
    // 0x15537c: 0xe420ba00  swc1        $f0, -0x4600($at)
    ctx->pc = 0x15537cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949376), bits); }
label_155380:
    // 0x155380: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x155380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_155384:
    // 0x155384: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155388:
    // 0x155388: 0xe420ba04  swc1        $f0, -0x45FC($at)
    ctx->pc = 0x155388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949380), bits); }
label_15538c:
    // 0x15538c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x15538cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_155390:
    // 0x155390: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155394:
    // 0x155394: 0xe420ba08  swc1        $f0, -0x45F8($at)
    ctx->pc = 0x155394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949384), bits); }
label_155398:
    // 0x155398: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15539c:
    // 0x15539c: 0x3e00008  jr          $ra
label_1553a0:
    if (ctx->pc == 0x1553A0u) {
        ctx->pc = 0x1553A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15539Cu;
        // 0x1553a0: 0xac23ba0c  sw          $v1, -0x45F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1553A4u;
        goto label_1553a4;
    }
    ctx->pc = 0x15539Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1553A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15539Cu;
        // 0x1553a0: 0xac23ba0c  sw          $v1, -0x45F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15539Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1553A4u;
label_1553a4:
    // 0x1553a4: 0x0  nop
    ctx->pc = 0x1553a4u;
    // NOP
label_1553a8:
    // 0x1553a8: 0x0  nop
    ctx->pc = 0x1553a8u;
    // NOP
label_1553ac:
    // 0x1553ac: 0x0  nop
    ctx->pc = 0x1553acu;
    // NOP
label_1553b0:
    // 0x1553b0: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x1553b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1553b4:
    // 0x1553b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1553b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1553b8:
    // 0x1553b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1553b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1553bc:
    // 0x1553bc: 0x2442b9a0  addiu       $v0, $v0, -0x4660
    ctx->pc = 0x1553bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949280));
label_1553c0:
    // 0x1553c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1553c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1553c4:
    // 0x1553c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1553c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1553c8:
    // 0x1553c8: 0xc066e26  jal         func_19B898
label_1553cc:
    if (ctx->pc == 0x1553CCu) {
        ctx->pc = 0x1553CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553C8u;
        // 0x1553cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1553D0u;
        goto label_1553d0;
    }
    ctx->pc = 0x1553C8u;
    SET_GPR_U32(ctx, 31, 0x1553D0u);
    ctx->pc = 0x1553CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553C8u;
    // 0x1553cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1553D0u;
label_1553d0:
    // 0x1553d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1553d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1553d4:
    // 0x1553d4: 0x3e00008  jr          $ra
label_1553d8:
    if (ctx->pc == 0x1553D8u) {
        ctx->pc = 0x1553D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553D4u;
        // 0x1553d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1553DCu;
        goto label_1553dc;
    }
    ctx->pc = 0x1553D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1553D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553D4u;
        // 0x1553d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1553D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1553DCu;
label_1553dc:
    // 0x1553dc: 0x0  nop
    ctx->pc = 0x1553dcu;
    // NOP
label_1553e0:
    // 0x1553e0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1553e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1553e4:
    // 0x1553e4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1553e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1553e8:
    // 0x1553e8: 0x44940  sll         $t1, $a0, 5
    ctx->pc = 0x1553e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1553ec:
    // 0x1553ec: 0x2463b9a0  addiu       $v1, $v1, -0x4660
    ctx->pc = 0x1553ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949280));
label_1553f0:
    // 0x1553f0: 0x694021  addu        $t0, $v1, $t1
    ctx->pc = 0x1553f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1553f4:
    // 0x1553f4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1553f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1553f8:
    // 0x1553f8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1553f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1553fc:
    // 0x1553fc: 0x2463b9a4  addiu       $v1, $v1, -0x465C
    ctx->pc = 0x1553fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949284));
label_155400:
    // 0x155400: 0x693821  addu        $a3, $v1, $t1
    ctx->pc = 0x155400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_155404:
    // 0x155404: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x155404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_155408:
    // 0x155408: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x155408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15540c:
    // 0x15540c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x15540cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_155410:
    // 0x155410: 0x2463b9a8  addiu       $v1, $v1, -0x4658
    ctx->pc = 0x155410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949288));
label_155414:
    // 0x155414: 0x693021  addu        $a2, $v1, $t1
    ctx->pc = 0x155414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_155418:
    // 0x155418: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x155418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15541c:
    // 0x15541c: 0x2463b9ac  addiu       $v1, $v1, -0x4654
    ctx->pc = 0x15541cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949292));
label_155420:
    // 0x155420: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x155420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_155424:
    // 0x155424: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x155424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_155428:
    // 0x155428: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x155428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15542c:
    // 0x15542c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x15542cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_155430:
    // 0x155430: 0x3e00008  jr          $ra
label_155434:
    if (ctx->pc == 0x155434u) {
        ctx->pc = 0x155434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155430u;
        // 0x155434: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155438u;
        goto label_155438;
    }
    ctx->pc = 0x155430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155430u;
        // 0x155434: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155438u;
label_155438:
    // 0x155438: 0x0  nop
    ctx->pc = 0x155438u;
    // NOP
label_15543c:
    // 0x15543c: 0x0  nop
    ctx->pc = 0x15543cu;
    // NOP
label_155440:
    // 0x155440: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x155440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_155444:
    // 0x155444: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x155444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_155448:
    // 0x155448: 0x2442b9a0  addiu       $v0, $v0, -0x4660
    ctx->pc = 0x155448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949280));
label_15544c:
    // 0x15544c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15544cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_155450:
    // 0x155450: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x155450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_155454:
    // 0x155454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_155458:
    // 0x155458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15545c:
    // 0x15545c: 0xc066e26  jal         func_19B898
label_155460:
    if (ctx->pc == 0x155460u) {
        ctx->pc = 0x155460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15545Cu;
        // 0x155460: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155464u;
        goto label_155464;
    }
    ctx->pc = 0x15545Cu;
    SET_GPR_U32(ctx, 31, 0x155464u);
    ctx->pc = 0x155460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15545Cu;
    // 0x155460: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x155464u;
label_155464:
    // 0x155464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155468:
    // 0x155468: 0x3e00008  jr          $ra
label_15546c:
    if (ctx->pc == 0x15546Cu) {
        ctx->pc = 0x15546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155468u;
        // 0x15546c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155470u;
        goto label_155470;
    }
    ctx->pc = 0x155468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155468u;
        // 0x15546c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155470u;
label_155470:
    // 0x155470: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x155470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_155474:
    // 0x155474: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x155474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_155478:
    // 0x155478: 0x44140  sll         $t0, $a0, 5
    ctx->pc = 0x155478u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_15547c:
    // 0x15547c: 0x2463b9b0  addiu       $v1, $v1, -0x4650
    ctx->pc = 0x15547cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949296));
label_155480:
    // 0x155480: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x155480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_155484:
    // 0x155484: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x155484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_155488:
    // 0x155488: 0x2463b9b4  addiu       $v1, $v1, -0x464C
    ctx->pc = 0x155488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949300));
label_15548c:
    // 0x15548c: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x15548cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_155490:
    // 0x155490: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x155490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_155494:
    // 0x155494: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x155494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_155498:
    // 0x155498: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x155498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15549c:
    // 0x15549c: 0x2463b9b8  addiu       $v1, $v1, -0x4648
    ctx->pc = 0x15549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949304));
label_1554a0:
    // 0x1554a0: 0x682021  addu        $a0, $v1, $t0
    ctx->pc = 0x1554a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1554a4:
    // 0x1554a4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1554a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1554a8:
    // 0x1554a8: 0x2463b9bc  addiu       $v1, $v1, -0x4644
    ctx->pc = 0x1554a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949308));
label_1554ac:
    // 0x1554ac: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1554acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1554b0:
    // 0x1554b0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1554b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1554b4:
    // 0x1554b4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1554b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1554b8:
    // 0x1554b8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1554b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1554bc:
    // 0x1554bc: 0x3e00008  jr          $ra
label_1554c0:
    if (ctx->pc == 0x1554C0u) {
        ctx->pc = 0x1554C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554BCu;
        // 0x1554c0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1554C4u;
        goto label_1554c4;
    }
    ctx->pc = 0x1554BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1554C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554BCu;
        // 0x1554c0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1554BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1554C4u;
label_1554c4:
    // 0x1554c4: 0x0  nop
    ctx->pc = 0x1554c4u;
    // NOP
label_1554c8:
    // 0x1554c8: 0x0  nop
    ctx->pc = 0x1554c8u;
    // NOP
label_1554cc:
    // 0x1554cc: 0x0  nop
    ctx->pc = 0x1554ccu;
    // NOP
label_1554d0:
    // 0x1554d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1554d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1554d4:
    // 0x1554d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1554d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1554d8:
    // 0x1554d8: 0x8f8b8630  lw          $t3, -0x79D0($gp)
    ctx->pc = 0x1554d8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_1554dc:
    // 0x1554dc: 0x11600049  beqz        $t3, . + 4 + (0x49 << 2)
label_1554e0:
    if (ctx->pc == 0x1554E0u) {
        ctx->pc = 0x1554E4u;
        goto label_1554e4;
    }
    ctx->pc = 0x1554DCu;
    {
        const bool branch_taken_0x1554dc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1554dc) {
            ctx->pc = 0x155604u;
            goto label_155604;
        }
    }
    ctx->pc = 0x1554E4u;
label_1554e4:
    // 0x1554e4: 0x25620040  addiu       $v0, $t3, 0x40
    ctx->pc = 0x1554e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
label_1554e8:
    // 0x1554e8: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x1554e8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
label_1554ec:
    // 0x1554ec: 0xaf828620  sw          $v0, -0x79E0($gp)
    ctx->pc = 0x1554ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936096), GPR_U32(ctx, 2));
label_1554f0:
    // 0x1554f0: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x1554f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
label_1554f4:
    // 0x1554f4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1554f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1554f8:
    // 0x1554f8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1554f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1554fc:
    // 0x1554fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1554fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_155500:
    // 0x155500: 0x79680000  lq          $t0, 0x0($t3)
    ctx->pc = 0x155500u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 11), 0)));
label_155504:
    // 0x155504: 0x79670010  lq          $a3, 0x10($t3)
    ctx->pc = 0x155504u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 11), 16)));
label_155508:
    // 0x155508: 0x254aba20  addiu       $t2, $t2, -0x45E0
    ctx->pc = 0x155508u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294949408));
label_15550c:
    // 0x15550c: 0x79660020  lq          $a2, 0x20($t3)
    ctx->pc = 0x15550cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 11), 32)));
label_155510:
    // 0x155510: 0x2529ba60  addiu       $t1, $t1, -0x45A0
    ctx->pc = 0x155510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294949472));
label_155514:
    // 0x155514: 0x79620030  lq          $v0, 0x30($t3)
    ctx->pc = 0x155514u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 48)));
label_155518:
    // 0x155518: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x155518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_15551c:
    // 0x15551c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15551cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155520:
    // 0x155520: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x155520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_155524:
    // 0x155524: 0x24a5ba30  addiu       $a1, $a1, -0x45D0
    ctx->pc = 0x155524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949424));
label_155528:
    // 0x155528: 0x7d480000  sq          $t0, 0x0($t2)
    ctx->pc = 0x155528u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 8));
label_15552c:
    // 0x15552c: 0x7d470010  sq          $a3, 0x10($t2)
    ctx->pc = 0x15552cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 7));
label_155530:
    // 0x155530: 0x7d460020  sq          $a2, 0x20($t2)
    ctx->pc = 0x155530u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 6));
label_155534:
    // 0x155534: 0x7d420030  sq          $v0, 0x30($t2)
    ctx->pc = 0x155534u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 48), GPR_VEC(ctx, 2));
label_155538:
    // 0x155538: 0x79680000  lq          $t0, 0x0($t3)
    ctx->pc = 0x155538u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 11), 0)));
label_15553c:
    // 0x15553c: 0x79670010  lq          $a3, 0x10($t3)
    ctx->pc = 0x15553cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 11), 16)));
label_155540:
    // 0x155540: 0x79660020  lq          $a2, 0x20($t3)
    ctx->pc = 0x155540u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 11), 32)));
label_155544:
    // 0x155544: 0x79620030  lq          $v0, 0x30($t3)
    ctx->pc = 0x155544u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 48)));
label_155548:
    // 0x155548: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x155548u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
label_15554c:
    // 0x15554c: 0x7d270010  sq          $a3, 0x10($t1)
    ctx->pc = 0x15554cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 7));
label_155550:
    // 0x155550: 0x7d260020  sq          $a2, 0x20($t1)
    ctx->pc = 0x155550u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 32), GPR_VEC(ctx, 6));
label_155554:
    // 0x155554: 0x7d220030  sq          $v0, 0x30($t1)
    ctx->pc = 0x155554u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 48), GPR_VEC(ctx, 2));
label_155558:
    // 0x155558: 0xac23b9ac  sw          $v1, -0x4654($at)
    ctx->pc = 0x155558u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949292), GPR_U32(ctx, 3));
label_15555c:
    // 0x15555c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15555cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155560:
    // 0x155560: 0xc422ba20  lwc1        $f2, -0x45E0($at)
    ctx->pc = 0x155560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_155564:
    // 0x155564: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155568:
    // 0x155568: 0xc421ba24  lwc1        $f1, -0x45DC($at)
    ctx->pc = 0x155568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15556c:
    // 0x15556c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15556cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155570:
    // 0x155570: 0xc420ba28  lwc1        $f0, -0x45D8($at)
    ctx->pc = 0x155570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294949416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_155574:
    // 0x155574: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155578:
    // 0x155578: 0xe422b9a0  swc1        $f2, -0x4660($at)
    ctx->pc = 0x155578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949280), bits); }
label_15557c:
    // 0x15557c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15557cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155580:
    // 0x155580: 0xe421b9a4  swc1        $f1, -0x465C($at)
    ctx->pc = 0x155580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949284), bits); }
label_155584:
    // 0x155584: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155588:
    // 0x155588: 0xc066e14  jal         func_19B850
label_15558c:
    if (ctx->pc == 0x15558Cu) {
        ctx->pc = 0x15558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155588u;
        // 0x15558c: 0xe420b9a8  swc1        $f0, -0x4658($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x155590u;
        goto label_155590;
    }
    ctx->pc = 0x155588u;
    SET_GPR_U32(ctx, 31, 0x155590u);
    ctx->pc = 0x15558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155588u;
    // 0x15558c: 0xe420b9a8  swc1        $f0, -0x4658($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x155590u;
label_155590:
    // 0x155590: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x155590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_155594:
    // 0x155594: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155598:
    // 0x155598: 0xac20b9bc  sw          $zero, -0x4644($at)
    ctx->pc = 0x155598u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949308), GPR_U32(ctx, 0));
label_15559c:
    // 0x15559c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x15559cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1555a0:
    // 0x1555a0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1555a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1555a4:
    // 0x1555a4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1555a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1555a8:
    // 0x1555a8: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1555a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1555ac:
    // 0x1555ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1555acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1555b0:
    // 0x1555b0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1555b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1555b4:
    // 0x1555b4: 0x24a5ba40  addiu       $a1, $a1, -0x45C0
    ctx->pc = 0x1555b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949440));
label_1555b8:
    // 0x1555b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1555b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1555bc:
    // 0x1555bc: 0xe422b9b0  swc1        $f2, -0x4650($at)
    ctx->pc = 0x1555bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949296), bits); }
label_1555c0:
    // 0x1555c0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1555c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1555c4:
    // 0x1555c4: 0xe421b9b4  swc1        $f1, -0x464C($at)
    ctx->pc = 0x1555c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949300), bits); }
label_1555c8:
    // 0x1555c8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1555c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1555cc:
    // 0x1555cc: 0xc066e14  jal         func_19B850
label_1555d0:
    if (ctx->pc == 0x1555D0u) {
        ctx->pc = 0x1555D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555CCu;
        // 0x1555d0: 0xe420b9b8  swc1        $f0, -0x4648($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949304), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1555D4u;
        goto label_1555d4;
    }
    ctx->pc = 0x1555CCu;
    SET_GPR_U32(ctx, 31, 0x1555D4u);
    ctx->pc = 0x1555D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1555CCu;
    // 0x1555d0: 0xe420b9b8  swc1        $f0, -0x4648($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1555D4u;
label_1555d4:
    // 0x1555d4: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1555d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1555d8:
    // 0x1555d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1555d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1555dc:
    // 0x1555dc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1555dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1555e0:
    // 0x1555e0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1555e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1555e4:
    // 0x1555e4: 0xac22ba0c  sw          $v0, -0x45F4($at)
    ctx->pc = 0x1555e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949388), GPR_U32(ctx, 2));
label_1555e8:
    // 0x1555e8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1555e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1555ec:
    // 0x1555ec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1555ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1555f0:
    // 0x1555f0: 0xe422ba00  swc1        $f2, -0x4600($at)
    ctx->pc = 0x1555f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949376), bits); }
label_1555f4:
    // 0x1555f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1555f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1555f8:
    // 0x1555f8: 0xe421ba04  swc1        $f1, -0x45FC($at)
    ctx->pc = 0x1555f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949380), bits); }
label_1555fc:
    // 0x1555fc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1555fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155600:
    // 0x155600: 0xe420ba08  swc1        $f0, -0x45F8($at)
    ctx->pc = 0x155600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949384), bits); }
label_155604:
    // 0x155604: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155608:
    // 0x155608: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x155608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_15560c:
    // 0x15560c: 0xac20ba18  sw          $zero, -0x45E8($at)
    ctx->pc = 0x15560cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949400), GPR_U32(ctx, 0));
label_155610:
    // 0x155610: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x155610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_155614:
    // 0x155614: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155618:
    // 0x155618: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x155618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_15561c:
    // 0x15561c: 0xac23ba10  sw          $v1, -0x45F0($at)
    ctx->pc = 0x15561cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949392), GPR_U32(ctx, 3));
label_155620:
    // 0x155620: 0x2484b970  addiu       $a0, $a0, -0x4690
    ctx->pc = 0x155620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949232));
label_155624:
    // 0x155624: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155628:
    // 0x155628: 0xac22ba14  sw          $v0, -0x45EC($at)
    ctx->pc = 0x155628u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949396), GPR_U32(ctx, 2));
label_15562c:
    // 0x15562c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15562cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155630:
    // 0x155630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x155630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155634:
    // 0x155634: 0xac20ba1c  sw          $zero, -0x45E4($at)
    ctx->pc = 0x155634u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949404), GPR_U32(ctx, 0));
label_155638:
    // 0x155638: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15563c:
    // 0x15563c: 0xac23b9cc  sw          $v1, -0x4634($at)
    ctx->pc = 0x15563cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949324), GPR_U32(ctx, 3));
label_155640:
    // 0x155640: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155644:
    // 0x155644: 0xac23b9ec  sw          $v1, -0x4614($at)
    ctx->pc = 0x155644u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949356), GPR_U32(ctx, 3));
label_155648:
    // 0x155648: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15564c:
    // 0x15564c: 0xac20b9dc  sw          $zero, -0x4624($at)
    ctx->pc = 0x15564cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949340), GPR_U32(ctx, 0));
label_155650:
    // 0x155650: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155654:
    // 0x155654: 0xac20b9fc  sw          $zero, -0x4604($at)
    ctx->pc = 0x155654u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949372), GPR_U32(ctx, 0));
label_155658:
    // 0x155658: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x155658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_15565c:
    // 0x15565c: 0xc4202fa0  lwc1        $f0, 0x2FA0($at)
    ctx->pc = 0x15565cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 12192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_155660:
    // 0x155660: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x155660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_155664:
    // 0x155664: 0xc4212fa4  lwc1        $f1, 0x2FA4($at)
    ctx->pc = 0x155664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 12196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_155668:
    // 0x155668: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x155668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_15566c:
    // 0x15566c: 0xc4222fa8  lwc1        $f2, 0x2FA8($at)
    ctx->pc = 0x15566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 12200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_155670:
    // 0x155670: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155674:
    // 0x155674: 0xe420b9c0  swc1        $f0, -0x4640($at)
    ctx->pc = 0x155674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949312), bits); }
label_155678:
    // 0x155678: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15567c:
    // 0x15567c: 0xe421b9c4  swc1        $f1, -0x463C($at)
    ctx->pc = 0x15567cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949316), bits); }
label_155680:
    // 0x155680: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155684:
    // 0x155684: 0xe422b9c8  swc1        $f2, -0x4638($at)
    ctx->pc = 0x155684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949320), bits); }
label_155688:
    // 0x155688: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15568c:
    // 0x15568c: 0xe420b9d0  swc1        $f0, -0x4630($at)
    ctx->pc = 0x15568cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949328), bits); }
label_155690:
    // 0x155690: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_155694:
    // 0x155694: 0xe421b9d4  swc1        $f1, -0x462C($at)
    ctx->pc = 0x155694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949332), bits); }
label_155698:
    // 0x155698: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15569c:
    // 0x15569c: 0xe422b9d8  swc1        $f2, -0x4628($at)
    ctx->pc = 0x15569cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949336), bits); }
label_1556a0:
    // 0x1556a0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1556a4:
    // 0x1556a4: 0xe420b9e0  swc1        $f0, -0x4620($at)
    ctx->pc = 0x1556a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949344), bits); }
label_1556a8:
    // 0x1556a8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1556ac:
    // 0x1556ac: 0xe420b9f0  swc1        $f0, -0x4610($at)
    ctx->pc = 0x1556acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949360), bits); }
label_1556b0:
    // 0x1556b0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1556b4:
    // 0x1556b4: 0xe421b9e4  swc1        $f1, -0x461C($at)
    ctx->pc = 0x1556b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949348), bits); }
label_1556b8:
    // 0x1556b8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1556bc:
    // 0x1556bc: 0xe421b9f4  swc1        $f1, -0x460C($at)
    ctx->pc = 0x1556bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949364), bits); }
label_1556c0:
    // 0x1556c0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1556c4:
    // 0x1556c4: 0xe422b9e8  swc1        $f2, -0x4618($at)
    ctx->pc = 0x1556c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949352), bits); }
label_1556c8:
    // 0x1556c8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1556c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1556cc:
    // 0x1556cc: 0xe422b9f8  swc1        $f2, -0x4608($at)
    ctx->pc = 0x1556ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949368), bits); }
label_1556d0:
    // 0x1556d0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1556d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_1556d4:
    // 0x1556d4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1556d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_1556d8:
    // 0x1556d8: 0x0  nop
    ctx->pc = 0x1556d8u;
    // NOP
label_1556dc:
    // 0x1556dc: 0x0  nop
    ctx->pc = 0x1556dcu;
    // NOP
label_1556e0:
    // 0x1556e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1556e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1556e4:
    // 0x1556e4: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1556e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_1556e8:
    // 0x1556e8: 0x1840fff9  blez        $v0, . + 4 + (-0x7 << 2)
label_1556ec:
    if (ctx->pc == 0x1556ECu) {
        ctx->pc = 0x1556F0u;
        goto label_1556f0;
    }
    ctx->pc = 0x1556E8u;
    {
        const bool branch_taken_0x1556e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1556e8) {
            ctx->pc = 0x1556D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1556d0;
        }
    }
    ctx->pc = 0x1556F0u;
label_1556f0:
    // 0x1556f0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1556f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_1556f4:
    // 0x1556f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1556f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1556f8:
    // 0x1556f8: 0x2484b970  addiu       $a0, $a0, -0x4690
    ctx->pc = 0x1556f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949232));
label_1556fc:
    // 0x1556fc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1556fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_155700:
    // 0x155700: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_155704:
    if (ctx->pc == 0x155704u) {
        ctx->pc = 0x155708u;
        goto label_155708;
    }
    ctx->pc = 0x155700u;
    {
        const bool branch_taken_0x155700 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x155700) {
            ctx->pc = 0x155720u;
            goto label_155720;
        }
    }
    ctx->pc = 0x155708u;
label_155708:
    // 0x155708: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x155708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_15570c:
    // 0x15570c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_155710:
    // 0x155710: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_155714:
    if (ctx->pc == 0x155714u) {
        ctx->pc = 0x155714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155710u;
        // 0x155714: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155718u;
        goto label_155718;
    }
    ctx->pc = 0x155710u;
    {
        const bool branch_taken_0x155710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155710u;
        // 0x155714: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155710) {
            ctx->pc = 0x155720u;
            goto label_155720;
        }
    }
    ctx->pc = 0x155718u;
label_155718:
    // 0x155718: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x155718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_15571c:
    // 0x15571c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x15571cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_155720:
    // 0x155720: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_155724:
    // 0x155724: 0x1860fff5  blez        $v1, . + 4 + (-0xB << 2)
label_155728:
    if (ctx->pc == 0x155728u) {
        ctx->pc = 0x155728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155724u;
        // 0x155728: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15572Cu;
        goto label_15572c;
    }
    ctx->pc = 0x155724u;
    {
        const bool branch_taken_0x155724 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x155728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155724u;
        // 0x155728: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155724) {
            ctx->pc = 0x1556FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1556fc;
        }
    }
    ctx->pc = 0x15572Cu;
label_15572c:
    // 0x15572c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x15572cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_155730:
    // 0x155730: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x155730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_155734:
    // 0x155734: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x155734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_155738:
    // 0x155738: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x155738u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
label_15573c:
    // 0x15573c: 0x2484b930  addiu       $a0, $a0, -0x46D0
    ctx->pc = 0x15573cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949168));
label_155740:
    // 0x155740: 0x24a5b9a0  addiu       $a1, $a1, -0x4660
    ctx->pc = 0x155740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949280));
label_155744:
    // 0x155744: 0x24c6b9c0  addiu       $a2, $a2, -0x4640
    ctx->pc = 0x155744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949312));
label_155748:
    // 0x155748: 0xc066f34  jal         func_19BCD0
label_15574c:
    if (ctx->pc == 0x15574Cu) {
        ctx->pc = 0x15574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155748u;
        // 0x15574c: 0x24e7b9e0  addiu       $a3, $a3, -0x4620 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155750u;
        goto label_155750;
    }
    ctx->pc = 0x155748u;
    SET_GPR_U32(ctx, 31, 0x155750u);
    ctx->pc = 0x15574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155748u;
    // 0x15574c: 0x24e7b9e0  addiu       $a3, $a3, -0x4620 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BCD0u;
    { ctx->pc = 0x19bcd0; return; }
    ctx->pc = 0x155750u;
label_155750:
    // 0x155750: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x155750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_155754:
    // 0x155754: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x155754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_155758:
    // 0x155758: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x155758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_15575c:
    // 0x15575c: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x15575cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
label_155760:
    // 0x155760: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x155760u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
label_155764:
    // 0x155764: 0x2484b8f0  addiu       $a0, $a0, -0x4710
    ctx->pc = 0x155764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949104));
label_155768:
    // 0x155768: 0x24a5b9b0  addiu       $a1, $a1, -0x4650
    ctx->pc = 0x155768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949296));
label_15576c:
    // 0x15576c: 0x24c6b9d0  addiu       $a2, $a2, -0x4630
    ctx->pc = 0x15576cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949328));
label_155770:
    // 0x155770: 0x24e7b9f0  addiu       $a3, $a3, -0x4610
    ctx->pc = 0x155770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949360));
label_155774:
    // 0x155774: 0xc066f64  jal         func_19BD90
label_155778:
    if (ctx->pc == 0x155778u) {
        ctx->pc = 0x155778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155774u;
        // 0x155778: 0x2508ba00  addiu       $t0, $t0, -0x4600 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15577Cu;
        goto label_15577c;
    }
    ctx->pc = 0x155774u;
    SET_GPR_U32(ctx, 31, 0x15577Cu);
    ctx->pc = 0x155778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155774u;
    // 0x155778: 0x2508ba00  addiu       $t0, $t0, -0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BD90u;
    { ctx->pc = 0x19bd90; return; }
    ctx->pc = 0x15577Cu;
label_15577c:
    // 0x15577c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15577cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_155780:
    // 0x155780: 0x3e00008  jr          $ra
label_155784:
    if (ctx->pc == 0x155784u) {
        ctx->pc = 0x155784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155780u;
        // 0x155784: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155788u;
        goto label_155788;
    }
    ctx->pc = 0x155780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155780u;
        // 0x155784: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155788u;
label_155788:
    // 0x155788: 0x0  nop
    ctx->pc = 0x155788u;
    // NOP
label_15578c:
    // 0x15578c: 0x0  nop
    ctx->pc = 0x15578cu;
    // NOP
label_155790:
    // 0x155790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_155794:
    // 0x155794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_155798:
    // 0x155798: 0x8f848630  lw          $a0, -0x79D0($gp)
    ctx->pc = 0x155798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
label_15579c:
    // 0x15579c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1557a0:
    if (ctx->pc == 0x1557A0u) {
        ctx->pc = 0x1557A4u;
        goto label_1557a4;
    }
    ctx->pc = 0x15579Cu;
    {
        const bool branch_taken_0x15579c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15579c) {
            ctx->pc = 0x1557ACu;
            goto label_1557ac;
        }
    }
    ctx->pc = 0x1557A4u;
label_1557a4:
    // 0x1557a4: 0xc070038  jal         func_1C00E0
label_1557a8:
    if (ctx->pc == 0x1557A8u) {
        ctx->pc = 0x1557ACu;
        goto label_1557ac;
    }
    ctx->pc = 0x1557A4u;
    SET_GPR_U32(ctx, 31, 0x1557ACu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1557ACu;
label_1557ac:
    // 0x1557ac: 0xaf808630  sw          $zero, -0x79D0($gp)
    ctx->pc = 0x1557acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936112), GPR_U32(ctx, 0));
label_1557b0:
    // 0x1557b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1557b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1557b4:
    // 0x1557b4: 0x3e00008  jr          $ra
label_1557b8:
    if (ctx->pc == 0x1557B8u) {
        ctx->pc = 0x1557B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557B4u;
        // 0x1557b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1557BCu;
        goto label_1557bc;
    }
    ctx->pc = 0x1557B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1557B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557B4u;
        // 0x1557b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1557B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1557BCu;
label_1557bc:
    // 0x1557bc: 0x0  nop
    ctx->pc = 0x1557bcu;
    // NOP
label_1557c0:
    // 0x1557c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1557c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1557c4:
    // 0x1557c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1557c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1557c8:
    // 0x1557c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1557c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1557cc:
    // 0x1557cc: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1557ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1557d0:
    // 0x1557d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1557d4:
    if (ctx->pc == 0x1557D4u) {
        ctx->pc = 0x1557D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557D0u;
        // 0x1557d4: 0xaf808630  sw          $zero, -0x79D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1557D8u;
        goto label_1557d8;
    }
    ctx->pc = 0x1557D0u;
    {
        const bool branch_taken_0x1557d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557D0u;
        // 0x1557d4: 0xaf808630  sw          $zero, -0x79D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557d0) {
            ctx->pc = 0x1557F0u;
            goto label_1557f0;
        }
    }
    ctx->pc = 0x1557D8u;
label_1557d8:
    // 0x1557d8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1557d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1557dc:
    // 0x1557dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1557dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1557e0:
    // 0x1557e0: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x1557e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_1557e4:
    // 0x1557e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1557e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1557e8:
    // 0x1557e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1557ec:
    if (ctx->pc == 0x1557ECu) {
        ctx->pc = 0x1557ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557E8u;
        // 0x1557ec: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1557F0u;
        goto label_1557f0;
    }
    ctx->pc = 0x1557E8u;
    {
        const bool branch_taken_0x1557e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557E8u;
        // 0x1557ec: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557e8) {
            ctx->pc = 0x155808u;
            goto label_155808;
        }
    }
    ctx->pc = 0x1557F0u;
label_1557f0:
    // 0x1557f0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1557f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1557f4:
    // 0x1557f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1557f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1557f8:
    // 0x1557f8: 0x24422600  addiu       $v0, $v0, 0x2600
    ctx->pc = 0x1557f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9728));
label_1557fc:
    // 0x1557fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1557fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_155800:
    // 0x155800: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x155800u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_155804:
    // 0x155804: 0x0  nop
    ctx->pc = 0x155804u;
    // NOP
label_155808:
    // 0x155808: 0xc041738  jal         func_105CE0
label_15580c:
    if (ctx->pc == 0x15580Cu) {
        ctx->pc = 0x15580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155808u;
        // 0x15580c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155810u;
        goto label_155810;
    }
    ctx->pc = 0x155808u;
    SET_GPR_U32(ctx, 31, 0x155810u);
    ctx->pc = 0x15580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155808u;
    // 0x15580c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x155808u, 0x155810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155810u;
label_155810:
    // 0x155810: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x155810u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_155814:
    // 0x155814: 0xc070080  jal         func_1C0200
label_155818:
    if (ctx->pc == 0x155818u) {
        ctx->pc = 0x155818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155814u;
        // 0x155818: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15581Cu;
        goto label_15581c;
    }
    ctx->pc = 0x155814u;
    SET_GPR_U32(ctx, 31, 0x15581Cu);
    ctx->pc = 0x155818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155814u;
    // 0x155818: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x15581Cu;
label_15581c:
    // 0x15581c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15581cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_155820:
    // 0x155820: 0xc0416e4  jal         func_105B90
label_155824:
    if (ctx->pc == 0x155824u) {
        ctx->pc = 0x155824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155820u;
        // 0x155824: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155828u;
        goto label_155828;
    }
    ctx->pc = 0x155820u;
    SET_GPR_U32(ctx, 31, 0x155828u);
    ctx->pc = 0x155824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155820u;
    // 0x155824: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x155820u, 0x155828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155828u;
label_155828:
    // 0x155828: 0xaf828630  sw          $v0, -0x79D0($gp)
    ctx->pc = 0x155828u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936112), GPR_U32(ctx, 2));
label_15582c:
    // 0x15582c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15582cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_155830:
    // 0x155830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_155834:
    // 0x155834: 0x3e00008  jr          $ra
label_155838:
    if (ctx->pc == 0x155838u) {
        ctx->pc = 0x155838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155834u;
        // 0x155838: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15583Cu;
        goto label_15583c;
    }
    ctx->pc = 0x155834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155834u;
        // 0x155838: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15583Cu;
label_15583c:
    // 0x15583c: 0x0  nop
    ctx->pc = 0x15583cu;
    // NOP
label_155840:
    // 0x155840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_155844:
    // 0x155844: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x155844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_155848:
    // 0x155848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15584c:
    // 0x15584c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15584cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155850:
    // 0x155850: 0xc04e188  jal         func_138620
label_155854:
    if (ctx->pc == 0x155854u) {
        ctx->pc = 0x155854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155850u;
        // 0x155854: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155858u;
        goto label_155858;
    }
    ctx->pc = 0x155850u;
    SET_GPR_U32(ctx, 31, 0x155858u);
    ctx->pc = 0x155854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155850u;
    // 0x155854: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x155850u, 0x155858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155858u;
label_155858:
    // 0x155858: 0xc060290  jal         func_180A40
label_15585c:
    if (ctx->pc == 0x15585Cu) {
        ctx->pc = 0x155860u;
        goto label_155860;
    }
    ctx->pc = 0x155858u;
    SET_GPR_U32(ctx, 31, 0x155860u);
    ctx->pc = 0x180A40u;
    { ctx->pc = 0x180a40; return; }
    ctx->pc = 0x155860u;
label_155860:
    // 0x155860: 0xc04e198  jal         func_138660
label_155864:
    if (ctx->pc == 0x155864u) {
        ctx->pc = 0x155868u;
        goto label_155868;
    }
    ctx->pc = 0x155860u;
    SET_GPR_U32(ctx, 31, 0x155868u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x155860u, 0x155868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155868u;
label_155868:
    // 0x155868: 0x0  nop
    ctx->pc = 0x155868u;
    // NOP
label_15586c:
    // 0x15586c: 0x0  nop
    ctx->pc = 0x15586cu;
    // NOP
label_155870:
    // 0x155870: 0x0  nop
    ctx->pc = 0x155870u;
    // NOP
label_155874:
    // 0x155874: 0x0  nop
    ctx->pc = 0x155874u;
    // NOP
label_155878:
    // 0x155878: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_15587c:
    if (ctx->pc == 0x15587Cu) {
        ctx->pc = 0x155880u;
        goto label_155880;
    }
    ctx->pc = 0x155878u;
    {
        const bool branch_taken_0x155878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155878) {
            ctx->pc = 0x155858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155858;
        }
    }
    ctx->pc = 0x155880u;
label_155880:
    // 0x155880: 0xc060250  jal         func_180940
label_155884:
    if (ctx->pc == 0x155884u) {
        ctx->pc = 0x155888u;
        goto label_155888;
    }
    ctx->pc = 0x155880u;
    SET_GPR_U32(ctx, 31, 0x155888u);
    ctx->pc = 0x180940u;
    { ctx->pc = 0x180940; return; }
    ctx->pc = 0x155888u;
label_155888:
    // 0x155888: 0xc060258  jal         func_180960
label_15588c:
    if (ctx->pc == 0x15588Cu) {
        ctx->pc = 0x155890u;
        goto label_155890;
    }
    ctx->pc = 0x155888u;
    SET_GPR_U32(ctx, 31, 0x155890u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x155890u;
label_155890:
    // 0x155890: 0xc060258  jal         func_180960
label_155894:
    if (ctx->pc == 0x155894u) {
        ctx->pc = 0x155898u;
        goto label_155898;
    }
    ctx->pc = 0x155890u;
    SET_GPR_U32(ctx, 31, 0x155898u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x155898u;
label_155898:
    // 0x155898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15589c:
    // 0x15589c: 0x3e00008  jr          $ra
label_1558a0:
    if (ctx->pc == 0x1558A0u) {
        ctx->pc = 0x1558A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15589Cu;
        // 0x1558a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1558A4u;
        goto label_1558a4;
    }
    ctx->pc = 0x15589Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1558A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15589Cu;
        // 0x1558a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15589Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1558A4u;
label_1558a4:
    // 0x1558a4: 0x0  nop
    ctx->pc = 0x1558a4u;
    // NOP
label_1558a8:
    // 0x1558a8: 0x0  nop
    ctx->pc = 0x1558a8u;
    // NOP
label_1558ac:
    // 0x1558ac: 0x0  nop
    ctx->pc = 0x1558acu;
    // NOP
label_1558b0:
    // 0x1558b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1558b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1558b4:
    // 0x1558b4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1558b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1558b8:
    // 0x1558b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1558b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1558bc:
    // 0x1558bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1558bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1558c0:
    // 0x1558c0: 0xc04e188  jal         func_138620
label_1558c4:
    if (ctx->pc == 0x1558C4u) {
        ctx->pc = 0x1558C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558C0u;
        // 0x1558c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1558C8u;
        goto label_1558c8;
    }
    ctx->pc = 0x1558C0u;
    SET_GPR_U32(ctx, 31, 0x1558C8u);
    ctx->pc = 0x1558C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1558C0u;
    // 0x1558c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1558C0u, 0x1558C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558C8u;
label_1558c8:
    // 0x1558c8: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x1558c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_1558cc:
    // 0x1558cc: 0xc060254  jal         func_180950
label_1558d0:
    if (ctx->pc == 0x1558D0u) {
        ctx->pc = 0x1558D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558CCu;
        // 0x1558d0: 0x24845900  addiu       $a0, $a0, 0x5900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1558D4u;
        goto label_1558d4;
    }
    ctx->pc = 0x1558CCu;
    SET_GPR_U32(ctx, 31, 0x1558D4u);
    ctx->pc = 0x1558D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1558CCu;
    // 0x1558d0: 0x24845900  addiu       $a0, $a0, 0x5900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180950u;
    { ctx->pc = 0x180950; return; }
    ctx->pc = 0x1558D4u;
label_1558d4:
    // 0x1558d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1558d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1558d8:
    // 0x1558d8: 0x3e00008  jr          $ra
label_1558dc:
    if (ctx->pc == 0x1558DCu) {
        ctx->pc = 0x1558DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558D8u;
        // 0x1558dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1558E0u;
        goto label_1558e0;
    }
    ctx->pc = 0x1558D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1558DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558D8u;
        // 0x1558dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1558D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1558E0u;
label_1558e0:
    // 0x1558e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1558e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1558e4:
    // 0x1558e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1558e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1558e8:
    // 0x1558e8: 0xc0556bc  jal         func_155AF0
label_1558ec:
    if (ctx->pc == 0x1558ECu) {
        ctx->pc = 0x1558F0u;
        goto label_1558f0;
    }
    ctx->pc = 0x1558E8u;
    SET_GPR_U32(ctx, 31, 0x1558F0u);
    ctx->pc = 0x155AF0u;
    { ctx->pc = 0x155af0; return; }
    ctx->pc = 0x1558F0u;
label_1558f0:
    // 0x1558f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1558f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1558f4:
    // 0x1558f4: 0x3e00008  jr          $ra
label_1558f8:
    if (ctx->pc == 0x1558F8u) {
        ctx->pc = 0x1558F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558F4u;
        // 0x1558f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1558FCu;
        goto label_1558fc;
    }
    ctx->pc = 0x1558F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1558F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558F4u;
        // 0x1558f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1558F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1558FCu;
label_1558fc:
    // 0x1558fc: 0x0  nop
    ctx->pc = 0x1558fcu;
    // NOP
    ctx->pc = 0x155900u;
    return;
}

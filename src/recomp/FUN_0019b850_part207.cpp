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


void FUN_0019b850_part207(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2001b0u: goto label_2001b0;
        case 0x2001b4u: goto label_2001b4;
        case 0x2001b8u: goto label_2001b8;
        case 0x2001bcu: goto label_2001bc;
        case 0x2001c0u: goto label_2001c0;
        case 0x2001c4u: goto label_2001c4;
        case 0x2001c8u: goto label_2001c8;
        case 0x2001ccu: goto label_2001cc;
        case 0x2001d0u: goto label_2001d0;
        case 0x2001d4u: goto label_2001d4;
        case 0x2001d8u: goto label_2001d8;
        case 0x2001dcu: goto label_2001dc;
        case 0x2001e0u: goto label_2001e0;
        case 0x2001e4u: goto label_2001e4;
        case 0x2001e8u: goto label_2001e8;
        case 0x2001ecu: goto label_2001ec;
        case 0x2001f0u: goto label_2001f0;
        case 0x2001f4u: goto label_2001f4;
        case 0x2001f8u: goto label_2001f8;
        case 0x2001fcu: goto label_2001fc;
        case 0x200200u: goto label_200200;
        case 0x200204u: goto label_200204;
        case 0x200208u: goto label_200208;
        case 0x20020cu: goto label_20020c;
        case 0x200210u: goto label_200210;
        case 0x200214u: goto label_200214;
        case 0x200218u: goto label_200218;
        case 0x20021cu: goto label_20021c;
        case 0x200220u: goto label_200220;
        case 0x200224u: goto label_200224;
        case 0x200228u: goto label_200228;
        case 0x20022cu: goto label_20022c;
        case 0x200230u: goto label_200230;
        case 0x200234u: goto label_200234;
        case 0x200238u: goto label_200238;
        case 0x20023cu: goto label_20023c;
        case 0x200240u: goto label_200240;
        case 0x200244u: goto label_200244;
        case 0x200248u: goto label_200248;
        case 0x20024cu: goto label_20024c;
        case 0x200250u: goto label_200250;
        case 0x200254u: goto label_200254;
        case 0x200258u: goto label_200258;
        case 0x20025cu: goto label_20025c;
        case 0x200260u: goto label_200260;
        case 0x200264u: goto label_200264;
        case 0x200268u: goto label_200268;
        case 0x20026cu: goto label_20026c;
        case 0x200270u: goto label_200270;
        case 0x200274u: goto label_200274;
        case 0x200278u: goto label_200278;
        case 0x20027cu: goto label_20027c;
        case 0x200280u: goto label_200280;
        case 0x200284u: goto label_200284;
        case 0x200288u: goto label_200288;
        case 0x20028cu: goto label_20028c;
        case 0x200290u: goto label_200290;
        case 0x200294u: goto label_200294;
        case 0x200298u: goto label_200298;
        case 0x20029cu: goto label_20029c;
        case 0x2002a0u: goto label_2002a0;
        case 0x2002a4u: goto label_2002a4;
        case 0x2002a8u: goto label_2002a8;
        case 0x2002acu: goto label_2002ac;
        case 0x2002b0u: goto label_2002b0;
        case 0x2002b4u: goto label_2002b4;
        case 0x2002b8u: goto label_2002b8;
        case 0x2002bcu: goto label_2002bc;
        case 0x2002c0u: goto label_2002c0;
        case 0x2002c4u: goto label_2002c4;
        case 0x2002c8u: goto label_2002c8;
        case 0x2002ccu: goto label_2002cc;
        case 0x2002d0u: goto label_2002d0;
        case 0x2002d4u: goto label_2002d4;
        case 0x2002d8u: goto label_2002d8;
        case 0x2002dcu: goto label_2002dc;
        case 0x2002e0u: goto label_2002e0;
        case 0x2002e4u: goto label_2002e4;
        case 0x2002e8u: goto label_2002e8;
        case 0x2002ecu: goto label_2002ec;
        case 0x2002f0u: goto label_2002f0;
        case 0x2002f4u: goto label_2002f4;
        case 0x2002f8u: goto label_2002f8;
        case 0x2002fcu: goto label_2002fc;
        case 0x200300u: goto label_200300;
        case 0x200304u: goto label_200304;
        case 0x200308u: goto label_200308;
        case 0x20030cu: goto label_20030c;
        case 0x200310u: goto label_200310;
        case 0x200314u: goto label_200314;
        case 0x200318u: goto label_200318;
        case 0x20031cu: goto label_20031c;
        case 0x200320u: goto label_200320;
        case 0x200324u: goto label_200324;
        case 0x200328u: goto label_200328;
        case 0x20032cu: goto label_20032c;
        case 0x200330u: goto label_200330;
        case 0x200334u: goto label_200334;
        case 0x200338u: goto label_200338;
        case 0x20033cu: goto label_20033c;
        case 0x200340u: goto label_200340;
        case 0x200344u: goto label_200344;
        case 0x200348u: goto label_200348;
        case 0x20034cu: goto label_20034c;
        case 0x200350u: goto label_200350;
        case 0x200354u: goto label_200354;
        case 0x200358u: goto label_200358;
        case 0x20035cu: goto label_20035c;
        case 0x200360u: goto label_200360;
        case 0x200364u: goto label_200364;
        case 0x200368u: goto label_200368;
        case 0x20036cu: goto label_20036c;
        case 0x200370u: goto label_200370;
        case 0x200374u: goto label_200374;
        case 0x200378u: goto label_200378;
        case 0x20037cu: goto label_20037c;
        case 0x200380u: goto label_200380;
        case 0x200384u: goto label_200384;
        case 0x200388u: goto label_200388;
        case 0x20038cu: goto label_20038c;
        case 0x200390u: goto label_200390;
        case 0x200394u: goto label_200394;
        case 0x200398u: goto label_200398;
        case 0x20039cu: goto label_20039c;
        case 0x2003a0u: goto label_2003a0;
        case 0x2003a4u: goto label_2003a4;
        case 0x2003a8u: goto label_2003a8;
        case 0x2003acu: goto label_2003ac;
        case 0x2003b0u: goto label_2003b0;
        case 0x2003b4u: goto label_2003b4;
        case 0x2003b8u: goto label_2003b8;
        case 0x2003bcu: goto label_2003bc;
        case 0x2003c0u: goto label_2003c0;
        case 0x2003c4u: goto label_2003c4;
        case 0x2003c8u: goto label_2003c8;
        case 0x2003ccu: goto label_2003cc;
        case 0x2003d0u: goto label_2003d0;
        case 0x2003d4u: goto label_2003d4;
        case 0x2003d8u: goto label_2003d8;
        case 0x2003dcu: goto label_2003dc;
        case 0x2003e0u: goto label_2003e0;
        case 0x2003e4u: goto label_2003e4;
        case 0x2003e8u: goto label_2003e8;
        case 0x2003ecu: goto label_2003ec;
        case 0x2003f0u: goto label_2003f0;
        case 0x2003f4u: goto label_2003f4;
        case 0x2003f8u: goto label_2003f8;
        case 0x2003fcu: goto label_2003fc;
        case 0x200400u: goto label_200400;
        case 0x200404u: goto label_200404;
        case 0x200408u: goto label_200408;
        case 0x20040cu: goto label_20040c;
        case 0x200410u: goto label_200410;
        case 0x200414u: goto label_200414;
        case 0x200418u: goto label_200418;
        case 0x20041cu: goto label_20041c;
        case 0x200420u: goto label_200420;
        case 0x200424u: goto label_200424;
        case 0x200428u: goto label_200428;
        case 0x20042cu: goto label_20042c;
        case 0x200430u: goto label_200430;
        case 0x200434u: goto label_200434;
        case 0x200438u: goto label_200438;
        case 0x20043cu: goto label_20043c;
        case 0x200440u: goto label_200440;
        case 0x200444u: goto label_200444;
        case 0x200448u: goto label_200448;
        case 0x20044cu: goto label_20044c;
        case 0x200450u: goto label_200450;
        case 0x200454u: goto label_200454;
        case 0x200458u: goto label_200458;
        case 0x20045cu: goto label_20045c;
        case 0x200460u: goto label_200460;
        case 0x200464u: goto label_200464;
        case 0x200468u: goto label_200468;
        case 0x20046cu: goto label_20046c;
        case 0x200470u: goto label_200470;
        case 0x200474u: goto label_200474;
        case 0x200478u: goto label_200478;
        case 0x20047cu: goto label_20047c;
        case 0x200480u: goto label_200480;
        case 0x200484u: goto label_200484;
        case 0x200488u: goto label_200488;
        case 0x20048cu: goto label_20048c;
        case 0x200490u: goto label_200490;
        case 0x200494u: goto label_200494;
        case 0x200498u: goto label_200498;
        case 0x20049cu: goto label_20049c;
        case 0x2004a0u: goto label_2004a0;
        case 0x2004a4u: goto label_2004a4;
        case 0x2004a8u: goto label_2004a8;
        case 0x2004acu: goto label_2004ac;
        case 0x2004b0u: goto label_2004b0;
        case 0x2004b4u: goto label_2004b4;
        case 0x2004b8u: goto label_2004b8;
        case 0x2004bcu: goto label_2004bc;
        case 0x2004c0u: goto label_2004c0;
        case 0x2004c4u: goto label_2004c4;
        case 0x2004c8u: goto label_2004c8;
        case 0x2004ccu: goto label_2004cc;
        case 0x2004d0u: goto label_2004d0;
        case 0x2004d4u: goto label_2004d4;
        case 0x2004d8u: goto label_2004d8;
        case 0x2004dcu: goto label_2004dc;
        case 0x2004e0u: goto label_2004e0;
        case 0x2004e4u: goto label_2004e4;
        case 0x2004e8u: goto label_2004e8;
        case 0x2004ecu: goto label_2004ec;
        case 0x2004f0u: goto label_2004f0;
        case 0x2004f4u: goto label_2004f4;
        case 0x2004f8u: goto label_2004f8;
        case 0x2004fcu: goto label_2004fc;
        case 0x200500u: goto label_200500;
        case 0x200504u: goto label_200504;
        case 0x200508u: goto label_200508;
        case 0x20050cu: goto label_20050c;
        case 0x200510u: goto label_200510;
        case 0x200514u: goto label_200514;
        case 0x200518u: goto label_200518;
        case 0x20051cu: goto label_20051c;
        case 0x200520u: goto label_200520;
        case 0x200524u: goto label_200524;
        case 0x200528u: goto label_200528;
        case 0x20052cu: goto label_20052c;
        case 0x200530u: goto label_200530;
        case 0x200534u: goto label_200534;
        case 0x200538u: goto label_200538;
        case 0x20053cu: goto label_20053c;
        case 0x200540u: goto label_200540;
        case 0x200544u: goto label_200544;
        case 0x200548u: goto label_200548;
        case 0x20054cu: goto label_20054c;
        case 0x200550u: goto label_200550;
        case 0x200554u: goto label_200554;
        case 0x200558u: goto label_200558;
        case 0x20055cu: goto label_20055c;
        case 0x200560u: goto label_200560;
        case 0x200564u: goto label_200564;
        case 0x200568u: goto label_200568;
        case 0x20056cu: goto label_20056c;
        case 0x200570u: goto label_200570;
        case 0x200574u: goto label_200574;
        case 0x200578u: goto label_200578;
        case 0x20057cu: goto label_20057c;
        case 0x200580u: goto label_200580;
        case 0x200584u: goto label_200584;
        case 0x200588u: goto label_200588;
        case 0x20058cu: goto label_20058c;
        case 0x200590u: goto label_200590;
        case 0x200594u: goto label_200594;
        case 0x200598u: goto label_200598;
        case 0x20059cu: goto label_20059c;
        case 0x2005a0u: goto label_2005a0;
        case 0x2005a4u: goto label_2005a4;
        case 0x2005a8u: goto label_2005a8;
        case 0x2005acu: goto label_2005ac;
        case 0x2005b0u: goto label_2005b0;
        case 0x2005b4u: goto label_2005b4;
        case 0x2005b8u: goto label_2005b8;
        case 0x2005bcu: goto label_2005bc;
        case 0x2005c0u: goto label_2005c0;
        case 0x2005c4u: goto label_2005c4;
        case 0x2005c8u: goto label_2005c8;
        case 0x2005ccu: goto label_2005cc;
        case 0x2005d0u: goto label_2005d0;
        case 0x2005d4u: goto label_2005d4;
        case 0x2005d8u: goto label_2005d8;
        case 0x2005dcu: goto label_2005dc;
        case 0x2005e0u: goto label_2005e0;
        case 0x2005e4u: goto label_2005e4;
        case 0x2005e8u: goto label_2005e8;
        case 0x2005ecu: goto label_2005ec;
        case 0x2005f0u: goto label_2005f0;
        case 0x2005f4u: goto label_2005f4;
        case 0x2005f8u: goto label_2005f8;
        case 0x2005fcu: goto label_2005fc;
        case 0x200600u: goto label_200600;
        case 0x200604u: goto label_200604;
        case 0x200608u: goto label_200608;
        case 0x20060cu: goto label_20060c;
        case 0x200610u: goto label_200610;
        case 0x200614u: goto label_200614;
        case 0x200618u: goto label_200618;
        case 0x20061cu: goto label_20061c;
        case 0x200620u: goto label_200620;
        case 0x200624u: goto label_200624;
        case 0x200628u: goto label_200628;
        case 0x20062cu: goto label_20062c;
        case 0x200630u: goto label_200630;
        case 0x200634u: goto label_200634;
        case 0x200638u: goto label_200638;
        case 0x20063cu: goto label_20063c;
        case 0x200640u: goto label_200640;
        case 0x200644u: goto label_200644;
        case 0x200648u: goto label_200648;
        case 0x20064cu: goto label_20064c;
        case 0x200650u: goto label_200650;
        case 0x200654u: goto label_200654;
        case 0x200658u: goto label_200658;
        case 0x20065cu: goto label_20065c;
        case 0x200660u: goto label_200660;
        case 0x200664u: goto label_200664;
        case 0x200668u: goto label_200668;
        case 0x20066cu: goto label_20066c;
        case 0x200670u: goto label_200670;
        case 0x200674u: goto label_200674;
        case 0x200678u: goto label_200678;
        case 0x20067cu: goto label_20067c;
        case 0x200680u: goto label_200680;
        case 0x200684u: goto label_200684;
        case 0x200688u: goto label_200688;
        case 0x20068cu: goto label_20068c;
        case 0x200690u: goto label_200690;
        case 0x200694u: goto label_200694;
        case 0x200698u: goto label_200698;
        case 0x20069cu: goto label_20069c;
        case 0x2006a0u: goto label_2006a0;
        case 0x2006a4u: goto label_2006a4;
        case 0x2006a8u: goto label_2006a8;
        case 0x2006acu: goto label_2006ac;
        case 0x2006b0u: goto label_2006b0;
        case 0x2006b4u: goto label_2006b4;
        case 0x2006b8u: goto label_2006b8;
        case 0x2006bcu: goto label_2006bc;
        case 0x2006c0u: goto label_2006c0;
        case 0x2006c4u: goto label_2006c4;
        case 0x2006c8u: goto label_2006c8;
        case 0x2006ccu: goto label_2006cc;
        case 0x2006d0u: goto label_2006d0;
        case 0x2006d4u: goto label_2006d4;
        case 0x2006d8u: goto label_2006d8;
        case 0x2006dcu: goto label_2006dc;
        case 0x2006e0u: goto label_2006e0;
        case 0x2006e4u: goto label_2006e4;
        case 0x2006e8u: goto label_2006e8;
        case 0x2006ecu: goto label_2006ec;
        case 0x2006f0u: goto label_2006f0;
        case 0x2006f4u: goto label_2006f4;
        case 0x2006f8u: goto label_2006f8;
        case 0x2006fcu: goto label_2006fc;
        case 0x200700u: goto label_200700;
        case 0x200704u: goto label_200704;
        case 0x200708u: goto label_200708;
        case 0x20070cu: goto label_20070c;
        case 0x200710u: goto label_200710;
        case 0x200714u: goto label_200714;
        case 0x200718u: goto label_200718;
        case 0x20071cu: goto label_20071c;
        case 0x200720u: goto label_200720;
        case 0x200724u: goto label_200724;
        case 0x200728u: goto label_200728;
        case 0x20072cu: goto label_20072c;
        case 0x200730u: goto label_200730;
        case 0x200734u: goto label_200734;
        case 0x200738u: goto label_200738;
        case 0x20073cu: goto label_20073c;
        case 0x200740u: goto label_200740;
        case 0x200744u: goto label_200744;
        case 0x200748u: goto label_200748;
        case 0x20074cu: goto label_20074c;
        case 0x200750u: goto label_200750;
        case 0x200754u: goto label_200754;
        case 0x200758u: goto label_200758;
        case 0x20075cu: goto label_20075c;
        case 0x200760u: goto label_200760;
        case 0x200764u: goto label_200764;
        case 0x200768u: goto label_200768;
        case 0x20076cu: goto label_20076c;
        case 0x200770u: goto label_200770;
        case 0x200774u: goto label_200774;
        case 0x200778u: goto label_200778;
        case 0x20077cu: goto label_20077c;
        case 0x200780u: goto label_200780;
        case 0x200784u: goto label_200784;
        case 0x200788u: goto label_200788;
        case 0x20078cu: goto label_20078c;
        case 0x200790u: goto label_200790;
        case 0x200794u: goto label_200794;
        case 0x200798u: goto label_200798;
        case 0x20079cu: goto label_20079c;
        case 0x2007a0u: goto label_2007a0;
        case 0x2007a4u: goto label_2007a4;
        case 0x2007a8u: goto label_2007a8;
        case 0x2007acu: goto label_2007ac;
        case 0x2007b0u: goto label_2007b0;
        case 0x2007b4u: goto label_2007b4;
        case 0x2007b8u: goto label_2007b8;
        case 0x2007bcu: goto label_2007bc;
        case 0x2007c0u: goto label_2007c0;
        case 0x2007c4u: goto label_2007c4;
        case 0x2007c8u: goto label_2007c8;
        case 0x2007ccu: goto label_2007cc;
        case 0x2007d0u: goto label_2007d0;
        case 0x2007d4u: goto label_2007d4;
        case 0x2007d8u: goto label_2007d8;
        case 0x2007dcu: goto label_2007dc;
        case 0x2007e0u: goto label_2007e0;
        case 0x2007e4u: goto label_2007e4;
        case 0x2007e8u: goto label_2007e8;
        case 0x2007ecu: goto label_2007ec;
        case 0x2007f0u: goto label_2007f0;
        case 0x2007f4u: goto label_2007f4;
        case 0x2007f8u: goto label_2007f8;
        case 0x2007fcu: goto label_2007fc;
        case 0x200800u: goto label_200800;
        case 0x200804u: goto label_200804;
        case 0x200808u: goto label_200808;
        case 0x20080cu: goto label_20080c;
        case 0x200810u: goto label_200810;
        case 0x200814u: goto label_200814;
        case 0x200818u: goto label_200818;
        case 0x20081cu: goto label_20081c;
        case 0x200820u: goto label_200820;
        case 0x200824u: goto label_200824;
        case 0x200828u: goto label_200828;
        case 0x20082cu: goto label_20082c;
        case 0x200830u: goto label_200830;
        case 0x200834u: goto label_200834;
        case 0x200838u: goto label_200838;
        case 0x20083cu: goto label_20083c;
        case 0x200840u: goto label_200840;
        case 0x200844u: goto label_200844;
        case 0x200848u: goto label_200848;
        case 0x20084cu: goto label_20084c;
        case 0x200850u: goto label_200850;
        case 0x200854u: goto label_200854;
        case 0x200858u: goto label_200858;
        case 0x20085cu: goto label_20085c;
        case 0x200860u: goto label_200860;
        case 0x200864u: goto label_200864;
        case 0x200868u: goto label_200868;
        case 0x20086cu: goto label_20086c;
        case 0x200870u: goto label_200870;
        case 0x200874u: goto label_200874;
        case 0x200878u: goto label_200878;
        case 0x20087cu: goto label_20087c;
        case 0x200880u: goto label_200880;
        case 0x200884u: goto label_200884;
        case 0x200888u: goto label_200888;
        case 0x20088cu: goto label_20088c;
        case 0x200890u: goto label_200890;
        case 0x200894u: goto label_200894;
        case 0x200898u: goto label_200898;
        case 0x20089cu: goto label_20089c;
        case 0x2008a0u: goto label_2008a0;
        case 0x2008a4u: goto label_2008a4;
        case 0x2008a8u: goto label_2008a8;
        case 0x2008acu: goto label_2008ac;
        case 0x2008b0u: goto label_2008b0;
        case 0x2008b4u: goto label_2008b4;
        case 0x2008b8u: goto label_2008b8;
        case 0x2008bcu: goto label_2008bc;
        case 0x2008c0u: goto label_2008c0;
        case 0x2008c4u: goto label_2008c4;
        case 0x2008c8u: goto label_2008c8;
        case 0x2008ccu: goto label_2008cc;
        case 0x2008d0u: goto label_2008d0;
        case 0x2008d4u: goto label_2008d4;
        case 0x2008d8u: goto label_2008d8;
        case 0x2008dcu: goto label_2008dc;
        case 0x2008e0u: goto label_2008e0;
        case 0x2008e4u: goto label_2008e4;
        case 0x2008e8u: goto label_2008e8;
        case 0x2008ecu: goto label_2008ec;
        case 0x2008f0u: goto label_2008f0;
        case 0x2008f4u: goto label_2008f4;
        case 0x2008f8u: goto label_2008f8;
        case 0x2008fcu: goto label_2008fc;
        case 0x200900u: goto label_200900;
        case 0x200904u: goto label_200904;
        case 0x200908u: goto label_200908;
        case 0x20090cu: goto label_20090c;
        case 0x200910u: goto label_200910;
        case 0x200914u: goto label_200914;
        case 0x200918u: goto label_200918;
        case 0x20091cu: goto label_20091c;
        case 0x200920u: goto label_200920;
        case 0x200924u: goto label_200924;
        case 0x200928u: goto label_200928;
        case 0x20092cu: goto label_20092c;
        case 0x200930u: goto label_200930;
        case 0x200934u: goto label_200934;
        case 0x200938u: goto label_200938;
        case 0x20093cu: goto label_20093c;
        case 0x200940u: goto label_200940;
        case 0x200944u: goto label_200944;
        case 0x200948u: goto label_200948;
        case 0x20094cu: goto label_20094c;
        case 0x200950u: goto label_200950;
        case 0x200954u: goto label_200954;
        case 0x200958u: goto label_200958;
        case 0x20095cu: goto label_20095c;
        case 0x200960u: goto label_200960;
        case 0x200964u: goto label_200964;
        case 0x200968u: goto label_200968;
        case 0x20096cu: goto label_20096c;
        case 0x200970u: goto label_200970;
        case 0x200974u: goto label_200974;
        case 0x200978u: goto label_200978;
        case 0x20097cu: goto label_20097c;
        default: return;
    }

label_2001b0:
    if (ctx->pc == 0x2001B0u) {
        ctx->pc = 0x2001B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001ACu;
        // 0x2001b0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2001B4u;
        goto label_2001b4;
    }
    ctx->pc = 0x2001ACu;
    SET_GPR_U32(ctx, 31, 0x2001B4u);
    ctx->pc = 0x2001B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2001ACu;
    // 0x2001b0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539C0u, 0x2001ACu, 0x2001B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001B4u;
label_2001b4:
    // 0x2001b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2001b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2001b8:
    // 0x2001b8: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x2001b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_2001bc:
    // 0x2001bc: 0x26042640  addiu       $a0, $s0, 0x2640
    ctx->pc = 0x2001bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9792));
label_2001c0:
    // 0x2001c0: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2001c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2001c4:
    // 0x2001c4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2001c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2001c8:
    // 0x2001c8: 0xc054e74  jal         func_1539D0
label_2001cc:
    if (ctx->pc == 0x2001CCu) {
        ctx->pc = 0x2001CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001C8u;
        // 0x2001cc: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2001D0u;
        goto label_2001d0;
    }
    ctx->pc = 0x2001C8u;
    SET_GPR_U32(ctx, 31, 0x2001D0u);
    ctx->pc = 0x2001CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2001C8u;
    // 0x2001cc: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2001C8u, 0x2001D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001D0u;
label_2001d0:
    // 0x2001d0: 0xc07082c  jal         func_1C20B0
label_2001d4:
    if (ctx->pc == 0x2001D4u) {
        ctx->pc = 0x2001D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001D0u;
        // 0x2001d4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2001D8u;
        goto label_2001d8;
    }
    ctx->pc = 0x2001D0u;
    SET_GPR_U32(ctx, 31, 0x2001D8u);
    ctx->pc = 0x2001D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2001D0u;
    // 0x2001d4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x2001D8u;
label_2001d8:
    // 0x2001d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2001d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2001dc:
    // 0x2001dc: 0x260434e0  addiu       $a0, $s0, 0x34E0
    ctx->pc = 0x2001dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13536));
label_2001e0:
    // 0x2001e0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2001e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2001e4:
    // 0x2001e4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2001e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2001e8:
    // 0x2001e8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2001e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2001ec:
    // 0x2001ec: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x2001ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2001f0:
    // 0x2001f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2001f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2001f4:
    // 0x2001f4: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2001f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2001f8:
    // 0x2001f8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2001f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_2001fc:
    // 0x2001fc: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x2001fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_200200:
    // 0x200200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200204:
    // 0x200204: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x200204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_200208:
    // 0x200208: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x200208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20020c:
    // 0x20020c: 0x240a0178  addiu       $t2, $zero, 0x178
    ctx->pc = 0x20020cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_200210:
    // 0x200210: 0xc05de30  jal         func_1778C0
label_200214:
    if (ctx->pc == 0x200214u) {
        ctx->pc = 0x200214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200210u;
        // 0x200214: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200218u;
        goto label_200218;
    }
    ctx->pc = 0x200210u;
    SET_GPR_U32(ctx, 31, 0x200218u);
    ctx->pc = 0x200214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200210u;
    // 0x200214: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x200210u, 0x200218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200218u;
label_200218:
    // 0x200218: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x200218u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20021c:
    // 0x20021c: 0x0  nop
    ctx->pc = 0x20021cu;
    // NOP
label_200220:
    // 0x200220: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x200220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_200224:
    // 0x200224: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x200224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_200228:
    // 0x200228: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x200228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_20022c:
    // 0x20022c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x20022cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_200230:
    // 0x200230: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x200230u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_200234:
    // 0x200234: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x200234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_200238:
    // 0x200238: 0xc054e5c  jal         func_153970
label_20023c:
    if (ctx->pc == 0x20023Cu) {
        ctx->pc = 0x20023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200238u;
        // 0x20023c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x200240u;
        goto label_200240;
    }
    ctx->pc = 0x200238u;
    SET_GPR_U32(ctx, 31, 0x200240u);
    ctx->pc = 0x20023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200238u;
    // 0x20023c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x200238u, 0x200240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200240u;
label_200240:
    // 0x200240: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x200240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_200244:
    // 0x200244: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x200244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200248:
    // 0x200248: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x200248u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_20024c:
    // 0x20024c: 0x24443580  addiu       $a0, $v0, 0x3580
    ctx->pc = 0x20024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13696));
label_200250:
    // 0x200250: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x200250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_200254:
    // 0x200254: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x200254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_200258:
    // 0x200258: 0xc054e74  jal         func_1539D0
label_20025c:
    if (ctx->pc == 0x20025Cu) {
        ctx->pc = 0x20025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200258u;
        // 0x20025c: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200260u;
        goto label_200260;
    }
    ctx->pc = 0x200258u;
    SET_GPR_U32(ctx, 31, 0x200260u);
    ctx->pc = 0x20025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200258u;
    // 0x20025c: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x200258u, 0x200260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200260u;
label_200260:
    // 0x200260: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x200260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_200264:
    // 0x200264: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x200264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_200268:
    // 0x200268: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_20026c:
    if (ctx->pc == 0x20026Cu) {
        ctx->pc = 0x20026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200268u;
        // 0x20026c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200270u;
        goto label_200270;
    }
    ctx->pc = 0x200268u;
    {
        const bool branch_taken_0x200268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200268u;
        // 0x20026c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200268) {
            ctx->pc = 0x20021Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20021c;
        }
    }
    ctx->pc = 0x200270u;
label_200270:
    // 0x200270: 0xc07082c  jal         func_1C20B0
label_200274:
    if (ctx->pc == 0x200274u) {
        ctx->pc = 0x200278u;
        goto label_200278;
    }
    ctx->pc = 0x200270u;
    SET_GPR_U32(ctx, 31, 0x200278u);
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x200278u;
label_200278:
    // 0x200278: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x200278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20027c:
    // 0x20027c: 0x26047ea0  addiu       $a0, $s0, 0x7EA0
    ctx->pc = 0x20027cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32416));
label_200280:
    // 0x200280: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x200280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_200284:
    // 0x200284: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x200284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_200288:
    // 0x200288: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x200288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20028c:
    // 0x20028c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20028cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_200290:
    // 0x200290: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x200290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_200294:
    // 0x200294: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x200294u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_200298:
    // 0x200298: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x200298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20029c:
    // 0x20029c: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x20029cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2002a0:
    // 0x2002a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2002a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2002a4:
    // 0x2002a4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2002a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2002a8:
    // 0x2002a8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2002a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2002ac:
    // 0x2002ac: 0x240a0188  addiu       $t2, $zero, 0x188
    ctx->pc = 0x2002acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_2002b0:
    // 0x2002b0: 0xc05de30  jal         func_1778C0
label_2002b4:
    if (ctx->pc == 0x2002B4u) {
        ctx->pc = 0x2002B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002B0u;
        // 0x2002b4: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2002B8u;
        goto label_2002b8;
    }
    ctx->pc = 0x2002B0u;
    SET_GPR_U32(ctx, 31, 0x2002B8u);
    ctx->pc = 0x2002B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2002B0u;
    // 0x2002b4: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2002B0u, 0x2002B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2002B8u;
label_2002b8:
    // 0x2002b8: 0xc07082c  jal         func_1C20B0
label_2002bc:
    if (ctx->pc == 0x2002BCu) {
        ctx->pc = 0x2002BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002B8u;
        // 0x2002bc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2002C0u;
        goto label_2002c0;
    }
    ctx->pc = 0x2002B8u;
    SET_GPR_U32(ctx, 31, 0x2002C0u);
    ctx->pc = 0x2002BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2002B8u;
    // 0x2002bc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x2002C0u;
label_2002c0:
    // 0x2002c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2002c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2002c4:
    // 0x2002c4: 0x26047f40  addiu       $a0, $s0, 0x7F40
    ctx->pc = 0x2002c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32576));
label_2002c8:
    // 0x2002c8: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x2002c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2002cc:
    // 0x2002cc: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2002ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2002d0:
    // 0x2002d0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2002d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2002d4:
    // 0x2002d4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x2002d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2002d8:
    // 0x2002d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2002d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2002dc:
    // 0x2002dc: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2002dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2002e0:
    // 0x2002e0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2002e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_2002e4:
    // 0x2002e4: 0x240900c0  addiu       $t1, $zero, 0xC0
    ctx->pc = 0x2002e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2002e8:
    // 0x2002e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2002e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2002ec:
    // 0x2002ec: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2002ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2002f0:
    // 0x2002f0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2002f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2002f4:
    // 0x2002f4: 0x240a01b8  addiu       $t2, $zero, 0x1B8
    ctx->pc = 0x2002f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
label_2002f8:
    // 0x2002f8: 0xc05de30  jal         func_1778C0
label_2002fc:
    if (ctx->pc == 0x2002FCu) {
        ctx->pc = 0x2002FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2002F8u;
        // 0x2002fc: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200300u;
        goto label_200300;
    }
    ctx->pc = 0x2002F8u;
    SET_GPR_U32(ctx, 31, 0x200300u);
    ctx->pc = 0x2002FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2002F8u;
    // 0x2002fc: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2002F8u, 0x200300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200300u;
label_200300:
    // 0x200300: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x200300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_200304:
    // 0x200304: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x200304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_200308:
    // 0x200308: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x200308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_20030c:
    // 0x20030c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x20030cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_200310:
    // 0x200310: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x200310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_200314:
    // 0x200314: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x200314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_200318:
    // 0x200318: 0xc054e5c  jal         func_153970
label_20031c:
    if (ctx->pc == 0x20031Cu) {
        ctx->pc = 0x20031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200318u;
        // 0x20031c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x200320u;
        goto label_200320;
    }
    ctx->pc = 0x200318u;
    SET_GPR_U32(ctx, 31, 0x200320u);
    ctx->pc = 0x20031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200318u;
    // 0x20031c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x200318u, 0x200320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200320u;
label_200320:
    // 0x200320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x200320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200324:
    // 0x200324: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x200324u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_200328:
    // 0x200328: 0x26047fe0  addiu       $a0, $s0, 0x7FE0
    ctx->pc = 0x200328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32736));
label_20032c:
    // 0x20032c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x20032cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_200330:
    // 0x200330: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x200330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_200334:
    // 0x200334: 0xc054e74  jal         func_1539D0
label_200338:
    if (ctx->pc == 0x200338u) {
        ctx->pc = 0x200338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200334u;
        // 0x200338: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20033Cu;
        goto label_20033c;
    }
    ctx->pc = 0x200334u;
    SET_GPR_U32(ctx, 31, 0x20033Cu);
    ctx->pc = 0x200338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200334u;
    // 0x200338: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x200334u, 0x20033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20033Cu;
label_20033c:
    // 0x20033c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x20033cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_200340:
    // 0x200340: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x200340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_200344:
    // 0x200344: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x200344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_200348:
    // 0x200348: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x200348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20034c:
    // 0x20034c: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x20034cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_200350:
    // 0x200350: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x200350u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_200354:
    // 0x200354: 0xc054e5c  jal         func_153970
label_200358:
    if (ctx->pc == 0x200358u) {
        ctx->pc = 0x200358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200354u;
        // 0x200358: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20035Cu;
        goto label_20035c;
    }
    ctx->pc = 0x200354u;
    SET_GPR_U32(ctx, 31, 0x20035Cu);
    ctx->pc = 0x200358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200354u;
    // 0x200358: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x200354u, 0x20035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20035Cu;
label_20035c:
    // 0x20035c: 0x340180b0  ori         $at, $zero, 0x80B0
    ctx->pc = 0x20035cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32944);
label_200360:
    // 0x200360: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x200360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200364:
    // 0x200364: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x200364u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_200368:
    // 0x200368: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x200368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_20036c:
    // 0x20036c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x20036cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_200370:
    // 0x200370: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x200370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_200374:
    // 0x200374: 0xc054e74  jal         func_1539D0
label_200378:
    if (ctx->pc == 0x200378u) {
        ctx->pc = 0x200378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200374u;
        // 0x200378: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20037Cu;
        goto label_20037c;
    }
    ctx->pc = 0x200374u;
    SET_GPR_U32(ctx, 31, 0x20037Cu);
    ctx->pc = 0x200378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200374u;
    // 0x200378: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x200374u, 0x20037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20037Cu;
label_20037c:
    // 0x20037c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x20037cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_200380:
    // 0x200380: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x200380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_200384:
    // 0x200384: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x200384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_200388:
    // 0x200388: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x200388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20038c:
    // 0x20038c: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x20038cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_200390:
    // 0x200390: 0x240901e0  addiu       $t1, $zero, 0x1E0
    ctx->pc = 0x200390u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_200394:
    // 0x200394: 0xc054e5c  jal         func_153970
label_200398:
    if (ctx->pc == 0x200398u) {
        ctx->pc = 0x200398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200394u;
        // 0x200398: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20039Cu;
        goto label_20039c;
    }
    ctx->pc = 0x200394u;
    SET_GPR_U32(ctx, 31, 0x20039Cu);
    ctx->pc = 0x200398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200394u;
    // 0x200398: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x200394u, 0x20039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20039Cu;
label_20039c:
    // 0x20039c: 0x34018730  ori         $at, $zero, 0x8730
    ctx->pc = 0x20039cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34608);
label_2003a0:
    // 0x2003a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2003a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2003a4:
    // 0x2003a4: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x2003a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_2003a8:
    // 0x2003a8: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x2003a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_2003ac:
    // 0x2003ac: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2003acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2003b0:
    // 0x2003b0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2003b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2003b4:
    // 0x2003b4: 0xc054e74  jal         func_1539D0
label_2003b8:
    if (ctx->pc == 0x2003B8u) {
        ctx->pc = 0x2003B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003B4u;
        // 0x2003b8: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2003BCu;
        goto label_2003bc;
    }
    ctx->pc = 0x2003B4u;
    SET_GPR_U32(ctx, 31, 0x2003BCu);
    ctx->pc = 0x2003B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003B4u;
    // 0x2003b8: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x2003B4u, 0x2003BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003BCu;
label_2003bc:
    // 0x2003bc: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x2003bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_2003c0:
    // 0x2003c0: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2003c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2003c4:
    // 0x2003c4: 0x24422770  addiu       $v0, $v0, 0x2770
    ctx->pc = 0x2003c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10096));
label_2003c8:
    // 0x2003c8: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x2003c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2003cc:
    // 0x2003cc: 0xc05e234  jal         func_1788D0
label_2003d0:
    if (ctx->pc == 0x2003D0u) {
        ctx->pc = 0x2003D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003CCu;
        // 0x2003d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2003D4u;
        goto label_2003d4;
    }
    ctx->pc = 0x2003CCu;
    SET_GPR_U32(ctx, 31, 0x2003D4u);
    ctx->pc = 0x2003D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003CCu;
    // 0x2003d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x2003CCu, 0x2003D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2003D4u;
label_2003d4:
    // 0x2003d4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2003d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2003d8:
    // 0x2003d8: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2003d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2003dc:
    // 0x2003dc: 0xc07091c  jal         func_1C2470
label_2003e0:
    if (ctx->pc == 0x2003E0u) {
        ctx->pc = 0x2003E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003DCu;
        // 0x2003e0: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2003E4u;
        goto label_2003e4;
    }
    ctx->pc = 0x2003DCu;
    SET_GPR_U32(ctx, 31, 0x2003E4u);
    ctx->pc = 0x2003E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003DCu;
    // 0x2003e0: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x2003E4u;
label_2003e4:
    // 0x2003e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2003e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2003e8:
    // 0x2003e8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2003e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2003ec:
    // 0x2003ec: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2003ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2003f0:
    // 0x2003f0: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x2003f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2003f4:
    // 0x2003f4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2003f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2003f8:
    // 0x2003f8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x2003f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2003fc:
    // 0x2003fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2003fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_200400:
    // 0x200400: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x200400u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_200404:
    // 0x200404: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x200404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_200408:
    // 0x200408: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x200408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20040c:
    // 0x20040c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200410:
    // 0x200410: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x200410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_200414:
    // 0x200414: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x200414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_200418:
    // 0x200418: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x200418u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20041c:
    // 0x20041c: 0xc05de30  jal         func_1778C0
label_200420:
    if (ctx->pc == 0x200420u) {
        ctx->pc = 0x200420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20041Cu;
        // 0x200420: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200424u;
        goto label_200424;
    }
    ctx->pc = 0x20041Cu;
    SET_GPR_U32(ctx, 31, 0x200424u);
    ctx->pc = 0x200420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20041Cu;
    // 0x200420: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20041Cu, 0x200424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200424u;
label_200424:
    // 0x200424: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x200424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_200428:
    // 0x200428: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x200428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20042c:
    // 0x20042c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200430:
    // 0x200430: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x200430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_200434:
    // 0x200434: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x200434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_200438:
    // 0x200438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20043c:
    // 0x20043c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x20043cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_200440:
    // 0x200440: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x200440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_200444:
    // 0x200444: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x200444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_200448:
    // 0x200448: 0x3409fe01  ori         $t1, $zero, 0xFE01
    ctx->pc = 0x200448u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65025);
label_20044c:
    // 0x20044c: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x20044cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_200450:
    // 0x200450: 0xc054c60  jal         func_153180
label_200454:
    if (ctx->pc == 0x200454u) {
        ctx->pc = 0x200454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200450u;
        // 0x200454: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200458u;
        goto label_200458;
    }
    ctx->pc = 0x200450u;
    SET_GPR_U32(ctx, 31, 0x200458u);
    ctx->pc = 0x200454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200450u;
    // 0x200454: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x200450u, 0x200458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200458u;
label_200458:
    // 0x200458: 0x26e37fff  addiu       $v1, $s7, 0x7FFF
    ctx->pc = 0x200458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 32767));
label_20045c:
    // 0x20045c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x20045cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_200460:
    // 0x200460: 0x24770ce1  addiu       $s7, $v1, 0xCE1
    ctx->pc = 0x200460u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 3297));
label_200464:
    // 0x200464: 0x26520ea0  addiu       $s2, $s2, 0xEA0
    ctx->pc = 0x200464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3744));
label_200468:
    // 0x200468: 0x2bc30002  slti        $v1, $fp, 0x2
    ctx->pc = 0x200468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
label_20046c:
    // 0x20046c: 0x1460fe4a  bnez        $v1, . + 4 + (-0x1B6 << 2)
label_200470:
    if (ctx->pc == 0x200470u) {
        ctx->pc = 0x200470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20046Cu;
        // 0x200470: 0x26d60180  addiu       $s6, $s6, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200474u;
        goto label_200474;
    }
    ctx->pc = 0x20046Cu;
    {
        const bool branch_taken_0x20046c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20046Cu;
        // 0x200470: 0x26d60180  addiu       $s6, $s6, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20046c) {
            ctx->pc = 0x1FFD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1ffd98; return; }
        }
    }
    ctx->pc = 0x200474u;
label_200474:
    // 0x200474: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x200474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_200478:
    // 0x200478: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x200478u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20047c:
    // 0x20047c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x20047cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_200480:
    // 0x200480: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x200480u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_200484:
    // 0x200484: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x200484u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_200488:
    // 0x200488: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x200488u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20048c:
    // 0x20048c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x20048cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_200490:
    // 0x200490: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x200490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_200494:
    // 0x200494: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x200494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_200498:
    // 0x200498: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x200498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20049c:
    // 0x20049c: 0x3e00008  jr          $ra
label_2004a0:
    if (ctx->pc == 0x2004A0u) {
        ctx->pc = 0x2004A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20049Cu;
        // 0x2004a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004A4u;
        goto label_2004a4;
    }
    ctx->pc = 0x20049Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2004A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20049Cu;
        // 0x2004a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20049Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2004A4u;
label_2004a4:
    // 0x2004a4: 0x0  nop
    ctx->pc = 0x2004a4u;
    // NOP
label_2004a8:
    // 0x2004a8: 0x0  nop
    ctx->pc = 0x2004a8u;
    // NOP
label_2004ac:
    // 0x2004ac: 0x0  nop
    ctx->pc = 0x2004acu;
    // NOP
label_2004b0:
    // 0x2004b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2004b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2004b4:
    // 0x2004b4: 0x3e00008  jr          $ra
label_2004b8:
    if (ctx->pc == 0x2004B8u) {
        ctx->pc = 0x2004B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004B4u;
        // 0x2004b8: 0xaf8390ec  sw          $v1, -0x6F14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938860), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2004BCu;
        goto label_2004bc;
    }
    ctx->pc = 0x2004B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2004B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2004B4u;
        // 0x2004b8: 0xaf8390ec  sw          $v1, -0x6F14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938860), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2004B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2004BCu;
label_2004bc:
    // 0x2004bc: 0x0  nop
    ctx->pc = 0x2004bcu;
    // NOP
label_2004c0:
    // 0x2004c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2004c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2004c4:
    // 0x2004c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2004c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2004c8:
    // 0x2004c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2004c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2004cc:
    // 0x2004cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2004ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2004d0:
    // 0x2004d0: 0xaf8290ec  sw          $v0, -0x6F14($gp)
    ctx->pc = 0x2004d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938860), GPR_U32(ctx, 2));
label_2004d4:
    // 0x2004d4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2004d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2004d8:
    // 0x2004d8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2004d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2004dc:
    // 0x2004dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2004dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_2004e0:
    // 0x2004e0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2004e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2004e4:
    // 0x2004e4: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x2004e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_2004e8:
    // 0x2004e8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x2004e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_2004ec:
    // 0x2004ec: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x2004ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2004f0:
    // 0x2004f0: 0x24633b80  addiu       $v1, $v1, 0x3B80
    ctx->pc = 0x2004f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15232));
label_2004f4:
    // 0x2004f4: 0x8ce63670  lw          $a2, 0x3670($a3)
    ctx->pc = 0x2004f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13936)));
label_2004f8:
    // 0x2004f8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x2004f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_2004fc:
    // 0x2004fc: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x2004fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
label_200500:
    // 0x200500: 0x24f03620  addiu       $s0, $a3, 0x3620
    ctx->pc = 0x200500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 13856));
label_200504:
    // 0x200504: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x200504u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_200508:
    // 0x200508: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x200508u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_20050c:
    // 0x20050c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20050cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_200510:
    // 0x200510: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x200510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_200514:
    // 0x200514: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x200514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_200518:
    // 0x200518: 0xaf8390e4  sw          $v1, -0x6F1C($gp)
    ctx->pc = 0x200518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938852), GPR_U32(ctx, 3));
label_20051c:
    // 0x20051c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x20051cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_200520:
    // 0x200520: 0xaf8290e0  sw          $v0, -0x6F20($gp)
    ctx->pc = 0x200520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938848), GPR_U32(ctx, 2));
label_200524:
    // 0x200524: 0x90e2362e  lbu         $v0, 0x362E($a3)
    ctx->pc = 0x200524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13870)));
label_200528:
    // 0x200528: 0xc056fbc  jal         func_15BEF0
label_20052c:
    if (ctx->pc == 0x20052Cu) {
        ctx->pc = 0x20052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200528u;
        // 0x20052c: 0xaf8290dc  sw          $v0, -0x6F24($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200530u;
        goto label_200530;
    }
    ctx->pc = 0x200528u;
    SET_GPR_U32(ctx, 31, 0x200530u);
    ctx->pc = 0x20052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200528u;
    // 0x20052c: 0xaf8290dc  sw          $v0, -0x6F24($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BEF0u, 0x200528u, 0x200530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200530u;
label_200530:
    // 0x200530: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x200530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_200534:
    // 0x200534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200538:
    // 0x200538: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x200538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20053c:
    // 0x20053c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x20053cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_200540:
    // 0x200540: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x200540u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_200544:
    // 0x200544: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x200544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200548:
    // 0x200548: 0xaf8290d8  sw          $v0, -0x6F28($gp)
    ctx->pc = 0x200548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938840), GPR_U32(ctx, 2));
label_20054c:
    // 0x20054c: 0x240700ab  addiu       $a3, $zero, 0xAB
    ctx->pc = 0x20054cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_200550:
    // 0x200550: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x200550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_200554:
    // 0x200554: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x200554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_200558:
    // 0x200558: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x200558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20055c:
    // 0x20055c: 0xc08053c  jal         func_2014F0
label_200560:
    if (ctx->pc == 0x200560u) {
        ctx->pc = 0x200560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20055Cu;
        // 0x200560: 0xaf8290d4  sw          $v0, -0x6F2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200564u;
        goto label_200564;
    }
    ctx->pc = 0x20055Cu;
    SET_GPR_U32(ctx, 31, 0x200564u);
    ctx->pc = 0x200560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20055Cu;
    // 0x200560: 0xaf8290d4  sw          $v0, -0x6F2C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938836), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2014F0u;
    { ctx->pc = 0x2014f0; return; }
    ctx->pc = 0x200564u;
label_200564:
    // 0x200564: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x200564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_200568:
    // 0x200568: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_20056c:
    // 0x20056c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x20056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_200570:
    // 0x200570: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x200570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_200574:
    // 0x200574: 0xac232760  sw          $v1, 0x2760($at)
    ctx->pc = 0x200574u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10080), GPR_U32(ctx, 3));
label_200578:
    // 0x200578: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_20057c:
    // 0x20057c: 0x8c232760  lw          $v1, 0x2760($at)
    ctx->pc = 0x20057cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10080)));
label_200580:
    // 0x200580: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x200580u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
label_200584:
    // 0x200584: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_200588:
    if (ctx->pc == 0x200588u) {
        ctx->pc = 0x20058Cu;
        goto label_20058c;
    }
    ctx->pc = 0x200584u;
    {
        const bool branch_taken_0x200584 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x200584) {
            ctx->pc = 0x200590u;
            goto label_200590;
        }
    }
    ctx->pc = 0x20058Cu;
label_20058c:
    // 0x20058c: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x20058cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_200590:
    // 0x200590: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_200594:
    // 0x200594: 0xac232760  sw          $v1, 0x2760($at)
    ctx->pc = 0x200594u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10080), GPR_U32(ctx, 3));
label_200598:
    // 0x200598: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_20059c:
    // 0x20059c: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x20059cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_2005a0:
    // 0x2005a0: 0x8c272760  lw          $a3, 0x2760($at)
    ctx->pc = 0x2005a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10080)));
label_2005a4:
    // 0x2005a4: 0x3464851f  ori         $a0, $v1, 0x851F
    ctx->pc = 0x2005a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_2005a8:
    // 0x2005a8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2005a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2005ac:
    // 0x2005ac: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x2005acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_2005b0:
    // 0x2005b0: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2005b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_2005b4:
    // 0x2005b4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2005b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2005b8:
    // 0x2005b8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2005b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2005bc:
    // 0x2005bc: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x2005bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2005c0:
    // 0x2005c0: 0x0  nop
    ctx->pc = 0x2005c0u;
    // NOP
label_2005c4:
    // 0x2005c4: 0x0  nop
    ctx->pc = 0x2005c4u;
    // NOP
label_2005c8:
    // 0x2005c8: 0x2010  mfhi        $a0
    ctx->pc = 0x2005c8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2005cc:
    // 0x2005cc: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x2005ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_2005d0:
    // 0x2005d0: 0x421c3  sra         $a0, $a0, 7
    ctx->pc = 0x2005d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
label_2005d4:
    // 0x2005d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2005d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2005d8:
    // 0x2005d8: 0xac242760  sw          $a0, 0x2760($at)
    ctx->pc = 0x2005d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10080), GPR_U32(ctx, 4));
label_2005dc:
    // 0x2005dc: 0x86040006  lh          $a0, 0x6($s0)
    ctx->pc = 0x2005dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_2005e0:
    // 0x2005e0: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2005e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_2005e4:
    // 0x2005e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2005e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2005e8:
    // 0x2005e8: 0xac232764  sw          $v1, 0x2764($at)
    ctx->pc = 0x2005e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10084), GPR_U32(ctx, 3));
label_2005ec:
    // 0x2005ec: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2005ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_2005f0:
    // 0x2005f0: 0x8c232764  lw          $v1, 0x2764($at)
    ctx->pc = 0x2005f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10084)));
label_2005f4:
    // 0x2005f4: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x2005f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
label_2005f8:
    // 0x2005f8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2005fc:
    if (ctx->pc == 0x2005FCu) {
        ctx->pc = 0x2005FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005F8u;
        // 0x2005fc: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200600u;
        goto label_200600;
    }
    ctx->pc = 0x2005F8u;
    {
        const bool branch_taken_0x2005f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2005FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005F8u;
        // 0x2005fc: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005f8) {
            ctx->pc = 0x200604u;
            goto label_200604;
        }
    }
    ctx->pc = 0x200600u;
label_200600:
    // 0x200600: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x200600u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_200604:
    // 0x200604: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_200608:
    // 0x200608: 0xac232764  sw          $v1, 0x2764($at)
    ctx->pc = 0x200608u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10084), GPR_U32(ctx, 3));
label_20060c:
    // 0x20060c: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x20060cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_200610:
    // 0x200610: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x200610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_200614:
    // 0x200614: 0x8c262764  lw          $a2, 0x2764($at)
    ctx->pc = 0x200614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10084)));
label_200618:
    // 0x200618: 0x3464851f  ori         $a0, $v1, 0x851F
    ctx->pc = 0x200618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_20061c:
    // 0x20061c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x20061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_200620:
    // 0x200620: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x200620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_200624:
    // 0x200624: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_200628:
    // 0x200628: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x200628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_20062c:
    // 0x20062c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x20062cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_200630:
    // 0x200630: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x200630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_200634:
    // 0x200634: 0x0  nop
    ctx->pc = 0x200634u;
    // NOP
label_200638:
    // 0x200638: 0x0  nop
    ctx->pc = 0x200638u;
    // NOP
label_20063c:
    // 0x20063c: 0x2010  mfhi        $a0
    ctx->pc = 0x20063cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_200640:
    // 0x200640: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x200640u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_200644:
    // 0x200644: 0x421c3  sra         $a0, $a0, 7
    ctx->pc = 0x200644u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
label_200648:
    // 0x200648: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x200648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20064c:
    // 0x20064c: 0xac242764  sw          $a0, 0x2764($at)
    ctx->pc = 0x20064cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10084), GPR_U32(ctx, 4));
label_200650:
    // 0x200650: 0x92040008  lbu         $a0, 0x8($s0)
    ctx->pc = 0x200650u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_200654:
    // 0x200654: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_200658:
    // 0x200658: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x200658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_20065c:
    // 0x20065c: 0xac232768  sw          $v1, 0x2768($at)
    ctx->pc = 0x20065cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10088), GPR_U32(ctx, 3));
label_200660:
    // 0x200660: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_200664:
    // 0x200664: 0x8c232768  lw          $v1, 0x2768($at)
    ctx->pc = 0x200664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10088)));
label_200668:
    // 0x200668: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x200668u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_20066c:
    // 0x20066c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_200670:
    if (ctx->pc == 0x200670u) {
        ctx->pc = 0x200674u;
        goto label_200674;
    }
    ctx->pc = 0x20066Cu;
    {
        const bool branch_taken_0x20066c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20066c) {
            ctx->pc = 0x200678u;
            goto label_200678;
        }
    }
    ctx->pc = 0x200674u;
label_200674:
    // 0x200674: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x200674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_200678:
    // 0x200678: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_20067c:
    // 0x20067c: 0xac232768  sw          $v1, 0x2768($at)
    ctx->pc = 0x20067cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10088), GPR_U32(ctx, 3));
label_200680:
    // 0x200680: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_200684:
    // 0x200684: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x200684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_200688:
    // 0x200688: 0x8c272768  lw          $a3, 0x2768($at)
    ctx->pc = 0x200688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10088)));
label_20068c:
    // 0x20068c: 0x34644dd3  ori         $a0, $v1, 0x4DD3
    ctx->pc = 0x20068cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_200690:
    // 0x200690: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x200690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_200694:
    // 0x200694: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x200694u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_200698:
    // 0x200698: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_20069c:
    // 0x20069c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x20069cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2006a0:
    // 0x2006a0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2006a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2006a4:
    // 0x2006a4: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x2006a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2006a8:
    // 0x2006a8: 0x0  nop
    ctx->pc = 0x2006a8u;
    // NOP
label_2006ac:
    // 0x2006ac: 0x0  nop
    ctx->pc = 0x2006acu;
    // NOP
label_2006b0:
    // 0x2006b0: 0x2010  mfhi        $a0
    ctx->pc = 0x2006b0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2006b4:
    // 0x2006b4: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x2006b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_2006b8:
    // 0x2006b8: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2006b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_2006bc:
    // 0x2006bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2006bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2006c0:
    // 0x2006c0: 0xac242768  sw          $a0, 0x2768($at)
    ctx->pc = 0x2006c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10088), GPR_U32(ctx, 4));
label_2006c4:
    // 0x2006c4: 0x92040009  lbu         $a0, 0x9($s0)
    ctx->pc = 0x2006c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_2006c8:
    // 0x2006c8: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2006c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_2006cc:
    // 0x2006cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2006ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2006d0:
    // 0x2006d0: 0xac23276c  sw          $v1, 0x276C($at)
    ctx->pc = 0x2006d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10092), GPR_U32(ctx, 3));
label_2006d4:
    // 0x2006d4: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2006d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_2006d8:
    // 0x2006d8: 0x8c23276c  lw          $v1, 0x276C($at)
    ctx->pc = 0x2006d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10092)));
label_2006dc:
    // 0x2006dc: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x2006dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_2006e0:
    // 0x2006e0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2006e4:
    if (ctx->pc == 0x2006E4u) {
        ctx->pc = 0x2006E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006E0u;
        // 0x2006e4: 0x240600fa  addiu       $a2, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2006E8u;
        goto label_2006e8;
    }
    ctx->pc = 0x2006E0u;
    {
        const bool branch_taken_0x2006e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2006E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2006E0u;
        // 0x2006e4: 0x240600fa  addiu       $a2, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2006e0) {
            ctx->pc = 0x2006ECu;
            goto label_2006ec;
        }
    }
    ctx->pc = 0x2006E8u;
label_2006e8:
    // 0x2006e8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2006e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2006ec:
    // 0x2006ec: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2006ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_2006f0:
    // 0x2006f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2006f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2006f4:
    // 0x2006f4: 0xac23276c  sw          $v1, 0x276C($at)
    ctx->pc = 0x2006f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10092), GPR_U32(ctx, 3));
label_2006f8:
    // 0x2006f8: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2006f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_2006fc:
    // 0x2006fc: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x2006fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_200700:
    // 0x200700: 0x8c27276c  lw          $a3, 0x276C($at)
    ctx->pc = 0x200700u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10092)));
label_200704:
    // 0x200704: 0x34654dd3  ori         $a1, $v1, 0x4DD3
    ctx->pc = 0x200704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_200708:
    // 0x200708: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x200708u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20070c:
    // 0x20070c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x20070cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_200710:
    // 0x200710: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
label_200714:
    // 0x200714: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x200714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_200718:
    // 0x200718: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x200718u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_20071c:
    // 0x20071c: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x20071cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_200720:
    // 0x200720: 0x0  nop
    ctx->pc = 0x200720u;
    // NOP
label_200724:
    // 0x200724: 0x0  nop
    ctx->pc = 0x200724u;
    // NOP
label_200728:
    // 0x200728: 0x2810  mfhi        $a1
    ctx->pc = 0x200728u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_20072c:
    // 0x20072c: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x20072cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_200730:
    // 0x200730: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x200730u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
label_200734:
    // 0x200734: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x200734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_200738:
    // 0x200738: 0xac25276c  sw          $a1, 0x276C($at)
    ctx->pc = 0x200738u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10092), GPR_U32(ctx, 5));
label_20073c:
    // 0x20073c: 0x9205005d  lbu         $a1, 0x5D($s0)
    ctx->pc = 0x20073cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
label_200740:
    // 0x200740: 0xaf8590d0  sw          $a1, -0x6F30($gp)
    ctx->pc = 0x200740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938832), GPR_U32(ctx, 5));
label_200744:
    // 0x200744: 0xaf8090cc  sw          $zero, -0x6F34($gp)
    ctx->pc = 0x200744u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 0));
label_200748:
    // 0x200748: 0x3c090055  lui         $t1, 0x55
    ctx->pc = 0x200748u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)85 << 16));
label_20074c:
    // 0x20074c: 0x3c080029  lui         $t0, 0x29
    ctx->pc = 0x20074cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
label_200750:
    // 0x200750: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x200750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_200754:
    // 0x200754: 0x25292740  addiu       $t1, $t1, 0x2740
    ctx->pc = 0x200754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 10048));
label_200758:
    // 0x200758: 0x2508a230  addiu       $t0, $t0, -0x5DD0
    ctx->pc = 0x200758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943280));
label_20075c:
    // 0x20075c: 0x24c62720  addiu       $a2, $a2, 0x2720
    ctx->pc = 0x20075cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10016));
label_200760:
    // 0x200760: 0x240a0028  addiu       $t2, $zero, 0x28
    ctx->pc = 0x200760u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_200764:
    // 0x200764: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x200764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_200768:
    // 0x200768: 0x90a7005e  lbu         $a3, 0x5E($a1)
    ctx->pc = 0x200768u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 94)));
label_20076c:
    // 0x20076c: 0x10ea000c  beq         $a3, $t2, . + 4 + (0xC << 2)
label_200770:
    if (ctx->pc == 0x200770u) {
        ctx->pc = 0x200770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20076Cu;
        // 0x200770: 0x1245821  addu        $t3, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200774u;
        goto label_200774;
    }
    ctx->pc = 0x20076Cu;
    {
        const bool branch_taken_0x20076c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x200770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20076Cu;
        // 0x200770: 0x1245821  addu        $t3, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20076c) {
            ctx->pc = 0x2007A0u;
            goto label_2007a0;
        }
    }
    ctx->pc = 0x200774u;
label_200774:
    // 0x200774: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x200774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_200778:
    // 0x200778: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x200778u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
label_20077c:
    // 0x20077c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x20077cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_200780:
    // 0x200780: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x200780u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_200784:
    // 0x200784: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x200784u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_200788:
    // 0x200788: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x200788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_20078c:
    // 0x20078c: 0x90e70008  lbu         $a3, 0x8($a3)
    ctx->pc = 0x20078cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_200790:
    // 0x200790: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x200790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_200794:
    // 0x200794: 0x8f8590cc  lw          $a1, -0x6F34($gp)
    ctx->pc = 0x200794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938828)));
label_200798:
    // 0x200798: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x200798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_20079c:
    // 0x20079c: 0xaf8590cc  sw          $a1, -0x6F34($gp)
    ctx->pc = 0x20079cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 5));
label_2007a0:
    // 0x2007a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2007a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2007a4:
    // 0x2007a4: 0x28650005  slti        $a1, $v1, 0x5
    ctx->pc = 0x2007a4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_2007a8:
    // 0x2007a8: 0x14a0ffef  bnez        $a1, . + 4 + (-0x11 << 2)
label_2007ac:
    if (ctx->pc == 0x2007ACu) {
        ctx->pc = 0x2007ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007A8u;
        // 0x2007ac: 0x2032821  addu        $a1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007B0u;
        goto label_2007b0;
    }
    ctx->pc = 0x2007A8u;
    {
        const bool branch_taken_0x2007a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2007ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007A8u;
        // 0x2007ac: 0x2032821  addu        $a1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007a8) {
            ctx->pc = 0x200768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200768;
        }
    }
    ctx->pc = 0x2007B0u;
label_2007b0:
    // 0x2007b0: 0x92030077  lbu         $v1, 0x77($s0)
    ctx->pc = 0x2007b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 119)));
label_2007b4:
    // 0x2007b4: 0xaf8390c8  sw          $v1, -0x6F38($gp)
    ctx->pc = 0x2007b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938824), GPR_U32(ctx, 3));
label_2007b8:
    // 0x2007b8: 0x92030069  lbu         $v1, 0x69($s0)
    ctx->pc = 0x2007b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
label_2007bc:
    // 0x2007bc: 0xaf8390c4  sw          $v1, -0x6F3C($gp)
    ctx->pc = 0x2007bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938820), GPR_U32(ctx, 3));
label_2007c0:
    // 0x2007c0: 0x9203006b  lbu         $v1, 0x6B($s0)
    ctx->pc = 0x2007c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 107)));
label_2007c4:
    // 0x2007c4: 0xaf8390c0  sw          $v1, -0x6F40($gp)
    ctx->pc = 0x2007c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938816), GPR_U32(ctx, 3));
label_2007c8:
    // 0x2007c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2007c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2007cc:
    // 0x2007cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2007ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2007d0:
    // 0x2007d0: 0x3e00008  jr          $ra
label_2007d4:
    if (ctx->pc == 0x2007D4u) {
        ctx->pc = 0x2007D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007D0u;
        // 0x2007d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007D8u;
        goto label_2007d8;
    }
    ctx->pc = 0x2007D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2007D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007D0u;
        // 0x2007d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2007D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2007D8u;
label_2007d8:
    // 0x2007d8: 0x0  nop
    ctx->pc = 0x2007d8u;
    // NOP
label_2007dc:
    // 0x2007dc: 0x0  nop
    ctx->pc = 0x2007dcu;
    // NOP
label_2007e0:
    // 0x2007e0: 0x3e00008  jr          $ra
label_2007e4:
    if (ctx->pc == 0x2007E4u) {
        ctx->pc = 0x2007E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007E0u;
        // 0x2007e4: 0xaf8490bc  sw          $a0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007E8u;
        goto label_2007e8;
    }
    ctx->pc = 0x2007E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2007E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007E0u;
        // 0x2007e4: 0xaf8490bc  sw          $a0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2007E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2007E8u;
label_2007e8:
    // 0x2007e8: 0x0  nop
    ctx->pc = 0x2007e8u;
    // NOP
label_2007ec:
    // 0x2007ec: 0x0  nop
    ctx->pc = 0x2007ecu;
    // NOP
label_2007f0:
    // 0x2007f0: 0x8f8390e8  lw          $v1, -0x6F18($gp)
    ctx->pc = 0x2007f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
label_2007f4:
    // 0x2007f4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2007f8:
    if (ctx->pc == 0x2007F8u) {
        ctx->pc = 0x2007FCu;
        goto label_2007fc;
    }
    ctx->pc = 0x2007F4u;
    {
        const bool branch_taken_0x2007f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2007f4) {
            ctx->pc = 0x200828u;
            goto label_200828;
        }
    }
    ctx->pc = 0x2007FCu;
label_2007fc:
    // 0x2007fc: 0x8f8390bc  lw          $v1, -0x6F44($gp)
    ctx->pc = 0x2007fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938812)));
label_200800:
    // 0x200800: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
label_200804:
    if (ctx->pc == 0x200804u) {
        ctx->pc = 0x200808u;
        goto label_200808;
    }
    ctx->pc = 0x200800u;
    {
        const bool branch_taken_0x200800 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x200800) {
            ctx->pc = 0x200828u;
            goto label_200828;
        }
    }
    ctx->pc = 0x200808u;
label_200808:
    // 0x200808: 0x8f8490b8  lw          $a0, -0x6F48($gp)
    ctx->pc = 0x200808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938808)));
label_20080c:
    // 0x20080c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x20080cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_200810:
    // 0x200810: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x200810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_200814:
    // 0x200814: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x200814u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_200818:
    // 0x200818: 0x0  nop
    ctx->pc = 0x200818u;
    // NOP
label_20081c:
    // 0x20081c: 0x0  nop
    ctx->pc = 0x20081cu;
    // NOP
label_200820:
    // 0x200820: 0x1810  mfhi        $v1
    ctx->pc = 0x200820u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_200824:
    // 0x200824: 0xaf8390b8  sw          $v1, -0x6F48($gp)
    ctx->pc = 0x200824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938808), GPR_U32(ctx, 3));
label_200828:
    // 0x200828: 0x8f8490ec  lw          $a0, -0x6F14($gp)
    ctx->pc = 0x200828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938860)));
label_20082c:
    // 0x20082c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20082cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200830:
    // 0x200830: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_200834:
    if (ctx->pc == 0x200834u) {
        ctx->pc = 0x200834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200830u;
        // 0x200834: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200838u;
        goto label_200838;
    }
    ctx->pc = 0x200830u;
    {
        const bool branch_taken_0x200830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x200834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200830u;
        // 0x200834: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200830) {
            ctx->pc = 0x200870u;
            goto label_200870;
        }
    }
    ctx->pc = 0x200838u;
label_200838:
    // 0x200838: 0x8f8490e8  lw          $a0, -0x6F18($gp)
    ctx->pc = 0x200838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
label_20083c:
    // 0x20083c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x20083cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_200840:
    // 0x200840: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x200840u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_200844:
    // 0x200844: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_200848:
    if (ctx->pc == 0x200848u) {
        ctx->pc = 0x200848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200844u;
        // 0x200848: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20084Cu;
        goto label_20084c;
    }
    ctx->pc = 0x200844u;
    {
        const bool branch_taken_0x200844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x200848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200844u;
        // 0x200848: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200844) {
            ctx->pc = 0x200854u;
            goto label_200854;
        }
    }
    ctx->pc = 0x20084Cu;
label_20084c:
    // 0x20084c: 0x10000002  b           . + 4 + (0x2 << 2)
label_200850:
    if (ctx->pc == 0x200850u) {
        ctx->pc = 0x200850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20084Cu;
        // 0x200850: 0x8f8390e8  lw          $v1, -0x6F18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200854u;
        goto label_200854;
    }
    ctx->pc = 0x20084Cu;
    {
        const bool branch_taken_0x20084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20084Cu;
        // 0x200850: 0x8f8390e8  lw          $v1, -0x6F18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20084c) {
            ctx->pc = 0x200858u;
            goto label_200858;
        }
    }
    ctx->pc = 0x200854u;
label_200854:
    // 0x200854: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x200854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_200858:
    // 0x200858: 0xaf8390e8  sw          $v1, -0x6F18($gp)
    ctx->pc = 0x200858u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
label_20085c:
    // 0x20085c: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x20085cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_200860:
    // 0x200860: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_200864:
    if (ctx->pc == 0x200864u) {
        ctx->pc = 0x200868u;
        goto label_200868;
    }
    ctx->pc = 0x200860u;
    {
        const bool branch_taken_0x200860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x200860) {
            ctx->pc = 0x2008A4u;
            goto label_2008a4;
        }
    }
    ctx->pc = 0x200868u;
label_200868:
    // 0x200868: 0x1000000e  b           . + 4 + (0xE << 2)
label_20086c:
    if (ctx->pc == 0x20086Cu) {
        ctx->pc = 0x20086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200868u;
        // 0x20086c: 0xaf8090ec  sw          $zero, -0x6F14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200870u;
        goto label_200870;
    }
    ctx->pc = 0x200868u;
    {
        const bool branch_taken_0x200868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200868u;
        // 0x20086c: 0xaf8090ec  sw          $zero, -0x6F14($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200868) {
            ctx->pc = 0x2008A4u;
            goto label_2008a4;
        }
    }
    ctx->pc = 0x200870u;
label_200870:
    // 0x200870: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_200874:
    if (ctx->pc == 0x200874u) {
        ctx->pc = 0x200878u;
        goto label_200878;
    }
    ctx->pc = 0x200870u;
    {
        const bool branch_taken_0x200870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x200870) {
            ctx->pc = 0x2008A4u;
            goto label_2008a4;
        }
    }
    ctx->pc = 0x200878u;
label_200878:
    // 0x200878: 0x8f8490e8  lw          $a0, -0x6F18($gp)
    ctx->pc = 0x200878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
label_20087c:
    // 0x20087c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x20087cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_200880:
    // 0x200880: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x200880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_200884:
    // 0x200884: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_200888:
    if (ctx->pc == 0x200888u) {
        ctx->pc = 0x200888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200884u;
        // 0x200888: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20088Cu;
        goto label_20088c;
    }
    ctx->pc = 0x200884u;
    {
        const bool branch_taken_0x200884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x200888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200884u;
        // 0x200888: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200884) {
            ctx->pc = 0x200894u;
            goto label_200894;
        }
    }
    ctx->pc = 0x20088Cu;
label_20088c:
    // 0x20088c: 0x10000002  b           . + 4 + (0x2 << 2)
label_200890:
    if (ctx->pc == 0x200890u) {
        ctx->pc = 0x200890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20088Cu;
        // 0x200890: 0x8f8390e8  lw          $v1, -0x6F18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200894u;
        goto label_200894;
    }
    ctx->pc = 0x20088Cu;
    {
        const bool branch_taken_0x20088c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20088Cu;
        // 0x200890: 0x8f8390e8  lw          $v1, -0x6F18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20088c) {
            ctx->pc = 0x200898u;
            goto label_200898;
        }
    }
    ctx->pc = 0x200894u;
label_200894:
    // 0x200894: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x200894u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200898:
    // 0x200898: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
label_20089c:
    if (ctx->pc == 0x20089Cu) {
        ctx->pc = 0x20089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200898u;
        // 0x20089c: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2008A0u;
        goto label_2008a0;
    }
    ctx->pc = 0x200898u;
    {
        const bool branch_taken_0x200898 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x20089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200898u;
        // 0x20089c: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200898) {
            ctx->pc = 0x2008A4u;
            goto label_2008a4;
        }
    }
    ctx->pc = 0x2008A0u;
label_2008a0:
    // 0x2008a0: 0xaf8090ec  sw          $zero, -0x6F14($gp)
    ctx->pc = 0x2008a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938860), GPR_U32(ctx, 0));
label_2008a4:
    // 0x2008a4: 0x3e00008  jr          $ra
label_2008a8:
    if (ctx->pc == 0x2008A8u) {
        ctx->pc = 0x2008ACu;
        goto label_2008ac;
    }
    ctx->pc = 0x2008A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2008A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2008ACu;
label_2008ac:
    // 0x2008ac: 0x0  nop
    ctx->pc = 0x2008acu;
    // NOP
label_2008b0:
    // 0x2008b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2008b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2008b4:
    // 0x2008b4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2008b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2008b8:
    // 0x2008b8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2008b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2008bc:
    // 0x2008bc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2008bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2008c0:
    // 0x2008c0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2008c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2008c4:
    // 0x2008c4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2008c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2008c8:
    // 0x2008c8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2008c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2008cc:
    // 0x2008cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2008ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2008d0:
    // 0x2008d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2008d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2008d4:
    // 0x2008d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2008d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2008d8:
    // 0x2008d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2008d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2008dc:
    // 0x2008dc: 0x8f8390e8  lw          $v1, -0x6F18($gp)
    ctx->pc = 0x2008dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
label_2008e0:
    // 0x2008e0: 0x10600259  beqz        $v1, . + 4 + (0x259 << 2)
label_2008e4:
    if (ctx->pc == 0x2008E4u) {
        ctx->pc = 0x2008E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008E0u;
        // 0x2008e4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2008E8u;
        goto label_2008e8;
    }
    ctx->pc = 0x2008E0u;
    {
        const bool branch_taken_0x2008e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2008E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008E0u;
        // 0x2008e4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008e0) {
            ctx->pc = 0x201248u;
            { ctx->pc = 0x201248; return; }
        }
    }
    ctx->pc = 0x2008E8u;
label_2008e8:
    // 0x2008e8: 0x31023  negu        $v0, $v1
    ctx->pc = 0x2008e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2008ec:
    // 0x2008ec: 0x8c2d3ffc  lw          $t5, 0x3FFC($at)
    ctx->pc = 0x2008ecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_2008f0:
    // 0x2008f0: 0x221c0  sll         $a0, $v0, 7
    ctx->pc = 0x2008f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_2008f4:
    // 0x2008f4: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x2008f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_2008f8:
    // 0x2008f8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2008f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_2008fc:
    // 0x2008fc: 0x344baaab  ori         $t3, $v0, 0xAAAB
    ctx->pc = 0x2008fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_200900:
    // 0x200900: 0x34078ce0  ori         $a3, $zero, 0x8CE0
    ctx->pc = 0x200900u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36064);
label_200904:
    // 0x200904: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x200904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_200908:
    // 0x200908: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x200908u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_20090c:
    // 0x20090c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x20090cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_200910:
    // 0x200910: 0x3c090055  lui         $t1, 0x55
    ctx->pc = 0x200910u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)85 << 16));
label_200914:
    // 0x200914: 0x24c61e00  addiu       $a2, $a2, 0x1E00
    ctx->pc = 0x200914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7680));
label_200918:
    // 0x200918: 0x25082770  addiu       $t0, $t0, 0x2770
    ctx->pc = 0x200918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10096));
label_20091c:
    // 0x20091c: 0x1a76018  mult        $t4, $t5, $a3
    ctx->pc = 0x20091cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_200920:
    // 0x200920: 0xd1140  sll         $v0, $t5, 5
    ctx->pc = 0x200920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
label_200924:
    // 0x200924: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x200924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_200928:
    // 0x200928: 0x25292a70  addiu       $t1, $t1, 0x2A70
    ctx->pc = 0x200928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 10864));
label_20092c:
    // 0x20092c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x20092cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_200930:
    // 0x200930: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x200930u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_200934:
    // 0x200934: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x200934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
label_200938:
    // 0x200938: 0x457c2  srl         $t2, $a0, 31
    ctx->pc = 0x200938u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_20093c:
    // 0x20093c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x20093cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_200940:
    // 0x200940: 0x12c8021  addu        $s0, $t1, $t4
    ctx->pc = 0x200940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_200944:
    // 0x200944: 0x1640018  mult        $zero, $t3, $a0
    ctx->pc = 0x200944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_200948:
    // 0x200948: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x200948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_20094c:
    // 0x20094c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x20094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_200950:
    // 0x200950: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x200950u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_200954:
    // 0x200954: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x200954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_200958:
    // 0x200958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20095c:
    // 0x20095c: 0x240701d8  addiu       $a3, $zero, 0x1D8
    ctx->pc = 0x20095cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
label_200960:
    // 0x200960: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x200960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_200964:
    // 0x200964: 0x1010  mfhi        $v0
    ctx->pc = 0x200964u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_200968:
    // 0x200968: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x200968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20096c:
    // 0x20096c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x20096cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_200970:
    // 0x200970: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x200970u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_200974:
    // 0x200974: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x200974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_200978:
    // 0x200978: 0x1660018  mult        $zero, $t3, $a2
    ctx->pc = 0x200978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20097c:
    // 0x20097c: 0x245101c0  addiu       $s1, $v0, 0x1C0
    ctx->pc = 0x20097cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    ctx->pc = 0x200980u;
    return;
}

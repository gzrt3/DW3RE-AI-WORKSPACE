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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part207(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1fff48u: goto label_1fff48;
        case 0x1fff4cu: goto label_1fff4c;
        case 0x1fff50u: goto label_1fff50;
        case 0x1fff54u: goto label_1fff54;
        case 0x1fff58u: goto label_1fff58;
        case 0x1fff5cu: goto label_1fff5c;
        case 0x1fff60u: goto label_1fff60;
        case 0x1fff64u: goto label_1fff64;
        case 0x1fff68u: goto label_1fff68;
        case 0x1fff6cu: goto label_1fff6c;
        case 0x1fff70u: goto label_1fff70;
        case 0x1fff74u: goto label_1fff74;
        case 0x1fff78u: goto label_1fff78;
        case 0x1fff7cu: goto label_1fff7c;
        case 0x1fff80u: goto label_1fff80;
        case 0x1fff84u: goto label_1fff84;
        case 0x1fff88u: goto label_1fff88;
        case 0x1fff8cu: goto label_1fff8c;
        case 0x1fff90u: goto label_1fff90;
        case 0x1fff94u: goto label_1fff94;
        case 0x1fff98u: goto label_1fff98;
        case 0x1fff9cu: goto label_1fff9c;
        case 0x1fffa0u: goto label_1fffa0;
        case 0x1fffa4u: goto label_1fffa4;
        case 0x1fffa8u: goto label_1fffa8;
        case 0x1fffacu: goto label_1fffac;
        case 0x1fffb0u: goto label_1fffb0;
        case 0x1fffb4u: goto label_1fffb4;
        case 0x1fffb8u: goto label_1fffb8;
        case 0x1fffbcu: goto label_1fffbc;
        case 0x1fffc0u: goto label_1fffc0;
        case 0x1fffc4u: goto label_1fffc4;
        case 0x1fffc8u: goto label_1fffc8;
        case 0x1fffccu: goto label_1fffcc;
        case 0x1fffd0u: goto label_1fffd0;
        case 0x1fffd4u: goto label_1fffd4;
        case 0x1fffd8u: goto label_1fffd8;
        case 0x1fffdcu: goto label_1fffdc;
        case 0x1fffe0u: goto label_1fffe0;
        case 0x1fffe4u: goto label_1fffe4;
        case 0x1fffe8u: goto label_1fffe8;
        case 0x1fffecu: goto label_1fffec;
        case 0x1ffff0u: goto label_1ffff0;
        case 0x1ffff4u: goto label_1ffff4;
        case 0x1ffff8u: goto label_1ffff8;
        case 0x1ffffcu: goto label_1ffffc;
        case 0x200000u: goto label_200000;
        case 0x200004u: goto label_200004;
        case 0x200008u: goto label_200008;
        case 0x20000cu: goto label_20000c;
        case 0x200010u: goto label_200010;
        case 0x200014u: goto label_200014;
        case 0x200018u: goto label_200018;
        case 0x20001cu: goto label_20001c;
        case 0x200020u: goto label_200020;
        case 0x200024u: goto label_200024;
        case 0x200028u: goto label_200028;
        case 0x20002cu: goto label_20002c;
        case 0x200030u: goto label_200030;
        case 0x200034u: goto label_200034;
        case 0x200038u: goto label_200038;
        case 0x20003cu: goto label_20003c;
        case 0x200040u: goto label_200040;
        case 0x200044u: goto label_200044;
        case 0x200048u: goto label_200048;
        case 0x20004cu: goto label_20004c;
        case 0x200050u: goto label_200050;
        case 0x200054u: goto label_200054;
        case 0x200058u: goto label_200058;
        case 0x20005cu: goto label_20005c;
        case 0x200060u: goto label_200060;
        case 0x200064u: goto label_200064;
        case 0x200068u: goto label_200068;
        case 0x20006cu: goto label_20006c;
        case 0x200070u: goto label_200070;
        case 0x200074u: goto label_200074;
        case 0x200078u: goto label_200078;
        case 0x20007cu: goto label_20007c;
        case 0x200080u: goto label_200080;
        case 0x200084u: goto label_200084;
        case 0x200088u: goto label_200088;
        case 0x20008cu: goto label_20008c;
        case 0x200090u: goto label_200090;
        case 0x200094u: goto label_200094;
        case 0x200098u: goto label_200098;
        case 0x20009cu: goto label_20009c;
        case 0x2000a0u: goto label_2000a0;
        case 0x2000a4u: goto label_2000a4;
        case 0x2000a8u: goto label_2000a8;
        case 0x2000acu: goto label_2000ac;
        case 0x2000b0u: goto label_2000b0;
        case 0x2000b4u: goto label_2000b4;
        case 0x2000b8u: goto label_2000b8;
        case 0x2000bcu: goto label_2000bc;
        case 0x2000c0u: goto label_2000c0;
        case 0x2000c4u: goto label_2000c4;
        case 0x2000c8u: goto label_2000c8;
        case 0x2000ccu: goto label_2000cc;
        case 0x2000d0u: goto label_2000d0;
        case 0x2000d4u: goto label_2000d4;
        case 0x2000d8u: goto label_2000d8;
        case 0x2000dcu: goto label_2000dc;
        case 0x2000e0u: goto label_2000e0;
        case 0x2000e4u: goto label_2000e4;
        case 0x2000e8u: goto label_2000e8;
        case 0x2000ecu: goto label_2000ec;
        case 0x2000f0u: goto label_2000f0;
        case 0x2000f4u: goto label_2000f4;
        case 0x2000f8u: goto label_2000f8;
        case 0x2000fcu: goto label_2000fc;
        case 0x200100u: goto label_200100;
        case 0x200104u: goto label_200104;
        case 0x200108u: goto label_200108;
        case 0x20010cu: goto label_20010c;
        case 0x200110u: goto label_200110;
        case 0x200114u: goto label_200114;
        case 0x200118u: goto label_200118;
        case 0x20011cu: goto label_20011c;
        case 0x200120u: goto label_200120;
        case 0x200124u: goto label_200124;
        case 0x200128u: goto label_200128;
        case 0x20012cu: goto label_20012c;
        case 0x200130u: goto label_200130;
        case 0x200134u: goto label_200134;
        case 0x200138u: goto label_200138;
        case 0x20013cu: goto label_20013c;
        case 0x200140u: goto label_200140;
        case 0x200144u: goto label_200144;
        case 0x200148u: goto label_200148;
        case 0x20014cu: goto label_20014c;
        case 0x200150u: goto label_200150;
        case 0x200154u: goto label_200154;
        case 0x200158u: goto label_200158;
        case 0x20015cu: goto label_20015c;
        case 0x200160u: goto label_200160;
        case 0x200164u: goto label_200164;
        case 0x200168u: goto label_200168;
        case 0x20016cu: goto label_20016c;
        case 0x200170u: goto label_200170;
        case 0x200174u: goto label_200174;
        case 0x200178u: goto label_200178;
        case 0x20017cu: goto label_20017c;
        case 0x200180u: goto label_200180;
        case 0x200184u: goto label_200184;
        case 0x200188u: goto label_200188;
        case 0x20018cu: goto label_20018c;
        case 0x200190u: goto label_200190;
        case 0x200194u: goto label_200194;
        case 0x200198u: goto label_200198;
        case 0x20019cu: goto label_20019c;
        case 0x2001a0u: goto label_2001a0;
        case 0x2001a4u: goto label_2001a4;
        case 0x2001a8u: goto label_2001a8;
        case 0x2001acu: goto label_2001ac;
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
        default: return;
    }

label_1fff48:
    // 0x1fff48: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1fff48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fff4c:
    // 0x1fff4c: 0xc054e74  jal         func_1539D0
label_1fff50:
    if (ctx->pc == 0x1FFF50u) {
        ctx->pc = 0x1FFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF4Cu;
        // 0x1fff50: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF54u;
        goto label_1fff54;
    }
    ctx->pc = 0x1FFF4Cu;
    SET_GPR_U32(ctx, 31, 0x1FFF54u);
    ctx->pc = 0x1FFF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF4Cu;
    // 0x1fff50: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FFF4Cu, 0x1FFF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFF54u;
label_1fff54:
    // 0x1fff54: 0xc070834  jal         func_1C20D0
label_1fff58:
    if (ctx->pc == 0x1FFF58u) {
        ctx->pc = 0x1FFF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF54u;
        // 0x1fff58: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF5Cu;
        goto label_1fff5c;
    }
    ctx->pc = 0x1FFF54u;
    SET_GPR_U32(ctx, 31, 0x1FFF5Cu);
    ctx->pc = 0x1FFF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF54u;
    // 0x1fff58: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1FFF5Cu;
label_1fff5c:
    // 0x1fff5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fff5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fff60:
    // 0x1fff60: 0x26041c40  addiu       $a0, $s0, 0x1C40
    ctx->pc = 0x1fff60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7232));
label_1fff64:
    // 0x1fff64: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1fff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fff68:
    // 0x1fff68: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fff68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fff6c:
    // 0x1fff6c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fff6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1fff70:
    // 0x1fff70: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fff70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fff74:
    // 0x1fff74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fff78:
    // 0x1fff78: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fff78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fff7c:
    // 0x1fff7c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fff7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fff80:
    // 0x1fff80: 0x24090238  addiu       $t1, $zero, 0x238
    ctx->pc = 0x1fff80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 568));
label_1fff84:
    // 0x1fff84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fff88:
    // 0x1fff88: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fff8c:
    // 0x1fff8c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1fff90:
    // 0x1fff90: 0x240a00c0  addiu       $t2, $zero, 0xC0
    ctx->pc = 0x1fff90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1fff94:
    // 0x1fff94: 0xc05de30  jal         func_1778C0
label_1fff98:
    if (ctx->pc == 0x1FFF98u) {
        ctx->pc = 0x1FFF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF94u;
        // 0x1fff98: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFF9Cu;
        goto label_1fff9c;
    }
    ctx->pc = 0x1FFF94u;
    SET_GPR_U32(ctx, 31, 0x1FFF9Cu);
    ctx->pc = 0x1FFF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF94u;
    // 0x1fff98: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FFF94u, 0x1FFF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFF9Cu;
label_1fff9c:
    // 0x1fff9c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1fff9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fffa0:
    // 0x1fffa0: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1fffa0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1fffa4:
    // 0x1fffa4: 0x26041ce0  addiu       $a0, $s0, 0x1CE0
    ctx->pc = 0x1fffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7392));
label_1fffa8:
    // 0x1fffa8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1fffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1fffac:
    // 0x1fffac: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fffacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fffb0:
    // 0x1fffb0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fffb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fffb4:
    // 0x1fffb4: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fffb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fffb8:
    // 0x1fffb8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1fffb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1fffbc:
    // 0x1fffbc: 0xc0708ac  jal         func_1C22B0
label_1fffc0:
    if (ctx->pc == 0x1FFFC0u) {
        ctx->pc = 0x1FFFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFBCu;
        // 0x1fffc0: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFFC4u;
        goto label_1fffc4;
    }
    ctx->pc = 0x1FFFBCu;
    SET_GPR_U32(ctx, 31, 0x1FFFC4u);
    ctx->pc = 0x1FFFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFFBCu;
    // 0x1fffc0: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FFFC4u;
label_1fffc4:
    // 0x1fffc4: 0xc070834  jal         func_1C20D0
label_1fffc8:
    if (ctx->pc == 0x1FFFC8u) {
        ctx->pc = 0x1FFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFC4u;
        // 0x1fffc8: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FFFCCu;
        goto label_1fffcc;
    }
    ctx->pc = 0x1FFFC4u;
    SET_GPR_U32(ctx, 31, 0x1FFFCCu);
    ctx->pc = 0x1FFFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFFC4u;
    // 0x1fffc8: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1FFFCCu;
label_1fffcc:
    // 0x1fffcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fffccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fffd0:
    // 0x1fffd0: 0x26042000  addiu       $a0, $s0, 0x2000
    ctx->pc = 0x1fffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
label_1fffd4:
    // 0x1fffd4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1fffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1fffd8:
    // 0x1fffd8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fffd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fffdc:
    // 0x1fffdc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1fffe0:
    // 0x1fffe0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fffe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fffe4:
    // 0x1fffe4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fffe8:
    // 0x1fffe8: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fffe8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fffec:
    // 0x1fffec: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fffecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1ffff0:
    // 0x1ffff0: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x1ffff0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1ffff4:
    // 0x1ffff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffff8:
    // 0x1ffff8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1ffff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1ffffc:
    // 0x1ffffc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1ffffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_200000:
    // 0x200000: 0x240a00c0  addiu       $t2, $zero, 0xC0
    ctx->pc = 0x200000u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_200004:
    // 0x200004: 0xc05de30  jal         func_1778C0
label_200008:
    if (ctx->pc == 0x200008u) {
        ctx->pc = 0x200008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200004u;
        // 0x200008: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20000Cu;
        goto label_20000c;
    }
    ctx->pc = 0x200004u;
    SET_GPR_U32(ctx, 31, 0x20000Cu);
    ctx->pc = 0x200008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200004u;
    // 0x200008: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x200004u, 0x20000Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20000Cu;
label_20000c:
    // 0x20000c: 0xc070834  jal         func_1C20D0
label_200010:
    if (ctx->pc == 0x200010u) {
        ctx->pc = 0x200010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20000Cu;
        // 0x200010: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200014u;
        goto label_200014;
    }
    ctx->pc = 0x20000Cu;
    SET_GPR_U32(ctx, 31, 0x200014u);
    ctx->pc = 0x200010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20000Cu;
    // 0x200010: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x200014u;
label_200014:
    // 0x200014: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x200014u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200018:
    // 0x200018: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x200018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20001c:
    // 0x20001c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20001cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200020:
    // 0x200020: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x200020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_200024:
    // 0x200024: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x200024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_200028:
    // 0x200028: 0x2119821  addu        $s3, $s0, $s1
    ctx->pc = 0x200028u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_20002c:
    // 0x20002c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20002cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_200030:
    // 0x200030: 0x266420a0  addiu       $a0, $s3, 0x20A0
    ctx->pc = 0x200030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8352));
label_200034:
    // 0x200034: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x200034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_200038:
    // 0x200038: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x200038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20003c:
    // 0x20003c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200040:
    // 0x200040: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x200040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_200044:
    // 0x200044: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x200044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_200048:
    // 0x200048: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x200048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20004c:
    // 0x20004c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20004cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_200050:
    // 0x200050: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x200050u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_200054:
    // 0x200054: 0x240901a8  addiu       $t1, $zero, 0x1A8
    ctx->pc = 0x200054u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_200058:
    // 0x200058: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x200058u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_20005c:
    // 0x20005c: 0xc05de30  jal         func_1778C0
label_200060:
    if (ctx->pc == 0x200060u) {
        ctx->pc = 0x200060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20005Cu;
        // 0x200060: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200064u;
        goto label_200064;
    }
    ctx->pc = 0x20005Cu;
    SET_GPR_U32(ctx, 31, 0x200064u);
    ctx->pc = 0x200060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20005Cu;
    // 0x200060: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20005Cu, 0x200064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200064u;
label_200064:
    // 0x200064: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x200064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_200068:
    // 0x200068: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x200068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20006c:
    // 0x20006c: 0xa2632110  sb          $v1, 0x2110($s3)
    ctx->pc = 0x20006cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8464), (uint8_t)GPR_U32(ctx, 3));
label_200070:
    // 0x200070: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x200070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_200074:
    // 0x200074: 0xa2632111  sb          $v1, 0x2111($s3)
    ctx->pc = 0x200074u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8465), (uint8_t)GPR_U32(ctx, 3));
label_200078:
    // 0x200078: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x200078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20007c:
    // 0x20007c: 0xa2632112  sb          $v1, 0x2112($s3)
    ctx->pc = 0x20007cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8466), (uint8_t)GPR_U32(ctx, 3));
label_200080:
    // 0x200080: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x200080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_200084:
    // 0x200084: 0xa2622113  sb          $v0, 0x2113($s3)
    ctx->pc = 0x200084u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 8467), (uint8_t)GPR_U32(ctx, 2));
label_200088:
    // 0x200088: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x200088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20008c:
    // 0x20008c: 0xae642114  sw          $a0, 0x2114($s3)
    ctx->pc = 0x20008cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8468), GPR_U32(ctx, 4));
label_200090:
    // 0x200090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200094:
    // 0x200094: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x200094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_200098:
    // 0x200098: 0x26642320  addiu       $a0, $s3, 0x2320
    ctx->pc = 0x200098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8992));
label_20009c:
    // 0x20009c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20009cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_2000a0:
    // 0x2000a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2000a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2000a4:
    // 0x2000a4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2000a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2000a8:
    // 0x2000a8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x2000a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2000ac:
    // 0x2000ac: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2000acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2000b0:
    // 0x2000b0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x2000b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2000b4:
    // 0x2000b4: 0x240901a8  addiu       $t1, $zero, 0x1A8
    ctx->pc = 0x2000b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_2000b8:
    // 0x2000b8: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x2000b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2000bc:
    // 0x2000bc: 0xc05de30  jal         func_1778C0
label_2000c0:
    if (ctx->pc == 0x2000C0u) {
        ctx->pc = 0x2000C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000BCu;
        // 0x2000c0: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2000C4u;
        goto label_2000c4;
    }
    ctx->pc = 0x2000BCu;
    SET_GPR_U32(ctx, 31, 0x2000C4u);
    ctx->pc = 0x2000C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2000BCu;
    // 0x2000c0: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x2000BCu, 0x2000C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2000C4u;
label_2000c4:
    // 0x2000c4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2000c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2000c8:
    // 0x2000c8: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x2000c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_2000cc:
    // 0x2000cc: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_2000d0:
    if (ctx->pc == 0x2000D0u) {
        ctx->pc = 0x2000D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000CCu;
        // 0x2000d0: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2000D4u;
        goto label_2000d4;
    }
    ctx->pc = 0x2000CCu;
    {
        const bool branch_taken_0x2000cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2000D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000CCu;
        // 0x2000d0: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000cc) {
            ctx->pc = 0x200020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200020;
        }
    }
    ctx->pc = 0x2000D4u;
label_2000d4:
    // 0x2000d4: 0x240a0023  addiu       $t2, $zero, 0x23
    ctx->pc = 0x2000d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_2000d8:
    // 0x2000d8: 0x2409005f  addiu       $t1, $zero, 0x5F
    ctx->pc = 0x2000d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_2000dc:
    // 0x2000dc: 0xa20a2390  sb          $t2, 0x2390($s0)
    ctx->pc = 0x2000dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9104), (uint8_t)GPR_U32(ctx, 10));
label_2000e0:
    // 0x2000e0: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x2000e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2000e4:
    // 0x2000e4: 0xa2092391  sb          $t1, 0x2391($s0)
    ctx->pc = 0x2000e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9105), (uint8_t)GPR_U32(ctx, 9));
label_2000e8:
    // 0x2000e8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2000e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_2000ec:
    // 0x2000ec: 0xa2092392  sb          $t1, 0x2392($s0)
    ctx->pc = 0x2000ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9106), (uint8_t)GPR_U32(ctx, 9));
label_2000f0:
    // 0x2000f0: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x2000f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2000f4:
    // 0x2000f4: 0xa2082393  sb          $t0, 0x2393($s0)
    ctx->pc = 0x2000f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9107), (uint8_t)GPR_U32(ctx, 8));
label_2000f8:
    // 0x2000f8: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x2000f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_2000fc:
    // 0x2000fc: 0xae072394  sw          $a3, 0x2394($s0)
    ctx->pc = 0x2000fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9108), GPR_U32(ctx, 7));
label_200100:
    // 0x200100: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x200100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_200104:
    // 0x200104: 0xa2092430  sb          $t1, 0x2430($s0)
    ctx->pc = 0x200104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9264), (uint8_t)GPR_U32(ctx, 9));
label_200108:
    // 0x200108: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x200108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_20010c:
    // 0x20010c: 0xa2062431  sb          $a2, 0x2431($s0)
    ctx->pc = 0x20010cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9265), (uint8_t)GPR_U32(ctx, 6));
label_200110:
    // 0x200110: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x200110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_200114:
    // 0x200114: 0xa2052432  sb          $a1, 0x2432($s0)
    ctx->pc = 0x200114u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9266), (uint8_t)GPR_U32(ctx, 5));
label_200118:
    // 0x200118: 0xa2082433  sb          $t0, 0x2433($s0)
    ctx->pc = 0x200118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9267), (uint8_t)GPR_U32(ctx, 8));
label_20011c:
    // 0x20011c: 0xae072434  sw          $a3, 0x2434($s0)
    ctx->pc = 0x20011cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9268), GPR_U32(ctx, 7));
label_200120:
    // 0x200120: 0xa20924d0  sb          $t1, 0x24D0($s0)
    ctx->pc = 0x200120u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9424), (uint8_t)GPR_U32(ctx, 9));
label_200124:
    // 0x200124: 0xa20324d1  sb          $v1, 0x24D1($s0)
    ctx->pc = 0x200124u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9425), (uint8_t)GPR_U32(ctx, 3));
label_200128:
    // 0x200128: 0xa20624d2  sb          $a2, 0x24D2($s0)
    ctx->pc = 0x200128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9426), (uint8_t)GPR_U32(ctx, 6));
label_20012c:
    // 0x20012c: 0xa20824d3  sb          $t0, 0x24D3($s0)
    ctx->pc = 0x20012cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9427), (uint8_t)GPR_U32(ctx, 8));
label_200130:
    // 0x200130: 0xae0724d4  sw          $a3, 0x24D4($s0)
    ctx->pc = 0x200130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9428), GPR_U32(ctx, 7));
label_200134:
    // 0x200134: 0xa20a2570  sb          $t2, 0x2570($s0)
    ctx->pc = 0x200134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9584), (uint8_t)GPR_U32(ctx, 10));
label_200138:
    // 0x200138: 0xa2092571  sb          $t1, 0x2571($s0)
    ctx->pc = 0x200138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9585), (uint8_t)GPR_U32(ctx, 9));
label_20013c:
    // 0x20013c: 0xa2022572  sb          $v0, 0x2572($s0)
    ctx->pc = 0x20013cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9586), (uint8_t)GPR_U32(ctx, 2));
label_200140:
    // 0x200140: 0xa2082573  sb          $t0, 0x2573($s0)
    ctx->pc = 0x200140u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9587), (uint8_t)GPR_U32(ctx, 8));
label_200144:
    // 0x200144: 0xc07082c  jal         func_1C20B0
label_200148:
    if (ctx->pc == 0x200148u) {
        ctx->pc = 0x200148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200144u;
        // 0x200148: 0xae072574  sw          $a3, 0x2574($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 9588), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20014Cu;
        goto label_20014c;
    }
    ctx->pc = 0x200144u;
    SET_GPR_U32(ctx, 31, 0x20014Cu);
    ctx->pc = 0x200148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200144u;
    // 0x200148: 0xae072574  sw          $a3, 0x2574($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 9588), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x20014Cu;
label_20014c:
    // 0x20014c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20014cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200150:
    // 0x200150: 0x260425a0  addiu       $a0, $s0, 0x25A0
    ctx->pc = 0x200150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9632));
label_200154:
    // 0x200154: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x200154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_200158:
    // 0x200158: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x200158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20015c:
    // 0x20015c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20015cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_200160:
    // 0x200160: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x200160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_200164:
    // 0x200164: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x200164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_200168:
    // 0x200168: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x200168u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20016c:
    // 0x20016c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20016cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_200170:
    // 0x200170: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x200170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_200174:
    // 0x200174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200178:
    // 0x200178: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x200178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20017c:
    // 0x20017c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20017cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_200180:
    // 0x200180: 0x240a0168  addiu       $t2, $zero, 0x168
    ctx->pc = 0x200180u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_200184:
    // 0x200184: 0xc05de30  jal         func_1778C0
label_200188:
    if (ctx->pc == 0x200188u) {
        ctx->pc = 0x200188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200184u;
        // 0x200188: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20018Cu;
        goto label_20018c;
    }
    ctx->pc = 0x200184u;
    SET_GPR_U32(ctx, 31, 0x20018Cu);
    ctx->pc = 0x200188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200184u;
    // 0x200188: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x200184u, 0x20018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20018Cu;
label_20018c:
    // 0x20018c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x20018cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_200190:
    // 0x200190: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x200190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_200194:
    // 0x200194: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x200194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_200198:
    // 0x200198: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x200198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_20019c:
    // 0x20019c: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x20019cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2001a0:
    // 0x2001a0: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x2001a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2001a4:
    // 0x2001a4: 0xc054e5c  jal         func_153970
label_2001a8:
    if (ctx->pc == 0x2001A8u) {
        ctx->pc = 0x2001A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2001A4u;
        // 0x2001a8: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2001ACu;
        goto label_2001ac;
    }
    ctx->pc = 0x2001A4u;
    SET_GPR_U32(ctx, 31, 0x2001ACu);
    ctx->pc = 0x2001A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2001A4u;
    // 0x2001a8: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x2001A4u, 0x2001ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2001ACu;
label_2001ac:
    // 0x2001ac: 0xc054e70  jal         func_1539C0
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
    ctx->pc = 0x200718u;
    return;
}

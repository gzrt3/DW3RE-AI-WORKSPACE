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


void FUN_0019b850_part174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1effe0u: goto label_1effe0;
        case 0x1effe4u: goto label_1effe4;
        case 0x1effe8u: goto label_1effe8;
        case 0x1effecu: goto label_1effec;
        case 0x1efff0u: goto label_1efff0;
        case 0x1efff4u: goto label_1efff4;
        case 0x1efff8u: goto label_1efff8;
        case 0x1efffcu: goto label_1efffc;
        case 0x1f0000u: goto label_1f0000;
        case 0x1f0004u: goto label_1f0004;
        case 0x1f0008u: goto label_1f0008;
        case 0x1f000cu: goto label_1f000c;
        case 0x1f0010u: goto label_1f0010;
        case 0x1f0014u: goto label_1f0014;
        case 0x1f0018u: goto label_1f0018;
        case 0x1f001cu: goto label_1f001c;
        case 0x1f0020u: goto label_1f0020;
        case 0x1f0024u: goto label_1f0024;
        case 0x1f0028u: goto label_1f0028;
        case 0x1f002cu: goto label_1f002c;
        case 0x1f0030u: goto label_1f0030;
        case 0x1f0034u: goto label_1f0034;
        case 0x1f0038u: goto label_1f0038;
        case 0x1f003cu: goto label_1f003c;
        case 0x1f0040u: goto label_1f0040;
        case 0x1f0044u: goto label_1f0044;
        case 0x1f0048u: goto label_1f0048;
        case 0x1f004cu: goto label_1f004c;
        case 0x1f0050u: goto label_1f0050;
        case 0x1f0054u: goto label_1f0054;
        case 0x1f0058u: goto label_1f0058;
        case 0x1f005cu: goto label_1f005c;
        case 0x1f0060u: goto label_1f0060;
        case 0x1f0064u: goto label_1f0064;
        case 0x1f0068u: goto label_1f0068;
        case 0x1f006cu: goto label_1f006c;
        case 0x1f0070u: goto label_1f0070;
        case 0x1f0074u: goto label_1f0074;
        case 0x1f0078u: goto label_1f0078;
        case 0x1f007cu: goto label_1f007c;
        case 0x1f0080u: goto label_1f0080;
        case 0x1f0084u: goto label_1f0084;
        case 0x1f0088u: goto label_1f0088;
        case 0x1f008cu: goto label_1f008c;
        case 0x1f0090u: goto label_1f0090;
        case 0x1f0094u: goto label_1f0094;
        case 0x1f0098u: goto label_1f0098;
        case 0x1f009cu: goto label_1f009c;
        case 0x1f00a0u: goto label_1f00a0;
        case 0x1f00a4u: goto label_1f00a4;
        case 0x1f00a8u: goto label_1f00a8;
        case 0x1f00acu: goto label_1f00ac;
        case 0x1f00b0u: goto label_1f00b0;
        case 0x1f00b4u: goto label_1f00b4;
        case 0x1f00b8u: goto label_1f00b8;
        case 0x1f00bcu: goto label_1f00bc;
        case 0x1f00c0u: goto label_1f00c0;
        case 0x1f00c4u: goto label_1f00c4;
        case 0x1f00c8u: goto label_1f00c8;
        case 0x1f00ccu: goto label_1f00cc;
        case 0x1f00d0u: goto label_1f00d0;
        case 0x1f00d4u: goto label_1f00d4;
        case 0x1f00d8u: goto label_1f00d8;
        case 0x1f00dcu: goto label_1f00dc;
        case 0x1f00e0u: goto label_1f00e0;
        case 0x1f00e4u: goto label_1f00e4;
        case 0x1f00e8u: goto label_1f00e8;
        case 0x1f00ecu: goto label_1f00ec;
        case 0x1f00f0u: goto label_1f00f0;
        case 0x1f00f4u: goto label_1f00f4;
        case 0x1f00f8u: goto label_1f00f8;
        case 0x1f00fcu: goto label_1f00fc;
        case 0x1f0100u: goto label_1f0100;
        case 0x1f0104u: goto label_1f0104;
        case 0x1f0108u: goto label_1f0108;
        case 0x1f010cu: goto label_1f010c;
        case 0x1f0110u: goto label_1f0110;
        case 0x1f0114u: goto label_1f0114;
        case 0x1f0118u: goto label_1f0118;
        case 0x1f011cu: goto label_1f011c;
        case 0x1f0120u: goto label_1f0120;
        case 0x1f0124u: goto label_1f0124;
        case 0x1f0128u: goto label_1f0128;
        case 0x1f012cu: goto label_1f012c;
        case 0x1f0130u: goto label_1f0130;
        case 0x1f0134u: goto label_1f0134;
        case 0x1f0138u: goto label_1f0138;
        case 0x1f013cu: goto label_1f013c;
        case 0x1f0140u: goto label_1f0140;
        case 0x1f0144u: goto label_1f0144;
        case 0x1f0148u: goto label_1f0148;
        case 0x1f014cu: goto label_1f014c;
        case 0x1f0150u: goto label_1f0150;
        case 0x1f0154u: goto label_1f0154;
        case 0x1f0158u: goto label_1f0158;
        case 0x1f015cu: goto label_1f015c;
        case 0x1f0160u: goto label_1f0160;
        case 0x1f0164u: goto label_1f0164;
        case 0x1f0168u: goto label_1f0168;
        case 0x1f016cu: goto label_1f016c;
        case 0x1f0170u: goto label_1f0170;
        case 0x1f0174u: goto label_1f0174;
        case 0x1f0178u: goto label_1f0178;
        case 0x1f017cu: goto label_1f017c;
        case 0x1f0180u: goto label_1f0180;
        case 0x1f0184u: goto label_1f0184;
        case 0x1f0188u: goto label_1f0188;
        case 0x1f018cu: goto label_1f018c;
        case 0x1f0190u: goto label_1f0190;
        case 0x1f0194u: goto label_1f0194;
        case 0x1f0198u: goto label_1f0198;
        case 0x1f019cu: goto label_1f019c;
        case 0x1f01a0u: goto label_1f01a0;
        case 0x1f01a4u: goto label_1f01a4;
        case 0x1f01a8u: goto label_1f01a8;
        case 0x1f01acu: goto label_1f01ac;
        case 0x1f01b0u: goto label_1f01b0;
        case 0x1f01b4u: goto label_1f01b4;
        case 0x1f01b8u: goto label_1f01b8;
        case 0x1f01bcu: goto label_1f01bc;
        case 0x1f01c0u: goto label_1f01c0;
        case 0x1f01c4u: goto label_1f01c4;
        case 0x1f01c8u: goto label_1f01c8;
        case 0x1f01ccu: goto label_1f01cc;
        case 0x1f01d0u: goto label_1f01d0;
        case 0x1f01d4u: goto label_1f01d4;
        case 0x1f01d8u: goto label_1f01d8;
        case 0x1f01dcu: goto label_1f01dc;
        case 0x1f01e0u: goto label_1f01e0;
        case 0x1f01e4u: goto label_1f01e4;
        case 0x1f01e8u: goto label_1f01e8;
        case 0x1f01ecu: goto label_1f01ec;
        case 0x1f01f0u: goto label_1f01f0;
        case 0x1f01f4u: goto label_1f01f4;
        case 0x1f01f8u: goto label_1f01f8;
        case 0x1f01fcu: goto label_1f01fc;
        case 0x1f0200u: goto label_1f0200;
        case 0x1f0204u: goto label_1f0204;
        case 0x1f0208u: goto label_1f0208;
        case 0x1f020cu: goto label_1f020c;
        case 0x1f0210u: goto label_1f0210;
        case 0x1f0214u: goto label_1f0214;
        case 0x1f0218u: goto label_1f0218;
        case 0x1f021cu: goto label_1f021c;
        case 0x1f0220u: goto label_1f0220;
        case 0x1f0224u: goto label_1f0224;
        case 0x1f0228u: goto label_1f0228;
        case 0x1f022cu: goto label_1f022c;
        case 0x1f0230u: goto label_1f0230;
        case 0x1f0234u: goto label_1f0234;
        case 0x1f0238u: goto label_1f0238;
        case 0x1f023cu: goto label_1f023c;
        case 0x1f0240u: goto label_1f0240;
        case 0x1f0244u: goto label_1f0244;
        case 0x1f0248u: goto label_1f0248;
        case 0x1f024cu: goto label_1f024c;
        case 0x1f0250u: goto label_1f0250;
        case 0x1f0254u: goto label_1f0254;
        case 0x1f0258u: goto label_1f0258;
        case 0x1f025cu: goto label_1f025c;
        case 0x1f0260u: goto label_1f0260;
        case 0x1f0264u: goto label_1f0264;
        case 0x1f0268u: goto label_1f0268;
        case 0x1f026cu: goto label_1f026c;
        case 0x1f0270u: goto label_1f0270;
        case 0x1f0274u: goto label_1f0274;
        case 0x1f0278u: goto label_1f0278;
        case 0x1f027cu: goto label_1f027c;
        case 0x1f0280u: goto label_1f0280;
        case 0x1f0284u: goto label_1f0284;
        case 0x1f0288u: goto label_1f0288;
        case 0x1f028cu: goto label_1f028c;
        case 0x1f0290u: goto label_1f0290;
        case 0x1f0294u: goto label_1f0294;
        case 0x1f0298u: goto label_1f0298;
        case 0x1f029cu: goto label_1f029c;
        case 0x1f02a0u: goto label_1f02a0;
        case 0x1f02a4u: goto label_1f02a4;
        case 0x1f02a8u: goto label_1f02a8;
        case 0x1f02acu: goto label_1f02ac;
        case 0x1f02b0u: goto label_1f02b0;
        case 0x1f02b4u: goto label_1f02b4;
        case 0x1f02b8u: goto label_1f02b8;
        case 0x1f02bcu: goto label_1f02bc;
        case 0x1f02c0u: goto label_1f02c0;
        case 0x1f02c4u: goto label_1f02c4;
        case 0x1f02c8u: goto label_1f02c8;
        case 0x1f02ccu: goto label_1f02cc;
        case 0x1f02d0u: goto label_1f02d0;
        case 0x1f02d4u: goto label_1f02d4;
        case 0x1f02d8u: goto label_1f02d8;
        case 0x1f02dcu: goto label_1f02dc;
        case 0x1f02e0u: goto label_1f02e0;
        case 0x1f02e4u: goto label_1f02e4;
        case 0x1f02e8u: goto label_1f02e8;
        case 0x1f02ecu: goto label_1f02ec;
        case 0x1f02f0u: goto label_1f02f0;
        case 0x1f02f4u: goto label_1f02f4;
        case 0x1f02f8u: goto label_1f02f8;
        case 0x1f02fcu: goto label_1f02fc;
        case 0x1f0300u: goto label_1f0300;
        case 0x1f0304u: goto label_1f0304;
        case 0x1f0308u: goto label_1f0308;
        case 0x1f030cu: goto label_1f030c;
        case 0x1f0310u: goto label_1f0310;
        case 0x1f0314u: goto label_1f0314;
        case 0x1f0318u: goto label_1f0318;
        case 0x1f031cu: goto label_1f031c;
        case 0x1f0320u: goto label_1f0320;
        case 0x1f0324u: goto label_1f0324;
        case 0x1f0328u: goto label_1f0328;
        case 0x1f032cu: goto label_1f032c;
        case 0x1f0330u: goto label_1f0330;
        case 0x1f0334u: goto label_1f0334;
        case 0x1f0338u: goto label_1f0338;
        case 0x1f033cu: goto label_1f033c;
        case 0x1f0340u: goto label_1f0340;
        case 0x1f0344u: goto label_1f0344;
        case 0x1f0348u: goto label_1f0348;
        case 0x1f034cu: goto label_1f034c;
        case 0x1f0350u: goto label_1f0350;
        case 0x1f0354u: goto label_1f0354;
        case 0x1f0358u: goto label_1f0358;
        case 0x1f035cu: goto label_1f035c;
        case 0x1f0360u: goto label_1f0360;
        case 0x1f0364u: goto label_1f0364;
        case 0x1f0368u: goto label_1f0368;
        case 0x1f036cu: goto label_1f036c;
        case 0x1f0370u: goto label_1f0370;
        case 0x1f0374u: goto label_1f0374;
        case 0x1f0378u: goto label_1f0378;
        case 0x1f037cu: goto label_1f037c;
        case 0x1f0380u: goto label_1f0380;
        case 0x1f0384u: goto label_1f0384;
        case 0x1f0388u: goto label_1f0388;
        case 0x1f038cu: goto label_1f038c;
        case 0x1f0390u: goto label_1f0390;
        case 0x1f0394u: goto label_1f0394;
        case 0x1f0398u: goto label_1f0398;
        case 0x1f039cu: goto label_1f039c;
        case 0x1f03a0u: goto label_1f03a0;
        case 0x1f03a4u: goto label_1f03a4;
        case 0x1f03a8u: goto label_1f03a8;
        case 0x1f03acu: goto label_1f03ac;
        case 0x1f03b0u: goto label_1f03b0;
        case 0x1f03b4u: goto label_1f03b4;
        case 0x1f03b8u: goto label_1f03b8;
        case 0x1f03bcu: goto label_1f03bc;
        case 0x1f03c0u: goto label_1f03c0;
        case 0x1f03c4u: goto label_1f03c4;
        case 0x1f03c8u: goto label_1f03c8;
        case 0x1f03ccu: goto label_1f03cc;
        case 0x1f03d0u: goto label_1f03d0;
        case 0x1f03d4u: goto label_1f03d4;
        case 0x1f03d8u: goto label_1f03d8;
        case 0x1f03dcu: goto label_1f03dc;
        case 0x1f03e0u: goto label_1f03e0;
        case 0x1f03e4u: goto label_1f03e4;
        case 0x1f03e8u: goto label_1f03e8;
        case 0x1f03ecu: goto label_1f03ec;
        case 0x1f03f0u: goto label_1f03f0;
        case 0x1f03f4u: goto label_1f03f4;
        case 0x1f03f8u: goto label_1f03f8;
        case 0x1f03fcu: goto label_1f03fc;
        case 0x1f0400u: goto label_1f0400;
        case 0x1f0404u: goto label_1f0404;
        case 0x1f0408u: goto label_1f0408;
        case 0x1f040cu: goto label_1f040c;
        case 0x1f0410u: goto label_1f0410;
        case 0x1f0414u: goto label_1f0414;
        case 0x1f0418u: goto label_1f0418;
        case 0x1f041cu: goto label_1f041c;
        case 0x1f0420u: goto label_1f0420;
        case 0x1f0424u: goto label_1f0424;
        case 0x1f0428u: goto label_1f0428;
        case 0x1f042cu: goto label_1f042c;
        case 0x1f0430u: goto label_1f0430;
        case 0x1f0434u: goto label_1f0434;
        case 0x1f0438u: goto label_1f0438;
        case 0x1f043cu: goto label_1f043c;
        case 0x1f0440u: goto label_1f0440;
        case 0x1f0444u: goto label_1f0444;
        case 0x1f0448u: goto label_1f0448;
        case 0x1f044cu: goto label_1f044c;
        case 0x1f0450u: goto label_1f0450;
        case 0x1f0454u: goto label_1f0454;
        case 0x1f0458u: goto label_1f0458;
        case 0x1f045cu: goto label_1f045c;
        case 0x1f0460u: goto label_1f0460;
        case 0x1f0464u: goto label_1f0464;
        case 0x1f0468u: goto label_1f0468;
        case 0x1f046cu: goto label_1f046c;
        case 0x1f0470u: goto label_1f0470;
        case 0x1f0474u: goto label_1f0474;
        case 0x1f0478u: goto label_1f0478;
        case 0x1f047cu: goto label_1f047c;
        case 0x1f0480u: goto label_1f0480;
        case 0x1f0484u: goto label_1f0484;
        case 0x1f0488u: goto label_1f0488;
        case 0x1f048cu: goto label_1f048c;
        case 0x1f0490u: goto label_1f0490;
        case 0x1f0494u: goto label_1f0494;
        case 0x1f0498u: goto label_1f0498;
        case 0x1f049cu: goto label_1f049c;
        case 0x1f04a0u: goto label_1f04a0;
        case 0x1f04a4u: goto label_1f04a4;
        case 0x1f04a8u: goto label_1f04a8;
        case 0x1f04acu: goto label_1f04ac;
        case 0x1f04b0u: goto label_1f04b0;
        case 0x1f04b4u: goto label_1f04b4;
        case 0x1f04b8u: goto label_1f04b8;
        case 0x1f04bcu: goto label_1f04bc;
        case 0x1f04c0u: goto label_1f04c0;
        case 0x1f04c4u: goto label_1f04c4;
        case 0x1f04c8u: goto label_1f04c8;
        case 0x1f04ccu: goto label_1f04cc;
        case 0x1f04d0u: goto label_1f04d0;
        case 0x1f04d4u: goto label_1f04d4;
        case 0x1f04d8u: goto label_1f04d8;
        case 0x1f04dcu: goto label_1f04dc;
        case 0x1f04e0u: goto label_1f04e0;
        case 0x1f04e4u: goto label_1f04e4;
        case 0x1f04e8u: goto label_1f04e8;
        case 0x1f04ecu: goto label_1f04ec;
        case 0x1f04f0u: goto label_1f04f0;
        case 0x1f04f4u: goto label_1f04f4;
        case 0x1f04f8u: goto label_1f04f8;
        case 0x1f04fcu: goto label_1f04fc;
        case 0x1f0500u: goto label_1f0500;
        case 0x1f0504u: goto label_1f0504;
        case 0x1f0508u: goto label_1f0508;
        case 0x1f050cu: goto label_1f050c;
        case 0x1f0510u: goto label_1f0510;
        case 0x1f0514u: goto label_1f0514;
        case 0x1f0518u: goto label_1f0518;
        case 0x1f051cu: goto label_1f051c;
        case 0x1f0520u: goto label_1f0520;
        case 0x1f0524u: goto label_1f0524;
        case 0x1f0528u: goto label_1f0528;
        case 0x1f052cu: goto label_1f052c;
        case 0x1f0530u: goto label_1f0530;
        case 0x1f0534u: goto label_1f0534;
        case 0x1f0538u: goto label_1f0538;
        case 0x1f053cu: goto label_1f053c;
        case 0x1f0540u: goto label_1f0540;
        case 0x1f0544u: goto label_1f0544;
        case 0x1f0548u: goto label_1f0548;
        case 0x1f054cu: goto label_1f054c;
        case 0x1f0550u: goto label_1f0550;
        case 0x1f0554u: goto label_1f0554;
        case 0x1f0558u: goto label_1f0558;
        case 0x1f055cu: goto label_1f055c;
        case 0x1f0560u: goto label_1f0560;
        case 0x1f0564u: goto label_1f0564;
        case 0x1f0568u: goto label_1f0568;
        case 0x1f056cu: goto label_1f056c;
        case 0x1f0570u: goto label_1f0570;
        case 0x1f0574u: goto label_1f0574;
        case 0x1f0578u: goto label_1f0578;
        case 0x1f057cu: goto label_1f057c;
        case 0x1f0580u: goto label_1f0580;
        case 0x1f0584u: goto label_1f0584;
        case 0x1f0588u: goto label_1f0588;
        case 0x1f058cu: goto label_1f058c;
        case 0x1f0590u: goto label_1f0590;
        case 0x1f0594u: goto label_1f0594;
        case 0x1f0598u: goto label_1f0598;
        case 0x1f059cu: goto label_1f059c;
        case 0x1f05a0u: goto label_1f05a0;
        case 0x1f05a4u: goto label_1f05a4;
        case 0x1f05a8u: goto label_1f05a8;
        case 0x1f05acu: goto label_1f05ac;
        case 0x1f05b0u: goto label_1f05b0;
        case 0x1f05b4u: goto label_1f05b4;
        case 0x1f05b8u: goto label_1f05b8;
        case 0x1f05bcu: goto label_1f05bc;
        case 0x1f05c0u: goto label_1f05c0;
        case 0x1f05c4u: goto label_1f05c4;
        case 0x1f05c8u: goto label_1f05c8;
        case 0x1f05ccu: goto label_1f05cc;
        case 0x1f05d0u: goto label_1f05d0;
        case 0x1f05d4u: goto label_1f05d4;
        case 0x1f05d8u: goto label_1f05d8;
        case 0x1f05dcu: goto label_1f05dc;
        case 0x1f05e0u: goto label_1f05e0;
        case 0x1f05e4u: goto label_1f05e4;
        case 0x1f05e8u: goto label_1f05e8;
        case 0x1f05ecu: goto label_1f05ec;
        case 0x1f05f0u: goto label_1f05f0;
        case 0x1f05f4u: goto label_1f05f4;
        case 0x1f05f8u: goto label_1f05f8;
        case 0x1f05fcu: goto label_1f05fc;
        case 0x1f0600u: goto label_1f0600;
        case 0x1f0604u: goto label_1f0604;
        case 0x1f0608u: goto label_1f0608;
        case 0x1f060cu: goto label_1f060c;
        case 0x1f0610u: goto label_1f0610;
        case 0x1f0614u: goto label_1f0614;
        case 0x1f0618u: goto label_1f0618;
        case 0x1f061cu: goto label_1f061c;
        case 0x1f0620u: goto label_1f0620;
        case 0x1f0624u: goto label_1f0624;
        case 0x1f0628u: goto label_1f0628;
        case 0x1f062cu: goto label_1f062c;
        case 0x1f0630u: goto label_1f0630;
        case 0x1f0634u: goto label_1f0634;
        case 0x1f0638u: goto label_1f0638;
        case 0x1f063cu: goto label_1f063c;
        case 0x1f0640u: goto label_1f0640;
        case 0x1f0644u: goto label_1f0644;
        case 0x1f0648u: goto label_1f0648;
        case 0x1f064cu: goto label_1f064c;
        case 0x1f0650u: goto label_1f0650;
        case 0x1f0654u: goto label_1f0654;
        case 0x1f0658u: goto label_1f0658;
        case 0x1f065cu: goto label_1f065c;
        case 0x1f0660u: goto label_1f0660;
        case 0x1f0664u: goto label_1f0664;
        case 0x1f0668u: goto label_1f0668;
        case 0x1f066cu: goto label_1f066c;
        case 0x1f0670u: goto label_1f0670;
        case 0x1f0674u: goto label_1f0674;
        case 0x1f0678u: goto label_1f0678;
        case 0x1f067cu: goto label_1f067c;
        case 0x1f0680u: goto label_1f0680;
        case 0x1f0684u: goto label_1f0684;
        case 0x1f0688u: goto label_1f0688;
        case 0x1f068cu: goto label_1f068c;
        case 0x1f0690u: goto label_1f0690;
        case 0x1f0694u: goto label_1f0694;
        case 0x1f0698u: goto label_1f0698;
        case 0x1f069cu: goto label_1f069c;
        case 0x1f06a0u: goto label_1f06a0;
        case 0x1f06a4u: goto label_1f06a4;
        case 0x1f06a8u: goto label_1f06a8;
        case 0x1f06acu: goto label_1f06ac;
        case 0x1f06b0u: goto label_1f06b0;
        case 0x1f06b4u: goto label_1f06b4;
        case 0x1f06b8u: goto label_1f06b8;
        case 0x1f06bcu: goto label_1f06bc;
        case 0x1f06c0u: goto label_1f06c0;
        case 0x1f06c4u: goto label_1f06c4;
        case 0x1f06c8u: goto label_1f06c8;
        case 0x1f06ccu: goto label_1f06cc;
        case 0x1f06d0u: goto label_1f06d0;
        case 0x1f06d4u: goto label_1f06d4;
        case 0x1f06d8u: goto label_1f06d8;
        case 0x1f06dcu: goto label_1f06dc;
        case 0x1f06e0u: goto label_1f06e0;
        case 0x1f06e4u: goto label_1f06e4;
        case 0x1f06e8u: goto label_1f06e8;
        case 0x1f06ecu: goto label_1f06ec;
        case 0x1f06f0u: goto label_1f06f0;
        case 0x1f06f4u: goto label_1f06f4;
        case 0x1f06f8u: goto label_1f06f8;
        case 0x1f06fcu: goto label_1f06fc;
        case 0x1f0700u: goto label_1f0700;
        case 0x1f0704u: goto label_1f0704;
        case 0x1f0708u: goto label_1f0708;
        case 0x1f070cu: goto label_1f070c;
        case 0x1f0710u: goto label_1f0710;
        case 0x1f0714u: goto label_1f0714;
        case 0x1f0718u: goto label_1f0718;
        case 0x1f071cu: goto label_1f071c;
        case 0x1f0720u: goto label_1f0720;
        case 0x1f0724u: goto label_1f0724;
        case 0x1f0728u: goto label_1f0728;
        case 0x1f072cu: goto label_1f072c;
        case 0x1f0730u: goto label_1f0730;
        case 0x1f0734u: goto label_1f0734;
        case 0x1f0738u: goto label_1f0738;
        case 0x1f073cu: goto label_1f073c;
        case 0x1f0740u: goto label_1f0740;
        case 0x1f0744u: goto label_1f0744;
        case 0x1f0748u: goto label_1f0748;
        case 0x1f074cu: goto label_1f074c;
        case 0x1f0750u: goto label_1f0750;
        case 0x1f0754u: goto label_1f0754;
        case 0x1f0758u: goto label_1f0758;
        case 0x1f075cu: goto label_1f075c;
        case 0x1f0760u: goto label_1f0760;
        case 0x1f0764u: goto label_1f0764;
        case 0x1f0768u: goto label_1f0768;
        case 0x1f076cu: goto label_1f076c;
        case 0x1f0770u: goto label_1f0770;
        case 0x1f0774u: goto label_1f0774;
        case 0x1f0778u: goto label_1f0778;
        case 0x1f077cu: goto label_1f077c;
        case 0x1f0780u: goto label_1f0780;
        case 0x1f0784u: goto label_1f0784;
        case 0x1f0788u: goto label_1f0788;
        case 0x1f078cu: goto label_1f078c;
        case 0x1f0790u: goto label_1f0790;
        case 0x1f0794u: goto label_1f0794;
        case 0x1f0798u: goto label_1f0798;
        case 0x1f079cu: goto label_1f079c;
        case 0x1f07a0u: goto label_1f07a0;
        case 0x1f07a4u: goto label_1f07a4;
        case 0x1f07a8u: goto label_1f07a8;
        case 0x1f07acu: goto label_1f07ac;
        default: return;
    }

label_1effe0:
    // 0x1effe0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1effe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1effe4:
    // 0x1effe4: 0x33fc2  srl         $a3, $v1, 31
    ctx->pc = 0x1effe4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1effe8:
    // 0x1effe8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1effe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1effec:
    // 0x1effec: 0x0  nop
    ctx->pc = 0x1effecu;
    // NOP
label_1efff0:
    // 0x1efff0: 0x0  nop
    ctx->pc = 0x1efff0u;
    // NOP
label_1efff4:
    // 0x1efff4: 0x3010  mfhi        $a2
    ctx->pc = 0x1efff4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1efff8:
    // 0x1efff8: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x1efff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_1efffc:
    // 0x1efffc: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x1efffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f0000:
    // 0x1f0000: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1f0000u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_1f0004:
    // 0x1f0004: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f0004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f0008:
    // 0x1f0008: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1f0008u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f000c:
    // 0x1f000c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1f000cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f0010:
    // 0x1f0010: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f0010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f0014:
    // 0x1f0014: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f0014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1f0018:
    // 0x1f0018: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1f0018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1f001c:
    // 0x1f001c: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1f001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1f0020:
    // 0x1f0020: 0xa4a30130  sh          $v1, 0x130($a1)
    ctx->pc = 0x1f0020u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 304), (uint16_t)GPR_U32(ctx, 3));
label_1f0024:
    // 0x1f0024: 0xa4a20140  sh          $v0, 0x140($a1)
    ctx->pc = 0x1f0024u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 320), (uint16_t)GPR_U32(ctx, 2));
label_1f0028:
    // 0x1f0028: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1f0028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1f002c:
    // 0x1f002c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f002cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0030:
    // 0x1f0030: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f0030u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0034:
    // 0x1f0034: 0xc066c72  jal         func_19B1C8
label_1f0038:
    if (ctx->pc == 0x1F0038u) {
        ctx->pc = 0x1F0038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0034u;
        // 0x1f0038: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F003Cu;
        goto label_1f003c;
    }
    ctx->pc = 0x1F0034u;
    SET_GPR_U32(ctx, 31, 0x1F003Cu);
    ctx->pc = 0x1F0038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0034u;
    // 0x1f0038: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1F0034u, 0x1F003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F003Cu;
label_1f003c:
    // 0x1f003c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f003cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0040:
    // 0x1f0040: 0x3e00008  jr          $ra
label_1f0044:
    if (ctx->pc == 0x1F0044u) {
        ctx->pc = 0x1F0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0040u;
        // 0x1f0044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0048u;
        goto label_1f0048;
    }
    ctx->pc = 0x1F0040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0040u;
        // 0x1f0044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0048u;
label_1f0048:
    // 0x1f0048: 0x0  nop
    ctx->pc = 0x1f0048u;
    // NOP
label_1f004c:
    // 0x1f004c: 0x0  nop
    ctx->pc = 0x1f004cu;
    // NOP
label_1f0050:
    // 0x1f0050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f0050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f0054:
    // 0x1f0054: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f0054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1f0058:
    // 0x1f0058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f0058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f005c:
    // 0x1f005c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f005cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f0060:
    // 0x1f0060: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f0060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0064:
    // 0x1f0064: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f0064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f0068:
    // 0x1f0068: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f0068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f006c:
    // 0x1f006c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f006cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f0070:
    // 0x1f0070: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1f0070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1f0074:
    // 0x1f0074: 0x24429a00  addiu       $v0, $v0, -0x6600
    ctx->pc = 0x1f0074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941184));
label_1f0078:
    // 0x1f0078: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x1f0078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f007c:
    // 0x1f007c: 0xc05e234  jal         func_1788D0
label_1f0080:
    if (ctx->pc == 0x1F0080u) {
        ctx->pc = 0x1F0080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F007Cu;
        // 0x1f0080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0084u;
        goto label_1f0084;
    }
    ctx->pc = 0x1F007Cu;
    SET_GPR_U32(ctx, 31, 0x1F0084u);
    ctx->pc = 0x1F0080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F007Cu;
    // 0x1f0080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1F007Cu, 0x1F0084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0084u;
label_1f0084:
    // 0x1f0084: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1f0084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1f0088:
    // 0x1f0088: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f008c:
    // 0x1f008c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f008cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0090:
    // 0x1f0090: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f0090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0094:
    // 0x1f0094: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1f0094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f0098:
    // 0x1f0098: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x1f0098u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1f009c:
    // 0x1f009c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f009cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f00a0:
    // 0x1f00a0: 0xc05e060  jal         func_178180
label_1f00a4:
    if (ctx->pc == 0x1F00A4u) {
        ctx->pc = 0x1F00A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00A0u;
        // 0x1f00a4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F00A8u;
        goto label_1f00a8;
    }
    ctx->pc = 0x1F00A0u;
    SET_GPR_U32(ctx, 31, 0x1F00A8u);
    ctx->pc = 0x1F00A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F00A0u;
    // 0x1f00a4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1F00A0u, 0x1F00A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F00A8u;
label_1f00a8:
    // 0x1f00a8: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x1f00a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_1f00ac:
    // 0x1f00ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f00acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f00b0:
    // 0x1f00b0: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x1f00b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1f00b4:
    // 0x1f00b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f00b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f00b8:
    // 0x1f00b8: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1f00b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f00bc:
    // 0x1f00bc: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1f00bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f00c0:
    // 0x1f00c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f00c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f00c4:
    // 0x1f00c4: 0xc05e060  jal         func_178180
label_1f00c8:
    if (ctx->pc == 0x1F00C8u) {
        ctx->pc = 0x1F00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00C4u;
        // 0x1f00c8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F00CCu;
        goto label_1f00cc;
    }
    ctx->pc = 0x1F00C4u;
    SET_GPR_U32(ctx, 31, 0x1F00CCu);
    ctx->pc = 0x1F00C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F00C4u;
    // 0x1f00c8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1F00C4u, 0x1F00CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F00CCu;
label_1f00cc:
    // 0x1f00cc: 0xa2200078  sb          $zero, 0x78($s1)
    ctx->pc = 0x1f00ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 0));
label_1f00d0:
    // 0x1f00d0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1f00d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1f00d4:
    // 0x1f00d4: 0xa2270079  sb          $a3, 0x79($s1)
    ctx->pc = 0x1f00d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 7));
label_1f00d8:
    // 0x1f00d8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1f00d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f00dc:
    // 0x1f00dc: 0xa226007a  sb          $a2, 0x7A($s1)
    ctx->pc = 0x1f00dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 6));
label_1f00e0:
    // 0x1f00e0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f00e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f00e4:
    // 0x1f00e4: 0xa225007b  sb          $a1, 0x7B($s1)
    ctx->pc = 0x1f00e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 5));
label_1f00e8:
    // 0x1f00e8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1f00e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1f00ec:
    // 0x1f00ec: 0xae24007c  sw          $a0, 0x7C($s1)
    ctx->pc = 0x1f00ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 4));
label_1f00f0:
    // 0x1f00f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f00f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f00f4:
    // 0x1f00f4: 0xa2200088  sb          $zero, 0x88($s1)
    ctx->pc = 0x1f00f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 0));
label_1f00f8:
    // 0x1f00f8: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1f00f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f00fc:
    // 0x1f00fc: 0xa2270089  sb          $a3, 0x89($s1)
    ctx->pc = 0x1f00fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 7));
label_1f0100:
    // 0x1f0100: 0x26520170  addiu       $s2, $s2, 0x170
    ctx->pc = 0x1f0100u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
label_1f0104:
    // 0x1f0104: 0xa226008a  sb          $a2, 0x8A($s1)
    ctx->pc = 0x1f0104u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 6));
label_1f0108:
    // 0x1f0108: 0xa225008b  sb          $a1, 0x8B($s1)
    ctx->pc = 0x1f0108u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 5));
label_1f010c:
    // 0x1f010c: 0xae24008c  sw          $a0, 0x8C($s1)
    ctx->pc = 0x1f010cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
label_1f0110:
    // 0x1f0110: 0xa2200098  sb          $zero, 0x98($s1)
    ctx->pc = 0x1f0110u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 152), (uint8_t)GPR_U32(ctx, 0));
label_1f0114:
    // 0x1f0114: 0xa2200099  sb          $zero, 0x99($s1)
    ctx->pc = 0x1f0114u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 153), (uint8_t)GPR_U32(ctx, 0));
label_1f0118:
    // 0x1f0118: 0xa220009a  sb          $zero, 0x9A($s1)
    ctx->pc = 0x1f0118u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 154), (uint8_t)GPR_U32(ctx, 0));
label_1f011c:
    // 0x1f011c: 0xa225009b  sb          $a1, 0x9B($s1)
    ctx->pc = 0x1f011cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 5));
label_1f0120:
    // 0x1f0120: 0xae24009c  sw          $a0, 0x9C($s1)
    ctx->pc = 0x1f0120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 4));
label_1f0124:
    // 0x1f0124: 0xa22000a8  sb          $zero, 0xA8($s1)
    ctx->pc = 0x1f0124u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
label_1f0128:
    // 0x1f0128: 0xa22000a9  sb          $zero, 0xA9($s1)
    ctx->pc = 0x1f0128u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 0));
label_1f012c:
    // 0x1f012c: 0xa22000aa  sb          $zero, 0xAA($s1)
    ctx->pc = 0x1f012cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 170), (uint8_t)GPR_U32(ctx, 0));
label_1f0130:
    // 0x1f0130: 0xa22500ab  sb          $a1, 0xAB($s1)
    ctx->pc = 0x1f0130u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 171), (uint8_t)GPR_U32(ctx, 5));
label_1f0134:
    // 0x1f0134: 0xae2400ac  sw          $a0, 0xAC($s1)
    ctx->pc = 0x1f0134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 4));
label_1f0138:
    // 0x1f0138: 0xa2200128  sb          $zero, 0x128($s1)
    ctx->pc = 0x1f0138u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 296), (uint8_t)GPR_U32(ctx, 0));
label_1f013c:
    // 0x1f013c: 0xa2200129  sb          $zero, 0x129($s1)
    ctx->pc = 0x1f013cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 297), (uint8_t)GPR_U32(ctx, 0));
label_1f0140:
    // 0x1f0140: 0xa220012a  sb          $zero, 0x12A($s1)
    ctx->pc = 0x1f0140u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 298), (uint8_t)GPR_U32(ctx, 0));
label_1f0144:
    // 0x1f0144: 0xa225012b  sb          $a1, 0x12B($s1)
    ctx->pc = 0x1f0144u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 299), (uint8_t)GPR_U32(ctx, 5));
label_1f0148:
    // 0x1f0148: 0xae24012c  sw          $a0, 0x12C($s1)
    ctx->pc = 0x1f0148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 4));
label_1f014c:
    // 0x1f014c: 0xa2200138  sb          $zero, 0x138($s1)
    ctx->pc = 0x1f014cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 312), (uint8_t)GPR_U32(ctx, 0));
label_1f0150:
    // 0x1f0150: 0xa2200139  sb          $zero, 0x139($s1)
    ctx->pc = 0x1f0150u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 313), (uint8_t)GPR_U32(ctx, 0));
label_1f0154:
    // 0x1f0154: 0xa220013a  sb          $zero, 0x13A($s1)
    ctx->pc = 0x1f0154u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 314), (uint8_t)GPR_U32(ctx, 0));
label_1f0158:
    // 0x1f0158: 0xa225013b  sb          $a1, 0x13B($s1)
    ctx->pc = 0x1f0158u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 315), (uint8_t)GPR_U32(ctx, 5));
label_1f015c:
    // 0x1f015c: 0xae24013c  sw          $a0, 0x13C($s1)
    ctx->pc = 0x1f015cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 4));
label_1f0160:
    // 0x1f0160: 0xa2200148  sb          $zero, 0x148($s1)
    ctx->pc = 0x1f0160u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 328), (uint8_t)GPR_U32(ctx, 0));
label_1f0164:
    // 0x1f0164: 0xa2270149  sb          $a3, 0x149($s1)
    ctx->pc = 0x1f0164u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 329), (uint8_t)GPR_U32(ctx, 7));
label_1f0168:
    // 0x1f0168: 0xa226014a  sb          $a2, 0x14A($s1)
    ctx->pc = 0x1f0168u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 330), (uint8_t)GPR_U32(ctx, 6));
label_1f016c:
    // 0x1f016c: 0xa225014b  sb          $a1, 0x14B($s1)
    ctx->pc = 0x1f016cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 331), (uint8_t)GPR_U32(ctx, 5));
label_1f0170:
    // 0x1f0170: 0xae24014c  sw          $a0, 0x14C($s1)
    ctx->pc = 0x1f0170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 4));
label_1f0174:
    // 0x1f0174: 0xa2200158  sb          $zero, 0x158($s1)
    ctx->pc = 0x1f0174u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 344), (uint8_t)GPR_U32(ctx, 0));
label_1f0178:
    // 0x1f0178: 0xa2270159  sb          $a3, 0x159($s1)
    ctx->pc = 0x1f0178u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 345), (uint8_t)GPR_U32(ctx, 7));
label_1f017c:
    // 0x1f017c: 0xa226015a  sb          $a2, 0x15A($s1)
    ctx->pc = 0x1f017cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 346), (uint8_t)GPR_U32(ctx, 6));
label_1f0180:
    // 0x1f0180: 0xa225015b  sb          $a1, 0x15B($s1)
    ctx->pc = 0x1f0180u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 347), (uint8_t)GPR_U32(ctx, 5));
label_1f0184:
    // 0x1f0184: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
label_1f0188:
    if (ctx->pc == 0x1F0188u) {
        ctx->pc = 0x1F0188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0184u;
        // 0x1f0188: 0xae24015c  sw          $a0, 0x15C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F018Cu;
        goto label_1f018c;
    }
    ctx->pc = 0x1F0184u;
    {
        const bool branch_taken_0x1f0184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0184u;
        // 0x1f0188: 0xae24015c  sw          $a0, 0x15C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0184) {
            ctx->pc = 0x1F006Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f006c;
        }
    }
    ctx->pc = 0x1F018Cu;
label_1f018c:
    // 0x1f018c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f018cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0190:
    // 0x1f0190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f0190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f0194:
    // 0x1f0194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f0194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f0198:
    // 0x1f0198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f0198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f019c:
    // 0x1f019c: 0x3e00008  jr          $ra
label_1f01a0:
    if (ctx->pc == 0x1F01A0u) {
        ctx->pc = 0x1F01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F019Cu;
        // 0x1f01a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F01A4u;
        goto label_1f01a4;
    }
    ctx->pc = 0x1F019Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F019Cu;
        // 0x1f01a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F019Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F01A4u;
label_1f01a4:
    // 0x1f01a4: 0x0  nop
    ctx->pc = 0x1f01a4u;
    // NOP
label_1f01a8:
    // 0x1f01a8: 0x0  nop
    ctx->pc = 0x1f01a8u;
    // NOP
label_1f01ac:
    // 0x1f01ac: 0x0  nop
    ctx->pc = 0x1f01acu;
    // NOP
label_1f01b0:
    // 0x1f01b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f01b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f01b4:
    // 0x1f01b4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1f01b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1f01b8:
    // 0x1f01b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f01b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f01bc:
    // 0x1f01bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1f01bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1f01c0:
    // 0x1f01c0: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1f01c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1f01c4:
    // 0x1f01c4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f01c8:
    // 0x1f01c8: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1f01c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1f01cc:
    // 0x1f01cc: 0x24429a00  addiu       $v0, $v0, -0x6600
    ctx->pc = 0x1f01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941184));
label_1f01d0:
    // 0x1f01d0: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x1f01d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1f01d4:
    // 0x1f01d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f01d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f01d8:
    // 0x1f01d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f01d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f01dc:
    // 0x1f01dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f01dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f01e0:
    // 0x1f01e0: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x1f01e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1f01e4:
    // 0x1f01e4: 0xa2940  sll         $a1, $t2, 5
    ctx->pc = 0x1f01e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1f01e8:
    // 0x1f01e8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1f01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1f01ec:
    // 0x1f01ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f01ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f01f0:
    // 0x1f01f0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f01f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1f01f4:
    // 0x1f01f4: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x1f01f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1f01f8:
    // 0x1f01f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f01f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f01fc:
    // 0x1f01fc: 0xc066c72  jal         func_19B1C8
label_1f0200:
    if (ctx->pc == 0x1F0200u) {
        ctx->pc = 0x1F0200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01FCu;
        // 0x1f0200: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0204u;
        goto label_1f0204;
    }
    ctx->pc = 0x1F01FCu;
    SET_GPR_U32(ctx, 31, 0x1F0204u);
    ctx->pc = 0x1F0200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F01FCu;
    // 0x1f0200: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1F01FCu, 0x1F0204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0204u;
label_1f0204:
    // 0x1f0204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0208:
    // 0x1f0208: 0x3e00008  jr          $ra
label_1f020c:
    if (ctx->pc == 0x1F020Cu) {
        ctx->pc = 0x1F020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0208u;
        // 0x1f020c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0210u;
        goto label_1f0210;
    }
    ctx->pc = 0x1F0208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0208u;
        // 0x1f020c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0210u;
label_1f0210:
    // 0x1f0210: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f0210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1f0214:
    // 0x1f0214: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f0214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1f0218:
    // 0x1f0218: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f0218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f021c:
    // 0x1f021c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f021cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f0220:
    // 0x1f0220: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x1f0220u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1f0224:
    // 0x1f0224: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f0224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f0228:
    // 0x1f0228: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1f0228u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f022c:
    // 0x1f022c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f0230:
    // 0x1f0230: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1f0230u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f0234:
    // 0x1f0234: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f0234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f0238:
    // 0x1f0238: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f0238u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f023c:
    // 0x1f023c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f023cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f0240:
    // 0x1f0240: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f0240u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f0244:
    // 0x1f0244: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f0244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f0248:
    // 0x1f0248: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f0248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f024c:
    // 0x1f024c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f024cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f0250:
    // 0x1f0250: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1f0250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f0254:
    // 0x1f0254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f0254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f0258:
    // 0x1f0258: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x1f0258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f025c:
    // 0x1f025c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f025cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0260:
    // 0x1f0260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f0264:
    // 0x1f0264: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1f0264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f0268:
    // 0x1f0268: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1f0268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f026c:
    // 0x1f026c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f026cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f0270:
    // 0x1f0270: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f0270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0274:
    // 0x1f0274: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f0274u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0278:
    // 0x1f0278: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1f0278u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f027c:
    // 0x1f027c: 0xc05e060  jal         func_178180
label_1f0280:
    if (ctx->pc == 0x1F0280u) {
        ctx->pc = 0x1F0280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F027Cu;
        // 0x1f0280: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0284u;
        goto label_1f0284;
    }
    ctx->pc = 0x1F027Cu;
    SET_GPR_U32(ctx, 31, 0x1F0284u);
    ctx->pc = 0x1F0280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F027Cu;
    // 0x1f0280: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1F027Cu, 0x1F0284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0284u;
label_1f0284:
    // 0x1f0284: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x1f0284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1f0288:
    // 0x1f0288: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f0288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f028c:
    // 0x1f028c: 0xa2250068  sb          $a1, 0x68($s1)
    ctx->pc = 0x1f028cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 5));
label_1f0290:
    // 0x1f0290: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1f0290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f0294:
    // 0x1f0294: 0xa2250069  sb          $a1, 0x69($s1)
    ctx->pc = 0x1f0294u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 5));
label_1f0298:
    // 0x1f0298: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x1f0298u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1f029c:
    // 0x1f029c: 0xa224006a  sb          $a0, 0x6A($s1)
    ctx->pc = 0x1f029cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 4));
label_1f02a0:
    // 0x1f02a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f02a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1f02a4:
    // 0x1f02a4: 0xa22a006b  sb          $t2, 0x6B($s1)
    ctx->pc = 0x1f02a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 10));
label_1f02a8:
    // 0x1f02a8: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1f02a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1f02ac:
    // 0x1f02ac: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x1f02acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
label_1f02b0:
    // 0x1f02b0: 0xa2250078  sb          $a1, 0x78($s1)
    ctx->pc = 0x1f02b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 5));
label_1f02b4:
    // 0x1f02b4: 0xa2250079  sb          $a1, 0x79($s1)
    ctx->pc = 0x1f02b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 5));
label_1f02b8:
    // 0x1f02b8: 0xa224007a  sb          $a0, 0x7A($s1)
    ctx->pc = 0x1f02b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 4));
label_1f02bc:
    // 0x1f02bc: 0xa22a007b  sb          $t2, 0x7B($s1)
    ctx->pc = 0x1f02bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 10));
label_1f02c0:
    // 0x1f02c0: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x1f02c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
label_1f02c4:
    // 0x1f02c4: 0xa2200088  sb          $zero, 0x88($s1)
    ctx->pc = 0x1f02c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 0));
label_1f02c8:
    // 0x1f02c8: 0xa2200089  sb          $zero, 0x89($s1)
    ctx->pc = 0x1f02c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 0));
label_1f02cc:
    // 0x1f02cc: 0xa220008a  sb          $zero, 0x8A($s1)
    ctx->pc = 0x1f02ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 0));
label_1f02d0:
    // 0x1f02d0: 0xa220008b  sb          $zero, 0x8B($s1)
    ctx->pc = 0x1f02d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 0));
label_1f02d4:
    // 0x1f02d4: 0xae23008c  sw          $v1, 0x8C($s1)
    ctx->pc = 0x1f02d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
label_1f02d8:
    // 0x1f02d8: 0xa2200098  sb          $zero, 0x98($s1)
    ctx->pc = 0x1f02d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 152), (uint8_t)GPR_U32(ctx, 0));
label_1f02dc:
    // 0x1f02dc: 0xa2200099  sb          $zero, 0x99($s1)
    ctx->pc = 0x1f02dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 153), (uint8_t)GPR_U32(ctx, 0));
label_1f02e0:
    // 0x1f02e0: 0xa220009a  sb          $zero, 0x9A($s1)
    ctx->pc = 0x1f02e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 154), (uint8_t)GPR_U32(ctx, 0));
label_1f02e4:
    // 0x1f02e4: 0xa220009b  sb          $zero, 0x9B($s1)
    ctx->pc = 0x1f02e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 0));
label_1f02e8:
    // 0x1f02e8: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x1f02e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
label_1f02ec:
    // 0x1f02ec: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_1f02f0:
    if (ctx->pc == 0x1F02F0u) {
        ctx->pc = 0x1F02F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02ECu;
        // 0x1f02f0: 0x263100b0  addiu       $s1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F02F4u;
        goto label_1f02f4;
    }
    ctx->pc = 0x1F02ECu;
    {
        const bool branch_taken_0x1f02ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F02F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02ECu;
        // 0x1f02f0: 0x263100b0  addiu       $s1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02ec) {
            ctx->pc = 0x1F0260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0260;
        }
    }
    ctx->pc = 0x1F02F4u;
label_1f02f4:
    // 0x1f02f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f02f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f02f8:
    // 0x1f02f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f02f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f02fc:
    // 0x1f02fc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f02fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f0300:
    // 0x1f0300: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f0300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f0304:
    // 0x1f0304: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1f0304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f0308:
    // 0x1f0308: 0xc07c0d0  jal         func_1F0340
label_1f030c:
    if (ctx->pc == 0x1F030Cu) {
        ctx->pc = 0x1F030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0308u;
        // 0x1f030c: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0310u;
        goto label_1f0310;
    }
    ctx->pc = 0x1F0308u;
    SET_GPR_U32(ctx, 31, 0x1F0310u);
    ctx->pc = 0x1F030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0308u;
    // 0x1f030c: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    goto label_1f0340;
    ctx->pc = 0x1F0310u;
label_1f0310:
    // 0x1f0310: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f0310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1f0314:
    // 0x1f0314: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f0314u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f0318:
    // 0x1f0318: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f0318u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f031c:
    // 0x1f031c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f031cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f0320:
    // 0x1f0320: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f0320u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f0324:
    // 0x1f0324: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f0324u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f0328:
    // 0x1f0328: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f0328u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f032c:
    // 0x1f032c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f032cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f0330:
    // 0x1f0330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f0330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f0334:
    // 0x1f0334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f0334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0338:
    // 0x1f0338: 0x3e00008  jr          $ra
label_1f033c:
    if (ctx->pc == 0x1F033Cu) {
        ctx->pc = 0x1F033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0338u;
        // 0x1f033c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0340u;
        goto label_1f0340;
    }
    ctx->pc = 0x1F0338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0338u;
        // 0x1f033c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0340u;
label_1f0340:
    // 0x1f0340: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1f0340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1f0344:
    // 0x1f0344: 0xa75821  addu        $t3, $a1, $a3
    ctx->pc = 0x1f0344u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1f0348:
    // 0x1f0348: 0x246d6c00  addiu       $t5, $v1, 0x6C00
    ctx->pc = 0x1f0348u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1f034c:
    // 0x1f034c: 0xc86021  addu        $t4, $a2, $t0
    ctx->pc = 0x1f034cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1f0350:
    // 0x1f0350: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x1f0350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1f0354:
    // 0x1f0354: 0xa48d0070  sh          $t5, 0x70($a0)
    ctx->pc = 0x1f0354u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 13));
label_1f0358:
    // 0x1f0358: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f0358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f035c:
    // 0x1f035c: 0x246e6c00  addiu       $t6, $v1, 0x6C00
    ctx->pc = 0x1f035cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1f0360:
    // 0x1f0360: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1f0360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1f0364:
    // 0x1f0364: 0x24677900  addiu       $a3, $v1, 0x7900
    ctx->pc = 0x1f0364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1f0368:
    // 0x1f0368: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x1f0368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1f036c:
    // 0x1f036c: 0xa4870072  sh          $a3, 0x72($a0)
    ctx->pc = 0x1f036cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 7));
label_1f0370:
    // 0x1f0370: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f0370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1f0374:
    // 0x1f0374: 0x24667900  addiu       $a2, $v1, 0x7900
    ctx->pc = 0x1f0374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1f0378:
    // 0x1f0378: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x1f0378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_1f037c:
    // 0x1f037c: 0x24686c00  addiu       $t0, $v1, 0x6C00
    ctx->pc = 0x1f037cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1f0380:
    // 0x1f0380: 0x1691823  subu        $v1, $t3, $t1
    ctx->pc = 0x1f0380u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
label_1f0384:
    // 0x1f0384: 0xa4880080  sh          $t0, 0x80($a0)
    ctx->pc = 0x1f0384u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 8));
label_1f0388:
    // 0x1f0388: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1f0388u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f038c:
    // 0x1f038c: 0xa4870082  sh          $a3, 0x82($a0)
    ctx->pc = 0x1f038cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 7));
label_1f0390:
    // 0x1f0390: 0x1891823  subu        $v1, $t4, $t1
    ctx->pc = 0x1f0390u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
label_1f0394:
    // 0x1f0394: 0xa48e0090  sh          $t6, 0x90($a0)
    ctx->pc = 0x1f0394u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 14));
label_1f0398:
    // 0x1f0398: 0x24a96c00  addiu       $t1, $a1, 0x6C00
    ctx->pc = 0x1f0398u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
label_1f039c:
    // 0x1f039c: 0xa4860092  sh          $a2, 0x92($a0)
    ctx->pc = 0x1f039cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 146), (uint16_t)GPR_U32(ctx, 6));
label_1f03a0:
    // 0x1f03a0: 0xa48900a0  sh          $t1, 0xA0($a0)
    ctx->pc = 0x1f03a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 9));
label_1f03a4:
    // 0x1f03a4: 0xc28c0  sll         $a1, $t4, 3
    ctx->pc = 0x1f03a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_1f03a8:
    // 0x1f03a8: 0xa48600a2  sh          $a2, 0xA2($a0)
    ctx->pc = 0x1f03a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 6));
label_1f03ac:
    // 0x1f03ac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f03acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1f03b0:
    // 0x1f03b0: 0xa08a007b  sb          $t2, 0x7B($a0)
    ctx->pc = 0x1f03b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 10));
label_1f03b4:
    // 0x1f03b4: 0x24a57900  addiu       $a1, $a1, 0x7900
    ctx->pc = 0x1f03b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30976));
label_1f03b8:
    // 0x1f03b8: 0xa08a006b  sb          $t2, 0x6B($a0)
    ctx->pc = 0x1f03b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 107), (uint8_t)GPR_U32(ctx, 10));
label_1f03bc:
    // 0x1f03bc: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1f03bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1f03c0:
    // 0x1f03c0: 0xa4880120  sh          $t0, 0x120($a0)
    ctx->pc = 0x1f03c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 288), (uint16_t)GPR_U32(ctx, 8));
label_1f03c4:
    // 0x1f03c4: 0xa4870122  sh          $a3, 0x122($a0)
    ctx->pc = 0x1f03c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 290), (uint16_t)GPR_U32(ctx, 7));
label_1f03c8:
    // 0x1f03c8: 0xa4880130  sh          $t0, 0x130($a0)
    ctx->pc = 0x1f03c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 304), (uint16_t)GPR_U32(ctx, 8));
label_1f03cc:
    // 0x1f03cc: 0xa4850132  sh          $a1, 0x132($a0)
    ctx->pc = 0x1f03ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 306), (uint16_t)GPR_U32(ctx, 5));
label_1f03d0:
    // 0x1f03d0: 0xa4890140  sh          $t1, 0x140($a0)
    ctx->pc = 0x1f03d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 320), (uint16_t)GPR_U32(ctx, 9));
label_1f03d4:
    // 0x1f03d4: 0xa4860142  sh          $a2, 0x142($a0)
    ctx->pc = 0x1f03d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 322), (uint16_t)GPR_U32(ctx, 6));
label_1f03d8:
    // 0x1f03d8: 0xa4890150  sh          $t1, 0x150($a0)
    ctx->pc = 0x1f03d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 336), (uint16_t)GPR_U32(ctx, 9));
label_1f03dc:
    // 0x1f03dc: 0xa4830152  sh          $v1, 0x152($a0)
    ctx->pc = 0x1f03dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 338), (uint16_t)GPR_U32(ctx, 3));
label_1f03e0:
    // 0x1f03e0: 0xa08a012b  sb          $t2, 0x12B($a0)
    ctx->pc = 0x1f03e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 299), (uint8_t)GPR_U32(ctx, 10));
label_1f03e4:
    // 0x1f03e4: 0xa08a011b  sb          $t2, 0x11B($a0)
    ctx->pc = 0x1f03e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 283), (uint8_t)GPR_U32(ctx, 10));
label_1f03e8:
    // 0x1f03e8: 0xa48d01d0  sh          $t5, 0x1D0($a0)
    ctx->pc = 0x1f03e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 464), (uint16_t)GPR_U32(ctx, 13));
label_1f03ec:
    // 0x1f03ec: 0xa48501d2  sh          $a1, 0x1D2($a0)
    ctx->pc = 0x1f03ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 466), (uint16_t)GPR_U32(ctx, 5));
label_1f03f0:
    // 0x1f03f0: 0xa48801e0  sh          $t0, 0x1E0($a0)
    ctx->pc = 0x1f03f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 480), (uint16_t)GPR_U32(ctx, 8));
label_1f03f4:
    // 0x1f03f4: 0xa48501e2  sh          $a1, 0x1E2($a0)
    ctx->pc = 0x1f03f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 482), (uint16_t)GPR_U32(ctx, 5));
label_1f03f8:
    // 0x1f03f8: 0xa48e01f0  sh          $t6, 0x1F0($a0)
    ctx->pc = 0x1f03f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 496), (uint16_t)GPR_U32(ctx, 14));
label_1f03fc:
    // 0x1f03fc: 0xa48301f2  sh          $v1, 0x1F2($a0)
    ctx->pc = 0x1f03fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 498), (uint16_t)GPR_U32(ctx, 3));
label_1f0400:
    // 0x1f0400: 0xa4890200  sh          $t1, 0x200($a0)
    ctx->pc = 0x1f0400u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 512), (uint16_t)GPR_U32(ctx, 9));
label_1f0404:
    // 0x1f0404: 0xa4830202  sh          $v1, 0x202($a0)
    ctx->pc = 0x1f0404u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 514), (uint16_t)GPR_U32(ctx, 3));
label_1f0408:
    // 0x1f0408: 0xa08a01db  sb          $t2, 0x1DB($a0)
    ctx->pc = 0x1f0408u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 475), (uint8_t)GPR_U32(ctx, 10));
label_1f040c:
    // 0x1f040c: 0xa08a01cb  sb          $t2, 0x1CB($a0)
    ctx->pc = 0x1f040cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 459), (uint8_t)GPR_U32(ctx, 10));
label_1f0410:
    // 0x1f0410: 0xa48d0280  sh          $t5, 0x280($a0)
    ctx->pc = 0x1f0410u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 640), (uint16_t)GPR_U32(ctx, 13));
label_1f0414:
    // 0x1f0414: 0xa4850282  sh          $a1, 0x282($a0)
    ctx->pc = 0x1f0414u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 642), (uint16_t)GPR_U32(ctx, 5));
label_1f0418:
    // 0x1f0418: 0xa48d0290  sh          $t5, 0x290($a0)
    ctx->pc = 0x1f0418u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 656), (uint16_t)GPR_U32(ctx, 13));
label_1f041c:
    // 0x1f041c: 0xa4870292  sh          $a3, 0x292($a0)
    ctx->pc = 0x1f041cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 658), (uint16_t)GPR_U32(ctx, 7));
label_1f0420:
    // 0x1f0420: 0xa48e02a0  sh          $t6, 0x2A0($a0)
    ctx->pc = 0x1f0420u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 672), (uint16_t)GPR_U32(ctx, 14));
label_1f0424:
    // 0x1f0424: 0xa48302a2  sh          $v1, 0x2A2($a0)
    ctx->pc = 0x1f0424u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 674), (uint16_t)GPR_U32(ctx, 3));
label_1f0428:
    // 0x1f0428: 0xa48e02b0  sh          $t6, 0x2B0($a0)
    ctx->pc = 0x1f0428u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 688), (uint16_t)GPR_U32(ctx, 14));
label_1f042c:
    // 0x1f042c: 0xa48602b2  sh          $a2, 0x2B2($a0)
    ctx->pc = 0x1f042cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 690), (uint16_t)GPR_U32(ctx, 6));
label_1f0430:
    // 0x1f0430: 0xa08a028b  sb          $t2, 0x28B($a0)
    ctx->pc = 0x1f0430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 651), (uint8_t)GPR_U32(ctx, 10));
label_1f0434:
    // 0x1f0434: 0x3e00008  jr          $ra
label_1f0438:
    if (ctx->pc == 0x1F0438u) {
        ctx->pc = 0x1F0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0434u;
        // 0x1f0438: 0xa08a027b  sb          $t2, 0x27B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 635), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F043Cu;
        goto label_1f043c;
    }
    ctx->pc = 0x1F0434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0434u;
        // 0x1f0438: 0xa08a027b  sb          $t2, 0x27B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 635), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F043Cu;
label_1f043c:
    // 0x1f043c: 0x0  nop
    ctx->pc = 0x1f043cu;
    // NOP
label_1f0440:
    // 0x1f0440: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f0440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1f0444:
    // 0x1f0444: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f0444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1f0448:
    // 0x1f0448: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f0448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f044c:
    // 0x1f044c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f0450:
    // 0x1f0450: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1f0450u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f0454:
    // 0x1f0454: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f0454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f0458:
    // 0x1f0458: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1f0458u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f045c:
    // 0x1f045c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f045cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f0460:
    // 0x1f0460: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1f0460u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f0464:
    // 0x1f0464: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f0464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f0468:
    // 0x1f0468: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x1f0468u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1f046c:
    // 0x1f046c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f046cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f0470:
    // 0x1f0470: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f0470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f0474:
    // 0x1f0474: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f0474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f0478:
    // 0x1f0478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f0478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f047c:
    // 0x1f047c: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x1f047cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f0480:
    // 0x1f0480: 0x8fb400b0  lw          $s4, 0xB0($sp)
    ctx->pc = 0x1f0480u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1f0484:
    // 0x1f0484: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f0484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0488:
    // 0x1f0488: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x1f0488u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1f048c:
    // 0x1f048c: 0x8fb200c0  lw          $s2, 0xC0($sp)
    ctx->pc = 0x1f048cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1f0490:
    // 0x1f0490: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x1f0490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
label_1f0494:
    // 0x1f0494: 0xafa800a8  sw          $t0, 0xA8($sp)
    ctx->pc = 0x1f0494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 8));
label_1f0498:
    // 0x1f0498: 0xafa900a4  sw          $t1, 0xA4($sp)
    ctx->pc = 0x1f0498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 9));
label_1f049c:
    // 0x1f049c: 0xafaa00a0  sw          $t2, 0xA0($sp)
    ctx->pc = 0x1f049cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 10));
label_1f04a0:
    // 0x1f04a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f04a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f04a4:
    // 0x1f04a4: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1f04a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f04a8:
    // 0x1f04a8: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1f04a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f04ac:
    // 0x1f04ac: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1f04acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f04b0:
    // 0x1f04b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f04b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f04b4:
    // 0x1f04b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f04b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f04b8:
    // 0x1f04b8: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1f04b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f04bc:
    // 0x1f04bc: 0xc05e060  jal         func_178180
label_1f04c0:
    if (ctx->pc == 0x1F04C0u) {
        ctx->pc = 0x1F04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04BCu;
        // 0x1f04c0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F04C4u;
        goto label_1f04c4;
    }
    ctx->pc = 0x1F04BCu;
    SET_GPR_U32(ctx, 31, 0x1F04C4u);
    ctx->pc = 0x1F04C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F04BCu;
    // 0x1f04c0: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1F04BCu, 0x1F04C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F04C4u;
label_1f04c4:
    // 0x1f04c4: 0xa2350068  sb          $s5, 0x68($s1)
    ctx->pc = 0x1f04c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 21));
label_1f04c8:
    // 0x1f04c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f04c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1f04cc:
    // 0x1f04cc: 0xa2340069  sb          $s4, 0x69($s1)
    ctx->pc = 0x1f04ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 20));
label_1f04d0:
    // 0x1f04d0: 0xa233006a  sb          $s3, 0x6A($s1)
    ctx->pc = 0x1f04d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 19));
label_1f04d4:
    // 0x1f04d4: 0xa232006b  sb          $s2, 0x6B($s1)
    ctx->pc = 0x1f04d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 18));
label_1f04d8:
    // 0x1f04d8: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1f04d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_1f04dc:
    // 0x1f04dc: 0xa2350078  sb          $s5, 0x78($s1)
    ctx->pc = 0x1f04dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 21));
label_1f04e0:
    // 0x1f04e0: 0xa2340079  sb          $s4, 0x79($s1)
    ctx->pc = 0x1f04e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 20));
label_1f04e4:
    // 0x1f04e4: 0xa233007a  sb          $s3, 0x7A($s1)
    ctx->pc = 0x1f04e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 19));
label_1f04e8:
    // 0x1f04e8: 0xa232007b  sb          $s2, 0x7B($s1)
    ctx->pc = 0x1f04e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 18));
label_1f04ec:
    // 0x1f04ec: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x1f04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
label_1f04f0:
    // 0x1f04f0: 0xa2350088  sb          $s5, 0x88($s1)
    ctx->pc = 0x1f04f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 21));
label_1f04f4:
    // 0x1f04f4: 0xa2340089  sb          $s4, 0x89($s1)
    ctx->pc = 0x1f04f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 20));
label_1f04f8:
    // 0x1f04f8: 0xa233008a  sb          $s3, 0x8A($s1)
    ctx->pc = 0x1f04f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 19));
label_1f04fc:
    // 0x1f04fc: 0xa232008b  sb          $s2, 0x8B($s1)
    ctx->pc = 0x1f04fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 18));
label_1f0500:
    // 0x1f0500: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x1f0500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_1f0504:
    // 0x1f0504: 0xa2350098  sb          $s5, 0x98($s1)
    ctx->pc = 0x1f0504u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 152), (uint8_t)GPR_U32(ctx, 21));
label_1f0508:
    // 0x1f0508: 0xa2340099  sb          $s4, 0x99($s1)
    ctx->pc = 0x1f0508u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 153), (uint8_t)GPR_U32(ctx, 20));
label_1f050c:
    // 0x1f050c: 0xa233009a  sb          $s3, 0x9A($s1)
    ctx->pc = 0x1f050cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 154), (uint8_t)GPR_U32(ctx, 19));
label_1f0510:
    // 0x1f0510: 0xa232009b  sb          $s2, 0x9B($s1)
    ctx->pc = 0x1f0510u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 18));
label_1f0514:
    // 0x1f0514: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_1f0518:
    if (ctx->pc == 0x1F0518u) {
        ctx->pc = 0x1F0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0514u;
        // 0x1f0518: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F051Cu;
        goto label_1f051c;
    }
    ctx->pc = 0x1F0514u;
    {
        const bool branch_taken_0x1f0514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0514u;
        // 0x1f0518: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0514) {
            ctx->pc = 0x1F0588u;
            goto label_1f0588;
        }
    }
    ctx->pc = 0x1F051Cu;
label_1f051c:
    // 0x1f051c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f0520:
    // 0x1f0520: 0x12020016  beq         $s0, $v0, . + 4 + (0x16 << 2)
label_1f0524:
    if (ctx->pc == 0x1F0524u) {
        ctx->pc = 0x1F0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0520u;
        // 0x1f0524: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0528u;
        goto label_1f0528;
    }
    ctx->pc = 0x1F0520u;
    {
        const bool branch_taken_0x1f0520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0520u;
        // 0x1f0524: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0520) {
            ctx->pc = 0x1F057Cu;
            goto label_1f057c;
        }
    }
    ctx->pc = 0x1F0528u;
label_1f0528:
    // 0x1f0528: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
label_1f052c:
    if (ctx->pc == 0x1F052Cu) {
        ctx->pc = 0x1F0530u;
        goto label_1f0530;
    }
    ctx->pc = 0x1F0528u;
    {
        const bool branch_taken_0x1f0528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0528) {
            ctx->pc = 0x1F056Cu;
            goto label_1f056c;
        }
    }
    ctx->pc = 0x1F0530u;
label_1f0530:
    // 0x1f0530: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f0530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f0534:
    // 0x1f0534: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
label_1f0538:
    if (ctx->pc == 0x1F0538u) {
        ctx->pc = 0x1F0538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0534u;
        // 0x1f0538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F053Cu;
        goto label_1f053c;
    }
    ctx->pc = 0x1F0534u;
    {
        const bool branch_taken_0x1f0534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0534u;
        // 0x1f0538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0534) {
            ctx->pc = 0x1F055Cu;
            goto label_1f055c;
        }
    }
    ctx->pc = 0x1F053Cu;
label_1f053c:
    // 0x1f053c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_1f0540:
    if (ctx->pc == 0x1F0540u) {
        ctx->pc = 0x1F0544u;
        goto label_1f0544;
    }
    ctx->pc = 0x1F053Cu;
    {
        const bool branch_taken_0x1f053c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f053c) {
            ctx->pc = 0x1F054Cu;
            goto label_1f054c;
        }
    }
    ctx->pc = 0x1F0544u;
label_1f0544:
    // 0x1f0544: 0x10000010  b           . + 4 + (0x10 << 2)
label_1f0548:
    if (ctx->pc == 0x1F0548u) {
        ctx->pc = 0x1F054Cu;
        goto label_1f054c;
    }
    ctx->pc = 0x1F0544u;
    {
        const bool branch_taken_0x1f0544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0544) {
            ctx->pc = 0x1F0588u;
            goto label_1f0588;
        }
    }
    ctx->pc = 0x1F054Cu;
label_1f054c:
    // 0x1f054c: 0x0  nop
    ctx->pc = 0x1f054cu;
    // NOP
label_1f0550:
    // 0x1f0550: 0xa220009b  sb          $zero, 0x9B($s1)
    ctx->pc = 0x1f0550u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 0));
label_1f0554:
    // 0x1f0554: 0x1000000c  b           . + 4 + (0xC << 2)
label_1f0558:
    if (ctx->pc == 0x1F0558u) {
        ctx->pc = 0x1F0558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0554u;
        // 0x1f0558: 0xa220008b  sb          $zero, 0x8B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F055Cu;
        goto label_1f055c;
    }
    ctx->pc = 0x1F0554u;
    {
        const bool branch_taken_0x1f0554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0554u;
        // 0x1f0558: 0xa220008b  sb          $zero, 0x8B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0554) {
            ctx->pc = 0x1F0588u;
            goto label_1f0588;
        }
    }
    ctx->pc = 0x1F055Cu;
label_1f055c:
    // 0x1f055c: 0x0  nop
    ctx->pc = 0x1f055cu;
    // NOP
label_1f0560:
    // 0x1f0560: 0xa220009b  sb          $zero, 0x9B($s1)
    ctx->pc = 0x1f0560u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 0));
label_1f0564:
    // 0x1f0564: 0x10000008  b           . + 4 + (0x8 << 2)
label_1f0568:
    if (ctx->pc == 0x1F0568u) {
        ctx->pc = 0x1F0568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0564u;
        // 0x1f0568: 0xa220007b  sb          $zero, 0x7B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F056Cu;
        goto label_1f056c;
    }
    ctx->pc = 0x1F0564u;
    {
        const bool branch_taken_0x1f0564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0564u;
        // 0x1f0568: 0xa220007b  sb          $zero, 0x7B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0564) {
            ctx->pc = 0x1F0588u;
            goto label_1f0588;
        }
    }
    ctx->pc = 0x1F056Cu;
label_1f056c:
    // 0x1f056c: 0x0  nop
    ctx->pc = 0x1f056cu;
    // NOP
label_1f0570:
    // 0x1f0570: 0xa220007b  sb          $zero, 0x7B($s1)
    ctx->pc = 0x1f0570u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 0));
label_1f0574:
    // 0x1f0574: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f0578:
    if (ctx->pc == 0x1F0578u) {
        ctx->pc = 0x1F0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0574u;
        // 0x1f0578: 0xa220006b  sb          $zero, 0x6B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F057Cu;
        goto label_1f057c;
    }
    ctx->pc = 0x1F0574u;
    {
        const bool branch_taken_0x1f0574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0574u;
        // 0x1f0578: 0xa220006b  sb          $zero, 0x6B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0574) {
            ctx->pc = 0x1F0588u;
            goto label_1f0588;
        }
    }
    ctx->pc = 0x1F057Cu;
label_1f057c:
    // 0x1f057c: 0x0  nop
    ctx->pc = 0x1f057cu;
    // NOP
label_1f0580:
    // 0x1f0580: 0xa220008b  sb          $zero, 0x8B($s1)
    ctx->pc = 0x1f0580u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 0));
label_1f0584:
    // 0x1f0584: 0xa220006b  sb          $zero, 0x6B($s1)
    ctx->pc = 0x1f0584u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
label_1f0588:
    // 0x1f0588: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f0588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f058c:
    // 0x1f058c: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1f058cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_1f0590:
    // 0x1f0590: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_1f0594:
    if (ctx->pc == 0x1F0594u) {
        ctx->pc = 0x1F0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0590u;
        // 0x1f0594: 0x263100b0  addiu       $s1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0598u;
        goto label_1f0598;
    }
    ctx->pc = 0x1F0590u;
    {
        const bool branch_taken_0x1f0590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0590u;
        // 0x1f0594: 0x263100b0  addiu       $s1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0590) {
            ctx->pc = 0x1F04A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f04a0;
        }
    }
    ctx->pc = 0x1F0598u;
label_1f0598:
    // 0x1f0598: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x1f0598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1f059c:
    // 0x1f059c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1f059cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f05a0:
    // 0x1f05a0: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x1f05a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1f05a4:
    // 0x1f05a4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1f05a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f05a8:
    // 0x1f05a8: 0x8fa800a4  lw          $t0, 0xA4($sp)
    ctx->pc = 0x1f05a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1f05ac:
    // 0x1f05ac: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x1f05acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1f05b0:
    // 0x1f05b0: 0xc07c17c  jal         func_1F05F0
label_1f05b4:
    if (ctx->pc == 0x1F05B4u) {
        ctx->pc = 0x1F05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F05B0u;
        // 0x1f05b4: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F05B8u;
        goto label_1f05b8;
    }
    ctx->pc = 0x1F05B0u;
    SET_GPR_U32(ctx, 31, 0x1F05B8u);
    ctx->pc = 0x1F05B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05B0u;
    // 0x1f05b4: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F05F0u;
    goto label_1f05f0;
    ctx->pc = 0x1F05B8u;
label_1f05b8:
    // 0x1f05b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f05b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1f05bc:
    // 0x1f05bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f05bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f05c0:
    // 0x1f05c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f05c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f05c4:
    // 0x1f05c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f05c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f05c8:
    // 0x1f05c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f05c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f05cc:
    // 0x1f05cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f05ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f05d0:
    // 0x1f05d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f05d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f05d4:
    // 0x1f05d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f05d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f05d8:
    // 0x1f05d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f05d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f05dc:
    // 0x1f05dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f05dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f05e0:
    // 0x1f05e0: 0x3e00008  jr          $ra
label_1f05e4:
    if (ctx->pc == 0x1F05E4u) {
        ctx->pc = 0x1F05E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F05E0u;
        // 0x1f05e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F05E8u;
        goto label_1f05e8;
    }
    ctx->pc = 0x1F05E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F05E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F05E0u;
        // 0x1f05e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F05E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F05E8u;
label_1f05e8:
    // 0x1f05e8: 0x0  nop
    ctx->pc = 0x1f05e8u;
    // NOP
label_1f05ec:
    // 0x1f05ec: 0x0  nop
    ctx->pc = 0x1f05ecu;
    // NOP
label_1f05f0:
    // 0x1f05f0: 0xa76021  addu        $t4, $a1, $a3
    ctx->pc = 0x1f05f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1f05f4:
    // 0x1f05f4: 0xa91823  subu        $v1, $a1, $t1
    ctx->pc = 0x1f05f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1f05f8:
    // 0x1f05f8: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x1f05f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f05fc:
    // 0x1f05fc: 0xc85821  addu        $t3, $a2, $t0
    ctx->pc = 0x1f05fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1f0600:
    // 0x1f0600: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1f0600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1f0604:
    // 0x1f0604: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f0608:
    // 0x1f0608: 0x24656c00  addiu       $a1, $v1, 0x6C00
    ctx->pc = 0x1f0608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1f060c:
    // 0x1f060c: 0x24e76c00  addiu       $a3, $a3, 0x6C00
    ctx->pc = 0x1f060cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
label_1f0610:
    // 0x1f0610: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x1f0610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1f0614:
    // 0x1f0614: 0xc4100  sll         $t0, $t4, 4
    ctx->pc = 0x1f0614u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_1f0618:
    // 0x1f0618: 0x12c3821  addu        $a3, $t1, $t4
    ctx->pc = 0x1f0618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_1f061c:
    // 0x1f061c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f061cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f0620:
    // 0x1f0620: 0x250c6c00  addiu       $t4, $t0, 0x6C00
    ctx->pc = 0x1f0620u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 27648));
label_1f0624:
    // 0x1f0624: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1f0624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1f0628:
    // 0x1f0628: 0x74100  sll         $t0, $a3, 4
    ctx->pc = 0x1f0628u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1f062c:
    // 0x1f062c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1f062cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0630:
    // 0x1f0630: 0x3187ffff  andi        $a3, $t4, 0xFFFF
    ctx->pc = 0x1f0630u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
label_1f0634:
    // 0x1f0634: 0x25086c00  addiu       $t0, $t0, 0x6C00
    ctx->pc = 0x1f0634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27648));
label_1f0638:
    // 0x1f0638: 0xc96023  subu        $t4, $a2, $t1
    ctx->pc = 0x1f0638u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1f063c:
    // 0x1f063c: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x1f063cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_1f0640:
    // 0x1f0640: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1f0640u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1f0644:
    // 0x1f0644: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x1f0644u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_1f0648:
    // 0x1f0648: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x1f0648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
label_1f064c:
    // 0x1f064c: 0x258c7900  addiu       $t4, $t4, 0x7900
    ctx->pc = 0x1f064cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 30976));
label_1f0650:
    // 0x1f0650: 0x30d8ffff  andi        $t8, $a2, 0xFFFF
    ctx->pc = 0x1f0650u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_1f0654:
    // 0x1f0654: 0x318fffff  andi        $t7, $t4, 0xFFFF
    ctx->pc = 0x1f0654u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
label_1f0658:
    // 0x1f0658: 0x12b3021  addu        $a2, $t1, $t3
    ctx->pc = 0x1f0658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_1f065c:
    // 0x1f065c: 0xb48c0  sll         $t1, $t3, 3
    ctx->pc = 0x1f065cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_1f0660:
    // 0x1f0660: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1f0660u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1f0664:
    // 0x1f0664: 0x25297900  addiu       $t1, $t1, 0x7900
    ctx->pc = 0x1f0664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30976));
label_1f0668:
    // 0x1f0668: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x1f0668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
label_1f066c:
    // 0x1f066c: 0x3139ffff  andi        $t9, $t1, 0xFFFF
    ctx->pc = 0x1f066cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_1f0670:
    // 0x1f0670: 0x30d0ffff  andi        $s0, $a2, 0xFFFF
    ctx->pc = 0x1f0670u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_1f0674:
    // 0x1f0674: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f0674u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0678:
    // 0x1f0678: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x1f0678u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f067c:
    // 0x1f067c: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x1f067cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f0680:
    // 0x1f0680: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x1f0680u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f0684:
    // 0x1f0684: 0x11cd003d  beq         $t6, $t5, . + 4 + (0x3D << 2)
label_1f0688:
    if (ctx->pc == 0x1F0688u) {
        ctx->pc = 0x1F068Cu;
        goto label_1f068c;
    }
    ctx->pc = 0x1F0684u;
    {
        const bool branch_taken_0x1f0684 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 13));
        if (branch_taken_0x1f0684) {
            ctx->pc = 0x1F077Cu;
            goto label_1f077c;
        }
    }
    ctx->pc = 0x1F068Cu;
label_1f068c:
    // 0x1f068c: 0x11cc002f  beq         $t6, $t4, . + 4 + (0x2F << 2)
label_1f0690:
    if (ctx->pc == 0x1F0690u) {
        ctx->pc = 0x1F0694u;
        goto label_1f0694;
    }
    ctx->pc = 0x1F068Cu;
    {
        const bool branch_taken_0x1f068c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 12));
        if (branch_taken_0x1f068c) {
            ctx->pc = 0x1F074Cu;
            goto label_1f074c;
        }
    }
    ctx->pc = 0x1F0694u;
label_1f0694:
    // 0x1f0694: 0x11cb0021  beq         $t6, $t3, . + 4 + (0x21 << 2)
label_1f0698:
    if (ctx->pc == 0x1F0698u) {
        ctx->pc = 0x1F069Cu;
        goto label_1f069c;
    }
    ctx->pc = 0x1F0694u;
    {
        const bool branch_taken_0x1f0694 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 11));
        if (branch_taken_0x1f0694) {
            ctx->pc = 0x1F071Cu;
            goto label_1f071c;
        }
    }
    ctx->pc = 0x1F069Cu;
label_1f069c:
    // 0x1f069c: 0x11c90013  beq         $t6, $t1, . + 4 + (0x13 << 2)
label_1f06a0:
    if (ctx->pc == 0x1F06A0u) {
        ctx->pc = 0x1F06A4u;
        goto label_1f06a4;
    }
    ctx->pc = 0x1F069Cu;
    {
        const bool branch_taken_0x1f069c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 9));
        if (branch_taken_0x1f069c) {
            ctx->pc = 0x1F06ECu;
            goto label_1f06ec;
        }
    }
    ctx->pc = 0x1F06A4u;
label_1f06a4:
    // 0x1f06a4: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
label_1f06a8:
    if (ctx->pc == 0x1F06A8u) {
        ctx->pc = 0x1F06ACu;
        goto label_1f06ac;
    }
    ctx->pc = 0x1F06A4u;
    {
        const bool branch_taken_0x1f06a4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f06a4) {
            ctx->pc = 0x1F06B4u;
            goto label_1f06b4;
        }
    }
    ctx->pc = 0x1F06ACu;
label_1f06ac:
    // 0x1f06ac: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1f06b0:
    if (ctx->pc == 0x1F06B0u) {
        ctx->pc = 0x1F06B4u;
        goto label_1f06b4;
    }
    ctx->pc = 0x1F06ACu;
    {
        const bool branch_taken_0x1f06ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f06ac) {
            ctx->pc = 0x1F07A8u;
            goto label_1f07a8;
        }
    }
    ctx->pc = 0x1F06B4u;
label_1f06b4:
    // 0x1f06b4: 0x0  nop
    ctx->pc = 0x1f06b4u;
    // NOP
label_1f06b8:
    // 0x1f06b8: 0xa4850090  sh          $a1, 0x90($a0)
    ctx->pc = 0x1f06b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 5));
label_1f06bc:
    // 0x1f06bc: 0xa4850070  sh          $a1, 0x70($a0)
    ctx->pc = 0x1f06bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 5));
label_1f06c0:
    // 0x1f06c0: 0xa48700a0  sh          $a3, 0xA0($a0)
    ctx->pc = 0x1f06c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 7));
label_1f06c4:
    // 0x1f06c4: 0xa4870080  sh          $a3, 0x80($a0)
    ctx->pc = 0x1f06c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 7));
label_1f06c8:
    // 0x1f06c8: 0xa4980082  sh          $t8, 0x82($a0)
    ctx->pc = 0x1f06c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 24));
label_1f06cc:
    // 0x1f06cc: 0xa4980072  sh          $t8, 0x72($a0)
    ctx->pc = 0x1f06ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 24));
label_1f06d0:
    // 0x1f06d0: 0xa49900a2  sh          $t9, 0xA2($a0)
    ctx->pc = 0x1f06d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 25));
label_1f06d4:
    // 0x1f06d4: 0xa4990092  sh          $t9, 0x92($a0)
    ctx->pc = 0x1f06d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 146), (uint16_t)GPR_U32(ctx, 25));
label_1f06d8:
    // 0x1f06d8: 0xa08a009b  sb          $t2, 0x9B($a0)
    ctx->pc = 0x1f06d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 155), (uint8_t)GPR_U32(ctx, 10));
label_1f06dc:
    // 0x1f06dc: 0xa08a008b  sb          $t2, 0x8B($a0)
    ctx->pc = 0x1f06dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 139), (uint8_t)GPR_U32(ctx, 10));
label_1f06e0:
    // 0x1f06e0: 0xa08a007b  sb          $t2, 0x7B($a0)
    ctx->pc = 0x1f06e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 10));
label_1f06e4:
    // 0x1f06e4: 0x10000030  b           . + 4 + (0x30 << 2)
label_1f06e8:
    if (ctx->pc == 0x1F06E8u) {
        ctx->pc = 0x1F06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F06E4u;
        // 0x1f06e8: 0xa08a006b  sb          $t2, 0x6B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 107), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F06ECu;
        goto label_1f06ec;
    }
    ctx->pc = 0x1F06E4u;
    {
        const bool branch_taken_0x1f06e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F06E4u;
        // 0x1f06e8: 0xa08a006b  sb          $t2, 0x6B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 107), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f06e4) {
            ctx->pc = 0x1F07A8u;
            goto label_1f07a8;
        }
    }
    ctx->pc = 0x1F06ECu;
label_1f06ec:
    // 0x1f06ec: 0x0  nop
    ctx->pc = 0x1f06ecu;
    // NOP
label_1f06f0:
    // 0x1f06f0: 0xa4850070  sh          $a1, 0x70($a0)
    ctx->pc = 0x1f06f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 5));
label_1f06f4:
    // 0x1f06f4: 0xa4870080  sh          $a3, 0x80($a0)
    ctx->pc = 0x1f06f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 7));
label_1f06f8:
    // 0x1f06f8: 0xa4830090  sh          $v1, 0x90($a0)
    ctx->pc = 0x1f06f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
label_1f06fc:
    // 0x1f06fc: 0xa48800a0  sh          $t0, 0xA0($a0)
    ctx->pc = 0x1f06fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 8));
label_1f0700:
    // 0x1f0700: 0xa4980082  sh          $t8, 0x82($a0)
    ctx->pc = 0x1f0700u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 24));
label_1f0704:
    // 0x1f0704: 0xa4980072  sh          $t8, 0x72($a0)
    ctx->pc = 0x1f0704u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 24));
label_1f0708:
    // 0x1f0708: 0xa48f00a2  sh          $t7, 0xA2($a0)
    ctx->pc = 0x1f0708u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 15));
label_1f070c:
    // 0x1f070c: 0xa48f0092  sh          $t7, 0x92($a0)
    ctx->pc = 0x1f070cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 146), (uint16_t)GPR_U32(ctx, 15));
label_1f0710:
    // 0x1f0710: 0xa08a007b  sb          $t2, 0x7B($a0)
    ctx->pc = 0x1f0710u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 10));
label_1f0714:
    // 0x1f0714: 0x10000024  b           . + 4 + (0x24 << 2)
label_1f0718:
    if (ctx->pc == 0x1F0718u) {
        ctx->pc = 0x1F0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0714u;
        // 0x1f0718: 0xa08a006b  sb          $t2, 0x6B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 107), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F071Cu;
        goto label_1f071c;
    }
    ctx->pc = 0x1F0714u;
    {
        const bool branch_taken_0x1f0714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0714u;
        // 0x1f0718: 0xa08a006b  sb          $t2, 0x6B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 107), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0714) {
            ctx->pc = 0x1F07A8u;
            goto label_1f07a8;
        }
    }
    ctx->pc = 0x1F071Cu;
label_1f071c:
    // 0x1f071c: 0x0  nop
    ctx->pc = 0x1f071cu;
    // NOP
label_1f0720:
    // 0x1f0720: 0xa4850090  sh          $a1, 0x90($a0)
    ctx->pc = 0x1f0720u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 5));
label_1f0724:
    // 0x1f0724: 0xa4850070  sh          $a1, 0x70($a0)
    ctx->pc = 0x1f0724u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 5));
label_1f0728:
    // 0x1f0728: 0xa48300a0  sh          $v1, 0xA0($a0)
    ctx->pc = 0x1f0728u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 3));
label_1f072c:
    // 0x1f072c: 0xa4830080  sh          $v1, 0x80($a0)
    ctx->pc = 0x1f072cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 3));
label_1f0730:
    // 0x1f0730: 0xa4980072  sh          $t8, 0x72($a0)
    ctx->pc = 0x1f0730u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 24));
label_1f0734:
    // 0x1f0734: 0xa48f0082  sh          $t7, 0x82($a0)
    ctx->pc = 0x1f0734u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 15));
label_1f0738:
    // 0x1f0738: 0xa4990092  sh          $t9, 0x92($a0)
    ctx->pc = 0x1f0738u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 146), (uint16_t)GPR_U32(ctx, 25));
label_1f073c:
    // 0x1f073c: 0xa49000a2  sh          $s0, 0xA2($a0)
    ctx->pc = 0x1f073cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 16));
label_1f0740:
    // 0x1f0740: 0xa08a008b  sb          $t2, 0x8B($a0)
    ctx->pc = 0x1f0740u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 139), (uint8_t)GPR_U32(ctx, 10));
label_1f0744:
    // 0x1f0744: 0x10000018  b           . + 4 + (0x18 << 2)
label_1f0748:
    if (ctx->pc == 0x1F0748u) {
        ctx->pc = 0x1F0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0744u;
        // 0x1f0748: 0xa08a006b  sb          $t2, 0x6B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 107), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F074Cu;
        goto label_1f074c;
    }
    ctx->pc = 0x1F0744u;
    {
        const bool branch_taken_0x1f0744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0744u;
        // 0x1f0748: 0xa08a006b  sb          $t2, 0x6B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 107), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0744) {
            ctx->pc = 0x1F07A8u;
            goto label_1f07a8;
        }
    }
    ctx->pc = 0x1F074Cu;
label_1f074c:
    // 0x1f074c: 0x0  nop
    ctx->pc = 0x1f074cu;
    // NOP
label_1f0750:
    // 0x1f0750: 0xa4830070  sh          $v1, 0x70($a0)
    ctx->pc = 0x1f0750u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 3));
label_1f0754:
    // 0x1f0754: 0xa4880080  sh          $t0, 0x80($a0)
    ctx->pc = 0x1f0754u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 8));
label_1f0758:
    // 0x1f0758: 0xa4850090  sh          $a1, 0x90($a0)
    ctx->pc = 0x1f0758u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 5));
label_1f075c:
    // 0x1f075c: 0xa48700a0  sh          $a3, 0xA0($a0)
    ctx->pc = 0x1f075cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 7));
label_1f0760:
    // 0x1f0760: 0xa4900082  sh          $s0, 0x82($a0)
    ctx->pc = 0x1f0760u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 16));
label_1f0764:
    // 0x1f0764: 0xa4900072  sh          $s0, 0x72($a0)
    ctx->pc = 0x1f0764u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 16));
label_1f0768:
    // 0x1f0768: 0xa49900a2  sh          $t9, 0xA2($a0)
    ctx->pc = 0x1f0768u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 25));
label_1f076c:
    // 0x1f076c: 0xa4990092  sh          $t9, 0x92($a0)
    ctx->pc = 0x1f076cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 146), (uint16_t)GPR_U32(ctx, 25));
label_1f0770:
    // 0x1f0770: 0xa08a009b  sb          $t2, 0x9B($a0)
    ctx->pc = 0x1f0770u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 155), (uint8_t)GPR_U32(ctx, 10));
label_1f0774:
    // 0x1f0774: 0x1000000c  b           . + 4 + (0xC << 2)
label_1f0778:
    if (ctx->pc == 0x1F0778u) {
        ctx->pc = 0x1F0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0774u;
        // 0x1f0778: 0xa08a008b  sb          $t2, 0x8B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 139), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F077Cu;
        goto label_1f077c;
    }
    ctx->pc = 0x1F0774u;
    {
        const bool branch_taken_0x1f0774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0774u;
        // 0x1f0778: 0xa08a008b  sb          $t2, 0x8B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 139), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0774) {
            ctx->pc = 0x1F07A8u;
            goto label_1f07a8;
        }
    }
    ctx->pc = 0x1F077Cu;
label_1f077c:
    // 0x1f077c: 0x0  nop
    ctx->pc = 0x1f077cu;
    // NOP
label_1f0780:
    // 0x1f0780: 0xa4880090  sh          $t0, 0x90($a0)
    ctx->pc = 0x1f0780u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 8));
label_1f0784:
    // 0x1f0784: 0xa4880070  sh          $t0, 0x70($a0)
    ctx->pc = 0x1f0784u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 8));
label_1f0788:
    // 0x1f0788: 0xa4870080  sh          $a3, 0x80($a0)
    ctx->pc = 0x1f0788u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 7));
label_1f078c:
    // 0x1f078c: 0xa48700a0  sh          $a3, 0xA0($a0)
    ctx->pc = 0x1f078cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 7));
label_1f0790:
    // 0x1f0790: 0xa48f0072  sh          $t7, 0x72($a0)
    ctx->pc = 0x1f0790u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 15));
label_1f0794:
    // 0x1f0794: 0xa4980082  sh          $t8, 0x82($a0)
    ctx->pc = 0x1f0794u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 24));
label_1f0798:
    // 0x1f0798: 0xa4900092  sh          $s0, 0x92($a0)
    ctx->pc = 0x1f0798u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 146), (uint16_t)GPR_U32(ctx, 16));
label_1f079c:
    // 0x1f079c: 0xa49900a2  sh          $t9, 0xA2($a0)
    ctx->pc = 0x1f079cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 25));
label_1f07a0:
    // 0x1f07a0: 0xa08a009b  sb          $t2, 0x9B($a0)
    ctx->pc = 0x1f07a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 155), (uint8_t)GPR_U32(ctx, 10));
label_1f07a4:
    // 0x1f07a4: 0xa08a007b  sb          $t2, 0x7B($a0)
    ctx->pc = 0x1f07a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 10));
label_1f07a8:
    // 0x1f07a8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1f07a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_1f07ac:
    // 0x1f07ac: 0x29c60005  slti        $a2, $t6, 0x5
    ctx->pc = 0x1f07acu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)5) ? 1 : 0);
    ctx->pc = 0x1f07b0u;
    return;
}

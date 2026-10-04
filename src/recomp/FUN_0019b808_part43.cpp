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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part43(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b0028u: goto label_1b0028;
        case 0x1b002cu: goto label_1b002c;
        case 0x1b0030u: goto label_1b0030;
        case 0x1b0034u: goto label_1b0034;
        case 0x1b0038u: goto label_1b0038;
        case 0x1b003cu: goto label_1b003c;
        case 0x1b0040u: goto label_1b0040;
        case 0x1b0044u: goto label_1b0044;
        case 0x1b0048u: goto label_1b0048;
        case 0x1b004cu: goto label_1b004c;
        case 0x1b0050u: goto label_1b0050;
        case 0x1b0054u: goto label_1b0054;
        case 0x1b0058u: goto label_1b0058;
        case 0x1b005cu: goto label_1b005c;
        case 0x1b0060u: goto label_1b0060;
        case 0x1b0064u: goto label_1b0064;
        case 0x1b0068u: goto label_1b0068;
        case 0x1b006cu: goto label_1b006c;
        case 0x1b0070u: goto label_1b0070;
        case 0x1b0074u: goto label_1b0074;
        case 0x1b0078u: goto label_1b0078;
        case 0x1b007cu: goto label_1b007c;
        case 0x1b0080u: goto label_1b0080;
        case 0x1b0084u: goto label_1b0084;
        case 0x1b0088u: goto label_1b0088;
        case 0x1b008cu: goto label_1b008c;
        case 0x1b0090u: goto label_1b0090;
        case 0x1b0094u: goto label_1b0094;
        case 0x1b0098u: goto label_1b0098;
        case 0x1b009cu: goto label_1b009c;
        case 0x1b00a0u: goto label_1b00a0;
        case 0x1b00a4u: goto label_1b00a4;
        case 0x1b00a8u: goto label_1b00a8;
        case 0x1b00acu: goto label_1b00ac;
        case 0x1b00b0u: goto label_1b00b0;
        case 0x1b00b4u: goto label_1b00b4;
        case 0x1b00b8u: goto label_1b00b8;
        case 0x1b00bcu: goto label_1b00bc;
        case 0x1b00c0u: goto label_1b00c0;
        case 0x1b00c4u: goto label_1b00c4;
        case 0x1b00c8u: goto label_1b00c8;
        case 0x1b00ccu: goto label_1b00cc;
        case 0x1b00d0u: goto label_1b00d0;
        case 0x1b00d4u: goto label_1b00d4;
        case 0x1b00d8u: goto label_1b00d8;
        case 0x1b00dcu: goto label_1b00dc;
        case 0x1b00e0u: goto label_1b00e0;
        case 0x1b00e4u: goto label_1b00e4;
        case 0x1b00e8u: goto label_1b00e8;
        case 0x1b00ecu: goto label_1b00ec;
        case 0x1b00f0u: goto label_1b00f0;
        case 0x1b00f4u: goto label_1b00f4;
        case 0x1b00f8u: goto label_1b00f8;
        case 0x1b00fcu: goto label_1b00fc;
        case 0x1b0100u: goto label_1b0100;
        case 0x1b0104u: goto label_1b0104;
        case 0x1b0108u: goto label_1b0108;
        case 0x1b010cu: goto label_1b010c;
        case 0x1b0110u: goto label_1b0110;
        case 0x1b0114u: goto label_1b0114;
        case 0x1b0118u: goto label_1b0118;
        case 0x1b011cu: goto label_1b011c;
        case 0x1b0120u: goto label_1b0120;
        case 0x1b0124u: goto label_1b0124;
        case 0x1b0128u: goto label_1b0128;
        case 0x1b012cu: goto label_1b012c;
        case 0x1b0130u: goto label_1b0130;
        case 0x1b0134u: goto label_1b0134;
        case 0x1b0138u: goto label_1b0138;
        case 0x1b013cu: goto label_1b013c;
        case 0x1b0140u: goto label_1b0140;
        case 0x1b0144u: goto label_1b0144;
        case 0x1b0148u: goto label_1b0148;
        case 0x1b014cu: goto label_1b014c;
        case 0x1b0150u: goto label_1b0150;
        case 0x1b0154u: goto label_1b0154;
        case 0x1b0158u: goto label_1b0158;
        case 0x1b015cu: goto label_1b015c;
        case 0x1b0160u: goto label_1b0160;
        case 0x1b0164u: goto label_1b0164;
        case 0x1b0168u: goto label_1b0168;
        case 0x1b016cu: goto label_1b016c;
        case 0x1b0170u: goto label_1b0170;
        case 0x1b0174u: goto label_1b0174;
        case 0x1b0178u: goto label_1b0178;
        case 0x1b017cu: goto label_1b017c;
        case 0x1b0180u: goto label_1b0180;
        case 0x1b0184u: goto label_1b0184;
        case 0x1b0188u: goto label_1b0188;
        case 0x1b018cu: goto label_1b018c;
        case 0x1b0190u: goto label_1b0190;
        case 0x1b0194u: goto label_1b0194;
        case 0x1b0198u: goto label_1b0198;
        case 0x1b019cu: goto label_1b019c;
        case 0x1b01a0u: goto label_1b01a0;
        case 0x1b01a4u: goto label_1b01a4;
        case 0x1b01a8u: goto label_1b01a8;
        case 0x1b01acu: goto label_1b01ac;
        case 0x1b01b0u: goto label_1b01b0;
        case 0x1b01b4u: goto label_1b01b4;
        case 0x1b01b8u: goto label_1b01b8;
        case 0x1b01bcu: goto label_1b01bc;
        case 0x1b01c0u: goto label_1b01c0;
        case 0x1b01c4u: goto label_1b01c4;
        case 0x1b01c8u: goto label_1b01c8;
        case 0x1b01ccu: goto label_1b01cc;
        case 0x1b01d0u: goto label_1b01d0;
        case 0x1b01d4u: goto label_1b01d4;
        case 0x1b01d8u: goto label_1b01d8;
        case 0x1b01dcu: goto label_1b01dc;
        case 0x1b01e0u: goto label_1b01e0;
        case 0x1b01e4u: goto label_1b01e4;
        case 0x1b01e8u: goto label_1b01e8;
        case 0x1b01ecu: goto label_1b01ec;
        case 0x1b01f0u: goto label_1b01f0;
        case 0x1b01f4u: goto label_1b01f4;
        case 0x1b01f8u: goto label_1b01f8;
        case 0x1b01fcu: goto label_1b01fc;
        case 0x1b0200u: goto label_1b0200;
        case 0x1b0204u: goto label_1b0204;
        case 0x1b0208u: goto label_1b0208;
        case 0x1b020cu: goto label_1b020c;
        case 0x1b0210u: goto label_1b0210;
        case 0x1b0214u: goto label_1b0214;
        case 0x1b0218u: goto label_1b0218;
        case 0x1b021cu: goto label_1b021c;
        case 0x1b0220u: goto label_1b0220;
        case 0x1b0224u: goto label_1b0224;
        case 0x1b0228u: goto label_1b0228;
        case 0x1b022cu: goto label_1b022c;
        case 0x1b0230u: goto label_1b0230;
        case 0x1b0234u: goto label_1b0234;
        case 0x1b0238u: goto label_1b0238;
        case 0x1b023cu: goto label_1b023c;
        case 0x1b0240u: goto label_1b0240;
        case 0x1b0244u: goto label_1b0244;
        case 0x1b0248u: goto label_1b0248;
        case 0x1b024cu: goto label_1b024c;
        case 0x1b0250u: goto label_1b0250;
        case 0x1b0254u: goto label_1b0254;
        case 0x1b0258u: goto label_1b0258;
        case 0x1b025cu: goto label_1b025c;
        case 0x1b0260u: goto label_1b0260;
        case 0x1b0264u: goto label_1b0264;
        case 0x1b0268u: goto label_1b0268;
        case 0x1b026cu: goto label_1b026c;
        case 0x1b0270u: goto label_1b0270;
        case 0x1b0274u: goto label_1b0274;
        case 0x1b0278u: goto label_1b0278;
        case 0x1b027cu: goto label_1b027c;
        case 0x1b0280u: goto label_1b0280;
        case 0x1b0284u: goto label_1b0284;
        case 0x1b0288u: goto label_1b0288;
        case 0x1b028cu: goto label_1b028c;
        case 0x1b0290u: goto label_1b0290;
        case 0x1b0294u: goto label_1b0294;
        case 0x1b0298u: goto label_1b0298;
        case 0x1b029cu: goto label_1b029c;
        case 0x1b02a0u: goto label_1b02a0;
        case 0x1b02a4u: goto label_1b02a4;
        case 0x1b02a8u: goto label_1b02a8;
        case 0x1b02acu: goto label_1b02ac;
        case 0x1b02b0u: goto label_1b02b0;
        case 0x1b02b4u: goto label_1b02b4;
        case 0x1b02b8u: goto label_1b02b8;
        case 0x1b02bcu: goto label_1b02bc;
        case 0x1b02c0u: goto label_1b02c0;
        case 0x1b02c4u: goto label_1b02c4;
        case 0x1b02c8u: goto label_1b02c8;
        case 0x1b02ccu: goto label_1b02cc;
        case 0x1b02d0u: goto label_1b02d0;
        case 0x1b02d4u: goto label_1b02d4;
        case 0x1b02d8u: goto label_1b02d8;
        case 0x1b02dcu: goto label_1b02dc;
        case 0x1b02e0u: goto label_1b02e0;
        case 0x1b02e4u: goto label_1b02e4;
        case 0x1b02e8u: goto label_1b02e8;
        case 0x1b02ecu: goto label_1b02ec;
        case 0x1b02f0u: goto label_1b02f0;
        case 0x1b02f4u: goto label_1b02f4;
        case 0x1b02f8u: goto label_1b02f8;
        case 0x1b02fcu: goto label_1b02fc;
        case 0x1b0300u: goto label_1b0300;
        case 0x1b0304u: goto label_1b0304;
        case 0x1b0308u: goto label_1b0308;
        case 0x1b030cu: goto label_1b030c;
        case 0x1b0310u: goto label_1b0310;
        case 0x1b0314u: goto label_1b0314;
        case 0x1b0318u: goto label_1b0318;
        case 0x1b031cu: goto label_1b031c;
        case 0x1b0320u: goto label_1b0320;
        case 0x1b0324u: goto label_1b0324;
        case 0x1b0328u: goto label_1b0328;
        case 0x1b032cu: goto label_1b032c;
        case 0x1b0330u: goto label_1b0330;
        case 0x1b0334u: goto label_1b0334;
        case 0x1b0338u: goto label_1b0338;
        case 0x1b033cu: goto label_1b033c;
        case 0x1b0340u: goto label_1b0340;
        case 0x1b0344u: goto label_1b0344;
        case 0x1b0348u: goto label_1b0348;
        case 0x1b034cu: goto label_1b034c;
        case 0x1b0350u: goto label_1b0350;
        case 0x1b0354u: goto label_1b0354;
        case 0x1b0358u: goto label_1b0358;
        case 0x1b035cu: goto label_1b035c;
        case 0x1b0360u: goto label_1b0360;
        case 0x1b0364u: goto label_1b0364;
        case 0x1b0368u: goto label_1b0368;
        case 0x1b036cu: goto label_1b036c;
        case 0x1b0370u: goto label_1b0370;
        case 0x1b0374u: goto label_1b0374;
        case 0x1b0378u: goto label_1b0378;
        case 0x1b037cu: goto label_1b037c;
        case 0x1b0380u: goto label_1b0380;
        case 0x1b0384u: goto label_1b0384;
        case 0x1b0388u: goto label_1b0388;
        case 0x1b038cu: goto label_1b038c;
        case 0x1b0390u: goto label_1b0390;
        case 0x1b0394u: goto label_1b0394;
        case 0x1b0398u: goto label_1b0398;
        case 0x1b039cu: goto label_1b039c;
        case 0x1b03a0u: goto label_1b03a0;
        case 0x1b03a4u: goto label_1b03a4;
        case 0x1b03a8u: goto label_1b03a8;
        case 0x1b03acu: goto label_1b03ac;
        case 0x1b03b0u: goto label_1b03b0;
        case 0x1b03b4u: goto label_1b03b4;
        case 0x1b03b8u: goto label_1b03b8;
        case 0x1b03bcu: goto label_1b03bc;
        case 0x1b03c0u: goto label_1b03c0;
        case 0x1b03c4u: goto label_1b03c4;
        case 0x1b03c8u: goto label_1b03c8;
        case 0x1b03ccu: goto label_1b03cc;
        case 0x1b03d0u: goto label_1b03d0;
        case 0x1b03d4u: goto label_1b03d4;
        case 0x1b03d8u: goto label_1b03d8;
        case 0x1b03dcu: goto label_1b03dc;
        case 0x1b03e0u: goto label_1b03e0;
        case 0x1b03e4u: goto label_1b03e4;
        case 0x1b03e8u: goto label_1b03e8;
        case 0x1b03ecu: goto label_1b03ec;
        case 0x1b03f0u: goto label_1b03f0;
        case 0x1b03f4u: goto label_1b03f4;
        case 0x1b03f8u: goto label_1b03f8;
        case 0x1b03fcu: goto label_1b03fc;
        case 0x1b0400u: goto label_1b0400;
        case 0x1b0404u: goto label_1b0404;
        case 0x1b0408u: goto label_1b0408;
        case 0x1b040cu: goto label_1b040c;
        case 0x1b0410u: goto label_1b0410;
        case 0x1b0414u: goto label_1b0414;
        case 0x1b0418u: goto label_1b0418;
        case 0x1b041cu: goto label_1b041c;
        case 0x1b0420u: goto label_1b0420;
        case 0x1b0424u: goto label_1b0424;
        case 0x1b0428u: goto label_1b0428;
        case 0x1b042cu: goto label_1b042c;
        case 0x1b0430u: goto label_1b0430;
        case 0x1b0434u: goto label_1b0434;
        case 0x1b0438u: goto label_1b0438;
        case 0x1b043cu: goto label_1b043c;
        case 0x1b0440u: goto label_1b0440;
        case 0x1b0444u: goto label_1b0444;
        case 0x1b0448u: goto label_1b0448;
        case 0x1b044cu: goto label_1b044c;
        case 0x1b0450u: goto label_1b0450;
        case 0x1b0454u: goto label_1b0454;
        case 0x1b0458u: goto label_1b0458;
        case 0x1b045cu: goto label_1b045c;
        case 0x1b0460u: goto label_1b0460;
        case 0x1b0464u: goto label_1b0464;
        case 0x1b0468u: goto label_1b0468;
        case 0x1b046cu: goto label_1b046c;
        case 0x1b0470u: goto label_1b0470;
        case 0x1b0474u: goto label_1b0474;
        case 0x1b0478u: goto label_1b0478;
        case 0x1b047cu: goto label_1b047c;
        case 0x1b0480u: goto label_1b0480;
        case 0x1b0484u: goto label_1b0484;
        case 0x1b0488u: goto label_1b0488;
        case 0x1b048cu: goto label_1b048c;
        case 0x1b0490u: goto label_1b0490;
        case 0x1b0494u: goto label_1b0494;
        case 0x1b0498u: goto label_1b0498;
        case 0x1b049cu: goto label_1b049c;
        case 0x1b04a0u: goto label_1b04a0;
        case 0x1b04a4u: goto label_1b04a4;
        case 0x1b04a8u: goto label_1b04a8;
        case 0x1b04acu: goto label_1b04ac;
        case 0x1b04b0u: goto label_1b04b0;
        case 0x1b04b4u: goto label_1b04b4;
        case 0x1b04b8u: goto label_1b04b8;
        case 0x1b04bcu: goto label_1b04bc;
        case 0x1b04c0u: goto label_1b04c0;
        case 0x1b04c4u: goto label_1b04c4;
        case 0x1b04c8u: goto label_1b04c8;
        case 0x1b04ccu: goto label_1b04cc;
        case 0x1b04d0u: goto label_1b04d0;
        case 0x1b04d4u: goto label_1b04d4;
        case 0x1b04d8u: goto label_1b04d8;
        case 0x1b04dcu: goto label_1b04dc;
        case 0x1b04e0u: goto label_1b04e0;
        case 0x1b04e4u: goto label_1b04e4;
        case 0x1b04e8u: goto label_1b04e8;
        case 0x1b04ecu: goto label_1b04ec;
        case 0x1b04f0u: goto label_1b04f0;
        case 0x1b04f4u: goto label_1b04f4;
        case 0x1b04f8u: goto label_1b04f8;
        case 0x1b04fcu: goto label_1b04fc;
        case 0x1b0500u: goto label_1b0500;
        case 0x1b0504u: goto label_1b0504;
        case 0x1b0508u: goto label_1b0508;
        case 0x1b050cu: goto label_1b050c;
        case 0x1b0510u: goto label_1b0510;
        case 0x1b0514u: goto label_1b0514;
        case 0x1b0518u: goto label_1b0518;
        case 0x1b051cu: goto label_1b051c;
        case 0x1b0520u: goto label_1b0520;
        case 0x1b0524u: goto label_1b0524;
        case 0x1b0528u: goto label_1b0528;
        case 0x1b052cu: goto label_1b052c;
        case 0x1b0530u: goto label_1b0530;
        case 0x1b0534u: goto label_1b0534;
        case 0x1b0538u: goto label_1b0538;
        case 0x1b053cu: goto label_1b053c;
        case 0x1b0540u: goto label_1b0540;
        case 0x1b0544u: goto label_1b0544;
        case 0x1b0548u: goto label_1b0548;
        case 0x1b054cu: goto label_1b054c;
        case 0x1b0550u: goto label_1b0550;
        case 0x1b0554u: goto label_1b0554;
        case 0x1b0558u: goto label_1b0558;
        case 0x1b055cu: goto label_1b055c;
        case 0x1b0560u: goto label_1b0560;
        case 0x1b0564u: goto label_1b0564;
        case 0x1b0568u: goto label_1b0568;
        case 0x1b056cu: goto label_1b056c;
        case 0x1b0570u: goto label_1b0570;
        case 0x1b0574u: goto label_1b0574;
        case 0x1b0578u: goto label_1b0578;
        case 0x1b057cu: goto label_1b057c;
        case 0x1b0580u: goto label_1b0580;
        case 0x1b0584u: goto label_1b0584;
        case 0x1b0588u: goto label_1b0588;
        case 0x1b058cu: goto label_1b058c;
        case 0x1b0590u: goto label_1b0590;
        case 0x1b0594u: goto label_1b0594;
        case 0x1b0598u: goto label_1b0598;
        case 0x1b059cu: goto label_1b059c;
        case 0x1b05a0u: goto label_1b05a0;
        case 0x1b05a4u: goto label_1b05a4;
        case 0x1b05a8u: goto label_1b05a8;
        case 0x1b05acu: goto label_1b05ac;
        case 0x1b05b0u: goto label_1b05b0;
        case 0x1b05b4u: goto label_1b05b4;
        case 0x1b05b8u: goto label_1b05b8;
        case 0x1b05bcu: goto label_1b05bc;
        case 0x1b05c0u: goto label_1b05c0;
        case 0x1b05c4u: goto label_1b05c4;
        case 0x1b05c8u: goto label_1b05c8;
        case 0x1b05ccu: goto label_1b05cc;
        case 0x1b05d0u: goto label_1b05d0;
        case 0x1b05d4u: goto label_1b05d4;
        case 0x1b05d8u: goto label_1b05d8;
        case 0x1b05dcu: goto label_1b05dc;
        case 0x1b05e0u: goto label_1b05e0;
        case 0x1b05e4u: goto label_1b05e4;
        case 0x1b05e8u: goto label_1b05e8;
        case 0x1b05ecu: goto label_1b05ec;
        case 0x1b05f0u: goto label_1b05f0;
        case 0x1b05f4u: goto label_1b05f4;
        case 0x1b05f8u: goto label_1b05f8;
        case 0x1b05fcu: goto label_1b05fc;
        case 0x1b0600u: goto label_1b0600;
        case 0x1b0604u: goto label_1b0604;
        case 0x1b0608u: goto label_1b0608;
        case 0x1b060cu: goto label_1b060c;
        case 0x1b0610u: goto label_1b0610;
        case 0x1b0614u: goto label_1b0614;
        case 0x1b0618u: goto label_1b0618;
        case 0x1b061cu: goto label_1b061c;
        case 0x1b0620u: goto label_1b0620;
        case 0x1b0624u: goto label_1b0624;
        case 0x1b0628u: goto label_1b0628;
        case 0x1b062cu: goto label_1b062c;
        case 0x1b0630u: goto label_1b0630;
        case 0x1b0634u: goto label_1b0634;
        case 0x1b0638u: goto label_1b0638;
        case 0x1b063cu: goto label_1b063c;
        case 0x1b0640u: goto label_1b0640;
        case 0x1b0644u: goto label_1b0644;
        case 0x1b0648u: goto label_1b0648;
        case 0x1b064cu: goto label_1b064c;
        case 0x1b0650u: goto label_1b0650;
        case 0x1b0654u: goto label_1b0654;
        case 0x1b0658u: goto label_1b0658;
        case 0x1b065cu: goto label_1b065c;
        case 0x1b0660u: goto label_1b0660;
        case 0x1b0664u: goto label_1b0664;
        case 0x1b0668u: goto label_1b0668;
        case 0x1b066cu: goto label_1b066c;
        case 0x1b0670u: goto label_1b0670;
        case 0x1b0674u: goto label_1b0674;
        case 0x1b0678u: goto label_1b0678;
        case 0x1b067cu: goto label_1b067c;
        case 0x1b0680u: goto label_1b0680;
        case 0x1b0684u: goto label_1b0684;
        case 0x1b0688u: goto label_1b0688;
        case 0x1b068cu: goto label_1b068c;
        case 0x1b0690u: goto label_1b0690;
        case 0x1b0694u: goto label_1b0694;
        case 0x1b0698u: goto label_1b0698;
        case 0x1b069cu: goto label_1b069c;
        case 0x1b06a0u: goto label_1b06a0;
        case 0x1b06a4u: goto label_1b06a4;
        case 0x1b06a8u: goto label_1b06a8;
        case 0x1b06acu: goto label_1b06ac;
        case 0x1b06b0u: goto label_1b06b0;
        case 0x1b06b4u: goto label_1b06b4;
        case 0x1b06b8u: goto label_1b06b8;
        case 0x1b06bcu: goto label_1b06bc;
        case 0x1b06c0u: goto label_1b06c0;
        case 0x1b06c4u: goto label_1b06c4;
        case 0x1b06c8u: goto label_1b06c8;
        case 0x1b06ccu: goto label_1b06cc;
        case 0x1b06d0u: goto label_1b06d0;
        case 0x1b06d4u: goto label_1b06d4;
        case 0x1b06d8u: goto label_1b06d8;
        case 0x1b06dcu: goto label_1b06dc;
        case 0x1b06e0u: goto label_1b06e0;
        case 0x1b06e4u: goto label_1b06e4;
        case 0x1b06e8u: goto label_1b06e8;
        case 0x1b06ecu: goto label_1b06ec;
        case 0x1b06f0u: goto label_1b06f0;
        case 0x1b06f4u: goto label_1b06f4;
        case 0x1b06f8u: goto label_1b06f8;
        case 0x1b06fcu: goto label_1b06fc;
        case 0x1b0700u: goto label_1b0700;
        case 0x1b0704u: goto label_1b0704;
        case 0x1b0708u: goto label_1b0708;
        case 0x1b070cu: goto label_1b070c;
        case 0x1b0710u: goto label_1b0710;
        case 0x1b0714u: goto label_1b0714;
        case 0x1b0718u: goto label_1b0718;
        case 0x1b071cu: goto label_1b071c;
        case 0x1b0720u: goto label_1b0720;
        case 0x1b0724u: goto label_1b0724;
        case 0x1b0728u: goto label_1b0728;
        case 0x1b072cu: goto label_1b072c;
        case 0x1b0730u: goto label_1b0730;
        case 0x1b0734u: goto label_1b0734;
        case 0x1b0738u: goto label_1b0738;
        case 0x1b073cu: goto label_1b073c;
        case 0x1b0740u: goto label_1b0740;
        case 0x1b0744u: goto label_1b0744;
        case 0x1b0748u: goto label_1b0748;
        case 0x1b074cu: goto label_1b074c;
        case 0x1b0750u: goto label_1b0750;
        case 0x1b0754u: goto label_1b0754;
        case 0x1b0758u: goto label_1b0758;
        case 0x1b075cu: goto label_1b075c;
        case 0x1b0760u: goto label_1b0760;
        case 0x1b0764u: goto label_1b0764;
        case 0x1b0768u: goto label_1b0768;
        case 0x1b076cu: goto label_1b076c;
        case 0x1b0770u: goto label_1b0770;
        case 0x1b0774u: goto label_1b0774;
        case 0x1b0778u: goto label_1b0778;
        case 0x1b077cu: goto label_1b077c;
        case 0x1b0780u: goto label_1b0780;
        case 0x1b0784u: goto label_1b0784;
        case 0x1b0788u: goto label_1b0788;
        case 0x1b078cu: goto label_1b078c;
        case 0x1b0790u: goto label_1b0790;
        case 0x1b0794u: goto label_1b0794;
        case 0x1b0798u: goto label_1b0798;
        case 0x1b079cu: goto label_1b079c;
        case 0x1b07a0u: goto label_1b07a0;
        case 0x1b07a4u: goto label_1b07a4;
        case 0x1b07a8u: goto label_1b07a8;
        case 0x1b07acu: goto label_1b07ac;
        case 0x1b07b0u: goto label_1b07b0;
        case 0x1b07b4u: goto label_1b07b4;
        case 0x1b07b8u: goto label_1b07b8;
        case 0x1b07bcu: goto label_1b07bc;
        case 0x1b07c0u: goto label_1b07c0;
        case 0x1b07c4u: goto label_1b07c4;
        case 0x1b07c8u: goto label_1b07c8;
        case 0x1b07ccu: goto label_1b07cc;
        case 0x1b07d0u: goto label_1b07d0;
        case 0x1b07d4u: goto label_1b07d4;
        case 0x1b07d8u: goto label_1b07d8;
        case 0x1b07dcu: goto label_1b07dc;
        case 0x1b07e0u: goto label_1b07e0;
        case 0x1b07e4u: goto label_1b07e4;
        case 0x1b07e8u: goto label_1b07e8;
        case 0x1b07ecu: goto label_1b07ec;
        case 0x1b07f0u: goto label_1b07f0;
        case 0x1b07f4u: goto label_1b07f4;
        default: return;
    }

label_1b0028:
    // 0x1b0028: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x1b0028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
label_1b002c:
    // 0x1b002c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1b002cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1b0030:
    // 0x1b0030: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1b0030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_1b0034:
    // 0x1b0034: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b0034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b0038:
    // 0x1b0038: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b003c:
    if (ctx->pc == 0x1B003Cu) {
        ctx->pc = 0x1B003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0038u;
        // 0x1b003c: 0x3c040028  lui         $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0040u;
        goto label_1b0040;
    }
    ctx->pc = 0x1B0038u;
    {
        const bool branch_taken_0x1b0038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0038u;
        // 0x1b003c: 0x3c040028  lui         $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0038) {
            ctx->pc = 0x1B0048u;
            goto label_1b0048;
        }
    }
    ctx->pc = 0x1B0040u;
label_1b0040:
    // 0x1b0040: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1b0040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b0044:
    // 0x1b0044: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x1b0044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_1b0048:
    // 0x1b0048: 0xac8072a4  sw          $zero, 0x72A4($a0)
    ctx->pc = 0x1b0048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29348), GPR_U32(ctx, 0));
label_1b004c:
    // 0x1b004c: 0x6600015  bltz        $s3, . + 4 + (0x15 << 2)
label_1b0050:
    if (ctx->pc == 0x1B0050u) {
        ctx->pc = 0x1B0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B004Cu;
        // 0x1b0050: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0054u;
        goto label_1b0054;
    }
    ctx->pc = 0x1B004Cu;
    {
        const bool branch_taken_0x1b004c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1B0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B004Cu;
        // 0x1b0050: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b004c) {
            ctx->pc = 0x1B00A4u;
            goto label_1b00a4;
        }
    }
    ctx->pc = 0x1B0054u;
label_1b0054:
    // 0x1b0054: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1b0058:
    if (ctx->pc == 0x1B0058u) {
        ctx->pc = 0x1B0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0054u;
        // 0x1b0058: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B005Cu;
        goto label_1b005c;
    }
    ctx->pc = 0x1B0054u;
    {
        const bool branch_taken_0x1b0054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0054u;
        // 0x1b0058: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0054) {
            ctx->pc = 0x1B00A4u;
            goto label_1b00a4;
        }
    }
    ctx->pc = 0x1B005Cu;
label_1b005c:
    // 0x1b005c: 0x16620011  bne         $s3, $v0, . + 4 + (0x11 << 2)
label_1b0060:
    if (ctx->pc == 0x1B0060u) {
        ctx->pc = 0x1B0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B005Cu;
        // 0x1b0060: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0064u;
        goto label_1b0064;
    }
    ctx->pc = 0x1B005Cu;
    {
        const bool branch_taken_0x1b005c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B005Cu;
        // 0x1b0060: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b005c) {
            ctx->pc = 0x1B00A4u;
            goto label_1b00a4;
        }
    }
    ctx->pc = 0x1B0064u;
label_1b0064:
    // 0x1b0064: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1b0064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
label_1b0068:
    // 0x1b0068: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1b006c:
    if (ctx->pc == 0x1B006Cu) {
        ctx->pc = 0x1B006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0068u;
        // 0x1b006c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0070u;
        goto label_1b0070;
    }
    ctx->pc = 0x1B0068u;
    {
        const bool branch_taken_0x1b0068 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0068u;
        // 0x1b006c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0068) {
            ctx->pc = 0x1B0078u;
            goto label_1b0078;
        }
    }
    ctx->pc = 0x1B0070u;
label_1b0070:
    // 0x1b0070: 0xc069a30  jal         func_1A68C0
label_1b0074:
    if (ctx->pc == 0x1B0074u) {
        ctx->pc = 0x1B0074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0070u;
        // 0x1b0074: 0x2484aaa8  addiu       $a0, $a0, -0x5558 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0078u;
        goto label_1b0078;
    }
    ctx->pc = 0x1B0070u;
    SET_GPR_U32(ctx, 31, 0x1B0078u);
    ctx->pc = 0x1B0074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0070u;
    // 0x1b0074: 0x2484aaa8  addiu       $a0, $a0, -0x5558 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0078u;
label_1b0078:
    // 0x1b0078: 0xc06bd20  jal         func_1AF480
label_1b007c:
    if (ctx->pc == 0x1B007Cu) {
        ctx->pc = 0x1B0080u;
        goto label_1b0080;
    }
    ctx->pc = 0x1B0078u;
    SET_GPR_U32(ctx, 31, 0x1B0080u);
    ctx->pc = 0x1AF480u;
    { ctx->pc = 0x1af480; return; }
    ctx->pc = 0x1B0080u;
label_1b0080:
    // 0x1b0080: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b0080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b0084:
    // 0x1b0084: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b0088:
    // 0x1b0088: 0xac4472a8  sw          $a0, 0x72A8($v0)
    ctx->pc = 0x1b0088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29352), GPR_U32(ctx, 4));
label_1b008c:
    // 0x1b008c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1b008cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1b0090:
    // 0x1b0090: 0xac6472ac  sw          $a0, 0x72AC($v1)
    ctx->pc = 0x1b0090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29356), GPR_U32(ctx, 4));
label_1b0094:
    // 0x1b0094: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b0098:
    // 0x1b0098: 0xac4472a0  sw          $a0, 0x72A0($v0)
    ctx->pc = 0x1b0098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29344), GPR_U32(ctx, 4));
label_1b009c:
    // 0x1b009c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b00a0:
    if (ctx->pc == 0x1B00A0u) {
        ctx->pc = 0x1B00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B009Cu;
        // 0x1b00a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B00A4u;
        goto label_1b00a4;
    }
    ctx->pc = 0x1B009Cu;
    {
        const bool branch_taken_0x1b009c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B009Cu;
        // 0x1b00a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b009c) {
            ctx->pc = 0x1B00B8u;
            goto label_1b00b8;
        }
    }
    ctx->pc = 0x1B00A4u;
label_1b00a4:
    // 0x1b00a4: 0xc06bcfa  jal         func_1AF3E8
label_1b00a8:
    if (ctx->pc == 0x1B00A8u) {
        ctx->pc = 0x1B00ACu;
        goto label_1b00ac;
    }
    ctx->pc = 0x1B00A4u;
    SET_GPR_U32(ctx, 31, 0x1B00ACu);
    ctx->pc = 0x1AF3E8u;
    { ctx->pc = 0x1af3e8; return; }
    ctx->pc = 0x1B00ACu;
label_1b00ac:
    // 0x1b00ac: 0xc06bd74  jal         func_1AF5D0
label_1b00b0:
    if (ctx->pc == 0x1B00B0u) {
        ctx->pc = 0x1B00B4u;
        goto label_1b00b4;
    }
    ctx->pc = 0x1B00ACu;
    SET_GPR_U32(ctx, 31, 0x1B00B4u);
    ctx->pc = 0x1AF5D0u;
    { ctx->pc = 0x1af5d0; return; }
    ctx->pc = 0x1B00B4u;
label_1b00b4:
    // 0x1b00b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b00b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b00b8:
    // 0x1b00b8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1b00b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1b00bc:
    // 0x1b00bc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1b00bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b00c0:
    // 0x1b00c0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b00c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b00c4:
    // 0x1b00c4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b00c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b00c8:
    // 0x1b00c8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b00c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b00cc:
    // 0x1b00cc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b00ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b00d0:
    // 0x1b00d0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b00d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b00d4:
    // 0x1b00d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b00d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b00d8:
    // 0x1b00d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b00d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b00dc:
    // 0x1b00dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b00dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b00e0:
    // 0x1b00e0: 0x3e00008  jr          $ra
label_1b00e4:
    if (ctx->pc == 0x1B00E4u) {
        ctx->pc = 0x1B00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00E0u;
        // 0x1b00e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B00E8u;
        goto label_1b00e8;
    }
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00E0u;
        // 0x1b00e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B00E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B00E8u;
label_1b00e8:
    // 0x1b00e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b00e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1b00ec:
    // 0x1b00ec: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b00ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1b00f0:
    // 0x1b00f0: 0x3c160028  lui         $s6, 0x28
    ctx->pc = 0x1b00f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)40 << 16));
label_1b00f4:
    // 0x1b00f4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b00f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b00f8:
    // 0x1b00f8: 0x8ec27290  lw          $v0, 0x7290($s6)
    ctx->pc = 0x1b00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
label_1b00fc:
    // 0x1b00fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b00fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b0100:
    // 0x1b0100: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b0100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b0104:
    // 0x1b0104: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1b0104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1b0108:
    // 0x1b0108: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b0108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1b010c:
    // 0x1b010c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b010cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1b0110:
    // 0x1b0110: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b0110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b0114:
    // 0x1b0114: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b0114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b0118:
    // 0x1b0118: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1b011c:
    if (ctx->pc == 0x1B011Cu) {
        ctx->pc = 0x1B011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0118u;
        // 0x1b011c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0120u;
        goto label_1b0120;
    }
    ctx->pc = 0x1B0118u;
    {
        const bool branch_taken_0x1b0118 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0118u;
        // 0x1b011c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0118) {
            ctx->pc = 0x1B012Cu;
            goto label_1b012c;
        }
    }
    ctx->pc = 0x1B0120u;
label_1b0120:
    // 0x1b0120: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1b0124:
    // 0x1b0124: 0xc069a30  jal         func_1A68C0
label_1b0128:
    if (ctx->pc == 0x1B0128u) {
        ctx->pc = 0x1B0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0124u;
        // 0x1b0128: 0x2484aab8  addiu       $a0, $a0, -0x5548 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B012Cu;
        goto label_1b012c;
    }
    ctx->pc = 0x1B0124u;
    SET_GPR_U32(ctx, 31, 0x1B012Cu);
    ctx->pc = 0x1B0128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0124u;
    // 0x1b0128: 0x2484aab8  addiu       $a0, $a0, -0x5548 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B012Cu;
label_1b012c:
    // 0x1b012c: 0xc06bcfa  jal         func_1AF3E8
label_1b0130:
    if (ctx->pc == 0x1B0130u) {
        ctx->pc = 0x1B0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B012Cu;
        // 0x1b0130: 0x3c130028  lui         $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0134u;
        goto label_1b0134;
    }
    ctx->pc = 0x1B012Cu;
    SET_GPR_U32(ctx, 31, 0x1B0134u);
    ctx->pc = 0x1B0130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B012Cu;
    // 0x1b0130: 0x3c130028  lui         $s3, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF3E8u;
    { ctx->pc = 0x1af3e8; return; }
    ctx->pc = 0x1B0134u;
label_1b0134:
    // 0x1b0134: 0x8e6472ac  lw          $a0, 0x72AC($s3)
    ctx->pc = 0x1b0134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29356)));
label_1b0138:
    // 0x1b0138: 0xc06921c  jal         func_1A4870
label_1b013c:
    if (ctx->pc == 0x1B013Cu) {
        ctx->pc = 0x1B0140u;
        goto label_1b0140;
    }
    ctx->pc = 0x1B0138u;
    SET_GPR_U32(ctx, 31, 0x1B0140u);
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B0140u;
label_1b0140:
    // 0x1b0140: 0x8e6372ac  lw          $v1, 0x72AC($s3)
    ctx->pc = 0x1b0140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29356)));
label_1b0144:
    // 0x1b0144: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
label_1b0148:
    if (ctx->pc == 0x1B0148u) {
        ctx->pc = 0x1B0148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0144u;
        // 0x1b0148: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B014Cu;
        goto label_1b014c;
    }
    ctx->pc = 0x1B0144u;
    {
        const bool branch_taken_0x1b0144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0144u;
        // 0x1b0148: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0144) {
            ctx->pc = 0x1B02B4u;
            goto label_1b02b4;
        }
    }
    ctx->pc = 0x1B014Cu;
label_1b014c:
    // 0x1b014c: 0xc06bf0a  jal         func_1AFC28
label_1b0150:
    if (ctx->pc == 0x1B0150u) {
        ctx->pc = 0x1B0150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B014Cu;
        // 0x1b0150: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0154u;
        goto label_1b0154;
    }
    ctx->pc = 0x1B014Cu;
    SET_GPR_U32(ctx, 31, 0x1B0154u);
    ctx->pc = 0x1B0150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B014Cu;
    // 0x1b0150: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC28u;
    { ctx->pc = 0x1afc28; return; }
    ctx->pc = 0x1B0154u;
label_1b0154:
    // 0x1b0154: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_1b0158:
    if (ctx->pc == 0x1B0158u) {
        ctx->pc = 0x1B0158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0154u;
        // 0x1b0158: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B015Cu;
        goto label_1b015c;
    }
    ctx->pc = 0x1B0154u;
    {
        const bool branch_taken_0x1b0154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0154u;
        // 0x1b0158: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0154) {
            ctx->pc = 0x1B026Cu;
            goto label_1b026c;
        }
    }
    ctx->pc = 0x1B015Cu;
label_1b015c:
    // 0x1b015c: 0xc069c1a  jal         func_1A7068
label_1b0160:
    if (ctx->pc == 0x1B0160u) {
        ctx->pc = 0x1B0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B015Cu;
        // 0x1b0160: 0x3c110028  lui         $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0164u;
        goto label_1b0164;
    }
    ctx->pc = 0x1B015Cu;
    SET_GPR_U32(ctx, 31, 0x1B0164u);
    ctx->pc = 0x1B0160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B015Cu;
    // 0x1b0160: 0x3c110028  lui         $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    { ctx->pc = 0x1a7068; return; }
    ctx->pc = 0x1B0164u;
label_1b0164:
    // 0x1b0164: 0x8e2272c4  lw          $v0, 0x72C4($s1)
    ctx->pc = 0x1b0164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29380)));
label_1b0168:
    // 0x1b0168: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
label_1b016c:
    if (ctx->pc == 0x1B016Cu) {
        ctx->pc = 0x1B016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0168u;
        // 0x1b016c: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0170u;
        goto label_1b0170;
    }
    ctx->pc = 0x1B0168u;
    {
        const bool branch_taken_0x1b0168 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0168u;
        // 0x1b016c: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0168) {
            ctx->pc = 0x1B021Cu;
            goto label_1b021c;
        }
    }
    ctx->pc = 0x1B0170u;
label_1b0170:
    // 0x1b0170: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b0170u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1b0174:
    // 0x1b0174: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b0178:
    if (ctx->pc == 0x1B0178u) {
        ctx->pc = 0x1B0178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0174u;
        // 0x1b0178: 0x3c170029  lui         $s7, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B017Cu;
        goto label_1b017c;
    }
    ctx->pc = 0x1B0174u;
    {
        const bool branch_taken_0x1b0174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0174u;
        // 0x1b0178: 0x3c170029  lui         $s7, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0174) {
            ctx->pc = 0x1B01A4u;
            goto label_1b01a4;
        }
    }
    ctx->pc = 0x1B017Cu;
label_1b017c:
    // 0x1b017c: 0x0  nop
    ctx->pc = 0x1b017cu;
    // NOP
label_1b0180:
    // 0x1b0180: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b0180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b0184:
    // 0x1b0184: 0x0  nop
    ctx->pc = 0x1b0184u;
    // NOP
label_1b0188:
    // 0x1b0188: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b0188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b018c:
    // 0x1b018c: 0x0  nop
    ctx->pc = 0x1b018cu;
    // NOP
label_1b0190:
    // 0x1b0190: 0x0  nop
    ctx->pc = 0x1b0190u;
    // NOP
label_1b0194:
    // 0x1b0194: 0x0  nop
    ctx->pc = 0x1b0194u;
    // NOP
label_1b0198:
    // 0x1b0198: 0x0  nop
    ctx->pc = 0x1b0198u;
    // NOP
label_1b019c:
    // 0x1b019c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1b01a0:
    if (ctx->pc == 0x1B01A0u) {
        ctx->pc = 0x1B01A4u;
        goto label_1b01a4;
    }
    ctx->pc = 0x1B019Cu;
    {
        const bool branch_taken_0x1b019c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b019c) {
            ctx->pc = 0x1B0188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0188;
        }
    }
    ctx->pc = 0x1B01A4u;
label_1b01a4:
    // 0x1b01a4: 0x26b06190  addiu       $s0, $s5, 0x6190
    ctx->pc = 0x1b01a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 24976));
label_1b01a8:
    // 0x1b01a8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1b01a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1b01ac:
    // 0x1b01ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b01acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b01b0:
    // 0x1b01b0: 0x34a5059a  ori         $a1, $a1, 0x59A
    ctx->pc = 0x1b01b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1434);
label_1b01b4:
    // 0x1b01b4: 0xc069db6  jal         func_1A76D8
label_1b01b8:
    if (ctx->pc == 0x1B01B8u) {
        ctx->pc = 0x1B01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01B4u;
        // 0x1b01b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B01BCu;
        goto label_1b01bc;
    }
    ctx->pc = 0x1B01B4u;
    SET_GPR_U32(ctx, 31, 0x1B01BCu);
    ctx->pc = 0x1B01B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01B4u;
    // 0x1b01b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    { ctx->pc = 0x1a76d8; return; }
    ctx->pc = 0x1B01BCu;
label_1b01bc:
    // 0x1b01bc: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
label_1b01c0:
    if (ctx->pc == 0x1B01C0u) {
        ctx->pc = 0x1B01C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01BCu;
        // 0x1b01c0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B01C4u;
        goto label_1b01c4;
    }
    ctx->pc = 0x1B01BCu;
    {
        const bool branch_taken_0x1b01bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b01bc) {
            ctx->pc = 0x1B01C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B01BCu;
            // 0x1b01c0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B020Cu;
            goto label_1b020c;
        }
    }
    ctx->pc = 0x1B01C4u;
label_1b01c4:
    // 0x1b01c4: 0x8ec27290  lw          $v0, 0x7290($s6)
    ctx->pc = 0x1b01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
label_1b01c8:
    // 0x1b01c8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_1b01cc:
    if (ctx->pc == 0x1B01CCu) {
        ctx->pc = 0x1B01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01C8u;
        // 0x1b01cc: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B01D0u;
        goto label_1b01d0;
    }
    ctx->pc = 0x1B01C8u;
    {
        const bool branch_taken_0x1b01c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01C8u;
        // 0x1b01cc: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01c8) {
            ctx->pc = 0x1B01E0u;
            goto label_1b01e0;
        }
    }
    ctx->pc = 0x1B01D0u;
label_1b01d0:
    // 0x1b01d0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b01d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1b01d4:
    // 0x1b01d4: 0xc069a30  jal         func_1A68C0
label_1b01d8:
    if (ctx->pc == 0x1B01D8u) {
        ctx->pc = 0x1B01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01D4u;
        // 0x1b01d8: 0x2484aac8  addiu       $a0, $a0, -0x5538 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B01DCu;
        goto label_1b01dc;
    }
    ctx->pc = 0x1B01D4u;
    SET_GPR_U32(ctx, 31, 0x1B01DCu);
    ctx->pc = 0x1B01D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01D4u;
    // 0x1b01d8: 0x2484aac8  addiu       $a0, $a0, -0x5538 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B01DCu;
label_1b01dc:
    // 0x1b01dc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1b01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1b01e0:
    // 0x1b01e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b01e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b01e4:
    // 0x1b01e4: 0x0  nop
    ctx->pc = 0x1b01e4u;
    // NOP
label_1b01e8:
    // 0x1b01e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b01ec:
    // 0x1b01ec: 0x0  nop
    ctx->pc = 0x1b01ecu;
    // NOP
label_1b01f0:
    // 0x1b01f0: 0x0  nop
    ctx->pc = 0x1b01f0u;
    // NOP
label_1b01f4:
    // 0x1b01f4: 0x0  nop
    ctx->pc = 0x1b01f4u;
    // NOP
label_1b01f8:
    // 0x1b01f8: 0x0  nop
    ctx->pc = 0x1b01f8u;
    // NOP
label_1b01fc:
    // 0x1b01fc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1b0200:
    if (ctx->pc == 0x1B0200u) {
        ctx->pc = 0x1B0204u;
        goto label_1b0204;
    }
    ctx->pc = 0x1B01FCu;
    {
        const bool branch_taken_0x1b01fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b01fc) {
            ctx->pc = 0x1B01E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b01e8;
        }
    }
    ctx->pc = 0x1B0204u;
label_1b0204:
    // 0x1b0204: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1b0208:
    if (ctx->pc == 0x1B0208u) {
        ctx->pc = 0x1B0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0204u;
        // 0x1b0208: 0x26b06190  addiu       $s0, $s5, 0x6190 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 24976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B020Cu;
        goto label_1b020c;
    }
    ctx->pc = 0x1B0204u;
    {
        const bool branch_taken_0x1b0204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0204u;
        // 0x1b0208: 0x26b06190  addiu       $s0, $s5, 0x6190 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 24976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0204) {
            ctx->pc = 0x1B01A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b01a8;
        }
    }
    ctx->pc = 0x1B020Cu;
label_1b020c:
    // 0x1b020c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
label_1b0210:
    if (ctx->pc == 0x1B0210u) {
        ctx->pc = 0x1B0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B020Cu;
        // 0x1b0210: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0214u;
        goto label_1b0214;
    }
    ctx->pc = 0x1B020Cu;
    {
        const bool branch_taken_0x1b020c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B020Cu;
        // 0x1b0210: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b020c) {
            ctx->pc = 0x1B0180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0180;
        }
    }
    ctx->pc = 0x1B0214u;
label_1b0214:
    // 0x1b0214: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b0218:
    if (ctx->pc == 0x1B0218u) {
        ctx->pc = 0x1B0218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0214u;
        // 0x1b0218: 0xae2072c4  sw          $zero, 0x72C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 29380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B021Cu;
        goto label_1b021c;
    }
    ctx->pc = 0x1B0214u;
    {
        const bool branch_taken_0x1b0214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0214u;
        // 0x1b0218: 0xae2072c4  sw          $zero, 0x72C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 29380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0214) {
            ctx->pc = 0x1B0224u;
            goto label_1b0224;
        }
    }
    ctx->pc = 0x1B021Cu;
label_1b021c:
    // 0x1b021c: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b021cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1b0220:
    // 0x1b0220: 0x3c170029  lui         $s7, 0x29
    ctx->pc = 0x1b0220u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)41 << 16));
label_1b0224:
    // 0x1b0224: 0x269061d0  addiu       $s0, $s4, 0x61D0
    ctx->pc = 0x1b0224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 25040));
label_1b0228:
    // 0x1b0228: 0xae9261d0  sw          $s2, 0x61D0($s4)
    ctx->pc = 0x1b0228u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 25040), GPR_U32(ctx, 18));
label_1b022c:
    // 0x1b022c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b022cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0230:
    // 0x1b0230: 0xc069bee  jal         func_1A6FB8
label_1b0234:
    if (ctx->pc == 0x1B0234u) {
        ctx->pc = 0x1B0234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0230u;
        // 0x1b0234: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0238u;
        goto label_1b0238;
    }
    ctx->pc = 0x1B0230u;
    SET_GPR_U32(ctx, 31, 0x1B0238u);
    ctx->pc = 0x1B0234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0230u;
    // 0x1b0234: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1B0238u;
label_1b0238:
    // 0x1b0238: 0x26f18480  addiu       $s1, $s7, -0x7B80
    ctx->pc = 0x1b0238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935680));
label_1b023c:
    // 0x1b023c: 0x26a46190  addiu       $a0, $s5, 0x6190
    ctx->pc = 0x1b023cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 24976));
label_1b0240:
    // 0x1b0240: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b0240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0244:
    // 0x1b0244: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b0248:
    // 0x1b0248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b024c:
    // 0x1b024c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b024cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0250:
    // 0x1b0250: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1b0250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b0254:
    // 0x1b0254: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b0254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0258:
    // 0x1b0258: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b0258u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b025c:
    // 0x1b025c: 0xc069e2a  jal         func_1A78A8
label_1b0260:
    if (ctx->pc == 0x1B0260u) {
        ctx->pc = 0x1B0260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B025Cu;
        // 0x1b0260: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0264u;
        goto label_1b0264;
    }
    ctx->pc = 0x1B025Cu;
    SET_GPR_U32(ctx, 31, 0x1B0264u);
    ctx->pc = 0x1B0260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B025Cu;
    // 0x1b0260: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B0264u;
label_1b0264:
    // 0x1b0264: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
label_1b0268:
    if (ctx->pc == 0x1B0268u) {
        ctx->pc = 0x1B0268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0264u;
        // 0x1b0268: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B026Cu;
        goto label_1b026c;
    }
    ctx->pc = 0x1B0264u;
    {
        const bool branch_taken_0x1b0264 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0264) {
            ctx->pc = 0x1B0268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0264u;
            // 0x1b0268: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B028Cu;
            goto label_1b028c;
        }
    }
    ctx->pc = 0x1B026Cu;
label_1b026c:
    // 0x1b026c: 0x8e6472ac  lw          $a0, 0x72AC($s3)
    ctx->pc = 0x1b026cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29356)));
label_1b0270:
    // 0x1b0270: 0xc069210  jal         func_1A4840
label_1b0274:
    if (ctx->pc == 0x1B0274u) {
        ctx->pc = 0x1B0278u;
        goto label_1b0278;
    }
    ctx->pc = 0x1B0270u;
    SET_GPR_U32(ctx, 31, 0x1B0278u);
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B0278u;
label_1b0278:
    // 0x1b0278: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x1b0278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
label_1b027c:
    // 0x1b027c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b027cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b0280:
    // 0x1b0280: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b0280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b0284:
    // 0x1b0284: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b0288:
    if (ctx->pc == 0x1B0288u) {
        ctx->pc = 0x1B0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0284u;
        // 0x1b0288: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B028Cu;
        goto label_1b028c;
    }
    ctx->pc = 0x1B0284u;
    {
        const bool branch_taken_0x1b0284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0284u;
        // 0x1b0288: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0284) {
            ctx->pc = 0x1B02B4u;
            goto label_1b02b4;
        }
    }
    ctx->pc = 0x1B028Cu;
label_1b028c:
    // 0x1b028c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1b0290:
    if (ctx->pc == 0x1B0290u) {
        ctx->pc = 0x1B0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B028Cu;
        // 0x1b0290: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0294u;
        goto label_1b0294;
    }
    ctx->pc = 0x1B028Cu;
    {
        const bool branch_taken_0x1b028c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B028Cu;
        // 0x1b0290: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b028c) {
            ctx->pc = 0x1B029Cu;
            goto label_1b029c;
        }
    }
    ctx->pc = 0x1B0294u;
label_1b0294:
    // 0x1b0294: 0xc069a30  jal         func_1A68C0
label_1b0298:
    if (ctx->pc == 0x1B0298u) {
        ctx->pc = 0x1B0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0294u;
        // 0x1b0298: 0x2484aae8  addiu       $a0, $a0, -0x5518 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B029Cu;
        goto label_1b029c;
    }
    ctx->pc = 0x1B0294u;
    SET_GPR_U32(ctx, 31, 0x1B029Cu);
    ctx->pc = 0x1B0298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0294u;
    // 0x1b0298: 0x2484aae8  addiu       $a0, $a0, -0x5518 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B029Cu;
label_1b029c:
    // 0x1b029c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1b02a0:
    // 0x1b02a0: 0x8e6472ac  lw          $a0, 0x72AC($s3)
    ctx->pc = 0x1b02a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29356)));
label_1b02a4:
    // 0x1b02a4: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1b02a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_1b02a8:
    // 0x1b02a8: 0xc069210  jal         func_1A4840
label_1b02ac:
    if (ctx->pc == 0x1B02ACu) {
        ctx->pc = 0x1B02ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02A8u;
        // 0x1b02ac: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B02B0u;
        goto label_1b02b0;
    }
    ctx->pc = 0x1B02A8u;
    SET_GPR_U32(ctx, 31, 0x1B02B0u);
    ctx->pc = 0x1B02ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B02A8u;
    // 0x1b02ac: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B02B0u;
label_1b02b0:
    // 0x1b02b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b02b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b02b4:
    // 0x1b02b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b02b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b02b8:
    // 0x1b02b8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b02b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b02bc:
    // 0x1b02bc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b02bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b02c0:
    // 0x1b02c0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b02c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b02c4:
    // 0x1b02c4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b02c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b02c8:
    // 0x1b02c8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b02c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b02cc:
    // 0x1b02cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b02ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b02d0:
    // 0x1b02d0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b02d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b02d4:
    // 0x1b02d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b02d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b02d8:
    // 0x1b02d8: 0x3e00008  jr          $ra
label_1b02dc:
    if (ctx->pc == 0x1B02DCu) {
        ctx->pc = 0x1B02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02D8u;
        // 0x1b02dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B02E0u;
        goto label_1b02e0;
    }
    ctx->pc = 0x1B02D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B02D8u;
        // 0x1b02dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B02D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B02E0u;
label_1b02e0:
    // 0x1b02e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b02e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b02e4:
    // 0x1b02e4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b02e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b02e8:
    // 0x1b02e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b02e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b02ec:
    // 0x1b02ec: 0x3c110029  lui         $s1, 0x29
    ctx->pc = 0x1b02ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
label_1b02f0:
    // 0x1b02f0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b02f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b02f4:
    // 0x1b02f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b02f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b02f8:
    // 0x1b02f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b02f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1b02fc:
    // 0x1b02fc: 0x263288c0  addiu       $s2, $s1, -0x7740
    ctx->pc = 0x1b02fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936768));
label_1b0300:
    // 0x1b0300: 0xc06bf26  jal         func_1AFC98
label_1b0304:
    if (ctx->pc == 0x1B0304u) {
        ctx->pc = 0x1B0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0300u;
        // 0x1b0304: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0308u;
        goto label_1b0308;
    }
    ctx->pc = 0x1B0300u;
    SET_GPR_U32(ctx, 31, 0x1B0308u);
    ctx->pc = 0x1B0304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0300u;
    // 0x1b0304: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC98u;
    { ctx->pc = 0x1afc98; return; }
    ctx->pc = 0x1B0308u;
label_1b0308:
    // 0x1b0308: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1b030c:
    if (ctx->pc == 0x1B030Cu) {
        ctx->pc = 0x1B030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0308u;
        // 0x1b030c: 0xae3088c0  sw          $s0, -0x7740($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294936768), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0310u;
        goto label_1b0310;
    }
    ctx->pc = 0x1B0308u;
    {
        const bool branch_taken_0x1b0308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0308) {
            ctx->pc = 0x1B030Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0308u;
            // 0x1b030c: 0xae3088c0  sw          $s0, -0x7740($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294936768), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0318u;
            goto label_1b0318;
        }
    }
    ctx->pc = 0x1B0310u;
label_1b0310:
    // 0x1b0310: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1b0314:
    if (ctx->pc == 0x1B0314u) {
        ctx->pc = 0x1B0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0310u;
        // 0x1b0314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0318u;
        goto label_1b0318;
    }
    ctx->pc = 0x1B0310u;
    {
        const bool branch_taken_0x1b0310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0310u;
        // 0x1b0314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0310) {
            ctx->pc = 0x1B038Cu;
            goto label_1b038c;
        }
    }
    ctx->pc = 0x1B0318u;
label_1b0318:
    // 0x1b0318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b0318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b031c:
    // 0x1b031c: 0xc069bee  jal         func_1A6FB8
label_1b0320:
    if (ctx->pc == 0x1B0320u) {
        ctx->pc = 0x1B0320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B031Cu;
        // 0x1b0320: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0324u;
        goto label_1b0324;
    }
    ctx->pc = 0x1B031Cu;
    SET_GPR_U32(ctx, 31, 0x1B0324u);
    ctx->pc = 0x1B0320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B031Cu;
    // 0x1b0320: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1B0324u;
label_1b0324:
    // 0x1b0324: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1b0324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1b0328:
    // 0x1b0328: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b0328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1b032c:
    // 0x1b032c: 0x24508480  addiu       $s0, $v0, -0x7B80
    ctx->pc = 0x1b032cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
label_1b0330:
    // 0x1b0330: 0x24848cc8  addiu       $a0, $a0, -0x7338
    ctx->pc = 0x1b0330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937800));
label_1b0334:
    // 0x1b0334: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b0334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b0338:
    // 0x1b0338: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b033c:
    // 0x1b033c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1b033cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1b0340:
    // 0x1b0340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0344:
    // 0x1b0344: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1b0344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b0348:
    // 0x1b0348: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b0348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b034c:
    // 0x1b034c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b034cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b0350:
    // 0x1b0350: 0xc069e2a  jal         func_1A78A8
label_1b0354:
    if (ctx->pc == 0x1B0354u) {
        ctx->pc = 0x1B0354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0350u;
        // 0x1b0354: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0358u;
        goto label_1b0358;
    }
    ctx->pc = 0x1B0350u;
    SET_GPR_U32(ctx, 31, 0x1B0358u);
    ctx->pc = 0x1B0354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0350u;
    // 0x1b0354: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B0358u;
label_1b0358:
    // 0x1b0358: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_1b035c:
    if (ctx->pc == 0x1B035Cu) {
        ctx->pc = 0x1B035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0358u;
        // 0x1b035c: 0x3c030028  lui         $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0360u;
        goto label_1b0360;
    }
    ctx->pc = 0x1B0358u;
    {
        const bool branch_taken_0x1b0358 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0358u;
        // 0x1b035c: 0x3c030028  lui         $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0358) {
            ctx->pc = 0x1B0374u;
            goto label_1b0374;
        }
    }
    ctx->pc = 0x1B0360u;
label_1b0360:
    // 0x1b0360: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b0364:
    // 0x1b0364: 0xc069210  jal         func_1A4840
label_1b0368:
    if (ctx->pc == 0x1B0368u) {
        ctx->pc = 0x1B0368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0364u;
        // 0x1b0368: 0x8c4472ac  lw          $a0, 0x72AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B036Cu;
        goto label_1b036c;
    }
    ctx->pc = 0x1B0364u;
    SET_GPR_U32(ctx, 31, 0x1B036Cu);
    ctx->pc = 0x1B0368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0364u;
    // 0x1b0368: 0x8c4472ac  lw          $a0, 0x72AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B036Cu;
label_1b036c:
    // 0x1b036c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b0370:
    if (ctx->pc == 0x1B0370u) {
        ctx->pc = 0x1B0370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B036Cu;
        // 0x1b0370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0374u;
        goto label_1b0374;
    }
    ctx->pc = 0x1B036Cu;
    {
        const bool branch_taken_0x1b036c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B036Cu;
        // 0x1b0370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b036c) {
            ctx->pc = 0x1B038Cu;
            goto label_1b038c;
        }
    }
    ctx->pc = 0x1B0374u;
label_1b0374:
    // 0x1b0374: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b0374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1b0378:
    // 0x1b0378: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b0378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1b037c:
    // 0x1b037c: 0x8c6472ac  lw          $a0, 0x72AC($v1)
    ctx->pc = 0x1b037cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29356)));
label_1b0380:
    // 0x1b0380: 0xc069210  jal         func_1A4840
label_1b0384:
    if (ctx->pc == 0x1B0384u) {
        ctx->pc = 0x1B0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0380u;
        // 0x1b0384: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0388u;
        goto label_1b0388;
    }
    ctx->pc = 0x1B0380u;
    SET_GPR_U32(ctx, 31, 0x1B0388u);
    ctx->pc = 0x1B0384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0380u;
    // 0x1b0384: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B0388u;
label_1b0388:
    // 0x1b0388: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b038c:
    // 0x1b038c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b038cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b0390:
    // 0x1b0390: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b0390u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b0394:
    // 0x1b0394: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b0394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b0398:
    // 0x1b0398: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b0398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b039c:
    // 0x1b039c: 0x3e00008  jr          $ra
label_1b03a0:
    if (ctx->pc == 0x1B03A0u) {
        ctx->pc = 0x1B03A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B039Cu;
        // 0x1b03a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B03A4u;
        goto label_1b03a4;
    }
    ctx->pc = 0x1B039Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B03A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B039Cu;
        // 0x1b03a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B039Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B03A4u;
label_1b03a4:
    // 0x1b03a4: 0x0  nop
    ctx->pc = 0x1b03a4u;
    // NOP
label_1b03a8:
    // 0x1b03a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b03a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1b03ac:
    // 0x1b03ac: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1b03acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1b03b0:
    // 0x1b03b0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b03b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1b03b4:
    // 0x1b03b4: 0x3c150028  lui         $s5, 0x28
    ctx->pc = 0x1b03b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
label_1b03b8:
    // 0x1b03b8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b03b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1b03bc:
    // 0x1b03bc: 0x8ea272b4  lw          $v0, 0x72B4($s5)
    ctx->pc = 0x1b03bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29364)));
label_1b03c0:
    // 0x1b03c0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1b03c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b03c4:
    // 0x1b03c4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b03c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b03c8:
    // 0x1b03c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b03c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b03cc:
    // 0x1b03cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b03ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b03d0:
    // 0x1b03d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b03d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b03d4:
    // 0x1b03d4: 0x24727380  addiu       $s2, $v1, 0x7380
    ctx->pc = 0x1b03d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 29568));
label_1b03d8:
    // 0x1b03d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b03d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b03dc:
    // 0x1b03dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b03dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b03e0:
    // 0x1b03e0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b03e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1b03e4:
    // 0x1b03e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b03e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b03e8:
    // 0x1b03e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b03ec:
    if (ctx->pc == 0x1B03ECu) {
        ctx->pc = 0x1B03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03E8u;
        // 0x1b03ec: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B03F0u;
        goto label_1b03f0;
    }
    ctx->pc = 0x1B03E8u;
    {
        const bool branch_taken_0x1b03e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03E8u;
        // 0x1b03ec: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03e8) {
            ctx->pc = 0x1B0404u;
            goto label_1b0404;
        }
    }
    ctx->pc = 0x1B03F0u;
label_1b03f0:
    // 0x1b03f0: 0xc06bebc  jal         func_1AFAF0
label_1b03f4:
    if (ctx->pc == 0x1B03F4u) {
        ctx->pc = 0x1B03F8u;
        goto label_1b03f8;
    }
    ctx->pc = 0x1B03F0u;
    SET_GPR_U32(ctx, 31, 0x1B03F8u);
    ctx->pc = 0x1AFAF0u;
    { ctx->pc = 0x1afaf0; return; }
    ctx->pc = 0x1B03F8u;
label_1b03f8:
    // 0x1b03f8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b03f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b03fc:
    // 0x1b03fc: 0x10430059  beq         $v0, $v1, . + 4 + (0x59 << 2)
label_1b0400:
    if (ctx->pc == 0x1B0400u) {
        ctx->pc = 0x1B0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03FCu;
        // 0x1b0400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0404u;
        goto label_1b0404;
    }
    ctx->pc = 0x1B03FCu;
    {
        const bool branch_taken_0x1b03fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B03FCu;
        // 0x1b0400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b03fc) {
            ctx->pc = 0x1B0564u;
            goto label_1b0564;
        }
    }
    ctx->pc = 0x1B0404u;
label_1b0404:
    // 0x1b0404: 0xc06be60  jal         func_1AF980
label_1b0408:
    if (ctx->pc == 0x1B0408u) {
        ctx->pc = 0x1B0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0404u;
        // 0x1b0408: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B040Cu;
        goto label_1b040c;
    }
    ctx->pc = 0x1B0404u;
    SET_GPR_U32(ctx, 31, 0x1B040Cu);
    ctx->pc = 0x1B0408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0404u;
    // 0x1b0408: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF980u;
    { ctx->pc = 0x1af980; return; }
    ctx->pc = 0x1B040Cu;
label_1b040c:
    // 0x1b040c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_1b0410:
    if (ctx->pc == 0x1B0410u) {
        ctx->pc = 0x1B0410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B040Cu;
        // 0x1b0410: 0x3c080029  lui         $t0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0414u;
        goto label_1b0414;
    }
    ctx->pc = 0x1B040Cu;
    {
        const bool branch_taken_0x1b040c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B040Cu;
        // 0x1b0410: 0x3c080029  lui         $t0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b040c) {
            ctx->pc = 0x1B0544u;
            goto label_1b0544;
        }
    }
    ctx->pc = 0x1B0414u;
label_1b0414:
    // 0x1b0414: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x1b0414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_1b0418:
    // 0x1b0418: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x1b0418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
label_1b041c:
    // 0x1b041c: 0x3c130029  lui         $s3, 0x29
    ctx->pc = 0x1b041cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)41 << 16));
label_1b0420:
    // 0x1b0420: 0xae540008  sw          $s4, 0x8($s2)
    ctx->pc = 0x1b0420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
label_1b0424:
    // 0x1b0424: 0x26648380  addiu       $a0, $s3, -0x7C80
    ctx->pc = 0x1b0424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935424));
label_1b0428:
    // 0x1b0428: 0x25058440  addiu       $a1, $t0, -0x7BC0
    ctx->pc = 0x1b0428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935616));
label_1b042c:
    // 0x1b042c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b042cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0430:
    // 0x1b0430: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b0430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0434:
    // 0x1b0434: 0xa242000c  sb          $v0, 0xC($s2)
    ctx->pc = 0x1b0434u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
label_1b0438:
    // 0x1b0438: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b0438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b043c:
    // 0x1b043c: 0xa243000d  sb          $v1, 0xD($s2)
    ctx->pc = 0x1b043cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13), (uint8_t)GPR_U32(ctx, 3));
label_1b0440:
    // 0x1b0440: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1b0440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1b0444:
    // 0x1b0444: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x1b0444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
label_1b0448:
    // 0x1b0448: 0xa242000e  sb          $v0, 0xE($s2)
    ctx->pc = 0x1b0448u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 14), (uint8_t)GPR_U32(ctx, 2));
label_1b044c:
    // 0x1b044c: 0xae450014  sw          $a1, 0x14($s2)
    ctx->pc = 0x1b044cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 5));
label_1b0450:
    // 0x1b0450: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x1b0450u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_1b0454:
    // 0x1b0454: 0x10e60008  beq         $a3, $a2, . + 4 + (0x8 << 2)
label_1b0458:
    if (ctx->pc == 0x1B0458u) {
        ctx->pc = 0x1B0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0454u;
        // 0x1b0458: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B045Cu;
        goto label_1b045c;
    }
    ctx->pc = 0x1B0454u;
    {
        const bool branch_taken_0x1b0454 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1B0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0454u;
        // 0x1b0458: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0454) {
            ctx->pc = 0x1B0478u;
            goto label_1b0478;
        }
    }
    ctx->pc = 0x1B045Cu;
label_1b045c:
    // 0x1b045c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1b0460:
    if (ctx->pc == 0x1B0460u) {
        ctx->pc = 0x1B0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B045Cu;
        // 0x1b0460: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0464u;
        goto label_1b0464;
    }
    ctx->pc = 0x1B045Cu;
    {
        const bool branch_taken_0x1b045c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B045Cu;
        // 0x1b0460: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b045c) {
            ctx->pc = 0x1B0488u;
            goto label_1b0488;
        }
    }
    ctx->pc = 0x1B0464u;
label_1b0464:
    // 0x1b0464: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b0464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b0468:
    // 0x1b0468: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
label_1b046c:
    if (ctx->pc == 0x1B046Cu) {
        ctx->pc = 0x1B046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0468u;
        // 0x1b046c: 0x24020924  addiu       $v0, $zero, 0x924 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2340));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0470u;
        goto label_1b0470;
    }
    ctx->pc = 0x1B0468u;
    {
        const bool branch_taken_0x1b0468 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0468u;
        // 0x1b046c: 0x24020924  addiu       $v0, $zero, 0x924 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0468) {
            ctx->pc = 0x1B0484u;
            goto label_1b0484;
        }
    }
    ctx->pc = 0x1B0470u;
label_1b0470:
    // 0x1b0470: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b0474:
    if (ctx->pc == 0x1B0474u) {
        ctx->pc = 0x1B0478u;
        goto label_1b0478;
    }
    ctx->pc = 0x1B0470u;
    {
        const bool branch_taken_0x1b0470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0470) {
            ctx->pc = 0x1B0488u;
            goto label_1b0488;
        }
    }
    ctx->pc = 0x1B0478u;
label_1b0478:
    // 0x1b0478: 0x24020918  addiu       $v0, $zero, 0x918
    ctx->pc = 0x1b0478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2328));
label_1b047c:
    // 0x1b047c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b0480:
    if (ctx->pc == 0x1B0480u) {
        ctx->pc = 0x1B0480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B047Cu;
        // 0x1b0480: 0x2222818  mult        $a1, $s1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0484u;
        goto label_1b0484;
    }
    ctx->pc = 0x1B047Cu;
    {
        const bool branch_taken_0x1b047c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B047Cu;
        // 0x1b0480: 0x2222818  mult        $a1, $s1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b047c) {
            ctx->pc = 0x1B0488u;
            goto label_1b0488;
        }
    }
    ctx->pc = 0x1B0484u;
label_1b0484:
    // 0x1b0484: 0x2222818  mult        $a1, $s1, $v0
    ctx->pc = 0x1b0484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1b0488:
    // 0x1b0488: 0x8ea272b4  lw          $v0, 0x72B4($s5)
    ctx->pc = 0x1b0488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29364)));
label_1b048c:
    // 0x1b048c: 0x25108440  addiu       $s0, $t0, -0x7BC0
    ctx->pc = 0x1b048cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935616));
label_1b0490:
    // 0x1b0490: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b0490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1b0494:
    // 0x1b0494: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b0498:
    if (ctx->pc == 0x1B0498u) {
        ctx->pc = 0x1B0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0494u;
        // 0x1b0498: 0xad008440  sw          $zero, -0x7BC0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294935616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B049Cu;
        goto label_1b049c;
    }
    ctx->pc = 0x1B0494u;
    {
        const bool branch_taken_0x1b0494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0494u;
        // 0x1b0498: 0xad008440  sw          $zero, -0x7BC0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294935616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0494) {
            ctx->pc = 0x1B04A4u;
            goto label_1b04a4;
        }
    }
    ctx->pc = 0x1B049Cu;
label_1b049c:
    // 0x1b049c: 0xc069bee  jal         func_1A6FB8
label_1b04a0:
    if (ctx->pc == 0x1B04A0u) {
        ctx->pc = 0x1B04A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B049Cu;
        // 0x1b04a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04A4u;
        goto label_1b04a4;
    }
    ctx->pc = 0x1B049Cu;
    SET_GPR_U32(ctx, 31, 0x1B04A4u);
    ctx->pc = 0x1B04A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B049Cu;
    // 0x1b04a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1B04A4u;
label_1b04a4:
    // 0x1b04a4: 0x26738380  addiu       $s3, $s3, -0x7C80
    ctx->pc = 0x1b04a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935424));
label_1b04a8:
    // 0x1b04a8: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1b04a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1b04ac:
    // 0x1b04ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b04acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b04b0:
    // 0x1b04b0: 0xc069bee  jal         func_1A6FB8
label_1b04b4:
    if (ctx->pc == 0x1B04B4u) {
        ctx->pc = 0x1B04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04B0u;
        // 0x1b04b4: 0x3c140028  lui         $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04B8u;
        goto label_1b04b8;
    }
    ctx->pc = 0x1B04B0u;
    SET_GPR_U32(ctx, 31, 0x1B04B8u);
    ctx->pc = 0x1B04B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04B0u;
    // 0x1b04b4: 0x3c140028  lui         $s4, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1B04B8u;
label_1b04b8:
    // 0x1b04b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b04b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b04bc:
    // 0x1b04bc: 0xc069bee  jal         func_1A6FB8
label_1b04c0:
    if (ctx->pc == 0x1B04C0u) {
        ctx->pc = 0x1B04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04BCu;
        // 0x1b04c0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04C4u;
        goto label_1b04c4;
    }
    ctx->pc = 0x1B04BCu;
    SET_GPR_U32(ctx, 31, 0x1B04C4u);
    ctx->pc = 0x1B04C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04BCu;
    // 0x1b04c0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1B04C4u;
label_1b04c4:
    // 0x1b04c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b04c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b04c8:
    // 0x1b04c8: 0xc069bee  jal         func_1A6FB8
label_1b04cc:
    if (ctx->pc == 0x1B04CCu) {
        ctx->pc = 0x1B04CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04C8u;
        // 0x1b04cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04D0u;
        goto label_1b04d0;
    }
    ctx->pc = 0x1B04C8u;
    SET_GPR_U32(ctx, 31, 0x1B04D0u);
    ctx->pc = 0x1B04CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04C8u;
    // 0x1b04cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1B04D0u;
label_1b04d0:
    // 0x1b04d0: 0x8e827290  lw          $v0, 0x7290($s4)
    ctx->pc = 0x1b04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
label_1b04d4:
    // 0x1b04d4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1b04d8:
    if (ctx->pc == 0x1B04D8u) {
        ctx->pc = 0x1B04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04D4u;
        // 0x1b04d8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04DCu;
        goto label_1b04dc;
    }
    ctx->pc = 0x1B04D4u;
    {
        const bool branch_taken_0x1b04d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04D4u;
        // 0x1b04d8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04d4) {
            ctx->pc = 0x1B04E4u;
            goto label_1b04e4;
        }
    }
    ctx->pc = 0x1B04DCu;
label_1b04dc:
    // 0x1b04dc: 0xc069a30  jal         func_1A68C0
label_1b04e0:
    if (ctx->pc == 0x1B04E0u) {
        ctx->pc = 0x1B04E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04DCu;
        // 0x1b04e0: 0x2484ab00  addiu       $a0, $a0, -0x5500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B04E4u;
        goto label_1b04e4;
    }
    ctx->pc = 0x1B04DCu;
    SET_GPR_U32(ctx, 31, 0x1B04E4u);
    ctx->pc = 0x1B04E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04DCu;
    // 0x1b04e0: 0x2484ab00  addiu       $a0, $a0, -0x5500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B04E4u;
label_1b04e4:
    // 0x1b04e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b04e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b04e8:
    // 0x1b04e8: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1b04e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1b04ec:
    // 0x1b04ec: 0xae0272d4  sw          $v0, 0x72D4($s0)
    ctx->pc = 0x1b04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 2));
label_1b04f0:
    // 0x1b04f0: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x1b04f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
label_1b04f4:
    // 0x1b04f4: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b04f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1b04f8:
    // 0x1b04f8: 0x3c0b001b  lui         $t3, 0x1B
    ctx->pc = 0x1b04f8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27 << 16));
label_1b04fc:
    // 0x1b04fc: 0xae2272b0  sw          $v0, 0x72B0($s1)
    ctx->pc = 0x1b04fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29360), GPR_U32(ctx, 2));
label_1b0500:
    // 0x1b0500: 0x24848450  addiu       $a0, $a0, -0x7BB0
    ctx->pc = 0x1b0500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935632));
label_1b0504:
    // 0x1b0504: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1b0504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_1b0508:
    // 0x1b0508: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b0508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b050c:
    // 0x1b050c: 0x256bf348  addiu       $t3, $t3, -0xCB8
    ctx->pc = 0x1b050cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294964040));
label_1b0510:
    // 0x1b0510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0514:
    // 0x1b0514: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b0514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0518:
    // 0x1b0518: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x1b0518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1b051c:
    // 0x1b051c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b051cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0520:
    // 0x1b0520: 0xc069e2a  jal         func_1A78A8
label_1b0524:
    if (ctx->pc == 0x1B0524u) {
        ctx->pc = 0x1B0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0520u;
        // 0x1b0524: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0528u;
        goto label_1b0528;
    }
    ctx->pc = 0x1B0520u;
    SET_GPR_U32(ctx, 31, 0x1B0528u);
    ctx->pc = 0x1B0524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0520u;
    // 0x1b0524: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B0528u;
label_1b0528:
    // 0x1b0528: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
label_1b052c:
    if (ctx->pc == 0x1B052Cu) {
        ctx->pc = 0x1B052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0528u;
        // 0x1b052c: 0x8e827290  lw          $v0, 0x7290($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0530u;
        goto label_1b0530;
    }
    ctx->pc = 0x1B0528u;
    {
        const bool branch_taken_0x1b0528 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0528) {
            ctx->pc = 0x1B052Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0528u;
            // 0x1b052c: 0x8e827290  lw          $v0, 0x7290($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B054Cu;
            goto label_1b054c;
        }
    }
    ctx->pc = 0x1B0530u;
label_1b0530:
    // 0x1b0530: 0xae0072d4  sw          $zero, 0x72D4($s0)
    ctx->pc = 0x1b0530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 0));
label_1b0534:
    // 0x1b0534: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b0538:
    // 0x1b0538: 0xae2072b0  sw          $zero, 0x72B0($s1)
    ctx->pc = 0x1b0538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29360), GPR_U32(ctx, 0));
label_1b053c:
    // 0x1b053c: 0xc069210  jal         func_1A4840
label_1b0540:
    if (ctx->pc == 0x1B0540u) {
        ctx->pc = 0x1B0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B053Cu;
        // 0x1b0540: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0544u;
        goto label_1b0544;
    }
    ctx->pc = 0x1B053Cu;
    SET_GPR_U32(ctx, 31, 0x1B0544u);
    ctx->pc = 0x1B0540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B053Cu;
    // 0x1b0540: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B0544u;
label_1b0544:
    // 0x1b0544: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b0548:
    if (ctx->pc == 0x1B0548u) {
        ctx->pc = 0x1B0548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0544u;
        // 0x1b0548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B054Cu;
        goto label_1b054c;
    }
    ctx->pc = 0x1B0544u;
    {
        const bool branch_taken_0x1b0544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0544u;
        // 0x1b0548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0544) {
            ctx->pc = 0x1B0564u;
            goto label_1b0564;
        }
    }
    ctx->pc = 0x1B054Cu;
label_1b054c:
    // 0x1b054c: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_1b0550:
    if (ctx->pc == 0x1B0550u) {
        ctx->pc = 0x1B0550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B054Cu;
        // 0x1b0550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0554u;
        goto label_1b0554;
    }
    ctx->pc = 0x1B054Cu;
    {
        const bool branch_taken_0x1b054c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B054Cu;
        // 0x1b0550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b054c) {
            ctx->pc = 0x1B0564u;
            goto label_1b0564;
        }
    }
    ctx->pc = 0x1B0554u;
label_1b0554:
    // 0x1b0554: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1b0558:
    // 0x1b0558: 0xc069a30  jal         func_1A68C0
label_1b055c:
    if (ctx->pc == 0x1B055Cu) {
        ctx->pc = 0x1B055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0558u;
        // 0x1b055c: 0x2484ab18  addiu       $a0, $a0, -0x54E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0560u;
        goto label_1b0560;
    }
    ctx->pc = 0x1B0558u;
    SET_GPR_U32(ctx, 31, 0x1B0560u);
    ctx->pc = 0x1B055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0558u;
    // 0x1b055c: 0x2484ab18  addiu       $a0, $a0, -0x54E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1B0560u;
label_1b0560:
    // 0x1b0560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0564:
    // 0x1b0564: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b0564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b0568:
    // 0x1b0568: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b0568u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b056c:
    // 0x1b056c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b056cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b0570:
    // 0x1b0570: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b0570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b0574:
    // 0x1b0574: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b0574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b0578:
    // 0x1b0578: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b0578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b057c:
    // 0x1b057c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b057cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0580:
    // 0x1b0580: 0x3e00008  jr          $ra
label_1b0584:
    if (ctx->pc == 0x1B0584u) {
        ctx->pc = 0x1B0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0580u;
        // 0x1b0584: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0588u;
        goto label_1b0588;
    }
    ctx->pc = 0x1B0580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0580u;
        // 0x1b0584: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0588u;
label_1b0588:
    // 0x1b0588: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b0588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b058c:
    // 0x1b058c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b058cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b0590:
    // 0x1b0590: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b0590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b0594:
    // 0x1b0594: 0xc06bebc  jal         func_1AFAF0
label_1b0598:
    if (ctx->pc == 0x1B0598u) {
        ctx->pc = 0x1B0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0594u;
        // 0x1b0598: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B059Cu;
        goto label_1b059c;
    }
    ctx->pc = 0x1B0594u;
    SET_GPR_U32(ctx, 31, 0x1B059Cu);
    ctx->pc = 0x1B0598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0594u;
    // 0x1b0598: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAF0u;
    { ctx->pc = 0x1afaf0; return; }
    ctx->pc = 0x1B059Cu;
label_1b059c:
    // 0x1b059c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b05a0:
    // 0x1b05a0: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
label_1b05a4:
    if (ctx->pc == 0x1B05A4u) {
        ctx->pc = 0x1B05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05A0u;
        // 0x1b05a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B05A8u;
        goto label_1b05a8;
    }
    ctx->pc = 0x1B05A0u;
    {
        const bool branch_taken_0x1b05a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05A0u;
        // 0x1b05a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05a0) {
            ctx->pc = 0x1B0620u;
            goto label_1b0620;
        }
    }
    ctx->pc = 0x1B05A8u;
label_1b05a8:
    // 0x1b05a8: 0xc06be60  jal         func_1AF980
label_1b05ac:
    if (ctx->pc == 0x1B05ACu) {
        ctx->pc = 0x1B05ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05A8u;
        // 0x1b05ac: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B05B0u;
        goto label_1b05b0;
    }
    ctx->pc = 0x1B05A8u;
    SET_GPR_U32(ctx, 31, 0x1B05B0u);
    ctx->pc = 0x1B05ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B05A8u;
    // 0x1b05ac: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF980u;
    { ctx->pc = 0x1af980; return; }
    ctx->pc = 0x1B05B0u;
label_1b05b0:
    // 0x1b05b0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1b05b4:
    if (ctx->pc == 0x1B05B4u) {
        ctx->pc = 0x1B05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05B0u;
        // 0x1b05b4: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B05B8u;
        goto label_1b05b8;
    }
    ctx->pc = 0x1B05B0u;
    {
        const bool branch_taken_0x1b05b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05B0u;
        // 0x1b05b4: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05b0) {
            ctx->pc = 0x1B061Cu;
            goto label_1b061c;
        }
    }
    ctx->pc = 0x1B05B8u;
label_1b05b8:
    // 0x1b05b8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b05bc:
    // 0x1b05bc: 0xae0272d4  sw          $v0, 0x72D4($s0)
    ctx->pc = 0x1b05bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 2));
label_1b05c0:
    // 0x1b05c0: 0x260372d4  addiu       $v1, $s0, 0x72D4
    ctx->pc = 0x1b05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 29396));
label_1b05c4:
    // 0x1b05c4: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x1b05c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
label_1b05c8:
    // 0x1b05c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b05cc:
    // 0x1b05cc: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b05ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1b05d0:
    // 0x1b05d0: 0x3c0b001b  lui         $t3, 0x1B
    ctx->pc = 0x1b05d0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27 << 16));
label_1b05d4:
    // 0x1b05d4: 0xae2272b0  sw          $v0, 0x72B0($s1)
    ctx->pc = 0x1b05d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29360), GPR_U32(ctx, 2));
label_1b05d8:
    // 0x1b05d8: 0x24848450  addiu       $a0, $a0, -0x7BB0
    ctx->pc = 0x1b05d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935632));
label_1b05dc:
    // 0x1b05dc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1b05dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1b05e0:
    // 0x1b05e0: 0x256bf110  addiu       $t3, $t3, -0xEF0
    ctx->pc = 0x1b05e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294963472));
label_1b05e4:
    // 0x1b05e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b05e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b05e8:
    // 0x1b05e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b05e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b05ec:
    // 0x1b05ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b05ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b05f0:
    // 0x1b05f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b05f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b05f4:
    // 0x1b05f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b05f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b05f8:
    // 0x1b05f8: 0xc069e2a  jal         func_1A78A8
label_1b05fc:
    if (ctx->pc == 0x1B05FCu) {
        ctx->pc = 0x1B05FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05F8u;
        // 0x1b05fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0600u;
        goto label_1b0600;
    }
    ctx->pc = 0x1B05F8u;
    SET_GPR_U32(ctx, 31, 0x1B0600u);
    ctx->pc = 0x1B05FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B05F8u;
    // 0x1b05fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B0600u;
label_1b0600:
    // 0x1b0600: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
label_1b0604:
    if (ctx->pc == 0x1B0604u) {
        ctx->pc = 0x1B0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0600u;
        // 0x1b0604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0608u;
        goto label_1b0608;
    }
    ctx->pc = 0x1B0600u;
    {
        const bool branch_taken_0x1b0600 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0600) {
            ctx->pc = 0x1B0604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0600u;
            // 0x1b0604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0620u;
            goto label_1b0620;
        }
    }
    ctx->pc = 0x1B0608u;
label_1b0608:
    // 0x1b0608: 0xae0072d4  sw          $zero, 0x72D4($s0)
    ctx->pc = 0x1b0608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 0));
label_1b060c:
    // 0x1b060c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b0610:
    // 0x1b0610: 0xae2072b0  sw          $zero, 0x72B0($s1)
    ctx->pc = 0x1b0610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29360), GPR_U32(ctx, 0));
label_1b0614:
    // 0x1b0614: 0xc069210  jal         func_1A4840
label_1b0618:
    if (ctx->pc == 0x1B0618u) {
        ctx->pc = 0x1B0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0614u;
        // 0x1b0618: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B061Cu;
        goto label_1b061c;
    }
    ctx->pc = 0x1B0614u;
    SET_GPR_U32(ctx, 31, 0x1B061Cu);
    ctx->pc = 0x1B0618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0614u;
    // 0x1b0618: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B061Cu;
label_1b061c:
    // 0x1b061c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b061cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0620:
    // 0x1b0620: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b0620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b0624:
    // 0x1b0624: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b0624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b0628:
    // 0x1b0628: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b0628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b062c:
    // 0x1b062c: 0x3e00008  jr          $ra
label_1b0630:
    if (ctx->pc == 0x1B0630u) {
        ctx->pc = 0x1B0630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B062Cu;
        // 0x1b0630: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0634u;
        goto label_1b0634;
    }
    ctx->pc = 0x1B062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B062Cu;
        // 0x1b0630: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B062Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0634u;
label_1b0634:
    // 0x1b0634: 0x0  nop
    ctx->pc = 0x1b0634u;
    // NOP
label_1b0638:
    // 0x1b0638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b063c:
    // 0x1b063c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b063cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0640:
    // 0x1b0640: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b0640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b0644:
    // 0x1b0644: 0xc06bf26  jal         func_1AFC98
label_1b0648:
    if (ctx->pc == 0x1B0648u) {
        ctx->pc = 0x1B0648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0644u;
        // 0x1b0648: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B064Cu;
        goto label_1b064c;
    }
    ctx->pc = 0x1B0644u;
    SET_GPR_U32(ctx, 31, 0x1B064Cu);
    ctx->pc = 0x1B0648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0644u;
    // 0x1b0648: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC98u;
    { ctx->pc = 0x1afc98; return; }
    ctx->pc = 0x1B064Cu;
label_1b064c:
    // 0x1b064c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b0650:
    if (ctx->pc == 0x1B0650u) {
        ctx->pc = 0x1B0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B064Cu;
        // 0x1b0650: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0654u;
        goto label_1b0654;
    }
    ctx->pc = 0x1B064Cu;
    {
        const bool branch_taken_0x1b064c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B064Cu;
        // 0x1b0650: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b064c) {
            ctx->pc = 0x1B065Cu;
            goto label_1b065c;
        }
    }
    ctx->pc = 0x1B0654u;
label_1b0654:
    // 0x1b0654: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1b0658:
    if (ctx->pc == 0x1B0658u) {
        ctx->pc = 0x1B0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0654u;
        // 0x1b0658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B065Cu;
        goto label_1b065c;
    }
    ctx->pc = 0x1B0654u;
    {
        const bool branch_taken_0x1b0654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0654u;
        // 0x1b0658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0654) {
            ctx->pc = 0x1B06C0u;
            goto label_1b06c0;
        }
    }
    ctx->pc = 0x1B065Cu;
label_1b065c:
    // 0x1b065c: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b065cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1b0660:
    // 0x1b0660: 0x24508480  addiu       $s0, $v0, -0x7B80
    ctx->pc = 0x1b0660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
label_1b0664:
    // 0x1b0664: 0x24848cc8  addiu       $a0, $a0, -0x7338
    ctx->pc = 0x1b0664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937800));
label_1b0668:
    // 0x1b0668: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b066c:
    // 0x1b066c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b066cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b0670:
    // 0x1b0670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0674:
    // 0x1b0674: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b0674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0678:
    // 0x1b0678: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b0678u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b067c:
    // 0x1b067c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b067cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0680:
    // 0x1b0680: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b0680u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b0684:
    // 0x1b0684: 0xc069e2a  jal         func_1A78A8
label_1b0688:
    if (ctx->pc == 0x1B0688u) {
        ctx->pc = 0x1B0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0684u;
        // 0x1b0688: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B068Cu;
        goto label_1b068c;
    }
    ctx->pc = 0x1B0684u;
    SET_GPR_U32(ctx, 31, 0x1B068Cu);
    ctx->pc = 0x1B0688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0684u;
    // 0x1b0688: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B068Cu;
label_1b068c:
    // 0x1b068c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_1b0690:
    if (ctx->pc == 0x1B0690u) {
        ctx->pc = 0x1B0690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B068Cu;
        // 0x1b0690: 0x3c030028  lui         $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0694u;
        goto label_1b0694;
    }
    ctx->pc = 0x1B068Cu;
    {
        const bool branch_taken_0x1b068c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B0690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B068Cu;
        // 0x1b0690: 0x3c030028  lui         $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b068c) {
            ctx->pc = 0x1B06A8u;
            goto label_1b06a8;
        }
    }
    ctx->pc = 0x1B0694u;
label_1b0694:
    // 0x1b0694: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b0698:
    // 0x1b0698: 0xc069210  jal         func_1A4840
label_1b069c:
    if (ctx->pc == 0x1B069Cu) {
        ctx->pc = 0x1B069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0698u;
        // 0x1b069c: 0x8c4472ac  lw          $a0, 0x72AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B06A0u;
        goto label_1b06a0;
    }
    ctx->pc = 0x1B0698u;
    SET_GPR_U32(ctx, 31, 0x1B06A0u);
    ctx->pc = 0x1B069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0698u;
    // 0x1b069c: 0x8c4472ac  lw          $a0, 0x72AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B06A0u;
label_1b06a0:
    // 0x1b06a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b06a4:
    if (ctx->pc == 0x1B06A4u) {
        ctx->pc = 0x1B06A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06A0u;
        // 0x1b06a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B06A8u;
        goto label_1b06a8;
    }
    ctx->pc = 0x1B06A0u;
    {
        const bool branch_taken_0x1b06a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06A0u;
        // 0x1b06a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06a0) {
            ctx->pc = 0x1B06C0u;
            goto label_1b06c0;
        }
    }
    ctx->pc = 0x1B06A8u;
label_1b06a8:
    // 0x1b06a8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b06a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1b06ac:
    // 0x1b06ac: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b06acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1b06b0:
    // 0x1b06b0: 0x8c6472ac  lw          $a0, 0x72AC($v1)
    ctx->pc = 0x1b06b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29356)));
label_1b06b4:
    // 0x1b06b4: 0xc069210  jal         func_1A4840
label_1b06b8:
    if (ctx->pc == 0x1B06B8u) {
        ctx->pc = 0x1B06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06B4u;
        // 0x1b06b8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B06BCu;
        goto label_1b06bc;
    }
    ctx->pc = 0x1B06B4u;
    SET_GPR_U32(ctx, 31, 0x1B06BCu);
    ctx->pc = 0x1B06B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B06B4u;
    // 0x1b06b8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B06BCu;
label_1b06bc:
    // 0x1b06bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b06bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b06c0:
    // 0x1b06c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b06c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b06c4:
    // 0x1b06c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b06c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b06c8:
    // 0x1b06c8: 0x3e00008  jr          $ra
label_1b06cc:
    if (ctx->pc == 0x1B06CCu) {
        ctx->pc = 0x1B06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06C8u;
        // 0x1b06cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B06D0u;
        goto label_1b06d0;
    }
    ctx->pc = 0x1B06C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06C8u;
        // 0x1b06cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B06C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B06D0u;
label_1b06d0:
    // 0x1b06d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b06d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b06d4:
    // 0x1b06d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b06d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b06d8:
    // 0x1b06d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b06d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b06dc:
    // 0x1b06dc: 0xc06bf26  jal         func_1AFC98
label_1b06e0:
    if (ctx->pc == 0x1B06E0u) {
        ctx->pc = 0x1B06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06DCu;
        // 0x1b06e0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B06E4u;
        goto label_1b06e4;
    }
    ctx->pc = 0x1B06DCu;
    SET_GPR_U32(ctx, 31, 0x1B06E4u);
    ctx->pc = 0x1B06E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B06DCu;
    // 0x1b06e0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC98u;
    { ctx->pc = 0x1afc98; return; }
    ctx->pc = 0x1B06E4u;
label_1b06e4:
    // 0x1b06e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b06e8:
    if (ctx->pc == 0x1B06E8u) {
        ctx->pc = 0x1B06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06E4u;
        // 0x1b06e8: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B06ECu;
        goto label_1b06ec;
    }
    ctx->pc = 0x1B06E4u;
    {
        const bool branch_taken_0x1b06e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06E4u;
        // 0x1b06e8: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06e4) {
            ctx->pc = 0x1B06F4u;
            goto label_1b06f4;
        }
    }
    ctx->pc = 0x1B06ECu;
label_1b06ec:
    // 0x1b06ec: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1b06f0:
    if (ctx->pc == 0x1B06F0u) {
        ctx->pc = 0x1B06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06ECu;
        // 0x1b06f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B06F4u;
        goto label_1b06f4;
    }
    ctx->pc = 0x1B06ECu;
    {
        const bool branch_taken_0x1b06ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B06ECu;
        // 0x1b06f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06ec) {
            ctx->pc = 0x1B0758u;
            goto label_1b0758;
        }
    }
    ctx->pc = 0x1B06F4u;
label_1b06f4:
    // 0x1b06f4: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b06f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1b06f8:
    // 0x1b06f8: 0x24508480  addiu       $s0, $v0, -0x7B80
    ctx->pc = 0x1b06f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
label_1b06fc:
    // 0x1b06fc: 0x24848cc8  addiu       $a0, $a0, -0x7338
    ctx->pc = 0x1b06fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937800));
label_1b0700:
    // 0x1b0700: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b0704:
    // 0x1b0704: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b0704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b0708:
    // 0x1b0708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b070c:
    // 0x1b070c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b070cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0710:
    // 0x1b0710: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b0710u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0714:
    // 0x1b0714: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b0714u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0718:
    // 0x1b0718: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b0718u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b071c:
    // 0x1b071c: 0xc069e2a  jal         func_1A78A8
label_1b0720:
    if (ctx->pc == 0x1B0720u) {
        ctx->pc = 0x1B0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B071Cu;
        // 0x1b0720: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0724u;
        goto label_1b0724;
    }
    ctx->pc = 0x1B071Cu;
    SET_GPR_U32(ctx, 31, 0x1B0724u);
    ctx->pc = 0x1B0720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B071Cu;
    // 0x1b0720: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B0724u;
label_1b0724:
    // 0x1b0724: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_1b0728:
    if (ctx->pc == 0x1B0728u) {
        ctx->pc = 0x1B0728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0724u;
        // 0x1b0728: 0x3c030028  lui         $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B072Cu;
        goto label_1b072c;
    }
    ctx->pc = 0x1B0724u;
    {
        const bool branch_taken_0x1b0724 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B0728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0724u;
        // 0x1b0728: 0x3c030028  lui         $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0724) {
            ctx->pc = 0x1B0740u;
            goto label_1b0740;
        }
    }
    ctx->pc = 0x1B072Cu;
label_1b072c:
    // 0x1b072c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b072cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b0730:
    // 0x1b0730: 0xc069210  jal         func_1A4840
label_1b0734:
    if (ctx->pc == 0x1B0734u) {
        ctx->pc = 0x1B0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0730u;
        // 0x1b0734: 0x8c4472ac  lw          $a0, 0x72AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0738u;
        goto label_1b0738;
    }
    ctx->pc = 0x1B0730u;
    SET_GPR_U32(ctx, 31, 0x1B0738u);
    ctx->pc = 0x1B0734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0730u;
    // 0x1b0734: 0x8c4472ac  lw          $a0, 0x72AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B0738u;
label_1b0738:
    // 0x1b0738: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b073c:
    if (ctx->pc == 0x1B073Cu) {
        ctx->pc = 0x1B073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0738u;
        // 0x1b073c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0740u;
        goto label_1b0740;
    }
    ctx->pc = 0x1B0738u;
    {
        const bool branch_taken_0x1b0738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0738u;
        // 0x1b073c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0738) {
            ctx->pc = 0x1B0758u;
            goto label_1b0758;
        }
    }
    ctx->pc = 0x1B0740u;
label_1b0740:
    // 0x1b0740: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b0740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1b0744:
    // 0x1b0744: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b0744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1b0748:
    // 0x1b0748: 0x8c6472ac  lw          $a0, 0x72AC($v1)
    ctx->pc = 0x1b0748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29356)));
label_1b074c:
    // 0x1b074c: 0xc069210  jal         func_1A4840
label_1b0750:
    if (ctx->pc == 0x1B0750u) {
        ctx->pc = 0x1B0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B074Cu;
        // 0x1b0750: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0754u;
        goto label_1b0754;
    }
    ctx->pc = 0x1B074Cu;
    SET_GPR_U32(ctx, 31, 0x1B0754u);
    ctx->pc = 0x1B0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B074Cu;
    // 0x1b0750: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B0754u;
label_1b0754:
    // 0x1b0754: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0758:
    // 0x1b0758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b0758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b075c:
    // 0x1b075c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b075cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b0760:
    // 0x1b0760: 0x3e00008  jr          $ra
label_1b0764:
    if (ctx->pc == 0x1B0764u) {
        ctx->pc = 0x1B0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0760u;
        // 0x1b0764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0768u;
        goto label_1b0768;
    }
    ctx->pc = 0x1B0760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0760u;
        // 0x1b0764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0768u;
label_1b0768:
    // 0x1b0768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b076c:
    // 0x1b076c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b076cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b0770:
    // 0x1b0770: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b0770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b0774:
    // 0x1b0774: 0xc06bf26  jal         func_1AFC98
label_1b0778:
    if (ctx->pc == 0x1B0778u) {
        ctx->pc = 0x1B0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0774u;
        // 0x1b0778: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B077Cu;
        goto label_1b077c;
    }
    ctx->pc = 0x1B0774u;
    SET_GPR_U32(ctx, 31, 0x1B077Cu);
    ctx->pc = 0x1B0778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0774u;
    // 0x1b0778: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC98u;
    { ctx->pc = 0x1afc98; return; }
    ctx->pc = 0x1B077Cu;
label_1b077c:
    // 0x1b077c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b0780:
    if (ctx->pc == 0x1B0780u) {
        ctx->pc = 0x1B0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B077Cu;
        // 0x1b0780: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0784u;
        goto label_1b0784;
    }
    ctx->pc = 0x1B077Cu;
    {
        const bool branch_taken_0x1b077c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B077Cu;
        // 0x1b0780: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b077c) {
            ctx->pc = 0x1B078Cu;
            goto label_1b078c;
        }
    }
    ctx->pc = 0x1B0784u;
label_1b0784:
    // 0x1b0784: 0x10000022  b           . + 4 + (0x22 << 2)
label_1b0788:
    if (ctx->pc == 0x1B0788u) {
        ctx->pc = 0x1B0788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0784u;
        // 0x1b0788: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B078Cu;
        goto label_1b078c;
    }
    ctx->pc = 0x1B0784u;
    {
        const bool branch_taken_0x1b0784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0784u;
        // 0x1b0788: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0784) {
            ctx->pc = 0x1B0810u;
            { ctx->pc = 0x1b0810; return; }
        }
    }
    ctx->pc = 0x1B078Cu;
label_1b078c:
    // 0x1b078c: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b078cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1b0790:
    // 0x1b0790: 0x24508480  addiu       $s0, $v0, -0x7B80
    ctx->pc = 0x1b0790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
label_1b0794:
    // 0x1b0794: 0x24848cc8  addiu       $a0, $a0, -0x7338
    ctx->pc = 0x1b0794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937800));
label_1b0798:
    // 0x1b0798: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b079c:
    // 0x1b079c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b079cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b07a0:
    // 0x1b07a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b07a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b07a4:
    // 0x1b07a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b07a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b07a8:
    // 0x1b07a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b07a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b07ac:
    // 0x1b07ac: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b07acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b07b0:
    // 0x1b07b0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b07b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b07b4:
    // 0x1b07b4: 0xc069e2a  jal         func_1A78A8
label_1b07b8:
    if (ctx->pc == 0x1B07B8u) {
        ctx->pc = 0x1B07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07B4u;
        // 0x1b07b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B07BCu;
        goto label_1b07bc;
    }
    ctx->pc = 0x1B07B4u;
    SET_GPR_U32(ctx, 31, 0x1B07BCu);
    ctx->pc = 0x1B07B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B07B4u;
    // 0x1b07b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B07BCu;
label_1b07bc:
    // 0x1b07bc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_1b07c0:
    if (ctx->pc == 0x1B07C0u) {
        ctx->pc = 0x1B07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07BCu;
        // 0x1b07c0: 0x3c030028  lui         $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B07C4u;
        goto label_1b07c4;
    }
    ctx->pc = 0x1B07BCu;
    {
        const bool branch_taken_0x1b07bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07BCu;
        // 0x1b07c0: 0x3c030028  lui         $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07bc) {
            ctx->pc = 0x1B07D8u;
            goto label_1b07d8;
        }
    }
    ctx->pc = 0x1B07C4u;
label_1b07c4:
    // 0x1b07c4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b07c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1b07c8:
    // 0x1b07c8: 0xc069210  jal         func_1A4840
label_1b07cc:
    if (ctx->pc == 0x1B07CCu) {
        ctx->pc = 0x1B07CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07C8u;
        // 0x1b07cc: 0x8c4472ac  lw          $a0, 0x72AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B07D0u;
        goto label_1b07d0;
    }
    ctx->pc = 0x1B07C8u;
    SET_GPR_U32(ctx, 31, 0x1B07D0u);
    ctx->pc = 0x1B07CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B07C8u;
    // 0x1b07cc: 0x8c4472ac  lw          $a0, 0x72AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B07D0u;
label_1b07d0:
    // 0x1b07d0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b07d4:
    if (ctx->pc == 0x1B07D4u) {
        ctx->pc = 0x1B07D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07D0u;
        // 0x1b07d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B07D8u;
        goto label_1b07d8;
    }
    ctx->pc = 0x1B07D0u;
    {
        const bool branch_taken_0x1b07d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B07D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07D0u;
        // 0x1b07d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b07d0) {
            ctx->pc = 0x1B0810u;
            { ctx->pc = 0x1b0810; return; }
        }
    }
    ctx->pc = 0x1B07D8u;
label_1b07d8:
    // 0x1b07d8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b07d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1b07dc:
    // 0x1b07dc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b07dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1b07e0:
    // 0x1b07e0: 0x8c6472ac  lw          $a0, 0x72AC($v1)
    ctx->pc = 0x1b07e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29356)));
label_1b07e4:
    // 0x1b07e4: 0xc069210  jal         func_1A4840
label_1b07e8:
    if (ctx->pc == 0x1B07E8u) {
        ctx->pc = 0x1B07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B07E4u;
        // 0x1b07e8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B07ECu;
        goto label_1b07ec;
    }
    ctx->pc = 0x1B07E4u;
    SET_GPR_U32(ctx, 31, 0x1B07ECu);
    ctx->pc = 0x1B07E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B07E4u;
    // 0x1b07e8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B07ECu;
label_1b07ec:
    // 0x1b07ec: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1b07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1b07f0:
    // 0x1b07f0: 0x8c627290  lw          $v0, 0x7290($v1)
    ctx->pc = 0x1b07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29328)));
label_1b07f4:
    // 0x1b07f4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1b07f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x1b07f8u;
    return;
}

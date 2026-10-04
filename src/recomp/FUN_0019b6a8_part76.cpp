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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part76(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c0098u: goto label_1c0098;
        case 0x1c009cu: goto label_1c009c;
        case 0x1c00a0u: goto label_1c00a0;
        case 0x1c00a4u: goto label_1c00a4;
        case 0x1c00a8u: goto label_1c00a8;
        case 0x1c00acu: goto label_1c00ac;
        case 0x1c00b0u: goto label_1c00b0;
        case 0x1c00b4u: goto label_1c00b4;
        case 0x1c00b8u: goto label_1c00b8;
        case 0x1c00bcu: goto label_1c00bc;
        case 0x1c00c0u: goto label_1c00c0;
        case 0x1c00c4u: goto label_1c00c4;
        case 0x1c00c8u: goto label_1c00c8;
        case 0x1c00ccu: goto label_1c00cc;
        case 0x1c00d0u: goto label_1c00d0;
        case 0x1c00d4u: goto label_1c00d4;
        case 0x1c00d8u: goto label_1c00d8;
        case 0x1c00dcu: goto label_1c00dc;
        case 0x1c00e0u: goto label_1c00e0;
        case 0x1c00e4u: goto label_1c00e4;
        case 0x1c00e8u: goto label_1c00e8;
        case 0x1c00ecu: goto label_1c00ec;
        case 0x1c00f0u: goto label_1c00f0;
        case 0x1c00f4u: goto label_1c00f4;
        case 0x1c00f8u: goto label_1c00f8;
        case 0x1c00fcu: goto label_1c00fc;
        case 0x1c0100u: goto label_1c0100;
        case 0x1c0104u: goto label_1c0104;
        case 0x1c0108u: goto label_1c0108;
        case 0x1c010cu: goto label_1c010c;
        case 0x1c0110u: goto label_1c0110;
        case 0x1c0114u: goto label_1c0114;
        case 0x1c0118u: goto label_1c0118;
        case 0x1c011cu: goto label_1c011c;
        case 0x1c0120u: goto label_1c0120;
        case 0x1c0124u: goto label_1c0124;
        case 0x1c0128u: goto label_1c0128;
        case 0x1c012cu: goto label_1c012c;
        case 0x1c0130u: goto label_1c0130;
        case 0x1c0134u: goto label_1c0134;
        case 0x1c0138u: goto label_1c0138;
        case 0x1c013cu: goto label_1c013c;
        case 0x1c0140u: goto label_1c0140;
        case 0x1c0144u: goto label_1c0144;
        case 0x1c0148u: goto label_1c0148;
        case 0x1c014cu: goto label_1c014c;
        case 0x1c0150u: goto label_1c0150;
        case 0x1c0154u: goto label_1c0154;
        case 0x1c0158u: goto label_1c0158;
        case 0x1c015cu: goto label_1c015c;
        case 0x1c0160u: goto label_1c0160;
        case 0x1c0164u: goto label_1c0164;
        case 0x1c0168u: goto label_1c0168;
        case 0x1c016cu: goto label_1c016c;
        case 0x1c0170u: goto label_1c0170;
        case 0x1c0174u: goto label_1c0174;
        case 0x1c0178u: goto label_1c0178;
        case 0x1c017cu: goto label_1c017c;
        case 0x1c0180u: goto label_1c0180;
        case 0x1c0184u: goto label_1c0184;
        case 0x1c0188u: goto label_1c0188;
        case 0x1c018cu: goto label_1c018c;
        case 0x1c0190u: goto label_1c0190;
        case 0x1c0194u: goto label_1c0194;
        case 0x1c0198u: goto label_1c0198;
        case 0x1c019cu: goto label_1c019c;
        case 0x1c01a0u: goto label_1c01a0;
        case 0x1c01a4u: goto label_1c01a4;
        case 0x1c01a8u: goto label_1c01a8;
        case 0x1c01acu: goto label_1c01ac;
        case 0x1c01b0u: goto label_1c01b0;
        case 0x1c01b4u: goto label_1c01b4;
        case 0x1c01b8u: goto label_1c01b8;
        case 0x1c01bcu: goto label_1c01bc;
        case 0x1c01c0u: goto label_1c01c0;
        case 0x1c01c4u: goto label_1c01c4;
        case 0x1c01c8u: goto label_1c01c8;
        case 0x1c01ccu: goto label_1c01cc;
        case 0x1c01d0u: goto label_1c01d0;
        case 0x1c01d4u: goto label_1c01d4;
        case 0x1c01d8u: goto label_1c01d8;
        case 0x1c01dcu: goto label_1c01dc;
        case 0x1c01e0u: goto label_1c01e0;
        case 0x1c01e4u: goto label_1c01e4;
        case 0x1c01e8u: goto label_1c01e8;
        case 0x1c01ecu: goto label_1c01ec;
        case 0x1c01f0u: goto label_1c01f0;
        case 0x1c01f4u: goto label_1c01f4;
        case 0x1c01f8u: goto label_1c01f8;
        case 0x1c01fcu: goto label_1c01fc;
        case 0x1c0200u: goto label_1c0200;
        case 0x1c0204u: goto label_1c0204;
        case 0x1c0208u: goto label_1c0208;
        case 0x1c020cu: goto label_1c020c;
        case 0x1c0210u: goto label_1c0210;
        case 0x1c0214u: goto label_1c0214;
        case 0x1c0218u: goto label_1c0218;
        case 0x1c021cu: goto label_1c021c;
        case 0x1c0220u: goto label_1c0220;
        case 0x1c0224u: goto label_1c0224;
        case 0x1c0228u: goto label_1c0228;
        case 0x1c022cu: goto label_1c022c;
        case 0x1c0230u: goto label_1c0230;
        case 0x1c0234u: goto label_1c0234;
        case 0x1c0238u: goto label_1c0238;
        case 0x1c023cu: goto label_1c023c;
        case 0x1c0240u: goto label_1c0240;
        case 0x1c0244u: goto label_1c0244;
        case 0x1c0248u: goto label_1c0248;
        case 0x1c024cu: goto label_1c024c;
        case 0x1c0250u: goto label_1c0250;
        case 0x1c0254u: goto label_1c0254;
        case 0x1c0258u: goto label_1c0258;
        case 0x1c025cu: goto label_1c025c;
        case 0x1c0260u: goto label_1c0260;
        case 0x1c0264u: goto label_1c0264;
        case 0x1c0268u: goto label_1c0268;
        case 0x1c026cu: goto label_1c026c;
        case 0x1c0270u: goto label_1c0270;
        case 0x1c0274u: goto label_1c0274;
        case 0x1c0278u: goto label_1c0278;
        case 0x1c027cu: goto label_1c027c;
        case 0x1c0280u: goto label_1c0280;
        case 0x1c0284u: goto label_1c0284;
        case 0x1c0288u: goto label_1c0288;
        case 0x1c028cu: goto label_1c028c;
        case 0x1c0290u: goto label_1c0290;
        case 0x1c0294u: goto label_1c0294;
        case 0x1c0298u: goto label_1c0298;
        case 0x1c029cu: goto label_1c029c;
        case 0x1c02a0u: goto label_1c02a0;
        case 0x1c02a4u: goto label_1c02a4;
        case 0x1c02a8u: goto label_1c02a8;
        case 0x1c02acu: goto label_1c02ac;
        case 0x1c02b0u: goto label_1c02b0;
        case 0x1c02b4u: goto label_1c02b4;
        case 0x1c02b8u: goto label_1c02b8;
        case 0x1c02bcu: goto label_1c02bc;
        case 0x1c02c0u: goto label_1c02c0;
        case 0x1c02c4u: goto label_1c02c4;
        case 0x1c02c8u: goto label_1c02c8;
        case 0x1c02ccu: goto label_1c02cc;
        case 0x1c02d0u: goto label_1c02d0;
        case 0x1c02d4u: goto label_1c02d4;
        case 0x1c02d8u: goto label_1c02d8;
        case 0x1c02dcu: goto label_1c02dc;
        case 0x1c02e0u: goto label_1c02e0;
        case 0x1c02e4u: goto label_1c02e4;
        case 0x1c02e8u: goto label_1c02e8;
        case 0x1c02ecu: goto label_1c02ec;
        case 0x1c02f0u: goto label_1c02f0;
        case 0x1c02f4u: goto label_1c02f4;
        case 0x1c02f8u: goto label_1c02f8;
        case 0x1c02fcu: goto label_1c02fc;
        case 0x1c0300u: goto label_1c0300;
        case 0x1c0304u: goto label_1c0304;
        case 0x1c0308u: goto label_1c0308;
        case 0x1c030cu: goto label_1c030c;
        case 0x1c0310u: goto label_1c0310;
        case 0x1c0314u: goto label_1c0314;
        case 0x1c0318u: goto label_1c0318;
        case 0x1c031cu: goto label_1c031c;
        case 0x1c0320u: goto label_1c0320;
        case 0x1c0324u: goto label_1c0324;
        case 0x1c0328u: goto label_1c0328;
        case 0x1c032cu: goto label_1c032c;
        case 0x1c0330u: goto label_1c0330;
        case 0x1c0334u: goto label_1c0334;
        case 0x1c0338u: goto label_1c0338;
        case 0x1c033cu: goto label_1c033c;
        case 0x1c0340u: goto label_1c0340;
        case 0x1c0344u: goto label_1c0344;
        case 0x1c0348u: goto label_1c0348;
        case 0x1c034cu: goto label_1c034c;
        case 0x1c0350u: goto label_1c0350;
        case 0x1c0354u: goto label_1c0354;
        case 0x1c0358u: goto label_1c0358;
        case 0x1c035cu: goto label_1c035c;
        case 0x1c0360u: goto label_1c0360;
        case 0x1c0364u: goto label_1c0364;
        case 0x1c0368u: goto label_1c0368;
        case 0x1c036cu: goto label_1c036c;
        case 0x1c0370u: goto label_1c0370;
        case 0x1c0374u: goto label_1c0374;
        case 0x1c0378u: goto label_1c0378;
        case 0x1c037cu: goto label_1c037c;
        case 0x1c0380u: goto label_1c0380;
        case 0x1c0384u: goto label_1c0384;
        case 0x1c0388u: goto label_1c0388;
        case 0x1c038cu: goto label_1c038c;
        case 0x1c0390u: goto label_1c0390;
        case 0x1c0394u: goto label_1c0394;
        case 0x1c0398u: goto label_1c0398;
        case 0x1c039cu: goto label_1c039c;
        case 0x1c03a0u: goto label_1c03a0;
        case 0x1c03a4u: goto label_1c03a4;
        case 0x1c03a8u: goto label_1c03a8;
        case 0x1c03acu: goto label_1c03ac;
        case 0x1c03b0u: goto label_1c03b0;
        case 0x1c03b4u: goto label_1c03b4;
        case 0x1c03b8u: goto label_1c03b8;
        case 0x1c03bcu: goto label_1c03bc;
        case 0x1c03c0u: goto label_1c03c0;
        case 0x1c03c4u: goto label_1c03c4;
        case 0x1c03c8u: goto label_1c03c8;
        case 0x1c03ccu: goto label_1c03cc;
        case 0x1c03d0u: goto label_1c03d0;
        case 0x1c03d4u: goto label_1c03d4;
        case 0x1c03d8u: goto label_1c03d8;
        case 0x1c03dcu: goto label_1c03dc;
        case 0x1c03e0u: goto label_1c03e0;
        case 0x1c03e4u: goto label_1c03e4;
        case 0x1c03e8u: goto label_1c03e8;
        case 0x1c03ecu: goto label_1c03ec;
        case 0x1c03f0u: goto label_1c03f0;
        case 0x1c03f4u: goto label_1c03f4;
        case 0x1c03f8u: goto label_1c03f8;
        case 0x1c03fcu: goto label_1c03fc;
        case 0x1c0400u: goto label_1c0400;
        case 0x1c0404u: goto label_1c0404;
        case 0x1c0408u: goto label_1c0408;
        case 0x1c040cu: goto label_1c040c;
        case 0x1c0410u: goto label_1c0410;
        case 0x1c0414u: goto label_1c0414;
        case 0x1c0418u: goto label_1c0418;
        case 0x1c041cu: goto label_1c041c;
        case 0x1c0420u: goto label_1c0420;
        case 0x1c0424u: goto label_1c0424;
        case 0x1c0428u: goto label_1c0428;
        case 0x1c042cu: goto label_1c042c;
        case 0x1c0430u: goto label_1c0430;
        case 0x1c0434u: goto label_1c0434;
        case 0x1c0438u: goto label_1c0438;
        case 0x1c043cu: goto label_1c043c;
        case 0x1c0440u: goto label_1c0440;
        case 0x1c0444u: goto label_1c0444;
        case 0x1c0448u: goto label_1c0448;
        case 0x1c044cu: goto label_1c044c;
        case 0x1c0450u: goto label_1c0450;
        case 0x1c0454u: goto label_1c0454;
        case 0x1c0458u: goto label_1c0458;
        case 0x1c045cu: goto label_1c045c;
        case 0x1c0460u: goto label_1c0460;
        case 0x1c0464u: goto label_1c0464;
        case 0x1c0468u: goto label_1c0468;
        case 0x1c046cu: goto label_1c046c;
        case 0x1c0470u: goto label_1c0470;
        case 0x1c0474u: goto label_1c0474;
        case 0x1c0478u: goto label_1c0478;
        case 0x1c047cu: goto label_1c047c;
        case 0x1c0480u: goto label_1c0480;
        case 0x1c0484u: goto label_1c0484;
        case 0x1c0488u: goto label_1c0488;
        case 0x1c048cu: goto label_1c048c;
        case 0x1c0490u: goto label_1c0490;
        case 0x1c0494u: goto label_1c0494;
        case 0x1c0498u: goto label_1c0498;
        case 0x1c049cu: goto label_1c049c;
        case 0x1c04a0u: goto label_1c04a0;
        case 0x1c04a4u: goto label_1c04a4;
        case 0x1c04a8u: goto label_1c04a8;
        case 0x1c04acu: goto label_1c04ac;
        case 0x1c04b0u: goto label_1c04b0;
        case 0x1c04b4u: goto label_1c04b4;
        case 0x1c04b8u: goto label_1c04b8;
        case 0x1c04bcu: goto label_1c04bc;
        case 0x1c04c0u: goto label_1c04c0;
        case 0x1c04c4u: goto label_1c04c4;
        case 0x1c04c8u: goto label_1c04c8;
        case 0x1c04ccu: goto label_1c04cc;
        case 0x1c04d0u: goto label_1c04d0;
        case 0x1c04d4u: goto label_1c04d4;
        case 0x1c04d8u: goto label_1c04d8;
        case 0x1c04dcu: goto label_1c04dc;
        case 0x1c04e0u: goto label_1c04e0;
        case 0x1c04e4u: goto label_1c04e4;
        case 0x1c04e8u: goto label_1c04e8;
        case 0x1c04ecu: goto label_1c04ec;
        case 0x1c04f0u: goto label_1c04f0;
        case 0x1c04f4u: goto label_1c04f4;
        case 0x1c04f8u: goto label_1c04f8;
        case 0x1c04fcu: goto label_1c04fc;
        case 0x1c0500u: goto label_1c0500;
        case 0x1c0504u: goto label_1c0504;
        case 0x1c0508u: goto label_1c0508;
        case 0x1c050cu: goto label_1c050c;
        case 0x1c0510u: goto label_1c0510;
        case 0x1c0514u: goto label_1c0514;
        case 0x1c0518u: goto label_1c0518;
        case 0x1c051cu: goto label_1c051c;
        case 0x1c0520u: goto label_1c0520;
        case 0x1c0524u: goto label_1c0524;
        case 0x1c0528u: goto label_1c0528;
        case 0x1c052cu: goto label_1c052c;
        case 0x1c0530u: goto label_1c0530;
        case 0x1c0534u: goto label_1c0534;
        case 0x1c0538u: goto label_1c0538;
        case 0x1c053cu: goto label_1c053c;
        case 0x1c0540u: goto label_1c0540;
        case 0x1c0544u: goto label_1c0544;
        case 0x1c0548u: goto label_1c0548;
        case 0x1c054cu: goto label_1c054c;
        case 0x1c0550u: goto label_1c0550;
        case 0x1c0554u: goto label_1c0554;
        case 0x1c0558u: goto label_1c0558;
        case 0x1c055cu: goto label_1c055c;
        case 0x1c0560u: goto label_1c0560;
        case 0x1c0564u: goto label_1c0564;
        case 0x1c0568u: goto label_1c0568;
        case 0x1c056cu: goto label_1c056c;
        case 0x1c0570u: goto label_1c0570;
        case 0x1c0574u: goto label_1c0574;
        case 0x1c0578u: goto label_1c0578;
        case 0x1c057cu: goto label_1c057c;
        case 0x1c0580u: goto label_1c0580;
        case 0x1c0584u: goto label_1c0584;
        case 0x1c0588u: goto label_1c0588;
        case 0x1c058cu: goto label_1c058c;
        case 0x1c0590u: goto label_1c0590;
        case 0x1c0594u: goto label_1c0594;
        case 0x1c0598u: goto label_1c0598;
        case 0x1c059cu: goto label_1c059c;
        case 0x1c05a0u: goto label_1c05a0;
        case 0x1c05a4u: goto label_1c05a4;
        case 0x1c05a8u: goto label_1c05a8;
        case 0x1c05acu: goto label_1c05ac;
        case 0x1c05b0u: goto label_1c05b0;
        case 0x1c05b4u: goto label_1c05b4;
        case 0x1c05b8u: goto label_1c05b8;
        case 0x1c05bcu: goto label_1c05bc;
        case 0x1c05c0u: goto label_1c05c0;
        case 0x1c05c4u: goto label_1c05c4;
        case 0x1c05c8u: goto label_1c05c8;
        case 0x1c05ccu: goto label_1c05cc;
        case 0x1c05d0u: goto label_1c05d0;
        case 0x1c05d4u: goto label_1c05d4;
        case 0x1c05d8u: goto label_1c05d8;
        case 0x1c05dcu: goto label_1c05dc;
        case 0x1c05e0u: goto label_1c05e0;
        case 0x1c05e4u: goto label_1c05e4;
        case 0x1c05e8u: goto label_1c05e8;
        case 0x1c05ecu: goto label_1c05ec;
        case 0x1c05f0u: goto label_1c05f0;
        case 0x1c05f4u: goto label_1c05f4;
        case 0x1c05f8u: goto label_1c05f8;
        case 0x1c05fcu: goto label_1c05fc;
        case 0x1c0600u: goto label_1c0600;
        case 0x1c0604u: goto label_1c0604;
        case 0x1c0608u: goto label_1c0608;
        case 0x1c060cu: goto label_1c060c;
        case 0x1c0610u: goto label_1c0610;
        case 0x1c0614u: goto label_1c0614;
        case 0x1c0618u: goto label_1c0618;
        case 0x1c061cu: goto label_1c061c;
        case 0x1c0620u: goto label_1c0620;
        case 0x1c0624u: goto label_1c0624;
        case 0x1c0628u: goto label_1c0628;
        case 0x1c062cu: goto label_1c062c;
        case 0x1c0630u: goto label_1c0630;
        case 0x1c0634u: goto label_1c0634;
        case 0x1c0638u: goto label_1c0638;
        case 0x1c063cu: goto label_1c063c;
        case 0x1c0640u: goto label_1c0640;
        case 0x1c0644u: goto label_1c0644;
        case 0x1c0648u: goto label_1c0648;
        case 0x1c064cu: goto label_1c064c;
        case 0x1c0650u: goto label_1c0650;
        case 0x1c0654u: goto label_1c0654;
        case 0x1c0658u: goto label_1c0658;
        case 0x1c065cu: goto label_1c065c;
        case 0x1c0660u: goto label_1c0660;
        case 0x1c0664u: goto label_1c0664;
        case 0x1c0668u: goto label_1c0668;
        case 0x1c066cu: goto label_1c066c;
        case 0x1c0670u: goto label_1c0670;
        case 0x1c0674u: goto label_1c0674;
        case 0x1c0678u: goto label_1c0678;
        case 0x1c067cu: goto label_1c067c;
        case 0x1c0680u: goto label_1c0680;
        case 0x1c0684u: goto label_1c0684;
        case 0x1c0688u: goto label_1c0688;
        case 0x1c068cu: goto label_1c068c;
        case 0x1c0690u: goto label_1c0690;
        case 0x1c0694u: goto label_1c0694;
        case 0x1c0698u: goto label_1c0698;
        case 0x1c069cu: goto label_1c069c;
        case 0x1c06a0u: goto label_1c06a0;
        case 0x1c06a4u: goto label_1c06a4;
        case 0x1c06a8u: goto label_1c06a8;
        case 0x1c06acu: goto label_1c06ac;
        case 0x1c06b0u: goto label_1c06b0;
        case 0x1c06b4u: goto label_1c06b4;
        case 0x1c06b8u: goto label_1c06b8;
        case 0x1c06bcu: goto label_1c06bc;
        case 0x1c06c0u: goto label_1c06c0;
        case 0x1c06c4u: goto label_1c06c4;
        case 0x1c06c8u: goto label_1c06c8;
        case 0x1c06ccu: goto label_1c06cc;
        case 0x1c06d0u: goto label_1c06d0;
        case 0x1c06d4u: goto label_1c06d4;
        case 0x1c06d8u: goto label_1c06d8;
        case 0x1c06dcu: goto label_1c06dc;
        case 0x1c06e0u: goto label_1c06e0;
        case 0x1c06e4u: goto label_1c06e4;
        case 0x1c06e8u: goto label_1c06e8;
        case 0x1c06ecu: goto label_1c06ec;
        case 0x1c06f0u: goto label_1c06f0;
        case 0x1c06f4u: goto label_1c06f4;
        case 0x1c06f8u: goto label_1c06f8;
        case 0x1c06fcu: goto label_1c06fc;
        case 0x1c0700u: goto label_1c0700;
        case 0x1c0704u: goto label_1c0704;
        case 0x1c0708u: goto label_1c0708;
        case 0x1c070cu: goto label_1c070c;
        case 0x1c0710u: goto label_1c0710;
        case 0x1c0714u: goto label_1c0714;
        case 0x1c0718u: goto label_1c0718;
        case 0x1c071cu: goto label_1c071c;
        case 0x1c0720u: goto label_1c0720;
        case 0x1c0724u: goto label_1c0724;
        case 0x1c0728u: goto label_1c0728;
        case 0x1c072cu: goto label_1c072c;
        case 0x1c0730u: goto label_1c0730;
        case 0x1c0734u: goto label_1c0734;
        case 0x1c0738u: goto label_1c0738;
        case 0x1c073cu: goto label_1c073c;
        case 0x1c0740u: goto label_1c0740;
        case 0x1c0744u: goto label_1c0744;
        case 0x1c0748u: goto label_1c0748;
        case 0x1c074cu: goto label_1c074c;
        case 0x1c0750u: goto label_1c0750;
        case 0x1c0754u: goto label_1c0754;
        case 0x1c0758u: goto label_1c0758;
        case 0x1c075cu: goto label_1c075c;
        case 0x1c0760u: goto label_1c0760;
        case 0x1c0764u: goto label_1c0764;
        case 0x1c0768u: goto label_1c0768;
        case 0x1c076cu: goto label_1c076c;
        case 0x1c0770u: goto label_1c0770;
        case 0x1c0774u: goto label_1c0774;
        case 0x1c0778u: goto label_1c0778;
        case 0x1c077cu: goto label_1c077c;
        case 0x1c0780u: goto label_1c0780;
        case 0x1c0784u: goto label_1c0784;
        case 0x1c0788u: goto label_1c0788;
        case 0x1c078cu: goto label_1c078c;
        case 0x1c0790u: goto label_1c0790;
        case 0x1c0794u: goto label_1c0794;
        case 0x1c0798u: goto label_1c0798;
        case 0x1c079cu: goto label_1c079c;
        case 0x1c07a0u: goto label_1c07a0;
        case 0x1c07a4u: goto label_1c07a4;
        case 0x1c07a8u: goto label_1c07a8;
        case 0x1c07acu: goto label_1c07ac;
        case 0x1c07b0u: goto label_1c07b0;
        case 0x1c07b4u: goto label_1c07b4;
        case 0x1c07b8u: goto label_1c07b8;
        case 0x1c07bcu: goto label_1c07bc;
        case 0x1c07c0u: goto label_1c07c0;
        case 0x1c07c4u: goto label_1c07c4;
        case 0x1c07c8u: goto label_1c07c8;
        case 0x1c07ccu: goto label_1c07cc;
        case 0x1c07d0u: goto label_1c07d0;
        case 0x1c07d4u: goto label_1c07d4;
        case 0x1c07d8u: goto label_1c07d8;
        case 0x1c07dcu: goto label_1c07dc;
        case 0x1c07e0u: goto label_1c07e0;
        case 0x1c07e4u: goto label_1c07e4;
        case 0x1c07e8u: goto label_1c07e8;
        case 0x1c07ecu: goto label_1c07ec;
        case 0x1c07f0u: goto label_1c07f0;
        case 0x1c07f4u: goto label_1c07f4;
        case 0x1c07f8u: goto label_1c07f8;
        case 0x1c07fcu: goto label_1c07fc;
        case 0x1c0800u: goto label_1c0800;
        case 0x1c0804u: goto label_1c0804;
        case 0x1c0808u: goto label_1c0808;
        case 0x1c080cu: goto label_1c080c;
        case 0x1c0810u: goto label_1c0810;
        case 0x1c0814u: goto label_1c0814;
        case 0x1c0818u: goto label_1c0818;
        case 0x1c081cu: goto label_1c081c;
        case 0x1c0820u: goto label_1c0820;
        case 0x1c0824u: goto label_1c0824;
        case 0x1c0828u: goto label_1c0828;
        case 0x1c082cu: goto label_1c082c;
        case 0x1c0830u: goto label_1c0830;
        case 0x1c0834u: goto label_1c0834;
        case 0x1c0838u: goto label_1c0838;
        case 0x1c083cu: goto label_1c083c;
        case 0x1c0840u: goto label_1c0840;
        case 0x1c0844u: goto label_1c0844;
        case 0x1c0848u: goto label_1c0848;
        case 0x1c084cu: goto label_1c084c;
        case 0x1c0850u: goto label_1c0850;
        case 0x1c0854u: goto label_1c0854;
        case 0x1c0858u: goto label_1c0858;
        case 0x1c085cu: goto label_1c085c;
        case 0x1c0860u: goto label_1c0860;
        case 0x1c0864u: goto label_1c0864;
        default: return;
    }

label_1c0098:
    // 0x1c0098: 0xac254a98  sw          $a1, 0x4A98($at)
    ctx->pc = 0x1c0098u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19096), GPR_U32(ctx, 5));
label_1c009c:
    // 0x1c009c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c009cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c00a0:
    // 0x1c00a0: 0xac254a94  sw          $a1, 0x4A94($at)
    ctx->pc = 0x1c00a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19092), GPR_U32(ctx, 5));
label_1c00a4:
    // 0x1c00a4: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c00a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c00a8:
    // 0x1c00a8: 0x8c244a98  lw          $a0, 0x4A98($at)
    ctx->pc = 0x1c00a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19096)));
label_1c00ac:
    // 0x1c00ac: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x1c00acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1c00b0:
    // 0x1c00b0: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c00b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c00b4:
    // 0x1c00b4: 0x8c234aa8  lw          $v1, 0x4AA8($at)
    ctx->pc = 0x1c00b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19112)));
label_1c00b8:
    // 0x1c00b8: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c00b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c00bc:
    // 0x1c00bc: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1c00bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1c00c0:
    // 0x1c00c0: 0xac244a9c  sw          $a0, 0x4A9C($at)
    ctx->pc = 0x1c00c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19100), GPR_U32(ctx, 4));
label_1c00c4:
    // 0x1c00c4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1c00c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1c00c8:
    // 0x1c00c8: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c00c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c00cc:
    // 0x1c00cc: 0xac234aac  sw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c00ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19116), GPR_U32(ctx, 3));
label_1c00d0:
    // 0x1c00d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c00d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c00d4:
    // 0x1c00d4: 0x3e00008  jr          $ra
label_1c00d8:
    if (ctx->pc == 0x1C00D8u) {
        ctx->pc = 0x1C00D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00D4u;
        // 0x1c00d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C00DCu;
        goto label_1c00dc;
    }
    ctx->pc = 0x1C00D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C00D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00D4u;
        // 0x1c00d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C00D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C00DCu;
label_1c00dc:
    // 0x1c00dc: 0x0  nop
    ctx->pc = 0x1c00dcu;
    // NOP
label_1c00e0:
    // 0x1c00e0: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
label_1c00e4:
    if (ctx->pc == 0x1C00E4u) {
        ctx->pc = 0x1C00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00E0u;
        // 0x1c00e4: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C00E8u;
        goto label_1c00e8;
    }
    ctx->pc = 0x1C00E0u;
    {
        const bool branch_taken_0x1c00e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00E0u;
        // 0x1c00e4: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00e0) {
            ctx->pc = 0x1C01F0u;
            goto label_1c01f0;
        }
    }
    ctx->pc = 0x1C00E8u;
label_1c00e8:
    // 0x1c00e8: 0x8c234a9c  lw          $v1, 0x4A9C($at)
    ctx->pc = 0x1c00e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19100)));
label_1c00ec:
    // 0x1c00ec: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1c00ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c00f0:
    // 0x1c00f0: 0x0  nop
    ctx->pc = 0x1c00f0u;
    // NOP
label_1c00f4:
    // 0x1c00f4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1c00f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1c00f8:
    // 0x1c00f8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1c00fc:
    if (ctx->pc == 0x1C00FCu) {
        ctx->pc = 0x1C0100u;
        goto label_1c0100;
    }
    ctx->pc = 0x1C00F8u;
    {
        const bool branch_taken_0x1c00f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c00f8) {
            ctx->pc = 0x1C0108u;
            goto label_1c0108;
        }
    }
    ctx->pc = 0x1C0100u;
label_1c0100:
    // 0x1c0100: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c0104:
    if (ctx->pc == 0x1C0104u) {
        ctx->pc = 0x1C0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0100u;
        // 0x1c0104: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0108u;
        goto label_1c0108;
    }
    ctx->pc = 0x1C0100u;
    {
        const bool branch_taken_0x1c0100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0100u;
        // 0x1c0104: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0100) {
            ctx->pc = 0x1C0110u;
            goto label_1c0110;
        }
    }
    ctx->pc = 0x1C0108u;
label_1c0108:
    // 0x1c0108: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1c010c:
    if (ctx->pc == 0x1C010Cu) {
        ctx->pc = 0x1C010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0108u;
        // 0x1c010c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0110u;
        goto label_1c0110;
    }
    ctx->pc = 0x1C0108u;
    {
        const bool branch_taken_0x1c0108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0108u;
        // 0x1c010c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0108) {
            ctx->pc = 0x1C00F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c00f4;
        }
    }
    ctx->pc = 0x1C0110u;
label_1c0110:
    // 0x1c0110: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0114:
    // 0x1c0114: 0x8c234a9c  lw          $v1, 0x4A9C($at)
    ctx->pc = 0x1c0114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19100)));
label_1c0118:
    // 0x1c0118: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c0118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c011c:
    // 0x1c011c: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
label_1c0120:
    if (ctx->pc == 0x1C0120u) {
        ctx->pc = 0x1C0124u;
        goto label_1c0124;
    }
    ctx->pc = 0x1C011Cu;
    {
        const bool branch_taken_0x1c011c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c011c) {
            ctx->pc = 0x1C012Cu;
            goto label_1c012c;
        }
    }
    ctx->pc = 0x1C0124u;
label_1c0124:
    // 0x1c0124: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0128:
    // 0x1c0128: 0xac254a9c  sw          $a1, 0x4A9C($at)
    ctx->pc = 0x1c0128u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19100), GPR_U32(ctx, 5));
label_1c012c:
    // 0x1c012c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c012cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0130:
    // 0x1c0130: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1c0130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1c0134:
    // 0x1c0134: 0x8c244aac  lw          $a0, 0x4AAC($at)
    ctx->pc = 0x1c0134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19116)));
label_1c0138:
    // 0x1c0138: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c0138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c013c:
    // 0x1c013c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c013cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0140:
    // 0x1c0140: 0xac234aac  sw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c0140u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19116), GPR_U32(ctx, 3));
label_1c0144:
    // 0x1c0144: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1c0144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c0148:
    // 0x1c0148: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_1c014c:
    if (ctx->pc == 0x1C014Cu) {
        ctx->pc = 0x1C0150u;
        goto label_1c0150;
    }
    ctx->pc = 0x1C0148u;
    {
        const bool branch_taken_0x1c0148 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0148) {
            ctx->pc = 0x1C018Cu;
            goto label_1c018c;
        }
    }
    ctx->pc = 0x1C0150u;
label_1c0150:
    // 0x1c0150: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1c0150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1c0154:
    // 0x1c0154: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_1c0158:
    if (ctx->pc == 0x1C0158u) {
        ctx->pc = 0x1C015Cu;
        goto label_1c015c;
    }
    ctx->pc = 0x1C0154u;
    {
        const bool branch_taken_0x1c0154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0154) {
            ctx->pc = 0x1C018Cu;
            goto label_1c018c;
        }
    }
    ctx->pc = 0x1C015Cu;
label_1c015c:
    // 0x1c015c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1c015cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1c0160:
    // 0x1c0160: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1c0160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1c0164:
    // 0x1c0164: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c0164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c0168:
    // 0x1c0168: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1c0168u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_1c016c:
    // 0x1c016c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1c016cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1c0170:
    // 0x1c0170: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c0174:
    if (ctx->pc == 0x1C0174u) {
        ctx->pc = 0x1C0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0170u;
        // 0x1c0174: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0178u;
        goto label_1c0178;
    }
    ctx->pc = 0x1C0170u;
    {
        const bool branch_taken_0x1c0170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0170u;
        // 0x1c0174: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0170) {
            ctx->pc = 0x1C0180u;
            goto label_1c0180;
        }
    }
    ctx->pc = 0x1C0178u;
label_1c0178:
    // 0x1c0178: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c017c:
    if (ctx->pc == 0x1C017Cu) {
        ctx->pc = 0x1C017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0178u;
        // 0x1c017c: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0180u;
        goto label_1c0180;
    }
    ctx->pc = 0x1C0178u;
    {
        const bool branch_taken_0x1c0178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0178u;
        // 0x1c017c: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0178) {
            ctx->pc = 0x1C0188u;
            goto label_1c0188;
        }
    }
    ctx->pc = 0x1C0180u;
label_1c0180:
    // 0x1c0180: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0184:
    // 0x1c0184: 0xac264a9c  sw          $a2, 0x4A9C($at)
    ctx->pc = 0x1c0184u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19100), GPR_U32(ctx, 6));
label_1c0188:
    // 0x1c0188: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c0188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c018c:
    // 0x1c018c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x1c018cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1c0190:
    // 0x1c0190: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_1c0194:
    if (ctx->pc == 0x1C0194u) {
        ctx->pc = 0x1C0198u;
        goto label_1c0198;
    }
    ctx->pc = 0x1C0190u;
    {
        const bool branch_taken_0x1c0190 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0190) {
            ctx->pc = 0x1C01D8u;
            goto label_1c01d8;
        }
    }
    ctx->pc = 0x1C0198u;
label_1c0198:
    // 0x1c0198: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1c0198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1c019c:
    // 0x1c019c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_1c01a0:
    if (ctx->pc == 0x1C01A0u) {
        ctx->pc = 0x1C01A4u;
        goto label_1c01a4;
    }
    ctx->pc = 0x1C019Cu;
    {
        const bool branch_taken_0x1c019c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c019c) {
            ctx->pc = 0x1C01D8u;
            goto label_1c01d8;
        }
    }
    ctx->pc = 0x1C01A4u;
label_1c01a4:
    // 0x1c01a4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1c01a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1c01a8:
    // 0x1c01a8: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1c01a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1c01ac:
    // 0x1c01ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c01acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c01b0:
    // 0x1c01b0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1c01b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_1c01b4:
    // 0x1c01b4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1c01b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_1c01b8:
    // 0x1c01b8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1c01b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1c01bc:
    // 0x1c01bc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1c01bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1c01c0:
    // 0x1c01c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c01c4:
    if (ctx->pc == 0x1C01C4u) {
        ctx->pc = 0x1C01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01C0u;
        // 0x1c01c4: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01C8u;
        goto label_1c01c8;
    }
    ctx->pc = 0x1C01C0u;
    {
        const bool branch_taken_0x1c01c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01C0u;
        // 0x1c01c4: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01c0) {
            ctx->pc = 0x1C01D0u;
            goto label_1c01d0;
        }
    }
    ctx->pc = 0x1C01C8u;
label_1c01c8:
    // 0x1c01c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c01cc:
    if (ctx->pc == 0x1C01CCu) {
        ctx->pc = 0x1C01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01C8u;
        // 0x1c01cc: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01D0u;
        goto label_1c01d0;
    }
    ctx->pc = 0x1C01C8u;
    {
        const bool branch_taken_0x1c01c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01C8u;
        // 0x1c01cc: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01c8) {
            ctx->pc = 0x1C01D8u;
            goto label_1c01d8;
        }
    }
    ctx->pc = 0x1C01D0u;
label_1c01d0:
    // 0x1c01d0: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c01d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c01d4:
    // 0x1c01d4: 0xac254a9c  sw          $a1, 0x4A9C($at)
    ctx->pc = 0x1c01d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19100), GPR_U32(ctx, 5));
label_1c01d8:
    // 0x1c01d8: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c01d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c01dc:
    // 0x1c01dc: 0x8c234a98  lw          $v1, 0x4A98($at)
    ctx->pc = 0x1c01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19096)));
label_1c01e0:
    // 0x1c01e0: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x1c01e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1c01e4:
    // 0x1c01e4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1c01e8:
    if (ctx->pc == 0x1C01E8u) {
        ctx->pc = 0x1C01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01E4u;
        // 0x1c01e8: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01ECu;
        goto label_1c01ec;
    }
    ctx->pc = 0x1C01E4u;
    {
        const bool branch_taken_0x1c01e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01E4u;
        // 0x1c01e8: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01e4) {
            ctx->pc = 0x1C01F0u;
            goto label_1c01f0;
        }
    }
    ctx->pc = 0x1C01ECu;
label_1c01ec:
    // 0x1c01ec: 0xac254a98  sw          $a1, 0x4A98($at)
    ctx->pc = 0x1c01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19096), GPR_U32(ctx, 5));
label_1c01f0:
    // 0x1c01f0: 0x3e00008  jr          $ra
label_1c01f4:
    if (ctx->pc == 0x1C01F4u) {
        ctx->pc = 0x1C01F8u;
        goto label_1c01f8;
    }
    ctx->pc = 0x1C01F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C01F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C01F8u;
label_1c01f8:
    // 0x1c01f8: 0x0  nop
    ctx->pc = 0x1c01f8u;
    // NOP
label_1c01fc:
    // 0x1c01fc: 0x0  nop
    ctx->pc = 0x1c01fcu;
    // NOP
label_1c0200:
    // 0x1c0200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c0200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c0204:
    // 0x1c0204: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1c0204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_1c0208:
    // 0x1c0208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c0208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c020c:
    // 0x1c020c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c020cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0210:
    // 0x1c0210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c0214:
    // 0x1c0214: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x1c0214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
label_1c0218:
    // 0x1c0218: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c021c:
    // 0x1c021c: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1c021cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1c0220:
    // 0x1c0220: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x1c0220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1c0224:
    // 0x1c0224: 0x8c234aac  lw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c0224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19116)));
label_1c0228:
    // 0x1c0228: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1c0228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1c022c:
    // 0x1c022c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x1c022cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_1c0230:
    // 0x1c0230: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1c0230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1c0234:
    // 0x1c0234: 0x2484001f  addiu       $a0, $a0, 0x1F
    ctx->pc = 0x1c0234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
label_1c0238:
    // 0x1c0238: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c0238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1c023c:
    // 0x1c023c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1c023cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_1c0240:
    // 0x1c0240: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1c0240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1c0244:
    // 0x1c0244: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1c0244u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c0248:
    // 0x1c0248: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1c024c:
    if (ctx->pc == 0x1C024Cu) {
        ctx->pc = 0x1C024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0248u;
        // 0x1c024c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0250u;
        goto label_1c0250;
    }
    ctx->pc = 0x1C0248u;
    {
        const bool branch_taken_0x1c0248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0248u;
        // 0x1c024c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0248) {
            ctx->pc = 0x1C0258u;
            goto label_1c0258;
        }
    }
    ctx->pc = 0x1C0250u;
label_1c0250:
    // 0x1c0250: 0x10000019  b           . + 4 + (0x19 << 2)
label_1c0254:
    if (ctx->pc == 0x1C0254u) {
        ctx->pc = 0x1C0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0250u;
        // 0x1c0254: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0258u;
        goto label_1c0258;
    }
    ctx->pc = 0x1C0250u;
    {
        const bool branch_taken_0x1c0250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0250u;
        // 0x1c0254: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0250) {
            ctx->pc = 0x1C02B8u;
            goto label_1c02b8;
        }
    }
    ctx->pc = 0x1C0258u;
label_1c0258:
    // 0x1c0258: 0xc0700d4  jal         func_1C0350
label_1c025c:
    if (ctx->pc == 0x1C025Cu) {
        ctx->pc = 0x1C025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0258u;
        // 0x1c025c: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0260u;
        goto label_1c0260;
    }
    ctx->pc = 0x1C0258u;
    SET_GPR_U32(ctx, 31, 0x1C0260u);
    ctx->pc = 0x1C025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0258u;
    // 0x1c025c: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0350u;
    goto label_1c0350;
    ctx->pc = 0x1C0260u;
label_1c0260:
    // 0x1c0260: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c0264:
    if (ctx->pc == 0x1C0264u) {
        ctx->pc = 0x1C0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0260u;
        // 0x1c0264: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0268u;
        goto label_1c0268;
    }
    ctx->pc = 0x1C0260u;
    {
        const bool branch_taken_0x1c0260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0260u;
        // 0x1c0264: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0260) {
            ctx->pc = 0x1C0270u;
            goto label_1c0270;
        }
    }
    ctx->pc = 0x1C0268u;
label_1c0268:
    // 0x1c0268: 0x10000012  b           . + 4 + (0x12 << 2)
label_1c026c:
    if (ctx->pc == 0x1C026Cu) {
        ctx->pc = 0x1C026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0268u;
        // 0x1c026c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0270u;
        goto label_1c0270;
    }
    ctx->pc = 0x1C0268u;
    {
        const bool branch_taken_0x1c0268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0268u;
        // 0x1c026c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0268) {
            ctx->pc = 0x1C02B4u;
            goto label_1c02b4;
        }
    }
    ctx->pc = 0x1C0270u;
label_1c0270:
    // 0x1c0270: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1c0270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1c0274:
    // 0x1c0274: 0x8c244aac  lw          $a0, 0x4AAC($at)
    ctx->pc = 0x1c0274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19116)));
label_1c0278:
    // 0x1c0278: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1c0278u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c027c:
    // 0x1c027c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c027cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0280:
    // 0x1c0280: 0xac234aac  sw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c0280u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19116), GPR_U32(ctx, 3));
label_1c0284:
    // 0x1c0284: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1c0284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c0288:
    // 0x1c0288: 0x90001b  divu        $zero, $a0, $s0
    ctx->pc = 0x1c0288u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_1c028c:
    // 0x1c028c: 0x0  nop
    ctx->pc = 0x1c028cu;
    // NOP
label_1c0290:
    // 0x1c0290: 0x0  nop
    ctx->pc = 0x1c0290u;
    // NOP
label_1c0294:
    // 0x1c0294: 0x1810  mfhi        $v1
    ctx->pc = 0x1c0294u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1c0298:
    // 0x1c0298: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1c029c:
    if (ctx->pc == 0x1C029Cu) {
        ctx->pc = 0x1C02A0u;
        goto label_1c02a0;
    }
    ctx->pc = 0x1C0298u;
    {
        const bool branch_taken_0x1c0298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0298) {
            ctx->pc = 0x1C02A4u;
            goto label_1c02a4;
        }
    }
    ctx->pc = 0x1C02A0u;
label_1c02a0:
    // 0x1c02a0: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x1c02a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1c02a4:
    // 0x1c02a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c02a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c02a8:
    // 0x1c02a8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1c02a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1c02ac:
    // 0x1c02ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c02acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c02b0:
    // 0x1c02b0: 0x0  nop
    ctx->pc = 0x1c02b0u;
    // NOP
label_1c02b4:
    // 0x1c02b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c02b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c02b8:
    // 0x1c02b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c02b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c02bc:
    // 0x1c02bc: 0x3e00008  jr          $ra
label_1c02c0:
    if (ctx->pc == 0x1C02C0u) {
        ctx->pc = 0x1C02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02BCu;
        // 0x1c02c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C02C4u;
        goto label_1c02c4;
    }
    ctx->pc = 0x1C02BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02BCu;
        // 0x1c02c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C02BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C02C4u;
label_1c02c4:
    // 0x1c02c4: 0x0  nop
    ctx->pc = 0x1c02c4u;
    // NOP
label_1c02c8:
    // 0x1c02c8: 0x0  nop
    ctx->pc = 0x1c02c8u;
    // NOP
label_1c02cc:
    // 0x1c02cc: 0x0  nop
    ctx->pc = 0x1c02ccu;
    // NOP
label_1c02d0:
    // 0x1c02d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c02d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c02d4:
    // 0x1c02d4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1c02d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_1c02d8:
    // 0x1c02d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c02d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c02dc:
    // 0x1c02dc: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c02dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c02e0:
    // 0x1c02e0: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1c02e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_1c02e4:
    // 0x1c02e4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x1c02e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1c02e8:
    // 0x1c02e8: 0x8c234aac  lw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c02e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19116)));
label_1c02ec:
    // 0x1c02ec: 0x2484001f  addiu       $a0, $a0, 0x1F
    ctx->pc = 0x1c02ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
label_1c02f0:
    // 0x1c02f0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c02f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1c02f4:
    // 0x1c02f4: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1c02f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_1c02f8:
    // 0x1c02f8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1c02f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1c02fc:
    // 0x1c02fc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1c02fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c0300:
    // 0x1c0300: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1c0304:
    if (ctx->pc == 0x1C0304u) {
        ctx->pc = 0x1C0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0300u;
        // 0x1c0304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0308u;
        goto label_1c0308;
    }
    ctx->pc = 0x1C0300u;
    {
        const bool branch_taken_0x1c0300 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0300u;
        // 0x1c0304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0300) {
            ctx->pc = 0x1C0310u;
            goto label_1c0310;
        }
    }
    ctx->pc = 0x1C0308u;
label_1c0308:
    // 0x1c0308: 0x1000000f  b           . + 4 + (0xF << 2)
label_1c030c:
    if (ctx->pc == 0x1C030Cu) {
        ctx->pc = 0x1C030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0308u;
        // 0x1c030c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0310u;
        goto label_1c0310;
    }
    ctx->pc = 0x1C0308u;
    {
        const bool branch_taken_0x1c0308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0308u;
        // 0x1c030c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0308) {
            ctx->pc = 0x1C0348u;
            goto label_1c0348;
        }
    }
    ctx->pc = 0x1C0310u;
label_1c0310:
    // 0x1c0310: 0xc0700d4  jal         func_1C0350
label_1c0314:
    if (ctx->pc == 0x1C0314u) {
        ctx->pc = 0x1C0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0310u;
        // 0x1c0314: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0318u;
        goto label_1c0318;
    }
    ctx->pc = 0x1C0310u;
    SET_GPR_U32(ctx, 31, 0x1C0318u);
    ctx->pc = 0x1C0314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0310u;
    // 0x1c0314: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0350u;
    goto label_1c0350;
    ctx->pc = 0x1C0318u;
label_1c0318:
    // 0x1c0318: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c031c:
    if (ctx->pc == 0x1C031Cu) {
        ctx->pc = 0x1C031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0318u;
        // 0x1c031c: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0320u;
        goto label_1c0320;
    }
    ctx->pc = 0x1C0318u;
    {
        const bool branch_taken_0x1c0318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0318u;
        // 0x1c031c: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0318) {
            ctx->pc = 0x1C0328u;
            goto label_1c0328;
        }
    }
    ctx->pc = 0x1C0320u;
label_1c0320:
    // 0x1c0320: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c0324:
    if (ctx->pc == 0x1C0324u) {
        ctx->pc = 0x1C0324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0320u;
        // 0x1c0324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0328u;
        goto label_1c0328;
    }
    ctx->pc = 0x1C0320u;
    {
        const bool branch_taken_0x1c0320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0320u;
        // 0x1c0324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0320) {
            ctx->pc = 0x1C0344u;
            goto label_1c0344;
        }
    }
    ctx->pc = 0x1C0328u;
label_1c0328:
    // 0x1c0328: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1c0328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1c032c:
    // 0x1c032c: 0x8c244aac  lw          $a0, 0x4AAC($at)
    ctx->pc = 0x1c032cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19116)));
label_1c0330:
    // 0x1c0330: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1c0330u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c0334:
    // 0x1c0334: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0338:
    // 0x1c0338: 0xac234aac  sw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c0338u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19116), GPR_U32(ctx, 3));
label_1c033c:
    // 0x1c033c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c033cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c0340:
    // 0x1c0340: 0x0  nop
    ctx->pc = 0x1c0340u;
    // NOP
label_1c0344:
    // 0x1c0344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0348:
    // 0x1c0348: 0x3e00008  jr          $ra
label_1c034c:
    if (ctx->pc == 0x1C034Cu) {
        ctx->pc = 0x1C034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0348u;
        // 0x1c034c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0350u;
        goto label_1c0350;
    }
    ctx->pc = 0x1C0348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0348u;
        // 0x1c034c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0350u;
label_1c0350:
    // 0x1c0350: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0354:
    // 0x1c0354: 0x8c224a98  lw          $v0, 0x4A98($at)
    ctx->pc = 0x1c0354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19096)));
label_1c0358:
    // 0x1c0358: 0x0  nop
    ctx->pc = 0x1c0358u;
    // NOP
label_1c035c:
    // 0x1c035c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c0360:
    // 0x1c0360: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
label_1c0364:
    if (ctx->pc == 0x1C0364u) {
        ctx->pc = 0x1C0368u;
        goto label_1c0368;
    }
    ctx->pc = 0x1C0360u;
    {
        const bool branch_taken_0x1c0360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0360) {
            ctx->pc = 0x1C03F0u;
            goto label_1c03f0;
        }
    }
    ctx->pc = 0x1C0368u;
label_1c0368:
    // 0x1c0368: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c0368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c036c:
    // 0x1c036c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1c036cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1c0370:
    // 0x1c0370: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x1c0370u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1c0374:
    // 0x1c0374: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_1c0378:
    if (ctx->pc == 0x1C0378u) {
        ctx->pc = 0x1C037Cu;
        goto label_1c037c;
    }
    ctx->pc = 0x1C0374u;
    {
        const bool branch_taken_0x1c0374 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0374) {
            ctx->pc = 0x1C03F0u;
            goto label_1c03f0;
        }
    }
    ctx->pc = 0x1C037Cu;
label_1c037c:
    // 0x1c037c: 0xa33023  subu        $a2, $a1, $v1
    ctx->pc = 0x1c037cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1c0380:
    // 0x1c0380: 0x2cc10011  sltiu       $at, $a2, 0x11
    ctx->pc = 0x1c0380u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_1c0384:
    // 0x1c0384: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1c0388:
    if (ctx->pc == 0x1C0388u) {
        ctx->pc = 0x1C038Cu;
        goto label_1c038c;
    }
    ctx->pc = 0x1C0384u;
    {
        const bool branch_taken_0x1c0384 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0384) {
            ctx->pc = 0x1C0398u;
            goto label_1c0398;
        }
    }
    ctx->pc = 0x1C038Cu;
label_1c038c:
    // 0x1c038c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1c038cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1c0390:
    // 0x1c0390: 0x1000000e  b           . + 4 + (0xE << 2)
label_1c0394:
    if (ctx->pc == 0x1C0394u) {
        ctx->pc = 0x1C0394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0390u;
        // 0x1c0394: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0398u;
        goto label_1c0398;
    }
    ctx->pc = 0x1C0390u;
    {
        const bool branch_taken_0x1c0390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0390u;
        // 0x1c0394: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0390) {
            ctx->pc = 0x1C03CCu;
            goto label_1c03cc;
        }
    }
    ctx->pc = 0x1C0398u;
label_1c0398:
    // 0x1c0398: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x1c0398u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c039c:
    // 0x1c039c: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x1c039cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
label_1c03a0:
    // 0x1c03a0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c03a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1c03a4:
    // 0x1c03a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c03a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c03a8:
    // 0x1c03a8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1c03a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1c03ac:
    // 0x1c03ac: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1c03acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_1c03b0:
    // 0x1c03b0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1c03b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1c03b4:
    // 0x1c03b4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1c03b8:
    if (ctx->pc == 0x1C03B8u) {
        ctx->pc = 0x1C03BCu;
        goto label_1c03bc;
    }
    ctx->pc = 0x1C03B4u;
    {
        const bool branch_taken_0x1c03b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c03b4) {
            ctx->pc = 0x1C03C0u;
            goto label_1c03c0;
        }
    }
    ctx->pc = 0x1C03BCu;
label_1c03bc:
    // 0x1c03bc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1c03bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1c03c0:
    // 0x1c03c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c03c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c03c4:
    // 0x1c03c4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1c03c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_1c03c8:
    // 0x1c03c8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1c03c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_1c03cc:
    // 0x1c03cc: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1c03ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1c03d0:
    // 0x1c03d0: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c03d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c03d4:
    // 0x1c03d4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1c03d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1c03d8:
    // 0x1c03d8: 0x8c234a98  lw          $v1, 0x4A98($at)
    ctx->pc = 0x1c03d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19096)));
label_1c03dc:
    // 0x1c03dc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1c03e0:
    if (ctx->pc == 0x1C03E0u) {
        ctx->pc = 0x1C03E4u;
        goto label_1c03e4;
    }
    ctx->pc = 0x1C03DCu;
    {
        const bool branch_taken_0x1c03dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c03dc) {
            ctx->pc = 0x1C0404u;
            goto label_1c0404;
        }
    }
    ctx->pc = 0x1C03E4u;
label_1c03e4:
    // 0x1c03e4: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c03e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c03e8:
    // 0x1c03e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c03ec:
    if (ctx->pc == 0x1C03ECu) {
        ctx->pc = 0x1C03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03E8u;
        // 0x1c03ec: 0xac254a98  sw          $a1, 0x4A98($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19096), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C03F0u;
        goto label_1c03f0;
    }
    ctx->pc = 0x1C03E8u;
    {
        const bool branch_taken_0x1c03e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03E8u;
        // 0x1c03ec: 0xac254a98  sw          $a1, 0x4A98($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19096), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03e8) {
            ctx->pc = 0x1C0404u;
            goto label_1c0404;
        }
    }
    ctx->pc = 0x1C03F0u;
label_1c03f0:
    // 0x1c03f0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1c03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c03f4:
    // 0x1c03f4: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_1c03f8:
    if (ctx->pc == 0x1C03F8u) {
        ctx->pc = 0x1C03FCu;
        goto label_1c03fc;
    }
    ctx->pc = 0x1C03F4u;
    {
        const bool branch_taken_0x1c03f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c03f4) {
            ctx->pc = 0x1C035Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c035c;
        }
    }
    ctx->pc = 0x1C03FCu;
label_1c03fc:
    // 0x1c03fc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c0400:
    if (ctx->pc == 0x1C0400u) {
        ctx->pc = 0x1C0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03FCu;
        // 0x1c0400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0404u;
        goto label_1c0404;
    }
    ctx->pc = 0x1C03FCu;
    {
        const bool branch_taken_0x1c03fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03FCu;
        // 0x1c0400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03fc) {
            ctx->pc = 0x1C0424u;
            goto label_1c0424;
        }
    }
    ctx->pc = 0x1C0404u;
label_1c0404:
    // 0x1c0404: 0x0  nop
    ctx->pc = 0x1c0404u;
    // NOP
label_1c0408:
    // 0x1c0408: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c040c:
    // 0x1c040c: 0x8c234a9c  lw          $v1, 0x4A9C($at)
    ctx->pc = 0x1c040cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19100)));
label_1c0410:
    // 0x1c0410: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1c0410u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1c0414:
    // 0x1c0414: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1c0418:
    if (ctx->pc == 0x1C0418u) {
        ctx->pc = 0x1C041Cu;
        goto label_1c041c;
    }
    ctx->pc = 0x1C0414u;
    {
        const bool branch_taken_0x1c0414 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0414) {
            ctx->pc = 0x1C0424u;
            goto label_1c0424;
        }
    }
    ctx->pc = 0x1C041Cu;
label_1c041c:
    // 0x1c041c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c041cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0420:
    // 0x1c0420: 0xac254a9c  sw          $a1, 0x4A9C($at)
    ctx->pc = 0x1c0420u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19100), GPR_U32(ctx, 5));
label_1c0424:
    // 0x1c0424: 0x3e00008  jr          $ra
label_1c0428:
    if (ctx->pc == 0x1C0428u) {
        ctx->pc = 0x1C042Cu;
        goto label_1c042c;
    }
    ctx->pc = 0x1C0424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C042Cu;
label_1c042c:
    // 0x1c042c: 0x0  nop
    ctx->pc = 0x1c042cu;
    // NOP
label_1c0430:
    // 0x1c0430: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0434:
    // 0x1c0434: 0x8c264a98  lw          $a2, 0x4A98($at)
    ctx->pc = 0x1c0434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19096)));
label_1c0438:
    // 0x1c0438: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c043c:
    // 0x1c043c: 0x8c254a9c  lw          $a1, 0x4A9C($at)
    ctx->pc = 0x1c043cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19100)));
label_1c0440:
    // 0x1c0440: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0444:
    // 0x1c0444: 0x8c244aa8  lw          $a0, 0x4AA8($at)
    ctx->pc = 0x1c0444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19112)));
label_1c0448:
    // 0x1c0448: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c044c:
    // 0x1c044c: 0x8c234aac  lw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c044cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19116)));
label_1c0450:
    // 0x1c0450: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0454:
    // 0x1c0454: 0xac264aa0  sw          $a2, 0x4AA0($at)
    ctx->pc = 0x1c0454u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19104), GPR_U32(ctx, 6));
label_1c0458:
    // 0x1c0458: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c045c:
    // 0x1c045c: 0xac254aa4  sw          $a1, 0x4AA4($at)
    ctx->pc = 0x1c045cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19108), GPR_U32(ctx, 5));
label_1c0460:
    // 0x1c0460: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c0464:
    // 0x1c0464: 0xac244ab0  sw          $a0, 0x4AB0($at)
    ctx->pc = 0x1c0464u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19120), GPR_U32(ctx, 4));
label_1c0468:
    // 0x1c0468: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1c046c:
    // 0x1c046c: 0x3e00008  jr          $ra
label_1c0470:
    if (ctx->pc == 0x1C0470u) {
        ctx->pc = 0x1C0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C046Cu;
        // 0x1c0470: 0xac234ab4  sw          $v1, 0x4AB4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0474u;
        goto label_1c0474;
    }
    ctx->pc = 0x1C046Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C046Cu;
        // 0x1c0470: 0xac234ab4  sw          $v1, 0x4AB4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C046Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0474u;
label_1c0474:
    // 0x1c0474: 0x0  nop
    ctx->pc = 0x1c0474u;
    // NOP
label_1c0478:
    // 0x1c0478: 0x0  nop
    ctx->pc = 0x1c0478u;
    // NOP
label_1c047c:
    // 0x1c047c: 0x0  nop
    ctx->pc = 0x1c047cu;
    // NOP
label_1c0480:
    // 0x1c0480: 0x3e00008  jr          $ra
label_1c0484:
    if (ctx->pc == 0x1C0484u) {
        ctx->pc = 0x1C0488u;
        goto label_1c0488;
    }
    ctx->pc = 0x1C0480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0488u;
label_1c0488:
    // 0x1c0488: 0x0  nop
    ctx->pc = 0x1c0488u;
    // NOP
label_1c048c:
    // 0x1c048c: 0x0  nop
    ctx->pc = 0x1c048cu;
    // NOP
label_1c0490:
    // 0x1c0490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c0490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c0494:
    // 0x1c0494: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c0494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c0498:
    // 0x1c0498: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c049c:
    // 0x1c049c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c049cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c04a0:
    // 0x1c04a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c04a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c04a4:
    // 0x1c04a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c04a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c04a8:
    // 0x1c04a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c04a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c04ac:
    // 0x1c04ac: 0x0  nop
    ctx->pc = 0x1c04acu;
    // NOP
label_1c04b0:
    // 0x1c04b0: 0x27838918  addiu       $v1, $gp, -0x76E8
    ctx->pc = 0x1c04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936856));
label_1c04b4:
    // 0x1c04b4: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1c04b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1c04b8:
    // 0x1c04b8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c04b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c04bc:
    // 0x1c04bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1c04c0:
    if (ctx->pc == 0x1C04C0u) {
        ctx->pc = 0x1C04C4u;
        goto label_1c04c4;
    }
    ctx->pc = 0x1C04BCu;
    {
        const bool branch_taken_0x1c04bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c04bc) {
            ctx->pc = 0x1C04D0u;
            goto label_1c04d0;
        }
    }
    ctx->pc = 0x1C04C4u;
label_1c04c4:
    // 0x1c04c4: 0xc070038  jal         func_1C00E0
label_1c04c8:
    if (ctx->pc == 0x1C04C8u) {
        ctx->pc = 0x1C04CCu;
        goto label_1c04cc;
    }
    ctx->pc = 0x1C04C4u;
    SET_GPR_U32(ctx, 31, 0x1C04CCu);
    ctx->pc = 0x1C00E0u;
    goto label_1c00e0;
    ctx->pc = 0x1C04CCu;
label_1c04cc:
    // 0x1c04cc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c04ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1c04d0:
    // 0x1c04d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c04d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c04d4:
    // 0x1c04d4: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1c04d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c04d8:
    // 0x1c04d8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_1c04dc:
    if (ctx->pc == 0x1C04DCu) {
        ctx->pc = 0x1C04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04D8u;
        // 0x1c04dc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C04E0u;
        goto label_1c04e0;
    }
    ctx->pc = 0x1C04D8u;
    {
        const bool branch_taken_0x1c04d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04D8u;
        // 0x1c04dc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04d8) {
            ctx->pc = 0x1C04ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c04ac;
        }
    }
    ctx->pc = 0x1C04E0u;
label_1c04e0:
    // 0x1c04e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c04e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c04e4:
    // 0x1c04e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c04e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c04e8:
    // 0x1c04e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c04e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c04ec:
    // 0x1c04ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c04ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c04f0:
    // 0x1c04f0: 0x3e00008  jr          $ra
label_1c04f4:
    if (ctx->pc == 0x1C04F4u) {
        ctx->pc = 0x1C04F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04F0u;
        // 0x1c04f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C04F8u;
        goto label_1c04f8;
    }
    ctx->pc = 0x1C04F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C04F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04F0u;
        // 0x1c04f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C04F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C04F8u;
label_1c04f8:
    // 0x1c04f8: 0x0  nop
    ctx->pc = 0x1c04f8u;
    // NOP
label_1c04fc:
    // 0x1c04fc: 0x0  nop
    ctx->pc = 0x1c04fcu;
    // NOP
label_1c0500:
    // 0x1c0500: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c0500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1c0504:
    // 0x1c0504: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1c0504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1c0508:
    // 0x1c0508: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1c0508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1c050c:
    // 0x1c050c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1c050cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1c0510:
    // 0x1c0510: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1c0510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1c0514:
    // 0x1c0514: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c0514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1c0518:
    // 0x1c0518: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c0518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1c051c:
    // 0x1c051c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c051cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1c0520:
    // 0x1c0520: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c0520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0524:
    // 0x1c0524: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c0524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0528:
    // 0x1c0528: 0x0  nop
    ctx->pc = 0x1c0528u;
    // NOP
label_1c052c:
    // 0x1c052c: 0x27828918  addiu       $v0, $gp, -0x76E8
    ctx->pc = 0x1c052cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936856));
label_1c0530:
    // 0x1c0530: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1c0530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c0534:
    // 0x1c0534: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c0534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c0538:
    // 0x1c0538: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c053c:
    if (ctx->pc == 0x1C053Cu) {
        ctx->pc = 0x1C053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0538u;
        // 0x1c053c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0540u;
        goto label_1c0540;
    }
    ctx->pc = 0x1C0538u;
    {
        const bool branch_taken_0x1c0538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0538u;
        // 0x1c053c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0538) {
            ctx->pc = 0x1C054Cu;
            goto label_1c054c;
        }
    }
    ctx->pc = 0x1C0540u;
label_1c0540:
    // 0x1c0540: 0xc070080  jal         func_1C0200
label_1c0544:
    if (ctx->pc == 0x1C0544u) {
        ctx->pc = 0x1C0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0540u;
        // 0x1c0544: 0x24054420  addiu       $a1, $zero, 0x4420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0548u;
        goto label_1c0548;
    }
    ctx->pc = 0x1C0540u;
    SET_GPR_U32(ctx, 31, 0x1C0548u);
    ctx->pc = 0x1C0544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0540u;
    // 0x1c0544: 0x24054420  addiu       $a1, $zero, 0x4420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    goto label_1c0200;
    ctx->pc = 0x1C0548u;
label_1c0548:
    // 0x1c0548: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c0548u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1c054c:
    // 0x1c054c: 0x0  nop
    ctx->pc = 0x1c054cu;
    // NOP
label_1c0550:
    // 0x1c0550: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c0550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c0554:
    // 0x1c0554: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1c0554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c0558:
    // 0x1c0558: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1c055c:
    if (ctx->pc == 0x1C055Cu) {
        ctx->pc = 0x1C055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0558u;
        // 0x1c055c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0560u;
        goto label_1c0560;
    }
    ctx->pc = 0x1C0558u;
    {
        const bool branch_taken_0x1c0558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0558u;
        // 0x1c055c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0558) {
            ctx->pc = 0x1C0528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0528;
        }
    }
    ctx->pc = 0x1C0560u;
label_1c0560:
    // 0x1c0560: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1c0560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1c0564:
    // 0x1c0564: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1c0564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1c0568:
    // 0x1c0568: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c056c:
    if (ctx->pc == 0x1C056Cu) {
        ctx->pc = 0x1C056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0568u;
        // 0x1c056c: 0x2402014c  addiu       $v0, $zero, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0570u;
        goto label_1c0570;
    }
    ctx->pc = 0x1C0568u;
    {
        const bool branch_taken_0x1c0568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0568u;
        // 0x1c056c: 0x2402014c  addiu       $v0, $zero, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0568) {
            ctx->pc = 0x1C057Cu;
            goto label_1c057c;
        }
    }
    ctx->pc = 0x1C0570u;
label_1c0570:
    // 0x1c0570: 0x240200df  addiu       $v0, $zero, 0xDF
    ctx->pc = 0x1c0570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
label_1c0574:
    // 0x1c0574: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c0578:
    if (ctx->pc == 0x1C0578u) {
        ctx->pc = 0x1C0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0574u;
        // 0x1c0578: 0xaf828910  sw          $v0, -0x76F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C057Cu;
        goto label_1c057c;
    }
    ctx->pc = 0x1C0574u;
    {
        const bool branch_taken_0x1c0574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0574u;
        // 0x1c0578: 0xaf828910  sw          $v0, -0x76F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936848), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0574) {
            ctx->pc = 0x1C0580u;
            goto label_1c0580;
        }
    }
    ctx->pc = 0x1C057Cu;
label_1c057c:
    // 0x1c057c: 0xaf828910  sw          $v0, -0x76F0($gp)
    ctx->pc = 0x1c057cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936848), GPR_U32(ctx, 2));
label_1c0580:
    // 0x1c0580: 0x8f848910  lw          $a0, -0x76F0($gp)
    ctx->pc = 0x1c0580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
label_1c0584:
    // 0x1c0584: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c0584u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0588:
    // 0x1c0588: 0xaf8088f0  sw          $zero, -0x7710($gp)
    ctx->pc = 0x1c0588u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 0));
label_1c058c:
    // 0x1c058c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c058cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0590:
    // 0x1c0590: 0x2483ffe8  addiu       $v1, $a0, -0x18
    ctx->pc = 0x1c0590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
label_1c0594:
    // 0x1c0594: 0x2482ffea  addiu       $v0, $a0, -0x16
    ctx->pc = 0x1c0594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967274));
label_1c0598:
    // 0x1c0598: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x1c0598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_1c059c:
    // 0x1c059c: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x1c059cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_1c05a0:
    // 0x1c05a0: 0x24830016  addiu       $v1, $a0, 0x16
    ctx->pc = 0x1c05a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 22));
label_1c05a4:
    // 0x1c05a4: 0x24820018  addiu       $v0, $a0, 0x18
    ctx->pc = 0x1c05a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_1c05a8:
    // 0x1c05a8: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x1c05a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_1c05ac:
    // 0x1c05ac: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1c05acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_1c05b0:
    // 0x1c05b0: 0x27828918  addiu       $v0, $gp, -0x76E8
    ctx->pc = 0x1c05b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936856));
label_1c05b4:
    // 0x1c05b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c05b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c05b8:
    // 0x1c05b8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1c05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1c05bc:
    // 0x1c05bc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1c05bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c05c0:
    // 0x1c05c0: 0xc05e234  jal         func_1788D0
label_1c05c4:
    if (ctx->pc == 0x1C05C4u) {
        ctx->pc = 0x1C05C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05C0u;
        // 0x1c05c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C05C8u;
        goto label_1c05c8;
    }
    ctx->pc = 0x1C05C0u;
    SET_GPR_U32(ctx, 31, 0x1C05C8u);
    ctx->pc = 0x1C05C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C05C0u;
    // 0x1c05c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1C05C0u, 0x1C05C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C05C8u;
label_1c05c8:
    // 0x1c05c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c05c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c05cc:
    // 0x1c05cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c05ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c05d0:
    // 0x1c05d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c05d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c05d4:
    // 0x1c05d4: 0x0  nop
    ctx->pc = 0x1c05d4u;
    // NOP
label_1c05d8:
    // 0x1c05d8: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1c05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c05dc:
    // 0x1c05dc: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1c05dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1c05e0:
    // 0x1c05e0: 0x3407ffe4  ori         $a3, $zero, 0xFFE4
    ctx->pc = 0x1c05e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65508);
label_1c05e4:
    // 0x1c05e4: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1c05e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1c05e8:
    // 0x1c05e8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1c05e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c05ec:
    // 0x1c05ec: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1c05ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1c05f0:
    // 0x1c05f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c05f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c05f4:
    // 0x1c05f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c05f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c05f8:
    // 0x1c05f8: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1c05f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1c05fc:
    // 0x1c05fc: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1c05fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c0600:
    // 0x1c0600: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1c0600u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0604:
    // 0x1c0604: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1c0604u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1c0608:
    // 0x1c0608: 0xc05e060  jal         func_178180
label_1c060c:
    if (ctx->pc == 0x1C060Cu) {
        ctx->pc = 0x1C060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0608u;
        // 0x1c060c: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0610u;
        goto label_1c0610;
    }
    ctx->pc = 0x1C0608u;
    SET_GPR_U32(ctx, 31, 0x1C0610u);
    ctx->pc = 0x1C060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0608u;
    // 0x1c060c: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1C0608u, 0x1C0610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0610u;
label_1c0610:
    // 0x1c0610: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c0610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c0614:
    // 0x1c0614: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1c0614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1c0618:
    // 0x1c0618: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1c0618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_1c061c:
    // 0x1c061c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_1c0620:
    if (ctx->pc == 0x1C0620u) {
        ctx->pc = 0x1C0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C061Cu;
        // 0x1c0620: 0x267300b0  addiu       $s3, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0624u;
        goto label_1c0624;
    }
    ctx->pc = 0x1C061Cu;
    {
        const bool branch_taken_0x1c061c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C061Cu;
        // 0x1c0620: 0x267300b0  addiu       $s3, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c061c) {
            ctx->pc = 0x1C05D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c05d4;
        }
    }
    ctx->pc = 0x1C0624u;
label_1c0624:
    // 0x1c0624: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1c0624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c0628:
    // 0x1c0628: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1c0628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1c062c:
    // 0x1c062c: 0xc07091c  jal         func_1C2470
label_1c0630:
    if (ctx->pc == 0x1C0630u) {
        ctx->pc = 0x1C0630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C062Cu;
        // 0x1c0630: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0634u;
        goto label_1c0634;
    }
    ctx->pc = 0x1C062Cu;
    SET_GPR_U32(ctx, 31, 0x1C0634u);
    ctx->pc = 0x1C0630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C062Cu;
    // 0x1c0630: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x1C0634u;
label_1c0634:
    // 0x1c0634: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c0634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c0638:
    // 0x1c0638: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x1c0638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_1c063c:
    // 0x1c063c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1c063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1c0640:
    // 0x1c0640: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0644:
    // 0x1c0644: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1c0644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1c0648:
    // 0x1c0648: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1c0648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1c064c:
    // 0x1c064c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c0650:
    // 0x1c0650: 0x3408ffe4  ori         $t0, $zero, 0xFFE4
    ctx->pc = 0x1c0650u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65508);
label_1c0654:
    // 0x1c0654: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1c0654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1c0658:
    // 0x1c0658: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c0658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c065c:
    // 0x1c065c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c065cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0660:
    // 0x1c0660: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1c0660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1c0664:
    // 0x1c0664: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1c0664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1c0668:
    // 0x1c0668: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c0668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c066c:
    // 0x1c066c: 0x8f828910  lw          $v0, -0x76F0($gp)
    ctx->pc = 0x1c066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
label_1c0670:
    // 0x1c0670: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x1c0670u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c0674:
    // 0x1c0674: 0xc05df9c  jal         func_177E70
label_1c0678:
    if (ctx->pc == 0x1C0678u) {
        ctx->pc = 0x1C0678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0674u;
        // 0x1c0678: 0x2447ffb0  addiu       $a3, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C067Cu;
        goto label_1c067c;
    }
    ctx->pc = 0x1C0674u;
    SET_GPR_U32(ctx, 31, 0x1C067Cu);
    ctx->pc = 0x1C0678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0674u;
    // 0x1c0678: 0x2447ffb0  addiu       $a3, $v0, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E70u, 0x1C0674u, 0x1C067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C067Cu;
label_1c067c:
    // 0x1c067c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1c067cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1c0680:
    // 0x1c0680: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c0680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c0684:
    // 0x1c0684: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x1c0684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
label_1c0688:
    // 0x1c0688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c0688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c068c:
    // 0x1c068c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1c068cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1c0690:
    // 0x1c0690: 0x262402f0  addiu       $a0, $s1, 0x2F0
    ctx->pc = 0x1c0690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
label_1c0694:
    // 0x1c0694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0698:
    // 0x1c0698: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1c0698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1c069c:
    // 0x1c069c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1c069cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1c06a0:
    // 0x1c06a0: 0x3408ffe4  ori         $t0, $zero, 0xFFE4
    ctx->pc = 0x1c06a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65508);
label_1c06a4:
    // 0x1c06a4: 0x8f828910  lw          $v0, -0x76F0($gp)
    ctx->pc = 0x1c06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
label_1c06a8:
    // 0x1c06a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c06a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c06ac:
    // 0x1c06ac: 0x240a0038  addiu       $t2, $zero, 0x38
    ctx->pc = 0x1c06acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1c06b0:
    // 0x1c06b0: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x1c06b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c06b4:
    // 0x1c06b4: 0xc05df9c  jal         func_177E70
label_1c06b8:
    if (ctx->pc == 0x1C06B8u) {
        ctx->pc = 0x1C06B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06B4u;
        // 0x1c06b8: 0x2447ffe8  addiu       $a3, $v0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C06BCu;
        goto label_1c06bc;
    }
    ctx->pc = 0x1C06B4u;
    SET_GPR_U32(ctx, 31, 0x1C06BCu);
    ctx->pc = 0x1C06B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C06B4u;
    // 0x1c06b8: 0x2447ffe8  addiu       $a3, $v0, -0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E70u, 0x1C06B4u, 0x1C06BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C06BCu;
label_1c06bc:
    // 0x1c06bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c06bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c06c0:
    // 0x1c06c0: 0x262403c0  addiu       $a0, $s1, 0x3C0
    ctx->pc = 0x1c06c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 960));
label_1c06c4:
    // 0x1c06c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c06c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c06c8:
    // 0x1c06c8: 0xc05e1d4  jal         func_178750
label_1c06cc:
    if (ctx->pc == 0x1C06CCu) {
        ctx->pc = 0x1C06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06C8u;
        // 0x1c06cc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C06D0u;
        goto label_1c06d0;
    }
    ctx->pc = 0x1C06C8u;
    SET_GPR_U32(ctx, 31, 0x1C06D0u);
    ctx->pc = 0x1C06CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C06C8u;
    // 0x1c06cc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178750u, 0x1C06C8u, 0x1C06D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C06D0u;
label_1c06d0:
    // 0x1c06d0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1c06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1c06d4:
    // 0x1c06d4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1c06d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1c06d8:
    // 0x1c06d8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1c06d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1c06dc:
    // 0x1c06dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c06dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c06e0:
    // 0x1c06e0: 0x3c02f531  lui         $v0, 0xF531
    ctx->pc = 0x1c06e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62769 << 16));
label_1c06e4:
    // 0x1c06e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c06e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c06e8:
    // 0x1c06e8: 0x34425315  ori         $v0, $v0, 0x5315
    ctx->pc = 0x1c06e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21269);
label_1c06ec:
    // 0x1c06ec: 0xfe230410  sd          $v1, 0x410($s1)
    ctx->pc = 0x1c06ecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1040), GPR_U64(ctx, 3));
label_1c06f0:
    // 0x1c06f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c06f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1c06f4:
    // 0x1c06f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c06f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c06f8:
    // 0x1c06f8: 0x3c023153  lui         $v0, 0x3153
    ctx->pc = 0x1c06f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12627 << 16));
label_1c06fc:
    // 0x1c06fc: 0x34421097  ori         $v0, $v0, 0x1097
    ctx->pc = 0x1c06fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4247);
label_1c0700:
    // 0x1c0700: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c0700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1c0704:
    // 0x1c0704: 0xfe220418  sd          $v0, 0x418($s1)
    ctx->pc = 0x1c0704u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1048), GPR_U64(ctx, 2));
label_1c0708:
    // 0x1c0708: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1c0708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1c070c:
    // 0x1c070c: 0x24440420  addiu       $a0, $v0, 0x420
    ctx->pc = 0x1c070cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1056));
label_1c0710:
    // 0x1c0710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0714:
    // 0x1c0714: 0xc05e158  jal         func_178560
label_1c0718:
    if (ctx->pc == 0x1C0718u) {
        ctx->pc = 0x1C0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0714u;
        // 0x1c0718: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C071Cu;
        goto label_1c071c;
    }
    ctx->pc = 0x1C0714u;
    SET_GPR_U32(ctx, 31, 0x1C071Cu);
    ctx->pc = 0x1C0718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0714u;
    // 0x1c0718: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178560u, 0x1C0714u, 0x1C071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C071Cu;
label_1c071c:
    // 0x1c071c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c071cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1c0720:
    // 0x1c0720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0724:
    // 0x1c0724: 0x24424ec0  addiu       $v0, $v0, 0x4EC0
    ctx->pc = 0x1c0724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20160));
label_1c0728:
    // 0x1c0728: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c0728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c072c:
    // 0x1c072c: 0xc05e158  jal         func_178560
label_1c0730:
    if (ctx->pc == 0x1C0730u) {
        ctx->pc = 0x1C0730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C072Cu;
        // 0x1c0730: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0734u;
        goto label_1c0734;
    }
    ctx->pc = 0x1C072Cu;
    SET_GPR_U32(ctx, 31, 0x1C0734u);
    ctx->pc = 0x1C0730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C072Cu;
    // 0x1c0730: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178560u, 0x1C072Cu, 0x1C0734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0734u;
label_1c0734:
    // 0x1c0734: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c0734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c0738:
    // 0x1c0738: 0x2a430080  slti        $v1, $s2, 0x80
    ctx->pc = 0x1c0738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)128) ? 1 : 0);
label_1c073c:
    // 0x1c073c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_1c0740:
    if (ctx->pc == 0x1C0740u) {
        ctx->pc = 0x1C0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C073Cu;
        // 0x1c0740: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0744u;
        goto label_1c0744;
    }
    ctx->pc = 0x1C073Cu;
    {
        const bool branch_taken_0x1c073c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C073Cu;
        // 0x1c0740: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c073c) {
            ctx->pc = 0x1C0708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0708;
        }
    }
    ctx->pc = 0x1C0744u;
label_1c0744:
    // 0x1c0744: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c0744u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1c0748:
    // 0x1c0748: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x1c0748u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c074c:
    // 0x1c074c: 0x1460ff98  bnez        $v1, . + 4 + (-0x68 << 2)
label_1c0750:
    if (ctx->pc == 0x1C0750u) {
        ctx->pc = 0x1C0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C074Cu;
        // 0x1c0750: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0754u;
        goto label_1c0754;
    }
    ctx->pc = 0x1C074Cu;
    {
        const bool branch_taken_0x1c074c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C074Cu;
        // 0x1c0750: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c074c) {
            ctx->pc = 0x1C05B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c05b0;
        }
    }
    ctx->pc = 0x1C0754u;
label_1c0754:
    // 0x1c0754: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c0754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1c0758:
    // 0x1c0758: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1c0758u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c075c:
    // 0x1c075c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1c075cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c0760:
    // 0x1c0760: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1c0760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c0764:
    // 0x1c0764: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c0764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c0768:
    // 0x1c0768: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c0768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c076c:
    // 0x1c076c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c076cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0770:
    // 0x1c0770: 0x3e00008  jr          $ra
label_1c0774:
    if (ctx->pc == 0x1C0774u) {
        ctx->pc = 0x1C0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0770u;
        // 0x1c0774: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0778u;
        goto label_1c0778;
    }
    ctx->pc = 0x1C0770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0770u;
        // 0x1c0774: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0778u;
label_1c0778:
    // 0x1c0778: 0x0  nop
    ctx->pc = 0x1c0778u;
    // NOP
label_1c077c:
    // 0x1c077c: 0x0  nop
    ctx->pc = 0x1c077cu;
    // NOP
label_1c0780:
    // 0x1c0780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c0780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c0784:
    // 0x1c0784: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c0784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c0788:
    // 0x1c0788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c078c:
    // 0x1c078c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c078cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c0790:
    // 0x1c0790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c0794:
    // 0x1c0794: 0x8f8388f0  lw          $v1, -0x7710($gp)
    ctx->pc = 0x1c0794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936816)));
label_1c0798:
    // 0x1c0798: 0x10600205  beqz        $v1, . + 4 + (0x205 << 2)
label_1c079c:
    if (ctx->pc == 0x1C079Cu) {
        ctx->pc = 0x1C07A0u;
        goto label_1c07a0;
    }
    ctx->pc = 0x1C0798u;
    {
        const bool branch_taken_0x1c0798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0798) {
            ctx->pc = 0x1C0FB0u;
            { ctx->pc = 0x1c0fb0; return; }
        }
    }
    ctx->pc = 0x1C07A0u;
label_1c07a0:
    // 0x1c07a0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c07a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1c07a4:
    // 0x1c07a4: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1c07a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_1c07a8:
    // 0x1c07a8: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x1c07a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1c07ac:
    // 0x1c07ac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1c07acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1c07b0:
    // 0x1c07b0: 0x27838918  addiu       $v1, $gp, -0x76E8
    ctx->pc = 0x1c07b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936856));
label_1c07b4:
    // 0x1c07b4: 0x8f8288f4  lw          $v0, -0x770C($gp)
    ctx->pc = 0x1c07b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936820)));
label_1c07b8:
    // 0x1c07b8: 0x24c61e00  addiu       $a2, $a2, 0x1E00
    ctx->pc = 0x1c07b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7680));
label_1c07bc:
    // 0x1c07bc: 0x24a54ec0  addiu       $a1, $a1, 0x4EC0
    ctx->pc = 0x1c07bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20160));
label_1c07c0:
    // 0x1c07c0: 0x43940  sll         $a3, $a0, 5
    ctx->pc = 0x1c07c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1c07c4:
    // 0x1c07c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c07c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c07c8:
    // 0x1c07c8: 0xc78821  addu        $s1, $a2, $a3
    ctx->pc = 0x1c07c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1c07cc:
    // 0x1c07cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c07ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c07d0:
    // 0x1c07d0: 0x231c0  sll         $a2, $v0, 7
    ctx->pc = 0x1c07d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1c07d4:
    // 0x1c07d4: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x1c07d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c07d8:
    // 0x1c07d8: 0xc08e93e  jal         func_23A4F8
label_1c07dc:
    if (ctx->pc == 0x1C07DCu) {
        ctx->pc = 0x1C07DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C07D8u;
        // 0x1c07dc: 0x26440420  addiu       $a0, $s2, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C07E0u;
        goto label_1c07e0;
    }
    ctx->pc = 0x1C07D8u;
    SET_GPR_U32(ctx, 31, 0x1C07E0u);
    ctx->pc = 0x1C07DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C07D8u;
    // 0x1c07dc: 0x26440420  addiu       $a0, $s2, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C07E0u;
label_1c07e0:
    // 0x1c07e0: 0x8f8788fc  lw          $a3, -0x7704($gp)
    ctx->pc = 0x1c07e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936828)));
label_1c07e4:
    // 0x1c07e4: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x1c07e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_1c07e8:
    // 0x1c07e8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1c07e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1c07ec:
    // 0x1c07ec: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1c07ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1c07f0:
    // 0x1c07f0: 0x24c6b7d0  addiu       $a2, $a2, -0x4830
    ctx->pc = 0x1c07f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948816));
label_1c07f4:
    // 0x1c07f4: 0x24a5b7d4  addiu       $a1, $a1, -0x482C
    ctx->pc = 0x1c07f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948820));
label_1c07f8:
    // 0x1c07f8: 0x2484b7d8  addiu       $a0, $a0, -0x4828
    ctx->pc = 0x1c07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948824));
label_1c07fc:
    // 0x1c07fc: 0x8f828900  lw          $v0, -0x7700($gp)
    ctx->pc = 0x1c07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
label_1c0800:
    // 0x1c0800: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1c0800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1c0804:
    // 0x1c0804: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1c0804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1c0808:
    // 0x1c0808: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c0808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c080c:
    // 0x1c080c: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x1c080cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1c0810:
    // 0x1c0810: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c0810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c0814:
    // 0x1c0814: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x1c0814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1c0818:
    // 0x1c0818: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1c0818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1c081c:
    // 0x1c081c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1c081cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c0820:
    // 0x1c0820: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_1c0824:
    if (ctx->pc == 0x1C0824u) {
        ctx->pc = 0x1C0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0820u;
        // 0x1c0824: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0828u;
        goto label_1c0828;
    }
    ctx->pc = 0x1C0820u;
    {
        const bool branch_taken_0x1c0820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0820u;
        // 0x1c0824: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0820) {
            ctx->pc = 0x1C08D8u;
            { ctx->pc = 0x1c08d8; return; }
        }
    }
    ctx->pc = 0x1C0828u;
label_1c0828:
    // 0x1c0828: 0x8f848904  lw          $a0, -0x76FC($gp)
    ctx->pc = 0x1c0828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936836)));
label_1c082c:
    // 0x1c082c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_1c0830:
    if (ctx->pc == 0x1C0830u) {
        ctx->pc = 0x1C0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C082Cu;
        // 0x1c0830: 0x3082001f  andi        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0834u;
        goto label_1c0834;
    }
    ctx->pc = 0x1C082Cu;
    {
        const bool branch_taken_0x1c082c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C082Cu;
        // 0x1c0830: 0x3082001f  andi        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c082c) {
            ctx->pc = 0x1C0840u;
            goto label_1c0840;
        }
    }
    ctx->pc = 0x1C0834u;
label_1c0834:
    // 0x1c0834: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c0838:
    if (ctx->pc == 0x1C0838u) {
        ctx->pc = 0x1C0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0834u;
        // 0x1c0838: 0x28410011  slti        $at, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C083Cu;
        goto label_1c083c;
    }
    ctx->pc = 0x1C0834u;
    {
        const bool branch_taken_0x1c0834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0834u;
        // 0x1c0838: 0x28410011  slti        $at, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0834) {
            ctx->pc = 0x1C0844u;
            goto label_1c0844;
        }
    }
    ctx->pc = 0x1C083Cu;
label_1c083c:
    // 0x1c083c: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x1c083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_1c0840:
    // 0x1c0840: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x1c0840u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
label_1c0844:
    // 0x1c0844: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1c0848:
    if (ctx->pc == 0x1C0848u) {
        ctx->pc = 0x1C084Cu;
        goto label_1c084c;
    }
    ctx->pc = 0x1C0844u;
    {
        const bool branch_taken_0x1c0844 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0844) {
            ctx->pc = 0x1C0854u;
            goto label_1c0854;
        }
    }
    ctx->pc = 0x1C084Cu;
label_1c084c:
    // 0x1c084c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1c084cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c0850:
    // 0x1c0850: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1c0850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1c0854:
    // 0x1c0854: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1c0854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1c0858:
    // 0x1c0858: 0x2484b800  addiu       $a0, $a0, -0x4800
    ctx->pc = 0x1c0858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948864));
label_1c085c:
    // 0x1c085c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c0860:
    // 0x1c0860: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1c0860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c0864:
    // 0x1c0864: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1c0864u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->pc = 0x1c0868u;
    return;
}

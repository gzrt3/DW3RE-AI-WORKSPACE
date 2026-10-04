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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part109(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d01d8u: goto label_1d01d8;
        case 0x1d01dcu: goto label_1d01dc;
        case 0x1d01e0u: goto label_1d01e0;
        case 0x1d01e4u: goto label_1d01e4;
        case 0x1d01e8u: goto label_1d01e8;
        case 0x1d01ecu: goto label_1d01ec;
        case 0x1d01f0u: goto label_1d01f0;
        case 0x1d01f4u: goto label_1d01f4;
        case 0x1d01f8u: goto label_1d01f8;
        case 0x1d01fcu: goto label_1d01fc;
        case 0x1d0200u: goto label_1d0200;
        case 0x1d0204u: goto label_1d0204;
        case 0x1d0208u: goto label_1d0208;
        case 0x1d020cu: goto label_1d020c;
        case 0x1d0210u: goto label_1d0210;
        case 0x1d0214u: goto label_1d0214;
        case 0x1d0218u: goto label_1d0218;
        case 0x1d021cu: goto label_1d021c;
        case 0x1d0220u: goto label_1d0220;
        case 0x1d0224u: goto label_1d0224;
        case 0x1d0228u: goto label_1d0228;
        case 0x1d022cu: goto label_1d022c;
        case 0x1d0230u: goto label_1d0230;
        case 0x1d0234u: goto label_1d0234;
        case 0x1d0238u: goto label_1d0238;
        case 0x1d023cu: goto label_1d023c;
        case 0x1d0240u: goto label_1d0240;
        case 0x1d0244u: goto label_1d0244;
        case 0x1d0248u: goto label_1d0248;
        case 0x1d024cu: goto label_1d024c;
        case 0x1d0250u: goto label_1d0250;
        case 0x1d0254u: goto label_1d0254;
        case 0x1d0258u: goto label_1d0258;
        case 0x1d025cu: goto label_1d025c;
        case 0x1d0260u: goto label_1d0260;
        case 0x1d0264u: goto label_1d0264;
        case 0x1d0268u: goto label_1d0268;
        case 0x1d026cu: goto label_1d026c;
        case 0x1d0270u: goto label_1d0270;
        case 0x1d0274u: goto label_1d0274;
        case 0x1d0278u: goto label_1d0278;
        case 0x1d027cu: goto label_1d027c;
        case 0x1d0280u: goto label_1d0280;
        case 0x1d0284u: goto label_1d0284;
        case 0x1d0288u: goto label_1d0288;
        case 0x1d028cu: goto label_1d028c;
        case 0x1d0290u: goto label_1d0290;
        case 0x1d0294u: goto label_1d0294;
        case 0x1d0298u: goto label_1d0298;
        case 0x1d029cu: goto label_1d029c;
        case 0x1d02a0u: goto label_1d02a0;
        case 0x1d02a4u: goto label_1d02a4;
        case 0x1d02a8u: goto label_1d02a8;
        case 0x1d02acu: goto label_1d02ac;
        case 0x1d02b0u: goto label_1d02b0;
        case 0x1d02b4u: goto label_1d02b4;
        case 0x1d02b8u: goto label_1d02b8;
        case 0x1d02bcu: goto label_1d02bc;
        case 0x1d02c0u: goto label_1d02c0;
        case 0x1d02c4u: goto label_1d02c4;
        case 0x1d02c8u: goto label_1d02c8;
        case 0x1d02ccu: goto label_1d02cc;
        case 0x1d02d0u: goto label_1d02d0;
        case 0x1d02d4u: goto label_1d02d4;
        case 0x1d02d8u: goto label_1d02d8;
        case 0x1d02dcu: goto label_1d02dc;
        case 0x1d02e0u: goto label_1d02e0;
        case 0x1d02e4u: goto label_1d02e4;
        case 0x1d02e8u: goto label_1d02e8;
        case 0x1d02ecu: goto label_1d02ec;
        case 0x1d02f0u: goto label_1d02f0;
        case 0x1d02f4u: goto label_1d02f4;
        case 0x1d02f8u: goto label_1d02f8;
        case 0x1d02fcu: goto label_1d02fc;
        case 0x1d0300u: goto label_1d0300;
        case 0x1d0304u: goto label_1d0304;
        case 0x1d0308u: goto label_1d0308;
        case 0x1d030cu: goto label_1d030c;
        case 0x1d0310u: goto label_1d0310;
        case 0x1d0314u: goto label_1d0314;
        case 0x1d0318u: goto label_1d0318;
        case 0x1d031cu: goto label_1d031c;
        case 0x1d0320u: goto label_1d0320;
        case 0x1d0324u: goto label_1d0324;
        case 0x1d0328u: goto label_1d0328;
        case 0x1d032cu: goto label_1d032c;
        case 0x1d0330u: goto label_1d0330;
        case 0x1d0334u: goto label_1d0334;
        case 0x1d0338u: goto label_1d0338;
        case 0x1d033cu: goto label_1d033c;
        case 0x1d0340u: goto label_1d0340;
        case 0x1d0344u: goto label_1d0344;
        case 0x1d0348u: goto label_1d0348;
        case 0x1d034cu: goto label_1d034c;
        case 0x1d0350u: goto label_1d0350;
        case 0x1d0354u: goto label_1d0354;
        case 0x1d0358u: goto label_1d0358;
        case 0x1d035cu: goto label_1d035c;
        case 0x1d0360u: goto label_1d0360;
        case 0x1d0364u: goto label_1d0364;
        case 0x1d0368u: goto label_1d0368;
        case 0x1d036cu: goto label_1d036c;
        case 0x1d0370u: goto label_1d0370;
        case 0x1d0374u: goto label_1d0374;
        case 0x1d0378u: goto label_1d0378;
        case 0x1d037cu: goto label_1d037c;
        case 0x1d0380u: goto label_1d0380;
        case 0x1d0384u: goto label_1d0384;
        case 0x1d0388u: goto label_1d0388;
        case 0x1d038cu: goto label_1d038c;
        case 0x1d0390u: goto label_1d0390;
        case 0x1d0394u: goto label_1d0394;
        case 0x1d0398u: goto label_1d0398;
        case 0x1d039cu: goto label_1d039c;
        case 0x1d03a0u: goto label_1d03a0;
        case 0x1d03a4u: goto label_1d03a4;
        case 0x1d03a8u: goto label_1d03a8;
        case 0x1d03acu: goto label_1d03ac;
        case 0x1d03b0u: goto label_1d03b0;
        case 0x1d03b4u: goto label_1d03b4;
        case 0x1d03b8u: goto label_1d03b8;
        case 0x1d03bcu: goto label_1d03bc;
        case 0x1d03c0u: goto label_1d03c0;
        case 0x1d03c4u: goto label_1d03c4;
        case 0x1d03c8u: goto label_1d03c8;
        case 0x1d03ccu: goto label_1d03cc;
        case 0x1d03d0u: goto label_1d03d0;
        case 0x1d03d4u: goto label_1d03d4;
        case 0x1d03d8u: goto label_1d03d8;
        case 0x1d03dcu: goto label_1d03dc;
        case 0x1d03e0u: goto label_1d03e0;
        case 0x1d03e4u: goto label_1d03e4;
        case 0x1d03e8u: goto label_1d03e8;
        case 0x1d03ecu: goto label_1d03ec;
        case 0x1d03f0u: goto label_1d03f0;
        case 0x1d03f4u: goto label_1d03f4;
        case 0x1d03f8u: goto label_1d03f8;
        case 0x1d03fcu: goto label_1d03fc;
        case 0x1d0400u: goto label_1d0400;
        case 0x1d0404u: goto label_1d0404;
        case 0x1d0408u: goto label_1d0408;
        case 0x1d040cu: goto label_1d040c;
        case 0x1d0410u: goto label_1d0410;
        case 0x1d0414u: goto label_1d0414;
        case 0x1d0418u: goto label_1d0418;
        case 0x1d041cu: goto label_1d041c;
        case 0x1d0420u: goto label_1d0420;
        case 0x1d0424u: goto label_1d0424;
        case 0x1d0428u: goto label_1d0428;
        case 0x1d042cu: goto label_1d042c;
        case 0x1d0430u: goto label_1d0430;
        case 0x1d0434u: goto label_1d0434;
        case 0x1d0438u: goto label_1d0438;
        case 0x1d043cu: goto label_1d043c;
        case 0x1d0440u: goto label_1d0440;
        case 0x1d0444u: goto label_1d0444;
        case 0x1d0448u: goto label_1d0448;
        case 0x1d044cu: goto label_1d044c;
        case 0x1d0450u: goto label_1d0450;
        case 0x1d0454u: goto label_1d0454;
        case 0x1d0458u: goto label_1d0458;
        case 0x1d045cu: goto label_1d045c;
        case 0x1d0460u: goto label_1d0460;
        case 0x1d0464u: goto label_1d0464;
        case 0x1d0468u: goto label_1d0468;
        case 0x1d046cu: goto label_1d046c;
        case 0x1d0470u: goto label_1d0470;
        case 0x1d0474u: goto label_1d0474;
        case 0x1d0478u: goto label_1d0478;
        case 0x1d047cu: goto label_1d047c;
        case 0x1d0480u: goto label_1d0480;
        case 0x1d0484u: goto label_1d0484;
        case 0x1d0488u: goto label_1d0488;
        case 0x1d048cu: goto label_1d048c;
        case 0x1d0490u: goto label_1d0490;
        case 0x1d0494u: goto label_1d0494;
        case 0x1d0498u: goto label_1d0498;
        case 0x1d049cu: goto label_1d049c;
        case 0x1d04a0u: goto label_1d04a0;
        case 0x1d04a4u: goto label_1d04a4;
        case 0x1d04a8u: goto label_1d04a8;
        case 0x1d04acu: goto label_1d04ac;
        case 0x1d04b0u: goto label_1d04b0;
        case 0x1d04b4u: goto label_1d04b4;
        case 0x1d04b8u: goto label_1d04b8;
        case 0x1d04bcu: goto label_1d04bc;
        case 0x1d04c0u: goto label_1d04c0;
        case 0x1d04c4u: goto label_1d04c4;
        case 0x1d04c8u: goto label_1d04c8;
        case 0x1d04ccu: goto label_1d04cc;
        case 0x1d04d0u: goto label_1d04d0;
        case 0x1d04d4u: goto label_1d04d4;
        case 0x1d04d8u: goto label_1d04d8;
        case 0x1d04dcu: goto label_1d04dc;
        case 0x1d04e0u: goto label_1d04e0;
        case 0x1d04e4u: goto label_1d04e4;
        case 0x1d04e8u: goto label_1d04e8;
        case 0x1d04ecu: goto label_1d04ec;
        case 0x1d04f0u: goto label_1d04f0;
        case 0x1d04f4u: goto label_1d04f4;
        case 0x1d04f8u: goto label_1d04f8;
        case 0x1d04fcu: goto label_1d04fc;
        case 0x1d0500u: goto label_1d0500;
        case 0x1d0504u: goto label_1d0504;
        case 0x1d0508u: goto label_1d0508;
        case 0x1d050cu: goto label_1d050c;
        case 0x1d0510u: goto label_1d0510;
        case 0x1d0514u: goto label_1d0514;
        case 0x1d0518u: goto label_1d0518;
        case 0x1d051cu: goto label_1d051c;
        case 0x1d0520u: goto label_1d0520;
        case 0x1d0524u: goto label_1d0524;
        case 0x1d0528u: goto label_1d0528;
        case 0x1d052cu: goto label_1d052c;
        case 0x1d0530u: goto label_1d0530;
        case 0x1d0534u: goto label_1d0534;
        case 0x1d0538u: goto label_1d0538;
        case 0x1d053cu: goto label_1d053c;
        case 0x1d0540u: goto label_1d0540;
        case 0x1d0544u: goto label_1d0544;
        case 0x1d0548u: goto label_1d0548;
        case 0x1d054cu: goto label_1d054c;
        case 0x1d0550u: goto label_1d0550;
        case 0x1d0554u: goto label_1d0554;
        case 0x1d0558u: goto label_1d0558;
        case 0x1d055cu: goto label_1d055c;
        case 0x1d0560u: goto label_1d0560;
        case 0x1d0564u: goto label_1d0564;
        case 0x1d0568u: goto label_1d0568;
        case 0x1d056cu: goto label_1d056c;
        case 0x1d0570u: goto label_1d0570;
        case 0x1d0574u: goto label_1d0574;
        case 0x1d0578u: goto label_1d0578;
        case 0x1d057cu: goto label_1d057c;
        case 0x1d0580u: goto label_1d0580;
        case 0x1d0584u: goto label_1d0584;
        case 0x1d0588u: goto label_1d0588;
        case 0x1d058cu: goto label_1d058c;
        case 0x1d0590u: goto label_1d0590;
        case 0x1d0594u: goto label_1d0594;
        case 0x1d0598u: goto label_1d0598;
        case 0x1d059cu: goto label_1d059c;
        case 0x1d05a0u: goto label_1d05a0;
        case 0x1d05a4u: goto label_1d05a4;
        case 0x1d05a8u: goto label_1d05a8;
        case 0x1d05acu: goto label_1d05ac;
        case 0x1d05b0u: goto label_1d05b0;
        case 0x1d05b4u: goto label_1d05b4;
        case 0x1d05b8u: goto label_1d05b8;
        case 0x1d05bcu: goto label_1d05bc;
        case 0x1d05c0u: goto label_1d05c0;
        case 0x1d05c4u: goto label_1d05c4;
        case 0x1d05c8u: goto label_1d05c8;
        case 0x1d05ccu: goto label_1d05cc;
        case 0x1d05d0u: goto label_1d05d0;
        case 0x1d05d4u: goto label_1d05d4;
        case 0x1d05d8u: goto label_1d05d8;
        case 0x1d05dcu: goto label_1d05dc;
        case 0x1d05e0u: goto label_1d05e0;
        case 0x1d05e4u: goto label_1d05e4;
        case 0x1d05e8u: goto label_1d05e8;
        case 0x1d05ecu: goto label_1d05ec;
        case 0x1d05f0u: goto label_1d05f0;
        case 0x1d05f4u: goto label_1d05f4;
        case 0x1d05f8u: goto label_1d05f8;
        case 0x1d05fcu: goto label_1d05fc;
        case 0x1d0600u: goto label_1d0600;
        case 0x1d0604u: goto label_1d0604;
        case 0x1d0608u: goto label_1d0608;
        case 0x1d060cu: goto label_1d060c;
        case 0x1d0610u: goto label_1d0610;
        case 0x1d0614u: goto label_1d0614;
        case 0x1d0618u: goto label_1d0618;
        case 0x1d061cu: goto label_1d061c;
        case 0x1d0620u: goto label_1d0620;
        case 0x1d0624u: goto label_1d0624;
        case 0x1d0628u: goto label_1d0628;
        case 0x1d062cu: goto label_1d062c;
        case 0x1d0630u: goto label_1d0630;
        case 0x1d0634u: goto label_1d0634;
        case 0x1d0638u: goto label_1d0638;
        case 0x1d063cu: goto label_1d063c;
        case 0x1d0640u: goto label_1d0640;
        case 0x1d0644u: goto label_1d0644;
        case 0x1d0648u: goto label_1d0648;
        case 0x1d064cu: goto label_1d064c;
        case 0x1d0650u: goto label_1d0650;
        case 0x1d0654u: goto label_1d0654;
        case 0x1d0658u: goto label_1d0658;
        case 0x1d065cu: goto label_1d065c;
        case 0x1d0660u: goto label_1d0660;
        case 0x1d0664u: goto label_1d0664;
        case 0x1d0668u: goto label_1d0668;
        case 0x1d066cu: goto label_1d066c;
        case 0x1d0670u: goto label_1d0670;
        case 0x1d0674u: goto label_1d0674;
        case 0x1d0678u: goto label_1d0678;
        case 0x1d067cu: goto label_1d067c;
        case 0x1d0680u: goto label_1d0680;
        case 0x1d0684u: goto label_1d0684;
        case 0x1d0688u: goto label_1d0688;
        case 0x1d068cu: goto label_1d068c;
        case 0x1d0690u: goto label_1d0690;
        case 0x1d0694u: goto label_1d0694;
        case 0x1d0698u: goto label_1d0698;
        case 0x1d069cu: goto label_1d069c;
        case 0x1d06a0u: goto label_1d06a0;
        case 0x1d06a4u: goto label_1d06a4;
        case 0x1d06a8u: goto label_1d06a8;
        case 0x1d06acu: goto label_1d06ac;
        case 0x1d06b0u: goto label_1d06b0;
        case 0x1d06b4u: goto label_1d06b4;
        case 0x1d06b8u: goto label_1d06b8;
        case 0x1d06bcu: goto label_1d06bc;
        case 0x1d06c0u: goto label_1d06c0;
        case 0x1d06c4u: goto label_1d06c4;
        case 0x1d06c8u: goto label_1d06c8;
        case 0x1d06ccu: goto label_1d06cc;
        case 0x1d06d0u: goto label_1d06d0;
        case 0x1d06d4u: goto label_1d06d4;
        case 0x1d06d8u: goto label_1d06d8;
        case 0x1d06dcu: goto label_1d06dc;
        case 0x1d06e0u: goto label_1d06e0;
        case 0x1d06e4u: goto label_1d06e4;
        case 0x1d06e8u: goto label_1d06e8;
        case 0x1d06ecu: goto label_1d06ec;
        case 0x1d06f0u: goto label_1d06f0;
        case 0x1d06f4u: goto label_1d06f4;
        case 0x1d06f8u: goto label_1d06f8;
        case 0x1d06fcu: goto label_1d06fc;
        case 0x1d0700u: goto label_1d0700;
        case 0x1d0704u: goto label_1d0704;
        case 0x1d0708u: goto label_1d0708;
        case 0x1d070cu: goto label_1d070c;
        case 0x1d0710u: goto label_1d0710;
        case 0x1d0714u: goto label_1d0714;
        case 0x1d0718u: goto label_1d0718;
        case 0x1d071cu: goto label_1d071c;
        case 0x1d0720u: goto label_1d0720;
        case 0x1d0724u: goto label_1d0724;
        case 0x1d0728u: goto label_1d0728;
        case 0x1d072cu: goto label_1d072c;
        case 0x1d0730u: goto label_1d0730;
        case 0x1d0734u: goto label_1d0734;
        case 0x1d0738u: goto label_1d0738;
        case 0x1d073cu: goto label_1d073c;
        case 0x1d0740u: goto label_1d0740;
        case 0x1d0744u: goto label_1d0744;
        case 0x1d0748u: goto label_1d0748;
        case 0x1d074cu: goto label_1d074c;
        case 0x1d0750u: goto label_1d0750;
        case 0x1d0754u: goto label_1d0754;
        case 0x1d0758u: goto label_1d0758;
        case 0x1d075cu: goto label_1d075c;
        case 0x1d0760u: goto label_1d0760;
        case 0x1d0764u: goto label_1d0764;
        case 0x1d0768u: goto label_1d0768;
        case 0x1d076cu: goto label_1d076c;
        case 0x1d0770u: goto label_1d0770;
        case 0x1d0774u: goto label_1d0774;
        case 0x1d0778u: goto label_1d0778;
        case 0x1d077cu: goto label_1d077c;
        case 0x1d0780u: goto label_1d0780;
        case 0x1d0784u: goto label_1d0784;
        case 0x1d0788u: goto label_1d0788;
        case 0x1d078cu: goto label_1d078c;
        case 0x1d0790u: goto label_1d0790;
        case 0x1d0794u: goto label_1d0794;
        case 0x1d0798u: goto label_1d0798;
        case 0x1d079cu: goto label_1d079c;
        case 0x1d07a0u: goto label_1d07a0;
        case 0x1d07a4u: goto label_1d07a4;
        case 0x1d07a8u: goto label_1d07a8;
        case 0x1d07acu: goto label_1d07ac;
        case 0x1d07b0u: goto label_1d07b0;
        case 0x1d07b4u: goto label_1d07b4;
        case 0x1d07b8u: goto label_1d07b8;
        case 0x1d07bcu: goto label_1d07bc;
        case 0x1d07c0u: goto label_1d07c0;
        case 0x1d07c4u: goto label_1d07c4;
        case 0x1d07c8u: goto label_1d07c8;
        case 0x1d07ccu: goto label_1d07cc;
        case 0x1d07d0u: goto label_1d07d0;
        case 0x1d07d4u: goto label_1d07d4;
        case 0x1d07d8u: goto label_1d07d8;
        case 0x1d07dcu: goto label_1d07dc;
        case 0x1d07e0u: goto label_1d07e0;
        case 0x1d07e4u: goto label_1d07e4;
        case 0x1d07e8u: goto label_1d07e8;
        case 0x1d07ecu: goto label_1d07ec;
        case 0x1d07f0u: goto label_1d07f0;
        case 0x1d07f4u: goto label_1d07f4;
        case 0x1d07f8u: goto label_1d07f8;
        case 0x1d07fcu: goto label_1d07fc;
        case 0x1d0800u: goto label_1d0800;
        case 0x1d0804u: goto label_1d0804;
        case 0x1d0808u: goto label_1d0808;
        case 0x1d080cu: goto label_1d080c;
        case 0x1d0810u: goto label_1d0810;
        case 0x1d0814u: goto label_1d0814;
        case 0x1d0818u: goto label_1d0818;
        case 0x1d081cu: goto label_1d081c;
        case 0x1d0820u: goto label_1d0820;
        case 0x1d0824u: goto label_1d0824;
        case 0x1d0828u: goto label_1d0828;
        case 0x1d082cu: goto label_1d082c;
        case 0x1d0830u: goto label_1d0830;
        case 0x1d0834u: goto label_1d0834;
        case 0x1d0838u: goto label_1d0838;
        case 0x1d083cu: goto label_1d083c;
        case 0x1d0840u: goto label_1d0840;
        case 0x1d0844u: goto label_1d0844;
        case 0x1d0848u: goto label_1d0848;
        case 0x1d084cu: goto label_1d084c;
        case 0x1d0850u: goto label_1d0850;
        case 0x1d0854u: goto label_1d0854;
        case 0x1d0858u: goto label_1d0858;
        case 0x1d085cu: goto label_1d085c;
        case 0x1d0860u: goto label_1d0860;
        case 0x1d0864u: goto label_1d0864;
        case 0x1d0868u: goto label_1d0868;
        case 0x1d086cu: goto label_1d086c;
        case 0x1d0870u: goto label_1d0870;
        case 0x1d0874u: goto label_1d0874;
        case 0x1d0878u: goto label_1d0878;
        case 0x1d087cu: goto label_1d087c;
        case 0x1d0880u: goto label_1d0880;
        case 0x1d0884u: goto label_1d0884;
        case 0x1d0888u: goto label_1d0888;
        case 0x1d088cu: goto label_1d088c;
        case 0x1d0890u: goto label_1d0890;
        case 0x1d0894u: goto label_1d0894;
        case 0x1d0898u: goto label_1d0898;
        case 0x1d089cu: goto label_1d089c;
        case 0x1d08a0u: goto label_1d08a0;
        case 0x1d08a4u: goto label_1d08a4;
        case 0x1d08a8u: goto label_1d08a8;
        case 0x1d08acu: goto label_1d08ac;
        case 0x1d08b0u: goto label_1d08b0;
        case 0x1d08b4u: goto label_1d08b4;
        case 0x1d08b8u: goto label_1d08b8;
        case 0x1d08bcu: goto label_1d08bc;
        case 0x1d08c0u: goto label_1d08c0;
        case 0x1d08c4u: goto label_1d08c4;
        case 0x1d08c8u: goto label_1d08c8;
        case 0x1d08ccu: goto label_1d08cc;
        case 0x1d08d0u: goto label_1d08d0;
        case 0x1d08d4u: goto label_1d08d4;
        case 0x1d08d8u: goto label_1d08d8;
        case 0x1d08dcu: goto label_1d08dc;
        case 0x1d08e0u: goto label_1d08e0;
        case 0x1d08e4u: goto label_1d08e4;
        case 0x1d08e8u: goto label_1d08e8;
        case 0x1d08ecu: goto label_1d08ec;
        case 0x1d08f0u: goto label_1d08f0;
        case 0x1d08f4u: goto label_1d08f4;
        case 0x1d08f8u: goto label_1d08f8;
        case 0x1d08fcu: goto label_1d08fc;
        case 0x1d0900u: goto label_1d0900;
        case 0x1d0904u: goto label_1d0904;
        case 0x1d0908u: goto label_1d0908;
        case 0x1d090cu: goto label_1d090c;
        case 0x1d0910u: goto label_1d0910;
        case 0x1d0914u: goto label_1d0914;
        case 0x1d0918u: goto label_1d0918;
        case 0x1d091cu: goto label_1d091c;
        case 0x1d0920u: goto label_1d0920;
        case 0x1d0924u: goto label_1d0924;
        case 0x1d0928u: goto label_1d0928;
        case 0x1d092cu: goto label_1d092c;
        case 0x1d0930u: goto label_1d0930;
        case 0x1d0934u: goto label_1d0934;
        case 0x1d0938u: goto label_1d0938;
        case 0x1d093cu: goto label_1d093c;
        case 0x1d0940u: goto label_1d0940;
        case 0x1d0944u: goto label_1d0944;
        case 0x1d0948u: goto label_1d0948;
        case 0x1d094cu: goto label_1d094c;
        case 0x1d0950u: goto label_1d0950;
        case 0x1d0954u: goto label_1d0954;
        case 0x1d0958u: goto label_1d0958;
        case 0x1d095cu: goto label_1d095c;
        case 0x1d0960u: goto label_1d0960;
        case 0x1d0964u: goto label_1d0964;
        case 0x1d0968u: goto label_1d0968;
        case 0x1d096cu: goto label_1d096c;
        case 0x1d0970u: goto label_1d0970;
        case 0x1d0974u: goto label_1d0974;
        case 0x1d0978u: goto label_1d0978;
        case 0x1d097cu: goto label_1d097c;
        case 0x1d0980u: goto label_1d0980;
        case 0x1d0984u: goto label_1d0984;
        case 0x1d0988u: goto label_1d0988;
        case 0x1d098cu: goto label_1d098c;
        case 0x1d0990u: goto label_1d0990;
        case 0x1d0994u: goto label_1d0994;
        case 0x1d0998u: goto label_1d0998;
        case 0x1d099cu: goto label_1d099c;
        case 0x1d09a0u: goto label_1d09a0;
        case 0x1d09a4u: goto label_1d09a4;
        default: return;
    }

label_1d01d8:
    // 0x1d01d8: 0xa2450079  sb          $a1, 0x79($s2)
    ctx->pc = 0x1d01d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 121), (uint8_t)GPR_U32(ctx, 5));
label_1d01dc:
    // 0x1d01dc: 0xa244007a  sb          $a0, 0x7A($s2)
    ctx->pc = 0x1d01dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 122), (uint8_t)GPR_U32(ctx, 4));
label_1d01e0:
    // 0x1d01e0: 0xa242007b  sb          $v0, 0x7B($s2)
    ctx->pc = 0x1d01e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 123), (uint8_t)GPR_U32(ctx, 2));
label_1d01e4:
    // 0x1d01e4: 0xae43007c  sw          $v1, 0x7C($s2)
    ctx->pc = 0x1d01e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
label_1d01e8:
    // 0x1d01e8: 0xa2460088  sb          $a2, 0x88($s2)
    ctx->pc = 0x1d01e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 136), (uint8_t)GPR_U32(ctx, 6));
label_1d01ec:
    // 0x1d01ec: 0xa2460089  sb          $a2, 0x89($s2)
    ctx->pc = 0x1d01ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 137), (uint8_t)GPR_U32(ctx, 6));
label_1d01f0:
    // 0x1d01f0: 0xa246008a  sb          $a2, 0x8A($s2)
    ctx->pc = 0x1d01f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 138), (uint8_t)GPR_U32(ctx, 6));
label_1d01f4:
    // 0x1d01f4: 0xa240008b  sb          $zero, 0x8B($s2)
    ctx->pc = 0x1d01f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 0));
label_1d01f8:
    // 0x1d01f8: 0xae43008c  sw          $v1, 0x8C($s2)
    ctx->pc = 0x1d01f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 3));
label_1d01fc:
    // 0x1d01fc: 0xa2460098  sb          $a2, 0x98($s2)
    ctx->pc = 0x1d01fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 152), (uint8_t)GPR_U32(ctx, 6));
label_1d0200:
    // 0x1d0200: 0xa2460099  sb          $a2, 0x99($s2)
    ctx->pc = 0x1d0200u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 153), (uint8_t)GPR_U32(ctx, 6));
label_1d0204:
    // 0x1d0204: 0xa246009a  sb          $a2, 0x9A($s2)
    ctx->pc = 0x1d0204u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 154), (uint8_t)GPR_U32(ctx, 6));
label_1d0208:
    // 0x1d0208: 0xa242009b  sb          $v0, 0x9B($s2)
    ctx->pc = 0x1d0208u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 155), (uint8_t)GPR_U32(ctx, 2));
label_1d020c:
    // 0x1d020c: 0x10000039  b           . + 4 + (0x39 << 2)
label_1d0210:
    if (ctx->pc == 0x1D0210u) {
        ctx->pc = 0x1D0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D020Cu;
        // 0x1d0210: 0xae43009c  sw          $v1, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0214u;
        goto label_1d0214;
    }
    ctx->pc = 0x1D020Cu;
    {
        const bool branch_taken_0x1d020c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D020Cu;
        // 0x1d0210: 0xae43009c  sw          $v1, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d020c) {
            ctx->pc = 0x1D02F4u;
            goto label_1d02f4;
        }
    }
    ctx->pc = 0x1D0214u;
label_1d0214:
    // 0x1d0214: 0x0  nop
    ctx->pc = 0x1d0214u;
    // NOP
label_1d0218:
    // 0x1d0218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d021c:
    // 0x1d021c: 0x1662001a  bne         $s3, $v0, . + 4 + (0x1A << 2)
label_1d0220:
    if (ctx->pc == 0x1D0220u) {
        ctx->pc = 0x1D0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D021Cu;
        // 0x1d0220: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0224u;
        goto label_1d0224;
    }
    ctx->pc = 0x1D021Cu;
    {
        const bool branch_taken_0x1d021c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D021Cu;
        // 0x1d0220: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d021c) {
            ctx->pc = 0x1D0288u;
            goto label_1d0288;
        }
    }
    ctx->pc = 0x1D0224u;
label_1d0224:
    // 0x1d0224: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x1d0224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1d0228:
    // 0x1d0228: 0xa2460068  sb          $a2, 0x68($s2)
    ctx->pc = 0x1d0228u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 6));
label_1d022c:
    // 0x1d022c: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1d022cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1d0230:
    // 0x1d0230: 0xa2450069  sb          $a1, 0x69($s2)
    ctx->pc = 0x1d0230u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 5));
label_1d0234:
    // 0x1d0234: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1d0234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1d0238:
    // 0x1d0238: 0xa244006a  sb          $a0, 0x6A($s2)
    ctx->pc = 0x1d0238u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 4));
label_1d023c:
    // 0x1d023c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d023cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d0240:
    // 0x1d0240: 0xa243006b  sb          $v1, 0x6B($s2)
    ctx->pc = 0x1d0240u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 3));
label_1d0244:
    // 0x1d0244: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x1d0244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
label_1d0248:
    // 0x1d0248: 0xa2460078  sb          $a2, 0x78($s2)
    ctx->pc = 0x1d0248u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 6));
label_1d024c:
    // 0x1d024c: 0xa2450079  sb          $a1, 0x79($s2)
    ctx->pc = 0x1d024cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 121), (uint8_t)GPR_U32(ctx, 5));
label_1d0250:
    // 0x1d0250: 0xa244007a  sb          $a0, 0x7A($s2)
    ctx->pc = 0x1d0250u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 122), (uint8_t)GPR_U32(ctx, 4));
label_1d0254:
    // 0x1d0254: 0xa243007b  sb          $v1, 0x7B($s2)
    ctx->pc = 0x1d0254u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 123), (uint8_t)GPR_U32(ctx, 3));
label_1d0258:
    // 0x1d0258: 0xae42007c  sw          $v0, 0x7C($s2)
    ctx->pc = 0x1d0258u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
label_1d025c:
    // 0x1d025c: 0xa2460088  sb          $a2, 0x88($s2)
    ctx->pc = 0x1d025cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 136), (uint8_t)GPR_U32(ctx, 6));
label_1d0260:
    // 0x1d0260: 0xa2460089  sb          $a2, 0x89($s2)
    ctx->pc = 0x1d0260u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 137), (uint8_t)GPR_U32(ctx, 6));
label_1d0264:
    // 0x1d0264: 0xa246008a  sb          $a2, 0x8A($s2)
    ctx->pc = 0x1d0264u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 138), (uint8_t)GPR_U32(ctx, 6));
label_1d0268:
    // 0x1d0268: 0xa243008b  sb          $v1, 0x8B($s2)
    ctx->pc = 0x1d0268u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 3));
label_1d026c:
    // 0x1d026c: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x1d026cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_1d0270:
    // 0x1d0270: 0xa2460098  sb          $a2, 0x98($s2)
    ctx->pc = 0x1d0270u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 152), (uint8_t)GPR_U32(ctx, 6));
label_1d0274:
    // 0x1d0274: 0xa2460099  sb          $a2, 0x99($s2)
    ctx->pc = 0x1d0274u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 153), (uint8_t)GPR_U32(ctx, 6));
label_1d0278:
    // 0x1d0278: 0xa246009a  sb          $a2, 0x9A($s2)
    ctx->pc = 0x1d0278u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 154), (uint8_t)GPR_U32(ctx, 6));
label_1d027c:
    // 0x1d027c: 0xa243009b  sb          $v1, 0x9B($s2)
    ctx->pc = 0x1d027cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 155), (uint8_t)GPR_U32(ctx, 3));
label_1d0280:
    // 0x1d0280: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1d0284:
    if (ctx->pc == 0x1D0284u) {
        ctx->pc = 0x1D0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0280u;
        // 0x1d0284: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0288u;
        goto label_1d0288;
    }
    ctx->pc = 0x1D0280u;
    {
        const bool branch_taken_0x1d0280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0280u;
        // 0x1d0284: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0280) {
            ctx->pc = 0x1D02F4u;
            goto label_1d02f4;
        }
    }
    ctx->pc = 0x1D0288u;
label_1d0288:
    // 0x1d0288: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d0288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d028c:
    // 0x1d028c: 0x16620019  bne         $s3, $v0, . + 4 + (0x19 << 2)
label_1d0290:
    if (ctx->pc == 0x1D0290u) {
        ctx->pc = 0x1D0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D028Cu;
        // 0x1d0290: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0294u;
        goto label_1d0294;
    }
    ctx->pc = 0x1D028Cu;
    {
        const bool branch_taken_0x1d028c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D028Cu;
        // 0x1d0290: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d028c) {
            ctx->pc = 0x1D02F4u;
            goto label_1d02f4;
        }
    }
    ctx->pc = 0x1D0294u;
label_1d0294:
    // 0x1d0294: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x1d0294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1d0298:
    // 0x1d0298: 0xa2460068  sb          $a2, 0x68($s2)
    ctx->pc = 0x1d0298u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 6));
label_1d029c:
    // 0x1d029c: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1d029cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1d02a0:
    // 0x1d02a0: 0xa2450069  sb          $a1, 0x69($s2)
    ctx->pc = 0x1d02a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 5));
label_1d02a4:
    // 0x1d02a4: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1d02a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1d02a8:
    // 0x1d02a8: 0xa244006a  sb          $a0, 0x6A($s2)
    ctx->pc = 0x1d02a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 4));
label_1d02ac:
    // 0x1d02ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d02acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d02b0:
    // 0x1d02b0: 0xa243006b  sb          $v1, 0x6B($s2)
    ctx->pc = 0x1d02b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 3));
label_1d02b4:
    // 0x1d02b4: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x1d02b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
label_1d02b8:
    // 0x1d02b8: 0xa2460078  sb          $a2, 0x78($s2)
    ctx->pc = 0x1d02b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 6));
label_1d02bc:
    // 0x1d02bc: 0xa2450079  sb          $a1, 0x79($s2)
    ctx->pc = 0x1d02bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 121), (uint8_t)GPR_U32(ctx, 5));
label_1d02c0:
    // 0x1d02c0: 0xa244007a  sb          $a0, 0x7A($s2)
    ctx->pc = 0x1d02c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 122), (uint8_t)GPR_U32(ctx, 4));
label_1d02c4:
    // 0x1d02c4: 0xa240007b  sb          $zero, 0x7B($s2)
    ctx->pc = 0x1d02c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 123), (uint8_t)GPR_U32(ctx, 0));
label_1d02c8:
    // 0x1d02c8: 0xae42007c  sw          $v0, 0x7C($s2)
    ctx->pc = 0x1d02c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
label_1d02cc:
    // 0x1d02cc: 0xa2460088  sb          $a2, 0x88($s2)
    ctx->pc = 0x1d02ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 136), (uint8_t)GPR_U32(ctx, 6));
label_1d02d0:
    // 0x1d02d0: 0xa2460089  sb          $a2, 0x89($s2)
    ctx->pc = 0x1d02d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 137), (uint8_t)GPR_U32(ctx, 6));
label_1d02d4:
    // 0x1d02d4: 0xa246008a  sb          $a2, 0x8A($s2)
    ctx->pc = 0x1d02d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 138), (uint8_t)GPR_U32(ctx, 6));
label_1d02d8:
    // 0x1d02d8: 0xa243008b  sb          $v1, 0x8B($s2)
    ctx->pc = 0x1d02d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 3));
label_1d02dc:
    // 0x1d02dc: 0xae42008c  sw          $v0, 0x8C($s2)
    ctx->pc = 0x1d02dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
label_1d02e0:
    // 0x1d02e0: 0xa2460098  sb          $a2, 0x98($s2)
    ctx->pc = 0x1d02e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 152), (uint8_t)GPR_U32(ctx, 6));
label_1d02e4:
    // 0x1d02e4: 0xa2460099  sb          $a2, 0x99($s2)
    ctx->pc = 0x1d02e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 153), (uint8_t)GPR_U32(ctx, 6));
label_1d02e8:
    // 0x1d02e8: 0xa246009a  sb          $a2, 0x9A($s2)
    ctx->pc = 0x1d02e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 154), (uint8_t)GPR_U32(ctx, 6));
label_1d02ec:
    // 0x1d02ec: 0xa240009b  sb          $zero, 0x9B($s2)
    ctx->pc = 0x1d02ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 155), (uint8_t)GPR_U32(ctx, 0));
label_1d02f0:
    // 0x1d02f0: 0xae42009c  sw          $v0, 0x9C($s2)
    ctx->pc = 0x1d02f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
label_1d02f4:
    // 0x1d02f4: 0x0  nop
    ctx->pc = 0x1d02f4u;
    // NOP
label_1d02f8:
    // 0x1d02f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d02f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d02fc:
    // 0x1d02fc: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x1d02fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d0300:
    // 0x1d0300: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
label_1d0304:
    if (ctx->pc == 0x1D0304u) {
        ctx->pc = 0x1D0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0300u;
        // 0x1d0304: 0x26d600b0  addiu       $s6, $s6, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0308u;
        goto label_1d0308;
    }
    ctx->pc = 0x1D0300u;
    {
        const bool branch_taken_0x1d0300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0300u;
        // 0x1d0304: 0x26d600b0  addiu       $s6, $s6, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0300) {
            ctx->pc = 0x1D0054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d0054; return; }
        }
    }
    ctx->pc = 0x1D0308u;
label_1d0308:
    // 0x1d0308: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
label_1d030c:
    if (ctx->pc == 0x1D030Cu) {
        ctx->pc = 0x1D0310u;
        goto label_1d0310;
    }
    ctx->pc = 0x1D0308u;
    {
        const bool branch_taken_0x1d0308 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0308) {
            ctx->pc = 0x1D0360u;
            goto label_1d0360;
        }
    }
    ctx->pc = 0x1D0310u;
label_1d0310:
    // 0x1d0310: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1d0310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1d0314:
    // 0x1d0314: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0318:
    // 0x1d0318: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d0318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d031c:
    // 0x1d031c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1d031cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d0320:
    // 0x1d0320: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x1d0320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1d0324:
    // 0x1d0324: 0x3409ffe3  ori         $t1, $zero, 0xFFE3
    ctx->pc = 0x1d0324u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65507);
label_1d0328:
    // 0x1d0328: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d0328u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d032c:
    // 0x1d032c: 0x240b0014  addiu       $t3, $zero, 0x14
    ctx->pc = 0x1d032cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d0330:
    // 0x1d0330: 0x24421200  addiu       $v0, $v0, 0x1200
    ctx->pc = 0x1d0330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
label_1d0334:
    // 0x1d0334: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1d0334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1d0338:
    // 0x1d0338: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x1d0338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1d033c:
    // 0x1d033c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1d033cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1d0340:
    // 0x1d0340: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1d0340u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d0344:
    // 0x1d0344: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1d0344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1d0348:
    // 0x1d0348: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d0348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d034c:
    // 0x1d034c: 0x90450241  lbu         $a1, 0x241($v0)
    ctx->pc = 0x1d034cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 577)));
label_1d0350:
    // 0x1d0350: 0xc054c60  jal         func_153180
label_1d0354:
    if (ctx->pc == 0x1D0354u) {
        ctx->pc = 0x1D0354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0350u;
        // 0x1d0354: 0x246800a1  addiu       $t0, $v1, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 161));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0358u;
        goto label_1d0358;
    }
    ctx->pc = 0x1D0350u;
    SET_GPR_U32(ctx, 31, 0x1D0358u);
    ctx->pc = 0x1D0354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0350u;
    // 0x1d0354: 0x246800a1  addiu       $t0, $v1, 0xA1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 161));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x1D0350u, 0x1D0358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0358u;
label_1d0358:
    // 0x1d0358: 0x10000010  b           . + 4 + (0x10 << 2)
label_1d035c:
    if (ctx->pc == 0x1D035Cu) {
        ctx->pc = 0x1D0360u;
        goto label_1d0360;
    }
    ctx->pc = 0x1D0358u;
    {
        const bool branch_taken_0x1d0358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0358) {
            ctx->pc = 0x1D039Cu;
            goto label_1d039c;
        }
    }
    ctx->pc = 0x1D0360u;
label_1d0360:
    // 0x1d0360: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1d0360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1d0364:
    // 0x1d0364: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d0364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0368:
    // 0x1d0368: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1d0368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d036c:
    // 0x1d036c: 0x24070056  addiu       $a3, $zero, 0x56
    ctx->pc = 0x1d036cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1d0370:
    // 0x1d0370: 0x24080168  addiu       $t0, $zero, 0x168
    ctx->pc = 0x1d0370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1d0374:
    // 0x1d0374: 0x3409ffe3  ori         $t1, $zero, 0xFFE3
    ctx->pc = 0x1d0374u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65507);
label_1d0378:
    // 0x1d0378: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d0378u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d037c:
    // 0x1d037c: 0x24421200  addiu       $v0, $v0, 0x1200
    ctx->pc = 0x1d037cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
label_1d0380:
    // 0x1d0380: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1d0380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1d0384:
    // 0x1d0384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0388:
    // 0x1d0388: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1d0388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1d038c:
    // 0x1d038c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d038cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d0390:
    // 0x1d0390: 0x90450241  lbu         $a1, 0x241($v0)
    ctx->pc = 0x1d0390u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 577)));
label_1d0394:
    // 0x1d0394: 0xc054c60  jal         func_153180
label_1d0398:
    if (ctx->pc == 0x1D0398u) {
        ctx->pc = 0x1D0398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0394u;
        // 0x1d0398: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D039Cu;
        goto label_1d039c;
    }
    ctx->pc = 0x1D0394u;
    SET_GPR_U32(ctx, 31, 0x1D039Cu);
    ctx->pc = 0x1D0398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0394u;
    // 0x1d0398: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x1D0394u, 0x1D039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D039Cu;
label_1d039c:
    // 0x1d039c: 0x0  nop
    ctx->pc = 0x1d039cu;
    // NOP
label_1d03a0:
    // 0x1d03a0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1d03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1d03a4:
    // 0x1d03a4: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_1d03a8:
    if (ctx->pc == 0x1D03A8u) {
        ctx->pc = 0x1D03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03A4u;
        // 0x1d03a8: 0x24491200  addiu       $t1, $v0, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D03ACu;
        goto label_1d03ac;
    }
    ctx->pc = 0x1D03A4u;
    {
        const bool branch_taken_0x1d03a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D03A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03A4u;
        // 0x1d03a8: 0x24491200  addiu       $t1, $v0, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d03a4) {
            ctx->pc = 0x1D03C8u;
            goto label_1d03c8;
        }
    }
    ctx->pc = 0x1D03ACu;
label_1d03ac:
    // 0x1d03ac: 0x95220080  lhu         $v0, 0x80($t1)
    ctx->pc = 0x1d03acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 128)));
label_1d03b0:
    // 0x1d03b0: 0x2442006a  addiu       $v0, $v0, 0x6A
    ctx->pc = 0x1d03b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 106));
label_1d03b4:
    // 0x1d03b4: 0xa5220080  sh          $v0, 0x80($t1)
    ctx->pc = 0x1d03b4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 128), (uint16_t)GPR_U32(ctx, 2));
label_1d03b8:
    // 0x1d03b8: 0x95220098  lhu         $v0, 0x98($t1)
    ctx->pc = 0x1d03b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 152)));
label_1d03bc:
    // 0x1d03bc: 0x2442006a  addiu       $v0, $v0, 0x6A
    ctx->pc = 0x1d03bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 106));
label_1d03c0:
    // 0x1d03c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d03c4:
    if (ctx->pc == 0x1D03C4u) {
        ctx->pc = 0x1D03C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03C0u;
        // 0x1d03c4: 0xa5220098  sh          $v0, 0x98($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 152), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D03C8u;
        goto label_1d03c8;
    }
    ctx->pc = 0x1D03C0u;
    {
        const bool branch_taken_0x1d03c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D03C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03C0u;
        // 0x1d03c4: 0xa5220098  sh          $v0, 0x98($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 152), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d03c0) {
            ctx->pc = 0x1D03E0u;
            goto label_1d03e0;
        }
    }
    ctx->pc = 0x1D03C8u;
label_1d03c8:
    // 0x1d03c8: 0x95220080  lhu         $v0, 0x80($t1)
    ctx->pc = 0x1d03c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 128)));
label_1d03cc:
    // 0x1d03cc: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1d03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1d03d0:
    // 0x1d03d0: 0xa5220080  sh          $v0, 0x80($t1)
    ctx->pc = 0x1d03d0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 128), (uint16_t)GPR_U32(ctx, 2));
label_1d03d4:
    // 0x1d03d4: 0x95220098  lhu         $v0, 0x98($t1)
    ctx->pc = 0x1d03d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 152)));
label_1d03d8:
    // 0x1d03d8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1d03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1d03dc:
    // 0x1d03dc: 0xa5220098  sh          $v0, 0x98($t1)
    ctx->pc = 0x1d03dcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 152), (uint16_t)GPR_U32(ctx, 2));
label_1d03e0:
    // 0x1d03e0: 0xa1200070  sb          $zero, 0x70($t1)
    ctx->pc = 0x1d03e0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 112), (uint8_t)GPR_U32(ctx, 0));
label_1d03e4:
    // 0x1d03e4: 0xa1200071  sb          $zero, 0x71($t1)
    ctx->pc = 0x1d03e4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 113), (uint8_t)GPR_U32(ctx, 0));
label_1d03e8:
    // 0x1d03e8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1d03e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d03ec:
    // 0x1d03ec: 0xa1200072  sb          $zero, 0x72($t1)
    ctx->pc = 0x1d03ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 114), (uint8_t)GPR_U32(ctx, 0));
label_1d03f0:
    // 0x1d03f0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1d03f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1d03f4:
    // 0x1d03f4: 0xa1280073  sb          $t0, 0x73($t1)
    ctx->pc = 0x1d03f4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 115), (uint8_t)GPR_U32(ctx, 8));
label_1d03f8:
    // 0x1d03f8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1d03f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1d03fc:
    // 0x1d03fc: 0xad270074  sw          $a3, 0x74($t1)
    ctx->pc = 0x1d03fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 116), GPR_U32(ctx, 7));
label_1d0400:
    // 0x1d0400: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1d0400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d0404:
    // 0x1d0404: 0xa1200088  sb          $zero, 0x88($t1)
    ctx->pc = 0x1d0404u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 136), (uint8_t)GPR_U32(ctx, 0));
label_1d0408:
    // 0x1d0408: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d0408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d040c:
    // 0x1d040c: 0xa1200089  sb          $zero, 0x89($t1)
    ctx->pc = 0x1d040cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 137), (uint8_t)GPR_U32(ctx, 0));
label_1d0410:
    // 0x1d0410: 0x2405011b  addiu       $a1, $zero, 0x11B
    ctx->pc = 0x1d0410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
label_1d0414:
    // 0x1d0414: 0xa120008a  sb          $zero, 0x8A($t1)
    ctx->pc = 0x1d0414u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 138), (uint8_t)GPR_U32(ctx, 0));
label_1d0418:
    // 0x1d0418: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d0418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d041c:
    // 0x1d041c: 0xa128008b  sb          $t0, 0x8B($t1)
    ctx->pc = 0x1d041cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 139), (uint8_t)GPR_U32(ctx, 8));
label_1d0420:
    // 0x1d0420: 0xad27008c  sw          $a3, 0x8C($t1)
    ctx->pc = 0x1d0420u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 140), GPR_U32(ctx, 7));
label_1d0424:
    // 0x1d0424: 0xa12300a0  sb          $v1, 0xA0($t1)
    ctx->pc = 0x1d0424u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 160), (uint8_t)GPR_U32(ctx, 3));
label_1d0428:
    // 0x1d0428: 0xa12000a1  sb          $zero, 0xA1($t1)
    ctx->pc = 0x1d0428u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 161), (uint8_t)GPR_U32(ctx, 0));
label_1d042c:
    // 0x1d042c: 0xa12200a2  sb          $v0, 0xA2($t1)
    ctx->pc = 0x1d042cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 162), (uint8_t)GPR_U32(ctx, 2));
label_1d0430:
    // 0x1d0430: 0xa12800a3  sb          $t0, 0xA3($t1)
    ctx->pc = 0x1d0430u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 163), (uint8_t)GPR_U32(ctx, 8));
label_1d0434:
    // 0x1d0434: 0xad2700a4  sw          $a3, 0xA4($t1)
    ctx->pc = 0x1d0434u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 164), GPR_U32(ctx, 7));
label_1d0438:
    // 0x1d0438: 0xa12300b8  sb          $v1, 0xB8($t1)
    ctx->pc = 0x1d0438u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 184), (uint8_t)GPR_U32(ctx, 3));
label_1d043c:
    // 0x1d043c: 0xa12000b9  sb          $zero, 0xB9($t1)
    ctx->pc = 0x1d043cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 185), (uint8_t)GPR_U32(ctx, 0));
label_1d0440:
    // 0x1d0440: 0xa12200ba  sb          $v0, 0xBA($t1)
    ctx->pc = 0x1d0440u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 186), (uint8_t)GPR_U32(ctx, 2));
label_1d0444:
    // 0x1d0444: 0xa12800bb  sb          $t0, 0xBB($t1)
    ctx->pc = 0x1d0444u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 187), (uint8_t)GPR_U32(ctx, 8));
label_1d0448:
    // 0x1d0448: 0xc060578  jal         func_1815E0
label_1d044c:
    if (ctx->pc == 0x1D044Cu) {
        ctx->pc = 0x1D044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0448u;
        // 0x1d044c: 0xad2700bc  sw          $a3, 0xBC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 188), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0450u;
        goto label_1d0450;
    }
    ctx->pc = 0x1D0448u;
    SET_GPR_U32(ctx, 31, 0x1D0450u);
    ctx->pc = 0x1D044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0448u;
    // 0x1d044c: 0xad2700bc  sw          $a3, 0xBC($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 188), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1D0448u, 0x1D0450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0450u;
label_1d0450:
    // 0x1d0450: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1d0450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1d0454:
    // 0x1d0454: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1d0454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d0458:
    // 0x1d0458: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d0458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d045c:
    // 0x1d045c: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1d045cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1d0460:
    // 0x1d0460: 0x2407018d  addiu       $a3, $zero, 0x18D
    ctx->pc = 0x1d0460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 397));
label_1d0464:
    // 0x1d0464: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d0464u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0468:
    // 0x1d0468: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x1d0468u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d046c:
    // 0x1d046c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d046cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0470:
    // 0x1d0470: 0x246412d0  addiu       $a0, $v1, 0x12D0
    ctx->pc = 0x1d0470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4816));
label_1d0474:
    // 0x1d0474: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1d0474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1d0478:
    // 0x1d0478: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1d0478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1d047c:
    // 0x1d047c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1d047cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1d0480:
    // 0x1d0480: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x1d0480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
label_1d0484:
    // 0x1d0484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0488:
    // 0x1d0488: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1d0488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1d048c:
    // 0x1d048c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d048cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0490:
    // 0x1d0490: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1d0490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_1d0494:
    // 0x1d0494: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1d0494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_1d0498:
    // 0x1d0498: 0x8c229f24  lw          $v0, -0x60DC($at)
    ctx->pc = 0x1d0498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942500)));
label_1d049c:
    // 0x1d049c: 0xc05ded8  jal         func_177B60
label_1d04a0:
    if (ctx->pc == 0x1D04A0u) {
        ctx->pc = 0x1D04A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D049Cu;
        // 0x1d04a0: 0x24480001  addiu       $t0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D04A4u;
        goto label_1d04a4;
    }
    ctx->pc = 0x1D049Cu;
    SET_GPR_U32(ctx, 31, 0x1D04A4u);
    ctx->pc = 0x1D04A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D049Cu;
    // 0x1d04a0: 0x24480001  addiu       $t0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x1D049Cu, 0x1D04A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04A4u;
label_1d04a4:
    // 0x1d04a4: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1d04a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1d04a8:
    // 0x1d04a8: 0x246313a0  addiu       $v1, $v1, 0x13A0
    ctx->pc = 0x1d04a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5024));
label_1d04ac:
    // 0x1d04ac: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x1d04acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_1d04b0:
    // 0x1d04b0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1d04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d04b4:
    // 0x1d04b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d04b8:
    // 0x1d04b8: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x1d04b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_1d04bc:
    // 0x1d04bc: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1d04bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d04c0:
    // 0x1d04c0: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1d04c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d04c4:
    // 0x1d04c4: 0x1460fd5f  bnez        $v1, . + 4 + (-0x2A1 << 2)
label_1d04c8:
    if (ctx->pc == 0x1D04C8u) {
        ctx->pc = 0x1D04CCu;
        goto label_1d04cc;
    }
    ctx->pc = 0x1D04C4u;
    {
        const bool branch_taken_0x1d04c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d04c4) {
            ctx->pc = 0x1CFA44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1cfa44; return; }
        }
    }
    ctx->pc = 0x1D04CCu;
label_1d04cc:
    // 0x1d04cc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1d04ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1d04d0:
    // 0x1d04d0: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1d04d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d04d4:
    // 0x1d04d4: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1d04d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d04d8:
    // 0x1d04d8: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1d04d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d04dc:
    // 0x1d04dc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1d04dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d04e0:
    // 0x1d04e0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1d04e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d04e4:
    // 0x1d04e4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1d04e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d04e8:
    // 0x1d04e8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1d04e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d04ec:
    // 0x1d04ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d04ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d04f0:
    // 0x1d04f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d04f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d04f4:
    // 0x1d04f4: 0x3e00008  jr          $ra
label_1d04f8:
    if (ctx->pc == 0x1D04F8u) {
        ctx->pc = 0x1D04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04F4u;
        // 0x1d04f8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D04FCu;
        goto label_1d04fc;
    }
    ctx->pc = 0x1D04F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04F4u;
        // 0x1d04f8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D04F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D04FCu;
label_1d04fc:
    // 0x1d04fc: 0x0  nop
    ctx->pc = 0x1d04fcu;
    // NOP
label_1d0500:
    // 0x1d0500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d0500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d0504:
    // 0x1d0504: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d0504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d0508:
    // 0x1d0508: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d0508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d050c:
    // 0x1d050c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d050cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d0510:
    // 0x1d0510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d0514:
    // 0x1d0514: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d0514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d0518:
    // 0x1d0518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d051c:
    // 0x1d051c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d051cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d0520:
    // 0x1d0520: 0x16200023  bnez        $s1, . + 4 + (0x23 << 2)
label_1d0524:
    if (ctx->pc == 0x1D0524u) {
        ctx->pc = 0x1D0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0520u;
        // 0x1d0524: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0528u;
        goto label_1d0528;
    }
    ctx->pc = 0x1D0520u;
    {
        const bool branch_taken_0x1d0520 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0520u;
        // 0x1d0524: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0520) {
            ctx->pc = 0x1D05B0u;
            goto label_1d05b0;
        }
    }
    ctx->pc = 0x1D0528u;
label_1d0528:
    // 0x1d0528: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d0528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d052c:
    // 0x1d052c: 0xc08f0cc  jal         func_23C330
label_1d0530:
    if (ctx->pc == 0x1D0530u) {
        ctx->pc = 0x1D0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D052Cu;
        // 0x1d0530: 0x9033a3e9  lbu         $s3, -0x5C17($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943721)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0534u;
        goto label_1d0534;
    }
    ctx->pc = 0x1D052Cu;
    SET_GPR_U32(ctx, 31, 0x1D0534u);
    ctx->pc = 0x1D0530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D052Cu;
    // 0x1d0530: 0x9033a3e9  lbu         $s3, -0x5C17($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943721)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1D0534u;
label_1d0534:
    // 0x1d0534: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1d0534u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0538:
    // 0x1d0538: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1d0538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1d053c:
    // 0x1d053c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d053cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d0540:
    // 0x1d0540: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x1d0540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_1d0544:
    // 0x1d0544: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d0544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d0548:
    // 0x1d0548: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d0548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d054c:
    // 0x1d054c: 0x24a5a230  addiu       $a1, $a1, -0x5DD0
    ctx->pc = 0x1d054cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943280));
label_1d0550:
    // 0x1d0550: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d0550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d0554:
    // 0x1d0554: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1d0554u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1d0558:
    // 0x1d0558: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d055c:
    // 0x1d055c: 0x0  nop
    ctx->pc = 0x1d055cu;
    // NOP
label_1d0560:
    // 0x1d0560: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d0560u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1d0564:
    // 0x1d0564: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1d0568:
    // 0x1d0568: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d0568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1d056c:
    // 0x1d056c: 0x0  nop
    ctx->pc = 0x1d056cu;
    // NOP
label_1d0570:
    // 0x1d0570: 0x603021  addu        $a2, $v1, $zero
    ctx->pc = 0x1d0570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_1d0574:
    // 0x1d0574: 0x2883000d  slti        $v1, $a0, 0xD
    ctx->pc = 0x1d0574u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)13) ? 1 : 0);
label_1d0578:
    // 0x1d0578: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1d057c:
    if (ctx->pc == 0x1D057Cu) {
        ctx->pc = 0x1D057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0578u;
        // 0x1d057c: 0x28830019  slti        $v1, $a0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0580u;
        goto label_1d0580;
    }
    ctx->pc = 0x1D0578u;
    {
        const bool branch_taken_0x1d0578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0578u;
        // 0x1d057c: 0x28830019  slti        $v1, $a0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0578) {
            ctx->pc = 0x1D0588u;
            goto label_1d0588;
        }
    }
    ctx->pc = 0x1D0580u;
label_1d0580:
    // 0x1d0580: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1d0584:
    if (ctx->pc == 0x1D0584u) {
        ctx->pc = 0x1D0588u;
        goto label_1d0588;
    }
    ctx->pc = 0x1D0580u;
    {
        const bool branch_taken_0x1d0580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0580) {
            ctx->pc = 0x1D0598u;
            goto label_1d0598;
        }
    }
    ctx->pc = 0x1D0588u;
label_1d0588:
    // 0x1d0588: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x1d0588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
label_1d058c:
    // 0x1d058c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x1d058cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d0590:
    // 0x1d0590: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_1d0594:
    if (ctx->pc == 0x1D0594u) {
        ctx->pc = 0x1D0598u;
        goto label_1d0598;
    }
    ctx->pc = 0x1D0590u;
    {
        const bool branch_taken_0x1d0590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0590) {
            ctx->pc = 0x1D061Cu;
            goto label_1d061c;
        }
    }
    ctx->pc = 0x1D0598u;
label_1d0598:
    // 0x1d0598: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d0598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d059c:
    // 0x1d059c: 0x2881001c  slti        $at, $a0, 0x1C
    ctx->pc = 0x1d059cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)28) ? 1 : 0);
label_1d05a0:
    // 0x1d05a0: 0x1420fff4  bnez        $at, . + 4 + (-0xC << 2)
label_1d05a4:
    if (ctx->pc == 0x1D05A4u) {
        ctx->pc = 0x1D05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05A0u;
        // 0x1d05a4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05A8u;
        goto label_1d05a8;
    }
    ctx->pc = 0x1D05A0u;
    {
        const bool branch_taken_0x1d05a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05A0u;
        // 0x1d05a4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05a0) {
            ctx->pc = 0x1D0574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0574;
        }
    }
    ctx->pc = 0x1D05A8u;
label_1d05a8:
    // 0x1d05a8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1d05ac:
    if (ctx->pc == 0x1D05ACu) {
        ctx->pc = 0x1D05B0u;
        goto label_1d05b0;
    }
    ctx->pc = 0x1D05A8u;
    {
        const bool branch_taken_0x1d05a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d05a8) {
            ctx->pc = 0x1D061Cu;
            goto label_1d061c;
        }
    }
    ctx->pc = 0x1D05B0u;
label_1d05b0:
    // 0x1d05b0: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d05b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d05b4:
    // 0x1d05b4: 0xc08f0cc  jal         func_23C330
label_1d05b8:
    if (ctx->pc == 0x1D05B8u) {
        ctx->pc = 0x1D05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05B4u;
        // 0x1d05b8: 0x9033a539  lbu         $s3, -0x5AC7($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294944057)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05BCu;
        goto label_1d05bc;
    }
    ctx->pc = 0x1D05B4u;
    SET_GPR_U32(ctx, 31, 0x1D05BCu);
    ctx->pc = 0x1D05B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D05B4u;
    // 0x1d05b8: 0x9033a539  lbu         $s3, -0x5AC7($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294944057)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1D05BCu;
label_1d05bc:
    // 0x1d05bc: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1d05bcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d05c0:
    // 0x1d05c0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1d05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1d05c4:
    // 0x1d05c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d05c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d05c8:
    // 0x1d05c8: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x1d05c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_1d05cc:
    // 0x1d05cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d05ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d05d0:
    // 0x1d05d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d05d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d05d4:
    // 0x1d05d4: 0x24a5a4b0  addiu       $a1, $a1, -0x5B50
    ctx->pc = 0x1d05d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943920));
label_1d05d8:
    // 0x1d05d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d05d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d05dc:
    // 0x1d05dc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1d05dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1d05e0:
    // 0x1d05e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d05e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d05e4:
    // 0x1d05e4: 0x0  nop
    ctx->pc = 0x1d05e4u;
    // NOP
label_1d05e8:
    // 0x1d05e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d05e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1d05ec:
    // 0x1d05ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d05ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1d05f0:
    // 0x1d05f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d05f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1d05f4:
    // 0x1d05f4: 0x0  nop
    ctx->pc = 0x1d05f4u;
    // NOP
label_1d05f8:
    // 0x1d05f8: 0x603021  addu        $a2, $v1, $zero
    ctx->pc = 0x1d05f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_1d05fc:
    // 0x1d05fc: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x1d05fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
label_1d0600:
    // 0x1d0600: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x1d0600u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d0604:
    // 0x1d0604: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1d0608:
    if (ctx->pc == 0x1D0608u) {
        ctx->pc = 0x1D060Cu;
        goto label_1d060c;
    }
    ctx->pc = 0x1D0604u;
    {
        const bool branch_taken_0x1d0604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0604) {
            ctx->pc = 0x1D061Cu;
            goto label_1d061c;
        }
    }
    ctx->pc = 0x1D060Cu;
label_1d060c:
    // 0x1d060c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d060cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d0610:
    // 0x1d0610: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x1d0610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_1d0614:
    // 0x1d0614: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
label_1d0618:
    if (ctx->pc == 0x1D0618u) {
        ctx->pc = 0x1D0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0614u;
        // 0x1d0618: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D061Cu;
        goto label_1d061c;
    }
    ctx->pc = 0x1D0614u;
    {
        const bool branch_taken_0x1d0614 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0614u;
        // 0x1d0618: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0614) {
            ctx->pc = 0x1D05FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d05fc;
        }
    }
    ctx->pc = 0x1D061Cu;
label_1d061c:
    // 0x1d061c: 0x0  nop
    ctx->pc = 0x1d061cu;
    // NOP
label_1d0620:
    // 0x1d0620: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x1d0620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
label_1d0624:
    // 0x1d0624: 0x90a3000a  lbu         $v1, 0xA($a1)
    ctx->pc = 0x1d0624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
label_1d0628:
    // 0x1d0628: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
label_1d062c:
    if (ctx->pc == 0x1D062Cu) {
        ctx->pc = 0x1D062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0628u;
        // 0x1d062c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0630u;
        goto label_1d0630;
    }
    ctx->pc = 0x1D0628u;
    {
        const bool branch_taken_0x1d0628 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0628u;
        // 0x1d062c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0628) {
            ctx->pc = 0x1D0644u;
            goto label_1d0644;
        }
    }
    ctx->pc = 0x1D0630u;
label_1d0630:
    // 0x1d0630: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d0630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d0634:
    // 0x1d0634: 0xc074208  jal         func_1D0820
label_1d0638:
    if (ctx->pc == 0x1D0638u) {
        ctx->pc = 0x1D0638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0634u;
        // 0x1d0638: 0x11300b  movn        $a2, $zero, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D063Cu;
        goto label_1d063c;
    }
    ctx->pc = 0x1D0634u;
    SET_GPR_U32(ctx, 31, 0x1D063Cu);
    ctx->pc = 0x1D0638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0634u;
    // 0x1d0638: 0x11300b  movn        $a2, $zero, $s1 (Delay Slot)
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0820u;
    goto label_1d0820;
    ctx->pc = 0x1D063Cu;
label_1d063c:
    // 0x1d063c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d0640:
    if (ctx->pc == 0x1D0640u) {
        ctx->pc = 0x1D0640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D063Cu;
        // 0x1d0640: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0644u;
        goto label_1d0644;
    }
    ctx->pc = 0x1D063Cu;
    {
        const bool branch_taken_0x1d063c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D063Cu;
        // 0x1d0640: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d063c) {
            ctx->pc = 0x1D0648u;
            goto label_1d0648;
        }
    }
    ctx->pc = 0x1D0644u;
label_1d0644:
    // 0x1d0644: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1d0644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_1d0648:
    // 0x1d0648: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d0648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d064c:
    // 0x1d064c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d064cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d0650:
    // 0x1d0650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d0650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d0654:
    // 0x1d0654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0658:
    // 0x1d0658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d065c:
    // 0x1d065c: 0x3e00008  jr          $ra
label_1d0660:
    if (ctx->pc == 0x1D0660u) {
        ctx->pc = 0x1D0660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D065Cu;
        // 0x1d0660: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0664u;
        goto label_1d0664;
    }
    ctx->pc = 0x1D065Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D065Cu;
        // 0x1d0660: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D065Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0664u;
label_1d0664:
    // 0x1d0664: 0x0  nop
    ctx->pc = 0x1d0664u;
    // NOP
label_1d0668:
    // 0x1d0668: 0x0  nop
    ctx->pc = 0x1d0668u;
    // NOP
label_1d066c:
    // 0x1d066c: 0x0  nop
    ctx->pc = 0x1d066cu;
    // NOP
label_1d0670:
    // 0x1d0670: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d0670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1d0674:
    // 0x1d0674: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1d0674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1d0678:
    // 0x1d0678: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d0678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1d067c:
    // 0x1d067c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d067cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d0680:
    // 0x1d0680: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d0684:
    // 0x1d0684: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d0684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d0688:
    // 0x1d0688: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d0688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d068c:
    // 0x1d068c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d068cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d0690:
    // 0x1d0690: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x1d0690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_1d0694:
    // 0x1d0694: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d0694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d0698:
    // 0x1d0698: 0x24a5a590  addiu       $a1, $a1, -0x5A70
    ctx->pc = 0x1d0698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944144));
label_1d069c:
    // 0x1d069c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1d069cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1d06a0:
    // 0x1d06a0: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1d06a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d06a4:
    // 0x1d06a4: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x1d06a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_1d06a8:
    // 0x1d06a8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1d06a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_1d06ac:
    // 0x1d06ac: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x1d06acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_1d06b0:
    // 0x1d06b0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1d06b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_1d06b4:
    // 0x1d06b4: 0x8c224afc  lw          $v0, 0x4AFC($at)
    ctx->pc = 0x1d06b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_1d06b8:
    // 0x1d06b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1d06bc:
    if (ctx->pc == 0x1D06BCu) {
        ctx->pc = 0x1D06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06B8u;
        // 0x1d06bc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D06C0u;
        goto label_1d06c0;
    }
    ctx->pc = 0x1D06B8u;
    {
        const bool branch_taken_0x1d06b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06B8u;
        // 0x1d06bc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d06b8) {
            ctx->pc = 0x1D06E0u;
            goto label_1d06e0;
        }
    }
    ctx->pc = 0x1D06C0u;
label_1d06c0:
    // 0x1d06c0: 0x8c224af8  lw          $v0, 0x4AF8($at)
    ctx->pc = 0x1d06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19192)));
label_1d06c4:
    // 0x1d06c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d06c8:
    if (ctx->pc == 0x1D06C8u) {
        ctx->pc = 0x1D06C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06C4u;
        // 0x1d06c8: 0x2622fffe  addiu       $v0, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D06CCu;
        goto label_1d06cc;
    }
    ctx->pc = 0x1D06C4u;
    {
        const bool branch_taken_0x1d06c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D06C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06C4u;
        // 0x1d06c8: 0x2622fffe  addiu       $v0, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d06c4) {
            ctx->pc = 0x1D06E0u;
            goto label_1d06e0;
        }
    }
    ctx->pc = 0x1D06CCu;
label_1d06cc:
    // 0x1d06cc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1d06d0:
    if (ctx->pc == 0x1D06D0u) {
        ctx->pc = 0x1D06D4u;
        goto label_1d06d4;
    }
    ctx->pc = 0x1D06CCu;
    {
        const bool branch_taken_0x1d06cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d06cc) {
            ctx->pc = 0x1D06DCu;
            goto label_1d06dc;
        }
    }
    ctx->pc = 0x1D06D4u;
label_1d06d4:
    // 0x1d06d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d06d8:
    if (ctx->pc == 0x1D06D8u) {
        ctx->pc = 0x1D06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06D4u;
        // 0x1d06d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D06DCu;
        goto label_1d06dc;
    }
    ctx->pc = 0x1D06D4u;
    {
        const bool branch_taken_0x1d06d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D06D4u;
        // 0x1d06d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d06d4) {
            ctx->pc = 0x1D06E0u;
            goto label_1d06e0;
        }
    }
    ctx->pc = 0x1D06DCu;
label_1d06dc:
    // 0x1d06dc: 0x2631fffe  addiu       $s1, $s1, -0x2
    ctx->pc = 0x1d06dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
label_1d06e0:
    // 0x1d06e0: 0xc08f0cc  jal         func_23C330
label_1d06e4:
    if (ctx->pc == 0x1D06E4u) {
        ctx->pc = 0x1D06E8u;
        goto label_1d06e8;
    }
    ctx->pc = 0x1D06E0u;
    SET_GPR_U32(ctx, 31, 0x1D06E8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1D06E8u;
label_1d06e8:
    // 0x1d06e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d06e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d06ec:
    // 0x1d06ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d06ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d06f0:
    // 0x1d06f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d06f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d06f4:
    // 0x1d06f4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1d06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1d06f8:
    // 0x1d06f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d06f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d06fc:
    // 0x1d06fc: 0x0  nop
    ctx->pc = 0x1d06fcu;
    // NOP
label_1d0700:
    // 0x1d0700: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d0700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d0704:
    // 0x1d0704: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1d0704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1d0708:
    // 0x1d0708: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d0708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d070c:
    // 0x1d070c: 0x0  nop
    ctx->pc = 0x1d070cu;
    // NOP
label_1d0710:
    // 0x1d0710: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d0710u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1d0714:
    // 0x1d0714: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d0714u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1d0718:
    // 0x1d0718: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d0718u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1d071c:
    // 0x1d071c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1d071cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1d0720:
    // 0x1d0720: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1d0720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1d0724:
    // 0x1d0724: 0x2442a550  addiu       $v0, $v0, -0x5AB0
    ctx->pc = 0x1d0724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944080));
label_1d0728:
    // 0x1d0728: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d072c:
    // 0x1d072c: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x1d072cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1d0730:
    // 0x1d0730: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1d0730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d0734:
    // 0x1d0734: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d0734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1d0738:
    // 0x1d0738: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d0738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d073c:
    // 0x1d073c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1d0740:
    if (ctx->pc == 0x1D0740u) {
        ctx->pc = 0x1D0744u;
        goto label_1d0744;
    }
    ctx->pc = 0x1D073Cu;
    {
        const bool branch_taken_0x1d073c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d073c) {
            ctx->pc = 0x1D0754u;
            goto label_1d0754;
        }
    }
    ctx->pc = 0x1D0744u;
label_1d0744:
    // 0x1d0744: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d0748:
    // 0x1d0748: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1d0748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d074c:
    // 0x1d074c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d0750:
    if (ctx->pc == 0x1D0750u) {
        ctx->pc = 0x1D0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D074Cu;
        // 0x1d0750: 0x701021  addu        $v0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0754u;
        goto label_1d0754;
    }
    ctx->pc = 0x1D074Cu;
    {
        const bool branch_taken_0x1d074c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D074Cu;
        // 0x1d0750: 0x701021  addu        $v0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d074c) {
            ctx->pc = 0x1D0734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0734;
        }
    }
    ctx->pc = 0x1D0754u;
label_1d0754:
    // 0x1d0754: 0x0  nop
    ctx->pc = 0x1d0754u;
    // NOP
label_1d0758:
    // 0x1d0758: 0xc08f0cc  jal         func_23C330
label_1d075c:
    if (ctx->pc == 0x1D075Cu) {
        ctx->pc = 0x1D0760u;
        goto label_1d0760;
    }
    ctx->pc = 0x1D0758u;
    SET_GPR_U32(ctx, 31, 0x1D0760u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1D0760u;
label_1d0760:
    // 0x1d0760: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1d0760u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1d0764:
    // 0x1d0764: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1d0764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d0768:
    // 0x1d0768: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d0768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d076c:
    // 0x1d076c: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x1d076cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d0770:
    // 0x1d0770: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1d0770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1d0774:
    // 0x1d0774: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d0774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d0778:
    // 0x1d0778: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1d0778u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1d077c:
    // 0x1d077c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d077cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0780:
    // 0x1d0780: 0x0  nop
    ctx->pc = 0x1d0780u;
    // NOP
label_1d0784:
    // 0x1d0784: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1d0784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d0788:
    // 0x1d0788: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1d0788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1d078c:
    // 0x1d078c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d078cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0790:
    // 0x1d0790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0794:
    // 0x1d0794: 0x0  nop
    ctx->pc = 0x1d0794u;
    // NOP
label_1d0798:
    // 0x1d0798: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d0798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d079c:
    // 0x1d079c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1d079cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1d07a0:
    // 0x1d07a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d07a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1d07a4:
    // 0x1d07a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d07a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1d07a8:
    // 0x1d07a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1d07a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1d07ac:
    // 0x1d07ac: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1d07b0:
    if (ctx->pc == 0x1D07B0u) {
        ctx->pc = 0x1D07B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07ACu;
        // 0x1d07b0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D07B4u;
        goto label_1d07b4;
    }
    ctx->pc = 0x1D07ACu;
    {
        const bool branch_taken_0x1d07ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07ACu;
        // 0x1d07b0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07ac) {
            ctx->pc = 0x1D07D8u;
            goto label_1d07d8;
        }
    }
    ctx->pc = 0x1D07B4u;
label_1d07b4:
    // 0x1d07b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d07b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d07b8:
    // 0x1d07b8: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
label_1d07bc:
    if (ctx->pc == 0x1D07BCu) {
        ctx->pc = 0x1D07BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07B8u;
        // 0x1d07bc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D07C0u;
        goto label_1d07c0;
    }
    ctx->pc = 0x1D07B8u;
    {
        const bool branch_taken_0x1d07b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D07BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07B8u;
        // 0x1d07bc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07b8) {
            ctx->pc = 0x1D07C8u;
            goto label_1d07c8;
        }
    }
    ctx->pc = 0x1D07C0u;
label_1d07c0:
    // 0x1d07c0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d07c4:
    if (ctx->pc == 0x1D07C4u) {
        ctx->pc = 0x1D07C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07C0u;
        // 0x1d07c4: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D07C8u;
        goto label_1d07c8;
    }
    ctx->pc = 0x1D07C0u;
    {
        const bool branch_taken_0x1d07c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07C0u;
        // 0x1d07c4: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07c0) {
            ctx->pc = 0x1D07F4u;
            goto label_1d07f4;
        }
    }
    ctx->pc = 0x1D07C8u;
label_1d07c8:
    // 0x1d07c8: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
label_1d07cc:
    if (ctx->pc == 0x1D07CCu) {
        ctx->pc = 0x1D07D0u;
        goto label_1d07d0;
    }
    ctx->pc = 0x1D07C8u;
    {
        const bool branch_taken_0x1d07c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d07c8) {
            ctx->pc = 0x1D07F4u;
            goto label_1d07f4;
        }
    }
    ctx->pc = 0x1D07D0u;
label_1d07d0:
    // 0x1d07d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d07d4:
    if (ctx->pc == 0x1D07D4u) {
        ctx->pc = 0x1D07D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07D0u;
        // 0x1d07d4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D07D8u;
        goto label_1d07d8;
    }
    ctx->pc = 0x1D07D0u;
    {
        const bool branch_taken_0x1d07d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07D0u;
        // 0x1d07d4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07d0) {
            ctx->pc = 0x1D07F4u;
            goto label_1d07f4;
        }
    }
    ctx->pc = 0x1D07D8u;
label_1d07d8:
    // 0x1d07d8: 0x2a410004  slti        $at, $s2, 0x4
    ctx->pc = 0x1d07d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d07dc:
    // 0x1d07dc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1d07e0:
    if (ctx->pc == 0x1D07E0u) {
        ctx->pc = 0x1D07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07DCu;
        // 0x1d07e0: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D07E4u;
        goto label_1d07e4;
    }
    ctx->pc = 0x1D07DCu;
    {
        const bool branch_taken_0x1d07dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D07DCu;
        // 0x1d07e0: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d07dc) {
            ctx->pc = 0x1D07F8u;
            goto label_1d07f8;
        }
    }
    ctx->pc = 0x1D07E4u;
label_1d07e4:
    // 0x1d07e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d07e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d07e8:
    // 0x1d07e8: 0x16030002  bne         $s0, $v1, . + 4 + (0x2 << 2)
label_1d07ec:
    if (ctx->pc == 0x1D07ECu) {
        ctx->pc = 0x1D07F0u;
        goto label_1d07f0;
    }
    ctx->pc = 0x1D07E8u;
    {
        const bool branch_taken_0x1d07e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d07e8) {
            ctx->pc = 0x1D07F4u;
            goto label_1d07f4;
        }
    }
    ctx->pc = 0x1D07F0u;
label_1d07f0:
    // 0x1d07f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d07f4:
    // 0x1d07f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d07f8:
    // 0x1d07f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d07fc:
    // 0x1d07fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1d0800:
    if (ctx->pc == 0x1D0800u) {
        ctx->pc = 0x1D0804u;
        goto label_1d0804;
    }
    ctx->pc = 0x1D07FCu;
    {
        const bool branch_taken_0x1d07fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d07fc) {
            ctx->pc = 0x1D0808u;
            goto label_1d0808;
        }
    }
    ctx->pc = 0x1D0804u;
label_1d0804:
    // 0x1d0804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0808:
    // 0x1d0808: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d0808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d080c:
    // 0x1d080c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d080cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d0810:
    // 0x1d0810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0814:
    // 0x1d0814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0818:
    // 0x1d0818: 0x3e00008  jr          $ra
label_1d081c:
    if (ctx->pc == 0x1D081Cu) {
        ctx->pc = 0x1D081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0818u;
        // 0x1d081c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0820u;
        goto label_1d0820;
    }
    ctx->pc = 0x1D0818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0818u;
        // 0x1d081c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0820u;
label_1d0820:
    // 0x1d0820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d0820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d0824:
    // 0x1d0824: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1d0824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1d0828:
    // 0x1d0828: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d0828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1d082c:
    // 0x1d082c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d0830:
    // 0x1d0830: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d0834:
    // 0x1d0834: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d0838:
    // 0x1d0838: 0x8c224afc  lw          $v0, 0x4AFC($at)
    ctx->pc = 0x1d0838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_1d083c:
    // 0x1d083c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1d0840:
    if (ctx->pc == 0x1D0840u) {
        ctx->pc = 0x1D0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D083Cu;
        // 0x1d0840: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0844u;
        goto label_1d0844;
    }
    ctx->pc = 0x1D083Cu;
    {
        const bool branch_taken_0x1d083c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D083Cu;
        // 0x1d0840: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d083c) {
            ctx->pc = 0x1D0868u;
            goto label_1d0868;
        }
    }
    ctx->pc = 0x1D0844u;
label_1d0844:
    // 0x1d0844: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1d0844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1d0848:
    // 0x1d0848: 0x8c224af8  lw          $v0, 0x4AF8($at)
    ctx->pc = 0x1d0848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19192)));
label_1d084c:
    // 0x1d084c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d0850:
    if (ctx->pc == 0x1D0850u) {
        ctx->pc = 0x1D0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D084Cu;
        // 0x1d0850: 0x2642fffe  addiu       $v0, $s2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0854u;
        goto label_1d0854;
    }
    ctx->pc = 0x1D084Cu;
    {
        const bool branch_taken_0x1d084c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D084Cu;
        // 0x1d0850: 0x2642fffe  addiu       $v0, $s2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d084c) {
            ctx->pc = 0x1D0868u;
            goto label_1d0868;
        }
    }
    ctx->pc = 0x1D0854u;
label_1d0854:
    // 0x1d0854: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1d0858:
    if (ctx->pc == 0x1D0858u) {
        ctx->pc = 0x1D085Cu;
        goto label_1d085c;
    }
    ctx->pc = 0x1D0854u;
    {
        const bool branch_taken_0x1d0854 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d0854) {
            ctx->pc = 0x1D0864u;
            goto label_1d0864;
        }
    }
    ctx->pc = 0x1D085Cu;
label_1d085c:
    // 0x1d085c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d0860:
    if (ctx->pc == 0x1D0860u) {
        ctx->pc = 0x1D0860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D085Cu;
        // 0x1d0860: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0864u;
        goto label_1d0864;
    }
    ctx->pc = 0x1D085Cu;
    {
        const bool branch_taken_0x1d085c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D085Cu;
        // 0x1d0860: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d085c) {
            ctx->pc = 0x1D0868u;
            goto label_1d0868;
        }
    }
    ctx->pc = 0x1D0864u;
label_1d0864:
    // 0x1d0864: 0x2652fffe  addiu       $s2, $s2, -0x2
    ctx->pc = 0x1d0864u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
label_1d0868:
    // 0x1d0868: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1d086c:
    if (ctx->pc == 0x1D086Cu) {
        ctx->pc = 0x1D086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0868u;
        // 0x1d086c: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0870u;
        goto label_1d0870;
    }
    ctx->pc = 0x1D0868u;
    {
        const bool branch_taken_0x1d0868 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0868u;
        // 0x1d086c: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0868) {
            ctx->pc = 0x1D0884u;
            goto label_1d0884;
        }
    }
    ctx->pc = 0x1D0870u;
label_1d0870:
    // 0x1d0870: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1d0870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1d0874:
    // 0x1d0874: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1d0874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d0878:
    // 0x1d0878: 0x2442a230  addiu       $v0, $v0, -0x5DD0
    ctx->pc = 0x1d0878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943280));
label_1d087c:
    // 0x1d087c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d0880:
    if (ctx->pc == 0x1D0880u) {
        ctx->pc = 0x1D0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D087Cu;
        // 0x1d0880: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0884u;
        goto label_1d0884;
    }
    ctx->pc = 0x1D087Cu;
    {
        const bool branch_taken_0x1d087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D087Cu;
        // 0x1d0880: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d087c) {
            ctx->pc = 0x1D0890u;
            goto label_1d0890;
        }
    }
    ctx->pc = 0x1D0884u;
label_1d0884:
    // 0x1d0884: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1d0884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d0888:
    // 0x1d0888: 0x2442a4b0  addiu       $v0, $v0, -0x5B50
    ctx->pc = 0x1d0888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943920));
label_1d088c:
    // 0x1d088c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1d088cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0890:
    // 0x1d0890: 0xc08f0cc  jal         func_23C330
label_1d0894:
    if (ctx->pc == 0x1D0894u) {
        ctx->pc = 0x1D0898u;
        goto label_1d0898;
    }
    ctx->pc = 0x1D0890u;
    SET_GPR_U32(ctx, 31, 0x1D0898u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1D0898u;
label_1d0898:
    // 0x1d0898: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d0898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d089c:
    // 0x1d089c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d089cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d08a0:
    // 0x1d08a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d08a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d08a4:
    // 0x1d08a4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1d08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1d08a8:
    // 0x1d08a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d08a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d08ac:
    // 0x1d08ac: 0x0  nop
    ctx->pc = 0x1d08acu;
    // NOP
label_1d08b0:
    // 0x1d08b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d08b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d08b4:
    // 0x1d08b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1d08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1d08b8:
    // 0x1d08b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d08b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d08bc:
    // 0x1d08bc: 0x0  nop
    ctx->pc = 0x1d08bcu;
    // NOP
label_1d08c0:
    // 0x1d08c0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d08c0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1d08c4:
    // 0x1d08c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d08c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1d08c8:
    // 0x1d08c8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1d08c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1d08cc:
    // 0x1d08cc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1d08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1d08d0:
    // 0x1d08d0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d08d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1d08d4:
    // 0x1d08d4: 0x2442a550  addiu       $v0, $v0, -0x5AB0
    ctx->pc = 0x1d08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944080));
label_1d08d8:
    // 0x1d08d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d08d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d08dc:
    // 0x1d08dc: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x1d08dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1d08e0:
    // 0x1d08e0: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1d08e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1d08e4:
    // 0x1d08e4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d08e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1d08e8:
    // 0x1d08e8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d08e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d08ec:
    // 0x1d08ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1d08f0:
    if (ctx->pc == 0x1D08F0u) {
        ctx->pc = 0x1D08F4u;
        goto label_1d08f4;
    }
    ctx->pc = 0x1D08ECu;
    {
        const bool branch_taken_0x1d08ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d08ec) {
            ctx->pc = 0x1D0904u;
            goto label_1d0904;
        }
    }
    ctx->pc = 0x1D08F4u;
label_1d08f4:
    // 0x1d08f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d08f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d08f8:
    // 0x1d08f8: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1d08f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d08fc:
    // 0x1d08fc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d0900:
    if (ctx->pc == 0x1D0900u) {
        ctx->pc = 0x1D0900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08FCu;
        // 0x1d0900: 0x711021  addu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0904u;
        goto label_1d0904;
    }
    ctx->pc = 0x1D08FCu;
    {
        const bool branch_taken_0x1d08fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08FCu;
        // 0x1d0900: 0x711021  addu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08fc) {
            ctx->pc = 0x1D08E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d08e4;
        }
    }
    ctx->pc = 0x1D0904u;
label_1d0904:
    // 0x1d0904: 0x0  nop
    ctx->pc = 0x1d0904u;
    // NOP
label_1d0908:
    // 0x1d0908: 0xc08f0cc  jal         func_23C330
label_1d090c:
    if (ctx->pc == 0x1D090Cu) {
        ctx->pc = 0x1D090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0908u;
        // 0x1d090c: 0x9210000a  lbu         $s0, 0xA($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0910u;
        goto label_1d0910;
    }
    ctx->pc = 0x1D0908u;
    SET_GPR_U32(ctx, 31, 0x1D0910u);
    ctx->pc = 0x1D090Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0908u;
    // 0x1d090c: 0x9210000a  lbu         $s0, 0xA($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1D0910u;
label_1d0910:
    // 0x1d0910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d0910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0914:
    // 0x1d0914: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_1d0918:
    if (ctx->pc == 0x1D0918u) {
        ctx->pc = 0x1D0918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0914u;
        // 0x1d0918: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D091Cu;
        goto label_1d091c;
    }
    ctx->pc = 0x1D0914u;
    {
        const bool branch_taken_0x1d0914 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D0918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0914u;
        // 0x1d0918: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0914) {
            ctx->pc = 0x1D0928u;
            goto label_1d0928;
        }
    }
    ctx->pc = 0x1D091Cu;
label_1d091c:
    // 0x1d091c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1d091cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0920:
    // 0x1d0920: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d0924:
    if (ctx->pc == 0x1D0924u) {
        ctx->pc = 0x1D0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0920u;
        // 0x1d0924: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0928u;
        goto label_1d0928;
    }
    ctx->pc = 0x1D0920u;
    {
        const bool branch_taken_0x1d0920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0920u;
        // 0x1d0924: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0920) {
            ctx->pc = 0x1D0944u;
            goto label_1d0944;
        }
    }
    ctx->pc = 0x1D0928u;
label_1d0928:
    // 0x1d0928: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1d0928u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_1d092c:
    // 0x1d092c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1d092cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1d0930:
    // 0x1d0930: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d0930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d0934:
    // 0x1d0934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0938:
    // 0x1d0938: 0x0  nop
    ctx->pc = 0x1d0938u;
    // NOP
label_1d093c:
    // 0x1d093c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d093cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d0940:
    // 0x1d0940: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d0940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1d0944:
    // 0x1d0944: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1d0944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d0948:
    // 0x1d0948: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1d0948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1d094c:
    // 0x1d094c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1d094cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1d0950:
    // 0x1d0950: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d0950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d0954:
    // 0x1d0954: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x1d0954u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1d0958:
    // 0x1d0958: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d0958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d095c:
    // 0x1d095c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d095cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0960:
    // 0x1d0960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d0960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d0964:
    // 0x1d0964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0968:
    // 0x1d0968: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d0968u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1d096c:
    // 0x1d096c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d096cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1d0970:
    // 0x1d0970: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d0970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1d0974:
    // 0x1d0974: 0x0  nop
    ctx->pc = 0x1d0974u;
    // NOP
label_1d0978:
    // 0x1d0978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d097c:
    // 0x1d097c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d0980:
    // 0x1d0980: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d0980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1d0984:
    // 0x1d0984: 0x3e00008  jr          $ra
label_1d0988:
    if (ctx->pc == 0x1D0988u) {
        ctx->pc = 0x1D0988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0984u;
        // 0x1d0988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D098Cu;
        goto label_1d098c;
    }
    ctx->pc = 0x1D0984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0984u;
        // 0x1d0988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D098Cu;
label_1d098c:
    // 0x1d098c: 0x0  nop
    ctx->pc = 0x1d098cu;
    // NOP
label_1d0990:
    // 0x1d0990: 0x24032230  addiu       $v1, $zero, 0x2230
    ctx->pc = 0x1d0990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8752));
label_1d0994:
    // 0x1d0994: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d0998:
    // 0x1d0998: 0x833018  mult        $a2, $a0, $v1
    ctx->pc = 0x1d0998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1d099c:
    // 0x1d099c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d099cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d09a0:
    // 0x1d09a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d09a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d09a4:
    // 0x1d09a4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1d09a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    ctx->pc = 0x1d09a8u;
    return;
}

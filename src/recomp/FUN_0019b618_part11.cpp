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


void FUN_0019b618_part11(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a0438u: goto label_1a0438;
        case 0x1a043cu: goto label_1a043c;
        case 0x1a0440u: goto label_1a0440;
        case 0x1a0444u: goto label_1a0444;
        case 0x1a0448u: goto label_1a0448;
        case 0x1a044cu: goto label_1a044c;
        case 0x1a0450u: goto label_1a0450;
        case 0x1a0454u: goto label_1a0454;
        case 0x1a0458u: goto label_1a0458;
        case 0x1a045cu: goto label_1a045c;
        case 0x1a0460u: goto label_1a0460;
        case 0x1a0464u: goto label_1a0464;
        case 0x1a0468u: goto label_1a0468;
        case 0x1a046cu: goto label_1a046c;
        case 0x1a0470u: goto label_1a0470;
        case 0x1a0474u: goto label_1a0474;
        case 0x1a0478u: goto label_1a0478;
        case 0x1a047cu: goto label_1a047c;
        case 0x1a0480u: goto label_1a0480;
        case 0x1a0484u: goto label_1a0484;
        case 0x1a0488u: goto label_1a0488;
        case 0x1a048cu: goto label_1a048c;
        case 0x1a0490u: goto label_1a0490;
        case 0x1a0494u: goto label_1a0494;
        case 0x1a0498u: goto label_1a0498;
        case 0x1a049cu: goto label_1a049c;
        case 0x1a04a0u: goto label_1a04a0;
        case 0x1a04a4u: goto label_1a04a4;
        case 0x1a04a8u: goto label_1a04a8;
        case 0x1a04acu: goto label_1a04ac;
        case 0x1a04b0u: goto label_1a04b0;
        case 0x1a04b4u: goto label_1a04b4;
        case 0x1a04b8u: goto label_1a04b8;
        case 0x1a04bcu: goto label_1a04bc;
        case 0x1a04c0u: goto label_1a04c0;
        case 0x1a04c4u: goto label_1a04c4;
        case 0x1a04c8u: goto label_1a04c8;
        case 0x1a04ccu: goto label_1a04cc;
        case 0x1a04d0u: goto label_1a04d0;
        case 0x1a04d4u: goto label_1a04d4;
        case 0x1a04d8u: goto label_1a04d8;
        case 0x1a04dcu: goto label_1a04dc;
        case 0x1a04e0u: goto label_1a04e0;
        case 0x1a04e4u: goto label_1a04e4;
        case 0x1a04e8u: goto label_1a04e8;
        case 0x1a04ecu: goto label_1a04ec;
        case 0x1a04f0u: goto label_1a04f0;
        case 0x1a04f4u: goto label_1a04f4;
        case 0x1a04f8u: goto label_1a04f8;
        case 0x1a04fcu: goto label_1a04fc;
        case 0x1a0500u: goto label_1a0500;
        case 0x1a0504u: goto label_1a0504;
        case 0x1a0508u: goto label_1a0508;
        case 0x1a050cu: goto label_1a050c;
        case 0x1a0510u: goto label_1a0510;
        case 0x1a0514u: goto label_1a0514;
        case 0x1a0518u: goto label_1a0518;
        case 0x1a051cu: goto label_1a051c;
        case 0x1a0520u: goto label_1a0520;
        case 0x1a0524u: goto label_1a0524;
        case 0x1a0528u: goto label_1a0528;
        case 0x1a052cu: goto label_1a052c;
        case 0x1a0530u: goto label_1a0530;
        case 0x1a0534u: goto label_1a0534;
        case 0x1a0538u: goto label_1a0538;
        case 0x1a053cu: goto label_1a053c;
        case 0x1a0540u: goto label_1a0540;
        case 0x1a0544u: goto label_1a0544;
        case 0x1a0548u: goto label_1a0548;
        case 0x1a054cu: goto label_1a054c;
        case 0x1a0550u: goto label_1a0550;
        case 0x1a0554u: goto label_1a0554;
        case 0x1a0558u: goto label_1a0558;
        case 0x1a055cu: goto label_1a055c;
        case 0x1a0560u: goto label_1a0560;
        case 0x1a0564u: goto label_1a0564;
        case 0x1a0568u: goto label_1a0568;
        case 0x1a056cu: goto label_1a056c;
        case 0x1a0570u: goto label_1a0570;
        case 0x1a0574u: goto label_1a0574;
        case 0x1a0578u: goto label_1a0578;
        case 0x1a057cu: goto label_1a057c;
        case 0x1a0580u: goto label_1a0580;
        case 0x1a0584u: goto label_1a0584;
        case 0x1a0588u: goto label_1a0588;
        case 0x1a058cu: goto label_1a058c;
        case 0x1a0590u: goto label_1a0590;
        case 0x1a0594u: goto label_1a0594;
        case 0x1a0598u: goto label_1a0598;
        case 0x1a059cu: goto label_1a059c;
        case 0x1a05a0u: goto label_1a05a0;
        case 0x1a05a4u: goto label_1a05a4;
        case 0x1a05a8u: goto label_1a05a8;
        case 0x1a05acu: goto label_1a05ac;
        case 0x1a05b0u: goto label_1a05b0;
        case 0x1a05b4u: goto label_1a05b4;
        case 0x1a05b8u: goto label_1a05b8;
        case 0x1a05bcu: goto label_1a05bc;
        case 0x1a05c0u: goto label_1a05c0;
        case 0x1a05c4u: goto label_1a05c4;
        case 0x1a05c8u: goto label_1a05c8;
        case 0x1a05ccu: goto label_1a05cc;
        case 0x1a05d0u: goto label_1a05d0;
        case 0x1a05d4u: goto label_1a05d4;
        case 0x1a05d8u: goto label_1a05d8;
        case 0x1a05dcu: goto label_1a05dc;
        case 0x1a05e0u: goto label_1a05e0;
        case 0x1a05e4u: goto label_1a05e4;
        case 0x1a05e8u: goto label_1a05e8;
        case 0x1a05ecu: goto label_1a05ec;
        case 0x1a05f0u: goto label_1a05f0;
        case 0x1a05f4u: goto label_1a05f4;
        case 0x1a05f8u: goto label_1a05f8;
        case 0x1a05fcu: goto label_1a05fc;
        case 0x1a0600u: goto label_1a0600;
        case 0x1a0604u: goto label_1a0604;
        case 0x1a0608u: goto label_1a0608;
        case 0x1a060cu: goto label_1a060c;
        case 0x1a0610u: goto label_1a0610;
        case 0x1a0614u: goto label_1a0614;
        case 0x1a0618u: goto label_1a0618;
        case 0x1a061cu: goto label_1a061c;
        case 0x1a0620u: goto label_1a0620;
        case 0x1a0624u: goto label_1a0624;
        case 0x1a0628u: goto label_1a0628;
        case 0x1a062cu: goto label_1a062c;
        case 0x1a0630u: goto label_1a0630;
        case 0x1a0634u: goto label_1a0634;
        case 0x1a0638u: goto label_1a0638;
        case 0x1a063cu: goto label_1a063c;
        case 0x1a0640u: goto label_1a0640;
        case 0x1a0644u: goto label_1a0644;
        case 0x1a0648u: goto label_1a0648;
        case 0x1a064cu: goto label_1a064c;
        case 0x1a0650u: goto label_1a0650;
        case 0x1a0654u: goto label_1a0654;
        case 0x1a0658u: goto label_1a0658;
        case 0x1a065cu: goto label_1a065c;
        case 0x1a0660u: goto label_1a0660;
        case 0x1a0664u: goto label_1a0664;
        case 0x1a0668u: goto label_1a0668;
        case 0x1a066cu: goto label_1a066c;
        case 0x1a0670u: goto label_1a0670;
        case 0x1a0674u: goto label_1a0674;
        case 0x1a0678u: goto label_1a0678;
        case 0x1a067cu: goto label_1a067c;
        case 0x1a0680u: goto label_1a0680;
        case 0x1a0684u: goto label_1a0684;
        case 0x1a0688u: goto label_1a0688;
        case 0x1a068cu: goto label_1a068c;
        case 0x1a0690u: goto label_1a0690;
        case 0x1a0694u: goto label_1a0694;
        case 0x1a0698u: goto label_1a0698;
        case 0x1a069cu: goto label_1a069c;
        case 0x1a06a0u: goto label_1a06a0;
        case 0x1a06a4u: goto label_1a06a4;
        case 0x1a06a8u: goto label_1a06a8;
        case 0x1a06acu: goto label_1a06ac;
        case 0x1a06b0u: goto label_1a06b0;
        case 0x1a06b4u: goto label_1a06b4;
        case 0x1a06b8u: goto label_1a06b8;
        case 0x1a06bcu: goto label_1a06bc;
        case 0x1a06c0u: goto label_1a06c0;
        case 0x1a06c4u: goto label_1a06c4;
        case 0x1a06c8u: goto label_1a06c8;
        case 0x1a06ccu: goto label_1a06cc;
        case 0x1a06d0u: goto label_1a06d0;
        case 0x1a06d4u: goto label_1a06d4;
        case 0x1a06d8u: goto label_1a06d8;
        case 0x1a06dcu: goto label_1a06dc;
        case 0x1a06e0u: goto label_1a06e0;
        case 0x1a06e4u: goto label_1a06e4;
        case 0x1a06e8u: goto label_1a06e8;
        case 0x1a06ecu: goto label_1a06ec;
        case 0x1a06f0u: goto label_1a06f0;
        case 0x1a06f4u: goto label_1a06f4;
        case 0x1a06f8u: goto label_1a06f8;
        case 0x1a06fcu: goto label_1a06fc;
        case 0x1a0700u: goto label_1a0700;
        case 0x1a0704u: goto label_1a0704;
        case 0x1a0708u: goto label_1a0708;
        case 0x1a070cu: goto label_1a070c;
        case 0x1a0710u: goto label_1a0710;
        case 0x1a0714u: goto label_1a0714;
        case 0x1a0718u: goto label_1a0718;
        case 0x1a071cu: goto label_1a071c;
        case 0x1a0720u: goto label_1a0720;
        case 0x1a0724u: goto label_1a0724;
        case 0x1a0728u: goto label_1a0728;
        case 0x1a072cu: goto label_1a072c;
        case 0x1a0730u: goto label_1a0730;
        case 0x1a0734u: goto label_1a0734;
        case 0x1a0738u: goto label_1a0738;
        case 0x1a073cu: goto label_1a073c;
        case 0x1a0740u: goto label_1a0740;
        case 0x1a0744u: goto label_1a0744;
        case 0x1a0748u: goto label_1a0748;
        case 0x1a074cu: goto label_1a074c;
        case 0x1a0750u: goto label_1a0750;
        case 0x1a0754u: goto label_1a0754;
        case 0x1a0758u: goto label_1a0758;
        case 0x1a075cu: goto label_1a075c;
        case 0x1a0760u: goto label_1a0760;
        case 0x1a0764u: goto label_1a0764;
        case 0x1a0768u: goto label_1a0768;
        case 0x1a076cu: goto label_1a076c;
        case 0x1a0770u: goto label_1a0770;
        case 0x1a0774u: goto label_1a0774;
        case 0x1a0778u: goto label_1a0778;
        case 0x1a077cu: goto label_1a077c;
        case 0x1a0780u: goto label_1a0780;
        case 0x1a0784u: goto label_1a0784;
        case 0x1a0788u: goto label_1a0788;
        case 0x1a078cu: goto label_1a078c;
        case 0x1a0790u: goto label_1a0790;
        case 0x1a0794u: goto label_1a0794;
        case 0x1a0798u: goto label_1a0798;
        case 0x1a079cu: goto label_1a079c;
        case 0x1a07a0u: goto label_1a07a0;
        case 0x1a07a4u: goto label_1a07a4;
        case 0x1a07a8u: goto label_1a07a8;
        case 0x1a07acu: goto label_1a07ac;
        case 0x1a07b0u: goto label_1a07b0;
        case 0x1a07b4u: goto label_1a07b4;
        case 0x1a07b8u: goto label_1a07b8;
        case 0x1a07bcu: goto label_1a07bc;
        case 0x1a07c0u: goto label_1a07c0;
        case 0x1a07c4u: goto label_1a07c4;
        case 0x1a07c8u: goto label_1a07c8;
        case 0x1a07ccu: goto label_1a07cc;
        case 0x1a07d0u: goto label_1a07d0;
        case 0x1a07d4u: goto label_1a07d4;
        case 0x1a07d8u: goto label_1a07d8;
        case 0x1a07dcu: goto label_1a07dc;
        case 0x1a07e0u: goto label_1a07e0;
        case 0x1a07e4u: goto label_1a07e4;
        case 0x1a07e8u: goto label_1a07e8;
        case 0x1a07ecu: goto label_1a07ec;
        case 0x1a07f0u: goto label_1a07f0;
        case 0x1a07f4u: goto label_1a07f4;
        case 0x1a07f8u: goto label_1a07f8;
        case 0x1a07fcu: goto label_1a07fc;
        case 0x1a0800u: goto label_1a0800;
        case 0x1a0804u: goto label_1a0804;
        case 0x1a0808u: goto label_1a0808;
        case 0x1a080cu: goto label_1a080c;
        case 0x1a0810u: goto label_1a0810;
        case 0x1a0814u: goto label_1a0814;
        case 0x1a0818u: goto label_1a0818;
        case 0x1a081cu: goto label_1a081c;
        case 0x1a0820u: goto label_1a0820;
        case 0x1a0824u: goto label_1a0824;
        case 0x1a0828u: goto label_1a0828;
        case 0x1a082cu: goto label_1a082c;
        case 0x1a0830u: goto label_1a0830;
        case 0x1a0834u: goto label_1a0834;
        case 0x1a0838u: goto label_1a0838;
        case 0x1a083cu: goto label_1a083c;
        case 0x1a0840u: goto label_1a0840;
        case 0x1a0844u: goto label_1a0844;
        case 0x1a0848u: goto label_1a0848;
        case 0x1a084cu: goto label_1a084c;
        case 0x1a0850u: goto label_1a0850;
        case 0x1a0854u: goto label_1a0854;
        case 0x1a0858u: goto label_1a0858;
        case 0x1a085cu: goto label_1a085c;
        case 0x1a0860u: goto label_1a0860;
        case 0x1a0864u: goto label_1a0864;
        case 0x1a0868u: goto label_1a0868;
        case 0x1a086cu: goto label_1a086c;
        case 0x1a0870u: goto label_1a0870;
        case 0x1a0874u: goto label_1a0874;
        case 0x1a0878u: goto label_1a0878;
        case 0x1a087cu: goto label_1a087c;
        case 0x1a0880u: goto label_1a0880;
        case 0x1a0884u: goto label_1a0884;
        case 0x1a0888u: goto label_1a0888;
        case 0x1a088cu: goto label_1a088c;
        case 0x1a0890u: goto label_1a0890;
        case 0x1a0894u: goto label_1a0894;
        case 0x1a0898u: goto label_1a0898;
        case 0x1a089cu: goto label_1a089c;
        case 0x1a08a0u: goto label_1a08a0;
        case 0x1a08a4u: goto label_1a08a4;
        case 0x1a08a8u: goto label_1a08a8;
        case 0x1a08acu: goto label_1a08ac;
        case 0x1a08b0u: goto label_1a08b0;
        case 0x1a08b4u: goto label_1a08b4;
        case 0x1a08b8u: goto label_1a08b8;
        case 0x1a08bcu: goto label_1a08bc;
        case 0x1a08c0u: goto label_1a08c0;
        case 0x1a08c4u: goto label_1a08c4;
        case 0x1a08c8u: goto label_1a08c8;
        case 0x1a08ccu: goto label_1a08cc;
        case 0x1a08d0u: goto label_1a08d0;
        case 0x1a08d4u: goto label_1a08d4;
        case 0x1a08d8u: goto label_1a08d8;
        case 0x1a08dcu: goto label_1a08dc;
        case 0x1a08e0u: goto label_1a08e0;
        case 0x1a08e4u: goto label_1a08e4;
        case 0x1a08e8u: goto label_1a08e8;
        case 0x1a08ecu: goto label_1a08ec;
        case 0x1a08f0u: goto label_1a08f0;
        case 0x1a08f4u: goto label_1a08f4;
        case 0x1a08f8u: goto label_1a08f8;
        case 0x1a08fcu: goto label_1a08fc;
        case 0x1a0900u: goto label_1a0900;
        case 0x1a0904u: goto label_1a0904;
        case 0x1a0908u: goto label_1a0908;
        case 0x1a090cu: goto label_1a090c;
        case 0x1a0910u: goto label_1a0910;
        case 0x1a0914u: goto label_1a0914;
        case 0x1a0918u: goto label_1a0918;
        case 0x1a091cu: goto label_1a091c;
        case 0x1a0920u: goto label_1a0920;
        case 0x1a0924u: goto label_1a0924;
        case 0x1a0928u: goto label_1a0928;
        case 0x1a092cu: goto label_1a092c;
        case 0x1a0930u: goto label_1a0930;
        case 0x1a0934u: goto label_1a0934;
        case 0x1a0938u: goto label_1a0938;
        case 0x1a093cu: goto label_1a093c;
        case 0x1a0940u: goto label_1a0940;
        case 0x1a0944u: goto label_1a0944;
        case 0x1a0948u: goto label_1a0948;
        case 0x1a094cu: goto label_1a094c;
        case 0x1a0950u: goto label_1a0950;
        case 0x1a0954u: goto label_1a0954;
        case 0x1a0958u: goto label_1a0958;
        case 0x1a095cu: goto label_1a095c;
        case 0x1a0960u: goto label_1a0960;
        case 0x1a0964u: goto label_1a0964;
        case 0x1a0968u: goto label_1a0968;
        case 0x1a096cu: goto label_1a096c;
        case 0x1a0970u: goto label_1a0970;
        case 0x1a0974u: goto label_1a0974;
        case 0x1a0978u: goto label_1a0978;
        case 0x1a097cu: goto label_1a097c;
        case 0x1a0980u: goto label_1a0980;
        case 0x1a0984u: goto label_1a0984;
        case 0x1a0988u: goto label_1a0988;
        case 0x1a098cu: goto label_1a098c;
        case 0x1a0990u: goto label_1a0990;
        case 0x1a0994u: goto label_1a0994;
        case 0x1a0998u: goto label_1a0998;
        case 0x1a099cu: goto label_1a099c;
        case 0x1a09a0u: goto label_1a09a0;
        case 0x1a09a4u: goto label_1a09a4;
        case 0x1a09a8u: goto label_1a09a8;
        case 0x1a09acu: goto label_1a09ac;
        case 0x1a09b0u: goto label_1a09b0;
        case 0x1a09b4u: goto label_1a09b4;
        case 0x1a09b8u: goto label_1a09b8;
        case 0x1a09bcu: goto label_1a09bc;
        case 0x1a09c0u: goto label_1a09c0;
        case 0x1a09c4u: goto label_1a09c4;
        case 0x1a09c8u: goto label_1a09c8;
        case 0x1a09ccu: goto label_1a09cc;
        case 0x1a09d0u: goto label_1a09d0;
        case 0x1a09d4u: goto label_1a09d4;
        case 0x1a09d8u: goto label_1a09d8;
        case 0x1a09dcu: goto label_1a09dc;
        case 0x1a09e0u: goto label_1a09e0;
        case 0x1a09e4u: goto label_1a09e4;
        case 0x1a09e8u: goto label_1a09e8;
        case 0x1a09ecu: goto label_1a09ec;
        case 0x1a09f0u: goto label_1a09f0;
        case 0x1a09f4u: goto label_1a09f4;
        case 0x1a09f8u: goto label_1a09f8;
        case 0x1a09fcu: goto label_1a09fc;
        case 0x1a0a00u: goto label_1a0a00;
        case 0x1a0a04u: goto label_1a0a04;
        case 0x1a0a08u: goto label_1a0a08;
        case 0x1a0a0cu: goto label_1a0a0c;
        case 0x1a0a10u: goto label_1a0a10;
        case 0x1a0a14u: goto label_1a0a14;
        case 0x1a0a18u: goto label_1a0a18;
        case 0x1a0a1cu: goto label_1a0a1c;
        case 0x1a0a20u: goto label_1a0a20;
        case 0x1a0a24u: goto label_1a0a24;
        case 0x1a0a28u: goto label_1a0a28;
        case 0x1a0a2cu: goto label_1a0a2c;
        case 0x1a0a30u: goto label_1a0a30;
        case 0x1a0a34u: goto label_1a0a34;
        case 0x1a0a38u: goto label_1a0a38;
        case 0x1a0a3cu: goto label_1a0a3c;
        case 0x1a0a40u: goto label_1a0a40;
        case 0x1a0a44u: goto label_1a0a44;
        case 0x1a0a48u: goto label_1a0a48;
        case 0x1a0a4cu: goto label_1a0a4c;
        case 0x1a0a50u: goto label_1a0a50;
        case 0x1a0a54u: goto label_1a0a54;
        case 0x1a0a58u: goto label_1a0a58;
        case 0x1a0a5cu: goto label_1a0a5c;
        case 0x1a0a60u: goto label_1a0a60;
        case 0x1a0a64u: goto label_1a0a64;
        case 0x1a0a68u: goto label_1a0a68;
        case 0x1a0a6cu: goto label_1a0a6c;
        case 0x1a0a70u: goto label_1a0a70;
        case 0x1a0a74u: goto label_1a0a74;
        case 0x1a0a78u: goto label_1a0a78;
        case 0x1a0a7cu: goto label_1a0a7c;
        case 0x1a0a80u: goto label_1a0a80;
        case 0x1a0a84u: goto label_1a0a84;
        case 0x1a0a88u: goto label_1a0a88;
        case 0x1a0a8cu: goto label_1a0a8c;
        case 0x1a0a90u: goto label_1a0a90;
        case 0x1a0a94u: goto label_1a0a94;
        case 0x1a0a98u: goto label_1a0a98;
        case 0x1a0a9cu: goto label_1a0a9c;
        case 0x1a0aa0u: goto label_1a0aa0;
        case 0x1a0aa4u: goto label_1a0aa4;
        case 0x1a0aa8u: goto label_1a0aa8;
        case 0x1a0aacu: goto label_1a0aac;
        case 0x1a0ab0u: goto label_1a0ab0;
        case 0x1a0ab4u: goto label_1a0ab4;
        case 0x1a0ab8u: goto label_1a0ab8;
        case 0x1a0abcu: goto label_1a0abc;
        case 0x1a0ac0u: goto label_1a0ac0;
        case 0x1a0ac4u: goto label_1a0ac4;
        case 0x1a0ac8u: goto label_1a0ac8;
        case 0x1a0accu: goto label_1a0acc;
        case 0x1a0ad0u: goto label_1a0ad0;
        case 0x1a0ad4u: goto label_1a0ad4;
        case 0x1a0ad8u: goto label_1a0ad8;
        case 0x1a0adcu: goto label_1a0adc;
        case 0x1a0ae0u: goto label_1a0ae0;
        case 0x1a0ae4u: goto label_1a0ae4;
        case 0x1a0ae8u: goto label_1a0ae8;
        case 0x1a0aecu: goto label_1a0aec;
        case 0x1a0af0u: goto label_1a0af0;
        case 0x1a0af4u: goto label_1a0af4;
        case 0x1a0af8u: goto label_1a0af8;
        case 0x1a0afcu: goto label_1a0afc;
        case 0x1a0b00u: goto label_1a0b00;
        case 0x1a0b04u: goto label_1a0b04;
        case 0x1a0b08u: goto label_1a0b08;
        case 0x1a0b0cu: goto label_1a0b0c;
        case 0x1a0b10u: goto label_1a0b10;
        case 0x1a0b14u: goto label_1a0b14;
        case 0x1a0b18u: goto label_1a0b18;
        case 0x1a0b1cu: goto label_1a0b1c;
        case 0x1a0b20u: goto label_1a0b20;
        case 0x1a0b24u: goto label_1a0b24;
        case 0x1a0b28u: goto label_1a0b28;
        case 0x1a0b2cu: goto label_1a0b2c;
        case 0x1a0b30u: goto label_1a0b30;
        case 0x1a0b34u: goto label_1a0b34;
        case 0x1a0b38u: goto label_1a0b38;
        case 0x1a0b3cu: goto label_1a0b3c;
        case 0x1a0b40u: goto label_1a0b40;
        case 0x1a0b44u: goto label_1a0b44;
        case 0x1a0b48u: goto label_1a0b48;
        case 0x1a0b4cu: goto label_1a0b4c;
        case 0x1a0b50u: goto label_1a0b50;
        case 0x1a0b54u: goto label_1a0b54;
        case 0x1a0b58u: goto label_1a0b58;
        case 0x1a0b5cu: goto label_1a0b5c;
        case 0x1a0b60u: goto label_1a0b60;
        case 0x1a0b64u: goto label_1a0b64;
        case 0x1a0b68u: goto label_1a0b68;
        case 0x1a0b6cu: goto label_1a0b6c;
        case 0x1a0b70u: goto label_1a0b70;
        case 0x1a0b74u: goto label_1a0b74;
        case 0x1a0b78u: goto label_1a0b78;
        case 0x1a0b7cu: goto label_1a0b7c;
        case 0x1a0b80u: goto label_1a0b80;
        case 0x1a0b84u: goto label_1a0b84;
        case 0x1a0b88u: goto label_1a0b88;
        case 0x1a0b8cu: goto label_1a0b8c;
        case 0x1a0b90u: goto label_1a0b90;
        case 0x1a0b94u: goto label_1a0b94;
        case 0x1a0b98u: goto label_1a0b98;
        case 0x1a0b9cu: goto label_1a0b9c;
        case 0x1a0ba0u: goto label_1a0ba0;
        case 0x1a0ba4u: goto label_1a0ba4;
        case 0x1a0ba8u: goto label_1a0ba8;
        case 0x1a0bacu: goto label_1a0bac;
        case 0x1a0bb0u: goto label_1a0bb0;
        case 0x1a0bb4u: goto label_1a0bb4;
        case 0x1a0bb8u: goto label_1a0bb8;
        case 0x1a0bbcu: goto label_1a0bbc;
        case 0x1a0bc0u: goto label_1a0bc0;
        case 0x1a0bc4u: goto label_1a0bc4;
        case 0x1a0bc8u: goto label_1a0bc8;
        case 0x1a0bccu: goto label_1a0bcc;
        case 0x1a0bd0u: goto label_1a0bd0;
        case 0x1a0bd4u: goto label_1a0bd4;
        case 0x1a0bd8u: goto label_1a0bd8;
        case 0x1a0bdcu: goto label_1a0bdc;
        case 0x1a0be0u: goto label_1a0be0;
        case 0x1a0be4u: goto label_1a0be4;
        case 0x1a0be8u: goto label_1a0be8;
        case 0x1a0becu: goto label_1a0bec;
        case 0x1a0bf0u: goto label_1a0bf0;
        case 0x1a0bf4u: goto label_1a0bf4;
        case 0x1a0bf8u: goto label_1a0bf8;
        case 0x1a0bfcu: goto label_1a0bfc;
        case 0x1a0c00u: goto label_1a0c00;
        case 0x1a0c04u: goto label_1a0c04;
        default: return;
    }

label_1a0438:
    // 0x1a0438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a0438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a043c:
    // 0x1a043c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1a043cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1a0440:
    // 0x1a0440: 0x50440018  beql        $v0, $a0, . + 4 + (0x18 << 2)
label_1a0444:
    if (ctx->pc == 0x1A0444u) {
        ctx->pc = 0x1A0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0440u;
        // 0x1a0444: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0448u;
        goto label_1a0448;
    }
    ctx->pc = 0x1A0440u;
    {
        const bool branch_taken_0x1a0440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0440) {
            ctx->pc = 0x1A0444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0440u;
            // 0x1a0444: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A04A4u;
            goto label_1a04a4;
        }
    }
    ctx->pc = 0x1A0448u;
label_1a0448:
    // 0x1a0448: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x1a0448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
label_1a044c:
    // 0x1a044c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_1a0450:
    if (ctx->pc == 0x1A0450u) {
        ctx->pc = 0x1A0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A044Cu;
        // 0x1a0450: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0454u;
        goto label_1a0454;
    }
    ctx->pc = 0x1A044Cu;
    {
        const bool branch_taken_0x1a044c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A044Cu;
        // 0x1a0450: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a044c) {
            ctx->pc = 0x1A0570u;
            goto label_1a0570;
        }
    }
    ctx->pc = 0x1A0454u;
label_1a0454:
    // 0x1a0454: 0x10000013  b           . + 4 + (0x13 << 2)
label_1a0458:
    if (ctx->pc == 0x1A0458u) {
        ctx->pc = 0x1A0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0454u;
        // 0x1a0458: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A045Cu;
        goto label_1a045c;
    }
    ctx->pc = 0x1A0454u;
    {
        const bool branch_taken_0x1a0454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0454u;
        // 0x1a0458: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0454) {
            ctx->pc = 0x1A04A4u;
            goto label_1a04a4;
        }
    }
    ctx->pc = 0x1A045Cu;
label_1a045c:
    // 0x1a045c: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x1a045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
label_1a0460:
    // 0x1a0460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0464:
    // 0x1a0464: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1a0464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a0468:
    // 0x1a0468: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
label_1a046c:
    if (ctx->pc == 0x1A046Cu) {
        ctx->pc = 0x1A046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0468u;
        // 0x1a046c: 0x8ce201a4  lw          $v0, 0x1A4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0470u;
        goto label_1a0470;
    }
    ctx->pc = 0x1A0468u;
    {
        const bool branch_taken_0x1a0468 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a0468) {
            ctx->pc = 0x1A046Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0468u;
            // 0x1a046c: 0x8ce201a4  lw          $v0, 0x1A4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0484u;
            goto label_1a0484;
        }
    }
    ctx->pc = 0x1A0470u;
label_1a0470:
    // 0x1a0470: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x1a0470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_1a0474:
    // 0x1a0474: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1a0474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a0478:
    // 0x1a0478: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
label_1a047c:
    if (ctx->pc == 0x1A047Cu) {
        ctx->pc = 0x1A047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0478u;
        // 0x1a047c: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0480u;
        goto label_1a0480;
    }
    ctx->pc = 0x1A0478u;
    {
        const bool branch_taken_0x1a0478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a0478) {
            ctx->pc = 0x1A047Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0478u;
            // 0x1a047c: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0490u;
            goto label_1a0490;
        }
    }
    ctx->pc = 0x1A0480u;
label_1a0480:
    // 0x1a0480: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x1a0480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
label_1a0484:
    // 0x1a0484: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1a0488:
    if (ctx->pc == 0x1A0488u) {
        ctx->pc = 0x1A0488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0484u;
        // 0x1a0488: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A048Cu;
        goto label_1a048c;
    }
    ctx->pc = 0x1A0484u;
    {
        const bool branch_taken_0x1a0484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0484u;
        // 0x1a0488: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0484) {
            ctx->pc = 0x1A0570u;
            goto label_1a0570;
        }
    }
    ctx->pc = 0x1A048Cu;
label_1a048c:
    // 0x1a048c: 0x8ce201cc  lw          $v0, 0x1CC($a3)
    ctx->pc = 0x1a048cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_1a0490:
    // 0x1a0490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0494:
    // 0x1a0494: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1a0494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a0498:
    // 0x1a0498: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
label_1a049c:
    if (ctx->pc == 0x1A049Cu) {
        ctx->pc = 0x1A049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0498u;
        // 0x1a049c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04A0u;
        goto label_1a04a0;
    }
    ctx->pc = 0x1A0498u;
    {
        const bool branch_taken_0x1a0498 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0498u;
        // 0x1a049c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0498) {
            ctx->pc = 0x1A0570u;
            goto label_1a0570;
        }
    }
    ctx->pc = 0x1A04A0u;
label_1a04a0:
    // 0x1a04a0: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x1a04a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_1a04a4:
    // 0x1a04a4: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x1a04a4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a04a8:
    // 0x1a04a8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1a04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1a04ac:
    // 0x1a04ac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a04acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a04b0:
    // 0x1a04b0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1a04b4:
    if (ctx->pc == 0x1A04B4u) {
        ctx->pc = 0x1A04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04B0u;
        // 0x1a04b4: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04B8u;
        goto label_1a04b8;
    }
    ctx->pc = 0x1A04B0u;
    {
        const bool branch_taken_0x1a04b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04B0u;
        // 0x1a04b4: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a04b0) {
            ctx->pc = 0x1A056Cu;
            goto label_1a056c;
        }
    }
    ctx->pc = 0x1A04B8u;
label_1a04b8:
    // 0x1a04b8: 0x54a0000e  bnel        $a1, $zero, . + 4 + (0xE << 2)
label_1a04bc:
    if (ctx->pc == 0x1A04BCu) {
        ctx->pc = 0x1A04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A04B8u;
        // 0x1a04bc: 0x8ce201bc  lw          $v0, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A04C0u;
        goto label_1a04c0;
    }
    ctx->pc = 0x1A04B8u;
    {
        const bool branch_taken_0x1a04b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a04b8) {
            ctx->pc = 0x1A04BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A04B8u;
            // 0x1a04bc: 0x8ce201bc  lw          $v0, 0x1BC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A04F4u;
            goto label_1a04f4;
        }
    }
    ctx->pc = 0x1A04C0u;
label_1a04c0:
    // 0x1a04c0: 0x8ce601b8  lw          $a2, 0x1B8($a3)
    ctx->pc = 0x1a04c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
label_1a04c4:
    // 0x1a04c4: 0x8ce401bc  lw          $a0, 0x1BC($a3)
    ctx->pc = 0x1a04c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
label_1a04c8:
    // 0x1a04c8: 0xace601bc  sw          $a2, 0x1BC($a3)
    ctx->pc = 0x1a04c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 444), GPR_U32(ctx, 6));
label_1a04cc:
    // 0x1a04cc: 0x8ce601c8  lw          $a2, 0x1C8($a3)
    ctx->pc = 0x1a04ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
label_1a04d0:
    // 0x1a04d0: 0x8ce301cc  lw          $v1, 0x1CC($a3)
    ctx->pc = 0x1a04d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_1a04d4:
    // 0x1a04d4: 0xace601cc  sw          $a2, 0x1CC($a3)
    ctx->pc = 0x1a04d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 460), GPR_U32(ctx, 6));
label_1a04d8:
    // 0x1a04d8: 0x8ce601d8  lw          $a2, 0x1D8($a3)
    ctx->pc = 0x1a04d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_1a04dc:
    // 0x1a04dc: 0x8ce201dc  lw          $v0, 0x1DC($a3)
    ctx->pc = 0x1a04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_1a04e0:
    // 0x1a04e0: 0xace401b8  sw          $a0, 0x1B8($a3)
    ctx->pc = 0x1a04e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 4));
label_1a04e4:
    // 0x1a04e4: 0xace301c8  sw          $v1, 0x1C8($a3)
    ctx->pc = 0x1a04e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 456), GPR_U32(ctx, 3));
label_1a04e8:
    // 0x1a04e8: 0xace201d8  sw          $v0, 0x1D8($a3)
    ctx->pc = 0x1a04e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 2));
label_1a04ec:
    // 0x1a04ec: 0xace601dc  sw          $a2, 0x1DC($a3)
    ctx->pc = 0x1a04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 476), GPR_U32(ctx, 6));
label_1a04f0:
    // 0x1a04f0: 0x8ce201bc  lw          $v0, 0x1BC($a3)
    ctx->pc = 0x1a04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
label_1a04f4:
    // 0x1a04f4: 0x8ce401cc  lw          $a0, 0x1CC($a3)
    ctx->pc = 0x1a04f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_1a04f8:
    // 0x1a04f8: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x1a04f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_1a04fc:
    // 0x1a04fc: 0xace201c0  sw          $v0, 0x1C0($a3)
    ctx->pc = 0x1a04fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 448), GPR_U32(ctx, 2));
label_1a0500:
    // 0x1a0500: 0xace401d0  sw          $a0, 0x1D0($a3)
    ctx->pc = 0x1a0500u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 4));
label_1a0504:
    // 0x1a0504: 0x152e0006  bne         $t1, $t6, . + 4 + (0x6 << 2)
label_1a0508:
    if (ctx->pc == 0x1A0508u) {
        ctx->pc = 0x1A0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0504u;
        // 0x1a0508: 0xace301e0  sw          $v1, 0x1E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A050Cu;
        goto label_1a050c;
    }
    ctx->pc = 0x1A0504u;
    {
        const bool branch_taken_0x1a0504 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x1A0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0504u;
        // 0x1a0508: 0xace301e0  sw          $v1, 0x1E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0504) {
            ctx->pc = 0x1A0520u;
            goto label_1a0520;
        }
    }
    ctx->pc = 0x1A050Cu;
label_1a050c:
    // 0x1a050c: 0x554c0017  bnel        $t2, $t4, . + 4 + (0x17 << 2)
label_1a0510:
    if (ctx->pc == 0x1A0510u) {
        ctx->pc = 0x1A0510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A050Cu;
        // 0x1a0510: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0514u;
        goto label_1a0514;
    }
    ctx->pc = 0x1A050Cu;
    {
        const bool branch_taken_0x1a050c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x1a050c) {
            ctx->pc = 0x1A0510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A050Cu;
            // 0x1a0510: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A056Cu;
            goto label_1a056c;
        }
    }
    ctx->pc = 0x1A0514u;
label_1a0514:
    // 0x1a0514: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x1a0514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
label_1a0518:
    // 0x1a0518: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a051c:
    if (ctx->pc == 0x1A051Cu) {
        ctx->pc = 0x1A051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0518u;
        // 0x1a051c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0520u;
        goto label_1a0520;
    }
    ctx->pc = 0x1A0518u;
    {
        const bool branch_taken_0x1a0518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0518u;
        // 0x1a051c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0518) {
            ctx->pc = 0x1A055Cu;
            goto label_1a055c;
        }
    }
    ctx->pc = 0x1A0520u;
label_1a0520:
    // 0x1a0520: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x1a0520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
label_1a0524:
    // 0x1a0524: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0528:
    // 0x1a0528: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1a0528u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_1a052c:
    // 0x1a052c: 0x154c000e  bne         $t2, $t4, . + 4 + (0xE << 2)
label_1a0530:
    if (ctx->pc == 0x1A0530u) {
        ctx->pc = 0x1A0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A052Cu;
        // 0x1a0530: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0534u;
        goto label_1a0534;
    }
    ctx->pc = 0x1A052Cu;
    {
        const bool branch_taken_0x1a052c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x1A0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A052Cu;
        // 0x1a0530: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a052c) {
            ctx->pc = 0x1A0568u;
            goto label_1a0568;
        }
    }
    ctx->pc = 0x1A0534u;
label_1a0534:
    // 0x1a0534: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_1a0538:
    if (ctx->pc == 0x1A0538u) {
        ctx->pc = 0x1A0538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0534u;
        // 0x1a0538: 0x8ce201c8  lw          $v0, 0x1C8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A053Cu;
        goto label_1a053c;
    }
    ctx->pc = 0x1A0534u;
    {
        const bool branch_taken_0x1a0534 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0534) {
            ctx->pc = 0x1A0538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0534u;
            // 0x1a0538: 0x8ce201c8  lw          $v0, 0x1C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A054Cu;
            goto label_1a054c;
        }
    }
    ctx->pc = 0x1A053Cu;
label_1a053c:
    // 0x1a053c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1a053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a0540:
    // 0x1a0540: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
label_1a0544:
    if (ctx->pc == 0x1A0544u) {
        ctx->pc = 0x1A0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0540u;
        // 0x1a0544: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0548u;
        goto label_1a0548;
    }
    ctx->pc = 0x1A0540u;
    {
        const bool branch_taken_0x1a0540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1a0540) {
            ctx->pc = 0x1A0544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0540u;
            // 0x1a0544: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A056Cu;
            goto label_1a056c;
        }
    }
    ctx->pc = 0x1A0548u;
label_1a0548:
    // 0x1a0548: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x1a0548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
label_1a054c:
    // 0x1a054c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1a054cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a0550:
    // 0x1a0550: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
label_1a0554:
    if (ctx->pc == 0x1A0554u) {
        ctx->pc = 0x1A0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0550u;
        // 0x1a0554: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0558u;
        goto label_1a0558;
    }
    ctx->pc = 0x1A0550u;
    {
        const bool branch_taken_0x1a0550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1A0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0550u;
        // 0x1a0554: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0550) {
            ctx->pc = 0x1A0570u;
            goto label_1a0570;
        }
    }
    ctx->pc = 0x1A0558u;
label_1a0558:
    // 0x1a0558: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x1a0558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_1a055c:
    // 0x1a055c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1a055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a0560:
    // 0x1a0560: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1a0564:
    if (ctx->pc == 0x1A0564u) {
        ctx->pc = 0x1A0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0560u;
        // 0x1a0564: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0568u;
        goto label_1a0568;
    }
    ctx->pc = 0x1A0560u;
    {
        const bool branch_taken_0x1a0560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0560u;
        // 0x1a0564: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0560) {
            ctx->pc = 0x1A0570u;
            goto label_1a0570;
        }
    }
    ctx->pc = 0x1A0568u;
label_1a0568:
    // 0x1a0568: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1a0568u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a056c:
    // 0x1a056c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a0570:
    // 0x1a0570: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
label_1a0574:
    if (ctx->pc == 0x1A0574u) {
        ctx->pc = 0x1A0574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0570u;
        // 0x1a0574: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0578u;
        goto label_1a0578;
    }
    ctx->pc = 0x1A0570u;
    {
        const bool branch_taken_0x1a0570 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0570u;
        // 0x1a0574: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0570) {
            ctx->pc = 0x1A05A4u;
            goto label_1a05a4;
        }
    }
    ctx->pc = 0x1A0578u;
label_1a0578:
    // 0x1a0578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a057c:
    if (ctx->pc == 0x1A057Cu) {
        ctx->pc = 0x1A057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0578u;
        // 0x1a057c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0580u;
        goto label_1a0580;
    }
    ctx->pc = 0x1A0578u;
    {
        const bool branch_taken_0x1a0578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0578u;
        // 0x1a057c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0578) {
            ctx->pc = 0x1A0590u;
            goto label_1a0590;
        }
    }
    ctx->pc = 0x1A0580u;
label_1a0580:
    // 0x1a0580: 0x51220009  beql        $t1, $v0, . + 4 + (0x9 << 2)
label_1a0584:
    if (ctx->pc == 0x1A0584u) {
        ctx->pc = 0x1A0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0580u;
        // 0x1a0584: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0588u;
        goto label_1a0588;
    }
    ctx->pc = 0x1A0580u;
    {
        const bool branch_taken_0x1a0580 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a0580) {
            ctx->pc = 0x1A0584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0580u;
            // 0x1a0584: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A05A8u;
            goto label_1a05a8;
        }
    }
    ctx->pc = 0x1A0588u;
label_1a0588:
    // 0x1a0588: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a058c:
    if (ctx->pc == 0x1A058Cu) {
        ctx->pc = 0x1A058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0588u;
        // 0x1a058c: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0590u;
        goto label_1a0590;
    }
    ctx->pc = 0x1A0588u;
    {
        const bool branch_taken_0x1a0588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0588u;
        // 0x1a058c: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0588) {
            ctx->pc = 0x1A05ACu;
            goto label_1a05ac;
        }
    }
    ctx->pc = 0x1A0590u;
label_1a0590:
    // 0x1a0590: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a0590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a0594:
    // 0x1a0594: 0x51220004  beql        $t1, $v0, . + 4 + (0x4 << 2)
label_1a0598:
    if (ctx->pc == 0x1A0598u) {
        ctx->pc = 0x1A0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0594u;
        // 0x1a0598: 0x8ce801c0  lw          $t0, 0x1C0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A059Cu;
        goto label_1a059c;
    }
    ctx->pc = 0x1A0594u;
    {
        const bool branch_taken_0x1a0594 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a0594) {
            ctx->pc = 0x1A0598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0594u;
            // 0x1a0598: 0x8ce801c0  lw          $t0, 0x1C0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A05A8u;
            goto label_1a05a8;
        }
    }
    ctx->pc = 0x1A059Cu;
label_1a059c:
    // 0x1a059c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a05a0:
    if (ctx->pc == 0x1A05A0u) {
        ctx->pc = 0x1A05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A059Cu;
        // 0x1a05a0: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A05A4u;
        goto label_1a05a4;
    }
    ctx->pc = 0x1A059Cu;
    {
        const bool branch_taken_0x1a059c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A059Cu;
        // 0x1a05a0: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a059c) {
            ctx->pc = 0x1A05ACu;
            goto label_1a05ac;
        }
    }
    ctx->pc = 0x1A05A4u;
label_1a05a4:
    // 0x1a05a4: 0x8ce801e0  lw          $t0, 0x1E0($a3)
    ctx->pc = 0x1a05a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
label_1a05a8:
    // 0x1a05a8: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x1a05a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_1a05ac:
    // 0x1a05ac: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x1a05acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_1a05b0:
    // 0x1a05b0: 0xdce30828  ld          $v1, 0x828($a3)
    ctx->pc = 0x1a05b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2088)));
label_1a05b4:
    // 0x1a05b4: 0x8ce40150  lw          $a0, 0x150($a3)
    ctx->pc = 0x1a05b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
label_1a05b8:
    // 0x1a05b8: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x1a05b8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
label_1a05bc:
    // 0x1a05bc: 0xad04002c  sw          $a0, 0x2C($t0)
    ctx->pc = 0x1a05bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
label_1a05c0:
    // 0x1a05c0: 0xdce30830  ld          $v1, 0x830($a3)
    ctx->pc = 0x1a05c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2096)));
label_1a05c4:
    // 0x1a05c4: 0x8ce40174  lw          $a0, 0x174($a3)
    ctx->pc = 0x1a05c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
label_1a05c8:
    // 0x1a05c8: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x1a05c8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
label_1a05cc:
    // 0x1a05cc: 0xad040030  sw          $a0, 0x30($t0)
    ctx->pc = 0x1a05ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
label_1a05d0:
    // 0x1a05d0: 0x8ce3013c  lw          $v1, 0x13C($a3)
    ctx->pc = 0x1a05d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 316)));
label_1a05d4:
    // 0x1a05d4: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x1a05d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
label_1a05d8:
    // 0x1a05d8: 0x8ce40188  lw          $a0, 0x188($a3)
    ctx->pc = 0x1a05d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
label_1a05dc:
    // 0x1a05dc: 0xad040038  sw          $a0, 0x38($t0)
    ctx->pc = 0x1a05dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 4));
label_1a05e0:
    // 0x1a05e0: 0x8ce30178  lw          $v1, 0x178($a3)
    ctx->pc = 0x1a05e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
label_1a05e4:
    // 0x1a05e4: 0xad03003c  sw          $v1, 0x3C($t0)
    ctx->pc = 0x1a05e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
label_1a05e8:
    // 0x1a05e8: 0x8ce40184  lw          $a0, 0x184($a3)
    ctx->pc = 0x1a05e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
label_1a05ec:
    // 0x1a05ec: 0xad040040  sw          $a0, 0x40($t0)
    ctx->pc = 0x1a05ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
label_1a05f0:
    // 0x1a05f0: 0x8ce3018c  lw          $v1, 0x18C($a3)
    ctx->pc = 0x1a05f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 396)));
label_1a05f4:
    // 0x1a05f4: 0xad030044  sw          $v1, 0x44($t0)
    ctx->pc = 0x1a05f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 3));
label_1a05f8:
    // 0x1a05f8: 0x8ce40190  lw          $a0, 0x190($a3)
    ctx->pc = 0x1a05f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 400)));
label_1a05fc:
    // 0x1a05fc: 0xad040048  sw          $a0, 0x48($t0)
    ctx->pc = 0x1a05fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 4));
label_1a0600:
    // 0x1a0600: 0x8ce30194  lw          $v1, 0x194($a3)
    ctx->pc = 0x1a0600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
label_1a0604:
    // 0x1a0604: 0xad03004c  sw          $v1, 0x4C($t0)
    ctx->pc = 0x1a0604u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
label_1a0608:
    // 0x1a0608: 0x8ce40198  lw          $a0, 0x198($a3)
    ctx->pc = 0x1a0608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 408)));
label_1a060c:
    // 0x1a060c: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x1a060cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
label_1a0610:
    // 0x1a0610: 0x8ce3019c  lw          $v1, 0x19C($a3)
    ctx->pc = 0x1a0610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 412)));
label_1a0614:
    // 0x1a0614: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x1a0614u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
label_1a0618:
    // 0x1a0618: 0x8ce401a0  lw          $a0, 0x1A0($a3)
    ctx->pc = 0x1a0618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
label_1a061c:
    // 0x1a061c: 0xad040058  sw          $a0, 0x58($t0)
    ctx->pc = 0x1a061cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 4));
label_1a0620:
    // 0x1a0620: 0x8ce30148  lw          $v1, 0x148($a3)
    ctx->pc = 0x1a0620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 328)));
label_1a0624:
    // 0x1a0624: 0xad03005c  sw          $v1, 0x5C($t0)
    ctx->pc = 0x1a0624u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 3));
label_1a0628:
    // 0x1a0628: 0x8ce4014c  lw          $a0, 0x14C($a3)
    ctx->pc = 0x1a0628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
label_1a062c:
    // 0x1a062c: 0x3e00008  jr          $ra
label_1a0630:
    if (ctx->pc == 0x1A0630u) {
        ctx->pc = 0x1A0630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A062Cu;
        // 0x1a0630: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0634u;
        goto label_1a0634;
    }
    ctx->pc = 0x1A062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A062Cu;
        // 0x1a0630: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A062Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0634u;
label_1a0634:
    // 0x1a0634: 0x0  nop
    ctx->pc = 0x1a0634u;
    // NOP
label_1a0638:
    // 0x1a0638: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1a0638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1a063c:
    // 0x1a063c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1a063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
label_1a0640:
    // 0x1a0640: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1a0640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_1a0644:
    // 0x1a0644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0648:
    // 0x1a0648: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x1a0648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
label_1a064c:
    // 0x1a064c: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x1a064cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_1a0650:
    // 0x1a0650: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1a0654:
    if (ctx->pc == 0x1A0654u) {
        ctx->pc = 0x1A0654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0650u;
        // 0x1a0654: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0658u;
        goto label_1a0658;
    }
    ctx->pc = 0x1A0650u;
    {
        const bool branch_taken_0x1a0650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0650u;
        // 0x1a0654: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0650) {
            ctx->pc = 0x1A067Cu;
            goto label_1a067c;
        }
    }
    ctx->pc = 0x1A0658u;
label_1a0658:
    // 0x1a0658: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x1a0658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_1a065c:
    // 0x1a065c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1a065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1a0660:
    // 0x1a0660: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a0660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a0664:
    // 0x1a0664: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1a0668:
    if (ctx->pc == 0x1A0668u) {
        ctx->pc = 0x1A0668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0664u;
        // 0x1a0668: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A066Cu;
        goto label_1a066c;
    }
    ctx->pc = 0x1A0664u;
    {
        const bool branch_taken_0x1a0664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0664u;
        // 0x1a0668: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0664) {
            ctx->pc = 0x1A0694u;
            goto label_1a0694;
        }
    }
    ctx->pc = 0x1A066Cu;
label_1a066c:
    // 0x1a066c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1a0670:
    // 0x1a0670: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1a0670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a0674:
    // 0x1a0674: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a0678:
    if (ctx->pc == 0x1A0678u) {
        ctx->pc = 0x1A0678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0674u;
        // 0x1a0678: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A067Cu;
        goto label_1a067c;
    }
    ctx->pc = 0x1A0674u;
    {
        const bool branch_taken_0x1a0674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0674u;
        // 0x1a0678: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0674) {
            ctx->pc = 0x1A0694u;
            goto label_1a0694;
        }
    }
    ctx->pc = 0x1A067Cu;
label_1a067c:
    // 0x1a067c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1a067cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a0680:
    // 0x1a0680: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x1a0680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_1a0684:
    // 0x1a0684: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x1a0684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_1a0688:
    // 0x1a0688: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1a0688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a068c:
    // 0x1a068c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a068cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a0690:
    // 0x1a0690: 0x38510001  xori        $s1, $v0, 0x1
    ctx->pc = 0x1a0690u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a0694:
    // 0x1a0694: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
label_1a0698:
    if (ctx->pc == 0x1A0698u) {
        ctx->pc = 0x1A0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0694u;
        // 0x1a0698: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A069Cu;
        goto label_1a069c;
    }
    ctx->pc = 0x1A0694u;
    {
        const bool branch_taken_0x1a0694 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0694u;
        // 0x1a0698: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0694) {
            ctx->pc = 0x1A06C4u;
            goto label_1a06c4;
        }
    }
    ctx->pc = 0x1A069Cu;
label_1a069c:
    // 0x1a069c: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1a069cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1a06a0:
    // 0x1a06a0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a06a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1a06a4:
    // 0x1a06a4: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x1a06a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1a06a8:
    // 0x1a06a8: 0x24a5a240  addiu       $a1, $a1, -0x5DC0
    ctx->pc = 0x1a06a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943296));
label_1a06ac:
    // 0x1a06ac: 0xc08f20e  jal         func_23C838
label_1a06b0:
    if (ctx->pc == 0x1A06B0u) {
        ctx->pc = 0x1A06B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06ACu;
        // 0x1a06b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06B4u;
        goto label_1a06b4;
    }
    ctx->pc = 0x1A06ACu;
    SET_GPR_U32(ctx, 31, 0x1A06B4u);
    ctx->pc = 0x1A06B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06ACu;
    // 0x1a06b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1A06B4u;
label_1a06b4:
    // 0x1a06b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a06b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a06b8:
    // 0x1a06b8: 0xc068d2c  jal         func_1A34B0
label_1a06bc:
    if (ctx->pc == 0x1A06BCu) {
        ctx->pc = 0x1A06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06B8u;
        // 0x1a06bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06C0u;
        goto label_1a06c0;
    }
    ctx->pc = 0x1A06B8u;
    SET_GPR_U32(ctx, 31, 0x1A06C0u);
    ctx->pc = 0x1A06BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A06B8u;
    // 0x1a06bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A06C0u;
label_1a06c0:
    // 0x1a06c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a06c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a06c4:
    // 0x1a06c4: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1a06c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_1a06c8:
    // 0x1a06c8: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x1a06c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_1a06cc:
    // 0x1a06cc: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1a06ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1a06d0:
    // 0x1a06d0: 0x3e00008  jr          $ra
label_1a06d4:
    if (ctx->pc == 0x1A06D4u) {
        ctx->pc = 0x1A06D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06D0u;
        // 0x1a06d4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A06D8u;
        goto label_1a06d8;
    }
    ctx->pc = 0x1A06D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A06D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A06D0u;
        // 0x1a06d4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A06D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A06D8u;
label_1a06d8:
    // 0x1a06d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a06d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1a06dc:
    // 0x1a06dc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1a06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_1a06e0:
    // 0x1a06e0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1a06e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1a06e4:
    // 0x1a06e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a06e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1a06e8:
    // 0x1a06e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a06e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1a06ec:
    // 0x1a06ec: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a06ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a06f0:
    // 0x1a06f0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a06f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a06f4:
    // 0x1a06f4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1a06f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1a06f8:
    // 0x1a06f8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1a06f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_1a06fc:
    // 0x1a06fc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1a06fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1a0700:
    // 0x1a0700: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1a0700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1a0704:
    // 0x1a0704: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1a0704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1a0708:
    // 0x1a0708: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1a0708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1a070c:
    // 0x1a070c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1a070cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1a0710:
    // 0x1a0710: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a0710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a0714:
    // 0x1a0714: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1a0714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0718:
    // 0x1a0718: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1a0718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1a071c:
    // 0x1a071c: 0x8c8400d8  lw          $a0, 0xD8($a0)
    ctx->pc = 0x1a071cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_1a0720:
    // 0x1a0720: 0x8cc50174  lw          $a1, 0x174($a2)
    ctx->pc = 0x1a0720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
label_1a0724:
    // 0x1a0724: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x1a0724u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1a0728:
    // 0x1a0728: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1a0728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1a072c:
    // 0x1a072c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a072cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a0730:
    // 0x1a0730: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_1a0734:
    if (ctx->pc == 0x1A0734u) {
        ctx->pc = 0x1A0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0730u;
        // 0x1a0734: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0738u;
        goto label_1a0738;
    }
    ctx->pc = 0x1A0730u;
    {
        const bool branch_taken_0x1a0730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0730u;
        // 0x1a0734: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0730) {
            ctx->pc = 0x1A074Cu;
            goto label_1a074c;
        }
    }
    ctx->pc = 0x1A0738u;
label_1a0738:
    // 0x1a0738: 0x8cc400e0  lw          $a0, 0xE0($a2)
    ctx->pc = 0x1a0738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
label_1a073c:
    // 0x1a073c: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
label_1a0740:
    if (ctx->pc == 0x1A0740u) {
        ctx->pc = 0x1A0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A073Cu;
        // 0x1a0740: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0744u;
        goto label_1a0744;
    }
    ctx->pc = 0x1A073Cu;
    {
        const bool branch_taken_0x1a073c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A073Cu;
        // 0x1a0740: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a073c) {
            ctx->pc = 0x1A0784u;
            goto label_1a0784;
        }
    }
    ctx->pc = 0x1A0744u;
label_1a0744:
    // 0x1a0744: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a0748:
    if (ctx->pc == 0x1A0748u) {
        ctx->pc = 0x1A0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0744u;
        // 0x1a0748: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A074Cu;
        goto label_1a074c;
    }
    ctx->pc = 0x1A0744u;
    {
        const bool branch_taken_0x1a0744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0744u;
        // 0x1a0748: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0744) {
            ctx->pc = 0x1A0758u;
            goto label_1a0758;
        }
    }
    ctx->pc = 0x1A074Cu;
label_1a074c:
    // 0x1a074c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1a074cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0750:
    // 0x1a0750: 0x8ce300e0  lw          $v1, 0xE0($a3)
    ctx->pc = 0x1a0750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 224)));
label_1a0754:
    // 0x1a0754: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1a0754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_1a0758:
    // 0x1a0758: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x1a0758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1a075c:
    // 0x1a075c: 0x44a818  mult        $s5, $v0, $a0
    ctx->pc = 0x1a075cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_1a0760:
    // 0x1a0760: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1a0764:
    if (ctx->pc == 0x1A0764u) {
        ctx->pc = 0x1A0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0760u;
        // 0x1a0764: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0768u;
        goto label_1a0768;
    }
    ctx->pc = 0x1A0760u;
    {
        const bool branch_taken_0x1a0760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0760u;
        // 0x1a0764: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0760) {
            ctx->pc = 0x1A0774u;
            goto label_1a0774;
        }
    }
    ctx->pc = 0x1A0768u;
label_1a0768:
    // 0x1a0768: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x1a0768u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
label_1a076c:
    // 0x1a076c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a0770:
    if (ctx->pc == 0x1A0770u) {
        ctx->pc = 0x1A0770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A076Cu;
        // 0x1a0770: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0774u;
        goto label_1a0774;
    }
    ctx->pc = 0x1A076Cu;
    {
        const bool branch_taken_0x1a076c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A076Cu;
        // 0x1a0770: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a076c) {
            ctx->pc = 0x1A0778u;
            goto label_1a0778;
        }
    }
    ctx->pc = 0x1A0774u;
label_1a0774:
    // 0x1a0774: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x1a0774u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a0778:
    // 0x1a0778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a077c:
    // 0x1a077c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a0780:
    if (ctx->pc == 0x1A0780u) {
        ctx->pc = 0x1A0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A077Cu;
        // 0x1a0780: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0784u;
        goto label_1a0784;
    }
    ctx->pc = 0x1A077Cu;
    {
        const bool branch_taken_0x1a077c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A077Cu;
        // 0x1a0780: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a077c) {
            ctx->pc = 0x1A07ACu;
            goto label_1a07ac;
        }
    }
    ctx->pc = 0x1A0784u;
label_1a0784:
    // 0x1a0784: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1a0784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_1a0788:
    // 0x1a0788: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x1a0788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1a078c:
    // 0x1a078c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1a078cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1a0790:
    // 0x1a0790: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1a0790u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_1a0794:
    // 0x1a0794: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1a0794u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1a0798:
    // 0x1a0798: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x1a0798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_1a079c:
    // 0x1a079c: 0x7045a818  mult1       $s5, $v0, $a1
    ctx->pc = 0x1a079cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_1a07a0:
    // 0x1a07a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a07a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a07a4:
    // 0x1a07a4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1a07a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_1a07a8:
    // 0x1a07a8: 0x15a103  sra         $s4, $s5, 4
    ctx->pc = 0x1a07a8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
label_1a07ac:
    // 0x1a07ac: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1a07acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a07b0:
    // 0x1a07b0: 0x10c00059  beqz        $a2, . + 4 + (0x59 << 2)
label_1a07b4:
    if (ctx->pc == 0x1A07B4u) {
        ctx->pc = 0x1A07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07B0u;
        // 0x1a07b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A07B8u;
        goto label_1a07b8;
    }
    ctx->pc = 0x1A07B0u;
    {
        const bool branch_taken_0x1a07b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07B0u;
        // 0x1a07b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07b0) {
            ctx->pc = 0x1A0918u;
            goto label_1a0918;
        }
    }
    ctx->pc = 0x1A07B8u;
label_1a07b8:
    // 0x1a07b8: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x1a07b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1a07bc:
    // 0x1a07bc: 0x0  nop
    ctx->pc = 0x1a07bcu;
    // NOP
label_1a07c0:
    // 0x1a07c0: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x1a07c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a07c4:
    // 0x1a07c4: 0x18c00047  blez        $a2, . + 4 + (0x47 << 2)
label_1a07c8:
    if (ctx->pc == 0x1A07C8u) {
        ctx->pc = 0x1A07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07C4u;
        // 0x1a07c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A07CCu;
        goto label_1a07cc;
    }
    ctx->pc = 0x1A07C4u;
    {
        const bool branch_taken_0x1a07c4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1A07C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07C4u;
        // 0x1a07c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07c4) {
            ctx->pc = 0x1A08E4u;
            goto label_1a08e4;
        }
    }
    ctx->pc = 0x1A07CCu;
label_1a07cc:
    // 0x1a07cc: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x1a07ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a07d0:
    // 0x1a07d0: 0xc06b518  jal         func_1AD460
label_1a07d4:
    if (ctx->pc == 0x1A07D4u) {
        ctx->pc = 0x1A07D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A07D0u;
        // 0x1a07d4: 0x2559821  addu        $s3, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A07D8u;
        goto label_1a07d8;
    }
    ctx->pc = 0x1A07D0u;
    SET_GPR_U32(ctx, 31, 0x1A07D8u);
    ctx->pc = 0x1A07D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A07D0u;
    // 0x1a07d4: 0x2559821  addu        $s3, $s2, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A07D8u;
label_1a07d8:
    // 0x1a07d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a07d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a07dc:
    // 0x1a07dc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a07dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a07e0:
    // 0x1a07e0: 0x3442d480  ori         $v0, $v0, 0xD480
    ctx->pc = 0x1a07e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54400);
label_1a07e4:
    // 0x1a07e4: 0x3484d410  ori         $a0, $a0, 0xD410
    ctx->pc = 0x1a07e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54288);
label_1a07e8:
    // 0x1a07e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a07e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1a07ec:
    // 0x1a07ec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a07f0:
    // 0x1a07f0: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x1a07f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
label_1a07f4:
    // 0x1a07f4: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x1a07f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
label_1a07f8:
    // 0x1a07f8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a07fc:
    // 0x1a07fc: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x1a07fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
label_1a0800:
    // 0x1a0800: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x1a0800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_1a0804:
    // 0x1a0804: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x1a0804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_1a0808:
    // 0x1a0808: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a0808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1a080c:
    // 0x1a080c: 0xc06b52a  jal         func_1AD4A8
label_1a0810:
    if (ctx->pc == 0x1A0810u) {
        ctx->pc = 0x1A0810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A080Cu;
        // 0x1a0810: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0814u;
        goto label_1a0814;
    }
    ctx->pc = 0x1A080Cu;
    SET_GPR_U32(ctx, 31, 0x1A0814u);
    ctx->pc = 0x1A0810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A080Cu;
    // 0x1a0810: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A0814u;
label_1a0814:
    // 0x1a0814: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a0814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a0818:
    // 0x1a0818: 0x23e9021  addu        $s2, $s1, $fp
    ctx->pc = 0x1a0818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
label_1a081c:
    // 0x1a081c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x1a081cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_1a0820:
    // 0x1a0820: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a0824:
    // 0x1a0824: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a0824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1a0828:
    // 0x1a0828: 0x0  nop
    ctx->pc = 0x1a0828u;
    // NOP
label_1a082c:
    // 0x1a082c: 0x0  nop
    ctx->pc = 0x1a082cu;
    // NOP
label_1a0830:
    // 0x1a0830: 0x0  nop
    ctx->pc = 0x1a0830u;
    // NOP
label_1a0834:
    // 0x1a0834: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a0838:
    if (ctx->pc == 0x1A0838u) {
        ctx->pc = 0x1A083Cu;
        goto label_1a083c;
    }
    ctx->pc = 0x1A0834u;
    {
        const bool branch_taken_0x1a0834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0834) {
            ctx->pc = 0x1A0820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0820;
        }
    }
    ctx->pc = 0x1A083Cu;
label_1a083c:
    // 0x1a083c: 0xc06b518  jal         func_1AD460
label_1a0840:
    if (ctx->pc == 0x1A0840u) {
        ctx->pc = 0x1A0844u;
        goto label_1a0844;
    }
    ctx->pc = 0x1A083Cu;
    SET_GPR_U32(ctx, 31, 0x1A0844u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A0844u;
label_1a0844:
    // 0x1a0844: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a0844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a0848:
    // 0x1a0848: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a0848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a084c:
    // 0x1a084c: 0x3442d080  ori         $v0, $v0, 0xD080
    ctx->pc = 0x1a084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53376);
label_1a0850:
    // 0x1a0850: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x1a0850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
label_1a0854:
    // 0x1a0854: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a0854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1a0858:
    // 0x1a0858: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a0858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a085c:
    // 0x1a085c: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x1a085cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_1a0860:
    // 0x1a0860: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x1a0860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
label_1a0864:
    // 0x1a0864: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a0864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a0868:
    // 0x1a0868: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x1a0868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
label_1a086c:
    // 0x1a086c: 0x3484d000  ori         $a0, $a0, 0xD000
    ctx->pc = 0x1a086cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
label_1a0870:
    // 0x1a0870: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1a0870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1a0874:
    // 0x1a0874: 0xc06b52a  jal         func_1AD4A8
label_1a0878:
    if (ctx->pc == 0x1A0878u) {
        ctx->pc = 0x1A0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0874u;
        // 0x1a0878: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A087Cu;
        goto label_1a087c;
    }
    ctx->pc = 0x1A0874u;
    SET_GPR_U32(ctx, 31, 0x1A087Cu);
    ctx->pc = 0x1A0878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0874u;
    // 0x1a0878: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A087Cu;
label_1a087c:
    // 0x1a087c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a087cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a0880:
    // 0x1a0880: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x1a0880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_1a0884:
    // 0x1a0884: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x1a0884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
label_1a0888:
    // 0x1a0888: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a088c:
    // 0x1a088c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a088cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1a0890:
    // 0x1a0890: 0x0  nop
    ctx->pc = 0x1a0890u;
    // NOP
label_1a0894:
    // 0x1a0894: 0x0  nop
    ctx->pc = 0x1a0894u;
    // NOP
label_1a0898:
    // 0x1a0898: 0x0  nop
    ctx->pc = 0x1a0898u;
    // NOP
label_1a089c:
    // 0x1a089c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a08a0:
    if (ctx->pc == 0x1A08A0u) {
        ctx->pc = 0x1A08A4u;
        goto label_1a08a4;
    }
    ctx->pc = 0x1A089Cu;
    {
        const bool branch_taken_0x1a089c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a089c) {
            ctx->pc = 0x1A0888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0888;
        }
    }
    ctx->pc = 0x1A08A4u;
label_1a08a4:
    // 0x1a08a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a08a8:
    // 0x1a08a8: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x1a08a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
label_1a08ac:
    // 0x1a08ac: 0x0  nop
    ctx->pc = 0x1a08acu;
    // NOP
label_1a08b0:
    // 0x1a08b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a08b4:
    // 0x1a08b4: 0x0  nop
    ctx->pc = 0x1a08b4u;
    // NOP
label_1a08b8:
    // 0x1a08b8: 0x0  nop
    ctx->pc = 0x1a08b8u;
    // NOP
label_1a08bc:
    // 0x1a08bc: 0x0  nop
    ctx->pc = 0x1a08bcu;
    // NOP
label_1a08c0:
    // 0x1a08c0: 0x0  nop
    ctx->pc = 0x1a08c0u;
    // NOP
label_1a08c4:
    // 0x1a08c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a08c8:
    if (ctx->pc == 0x1A08C8u) {
        ctx->pc = 0x1A08CCu;
        goto label_1a08cc;
    }
    ctx->pc = 0x1A08C4u;
    {
        const bool branch_taken_0x1a08c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a08c4) {
            ctx->pc = 0x1A08B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a08b0;
        }
    }
    ctx->pc = 0x1A08CCu;
label_1a08cc:
    // 0x1a08cc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1a08ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a08d0:
    // 0x1a08d0: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x1a08d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1a08d4:
    // 0x1a08d4: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_1a08d8:
    if (ctx->pc == 0x1A08D8u) {
        ctx->pc = 0x1A08D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08D4u;
        // 0x1a08d8: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A08DCu;
        goto label_1a08dc;
    }
    ctx->pc = 0x1A08D4u;
    {
        const bool branch_taken_0x1a08d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A08D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08D4u;
        // 0x1a08d8: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a08d4) {
            ctx->pc = 0x1A07D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a07d0;
        }
    }
    ctx->pc = 0x1A08DCu;
label_1a08dc:
    // 0x1a08dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a08e0:
    if (ctx->pc == 0x1A08E0u) {
        ctx->pc = 0x1A08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08DCu;
        // 0x1a08e0: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A08E4u;
        goto label_1a08e4;
    }
    ctx->pc = 0x1A08DCu;
    {
        const bool branch_taken_0x1a08dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08DCu;
        // 0x1a08e0: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a08dc) {
            ctx->pc = 0x1A08ECu;
            goto label_1a08ec;
        }
    }
    ctx->pc = 0x1A08E4u;
label_1a08e4:
    // 0x1a08e4: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x1a08e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a08e8:
    // 0x1a08e8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1a08e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a08ec:
    // 0x1a08ec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a08ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a08f0:
    // 0x1a08f0: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1a08f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1a08f4:
    // 0x1a08f4: 0x8ce200e4  lw          $v0, 0xE4($a3)
    ctx->pc = 0x1a08f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 228)));
label_1a08f8:
    // 0x1a08f8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x1a08f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a08fc:
    // 0x1a08fc: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x1a08fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1a0900:
    // 0x1a0900: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1a0900u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a0904:
    // 0x1a0904: 0xe00013  mtlo        $a3
    ctx->pc = 0x1a0904u;
    ctx->lo = GPR_U64(ctx, 7);
label_1a0908:
    // 0x1a0908: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x1a0908u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_1a090c:
    // 0x1a090c: 0x3812  mflo        $a3
    ctx->pc = 0x1a090cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_1a0910:
    // 0x1a0910: 0x1480ffab  bnez        $a0, . + 4 + (-0x55 << 2)
label_1a0914:
    if (ctx->pc == 0x1A0914u) {
        ctx->pc = 0x1A0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0910u;
        // 0x1a0914: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0918u;
        goto label_1a0918;
    }
    ctx->pc = 0x1A0910u;
    {
        const bool branch_taken_0x1a0910 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0910u;
        // 0x1a0914: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0910) {
            ctx->pc = 0x1A07C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a07c0;
        }
    }
    ctx->pc = 0x1A0918u;
label_1a0918:
    // 0x1a0918: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1a0918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a091c:
    // 0x1a091c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1a091cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a0920:
    // 0x1a0920: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1a0920u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a0924:
    // 0x1a0924: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1a0924u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a0928:
    // 0x1a0928: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1a0928u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a092c:
    // 0x1a092c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1a092cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a0930:
    // 0x1a0930: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1a0930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a0934:
    // 0x1a0934: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a0934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a0938:
    // 0x1a0938: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1a0938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a093c:
    // 0x1a093c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a093cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0940:
    // 0x1a0940: 0x3e00008  jr          $ra
label_1a0944:
    if (ctx->pc == 0x1A0944u) {
        ctx->pc = 0x1A0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0940u;
        // 0x1a0944: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0948u;
        goto label_1a0948;
    }
    ctx->pc = 0x1A0940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0940u;
        // 0x1a0944: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0948u;
label_1a0948:
    // 0x1a0948: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a0948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a094c:
    // 0x1a094c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a094cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a0950:
    // 0x1a0950: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_1a0954:
    if (ctx->pc == 0x1A0954u) {
        ctx->pc = 0x1A0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0950u;
        // 0x1a0954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0958u;
        goto label_1a0958;
    }
    ctx->pc = 0x1A0950u;
    {
        const bool branch_taken_0x1a0950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0950u;
        // 0x1a0954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0950) {
            ctx->pc = 0x1A0968u;
            goto label_1a0968;
        }
    }
    ctx->pc = 0x1A0958u;
label_1a0958:
    // 0x1a0958: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x1a0958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_1a095c:
    // 0x1a095c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1a095cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1a0960:
    // 0x1a0960: 0xac8200ac  sw          $v0, 0xAC($a0)
    ctx->pc = 0x1a0960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 2));
label_1a0964:
    // 0x1a0964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0968:
    // 0x1a0968: 0x3e00008  jr          $ra
label_1a096c:
    if (ctx->pc == 0x1A096Cu) {
        ctx->pc = 0x1A096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0968u;
        // 0x1a096c: 0xac820820  sw          $v0, 0x820($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0970u;
        goto label_1a0970;
    }
    ctx->pc = 0x1A0968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0968u;
        // 0x1a096c: 0xac820820  sw          $v0, 0x820($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0970u;
label_1a0970:
    // 0x1a0970: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a0970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1a0974:
    // 0x1a0974: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1a0974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_1a0978:
    // 0x1a0978: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1a0978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1a097c:
    // 0x1a097c: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1a097cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a0980:
    // 0x1a0980: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1a0980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1a0984:
    // 0x1a0984: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a0984u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a0988:
    // 0x1a0988: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1a0988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1a098c:
    // 0x1a098c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a098cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a0990:
    // 0x1a0990: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1a0990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1a0994:
    // 0x1a0994: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a0994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0998:
    // 0x1a0998: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1a0998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1a099c:
    // 0x1a099c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1a099cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1a09a0:
    // 0x1a09a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a09a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1a09a4:
    // 0x1a09a4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1a09a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1a09a8:
    // 0x1a09a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a09a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a09ac:
    // 0x1a09ac: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x1a09acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_1a09b0:
    // 0x1a09b0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1a09b4:
    if (ctx->pc == 0x1A09B4u) {
        ctx->pc = 0x1A09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09B0u;
        // 0x1a09b4: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A09B8u;
        goto label_1a09b8;
    }
    ctx->pc = 0x1A09B0u;
    {
        const bool branch_taken_0x1a09b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09B0u;
        // 0x1a09b4: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a09b0) {
            ctx->pc = 0x1A0A48u;
            goto label_1a0a48;
        }
    }
    ctx->pc = 0x1A09B8u;
label_1a09b8:
    // 0x1a09b8: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x1a09b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
label_1a09bc:
    // 0x1a09bc: 0x4430024  bgezl       $v0, . + 4 + (0x24 << 2)
label_1a09c0:
    if (ctx->pc == 0x1A09C0u) {
        ctx->pc = 0x1A09C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09BCu;
        // 0x1a09c0: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A09C4u;
        goto label_1a09c4;
    }
    ctx->pc = 0x1A09BCu;
    {
        const bool branch_taken_0x1a09bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a09bc) {
            ctx->pc = 0x1A09C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A09BCu;
            // 0x1a09c0: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A50u;
            goto label_1a0a50;
        }
    }
    ctx->pc = 0x1A09C4u;
label_1a09c4:
    // 0x1a09c4: 0x8e770080  lw          $s7, 0x80($s3)
    ctx->pc = 0x1a09c4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_1a09c8:
    // 0x1a09c8: 0x6e20021  bltzl       $s7, . + 4 + (0x21 << 2)
label_1a09cc:
    if (ctx->pc == 0x1A09CCu) {
        ctx->pc = 0x1A09CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09C8u;
        // 0x1a09cc: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A09D0u;
        goto label_1a09d0;
    }
    ctx->pc = 0x1A09C8u;
    {
        const bool branch_taken_0x1a09c8 = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x1a09c8) {
            ctx->pc = 0x1A09CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A09C8u;
            // 0x1a09cc: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A50u;
            goto label_1a0a50;
        }
    }
    ctx->pc = 0x1A09D0u;
label_1a09d0:
    // 0x1a09d0: 0xde700088  ld          $s0, 0x88($s3)
    ctx->pc = 0x1a09d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 136)));
label_1a09d4:
    // 0x1a09d4: 0xde650078  ld          $a1, 0x78($s3)
    ctx->pc = 0x1a09d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
label_1a09d8:
    // 0x1a09d8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1a09d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_1a09dc:
    // 0x1a09dc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1a09dcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_1a09e0:
    // 0x1a09e0: 0x32120001  andi        $s2, $s0, 0x1
    ctx->pc = 0x1a09e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1a09e4:
    // 0x1a09e4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1a09e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1a09e8:
    // 0x1a09e8: 0xc06d536  jal         func_1B54D8
label_1a09ec:
    if (ctx->pc == 0x1A09ECu) {
        ctx->pc = 0x1A09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09E8u;
        // 0x1a09ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A09F0u;
        goto label_1a09f0;
    }
    ctx->pc = 0x1A09E8u;
    SET_GPR_U32(ctx, 31, 0x1A09F0u);
    ctx->pc = 0x1A09ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09E8u;
    // 0x1a09ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    { ctx->pc = 0x1b54d8; return; }
    ctx->pc = 0x1A09F0u;
label_1a09f0:
    // 0x1a09f0: 0x8e760090  lw          $s6, 0x90($s3)
    ctx->pc = 0x1a09f0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_1a09f4:
    // 0x1a09f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a09f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a09f8:
    // 0x1a09f8: 0xc06d536  jal         func_1B54D8
label_1a09fc:
    if (ctx->pc == 0x1A09FCu) {
        ctx->pc = 0x1A09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09F8u;
        // 0x1a09fc: 0x32c50001  andi        $a1, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A00u;
        goto label_1a0a00;
    }
    ctx->pc = 0x1A09F8u;
    SET_GPR_U32(ctx, 31, 0x1A0A00u);
    ctx->pc = 0x1A09FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09F8u;
    // 0x1a09fc: 0x32c50001  andi        $a1, $s6, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    { ctx->pc = 0x1b54d8; return; }
    ctx->pc = 0x1A0A00u;
label_1a0a00:
    // 0x1a0a00: 0xde640078  ld          $a0, 0x78($s3)
    ctx->pc = 0x1a0a00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 120)));
label_1a0a04:
    // 0x1a0a04: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x1a0a04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
label_1a0a08:
    // 0x1a0a08: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x1a0a08u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_1a0a0c:
    // 0x1a0a0c: 0xc06d536  jal         func_1B54D8
label_1a0a10:
    if (ctx->pc == 0x1A0A10u) {
        ctx->pc = 0x1A0A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A0Cu;
        // 0x1a0a10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A14u;
        goto label_1a0a14;
    }
    ctx->pc = 0x1A0A0Cu;
    SET_GPR_U32(ctx, 31, 0x1A0A14u);
    ctx->pc = 0x1A0A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A0Cu;
    // 0x1a0a10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    { ctx->pc = 0x1b54d8; return; }
    ctx->pc = 0x1A0A14u;
label_1a0a14:
    // 0x1a0a14: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x1a0a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
label_1a0a18:
    // 0x1a0a18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a0a18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1a0a1c:
    // 0x1a0a1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a0a20:
    // 0x1a0a20: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a0a24:
    // 0x1a0a24: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1a0a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_1a0a28:
    // 0x1a0a28: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1a0a28u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_1a0a2c:
    // 0x1a0a2c: 0xde650078  ld          $a1, 0x78($s3)
    ctx->pc = 0x1a0a2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
label_1a0a30:
    // 0x1a0a30: 0xc06d536  jal         func_1B54D8
label_1a0a34:
    if (ctx->pc == 0x1A0A34u) {
        ctx->pc = 0x1A0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A30u;
        // 0x1a0a34: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A38u;
        goto label_1a0a38;
    }
    ctx->pc = 0x1A0A30u;
    SET_GPR_U32(ctx, 31, 0x1A0A38u);
    ctx->pc = 0x1A0A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A30u;
    // 0x1a0a34: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    { ctx->pc = 0x1b54d8; return; }
    ctx->pc = 0x1A0A38u;
label_1a0a38:
    // 0x1a0a38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a0a3c:
    if (ctx->pc == 0x1A0A3Cu) {
        ctx->pc = 0x1A0A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A38u;
        // 0x1a0a3c: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A40u;
        goto label_1a0a40;
    }
    ctx->pc = 0x1A0A38u;
    {
        const bool branch_taken_0x1a0a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A38u;
        // 0x1a0a3c: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a38) {
            ctx->pc = 0x1A0A50u;
            goto label_1a0a50;
        }
    }
    ctx->pc = 0x1A0A40u;
label_1a0a40:
    // 0x1a0a40: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a0a44:
    if (ctx->pc == 0x1A0A44u) {
        ctx->pc = 0x1A0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A40u;
        // 0x1a0a44: 0xae620090  sw          $v0, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A48u;
        goto label_1a0a48;
    }
    ctx->pc = 0x1A0A40u;
    {
        const bool branch_taken_0x1a0a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A40u;
        // 0x1a0a44: 0xae620090  sw          $v0, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a40) {
            ctx->pc = 0x1A0A50u;
            goto label_1a0a50;
        }
    }
    ctx->pc = 0x1A0A48u;
label_1a0a48:
    // 0x1a0a48: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x1a0a48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
label_1a0a4c:
    // 0x1a0a4c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1a0a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_1a0a50:
    // 0x1a0a50: 0x8e6300f8  lw          $v1, 0xF8($s3)
    ctx->pc = 0x1a0a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
label_1a0a54:
    // 0x1a0a54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a0a58:
    // 0x1a0a58: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1a0a5c:
    if (ctx->pc == 0x1A0A5Cu) {
        ctx->pc = 0x1A0A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A58u;
        // 0x1a0a5c: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A60u;
        goto label_1a0a60;
    }
    ctx->pc = 0x1A0A58u;
    {
        const bool branch_taken_0x1a0a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0a58) {
            ctx->pc = 0x1A0A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A58u;
            // 0x1a0a5c: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A80u;
            goto label_1a0a80;
        }
    }
    ctx->pc = 0x1A0A60u;
label_1a0a60:
    // 0x1a0a60: 0xde6200f0  ld          $v0, 0xF0($s3)
    ctx->pc = 0x1a0a60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 240)));
label_1a0a64:
    // 0x1a0a64: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
label_1a0a68:
    if (ctx->pc == 0x1A0A68u) {
        ctx->pc = 0x1A0A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A64u;
        // 0x1a0a68: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0A6Cu;
        goto label_1a0a6c;
    }
    ctx->pc = 0x1A0A64u;
    {
        const bool branch_taken_0x1a0a64 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a0a64) {
            ctx->pc = 0x1A0A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A64u;
            // 0x1a0a68: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A80u;
            goto label_1a0a80;
        }
    }
    ctx->pc = 0x1A0A6Cu;
label_1a0a6c:
    // 0x1a0a6c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1a0a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_1a0a70:
    // 0x1a0a70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a0a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a0a74:
    // 0x1a0a74: 0xae6000f8  sw          $zero, 0xF8($s3)
    ctx->pc = 0x1a0a74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 0));
label_1a0a78:
    // 0x1a0a78: 0xfe6200f0  sd          $v0, 0xF0($s3)
    ctx->pc = 0x1a0a78u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
label_1a0a7c:
    // 0x1a0a7c: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x1a0a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_1a0a80:
    // 0x1a0a80: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x1a0a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_1a0a84:
    // 0x1a0a84: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x1a0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_1a0a88:
    // 0x1a0a88: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x1a0a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
label_1a0a8c:
    // 0x1a0a8c: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x1a0a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
label_1a0a90:
    // 0x1a0a90: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x1a0a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1a0a94:
    // 0x1a0a94: 0x8e87002c  lw          $a3, 0x2C($s4)
    ctx->pc = 0x1a0a94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_1a0a98:
    // 0x1a0a98: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1a0a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1a0a9c:
    // 0x1a0a9c: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x1a0a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_1a0aa0:
    // 0x1a0aa0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x1a0aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_1a0aa4:
    // 0x1a0aa4: 0xde840020  ld          $a0, 0x20($s4)
    ctx->pc = 0x1a0aa4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 32)));
label_1a0aa8:
    // 0x1a0aa8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1a0aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_1a0aac:
    // 0x1a0aac: 0x630f8  dsll        $a2, $a2, 3
    ctx->pc = 0x1a0aacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 3);
label_1a0ab0:
    // 0x1a0ab0: 0x319f8  dsll        $v1, $v1, 7
    ctx->pc = 0x1a0ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
label_1a0ab4:
    // 0x1a0ab4: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x1a0ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
label_1a0ab8:
    // 0x1a0ab8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a0ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_1a0abc:
    // 0x1a0abc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1a0abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1a0ac0:
    // 0x1a0ac0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1a0ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a0ac4:
    // 0x1a0ac4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a0ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a0ac8:
    // 0x1a0ac8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1a0ac8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a0acc:
    // 0x1a0acc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a0accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0ad0:
    // 0x1a0ad0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1a0ad0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a0ad4:
    // 0x1a0ad4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1a0ad4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a0ad8:
    // 0x1a0ad8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1a0ad8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a0adc:
    // 0x1a0adc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1a0adcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a0ae0:
    // 0x1a0ae0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1a0ae0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a0ae4:
    // 0x1a0ae4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a0ae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a0ae8:
    // 0x1a0ae8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1a0ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0aec:
    // 0x1a0aec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a0aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0af0:
    // 0x1a0af0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a0af0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1a0af4:
    // 0x1a0af4: 0x3e00008  jr          $ra
label_1a0af8:
    if (ctx->pc == 0x1A0AF8u) {
        ctx->pc = 0x1A0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AF4u;
        // 0x1a0af8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0AFCu;
        goto label_1a0afc;
    }
    ctx->pc = 0x1A0AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AF4u;
        // 0x1a0af8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0AFCu;
label_1a0afc:
    // 0x1a0afc: 0x0  nop
    ctx->pc = 0x1a0afcu;
    // NOP
label_1a0b00:
    // 0x1a0b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a0b04:
    // 0x1a0b04: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a0b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a0b08:
    // 0x1a0b08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a0b0c:
    // 0x1a0b0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a0b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a0b10:
    // 0x1a0b10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a0b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a0b14:
    // 0x1a0b14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0b18:
    // 0x1a0b18: 0x8e070858  lw          $a3, 0x858($s0)
    ctx->pc = 0x1a0b18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_1a0b1c:
    // 0x1a0b1c: 0x24e80020  addiu       $t0, $a3, 0x20
    ctx->pc = 0x1a0b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_1a0b20:
    // 0x1a0b20: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x1a0b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1a0b24:
    // 0x1a0b24: 0xc06825c  jal         func_1A0970
label_1a0b28:
    if (ctx->pc == 0x1A0B28u) {
        ctx->pc = 0x1A0B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B24u;
        // 0x1a0b28: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0B2Cu;
        goto label_1a0b2c;
    }
    ctx->pc = 0x1A0B24u;
    SET_GPR_U32(ctx, 31, 0x1A0B2Cu);
    ctx->pc = 0x1A0B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0B24u;
    // 0x1a0b28: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    goto label_1a0970;
    ctx->pc = 0x1A0B2Cu;
label_1a0b2c:
    // 0x1a0b2c: 0x8e070858  lw          $a3, 0x858($s0)
    ctx->pc = 0x1a0b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_1a0b30:
    // 0x1a0b30: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x1a0b30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_1a0b34:
    // 0x1a0b34: 0x24c65938  addiu       $a2, $a2, 0x5938
    ctx->pc = 0x1a0b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22840));
label_1a0b38:
    // 0x1a0b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0b3c:
    // 0x1a0b3c: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x1a0b3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32)));
label_1a0b40:
    // 0x1a0b40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a0b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a0b44:
    // 0x1a0b44: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x1a0b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_1a0b48:
    // 0x1a0b48: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x1a0b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
label_1a0b4c:
    // 0x1a0b4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a0b4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1a0b50:
    // 0x1a0b50: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x1a0b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_1a0b54:
    // 0x1a0b54: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1a0b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_1a0b58:
    // 0x1a0b58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a0b5c:
    // 0x1a0b5c: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x1a0b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_1a0b60:
    // 0x1a0b60: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a0b64:
    // 0x1a0b64: 0x9c460000  lwu         $a2, 0x0($v0)
    ctx->pc = 0x1a0b64u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a0b68:
    // 0x1a0b68: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x1a0b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
label_1a0b6c:
    // 0x1a0b6c: 0xfe060088  sd          $a2, 0x88($s0)
    ctx->pc = 0x1a0b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 6));
label_1a0b70:
    // 0x1a0b70: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1a0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_1a0b74:
    // 0x1a0b74: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x1a0b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
label_1a0b78:
    // 0x1a0b78: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1a0b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1a0b7c:
    // 0x1a0b7c: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x1a0b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_1a0b80:
    // 0x1a0b80: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1a0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1a0b84:
    // 0x1a0b84: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x1a0b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
label_1a0b88:
    // 0x1a0b88: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1a0b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1a0b8c:
    // 0x1a0b8c: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x1a0b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_1a0b90:
    // 0x1a0b90: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1a0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1a0b94:
    // 0x1a0b94: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x1a0b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_1a0b98:
    // 0x1a0b98: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x1a0b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_1a0b9c:
    // 0x1a0b9c: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x1a0b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
label_1a0ba0:
    // 0x1a0ba0: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x1a0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_1a0ba4:
    // 0x1a0ba4: 0xc06818e  jal         func_1A0638
label_1a0ba8:
    if (ctx->pc == 0x1A0BA8u) {
        ctx->pc = 0x1A0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BA4u;
        // 0x1a0ba8: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BACu;
        goto label_1a0bac;
    }
    ctx->pc = 0x1A0BA4u;
    SET_GPR_U32(ctx, 31, 0x1A0BACu);
    ctx->pc = 0x1A0BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BA4u;
    // 0x1a0ba8: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0638u;
    goto label_1a0638;
    ctx->pc = 0x1A0BACu;
label_1a0bac:
    // 0x1a0bac: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1a0bb0:
    if (ctx->pc == 0x1A0BB0u) {
        ctx->pc = 0x1A0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BACu;
        // 0x1a0bb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BB4u;
        goto label_1a0bb4;
    }
    ctx->pc = 0x1A0BACu;
    {
        const bool branch_taken_0x1a0bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BACu;
        // 0x1a0bb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bac) {
            ctx->pc = 0x1A0BFCu;
            goto label_1a0bfc;
        }
    }
    ctx->pc = 0x1A0BB4u;
label_1a0bb4:
    // 0x1a0bb4: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1a0bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1a0bb8:
    // 0x1a0bb8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_1a0bbc:
    if (ctx->pc == 0x1A0BBCu) {
        ctx->pc = 0x1A0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BB8u;
        // 0x1a0bbc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BC0u;
        goto label_1a0bc0;
    }
    ctx->pc = 0x1A0BB8u;
    {
        const bool branch_taken_0x1a0bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BB8u;
        // 0x1a0bbc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bb8) {
            ctx->pc = 0x1A0C00u;
            goto label_1a0c00;
        }
    }
    ctx->pc = 0x1A0BC0u;
label_1a0bc0:
    // 0x1a0bc0: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x1a0bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1a0bc4:
    // 0x1a0bc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a0bc8:
    if (ctx->pc == 0x1A0BC8u) {
        ctx->pc = 0x1A0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BC4u;
        // 0x1a0bc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BCCu;
        goto label_1a0bcc;
    }
    ctx->pc = 0x1A0BC4u;
    {
        const bool branch_taken_0x1a0bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BC4u;
        // 0x1a0bc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bc4) {
            ctx->pc = 0x1A0BDCu;
            goto label_1a0bdc;
        }
    }
    ctx->pc = 0x1A0BCCu;
label_1a0bcc:
    // 0x1a0bcc: 0xc068536  jal         func_1A14D8
label_1a0bd0:
    if (ctx->pc == 0x1A0BD0u) {
        ctx->pc = 0x1A0BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BCCu;
        // 0x1a0bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BD4u;
        goto label_1a0bd4;
    }
    ctx->pc = 0x1A0BCCu;
    SET_GPR_U32(ctx, 31, 0x1A0BD4u);
    ctx->pc = 0x1A0BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BCCu;
    // 0x1a0bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A14D8u;
    { ctx->pc = 0x1a14d8; return; }
    ctx->pc = 0x1A0BD4u;
label_1a0bd4:
    // 0x1a0bd4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a0bd8:
    if (ctx->pc == 0x1A0BD8u) {
        ctx->pc = 0x1A0BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BD4u;
        // 0x1a0bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BDCu;
        goto label_1a0bdc;
    }
    ctx->pc = 0x1A0BD4u;
    {
        const bool branch_taken_0x1a0bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BD4u;
        // 0x1a0bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0bd4) {
            ctx->pc = 0x1A0BE8u;
            goto label_1a0be8;
        }
    }
    ctx->pc = 0x1A0BDCu;
label_1a0bdc:
    // 0x1a0bdc: 0xc0681b6  jal         func_1A06D8
label_1a0be0:
    if (ctx->pc == 0x1A0BE0u) {
        ctx->pc = 0x1A0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BDCu;
        // 0x1a0be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BE4u;
        goto label_1a0be4;
    }
    ctx->pc = 0x1A0BDCu;
    SET_GPR_U32(ctx, 31, 0x1A0BE4u);
    ctx->pc = 0x1A0BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BDCu;
    // 0x1a0be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A06D8u;
    goto label_1a06d8;
    ctx->pc = 0x1A0BE4u;
label_1a0be4:
    // 0x1a0be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0be8:
    // 0x1a0be8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0bec:
    // 0x1a0bec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a0becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0bf0:
    // 0x1a0bf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0bf4:
    // 0x1a0bf4: 0x8068252  j           func_1A0948
label_1a0bf8:
    if (ctx->pc == 0x1A0BF8u) {
        ctx->pc = 0x1A0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BF4u;
        // 0x1a0bf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0BFCu;
        goto label_1a0bfc;
    }
    ctx->pc = 0x1A0BF4u;
    ctx->pc = 0x1A0BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0BF4u;
    // 0x1a0bf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0948u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_1a0948;
    ctx->pc = 0x1A0BFCu;
label_1a0bfc:
    // 0x1a0bfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a0c00:
    // 0x1a0c00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a0c00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0c04:
    // 0x1a0c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a0c08u;
    return;
}

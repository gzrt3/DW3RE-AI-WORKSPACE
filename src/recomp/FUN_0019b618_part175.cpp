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


void FUN_0019b618_part175(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1f07b0u: goto label_1f07b0;
        case 0x1f07b4u: goto label_1f07b4;
        case 0x1f07b8u: goto label_1f07b8;
        case 0x1f07bcu: goto label_1f07bc;
        case 0x1f07c0u: goto label_1f07c0;
        case 0x1f07c4u: goto label_1f07c4;
        case 0x1f07c8u: goto label_1f07c8;
        case 0x1f07ccu: goto label_1f07cc;
        case 0x1f07d0u: goto label_1f07d0;
        case 0x1f07d4u: goto label_1f07d4;
        case 0x1f07d8u: goto label_1f07d8;
        case 0x1f07dcu: goto label_1f07dc;
        case 0x1f07e0u: goto label_1f07e0;
        case 0x1f07e4u: goto label_1f07e4;
        case 0x1f07e8u: goto label_1f07e8;
        case 0x1f07ecu: goto label_1f07ec;
        case 0x1f07f0u: goto label_1f07f0;
        case 0x1f07f4u: goto label_1f07f4;
        case 0x1f07f8u: goto label_1f07f8;
        case 0x1f07fcu: goto label_1f07fc;
        case 0x1f0800u: goto label_1f0800;
        case 0x1f0804u: goto label_1f0804;
        case 0x1f0808u: goto label_1f0808;
        case 0x1f080cu: goto label_1f080c;
        case 0x1f0810u: goto label_1f0810;
        case 0x1f0814u: goto label_1f0814;
        case 0x1f0818u: goto label_1f0818;
        case 0x1f081cu: goto label_1f081c;
        case 0x1f0820u: goto label_1f0820;
        case 0x1f0824u: goto label_1f0824;
        case 0x1f0828u: goto label_1f0828;
        case 0x1f082cu: goto label_1f082c;
        case 0x1f0830u: goto label_1f0830;
        case 0x1f0834u: goto label_1f0834;
        case 0x1f0838u: goto label_1f0838;
        case 0x1f083cu: goto label_1f083c;
        case 0x1f0840u: goto label_1f0840;
        case 0x1f0844u: goto label_1f0844;
        case 0x1f0848u: goto label_1f0848;
        case 0x1f084cu: goto label_1f084c;
        case 0x1f0850u: goto label_1f0850;
        case 0x1f0854u: goto label_1f0854;
        case 0x1f0858u: goto label_1f0858;
        case 0x1f085cu: goto label_1f085c;
        case 0x1f0860u: goto label_1f0860;
        case 0x1f0864u: goto label_1f0864;
        case 0x1f0868u: goto label_1f0868;
        case 0x1f086cu: goto label_1f086c;
        case 0x1f0870u: goto label_1f0870;
        case 0x1f0874u: goto label_1f0874;
        case 0x1f0878u: goto label_1f0878;
        case 0x1f087cu: goto label_1f087c;
        case 0x1f0880u: goto label_1f0880;
        case 0x1f0884u: goto label_1f0884;
        case 0x1f0888u: goto label_1f0888;
        case 0x1f088cu: goto label_1f088c;
        case 0x1f0890u: goto label_1f0890;
        case 0x1f0894u: goto label_1f0894;
        case 0x1f0898u: goto label_1f0898;
        case 0x1f089cu: goto label_1f089c;
        case 0x1f08a0u: goto label_1f08a0;
        case 0x1f08a4u: goto label_1f08a4;
        case 0x1f08a8u: goto label_1f08a8;
        case 0x1f08acu: goto label_1f08ac;
        case 0x1f08b0u: goto label_1f08b0;
        case 0x1f08b4u: goto label_1f08b4;
        case 0x1f08b8u: goto label_1f08b8;
        case 0x1f08bcu: goto label_1f08bc;
        case 0x1f08c0u: goto label_1f08c0;
        case 0x1f08c4u: goto label_1f08c4;
        case 0x1f08c8u: goto label_1f08c8;
        case 0x1f08ccu: goto label_1f08cc;
        case 0x1f08d0u: goto label_1f08d0;
        case 0x1f08d4u: goto label_1f08d4;
        case 0x1f08d8u: goto label_1f08d8;
        case 0x1f08dcu: goto label_1f08dc;
        case 0x1f08e0u: goto label_1f08e0;
        case 0x1f08e4u: goto label_1f08e4;
        case 0x1f08e8u: goto label_1f08e8;
        case 0x1f08ecu: goto label_1f08ec;
        case 0x1f08f0u: goto label_1f08f0;
        case 0x1f08f4u: goto label_1f08f4;
        case 0x1f08f8u: goto label_1f08f8;
        case 0x1f08fcu: goto label_1f08fc;
        case 0x1f0900u: goto label_1f0900;
        case 0x1f0904u: goto label_1f0904;
        case 0x1f0908u: goto label_1f0908;
        case 0x1f090cu: goto label_1f090c;
        case 0x1f0910u: goto label_1f0910;
        case 0x1f0914u: goto label_1f0914;
        case 0x1f0918u: goto label_1f0918;
        case 0x1f091cu: goto label_1f091c;
        case 0x1f0920u: goto label_1f0920;
        case 0x1f0924u: goto label_1f0924;
        case 0x1f0928u: goto label_1f0928;
        case 0x1f092cu: goto label_1f092c;
        case 0x1f0930u: goto label_1f0930;
        case 0x1f0934u: goto label_1f0934;
        case 0x1f0938u: goto label_1f0938;
        case 0x1f093cu: goto label_1f093c;
        case 0x1f0940u: goto label_1f0940;
        case 0x1f0944u: goto label_1f0944;
        case 0x1f0948u: goto label_1f0948;
        case 0x1f094cu: goto label_1f094c;
        case 0x1f0950u: goto label_1f0950;
        case 0x1f0954u: goto label_1f0954;
        case 0x1f0958u: goto label_1f0958;
        case 0x1f095cu: goto label_1f095c;
        case 0x1f0960u: goto label_1f0960;
        case 0x1f0964u: goto label_1f0964;
        case 0x1f0968u: goto label_1f0968;
        case 0x1f096cu: goto label_1f096c;
        case 0x1f0970u: goto label_1f0970;
        case 0x1f0974u: goto label_1f0974;
        case 0x1f0978u: goto label_1f0978;
        case 0x1f097cu: goto label_1f097c;
        case 0x1f0980u: goto label_1f0980;
        case 0x1f0984u: goto label_1f0984;
        case 0x1f0988u: goto label_1f0988;
        case 0x1f098cu: goto label_1f098c;
        case 0x1f0990u: goto label_1f0990;
        case 0x1f0994u: goto label_1f0994;
        case 0x1f0998u: goto label_1f0998;
        case 0x1f099cu: goto label_1f099c;
        case 0x1f09a0u: goto label_1f09a0;
        case 0x1f09a4u: goto label_1f09a4;
        case 0x1f09a8u: goto label_1f09a8;
        case 0x1f09acu: goto label_1f09ac;
        case 0x1f09b0u: goto label_1f09b0;
        case 0x1f09b4u: goto label_1f09b4;
        case 0x1f09b8u: goto label_1f09b8;
        case 0x1f09bcu: goto label_1f09bc;
        case 0x1f09c0u: goto label_1f09c0;
        case 0x1f09c4u: goto label_1f09c4;
        case 0x1f09c8u: goto label_1f09c8;
        case 0x1f09ccu: goto label_1f09cc;
        case 0x1f09d0u: goto label_1f09d0;
        case 0x1f09d4u: goto label_1f09d4;
        case 0x1f09d8u: goto label_1f09d8;
        case 0x1f09dcu: goto label_1f09dc;
        case 0x1f09e0u: goto label_1f09e0;
        case 0x1f09e4u: goto label_1f09e4;
        case 0x1f09e8u: goto label_1f09e8;
        case 0x1f09ecu: goto label_1f09ec;
        case 0x1f09f0u: goto label_1f09f0;
        case 0x1f09f4u: goto label_1f09f4;
        case 0x1f09f8u: goto label_1f09f8;
        case 0x1f09fcu: goto label_1f09fc;
        case 0x1f0a00u: goto label_1f0a00;
        case 0x1f0a04u: goto label_1f0a04;
        case 0x1f0a08u: goto label_1f0a08;
        case 0x1f0a0cu: goto label_1f0a0c;
        case 0x1f0a10u: goto label_1f0a10;
        case 0x1f0a14u: goto label_1f0a14;
        case 0x1f0a18u: goto label_1f0a18;
        case 0x1f0a1cu: goto label_1f0a1c;
        case 0x1f0a20u: goto label_1f0a20;
        case 0x1f0a24u: goto label_1f0a24;
        case 0x1f0a28u: goto label_1f0a28;
        case 0x1f0a2cu: goto label_1f0a2c;
        case 0x1f0a30u: goto label_1f0a30;
        case 0x1f0a34u: goto label_1f0a34;
        case 0x1f0a38u: goto label_1f0a38;
        case 0x1f0a3cu: goto label_1f0a3c;
        case 0x1f0a40u: goto label_1f0a40;
        case 0x1f0a44u: goto label_1f0a44;
        case 0x1f0a48u: goto label_1f0a48;
        case 0x1f0a4cu: goto label_1f0a4c;
        case 0x1f0a50u: goto label_1f0a50;
        case 0x1f0a54u: goto label_1f0a54;
        case 0x1f0a58u: goto label_1f0a58;
        case 0x1f0a5cu: goto label_1f0a5c;
        case 0x1f0a60u: goto label_1f0a60;
        case 0x1f0a64u: goto label_1f0a64;
        case 0x1f0a68u: goto label_1f0a68;
        case 0x1f0a6cu: goto label_1f0a6c;
        case 0x1f0a70u: goto label_1f0a70;
        case 0x1f0a74u: goto label_1f0a74;
        case 0x1f0a78u: goto label_1f0a78;
        case 0x1f0a7cu: goto label_1f0a7c;
        case 0x1f0a80u: goto label_1f0a80;
        case 0x1f0a84u: goto label_1f0a84;
        case 0x1f0a88u: goto label_1f0a88;
        case 0x1f0a8cu: goto label_1f0a8c;
        case 0x1f0a90u: goto label_1f0a90;
        case 0x1f0a94u: goto label_1f0a94;
        case 0x1f0a98u: goto label_1f0a98;
        case 0x1f0a9cu: goto label_1f0a9c;
        case 0x1f0aa0u: goto label_1f0aa0;
        case 0x1f0aa4u: goto label_1f0aa4;
        case 0x1f0aa8u: goto label_1f0aa8;
        case 0x1f0aacu: goto label_1f0aac;
        case 0x1f0ab0u: goto label_1f0ab0;
        case 0x1f0ab4u: goto label_1f0ab4;
        case 0x1f0ab8u: goto label_1f0ab8;
        case 0x1f0abcu: goto label_1f0abc;
        case 0x1f0ac0u: goto label_1f0ac0;
        case 0x1f0ac4u: goto label_1f0ac4;
        case 0x1f0ac8u: goto label_1f0ac8;
        case 0x1f0accu: goto label_1f0acc;
        case 0x1f0ad0u: goto label_1f0ad0;
        case 0x1f0ad4u: goto label_1f0ad4;
        case 0x1f0ad8u: goto label_1f0ad8;
        case 0x1f0adcu: goto label_1f0adc;
        case 0x1f0ae0u: goto label_1f0ae0;
        case 0x1f0ae4u: goto label_1f0ae4;
        case 0x1f0ae8u: goto label_1f0ae8;
        case 0x1f0aecu: goto label_1f0aec;
        case 0x1f0af0u: goto label_1f0af0;
        case 0x1f0af4u: goto label_1f0af4;
        case 0x1f0af8u: goto label_1f0af8;
        case 0x1f0afcu: goto label_1f0afc;
        case 0x1f0b00u: goto label_1f0b00;
        case 0x1f0b04u: goto label_1f0b04;
        case 0x1f0b08u: goto label_1f0b08;
        case 0x1f0b0cu: goto label_1f0b0c;
        case 0x1f0b10u: goto label_1f0b10;
        case 0x1f0b14u: goto label_1f0b14;
        case 0x1f0b18u: goto label_1f0b18;
        case 0x1f0b1cu: goto label_1f0b1c;
        case 0x1f0b20u: goto label_1f0b20;
        case 0x1f0b24u: goto label_1f0b24;
        case 0x1f0b28u: goto label_1f0b28;
        case 0x1f0b2cu: goto label_1f0b2c;
        case 0x1f0b30u: goto label_1f0b30;
        case 0x1f0b34u: goto label_1f0b34;
        case 0x1f0b38u: goto label_1f0b38;
        case 0x1f0b3cu: goto label_1f0b3c;
        case 0x1f0b40u: goto label_1f0b40;
        case 0x1f0b44u: goto label_1f0b44;
        case 0x1f0b48u: goto label_1f0b48;
        case 0x1f0b4cu: goto label_1f0b4c;
        case 0x1f0b50u: goto label_1f0b50;
        case 0x1f0b54u: goto label_1f0b54;
        case 0x1f0b58u: goto label_1f0b58;
        case 0x1f0b5cu: goto label_1f0b5c;
        case 0x1f0b60u: goto label_1f0b60;
        case 0x1f0b64u: goto label_1f0b64;
        case 0x1f0b68u: goto label_1f0b68;
        case 0x1f0b6cu: goto label_1f0b6c;
        case 0x1f0b70u: goto label_1f0b70;
        case 0x1f0b74u: goto label_1f0b74;
        case 0x1f0b78u: goto label_1f0b78;
        case 0x1f0b7cu: goto label_1f0b7c;
        case 0x1f0b80u: goto label_1f0b80;
        case 0x1f0b84u: goto label_1f0b84;
        case 0x1f0b88u: goto label_1f0b88;
        case 0x1f0b8cu: goto label_1f0b8c;
        case 0x1f0b90u: goto label_1f0b90;
        case 0x1f0b94u: goto label_1f0b94;
        case 0x1f0b98u: goto label_1f0b98;
        case 0x1f0b9cu: goto label_1f0b9c;
        case 0x1f0ba0u: goto label_1f0ba0;
        case 0x1f0ba4u: goto label_1f0ba4;
        case 0x1f0ba8u: goto label_1f0ba8;
        case 0x1f0bacu: goto label_1f0bac;
        case 0x1f0bb0u: goto label_1f0bb0;
        case 0x1f0bb4u: goto label_1f0bb4;
        case 0x1f0bb8u: goto label_1f0bb8;
        case 0x1f0bbcu: goto label_1f0bbc;
        case 0x1f0bc0u: goto label_1f0bc0;
        case 0x1f0bc4u: goto label_1f0bc4;
        case 0x1f0bc8u: goto label_1f0bc8;
        case 0x1f0bccu: goto label_1f0bcc;
        case 0x1f0bd0u: goto label_1f0bd0;
        case 0x1f0bd4u: goto label_1f0bd4;
        case 0x1f0bd8u: goto label_1f0bd8;
        case 0x1f0bdcu: goto label_1f0bdc;
        case 0x1f0be0u: goto label_1f0be0;
        case 0x1f0be4u: goto label_1f0be4;
        case 0x1f0be8u: goto label_1f0be8;
        case 0x1f0becu: goto label_1f0bec;
        case 0x1f0bf0u: goto label_1f0bf0;
        case 0x1f0bf4u: goto label_1f0bf4;
        case 0x1f0bf8u: goto label_1f0bf8;
        case 0x1f0bfcu: goto label_1f0bfc;
        case 0x1f0c00u: goto label_1f0c00;
        case 0x1f0c04u: goto label_1f0c04;
        case 0x1f0c08u: goto label_1f0c08;
        case 0x1f0c0cu: goto label_1f0c0c;
        case 0x1f0c10u: goto label_1f0c10;
        case 0x1f0c14u: goto label_1f0c14;
        case 0x1f0c18u: goto label_1f0c18;
        case 0x1f0c1cu: goto label_1f0c1c;
        case 0x1f0c20u: goto label_1f0c20;
        case 0x1f0c24u: goto label_1f0c24;
        case 0x1f0c28u: goto label_1f0c28;
        case 0x1f0c2cu: goto label_1f0c2c;
        case 0x1f0c30u: goto label_1f0c30;
        case 0x1f0c34u: goto label_1f0c34;
        case 0x1f0c38u: goto label_1f0c38;
        case 0x1f0c3cu: goto label_1f0c3c;
        case 0x1f0c40u: goto label_1f0c40;
        case 0x1f0c44u: goto label_1f0c44;
        case 0x1f0c48u: goto label_1f0c48;
        case 0x1f0c4cu: goto label_1f0c4c;
        case 0x1f0c50u: goto label_1f0c50;
        case 0x1f0c54u: goto label_1f0c54;
        case 0x1f0c58u: goto label_1f0c58;
        case 0x1f0c5cu: goto label_1f0c5c;
        case 0x1f0c60u: goto label_1f0c60;
        case 0x1f0c64u: goto label_1f0c64;
        case 0x1f0c68u: goto label_1f0c68;
        case 0x1f0c6cu: goto label_1f0c6c;
        case 0x1f0c70u: goto label_1f0c70;
        case 0x1f0c74u: goto label_1f0c74;
        case 0x1f0c78u: goto label_1f0c78;
        case 0x1f0c7cu: goto label_1f0c7c;
        case 0x1f0c80u: goto label_1f0c80;
        case 0x1f0c84u: goto label_1f0c84;
        case 0x1f0c88u: goto label_1f0c88;
        case 0x1f0c8cu: goto label_1f0c8c;
        case 0x1f0c90u: goto label_1f0c90;
        case 0x1f0c94u: goto label_1f0c94;
        case 0x1f0c98u: goto label_1f0c98;
        case 0x1f0c9cu: goto label_1f0c9c;
        case 0x1f0ca0u: goto label_1f0ca0;
        case 0x1f0ca4u: goto label_1f0ca4;
        case 0x1f0ca8u: goto label_1f0ca8;
        case 0x1f0cacu: goto label_1f0cac;
        case 0x1f0cb0u: goto label_1f0cb0;
        case 0x1f0cb4u: goto label_1f0cb4;
        case 0x1f0cb8u: goto label_1f0cb8;
        case 0x1f0cbcu: goto label_1f0cbc;
        case 0x1f0cc0u: goto label_1f0cc0;
        case 0x1f0cc4u: goto label_1f0cc4;
        case 0x1f0cc8u: goto label_1f0cc8;
        case 0x1f0cccu: goto label_1f0ccc;
        case 0x1f0cd0u: goto label_1f0cd0;
        case 0x1f0cd4u: goto label_1f0cd4;
        case 0x1f0cd8u: goto label_1f0cd8;
        case 0x1f0cdcu: goto label_1f0cdc;
        case 0x1f0ce0u: goto label_1f0ce0;
        case 0x1f0ce4u: goto label_1f0ce4;
        case 0x1f0ce8u: goto label_1f0ce8;
        case 0x1f0cecu: goto label_1f0cec;
        case 0x1f0cf0u: goto label_1f0cf0;
        case 0x1f0cf4u: goto label_1f0cf4;
        case 0x1f0cf8u: goto label_1f0cf8;
        case 0x1f0cfcu: goto label_1f0cfc;
        case 0x1f0d00u: goto label_1f0d00;
        case 0x1f0d04u: goto label_1f0d04;
        case 0x1f0d08u: goto label_1f0d08;
        case 0x1f0d0cu: goto label_1f0d0c;
        case 0x1f0d10u: goto label_1f0d10;
        case 0x1f0d14u: goto label_1f0d14;
        case 0x1f0d18u: goto label_1f0d18;
        case 0x1f0d1cu: goto label_1f0d1c;
        case 0x1f0d20u: goto label_1f0d20;
        case 0x1f0d24u: goto label_1f0d24;
        case 0x1f0d28u: goto label_1f0d28;
        case 0x1f0d2cu: goto label_1f0d2c;
        case 0x1f0d30u: goto label_1f0d30;
        case 0x1f0d34u: goto label_1f0d34;
        case 0x1f0d38u: goto label_1f0d38;
        case 0x1f0d3cu: goto label_1f0d3c;
        case 0x1f0d40u: goto label_1f0d40;
        case 0x1f0d44u: goto label_1f0d44;
        default: return;
    }

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
            { ctx->pc = 0x1f04a0; return; }
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
label_1f07b0:
    // 0x1f07b0: 0x14c0ffb4  bnez        $a2, . + 4 + (-0x4C << 2)
label_1f07b4:
    if (ctx->pc == 0x1F07B4u) {
        ctx->pc = 0x1F07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07B0u;
        // 0x1f07b4: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F07B8u;
        goto label_1f07b8;
    }
    ctx->pc = 0x1F07B0u;
    {
        const bool branch_taken_0x1f07b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07B0u;
        // 0x1f07b4: 0x248400b0  addiu       $a0, $a0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f07b0) {
            ctx->pc = 0x1F0684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0684;
        }
    }
    ctx->pc = 0x1F07B8u;
label_1f07b8:
    // 0x1f07b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f07b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f07bc:
    // 0x1f07bc: 0x3e00008  jr          $ra
label_1f07c0:
    if (ctx->pc == 0x1F07C0u) {
        ctx->pc = 0x1F07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07BCu;
        // 0x1f07c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F07C4u;
        goto label_1f07c4;
    }
    ctx->pc = 0x1F07BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07BCu;
        // 0x1f07c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F07BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F07C4u;
label_1f07c4:
    // 0x1f07c4: 0x0  nop
    ctx->pc = 0x1f07c4u;
    // NOP
label_1f07c8:
    // 0x1f07c8: 0x0  nop
    ctx->pc = 0x1f07c8u;
    // NOP
label_1f07cc:
    // 0x1f07cc: 0x0  nop
    ctx->pc = 0x1f07ccu;
    // NOP
label_1f07d0:
    // 0x1f07d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f07d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1f07d4:
    // 0x1f07d4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1f07d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1f07d8:
    // 0x1f07d8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1f07d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_1f07dc:
    // 0x1f07dc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1f07dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1f07e0:
    // 0x1f07e0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1f07e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f07e4:
    // 0x1f07e4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1f07e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1f07e8:
    // 0x1f07e8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1f07e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f07ec:
    // 0x1f07ec: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1f07ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1f07f0:
    // 0x1f07f0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1f07f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f07f4:
    // 0x1f07f4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1f07f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1f07f8:
    // 0x1f07f8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1f07f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f07fc:
    // 0x1f07fc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1f07fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1f0800:
    // 0x1f0800: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x1f0800u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1f0804:
    // 0x1f0804: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f0804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1f0808:
    // 0x1f0808: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x1f0808u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f080c:
    // 0x1f080c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f080cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1f0810:
    // 0x1f0810: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f0810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f0814:
    // 0x1f0814: 0xafa800cc  sw          $t0, 0xCC($sp)
    ctx->pc = 0x1f0814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 8));
label_1f0818:
    // 0x1f0818: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f0818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f081c:
    // 0x1f081c: 0xafa900c8  sw          $t1, 0xC8($sp)
    ctx->pc = 0x1f081cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 9));
label_1f0820:
    // 0x1f0820: 0x16800012  bnez        $s4, . + 4 + (0x12 << 2)
label_1f0824:
    if (ctx->pc == 0x1F0824u) {
        ctx->pc = 0x1F0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0820u;
        // 0x1f0824: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0828u;
        goto label_1f0828;
    }
    ctx->pc = 0x1F0820u;
    {
        const bool branch_taken_0x1f0820 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0820u;
        // 0x1f0824: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0820) {
            ctx->pc = 0x1F086Cu;
            goto label_1f086c;
        }
    }
    ctx->pc = 0x1F0828u;
label_1f0828:
    // 0x1f0828: 0xc07082c  jal         func_1C20B0
label_1f082c:
    if (ctx->pc == 0x1F082Cu) {
        ctx->pc = 0x1F0830u;
        goto label_1f0830;
    }
    ctx->pc = 0x1F0828u;
    SET_GPR_U32(ctx, 31, 0x1F0830u);
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x1F0830u;
label_1f0830:
    // 0x1f0830: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f0830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f0834:
    // 0x1f0834: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x1f0834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_1f0838:
    // 0x1f0838: 0x204001a  div         $zero, $s0, $a0
    ctx->pc = 0x1f0838u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1f083c:
    // 0x1f083c: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x1f083cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_1f0840:
    // 0x1f0840: 0x0  nop
    ctx->pc = 0x1f0840u;
    // NOP
label_1f0844:
    // 0x1f0844: 0x2810  mfhi        $a1
    ctx->pc = 0x1f0844u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1f0848:
    // 0x1f0848: 0x1027c2  srl         $a0, $s0, 31
    ctx->pc = 0x1f0848u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
label_1f084c:
    // 0x1f084c: 0x700018  mult        $zero, $v1, $s0
    ctx->pc = 0x1f084cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f0850:
    // 0x1f0850: 0x588c0  sll         $s1, $a1, 3
    ctx->pc = 0x1f0850u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1f0854:
    // 0x1f0854: 0x0  nop
    ctx->pc = 0x1f0854u;
    // NOP
label_1f0858:
    // 0x1f0858: 0x1810  mfhi        $v1
    ctx->pc = 0x1f0858u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1f085c:
    // 0x1f085c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f0860:
    // 0x1f0860: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f0860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1f0864:
    // 0x1f0864: 0x10000012  b           . + 4 + (0x12 << 2)
label_1f0868:
    if (ctx->pc == 0x1F0868u) {
        ctx->pc = 0x1F0868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0864u;
        // 0x1f0868: 0x247201c0  addiu       $s2, $v1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F086Cu;
        goto label_1f086c;
    }
    ctx->pc = 0x1F0864u;
    {
        const bool branch_taken_0x1f0864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0864u;
        // 0x1f0868: 0x247201c0  addiu       $s2, $v1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0864) {
            ctx->pc = 0x1F08B0u;
            goto label_1f08b0;
        }
    }
    ctx->pc = 0x1F086Cu;
label_1f086c:
    // 0x1f086c: 0x0  nop
    ctx->pc = 0x1f086cu;
    // NOP
label_1f0870:
    // 0x1f0870: 0xc07082c  jal         func_1C20B0
label_1f0874:
    if (ctx->pc == 0x1F0874u) {
        ctx->pc = 0x1F0874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0870u;
        // 0x1f0874: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0878u;
        goto label_1f0878;
    }
    ctx->pc = 0x1F0870u;
    SET_GPR_U32(ctx, 31, 0x1F0878u);
    ctx->pc = 0x1F0874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0870u;
    // 0x1f0874: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x1F0878u;
label_1f0878:
    // 0x1f0878: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f0878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f087c:
    // 0x1f087c: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x1f087cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_1f0880:
    // 0x1f0880: 0x204001a  div         $zero, $s0, $a0
    ctx->pc = 0x1f0880u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1f0884:
    // 0x1f0884: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x1f0884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_1f0888:
    // 0x1f0888: 0x0  nop
    ctx->pc = 0x1f0888u;
    // NOP
label_1f088c:
    // 0x1f088c: 0x2810  mfhi        $a1
    ctx->pc = 0x1f088cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1f0890:
    // 0x1f0890: 0x1027c2  srl         $a0, $s0, 31
    ctx->pc = 0x1f0890u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
label_1f0894:
    // 0x1f0894: 0x700018  mult        $zero, $v1, $s0
    ctx->pc = 0x1f0894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f0898:
    // 0x1f0898: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1f0898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1f089c:
    // 0x1f089c: 0x24710018  addiu       $s1, $v1, 0x18
    ctx->pc = 0x1f089cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_1f08a0:
    // 0x1f08a0: 0x1810  mfhi        $v1
    ctx->pc = 0x1f08a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1f08a4:
    // 0x1f08a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f08a8:
    // 0x1f08a8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f08a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1f08ac:
    // 0x1f08ac: 0x247201c0  addiu       $s2, $v1, 0x1C0
    ctx->pc = 0x1f08acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
label_1f08b0:
    // 0x1f08b0: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x1f08b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f08b4:
    // 0x1f08b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f08b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f08b8:
    // 0x1f08b8: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1f08b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1f08bc:
    // 0x1f08bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f08bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f08c0:
    // 0x1f08c0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1f08c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1f08c4:
    // 0x1f08c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f08c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f08c8:
    // 0x1f08c8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1f08c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1f08cc:
    // 0x1f08cc: 0x3229ffff  andi        $t1, $s1, 0xFFFF
    ctx->pc = 0x1f08ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1f08d0:
    // 0x1f08d0: 0x324affff  andi        $t2, $s2, 0xFFFF
    ctx->pc = 0x1f08d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_1f08d4:
    // 0x1f08d4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1f08d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1f08d8:
    // 0x1f08d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f08d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f08dc:
    // 0x1f08dc: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1f08dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f08e0:
    // 0x1f08e0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1f08e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f08e4:
    // 0x1f08e4: 0xc05de30  jal         func_1778C0
label_1f08e8:
    if (ctx->pc == 0x1F08E8u) {
        ctx->pc = 0x1F08E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F08E4u;
        // 0x1f08e8: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F08ECu;
        goto label_1f08ec;
    }
    ctx->pc = 0x1F08E4u;
    SET_GPR_U32(ctx, 31, 0x1F08ECu);
    ctx->pc = 0x1F08E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F08E4u;
    // 0x1f08e8: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1F08E4u, 0x1F08ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F08ECu;
label_1f08ec:
    // 0x1f08ec: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1f08ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_1f08f0:
    // 0x1f08f0: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1f08f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_1f08f4:
    // 0x1f08f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f08f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1f08f8:
    // 0x1f08f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f08f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1f08fc:
    // 0x1f08fc: 0x32bb8  dsll        $a1, $v1, 14
    ctx->pc = 0x1f08fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 14);
label_1f0900:
    // 0x1f0900: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f0900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f0904:
    // 0x1f0904: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x1f0904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_1f0908:
    // 0x1f0908: 0x3c020700  lui         $v0, 0x700
    ctx->pc = 0x1f0908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1792 << 16));
label_1f090c:
    // 0x1f090c: 0x3444007f  ori         $a0, $v0, 0x7F
    ctx->pc = 0x1f090cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)127);
label_1f0910:
    // 0x1f0910: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1f0910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1f0914:
    // 0x1f0914: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x1f0914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_1f0918:
    // 0x1f0918: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1f0918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1f091c:
    // 0x1f091c: 0xfe630040  sd          $v1, 0x40($s3)
    ctx->pc = 0x1f091cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 64), GPR_U64(ctx, 3));
label_1f0920:
    // 0x1f0920: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_1f0924:
    if (ctx->pc == 0x1F0924u) {
        ctx->pc = 0x1F0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0920u;
        // 0x1f0924: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0928u;
        goto label_1f0928;
    }
    ctx->pc = 0x1F0920u;
    {
        const bool branch_taken_0x1f0920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0920u;
        // 0x1f0924: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0920) {
            ctx->pc = 0x1F0820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0820;
        }
    }
    ctx->pc = 0x1F0928u;
label_1f0928:
    // 0x1f0928: 0x8fa700cc  lw          $a3, 0xCC($sp)
    ctx->pc = 0x1f0928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_1f092c:
    // 0x1f092c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f092cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f0930:
    // 0x1f0930: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x1f0930u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1f0934:
    // 0x1f0934: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1f0934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f0938:
    // 0x1f0938: 0xc07c25c  jal         func_1F0970
label_1f093c:
    if (ctx->pc == 0x1F093Cu) {
        ctx->pc = 0x1F093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0938u;
        // 0x1f093c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0940u;
        goto label_1f0940;
    }
    ctx->pc = 0x1F0938u;
    SET_GPR_U32(ctx, 31, 0x1F0940u);
    ctx->pc = 0x1F093Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0938u;
    // 0x1f093c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0970u;
    goto label_1f0970;
    ctx->pc = 0x1F0940u;
label_1f0940:
    // 0x1f0940: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1f0940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1f0944:
    // 0x1f0944: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1f0944u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f0948:
    // 0x1f0948: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1f0948u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f094c:
    // 0x1f094c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1f094cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f0950:
    // 0x1f0950: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1f0950u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f0954:
    // 0x1f0954: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1f0954u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f0958:
    // 0x1f0958: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1f0958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f095c:
    // 0x1f095c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f095cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f0960:
    // 0x1f0960: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f0960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0964:
    // 0x1f0964: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f0964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f0968:
    // 0x1f0968: 0x3e00008  jr          $ra
label_1f096c:
    if (ctx->pc == 0x1F096Cu) {
        ctx->pc = 0x1F096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0968u;
        // 0x1f096c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0970u;
        goto label_1f0970;
    }
    ctx->pc = 0x1F0968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0968u;
        // 0x1f096c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0970u;
label_1f0970:
    // 0x1f0970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f0974:
    // 0x1f0974: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f0974u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0978:
    // 0x1f0978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f0978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f097c:
    // 0x1f097c: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x1f097cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_1f0980:
    // 0x1f0980: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1f0980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0984:
    // 0x1f0984: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x1f0984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_1f0988:
    // 0x1f0988: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1f0988u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f098c:
    // 0x1f098c: 0x16a001a  div         $zero, $t3, $t2
    ctx->pc = 0x1f098cu;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1f0990:
    // 0x1f0990: 0x0  nop
    ctx->pc = 0x1f0990u;
    // NOP
label_1f0994:
    // 0x1f0994: 0x0  nop
    ctx->pc = 0x1f0994u;
    // NOP
label_1f0998:
    // 0x1f0998: 0x6010  mfhi        $t4
    ctx->pc = 0x1f0998u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_1f099c:
    // 0x1f099c: 0x15800003  bnez        $t4, . + 4 + (0x3 << 2)
label_1f09a0:
    if (ctx->pc == 0x1F09A0u) {
        ctx->pc = 0x1F09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F099Cu;
        // 0x1f09a0: 0x24affff8  addiu       $t7, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F09A4u;
        goto label_1f09a4;
    }
    ctx->pc = 0x1F099Cu;
    {
        const bool branch_taken_0x1f099c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F099Cu;
        // 0x1f09a0: 0x24affff8  addiu       $t7, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f099c) {
            ctx->pc = 0x1F09ACu;
            goto label_1f09ac;
        }
    }
    ctx->pc = 0x1F09A4u;
label_1f09a4:
    // 0x1f09a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1f09a8:
    if (ctx->pc == 0x1F09A8u) {
        ctx->pc = 0x1F09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09A4u;
        // 0x1f09a8: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F09ACu;
        goto label_1f09ac;
    }
    ctx->pc = 0x1F09A4u;
    {
        const bool branch_taken_0x1f09a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09A4u;
        // 0x1f09a8: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09a4) {
            ctx->pc = 0x1F09C8u;
            goto label_1f09c8;
        }
    }
    ctx->pc = 0x1F09ACu;
label_1f09ac:
    // 0x1f09ac: 0x0  nop
    ctx->pc = 0x1f09acu;
    // NOP
label_1f09b0:
    // 0x1f09b0: 0x15890003  bne         $t4, $t1, . + 4 + (0x3 << 2)
label_1f09b4:
    if (ctx->pc == 0x1F09B4u) {
        ctx->pc = 0x1F09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09B0u;
        // 0x1f09b4: 0xa0782d  daddu       $t7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F09B8u;
        goto label_1f09b8;
    }
    ctx->pc = 0x1F09B0u;
    {
        const bool branch_taken_0x1f09b0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 9));
        ctx->pc = 0x1F09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09B0u;
        // 0x1f09b4: 0xa0782d  daddu       $t7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09b0) {
            ctx->pc = 0x1F09C0u;
            goto label_1f09c0;
        }
    }
    ctx->pc = 0x1F09B8u;
label_1f09b8:
    // 0x1f09b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f09bc:
    if (ctx->pc == 0x1F09BCu) {
        ctx->pc = 0x1F09BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09B8u;
        // 0x1f09bc: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F09C0u;
        goto label_1f09c0;
    }
    ctx->pc = 0x1F09B8u;
    {
        const bool branch_taken_0x1f09b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09B8u;
        // 0x1f09bc: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09b8) {
            ctx->pc = 0x1F09C8u;
            goto label_1f09c8;
        }
    }
    ctx->pc = 0x1F09C0u;
label_1f09c0:
    // 0x1f09c0: 0xa77821  addu        $t7, $a1, $a3
    ctx->pc = 0x1f09c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1f09c4:
    // 0x1f09c4: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x1f09c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f09c8:
    // 0x1f09c8: 0xb6fc2  srl         $t5, $t3, 31
    ctx->pc = 0x1f09c8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
label_1f09cc:
    // 0x1f09cc: 0x6b0018  mult        $zero, $v1, $t3
    ctx->pc = 0x1f09ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f09d0:
    // 0x1f09d0: 0x0  nop
    ctx->pc = 0x1f09d0u;
    // NOP
label_1f09d4:
    // 0x1f09d4: 0x0  nop
    ctx->pc = 0x1f09d4u;
    // NOP
label_1f09d8:
    // 0x1f09d8: 0x6010  mfhi        $t4
    ctx->pc = 0x1f09d8u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_1f09dc:
    // 0x1f09dc: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x1f09dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_1f09e0:
    // 0x1f09e0: 0x15800003  bnez        $t4, . + 4 + (0x3 << 2)
label_1f09e4:
    if (ctx->pc == 0x1F09E4u) {
        ctx->pc = 0x1F09E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09E0u;
        // 0x1f09e4: 0x24d9fff8  addiu       $t9, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F09E8u;
        goto label_1f09e8;
    }
    ctx->pc = 0x1F09E0u;
    {
        const bool branch_taken_0x1f09e0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F09E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09E0u;
        // 0x1f09e4: 0x24d9fff8  addiu       $t9, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09e0) {
            ctx->pc = 0x1F09F0u;
            goto label_1f09f0;
        }
    }
    ctx->pc = 0x1F09E8u;
label_1f09e8:
    // 0x1f09e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f09ec:
    if (ctx->pc == 0x1F09ECu) {
        ctx->pc = 0x1F09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09E8u;
        // 0x1f09ec: 0x240c0008  addiu       $t4, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F09F0u;
        goto label_1f09f0;
    }
    ctx->pc = 0x1F09E8u;
    {
        const bool branch_taken_0x1f09e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09E8u;
        // 0x1f09ec: 0x240c0008  addiu       $t4, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09e8) {
            ctx->pc = 0x1F0A08u;
            goto label_1f0a08;
        }
    }
    ctx->pc = 0x1F09F0u;
label_1f09f0:
    // 0x1f09f0: 0x15890003  bne         $t4, $t1, . + 4 + (0x3 << 2)
label_1f09f4:
    if (ctx->pc == 0x1F09F4u) {
        ctx->pc = 0x1F09F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09F0u;
        // 0x1f09f4: 0xc0c82d  daddu       $t9, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F09F8u;
        goto label_1f09f8;
    }
    ctx->pc = 0x1F09F0u;
    {
        const bool branch_taken_0x1f09f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 9));
        ctx->pc = 0x1F09F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09F0u;
        // 0x1f09f4: 0xc0c82d  daddu       $t9, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09f0) {
            ctx->pc = 0x1F0A00u;
            goto label_1f0a00;
        }
    }
    ctx->pc = 0x1F09F8u;
label_1f09f8:
    // 0x1f09f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f09fc:
    if (ctx->pc == 0x1F09FCu) {
        ctx->pc = 0x1F09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09F8u;
        // 0x1f09fc: 0x100602d  daddu       $t4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0A00u;
        goto label_1f0a00;
    }
    ctx->pc = 0x1F09F8u;
    {
        const bool branch_taken_0x1f09f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09F8u;
        // 0x1f09fc: 0x100602d  daddu       $t4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09f8) {
            ctx->pc = 0x1F0A08u;
            goto label_1f0a08;
        }
    }
    ctx->pc = 0x1F0A00u;
label_1f0a00:
    // 0x1f0a00: 0xc8c821  addu        $t9, $a2, $t0
    ctx->pc = 0x1f0a00u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1f0a04:
    // 0x1f0a04: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x1f0a04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f0a08:
    // 0x1f0a08: 0xf6900  sll         $t5, $t7, 4
    ctx->pc = 0x1f0a08u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_1f0a0c:
    // 0x1f0a0c: 0x25ae6c00  addiu       $t6, $t5, 0x6C00
    ctx->pc = 0x1f0a0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 27648));
label_1f0a10:
    // 0x1f0a10: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1f0a10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1f0a14:
    // 0x1f0a14: 0x1f06821  addu        $t5, $t7, $s0
    ctx->pc = 0x1f0a14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_1f0a18:
    // 0x1f0a18: 0xa48e0080  sh          $t6, 0x80($a0)
    ctx->pc = 0x1f0a18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 14));
label_1f0a1c:
    // 0x1f0a1c: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x1f0a1cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_1f0a20:
    // 0x1f0a20: 0x1978c0  sll         $t7, $t9, 3
    ctx->pc = 0x1f0a20u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
label_1f0a24:
    // 0x1f0a24: 0x25b86c00  addiu       $t8, $t5, 0x6C00
    ctx->pc = 0x1f0a24u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 13), 27648));
label_1f0a28:
    // 0x1f0a28: 0x25ef7900  addiu       $t7, $t7, 0x7900
    ctx->pc = 0x1f0a28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 30976));
label_1f0a2c:
    // 0x1f0a2c: 0x32c6821  addu        $t5, $t9, $t4
    ctx->pc = 0x1f0a2cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
label_1f0a30:
    // 0x1f0a30: 0xa48f0082  sh          $t7, 0x82($a0)
    ctx->pc = 0x1f0a30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 15));
label_1f0a34:
    // 0x1f0a34: 0xd68c0  sll         $t5, $t5, 3
    ctx->pc = 0x1f0a34u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_1f0a38:
    // 0x1f0a38: 0xa4980090  sh          $t8, 0x90($a0)
    ctx->pc = 0x1f0a38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 24));
label_1f0a3c:
    // 0x1f0a3c: 0x25af7900  addiu       $t7, $t5, 0x7900
    ctx->pc = 0x1f0a3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 30976));
label_1f0a40:
    // 0x1f0a40: 0x107100  sll         $t6, $s0, 4
    ctx->pc = 0x1f0a40u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1f0a44:
    // 0x1f0a44: 0xa48f0092  sh          $t7, 0x92($a0)
    ctx->pc = 0x1f0a44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 146), (uint16_t)GPR_U32(ctx, 15));
label_1f0a48:
    // 0x1f0a48: 0xc6900  sll         $t5, $t4, 4
    ctx->pc = 0x1f0a48u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_1f0a4c:
    // 0x1f0a4c: 0x848f0078  lh          $t7, 0x78($a0)
    ctx->pc = 0x1f0a4cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
label_1f0a50:
    // 0x1f0a50: 0x296c0009  slti        $t4, $t3, 0x9
    ctx->pc = 0x1f0a50u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)9) ? 1 : 0);
label_1f0a54:
    // 0x1f0a54: 0x1ee7021  addu        $t6, $t7, $t6
    ctx->pc = 0x1f0a54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
label_1f0a58:
    // 0x1f0a58: 0xa48e0088  sh          $t6, 0x88($a0)
    ctx->pc = 0x1f0a58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 136), (uint16_t)GPR_U32(ctx, 14));
label_1f0a5c:
    // 0x1f0a5c: 0x848e007a  lh          $t6, 0x7A($a0)
    ctx->pc = 0x1f0a5cu;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 122)));
label_1f0a60:
    // 0x1f0a60: 0x1cd6821  addu        $t5, $t6, $t5
    ctx->pc = 0x1f0a60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_1f0a64:
    // 0x1f0a64: 0xa48d008a  sh          $t5, 0x8A($a0)
    ctx->pc = 0x1f0a64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 138), (uint16_t)GPR_U32(ctx, 13));
label_1f0a68:
    // 0x1f0a68: 0x1580ffc8  bnez        $t4, . + 4 + (-0x38 << 2)
label_1f0a6c:
    if (ctx->pc == 0x1F0A6Cu) {
        ctx->pc = 0x1F0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A68u;
        // 0x1f0a6c: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0A70u;
        goto label_1f0a70;
    }
    ctx->pc = 0x1F0A68u;
    {
        const bool branch_taken_0x1f0a68 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A68u;
        // 0x1f0a6c: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a68) {
            ctx->pc = 0x1F098Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f098c;
        }
    }
    ctx->pc = 0x1F0A70u;
label_1f0a70:
    // 0x1f0a70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f0a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0a74:
    // 0x1f0a74: 0x3e00008  jr          $ra
label_1f0a78:
    if (ctx->pc == 0x1F0A78u) {
        ctx->pc = 0x1F0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A74u;
        // 0x1f0a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0A7Cu;
        goto label_1f0a7c;
    }
    ctx->pc = 0x1F0A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A74u;
        // 0x1f0a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0A7Cu;
label_1f0a7c:
    // 0x1f0a7c: 0x0  nop
    ctx->pc = 0x1f0a7cu;
    // NOP
label_1f0a80:
    // 0x1f0a80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f0a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1f0a84:
    // 0x1f0a84: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f0a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1f0a88:
    // 0x1f0a88: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x1f0a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1f0a8c:
    // 0x1f0a8c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f0a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f0a90:
    // 0x1f0a90: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f0a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f0a94:
    // 0x1f0a94: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1f0a94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f0a98:
    // 0x1f0a98: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f0a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f0a9c:
    // 0x1f0a9c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f0a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f0aa0:
    // 0x1f0aa0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f0aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f0aa4:
    // 0x1f0aa4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f0aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f0aa8:
    // 0x1f0aa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f0aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f0aac:
    // 0x1f0aac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f0aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f0ab0:
    // 0x1f0ab0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f0ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f0ab4:
    // 0x1f0ab4: 0xdf828f80  ld          $v0, -0x7080($gp)
    ctx->pc = 0x1f0ab4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938496)));
label_1f0ab8:
    // 0x1f0ab8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1f0ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1f0abc:
    // 0x1f0abc: 0x8f828fc8  lw          $v0, -0x7038($gp)
    ctx->pc = 0x1f0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938568)));
label_1f0ac0:
    // 0x1f0ac0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1f0ac4:
    if (ctx->pc == 0x1F0AC4u) {
        ctx->pc = 0x1F0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AC0u;
        // 0x1f0ac4: 0x24170009  addiu       $s7, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0AC8u;
        goto label_1f0ac8;
    }
    ctx->pc = 0x1F0AC0u;
    {
        const bool branch_taken_0x1f0ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AC0u;
        // 0x1f0ac4: 0x24170009  addiu       $s7, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ac0) {
            ctx->pc = 0x1F0AE4u;
            goto label_1f0ae4;
        }
    }
    ctx->pc = 0x1F0AC8u;
label_1f0ac8:
    // 0x1f0ac8: 0x8f828fcc  lw          $v0, -0x7034($gp)
    ctx->pc = 0x1f0ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938572)));
label_1f0acc:
    // 0x1f0acc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f0ad0:
    if (ctx->pc == 0x1F0AD0u) {
        ctx->pc = 0x1F0AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0ACCu;
        // 0x1f0ad0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0AD4u;
        goto label_1f0ad4;
    }
    ctx->pc = 0x1F0ACCu;
    {
        const bool branch_taken_0x1f0acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0ACCu;
        // 0x1f0ad0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0acc) {
            ctx->pc = 0x1F0ADCu;
            goto label_1f0adc;
        }
    }
    ctx->pc = 0x1F0AD4u;
label_1f0ad4:
    // 0x1f0ad4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f0ad8:
    if (ctx->pc == 0x1F0AD8u) {
        ctx->pc = 0x1F0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AD4u;
        // 0x1f0ad8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0ADCu;
        goto label_1f0adc;
    }
    ctx->pc = 0x1F0AD4u;
    {
        const bool branch_taken_0x1f0ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AD4u;
        // 0x1f0ad8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ad4) {
            ctx->pc = 0x1F0AE8u;
            goto label_1f0ae8;
        }
    }
    ctx->pc = 0x1F0ADCu;
label_1f0adc:
    // 0x1f0adc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f0ae0:
    if (ctx->pc == 0x1F0AE0u) {
        ctx->pc = 0x1F0AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0ADCu;
        // 0x1f0ae0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0AE4u;
        goto label_1f0ae4;
    }
    ctx->pc = 0x1F0ADCu;
    {
        const bool branch_taken_0x1f0adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0ADCu;
        // 0x1f0ae0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0adc) {
            ctx->pc = 0x1F0AECu;
            goto label_1f0aec;
        }
    }
    ctx->pc = 0x1F0AE4u;
label_1f0ae4:
    // 0x1f0ae4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f0ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0ae8:
    // 0x1f0ae8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f0ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0aec:
    // 0x1f0aec: 0xc07c64c  jal         func_1F1930
label_1f0af0:
    if (ctx->pc == 0x1F0AF0u) {
        ctx->pc = 0x1F0AF4u;
        goto label_1f0af4;
    }
    ctx->pc = 0x1F0AECu;
    SET_GPR_U32(ctx, 31, 0x1F0AF4u);
    ctx->pc = 0x1F1930u;
    { ctx->pc = 0x1f1930; return; }
    ctx->pc = 0x1F0AF4u;
label_1f0af4:
    // 0x1f0af4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f0af8:
    // 0x1f0af8: 0x1202005b  beq         $s0, $v0, . + 4 + (0x5B << 2)
label_1f0afc:
    if (ctx->pc == 0x1F0AFCu) {
        ctx->pc = 0x1F0AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AF8u;
        // 0x1f0afc: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0B00u;
        goto label_1f0b00;
    }
    ctx->pc = 0x1F0AF8u;
    {
        const bool branch_taken_0x1f0af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AF8u;
        // 0x1f0afc: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0af8) {
            ctx->pc = 0x1F0C68u;
            goto label_1f0c68;
        }
    }
    ctx->pc = 0x1F0B00u;
label_1f0b00:
    // 0x1f0b00: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x1f0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1f0b04:
    // 0x1f0b04: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1f0b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f0b08:
    // 0x1f0b08: 0x27828fa8  addiu       $v0, $gp, -0x7058
    ctx->pc = 0x1f0b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938536));
label_1f0b0c:
    // 0x1f0b0c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1f0b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f0b10:
    // 0x1f0b10: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1f0b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f0b14:
    // 0x1f0b14: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1f0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1f0b18:
    // 0x1f0b18: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x1f0b18u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f0b1c:
    // 0x1f0b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b20:
    // 0x1f0b20: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f0b24:
    // 0x1f0b24: 0x2442bfa0  addiu       $v0, $v0, -0x4060
    ctx->pc = 0x1f0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950816));
label_1f0b28:
    // 0x1f0b28: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f0b2c:
    // 0x1f0b2c: 0xaf908fb0  sw          $s0, -0x7050($gp)
    ctx->pc = 0x1f0b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938544), GPR_U32(ctx, 16));
label_1f0b30:
    // 0x1f0b30: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f0b34:
    // 0x1f0b34: 0x59880  sll         $s3, $a1, 2
    ctx->pc = 0x1f0b34u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f0b38:
    // 0x1f0b38: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1f0b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1f0b3c:
    // 0x1f0b3c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1f0b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_1f0b40:
    // 0x1f0b40: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1f0b44:
    // 0x1f0b44: 0xc07c9b8  jal         func_1F26E0
label_1f0b48:
    if (ctx->pc == 0x1F0B48u) {
        ctx->pc = 0x1F0B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B44u;
        // 0x1f0b48: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0B4Cu;
        goto label_1f0b4c;
    }
    ctx->pc = 0x1F0B44u;
    SET_GPR_U32(ctx, 31, 0x1F0B4Cu);
    ctx->pc = 0x1F0B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0B44u;
    // 0x1f0b48: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F26E0u;
    { ctx->pc = 0x1f26e0; return; }
    ctx->pc = 0x1F0B4Cu;
label_1f0b4c:
    // 0x1f0b4c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f0b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f0b50:
    // 0x1f0b50: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1f0b50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f0b54:
    // 0x1f0b54: 0x24427f40  addiu       $v0, $v0, 0x7F40
    ctx->pc = 0x1f0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32576));
label_1f0b58:
    // 0x1f0b58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b5c:
    // 0x1f0b5c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1f0b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f0b60:
    // 0x1f0b60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b64:
    // 0x1f0b64: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x1f0b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1f0b68:
    // 0x1f0b68: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1f0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1f0b6c:
    // 0x1f0b6c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1f0b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1f0b70:
    // 0x1f0b70: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1f0b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f0b74:
    // 0x1f0b74: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x1f0b74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f0b78:
    // 0x1f0b78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f0b7c:
    // 0x1f0b7c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f0b80:
    // 0x1f0b80: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1f0b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1f0b84:
    // 0x1f0b84: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1f0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1f0b88:
    // 0x1f0b88: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1f0b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1f0b8c:
    // 0x1f0b8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f0b90:
    // 0x1f0b90: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f0b94:
    // 0x1f0b94: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x1f0b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_1f0b98:
    // 0x1f0b98: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1f0b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1f0b9c:
    // 0x1f0b9c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x1f0b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_1f0ba0:
    // 0x1f0ba0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f0ba4:
    // 0x1f0ba4: 0x90440221  lbu         $a0, 0x221($v0)
    ctx->pc = 0x1f0ba4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 545)));
label_1f0ba8:
    // 0x1f0ba8: 0x0  nop
    ctx->pc = 0x1f0ba8u;
    // NOP
label_1f0bac:
    // 0x1f0bac: 0x0  nop
    ctx->pc = 0x1f0bacu;
    // NOP
label_1f0bb0:
    // 0x1f0bb0: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x1f0bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f0bb4:
    // 0x1f0bb4: 0x90e2367c  lbu         $v0, 0x367C($a3)
    ctx->pc = 0x1f0bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13948)));
label_1f0bb8:
    // 0x1f0bb8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1f0bbc:
    if (ctx->pc == 0x1F0BBCu) {
        ctx->pc = 0x1F0BC0u;
        goto label_1f0bc0;
    }
    ctx->pc = 0x1F0BB8u;
    {
        const bool branch_taken_0x1f0bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0bb8) {
            ctx->pc = 0x1F0BE0u;
            goto label_1f0be0;
        }
    }
    ctx->pc = 0x1F0BC0u;
label_1f0bc0:
    // 0x1f0bc0: 0x8ce2366c  lw          $v0, 0x366C($a3)
    ctx->pc = 0x1f0bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13932)));
label_1f0bc4:
    // 0x1f0bc4: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
label_1f0bc8:
    if (ctx->pc == 0x1F0BC8u) {
        ctx->pc = 0x1F0BCCu;
        goto label_1f0bcc;
    }
    ctx->pc = 0x1F0BC4u;
    {
        const bool branch_taken_0x1f0bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f0bc4) {
            ctx->pc = 0x1F0BE0u;
            goto label_1f0be0;
        }
    }
    ctx->pc = 0x1F0BCCu;
label_1f0bcc:
    // 0x1f0bcc: 0x8ce23674  lw          $v0, 0x3674($a3)
    ctx->pc = 0x1f0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13940)));
label_1f0bd0:
    // 0x1f0bd0: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_1f0bd4:
    if (ctx->pc == 0x1F0BD4u) {
        ctx->pc = 0x1F0BD8u;
        goto label_1f0bd8;
    }
    ctx->pc = 0x1F0BD0u;
    {
        const bool branch_taken_0x1f0bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1f0bd0) {
            ctx->pc = 0x1F0BE0u;
            goto label_1f0be0;
        }
    }
    ctx->pc = 0x1F0BD8u;
label_1f0bd8:
    // 0x1f0bd8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f0bdc:
    if (ctx->pc == 0x1F0BDCu) {
        ctx->pc = 0x1F0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BD8u;
        // 0x1f0bdc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0BE0u;
        goto label_1f0be0;
    }
    ctx->pc = 0x1F0BD8u;
    {
        const bool branch_taken_0x1f0bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BD8u;
        // 0x1f0bdc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0bd8) {
            ctx->pc = 0x1F0BF0u;
            goto label_1f0bf0;
        }
    }
    ctx->pc = 0x1F0BE0u;
label_1f0be0:
    // 0x1f0be0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f0be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f0be4:
    // 0x1f0be4: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1f0be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f0be8:
    // 0x1f0be8: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1f0bec:
    if (ctx->pc == 0x1F0BECu) {
        ctx->pc = 0x1F0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BE8u;
        // 0x1f0bec: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0BF0u;
        goto label_1f0bf0;
    }
    ctx->pc = 0x1F0BE8u;
    {
        const bool branch_taken_0x1f0be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BE8u;
        // 0x1f0bec: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0be8) {
            ctx->pc = 0x1F0BACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0bac;
        }
    }
    ctx->pc = 0x1F0BF0u;
label_1f0bf0:
    // 0x1f0bf0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f0bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f0bf4:
    // 0x1f0bf4: 0x12250009  beq         $s1, $a1, . + 4 + (0x9 << 2)
label_1f0bf8:
    if (ctx->pc == 0x1F0BF8u) {
        ctx->pc = 0x1F0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BF4u;
        // 0x1f0bf8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0BFCu;
        goto label_1f0bfc;
    }
    ctx->pc = 0x1F0BF4u;
    {
        const bool branch_taken_0x1f0bf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BF4u;
        // 0x1f0bf8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0bf4) {
            ctx->pc = 0x1F0C1Cu;
            goto label_1f0c1c;
        }
    }
    ctx->pc = 0x1F0BFCu;
label_1f0bfc:
    // 0x1f0bfc: 0xc085c34  jal         func_2170D0
label_1f0c00:
    if (ctx->pc == 0x1F0C00u) {
        ctx->pc = 0x1F0C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BFCu;
        // 0x1f0c00: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C04u;
        goto label_1f0c04;
    }
    ctx->pc = 0x1F0BFCu;
    SET_GPR_U32(ctx, 31, 0x1F0C04u);
    ctx->pc = 0x1F0C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0BFCu;
    // 0x1f0c00: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2170D0u;
    { ctx->pc = 0x2170d0; return; }
    ctx->pc = 0x1F0C04u;
label_1f0c04:
    // 0x1f0c04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f0c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f0c08:
    // 0x1f0c08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f0c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0c0c:
    // 0x1f0c0c: 0xc085cc4  jal         func_217310
label_1f0c10:
    if (ctx->pc == 0x1F0C10u) {
        ctx->pc = 0x1F0C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C0Cu;
        // 0x1f0c10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C14u;
        goto label_1f0c14;
    }
    ctx->pc = 0x1F0C0Cu;
    SET_GPR_U32(ctx, 31, 0x1F0C14u);
    ctx->pc = 0x1F0C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C0Cu;
    // 0x1f0c10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F0C14u;
label_1f0c14:
    // 0x1f0c14: 0x10000015  b           . + 4 + (0x15 << 2)
label_1f0c18:
    if (ctx->pc == 0x1F0C18u) {
        ctx->pc = 0x1F0C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C14u;
        // 0x1f0c18: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C1Cu;
        goto label_1f0c1c;
    }
    ctx->pc = 0x1F0C14u;
    {
        const bool branch_taken_0x1f0c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C14u;
        // 0x1f0c18: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c14) {
            ctx->pc = 0x1F0C6Cu;
            goto label_1f0c6c;
        }
    }
    ctx->pc = 0x1F0C1Cu;
label_1f0c1c:
    // 0x1f0c1c: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_1f0c20:
    if (ctx->pc == 0x1F0C20u) {
        ctx->pc = 0x1F0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C1Cu;
        // 0x1f0c20: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C24u;
        goto label_1f0c24;
    }
    ctx->pc = 0x1F0C1Cu;
    {
        const bool branch_taken_0x1f0c1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C1Cu;
        // 0x1f0c20: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c1c) {
            ctx->pc = 0x1F0C4Cu;
            goto label_1f0c4c;
        }
    }
    ctx->pc = 0x1F0C24u;
label_1f0c24:
    // 0x1f0c24: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1f0c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f0c28:
    // 0x1f0c28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0c2c:
    // 0x1f0c2c: 0xc085c34  jal         func_2170D0
label_1f0c30:
    if (ctx->pc == 0x1F0C30u) {
        ctx->pc = 0x1F0C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C2Cu;
        // 0x1f0c30: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C34u;
        goto label_1f0c34;
    }
    ctx->pc = 0x1F0C2Cu;
    SET_GPR_U32(ctx, 31, 0x1F0C34u);
    ctx->pc = 0x1F0C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C2Cu;
    // 0x1f0c30: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2170D0u;
    { ctx->pc = 0x2170d0; return; }
    ctx->pc = 0x1F0C34u;
label_1f0c34:
    // 0x1f0c34: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f0c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f0c38:
    // 0x1f0c38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f0c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0c3c:
    // 0x1f0c3c: 0xc085cc4  jal         func_217310
label_1f0c40:
    if (ctx->pc == 0x1F0C40u) {
        ctx->pc = 0x1F0C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C3Cu;
        // 0x1f0c40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C44u;
        goto label_1f0c44;
    }
    ctx->pc = 0x1F0C3Cu;
    SET_GPR_U32(ctx, 31, 0x1F0C44u);
    ctx->pc = 0x1F0C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C3Cu;
    // 0x1f0c40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F0C44u;
label_1f0c44:
    // 0x1f0c44: 0x10000008  b           . + 4 + (0x8 << 2)
label_1f0c48:
    if (ctx->pc == 0x1F0C48u) {
        ctx->pc = 0x1F0C4Cu;
        goto label_1f0c4c;
    }
    ctx->pc = 0x1F0C44u;
    {
        const bool branch_taken_0x1f0c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0c44) {
            ctx->pc = 0x1F0C68u;
            goto label_1f0c68;
        }
    }
    ctx->pc = 0x1F0C4Cu;
label_1f0c4c:
    // 0x1f0c4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f0c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0c50:
    // 0x1f0c50: 0xc085c34  jal         func_2170D0
label_1f0c54:
    if (ctx->pc == 0x1F0C54u) {
        ctx->pc = 0x1F0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C50u;
        // 0x1f0c54: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C58u;
        goto label_1f0c58;
    }
    ctx->pc = 0x1F0C50u;
    SET_GPR_U32(ctx, 31, 0x1F0C58u);
    ctx->pc = 0x1F0C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C50u;
    // 0x1f0c54: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2170D0u;
    { ctx->pc = 0x2170d0; return; }
    ctx->pc = 0x1F0C58u;
label_1f0c58:
    // 0x1f0c58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f0c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0c5c:
    // 0x1f0c5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f0c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f0c60:
    // 0x1f0c60: 0xc085cc4  jal         func_217310
label_1f0c64:
    if (ctx->pc == 0x1F0C64u) {
        ctx->pc = 0x1F0C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C60u;
        // 0x1f0c64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C68u;
        goto label_1f0c68;
    }
    ctx->pc = 0x1F0C60u;
    SET_GPR_U32(ctx, 31, 0x1F0C68u);
    ctx->pc = 0x1F0C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C60u;
    // 0x1f0c64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F0C68u;
label_1f0c68:
    // 0x1f0c68: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1f0c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_1f0c6c:
    // 0x1f0c6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f0c70:
    if (ctx->pc == 0x1F0C70u) {
        ctx->pc = 0x1F0C74u;
        goto label_1f0c74;
    }
    ctx->pc = 0x1F0C6Cu;
    {
        const bool branch_taken_0x1f0c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0c6c) {
            ctx->pc = 0x1F0C7Cu;
            goto label_1f0c7c;
        }
    }
    ctx->pc = 0x1F0C74u;
label_1f0c74:
    // 0x1f0c74: 0x10000290  b           . + 4 + (0x290 << 2)
label_1f0c78:
    if (ctx->pc == 0x1F0C78u) {
        ctx->pc = 0x1F0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C74u;
        // 0x1f0c78: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C7Cu;
        goto label_1f0c7c;
    }
    ctx->pc = 0x1F0C74u;
    {
        const bool branch_taken_0x1f0c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C74u;
        // 0x1f0c78: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c74) {
            ctx->pc = 0x1F16B8u;
            { ctx->pc = 0x1f16b8; return; }
        }
    }
    ctx->pc = 0x1F0C7Cu;
label_1f0c7c:
    // 0x1f0c7c: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x1f0c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_1f0c80:
    // 0x1f0c80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f0c84:
    if (ctx->pc == 0x1F0C84u) {
        ctx->pc = 0x1F0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C80u;
        // 0x1f0c84: 0x1e2100  sll         $a0, $fp, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C88u;
        goto label_1f0c88;
    }
    ctx->pc = 0x1F0C80u;
    {
        const bool branch_taken_0x1f0c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C80u;
        // 0x1f0c84: 0x1e2100  sll         $a0, $fp, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c80) {
            ctx->pc = 0x1F0C90u;
            goto label_1f0c90;
        }
    }
    ctx->pc = 0x1F0C88u;
label_1f0c88:
    // 0x1f0c88: 0x1000028b  b           . + 4 + (0x28B << 2)
label_1f0c8c:
    if (ctx->pc == 0x1F0C8Cu) {
        ctx->pc = 0x1F0C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C88u;
        // 0x1f0c8c: 0x24170002  addiu       $s7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0C90u;
        goto label_1f0c90;
    }
    ctx->pc = 0x1F0C88u;
    {
        const bool branch_taken_0x1f0c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C88u;
        // 0x1f0c8c: 0x24170002  addiu       $s7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c88) {
            ctx->pc = 0x1F16B8u;
            { ctx->pc = 0x1f16b8; return; }
        }
    }
    ctx->pc = 0x1F0C90u;
label_1f0c90:
    // 0x1f0c90: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1f0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1f0c94:
    // 0x1f0c94: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x1f0c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_1f0c98:
    // 0x1f0c98: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1f0c98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1f0c9c:
    // 0x1f0c9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f0c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f0ca0:
    // 0x1f0ca0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f0ca4:
    if (ctx->pc == 0x1F0CA4u) {
        ctx->pc = 0x1F0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CA0u;
        // 0x1f0ca4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0CA8u;
        goto label_1f0ca8;
    }
    ctx->pc = 0x1F0CA0u;
    {
        const bool branch_taken_0x1f0ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CA0u;
        // 0x1f0ca4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ca0) {
            ctx->pc = 0x1F0CBCu;
            goto label_1f0cbc;
        }
    }
    ctx->pc = 0x1F0CA8u;
label_1f0ca8:
    // 0x1f0ca8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f0ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f0cac:
    // 0x1f0cac: 0xc05b420  jal         func_16D080
label_1f0cb0:
    if (ctx->pc == 0x1F0CB0u) {
        ctx->pc = 0x1F0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CACu;
        // 0x1f0cb0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0CB4u;
        goto label_1f0cb4;
    }
    ctx->pc = 0x1F0CACu;
    SET_GPR_U32(ctx, 31, 0x1F0CB4u);
    ctx->pc = 0x1F0CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0CACu;
    // 0x1f0cb0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1F0CACu, 0x1F0CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0CB4u;
label_1f0cb4:
    // 0x1f0cb4: 0x10000280  b           . + 4 + (0x280 << 2)
label_1f0cb8:
    if (ctx->pc == 0x1F0CB8u) {
        ctx->pc = 0x1F0CBCu;
        goto label_1f0cbc;
    }
    ctx->pc = 0x1F0CB4u;
    {
        const bool branch_taken_0x1f0cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0cb4) {
            ctx->pc = 0x1F16B8u;
            { ctx->pc = 0x1f16b8; return; }
        }
    }
    ctx->pc = 0x1F0CBCu;
label_1f0cbc:
    // 0x1f0cbc: 0x1202027a  beq         $s0, $v0, . + 4 + (0x27A << 2)
label_1f0cc0:
    if (ctx->pc == 0x1F0CC0u) {
        ctx->pc = 0x1F0CC4u;
        goto label_1f0cc4;
    }
    ctx->pc = 0x1F0CBCu;
    {
        const bool branch_taken_0x1f0cbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0cbc) {
            ctx->pc = 0x1F16A8u;
            { ctx->pc = 0x1f16a8; return; }
        }
    }
    ctx->pc = 0x1F0CC4u;
label_1f0cc4:
    // 0x1f0cc4: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x1f0cc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_1f0cc8:
    // 0x1f0cc8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f0cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f0ccc:
    // 0x1f0ccc: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1f0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1f0cd0:
    // 0x1f0cd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f0cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f0cd4:
    // 0x1f0cd4: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
label_1f0cd8:
    if (ctx->pc == 0x1F0CD8u) {
        ctx->pc = 0x1F0CDCu;
        goto label_1f0cdc;
    }
    ctx->pc = 0x1F0CD4u;
    {
        const bool branch_taken_0x1f0cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0cd4) {
            ctx->pc = 0x1F0F58u;
            { ctx->pc = 0x1f0f58; return; }
        }
    }
    ctx->pc = 0x1F0CDCu;
label_1f0cdc:
    // 0x1f0cdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f0cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0ce0:
    // 0x1f0ce0: 0xc05b420  jal         func_16D080
label_1f0ce4:
    if (ctx->pc == 0x1F0CE4u) {
        ctx->pc = 0x1F0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CE0u;
        // 0x1f0ce4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0CE8u;
        goto label_1f0ce8;
    }
    ctx->pc = 0x1F0CE0u;
    SET_GPR_U32(ctx, 31, 0x1F0CE8u);
    ctx->pc = 0x1F0CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0CE0u;
    // 0x1f0ce4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1F0CE0u, 0x1F0CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0CE8u;
label_1f0ce8:
    // 0x1f0ce8: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x1f0ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1f0cec:
    // 0x1f0cec: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x1f0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1f0cf0:
    // 0x1f0cf0: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x1f0cf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f0cf4:
    // 0x1f0cf4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1f0cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
label_1f0cf8:
    // 0x1f0cf8: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x1f0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1f0cfc:
    // 0x1f0cfc: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x1f0cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f0d00:
    // 0x1f0d00: 0x2b0c0  sll         $s6, $v0, 3
    ctx->pc = 0x1f0d00u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f0d04:
    // 0x1f0d04: 0x24e71300  addiu       $a3, $a3, 0x1300
    ctx->pc = 0x1f0d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4864));
label_1f0d08:
    // 0x1f0d08: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f0d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f0d0c:
    // 0x1f0d0c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f0d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f0d10:
    // 0x1f0d10: 0x24427f40  addiu       $v0, $v0, 0x7F40
    ctx->pc = 0x1f0d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32576));
label_1f0d14:
    // 0x1f0d14: 0x56a021  addu        $s4, $v0, $s6
    ctx->pc = 0x1f0d14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1f0d18:
    // 0x1f0d18: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1f0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1f0d1c:
    // 0x1f0d1c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1f0d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f0d20:
    // 0x1f0d20: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x1f0d20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1f0d24:
    // 0x1f0d24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f0d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f0d28:
    // 0x1f0d28: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x1f0d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1f0d2c:
    // 0x1f0d2c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1f0d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f0d30:
    // 0x1f0d30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f0d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0d34:
    // 0x1f0d34: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1f0d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1f0d38:
    // 0x1f0d38: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f0d38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0d3c:
    // 0x1f0d3c: 0xe4a821  addu        $s5, $a3, $a0
    ctx->pc = 0x1f0d3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1f0d40:
    // 0x1f0d40: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1f0d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0d44:
    // 0x1f0d44: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1f0d44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    ctx->pc = 0x1f0d48u;
    return;
}

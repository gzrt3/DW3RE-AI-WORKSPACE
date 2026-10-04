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


void FUN_0014eba0_part758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c05b0u: goto label_2c05b0;
        case 0x2c05b4u: goto label_2c05b4;
        case 0x2c05b8u: goto label_2c05b8;
        case 0x2c05bcu: goto label_2c05bc;
        case 0x2c05c0u: goto label_2c05c0;
        case 0x2c05c4u: goto label_2c05c4;
        case 0x2c05c8u: goto label_2c05c8;
        case 0x2c05ccu: goto label_2c05cc;
        case 0x2c05d0u: goto label_2c05d0;
        case 0x2c05d4u: goto label_2c05d4;
        case 0x2c05d8u: goto label_2c05d8;
        case 0x2c05dcu: goto label_2c05dc;
        case 0x2c05e0u: goto label_2c05e0;
        case 0x2c05e4u: goto label_2c05e4;
        case 0x2c05e8u: goto label_2c05e8;
        case 0x2c05ecu: goto label_2c05ec;
        case 0x2c05f0u: goto label_2c05f0;
        case 0x2c05f4u: goto label_2c05f4;
        case 0x2c05f8u: goto label_2c05f8;
        case 0x2c05fcu: goto label_2c05fc;
        case 0x2c0600u: goto label_2c0600;
        case 0x2c0604u: goto label_2c0604;
        case 0x2c0608u: goto label_2c0608;
        case 0x2c060cu: goto label_2c060c;
        case 0x2c0610u: goto label_2c0610;
        case 0x2c0614u: goto label_2c0614;
        case 0x2c0618u: goto label_2c0618;
        case 0x2c061cu: goto label_2c061c;
        case 0x2c0620u: goto label_2c0620;
        case 0x2c0624u: goto label_2c0624;
        case 0x2c0628u: goto label_2c0628;
        case 0x2c062cu: goto label_2c062c;
        case 0x2c0630u: goto label_2c0630;
        case 0x2c0634u: goto label_2c0634;
        case 0x2c0638u: goto label_2c0638;
        case 0x2c063cu: goto label_2c063c;
        case 0x2c0640u: goto label_2c0640;
        case 0x2c0644u: goto label_2c0644;
        case 0x2c0648u: goto label_2c0648;
        case 0x2c064cu: goto label_2c064c;
        case 0x2c0650u: goto label_2c0650;
        case 0x2c0654u: goto label_2c0654;
        case 0x2c0658u: goto label_2c0658;
        case 0x2c065cu: goto label_2c065c;
        case 0x2c0660u: goto label_2c0660;
        case 0x2c0664u: goto label_2c0664;
        case 0x2c0668u: goto label_2c0668;
        case 0x2c066cu: goto label_2c066c;
        case 0x2c0670u: goto label_2c0670;
        case 0x2c0674u: goto label_2c0674;
        case 0x2c0678u: goto label_2c0678;
        case 0x2c067cu: goto label_2c067c;
        case 0x2c0680u: goto label_2c0680;
        case 0x2c0684u: goto label_2c0684;
        case 0x2c0688u: goto label_2c0688;
        case 0x2c068cu: goto label_2c068c;
        case 0x2c0690u: goto label_2c0690;
        case 0x2c0694u: goto label_2c0694;
        case 0x2c0698u: goto label_2c0698;
        case 0x2c069cu: goto label_2c069c;
        case 0x2c06a0u: goto label_2c06a0;
        case 0x2c06a4u: goto label_2c06a4;
        case 0x2c06a8u: goto label_2c06a8;
        case 0x2c06acu: goto label_2c06ac;
        case 0x2c06b0u: goto label_2c06b0;
        case 0x2c06b4u: goto label_2c06b4;
        case 0x2c06b8u: goto label_2c06b8;
        case 0x2c06bcu: goto label_2c06bc;
        case 0x2c06c0u: goto label_2c06c0;
        case 0x2c06c4u: goto label_2c06c4;
        case 0x2c06c8u: goto label_2c06c8;
        case 0x2c06ccu: goto label_2c06cc;
        case 0x2c06d0u: goto label_2c06d0;
        case 0x2c06d4u: goto label_2c06d4;
        case 0x2c06d8u: goto label_2c06d8;
        case 0x2c06dcu: goto label_2c06dc;
        case 0x2c06e0u: goto label_2c06e0;
        case 0x2c06e4u: goto label_2c06e4;
        case 0x2c06e8u: goto label_2c06e8;
        case 0x2c06ecu: goto label_2c06ec;
        case 0x2c06f0u: goto label_2c06f0;
        case 0x2c06f4u: goto label_2c06f4;
        case 0x2c06f8u: goto label_2c06f8;
        case 0x2c06fcu: goto label_2c06fc;
        case 0x2c0700u: goto label_2c0700;
        case 0x2c0704u: goto label_2c0704;
        case 0x2c0708u: goto label_2c0708;
        case 0x2c070cu: goto label_2c070c;
        case 0x2c0710u: goto label_2c0710;
        case 0x2c0714u: goto label_2c0714;
        case 0x2c0718u: goto label_2c0718;
        case 0x2c071cu: goto label_2c071c;
        case 0x2c0720u: goto label_2c0720;
        case 0x2c0724u: goto label_2c0724;
        case 0x2c0728u: goto label_2c0728;
        case 0x2c072cu: goto label_2c072c;
        case 0x2c0730u: goto label_2c0730;
        case 0x2c0734u: goto label_2c0734;
        case 0x2c0738u: goto label_2c0738;
        case 0x2c073cu: goto label_2c073c;
        case 0x2c0740u: goto label_2c0740;
        case 0x2c0744u: goto label_2c0744;
        case 0x2c0748u: goto label_2c0748;
        case 0x2c074cu: goto label_2c074c;
        case 0x2c0750u: goto label_2c0750;
        case 0x2c0754u: goto label_2c0754;
        case 0x2c0758u: goto label_2c0758;
        case 0x2c075cu: goto label_2c075c;
        case 0x2c0760u: goto label_2c0760;
        case 0x2c0764u: goto label_2c0764;
        case 0x2c0768u: goto label_2c0768;
        case 0x2c076cu: goto label_2c076c;
        case 0x2c0770u: goto label_2c0770;
        case 0x2c0774u: goto label_2c0774;
        case 0x2c0778u: goto label_2c0778;
        case 0x2c077cu: goto label_2c077c;
        case 0x2c0780u: goto label_2c0780;
        case 0x2c0784u: goto label_2c0784;
        case 0x2c0788u: goto label_2c0788;
        case 0x2c078cu: goto label_2c078c;
        case 0x2c0790u: goto label_2c0790;
        case 0x2c0794u: goto label_2c0794;
        case 0x2c0798u: goto label_2c0798;
        case 0x2c079cu: goto label_2c079c;
        case 0x2c07a0u: goto label_2c07a0;
        case 0x2c07a4u: goto label_2c07a4;
        case 0x2c07a8u: goto label_2c07a8;
        case 0x2c07acu: goto label_2c07ac;
        case 0x2c07b0u: goto label_2c07b0;
        case 0x2c07b4u: goto label_2c07b4;
        case 0x2c07b8u: goto label_2c07b8;
        case 0x2c07bcu: goto label_2c07bc;
        case 0x2c07c0u: goto label_2c07c0;
        case 0x2c07c4u: goto label_2c07c4;
        case 0x2c07c8u: goto label_2c07c8;
        case 0x2c07ccu: goto label_2c07cc;
        case 0x2c07d0u: goto label_2c07d0;
        case 0x2c07d4u: goto label_2c07d4;
        case 0x2c07d8u: goto label_2c07d8;
        case 0x2c07dcu: goto label_2c07dc;
        case 0x2c07e0u: goto label_2c07e0;
        case 0x2c07e4u: goto label_2c07e4;
        case 0x2c07e8u: goto label_2c07e8;
        case 0x2c07ecu: goto label_2c07ec;
        case 0x2c07f0u: goto label_2c07f0;
        case 0x2c07f4u: goto label_2c07f4;
        case 0x2c07f8u: goto label_2c07f8;
        case 0x2c07fcu: goto label_2c07fc;
        case 0x2c0800u: goto label_2c0800;
        case 0x2c0804u: goto label_2c0804;
        case 0x2c0808u: goto label_2c0808;
        case 0x2c080cu: goto label_2c080c;
        case 0x2c0810u: goto label_2c0810;
        case 0x2c0814u: goto label_2c0814;
        case 0x2c0818u: goto label_2c0818;
        case 0x2c081cu: goto label_2c081c;
        case 0x2c0820u: goto label_2c0820;
        case 0x2c0824u: goto label_2c0824;
        case 0x2c0828u: goto label_2c0828;
        case 0x2c082cu: goto label_2c082c;
        case 0x2c0830u: goto label_2c0830;
        case 0x2c0834u: goto label_2c0834;
        case 0x2c0838u: goto label_2c0838;
        case 0x2c083cu: goto label_2c083c;
        case 0x2c0840u: goto label_2c0840;
        case 0x2c0844u: goto label_2c0844;
        case 0x2c0848u: goto label_2c0848;
        case 0x2c084cu: goto label_2c084c;
        case 0x2c0850u: goto label_2c0850;
        case 0x2c0854u: goto label_2c0854;
        case 0x2c0858u: goto label_2c0858;
        case 0x2c085cu: goto label_2c085c;
        case 0x2c0860u: goto label_2c0860;
        case 0x2c0864u: goto label_2c0864;
        case 0x2c0868u: goto label_2c0868;
        case 0x2c086cu: goto label_2c086c;
        case 0x2c0870u: goto label_2c0870;
        case 0x2c0874u: goto label_2c0874;
        case 0x2c0878u: goto label_2c0878;
        case 0x2c087cu: goto label_2c087c;
        case 0x2c0880u: goto label_2c0880;
        case 0x2c0884u: goto label_2c0884;
        case 0x2c0888u: goto label_2c0888;
        case 0x2c088cu: goto label_2c088c;
        case 0x2c0890u: goto label_2c0890;
        case 0x2c0894u: goto label_2c0894;
        case 0x2c0898u: goto label_2c0898;
        case 0x2c089cu: goto label_2c089c;
        case 0x2c08a0u: goto label_2c08a0;
        case 0x2c08a4u: goto label_2c08a4;
        case 0x2c08a8u: goto label_2c08a8;
        case 0x2c08acu: goto label_2c08ac;
        case 0x2c08b0u: goto label_2c08b0;
        case 0x2c08b4u: goto label_2c08b4;
        case 0x2c08b8u: goto label_2c08b8;
        case 0x2c08bcu: goto label_2c08bc;
        case 0x2c08c0u: goto label_2c08c0;
        case 0x2c08c4u: goto label_2c08c4;
        case 0x2c08c8u: goto label_2c08c8;
        case 0x2c08ccu: goto label_2c08cc;
        case 0x2c08d0u: goto label_2c08d0;
        case 0x2c08d4u: goto label_2c08d4;
        case 0x2c08d8u: goto label_2c08d8;
        case 0x2c08dcu: goto label_2c08dc;
        case 0x2c08e0u: goto label_2c08e0;
        case 0x2c08e4u: goto label_2c08e4;
        case 0x2c08e8u: goto label_2c08e8;
        case 0x2c08ecu: goto label_2c08ec;
        case 0x2c08f0u: goto label_2c08f0;
        case 0x2c08f4u: goto label_2c08f4;
        case 0x2c08f8u: goto label_2c08f8;
        case 0x2c08fcu: goto label_2c08fc;
        case 0x2c0900u: goto label_2c0900;
        case 0x2c0904u: goto label_2c0904;
        case 0x2c0908u: goto label_2c0908;
        case 0x2c090cu: goto label_2c090c;
        case 0x2c0910u: goto label_2c0910;
        case 0x2c0914u: goto label_2c0914;
        case 0x2c0918u: goto label_2c0918;
        case 0x2c091cu: goto label_2c091c;
        case 0x2c0920u: goto label_2c0920;
        case 0x2c0924u: goto label_2c0924;
        case 0x2c0928u: goto label_2c0928;
        case 0x2c092cu: goto label_2c092c;
        case 0x2c0930u: goto label_2c0930;
        case 0x2c0934u: goto label_2c0934;
        case 0x2c0938u: goto label_2c0938;
        case 0x2c093cu: goto label_2c093c;
        case 0x2c0940u: goto label_2c0940;
        case 0x2c0944u: goto label_2c0944;
        case 0x2c0948u: goto label_2c0948;
        case 0x2c094cu: goto label_2c094c;
        case 0x2c0950u: goto label_2c0950;
        case 0x2c0954u: goto label_2c0954;
        case 0x2c0958u: goto label_2c0958;
        case 0x2c095cu: goto label_2c095c;
        case 0x2c0960u: goto label_2c0960;
        case 0x2c0964u: goto label_2c0964;
        case 0x2c0968u: goto label_2c0968;
        case 0x2c096cu: goto label_2c096c;
        case 0x2c0970u: goto label_2c0970;
        case 0x2c0974u: goto label_2c0974;
        case 0x2c0978u: goto label_2c0978;
        case 0x2c097cu: goto label_2c097c;
        case 0x2c0980u: goto label_2c0980;
        case 0x2c0984u: goto label_2c0984;
        case 0x2c0988u: goto label_2c0988;
        case 0x2c098cu: goto label_2c098c;
        case 0x2c0990u: goto label_2c0990;
        case 0x2c0994u: goto label_2c0994;
        case 0x2c0998u: goto label_2c0998;
        case 0x2c099cu: goto label_2c099c;
        case 0x2c09a0u: goto label_2c09a0;
        case 0x2c09a4u: goto label_2c09a4;
        case 0x2c09a8u: goto label_2c09a8;
        case 0x2c09acu: goto label_2c09ac;
        case 0x2c09b0u: goto label_2c09b0;
        case 0x2c09b4u: goto label_2c09b4;
        case 0x2c09b8u: goto label_2c09b8;
        case 0x2c09bcu: goto label_2c09bc;
        case 0x2c09c0u: goto label_2c09c0;
        case 0x2c09c4u: goto label_2c09c4;
        case 0x2c09c8u: goto label_2c09c8;
        case 0x2c09ccu: goto label_2c09cc;
        case 0x2c09d0u: goto label_2c09d0;
        case 0x2c09d4u: goto label_2c09d4;
        case 0x2c09d8u: goto label_2c09d8;
        case 0x2c09dcu: goto label_2c09dc;
        case 0x2c09e0u: goto label_2c09e0;
        case 0x2c09e4u: goto label_2c09e4;
        case 0x2c09e8u: goto label_2c09e8;
        case 0x2c09ecu: goto label_2c09ec;
        case 0x2c09f0u: goto label_2c09f0;
        case 0x2c09f4u: goto label_2c09f4;
        case 0x2c09f8u: goto label_2c09f8;
        case 0x2c09fcu: goto label_2c09fc;
        case 0x2c0a00u: goto label_2c0a00;
        case 0x2c0a04u: goto label_2c0a04;
        case 0x2c0a08u: goto label_2c0a08;
        case 0x2c0a0cu: goto label_2c0a0c;
        case 0x2c0a10u: goto label_2c0a10;
        case 0x2c0a14u: goto label_2c0a14;
        case 0x2c0a18u: goto label_2c0a18;
        case 0x2c0a1cu: goto label_2c0a1c;
        case 0x2c0a20u: goto label_2c0a20;
        case 0x2c0a24u: goto label_2c0a24;
        case 0x2c0a28u: goto label_2c0a28;
        case 0x2c0a2cu: goto label_2c0a2c;
        case 0x2c0a30u: goto label_2c0a30;
        case 0x2c0a34u: goto label_2c0a34;
        case 0x2c0a38u: goto label_2c0a38;
        case 0x2c0a3cu: goto label_2c0a3c;
        case 0x2c0a40u: goto label_2c0a40;
        case 0x2c0a44u: goto label_2c0a44;
        case 0x2c0a48u: goto label_2c0a48;
        case 0x2c0a4cu: goto label_2c0a4c;
        case 0x2c0a50u: goto label_2c0a50;
        case 0x2c0a54u: goto label_2c0a54;
        case 0x2c0a58u: goto label_2c0a58;
        case 0x2c0a5cu: goto label_2c0a5c;
        case 0x2c0a60u: goto label_2c0a60;
        case 0x2c0a64u: goto label_2c0a64;
        case 0x2c0a68u: goto label_2c0a68;
        case 0x2c0a6cu: goto label_2c0a6c;
        case 0x2c0a70u: goto label_2c0a70;
        case 0x2c0a74u: goto label_2c0a74;
        case 0x2c0a78u: goto label_2c0a78;
        case 0x2c0a7cu: goto label_2c0a7c;
        case 0x2c0a80u: goto label_2c0a80;
        case 0x2c0a84u: goto label_2c0a84;
        case 0x2c0a88u: goto label_2c0a88;
        case 0x2c0a8cu: goto label_2c0a8c;
        case 0x2c0a90u: goto label_2c0a90;
        case 0x2c0a94u: goto label_2c0a94;
        case 0x2c0a98u: goto label_2c0a98;
        case 0x2c0a9cu: goto label_2c0a9c;
        case 0x2c0aa0u: goto label_2c0aa0;
        case 0x2c0aa4u: goto label_2c0aa4;
        case 0x2c0aa8u: goto label_2c0aa8;
        case 0x2c0aacu: goto label_2c0aac;
        case 0x2c0ab0u: goto label_2c0ab0;
        case 0x2c0ab4u: goto label_2c0ab4;
        case 0x2c0ab8u: goto label_2c0ab8;
        case 0x2c0abcu: goto label_2c0abc;
        case 0x2c0ac0u: goto label_2c0ac0;
        case 0x2c0ac4u: goto label_2c0ac4;
        case 0x2c0ac8u: goto label_2c0ac8;
        case 0x2c0accu: goto label_2c0acc;
        case 0x2c0ad0u: goto label_2c0ad0;
        case 0x2c0ad4u: goto label_2c0ad4;
        case 0x2c0ad8u: goto label_2c0ad8;
        case 0x2c0adcu: goto label_2c0adc;
        case 0x2c0ae0u: goto label_2c0ae0;
        case 0x2c0ae4u: goto label_2c0ae4;
        case 0x2c0ae8u: goto label_2c0ae8;
        case 0x2c0aecu: goto label_2c0aec;
        case 0x2c0af0u: goto label_2c0af0;
        case 0x2c0af4u: goto label_2c0af4;
        case 0x2c0af8u: goto label_2c0af8;
        case 0x2c0afcu: goto label_2c0afc;
        case 0x2c0b00u: goto label_2c0b00;
        case 0x2c0b04u: goto label_2c0b04;
        case 0x2c0b08u: goto label_2c0b08;
        case 0x2c0b0cu: goto label_2c0b0c;
        case 0x2c0b10u: goto label_2c0b10;
        case 0x2c0b14u: goto label_2c0b14;
        case 0x2c0b18u: goto label_2c0b18;
        case 0x2c0b1cu: goto label_2c0b1c;
        case 0x2c0b20u: goto label_2c0b20;
        case 0x2c0b24u: goto label_2c0b24;
        case 0x2c0b28u: goto label_2c0b28;
        case 0x2c0b2cu: goto label_2c0b2c;
        case 0x2c0b30u: goto label_2c0b30;
        case 0x2c0b34u: goto label_2c0b34;
        case 0x2c0b38u: goto label_2c0b38;
        case 0x2c0b3cu: goto label_2c0b3c;
        case 0x2c0b40u: goto label_2c0b40;
        case 0x2c0b44u: goto label_2c0b44;
        case 0x2c0b48u: goto label_2c0b48;
        case 0x2c0b4cu: goto label_2c0b4c;
        case 0x2c0b50u: goto label_2c0b50;
        case 0x2c0b54u: goto label_2c0b54;
        case 0x2c0b58u: goto label_2c0b58;
        case 0x2c0b5cu: goto label_2c0b5c;
        case 0x2c0b60u: goto label_2c0b60;
        case 0x2c0b64u: goto label_2c0b64;
        case 0x2c0b68u: goto label_2c0b68;
        case 0x2c0b6cu: goto label_2c0b6c;
        case 0x2c0b70u: goto label_2c0b70;
        case 0x2c0b74u: goto label_2c0b74;
        case 0x2c0b78u: goto label_2c0b78;
        case 0x2c0b7cu: goto label_2c0b7c;
        case 0x2c0b80u: goto label_2c0b80;
        case 0x2c0b84u: goto label_2c0b84;
        case 0x2c0b88u: goto label_2c0b88;
        case 0x2c0b8cu: goto label_2c0b8c;
        case 0x2c0b90u: goto label_2c0b90;
        case 0x2c0b94u: goto label_2c0b94;
        case 0x2c0b98u: goto label_2c0b98;
        case 0x2c0b9cu: goto label_2c0b9c;
        case 0x2c0ba0u: goto label_2c0ba0;
        case 0x2c0ba4u: goto label_2c0ba4;
        case 0x2c0ba8u: goto label_2c0ba8;
        case 0x2c0bacu: goto label_2c0bac;
        case 0x2c0bb0u: goto label_2c0bb0;
        case 0x2c0bb4u: goto label_2c0bb4;
        case 0x2c0bb8u: goto label_2c0bb8;
        case 0x2c0bbcu: goto label_2c0bbc;
        case 0x2c0bc0u: goto label_2c0bc0;
        case 0x2c0bc4u: goto label_2c0bc4;
        case 0x2c0bc8u: goto label_2c0bc8;
        case 0x2c0bccu: goto label_2c0bcc;
        case 0x2c0bd0u: goto label_2c0bd0;
        case 0x2c0bd4u: goto label_2c0bd4;
        case 0x2c0bd8u: goto label_2c0bd8;
        case 0x2c0bdcu: goto label_2c0bdc;
        case 0x2c0be0u: goto label_2c0be0;
        case 0x2c0be4u: goto label_2c0be4;
        case 0x2c0be8u: goto label_2c0be8;
        case 0x2c0becu: goto label_2c0bec;
        case 0x2c0bf0u: goto label_2c0bf0;
        case 0x2c0bf4u: goto label_2c0bf4;
        case 0x2c0bf8u: goto label_2c0bf8;
        case 0x2c0bfcu: goto label_2c0bfc;
        case 0x2c0c00u: goto label_2c0c00;
        case 0x2c0c04u: goto label_2c0c04;
        case 0x2c0c08u: goto label_2c0c08;
        case 0x2c0c0cu: goto label_2c0c0c;
        case 0x2c0c10u: goto label_2c0c10;
        case 0x2c0c14u: goto label_2c0c14;
        case 0x2c0c18u: goto label_2c0c18;
        case 0x2c0c1cu: goto label_2c0c1c;
        case 0x2c0c20u: goto label_2c0c20;
        case 0x2c0c24u: goto label_2c0c24;
        case 0x2c0c28u: goto label_2c0c28;
        case 0x2c0c2cu: goto label_2c0c2c;
        case 0x2c0c30u: goto label_2c0c30;
        case 0x2c0c34u: goto label_2c0c34;
        case 0x2c0c38u: goto label_2c0c38;
        case 0x2c0c3cu: goto label_2c0c3c;
        case 0x2c0c40u: goto label_2c0c40;
        case 0x2c0c44u: goto label_2c0c44;
        case 0x2c0c48u: goto label_2c0c48;
        case 0x2c0c4cu: goto label_2c0c4c;
        case 0x2c0c50u: goto label_2c0c50;
        case 0x2c0c54u: goto label_2c0c54;
        case 0x2c0c58u: goto label_2c0c58;
        case 0x2c0c5cu: goto label_2c0c5c;
        case 0x2c0c60u: goto label_2c0c60;
        case 0x2c0c64u: goto label_2c0c64;
        case 0x2c0c68u: goto label_2c0c68;
        case 0x2c0c6cu: goto label_2c0c6c;
        case 0x2c0c70u: goto label_2c0c70;
        case 0x2c0c74u: goto label_2c0c74;
        case 0x2c0c78u: goto label_2c0c78;
        case 0x2c0c7cu: goto label_2c0c7c;
        case 0x2c0c80u: goto label_2c0c80;
        case 0x2c0c84u: goto label_2c0c84;
        case 0x2c0c88u: goto label_2c0c88;
        case 0x2c0c8cu: goto label_2c0c8c;
        case 0x2c0c90u: goto label_2c0c90;
        case 0x2c0c94u: goto label_2c0c94;
        case 0x2c0c98u: goto label_2c0c98;
        case 0x2c0c9cu: goto label_2c0c9c;
        case 0x2c0ca0u: goto label_2c0ca0;
        case 0x2c0ca4u: goto label_2c0ca4;
        case 0x2c0ca8u: goto label_2c0ca8;
        case 0x2c0cacu: goto label_2c0cac;
        case 0x2c0cb0u: goto label_2c0cb0;
        case 0x2c0cb4u: goto label_2c0cb4;
        case 0x2c0cb8u: goto label_2c0cb8;
        case 0x2c0cbcu: goto label_2c0cbc;
        case 0x2c0cc0u: goto label_2c0cc0;
        case 0x2c0cc4u: goto label_2c0cc4;
        case 0x2c0cc8u: goto label_2c0cc8;
        case 0x2c0cccu: goto label_2c0ccc;
        case 0x2c0cd0u: goto label_2c0cd0;
        case 0x2c0cd4u: goto label_2c0cd4;
        case 0x2c0cd8u: goto label_2c0cd8;
        case 0x2c0cdcu: goto label_2c0cdc;
        case 0x2c0ce0u: goto label_2c0ce0;
        case 0x2c0ce4u: goto label_2c0ce4;
        case 0x2c0ce8u: goto label_2c0ce8;
        case 0x2c0cecu: goto label_2c0cec;
        case 0x2c0cf0u: goto label_2c0cf0;
        case 0x2c0cf4u: goto label_2c0cf4;
        case 0x2c0cf8u: goto label_2c0cf8;
        case 0x2c0cfcu: goto label_2c0cfc;
        case 0x2c0d00u: goto label_2c0d00;
        case 0x2c0d04u: goto label_2c0d04;
        case 0x2c0d08u: goto label_2c0d08;
        case 0x2c0d0cu: goto label_2c0d0c;
        case 0x2c0d10u: goto label_2c0d10;
        case 0x2c0d14u: goto label_2c0d14;
        case 0x2c0d18u: goto label_2c0d18;
        case 0x2c0d1cu: goto label_2c0d1c;
        case 0x2c0d20u: goto label_2c0d20;
        case 0x2c0d24u: goto label_2c0d24;
        case 0x2c0d28u: goto label_2c0d28;
        case 0x2c0d2cu: goto label_2c0d2c;
        case 0x2c0d30u: goto label_2c0d30;
        case 0x2c0d34u: goto label_2c0d34;
        case 0x2c0d38u: goto label_2c0d38;
        case 0x2c0d3cu: goto label_2c0d3c;
        case 0x2c0d40u: goto label_2c0d40;
        case 0x2c0d44u: goto label_2c0d44;
        case 0x2c0d48u: goto label_2c0d48;
        case 0x2c0d4cu: goto label_2c0d4c;
        case 0x2c0d50u: goto label_2c0d50;
        case 0x2c0d54u: goto label_2c0d54;
        case 0x2c0d58u: goto label_2c0d58;
        case 0x2c0d5cu: goto label_2c0d5c;
        case 0x2c0d60u: goto label_2c0d60;
        case 0x2c0d64u: goto label_2c0d64;
        case 0x2c0d68u: goto label_2c0d68;
        case 0x2c0d6cu: goto label_2c0d6c;
        case 0x2c0d70u: goto label_2c0d70;
        case 0x2c0d74u: goto label_2c0d74;
        case 0x2c0d78u: goto label_2c0d78;
        case 0x2c0d7cu: goto label_2c0d7c;
        default: return;
    }

label_2c05b0:
    // 0x2c05b0: 0x802573fe  lb          $a1, 0x73FE($at)
    ctx->pc = 0x2c05b0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2c05b4:
    // 0x2c05b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c05b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c05b8:
    // 0x2c05b8: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2c05bc:
    if (ctx->pc == 0x2C05BCu) {
        ctx->pc = 0x2C05BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C05B8u;
        // 0x2c05bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C05C0u;
        goto label_2c05c0;
    }
    ctx->pc = 0x2C05B8u;
    {
        const bool branch_taken_0x2c05b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C05BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C05B8u;
        // 0x2c05bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c05b8) {
            ctx->pc = 0x2DC5C0u;
            return;
        }
    }
    ctx->pc = 0x2C05C0u;
label_2c05c0:
    // 0x2c05c0: 0x81f5737c  lb          $s5, 0x737C($t7)
    ctx->pc = 0x2c05c0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2c05c4:
    // 0x2c05c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c05c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c05c8:
    // 0x2c05c8: 0x81f3737c  lb          $s3, 0x737C($t7)
    ctx->pc = 0x2c05c8u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2c05cc:
    // 0x2c05cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c05ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c05d0:
    // 0x2c05d0: 0x81f2737c  lb          $s2, 0x737C($t7)
    ctx->pc = 0x2c05d0u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2c05d4:
    // 0x2c05d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c05d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c05d8:
    // 0x2c05d8: 0x81f1737c  lb          $s1, 0x737C($t7)
    ctx->pc = 0x2c05d8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2c05dc:
    // 0x2c05dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c05dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c05e0:
    // 0x2c05e0: 0x81f0737c  lb          $s0, 0x737C($t7)
    ctx->pc = 0x2c05e0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2c05e4:
    // 0x2c05e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c05e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c05e8:
    // 0x2c05e8: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c05e8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C05E8 raw=0x48000800");
 /* MITIGATED */
label_2c05ec:
    // 0x2c05ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c05ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c05f0:
    // 0x2c05f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c05f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c05f4:
    // 0x2c05f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c05f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c05f8:
    // 0x2c05f8: 0x1f53ff8  .word       0x01F53FF8                   # dsll        $a3, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c05f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) << 31);
label_2c05fc:
    // 0x2c05fc: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c05fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c0600:
    // 0x2c0600: 0x1f33ffb  .word       0x01F33FFB                   # dsra        $a3, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0600u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 19) >> 31);
label_2c0604:
    // 0x2c0604: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0604u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0608:
    // 0x2c0608: 0x1f43ffe  .word       0x01F43FFE                   # dsrl32      $a3, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0608u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) >> (32 + 31));
label_2c060c:
    // 0x2c060c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c060cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0610:
    // 0x2c0610: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0610u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0614:
    // 0x2c0614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0618:
    // 0x2c0618: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2c0618u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2c061c:
    // 0x2c061c: 0x1f5a93c  .word       0x01F5A93C                   # dsll32      $s5, $s5, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c061cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 4));
label_2c0620:
    // 0x2c0620: 0x10080066  beq         $zero, $t0, . + 4 + (0x66 << 2)
label_2c0624:
    if (ctx->pc == 0x2C0624u) {
        ctx->pc = 0x2C0624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0620u;
        // 0x2c0624: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0628u;
        goto label_2c0628;
    }
    ctx->pc = 0x2C0620u;
    {
        const bool branch_taken_0x2c0620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C0624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0620u;
        // 0x2c0624: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0620) {
            ctx->pc = 0x2C07BCu;
            goto label_2c07bc;
        }
    }
    ctx->pc = 0x2C0628u;
label_2c0628:
    // 0x2c0628: 0x1009007e  beq         $zero, $t1, . + 4 + (0x7E << 2)
label_2c062c:
    if (ctx->pc == 0x2C062Cu) {
        ctx->pc = 0x2C062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0628u;
        // 0x2c062c: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0630u;
        goto label_2c0630;
    }
    ctx->pc = 0x2C0628u;
    {
        const bool branch_taken_0x2c0628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0628u;
        // 0x2c062c: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0628) {
            ctx->pc = 0x2C0824u;
            goto label_2c0824;
        }
    }
    ctx->pc = 0x2C0630u;
label_2c0630:
    // 0x2c0630: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0630u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C0630 raw=0x03E8A801");
 /* MITIGATED */
label_2c0634:
    // 0x2c0634: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0638:
    // 0x2c0638: 0x3e89804  sllv        $s3, $t0, $ra
    ctx->pc = 0x2c0638u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2c063c:
    // 0x2c063c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c063cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0640:
    // 0x2c0640: 0x3e8a007  srav        $s4, $t0, $ra
    ctx->pc = 0x2c0640u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2c0644:
    // 0x2c0644: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0644u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0648:
    // 0x2c0648: 0x3e8a80a  movz        $s5, $ra, $t0
    ctx->pc = 0x2c0648u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 31));
label_2c064c:
    // 0x2c064c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c064cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0650:
    // 0x2c0650: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0650u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0654:
    // 0x2c0654: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0654u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0658:
    // 0x2c0658: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c0658u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2c065c:
    // 0x2c065c: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2c065cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2c0660:
    // 0x2c0660: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c0660u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2c0664:
    // 0x2c0664: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2c0664u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2c0668:
    // 0x2c0668: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0668u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c066c:
    // 0x2c066c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c066cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0670:
    // 0x2c0670: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0670u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0674:
    // 0x2c0674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0678:
    // 0x2c0678: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0678u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c067c:
    // 0x2c067c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c067cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0680:
    // 0x2c0680: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0680u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0684:
    // 0x2c0684: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0684u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2C0684 raw=0x01E0E71E");
 /* MITIGATED */
label_2c0688:
    // 0x2c0688: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0688u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c068c:
    // 0x2c068c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c068cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0690:
    // 0x2c0690: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0690u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0694:
    // 0x2c0694: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0694u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0698:
    // 0x2c0698: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0698u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c069c:
    // 0x2c069c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c069cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c06a0:
    // 0x2c06a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c06a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c06a4:
    // 0x2c06a4: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c06a4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2c06a8:
    // 0x2c06a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c06a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c06ac:
    // 0x2c06ac: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c06acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2c06b0:
    // 0x2c06b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c06b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c06b4:
    // 0x2c06b4: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c06b4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2c06b8:
    // 0x2c06b8: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c06b8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2c06bc:
    // 0x2c06bc: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2c06bcu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2c06c0:
    // 0x2c06c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c06c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c06c4:
    // 0x2c06c4: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c06c4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2c06c8:
    // 0x2c06c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c06c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c06cc:
    // 0x2c06cc: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c06ccu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2c06d0:
    // 0x2c06d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c06d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c06d4:
    // 0x2c06d4: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c06d4u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2c06d8:
    // 0x2c06d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c06d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c06dc:
    // 0x2c06dc: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c06dcu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2c06e0:
    // 0x2c06e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c06e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c06e4:
    // 0x2c06e4: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c06e4u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2c06e8:
    // 0x2c06e8: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c06e8u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2C06E8 raw=0x437F0000");
 /* MITIGATED */
label_2c06ec:
    // 0x2c06ec: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2c06ecu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2c06f0:
    // 0x2c06f0: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c06f0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2c06f4:
    // 0x2c06f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c06f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c06f8:
    // 0x2c06f8: 0x3e8b803  .word       0x03E8B803                   # sra         $s7, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c06f8u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 0));
label_2c06fc:
    // 0x2c06fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c06fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0700:
    // 0x2c0700: 0x3e8c006  srlv        $t8, $t0, $ra
    ctx->pc = 0x2c0700u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2c0704:
    // 0x2c0704: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0704u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0708:
    // 0x2c0708: 0x3e8b009  .word       0x03E8B009                   # jalr        $s6, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2c070c:
    if (ctx->pc == 0x2C070Cu) {
        ctx->pc = 0x2C070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0708u;
        // 0x2c070c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0710u;
        goto label_2c0710;
    }
    ctx->pc = 0x2C0708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 22, 0x2C0710u);
        ctx->pc = 0x2C070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0708u;
        // 0x2c070c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0708u, 0x2C0710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C0710u;
label_2c0710:
    // 0x2c0710: 0x1f637fd  .word       0x01F637FD                   # INVALID     $t7, $s6, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0710u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C0710 raw=0x01F637FD");
 /* MITIGATED */
label_2c0714:
    // 0x2c0714: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0714u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0718:
    // 0x2c0718: 0x1f737fe  .word       0x01F737FE                   # dsrl32      $a2, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) >> (32 + 31));
label_2c071c:
    // 0x2c071c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c071cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0720:
    // 0x2c0720: 0x1f837ff  .word       0x01F837FF                   # dsra32      $a2, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0720u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 24) >> (32 + 31));
label_2c0724:
    // 0x2c0724: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0724u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0728:
    // 0x2c0728: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0728u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2c072c:
    // 0x2c072c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c072cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0730:
    // 0x2c0730: 0x3e8b805  .word       0x03E8B805                   # INVALID     $ra, $t0, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0730u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C0730 raw=0x03E8B805");
 /* MITIGATED */
label_2c0734:
    // 0x2c0734: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0734u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0738:
    // 0x2c0738: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2c073c:
    if (ctx->pc == 0x2C073Cu) {
        ctx->pc = 0x2C073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0738u;
        // 0x2c073c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0740u;
        goto label_2c0740;
    }
    ctx->pc = 0x2C0738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0738u;
        // 0x2c073c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0740u;
label_2c0740:
    // 0x2c0740: 0x3e8b00b  movn        $s6, $ra, $t0
    ctx->pc = 0x2c0740u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 31));
label_2c0744:
    // 0x2c0744: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0744u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0748:
    // 0x2c0748: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2c0748u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2c074c:
    // 0x2c074c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c074cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0750:
    // 0x2c0750: 0x102d0000  beq         $at, $t5, . + 4 + (0x0 << 2)
label_2c0754:
    if (ctx->pc == 0x2C0754u) {
        ctx->pc = 0x2C0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0750u;
        // 0x2c0754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0758u;
        goto label_2c0758;
    }
    ctx->pc = 0x2C0750u;
    {
        const bool branch_taken_0x2c0750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0750u;
        // 0x2c0754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0750) {
            ctx->pc = 0x2C0754u;
            goto label_2c0754;
        }
    }
    ctx->pc = 0x2C0758u;
label_2c0758:
    // 0x2c0758: 0x10060020  beq         $zero, $a2, . + 4 + (0x20 << 2)
label_2c075c:
    if (ctx->pc == 0x2C075Cu) {
        ctx->pc = 0x2C075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0758u;
        // 0x2c075c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0760u;
        goto label_2c0760;
    }
    ctx->pc = 0x2C0758u;
    {
        const bool branch_taken_0x2c0758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0758u;
        // 0x2c075c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0758) {
            ctx->pc = 0x2C07DCu;
            goto label_2c07dc;
        }
    }
    ctx->pc = 0x2C0760u;
label_2c0760:
    // 0x2c0760: 0x10070002  beq         $zero, $a3, . + 4 + (0x2 << 2)
label_2c0764:
    if (ctx->pc == 0x2C0764u) {
        ctx->pc = 0x2C0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0760u;
        // 0x2c0764: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0768u;
        goto label_2c0768;
    }
    ctx->pc = 0x2C0760u;
    {
        const bool branch_taken_0x2c0760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0760u;
        // 0x2c0764: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0760) {
            ctx->pc = 0x2C076Cu;
            goto label_2c076c;
        }
    }
    ctx->pc = 0x2C0768u;
label_2c0768:
    // 0x2c0768: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2c076c:
    if (ctx->pc == 0x2C076Cu) {
        ctx->pc = 0x2C076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0768u;
        // 0x2c076c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0770u;
        goto label_2c0770;
    }
    ctx->pc = 0x2C0768u;
    {
        const bool branch_taken_0x2c0768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0768u;
        // 0x2c076c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0768) {
            ctx->pc = 0x2C676Cu;
            { ctx->pc = 0x2c676c; return; }
        }
    }
    ctx->pc = 0x2C0770u;
label_2c0770:
    // 0x2c0770: 0x10091818  beq         $zero, $t1, . + 4 + (0x1818 << 2)
label_2c0774:
    if (ctx->pc == 0x2C0774u) {
        ctx->pc = 0x2C0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0770u;
        // 0x2c0774: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0778u;
        goto label_2c0778;
    }
    ctx->pc = 0x2C0770u;
    {
        const bool branch_taken_0x2c0770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0770u;
        // 0x2c0774: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0770) {
            ctx->pc = 0x2C67D4u;
            { ctx->pc = 0x2c67d4; return; }
        }
    }
    ctx->pc = 0x2C0778u;
label_2c0778:
    // 0x2c0778: 0x100a0003  beq         $zero, $t2, . + 4 + (0x3 << 2)
label_2c077c:
    if (ctx->pc == 0x2C077Cu) {
        ctx->pc = 0x2C077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0778u;
        // 0x2c077c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0780u;
        goto label_2c0780;
    }
    ctx->pc = 0x2C0778u;
    {
        const bool branch_taken_0x2c0778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0778u;
        // 0x2c077c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0778) {
            ctx->pc = 0x2C0788u;
            goto label_2c0788;
        }
    }
    ctx->pc = 0x2C0780u;
label_2c0780:
    // 0x2c0780: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c0784:
    if (ctx->pc == 0x2C0784u) {
        ctx->pc = 0x2C0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0780u;
        // 0x2c0784: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0788u;
        goto label_2c0788;
    }
    ctx->pc = 0x2C0780u;
    {
        const bool branch_taken_0x2c0780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0780u;
        // 0x2c0784: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0780) {
            ctx->pc = 0x2C0784u;
            goto label_2c0784;
        }
    }
    ctx->pc = 0x2C0788u;
label_2c0788:
    // 0x2c0788: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0788u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c078c:
    // 0x2c078c: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c078cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2c0790:
    // 0x2c0790: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2c0790u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c0794:
    // 0x2c0794: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0794u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0798:
    // 0x2c0798: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2c0798u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c079c:
    // 0x2c079c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c079cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c07a0:
    // 0x2c07a0: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2c07a0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c07a4:
    // 0x2c07a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c07a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c07a8:
    // 0x2c07a8: 0x42020084  .word       0x42020084                   # INVALID     $s0, $v0, 0x84 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c07a8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x4 at 0x2C07A8 raw=0x42020084");
 /* MITIGATED */
label_2c07ac:
    // 0x2c07ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c07acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c07b0:
    // 0x2c07b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c07b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c07b4:
    // 0x2c07b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c07b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c07b8:
    // 0x2c07b8: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2c07bc:
    if (ctx->pc == 0x2C07BCu) {
        ctx->pc = 0x2C07BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07B8u;
        // 0x2c07bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C07C0u;
        goto label_2c07c0;
    }
    ctx->pc = 0x2C07B8u;
    {
        const bool branch_taken_0x2c07b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C07BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07B8u;
        // 0x2c07bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c07b8) {
            ctx->pc = 0x2D47C0u;
            return;
        }
    }
    ctx->pc = 0x2C07C0u;
label_2c07c0:
    // 0x2c07c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c07c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c07c4:
    // 0x2c07c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c07c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c07c8:
    // 0x2c07c8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2c07cc:
    if (ctx->pc == 0x2C07CCu) {
        ctx->pc = 0x2C07CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07C8u;
        // 0x2c07cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C07D0u;
        goto label_2c07d0;
    }
    ctx->pc = 0x2C07C8u;
    {
        const bool branch_taken_0x2c07c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c07c8) {
            ctx->pc = 0x2C07CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C07C8u;
            // 0x2c07cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C27B8u;
            { ctx->pc = 0x2c27b8; return; }
        }
    }
    ctx->pc = 0x2C07D0u;
label_2c07d0:
    // 0x2c07d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c07d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c07d4:
    // 0x2c07d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c07d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c07d8:
    // 0x2c07d8: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2c07dc:
    if (ctx->pc == 0x2C07DCu) {
        ctx->pc = 0x2C07DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07D8u;
        // 0x2c07dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C07E0u;
        goto label_2c07e0;
    }
    ctx->pc = 0x2C07D8u;
    {
        const bool branch_taken_0x2c07d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C07DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07D8u;
        // 0x2c07dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c07d8) {
            ctx->pc = 0x2C683Cu;
            { ctx->pc = 0x2c683c; return; }
        }
    }
    ctx->pc = 0x2C07E0u;
label_2c07e0:
    // 0x2c07e0: 0x42020074  .word       0x42020074                   # INVALID     $s0, $v0, 0x74 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c07e0u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x34 at 0x2C07E0 raw=0x42020074");
 /* MITIGATED */
label_2c07e4:
    // 0x2c07e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c07e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c07e8:
    // 0x2c07e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c07e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c07ec:
    // 0x2c07ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c07ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c07f0:
    // 0x2c07f0: 0x500b0070  beql        $zero, $t3, . + 4 + (0x70 << 2)
label_2c07f4:
    if (ctx->pc == 0x2C07F4u) {
        ctx->pc = 0x2C07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C07F0u;
        // 0x2c07f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C07F8u;
        goto label_2c07f8;
    }
    ctx->pc = 0x2C07F0u;
    {
        const bool branch_taken_0x2c07f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2c07f0) {
            ctx->pc = 0x2C07F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C07F0u;
            // 0x2c07f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C09B4u;
            goto label_2c09b4;
        }
    }
    ctx->pc = 0x2C07F8u;
label_2c07f8:
    // 0x2c07f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c07f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c07fc:
    // 0x2c07fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c07fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0800:
    // 0x2c0800: 0x100d0080  beq         $zero, $t5, . + 4 + (0x80 << 2)
label_2c0804:
    if (ctx->pc == 0x2C0804u) {
        ctx->pc = 0x2C0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0800u;
        // 0x2c0804: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0808u;
        goto label_2c0808;
    }
    ctx->pc = 0x2C0800u;
    {
        const bool branch_taken_0x2c0800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0800u;
        // 0x2c0804: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0800) {
            ctx->pc = 0x2C0A04u;
            goto label_2c0a04;
        }
    }
    ctx->pc = 0x2C0808u;
label_2c0808:
    // 0x2c0808: 0x10060002  beq         $zero, $a2, . + 4 + (0x2 << 2)
label_2c080c:
    if (ctx->pc == 0x2C080Cu) {
        ctx->pc = 0x2C080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0808u;
        // 0x2c080c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0810u;
        goto label_2c0810;
    }
    ctx->pc = 0x2C0808u;
    {
        const bool branch_taken_0x2c0808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0808u;
        // 0x2c080c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0808) {
            ctx->pc = 0x2C0814u;
            goto label_2c0814;
        }
    }
    ctx->pc = 0x2C0810u;
label_2c0810:
    // 0x2c0810: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2c0814:
    if (ctx->pc == 0x2C0814u) {
        ctx->pc = 0x2C0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0810u;
        // 0x2c0814: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0818u;
        goto label_2c0818;
    }
    ctx->pc = 0x2C0810u;
    {
        const bool branch_taken_0x2c0810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0810u;
        // 0x2c0814: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0810) {
            ctx->pc = 0x2C0814u;
            goto label_2c0814;
        }
    }
    ctx->pc = 0x2C0818u;
label_2c0818:
    // 0x2c0818: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2c081c:
    if (ctx->pc == 0x2C081Cu) {
        ctx->pc = 0x2C081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0818u;
        // 0x2c081c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0820u;
        goto label_2c0820;
    }
    ctx->pc = 0x2C0818u;
    {
        const bool branch_taken_0x2c0818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0818u;
        // 0x2c081c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0818) {
            ctx->pc = 0x2C687Cu;
            { ctx->pc = 0x2c687c; return; }
        }
    }
    ctx->pc = 0x2C0820u;
label_2c0820:
    // 0x2c0820: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2c0824:
    if (ctx->pc == 0x2C0824u) {
        ctx->pc = 0x2C0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0820u;
        // 0x2c0824: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0828u;
        goto label_2c0828;
    }
    ctx->pc = 0x2C0820u;
    {
        const bool branch_taken_0x2c0820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0820u;
        // 0x2c0824: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0820) {
            ctx->pc = 0x2C6824u;
            { ctx->pc = 0x2c6824; return; }
        }
    }
    ctx->pc = 0x2C0828u;
label_2c0828:
    // 0x2c0828: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c0828u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c082c:
    // 0x2c082c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c082cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0830:
    // 0x2c0830: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c0834:
    if (ctx->pc == 0x2C0834u) {
        ctx->pc = 0x2C0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0830u;
        // 0x2c0834: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0838u;
        goto label_2c0838;
    }
    ctx->pc = 0x2C0830u;
    {
        const bool branch_taken_0x2c0830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0830u;
        // 0x2c0834: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0830) {
            ctx->pc = 0x2C0834u;
            goto label_2c0834;
        }
    }
    ctx->pc = 0x2C0838u;
label_2c0838:
    // 0x2c0838: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0838u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c083c:
    // 0x2c083c: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c083cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2c0840:
    // 0x2c0840: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2c0840u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c0844:
    // 0x2c0844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0848:
    // 0x2c0848: 0x0  nop
    ctx->pc = 0x2c0848u;
    // NOP
label_2c084c:
    // 0x2c084c: 0x4a000550  vmaxx       $vf21, $vf0, $vf0x
    ctx->pc = 0x2c084cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2c0850:
    // 0x2c0850: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2c0850u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c0854:
    // 0x2c0854: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0854u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0858:
    // 0x2c0858: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2c0858u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c085c:
    // 0x2c085c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c085cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0860:
    // 0x2c0860: 0x4202006e  .word       0x4202006E                   # INVALID     $s0, $v0, 0x6E # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c0860u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2E at 0x2C0860 raw=0x4202006E");
 /* MITIGATED */
label_2c0864:
    // 0x2c0864: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0864u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0868:
    // 0x2c0868: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0868u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c086c:
    // 0x2c086c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c086cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0870:
    // 0x2c0870: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2c0874:
    if (ctx->pc == 0x2C0874u) {
        ctx->pc = 0x2C0874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0870u;
        // 0x2c0874: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0878u;
        goto label_2c0878;
    }
    ctx->pc = 0x2C0870u;
    {
        const bool branch_taken_0x2c0870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C0874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0870u;
        // 0x2c0874: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0870) {
            ctx->pc = 0x2D4878u;
            return;
        }
    }
    ctx->pc = 0x2C0878u;
label_2c0878:
    // 0x2c0878: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0878u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c087c:
    // 0x2c087c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c087cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0880:
    // 0x2c0880: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2c0884:
    if (ctx->pc == 0x2C0884u) {
        ctx->pc = 0x2C0884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0880u;
        // 0x2c0884: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0888u;
        goto label_2c0888;
    }
    ctx->pc = 0x2C0880u;
    {
        const bool branch_taken_0x2c0880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c0880) {
            ctx->pc = 0x2C0884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0880u;
            // 0x2c0884: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2870u;
            { ctx->pc = 0x2c2870; return; }
        }
    }
    ctx->pc = 0x2C0888u;
label_2c0888:
    // 0x2c0888: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0888u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c088c:
    // 0x2c088c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c088cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0890:
    // 0x2c0890: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2c0894:
    if (ctx->pc == 0x2C0894u) {
        ctx->pc = 0x2C0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0890u;
        // 0x2c0894: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0898u;
        goto label_2c0898;
    }
    ctx->pc = 0x2C0890u;
    {
        const bool branch_taken_0x2c0890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0890u;
        // 0x2c0894: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0890) {
            ctx->pc = 0x2C6894u;
            { ctx->pc = 0x2c6894; return; }
        }
    }
    ctx->pc = 0x2C0898u;
label_2c0898:
    // 0x2c0898: 0x4202005e  .word       0x4202005E                   # INVALID     $s0, $v0, 0x5E # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c0898u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1E at 0x2C0898 raw=0x4202005E");
 /* MITIGATED */
label_2c089c:
    // 0x2c089c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c089cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c08a0:
    // 0x2c08a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c08a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c08a4:
    // 0x2c08a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c08a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c08a8:
    // 0x2c08a8: 0x500b005a  beql        $zero, $t3, . + 4 + (0x5A << 2)
label_2c08ac:
    if (ctx->pc == 0x2C08ACu) {
        ctx->pc = 0x2C08ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08A8u;
        // 0x2c08ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C08B0u;
        goto label_2c08b0;
    }
    ctx->pc = 0x2C08A8u;
    {
        const bool branch_taken_0x2c08a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2c08a8) {
            ctx->pc = 0x2C08ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C08A8u;
            // 0x2c08ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0A14u;
            goto label_2c0a14;
        }
    }
    ctx->pc = 0x2C08B0u;
label_2c08b0:
    // 0x2c08b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c08b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c08b4:
    // 0x2c08b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c08b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c08b8:
    // 0x2c08b8: 0x100d0040  beq         $zero, $t5, . + 4 + (0x40 << 2)
label_2c08bc:
    if (ctx->pc == 0x2C08BCu) {
        ctx->pc = 0x2C08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08B8u;
        // 0x2c08bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C08C0u;
        goto label_2c08c0;
    }
    ctx->pc = 0x2C08B8u;
    {
        const bool branch_taken_0x2c08b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08B8u;
        // 0x2c08bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c08b8) {
            ctx->pc = 0x2C09BCu;
            goto label_2c09bc;
        }
    }
    ctx->pc = 0x2C08C0u;
label_2c08c0:
    // 0x2c08c0: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_2c08c4:
    if (ctx->pc == 0x2C08C4u) {
        ctx->pc = 0x2C08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08C0u;
        // 0x2c08c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C08C8u;
        goto label_2c08c8;
    }
    ctx->pc = 0x2C08C0u;
    {
        const bool branch_taken_0x2c08c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08C0u;
        // 0x2c08c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c08c0) {
            ctx->pc = 0x2C08C8u;
            goto label_2c08c8;
        }
    }
    ctx->pc = 0x2C08C8u;
label_2c08c8:
    // 0x2c08c8: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2c08cc:
    if (ctx->pc == 0x2C08CCu) {
        ctx->pc = 0x2C08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08C8u;
        // 0x2c08cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C08D0u;
        goto label_2c08d0;
    }
    ctx->pc = 0x2C08C8u;
    {
        const bool branch_taken_0x2c08c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08C8u;
        // 0x2c08cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c08c8) {
            ctx->pc = 0x2C08CCu;
            goto label_2c08cc;
        }
    }
    ctx->pc = 0x2C08D0u;
label_2c08d0:
    // 0x2c08d0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2c08d4:
    if (ctx->pc == 0x2C08D4u) {
        ctx->pc = 0x2C08D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08D0u;
        // 0x2c08d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C08D8u;
        goto label_2c08d8;
    }
    ctx->pc = 0x2C08D0u;
    {
        const bool branch_taken_0x2c08d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C08D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08D0u;
        // 0x2c08d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c08d0) {
            ctx->pc = 0x2C68D4u;
            { ctx->pc = 0x2c68d4; return; }
        }
    }
    ctx->pc = 0x2C08D8u;
label_2c08d8:
    // 0x2c08d8: 0x10091818  beq         $zero, $t1, . + 4 + (0x1818 << 2)
label_2c08dc:
    if (ctx->pc == 0x2C08DCu) {
        ctx->pc = 0x2C08DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08D8u;
        // 0x2c08dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C08E0u;
        goto label_2c08e0;
    }
    ctx->pc = 0x2C08D8u;
    {
        const bool branch_taken_0x2c08d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C08DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08D8u;
        // 0x2c08dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c08d8) {
            ctx->pc = 0x2C693Cu;
            { ctx->pc = 0x2c693c; return; }
        }
    }
    ctx->pc = 0x2C08E0u;
label_2c08e0:
    // 0x2c08e0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c08e0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c08e4:
    // 0x2c08e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c08e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c08e8:
    // 0x2c08e8: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c08ec:
    if (ctx->pc == 0x2C08ECu) {
        ctx->pc = 0x2C08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08E8u;
        // 0x2c08ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C08F0u;
        goto label_2c08f0;
    }
    ctx->pc = 0x2C08E8u;
    {
        const bool branch_taken_0x2c08e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08E8u;
        // 0x2c08ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c08e8) {
            ctx->pc = 0x2C08ECu;
            goto label_2c08ec;
        }
    }
    ctx->pc = 0x2C08F0u;
label_2c08f0:
    // 0x2c08f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c08f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c08f4:
    // 0x2c08f4: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c08f4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2c08f8:
    // 0x2c08f8: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2c08f8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c08fc:
    // 0x2c08fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c08fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0900:
    // 0x2c0900: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2c0900u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c0904:
    // 0x2c0904: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0904u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0908:
    // 0x2c0908: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2c0908u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c090c:
    // 0x2c090c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c090cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0910:
    // 0x2c0910: 0x42020058  .word       0x42020058                   # eret # 00020040 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c0910u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_2c0914:
    // 0x2c0914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0918:
    // 0x2c0918: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0918u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c091c:
    // 0x2c091c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c091cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0920:
    // 0x2c0920: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2c0924:
    if (ctx->pc == 0x2C0924u) {
        ctx->pc = 0x2C0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0920u;
        // 0x2c0924: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0928u;
        goto label_2c0928;
    }
    ctx->pc = 0x2C0920u;
    {
        const bool branch_taken_0x2c0920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0920u;
        // 0x2c0924: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0920) {
            ctx->pc = 0x2D4928u;
            return;
        }
    }
    ctx->pc = 0x2C0928u;
label_2c0928:
    // 0x2c0928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c092c:
    // 0x2c092c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c092cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0930:
    // 0x2c0930: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2c0934:
    if (ctx->pc == 0x2C0934u) {
        ctx->pc = 0x2C0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0930u;
        // 0x2c0934: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0938u;
        goto label_2c0938;
    }
    ctx->pc = 0x2C0930u;
    {
        const bool branch_taken_0x2c0930 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c0930) {
            ctx->pc = 0x2C0934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0930u;
            // 0x2c0934: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2920u;
            { ctx->pc = 0x2c2920; return; }
        }
    }
    ctx->pc = 0x2C0938u;
label_2c0938:
    // 0x2c0938: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0938u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c093c:
    // 0x2c093c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c093cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0940:
    // 0x2c0940: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2c0944:
    if (ctx->pc == 0x2C0944u) {
        ctx->pc = 0x2C0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0940u;
        // 0x2c0944: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0948u;
        goto label_2c0948;
    }
    ctx->pc = 0x2C0940u;
    {
        const bool branch_taken_0x2c0940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0940u;
        // 0x2c0944: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0940) {
            ctx->pc = 0x2C69A4u;
            { ctx->pc = 0x2c69a4; return; }
        }
    }
    ctx->pc = 0x2C0948u;
label_2c0948:
    // 0x2c0948: 0x42020048  .word       0x42020048                   # tlbp # 00020040 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c0948u;
    runtime->handleTLBP(rdram, ctx);
label_2c094c:
    // 0x2c094c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c094cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0950:
    // 0x2c0950: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0950u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0954:
    // 0x2c0954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0958:
    // 0x2c0958: 0x500b0044  beql        $zero, $t3, . + 4 + (0x44 << 2)
label_2c095c:
    if (ctx->pc == 0x2C095Cu) {
        ctx->pc = 0x2C095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0958u;
        // 0x2c095c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0960u;
        goto label_2c0960;
    }
    ctx->pc = 0x2C0958u;
    {
        const bool branch_taken_0x2c0958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2c0958) {
            ctx->pc = 0x2C095Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0958u;
            // 0x2c095c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0A6Cu;
            goto label_2c0a6c;
        }
    }
    ctx->pc = 0x2C0960u;
label_2c0960:
    // 0x2c0960: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0960u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0964:
    // 0x2c0964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0968:
    // 0x2c0968: 0x100d0200  beq         $zero, $t5, . + 4 + (0x200 << 2)
label_2c096c:
    if (ctx->pc == 0x2C096Cu) {
        ctx->pc = 0x2C096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0968u;
        // 0x2c096c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0970u;
        goto label_2c0970;
    }
    ctx->pc = 0x2C0968u;
    {
        const bool branch_taken_0x2c0968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0968u;
        // 0x2c096c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0968) {
            ctx->pc = 0x2C116Cu;
            { ctx->pc = 0x2c116c; return; }
        }
    }
    ctx->pc = 0x2C0970u;
label_2c0970:
    // 0x2c0970: 0x10060008  beq         $zero, $a2, . + 4 + (0x8 << 2)
label_2c0974:
    if (ctx->pc == 0x2C0974u) {
        ctx->pc = 0x2C0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0970u;
        // 0x2c0974: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0978u;
        goto label_2c0978;
    }
    ctx->pc = 0x2C0970u;
    {
        const bool branch_taken_0x2c0970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C0974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0970u;
        // 0x2c0974: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0970) {
            ctx->pc = 0x2C0994u;
            goto label_2c0994;
        }
    }
    ctx->pc = 0x2C0978u;
label_2c0978:
    // 0x2c0978: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2c097c:
    if (ctx->pc == 0x2C097Cu) {
        ctx->pc = 0x2C097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0978u;
        // 0x2c097c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0980u;
        goto label_2c0980;
    }
    ctx->pc = 0x2C0978u;
    {
        const bool branch_taken_0x2c0978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0978u;
        // 0x2c097c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0978) {
            ctx->pc = 0x2C0980u;
            goto label_2c0980;
        }
    }
    ctx->pc = 0x2C0980u;
label_2c0980:
    // 0x2c0980: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2c0984:
    if (ctx->pc == 0x2C0984u) {
        ctx->pc = 0x2C0984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0980u;
        // 0x2c0984: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0988u;
        goto label_2c0988;
    }
    ctx->pc = 0x2C0980u;
    {
        const bool branch_taken_0x2c0980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C0984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0980u;
        // 0x2c0984: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0980) {
            ctx->pc = 0x2C69E4u;
            { ctx->pc = 0x2c69e4; return; }
        }
    }
    ctx->pc = 0x2C0988u;
label_2c0988:
    // 0x2c0988: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2c098c:
    if (ctx->pc == 0x2C098Cu) {
        ctx->pc = 0x2C098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0988u;
        // 0x2c098c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0990u;
        goto label_2c0990;
    }
    ctx->pc = 0x2C0988u;
    {
        const bool branch_taken_0x2c0988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0988u;
        // 0x2c098c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0988) {
            ctx->pc = 0x2C698Cu;
            { ctx->pc = 0x2c698c; return; }
        }
    }
    ctx->pc = 0x2C0990u;
label_2c0990:
    // 0x2c0990: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c0990u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c0994:
    // 0x2c0994: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0994u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0998:
    // 0x2c0998: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c099c:
    if (ctx->pc == 0x2C099Cu) {
        ctx->pc = 0x2C099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0998u;
        // 0x2c099c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C09A0u;
        goto label_2c09a0;
    }
    ctx->pc = 0x2C0998u;
    {
        const bool branch_taken_0x2c0998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0998u;
        // 0x2c099c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0998) {
            ctx->pc = 0x2C099Cu;
            goto label_2c099c;
        }
    }
    ctx->pc = 0x2C09A0u;
label_2c09a0:
    // 0x2c09a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c09a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c09a4:
    // 0x2c09a4: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c09a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2c09a8:
    // 0x2c09a8: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2c09a8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c09ac:
    // 0x2c09ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c09acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c09b0:
    // 0x2c09b0: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2c09b0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c09b4:
    // 0x2c09b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c09b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c09b8:
    // 0x2c09b8: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2c09b8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c09bc:
    // 0x2c09bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c09bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c09c0:
    // 0x2c09c0: 0x42020042  .word       0x42020042                   # tlbwi # 00020040 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c09c0u;
    runtime->handleTLBWI(rdram, ctx);
label_2c09c4:
    // 0x2c09c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c09c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c09c8:
    // 0x2c09c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c09c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c09cc:
    // 0x2c09cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c09ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c09d0:
    // 0x2c09d0: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2c09d4:
    if (ctx->pc == 0x2C09D4u) {
        ctx->pc = 0x2C09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C09D0u;
        // 0x2c09d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C09D8u;
        goto label_2c09d8;
    }
    ctx->pc = 0x2C09D0u;
    {
        const bool branch_taken_0x2c09d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C09D0u;
        // 0x2c09d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c09d0) {
            ctx->pc = 0x2D49D8u;
            return;
        }
    }
    ctx->pc = 0x2C09D8u;
label_2c09d8:
    // 0x2c09d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c09d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c09dc:
    // 0x2c09dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c09dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c09e0:
    // 0x2c09e0: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2c09e4:
    if (ctx->pc == 0x2C09E4u) {
        ctx->pc = 0x2C09E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C09E0u;
        // 0x2c09e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C09E8u;
        goto label_2c09e8;
    }
    ctx->pc = 0x2C09E0u;
    {
        const bool branch_taken_0x2c09e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c09e0) {
            ctx->pc = 0x2C09E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C09E0u;
            // 0x2c09e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C29D0u;
            { ctx->pc = 0x2c29d0; return; }
        }
    }
    ctx->pc = 0x2C09E8u;
label_2c09e8:
    // 0x2c09e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c09e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c09ec:
    // 0x2c09ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c09ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c09f0:
    // 0x2c09f0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2c09f4:
    if (ctx->pc == 0x2C09F4u) {
        ctx->pc = 0x2C09F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C09F0u;
        // 0x2c09f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C09F8u;
        goto label_2c09f8;
    }
    ctx->pc = 0x2C09F0u;
    {
        const bool branch_taken_0x2c09f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C09F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C09F0u;
        // 0x2c09f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c09f0) {
            ctx->pc = 0x2C69F4u;
            { ctx->pc = 0x2c69f4; return; }
        }
    }
    ctx->pc = 0x2C09F8u;
label_2c09f8:
    // 0x2c09f8: 0x42020032  .word       0x42020032                   # INVALID     $s0, $v0, 0x32 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c09f8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x32 at 0x2C09F8 raw=0x42020032");
 /* MITIGATED */
label_2c09fc:
    // 0x2c09fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c09fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0a00:
    // 0x2c0a00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0a00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0a04:
    // 0x2c0a04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0a04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0a08:
    // 0x2c0a08: 0x500b002e  beql        $zero, $t3, . + 4 + (0x2E << 2)
label_2c0a0c:
    if (ctx->pc == 0x2C0A0Cu) {
        ctx->pc = 0x2C0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A08u;
        // 0x2c0a0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0A10u;
        goto label_2c0a10;
    }
    ctx->pc = 0x2C0A08u;
    {
        const bool branch_taken_0x2c0a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2c0a08) {
            ctx->pc = 0x2C0A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0A08u;
            // 0x2c0a0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0AC4u;
            goto label_2c0ac4;
        }
    }
    ctx->pc = 0x2C0A10u;
label_2c0a10:
    // 0x2c0a10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0a10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0a14:
    // 0x2c0a14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0a14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0a18:
    // 0x2c0a18: 0x100d0100  beq         $zero, $t5, . + 4 + (0x100 << 2)
label_2c0a1c:
    if (ctx->pc == 0x2C0A1Cu) {
        ctx->pc = 0x2C0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A18u;
        // 0x2c0a1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0A20u;
        goto label_2c0a20;
    }
    ctx->pc = 0x2C0A18u;
    {
        const bool branch_taken_0x2c0a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A18u;
        // 0x2c0a1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a18) {
            ctx->pc = 0x2C0E1Cu;
            { ctx->pc = 0x2c0e1c; return; }
        }
    }
    ctx->pc = 0x2C0A20u;
label_2c0a20:
    // 0x2c0a20: 0x10060004  beq         $zero, $a2, . + 4 + (0x4 << 2)
label_2c0a24:
    if (ctx->pc == 0x2C0A24u) {
        ctx->pc = 0x2C0A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A20u;
        // 0x2c0a24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0A28u;
        goto label_2c0a28;
    }
    ctx->pc = 0x2C0A20u;
    {
        const bool branch_taken_0x2c0a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C0A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A20u;
        // 0x2c0a24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a20) {
            ctx->pc = 0x2C0A34u;
            goto label_2c0a34;
        }
    }
    ctx->pc = 0x2C0A28u;
label_2c0a28:
    // 0x2c0a28: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2c0a2c:
    if (ctx->pc == 0x2C0A2Cu) {
        ctx->pc = 0x2C0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A28u;
        // 0x2c0a2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0A30u;
        goto label_2c0a30;
    }
    ctx->pc = 0x2C0A28u;
    {
        const bool branch_taken_0x2c0a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A28u;
        // 0x2c0a2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a28) {
            ctx->pc = 0x2C0A30u;
            goto label_2c0a30;
        }
    }
    ctx->pc = 0x2C0A30u;
label_2c0a30:
    // 0x2c0a30: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2c0a34:
    if (ctx->pc == 0x2C0A34u) {
        ctx->pc = 0x2C0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A30u;
        // 0x2c0a34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0A38u;
        goto label_2c0a38;
    }
    ctx->pc = 0x2C0A30u;
    {
        const bool branch_taken_0x2c0a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A30u;
        // 0x2c0a34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a30) {
            ctx->pc = 0x2C6A34u;
            { ctx->pc = 0x2c6a34; return; }
        }
    }
    ctx->pc = 0x2C0A38u;
label_2c0a38:
    // 0x2c0a38: 0x10091818  beq         $zero, $t1, . + 4 + (0x1818 << 2)
label_2c0a3c:
    if (ctx->pc == 0x2C0A3Cu) {
        ctx->pc = 0x2C0A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A38u;
        // 0x2c0a3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0A40u;
        goto label_2c0a40;
    }
    ctx->pc = 0x2C0A38u;
    {
        const bool branch_taken_0x2c0a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C0A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A38u;
        // 0x2c0a3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a38) {
            ctx->pc = 0x2C6A9Cu;
            { ctx->pc = 0x2c6a9c; return; }
        }
    }
    ctx->pc = 0x2C0A40u;
label_2c0a40:
    // 0x2c0a40: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c0a40u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c0a44:
    // 0x2c0a44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0a44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0a48:
    // 0x2c0a48: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c0a4c:
    if (ctx->pc == 0x2C0A4Cu) {
        ctx->pc = 0x2C0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A48u;
        // 0x2c0a4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0A50u;
        goto label_2c0a50;
    }
    ctx->pc = 0x2C0A48u;
    {
        const bool branch_taken_0x2c0a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A48u;
        // 0x2c0a4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a48) {
            ctx->pc = 0x2C0A4Cu;
            goto label_2c0a4c;
        }
    }
    ctx->pc = 0x2C0A50u;
label_2c0a50:
    // 0x2c0a50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0a50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0a54:
    // 0x2c0a54: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0a54u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2c0a58:
    // 0x2c0a58: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2c0a58u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c0a5c:
    // 0x2c0a5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0a5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0a60:
    // 0x2c0a60: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2c0a60u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c0a64:
    // 0x2c0a64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0a64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0a68:
    // 0x2c0a68: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2c0a68u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c0a6c:
    // 0x2c0a6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0a6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0a70:
    // 0x2c0a70: 0x4202002c  .word       0x4202002C                   # INVALID     $s0, $v0, 0x2C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c0a70u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2C at 0x2C0A70 raw=0x4202002C");
 /* MITIGATED */
label_2c0a74:
    // 0x2c0a74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0a74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0a78:
    // 0x2c0a78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0a78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0a7c:
    // 0x2c0a7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0a7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0a80:
    // 0x2c0a80: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2c0a84:
    if (ctx->pc == 0x2C0A84u) {
        ctx->pc = 0x2C0A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A80u;
        // 0x2c0a84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0A88u;
        goto label_2c0a88;
    }
    ctx->pc = 0x2C0A80u;
    {
        const bool branch_taken_0x2c0a80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C0A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A80u;
        // 0x2c0a84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a80) {
            ctx->pc = 0x2D4A88u;
            return;
        }
    }
    ctx->pc = 0x2C0A88u;
label_2c0a88:
    // 0x2c0a88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0a88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0a8c:
    // 0x2c0a8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0a8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0a90:
    // 0x2c0a90: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2c0a94:
    if (ctx->pc == 0x2C0A94u) {
        ctx->pc = 0x2C0A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A90u;
        // 0x2c0a94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0A98u;
        goto label_2c0a98;
    }
    ctx->pc = 0x2C0A90u;
    {
        const bool branch_taken_0x2c0a90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c0a90) {
            ctx->pc = 0x2C0A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0A90u;
            // 0x2c0a94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2A80u;
            { ctx->pc = 0x2c2a80; return; }
        }
    }
    ctx->pc = 0x2C0A98u;
label_2c0a98:
    // 0x2c0a98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0a98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0a9c:
    // 0x2c0a9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0a9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0aa0:
    // 0x2c0aa0: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2c0aa4:
    if (ctx->pc == 0x2C0AA4u) {
        ctx->pc = 0x2C0AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AA0u;
        // 0x2c0aa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0AA8u;
        goto label_2c0aa8;
    }
    ctx->pc = 0x2C0AA0u;
    {
        const bool branch_taken_0x2c0aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C0AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AA0u;
        // 0x2c0aa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0aa0) {
            ctx->pc = 0x2C6B04u;
            { ctx->pc = 0x2c6b04; return; }
        }
    }
    ctx->pc = 0x2C0AA8u;
label_2c0aa8:
    // 0x2c0aa8: 0x4202001c  .word       0x4202001C                   # INVALID     $s0, $v0, 0x1C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c0aa8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1C at 0x2C0AA8 raw=0x4202001C");
 /* MITIGATED */
label_2c0aac:
    // 0x2c0aac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0aacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ab0:
    // 0x2c0ab0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0ab0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0ab4:
    // 0x2c0ab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0ab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ab8:
    // 0x2c0ab8: 0x500b0018  beql        $zero, $t3, . + 4 + (0x18 << 2)
label_2c0abc:
    if (ctx->pc == 0x2C0ABCu) {
        ctx->pc = 0x2C0ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AB8u;
        // 0x2c0abc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0AC0u;
        goto label_2c0ac0;
    }
    ctx->pc = 0x2C0AB8u;
    {
        const bool branch_taken_0x2c0ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2c0ab8) {
            ctx->pc = 0x2C0ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0AB8u;
            // 0x2c0abc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0B1Cu;
            goto label_2c0b1c;
        }
    }
    ctx->pc = 0x2C0AC0u;
label_2c0ac0:
    // 0x2c0ac0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0ac0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0ac4:
    // 0x2c0ac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0ac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ac8:
    // 0x2c0ac8: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c0ac8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c0acc:
    // 0x2c0acc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0accu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ad0:
    // 0x2c0ad0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2c0ad0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2c0ad4:
    // 0x2c0ad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0ad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ad8:
    // 0x2c0ad8: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c0adc:
    if (ctx->pc == 0x2C0ADCu) {
        ctx->pc = 0x2C0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AD8u;
        // 0x2c0adc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0AE0u;
        goto label_2c0ae0;
    }
    ctx->pc = 0x2C0AD8u;
    {
        const bool branch_taken_0x2c0ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AD8u;
        // 0x2c0adc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ad8) {
            ctx->pc = 0x2C0ADCu;
            goto label_2c0adc;
        }
    }
    ctx->pc = 0x2C0AE0u;
label_2c0ae0:
    // 0x2c0ae0: 0x10010066  beq         $zero, $at, . + 4 + (0x66 << 2)
label_2c0ae4:
    if (ctx->pc == 0x2C0AE4u) {
        ctx->pc = 0x2C0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AE0u;
        // 0x2c0ae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0AE8u;
        goto label_2c0ae8;
    }
    ctx->pc = 0x2C0AE0u;
    {
        const bool branch_taken_0x2c0ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2C0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AE0u;
        // 0x2c0ae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ae0) {
            ctx->pc = 0x2C0C7Cu;
            goto label_2c0c7c;
        }
    }
    ctx->pc = 0x2C0AE8u;
label_2c0ae8:
    // 0x2c0ae8: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0ae8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C0AE8 raw=0x01FA0005");
 /* MITIGATED */
label_2c0aec:
    // 0x2c0aec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0aecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0af0:
    // 0x2c0af0: 0x52030811  beql        $s0, $v1, . + 4 + (0x811 << 2)
label_2c0af4:
    if (ctx->pc == 0x2C0AF4u) {
        ctx->pc = 0x2C0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AF0u;
        // 0x2c0af4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0AF8u;
        goto label_2c0af8;
    }
    ctx->pc = 0x2C0AF0u;
    {
        const bool branch_taken_0x2c0af0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c0af0) {
            ctx->pc = 0x2C0AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0AF0u;
            // 0x2c0af4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2B38u;
            { ctx->pc = 0x2c2b38; return; }
        }
    }
    ctx->pc = 0x2C0AF8u;
label_2c0af8:
    // 0x2c0af8: 0x10021830  beq         $zero, $v0, . + 4 + (0x1830 << 2)
label_2c0afc:
    if (ctx->pc == 0x2C0AFCu) {
        ctx->pc = 0x2C0AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AF8u;
        // 0x2c0afc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B00u;
        goto label_2c0b00;
    }
    ctx->pc = 0x2C0AF8u;
    {
        const bool branch_taken_0x2c0af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0AF8u;
        // 0x2c0afc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0af8) {
            ctx->pc = 0x2C6BBCu;
            { ctx->pc = 0x2c6bbc; return; }
        }
    }
    ctx->pc = 0x2C0B00u;
label_2c0b00:
    // 0x2c0b00: 0x12015007  beq         $s0, $at, . + 4 + (0x5007 << 2)
label_2c0b04:
    if (ctx->pc == 0x2C0B04u) {
        ctx->pc = 0x2C0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B00u;
        // 0x2c0b04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B08u;
        goto label_2c0b08;
    }
    ctx->pc = 0x2C0B00u;
    {
        const bool branch_taken_0x2c0b00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x2C0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B00u;
        // 0x2c0b04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b00) {
            ctx->pc = 0x2D4B20u;
            return;
        }
    }
    ctx->pc = 0x2C0B08u;
label_2c0b08:
    // 0x2c0b08: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0b08u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2c0b0c:
    // 0x2c0b0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0b0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0b10:
    // 0x2c0b10: 0x5a00080d  blezl       $s0, . + 4 + (0x80D << 2)
label_2c0b14:
    if (ctx->pc == 0x2C0B14u) {
        ctx->pc = 0x2C0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B10u;
        // 0x2c0b14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B18u;
        goto label_2c0b18;
    }
    ctx->pc = 0x2C0B10u;
    {
        const bool branch_taken_0x2c0b10 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c0b10) {
            ctx->pc = 0x2C0B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0B10u;
            // 0x2c0b14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2B48u;
            { ctx->pc = 0x2c2b48; return; }
        }
    }
    ctx->pc = 0x2C0B18u;
label_2c0b18:
    // 0x2c0b18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0b18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0b1c:
    // 0x2c0b1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0b1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0b20:
    // 0x2c0b20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0b20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0b24:
    // 0x2c0b24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0b24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0b28:
    // 0x2c0b28: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2c0b28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2c0b2c:
    // 0x2c0b2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0b2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0b30:
    // 0x2c0b30: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0b30u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C0B30 raw=0x01FA0005");
 /* MITIGATED */
label_2c0b34:
    // 0x2c0b34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0b34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0b38:
    // 0x2c0b38: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_2c0b3c:
    if (ctx->pc == 0x2C0B3Cu) {
        ctx->pc = 0x2C0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B38u;
        // 0x2c0b3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B40u;
        goto label_2c0b40;
    }
    ctx->pc = 0x2C0B38u;
    {
        const bool branch_taken_0x2c0b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B38u;
        // 0x2c0b3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b38) {
            ctx->pc = 0x2C4B40u;
            { ctx->pc = 0x2c4b40; return; }
        }
    }
    ctx->pc = 0x2C0B40u;
label_2c0b40:
    // 0x2c0b40: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2c0b44:
    if (ctx->pc == 0x2C0B44u) {
        ctx->pc = 0x2C0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B40u;
        // 0x2c0b44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B48u;
        goto label_2c0b48;
    }
    ctx->pc = 0x2C0B40u;
    {
        const bool branch_taken_0x2c0b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B40u;
        // 0x2c0b44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b40) {
            ctx->pc = 0x2C6BA4u;
            { ctx->pc = 0x2c6ba4; return; }
        }
    }
    ctx->pc = 0x2C0B48u;
label_2c0b48:
    // 0x2c0b48: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2c0b4c:
    if (ctx->pc == 0x2C0B4Cu) {
        ctx->pc = 0x2C0B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B48u;
        // 0x2c0b4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B50u;
        goto label_2c0b50;
    }
    ctx->pc = 0x2C0B48u;
    {
        const bool branch_taken_0x2c0b48 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C0B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B48u;
        // 0x2c0b4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b48) {
            ctx->pc = 0x2D6B48u;
            return;
        }
    }
    ctx->pc = 0x2C0B50u;
label_2c0b50:
    // 0x2c0b50: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2c0b54:
    if (ctx->pc == 0x2C0B54u) {
        ctx->pc = 0x2C0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B50u;
        // 0x2c0b54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B58u;
        goto label_2c0b58;
    }
    ctx->pc = 0x2C0B50u;
    {
        const bool branch_taken_0x2c0b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B50u;
        // 0x2c0b54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b50) {
            ctx->pc = 0x2D6B58u;
            return;
        }
    }
    ctx->pc = 0x2C0B58u;
label_2c0b58:
    // 0x2c0b58: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0b58u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2c0b5c:
    // 0x2c0b5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0b5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0b60:
    // 0x2c0b60: 0xb0b1000  j           func_C2C4000
label_2c0b64:
    if (ctx->pc == 0x2C0B64u) {
        ctx->pc = 0x2C0B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B60u;
        // 0x2c0b64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0B68u;
        goto label_2c0b68;
    }
    ctx->pc = 0x2C0B60u;
    ctx->pc = 0x2C0B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0B60u;
    // 0x2c0b64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2C0B60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C0B68u;
label_2c0b68:
    // 0x2c0b68: 0x42010061  .word       0x42010061                   # INVALID     $s0, $at, 0x61 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c0b68u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x21 at 0x2C0B68 raw=0x42010061");
 /* MITIGATED */
label_2c0b6c:
    // 0x2c0b6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0b6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0b70:
    // 0x2c0b70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0b70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0b74:
    // 0x2c0b74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0b74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0b78:
    // 0x2c0b78: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2c0b78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2c0b7c:
    // 0x2c0b7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0b7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0b80:
    // 0x2c0b80: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c0b80u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C0B80 raw=0x48007800");
 /* MITIGATED */
label_2c0b84:
    // 0x2c0b84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0b84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0b88:
    // 0x2c0b88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0b88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0b8c:
    // 0x2c0b8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0b8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0b90:
    // 0x2c0b90: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0b90u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2c0b94:
    // 0x2c0b94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0b94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0b98:
    // 0x2c0b98: 0x1f64001  .word       0x01F64001                   # INVALID     $t7, $s6, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0b98u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C0B98 raw=0x01F64001");
 /* MITIGATED */
label_2c0b9c:
    // 0x2c0b9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0b9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ba0:
    // 0x2c0ba0: 0x1f74002  .word       0x01F74002                   # srl         $t0, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2c0ba4:
    // 0x2c0ba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0ba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ba8:
    // 0x2c0ba8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0ba8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0bac:
    // 0x2c0bac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0bacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0bb0:
    // 0x2c0bb0: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2c0bb0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2c0bb4:
    // 0x2c0bb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0bb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0bb8:
    // 0x2c0bb8: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2c0bb8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2c0bbc:
    // 0x2c0bbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0bbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0bc0:
    // 0x2c0bc0: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2c0bc0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2c0bc4:
    // 0x2c0bc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0bc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0bc8:
    // 0x2c0bc8: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c0bc8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C0BC8 raw=0x48001000");
 /* MITIGATED */
label_2c0bcc:
    // 0x2c0bcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0bccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0bd0:
    // 0x2c0bd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0bd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0bd4:
    // 0x2c0bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0bd8:
    // 0x2c0bd8: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2c0bd8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c0bdc:
    // 0x2c0bdc: 0x1f5fc68  .word       0x01F5FC68                   # mfsa        $ra # 01F50440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c0bdcu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2c0be0:
    // 0x2c0be0: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2c0be0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c0be4:
    // 0x2c0be4: 0x1f6fca8  .word       0x01F6FCA8                   # mfsa        $ra # 01F60480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c0be4u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2c0be8:
    // 0x2c0be8: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2c0be8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c0bec:
    // 0x2c0bec: 0x1f7fce8  .word       0x01F7FCE8                   # mfsa        $ra # 01F704C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c0becu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2c0bf0:
    // 0x2c0bf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0bf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0bf4:
    // 0x2c0bf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0bf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0bf8:
    // 0x2c0bf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0bf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0bfc:
    // 0x2c0bfc: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0bfcu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2c0c00:
    // 0x2c0c00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0c00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0c04:
    // 0x2c0c04: 0x1d5a9ff  .word       0x01D5A9FF                   # dsra32      $s5, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c0c04u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 7));
label_2c0c08:
    // 0x2c0c08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0c08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0c0c:
    // 0x2c0c0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0c10:
    // 0x2c0c10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0c10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0c14:
    // 0x2c0c14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0c18:
    // 0x2c0c18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0c18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0c1c:
    // 0x2c0c1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0c20:
    // 0x2c0c20: 0x38010000  xori        $at, $zero, 0x0
    ctx->pc = 0x2c0c20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_2c0c24:
    // 0x2c0c24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0c28:
    // 0x2c0c28: 0x800d0934  lb          $t5, 0x934($zero)
    ctx->pc = 0x2c0c28u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x934u));
label_2c0c2c:
    // 0x2c0c2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0c30:
    // 0x2c0c30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0c30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0c34:
    // 0x2c0c34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0c38:
    // 0x2c0c38: 0x5004000f  beql        $zero, $a0, . + 4 + (0xF << 2)
label_2c0c3c:
    if (ctx->pc == 0x2C0C3Cu) {
        ctx->pc = 0x2C0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C38u;
        // 0x2c0c3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0C40u;
        goto label_2c0c40;
    }
    ctx->pc = 0x2C0C38u;
    {
        const bool branch_taken_0x2c0c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c0c38) {
            ctx->pc = 0x2C0C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0C38u;
            // 0x2c0c3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0C78u;
            goto label_2c0c78;
        }
    }
    ctx->pc = 0x2C0C40u;
label_2c0c40:
    // 0x2c0c40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0c40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0c44:
    // 0x2c0c44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0c48:
    // 0x2c0c48: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2c0c48u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2c0c4c:
    // 0x2c0c4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0c50:
    // 0x2c0c50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0c50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0c54:
    // 0x2c0c54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0c58:
    // 0x2c0c58: 0x50040003  beql        $zero, $a0, . + 4 + (0x3 << 2)
label_2c0c5c:
    if (ctx->pc == 0x2C0C5Cu) {
        ctx->pc = 0x2C0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C58u;
        // 0x2c0c5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0C60u;
        goto label_2c0c60;
    }
    ctx->pc = 0x2C0C58u;
    {
        const bool branch_taken_0x2c0c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c0c58) {
            ctx->pc = 0x2C0C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0C58u;
            // 0x2c0c5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0C68u;
            goto label_2c0c68;
        }
    }
    ctx->pc = 0x2C0C60u;
label_2c0c60:
    // 0x2c0c60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0c60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0c64:
    // 0x2c0c64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0c68:
    // 0x2c0c68: 0x4000001c  .word       0x4000001C                   # mfc0        $zero, Index # 0000001C <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c0c68u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c0c6c:
    // 0x2c0c6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0c70:
    // 0x2c0c70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0c70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0c74:
    // 0x2c0c74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0c78:
    // 0x2c0c78: 0x4201001c  .word       0x4201001C                   # INVALID     $s0, $at, 0x1C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c0c78u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1C at 0x2C0C78 raw=0x4201001C");
 /* MITIGATED */
label_2c0c7c:
    // 0x2c0c7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0c80:
    // 0x2c0c80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0c80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0c84:
    // 0x2c0c84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0c88:
    // 0x2c0c88: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2c0c88u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2c0c8c:
    // 0x2c0c8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0c90:
    // 0x2c0c90: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2c0c90u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2c0c94:
    // 0x2c0c94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0c98:
    // 0x2c0c98: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2c0c98u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2c0c9c:
    // 0x2c0c9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0c9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ca0:
    // 0x2c0ca0: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2c0ca4:
    if (ctx->pc == 0x2C0CA4u) {
        ctx->pc = 0x2C0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0CA0u;
        // 0x2c0ca4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0CA8u;
        goto label_2c0ca8;
    }
    ctx->pc = 0x2C0CA0u;
    {
        const bool branch_taken_0x2c0ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0CA0u;
        // 0x2c0ca4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ca0) {
            ctx->pc = 0x2D6CA8u;
            return;
        }
    }
    ctx->pc = 0x2C0CA8u;
label_2c0ca8:
    // 0x2c0ca8: 0x40000014  .word       0x40000014                   # mfc0        $zero, Index # 00000014 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c0ca8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c0cac:
    // 0x2c0cac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0cacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0cb0:
    // 0x2c0cb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0cb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0cb4:
    // 0x2c0cb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0cb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0cb8:
    // 0x2c0cb8: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2c0cb8u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2c0cbc:
    // 0x2c0cbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0cbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0cc0:
    // 0x2c0cc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0cc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0cc4:
    // 0x2c0cc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0cc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0cc8:
    // 0x2c0cc8: 0x5004000c  beql        $zero, $a0, . + 4 + (0xC << 2)
label_2c0ccc:
    if (ctx->pc == 0x2C0CCCu) {
        ctx->pc = 0x2C0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0CC8u;
        // 0x2c0ccc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0CD0u;
        goto label_2c0cd0;
    }
    ctx->pc = 0x2C0CC8u;
    {
        const bool branch_taken_0x2c0cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c0cc8) {
            ctx->pc = 0x2C0CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0CC8u;
            // 0x2c0ccc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0CFCu;
            goto label_2c0cfc;
        }
    }
    ctx->pc = 0x2C0CD0u;
label_2c0cd0:
    // 0x2c0cd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0cd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0cd4:
    // 0x2c0cd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0cd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0cd8:
    // 0x2c0cd8: 0x42010010  .word       0x42010010                   # rfe # 00010000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c0cd8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x10 at 0x2C0CD8 raw=0x42010010");
 /* MITIGATED */
label_2c0cdc:
    // 0x2c0cdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0cdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ce0:
    // 0x2c0ce0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0ce0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0ce4:
    // 0x2c0ce4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0ce4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0ce8:
    // 0x2c0ce8: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2c0ce8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2c0cec:
    // 0x2c0cec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0cecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0cf0:
    // 0x2c0cf0: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2c0cf0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2c0cf4:
    // 0x2c0cf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0cf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0cf8:
    // 0x2c0cf8: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2c0cf8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2c0cfc:
    // 0x2c0cfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0cfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0d00:
    // 0x2c0d00: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2c0d00u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2c0d04:
    // 0x2c0d04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0d04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0d08:
    // 0x2c0d08: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2c0d08u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2c0d0c:
    // 0x2c0d0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0d0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0d10:
    // 0x2c0d10: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2c0d10u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2c0d14:
    // 0x2c0d14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0d14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0d18:
    // 0x2c0d18: 0x100b5802  beq         $zero, $t3, . + 4 + (0x5802 << 2)
label_2c0d1c:
    if (ctx->pc == 0x2C0D1Cu) {
        ctx->pc = 0x2C0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D18u;
        // 0x2c0d1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0D20u;
        goto label_2c0d20;
    }
    ctx->pc = 0x2C0D18u;
    {
        const bool branch_taken_0x2c0d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D18u;
        // 0x2c0d1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d18) {
            ctx->pc = 0x2D6D24u;
            return;
        }
    }
    ctx->pc = 0x2C0D20u;
label_2c0d20:
    // 0x2c0d20: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c0d20u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c0d24:
    // 0x2c0d24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0d24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0d28:
    // 0x2c0d28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0d28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0d2c:
    // 0x2c0d2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0d2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0d30:
    // 0x2c0d30: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2c0d30u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2c0d34:
    // 0x2c0d34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0d34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0d38:
    // 0x2c0d38: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2c0d38u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2c0d3c:
    // 0x2c0d3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0d3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0d40:
    // 0x2c0d40: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2c0d40u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2c0d44:
    // 0x2c0d44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0d44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0d48:
    // 0x2c0d48: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2c0d4c:
    if (ctx->pc == 0x2C0D4Cu) {
        ctx->pc = 0x2C0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D48u;
        // 0x2c0d4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C0D50u;
        goto label_2c0d50;
    }
    ctx->pc = 0x2C0D48u;
    {
        const bool branch_taken_0x2c0d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D48u;
        // 0x2c0d4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d48) {
            ctx->pc = 0x2D6D50u;
            return;
        }
    }
    ctx->pc = 0x2C0D50u;
label_2c0d50:
    // 0x2c0d50: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c0d50u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C0D50 raw=0x48001000");
 /* MITIGATED */
label_2c0d54:
    // 0x2c0d54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0d54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0d58:
    // 0x2c0d58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0d58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0d5c:
    // 0x2c0d5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0d5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0d60:
    // 0x2c0d60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0d60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0d64:
    // 0x2c0d64: 0x3c8e58  .word       0x003C8E58                   # mult        $s1, $at, $gp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c0d64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2c0d68:
    // 0x2c0d68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0d68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0d6c:
    // 0x2c0d6c: 0x3cae98  .word       0x003CAE98                   # mult        $s5, $at, $gp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c0d6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2c0d70:
    // 0x2c0d70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0d70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0d74:
    // 0x2c0d74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0d74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c0d78:
    // 0x2c0d78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c0d78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c0d7c:
    // 0x2c0d7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c0d7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2c0d80u;
    return;
}

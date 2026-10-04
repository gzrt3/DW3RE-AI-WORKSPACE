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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part142(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e05f8u: goto label_1e05f8;
        case 0x1e05fcu: goto label_1e05fc;
        case 0x1e0600u: goto label_1e0600;
        case 0x1e0604u: goto label_1e0604;
        case 0x1e0608u: goto label_1e0608;
        case 0x1e060cu: goto label_1e060c;
        case 0x1e0610u: goto label_1e0610;
        case 0x1e0614u: goto label_1e0614;
        case 0x1e0618u: goto label_1e0618;
        case 0x1e061cu: goto label_1e061c;
        case 0x1e0620u: goto label_1e0620;
        case 0x1e0624u: goto label_1e0624;
        case 0x1e0628u: goto label_1e0628;
        case 0x1e062cu: goto label_1e062c;
        case 0x1e0630u: goto label_1e0630;
        case 0x1e0634u: goto label_1e0634;
        case 0x1e0638u: goto label_1e0638;
        case 0x1e063cu: goto label_1e063c;
        case 0x1e0640u: goto label_1e0640;
        case 0x1e0644u: goto label_1e0644;
        case 0x1e0648u: goto label_1e0648;
        case 0x1e064cu: goto label_1e064c;
        case 0x1e0650u: goto label_1e0650;
        case 0x1e0654u: goto label_1e0654;
        case 0x1e0658u: goto label_1e0658;
        case 0x1e065cu: goto label_1e065c;
        case 0x1e0660u: goto label_1e0660;
        case 0x1e0664u: goto label_1e0664;
        case 0x1e0668u: goto label_1e0668;
        case 0x1e066cu: goto label_1e066c;
        case 0x1e0670u: goto label_1e0670;
        case 0x1e0674u: goto label_1e0674;
        case 0x1e0678u: goto label_1e0678;
        case 0x1e067cu: goto label_1e067c;
        case 0x1e0680u: goto label_1e0680;
        case 0x1e0684u: goto label_1e0684;
        case 0x1e0688u: goto label_1e0688;
        case 0x1e068cu: goto label_1e068c;
        case 0x1e0690u: goto label_1e0690;
        case 0x1e0694u: goto label_1e0694;
        case 0x1e0698u: goto label_1e0698;
        case 0x1e069cu: goto label_1e069c;
        case 0x1e06a0u: goto label_1e06a0;
        case 0x1e06a4u: goto label_1e06a4;
        case 0x1e06a8u: goto label_1e06a8;
        case 0x1e06acu: goto label_1e06ac;
        case 0x1e06b0u: goto label_1e06b0;
        case 0x1e06b4u: goto label_1e06b4;
        case 0x1e06b8u: goto label_1e06b8;
        case 0x1e06bcu: goto label_1e06bc;
        case 0x1e06c0u: goto label_1e06c0;
        case 0x1e06c4u: goto label_1e06c4;
        case 0x1e06c8u: goto label_1e06c8;
        case 0x1e06ccu: goto label_1e06cc;
        case 0x1e06d0u: goto label_1e06d0;
        case 0x1e06d4u: goto label_1e06d4;
        case 0x1e06d8u: goto label_1e06d8;
        case 0x1e06dcu: goto label_1e06dc;
        case 0x1e06e0u: goto label_1e06e0;
        case 0x1e06e4u: goto label_1e06e4;
        case 0x1e06e8u: goto label_1e06e8;
        case 0x1e06ecu: goto label_1e06ec;
        case 0x1e06f0u: goto label_1e06f0;
        case 0x1e06f4u: goto label_1e06f4;
        case 0x1e06f8u: goto label_1e06f8;
        case 0x1e06fcu: goto label_1e06fc;
        case 0x1e0700u: goto label_1e0700;
        case 0x1e0704u: goto label_1e0704;
        case 0x1e0708u: goto label_1e0708;
        case 0x1e070cu: goto label_1e070c;
        case 0x1e0710u: goto label_1e0710;
        case 0x1e0714u: goto label_1e0714;
        case 0x1e0718u: goto label_1e0718;
        case 0x1e071cu: goto label_1e071c;
        case 0x1e0720u: goto label_1e0720;
        case 0x1e0724u: goto label_1e0724;
        case 0x1e0728u: goto label_1e0728;
        case 0x1e072cu: goto label_1e072c;
        case 0x1e0730u: goto label_1e0730;
        case 0x1e0734u: goto label_1e0734;
        case 0x1e0738u: goto label_1e0738;
        case 0x1e073cu: goto label_1e073c;
        case 0x1e0740u: goto label_1e0740;
        case 0x1e0744u: goto label_1e0744;
        case 0x1e0748u: goto label_1e0748;
        case 0x1e074cu: goto label_1e074c;
        case 0x1e0750u: goto label_1e0750;
        case 0x1e0754u: goto label_1e0754;
        case 0x1e0758u: goto label_1e0758;
        case 0x1e075cu: goto label_1e075c;
        case 0x1e0760u: goto label_1e0760;
        case 0x1e0764u: goto label_1e0764;
        case 0x1e0768u: goto label_1e0768;
        case 0x1e076cu: goto label_1e076c;
        case 0x1e0770u: goto label_1e0770;
        case 0x1e0774u: goto label_1e0774;
        case 0x1e0778u: goto label_1e0778;
        case 0x1e077cu: goto label_1e077c;
        case 0x1e0780u: goto label_1e0780;
        case 0x1e0784u: goto label_1e0784;
        case 0x1e0788u: goto label_1e0788;
        case 0x1e078cu: goto label_1e078c;
        case 0x1e0790u: goto label_1e0790;
        case 0x1e0794u: goto label_1e0794;
        case 0x1e0798u: goto label_1e0798;
        case 0x1e079cu: goto label_1e079c;
        case 0x1e07a0u: goto label_1e07a0;
        case 0x1e07a4u: goto label_1e07a4;
        case 0x1e07a8u: goto label_1e07a8;
        case 0x1e07acu: goto label_1e07ac;
        case 0x1e07b0u: goto label_1e07b0;
        case 0x1e07b4u: goto label_1e07b4;
        case 0x1e07b8u: goto label_1e07b8;
        case 0x1e07bcu: goto label_1e07bc;
        case 0x1e07c0u: goto label_1e07c0;
        case 0x1e07c4u: goto label_1e07c4;
        case 0x1e07c8u: goto label_1e07c8;
        case 0x1e07ccu: goto label_1e07cc;
        case 0x1e07d0u: goto label_1e07d0;
        case 0x1e07d4u: goto label_1e07d4;
        case 0x1e07d8u: goto label_1e07d8;
        case 0x1e07dcu: goto label_1e07dc;
        case 0x1e07e0u: goto label_1e07e0;
        case 0x1e07e4u: goto label_1e07e4;
        case 0x1e07e8u: goto label_1e07e8;
        case 0x1e07ecu: goto label_1e07ec;
        case 0x1e07f0u: goto label_1e07f0;
        case 0x1e07f4u: goto label_1e07f4;
        case 0x1e07f8u: goto label_1e07f8;
        case 0x1e07fcu: goto label_1e07fc;
        case 0x1e0800u: goto label_1e0800;
        case 0x1e0804u: goto label_1e0804;
        case 0x1e0808u: goto label_1e0808;
        case 0x1e080cu: goto label_1e080c;
        case 0x1e0810u: goto label_1e0810;
        case 0x1e0814u: goto label_1e0814;
        case 0x1e0818u: goto label_1e0818;
        case 0x1e081cu: goto label_1e081c;
        case 0x1e0820u: goto label_1e0820;
        case 0x1e0824u: goto label_1e0824;
        case 0x1e0828u: goto label_1e0828;
        case 0x1e082cu: goto label_1e082c;
        case 0x1e0830u: goto label_1e0830;
        case 0x1e0834u: goto label_1e0834;
        case 0x1e0838u: goto label_1e0838;
        case 0x1e083cu: goto label_1e083c;
        case 0x1e0840u: goto label_1e0840;
        case 0x1e0844u: goto label_1e0844;
        case 0x1e0848u: goto label_1e0848;
        case 0x1e084cu: goto label_1e084c;
        case 0x1e0850u: goto label_1e0850;
        case 0x1e0854u: goto label_1e0854;
        case 0x1e0858u: goto label_1e0858;
        case 0x1e085cu: goto label_1e085c;
        case 0x1e0860u: goto label_1e0860;
        case 0x1e0864u: goto label_1e0864;
        case 0x1e0868u: goto label_1e0868;
        case 0x1e086cu: goto label_1e086c;
        case 0x1e0870u: goto label_1e0870;
        case 0x1e0874u: goto label_1e0874;
        case 0x1e0878u: goto label_1e0878;
        case 0x1e087cu: goto label_1e087c;
        case 0x1e0880u: goto label_1e0880;
        case 0x1e0884u: goto label_1e0884;
        case 0x1e0888u: goto label_1e0888;
        case 0x1e088cu: goto label_1e088c;
        case 0x1e0890u: goto label_1e0890;
        case 0x1e0894u: goto label_1e0894;
        case 0x1e0898u: goto label_1e0898;
        case 0x1e089cu: goto label_1e089c;
        case 0x1e08a0u: goto label_1e08a0;
        case 0x1e08a4u: goto label_1e08a4;
        case 0x1e08a8u: goto label_1e08a8;
        case 0x1e08acu: goto label_1e08ac;
        case 0x1e08b0u: goto label_1e08b0;
        case 0x1e08b4u: goto label_1e08b4;
        case 0x1e08b8u: goto label_1e08b8;
        case 0x1e08bcu: goto label_1e08bc;
        case 0x1e08c0u: goto label_1e08c0;
        case 0x1e08c4u: goto label_1e08c4;
        case 0x1e08c8u: goto label_1e08c8;
        case 0x1e08ccu: goto label_1e08cc;
        case 0x1e08d0u: goto label_1e08d0;
        case 0x1e08d4u: goto label_1e08d4;
        case 0x1e08d8u: goto label_1e08d8;
        case 0x1e08dcu: goto label_1e08dc;
        case 0x1e08e0u: goto label_1e08e0;
        case 0x1e08e4u: goto label_1e08e4;
        case 0x1e08e8u: goto label_1e08e8;
        case 0x1e08ecu: goto label_1e08ec;
        case 0x1e08f0u: goto label_1e08f0;
        case 0x1e08f4u: goto label_1e08f4;
        case 0x1e08f8u: goto label_1e08f8;
        case 0x1e08fcu: goto label_1e08fc;
        case 0x1e0900u: goto label_1e0900;
        case 0x1e0904u: goto label_1e0904;
        case 0x1e0908u: goto label_1e0908;
        case 0x1e090cu: goto label_1e090c;
        case 0x1e0910u: goto label_1e0910;
        case 0x1e0914u: goto label_1e0914;
        case 0x1e0918u: goto label_1e0918;
        case 0x1e091cu: goto label_1e091c;
        case 0x1e0920u: goto label_1e0920;
        case 0x1e0924u: goto label_1e0924;
        case 0x1e0928u: goto label_1e0928;
        case 0x1e092cu: goto label_1e092c;
        case 0x1e0930u: goto label_1e0930;
        case 0x1e0934u: goto label_1e0934;
        case 0x1e0938u: goto label_1e0938;
        case 0x1e093cu: goto label_1e093c;
        case 0x1e0940u: goto label_1e0940;
        case 0x1e0944u: goto label_1e0944;
        case 0x1e0948u: goto label_1e0948;
        case 0x1e094cu: goto label_1e094c;
        case 0x1e0950u: goto label_1e0950;
        case 0x1e0954u: goto label_1e0954;
        case 0x1e0958u: goto label_1e0958;
        case 0x1e095cu: goto label_1e095c;
        case 0x1e0960u: goto label_1e0960;
        case 0x1e0964u: goto label_1e0964;
        case 0x1e0968u: goto label_1e0968;
        case 0x1e096cu: goto label_1e096c;
        case 0x1e0970u: goto label_1e0970;
        case 0x1e0974u: goto label_1e0974;
        case 0x1e0978u: goto label_1e0978;
        case 0x1e097cu: goto label_1e097c;
        case 0x1e0980u: goto label_1e0980;
        case 0x1e0984u: goto label_1e0984;
        case 0x1e0988u: goto label_1e0988;
        case 0x1e098cu: goto label_1e098c;
        case 0x1e0990u: goto label_1e0990;
        case 0x1e0994u: goto label_1e0994;
        case 0x1e0998u: goto label_1e0998;
        case 0x1e099cu: goto label_1e099c;
        case 0x1e09a0u: goto label_1e09a0;
        case 0x1e09a4u: goto label_1e09a4;
        case 0x1e09a8u: goto label_1e09a8;
        case 0x1e09acu: goto label_1e09ac;
        case 0x1e09b0u: goto label_1e09b0;
        case 0x1e09b4u: goto label_1e09b4;
        case 0x1e09b8u: goto label_1e09b8;
        case 0x1e09bcu: goto label_1e09bc;
        case 0x1e09c0u: goto label_1e09c0;
        case 0x1e09c4u: goto label_1e09c4;
        case 0x1e09c8u: goto label_1e09c8;
        case 0x1e09ccu: goto label_1e09cc;
        case 0x1e09d0u: goto label_1e09d0;
        case 0x1e09d4u: goto label_1e09d4;
        case 0x1e09d8u: goto label_1e09d8;
        case 0x1e09dcu: goto label_1e09dc;
        case 0x1e09e0u: goto label_1e09e0;
        case 0x1e09e4u: goto label_1e09e4;
        case 0x1e09e8u: goto label_1e09e8;
        case 0x1e09ecu: goto label_1e09ec;
        case 0x1e09f0u: goto label_1e09f0;
        case 0x1e09f4u: goto label_1e09f4;
        case 0x1e09f8u: goto label_1e09f8;
        case 0x1e09fcu: goto label_1e09fc;
        case 0x1e0a00u: goto label_1e0a00;
        case 0x1e0a04u: goto label_1e0a04;
        case 0x1e0a08u: goto label_1e0a08;
        case 0x1e0a0cu: goto label_1e0a0c;
        case 0x1e0a10u: goto label_1e0a10;
        case 0x1e0a14u: goto label_1e0a14;
        case 0x1e0a18u: goto label_1e0a18;
        case 0x1e0a1cu: goto label_1e0a1c;
        case 0x1e0a20u: goto label_1e0a20;
        case 0x1e0a24u: goto label_1e0a24;
        case 0x1e0a28u: goto label_1e0a28;
        case 0x1e0a2cu: goto label_1e0a2c;
        case 0x1e0a30u: goto label_1e0a30;
        case 0x1e0a34u: goto label_1e0a34;
        case 0x1e0a38u: goto label_1e0a38;
        case 0x1e0a3cu: goto label_1e0a3c;
        case 0x1e0a40u: goto label_1e0a40;
        case 0x1e0a44u: goto label_1e0a44;
        case 0x1e0a48u: goto label_1e0a48;
        case 0x1e0a4cu: goto label_1e0a4c;
        case 0x1e0a50u: goto label_1e0a50;
        case 0x1e0a54u: goto label_1e0a54;
        case 0x1e0a58u: goto label_1e0a58;
        case 0x1e0a5cu: goto label_1e0a5c;
        case 0x1e0a60u: goto label_1e0a60;
        case 0x1e0a64u: goto label_1e0a64;
        case 0x1e0a68u: goto label_1e0a68;
        case 0x1e0a6cu: goto label_1e0a6c;
        case 0x1e0a70u: goto label_1e0a70;
        case 0x1e0a74u: goto label_1e0a74;
        case 0x1e0a78u: goto label_1e0a78;
        case 0x1e0a7cu: goto label_1e0a7c;
        case 0x1e0a80u: goto label_1e0a80;
        case 0x1e0a84u: goto label_1e0a84;
        case 0x1e0a88u: goto label_1e0a88;
        case 0x1e0a8cu: goto label_1e0a8c;
        case 0x1e0a90u: goto label_1e0a90;
        case 0x1e0a94u: goto label_1e0a94;
        case 0x1e0a98u: goto label_1e0a98;
        case 0x1e0a9cu: goto label_1e0a9c;
        case 0x1e0aa0u: goto label_1e0aa0;
        case 0x1e0aa4u: goto label_1e0aa4;
        case 0x1e0aa8u: goto label_1e0aa8;
        case 0x1e0aacu: goto label_1e0aac;
        case 0x1e0ab0u: goto label_1e0ab0;
        case 0x1e0ab4u: goto label_1e0ab4;
        case 0x1e0ab8u: goto label_1e0ab8;
        case 0x1e0abcu: goto label_1e0abc;
        case 0x1e0ac0u: goto label_1e0ac0;
        case 0x1e0ac4u: goto label_1e0ac4;
        case 0x1e0ac8u: goto label_1e0ac8;
        case 0x1e0accu: goto label_1e0acc;
        case 0x1e0ad0u: goto label_1e0ad0;
        case 0x1e0ad4u: goto label_1e0ad4;
        case 0x1e0ad8u: goto label_1e0ad8;
        case 0x1e0adcu: goto label_1e0adc;
        case 0x1e0ae0u: goto label_1e0ae0;
        case 0x1e0ae4u: goto label_1e0ae4;
        case 0x1e0ae8u: goto label_1e0ae8;
        case 0x1e0aecu: goto label_1e0aec;
        case 0x1e0af0u: goto label_1e0af0;
        case 0x1e0af4u: goto label_1e0af4;
        case 0x1e0af8u: goto label_1e0af8;
        case 0x1e0afcu: goto label_1e0afc;
        case 0x1e0b00u: goto label_1e0b00;
        case 0x1e0b04u: goto label_1e0b04;
        case 0x1e0b08u: goto label_1e0b08;
        case 0x1e0b0cu: goto label_1e0b0c;
        case 0x1e0b10u: goto label_1e0b10;
        case 0x1e0b14u: goto label_1e0b14;
        case 0x1e0b18u: goto label_1e0b18;
        case 0x1e0b1cu: goto label_1e0b1c;
        case 0x1e0b20u: goto label_1e0b20;
        case 0x1e0b24u: goto label_1e0b24;
        case 0x1e0b28u: goto label_1e0b28;
        case 0x1e0b2cu: goto label_1e0b2c;
        case 0x1e0b30u: goto label_1e0b30;
        case 0x1e0b34u: goto label_1e0b34;
        case 0x1e0b38u: goto label_1e0b38;
        case 0x1e0b3cu: goto label_1e0b3c;
        case 0x1e0b40u: goto label_1e0b40;
        case 0x1e0b44u: goto label_1e0b44;
        case 0x1e0b48u: goto label_1e0b48;
        case 0x1e0b4cu: goto label_1e0b4c;
        case 0x1e0b50u: goto label_1e0b50;
        case 0x1e0b54u: goto label_1e0b54;
        case 0x1e0b58u: goto label_1e0b58;
        case 0x1e0b5cu: goto label_1e0b5c;
        case 0x1e0b60u: goto label_1e0b60;
        case 0x1e0b64u: goto label_1e0b64;
        case 0x1e0b68u: goto label_1e0b68;
        case 0x1e0b6cu: goto label_1e0b6c;
        case 0x1e0b70u: goto label_1e0b70;
        case 0x1e0b74u: goto label_1e0b74;
        case 0x1e0b78u: goto label_1e0b78;
        case 0x1e0b7cu: goto label_1e0b7c;
        case 0x1e0b80u: goto label_1e0b80;
        case 0x1e0b84u: goto label_1e0b84;
        case 0x1e0b88u: goto label_1e0b88;
        case 0x1e0b8cu: goto label_1e0b8c;
        case 0x1e0b90u: goto label_1e0b90;
        case 0x1e0b94u: goto label_1e0b94;
        case 0x1e0b98u: goto label_1e0b98;
        case 0x1e0b9cu: goto label_1e0b9c;
        case 0x1e0ba0u: goto label_1e0ba0;
        case 0x1e0ba4u: goto label_1e0ba4;
        case 0x1e0ba8u: goto label_1e0ba8;
        case 0x1e0bacu: goto label_1e0bac;
        case 0x1e0bb0u: goto label_1e0bb0;
        case 0x1e0bb4u: goto label_1e0bb4;
        case 0x1e0bb8u: goto label_1e0bb8;
        case 0x1e0bbcu: goto label_1e0bbc;
        case 0x1e0bc0u: goto label_1e0bc0;
        case 0x1e0bc4u: goto label_1e0bc4;
        case 0x1e0bc8u: goto label_1e0bc8;
        case 0x1e0bccu: goto label_1e0bcc;
        case 0x1e0bd0u: goto label_1e0bd0;
        case 0x1e0bd4u: goto label_1e0bd4;
        case 0x1e0bd8u: goto label_1e0bd8;
        case 0x1e0bdcu: goto label_1e0bdc;
        case 0x1e0be0u: goto label_1e0be0;
        case 0x1e0be4u: goto label_1e0be4;
        case 0x1e0be8u: goto label_1e0be8;
        case 0x1e0becu: goto label_1e0bec;
        case 0x1e0bf0u: goto label_1e0bf0;
        case 0x1e0bf4u: goto label_1e0bf4;
        case 0x1e0bf8u: goto label_1e0bf8;
        case 0x1e0bfcu: goto label_1e0bfc;
        case 0x1e0c00u: goto label_1e0c00;
        case 0x1e0c04u: goto label_1e0c04;
        case 0x1e0c08u: goto label_1e0c08;
        case 0x1e0c0cu: goto label_1e0c0c;
        case 0x1e0c10u: goto label_1e0c10;
        case 0x1e0c14u: goto label_1e0c14;
        case 0x1e0c18u: goto label_1e0c18;
        case 0x1e0c1cu: goto label_1e0c1c;
        case 0x1e0c20u: goto label_1e0c20;
        case 0x1e0c24u: goto label_1e0c24;
        case 0x1e0c28u: goto label_1e0c28;
        case 0x1e0c2cu: goto label_1e0c2c;
        case 0x1e0c30u: goto label_1e0c30;
        case 0x1e0c34u: goto label_1e0c34;
        case 0x1e0c38u: goto label_1e0c38;
        case 0x1e0c3cu: goto label_1e0c3c;
        case 0x1e0c40u: goto label_1e0c40;
        case 0x1e0c44u: goto label_1e0c44;
        case 0x1e0c48u: goto label_1e0c48;
        case 0x1e0c4cu: goto label_1e0c4c;
        case 0x1e0c50u: goto label_1e0c50;
        case 0x1e0c54u: goto label_1e0c54;
        case 0x1e0c58u: goto label_1e0c58;
        case 0x1e0c5cu: goto label_1e0c5c;
        case 0x1e0c60u: goto label_1e0c60;
        case 0x1e0c64u: goto label_1e0c64;
        case 0x1e0c68u: goto label_1e0c68;
        case 0x1e0c6cu: goto label_1e0c6c;
        case 0x1e0c70u: goto label_1e0c70;
        case 0x1e0c74u: goto label_1e0c74;
        case 0x1e0c78u: goto label_1e0c78;
        case 0x1e0c7cu: goto label_1e0c7c;
        case 0x1e0c80u: goto label_1e0c80;
        case 0x1e0c84u: goto label_1e0c84;
        case 0x1e0c88u: goto label_1e0c88;
        case 0x1e0c8cu: goto label_1e0c8c;
        case 0x1e0c90u: goto label_1e0c90;
        case 0x1e0c94u: goto label_1e0c94;
        case 0x1e0c98u: goto label_1e0c98;
        case 0x1e0c9cu: goto label_1e0c9c;
        case 0x1e0ca0u: goto label_1e0ca0;
        case 0x1e0ca4u: goto label_1e0ca4;
        case 0x1e0ca8u: goto label_1e0ca8;
        case 0x1e0cacu: goto label_1e0cac;
        case 0x1e0cb0u: goto label_1e0cb0;
        case 0x1e0cb4u: goto label_1e0cb4;
        case 0x1e0cb8u: goto label_1e0cb8;
        case 0x1e0cbcu: goto label_1e0cbc;
        case 0x1e0cc0u: goto label_1e0cc0;
        case 0x1e0cc4u: goto label_1e0cc4;
        case 0x1e0cc8u: goto label_1e0cc8;
        case 0x1e0cccu: goto label_1e0ccc;
        case 0x1e0cd0u: goto label_1e0cd0;
        case 0x1e0cd4u: goto label_1e0cd4;
        case 0x1e0cd8u: goto label_1e0cd8;
        case 0x1e0cdcu: goto label_1e0cdc;
        case 0x1e0ce0u: goto label_1e0ce0;
        case 0x1e0ce4u: goto label_1e0ce4;
        case 0x1e0ce8u: goto label_1e0ce8;
        case 0x1e0cecu: goto label_1e0cec;
        case 0x1e0cf0u: goto label_1e0cf0;
        case 0x1e0cf4u: goto label_1e0cf4;
        case 0x1e0cf8u: goto label_1e0cf8;
        case 0x1e0cfcu: goto label_1e0cfc;
        case 0x1e0d00u: goto label_1e0d00;
        case 0x1e0d04u: goto label_1e0d04;
        case 0x1e0d08u: goto label_1e0d08;
        case 0x1e0d0cu: goto label_1e0d0c;
        case 0x1e0d10u: goto label_1e0d10;
        case 0x1e0d14u: goto label_1e0d14;
        case 0x1e0d18u: goto label_1e0d18;
        case 0x1e0d1cu: goto label_1e0d1c;
        case 0x1e0d20u: goto label_1e0d20;
        case 0x1e0d24u: goto label_1e0d24;
        case 0x1e0d28u: goto label_1e0d28;
        case 0x1e0d2cu: goto label_1e0d2c;
        case 0x1e0d30u: goto label_1e0d30;
        case 0x1e0d34u: goto label_1e0d34;
        case 0x1e0d38u: goto label_1e0d38;
        case 0x1e0d3cu: goto label_1e0d3c;
        case 0x1e0d40u: goto label_1e0d40;
        case 0x1e0d44u: goto label_1e0d44;
        case 0x1e0d48u: goto label_1e0d48;
        case 0x1e0d4cu: goto label_1e0d4c;
        case 0x1e0d50u: goto label_1e0d50;
        case 0x1e0d54u: goto label_1e0d54;
        case 0x1e0d58u: goto label_1e0d58;
        case 0x1e0d5cu: goto label_1e0d5c;
        case 0x1e0d60u: goto label_1e0d60;
        case 0x1e0d64u: goto label_1e0d64;
        case 0x1e0d68u: goto label_1e0d68;
        case 0x1e0d6cu: goto label_1e0d6c;
        case 0x1e0d70u: goto label_1e0d70;
        case 0x1e0d74u: goto label_1e0d74;
        case 0x1e0d78u: goto label_1e0d78;
        case 0x1e0d7cu: goto label_1e0d7c;
        case 0x1e0d80u: goto label_1e0d80;
        case 0x1e0d84u: goto label_1e0d84;
        case 0x1e0d88u: goto label_1e0d88;
        case 0x1e0d8cu: goto label_1e0d8c;
        case 0x1e0d90u: goto label_1e0d90;
        case 0x1e0d94u: goto label_1e0d94;
        case 0x1e0d98u: goto label_1e0d98;
        case 0x1e0d9cu: goto label_1e0d9c;
        case 0x1e0da0u: goto label_1e0da0;
        case 0x1e0da4u: goto label_1e0da4;
        case 0x1e0da8u: goto label_1e0da8;
        case 0x1e0dacu: goto label_1e0dac;
        case 0x1e0db0u: goto label_1e0db0;
        case 0x1e0db4u: goto label_1e0db4;
        case 0x1e0db8u: goto label_1e0db8;
        case 0x1e0dbcu: goto label_1e0dbc;
        case 0x1e0dc0u: goto label_1e0dc0;
        case 0x1e0dc4u: goto label_1e0dc4;
        default: return;
    }

label_1e05f8:
    // 0x1e05f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e05f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1e05fc:
    // 0x1e05fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e05fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e0600:
    // 0x1e0600: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e0600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1e0604:
    // 0x1e0604: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e0604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0608:
    // 0x1e0608: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e0608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e060c:
    // 0x1e060c: 0x0  nop
    ctx->pc = 0x1e060cu;
    // NOP
label_1e0610:
    // 0x1e0610: 0x27828d28  addiu       $v0, $gp, -0x72D8
    ctx->pc = 0x1e0610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937896));
label_1e0614:
    // 0x1e0614: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x1e0614u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e0618:
    // 0x1e0618: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e0618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e061c:
    // 0x1e061c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e0620:
    if (ctx->pc == 0x1E0620u) {
        ctx->pc = 0x1E0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E061Cu;
        // 0x1e0620: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0624u;
        goto label_1e0624;
    }
    ctx->pc = 0x1E061Cu;
    {
        const bool branch_taken_0x1e061c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E061Cu;
        // 0x1e0620: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e061c) {
            ctx->pc = 0x1E0630u;
            goto label_1e0630;
        }
    }
    ctx->pc = 0x1E0624u;
label_1e0624:
    // 0x1e0624: 0xc070080  jal         func_1C0200
label_1e0628:
    if (ctx->pc == 0x1E0628u) {
        ctx->pc = 0x1E0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0624u;
        // 0x1e0628: 0x240516f0  addiu       $a1, $zero, 0x16F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E062Cu;
        goto label_1e062c;
    }
    ctx->pc = 0x1E0624u;
    SET_GPR_U32(ctx, 31, 0x1E062Cu);
    ctx->pc = 0x1E0628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0624u;
    // 0x1e0628: 0x240516f0  addiu       $a1, $zero, 0x16F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E062Cu;
label_1e062c:
    // 0x1e062c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1e062cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1e0630:
    // 0x1e0630: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e0630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e0634:
    // 0x1e0634: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e0634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e0638:
    // 0x1e0638: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1e063c:
    if (ctx->pc == 0x1E063Cu) {
        ctx->pc = 0x1E063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0638u;
        // 0x1e063c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0640u;
        goto label_1e0640;
    }
    ctx->pc = 0x1E0638u;
    {
        const bool branch_taken_0x1e0638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0638u;
        // 0x1e063c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0638) {
            ctx->pc = 0x1E060Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e060c;
        }
    }
    ctx->pc = 0x1E0640u;
label_1e0640:
    // 0x1e0640: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e0640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e0644:
    // 0x1e0644: 0xaf808d10  sw          $zero, -0x72F0($gp)
    ctx->pc = 0x1e0644u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 0));
label_1e0648:
    // 0x1e0648: 0xaf928d18  sw          $s2, -0x72E8($gp)
    ctx->pc = 0x1e0648u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937880), GPR_U32(ctx, 18));
label_1e064c:
    // 0x1e064c: 0xaf808d14  sw          $zero, -0x72EC($gp)
    ctx->pc = 0x1e064cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937876), GPR_U32(ctx, 0));
label_1e0650:
    // 0x1e0650: 0xaf808d1c  sw          $zero, -0x72E4($gp)
    ctx->pc = 0x1e0650u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937884), GPR_U32(ctx, 0));
label_1e0654:
    // 0x1e0654: 0xaf808d20  sw          $zero, -0x72E0($gp)
    ctx->pc = 0x1e0654u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937888), GPR_U32(ctx, 0));
label_1e0658:
    // 0x1e0658: 0xc078230  jal         func_1E08C0
label_1e065c:
    if (ctx->pc == 0x1E065Cu) {
        ctx->pc = 0x1E065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0658u;
        // 0x1e065c: 0xaf808d24  sw          $zero, -0x72DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937892), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0660u;
        goto label_1e0660;
    }
    ctx->pc = 0x1E0658u;
    SET_GPR_U32(ctx, 31, 0x1E0660u);
    ctx->pc = 0x1E065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0658u;
    // 0x1e065c: 0xaf808d24  sw          $zero, -0x72DC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937892), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E08C0u;
    goto label_1e08c0;
    ctx->pc = 0x1E0660u;
label_1e0660:
    // 0x1e0660: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e0660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0664:
    // 0x1e0664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0668:
    // 0x1e0668: 0xc06dfd4  jal         func_1B7F50
label_1e066c:
    if (ctx->pc == 0x1E066Cu) {
        ctx->pc = 0x1E066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0668u;
        // 0x1e066c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0670u;
        goto label_1e0670;
    }
    ctx->pc = 0x1E0668u;
    SET_GPR_U32(ctx, 31, 0x1E0670u);
    ctx->pc = 0x1E066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0668u;
    // 0x1e066c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F50u;
    { ctx->pc = 0x1b7f50; return; }
    ctx->pc = 0x1E0670u;
label_1e0670:
    // 0x1e0670: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e0670u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0674:
    // 0x1e0674: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e0674u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0678:
    // 0x1e0678: 0x27828d28  addiu       $v0, $gp, -0x72D8
    ctx->pc = 0x1e0678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937896));
label_1e067c:
    // 0x1e067c: 0x2405016e  addiu       $a1, $zero, 0x16E
    ctx->pc = 0x1e067cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
label_1e0680:
    // 0x1e0680: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1e0680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1e0684:
    // 0x1e0684: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1e0684u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e0688:
    // 0x1e0688: 0xc05e234  jal         func_1788D0
label_1e068c:
    if (ctx->pc == 0x1E068Cu) {
        ctx->pc = 0x1E068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0688u;
        // 0x1e068c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0690u;
        goto label_1e0690;
    }
    ctx->pc = 0x1E0688u;
    SET_GPR_U32(ctx, 31, 0x1E0690u);
    ctx->pc = 0x1E068Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0688u;
    // 0x1e068c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E0688u, 0x1E0690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0690u;
label_1e0690:
    // 0x1e0690: 0xc070834  jal         func_1C20D0
label_1e0694:
    if (ctx->pc == 0x1E0694u) {
        ctx->pc = 0x1E0694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0690u;
        // 0x1e0694: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0698u;
        goto label_1e0698;
    }
    ctx->pc = 0x1E0690u;
    SET_GPR_U32(ctx, 31, 0x1E0698u);
    ctx->pc = 0x1E0694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0690u;
    // 0x1e0694: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1E0698u;
label_1e0698:
    // 0x1e0698: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e0698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e069c:
    // 0x1e069c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1e069cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e06a0:
    // 0x1e06a0: 0x240200a8  addiu       $v0, $zero, 0xA8
    ctx->pc = 0x1e06a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1e06a4:
    // 0x1e06a4: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x1e06a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1e06a8:
    // 0x1e06a8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e06a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e06ac:
    // 0x1e06ac: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1e06acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1e06b0:
    // 0x1e06b0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e06b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e06b4:
    // 0x1e06b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e06b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e06b8:
    // 0x1e06b8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e06b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e06bc:
    // 0x1e06bc: 0x2407008c  addiu       $a3, $zero, 0x8C
    ctx->pc = 0x1e06bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_1e06c0:
    // 0x1e06c0: 0xffaa0010  sd          $t2, 0x10($sp)
    ctx->pc = 0x1e06c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 10));
label_1e06c4:
    // 0x1e06c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e06c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e06c8:
    // 0x1e06c8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e06c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e06cc:
    // 0x1e06cc: 0x24090280  addiu       $t1, $zero, 0x280
    ctx->pc = 0x1e06ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1e06d0:
    // 0x1e06d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e06d4:
    // 0x1e06d4: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x1e06d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_1e06d8:
    // 0x1e06d8: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1e06d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1e06dc:
    // 0x1e06dc: 0xc05ded8  jal         func_177B60
label_1e06e0:
    if (ctx->pc == 0x1E06E0u) {
        ctx->pc = 0x1E06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06DCu;
        // 0x1e06e0: 0x240b0168  addiu       $t3, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E06E4u;
        goto label_1e06e4;
    }
    ctx->pc = 0x1E06DCu;
    SET_GPR_U32(ctx, 31, 0x1E06E4u);
    ctx->pc = 0x1E06E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E06DCu;
    // 0x1e06e0: 0x240b0168  addiu       $t3, $zero, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x1E06DCu, 0x1E06E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E06E4u;
label_1e06e4:
    // 0x1e06e4: 0xa22000cb  sb          $zero, 0xCB($s1)
    ctx->pc = 0x1e06e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 203), (uint8_t)GPR_U32(ctx, 0));
label_1e06e8:
    // 0x1e06e8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1e06e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1e06ec:
    // 0x1e06ec: 0xc070834  jal         func_1C20D0
label_1e06f0:
    if (ctx->pc == 0x1E06F0u) {
        ctx->pc = 0x1E06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06ECu;
        // 0x1e06f0: 0xa220009b  sb          $zero, 0x9B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E06F4u;
        goto label_1e06f4;
    }
    ctx->pc = 0x1E06ECu;
    SET_GPR_U32(ctx, 31, 0x1E06F4u);
    ctx->pc = 0x1E06F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E06ECu;
    // 0x1e06f0: 0xa220009b  sb          $zero, 0x9B($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1E06F4u;
label_1e06f4:
    // 0x1e06f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e06f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e06f8:
    // 0x1e06f8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1e06f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e06fc:
    // 0x1e06fc: 0x240200a8  addiu       $v0, $zero, 0xA8
    ctx->pc = 0x1e06fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1e0700:
    // 0x1e0700: 0x26240b80  addiu       $a0, $s1, 0xB80
    ctx->pc = 0x1e0700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2944));
label_1e0704:
    // 0x1e0704: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e0704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e0708:
    // 0x1e0708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e070c:
    // 0x1e070c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e0710:
    // 0x1e0710: 0x24070176  addiu       $a3, $zero, 0x176
    ctx->pc = 0x1e0710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
label_1e0714:
    // 0x1e0714: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e0714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e0718:
    // 0x1e0718: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x1e0718u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1e071c:
    // 0x1e071c: 0xffaa0010  sd          $t2, 0x10($sp)
    ctx->pc = 0x1e071cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 10));
label_1e0720:
    // 0x1e0720: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e0720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e0724:
    // 0x1e0724: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e0724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e0728:
    // 0x1e0728: 0x24090280  addiu       $t1, $zero, 0x280
    ctx->pc = 0x1e0728u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1e072c:
    // 0x1e072c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0730:
    // 0x1e0730: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x1e0730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_1e0734:
    // 0x1e0734: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1e0734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1e0738:
    // 0x1e0738: 0xc05ded8  jal         func_177B60
label_1e073c:
    if (ctx->pc == 0x1E073Cu) {
        ctx->pc = 0x1E073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0738u;
        // 0x1e073c: 0x240b0168  addiu       $t3, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0740u;
        goto label_1e0740;
    }
    ctx->pc = 0x1E0738u;
    SET_GPR_U32(ctx, 31, 0x1E0740u);
    ctx->pc = 0x1E073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0738u;
    // 0x1e073c: 0x240b0168  addiu       $t3, $zero, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x1E0738u, 0x1E0740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0740u;
label_1e0740:
    // 0x1e0740: 0xa2200c23  sb          $zero, 0xC23($s1)
    ctx->pc = 0x1e0740u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3107), (uint8_t)GPR_U32(ctx, 0));
label_1e0744:
    // 0x1e0744: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e0744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0748:
    // 0x1e0748: 0xa2200bf3  sb          $zero, 0xBF3($s1)
    ctx->pc = 0x1e0748u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3059), (uint8_t)GPR_U32(ctx, 0));
label_1e074c:
    // 0x1e074c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e074cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0750:
    // 0x1e0750: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0754:
    // 0x1e0754: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e0754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e0758:
    // 0x1e0758: 0x2329821  addu        $s3, $s1, $s2
    ctx->pc = 0x1e0758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1e075c:
    // 0x1e075c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e0760:
    // 0x1e0760: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e0760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e0764:
    // 0x1e0764: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e0764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e0768:
    // 0x1e0768: 0x266400e0  addiu       $a0, $s3, 0xE0
    ctx->pc = 0x1e0768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
label_1e076c:
    // 0x1e076c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e076cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0770:
    // 0x1e0770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0774:
    // 0x1e0774: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1e0774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1e0778:
    // 0x1e0778: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1e0778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e077c:
    // 0x1e077c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e077cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e0780:
    // 0x1e0780: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x1e0780u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1e0784:
    // 0x1e0784: 0xdc252688  ld          $a1, 0x2688($at)
    ctx->pc = 0x1e0784u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 9864)));
label_1e0788:
    // 0x1e0788: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e0788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e078c:
    // 0x1e078c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e078cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0790:
    // 0x1e0790: 0xc05de30  jal         func_1778C0
label_1e0794:
    if (ctx->pc == 0x1E0794u) {
        ctx->pc = 0x1E0794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0790u;
        // 0x1e0794: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0798u;
        goto label_1e0798;
    }
    ctx->pc = 0x1E0790u;
    SET_GPR_U32(ctx, 31, 0x1E0798u);
    ctx->pc = 0x1E0794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0790u;
    // 0x1e0794: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E0790u, 0x1E0798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0798u;
label_1e0798:
    // 0x1e0798: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1e0798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e079c:
    // 0x1e079c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e079cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e07a0:
    // 0x1e07a0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e07a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e07a4:
    // 0x1e07a4: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e07a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e07a8:
    // 0x1e07a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e07a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e07ac:
    // 0x1e07ac: 0x26640c50  addiu       $a0, $s3, 0xC50
    ctx->pc = 0x1e07acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3152));
label_1e07b0:
    // 0x1e07b0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e07b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e07b4:
    // 0x1e07b4: 0x24070134  addiu       $a3, $zero, 0x134
    ctx->pc = 0x1e07b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
label_1e07b8:
    // 0x1e07b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e07b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e07bc:
    // 0x1e07bc: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x1e07bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1e07c0:
    // 0x1e07c0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1e07c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1e07c4:
    // 0x1e07c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e07c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e07c8:
    // 0x1e07c8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e07c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e07cc:
    // 0x1e07cc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x1e07ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e07d0:
    // 0x1e07d0: 0xdc252688  ld          $a1, 0x2688($at)
    ctx->pc = 0x1e07d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 9864)));
label_1e07d4:
    // 0x1e07d4: 0xc05de30  jal         func_1778C0
label_1e07d8:
    if (ctx->pc == 0x1E07D8u) {
        ctx->pc = 0x1E07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07D4u;
        // 0x1e07d8: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07DCu;
        goto label_1e07dc;
    }
    ctx->pc = 0x1E07D4u;
    SET_GPR_U32(ctx, 31, 0x1E07DCu);
    ctx->pc = 0x1E07D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E07D4u;
    // 0x1e07d8: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E07D4u, 0x1E07DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E07DCu;
label_1e07dc:
    // 0x1e07dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e07dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e07e0:
    // 0x1e07e0: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1e07e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e07e4:
    // 0x1e07e4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_1e07e8:
    if (ctx->pc == 0x1E07E8u) {
        ctx->pc = 0x1E07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07E4u;
        // 0x1e07e8: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E07ECu;
        goto label_1e07ec;
    }
    ctx->pc = 0x1E07E4u;
    {
        const bool branch_taken_0x1e07e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E07E4u;
        // 0x1e07e8: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e07e4) {
            ctx->pc = 0x1E0750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0750;
        }
    }
    ctx->pc = 0x1E07ECu;
label_1e07ec:
    // 0x1e07ec: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e07ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e07f0:
    // 0x1e07f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e07f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e07f4:
    // 0x1e07f4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e07f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e07f8:
    // 0x1e07f8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e07f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e07fc:
    // 0x1e07fc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1e07fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1e0800:
    // 0x1e0800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0804:
    // 0x1e0804: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e0804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e0808:
    // 0x1e0808: 0x26240ae0  addiu       $a0, $s1, 0xAE0
    ctx->pc = 0x1e0808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2784));
label_1e080c:
    // 0x1e080c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e080cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e0810:
    // 0x1e0810: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0814:
    // 0x1e0814: 0xdc252690  ld          $a1, 0x2690($at)
    ctx->pc = 0x1e0814u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 9872)));
label_1e0818:
    // 0x1e0818: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1e0818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e081c:
    // 0x1e081c: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x1e081cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1e0820:
    // 0x1e0820: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e0820u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0824:
    // 0x1e0824: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e0824u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0828:
    // 0x1e0828: 0xc05de30  jal         func_1778C0
label_1e082c:
    if (ctx->pc == 0x1E082Cu) {
        ctx->pc = 0x1E082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0828u;
        // 0x1e082c: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0830u;
        goto label_1e0830;
    }
    ctx->pc = 0x1E0828u;
    SET_GPR_U32(ctx, 31, 0x1E0830u);
    ctx->pc = 0x1E082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0828u;
    // 0x1e082c: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E0828u, 0x1E0830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0830u;
label_1e0830:
    // 0x1e0830: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1e0830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e0834:
    // 0x1e0834: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e0834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0838:
    // 0x1e0838: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e0838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e083c:
    // 0x1e083c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e083cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e0840:
    // 0x1e0840: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e0840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e0844:
    // 0x1e0844: 0x26241650  addiu       $a0, $s1, 0x1650
    ctx->pc = 0x1e0844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5712));
label_1e0848:
    // 0x1e0848: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e0848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e084c:
    // 0x1e084c: 0x24070134  addiu       $a3, $zero, 0x134
    ctx->pc = 0x1e084cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
label_1e0850:
    // 0x1e0850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0854:
    // 0x1e0854: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e0854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e0858:
    // 0x1e0858: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e0858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e085c:
    // 0x1e085c: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x1e085cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1e0860:
    // 0x1e0860: 0xdc252690  ld          $a1, 0x2690($at)
    ctx->pc = 0x1e0860u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 9872)));
label_1e0864:
    // 0x1e0864: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e0864u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0868:
    // 0x1e0868: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x1e0868u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e086c:
    // 0x1e086c: 0xc05de30  jal         func_1778C0
label_1e0870:
    if (ctx->pc == 0x1E0870u) {
        ctx->pc = 0x1E0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E086Cu;
        // 0x1e0870: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0874u;
        goto label_1e0874;
    }
    ctx->pc = 0x1E086Cu;
    SET_GPR_U32(ctx, 31, 0x1E0874u);
    ctx->pc = 0x1E0870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E086Cu;
    // 0x1e0870: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E086Cu, 0x1E0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0874u;
label_1e0874:
    // 0x1e0874: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e0874u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e0878:
    // 0x1e0878: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x1e0878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e087c:
    // 0x1e087c: 0x1440ff7e  bnez        $v0, . + 4 + (-0x82 << 2)
label_1e0880:
    if (ctx->pc == 0x1E0880u) {
        ctx->pc = 0x1E0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E087Cu;
        // 0x1e0880: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0884u;
        goto label_1e0884;
    }
    ctx->pc = 0x1E087Cu;
    {
        const bool branch_taken_0x1e087c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E087Cu;
        // 0x1e0880: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e087c) {
            ctx->pc = 0x1E0678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0678;
        }
    }
    ctx->pc = 0x1E0884u;
label_1e0884:
    // 0x1e0884: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e0884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e0888:
    // 0x1e0888: 0xc084c5c  jal         func_213170
label_1e088c:
    if (ctx->pc == 0x1E088Cu) {
        ctx->pc = 0x1E088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0888u;
        // 0x1e088c: 0xdc242680  ld          $a0, 0x2680($at) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 9856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0890u;
        goto label_1e0890;
    }
    ctx->pc = 0x1E0888u;
    SET_GPR_U32(ctx, 31, 0x1E0890u);
    ctx->pc = 0x1E088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0888u;
    // 0x1e088c: 0xdc242680  ld          $a0, 0x2680($at) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 9856)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213170u;
    { ctx->pc = 0x213170; return; }
    ctx->pc = 0x1E0890u;
label_1e0890:
    // 0x1e0890: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e0890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1e0894:
    // 0x1e0894: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1e0894u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e0898:
    // 0x1e0898: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1e0898u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e089c:
    // 0x1e089c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e089cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e08a0:
    // 0x1e08a0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e08a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e08a4:
    // 0x1e08a4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e08a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e08a8:
    // 0x1e08a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e08a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e08ac:
    // 0x1e08ac: 0x3e00008  jr          $ra
label_1e08b0:
    if (ctx->pc == 0x1E08B0u) {
        ctx->pc = 0x1E08B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08ACu;
        // 0x1e08b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E08B4u;
        goto label_1e08b4;
    }
    ctx->pc = 0x1E08ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E08B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08ACu;
        // 0x1e08b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E08ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E08B4u;
label_1e08b4:
    // 0x1e08b4: 0x0  nop
    ctx->pc = 0x1e08b4u;
    // NOP
label_1e08b8:
    // 0x1e08b8: 0x0  nop
    ctx->pc = 0x1e08b8u;
    // NOP
label_1e08bc:
    // 0x1e08bc: 0x0  nop
    ctx->pc = 0x1e08bcu;
    // NOP
label_1e08c0:
    // 0x1e08c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e08c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e08c4:
    // 0x1e08c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e08c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e08c8:
    // 0x1e08c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e08c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e08cc:
    // 0x1e08cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e08ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e08d0:
    // 0x1e08d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e08d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e08d4:
    // 0x1e08d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e08d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e08d8:
    // 0x1e08d8: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1e08d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1e08dc:
    // 0x1e08dc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_1e08e0:
    if (ctx->pc == 0x1E08E0u) {
        ctx->pc = 0x1E08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08DCu;
        // 0x1e08e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E08E4u;
        goto label_1e08e4;
    }
    ctx->pc = 0x1E08DCu;
    {
        const bool branch_taken_0x1e08dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08DCu;
        // 0x1e08e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e08dc) {
            ctx->pc = 0x1E09A8u;
            goto label_1e09a8;
        }
    }
    ctx->pc = 0x1E08E4u;
label_1e08e4:
    // 0x1e08e4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1e08e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1e08e8:
    // 0x1e08e8: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1e08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_1e08ec:
    // 0x1e08ec: 0x8c308b80  lw          $s0, -0x7480($at)
    ctx->pc = 0x1e08ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937472)));
label_1e08f0:
    // 0x1e08f0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e08f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e08f4:
    // 0x1e08f4: 0xc070080  jal         func_1C0200
label_1e08f8:
    if (ctx->pc == 0x1E08F8u) {
        ctx->pc = 0x1E08F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E08F4u;
        // 0x1e08f8: 0x3445b000  ori         $a1, $v0, 0xB000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E08FCu;
        goto label_1e08fc;
    }
    ctx->pc = 0x1E08F4u;
    SET_GPR_U32(ctx, 31, 0x1E08FCu);
    ctx->pc = 0x1E08F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E08F4u;
    // 0x1e08f8: 0x3445b000  ori         $a1, $v0, 0xB000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E08FCu;
label_1e08fc:
    // 0x1e08fc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1e08fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1e0900:
    // 0x1e0900: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e0900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e0904:
    // 0x1e0904: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x1e0904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1e0908:
    // 0x1e0908: 0x240500f6  addiu       $a1, $zero, 0xF6
    ctx->pc = 0x1e0908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
label_1e090c:
    // 0x1e090c: 0x2463ffc8  addiu       $v1, $v1, -0x38
    ctx->pc = 0x1e090cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967240));
label_1e0910:
    // 0x1e0910: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1e0910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1e0914:
    // 0x1e0914: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e0914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e0918:
    // 0x1e0918: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e091c:
    // 0x1e091c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e091cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e0920:
    // 0x1e0920: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1e0920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e0924:
    // 0x1e0924: 0xc041744  jal         func_105D10
label_1e0928:
    if (ctx->pc == 0x1E0928u) {
        ctx->pc = 0x1E0928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0924u;
        // 0x1e0928: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E092Cu;
        goto label_1e092c;
    }
    ctx->pc = 0x1E0924u;
    SET_GPR_U32(ctx, 31, 0x1E092Cu);
    ctx->pc = 0x1E0928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0924u;
    // 0x1e0928: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1E0924u, 0x1E092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E092Cu;
label_1e092c:
    // 0x1e092c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e092cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e0930:
    // 0x1e0930: 0xc060678  jal         func_1819E0
label_1e0934:
    if (ctx->pc == 0x1E0934u) {
        ctx->pc = 0x1E0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0930u;
        // 0x1e0934: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0938u;
        goto label_1e0938;
    }
    ctx->pc = 0x1E0930u;
    SET_GPR_U32(ctx, 31, 0x1E0938u);
    ctx->pc = 0x1E0934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0930u;
    // 0x1e0934: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819E0u, 0x1E0930u, 0x1E0938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0938u;
label_1e0938:
    // 0x1e0938: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x1e0938u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
label_1e093c:
    // 0x1e093c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e093cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0940:
    // 0x1e0940: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1e0940u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_1e0944:
    // 0x1e0944: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e0944u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0948:
    // 0x1e0948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e094c:
    // 0x1e094c: 0xc0602c8  jal         func_180B20
label_1e0950:
    if (ctx->pc == 0x1E0950u) {
        ctx->pc = 0x1E0950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E094Cu;
        // 0x1e0950: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0954u;
        goto label_1e0954;
    }
    ctx->pc = 0x1E094Cu;
    SET_GPR_U32(ctx, 31, 0x1E0954u);
    ctx->pc = 0x1E0950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E094Cu;
    // 0x1e0950: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x1E094Cu, 0x1E0954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0954u;
label_1e0954:
    // 0x1e0954: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e0954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e0958:
    // 0x1e0958: 0x26270018  addiu       $a3, $s1, 0x18
    ctx->pc = 0x1e0958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_1e095c:
    // 0x1e095c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e095cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e0960:
    // 0x1e0960: 0x27a6005e  addiu       $a2, $sp, 0x5E
    ctx->pc = 0x1e0960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
label_1e0964:
    // 0x1e0964: 0xc060390  jal         func_180E40
label_1e0968:
    if (ctx->pc == 0x1E0968u) {
        ctx->pc = 0x1E0968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0964u;
        // 0x1e0968: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E096Cu;
        goto label_1e096c;
    }
    ctx->pc = 0x1E0964u;
    SET_GPR_U32(ctx, 31, 0x1E096Cu);
    ctx->pc = 0x1E0968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0964u;
    // 0x1e0968: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E40u, 0x1E0964u, 0x1E096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E096Cu;
label_1e096c:
    // 0x1e096c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e096cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e0970:
    // 0x1e0970: 0x24632680  addiu       $v1, $v1, 0x2680
    ctx->pc = 0x1e0970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9856));
label_1e0974:
    // 0x1e0974: 0x739021  addu        $s2, $v1, $s3
    ctx->pc = 0x1e0974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1e0978:
    // 0x1e0978: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1e0978u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_1e097c:
    // 0x1e097c: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x1e097cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_1e0980:
    // 0x1e0980: 0xc06063c  jal         func_1818F0
label_1e0984:
    if (ctx->pc == 0x1E0984u) {
        ctx->pc = 0x1E0984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0980u;
        // 0x1e0984: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0988u;
        goto label_1e0988;
    }
    ctx->pc = 0x1E0980u;
    SET_GPR_U32(ctx, 31, 0x1E0988u);
    ctx->pc = 0x1E0984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0980u;
    // 0x1e0984: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1818F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1818F0u, 0x1E0980u, 0x1E0988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0988u;
label_1e0988:
    // 0x1e0988: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1e0988u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_1e098c:
    // 0x1e098c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e098cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e0990:
    // 0x1e0990: 0x87b2005e  lh          $s2, 0x5E($sp)
    ctx->pc = 0x1e0990u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
label_1e0994:
    // 0x1e0994: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1e0994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e0998:
    // 0x1e0998: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1e099c:
    if (ctx->pc == 0x1E099Cu) {
        ctx->pc = 0x1E099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0998u;
        // 0x1e099c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E09A0u;
        goto label_1e09a0;
    }
    ctx->pc = 0x1E0998u;
    {
        const bool branch_taken_0x1e0998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0998u;
        // 0x1e099c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0998) {
            ctx->pc = 0x1E0948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0948;
        }
    }
    ctx->pc = 0x1E09A0u;
label_1e09a0:
    // 0x1e09a0: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1e09a4:
    if (ctx->pc == 0x1E09A4u) {
        ctx->pc = 0x1E09A8u;
        goto label_1e09a8;
    }
    ctx->pc = 0x1E09A0u;
    {
        const bool branch_taken_0x1e09a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e09a0) {
            ctx->pc = 0x1E0A58u;
            goto label_1e0a58;
        }
    }
    ctx->pc = 0x1E09A8u;
label_1e09a8:
    // 0x1e09a8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1e09a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1e09ac:
    // 0x1e09ac: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1e09acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_1e09b0:
    // 0x1e09b0: 0x8c300d40  lw          $s0, 0xD40($at)
    ctx->pc = 0x1e09b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3392)));
label_1e09b4:
    // 0x1e09b4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e09b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e09b8:
    // 0x1e09b8: 0xc070080  jal         func_1C0200
label_1e09bc:
    if (ctx->pc == 0x1E09BCu) {
        ctx->pc = 0x1E09BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E09B8u;
        // 0x1e09bc: 0x3445b000  ori         $a1, $v0, 0xB000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E09C0u;
        goto label_1e09c0;
    }
    ctx->pc = 0x1E09B8u;
    SET_GPR_U32(ctx, 31, 0x1E09C0u);
    ctx->pc = 0x1E09BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E09B8u;
    // 0x1e09bc: 0x3445b000  ori         $a1, $v0, 0xB000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E09C0u;
label_1e09c0:
    // 0x1e09c0: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x1e09c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_1e09c4:
    // 0x1e09c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e09c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e09c8:
    // 0x1e09c8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1e09c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1e09cc:
    // 0x1e09cc: 0x240500f6  addiu       $a1, $zero, 0xF6
    ctx->pc = 0x1e09ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
label_1e09d0:
    // 0x1e09d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e09d4:
    // 0x1e09d4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1e09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e09d8:
    // 0x1e09d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1e09d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e09dc:
    // 0x1e09dc: 0xc041744  jal         func_105D10
label_1e09e0:
    if (ctx->pc == 0x1E09E0u) {
        ctx->pc = 0x1E09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E09DCu;
        // 0x1e09e0: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E09E4u;
        goto label_1e09e4;
    }
    ctx->pc = 0x1E09DCu;
    SET_GPR_U32(ctx, 31, 0x1E09E4u);
    ctx->pc = 0x1E09E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E09DCu;
    // 0x1e09e0: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1E09DCu, 0x1E09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E09E4u;
label_1e09e4:
    // 0x1e09e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e09e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e09e8:
    // 0x1e09e8: 0xc060678  jal         func_1819E0
label_1e09ec:
    if (ctx->pc == 0x1E09ECu) {
        ctx->pc = 0x1E09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E09E8u;
        // 0x1e09ec: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E09F0u;
        goto label_1e09f0;
    }
    ctx->pc = 0x1E09E8u;
    SET_GPR_U32(ctx, 31, 0x1E09F0u);
    ctx->pc = 0x1E09ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E09E8u;
    // 0x1e09ec: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819E0u, 0x1E09E8u, 0x1E09F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E09F0u;
label_1e09f0:
    // 0x1e09f0: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x1e09f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
label_1e09f4:
    // 0x1e09f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e09f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e09f8:
    // 0x1e09f8: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x1e09f8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
label_1e09fc:
    // 0x1e09fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e09fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0a00:
    // 0x1e0a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e0a04:
    // 0x1e0a04: 0xc0602c8  jal         func_180B20
label_1e0a08:
    if (ctx->pc == 0x1E0A08u) {
        ctx->pc = 0x1E0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A04u;
        // 0x1e0a08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0A0Cu;
        goto label_1e0a0c;
    }
    ctx->pc = 0x1E0A04u;
    SET_GPR_U32(ctx, 31, 0x1E0A0Cu);
    ctx->pc = 0x1E0A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A04u;
    // 0x1e0a08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x1E0A04u, 0x1E0A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0A0Cu;
label_1e0a0c:
    // 0x1e0a0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e0a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e0a10:
    // 0x1e0a10: 0x26270018  addiu       $a3, $s1, 0x18
    ctx->pc = 0x1e0a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_1e0a14:
    // 0x1e0a14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e0a18:
    // 0x1e0a18: 0x27a6005e  addiu       $a2, $sp, 0x5E
    ctx->pc = 0x1e0a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
label_1e0a1c:
    // 0x1e0a1c: 0xc060390  jal         func_180E40
label_1e0a20:
    if (ctx->pc == 0x1E0A20u) {
        ctx->pc = 0x1E0A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A1Cu;
        // 0x1e0a20: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0A24u;
        goto label_1e0a24;
    }
    ctx->pc = 0x1E0A1Cu;
    SET_GPR_U32(ctx, 31, 0x1E0A24u);
    ctx->pc = 0x1E0A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A1Cu;
    // 0x1e0a20: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E40u, 0x1E0A1Cu, 0x1E0A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0A24u;
label_1e0a24:
    // 0x1e0a24: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e0a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e0a28:
    // 0x1e0a28: 0x24632680  addiu       $v1, $v1, 0x2680
    ctx->pc = 0x1e0a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9856));
label_1e0a2c:
    // 0x1e0a2c: 0x729821  addu        $s3, $v1, $s2
    ctx->pc = 0x1e0a2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1e0a30:
    // 0x1e0a30: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x1e0a30u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
label_1e0a34:
    // 0x1e0a34: 0xde640000  ld          $a0, 0x0($s3)
    ctx->pc = 0x1e0a34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_1e0a38:
    // 0x1e0a38: 0xc06063c  jal         func_1818F0
label_1e0a3c:
    if (ctx->pc == 0x1E0A3Cu) {
        ctx->pc = 0x1E0A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A38u;
        // 0x1e0a3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0A40u;
        goto label_1e0a40;
    }
    ctx->pc = 0x1E0A38u;
    SET_GPR_U32(ctx, 31, 0x1E0A40u);
    ctx->pc = 0x1E0A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A38u;
    // 0x1e0a3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1818F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1818F0u, 0x1E0A38u, 0x1E0A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0A40u;
label_1e0a40:
    // 0x1e0a40: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x1e0a40u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
label_1e0a44:
    // 0x1e0a44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e0a44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e0a48:
    // 0x1e0a48: 0x87b3005e  lh          $s3, 0x5E($sp)
    ctx->pc = 0x1e0a48u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
label_1e0a4c:
    // 0x1e0a4c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1e0a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e0a50:
    // 0x1e0a50: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1e0a54:
    if (ctx->pc == 0x1E0A54u) {
        ctx->pc = 0x1E0A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A50u;
        // 0x1e0a54: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0A58u;
        goto label_1e0a58;
    }
    ctx->pc = 0x1E0A50u;
    {
        const bool branch_taken_0x1e0a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A50u;
        // 0x1e0a54: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0a50) {
            ctx->pc = 0x1E0A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0a00;
        }
    }
    ctx->pc = 0x1E0A58u;
label_1e0a58:
    // 0x1e0a58: 0xc070038  jal         func_1C00E0
label_1e0a5c:
    if (ctx->pc == 0x1E0A5Cu) {
        ctx->pc = 0x1E0A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A58u;
        // 0x1e0a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0A60u;
        goto label_1e0a60;
    }
    ctx->pc = 0x1E0A58u;
    SET_GPR_U32(ctx, 31, 0x1E0A60u);
    ctx->pc = 0x1E0A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0A58u;
    // 0x1e0a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E0A60u;
label_1e0a60:
    // 0x1e0a60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e0a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e0a64:
    // 0x1e0a64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e0a64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e0a68:
    // 0x1e0a68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e0a68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e0a6c:
    // 0x1e0a6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0a70:
    // 0x1e0a70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0a74:
    // 0x1e0a74: 0x3e00008  jr          $ra
label_1e0a78:
    if (ctx->pc == 0x1E0A78u) {
        ctx->pc = 0x1E0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A74u;
        // 0x1e0a78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0A7Cu;
        goto label_1e0a7c;
    }
    ctx->pc = 0x1E0A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0A74u;
        // 0x1e0a78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0A7Cu;
label_1e0a7c:
    // 0x1e0a7c: 0x0  nop
    ctx->pc = 0x1e0a7cu;
    // NOP
label_1e0a80:
    // 0x1e0a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e0a84:
    // 0x1e0a84: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e0a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1e0a88:
    // 0x1e0a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e0a8c:
    // 0x1e0a8c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e0a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1e0a90:
    // 0x1e0a90: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1e0a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e0a94:
    // 0x1e0a94: 0x27838d28  addiu       $v1, $gp, -0x72D8
    ctx->pc = 0x1e0a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937896));
label_1e0a98:
    // 0x1e0a98: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e0a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1e0a9c:
    // 0x1e0a9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0aa0:
    // 0x1e0aa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0aa4:
    // 0x1e0aa4: 0x53940  sll         $a3, $a1, 5
    ctx->pc = 0x1e0aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1e0aa8:
    // 0x1e0aa8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e0aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e0aac:
    // 0x1e0aac: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1e0aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1e0ab0:
    // 0x1e0ab0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e0ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1e0ab4:
    // 0x1e0ab4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e0ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e0ab8:
    // 0x1e0ab8: 0x0  nop
    ctx->pc = 0x1e0ab8u;
    // NOP
label_1e0abc:
    // 0x1e0abc: 0x240b000f  addiu       $t3, $zero, 0xF
    ctx->pc = 0x1e0abcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1e0ac0:
    // 0x1e0ac0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1e0ac0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0ac4:
    // 0x1e0ac4: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x1e0ac4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e0ac8:
    // 0x1e0ac8: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x1e0ac8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e0acc:
    // 0x1e0acc: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1e0accu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_1e0ad0:
    // 0x1e0ad0: 0x8f898d20  lw          $t1, -0x72E0($gp)
    ctx->pc = 0x1e0ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
label_1e0ad4:
    // 0x1e0ad4: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
label_1e0ad8:
    if (ctx->pc == 0x1E0AD8u) {
        ctx->pc = 0x1E0ADCu;
        goto label_1e0adc;
    }
    ctx->pc = 0x1E0AD4u;
    {
        const bool branch_taken_0x1e0ad4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ad4) {
            ctx->pc = 0x1E0AF0u;
            goto label_1e0af0;
        }
    }
    ctx->pc = 0x1E0ADCu;
label_1e0adc:
    // 0x1e0adc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e0adcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0ae0:
    // 0x1e0ae0: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1e0ae0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0ae4:
    // 0x1e0ae4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e0ae4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0ae8:
    // 0x1e0ae8: 0x10000038  b           . + 4 + (0x38 << 2)
label_1e0aec:
    if (ctx->pc == 0x1E0AECu) {
        ctx->pc = 0x1E0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AE8u;
        // 0x1e0aec: 0x24180080  addiu       $t8, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0AF0u;
        goto label_1e0af0;
    }
    ctx->pc = 0x1E0AE8u;
    {
        const bool branch_taken_0x1e0ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AE8u;
        // 0x1e0aec: 0x24180080  addiu       $t8, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ae8) {
            ctx->pc = 0x1E0BCCu;
            goto label_1e0bcc;
        }
    }
    ctx->pc = 0x1E0AF0u;
label_1e0af0:
    // 0x1e0af0: 0x29210010  slti        $at, $t1, 0x10
    ctx->pc = 0x1e0af0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e0af4:
    // 0x1e0af4: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_1e0af8:
    if (ctx->pc == 0x1E0AF8u) {
        ctx->pc = 0x1E0AFCu;
        goto label_1e0afc;
    }
    ctx->pc = 0x1E0AF4u;
    {
        const bool branch_taken_0x1e0af4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0af4) {
            ctx->pc = 0x1E0B78u;
            goto label_1e0b78;
        }
    }
    ctx->pc = 0x1E0AFCu;
label_1e0afc:
    // 0x1e0afc: 0x919c0  sll         $v1, $t1, 7
    ctx->pc = 0x1e0afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 7));
label_1e0b00:
    // 0x1e0b00: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e0b04:
    if (ctx->pc == 0x1E0B04u) {
        ctx->pc = 0x1E0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B00u;
        // 0x1e0b04: 0x33903  sra         $a3, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B08u;
        goto label_1e0b08;
    }
    ctx->pc = 0x1E0B00u;
    {
        const bool branch_taken_0x1e0b00 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B00u;
        // 0x1e0b04: 0x33903  sra         $a3, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b00) {
            ctx->pc = 0x1E0B10u;
            goto label_1e0b10;
        }
    }
    ctx->pc = 0x1E0B08u;
label_1e0b08:
    // 0x1e0b08: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1e0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1e0b0c:
    // 0x1e0b0c: 0x33903  sra         $a3, $v1, 4
    ctx->pc = 0x1e0b0cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
label_1e0b10:
    // 0x1e0b10: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1e0b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e0b14:
    // 0x1e0b14: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x1e0b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1e0b18:
    // 0x1e0b18: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e0b1c:
    if (ctx->pc == 0x1E0B1Cu) {
        ctx->pc = 0x1E0B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B18u;
        // 0x1e0b1c: 0x33903  sra         $a3, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B20u;
        goto label_1e0b20;
    }
    ctx->pc = 0x1E0B18u;
    {
        const bool branch_taken_0x1e0b18 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E0B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B18u;
        // 0x1e0b1c: 0x33903  sra         $a3, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b18) {
            ctx->pc = 0x1E0B28u;
            goto label_1e0b28;
        }
    }
    ctx->pc = 0x1E0B20u;
label_1e0b20:
    // 0x1e0b20: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1e0b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1e0b24:
    // 0x1e0b24: 0x33903  sra         $a3, $v1, 4
    ctx->pc = 0x1e0b24u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
label_1e0b28:
    // 0x1e0b28: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_1e0b2c:
    if (ctx->pc == 0x1E0B2Cu) {
        ctx->pc = 0x1E0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B28u;
        // 0x1e0b2c: 0x71883  sra         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B30u;
        goto label_1e0b30;
    }
    ctx->pc = 0x1E0B28u;
    {
        const bool branch_taken_0x1e0b28 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1E0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B28u;
        // 0x1e0b2c: 0x71883  sra         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b28) {
            ctx->pc = 0x1E0B38u;
            goto label_1e0b38;
        }
    }
    ctx->pc = 0x1E0B30u;
label_1e0b30:
    // 0x1e0b30: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x1e0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_1e0b34:
    // 0x1e0b34: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e0b34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1e0b38:
    // 0x1e0b38: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1e0b38u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_1e0b3c:
    // 0x1e0b3c: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_1e0b40:
    if (ctx->pc == 0x1E0B40u) {
        ctx->pc = 0x1E0B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B3Cu;
        // 0x1e0b40: 0x93903  sra         $a3, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B44u;
        goto label_1e0b44;
    }
    ctx->pc = 0x1E0B3Cu;
    {
        const bool branch_taken_0x1e0b3c = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1E0B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B3Cu;
        // 0x1e0b40: 0x93903  sra         $a3, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b3c) {
            ctx->pc = 0x1E0B4Cu;
            goto label_1e0b4c;
        }
    }
    ctx->pc = 0x1E0B44u;
label_1e0b44:
    // 0x1e0b44: 0x2527000f  addiu       $a3, $t1, 0xF
    ctx->pc = 0x1e0b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
label_1e0b48:
    // 0x1e0b48: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x1e0b48u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
label_1e0b4c:
    // 0x1e0b4c: 0x1a74823  subu        $t1, $t5, $a3
    ctx->pc = 0x1e0b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
label_1e0b50:
    // 0x1e0b50: 0x24180080  addiu       $t8, $zero, 0x80
    ctx->pc = 0x1e0b50u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0b54:
    // 0x1e0b54: 0x1823823  subu        $a3, $t4, $v0
    ctx->pc = 0x1e0b54u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_1e0b58:
    // 0x1e0b58: 0x1273818  mult        $a3, $t1, $a3
    ctx->pc = 0x1e0b58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_1e0b5c:
    // 0x1e0b5c: 0x74823  negu        $t1, $a3
    ctx->pc = 0x1e0b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_1e0b60:
    // 0x1e0b60: 0x24e70200  addiu       $a3, $a3, 0x200
    ctx->pc = 0x1e0b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
label_1e0b64:
    // 0x1e0b64: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1e0b64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1e0b68:
    // 0x1e0b68: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1e0b68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1e0b6c:
    // 0x1e0b6c: 0x252e6c00  addiu       $t6, $t1, 0x6C00
    ctx->pc = 0x1e0b6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 27648));
label_1e0b70:
    // 0x1e0b70: 0x10000016  b           . + 4 + (0x16 << 2)
label_1e0b74:
    if (ctx->pc == 0x1E0B74u) {
        ctx->pc = 0x1E0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B70u;
        // 0x1e0b74: 0x24ef6c00  addiu       $t7, $a3, 0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B78u;
        goto label_1e0b78;
    }
    ctx->pc = 0x1E0B70u;
    {
        const bool branch_taken_0x1e0b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B70u;
        // 0x1e0b74: 0x24ef6c00  addiu       $t7, $a3, 0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b70) {
            ctx->pc = 0x1E0BCCu;
            goto label_1e0bcc;
        }
    }
    ctx->pc = 0x1E0B78u;
label_1e0b78:
    // 0x1e0b78: 0x144b0005  bne         $v0, $t3, . + 4 + (0x5 << 2)
label_1e0b7c:
    if (ctx->pc == 0x1E0B7Cu) {
        ctx->pc = 0x1E0B80u;
        goto label_1e0b80;
    }
    ctx->pc = 0x1E0B78u;
    {
        const bool branch_taken_0x1e0b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x1e0b78) {
            ctx->pc = 0x1E0B90u;
            goto label_1e0b90;
        }
    }
    ctx->pc = 0x1E0B80u;
label_1e0b80:
    // 0x1e0b80: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e0b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0b84:
    // 0x1e0b84: 0x240e6c00  addiu       $t6, $zero, 0x6C00
    ctx->pc = 0x1e0b84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
label_1e0b88:
    // 0x1e0b88: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e0b8c:
    if (ctx->pc == 0x1E0B8Cu) {
        ctx->pc = 0x1E0B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B88u;
        // 0x1e0b8c: 0x340f8c00  ori         $t7, $zero, 0x8C00 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35840);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0B90u;
        goto label_1e0b90;
    }
    ctx->pc = 0x1E0B88u;
    {
        const bool branch_taken_0x1e0b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B88u;
        // 0x1e0b8c: 0x340f8c00  ori         $t7, $zero, 0x8C00 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35840);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b88) {
            ctx->pc = 0x1E0B9Cu;
            goto label_1e0b9c;
        }
    }
    ctx->pc = 0x1E0B90u;
label_1e0b90:
    // 0x1e0b90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e0b90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0b94:
    // 0x1e0b94: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1e0b94u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0b98:
    // 0x1e0b98: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e0b98u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0b9c:
    // 0x1e0b9c: 0x0  nop
    ctx->pc = 0x1e0b9cu;
    // NOP
label_1e0ba0:
    // 0x1e0ba0: 0x2527fff0  addiu       $a3, $t1, -0x10
    ctx->pc = 0x1e0ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
label_1e0ba4:
    // 0x1e0ba4: 0x749c0  sll         $t1, $a3, 7
    ctx->pc = 0x1e0ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
label_1e0ba8:
    // 0x1e0ba8: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_1e0bac:
    if (ctx->pc == 0x1E0BACu) {
        ctx->pc = 0x1E0BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BA8u;
        // 0x1e0bac: 0x938c3  sra         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0BB0u;
        goto label_1e0bb0;
    }
    ctx->pc = 0x1E0BA8u;
    {
        const bool branch_taken_0x1e0ba8 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1E0BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BA8u;
        // 0x1e0bac: 0x938c3  sra         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ba8) {
            ctx->pc = 0x1E0BB8u;
            goto label_1e0bb8;
        }
    }
    ctx->pc = 0x1E0BB0u;
label_1e0bb0:
    // 0x1e0bb0: 0x25270007  addiu       $a3, $t1, 0x7
    ctx->pc = 0x1e0bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_1e0bb4:
    // 0x1e0bb4: 0x738c3  sra         $a3, $a3, 3
    ctx->pc = 0x1e0bb4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 3));
label_1e0bb8:
    // 0x1e0bb8: 0x147c023  subu        $t8, $t2, $a3
    ctx->pc = 0x1e0bb8u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_1e0bbc:
    // 0x1e0bbc: 0x7010003  bgez        $t8, . + 4 + (0x3 << 2)
label_1e0bc0:
    if (ctx->pc == 0x1E0BC0u) {
        ctx->pc = 0x1E0BC4u;
        goto label_1e0bc4;
    }
    ctx->pc = 0x1E0BBCu;
    {
        const bool branch_taken_0x1e0bbc = (GPR_S32(ctx, 24) >= 0);
        if (branch_taken_0x1e0bbc) {
            ctx->pc = 0x1E0BCCu;
            goto label_1e0bcc;
        }
    }
    ctx->pc = 0x1E0BC4u;
label_1e0bc4:
    // 0x1e0bc4: 0x10000001  b           . + 4 + (0x1 << 2)
label_1e0bc8:
    if (ctx->pc == 0x1E0BC8u) {
        ctx->pc = 0x1E0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BC4u;
        // 0x1e0bc8: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0BCCu;
        goto label_1e0bcc;
    }
    ctx->pc = 0x1E0BC4u;
    {
        const bool branch_taken_0x1e0bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BC4u;
        // 0x1e0bc8: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bc4) {
            ctx->pc = 0x1E0BCCu;
            goto label_1e0bcc;
        }
    }
    ctx->pc = 0x1E0BCCu;
label_1e0bcc:
    // 0x1e0bcc: 0x0  nop
    ctx->pc = 0x1e0bccu;
    // NOP
label_1e0bd0:
    // 0x1e0bd0: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x1e0bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1e0bd4:
    // 0x1e0bd4: 0xa52e0160  sh          $t6, 0x160($t1)
    ctx->pc = 0x1e0bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 352), (uint16_t)GPR_U32(ctx, 14));
label_1e0bd8:
    // 0x1e0bd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e0bdc:
    // 0x1e0bdc: 0xa52f0170  sh          $t7, 0x170($t1)
    ctx->pc = 0x1e0bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 368), (uint16_t)GPR_U32(ctx, 15));
label_1e0be0:
    // 0x1e0be0: 0x28470010  slti        $a3, $v0, 0x10
    ctx->pc = 0x1e0be0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e0be4:
    // 0x1e0be4: 0xa1380150  sb          $t8, 0x150($t1)
    ctx->pc = 0x1e0be4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 336), (uint8_t)GPR_U32(ctx, 24));
label_1e0be8:
    // 0x1e0be8: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x1e0be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
label_1e0bec:
    // 0x1e0bec: 0xa1380151  sb          $t8, 0x151($t1)
    ctx->pc = 0x1e0becu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 337), (uint8_t)GPR_U32(ctx, 24));
label_1e0bf0:
    // 0x1e0bf0: 0xa1380152  sb          $t8, 0x152($t1)
    ctx->pc = 0x1e0bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 338), (uint8_t)GPR_U32(ctx, 24));
label_1e0bf4:
    // 0x1e0bf4: 0xa1230153  sb          $v1, 0x153($t1)
    ctx->pc = 0x1e0bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 339), (uint8_t)GPR_U32(ctx, 3));
label_1e0bf8:
    // 0x1e0bf8: 0x14e0ffb5  bnez        $a3, . + 4 + (-0x4B << 2)
label_1e0bfc:
    if (ctx->pc == 0x1E0BFCu) {
        ctx->pc = 0x1E0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BF8u;
        // 0x1e0bfc: 0xad280154  sw          $t0, 0x154($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 340), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C00u;
        goto label_1e0c00;
    }
    ctx->pc = 0x1E0BF8u;
    {
        const bool branch_taken_0x1e0bf8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BF8u;
        // 0x1e0bfc: 0xad280154  sw          $t0, 0x154($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 340), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bf8) {
            ctx->pc = 0x1E0AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0ad0;
        }
    }
    ctx->pc = 0x1E0C00u;
label_1e0c00:
    // 0x1e0c00: 0x8f828d20  lw          $v0, -0x72E0($gp)
    ctx->pc = 0x1e0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
label_1e0c04:
    // 0x1e0c04: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1e0c04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e0c08:
    // 0x1e0c08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e0c0c:
    if (ctx->pc == 0x1E0C0Cu) {
        ctx->pc = 0x1E0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C08u;
        // 0x1e0c0c: 0x24a30ae0  addiu       $v1, $a1, 0xAE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C10u;
        goto label_1e0c10;
    }
    ctx->pc = 0x1E0C08u;
    {
        const bool branch_taken_0x1e0c08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C08u;
        // 0x1e0c0c: 0x24a30ae0  addiu       $v1, $a1, 0xAE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c08) {
            ctx->pc = 0x1E0C18u;
            goto label_1e0c18;
        }
    }
    ctx->pc = 0x1E0C10u;
label_1e0c10:
    // 0x1e0c10: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e0c14:
    if (ctx->pc == 0x1E0C14u) {
        ctx->pc = 0x1E0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C10u;
        // 0x1e0c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C18u;
        goto label_1e0c18;
    }
    ctx->pc = 0x1E0C10u;
    {
        const bool branch_taken_0x1e0c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C10u;
        // 0x1e0c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c10) {
            ctx->pc = 0x1E0C1Cu;
            goto label_1e0c1c;
        }
    }
    ctx->pc = 0x1E0C18u;
label_1e0c18:
    // 0x1e0c18: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0c1c:
    // 0x1e0c1c: 0xa0620073  sb          $v0, 0x73($v1)
    ctx->pc = 0x1e0c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 2));
label_1e0c20:
    // 0x1e0c20: 0x8f828d20  lw          $v0, -0x72E0($gp)
    ctx->pc = 0x1e0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
label_1e0c24:
    // 0x1e0c24: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1e0c24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e0c28:
    // 0x1e0c28: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e0c2c:
    if (ctx->pc == 0x1E0C2Cu) {
        ctx->pc = 0x1E0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C28u;
        // 0x1e0c2c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C30u;
        goto label_1e0c30;
    }
    ctx->pc = 0x1E0C28u;
    {
        const bool branch_taken_0x1e0c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C28u;
        // 0x1e0c2c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c28) {
            ctx->pc = 0x1E0C50u;
            goto label_1e0c50;
        }
    }
    ctx->pc = 0x1E0C30u;
label_1e0c30:
    // 0x1e0c30: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1e0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1e0c34:
    // 0x1e0c34: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_1e0c38:
    if (ctx->pc == 0x1E0C38u) {
        ctx->pc = 0x1E0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C34u;
        // 0x1e0c38: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C3Cu;
        goto label_1e0c3c;
    }
    ctx->pc = 0x1E0C34u;
    {
        const bool branch_taken_0x1e0c34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C34u;
        // 0x1e0c38: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c34) {
            ctx->pc = 0x1E0C50u;
            goto label_1e0c50;
        }
    }
    ctx->pc = 0x1E0C3Cu;
label_1e0c3c:
    // 0x1e0c3c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1e0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1e0c40:
    // 0x1e0c40: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x1e0c40u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_1e0c44:
    // 0x1e0c44: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e0c48:
    if (ctx->pc == 0x1E0C48u) {
        ctx->pc = 0x1E0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C44u;
        // 0x1e0c48: 0xa0a600b3  sb          $a2, 0xB3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 179), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C4Cu;
        goto label_1e0c4c;
    }
    ctx->pc = 0x1E0C44u;
    {
        const bool branch_taken_0x1e0c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C44u;
        // 0x1e0c48: 0xa0a600b3  sb          $a2, 0xB3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 179), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c44) {
            ctx->pc = 0x1E0C54u;
            goto label_1e0c54;
        }
    }
    ctx->pc = 0x1E0C4Cu;
label_1e0c4c:
    // 0x1e0c4c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e0c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0c50:
    // 0x1e0c50: 0xa0a600b3  sb          $a2, 0xB3($a1)
    ctx->pc = 0x1e0c50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 179), (uint8_t)GPR_U32(ctx, 6));
label_1e0c54:
    // 0x1e0c54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e0c54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0c58:
    // 0x1e0c58: 0xa0a60083  sb          $a2, 0x83($a1)
    ctx->pc = 0x1e0c58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 131), (uint8_t)GPR_U32(ctx, 6));
label_1e0c5c:
    // 0x1e0c5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0c60:
    // 0x1e0c60: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1e0c60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1e0c64:
    // 0x1e0c64: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x1e0c64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0c68:
    // 0x1e0c68: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x1e0c68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e0c6c:
    // 0x1e0c6c: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x1e0c6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e0c70:
    // 0x1e0c70: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1e0c70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_1e0c74:
    // 0x1e0c74: 0x8f898d24  lw          $t1, -0x72DC($gp)
    ctx->pc = 0x1e0c74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
label_1e0c78:
    // 0x1e0c78: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
label_1e0c7c:
    if (ctx->pc == 0x1E0C7Cu) {
        ctx->pc = 0x1E0C80u;
        goto label_1e0c80;
    }
    ctx->pc = 0x1E0C78u;
    {
        const bool branch_taken_0x1e0c78 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c78) {
            ctx->pc = 0x1E0C94u;
            goto label_1e0c94;
        }
    }
    ctx->pc = 0x1E0C80u;
label_1e0c80:
    // 0x1e0c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0c84:
    // 0x1e0c84: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e0c84u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0c88:
    // 0x1e0c88: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1e0c88u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0c8c:
    // 0x1e0c8c: 0x10000039  b           . + 4 + (0x39 << 2)
label_1e0c90:
    if (ctx->pc == 0x1E0C90u) {
        ctx->pc = 0x1E0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C8Cu;
        // 0x1e0c90: 0x24180080  addiu       $t8, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C94u;
        goto label_1e0c94;
    }
    ctx->pc = 0x1E0C8Cu;
    {
        const bool branch_taken_0x1e0c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C8Cu;
        // 0x1e0c90: 0x24180080  addiu       $t8, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c8c) {
            ctx->pc = 0x1E0D74u;
            goto label_1e0d74;
        }
    }
    ctx->pc = 0x1E0C94u;
label_1e0c94:
    // 0x1e0c94: 0x0  nop
    ctx->pc = 0x1e0c94u;
    // NOP
label_1e0c98:
    // 0x1e0c98: 0x29210010  slti        $at, $t1, 0x10
    ctx->pc = 0x1e0c98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e0c9c:
    // 0x1e0c9c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_1e0ca0:
    if (ctx->pc == 0x1E0CA0u) {
        ctx->pc = 0x1E0CA4u;
        goto label_1e0ca4;
    }
    ctx->pc = 0x1E0C9Cu;
    {
        const bool branch_taken_0x1e0c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c9c) {
            ctx->pc = 0x1E0D20u;
            goto label_1e0d20;
        }
    }
    ctx->pc = 0x1E0CA4u;
label_1e0ca4:
    // 0x1e0ca4: 0x931c0  sll         $a2, $t1, 7
    ctx->pc = 0x1e0ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 7));
label_1e0ca8:
    // 0x1e0ca8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e0cac:
    if (ctx->pc == 0x1E0CACu) {
        ctx->pc = 0x1E0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CA8u;
        // 0x1e0cac: 0x63903  sra         $a3, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0CB0u;
        goto label_1e0cb0;
    }
    ctx->pc = 0x1E0CA8u;
    {
        const bool branch_taken_0x1e0ca8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CA8u;
        // 0x1e0cac: 0x63903  sra         $a3, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ca8) {
            ctx->pc = 0x1E0CB8u;
            goto label_1e0cb8;
        }
    }
    ctx->pc = 0x1E0CB0u;
label_1e0cb0:
    // 0x1e0cb0: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1e0cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1e0cb4:
    // 0x1e0cb4: 0x63903  sra         $a3, $a2, 4
    ctx->pc = 0x1e0cb4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
label_1e0cb8:
    // 0x1e0cb8: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1e0cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e0cbc:
    // 0x1e0cbc: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x1e0cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1e0cc0:
    // 0x1e0cc0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e0cc4:
    if (ctx->pc == 0x1E0CC4u) {
        ctx->pc = 0x1E0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CC0u;
        // 0x1e0cc4: 0x63903  sra         $a3, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0CC8u;
        goto label_1e0cc8;
    }
    ctx->pc = 0x1E0CC0u;
    {
        const bool branch_taken_0x1e0cc0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CC0u;
        // 0x1e0cc4: 0x63903  sra         $a3, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cc0) {
            ctx->pc = 0x1E0CD0u;
            goto label_1e0cd0;
        }
    }
    ctx->pc = 0x1E0CC8u;
label_1e0cc8:
    // 0x1e0cc8: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1e0cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1e0ccc:
    // 0x1e0ccc: 0x63903  sra         $a3, $a2, 4
    ctx->pc = 0x1e0cccu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
label_1e0cd0:
    // 0x1e0cd0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_1e0cd4:
    if (ctx->pc == 0x1E0CD4u) {
        ctx->pc = 0x1E0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CD0u;
        // 0x1e0cd4: 0x73083  sra         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0CD8u;
        goto label_1e0cd8;
    }
    ctx->pc = 0x1E0CD0u;
    {
        const bool branch_taken_0x1e0cd0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1E0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CD0u;
        // 0x1e0cd4: 0x73083  sra         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cd0) {
            ctx->pc = 0x1E0CE0u;
            goto label_1e0ce0;
        }
    }
    ctx->pc = 0x1E0CD8u;
label_1e0cd8:
    // 0x1e0cd8: 0x24e60003  addiu       $a2, $a3, 0x3
    ctx->pc = 0x1e0cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_1e0cdc:
    // 0x1e0cdc: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x1e0cdcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_1e0ce0:
    // 0x1e0ce0: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1e0ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_1e0ce4:
    // 0x1e0ce4: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_1e0ce8:
    if (ctx->pc == 0x1E0CE8u) {
        ctx->pc = 0x1E0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CE4u;
        // 0x1e0ce8: 0x93903  sra         $a3, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0CECu;
        goto label_1e0cec;
    }
    ctx->pc = 0x1E0CE4u;
    {
        const bool branch_taken_0x1e0ce4 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1E0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CE4u;
        // 0x1e0ce8: 0x93903  sra         $a3, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ce4) {
            ctx->pc = 0x1E0CF4u;
            goto label_1e0cf4;
        }
    }
    ctx->pc = 0x1E0CECu;
label_1e0cec:
    // 0x1e0cec: 0x2527000f  addiu       $a3, $t1, 0xF
    ctx->pc = 0x1e0cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
label_1e0cf0:
    // 0x1e0cf0: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x1e0cf0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
label_1e0cf4:
    // 0x1e0cf4: 0x1a74823  subu        $t1, $t5, $a3
    ctx->pc = 0x1e0cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
label_1e0cf8:
    // 0x1e0cf8: 0x160c02d  daddu       $t8, $t3, $zero
    ctx->pc = 0x1e0cf8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1e0cfc:
    // 0x1e0cfc: 0x1833823  subu        $a3, $t4, $v1
    ctx->pc = 0x1e0cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_1e0d00:
    // 0x1e0d00: 0x1273818  mult        $a3, $t1, $a3
    ctx->pc = 0x1e0d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_1e0d04:
    // 0x1e0d04: 0x1674823  subu        $t1, $t3, $a3
    ctx->pc = 0x1e0d04u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_1e0d08:
    // 0x1e0d08: 0x24e70280  addiu       $a3, $a3, 0x280
    ctx->pc = 0x1e0d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 640));
label_1e0d0c:
    // 0x1e0d0c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1e0d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1e0d10:
    // 0x1e0d10: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1e0d10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1e0d14:
    // 0x1e0d14: 0x252f6c00  addiu       $t7, $t1, 0x6C00
    ctx->pc = 0x1e0d14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 27648));
label_1e0d18:
    // 0x1e0d18: 0x10000016  b           . + 4 + (0x16 << 2)
label_1e0d1c:
    if (ctx->pc == 0x1E0D1Cu) {
        ctx->pc = 0x1E0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D18u;
        // 0x1e0d1c: 0x24ee6c00  addiu       $t6, $a3, 0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D20u;
        goto label_1e0d20;
    }
    ctx->pc = 0x1E0D18u;
    {
        const bool branch_taken_0x1e0d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D18u;
        // 0x1e0d1c: 0x24ee6c00  addiu       $t6, $a3, 0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d18) {
            ctx->pc = 0x1E0D74u;
            goto label_1e0d74;
        }
    }
    ctx->pc = 0x1E0D20u;
label_1e0d20:
    // 0x1e0d20: 0x146a0005  bne         $v1, $t2, . + 4 + (0x5 << 2)
label_1e0d24:
    if (ctx->pc == 0x1E0D24u) {
        ctx->pc = 0x1E0D28u;
        goto label_1e0d28;
    }
    ctx->pc = 0x1E0D20u;
    {
        const bool branch_taken_0x1e0d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x1e0d20) {
            ctx->pc = 0x1E0D38u;
            goto label_1e0d38;
        }
    }
    ctx->pc = 0x1E0D28u;
label_1e0d28:
    // 0x1e0d28: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e0d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0d2c:
    // 0x1e0d2c: 0x240f7400  addiu       $t7, $zero, 0x7400
    ctx->pc = 0x1e0d2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 29696));
label_1e0d30:
    // 0x1e0d30: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e0d34:
    if (ctx->pc == 0x1E0D34u) {
        ctx->pc = 0x1E0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D30u;
        // 0x1e0d34: 0x340e9400  ori         $t6, $zero, 0x9400 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D38u;
        goto label_1e0d38;
    }
    ctx->pc = 0x1E0D30u;
    {
        const bool branch_taken_0x1e0d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D30u;
        // 0x1e0d34: 0x340e9400  ori         $t6, $zero, 0x9400 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d30) {
            ctx->pc = 0x1E0D44u;
            goto label_1e0d44;
        }
    }
    ctx->pc = 0x1E0D38u;
label_1e0d38:
    // 0x1e0d38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0d3c:
    // 0x1e0d3c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e0d3cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0d40:
    // 0x1e0d40: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1e0d40u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0d44:
    // 0x1e0d44: 0x0  nop
    ctx->pc = 0x1e0d44u;
    // NOP
label_1e0d48:
    // 0x1e0d48: 0x2527fff0  addiu       $a3, $t1, -0x10
    ctx->pc = 0x1e0d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
label_1e0d4c:
    // 0x1e0d4c: 0x749c0  sll         $t1, $a3, 7
    ctx->pc = 0x1e0d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
label_1e0d50:
    // 0x1e0d50: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_1e0d54:
    if (ctx->pc == 0x1E0D54u) {
        ctx->pc = 0x1E0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D50u;
        // 0x1e0d54: 0x938c3  sra         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D58u;
        goto label_1e0d58;
    }
    ctx->pc = 0x1E0D50u;
    {
        const bool branch_taken_0x1e0d50 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1E0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D50u;
        // 0x1e0d54: 0x938c3  sra         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d50) {
            ctx->pc = 0x1E0D60u;
            goto label_1e0d60;
        }
    }
    ctx->pc = 0x1E0D58u;
label_1e0d58:
    // 0x1e0d58: 0x25270007  addiu       $a3, $t1, 0x7
    ctx->pc = 0x1e0d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_1e0d5c:
    // 0x1e0d5c: 0x738c3  sra         $a3, $a3, 3
    ctx->pc = 0x1e0d5cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 3));
label_1e0d60:
    // 0x1e0d60: 0x167c023  subu        $t8, $t3, $a3
    ctx->pc = 0x1e0d60u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_1e0d64:
    // 0x1e0d64: 0x7010003  bgez        $t8, . + 4 + (0x3 << 2)
label_1e0d68:
    if (ctx->pc == 0x1E0D68u) {
        ctx->pc = 0x1E0D6Cu;
        goto label_1e0d6c;
    }
    ctx->pc = 0x1E0D64u;
    {
        const bool branch_taken_0x1e0d64 = (GPR_S32(ctx, 24) >= 0);
        if (branch_taken_0x1e0d64) {
            ctx->pc = 0x1E0D74u;
            goto label_1e0d74;
        }
    }
    ctx->pc = 0x1E0D6Cu;
label_1e0d6c:
    // 0x1e0d6c: 0x10000001  b           . + 4 + (0x1 << 2)
label_1e0d70:
    if (ctx->pc == 0x1E0D70u) {
        ctx->pc = 0x1E0D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D6Cu;
        // 0x1e0d70: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0D74u;
        goto label_1e0d74;
    }
    ctx->pc = 0x1E0D6Cu;
    {
        const bool branch_taken_0x1e0d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D6Cu;
        // 0x1e0d70: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d6c) {
            ctx->pc = 0x1E0D74u;
            goto label_1e0d74;
        }
    }
    ctx->pc = 0x1E0D74u;
label_1e0d74:
    // 0x1e0d74: 0x0  nop
    ctx->pc = 0x1e0d74u;
    // NOP
label_1e0d78:
    // 0x1e0d78: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x1e0d78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1e0d7c:
    // 0x1e0d7c: 0xa52f0cd0  sh          $t7, 0xCD0($t1)
    ctx->pc = 0x1e0d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 3280), (uint16_t)GPR_U32(ctx, 15));
label_1e0d80:
    // 0x1e0d80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e0d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e0d84:
    // 0x1e0d84: 0xa52e0ce0  sh          $t6, 0xCE0($t1)
    ctx->pc = 0x1e0d84u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 3296), (uint16_t)GPR_U32(ctx, 14));
label_1e0d88:
    // 0x1e0d88: 0x28670010  slti        $a3, $v1, 0x10
    ctx->pc = 0x1e0d88u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e0d8c:
    // 0x1e0d8c: 0xa1380cc0  sb          $t8, 0xCC0($t1)
    ctx->pc = 0x1e0d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3264), (uint8_t)GPR_U32(ctx, 24));
label_1e0d90:
    // 0x1e0d90: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1e0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_1e0d94:
    // 0x1e0d94: 0xa1380cc1  sb          $t8, 0xCC1($t1)
    ctx->pc = 0x1e0d94u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3265), (uint8_t)GPR_U32(ctx, 24));
label_1e0d98:
    // 0x1e0d98: 0xa1380cc2  sb          $t8, 0xCC2($t1)
    ctx->pc = 0x1e0d98u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3266), (uint8_t)GPR_U32(ctx, 24));
label_1e0d9c:
    // 0x1e0d9c: 0xa1260cc3  sb          $a2, 0xCC3($t1)
    ctx->pc = 0x1e0d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3267), (uint8_t)GPR_U32(ctx, 6));
label_1e0da0:
    // 0x1e0da0: 0x14e0ffb4  bnez        $a3, . + 4 + (-0x4C << 2)
label_1e0da4:
    if (ctx->pc == 0x1E0DA4u) {
        ctx->pc = 0x1E0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DA0u;
        // 0x1e0da4: 0xad280cc4  sw          $t0, 0xCC4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 3268), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0DA8u;
        goto label_1e0da8;
    }
    ctx->pc = 0x1E0DA0u;
    {
        const bool branch_taken_0x1e0da0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DA0u;
        // 0x1e0da4: 0xad280cc4  sw          $t0, 0xCC4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 3268), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0da0) {
            ctx->pc = 0x1E0C74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0c74;
        }
    }
    ctx->pc = 0x1E0DA8u;
label_1e0da8:
    // 0x1e0da8: 0x8f828d24  lw          $v0, -0x72DC($gp)
    ctx->pc = 0x1e0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
label_1e0dac:
    // 0x1e0dac: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1e0dacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e0db0:
    // 0x1e0db0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e0db4:
    if (ctx->pc == 0x1E0DB4u) {
        ctx->pc = 0x1E0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB0u;
        // 0x1e0db4: 0x24a31650  addiu       $v1, $a1, 0x1650 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0DB8u;
        goto label_1e0db8;
    }
    ctx->pc = 0x1E0DB0u;
    {
        const bool branch_taken_0x1e0db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB0u;
        // 0x1e0db4: 0x24a31650  addiu       $v1, $a1, 0x1650 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0db0) {
            ctx->pc = 0x1E0DC0u;
            goto label_1e0dc0;
        }
    }
    ctx->pc = 0x1E0DB8u;
label_1e0db8:
    // 0x1e0db8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e0dbc:
    if (ctx->pc == 0x1E0DBCu) {
        ctx->pc = 0x1E0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB8u;
        // 0x1e0dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0DC0u;
        goto label_1e0dc0;
    }
    ctx->pc = 0x1E0DB8u;
    {
        const bool branch_taken_0x1e0db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB8u;
        // 0x1e0dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0db8) {
            ctx->pc = 0x1E0DC4u;
            goto label_1e0dc4;
        }
    }
    ctx->pc = 0x1E0DC0u;
label_1e0dc0:
    // 0x1e0dc0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0dc4:
    // 0x1e0dc4: 0xa0620073  sb          $v0, 0x73($v1)
    ctx->pc = 0x1e0dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1e0dc8u;
    return;
}

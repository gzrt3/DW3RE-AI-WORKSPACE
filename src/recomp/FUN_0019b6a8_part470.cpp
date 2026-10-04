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


void FUN_0019b6a8_part470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2806b8u: goto label_2806b8;
        case 0x2806bcu: goto label_2806bc;
        case 0x2806c0u: goto label_2806c0;
        case 0x2806c4u: goto label_2806c4;
        case 0x2806c8u: goto label_2806c8;
        case 0x2806ccu: goto label_2806cc;
        case 0x2806d0u: goto label_2806d0;
        case 0x2806d4u: goto label_2806d4;
        case 0x2806d8u: goto label_2806d8;
        case 0x2806dcu: goto label_2806dc;
        case 0x2806e0u: goto label_2806e0;
        case 0x2806e4u: goto label_2806e4;
        case 0x2806e8u: goto label_2806e8;
        case 0x2806ecu: goto label_2806ec;
        case 0x2806f0u: goto label_2806f0;
        case 0x2806f4u: goto label_2806f4;
        case 0x2806f8u: goto label_2806f8;
        case 0x2806fcu: goto label_2806fc;
        case 0x280700u: goto label_280700;
        case 0x280704u: goto label_280704;
        case 0x280708u: goto label_280708;
        case 0x28070cu: goto label_28070c;
        case 0x280710u: goto label_280710;
        case 0x280714u: goto label_280714;
        case 0x280718u: goto label_280718;
        case 0x28071cu: goto label_28071c;
        case 0x280720u: goto label_280720;
        case 0x280724u: goto label_280724;
        case 0x280728u: goto label_280728;
        case 0x28072cu: goto label_28072c;
        case 0x280730u: goto label_280730;
        case 0x280734u: goto label_280734;
        case 0x280738u: goto label_280738;
        case 0x28073cu: goto label_28073c;
        case 0x280740u: goto label_280740;
        case 0x280744u: goto label_280744;
        case 0x280748u: goto label_280748;
        case 0x28074cu: goto label_28074c;
        case 0x280750u: goto label_280750;
        case 0x280754u: goto label_280754;
        case 0x280758u: goto label_280758;
        case 0x28075cu: goto label_28075c;
        case 0x280760u: goto label_280760;
        case 0x280764u: goto label_280764;
        case 0x280768u: goto label_280768;
        case 0x28076cu: goto label_28076c;
        case 0x280770u: goto label_280770;
        case 0x280774u: goto label_280774;
        case 0x280778u: goto label_280778;
        case 0x28077cu: goto label_28077c;
        case 0x280780u: goto label_280780;
        case 0x280784u: goto label_280784;
        case 0x280788u: goto label_280788;
        case 0x28078cu: goto label_28078c;
        case 0x280790u: goto label_280790;
        case 0x280794u: goto label_280794;
        case 0x280798u: goto label_280798;
        case 0x28079cu: goto label_28079c;
        case 0x2807a0u: goto label_2807a0;
        case 0x2807a4u: goto label_2807a4;
        case 0x2807a8u: goto label_2807a8;
        case 0x2807acu: goto label_2807ac;
        case 0x2807b0u: goto label_2807b0;
        case 0x2807b4u: goto label_2807b4;
        case 0x2807b8u: goto label_2807b8;
        case 0x2807bcu: goto label_2807bc;
        case 0x2807c0u: goto label_2807c0;
        case 0x2807c4u: goto label_2807c4;
        case 0x2807c8u: goto label_2807c8;
        case 0x2807ccu: goto label_2807cc;
        case 0x2807d0u: goto label_2807d0;
        case 0x2807d4u: goto label_2807d4;
        case 0x2807d8u: goto label_2807d8;
        case 0x2807dcu: goto label_2807dc;
        case 0x2807e0u: goto label_2807e0;
        case 0x2807e4u: goto label_2807e4;
        case 0x2807e8u: goto label_2807e8;
        case 0x2807ecu: goto label_2807ec;
        case 0x2807f0u: goto label_2807f0;
        case 0x2807f4u: goto label_2807f4;
        case 0x2807f8u: goto label_2807f8;
        case 0x2807fcu: goto label_2807fc;
        case 0x280800u: goto label_280800;
        case 0x280804u: goto label_280804;
        case 0x280808u: goto label_280808;
        case 0x28080cu: goto label_28080c;
        case 0x280810u: goto label_280810;
        case 0x280814u: goto label_280814;
        case 0x280818u: goto label_280818;
        case 0x28081cu: goto label_28081c;
        case 0x280820u: goto label_280820;
        case 0x280824u: goto label_280824;
        case 0x280828u: goto label_280828;
        case 0x28082cu: goto label_28082c;
        case 0x280830u: goto label_280830;
        case 0x280834u: goto label_280834;
        case 0x280838u: goto label_280838;
        case 0x28083cu: goto label_28083c;
        case 0x280840u: goto label_280840;
        case 0x280844u: goto label_280844;
        case 0x280848u: goto label_280848;
        case 0x28084cu: goto label_28084c;
        case 0x280850u: goto label_280850;
        case 0x280854u: goto label_280854;
        case 0x280858u: goto label_280858;
        case 0x28085cu: goto label_28085c;
        case 0x280860u: goto label_280860;
        case 0x280864u: goto label_280864;
        case 0x280868u: goto label_280868;
        case 0x28086cu: goto label_28086c;
        case 0x280870u: goto label_280870;
        case 0x280874u: goto label_280874;
        case 0x280878u: goto label_280878;
        case 0x28087cu: goto label_28087c;
        case 0x280880u: goto label_280880;
        case 0x280884u: goto label_280884;
        case 0x280888u: goto label_280888;
        case 0x28088cu: goto label_28088c;
        case 0x280890u: goto label_280890;
        case 0x280894u: goto label_280894;
        case 0x280898u: goto label_280898;
        case 0x28089cu: goto label_28089c;
        case 0x2808a0u: goto label_2808a0;
        case 0x2808a4u: goto label_2808a4;
        case 0x2808a8u: goto label_2808a8;
        case 0x2808acu: goto label_2808ac;
        case 0x2808b0u: goto label_2808b0;
        case 0x2808b4u: goto label_2808b4;
        case 0x2808b8u: goto label_2808b8;
        case 0x2808bcu: goto label_2808bc;
        case 0x2808c0u: goto label_2808c0;
        case 0x2808c4u: goto label_2808c4;
        case 0x2808c8u: goto label_2808c8;
        case 0x2808ccu: goto label_2808cc;
        case 0x2808d0u: goto label_2808d0;
        case 0x2808d4u: goto label_2808d4;
        case 0x2808d8u: goto label_2808d8;
        case 0x2808dcu: goto label_2808dc;
        case 0x2808e0u: goto label_2808e0;
        case 0x2808e4u: goto label_2808e4;
        case 0x2808e8u: goto label_2808e8;
        case 0x2808ecu: goto label_2808ec;
        case 0x2808f0u: goto label_2808f0;
        case 0x2808f4u: goto label_2808f4;
        case 0x2808f8u: goto label_2808f8;
        case 0x2808fcu: goto label_2808fc;
        case 0x280900u: goto label_280900;
        case 0x280904u: goto label_280904;
        case 0x280908u: goto label_280908;
        case 0x28090cu: goto label_28090c;
        case 0x280910u: goto label_280910;
        case 0x280914u: goto label_280914;
        case 0x280918u: goto label_280918;
        case 0x28091cu: goto label_28091c;
        case 0x280920u: goto label_280920;
        case 0x280924u: goto label_280924;
        case 0x280928u: goto label_280928;
        case 0x28092cu: goto label_28092c;
        case 0x280930u: goto label_280930;
        case 0x280934u: goto label_280934;
        case 0x280938u: goto label_280938;
        case 0x28093cu: goto label_28093c;
        case 0x280940u: goto label_280940;
        case 0x280944u: goto label_280944;
        case 0x280948u: goto label_280948;
        case 0x28094cu: goto label_28094c;
        case 0x280950u: goto label_280950;
        case 0x280954u: goto label_280954;
        case 0x280958u: goto label_280958;
        case 0x28095cu: goto label_28095c;
        case 0x280960u: goto label_280960;
        case 0x280964u: goto label_280964;
        case 0x280968u: goto label_280968;
        case 0x28096cu: goto label_28096c;
        case 0x280970u: goto label_280970;
        case 0x280974u: goto label_280974;
        case 0x280978u: goto label_280978;
        case 0x28097cu: goto label_28097c;
        case 0x280980u: goto label_280980;
        case 0x280984u: goto label_280984;
        case 0x280988u: goto label_280988;
        case 0x28098cu: goto label_28098c;
        case 0x280990u: goto label_280990;
        case 0x280994u: goto label_280994;
        case 0x280998u: goto label_280998;
        case 0x28099cu: goto label_28099c;
        case 0x2809a0u: goto label_2809a0;
        case 0x2809a4u: goto label_2809a4;
        case 0x2809a8u: goto label_2809a8;
        case 0x2809acu: goto label_2809ac;
        case 0x2809b0u: goto label_2809b0;
        case 0x2809b4u: goto label_2809b4;
        case 0x2809b8u: goto label_2809b8;
        case 0x2809bcu: goto label_2809bc;
        case 0x2809c0u: goto label_2809c0;
        case 0x2809c4u: goto label_2809c4;
        case 0x2809c8u: goto label_2809c8;
        case 0x2809ccu: goto label_2809cc;
        case 0x2809d0u: goto label_2809d0;
        case 0x2809d4u: goto label_2809d4;
        case 0x2809d8u: goto label_2809d8;
        case 0x2809dcu: goto label_2809dc;
        case 0x2809e0u: goto label_2809e0;
        case 0x2809e4u: goto label_2809e4;
        case 0x2809e8u: goto label_2809e8;
        case 0x2809ecu: goto label_2809ec;
        case 0x2809f0u: goto label_2809f0;
        case 0x2809f4u: goto label_2809f4;
        case 0x2809f8u: goto label_2809f8;
        case 0x2809fcu: goto label_2809fc;
        case 0x280a00u: goto label_280a00;
        case 0x280a04u: goto label_280a04;
        case 0x280a08u: goto label_280a08;
        case 0x280a0cu: goto label_280a0c;
        case 0x280a10u: goto label_280a10;
        case 0x280a14u: goto label_280a14;
        case 0x280a18u: goto label_280a18;
        case 0x280a1cu: goto label_280a1c;
        case 0x280a20u: goto label_280a20;
        case 0x280a24u: goto label_280a24;
        case 0x280a28u: goto label_280a28;
        case 0x280a2cu: goto label_280a2c;
        case 0x280a30u: goto label_280a30;
        case 0x280a34u: goto label_280a34;
        case 0x280a38u: goto label_280a38;
        case 0x280a3cu: goto label_280a3c;
        case 0x280a40u: goto label_280a40;
        case 0x280a44u: goto label_280a44;
        case 0x280a48u: goto label_280a48;
        case 0x280a4cu: goto label_280a4c;
        case 0x280a50u: goto label_280a50;
        case 0x280a54u: goto label_280a54;
        case 0x280a58u: goto label_280a58;
        case 0x280a5cu: goto label_280a5c;
        case 0x280a60u: goto label_280a60;
        case 0x280a64u: goto label_280a64;
        case 0x280a68u: goto label_280a68;
        case 0x280a6cu: goto label_280a6c;
        case 0x280a70u: goto label_280a70;
        case 0x280a74u: goto label_280a74;
        case 0x280a78u: goto label_280a78;
        case 0x280a7cu: goto label_280a7c;
        case 0x280a80u: goto label_280a80;
        case 0x280a84u: goto label_280a84;
        case 0x280a88u: goto label_280a88;
        case 0x280a8cu: goto label_280a8c;
        case 0x280a90u: goto label_280a90;
        case 0x280a94u: goto label_280a94;
        case 0x280a98u: goto label_280a98;
        case 0x280a9cu: goto label_280a9c;
        case 0x280aa0u: goto label_280aa0;
        case 0x280aa4u: goto label_280aa4;
        case 0x280aa8u: goto label_280aa8;
        case 0x280aacu: goto label_280aac;
        case 0x280ab0u: goto label_280ab0;
        case 0x280ab4u: goto label_280ab4;
        case 0x280ab8u: goto label_280ab8;
        case 0x280abcu: goto label_280abc;
        case 0x280ac0u: goto label_280ac0;
        case 0x280ac4u: goto label_280ac4;
        case 0x280ac8u: goto label_280ac8;
        case 0x280accu: goto label_280acc;
        case 0x280ad0u: goto label_280ad0;
        case 0x280ad4u: goto label_280ad4;
        case 0x280ad8u: goto label_280ad8;
        case 0x280adcu: goto label_280adc;
        case 0x280ae0u: goto label_280ae0;
        case 0x280ae4u: goto label_280ae4;
        case 0x280ae8u: goto label_280ae8;
        case 0x280aecu: goto label_280aec;
        case 0x280af0u: goto label_280af0;
        case 0x280af4u: goto label_280af4;
        case 0x280af8u: goto label_280af8;
        case 0x280afcu: goto label_280afc;
        case 0x280b00u: goto label_280b00;
        case 0x280b04u: goto label_280b04;
        case 0x280b08u: goto label_280b08;
        case 0x280b0cu: goto label_280b0c;
        case 0x280b10u: goto label_280b10;
        case 0x280b14u: goto label_280b14;
        case 0x280b18u: goto label_280b18;
        case 0x280b1cu: goto label_280b1c;
        case 0x280b20u: goto label_280b20;
        case 0x280b24u: goto label_280b24;
        case 0x280b28u: goto label_280b28;
        case 0x280b2cu: goto label_280b2c;
        case 0x280b30u: goto label_280b30;
        case 0x280b34u: goto label_280b34;
        case 0x280b38u: goto label_280b38;
        case 0x280b3cu: goto label_280b3c;
        case 0x280b40u: goto label_280b40;
        case 0x280b44u: goto label_280b44;
        case 0x280b48u: goto label_280b48;
        case 0x280b4cu: goto label_280b4c;
        case 0x280b50u: goto label_280b50;
        case 0x280b54u: goto label_280b54;
        case 0x280b58u: goto label_280b58;
        case 0x280b5cu: goto label_280b5c;
        case 0x280b60u: goto label_280b60;
        case 0x280b64u: goto label_280b64;
        case 0x280b68u: goto label_280b68;
        case 0x280b6cu: goto label_280b6c;
        case 0x280b70u: goto label_280b70;
        case 0x280b74u: goto label_280b74;
        case 0x280b78u: goto label_280b78;
        case 0x280b7cu: goto label_280b7c;
        case 0x280b80u: goto label_280b80;
        case 0x280b84u: goto label_280b84;
        case 0x280b88u: goto label_280b88;
        case 0x280b8cu: goto label_280b8c;
        case 0x280b90u: goto label_280b90;
        case 0x280b94u: goto label_280b94;
        case 0x280b98u: goto label_280b98;
        case 0x280b9cu: goto label_280b9c;
        case 0x280ba0u: goto label_280ba0;
        case 0x280ba4u: goto label_280ba4;
        case 0x280ba8u: goto label_280ba8;
        case 0x280bacu: goto label_280bac;
        case 0x280bb0u: goto label_280bb0;
        case 0x280bb4u: goto label_280bb4;
        case 0x280bb8u: goto label_280bb8;
        case 0x280bbcu: goto label_280bbc;
        case 0x280bc0u: goto label_280bc0;
        case 0x280bc4u: goto label_280bc4;
        case 0x280bc8u: goto label_280bc8;
        case 0x280bccu: goto label_280bcc;
        case 0x280bd0u: goto label_280bd0;
        case 0x280bd4u: goto label_280bd4;
        case 0x280bd8u: goto label_280bd8;
        case 0x280bdcu: goto label_280bdc;
        case 0x280be0u: goto label_280be0;
        case 0x280be4u: goto label_280be4;
        case 0x280be8u: goto label_280be8;
        case 0x280becu: goto label_280bec;
        case 0x280bf0u: goto label_280bf0;
        case 0x280bf4u: goto label_280bf4;
        case 0x280bf8u: goto label_280bf8;
        case 0x280bfcu: goto label_280bfc;
        case 0x280c00u: goto label_280c00;
        case 0x280c04u: goto label_280c04;
        case 0x280c08u: goto label_280c08;
        case 0x280c0cu: goto label_280c0c;
        case 0x280c10u: goto label_280c10;
        case 0x280c14u: goto label_280c14;
        case 0x280c18u: goto label_280c18;
        case 0x280c1cu: goto label_280c1c;
        case 0x280c20u: goto label_280c20;
        case 0x280c24u: goto label_280c24;
        case 0x280c28u: goto label_280c28;
        case 0x280c2cu: goto label_280c2c;
        case 0x280c30u: goto label_280c30;
        case 0x280c34u: goto label_280c34;
        case 0x280c38u: goto label_280c38;
        case 0x280c3cu: goto label_280c3c;
        case 0x280c40u: goto label_280c40;
        case 0x280c44u: goto label_280c44;
        case 0x280c48u: goto label_280c48;
        case 0x280c4cu: goto label_280c4c;
        case 0x280c50u: goto label_280c50;
        case 0x280c54u: goto label_280c54;
        case 0x280c58u: goto label_280c58;
        case 0x280c5cu: goto label_280c5c;
        case 0x280c60u: goto label_280c60;
        case 0x280c64u: goto label_280c64;
        case 0x280c68u: goto label_280c68;
        case 0x280c6cu: goto label_280c6c;
        case 0x280c70u: goto label_280c70;
        case 0x280c74u: goto label_280c74;
        case 0x280c78u: goto label_280c78;
        case 0x280c7cu: goto label_280c7c;
        case 0x280c80u: goto label_280c80;
        case 0x280c84u: goto label_280c84;
        case 0x280c88u: goto label_280c88;
        case 0x280c8cu: goto label_280c8c;
        case 0x280c90u: goto label_280c90;
        case 0x280c94u: goto label_280c94;
        case 0x280c98u: goto label_280c98;
        case 0x280c9cu: goto label_280c9c;
        case 0x280ca0u: goto label_280ca0;
        case 0x280ca4u: goto label_280ca4;
        case 0x280ca8u: goto label_280ca8;
        case 0x280cacu: goto label_280cac;
        case 0x280cb0u: goto label_280cb0;
        case 0x280cb4u: goto label_280cb4;
        case 0x280cb8u: goto label_280cb8;
        case 0x280cbcu: goto label_280cbc;
        case 0x280cc0u: goto label_280cc0;
        case 0x280cc4u: goto label_280cc4;
        case 0x280cc8u: goto label_280cc8;
        case 0x280cccu: goto label_280ccc;
        case 0x280cd0u: goto label_280cd0;
        case 0x280cd4u: goto label_280cd4;
        case 0x280cd8u: goto label_280cd8;
        case 0x280cdcu: goto label_280cdc;
        case 0x280ce0u: goto label_280ce0;
        case 0x280ce4u: goto label_280ce4;
        case 0x280ce8u: goto label_280ce8;
        case 0x280cecu: goto label_280cec;
        case 0x280cf0u: goto label_280cf0;
        case 0x280cf4u: goto label_280cf4;
        case 0x280cf8u: goto label_280cf8;
        case 0x280cfcu: goto label_280cfc;
        case 0x280d00u: goto label_280d00;
        case 0x280d04u: goto label_280d04;
        case 0x280d08u: goto label_280d08;
        case 0x280d0cu: goto label_280d0c;
        case 0x280d10u: goto label_280d10;
        case 0x280d14u: goto label_280d14;
        case 0x280d18u: goto label_280d18;
        case 0x280d1cu: goto label_280d1c;
        case 0x280d20u: goto label_280d20;
        case 0x280d24u: goto label_280d24;
        case 0x280d28u: goto label_280d28;
        case 0x280d2cu: goto label_280d2c;
        case 0x280d30u: goto label_280d30;
        case 0x280d34u: goto label_280d34;
        case 0x280d38u: goto label_280d38;
        case 0x280d3cu: goto label_280d3c;
        case 0x280d40u: goto label_280d40;
        case 0x280d44u: goto label_280d44;
        case 0x280d48u: goto label_280d48;
        case 0x280d4cu: goto label_280d4c;
        case 0x280d50u: goto label_280d50;
        case 0x280d54u: goto label_280d54;
        case 0x280d58u: goto label_280d58;
        case 0x280d5cu: goto label_280d5c;
        case 0x280d60u: goto label_280d60;
        case 0x280d64u: goto label_280d64;
        case 0x280d68u: goto label_280d68;
        case 0x280d6cu: goto label_280d6c;
        case 0x280d70u: goto label_280d70;
        case 0x280d74u: goto label_280d74;
        case 0x280d78u: goto label_280d78;
        case 0x280d7cu: goto label_280d7c;
        case 0x280d80u: goto label_280d80;
        case 0x280d84u: goto label_280d84;
        case 0x280d88u: goto label_280d88;
        case 0x280d8cu: goto label_280d8c;
        case 0x280d90u: goto label_280d90;
        case 0x280d94u: goto label_280d94;
        case 0x280d98u: goto label_280d98;
        case 0x280d9cu: goto label_280d9c;
        case 0x280da0u: goto label_280da0;
        case 0x280da4u: goto label_280da4;
        case 0x280da8u: goto label_280da8;
        case 0x280dacu: goto label_280dac;
        case 0x280db0u: goto label_280db0;
        case 0x280db4u: goto label_280db4;
        case 0x280db8u: goto label_280db8;
        case 0x280dbcu: goto label_280dbc;
        case 0x280dc0u: goto label_280dc0;
        case 0x280dc4u: goto label_280dc4;
        case 0x280dc8u: goto label_280dc8;
        case 0x280dccu: goto label_280dcc;
        case 0x280dd0u: goto label_280dd0;
        case 0x280dd4u: goto label_280dd4;
        case 0x280dd8u: goto label_280dd8;
        case 0x280ddcu: goto label_280ddc;
        case 0x280de0u: goto label_280de0;
        case 0x280de4u: goto label_280de4;
        case 0x280de8u: goto label_280de8;
        case 0x280decu: goto label_280dec;
        case 0x280df0u: goto label_280df0;
        case 0x280df4u: goto label_280df4;
        case 0x280df8u: goto label_280df8;
        case 0x280dfcu: goto label_280dfc;
        case 0x280e00u: goto label_280e00;
        case 0x280e04u: goto label_280e04;
        case 0x280e08u: goto label_280e08;
        case 0x280e0cu: goto label_280e0c;
        case 0x280e10u: goto label_280e10;
        case 0x280e14u: goto label_280e14;
        case 0x280e18u: goto label_280e18;
        case 0x280e1cu: goto label_280e1c;
        case 0x280e20u: goto label_280e20;
        case 0x280e24u: goto label_280e24;
        case 0x280e28u: goto label_280e28;
        case 0x280e2cu: goto label_280e2c;
        case 0x280e30u: goto label_280e30;
        case 0x280e34u: goto label_280e34;
        case 0x280e38u: goto label_280e38;
        case 0x280e3cu: goto label_280e3c;
        case 0x280e40u: goto label_280e40;
        case 0x280e44u: goto label_280e44;
        case 0x280e48u: goto label_280e48;
        case 0x280e4cu: goto label_280e4c;
        case 0x280e50u: goto label_280e50;
        case 0x280e54u: goto label_280e54;
        case 0x280e58u: goto label_280e58;
        case 0x280e5cu: goto label_280e5c;
        case 0x280e60u: goto label_280e60;
        case 0x280e64u: goto label_280e64;
        case 0x280e68u: goto label_280e68;
        case 0x280e6cu: goto label_280e6c;
        case 0x280e70u: goto label_280e70;
        case 0x280e74u: goto label_280e74;
        case 0x280e78u: goto label_280e78;
        case 0x280e7cu: goto label_280e7c;
        case 0x280e80u: goto label_280e80;
        case 0x280e84u: goto label_280e84;
        default: return;
    }

label_2806b8:
    // 0x2806b8: 0x0  nop
    ctx->pc = 0x2806b8u;
    // NOP
label_2806bc:
    // 0x2806bc: 0x0  nop
    ctx->pc = 0x2806bcu;
    // NOP
label_2806c0:
    // 0x2806c0: 0x1afd9  .word       0x0001AFD9                   # multu       $zero, $at # 0000AFC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2806c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2806c4:
    // 0x2806c4: 0x33d00  sll         $a3, $v1, 20
    ctx->pc = 0x2806c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
label_2806c8:
    // 0x2806c8: 0x0  nop
    ctx->pc = 0x2806c8u;
    // NOP
label_2806cc:
    // 0x2806cc: 0x0  nop
    ctx->pc = 0x2806ccu;
    // NOP
label_2806d0:
    // 0x2806d0: 0x1b041  .word       0x0001B041                   # INVALID     $zero, $at, -0x4FBF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2806d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2806D0 raw=0x0001B041"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2806d4:
    // 0x2806d4: 0x353a0  .word       0x000353A0                   # add         $t2, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2806d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2806d8:
    // 0x2806d8: 0x0  nop
    ctx->pc = 0x2806d8u;
    // NOP
label_2806dc:
    // 0x2806dc: 0x0  nop
    ctx->pc = 0x2806dcu;
    // NOP
label_2806e0:
    // 0x2806e0: 0x1b0ac  .word       0x0001B0AC                   # dadd        $s6, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2806e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2806e4:
    // 0x2806e4: 0x35d50  .word       0x00035D50                   # mfhi        $t3 # 00030540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2806e4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2806e8:
    // 0x2806e8: 0x0  nop
    ctx->pc = 0x2806e8u;
    // NOP
label_2806ec:
    // 0x2806ec: 0x0  nop
    ctx->pc = 0x2806ecu;
    // NOP
label_2806f0:
    // 0x2806f0: 0x1b118  .word       0x0001B118                   # mult        $s6, $zero, $at # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2806f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_2806f4:
    // 0x2806f4: 0x3b000  sll         $s6, $v1, 0
    ctx->pc = 0x2806f4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_2806f8:
    // 0x2806f8: 0x0  nop
    ctx->pc = 0x2806f8u;
    // NOP
label_2806fc:
    // 0x2806fc: 0x0  nop
    ctx->pc = 0x2806fcu;
    // NOP
label_280700:
    // 0x280700: 0x1b18e  .word       0x0001B18E                   # INVALID     $zero, $at, -0x4E72 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x280700 raw=0x0001B18E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280704:
    // 0x280704: 0x3b070  tge         $zero, $v1, 705
    ctx->pc = 0x280704u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280708:
    // 0x280708: 0x0  nop
    ctx->pc = 0x280708u;
    // NOP
label_28070c:
    // 0x28070c: 0x0  nop
    ctx->pc = 0x28070cu;
    // NOP
label_280710:
    // 0x280710: 0x1b205  .word       0x0001B205                   # INVALID     $zero, $at, -0x4DFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x280710 raw=0x0001B205"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280714:
    // 0x280714: 0x37340  sll         $t6, $v1, 13
    ctx->pc = 0x280714u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
label_280718:
    // 0x280718: 0x0  nop
    ctx->pc = 0x280718u;
    // NOP
label_28071c:
    // 0x28071c: 0x0  nop
    ctx->pc = 0x28071cu;
    // NOP
label_280720:
    // 0x280720: 0x1b274  teq         $zero, $at, 713
    ctx->pc = 0x280720u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280724:
    // 0x280724: 0x392b0  tge         $zero, $v1, 586
    ctx->pc = 0x280724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280728:
    // 0x280728: 0x0  nop
    ctx->pc = 0x280728u;
    // NOP
label_28072c:
    // 0x28072c: 0x0  nop
    ctx->pc = 0x28072cu;
    // NOP
label_280730:
    // 0x280730: 0x1b2e7  .word       0x0001B2E7                   # nor         $s6, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280730u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_280734:
    // 0x280734: 0x36ac0  sll         $t5, $v1, 11
    ctx->pc = 0x280734u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_280738:
    // 0x280738: 0x0  nop
    ctx->pc = 0x280738u;
    // NOP
label_28073c:
    // 0x28073c: 0x0  nop
    ctx->pc = 0x28073cu;
    // NOP
label_280740:
    // 0x280740: 0x1b355  .word       0x0001B355                   # INVALID     $zero, $at, -0x4CAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x280740 raw=0x0001B355"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280744:
    // 0x280744: 0x31d10  .word       0x00031D10                   # mfhi        $v1 # 00030500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280744u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_280748:
    // 0x280748: 0x0  nop
    ctx->pc = 0x280748u;
    // NOP
label_28074c:
    // 0x28074c: 0x0  nop
    ctx->pc = 0x28074cu;
    // NOP
label_280750:
    // 0x280750: 0x1b3b9  .word       0x0001B3B9                   # INVALID     $zero, $at, -0x4C47 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280750u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x280750 raw=0x0001B3B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280754:
    // 0x280754: 0x34bf0  tge         $zero, $v1, 303
    ctx->pc = 0x280754u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280758:
    // 0x280758: 0x0  nop
    ctx->pc = 0x280758u;
    // NOP
label_28075c:
    // 0x28075c: 0x0  nop
    ctx->pc = 0x28075cu;
    // NOP
label_280760:
    // 0x280760: 0x1b423  .word       0x0001B423                   # negu        $s6, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280760u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_280764:
    // 0x280764: 0x332a0  .word       0x000332A0                   # add         $a2, $zero, $v1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280764u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_280768:
    // 0x280768: 0x0  nop
    ctx->pc = 0x280768u;
    // NOP
label_28076c:
    // 0x28076c: 0x0  nop
    ctx->pc = 0x28076cu;
    // NOP
label_280770:
    // 0x280770: 0x1b48a  .word       0x0001B48A                   # movz        $s6, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280770u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_280774:
    // 0x280774: 0x37d60  .word       0x00037D60                   # add         $t7, $zero, $v1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_280778:
    // 0x280778: 0x0  nop
    ctx->pc = 0x280778u;
    // NOP
label_28077c:
    // 0x28077c: 0x0  nop
    ctx->pc = 0x28077cu;
    // NOP
label_280780:
    // 0x280780: 0x1b4fa  dsrl        $s6, $at, 19
    ctx->pc = 0x280780u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) >> 19);
label_280784:
    // 0x280784: 0x2b9f0  tge         $zero, $v0, 743
    ctx->pc = 0x280784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_280788:
    // 0x280788: 0x0  nop
    ctx->pc = 0x280788u;
    // NOP
label_28078c:
    // 0x28078c: 0x0  nop
    ctx->pc = 0x28078cu;
    // NOP
label_280790:
    // 0x280790: 0x1b552  .word       0x0001B552                   # mflo        $s6 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280790u;
    SET_GPR_U64(ctx, 22, ctx->lo);
label_280794:
    // 0x280794: 0x38c40  sll         $s1, $v1, 17
    ctx->pc = 0x280794u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 17));
label_280798:
    // 0x280798: 0x0  nop
    ctx->pc = 0x280798u;
    // NOP
label_28079c:
    // 0x28079c: 0x0  nop
    ctx->pc = 0x28079cu;
    // NOP
label_2807a0:
    // 0x2807a0: 0x1b5c4  .word       0x0001B5C4                   # sllv        $s6, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2807a0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2807a4:
    // 0x2807a4: 0x30570  tge         $zero, $v1, 21
    ctx->pc = 0x2807a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2807a8:
    // 0x2807a8: 0x0  nop
    ctx->pc = 0x2807a8u;
    // NOP
label_2807ac:
    // 0x2807ac: 0x0  nop
    ctx->pc = 0x2807acu;
    // NOP
label_2807b0:
    // 0x2807b0: 0x1b625  .word       0x0001B625                   # or          $s6, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2807b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_2807b4:
    // 0x2807b4: 0x33120  .word       0x00033120                   # add         $a2, $zero, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2807b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2807b8:
    // 0x2807b8: 0x0  nop
    ctx->pc = 0x2807b8u;
    // NOP
label_2807bc:
    // 0x2807bc: 0x0  nop
    ctx->pc = 0x2807bcu;
    // NOP
label_2807c0:
    // 0x2807c0: 0x1b68c  .word       0x0001B68C                   # syscall     730 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2807c0u;
    ctx->pc = 0x2807C4u;
runtime->handleSyscall(rdram, ctx, 0x6DAu);
label_2807c4:
    // 0x2807c4: 0x331d0  .word       0x000331D0                   # mfhi        $a2 # 000301C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2807c4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2807c8:
    // 0x2807c8: 0x0  nop
    ctx->pc = 0x2807c8u;
    // NOP
label_2807cc:
    // 0x2807cc: 0x0  nop
    ctx->pc = 0x2807ccu;
    // NOP
label_2807d0:
    // 0x2807d0: 0x1b6f3  tltu        $zero, $at, 731
    ctx->pc = 0x2807d0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2807d4:
    // 0x2807d4: 0x36300  sll         $t4, $v1, 12
    ctx->pc = 0x2807d4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
label_2807d8:
    // 0x2807d8: 0x0  nop
    ctx->pc = 0x2807d8u;
    // NOP
label_2807dc:
    // 0x2807dc: 0x0  nop
    ctx->pc = 0x2807dcu;
    // NOP
label_2807e0:
    // 0x2807e0: 0x1b760  .word       0x0001B760                   # add         $s6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2807e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_2807e4:
    // 0x2807e4: 0x3c580  sll         $t8, $v1, 22
    ctx->pc = 0x2807e4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 3), 22));
label_2807e8:
    // 0x2807e8: 0x0  nop
    ctx->pc = 0x2807e8u;
    // NOP
label_2807ec:
    // 0x2807ec: 0x0  nop
    ctx->pc = 0x2807ecu;
    // NOP
label_2807f0:
    // 0x2807f0: 0x1b7d9  .word       0x0001B7D9                   # multu       $zero, $at # 0000B7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2807f0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_2807f4:
    // 0x2807f4: 0x33df0  tge         $zero, $v1, 247
    ctx->pc = 0x2807f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2807f8:
    // 0x2807f8: 0x0  nop
    ctx->pc = 0x2807f8u;
    // NOP
label_2807fc:
    // 0x2807fc: 0x0  nop
    ctx->pc = 0x2807fcu;
    // NOP
label_280800:
    // 0x280800: 0x1b841  .word       0x0001B841                   # INVALID     $zero, $at, -0x47BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x280800 raw=0x0001B841"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280804:
    // 0x280804: 0x34d90  .word       0x00034D90                   # mfhi        $t1 # 00030580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280804u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_280808:
    // 0x280808: 0x0  nop
    ctx->pc = 0x280808u;
    // NOP
label_28080c:
    // 0x28080c: 0x0  nop
    ctx->pc = 0x28080cu;
    // NOP
label_280810:
    // 0x280810: 0x1b8ab  .word       0x0001B8AB                   # sltu        $s7, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280810u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_280814:
    // 0x280814: 0x31f30  tge         $zero, $v1, 124
    ctx->pc = 0x280814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280818:
    // 0x280818: 0x0  nop
    ctx->pc = 0x280818u;
    // NOP
label_28081c:
    // 0x28081c: 0x0  nop
    ctx->pc = 0x28081cu;
    // NOP
label_280820:
    // 0x280820: 0x1b90f  .word       0x0001B90F                   # sync # 0001B800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280820u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280824:
    // 0x280824: 0x3b430  tge         $zero, $v1, 720
    ctx->pc = 0x280824u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280828:
    // 0x280828: 0x0  nop
    ctx->pc = 0x280828u;
    // NOP
label_28082c:
    // 0x28082c: 0x0  nop
    ctx->pc = 0x28082cu;
    // NOP
label_280830:
    // 0x280830: 0x1b986  .word       0x0001B986                   # srlv        $s7, $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280830u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_280834:
    // 0x280834: 0x35e30  tge         $zero, $v1, 376
    ctx->pc = 0x280834u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280838:
    // 0x280838: 0x0  nop
    ctx->pc = 0x280838u;
    // NOP
label_28083c:
    // 0x28083c: 0x0  nop
    ctx->pc = 0x28083cu;
    // NOP
label_280840:
    // 0x280840: 0x1b9f2  tlt         $zero, $at, 743
    ctx->pc = 0x280840u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280844:
    // 0x280844: 0x33a30  tge         $zero, $v1, 232
    ctx->pc = 0x280844u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280848:
    // 0x280848: 0x0  nop
    ctx->pc = 0x280848u;
    // NOP
label_28084c:
    // 0x28084c: 0x0  nop
    ctx->pc = 0x28084cu;
    // NOP
label_280850:
    // 0x280850: 0x1ba5a  .word       0x0001BA5A                   # div         $s7, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280850u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_280854:
    // 0x280854: 0x398e0  .word       0x000398E0                   # add         $s3, $zero, $v1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_280858:
    // 0x280858: 0x0  nop
    ctx->pc = 0x280858u;
    // NOP
label_28085c:
    // 0x28085c: 0x0  nop
    ctx->pc = 0x28085cu;
    // NOP
label_280860:
    // 0x280860: 0x1bace  .word       0x0001BACE                   # INVALID     $zero, $at, -0x4532 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x280860 raw=0x0001BACE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280864:
    // 0x280864: 0x37690  .word       0x00037690                   # mfhi        $t6 # 00030680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280864u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_280868:
    // 0x280868: 0x0  nop
    ctx->pc = 0x280868u;
    // NOP
label_28086c:
    // 0x28086c: 0x0  nop
    ctx->pc = 0x28086cu;
    // NOP
label_280870:
    // 0x280870: 0x1bb3d  .word       0x0001BB3D                   # INVALID     $zero, $at, -0x44C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x280870 raw=0x0001BB3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280874:
    // 0x280874: 0x36510  .word       0x00036510                   # mfhi        $t4 # 00030500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280874u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_280878:
    // 0x280878: 0x0  nop
    ctx->pc = 0x280878u;
    // NOP
label_28087c:
    // 0x28087c: 0x0  nop
    ctx->pc = 0x28087cu;
    // NOP
label_280880:
    // 0x280880: 0x1bbaa  .word       0x0001BBAA                   # slt         $s7, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280880u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_280884:
    // 0x280884: 0x3c740  sll         $t8, $v1, 29
    ctx->pc = 0x280884u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 3), 29));
label_280888:
    // 0x280888: 0x0  nop
    ctx->pc = 0x280888u;
    // NOP
label_28088c:
    // 0x28088c: 0x0  nop
    ctx->pc = 0x28088cu;
    // NOP
label_280890:
    // 0x280890: 0x1bc23  .word       0x0001BC23                   # negu        $s7, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280890u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_280894:
    // 0x280894: 0x30700  sll         $zero, $v1, 28
    ctx->pc = 0x280894u;
    
label_280898:
    // 0x280898: 0x0  nop
    ctx->pc = 0x280898u;
    // NOP
label_28089c:
    // 0x28089c: 0x0  nop
    ctx->pc = 0x28089cu;
    // NOP
label_2808a0:
    // 0x2808a0: 0x1bc84  .word       0x0001BC84                   # sllv        $s7, $at, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808a0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2808a4:
    // 0x2808a4: 0x37ce0  .word       0x00037CE0                   # add         $t7, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2808a8:
    // 0x2808a8: 0x0  nop
    ctx->pc = 0x2808a8u;
    // NOP
label_2808ac:
    // 0x2808ac: 0x0  nop
    ctx->pc = 0x2808acu;
    // NOP
label_2808b0:
    // 0x2808b0: 0x1bcf4  teq         $zero, $at, 755
    ctx->pc = 0x2808b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2808b4:
    // 0x2808b4: 0x362f0  tge         $zero, $v1, 395
    ctx->pc = 0x2808b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2808b8:
    // 0x2808b8: 0x0  nop
    ctx->pc = 0x2808b8u;
    // NOP
label_2808bc:
    // 0x2808bc: 0x0  nop
    ctx->pc = 0x2808bcu;
    // NOP
label_2808c0:
    // 0x2808c0: 0x1bd61  .word       0x0001BD61                   # addu        $s7, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2808c4:
    // 0x2808c4: 0x37da0  .word       0x00037DA0                   # add         $t7, $zero, $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2808c8:
    // 0x2808c8: 0x0  nop
    ctx->pc = 0x2808c8u;
    // NOP
label_2808cc:
    // 0x2808cc: 0x0  nop
    ctx->pc = 0x2808ccu;
    // NOP
label_2808d0:
    // 0x2808d0: 0x1bdd1  .word       0x0001BDD1                   # mthi        $zero # 0001BDC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808d0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2808d4:
    // 0x2808d4: 0x36b30  tge         $zero, $v1, 428
    ctx->pc = 0x2808d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2808d8:
    // 0x2808d8: 0x0  nop
    ctx->pc = 0x2808d8u;
    // NOP
label_2808dc:
    // 0x2808dc: 0x0  nop
    ctx->pc = 0x2808dcu;
    // NOP
label_2808e0:
    // 0x2808e0: 0x1be3f  dsra32      $s7, $at, 24
    ctx->pc = 0x2808e0u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 1) >> (32 + 24));
label_2808e4:
    // 0x2808e4: 0x34570  tge         $zero, $v1, 277
    ctx->pc = 0x2808e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2808e8:
    // 0x2808e8: 0x0  nop
    ctx->pc = 0x2808e8u;
    // NOP
label_2808ec:
    // 0x2808ec: 0x0  nop
    ctx->pc = 0x2808ecu;
    // NOP
label_2808f0:
    // 0x2808f0: 0x1bea8  .word       0x0001BEA8                   # mfsa        $s7 # 00010680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2808f0u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_2808f4:
    // 0x2808f4: 0x31dd0  .word       0x00031DD0                   # mfhi        $v1 # 000305C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2808f8:
    // 0x2808f8: 0x0  nop
    ctx->pc = 0x2808f8u;
    // NOP
label_2808fc:
    // 0x2808fc: 0x0  nop
    ctx->pc = 0x2808fcu;
    // NOP
label_280900:
    // 0x280900: 0x1bf0c  .word       0x0001BF0C                   # syscall     764 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280900u;
    ctx->pc = 0x280904u;
runtime->handleSyscall(rdram, ctx, 0x6FCu);
label_280904:
    // 0x280904: 0x36980  sll         $t5, $v1, 6
    ctx->pc = 0x280904u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_280908:
    // 0x280908: 0x0  nop
    ctx->pc = 0x280908u;
    // NOP
label_28090c:
    // 0x28090c: 0x0  nop
    ctx->pc = 0x28090cu;
    // NOP
label_280910:
    // 0x280910: 0x1bf7a  dsrl        $s7, $at, 29
    ctx->pc = 0x280910u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) >> 29);
label_280914:
    // 0x280914: 0x34ca0  .word       0x00034CA0                   # add         $t1, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_280918:
    // 0x280918: 0x0  nop
    ctx->pc = 0x280918u;
    // NOP
label_28091c:
    // 0x28091c: 0x0  nop
    ctx->pc = 0x28091cu;
    // NOP
label_280920:
    // 0x280920: 0x1bfe4  .word       0x0001BFE4                   # and         $s7, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280920u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_280924:
    // 0x280924: 0x356d0  .word       0x000356D0                   # mfhi        $t2 # 000306C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280924u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_280928:
    // 0x280928: 0x0  nop
    ctx->pc = 0x280928u;
    // NOP
label_28092c:
    // 0x28092c: 0x0  nop
    ctx->pc = 0x28092cu;
    // NOP
label_280930:
    // 0x280930: 0x1c04f  .word       0x0001C04F                   # sync # 0001C000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280930u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280934:
    // 0x280934: 0x364f0  tge         $zero, $v1, 403
    ctx->pc = 0x280934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280938:
    // 0x280938: 0x0  nop
    ctx->pc = 0x280938u;
    // NOP
label_28093c:
    // 0x28093c: 0x0  nop
    ctx->pc = 0x28093cu;
    // NOP
label_280940:
    // 0x280940: 0x1c0bc  dsll32      $t8, $at, 2
    ctx->pc = 0x280940u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 1) << (32 + 2));
label_280944:
    // 0x280944: 0x36cf0  tge         $zero, $v1, 435
    ctx->pc = 0x280944u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280948:
    // 0x280948: 0x0  nop
    ctx->pc = 0x280948u;
    // NOP
label_28094c:
    // 0x28094c: 0x0  nop
    ctx->pc = 0x28094cu;
    // NOP
label_280950:
    // 0x280950: 0x1c12a  .word       0x0001C12A                   # slt         $t8, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280950u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_280954:
    // 0x280954: 0x320a0  .word       0x000320A0                   # add         $a0, $zero, $v1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_280958:
    // 0x280958: 0x0  nop
    ctx->pc = 0x280958u;
    // NOP
label_28095c:
    // 0x28095c: 0x0  nop
    ctx->pc = 0x28095cu;
    // NOP
label_280960:
    // 0x280960: 0x1c18f  .word       0x0001C18F                   # sync # 0001C000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280960u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280964:
    // 0x280964: 0x331e0  .word       0x000331E0                   # add         $a2, $zero, $v1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280964u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_280968:
    // 0x280968: 0x0  nop
    ctx->pc = 0x280968u;
    // NOP
label_28096c:
    // 0x28096c: 0x0  nop
    ctx->pc = 0x28096cu;
    // NOP
label_280970:
    // 0x280970: 0x1c1f6  tne         $zero, $at, 775
    ctx->pc = 0x280970u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280974:
    // 0x280974: 0x34b60  .word       0x00034B60                   # add         $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280974u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_280978:
    // 0x280978: 0x0  nop
    ctx->pc = 0x280978u;
    // NOP
label_28097c:
    // 0x28097c: 0x0  nop
    ctx->pc = 0x28097cu;
    // NOP
label_280980:
    // 0x280980: 0x1c260  .word       0x0001C260                   # add         $t8, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280980u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_280984:
    // 0x280984: 0x37220  .word       0x00037220                   # add         $t6, $zero, $v1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280984u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_280988:
    // 0x280988: 0x0  nop
    ctx->pc = 0x280988u;
    // NOP
label_28098c:
    // 0x28098c: 0x0  nop
    ctx->pc = 0x28098cu;
    // NOP
label_280990:
    // 0x280990: 0x1c2cf  .word       0x0001C2CF                   # sync # 0001C000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280990u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280994:
    // 0x280994: 0x2e4c0  sll         $gp, $v0, 19
    ctx->pc = 0x280994u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
label_280998:
    // 0x280998: 0x0  nop
    ctx->pc = 0x280998u;
    // NOP
label_28099c:
    // 0x28099c: 0x0  nop
    ctx->pc = 0x28099cu;
    // NOP
label_2809a0:
    // 0x2809a0: 0x1c32c  .word       0x0001C32C                   # dadd        $t8, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2809a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
label_2809a4:
    // 0x2809a4: 0x37b60  .word       0x00037B60                   # add         $t7, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2809a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2809a8:
    // 0x2809a8: 0x0  nop
    ctx->pc = 0x2809a8u;
    // NOP
label_2809ac:
    // 0x2809ac: 0x0  nop
    ctx->pc = 0x2809acu;
    // NOP
label_2809b0:
    // 0x2809b0: 0x1c39c  .word       0x0001C39C                   # dmult       $zero, $at # 0000C380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2809b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2809B0 raw=0x0001C39C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2809b4:
    // 0x2809b4: 0x36250  .word       0x00036250                   # mfhi        $t4 # 00030240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2809b4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2809b8:
    // 0x2809b8: 0x0  nop
    ctx->pc = 0x2809b8u;
    // NOP
label_2809bc:
    // 0x2809bc: 0x0  nop
    ctx->pc = 0x2809bcu;
    // NOP
label_2809c0:
    // 0x2809c0: 0x1c409  .word       0x0001C409                   # jalr        $t8, $zero # 00010400 <InstrIdType: CPU_SPECIAL>
label_2809c4:
    if (ctx->pc == 0x2809C4u) {
        ctx->pc = 0x2809C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2809C0u;
        // 0x2809c4: 0x34780  sll         $t0, $v1, 30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2809C8u;
        goto label_2809c8;
    }
    ctx->pc = 0x2809C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 24, 0x2809C8u);
        ctx->pc = 0x2809C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2809C0u;
        // 0x2809c4: 0x34780  sll         $t0, $v1, 30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 30));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2809C0u, 0x2809C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2809C8u;
label_2809c8:
    // 0x2809c8: 0x0  nop
    ctx->pc = 0x2809c8u;
    // NOP
label_2809cc:
    // 0x2809cc: 0x0  nop
    ctx->pc = 0x2809ccu;
    // NOP
label_2809d0:
    // 0x2809d0: 0x1c472  tlt         $zero, $at, 785
    ctx->pc = 0x2809d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2809d4:
    // 0x2809d4: 0x339a0  .word       0x000339A0                   # add         $a3, $zero, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2809d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2809d8:
    // 0x2809d8: 0x0  nop
    ctx->pc = 0x2809d8u;
    // NOP
label_2809dc:
    // 0x2809dc: 0x0  nop
    ctx->pc = 0x2809dcu;
    // NOP
label_2809e0:
    // 0x2809e0: 0x1c4da  .word       0x0001C4DA                   # div         $t8, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2809e0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2809e4:
    // 0x2809e4: 0x30730  tge         $zero, $v1, 28
    ctx->pc = 0x2809e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2809e8:
    // 0x2809e8: 0x0  nop
    ctx->pc = 0x2809e8u;
    // NOP
label_2809ec:
    // 0x2809ec: 0x0  nop
    ctx->pc = 0x2809ecu;
    // NOP
label_2809f0:
    // 0x2809f0: 0x1c53b  dsra        $t8, $at, 20
    ctx->pc = 0x2809f0u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 1) >> 20);
label_2809f4:
    // 0x2809f4: 0x33700  sll         $a2, $v1, 28
    ctx->pc = 0x2809f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
label_2809f8:
    // 0x2809f8: 0x0  nop
    ctx->pc = 0x2809f8u;
    // NOP
label_2809fc:
    // 0x2809fc: 0x0  nop
    ctx->pc = 0x2809fcu;
    // NOP
label_280a00:
    // 0x280a00: 0x1c5a2  .word       0x0001C5A2                   # neg         $t8, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a00u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_280a04:
    // 0x280a04: 0x366b0  tge         $zero, $v1, 410
    ctx->pc = 0x280a04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280a08:
    // 0x280a08: 0x0  nop
    ctx->pc = 0x280a08u;
    // NOP
label_280a0c:
    // 0x280a0c: 0x0  nop
    ctx->pc = 0x280a0cu;
    // NOP
label_280a10:
    // 0x280a10: 0x1c60f  .word       0x0001C60F                   # sync.p # 0001C000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280a14:
    // 0x280a14: 0x3bbb0  tge         $zero, $v1, 750
    ctx->pc = 0x280a14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280a18:
    // 0x280a18: 0x0  nop
    ctx->pc = 0x280a18u;
    // NOP
label_280a1c:
    // 0x280a1c: 0x0  nop
    ctx->pc = 0x280a1cu;
    // NOP
label_280a20:
    // 0x280a20: 0x1c687  .word       0x0001C687                   # srav        $t8, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a20u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_280a24:
    // 0x280a24: 0x3ae60  .word       0x0003AE60                   # add         $s5, $zero, $v1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_280a28:
    // 0x280a28: 0x0  nop
    ctx->pc = 0x280a28u;
    // NOP
label_280a2c:
    // 0x280a2c: 0x0  nop
    ctx->pc = 0x280a2cu;
    // NOP
label_280a30:
    // 0x280a30: 0x1c6fd  .word       0x0001C6FD                   # INVALID     $zero, $at, -0x3903 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x280A30 raw=0x0001C6FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280a34:
    // 0x280a34: 0x32fe0  .word       0x00032FE0                   # add         $a1, $zero, $v1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_280a38:
    // 0x280a38: 0x0  nop
    ctx->pc = 0x280a38u;
    // NOP
label_280a3c:
    // 0x280a3c: 0x0  nop
    ctx->pc = 0x280a3cu;
    // NOP
label_280a40:
    // 0x280a40: 0x1c763  .word       0x0001C763                   # negu        $t8, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a40u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_280a44:
    // 0x280a44: 0x3a6d0  .word       0x0003A6D0                   # mfhi        $s4 # 000306C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a44u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_280a48:
    // 0x280a48: 0x0  nop
    ctx->pc = 0x280a48u;
    // NOP
label_280a4c:
    // 0x280a4c: 0x0  nop
    ctx->pc = 0x280a4cu;
    // NOP
label_280a50:
    // 0x280a50: 0x1c7d8  .word       0x0001C7D8                   # mult        $t8, $zero, $at # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_280a54:
    // 0x280a54: 0x36d40  sll         $t5, $v1, 21
    ctx->pc = 0x280a54u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 21));
label_280a58:
    // 0x280a58: 0x0  nop
    ctx->pc = 0x280a58u;
    // NOP
label_280a5c:
    // 0x280a5c: 0x0  nop
    ctx->pc = 0x280a5cu;
    // NOP
label_280a60:
    // 0x280a60: 0x1c846  .word       0x0001C846                   # srlv        $t9, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a60u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_280a64:
    // 0x280a64: 0x33710  .word       0x00033710                   # mfhi        $a2 # 00030700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a64u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_280a68:
    // 0x280a68: 0x0  nop
    ctx->pc = 0x280a68u;
    // NOP
label_280a6c:
    // 0x280a6c: 0x0  nop
    ctx->pc = 0x280a6cu;
    // NOP
label_280a70:
    // 0x280a70: 0x1c8ad  .word       0x0001C8AD                   # daddu       $t9, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a70u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_280a74:
    // 0x280a74: 0x3a4a0  .word       0x0003A4A0                   # add         $s4, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_280a78:
    // 0x280a78: 0x0  nop
    ctx->pc = 0x280a78u;
    // NOP
label_280a7c:
    // 0x280a7c: 0x0  nop
    ctx->pc = 0x280a7cu;
    // NOP
label_280a80:
    // 0x280a80: 0x1c922  .word       0x0001C922                   # neg         $t9, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a80u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_280a84:
    // 0x280a84: 0x32d90  .word       0x00032D90                   # mfhi        $a1 # 00030580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280a84u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_280a88:
    // 0x280a88: 0x0  nop
    ctx->pc = 0x280a88u;
    // NOP
label_280a8c:
    // 0x280a8c: 0x0  nop
    ctx->pc = 0x280a8cu;
    // NOP
label_280a90:
    // 0x280a90: 0x1c988  .word       0x0001C988                   # jr          $zero # 0001C980 <InstrIdType: CPU_SPECIAL>
label_280a94:
    if (ctx->pc == 0x280A94u) {
        ctx->pc = 0x280A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A90u;
        // 0x280a94: 0x32a20  .word       0x00032A20                   # add         $a1, $zero, $v1 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x280A98u;
        goto label_280a98;
    }
    ctx->pc = 0x280A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x280A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A90u;
        // 0x280a94: 0x32a20  .word       0x00032A20                   # add         $a1, $zero, $v1 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280A90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x280A98u;
label_280a98:
    // 0x280a98: 0x0  nop
    ctx->pc = 0x280a98u;
    // NOP
label_280a9c:
    // 0x280a9c: 0x0  nop
    ctx->pc = 0x280a9cu;
    // NOP
label_280aa0:
    // 0x280aa0: 0x1c9ee  .word       0x0001C9EE                   # dsub        $t9, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280aa0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, r); }
label_280aa4:
    // 0x280aa4: 0x38240  sll         $s0, $v1, 9
    ctx->pc = 0x280aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
label_280aa8:
    // 0x280aa8: 0x0  nop
    ctx->pc = 0x280aa8u;
    // NOP
label_280aac:
    // 0x280aac: 0x0  nop
    ctx->pc = 0x280aacu;
    // NOP
label_280ab0:
    // 0x280ab0: 0x1ca5f  .word       0x0001CA5F                   # ddivu       $t9, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ab0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x280AB0 raw=0x0001CA5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280ab4:
    // 0x280ab4: 0x32e40  sll         $a1, $v1, 25
    ctx->pc = 0x280ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 25));
label_280ab8:
    // 0x280ab8: 0x0  nop
    ctx->pc = 0x280ab8u;
    // NOP
label_280abc:
    // 0x280abc: 0x0  nop
    ctx->pc = 0x280abcu;
    // NOP
label_280ac0:
    // 0x280ac0: 0x1cac5  .word       0x0001CAC5                   # INVALID     $zero, $at, -0x353B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ac0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x280AC0 raw=0x0001CAC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280ac4:
    // 0x280ac4: 0x31580  sll         $v0, $v1, 22
    ctx->pc = 0x280ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 22));
label_280ac8:
    // 0x280ac8: 0x0  nop
    ctx->pc = 0x280ac8u;
    // NOP
label_280acc:
    // 0x280acc: 0x0  nop
    ctx->pc = 0x280accu;
    // NOP
label_280ad0:
    // 0x280ad0: 0x1cb28  .word       0x0001CB28                   # mfsa        $t9 # 00010300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280ad0u;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_280ad4:
    // 0x280ad4: 0x37520  .word       0x00037520                   # add         $t6, $zero, $v1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ad4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_280ad8:
    // 0x280ad8: 0x0  nop
    ctx->pc = 0x280ad8u;
    // NOP
label_280adc:
    // 0x280adc: 0x0  nop
    ctx->pc = 0x280adcu;
    // NOP
label_280ae0:
    // 0x280ae0: 0x1cb97  .word       0x0001CB97                   # dsrav       $t9, $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ae0u;
    SET_GPR_S64(ctx, 25, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_280ae4:
    // 0x280ae4: 0x3a580  sll         $s4, $v1, 22
    ctx->pc = 0x280ae4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 22));
label_280ae8:
    // 0x280ae8: 0x0  nop
    ctx->pc = 0x280ae8u;
    // NOP
label_280aec:
    // 0x280aec: 0x0  nop
    ctx->pc = 0x280aecu;
    // NOP
label_280af0:
    // 0x280af0: 0x1cc0c  .word       0x0001CC0C                   # syscall     816 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280af0u;
    ctx->pc = 0x280AF4u;
runtime->handleSyscall(rdram, ctx, 0x730u);
label_280af4:
    // 0x280af4: 0x343c0  sll         $t0, $v1, 15
    ctx->pc = 0x280af4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
label_280af8:
    // 0x280af8: 0x0  nop
    ctx->pc = 0x280af8u;
    // NOP
label_280afc:
    // 0x280afc: 0x0  nop
    ctx->pc = 0x280afcu;
    // NOP
label_280b00:
    // 0x280b00: 0x1cc75  .word       0x0001CC75                   # INVALID     $zero, $at, -0x338B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x280B00 raw=0x0001CC75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280b04:
    // 0x280b04: 0x38410  .word       0x00038410                   # mfhi        $s0 # 00030400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b04u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_280b08:
    // 0x280b08: 0x0  nop
    ctx->pc = 0x280b08u;
    // NOP
label_280b0c:
    // 0x280b0c: 0x0  nop
    ctx->pc = 0x280b0cu;
    // NOP
label_280b10:
    // 0x280b10: 0x1cce6  .word       0x0001CCE6                   # xor         $t9, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b10u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_280b14:
    // 0x280b14: 0x35e10  .word       0x00035E10                   # mfhi        $t3 # 00030600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b14u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_280b18:
    // 0x280b18: 0x0  nop
    ctx->pc = 0x280b18u;
    // NOP
label_280b1c:
    // 0x280b1c: 0x0  nop
    ctx->pc = 0x280b1cu;
    // NOP
label_280b20:
    // 0x280b20: 0x1cd52  .word       0x0001CD52                   # mflo        $t9 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b20u;
    SET_GPR_U64(ctx, 25, ctx->lo);
label_280b24:
    // 0x280b24: 0x31eb0  tge         $zero, $v1, 122
    ctx->pc = 0x280b24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280b28:
    // 0x280b28: 0x0  nop
    ctx->pc = 0x280b28u;
    // NOP
label_280b2c:
    // 0x280b2c: 0x0  nop
    ctx->pc = 0x280b2cu;
    // NOP
label_280b30:
    // 0x280b30: 0x1cdb6  tne         $zero, $at, 822
    ctx->pc = 0x280b30u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280b34:
    // 0x280b34: 0x35a00  sll         $t3, $v1, 8
    ctx->pc = 0x280b34u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_280b38:
    // 0x280b38: 0x0  nop
    ctx->pc = 0x280b38u;
    // NOP
label_280b3c:
    // 0x280b3c: 0x0  nop
    ctx->pc = 0x280b3cu;
    // NOP
label_280b40:
    // 0x280b40: 0x1ce22  .word       0x0001CE22                   # neg         $t9, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b40u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_280b44:
    // 0x280b44: 0x34480  sll         $t0, $v1, 18
    ctx->pc = 0x280b44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 18));
label_280b48:
    // 0x280b48: 0x0  nop
    ctx->pc = 0x280b48u;
    // NOP
label_280b4c:
    // 0x280b4c: 0x0  nop
    ctx->pc = 0x280b4cu;
    // NOP
label_280b50:
    // 0x280b50: 0x1ce8b  .word       0x0001CE8B                   # movn        $t9, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b50u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
label_280b54:
    // 0x280b54: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x280b54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_280b58:
    // 0x280b58: 0x0  nop
    ctx->pc = 0x280b58u;
    // NOP
label_280b5c:
    // 0x280b5c: 0x0  nop
    ctx->pc = 0x280b5cu;
    // NOP
label_280b60:
    // 0x280b60: 0x1cef1  tgeu        $zero, $at, 827
    ctx->pc = 0x280b60u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280b64:
    // 0x280b64: 0x33000  sll         $a2, $v1, 0
    ctx->pc = 0x280b64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_280b68:
    // 0x280b68: 0x0  nop
    ctx->pc = 0x280b68u;
    // NOP
label_280b6c:
    // 0x280b6c: 0x0  nop
    ctx->pc = 0x280b6cu;
    // NOP
label_280b70:
    // 0x280b70: 0x1cf57  .word       0x0001CF57                   # dsrav       $t9, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b70u;
    SET_GPR_S64(ctx, 25, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_280b74:
    // 0x280b74: 0x356d0  .word       0x000356D0                   # mfhi        $t2 # 000306C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b74u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_280b78:
    // 0x280b78: 0x0  nop
    ctx->pc = 0x280b78u;
    // NOP
label_280b7c:
    // 0x280b7c: 0x0  nop
    ctx->pc = 0x280b7cu;
    // NOP
label_280b80:
    // 0x280b80: 0x1cfc2  srl         $t9, $at, 31
    ctx->pc = 0x280b80u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 1), 31));
label_280b84:
    // 0x280b84: 0x351b0  tge         $zero, $v1, 326
    ctx->pc = 0x280b84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280b88:
    // 0x280b88: 0x0  nop
    ctx->pc = 0x280b88u;
    // NOP
label_280b8c:
    // 0x280b8c: 0x0  nop
    ctx->pc = 0x280b8cu;
    // NOP
label_280b90:
    // 0x280b90: 0x1d02d  daddu       $k0, $zero, $at
    ctx->pc = 0x280b90u;
    SET_GPR_U64(ctx, 26, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_280b94:
    // 0x280b94: 0x342a0  .word       0x000342A0                   # add         $t0, $zero, $v1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280b94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_280b98:
    // 0x280b98: 0x0  nop
    ctx->pc = 0x280b98u;
    // NOP
label_280b9c:
    // 0x280b9c: 0x0  nop
    ctx->pc = 0x280b9cu;
    // NOP
label_280ba0:
    // 0x280ba0: 0x1d096  .word       0x0001D096                   # dsrlv       $k0, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ba0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_280ba4:
    // 0x280ba4: 0x33ed0  .word       0x00033ED0                   # mfhi        $a3 # 000306C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ba4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_280ba8:
    // 0x280ba8: 0x0  nop
    ctx->pc = 0x280ba8u;
    // NOP
label_280bac:
    // 0x280bac: 0x0  nop
    ctx->pc = 0x280bacu;
    // NOP
label_280bb0:
    // 0x280bb0: 0x1d0fe  dsrl32      $k0, $at, 3
    ctx->pc = 0x280bb0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 1) >> (32 + 3));
label_280bb4:
    // 0x280bb4: 0x35e80  sll         $t3, $v1, 26
    ctx->pc = 0x280bb4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
label_280bb8:
    // 0x280bb8: 0x0  nop
    ctx->pc = 0x280bb8u;
    // NOP
label_280bbc:
    // 0x280bbc: 0x0  nop
    ctx->pc = 0x280bbcu;
    // NOP
label_280bc0:
    // 0x280bc0: 0x1d16a  .word       0x0001D16A                   # slt         $k0, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280bc0u;
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_280bc4:
    // 0x280bc4: 0x3a050  .word       0x0003A050                   # mfhi        $s4 # 00030040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280bc4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_280bc8:
    // 0x280bc8: 0x0  nop
    ctx->pc = 0x280bc8u;
    // NOP
label_280bcc:
    // 0x280bcc: 0x0  nop
    ctx->pc = 0x280bccu;
    // NOP
label_280bd0:
    // 0x280bd0: 0x1d1df  .word       0x0001D1DF                   # ddivu       $k0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280bd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x280BD0 raw=0x0001D1DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280bd4:
    // 0x280bd4: 0x35790  .word       0x00035790                   # mfhi        $t2 # 00030780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280bd4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_280bd8:
    // 0x280bd8: 0x0  nop
    ctx->pc = 0x280bd8u;
    // NOP
label_280bdc:
    // 0x280bdc: 0x0  nop
    ctx->pc = 0x280bdcu;
    // NOP
label_280be0:
    // 0x280be0: 0x1d24a  .word       0x0001D24A                   # movz        $k0, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280be0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 0));
label_280be4:
    // 0x280be4: 0x35ff0  tge         $zero, $v1, 383
    ctx->pc = 0x280be4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280be8:
    // 0x280be8: 0x0  nop
    ctx->pc = 0x280be8u;
    // NOP
label_280bec:
    // 0x280bec: 0x0  nop
    ctx->pc = 0x280becu;
    // NOP
label_280bf0:
    // 0x280bf0: 0x1d2b6  tne         $zero, $at, 842
    ctx->pc = 0x280bf0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280bf4:
    // 0x280bf4: 0x30ad0  .word       0x00030AD0                   # mfhi        $at # 000302C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280bf4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_280bf8:
    // 0x280bf8: 0x0  nop
    ctx->pc = 0x280bf8u;
    // NOP
label_280bfc:
    // 0x280bfc: 0x0  nop
    ctx->pc = 0x280bfcu;
    // NOP
label_280c00:
    // 0x280c00: 0x1d318  .word       0x0001D318                   # mult        $k0, $zero, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_280c04:
    // 0x280c04: 0x30a50  .word       0x00030A50                   # mfhi        $at # 00030240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c04u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_280c08:
    // 0x280c08: 0x0  nop
    ctx->pc = 0x280c08u;
    // NOP
label_280c0c:
    // 0x280c0c: 0x0  nop
    ctx->pc = 0x280c0cu;
    // NOP
label_280c10:
    // 0x280c10: 0x1d37a  dsrl        $k0, $at, 13
    ctx->pc = 0x280c10u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 1) >> 13);
label_280c14:
    // 0x280c14: 0x31010  .word       0x00031010                   # mfhi        $v0 # 00030000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c14u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_280c18:
    // 0x280c18: 0x0  nop
    ctx->pc = 0x280c18u;
    // NOP
label_280c1c:
    // 0x280c1c: 0x0  nop
    ctx->pc = 0x280c1cu;
    // NOP
label_280c20:
    // 0x280c20: 0x1d3dd  .word       0x0001D3DD                   # dmultu      $zero, $at # 0000D3C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x280C20 raw=0x0001D3DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280c24:
    // 0x280c24: 0x370f0  tge         $zero, $v1, 451
    ctx->pc = 0x280c24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280c28:
    // 0x280c28: 0x0  nop
    ctx->pc = 0x280c28u;
    // NOP
label_280c2c:
    // 0x280c2c: 0x0  nop
    ctx->pc = 0x280c2cu;
    // NOP
label_280c30:
    // 0x280c30: 0x1d44c  .word       0x0001D44C                   # syscall     849 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c30u;
    ctx->pc = 0x280C34u;
runtime->handleSyscall(rdram, ctx, 0x751u);
label_280c34:
    // 0x280c34: 0x36ad0  .word       0x00036AD0                   # mfhi        $t5 # 000302C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c34u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_280c38:
    // 0x280c38: 0x0  nop
    ctx->pc = 0x280c38u;
    // NOP
label_280c3c:
    // 0x280c3c: 0x0  nop
    ctx->pc = 0x280c3cu;
    // NOP
label_280c40:
    // 0x280c40: 0x1d4ba  dsrl        $k0, $at, 18
    ctx->pc = 0x280c40u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 1) >> 18);
label_280c44:
    // 0x280c44: 0x36b50  .word       0x00036B50                   # mfhi        $t5 # 00030340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c44u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_280c48:
    // 0x280c48: 0x0  nop
    ctx->pc = 0x280c48u;
    // NOP
label_280c4c:
    // 0x280c4c: 0x0  nop
    ctx->pc = 0x280c4cu;
    // NOP
label_280c50:
    // 0x280c50: 0x1d528  .word       0x0001D528                   # mfsa        $k0 # 00010500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280c50u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_280c54:
    // 0x280c54: 0x38420  .word       0x00038420                   # add         $s0, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_280c58:
    // 0x280c58: 0x0  nop
    ctx->pc = 0x280c58u;
    // NOP
label_280c5c:
    // 0x280c5c: 0x0  nop
    ctx->pc = 0x280c5cu;
    // NOP
label_280c60:
    // 0x280c60: 0x1d599  .word       0x0001D599                   # multu       $zero, $at # 0000D580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c60u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_280c64:
    // 0x280c64: 0x3a260  .word       0x0003A260                   # add         $s4, $zero, $v1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_280c68:
    // 0x280c68: 0x0  nop
    ctx->pc = 0x280c68u;
    // NOP
label_280c6c:
    // 0x280c6c: 0x0  nop
    ctx->pc = 0x280c6cu;
    // NOP
label_280c70:
    // 0x280c70: 0x1d60e  .word       0x0001D60E                   # INVALID     $zero, $at, -0x29F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x280C70 raw=0x0001D60E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280c74:
    // 0x280c74: 0x35e20  .word       0x00035E20                   # add         $t3, $zero, $v1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_280c78:
    // 0x280c78: 0x0  nop
    ctx->pc = 0x280c78u;
    // NOP
label_280c7c:
    // 0x280c7c: 0x0  nop
    ctx->pc = 0x280c7cu;
    // NOP
label_280c80:
    // 0x280c80: 0x1d67a  dsrl        $k0, $at, 25
    ctx->pc = 0x280c80u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 1) >> 25);
label_280c84:
    // 0x280c84: 0x37ac0  sll         $t7, $v1, 11
    ctx->pc = 0x280c84u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_280c88:
    // 0x280c88: 0x0  nop
    ctx->pc = 0x280c88u;
    // NOP
label_280c8c:
    // 0x280c8c: 0x0  nop
    ctx->pc = 0x280c8cu;
    // NOP
label_280c90:
    // 0x280c90: 0x1d6ea  .word       0x0001D6EA                   # slt         $k0, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280c90u;
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_280c94:
    // 0x280c94: 0x2ee00  sll         $sp, $v0, 24
    ctx->pc = 0x280c94u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_280c98:
    // 0x280c98: 0x0  nop
    ctx->pc = 0x280c98u;
    // NOP
label_280c9c:
    // 0x280c9c: 0x0  nop
    ctx->pc = 0x280c9cu;
    // NOP
label_280ca0:
    // 0x280ca0: 0x1d748  .word       0x0001D748                   # jr          $zero # 0001D740 <InstrIdType: CPU_SPECIAL>
label_280ca4:
    if (ctx->pc == 0x280CA4u) {
        ctx->pc = 0x280CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CA0u;
        // 0x280ca4: 0x34790  .word       0x00034790                   # mfhi        $t0 # 00030780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x280CA8u;
        goto label_280ca8;
    }
    ctx->pc = 0x280CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x280CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CA0u;
        // 0x280ca4: 0x34790  .word       0x00034790                   # mfhi        $t0 # 00030780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280CA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x280CA8u;
label_280ca8:
    // 0x280ca8: 0x0  nop
    ctx->pc = 0x280ca8u;
    // NOP
label_280cac:
    // 0x280cac: 0x0  nop
    ctx->pc = 0x280cacu;
    // NOP
label_280cb0:
    // 0x280cb0: 0x1d7b1  tgeu        $zero, $at, 862
    ctx->pc = 0x280cb0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280cb4:
    // 0x280cb4: 0x33530  tge         $zero, $v1, 212
    ctx->pc = 0x280cb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280cb8:
    // 0x280cb8: 0x0  nop
    ctx->pc = 0x280cb8u;
    // NOP
label_280cbc:
    // 0x280cbc: 0x0  nop
    ctx->pc = 0x280cbcu;
    // NOP
label_280cc0:
    // 0x280cc0: 0x1d818  mult        $k1, $zero, $at
    ctx->pc = 0x280cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_280cc4:
    // 0x280cc4: 0x380e0  .word       0x000380E0                   # add         $s0, $zero, $v1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280cc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_280cc8:
    // 0x280cc8: 0x0  nop
    ctx->pc = 0x280cc8u;
    // NOP
label_280ccc:
    // 0x280ccc: 0x0  nop
    ctx->pc = 0x280cccu;
    // NOP
label_280cd0:
    // 0x280cd0: 0x1d889  .word       0x0001D889                   # jalr        $k1, $zero # 00010080 <InstrIdType: CPU_SPECIAL>
label_280cd4:
    if (ctx->pc == 0x280CD4u) {
        ctx->pc = 0x280CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CD0u;
        // 0x280cd4: 0x33dc0  sll         $a3, $v1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280CD8u;
        goto label_280cd8;
    }
    ctx->pc = 0x280CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 27, 0x280CD8u);
        ctx->pc = 0x280CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CD0u;
        // 0x280cd4: 0x33dc0  sll         $a3, $v1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280CD0u, 0x280CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x280CD8u;
label_280cd8:
    // 0x280cd8: 0x0  nop
    ctx->pc = 0x280cd8u;
    // NOP
label_280cdc:
    // 0x280cdc: 0x0  nop
    ctx->pc = 0x280cdcu;
    // NOP
label_280ce0:
    // 0x280ce0: 0x1d8f1  tgeu        $zero, $at, 867
    ctx->pc = 0x280ce0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280ce4:
    // 0x280ce4: 0x32810  .word       0x00032810                   # mfhi        $a1 # 00030000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ce4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_280ce8:
    // 0x280ce8: 0x0  nop
    ctx->pc = 0x280ce8u;
    // NOP
label_280cec:
    // 0x280cec: 0x0  nop
    ctx->pc = 0x280cecu;
    // NOP
label_280cf0:
    // 0x280cf0: 0x1d957  .word       0x0001D957                   # dsrav       $k1, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280cf0u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_280cf4:
    // 0x280cf4: 0x33e20  .word       0x00033E20                   # add         $a3, $zero, $v1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280cf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_280cf8:
    // 0x280cf8: 0x0  nop
    ctx->pc = 0x280cf8u;
    // NOP
label_280cfc:
    // 0x280cfc: 0x0  nop
    ctx->pc = 0x280cfcu;
    // NOP
label_280d00:
    // 0x280d00: 0x1d9bf  dsra32      $k1, $at, 6
    ctx->pc = 0x280d00u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 1) >> (32 + 6));
label_280d04:
    // 0x280d04: 0x38c20  .word       0x00038C20                   # add         $s1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_280d08:
    // 0x280d08: 0x0  nop
    ctx->pc = 0x280d08u;
    // NOP
label_280d0c:
    // 0x280d0c: 0x0  nop
    ctx->pc = 0x280d0cu;
    // NOP
label_280d10:
    // 0x280d10: 0x1da31  tgeu        $zero, $at, 872
    ctx->pc = 0x280d10u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280d14:
    // 0x280d14: 0x33020  add         $a2, $zero, $v1
    ctx->pc = 0x280d14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_280d18:
    // 0x280d18: 0x0  nop
    ctx->pc = 0x280d18u;
    // NOP
label_280d1c:
    // 0x280d1c: 0x0  nop
    ctx->pc = 0x280d1cu;
    // NOP
label_280d20:
    // 0x280d20: 0x1da98  .word       0x0001DA98                   # mult        $k1, $zero, $at # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_280d24:
    // 0x280d24: 0x32ab0  tge         $zero, $v1, 170
    ctx->pc = 0x280d24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280d28:
    // 0x280d28: 0x0  nop
    ctx->pc = 0x280d28u;
    // NOP
label_280d2c:
    // 0x280d2c: 0x0  nop
    ctx->pc = 0x280d2cu;
    // NOP
label_280d30:
    // 0x280d30: 0x1dafe  dsrl32      $k1, $at, 11
    ctx->pc = 0x280d30u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 1) >> (32 + 11));
label_280d34:
    // 0x280d34: 0x303f0  tge         $zero, $v1, 15
    ctx->pc = 0x280d34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280d38:
    // 0x280d38: 0x0  nop
    ctx->pc = 0x280d38u;
    // NOP
label_280d3c:
    // 0x280d3c: 0x0  nop
    ctx->pc = 0x280d3cu;
    // NOP
label_280d40:
    // 0x280d40: 0x1db5f  .word       0x0001DB5F                   # ddivu       $k1, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x280D40 raw=0x0001DB5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280d44:
    // 0x280d44: 0x363d0  .word       0x000363D0                   # mfhi        $t4 # 000303C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d44u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_280d48:
    // 0x280d48: 0x0  nop
    ctx->pc = 0x280d48u;
    // NOP
label_280d4c:
    // 0x280d4c: 0x0  nop
    ctx->pc = 0x280d4cu;
    // NOP
label_280d50:
    // 0x280d50: 0x1dbcc  .word       0x0001DBCC                   # syscall     879 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d50u;
    ctx->pc = 0x280D54u;
runtime->handleSyscall(rdram, ctx, 0x76Fu);
label_280d54:
    // 0x280d54: 0x386f0  tge         $zero, $v1, 539
    ctx->pc = 0x280d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280d58:
    // 0x280d58: 0x0  nop
    ctx->pc = 0x280d58u;
    // NOP
label_280d5c:
    // 0x280d5c: 0x0  nop
    ctx->pc = 0x280d5cu;
    // NOP
label_280d60:
    // 0x280d60: 0x1dc3d  .word       0x0001DC3D                   # INVALID     $zero, $at, -0x23C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x280D60 raw=0x0001DC3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280d64:
    // 0x280d64: 0x2e7b0  tge         $zero, $v0, 926
    ctx->pc = 0x280d64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_280d68:
    // 0x280d68: 0x0  nop
    ctx->pc = 0x280d68u;
    // NOP
label_280d6c:
    // 0x280d6c: 0x0  nop
    ctx->pc = 0x280d6cu;
    // NOP
label_280d70:
    // 0x280d70: 0x1dc9a  .word       0x0001DC9A                   # div         $k1, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d70u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_280d74:
    // 0x280d74: 0x2b660  .word       0x0002B660                   # add         $s6, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_280d78:
    // 0x280d78: 0x0  nop
    ctx->pc = 0x280d78u;
    // NOP
label_280d7c:
    // 0x280d7c: 0x0  nop
    ctx->pc = 0x280d7cu;
    // NOP
label_280d80:
    // 0x280d80: 0x1dcf1  tgeu        $zero, $at, 883
    ctx->pc = 0x280d80u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280d84:
    // 0x280d84: 0x37c00  sll         $t7, $v1, 16
    ctx->pc = 0x280d84u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_280d88:
    // 0x280d88: 0x0  nop
    ctx->pc = 0x280d88u;
    // NOP
label_280d8c:
    // 0x280d8c: 0x0  nop
    ctx->pc = 0x280d8cu;
    // NOP
label_280d90:
    // 0x280d90: 0x1dd61  .word       0x0001DD61                   # addu        $k1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d90u;
    SET_GPR_S32(ctx, 27, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_280d94:
    // 0x280d94: 0x337e0  .word       0x000337E0                   # add         $a2, $zero, $v1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280d94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_280d98:
    // 0x280d98: 0x0  nop
    ctx->pc = 0x280d98u;
    // NOP
label_280d9c:
    // 0x280d9c: 0x0  nop
    ctx->pc = 0x280d9cu;
    // NOP
label_280da0:
    // 0x280da0: 0x1ddc8  .word       0x0001DDC8                   # jr          $zero # 0001DDC0 <InstrIdType: CPU_SPECIAL>
label_280da4:
    if (ctx->pc == 0x280DA4u) {
        ctx->pc = 0x280DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DA0u;
        // 0x280da4: 0x3bb20  .word       0x0003BB20                   # add         $s7, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x280DA8u;
        goto label_280da8;
    }
    ctx->pc = 0x280DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x280DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280DA0u;
        // 0x280da4: 0x3bb20  .word       0x0003BB20                   # add         $s7, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280DA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x280DA8u;
label_280da8:
    // 0x280da8: 0x0  nop
    ctx->pc = 0x280da8u;
    // NOP
label_280dac:
    // 0x280dac: 0x0  nop
    ctx->pc = 0x280dacu;
    // NOP
label_280db0:
    // 0x280db0: 0x1de40  sll         $k1, $at, 25
    ctx->pc = 0x280db0u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 1), 25));
label_280db4:
    // 0x280db4: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x280db4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_280db8:
    // 0x280db8: 0x0  nop
    ctx->pc = 0x280db8u;
    // NOP
label_280dbc:
    // 0x280dbc: 0x0  nop
    ctx->pc = 0x280dbcu;
    // NOP
label_280dc0:
    // 0x280dc0: 0x1dea8  .word       0x0001DEA8                   # mfsa        $k1 # 00010680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280dc0u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_280dc4:
    // 0x280dc4: 0x33760  .word       0x00033760                   # add         $a2, $zero, $v1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280dc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_280dc8:
    // 0x280dc8: 0x0  nop
    ctx->pc = 0x280dc8u;
    // NOP
label_280dcc:
    // 0x280dcc: 0x0  nop
    ctx->pc = 0x280dccu;
    // NOP
label_280dd0:
    // 0x280dd0: 0x1df0f  .word       0x0001DF0F                   # sync.p # 0001D800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280dd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280dd4:
    // 0x280dd4: 0x3b960  .word       0x0003B960                   # add         $s7, $zero, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_280dd8:
    // 0x280dd8: 0x0  nop
    ctx->pc = 0x280dd8u;
    // NOP
label_280ddc:
    // 0x280ddc: 0x0  nop
    ctx->pc = 0x280ddcu;
    // NOP
label_280de0:
    // 0x280de0: 0x1df87  .word       0x0001DF87                   # srav        $k1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280de0u;
    SET_GPR_S32(ctx, 27, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_280de4:
    // 0x280de4: 0x34be0  .word       0x00034BE0                   # add         $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280de4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_280de8:
    // 0x280de8: 0x0  nop
    ctx->pc = 0x280de8u;
    // NOP
label_280dec:
    // 0x280dec: 0x0  nop
    ctx->pc = 0x280decu;
    // NOP
label_280df0:
    // 0x280df0: 0x1dff1  tgeu        $zero, $at, 895
    ctx->pc = 0x280df0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280df4:
    // 0x280df4: 0x36600  sll         $t4, $v1, 24
    ctx->pc = 0x280df4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_280df8:
    // 0x280df8: 0x0  nop
    ctx->pc = 0x280df8u;
    // NOP
label_280dfc:
    // 0x280dfc: 0x0  nop
    ctx->pc = 0x280dfcu;
    // NOP
label_280e00:
    // 0x280e00: 0x1e05e  .word       0x0001E05E                   # ddiv        $gp, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x280E00 raw=0x0001E05E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280e04:
    // 0x280e04: 0x32ad0  .word       0x00032AD0                   # mfhi        $a1 # 000302C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e04u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_280e08:
    // 0x280e08: 0x0  nop
    ctx->pc = 0x280e08u;
    // NOP
label_280e0c:
    // 0x280e0c: 0x0  nop
    ctx->pc = 0x280e0cu;
    // NOP
label_280e10:
    // 0x280e10: 0x1e0c4  .word       0x0001E0C4                   # sllv        $gp, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e10u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_280e14:
    // 0x280e14: 0x36ee0  .word       0x00036EE0                   # add         $t5, $zero, $v1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_280e18:
    // 0x280e18: 0x0  nop
    ctx->pc = 0x280e18u;
    // NOP
label_280e1c:
    // 0x280e1c: 0x0  nop
    ctx->pc = 0x280e1cu;
    // NOP
label_280e20:
    // 0x280e20: 0x1e132  tlt         $zero, $at, 900
    ctx->pc = 0x280e20u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280e24:
    // 0x280e24: 0x31ec0  sll         $v1, $v1, 27
    ctx->pc = 0x280e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 27));
label_280e28:
    // 0x280e28: 0x0  nop
    ctx->pc = 0x280e28u;
    // NOP
label_280e2c:
    // 0x280e2c: 0x0  nop
    ctx->pc = 0x280e2cu;
    // NOP
label_280e30:
    // 0x280e30: 0x1e196  .word       0x0001E196                   # dsrlv       $gp, $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e30u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_280e34:
    // 0x280e34: 0x318d0  .word       0x000318D0                   # mfhi        $v1 # 000300C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e34u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_280e38:
    // 0x280e38: 0x0  nop
    ctx->pc = 0x280e38u;
    // NOP
label_280e3c:
    // 0x280e3c: 0x0  nop
    ctx->pc = 0x280e3cu;
    // NOP
label_280e40:
    // 0x280e40: 0x1e1fa  dsrl        $gp, $at, 7
    ctx->pc = 0x280e40u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) >> 7);
label_280e44:
    // 0x280e44: 0x34b20  .word       0x00034B20                   # add         $t1, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_280e48:
    // 0x280e48: 0x0  nop
    ctx->pc = 0x280e48u;
    // NOP
label_280e4c:
    // 0x280e4c: 0x0  nop
    ctx->pc = 0x280e4cu;
    // NOP
label_280e50:
    // 0x280e50: 0x1e264  .word       0x0001E264                   # and         $gp, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e50u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_280e54:
    // 0x280e54: 0x352f0  tge         $zero, $v1, 331
    ctx->pc = 0x280e54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280e58:
    // 0x280e58: 0x0  nop
    ctx->pc = 0x280e58u;
    // NOP
label_280e5c:
    // 0x280e5c: 0x0  nop
    ctx->pc = 0x280e5cu;
    // NOP
label_280e60:
    // 0x280e60: 0x1e2cf  .word       0x0001E2CF                   # sync # 0001E000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280e64:
    // 0x280e64: 0x36730  tge         $zero, $v1, 412
    ctx->pc = 0x280e64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280e68:
    // 0x280e68: 0x0  nop
    ctx->pc = 0x280e68u;
    // NOP
label_280e6c:
    // 0x280e6c: 0x0  nop
    ctx->pc = 0x280e6cu;
    // NOP
label_280e70:
    // 0x280e70: 0x1e33c  dsll32      $gp, $at, 12
    ctx->pc = 0x280e70u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 12));
label_280e74:
    // 0x280e74: 0x35650  .word       0x00035650                   # mfhi        $t2 # 00030640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e74u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_280e78:
    // 0x280e78: 0x0  nop
    ctx->pc = 0x280e78u;
    // NOP
label_280e7c:
    // 0x280e7c: 0x0  nop
    ctx->pc = 0x280e7cu;
    // NOP
label_280e80:
    // 0x280e80: 0x1e3a7  .word       0x0001E3A7                   # nor         $gp, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280e80u;
    SET_GPR_U64(ctx, 28, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_280e84:
    // 0x280e84: 0x31e30  tge         $zero, $v1, 120
    ctx->pc = 0x280e84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x280e88u;
    return;
}

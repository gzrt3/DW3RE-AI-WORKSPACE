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


void FUN_0014eba0_part115(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x186640u: goto label_186640;
        case 0x186644u: goto label_186644;
        case 0x186648u: goto label_186648;
        case 0x18664cu: goto label_18664c;
        case 0x186650u: goto label_186650;
        case 0x186654u: goto label_186654;
        case 0x186658u: goto label_186658;
        case 0x18665cu: goto label_18665c;
        case 0x186660u: goto label_186660;
        case 0x186664u: goto label_186664;
        case 0x186668u: goto label_186668;
        case 0x18666cu: goto label_18666c;
        case 0x186670u: goto label_186670;
        case 0x186674u: goto label_186674;
        case 0x186678u: goto label_186678;
        case 0x18667cu: goto label_18667c;
        case 0x186680u: goto label_186680;
        case 0x186684u: goto label_186684;
        case 0x186688u: goto label_186688;
        case 0x18668cu: goto label_18668c;
        case 0x186690u: goto label_186690;
        case 0x186694u: goto label_186694;
        case 0x186698u: goto label_186698;
        case 0x18669cu: goto label_18669c;
        case 0x1866a0u: goto label_1866a0;
        case 0x1866a4u: goto label_1866a4;
        case 0x1866a8u: goto label_1866a8;
        case 0x1866acu: goto label_1866ac;
        case 0x1866b0u: goto label_1866b0;
        case 0x1866b4u: goto label_1866b4;
        case 0x1866b8u: goto label_1866b8;
        case 0x1866bcu: goto label_1866bc;
        case 0x1866c0u: goto label_1866c0;
        case 0x1866c4u: goto label_1866c4;
        case 0x1866c8u: goto label_1866c8;
        case 0x1866ccu: goto label_1866cc;
        case 0x1866d0u: goto label_1866d0;
        case 0x1866d4u: goto label_1866d4;
        case 0x1866d8u: goto label_1866d8;
        case 0x1866dcu: goto label_1866dc;
        case 0x1866e0u: goto label_1866e0;
        case 0x1866e4u: goto label_1866e4;
        case 0x1866e8u: goto label_1866e8;
        case 0x1866ecu: goto label_1866ec;
        case 0x1866f0u: goto label_1866f0;
        case 0x1866f4u: goto label_1866f4;
        case 0x1866f8u: goto label_1866f8;
        case 0x1866fcu: goto label_1866fc;
        case 0x186700u: goto label_186700;
        case 0x186704u: goto label_186704;
        case 0x186708u: goto label_186708;
        case 0x18670cu: goto label_18670c;
        case 0x186710u: goto label_186710;
        case 0x186714u: goto label_186714;
        case 0x186718u: goto label_186718;
        case 0x18671cu: goto label_18671c;
        case 0x186720u: goto label_186720;
        case 0x186724u: goto label_186724;
        case 0x186728u: goto label_186728;
        case 0x18672cu: goto label_18672c;
        case 0x186730u: goto label_186730;
        case 0x186734u: goto label_186734;
        case 0x186738u: goto label_186738;
        case 0x18673cu: goto label_18673c;
        case 0x186740u: goto label_186740;
        case 0x186744u: goto label_186744;
        case 0x186748u: goto label_186748;
        case 0x18674cu: goto label_18674c;
        case 0x186750u: goto label_186750;
        case 0x186754u: goto label_186754;
        case 0x186758u: goto label_186758;
        case 0x18675cu: goto label_18675c;
        case 0x186760u: goto label_186760;
        case 0x186764u: goto label_186764;
        case 0x186768u: goto label_186768;
        case 0x18676cu: goto label_18676c;
        case 0x186770u: goto label_186770;
        case 0x186774u: goto label_186774;
        case 0x186778u: goto label_186778;
        case 0x18677cu: goto label_18677c;
        case 0x186780u: goto label_186780;
        case 0x186784u: goto label_186784;
        case 0x186788u: goto label_186788;
        case 0x18678cu: goto label_18678c;
        case 0x186790u: goto label_186790;
        case 0x186794u: goto label_186794;
        case 0x186798u: goto label_186798;
        case 0x18679cu: goto label_18679c;
        case 0x1867a0u: goto label_1867a0;
        case 0x1867a4u: goto label_1867a4;
        case 0x1867a8u: goto label_1867a8;
        case 0x1867acu: goto label_1867ac;
        case 0x1867b0u: goto label_1867b0;
        case 0x1867b4u: goto label_1867b4;
        case 0x1867b8u: goto label_1867b8;
        case 0x1867bcu: goto label_1867bc;
        case 0x1867c0u: goto label_1867c0;
        case 0x1867c4u: goto label_1867c4;
        case 0x1867c8u: goto label_1867c8;
        case 0x1867ccu: goto label_1867cc;
        case 0x1867d0u: goto label_1867d0;
        case 0x1867d4u: goto label_1867d4;
        case 0x1867d8u: goto label_1867d8;
        case 0x1867dcu: goto label_1867dc;
        case 0x1867e0u: goto label_1867e0;
        case 0x1867e4u: goto label_1867e4;
        case 0x1867e8u: goto label_1867e8;
        case 0x1867ecu: goto label_1867ec;
        case 0x1867f0u: goto label_1867f0;
        case 0x1867f4u: goto label_1867f4;
        case 0x1867f8u: goto label_1867f8;
        case 0x1867fcu: goto label_1867fc;
        case 0x186800u: goto label_186800;
        case 0x186804u: goto label_186804;
        case 0x186808u: goto label_186808;
        case 0x18680cu: goto label_18680c;
        case 0x186810u: goto label_186810;
        case 0x186814u: goto label_186814;
        case 0x186818u: goto label_186818;
        case 0x18681cu: goto label_18681c;
        case 0x186820u: goto label_186820;
        case 0x186824u: goto label_186824;
        case 0x186828u: goto label_186828;
        case 0x18682cu: goto label_18682c;
        case 0x186830u: goto label_186830;
        case 0x186834u: goto label_186834;
        case 0x186838u: goto label_186838;
        case 0x18683cu: goto label_18683c;
        case 0x186840u: goto label_186840;
        case 0x186844u: goto label_186844;
        case 0x186848u: goto label_186848;
        case 0x18684cu: goto label_18684c;
        case 0x186850u: goto label_186850;
        case 0x186854u: goto label_186854;
        case 0x186858u: goto label_186858;
        case 0x18685cu: goto label_18685c;
        case 0x186860u: goto label_186860;
        case 0x186864u: goto label_186864;
        case 0x186868u: goto label_186868;
        case 0x18686cu: goto label_18686c;
        case 0x186870u: goto label_186870;
        case 0x186874u: goto label_186874;
        case 0x186878u: goto label_186878;
        case 0x18687cu: goto label_18687c;
        case 0x186880u: goto label_186880;
        case 0x186884u: goto label_186884;
        case 0x186888u: goto label_186888;
        case 0x18688cu: goto label_18688c;
        case 0x186890u: goto label_186890;
        case 0x186894u: goto label_186894;
        case 0x186898u: goto label_186898;
        case 0x18689cu: goto label_18689c;
        case 0x1868a0u: goto label_1868a0;
        case 0x1868a4u: goto label_1868a4;
        case 0x1868a8u: goto label_1868a8;
        case 0x1868acu: goto label_1868ac;
        case 0x1868b0u: goto label_1868b0;
        case 0x1868b4u: goto label_1868b4;
        case 0x1868b8u: goto label_1868b8;
        case 0x1868bcu: goto label_1868bc;
        case 0x1868c0u: goto label_1868c0;
        case 0x1868c4u: goto label_1868c4;
        case 0x1868c8u: goto label_1868c8;
        case 0x1868ccu: goto label_1868cc;
        case 0x1868d0u: goto label_1868d0;
        case 0x1868d4u: goto label_1868d4;
        case 0x1868d8u: goto label_1868d8;
        case 0x1868dcu: goto label_1868dc;
        case 0x1868e0u: goto label_1868e0;
        case 0x1868e4u: goto label_1868e4;
        case 0x1868e8u: goto label_1868e8;
        case 0x1868ecu: goto label_1868ec;
        case 0x1868f0u: goto label_1868f0;
        case 0x1868f4u: goto label_1868f4;
        case 0x1868f8u: goto label_1868f8;
        case 0x1868fcu: goto label_1868fc;
        case 0x186900u: goto label_186900;
        case 0x186904u: goto label_186904;
        case 0x186908u: goto label_186908;
        case 0x18690cu: goto label_18690c;
        case 0x186910u: goto label_186910;
        case 0x186914u: goto label_186914;
        case 0x186918u: goto label_186918;
        case 0x18691cu: goto label_18691c;
        case 0x186920u: goto label_186920;
        case 0x186924u: goto label_186924;
        case 0x186928u: goto label_186928;
        case 0x18692cu: goto label_18692c;
        case 0x186930u: goto label_186930;
        case 0x186934u: goto label_186934;
        case 0x186938u: goto label_186938;
        case 0x18693cu: goto label_18693c;
        case 0x186940u: goto label_186940;
        case 0x186944u: goto label_186944;
        case 0x186948u: goto label_186948;
        case 0x18694cu: goto label_18694c;
        case 0x186950u: goto label_186950;
        case 0x186954u: goto label_186954;
        case 0x186958u: goto label_186958;
        case 0x18695cu: goto label_18695c;
        case 0x186960u: goto label_186960;
        case 0x186964u: goto label_186964;
        case 0x186968u: goto label_186968;
        case 0x18696cu: goto label_18696c;
        case 0x186970u: goto label_186970;
        case 0x186974u: goto label_186974;
        case 0x186978u: goto label_186978;
        case 0x18697cu: goto label_18697c;
        case 0x186980u: goto label_186980;
        case 0x186984u: goto label_186984;
        case 0x186988u: goto label_186988;
        case 0x18698cu: goto label_18698c;
        case 0x186990u: goto label_186990;
        case 0x186994u: goto label_186994;
        case 0x186998u: goto label_186998;
        case 0x18699cu: goto label_18699c;
        case 0x1869a0u: goto label_1869a0;
        case 0x1869a4u: goto label_1869a4;
        case 0x1869a8u: goto label_1869a8;
        case 0x1869acu: goto label_1869ac;
        case 0x1869b0u: goto label_1869b0;
        case 0x1869b4u: goto label_1869b4;
        case 0x1869b8u: goto label_1869b8;
        case 0x1869bcu: goto label_1869bc;
        case 0x1869c0u: goto label_1869c0;
        case 0x1869c4u: goto label_1869c4;
        case 0x1869c8u: goto label_1869c8;
        case 0x1869ccu: goto label_1869cc;
        case 0x1869d0u: goto label_1869d0;
        case 0x1869d4u: goto label_1869d4;
        case 0x1869d8u: goto label_1869d8;
        case 0x1869dcu: goto label_1869dc;
        case 0x1869e0u: goto label_1869e0;
        case 0x1869e4u: goto label_1869e4;
        case 0x1869e8u: goto label_1869e8;
        case 0x1869ecu: goto label_1869ec;
        case 0x1869f0u: goto label_1869f0;
        case 0x1869f4u: goto label_1869f4;
        case 0x1869f8u: goto label_1869f8;
        case 0x1869fcu: goto label_1869fc;
        case 0x186a00u: goto label_186a00;
        case 0x186a04u: goto label_186a04;
        case 0x186a08u: goto label_186a08;
        case 0x186a0cu: goto label_186a0c;
        case 0x186a10u: goto label_186a10;
        case 0x186a14u: goto label_186a14;
        case 0x186a18u: goto label_186a18;
        case 0x186a1cu: goto label_186a1c;
        case 0x186a20u: goto label_186a20;
        case 0x186a24u: goto label_186a24;
        case 0x186a28u: goto label_186a28;
        case 0x186a2cu: goto label_186a2c;
        case 0x186a30u: goto label_186a30;
        case 0x186a34u: goto label_186a34;
        case 0x186a38u: goto label_186a38;
        case 0x186a3cu: goto label_186a3c;
        case 0x186a40u: goto label_186a40;
        case 0x186a44u: goto label_186a44;
        case 0x186a48u: goto label_186a48;
        case 0x186a4cu: goto label_186a4c;
        case 0x186a50u: goto label_186a50;
        case 0x186a54u: goto label_186a54;
        case 0x186a58u: goto label_186a58;
        case 0x186a5cu: goto label_186a5c;
        case 0x186a60u: goto label_186a60;
        case 0x186a64u: goto label_186a64;
        case 0x186a68u: goto label_186a68;
        case 0x186a6cu: goto label_186a6c;
        case 0x186a70u: goto label_186a70;
        case 0x186a74u: goto label_186a74;
        case 0x186a78u: goto label_186a78;
        case 0x186a7cu: goto label_186a7c;
        case 0x186a80u: goto label_186a80;
        case 0x186a84u: goto label_186a84;
        case 0x186a88u: goto label_186a88;
        case 0x186a8cu: goto label_186a8c;
        case 0x186a90u: goto label_186a90;
        case 0x186a94u: goto label_186a94;
        case 0x186a98u: goto label_186a98;
        case 0x186a9cu: goto label_186a9c;
        case 0x186aa0u: goto label_186aa0;
        case 0x186aa4u: goto label_186aa4;
        case 0x186aa8u: goto label_186aa8;
        case 0x186aacu: goto label_186aac;
        case 0x186ab0u: goto label_186ab0;
        case 0x186ab4u: goto label_186ab4;
        case 0x186ab8u: goto label_186ab8;
        case 0x186abcu: goto label_186abc;
        case 0x186ac0u: goto label_186ac0;
        case 0x186ac4u: goto label_186ac4;
        case 0x186ac8u: goto label_186ac8;
        case 0x186accu: goto label_186acc;
        case 0x186ad0u: goto label_186ad0;
        case 0x186ad4u: goto label_186ad4;
        case 0x186ad8u: goto label_186ad8;
        case 0x186adcu: goto label_186adc;
        case 0x186ae0u: goto label_186ae0;
        case 0x186ae4u: goto label_186ae4;
        case 0x186ae8u: goto label_186ae8;
        case 0x186aecu: goto label_186aec;
        case 0x186af0u: goto label_186af0;
        case 0x186af4u: goto label_186af4;
        case 0x186af8u: goto label_186af8;
        case 0x186afcu: goto label_186afc;
        case 0x186b00u: goto label_186b00;
        case 0x186b04u: goto label_186b04;
        case 0x186b08u: goto label_186b08;
        case 0x186b0cu: goto label_186b0c;
        case 0x186b10u: goto label_186b10;
        case 0x186b14u: goto label_186b14;
        case 0x186b18u: goto label_186b18;
        case 0x186b1cu: goto label_186b1c;
        case 0x186b20u: goto label_186b20;
        case 0x186b24u: goto label_186b24;
        case 0x186b28u: goto label_186b28;
        case 0x186b2cu: goto label_186b2c;
        case 0x186b30u: goto label_186b30;
        case 0x186b34u: goto label_186b34;
        case 0x186b38u: goto label_186b38;
        case 0x186b3cu: goto label_186b3c;
        case 0x186b40u: goto label_186b40;
        case 0x186b44u: goto label_186b44;
        case 0x186b48u: goto label_186b48;
        case 0x186b4cu: goto label_186b4c;
        case 0x186b50u: goto label_186b50;
        case 0x186b54u: goto label_186b54;
        case 0x186b58u: goto label_186b58;
        case 0x186b5cu: goto label_186b5c;
        case 0x186b60u: goto label_186b60;
        case 0x186b64u: goto label_186b64;
        case 0x186b68u: goto label_186b68;
        case 0x186b6cu: goto label_186b6c;
        case 0x186b70u: goto label_186b70;
        case 0x186b74u: goto label_186b74;
        case 0x186b78u: goto label_186b78;
        case 0x186b7cu: goto label_186b7c;
        case 0x186b80u: goto label_186b80;
        case 0x186b84u: goto label_186b84;
        case 0x186b88u: goto label_186b88;
        case 0x186b8cu: goto label_186b8c;
        case 0x186b90u: goto label_186b90;
        case 0x186b94u: goto label_186b94;
        case 0x186b98u: goto label_186b98;
        case 0x186b9cu: goto label_186b9c;
        case 0x186ba0u: goto label_186ba0;
        case 0x186ba4u: goto label_186ba4;
        case 0x186ba8u: goto label_186ba8;
        case 0x186bacu: goto label_186bac;
        case 0x186bb0u: goto label_186bb0;
        case 0x186bb4u: goto label_186bb4;
        case 0x186bb8u: goto label_186bb8;
        case 0x186bbcu: goto label_186bbc;
        case 0x186bc0u: goto label_186bc0;
        case 0x186bc4u: goto label_186bc4;
        case 0x186bc8u: goto label_186bc8;
        case 0x186bccu: goto label_186bcc;
        case 0x186bd0u: goto label_186bd0;
        case 0x186bd4u: goto label_186bd4;
        case 0x186bd8u: goto label_186bd8;
        case 0x186bdcu: goto label_186bdc;
        case 0x186be0u: goto label_186be0;
        case 0x186be4u: goto label_186be4;
        case 0x186be8u: goto label_186be8;
        case 0x186becu: goto label_186bec;
        case 0x186bf0u: goto label_186bf0;
        case 0x186bf4u: goto label_186bf4;
        case 0x186bf8u: goto label_186bf8;
        case 0x186bfcu: goto label_186bfc;
        case 0x186c00u: goto label_186c00;
        case 0x186c04u: goto label_186c04;
        case 0x186c08u: goto label_186c08;
        case 0x186c0cu: goto label_186c0c;
        case 0x186c10u: goto label_186c10;
        case 0x186c14u: goto label_186c14;
        case 0x186c18u: goto label_186c18;
        case 0x186c1cu: goto label_186c1c;
        case 0x186c20u: goto label_186c20;
        case 0x186c24u: goto label_186c24;
        case 0x186c28u: goto label_186c28;
        case 0x186c2cu: goto label_186c2c;
        case 0x186c30u: goto label_186c30;
        case 0x186c34u: goto label_186c34;
        case 0x186c38u: goto label_186c38;
        case 0x186c3cu: goto label_186c3c;
        case 0x186c40u: goto label_186c40;
        case 0x186c44u: goto label_186c44;
        case 0x186c48u: goto label_186c48;
        case 0x186c4cu: goto label_186c4c;
        case 0x186c50u: goto label_186c50;
        case 0x186c54u: goto label_186c54;
        case 0x186c58u: goto label_186c58;
        case 0x186c5cu: goto label_186c5c;
        case 0x186c60u: goto label_186c60;
        case 0x186c64u: goto label_186c64;
        case 0x186c68u: goto label_186c68;
        case 0x186c6cu: goto label_186c6c;
        case 0x186c70u: goto label_186c70;
        case 0x186c74u: goto label_186c74;
        case 0x186c78u: goto label_186c78;
        case 0x186c7cu: goto label_186c7c;
        case 0x186c80u: goto label_186c80;
        case 0x186c84u: goto label_186c84;
        case 0x186c88u: goto label_186c88;
        case 0x186c8cu: goto label_186c8c;
        case 0x186c90u: goto label_186c90;
        case 0x186c94u: goto label_186c94;
        case 0x186c98u: goto label_186c98;
        case 0x186c9cu: goto label_186c9c;
        case 0x186ca0u: goto label_186ca0;
        case 0x186ca4u: goto label_186ca4;
        case 0x186ca8u: goto label_186ca8;
        case 0x186cacu: goto label_186cac;
        case 0x186cb0u: goto label_186cb0;
        case 0x186cb4u: goto label_186cb4;
        case 0x186cb8u: goto label_186cb8;
        case 0x186cbcu: goto label_186cbc;
        case 0x186cc0u: goto label_186cc0;
        case 0x186cc4u: goto label_186cc4;
        case 0x186cc8u: goto label_186cc8;
        case 0x186cccu: goto label_186ccc;
        case 0x186cd0u: goto label_186cd0;
        case 0x186cd4u: goto label_186cd4;
        case 0x186cd8u: goto label_186cd8;
        case 0x186cdcu: goto label_186cdc;
        case 0x186ce0u: goto label_186ce0;
        case 0x186ce4u: goto label_186ce4;
        case 0x186ce8u: goto label_186ce8;
        case 0x186cecu: goto label_186cec;
        case 0x186cf0u: goto label_186cf0;
        case 0x186cf4u: goto label_186cf4;
        case 0x186cf8u: goto label_186cf8;
        case 0x186cfcu: goto label_186cfc;
        case 0x186d00u: goto label_186d00;
        case 0x186d04u: goto label_186d04;
        case 0x186d08u: goto label_186d08;
        case 0x186d0cu: goto label_186d0c;
        case 0x186d10u: goto label_186d10;
        case 0x186d14u: goto label_186d14;
        case 0x186d18u: goto label_186d18;
        case 0x186d1cu: goto label_186d1c;
        case 0x186d20u: goto label_186d20;
        case 0x186d24u: goto label_186d24;
        case 0x186d28u: goto label_186d28;
        case 0x186d2cu: goto label_186d2c;
        case 0x186d30u: goto label_186d30;
        case 0x186d34u: goto label_186d34;
        case 0x186d38u: goto label_186d38;
        case 0x186d3cu: goto label_186d3c;
        case 0x186d40u: goto label_186d40;
        case 0x186d44u: goto label_186d44;
        case 0x186d48u: goto label_186d48;
        case 0x186d4cu: goto label_186d4c;
        case 0x186d50u: goto label_186d50;
        case 0x186d54u: goto label_186d54;
        case 0x186d58u: goto label_186d58;
        case 0x186d5cu: goto label_186d5c;
        case 0x186d60u: goto label_186d60;
        case 0x186d64u: goto label_186d64;
        case 0x186d68u: goto label_186d68;
        case 0x186d6cu: goto label_186d6c;
        case 0x186d70u: goto label_186d70;
        case 0x186d74u: goto label_186d74;
        case 0x186d78u: goto label_186d78;
        case 0x186d7cu: goto label_186d7c;
        case 0x186d80u: goto label_186d80;
        case 0x186d84u: goto label_186d84;
        case 0x186d88u: goto label_186d88;
        case 0x186d8cu: goto label_186d8c;
        case 0x186d90u: goto label_186d90;
        case 0x186d94u: goto label_186d94;
        case 0x186d98u: goto label_186d98;
        case 0x186d9cu: goto label_186d9c;
        case 0x186da0u: goto label_186da0;
        case 0x186da4u: goto label_186da4;
        case 0x186da8u: goto label_186da8;
        case 0x186dacu: goto label_186dac;
        case 0x186db0u: goto label_186db0;
        case 0x186db4u: goto label_186db4;
        case 0x186db8u: goto label_186db8;
        case 0x186dbcu: goto label_186dbc;
        case 0x186dc0u: goto label_186dc0;
        case 0x186dc4u: goto label_186dc4;
        case 0x186dc8u: goto label_186dc8;
        case 0x186dccu: goto label_186dcc;
        case 0x186dd0u: goto label_186dd0;
        case 0x186dd4u: goto label_186dd4;
        case 0x186dd8u: goto label_186dd8;
        case 0x186ddcu: goto label_186ddc;
        case 0x186de0u: goto label_186de0;
        case 0x186de4u: goto label_186de4;
        case 0x186de8u: goto label_186de8;
        case 0x186decu: goto label_186dec;
        case 0x186df0u: goto label_186df0;
        case 0x186df4u: goto label_186df4;
        case 0x186df8u: goto label_186df8;
        case 0x186dfcu: goto label_186dfc;
        case 0x186e00u: goto label_186e00;
        case 0x186e04u: goto label_186e04;
        case 0x186e08u: goto label_186e08;
        case 0x186e0cu: goto label_186e0c;
        default: return;
    }

label_186640:
    if (ctx->pc == 0x186640u) {
        ctx->pc = 0x186644u;
        goto label_186644;
    }
    ctx->pc = 0x18663Cu;
    {
        const bool branch_taken_0x18663c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18663c) {
            ctx->pc = 0x18667Cu;
            goto label_18667c;
        }
    }
    ctx->pc = 0x186644u;
label_186644:
    // 0x186644: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x186644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186648:
    // 0x186648: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x186648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18664c:
    // 0x18664c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18664cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_186650:
    // 0x186650: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186650u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_186654:
    // 0x186654: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_186658:
    // 0x186658: 0x0  nop
    ctx->pc = 0x186658u;
    // NOP
label_18665c:
    // 0x18665c: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x18665cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
label_186660:
    // 0x186660: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x186660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186664:
    // 0x186664: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x186664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186668:
    // 0x186668: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x186668u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18666c:
    // 0x18666c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18666cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_186670:
    // 0x186670: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_186674:
    // 0x186674: 0x10000003  b           . + 4 + (0x3 << 2)
label_186678:
    if (ctx->pc == 0x186678u) {
        ctx->pc = 0x186678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186674u;
        // 0x186678: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18667Cu;
        goto label_18667c;
    }
    ctx->pc = 0x186674u;
    {
        const bool branch_taken_0x186674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186674u;
        // 0x186678: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186674) {
            ctx->pc = 0x186684u;
            goto label_186684;
        }
    }
    ctx->pc = 0x18667Cu;
label_18667c:
    // 0x18667c: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x18667cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_186680:
    // 0x186680: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x186680u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
label_186684:
    // 0x186684: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x186684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_186688:
    // 0x186688: 0x34634010  ori         $v1, $v1, 0x4010
    ctx->pc = 0x186688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16400);
label_18668c:
    // 0x18668c: 0x1000009d  b           . + 4 + (0x9D << 2)
label_186690:
    if (ctx->pc == 0x186690u) {
        ctx->pc = 0x186690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18668Cu;
        // 0x186690: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186694u;
        goto label_186694;
    }
    ctx->pc = 0x18668Cu;
    {
        const bool branch_taken_0x18668c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18668Cu;
        // 0x186690: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18668c) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x186694u;
label_186694:
    // 0x186694: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x186694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_186698:
    // 0x186698: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x186698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_18669c:
    // 0x18669c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x18669cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1866a0:
    // 0x1866a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1866a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1866a4:
    // 0x1866a4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1866a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1866a8:
    // 0x1866a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1866a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1866ac:
    // 0x1866ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1866acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1866b0:
    // 0x1866b0: 0x0  nop
    ctx->pc = 0x1866b0u;
    // NOP
label_1866b4:
    // 0x1866b4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1866b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1866b8:
    // 0x1866b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1866b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1866bc:
    // 0x1866bc: 0x0  nop
    ctx->pc = 0x1866bcu;
    // NOP
label_1866c0:
    // 0x1866c0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1866c4:
    if (ctx->pc == 0x1866C4u) {
        ctx->pc = 0x1866C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866C0u;
        // 0x1866c4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1866C8u;
        goto label_1866c8;
    }
    ctx->pc = 0x1866C0u;
    {
        const bool branch_taken_0x1866c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1866C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866C0u;
        // 0x1866c4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866c0) {
            ctx->pc = 0x1866DCu;
            goto label_1866dc;
        }
    }
    ctx->pc = 0x1866C8u;
label_1866c8:
    // 0x1866c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1866c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1866cc:
    // 0x1866cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1866ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1866d0:
    // 0x1866d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1866d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1866d4:
    // 0x1866d4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1866d8:
    if (ctx->pc == 0x1866D8u) {
        ctx->pc = 0x1866D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866D4u;
        // 0x1866d8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1866DCu;
        goto label_1866dc;
    }
    ctx->pc = 0x1866D4u;
    {
        const bool branch_taken_0x1866d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1866D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866D4u;
        // 0x1866d8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866d4) {
            ctx->pc = 0x18670Cu;
            goto label_18670c;
        }
    }
    ctx->pc = 0x1866DCu;
label_1866dc:
    // 0x1866dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1866dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1866e0:
    // 0x1866e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1866e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1866e4:
    // 0x1866e4: 0x0  nop
    ctx->pc = 0x1866e4u;
    // NOP
label_1866e8:
    // 0x1866e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1866e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1866ec:
    // 0x1866ec: 0x0  nop
    ctx->pc = 0x1866ecu;
    // NOP
label_1866f0:
    // 0x1866f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1866f4:
    if (ctx->pc == 0x1866F4u) {
        ctx->pc = 0x1866F8u;
        goto label_1866f8;
    }
    ctx->pc = 0x1866F0u;
    {
        const bool branch_taken_0x1866f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1866f0) {
            ctx->pc = 0x18670Cu;
            goto label_18670c;
        }
    }
    ctx->pc = 0x1866F8u;
label_1866f8:
    // 0x1866f8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1866f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1866fc:
    // 0x1866fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1866fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186700:
    // 0x186700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186704:
    // 0x186704: 0x10000001  b           . + 4 + (0x1 << 2)
label_186708:
    if (ctx->pc == 0x186708u) {
        ctx->pc = 0x186708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186704u;
        // 0x186708: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18670Cu;
        goto label_18670c;
    }
    ctx->pc = 0x186704u;
    {
        const bool branch_taken_0x186704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186704u;
        // 0x186708: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186704) {
            ctx->pc = 0x18670Cu;
            goto label_18670c;
        }
    }
    ctx->pc = 0x18670Cu;
label_18670c:
    // 0x18670c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x18670cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_186710:
    // 0x186710: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x186710u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_186714:
    // 0x186714: 0x4a000138  vcallms     0x20
    ctx->pc = 0x186714u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_186718:
    // 0x186718: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x186718u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_18671c:
    // 0x18671c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18671cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186720:
    // 0x186720: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x186720u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_186724:
    // 0x186724: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x186724u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_186728:
    // 0x186728: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x186728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_18672c:
    // 0x18672c: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x18672cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_186730:
    // 0x186730: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x186730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_186734:
    // 0x186734: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x186734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
label_186738:
    // 0x186738: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x186738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18673c:
    // 0x18673c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x18673cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_186740:
    // 0x186740: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x186740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_186744:
    // 0x186744: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x186744u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_186748:
    // 0x186748: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x186748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_18674c:
    // 0x18674c: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x18674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186750:
    // 0x186750: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x186750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_186754:
    // 0x186754: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x186754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_186758:
    // 0x186758: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x186758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18675c:
    // 0x18675c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18675cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_186760:
    // 0x186760: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x186760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_186764:
    // 0x186764: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x186764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186768:
    // 0x186768: 0xc0439e8  jal         func_10E7A0
label_18676c:
    if (ctx->pc == 0x18676Cu) {
        ctx->pc = 0x18676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186768u;
        // 0x18676c: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x186770u;
        goto label_186770;
    }
    ctx->pc = 0x186768u;
    SET_GPR_U32(ctx, 31, 0x186770u);
    ctx->pc = 0x18676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186768u;
    // 0x18676c: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x186768u, 0x186770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186770u;
label_186770:
    // 0x186770: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_186774:
    if (ctx->pc == 0x186774u) {
        ctx->pc = 0x186778u;
        goto label_186778;
    }
    ctx->pc = 0x186770u;
    {
        const bool branch_taken_0x186770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186770) {
            ctx->pc = 0x186780u;
            goto label_186780;
        }
    }
    ctx->pc = 0x186778u;
label_186778:
    // 0x186778: 0x10000020  b           . + 4 + (0x20 << 2)
label_18677c:
    if (ctx->pc == 0x18677Cu) {
        ctx->pc = 0x18677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186778u;
        // 0x18677c: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186780u;
        goto label_186780;
    }
    ctx->pc = 0x186778u;
    {
        const bool branch_taken_0x186778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186778u;
        // 0x18677c: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186778) {
            ctx->pc = 0x1867FCu;
            goto label_1867fc;
        }
    }
    ctx->pc = 0x186780u;
label_186780:
    // 0x186780: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x186780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_186784:
    // 0x186784: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x186784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_186788:
    // 0x186788: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x186788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18678c:
    // 0x18678c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18678cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186790:
    // 0x186790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186794:
    // 0x186794: 0x0  nop
    ctx->pc = 0x186794u;
    // NOP
label_186798:
    // 0x186798: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x186798u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_18679c:
    // 0x18679c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18679cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1867a0:
    // 0x1867a0: 0x0  nop
    ctx->pc = 0x1867a0u;
    // NOP
label_1867a4:
    // 0x1867a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1867a8:
    if (ctx->pc == 0x1867A8u) {
        ctx->pc = 0x1867A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867A4u;
        // 0x1867a8: 0xe7ac0084  swc1        $f12, 0x84($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1867ACu;
        goto label_1867ac;
    }
    ctx->pc = 0x1867A4u;
    {
        const bool branch_taken_0x1867a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1867A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867A4u;
        // 0x1867a8: 0xe7ac0084  swc1        $f12, 0x84($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867a4) {
            ctx->pc = 0x1867C0u;
            goto label_1867c0;
        }
    }
    ctx->pc = 0x1867ACu;
label_1867ac:
    // 0x1867ac: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1867acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1867b0:
    // 0x1867b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1867b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1867b4:
    // 0x1867b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1867b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1867b8:
    // 0x1867b8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1867bc:
    if (ctx->pc == 0x1867BCu) {
        ctx->pc = 0x1867BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867B8u;
        // 0x1867bc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1867C0u;
        goto label_1867c0;
    }
    ctx->pc = 0x1867B8u;
    {
        const bool branch_taken_0x1867b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1867BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867B8u;
        // 0x1867bc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867b8) {
            ctx->pc = 0x1867F0u;
            goto label_1867f0;
        }
    }
    ctx->pc = 0x1867C0u;
label_1867c0:
    // 0x1867c0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1867c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1867c4:
    // 0x1867c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1867c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1867c8:
    // 0x1867c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1867c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1867cc:
    // 0x1867cc: 0x0  nop
    ctx->pc = 0x1867ccu;
    // NOP
label_1867d0:
    // 0x1867d0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1867d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1867d4:
    // 0x1867d4: 0x0  nop
    ctx->pc = 0x1867d4u;
    // NOP
label_1867d8:
    // 0x1867d8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1867dc:
    if (ctx->pc == 0x1867DCu) {
        ctx->pc = 0x1867DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867D8u;
        // 0x1867dc: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1867E0u;
        goto label_1867e0;
    }
    ctx->pc = 0x1867D8u;
    {
        const bool branch_taken_0x1867d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1867DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867D8u;
        // 0x1867dc: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867d8) {
            ctx->pc = 0x1867F0u;
            goto label_1867f0;
        }
    }
    ctx->pc = 0x1867E0u;
label_1867e0:
    // 0x1867e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1867e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1867e4:
    // 0x1867e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1867e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1867e8:
    // 0x1867e8: 0x10000001  b           . + 4 + (0x1 << 2)
label_1867ec:
    if (ctx->pc == 0x1867ECu) {
        ctx->pc = 0x1867ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867E8u;
        // 0x1867ec: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1867F0u;
        goto label_1867f0;
    }
    ctx->pc = 0x1867E8u;
    {
        const bool branch_taken_0x1867e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1867ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867E8u;
        // 0x1867ec: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867e8) {
            ctx->pc = 0x1867F0u;
            goto label_1867f0;
        }
    }
    ctx->pc = 0x1867F0u;
label_1867f0:
    // 0x1867f0: 0xc06d448  jal         func_1B5120
label_1867f4:
    if (ctx->pc == 0x1867F4u) {
        ctx->pc = 0x1867F8u;
        goto label_1867f8;
    }
    ctx->pc = 0x1867F0u;
    SET_GPR_U32(ctx, 31, 0x1867F8u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1867F8u;
label_1867f8:
    // 0x1867f8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1867f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1867fc:
    // 0x1867fc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1867fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186800:
    // 0x186800: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x186800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_186804:
    // 0x186804: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_186808:
    // 0x186808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18680c:
    // 0x18680c: 0x0  nop
    ctx->pc = 0x18680cu;
    // NOP
label_186810:
    // 0x186810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x186810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186814:
    // 0x186814: 0x0  nop
    ctx->pc = 0x186814u;
    // NOP
label_186818:
    // 0x186818: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18681c:
    if (ctx->pc == 0x18681Cu) {
        ctx->pc = 0x186820u;
        goto label_186820;
    }
    ctx->pc = 0x186818u;
    {
        const bool branch_taken_0x186818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186818) {
            ctx->pc = 0x186834u;
            goto label_186834;
        }
    }
    ctx->pc = 0x186820u;
label_186820:
    // 0x186820: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x186820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_186824:
    // 0x186824: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_186828:
    // 0x186828: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x186828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_18682c:
    // 0x18682c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_186830:
    if (ctx->pc == 0x186830u) {
        ctx->pc = 0x186834u;
        goto label_186834;
    }
    ctx->pc = 0x18682Cu;
    {
        const bool branch_taken_0x18682c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18682c) {
            ctx->pc = 0x18686Cu;
            goto label_18686c;
        }
    }
    ctx->pc = 0x186834u;
label_186834:
    // 0x186834: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x186834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186838:
    // 0x186838: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x186838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18683c:
    // 0x18683c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18683cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_186840:
    // 0x186840: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186840u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_186844:
    // 0x186844: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_186848:
    // 0x186848: 0x0  nop
    ctx->pc = 0x186848u;
    // NOP
label_18684c:
    // 0x18684c: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x18684cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
label_186850:
    // 0x186850: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x186850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186854:
    // 0x186854: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x186854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186858:
    // 0x186858: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x186858u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18685c:
    // 0x18685c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18685cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_186860:
    // 0x186860: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_186864:
    // 0x186864: 0x10000003  b           . + 4 + (0x3 << 2)
label_186868:
    if (ctx->pc == 0x186868u) {
        ctx->pc = 0x186868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186864u;
        // 0x186868: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18686Cu;
        goto label_18686c;
    }
    ctx->pc = 0x186864u;
    {
        const bool branch_taken_0x186864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186864u;
        // 0x186868: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186864) {
            ctx->pc = 0x186874u;
            goto label_186874;
        }
    }
    ctx->pc = 0x18686Cu;
label_18686c:
    // 0x18686c: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x18686cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
label_186870:
    // 0x186870: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x186870u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
label_186874:
    // 0x186874: 0x9623022c  lhu         $v1, 0x22C($s1)
    ctx->pc = 0x186874u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 556)));
label_186878:
    // 0x186878: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x186878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_18687c:
    // 0x18687c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_186880:
    if (ctx->pc == 0x186880u) {
        ctx->pc = 0x186884u;
        goto label_186884;
    }
    ctx->pc = 0x18687Cu;
    {
        const bool branch_taken_0x18687c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18687c) {
            ctx->pc = 0x1868F8u;
            goto label_1868f8;
        }
    }
    ctx->pc = 0x186884u;
label_186884:
    // 0x186884: 0xc08f0cc  jal         func_23C330
label_186888:
    if (ctx->pc == 0x186888u) {
        ctx->pc = 0x18688Cu;
        goto label_18688c;
    }
    ctx->pc = 0x186884u;
    SET_GPR_U32(ctx, 31, 0x18688Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x18688Cu;
label_18688c:
    // 0x18688c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18688cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_186890:
    // 0x186890: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x186890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_186894:
    // 0x186894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186898:
    // 0x186898: 0x92250232  lbu         $a1, 0x232($s1)
    ctx->pc = 0x186898u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
label_18689c:
    // 0x18689c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18689cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1868a0:
    // 0x1868a0: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x1868a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
label_1868a4:
    // 0x1868a4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1868a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1868a8:
    // 0x1868a8: 0x24632b14  addiu       $v1, $v1, 0x2B14
    ctx->pc = 0x1868a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11028));
label_1868ac:
    // 0x1868ac: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1868acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1868b0:
    // 0x1868b0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1868b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1868b4:
    // 0x1868b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1868b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1868b8:
    // 0x1868b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1868b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1868bc:
    // 0x1868bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1868bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1868c0:
    // 0x1868c0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1868c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1868c4:
    // 0x1868c4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1868c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1868c8:
    // 0x1868c8: 0x0  nop
    ctx->pc = 0x1868c8u;
    // NOP
label_1868cc:
    // 0x1868cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1868ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1868d0:
    // 0x1868d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1868d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1868d4:
    // 0x1868d4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1868d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1868d8:
    // 0x1868d8: 0x0  nop
    ctx->pc = 0x1868d8u;
    // NOP
label_1868dc:
    // 0x1868dc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1868dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1868e0:
    // 0x1868e0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1868e4:
    if (ctx->pc == 0x1868E4u) {
        ctx->pc = 0x1868E8u;
        goto label_1868e8;
    }
    ctx->pc = 0x1868E0u;
    {
        const bool branch_taken_0x1868e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868e0) {
            ctx->pc = 0x1868F8u;
            goto label_1868f8;
        }
    }
    ctx->pc = 0x1868E8u;
label_1868e8:
    // 0x1868e8: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x1868e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_1868ec:
    // 0x1868ec: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1868ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_1868f0:
    // 0x1868f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1868f4:
    if (ctx->pc == 0x1868F4u) {
        ctx->pc = 0x1868F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868F0u;
        // 0x1868f4: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1868F8u;
        goto label_1868f8;
    }
    ctx->pc = 0x1868F0u;
    {
        const bool branch_taken_0x1868f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1868F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868F0u;
        // 0x1868f4: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868f0) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x1868F8u;
label_1868f8:
    // 0x1868f8: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x1868f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
label_1868fc:
    // 0x1868fc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1868fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_186900:
    // 0x186900: 0xa223023d  sb          $v1, 0x23D($s1)
    ctx->pc = 0x186900u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
label_186904:
    // 0x186904: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_186908:
    // 0x186908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18690c:
    // 0x18690c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18690cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_186910:
    // 0x186910: 0x3e00008  jr          $ra
label_186914:
    if (ctx->pc == 0x186914u) {
        ctx->pc = 0x186914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186910u;
        // 0x186914: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186918u;
        goto label_186918;
    }
    ctx->pc = 0x186910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186910u;
        // 0x186914: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186918u;
label_186918:
    // 0x186918: 0x0  nop
    ctx->pc = 0x186918u;
    // NOP
label_18691c:
    // 0x18691c: 0x0  nop
    ctx->pc = 0x18691cu;
    // NOP
label_186920:
    // 0x186920: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x186920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_186924:
    // 0x186924: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x186924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_186928:
    // 0x186928: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x186928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18692c:
    // 0x18692c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18692cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_186930:
    // 0x186930: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x186930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186934:
    // 0x186934: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_186938:
    // 0x186938: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x186938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18693c:
    // 0x18693c: 0xc061c98  jal         func_187260
label_186940:
    if (ctx->pc == 0x186940u) {
        ctx->pc = 0x186940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18693Cu;
        // 0x186940: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186944u;
        goto label_186944;
    }
    ctx->pc = 0x18693Cu;
    SET_GPR_U32(ctx, 31, 0x186944u);
    ctx->pc = 0x186940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18693Cu;
    // 0x186940: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187260u;
    { ctx->pc = 0x187260; return; }
    ctx->pc = 0x186944u;
label_186944:
    // 0x186944: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x186944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_186948:
    // 0x186948: 0xc6410264  lwc1        $f1, 0x264($s2)
    ctx->pc = 0x186948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18694c:
    // 0x18694c: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x18694cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186950:
    // 0x186950: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_186954:
    // 0x186954: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x186954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_186958:
    // 0x186958: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_18695c:
    if (ctx->pc == 0x18695Cu) {
        ctx->pc = 0x18695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186958u;
        // 0x18695c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x186960u;
        goto label_186960;
    }
    ctx->pc = 0x186958u;
    {
        const bool branch_taken_0x186958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186958u;
        // 0x18695c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186958) {
            ctx->pc = 0x1869F4u;
            goto label_1869f4;
        }
    }
    ctx->pc = 0x186960u;
label_186960:
    // 0x186960: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x186960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186964:
    // 0x186964: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x186964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_186968:
    // 0x186968: 0xc6400150  lwc1        $f0, 0x150($s2)
    ctx->pc = 0x186968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18696c:
    // 0x18696c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18696cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_186970:
    // 0x186970: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186970u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_186974:
    // 0x186974: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x186974u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_186978:
    // 0x186978: 0x0  nop
    ctx->pc = 0x186978u;
    // NOP
label_18697c:
    // 0x18697c: 0xa644019c  sh          $a0, 0x19C($s2)
    ctx->pc = 0x18697cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 4));
label_186980:
    // 0x186980: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x186980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186984:
    // 0x186984: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x186984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186988:
    // 0x186988: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186988u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18698c:
    // 0x18698c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18698cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_186990:
    // 0x186990: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x186990u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_186994:
    // 0x186994: 0x0  nop
    ctx->pc = 0x186994u;
    // NOP
label_186998:
    // 0x186998: 0xa644019e  sh          $a0, 0x19E($s2)
    ctx->pc = 0x186998u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 4));
label_18699c:
    // 0x18699c: 0x8644003c  lh          $a0, 0x3C($s2)
    ctx->pc = 0x18699cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_1869a0:
    // 0x1869a0: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_1869a4:
    if (ctx->pc == 0x1869A4u) {
        ctx->pc = 0x1869A8u;
        goto label_1869a8;
    }
    ctx->pc = 0x1869A0u;
    {
        const bool branch_taken_0x1869a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1869a0) {
            ctx->pc = 0x1869C4u;
            goto label_1869c4;
        }
    }
    ctx->pc = 0x1869A8u;
label_1869a8:
    // 0x1869a8: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1869a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1869ac:
    // 0x1869ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1869acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1869b0:
    // 0x1869b0: 0x0  nop
    ctx->pc = 0x1869b0u;
    // NOP
label_1869b4:
    // 0x1869b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1869b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1869b8:
    // 0x1869b8: 0x0  nop
    ctx->pc = 0x1869b8u;
    // NOP
label_1869bc:
    // 0x1869bc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1869c0:
    if (ctx->pc == 0x1869C0u) {
        ctx->pc = 0x1869C4u;
        goto label_1869c4;
    }
    ctx->pc = 0x1869BCu;
    {
        const bool branch_taken_0x1869bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1869bc) {
            ctx->pc = 0x1869E4u;
            goto label_1869e4;
        }
    }
    ctx->pc = 0x1869C4u;
label_1869c4:
    // 0x1869c4: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x1869c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1869c8:
    // 0x1869c8: 0xc6410154  lwc1        $f1, 0x154($s2)
    ctx->pc = 0x1869c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1869cc:
    // 0x1869cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1869ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1869d0:
    // 0x1869d0: 0x0  nop
    ctx->pc = 0x1869d0u;
    // NOP
label_1869d4:
    // 0x1869d4: 0x450001c2  bc1f        . + 4 + (0x1C2 << 2)
label_1869d8:
    if (ctx->pc == 0x1869D8u) {
        ctx->pc = 0x1869D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869D4u;
        // 0x1869d8: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1869DCu;
        goto label_1869dc;
    }
    ctx->pc = 0x1869D4u;
    {
        const bool branch_taken_0x1869d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1869D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869D4u;
        // 0x1869d8: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869d4) {
            ctx->pc = 0x1870E0u;
            { ctx->pc = 0x1870e0; return; }
        }
    }
    ctx->pc = 0x1869DCu;
label_1869dc:
    // 0x1869dc: 0x148301c0  bne         $a0, $v1, . + 4 + (0x1C0 << 2)
label_1869e0:
    if (ctx->pc == 0x1869E0u) {
        ctx->pc = 0x1869E4u;
        goto label_1869e4;
    }
    ctx->pc = 0x1869DCu;
    {
        const bool branch_taken_0x1869dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1869dc) {
            ctx->pc = 0x1870E0u;
            { ctx->pc = 0x1870e0; return; }
        }
    }
    ctx->pc = 0x1869E4u;
label_1869e4:
    // 0x1869e4: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x1869e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_1869e8:
    // 0x1869e8: 0x34630401  ori         $v1, $v1, 0x401
    ctx->pc = 0x1869e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1025);
label_1869ec:
    // 0x1869ec: 0x100001bc  b           . + 4 + (0x1BC << 2)
label_1869f0:
    if (ctx->pc == 0x1869F0u) {
        ctx->pc = 0x1869F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869ECu;
        // 0x1869f0: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1869F4u;
        goto label_1869f4;
    }
    ctx->pc = 0x1869ECu;
    {
        const bool branch_taken_0x1869ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1869F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869ECu;
        // 0x1869f0: 0xae430194  sw          $v1, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869ec) {
            ctx->pc = 0x1870E0u;
            { ctx->pc = 0x1870e0; return; }
        }
    }
    ctx->pc = 0x1869F4u;
label_1869f4:
    // 0x1869f4: 0x8642003c  lh          $v0, 0x3C($s2)
    ctx->pc = 0x1869f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_1869f8:
    // 0x1869f8: 0x28420096  slti        $v0, $v0, 0x96
    ctx->pc = 0x1869f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)150) ? 1 : 0);
label_1869fc:
    // 0x1869fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_186a00:
    if (ctx->pc == 0x186A00u) {
        ctx->pc = 0x186A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869FCu;
        // 0x186a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A04u;
        goto label_186a04;
    }
    ctx->pc = 0x1869FCu;
    {
        const bool branch_taken_0x1869fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869FCu;
        // 0x186a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869fc) {
            ctx->pc = 0x186A08u;
            goto label_186a08;
        }
    }
    ctx->pc = 0x186A04u;
label_186a04:
    // 0x186a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186a08:
    // 0x186a08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_186a0c:
    if (ctx->pc == 0x186A0Cu) {
        ctx->pc = 0x186A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A08u;
        // 0x186a0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A10u;
        goto label_186a10;
    }
    ctx->pc = 0x186A08u;
    {
        const bool branch_taken_0x186a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A08u;
        // 0x186a0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a08) {
            ctx->pc = 0x186A20u;
            goto label_186a20;
        }
    }
    ctx->pc = 0x186A10u;
label_186a10:
    // 0x186a10: 0xc062210  jal         func_188840
label_186a14:
    if (ctx->pc == 0x186A14u) {
        ctx->pc = 0x186A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A10u;
        // 0x186a14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A18u;
        goto label_186a18;
    }
    ctx->pc = 0x186A10u;
    SET_GPR_U32(ctx, 31, 0x186A18u);
    ctx->pc = 0x186A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186A10u;
    // 0x186a14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188840u;
    { ctx->pc = 0x188840; return; }
    ctx->pc = 0x186A18u;
label_186a18:
    // 0x186a18: 0x100001b2  b           . + 4 + (0x1B2 << 2)
label_186a1c:
    if (ctx->pc == 0x186A1Cu) {
        ctx->pc = 0x186A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A18u;
        // 0x186a1c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A20u;
        goto label_186a20;
    }
    ctx->pc = 0x186A18u;
    {
        const bool branch_taken_0x186a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A18u;
        // 0x186a1c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a18) {
            ctx->pc = 0x1870E4u;
            { ctx->pc = 0x1870e4; return; }
        }
    }
    ctx->pc = 0x186A20u;
label_186a20:
    // 0x186a20: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x186a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_186a24:
    // 0x186a24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186a28:
    // 0x186a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186a2c:
    // 0x186a2c: 0x0  nop
    ctx->pc = 0x186a2cu;
    // NOP
label_186a30:
    // 0x186a30: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x186a30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186a34:
    // 0x186a34: 0x0  nop
    ctx->pc = 0x186a34u;
    // NOP
label_186a38:
    // 0x186a38: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_186a3c:
    if (ctx->pc == 0x186A3Cu) {
        ctx->pc = 0x186A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A38u;
        // 0x186a3c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A40u;
        goto label_186a40;
    }
    ctx->pc = 0x186A38u;
    {
        const bool branch_taken_0x186a38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x186A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A38u;
        // 0x186a3c: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a38) {
            ctx->pc = 0x186A54u;
            goto label_186a54;
        }
    }
    ctx->pc = 0x186A40u;
label_186a40:
    // 0x186a40: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_186a44:
    // 0x186a44: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186a48:
    // 0x186a48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186a4c:
    // 0x186a4c: 0x1000000d  b           . + 4 + (0xD << 2)
label_186a50:
    if (ctx->pc == 0x186A50u) {
        ctx->pc = 0x186A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A4Cu;
        // 0x186a50: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A54u;
        goto label_186a54;
    }
    ctx->pc = 0x186A4Cu;
    {
        const bool branch_taken_0x186a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A4Cu;
        // 0x186a50: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a4c) {
            ctx->pc = 0x186A84u;
            goto label_186a84;
        }
    }
    ctx->pc = 0x186A54u;
label_186a54:
    // 0x186a54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186a58:
    // 0x186a58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186a5c:
    // 0x186a5c: 0x0  nop
    ctx->pc = 0x186a5cu;
    // NOP
label_186a60:
    // 0x186a60: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x186a60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186a64:
    // 0x186a64: 0x0  nop
    ctx->pc = 0x186a64u;
    // NOP
label_186a68:
    // 0x186a68: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_186a6c:
    if (ctx->pc == 0x186A6Cu) {
        ctx->pc = 0x186A70u;
        goto label_186a70;
    }
    ctx->pc = 0x186A68u;
    {
        const bool branch_taken_0x186a68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186a68) {
            ctx->pc = 0x186A84u;
            goto label_186a84;
        }
    }
    ctx->pc = 0x186A70u;
label_186a70:
    // 0x186a70: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_186a74:
    // 0x186a74: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186a78:
    // 0x186a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186a7c:
    // 0x186a7c: 0x10000001  b           . + 4 + (0x1 << 2)
label_186a80:
    if (ctx->pc == 0x186A80u) {
        ctx->pc = 0x186A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A7Cu;
        // 0x186a80: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A84u;
        goto label_186a84;
    }
    ctx->pc = 0x186A7Cu;
    {
        const bool branch_taken_0x186a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A7Cu;
        // 0x186a80: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a7c) {
            ctx->pc = 0x186A84u;
            goto label_186a84;
        }
    }
    ctx->pc = 0x186A84u;
label_186a84:
    // 0x186a84: 0xc06d448  jal         func_1B5120
label_186a88:
    if (ctx->pc == 0x186A88u) {
        ctx->pc = 0x186A8Cu;
        goto label_186a8c;
    }
    ctx->pc = 0x186A84u;
    SET_GPR_U32(ctx, 31, 0x186A8Cu);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x186A8Cu;
label_186a8c:
    // 0x186a8c: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x186a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_186a90:
    // 0x186a90: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_186a94:
    // 0x186a94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x186a94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_186a98:
    // 0x186a98: 0x0  nop
    ctx->pc = 0x186a98u;
    // NOP
label_186a9c:
    // 0x186a9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x186a9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186aa0:
    // 0x186aa0: 0x0  nop
    ctx->pc = 0x186aa0u;
    // NOP
label_186aa4:
    // 0x186aa4: 0x45010046  bc1t        . + 4 + (0x46 << 2)
label_186aa8:
    if (ctx->pc == 0x186AA8u) {
        ctx->pc = 0x186AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AA4u;
        // 0x186aa8: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186AACu;
        goto label_186aac;
    }
    ctx->pc = 0x186AA4u;
    {
        const bool branch_taken_0x186aa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x186AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AA4u;
        // 0x186aa8: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186aa4) {
            ctx->pc = 0x186BC0u;
            goto label_186bc0;
        }
    }
    ctx->pc = 0x186AACu;
label_186aac:
    // 0x186aac: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x186aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_186ab0:
    // 0x186ab0: 0xc0439e8  jal         func_10E7A0
label_186ab4:
    if (ctx->pc == 0x186AB4u) {
        ctx->pc = 0x186AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AB0u;
        // 0x186ab4: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186AB8u;
        goto label_186ab8;
    }
    ctx->pc = 0x186AB0u;
    SET_GPR_U32(ctx, 31, 0x186AB8u);
    ctx->pc = 0x186AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186AB0u;
    // 0x186ab4: 0x26060150  addiu       $a2, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x186AB0u, 0x186AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186AB8u;
label_186ab8:
    // 0x186ab8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_186abc:
    if (ctx->pc == 0x186ABCu) {
        ctx->pc = 0x186AC0u;
        goto label_186ac0;
    }
    ctx->pc = 0x186AB8u;
    {
        const bool branch_taken_0x186ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186ab8) {
            ctx->pc = 0x186AC8u;
            goto label_186ac8;
        }
    }
    ctx->pc = 0x186AC0u;
label_186ac0:
    // 0x186ac0: 0x10000020  b           . + 4 + (0x20 << 2)
label_186ac4:
    if (ctx->pc == 0x186AC4u) {
        ctx->pc = 0x186AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AC0u;
        // 0x186ac4: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186AC8u;
        goto label_186ac8;
    }
    ctx->pc = 0x186AC0u;
    {
        const bool branch_taken_0x186ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AC0u;
        // 0x186ac4: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ac0) {
            ctx->pc = 0x186B44u;
            goto label_186b44;
        }
    }
    ctx->pc = 0x186AC8u;
label_186ac8:
    // 0x186ac8: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x186ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_186acc:
    // 0x186acc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x186accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_186ad0:
    // 0x186ad0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x186ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186ad4:
    // 0x186ad4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186ad8:
    // 0x186ad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186adc:
    // 0x186adc: 0x0  nop
    ctx->pc = 0x186adcu;
    // NOP
label_186ae0:
    // 0x186ae0: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x186ae0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_186ae4:
    // 0x186ae4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x186ae4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186ae8:
    // 0x186ae8: 0x0  nop
    ctx->pc = 0x186ae8u;
    // NOP
label_186aec:
    // 0x186aec: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_186af0:
    if (ctx->pc == 0x186AF0u) {
        ctx->pc = 0x186AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AECu;
        // 0x186af0: 0xe7ac0048  swc1        $f12, 0x48($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x186AF4u;
        goto label_186af4;
    }
    ctx->pc = 0x186AECu;
    {
        const bool branch_taken_0x186aec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x186AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AECu;
        // 0x186af0: 0xe7ac0048  swc1        $f12, 0x48($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x186aec) {
            ctx->pc = 0x186B08u;
            goto label_186b08;
        }
    }
    ctx->pc = 0x186AF4u;
label_186af4:
    // 0x186af4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_186af8:
    // 0x186af8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186afc:
    // 0x186afc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186b00:
    // 0x186b00: 0x1000000d  b           . + 4 + (0xD << 2)
label_186b04:
    if (ctx->pc == 0x186B04u) {
        ctx->pc = 0x186B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B00u;
        // 0x186b04: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B08u;
        goto label_186b08;
    }
    ctx->pc = 0x186B00u;
    {
        const bool branch_taken_0x186b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B00u;
        // 0x186b04: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b00) {
            ctx->pc = 0x186B38u;
            goto label_186b38;
        }
    }
    ctx->pc = 0x186B08u;
label_186b08:
    // 0x186b08: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x186b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_186b0c:
    // 0x186b0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186b10:
    // 0x186b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186b14:
    // 0x186b14: 0x0  nop
    ctx->pc = 0x186b14u;
    // NOP
label_186b18:
    // 0x186b18: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x186b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186b1c:
    // 0x186b1c: 0x0  nop
    ctx->pc = 0x186b1cu;
    // NOP
label_186b20:
    // 0x186b20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_186b24:
    if (ctx->pc == 0x186B24u) {
        ctx->pc = 0x186B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B20u;
        // 0x186b24: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B28u;
        goto label_186b28;
    }
    ctx->pc = 0x186B20u;
    {
        const bool branch_taken_0x186b20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x186B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B20u;
        // 0x186b24: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b20) {
            ctx->pc = 0x186B38u;
            goto label_186b38;
        }
    }
    ctx->pc = 0x186B28u;
label_186b28:
    // 0x186b28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x186b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_186b2c:
    // 0x186b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186b30:
    // 0x186b30: 0x10000001  b           . + 4 + (0x1 << 2)
label_186b34:
    if (ctx->pc == 0x186B34u) {
        ctx->pc = 0x186B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B30u;
        // 0x186b34: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B38u;
        goto label_186b38;
    }
    ctx->pc = 0x186B30u;
    {
        const bool branch_taken_0x186b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B30u;
        // 0x186b34: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b30) {
            ctx->pc = 0x186B38u;
            goto label_186b38;
        }
    }
    ctx->pc = 0x186B38u;
label_186b38:
    // 0x186b38: 0xc06d448  jal         func_1B5120
label_186b3c:
    if (ctx->pc == 0x186B3Cu) {
        ctx->pc = 0x186B40u;
        goto label_186b40;
    }
    ctx->pc = 0x186B38u;
    SET_GPR_U32(ctx, 31, 0x186B40u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x186B40u;
label_186b40:
    // 0x186b40: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x186b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_186b44:
    // 0x186b44: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x186b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186b48:
    // 0x186b48: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x186b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_186b4c:
    // 0x186b4c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_186b50:
    // 0x186b50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186b50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186b54:
    // 0x186b54: 0x0  nop
    ctx->pc = 0x186b54u;
    // NOP
label_186b58:
    // 0x186b58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x186b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_186b5c:
    // 0x186b5c: 0x0  nop
    ctx->pc = 0x186b5cu;
    // NOP
label_186b60:
    // 0x186b60: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_186b64:
    if (ctx->pc == 0x186B64u) {
        ctx->pc = 0x186B68u;
        goto label_186b68;
    }
    ctx->pc = 0x186B60u;
    {
        const bool branch_taken_0x186b60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186b60) {
            ctx->pc = 0x186B7Cu;
            goto label_186b7c;
        }
    }
    ctx->pc = 0x186B68u;
label_186b68:
    // 0x186b68: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x186b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_186b6c:
    // 0x186b6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_186b70:
    // 0x186b70: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x186b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_186b74:
    // 0x186b74: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_186b78:
    if (ctx->pc == 0x186B78u) {
        ctx->pc = 0x186B7Cu;
        goto label_186b7c;
    }
    ctx->pc = 0x186B74u;
    {
        const bool branch_taken_0x186b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186b74) {
            ctx->pc = 0x186BB4u;
            goto label_186bb4;
        }
    }
    ctx->pc = 0x186B7Cu;
label_186b7c:
    // 0x186b7c: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x186b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186b80:
    // 0x186b80: 0xc6400150  lwc1        $f0, 0x150($s2)
    ctx->pc = 0x186b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186b84:
    // 0x186b84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186b84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_186b88:
    // 0x186b88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186b88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_186b8c:
    // 0x186b8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186b8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_186b90:
    // 0x186b90: 0x0  nop
    ctx->pc = 0x186b90u;
    // NOP
label_186b94:
    // 0x186b94: 0xa643019c  sh          $v1, 0x19C($s2)
    ctx->pc = 0x186b94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 3));
label_186b98:
    // 0x186b98: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x186b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186b9c:
    // 0x186b9c: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x186b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186ba0:
    // 0x186ba0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186ba0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_186ba4:
    // 0x186ba4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186ba4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_186ba8:
    // 0x186ba8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186ba8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_186bac:
    // 0x186bac: 0x1000014c  b           . + 4 + (0x14C << 2)
label_186bb0:
    if (ctx->pc == 0x186BB0u) {
        ctx->pc = 0x186BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BACu;
        // 0x186bb0: 0xa643019e  sh          $v1, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186BB4u;
        goto label_186bb4;
    }
    ctx->pc = 0x186BACu;
    {
        const bool branch_taken_0x186bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BACu;
        // 0x186bb0: 0xa643019e  sh          $v1, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186bac) {
            ctx->pc = 0x1870E0u;
            { ctx->pc = 0x1870e0; return; }
        }
    }
    ctx->pc = 0x186BB4u;
label_186bb4:
    // 0x186bb4: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x186bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_186bb8:
    // 0x186bb8: 0x10000149  b           . + 4 + (0x149 << 2)
label_186bbc:
    if (ctx->pc == 0x186BBCu) {
        ctx->pc = 0x186BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BB8u;
        // 0x186bbc: 0xa640019c  sh          $zero, 0x19C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186BC0u;
        goto label_186bc0;
    }
    ctx->pc = 0x186BB8u;
    {
        const bool branch_taken_0x186bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BB8u;
        // 0x186bbc: 0xa640019c  sh          $zero, 0x19C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186bb8) {
            ctx->pc = 0x1870E0u;
            { ctx->pc = 0x1870e0; return; }
        }
    }
    ctx->pc = 0x186BC0u;
label_186bc0:
    // 0x186bc0: 0x9203022f  lbu         $v1, 0x22F($s0)
    ctx->pc = 0x186bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 559)));
label_186bc4:
    // 0x186bc4: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x186bc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_186bc8:
    // 0x186bc8: 0x1460005f  bnez        $v1, . + 4 + (0x5F << 2)
label_186bcc:
    if (ctx->pc == 0x186BCCu) {
        ctx->pc = 0x186BD0u;
        goto label_186bd0;
    }
    ctx->pc = 0x186BC8u;
    {
        const bool branch_taken_0x186bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186bc8) {
            ctx->pc = 0x186D48u;
            goto label_186d48;
        }
    }
    ctx->pc = 0x186BD0u;
label_186bd0:
    // 0x186bd0: 0x92030232  lbu         $v1, 0x232($s0)
    ctx->pc = 0x186bd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
label_186bd4:
    // 0x186bd4: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
label_186bd8:
    if (ctx->pc == 0x186BD8u) {
        ctx->pc = 0x186BDCu;
        goto label_186bdc;
    }
    ctx->pc = 0x186BD4u;
    {
        const bool branch_taken_0x186bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186bd4) {
            ctx->pc = 0x186D48u;
            goto label_186d48;
        }
    }
    ctx->pc = 0x186BDCu;
label_186bdc:
    // 0x186bdc: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x186bdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_186be0:
    // 0x186be0: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x186be0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_186be4:
    // 0x186be4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_186be8:
    if (ctx->pc == 0x186BE8u) {
        ctx->pc = 0x186BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BE4u;
        // 0x186be8: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186BECu;
        goto label_186bec;
    }
    ctx->pc = 0x186BE4u;
    {
        const bool branch_taken_0x186be4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x186BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BE4u;
        // 0x186be8: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186be4) {
            ctx->pc = 0x186BF8u;
            goto label_186bf8;
        }
    }
    ctx->pc = 0x186BECu;
label_186bec:
    // 0x186bec: 0x92430233  lbu         $v1, 0x233($s2)
    ctx->pc = 0x186becu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 563)));
label_186bf0:
    // 0x186bf0: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
label_186bf4:
    if (ctx->pc == 0x186BF4u) {
        ctx->pc = 0x186BF8u;
        goto label_186bf8;
    }
    ctx->pc = 0x186BF0u;
    {
        const bool branch_taken_0x186bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186bf0) {
            ctx->pc = 0x186D48u;
            goto label_186d48;
        }
    }
    ctx->pc = 0x186BF8u;
label_186bf8:
    // 0x186bf8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x186bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_186bfc:
    // 0x186bfc: 0xa6440224  sh          $a0, 0x224($s2)
    ctx->pc = 0x186bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 548), (uint16_t)GPR_U32(ctx, 4));
label_186c00:
    // 0x186c00: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x186c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_186c04:
    // 0x186c04: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x186c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_186c08:
    // 0x186c08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x186c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_186c0c:
    // 0x186c0c: 0xae430194  sw          $v1, 0x194($s2)
    ctx->pc = 0x186c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
label_186c10:
    // 0x186c10: 0x8643003c  lh          $v1, 0x3C($s2)
    ctx->pc = 0x186c10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_186c14:
    // 0x186c14: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x186c14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_186c18:
    // 0x186c18: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_186c1c:
    if (ctx->pc == 0x186C1Cu) {
        ctx->pc = 0x186C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C18u;
        // 0x186c1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C20u;
        goto label_186c20;
    }
    ctx->pc = 0x186C18u;
    {
        const bool branch_taken_0x186c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x186C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C18u;
        // 0x186c1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c18) {
            ctx->pc = 0x186C24u;
            goto label_186c24;
        }
    }
    ctx->pc = 0x186C20u;
label_186c20:
    // 0x186c20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x186c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186c24:
    // 0x186c24: 0x1460012e  bnez        $v1, . + 4 + (0x12E << 2)
label_186c28:
    if (ctx->pc == 0x186C28u) {
        ctx->pc = 0x186C2Cu;
        goto label_186c2c;
    }
    ctx->pc = 0x186C24u;
    {
        const bool branch_taken_0x186c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186c24) {
            ctx->pc = 0x1870E0u;
            { ctx->pc = 0x1870e0; return; }
        }
    }
    ctx->pc = 0x186C2Cu;
label_186c2c:
    // 0x186c2c: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x186c2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_186c30:
    // 0x186c30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x186c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186c34:
    // 0x186c34: 0x14660016  bne         $v1, $a2, . + 4 + (0x16 << 2)
label_186c38:
    if (ctx->pc == 0x186C38u) {
        ctx->pc = 0x186C3Cu;
        goto label_186c3c;
    }
    ctx->pc = 0x186C34u;
    {
        const bool branch_taken_0x186c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x186c34) {
            ctx->pc = 0x186C90u;
            goto label_186c90;
        }
    }
    ctx->pc = 0x186C3Cu;
label_186c3c:
    // 0x186c3c: 0x92440238  lbu         $a0, 0x238($s2)
    ctx->pc = 0x186c3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 568)));
label_186c40:
    // 0x186c40: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x186c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_186c44:
    // 0x186c44: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x186c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_186c48:
    // 0x186c48: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x186c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
label_186c4c:
    // 0x186c4c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x186c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_186c50:
    // 0x186c50: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x186c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_186c54:
    // 0x186c54: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x186c54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_186c58:
    // 0x186c58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x186c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_186c5c:
    // 0x186c5c: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x186c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_186c60:
    // 0x186c60: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x186c60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_186c64:
    // 0x186c64: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_186c68:
    if (ctx->pc == 0x186C68u) {
        ctx->pc = 0x186C6Cu;
        goto label_186c6c;
    }
    ctx->pc = 0x186C64u;
    {
        const bool branch_taken_0x186c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c64) {
            ctx->pc = 0x186C90u;
            goto label_186c90;
        }
    }
    ctx->pc = 0x186C6Cu;
label_186c6c:
    // 0x186c6c: 0x9084006b  lbu         $a0, 0x6B($a0)
    ctx->pc = 0x186c6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
label_186c70:
    // 0x186c70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x186c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_186c74:
    // 0x186c74: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_186c78:
    if (ctx->pc == 0x186C78u) {
        ctx->pc = 0x186C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C74u;
        // 0x186c78: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C7Cu;
        goto label_186c7c;
    }
    ctx->pc = 0x186C74u;
    {
        const bool branch_taken_0x186c74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x186C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C74u;
        // 0x186c78: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c74) {
            ctx->pc = 0x186C90u;
            goto label_186c90;
        }
    }
    ctx->pc = 0x186C7Cu;
label_186c7c:
    // 0x186c7c: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x186c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_186c80:
    // 0x186c80: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x186c80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_186c84:
    // 0x186c84: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_186c88:
    if (ctx->pc == 0x186C88u) {
        ctx->pc = 0x186C8Cu;
        goto label_186c8c;
    }
    ctx->pc = 0x186C84u;
    {
        const bool branch_taken_0x186c84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x186c84) {
            ctx->pc = 0x186C90u;
            goto label_186c90;
        }
    }
    ctx->pc = 0x186C8Cu;
label_186c8c:
    // 0x186c8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x186c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186c90:
    // 0x186c90: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_186c94:
    if (ctx->pc == 0x186C94u) {
        ctx->pc = 0x186C98u;
        goto label_186c98;
    }
    ctx->pc = 0x186C90u;
    {
        const bool branch_taken_0x186c90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c90) {
            ctx->pc = 0x186CB4u;
            goto label_186cb4;
        }
    }
    ctx->pc = 0x186C98u;
label_186c98:
    // 0x186c98: 0x8242023d  lb          $v0, 0x23D($s2)
    ctx->pc = 0x186c98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_186c9c:
    // 0x186c9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x186c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_186ca0:
    // 0x186ca0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x186ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_186ca4:
    // 0x186ca4: 0xc062948  jal         func_18A520
label_186ca8:
    if (ctx->pc == 0x186CA8u) {
        ctx->pc = 0x186CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CA4u;
        // 0x186ca8: 0xa242023d  sb          $v0, 0x23D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186CACu;
        goto label_186cac;
    }
    ctx->pc = 0x186CA4u;
    SET_GPR_U32(ctx, 31, 0x186CACu);
    ctx->pc = 0x186CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CA4u;
    // 0x186ca8: 0xa242023d  sb          $v0, 0x23D($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    { ctx->pc = 0x18a520; return; }
    ctx->pc = 0x186CACu;
label_186cac:
    // 0x186cac: 0x10000009  b           . + 4 + (0x9 << 2)
label_186cb0:
    if (ctx->pc == 0x186CB0u) {
        ctx->pc = 0x186CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CACu;
        // 0x186cb0: 0x86430224  lh          $v1, 0x224($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186CB4u;
        goto label_186cb4;
    }
    ctx->pc = 0x186CACu;
    {
        const bool branch_taken_0x186cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CACu;
        // 0x186cb0: 0x86430224  lh          $v1, 0x224($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186cac) {
            ctx->pc = 0x186CD4u;
            goto label_186cd4;
        }
    }
    ctx->pc = 0x186CB4u;
label_186cb4:
    // 0x186cb4: 0x8e440194  lw          $a0, 0x194($s2)
    ctx->pc = 0x186cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_186cb8:
    // 0x186cb8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x186cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_186cbc:
    // 0x186cbc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x186cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_186cc0:
    // 0x186cc0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x186cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_186cc4:
    // 0x186cc4: 0xae430194  sw          $v1, 0x194($s2)
    ctx->pc = 0x186cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 3));
label_186cc8:
    // 0x186cc8: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x186cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_186ccc:
    // 0x186ccc: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x186cccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_186cd0:
    // 0x186cd0: 0x86430224  lh          $v1, 0x224($s2)
    ctx->pc = 0x186cd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 548)));
label_186cd4:
    // 0x186cd4: 0x1c600102  bgtz        $v1, . + 4 + (0x102 << 2)
label_186cd8:
    if (ctx->pc == 0x186CD8u) {
        ctx->pc = 0x186CDCu;
        goto label_186cdc;
    }
    ctx->pc = 0x186CD4u;
    {
        const bool branch_taken_0x186cd4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x186cd4) {
            ctx->pc = 0x1870E0u;
            { ctx->pc = 0x1870e0; return; }
        }
    }
    ctx->pc = 0x186CDCu;
label_186cdc:
    // 0x186cdc: 0x8242023d  lb          $v0, 0x23D($s2)
    ctx->pc = 0x186cdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_186ce0:
    // 0x186ce0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x186ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_186ce4:
    // 0x186ce4: 0xc08f0cc  jal         func_23C330
label_186ce8:
    if (ctx->pc == 0x186CE8u) {
        ctx->pc = 0x186CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CE4u;
        // 0x186ce8: 0xa242023d  sb          $v0, 0x23D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186CECu;
        goto label_186cec;
    }
    ctx->pc = 0x186CE4u;
    SET_GPR_U32(ctx, 31, 0x186CECu);
    ctx->pc = 0x186CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CE4u;
    // 0x186ce8: 0xa242023d  sb          $v0, 0x23D($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x186CECu;
label_186cec:
    // 0x186cec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_186cf0:
    // 0x186cf0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x186cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_186cf4:
    // 0x186cf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186cf8:
    // 0x186cf8: 0x92450230  lbu         $a1, 0x230($s2)
    ctx->pc = 0x186cf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_186cfc:
    // 0x186cfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x186cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_186d00:
    // 0x186d00: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x186d00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
label_186d04:
    // 0x186d04: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x186d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_186d08:
    // 0x186d08: 0x24632b15  addiu       $v1, $v1, 0x2B15
    ctx->pc = 0x186d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11029));
label_186d0c:
    // 0x186d0c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x186d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_186d10:
    // 0x186d10: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x186d10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_186d14:
    // 0x186d14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x186d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_186d18:
    // 0x186d18: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x186d18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_186d1c:
    // 0x186d1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x186d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_186d20:
    // 0x186d20: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x186d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_186d24:
    // 0x186d24: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x186d24u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186d28:
    // 0x186d28: 0x0  nop
    ctx->pc = 0x186d28u;
    // NOP
label_186d2c:
    // 0x186d2c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x186d2cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_186d30:
    // 0x186d30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186d30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_186d34:
    // 0x186d34: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x186d34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_186d38:
    // 0x186d38: 0x0  nop
    ctx->pc = 0x186d38u;
    // NOP
label_186d3c:
    // 0x186d3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x186d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_186d40:
    // 0x186d40: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_186d44:
    if (ctx->pc == 0x186D44u) {
        ctx->pc = 0x186D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D40u;
        // 0x186d44: 0xa6430224  sh          $v1, 0x224($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 548), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D48u;
        goto label_186d48;
    }
    ctx->pc = 0x186D40u;
    {
        const bool branch_taken_0x186d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D40u;
        // 0x186d44: 0xa6430224  sh          $v1, 0x224($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 548), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d40) {
            ctx->pc = 0x1870E0u;
            { ctx->pc = 0x1870e0; return; }
        }
    }
    ctx->pc = 0x186D48u;
label_186d48:
    // 0x186d48: 0x9243023c  lbu         $v1, 0x23C($s2)
    ctx->pc = 0x186d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 572)));
label_186d4c:
    // 0x186d4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x186d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_186d50:
    // 0x186d50: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_186d54:
    if (ctx->pc == 0x186D54u) {
        ctx->pc = 0x186D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D50u;
        // 0x186d54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D58u;
        goto label_186d58;
    }
    ctx->pc = 0x186D50u;
    {
        const bool branch_taken_0x186d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x186D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D50u;
        // 0x186d54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d50) {
            ctx->pc = 0x186D70u;
            goto label_186d70;
        }
    }
    ctx->pc = 0x186D58u;
label_186d58:
    // 0x186d58: 0x9206023f  lbu         $a2, 0x23F($s0)
    ctx->pc = 0x186d58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 575)));
label_186d5c:
    // 0x186d5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x186d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_186d60:
    // 0x186d60: 0xc06261c  jal         func_189870
label_186d64:
    if (ctx->pc == 0x186D64u) {
        ctx->pc = 0x186D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D60u;
        // 0x186d64: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D68u;
        goto label_186d68;
    }
    ctx->pc = 0x186D60u;
    SET_GPR_U32(ctx, 31, 0x186D68u);
    ctx->pc = 0x186D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186D60u;
    // 0x186d64: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189870u;
    { ctx->pc = 0x189870; return; }
    ctx->pc = 0x186D68u;
label_186d68:
    // 0x186d68: 0x100000dd  b           . + 4 + (0xDD << 2)
label_186d6c:
    if (ctx->pc == 0x186D6Cu) {
        ctx->pc = 0x186D70u;
        goto label_186d70;
    }
    ctx->pc = 0x186D68u;
    {
        const bool branch_taken_0x186d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186d68) {
            ctx->pc = 0x1870E0u;
            { ctx->pc = 0x1870e0; return; }
        }
    }
    ctx->pc = 0x186D70u;
label_186d70:
    // 0x186d70: 0x146200a8  bne         $v1, $v0, . + 4 + (0xA8 << 2)
label_186d74:
    if (ctx->pc == 0x186D74u) {
        ctx->pc = 0x186D78u;
        goto label_186d78;
    }
    ctx->pc = 0x186D70u;
    {
        const bool branch_taken_0x186d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x186d70) {
            ctx->pc = 0x187014u;
            { ctx->pc = 0x187014; return; }
        }
    }
    ctx->pc = 0x186D78u;
label_186d78:
    // 0x186d78: 0x9206023f  lbu         $a2, 0x23F($s0)
    ctx->pc = 0x186d78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 575)));
label_186d7c:
    // 0x186d7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x186d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_186d80:
    // 0x186d80: 0xc06261c  jal         func_189870
label_186d84:
    if (ctx->pc == 0x186D84u) {
        ctx->pc = 0x186D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D80u;
        // 0x186d84: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D88u;
        goto label_186d88;
    }
    ctx->pc = 0x186D80u;
    SET_GPR_U32(ctx, 31, 0x186D88u);
    ctx->pc = 0x186D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186D80u;
    // 0x186d84: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189870u;
    { ctx->pc = 0x189870; return; }
    ctx->pc = 0x186D88u;
label_186d88:
    // 0x186d88: 0x9243023d  lbu         $v1, 0x23D($s2)
    ctx->pc = 0x186d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_186d8c:
    // 0x186d8c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x186d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_186d90:
    // 0x186d90: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_186d94:
    if (ctx->pc == 0x186D94u) {
        ctx->pc = 0x186D98u;
        goto label_186d98;
    }
    ctx->pc = 0x186D90u;
    {
        const bool branch_taken_0x186d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186d90) {
            ctx->pc = 0x186E40u;
            { ctx->pc = 0x186e40; return; }
        }
    }
    ctx->pc = 0x186D98u;
label_186d98:
    // 0x186d98: 0x9643022c  lhu         $v1, 0x22C($s2)
    ctx->pc = 0x186d98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 556)));
label_186d9c:
    // 0x186d9c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x186d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_186da0:
    // 0x186da0: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_186da4:
    if (ctx->pc == 0x186DA4u) {
        ctx->pc = 0x186DA8u;
        goto label_186da8;
    }
    ctx->pc = 0x186DA0u;
    {
        const bool branch_taken_0x186da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186da0) {
            ctx->pc = 0x186E34u;
            { ctx->pc = 0x186e34; return; }
        }
    }
    ctx->pc = 0x186DA8u;
label_186da8:
    // 0x186da8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x186da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_186dac:
    // 0x186dac: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x186dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_186db0:
    // 0x186db0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x186db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_186db4:
    // 0x186db4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x186db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_186db8:
    // 0x186db8: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_186dbc:
    if (ctx->pc == 0x186DBCu) {
        ctx->pc = 0x186DC0u;
        goto label_186dc0;
    }
    ctx->pc = 0x186DB8u;
    {
        const bool branch_taken_0x186db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186db8) {
            ctx->pc = 0x186E34u;
            { ctx->pc = 0x186e34; return; }
        }
    }
    ctx->pc = 0x186DC0u;
label_186dc0:
    // 0x186dc0: 0xc08f0cc  jal         func_23C330
label_186dc4:
    if (ctx->pc == 0x186DC4u) {
        ctx->pc = 0x186DC8u;
        goto label_186dc8;
    }
    ctx->pc = 0x186DC0u;
    SET_GPR_U32(ctx, 31, 0x186DC8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x186DC8u;
label_186dc8:
    // 0x186dc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_186dcc:
    // 0x186dcc: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x186dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_186dd0:
    // 0x186dd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186dd4:
    // 0x186dd4: 0x92450232  lbu         $a1, 0x232($s2)
    ctx->pc = 0x186dd4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_186dd8:
    // 0x186dd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x186dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_186ddc:
    // 0x186ddc: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x186ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
label_186de0:
    // 0x186de0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x186de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_186de4:
    // 0x186de4: 0x24632b14  addiu       $v1, $v1, 0x2B14
    ctx->pc = 0x186de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11028));
label_186de8:
    // 0x186de8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x186de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_186dec:
    // 0x186dec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x186decu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_186df0:
    // 0x186df0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x186df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_186df4:
    // 0x186df4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x186df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_186df8:
    // 0x186df8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x186df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_186dfc:
    // 0x186dfc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x186dfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_186e00:
    // 0x186e00: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x186e00u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186e04:
    // 0x186e04: 0x0  nop
    ctx->pc = 0x186e04u;
    // NOP
label_186e08:
    // 0x186e08: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x186e08u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_186e0c:
    // 0x186e0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186e0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    ctx->pc = 0x186e10u;
    return;
}

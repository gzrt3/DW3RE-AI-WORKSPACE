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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part482(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2866a0u: goto label_2866a0;
        case 0x2866a4u: goto label_2866a4;
        case 0x2866a8u: goto label_2866a8;
        case 0x2866acu: goto label_2866ac;
        case 0x2866b0u: goto label_2866b0;
        case 0x2866b4u: goto label_2866b4;
        case 0x2866b8u: goto label_2866b8;
        case 0x2866bcu: goto label_2866bc;
        case 0x2866c0u: goto label_2866c0;
        case 0x2866c4u: goto label_2866c4;
        case 0x2866c8u: goto label_2866c8;
        case 0x2866ccu: goto label_2866cc;
        case 0x2866d0u: goto label_2866d0;
        case 0x2866d4u: goto label_2866d4;
        case 0x2866d8u: goto label_2866d8;
        case 0x2866dcu: goto label_2866dc;
        case 0x2866e0u: goto label_2866e0;
        case 0x2866e4u: goto label_2866e4;
        case 0x2866e8u: goto label_2866e8;
        case 0x2866ecu: goto label_2866ec;
        case 0x2866f0u: goto label_2866f0;
        case 0x2866f4u: goto label_2866f4;
        case 0x2866f8u: goto label_2866f8;
        case 0x2866fcu: goto label_2866fc;
        case 0x286700u: goto label_286700;
        case 0x286704u: goto label_286704;
        case 0x286708u: goto label_286708;
        case 0x28670cu: goto label_28670c;
        case 0x286710u: goto label_286710;
        case 0x286714u: goto label_286714;
        case 0x286718u: goto label_286718;
        case 0x28671cu: goto label_28671c;
        case 0x286720u: goto label_286720;
        case 0x286724u: goto label_286724;
        case 0x286728u: goto label_286728;
        case 0x28672cu: goto label_28672c;
        case 0x286730u: goto label_286730;
        case 0x286734u: goto label_286734;
        case 0x286738u: goto label_286738;
        case 0x28673cu: goto label_28673c;
        case 0x286740u: goto label_286740;
        case 0x286744u: goto label_286744;
        case 0x286748u: goto label_286748;
        case 0x28674cu: goto label_28674c;
        case 0x286750u: goto label_286750;
        case 0x286754u: goto label_286754;
        case 0x286758u: goto label_286758;
        case 0x28675cu: goto label_28675c;
        case 0x286760u: goto label_286760;
        case 0x286764u: goto label_286764;
        case 0x286768u: goto label_286768;
        case 0x28676cu: goto label_28676c;
        case 0x286770u: goto label_286770;
        case 0x286774u: goto label_286774;
        case 0x286778u: goto label_286778;
        case 0x28677cu: goto label_28677c;
        case 0x286780u: goto label_286780;
        case 0x286784u: goto label_286784;
        case 0x286788u: goto label_286788;
        case 0x28678cu: goto label_28678c;
        case 0x286790u: goto label_286790;
        case 0x286794u: goto label_286794;
        case 0x286798u: goto label_286798;
        case 0x28679cu: goto label_28679c;
        case 0x2867a0u: goto label_2867a0;
        case 0x2867a4u: goto label_2867a4;
        case 0x2867a8u: goto label_2867a8;
        case 0x2867acu: goto label_2867ac;
        case 0x2867b0u: goto label_2867b0;
        case 0x2867b4u: goto label_2867b4;
        case 0x2867b8u: goto label_2867b8;
        case 0x2867bcu: goto label_2867bc;
        case 0x2867c0u: goto label_2867c0;
        case 0x2867c4u: goto label_2867c4;
        case 0x2867c8u: goto label_2867c8;
        case 0x2867ccu: goto label_2867cc;
        case 0x2867d0u: goto label_2867d0;
        case 0x2867d4u: goto label_2867d4;
        case 0x2867d8u: goto label_2867d8;
        case 0x2867dcu: goto label_2867dc;
        case 0x2867e0u: goto label_2867e0;
        case 0x2867e4u: goto label_2867e4;
        case 0x2867e8u: goto label_2867e8;
        case 0x2867ecu: goto label_2867ec;
        case 0x2867f0u: goto label_2867f0;
        case 0x2867f4u: goto label_2867f4;
        case 0x2867f8u: goto label_2867f8;
        case 0x2867fcu: goto label_2867fc;
        case 0x286800u: goto label_286800;
        case 0x286804u: goto label_286804;
        case 0x286808u: goto label_286808;
        case 0x28680cu: goto label_28680c;
        case 0x286810u: goto label_286810;
        case 0x286814u: goto label_286814;
        case 0x286818u: goto label_286818;
        case 0x28681cu: goto label_28681c;
        case 0x286820u: goto label_286820;
        case 0x286824u: goto label_286824;
        case 0x286828u: goto label_286828;
        case 0x28682cu: goto label_28682c;
        case 0x286830u: goto label_286830;
        case 0x286834u: goto label_286834;
        case 0x286838u: goto label_286838;
        case 0x28683cu: goto label_28683c;
        case 0x286840u: goto label_286840;
        case 0x286844u: goto label_286844;
        case 0x286848u: goto label_286848;
        case 0x28684cu: goto label_28684c;
        case 0x286850u: goto label_286850;
        case 0x286854u: goto label_286854;
        case 0x286858u: goto label_286858;
        case 0x28685cu: goto label_28685c;
        case 0x286860u: goto label_286860;
        case 0x286864u: goto label_286864;
        case 0x286868u: goto label_286868;
        case 0x28686cu: goto label_28686c;
        case 0x286870u: goto label_286870;
        case 0x286874u: goto label_286874;
        case 0x286878u: goto label_286878;
        case 0x28687cu: goto label_28687c;
        case 0x286880u: goto label_286880;
        case 0x286884u: goto label_286884;
        case 0x286888u: goto label_286888;
        case 0x28688cu: goto label_28688c;
        case 0x286890u: goto label_286890;
        case 0x286894u: goto label_286894;
        case 0x286898u: goto label_286898;
        case 0x28689cu: goto label_28689c;
        case 0x2868a0u: goto label_2868a0;
        case 0x2868a4u: goto label_2868a4;
        case 0x2868a8u: goto label_2868a8;
        case 0x2868acu: goto label_2868ac;
        case 0x2868b0u: goto label_2868b0;
        case 0x2868b4u: goto label_2868b4;
        case 0x2868b8u: goto label_2868b8;
        case 0x2868bcu: goto label_2868bc;
        case 0x2868c0u: goto label_2868c0;
        case 0x2868c4u: goto label_2868c4;
        case 0x2868c8u: goto label_2868c8;
        case 0x2868ccu: goto label_2868cc;
        case 0x2868d0u: goto label_2868d0;
        case 0x2868d4u: goto label_2868d4;
        case 0x2868d8u: goto label_2868d8;
        case 0x2868dcu: goto label_2868dc;
        case 0x2868e0u: goto label_2868e0;
        case 0x2868e4u: goto label_2868e4;
        case 0x2868e8u: goto label_2868e8;
        case 0x2868ecu: goto label_2868ec;
        case 0x2868f0u: goto label_2868f0;
        case 0x2868f4u: goto label_2868f4;
        case 0x2868f8u: goto label_2868f8;
        case 0x2868fcu: goto label_2868fc;
        case 0x286900u: goto label_286900;
        case 0x286904u: goto label_286904;
        case 0x286908u: goto label_286908;
        case 0x28690cu: goto label_28690c;
        case 0x286910u: goto label_286910;
        case 0x286914u: goto label_286914;
        case 0x286918u: goto label_286918;
        case 0x28691cu: goto label_28691c;
        case 0x286920u: goto label_286920;
        case 0x286924u: goto label_286924;
        case 0x286928u: goto label_286928;
        case 0x28692cu: goto label_28692c;
        case 0x286930u: goto label_286930;
        case 0x286934u: goto label_286934;
        case 0x286938u: goto label_286938;
        case 0x28693cu: goto label_28693c;
        case 0x286940u: goto label_286940;
        case 0x286944u: goto label_286944;
        case 0x286948u: goto label_286948;
        case 0x28694cu: goto label_28694c;
        case 0x286950u: goto label_286950;
        case 0x286954u: goto label_286954;
        case 0x286958u: goto label_286958;
        case 0x28695cu: goto label_28695c;
        case 0x286960u: goto label_286960;
        case 0x286964u: goto label_286964;
        case 0x286968u: goto label_286968;
        case 0x28696cu: goto label_28696c;
        case 0x286970u: goto label_286970;
        case 0x286974u: goto label_286974;
        case 0x286978u: goto label_286978;
        case 0x28697cu: goto label_28697c;
        case 0x286980u: goto label_286980;
        case 0x286984u: goto label_286984;
        case 0x286988u: goto label_286988;
        case 0x28698cu: goto label_28698c;
        case 0x286990u: goto label_286990;
        case 0x286994u: goto label_286994;
        case 0x286998u: goto label_286998;
        case 0x28699cu: goto label_28699c;
        case 0x2869a0u: goto label_2869a0;
        case 0x2869a4u: goto label_2869a4;
        case 0x2869a8u: goto label_2869a8;
        case 0x2869acu: goto label_2869ac;
        case 0x2869b0u: goto label_2869b0;
        case 0x2869b4u: goto label_2869b4;
        case 0x2869b8u: goto label_2869b8;
        case 0x2869bcu: goto label_2869bc;
        case 0x2869c0u: goto label_2869c0;
        case 0x2869c4u: goto label_2869c4;
        case 0x2869c8u: goto label_2869c8;
        case 0x2869ccu: goto label_2869cc;
        case 0x2869d0u: goto label_2869d0;
        case 0x2869d4u: goto label_2869d4;
        case 0x2869d8u: goto label_2869d8;
        case 0x2869dcu: goto label_2869dc;
        case 0x2869e0u: goto label_2869e0;
        case 0x2869e4u: goto label_2869e4;
        case 0x2869e8u: goto label_2869e8;
        case 0x2869ecu: goto label_2869ec;
        case 0x2869f0u: goto label_2869f0;
        case 0x2869f4u: goto label_2869f4;
        case 0x2869f8u: goto label_2869f8;
        case 0x2869fcu: goto label_2869fc;
        case 0x286a00u: goto label_286a00;
        case 0x286a04u: goto label_286a04;
        case 0x286a08u: goto label_286a08;
        case 0x286a0cu: goto label_286a0c;
        case 0x286a10u: goto label_286a10;
        case 0x286a14u: goto label_286a14;
        case 0x286a18u: goto label_286a18;
        case 0x286a1cu: goto label_286a1c;
        case 0x286a20u: goto label_286a20;
        case 0x286a24u: goto label_286a24;
        case 0x286a28u: goto label_286a28;
        case 0x286a2cu: goto label_286a2c;
        case 0x286a30u: goto label_286a30;
        case 0x286a34u: goto label_286a34;
        case 0x286a38u: goto label_286a38;
        case 0x286a3cu: goto label_286a3c;
        case 0x286a40u: goto label_286a40;
        case 0x286a44u: goto label_286a44;
        case 0x286a48u: goto label_286a48;
        case 0x286a4cu: goto label_286a4c;
        case 0x286a50u: goto label_286a50;
        case 0x286a54u: goto label_286a54;
        case 0x286a58u: goto label_286a58;
        case 0x286a5cu: goto label_286a5c;
        case 0x286a60u: goto label_286a60;
        case 0x286a64u: goto label_286a64;
        case 0x286a68u: goto label_286a68;
        case 0x286a6cu: goto label_286a6c;
        case 0x286a70u: goto label_286a70;
        case 0x286a74u: goto label_286a74;
        case 0x286a78u: goto label_286a78;
        case 0x286a7cu: goto label_286a7c;
        case 0x286a80u: goto label_286a80;
        case 0x286a84u: goto label_286a84;
        case 0x286a88u: goto label_286a88;
        case 0x286a8cu: goto label_286a8c;
        case 0x286a90u: goto label_286a90;
        case 0x286a94u: goto label_286a94;
        case 0x286a98u: goto label_286a98;
        case 0x286a9cu: goto label_286a9c;
        case 0x286aa0u: goto label_286aa0;
        case 0x286aa4u: goto label_286aa4;
        case 0x286aa8u: goto label_286aa8;
        case 0x286aacu: goto label_286aac;
        case 0x286ab0u: goto label_286ab0;
        case 0x286ab4u: goto label_286ab4;
        case 0x286ab8u: goto label_286ab8;
        case 0x286abcu: goto label_286abc;
        case 0x286ac0u: goto label_286ac0;
        case 0x286ac4u: goto label_286ac4;
        case 0x286ac8u: goto label_286ac8;
        case 0x286accu: goto label_286acc;
        case 0x286ad0u: goto label_286ad0;
        case 0x286ad4u: goto label_286ad4;
        case 0x286ad8u: goto label_286ad8;
        case 0x286adcu: goto label_286adc;
        case 0x286ae0u: goto label_286ae0;
        case 0x286ae4u: goto label_286ae4;
        case 0x286ae8u: goto label_286ae8;
        case 0x286aecu: goto label_286aec;
        case 0x286af0u: goto label_286af0;
        case 0x286af4u: goto label_286af4;
        case 0x286af8u: goto label_286af8;
        case 0x286afcu: goto label_286afc;
        case 0x286b00u: goto label_286b00;
        case 0x286b04u: goto label_286b04;
        case 0x286b08u: goto label_286b08;
        case 0x286b0cu: goto label_286b0c;
        case 0x286b10u: goto label_286b10;
        case 0x286b14u: goto label_286b14;
        case 0x286b18u: goto label_286b18;
        case 0x286b1cu: goto label_286b1c;
        case 0x286b20u: goto label_286b20;
        case 0x286b24u: goto label_286b24;
        case 0x286b28u: goto label_286b28;
        case 0x286b2cu: goto label_286b2c;
        case 0x286b30u: goto label_286b30;
        case 0x286b34u: goto label_286b34;
        case 0x286b38u: goto label_286b38;
        case 0x286b3cu: goto label_286b3c;
        case 0x286b40u: goto label_286b40;
        case 0x286b44u: goto label_286b44;
        case 0x286b48u: goto label_286b48;
        case 0x286b4cu: goto label_286b4c;
        case 0x286b50u: goto label_286b50;
        case 0x286b54u: goto label_286b54;
        case 0x286b58u: goto label_286b58;
        case 0x286b5cu: goto label_286b5c;
        case 0x286b60u: goto label_286b60;
        case 0x286b64u: goto label_286b64;
        case 0x286b68u: goto label_286b68;
        case 0x286b6cu: goto label_286b6c;
        case 0x286b70u: goto label_286b70;
        case 0x286b74u: goto label_286b74;
        case 0x286b78u: goto label_286b78;
        case 0x286b7cu: goto label_286b7c;
        case 0x286b80u: goto label_286b80;
        case 0x286b84u: goto label_286b84;
        case 0x286b88u: goto label_286b88;
        case 0x286b8cu: goto label_286b8c;
        case 0x286b90u: goto label_286b90;
        case 0x286b94u: goto label_286b94;
        case 0x286b98u: goto label_286b98;
        case 0x286b9cu: goto label_286b9c;
        case 0x286ba0u: goto label_286ba0;
        case 0x286ba4u: goto label_286ba4;
        case 0x286ba8u: goto label_286ba8;
        case 0x286bacu: goto label_286bac;
        case 0x286bb0u: goto label_286bb0;
        case 0x286bb4u: goto label_286bb4;
        case 0x286bb8u: goto label_286bb8;
        case 0x286bbcu: goto label_286bbc;
        case 0x286bc0u: goto label_286bc0;
        case 0x286bc4u: goto label_286bc4;
        case 0x286bc8u: goto label_286bc8;
        case 0x286bccu: goto label_286bcc;
        case 0x286bd0u: goto label_286bd0;
        case 0x286bd4u: goto label_286bd4;
        case 0x286bd8u: goto label_286bd8;
        case 0x286bdcu: goto label_286bdc;
        case 0x286be0u: goto label_286be0;
        case 0x286be4u: goto label_286be4;
        case 0x286be8u: goto label_286be8;
        case 0x286becu: goto label_286bec;
        case 0x286bf0u: goto label_286bf0;
        case 0x286bf4u: goto label_286bf4;
        case 0x286bf8u: goto label_286bf8;
        case 0x286bfcu: goto label_286bfc;
        case 0x286c00u: goto label_286c00;
        case 0x286c04u: goto label_286c04;
        case 0x286c08u: goto label_286c08;
        case 0x286c0cu: goto label_286c0c;
        case 0x286c10u: goto label_286c10;
        case 0x286c14u: goto label_286c14;
        case 0x286c18u: goto label_286c18;
        case 0x286c1cu: goto label_286c1c;
        case 0x286c20u: goto label_286c20;
        case 0x286c24u: goto label_286c24;
        case 0x286c28u: goto label_286c28;
        case 0x286c2cu: goto label_286c2c;
        case 0x286c30u: goto label_286c30;
        case 0x286c34u: goto label_286c34;
        case 0x286c38u: goto label_286c38;
        case 0x286c3cu: goto label_286c3c;
        case 0x286c40u: goto label_286c40;
        case 0x286c44u: goto label_286c44;
        case 0x286c48u: goto label_286c48;
        case 0x286c4cu: goto label_286c4c;
        case 0x286c50u: goto label_286c50;
        case 0x286c54u: goto label_286c54;
        case 0x286c58u: goto label_286c58;
        case 0x286c5cu: goto label_286c5c;
        case 0x286c60u: goto label_286c60;
        case 0x286c64u: goto label_286c64;
        case 0x286c68u: goto label_286c68;
        case 0x286c6cu: goto label_286c6c;
        case 0x286c70u: goto label_286c70;
        case 0x286c74u: goto label_286c74;
        case 0x286c78u: goto label_286c78;
        case 0x286c7cu: goto label_286c7c;
        case 0x286c80u: goto label_286c80;
        case 0x286c84u: goto label_286c84;
        case 0x286c88u: goto label_286c88;
        case 0x286c8cu: goto label_286c8c;
        case 0x286c90u: goto label_286c90;
        case 0x286c94u: goto label_286c94;
        case 0x286c98u: goto label_286c98;
        case 0x286c9cu: goto label_286c9c;
        case 0x286ca0u: goto label_286ca0;
        case 0x286ca4u: goto label_286ca4;
        case 0x286ca8u: goto label_286ca8;
        case 0x286cacu: goto label_286cac;
        case 0x286cb0u: goto label_286cb0;
        case 0x286cb4u: goto label_286cb4;
        case 0x286cb8u: goto label_286cb8;
        case 0x286cbcu: goto label_286cbc;
        case 0x286cc0u: goto label_286cc0;
        case 0x286cc4u: goto label_286cc4;
        case 0x286cc8u: goto label_286cc8;
        case 0x286cccu: goto label_286ccc;
        case 0x286cd0u: goto label_286cd0;
        case 0x286cd4u: goto label_286cd4;
        case 0x286cd8u: goto label_286cd8;
        case 0x286cdcu: goto label_286cdc;
        case 0x286ce0u: goto label_286ce0;
        case 0x286ce4u: goto label_286ce4;
        case 0x286ce8u: goto label_286ce8;
        case 0x286cecu: goto label_286cec;
        case 0x286cf0u: goto label_286cf0;
        case 0x286cf4u: goto label_286cf4;
        case 0x286cf8u: goto label_286cf8;
        case 0x286cfcu: goto label_286cfc;
        case 0x286d00u: goto label_286d00;
        case 0x286d04u: goto label_286d04;
        case 0x286d08u: goto label_286d08;
        case 0x286d0cu: goto label_286d0c;
        case 0x286d10u: goto label_286d10;
        case 0x286d14u: goto label_286d14;
        case 0x286d18u: goto label_286d18;
        case 0x286d1cu: goto label_286d1c;
        case 0x286d20u: goto label_286d20;
        case 0x286d24u: goto label_286d24;
        case 0x286d28u: goto label_286d28;
        case 0x286d2cu: goto label_286d2c;
        case 0x286d30u: goto label_286d30;
        case 0x286d34u: goto label_286d34;
        case 0x286d38u: goto label_286d38;
        case 0x286d3cu: goto label_286d3c;
        case 0x286d40u: goto label_286d40;
        case 0x286d44u: goto label_286d44;
        case 0x286d48u: goto label_286d48;
        case 0x286d4cu: goto label_286d4c;
        case 0x286d50u: goto label_286d50;
        case 0x286d54u: goto label_286d54;
        case 0x286d58u: goto label_286d58;
        case 0x286d5cu: goto label_286d5c;
        case 0x286d60u: goto label_286d60;
        case 0x286d64u: goto label_286d64;
        case 0x286d68u: goto label_286d68;
        case 0x286d6cu: goto label_286d6c;
        case 0x286d70u: goto label_286d70;
        case 0x286d74u: goto label_286d74;
        case 0x286d78u: goto label_286d78;
        case 0x286d7cu: goto label_286d7c;
        case 0x286d80u: goto label_286d80;
        case 0x286d84u: goto label_286d84;
        case 0x286d88u: goto label_286d88;
        case 0x286d8cu: goto label_286d8c;
        case 0x286d90u: goto label_286d90;
        case 0x286d94u: goto label_286d94;
        case 0x286d98u: goto label_286d98;
        case 0x286d9cu: goto label_286d9c;
        case 0x286da0u: goto label_286da0;
        case 0x286da4u: goto label_286da4;
        case 0x286da8u: goto label_286da8;
        case 0x286dacu: goto label_286dac;
        case 0x286db0u: goto label_286db0;
        case 0x286db4u: goto label_286db4;
        case 0x286db8u: goto label_286db8;
        case 0x286dbcu: goto label_286dbc;
        case 0x286dc0u: goto label_286dc0;
        case 0x286dc4u: goto label_286dc4;
        case 0x286dc8u: goto label_286dc8;
        case 0x286dccu: goto label_286dcc;
        case 0x286dd0u: goto label_286dd0;
        case 0x286dd4u: goto label_286dd4;
        case 0x286dd8u: goto label_286dd8;
        case 0x286ddcu: goto label_286ddc;
        case 0x286de0u: goto label_286de0;
        case 0x286de4u: goto label_286de4;
        case 0x286de8u: goto label_286de8;
        case 0x286decu: goto label_286dec;
        case 0x286df0u: goto label_286df0;
        case 0x286df4u: goto label_286df4;
        case 0x286df8u: goto label_286df8;
        case 0x286dfcu: goto label_286dfc;
        case 0x286e00u: goto label_286e00;
        case 0x286e04u: goto label_286e04;
        case 0x286e08u: goto label_286e08;
        case 0x286e0cu: goto label_286e0c;
        case 0x286e10u: goto label_286e10;
        case 0x286e14u: goto label_286e14;
        case 0x286e18u: goto label_286e18;
        case 0x286e1cu: goto label_286e1c;
        case 0x286e20u: goto label_286e20;
        case 0x286e24u: goto label_286e24;
        case 0x286e28u: goto label_286e28;
        case 0x286e2cu: goto label_286e2c;
        case 0x286e30u: goto label_286e30;
        case 0x286e34u: goto label_286e34;
        case 0x286e38u: goto label_286e38;
        case 0x286e3cu: goto label_286e3c;
        case 0x286e40u: goto label_286e40;
        case 0x286e44u: goto label_286e44;
        case 0x286e48u: goto label_286e48;
        case 0x286e4cu: goto label_286e4c;
        case 0x286e50u: goto label_286e50;
        case 0x286e54u: goto label_286e54;
        case 0x286e58u: goto label_286e58;
        case 0x286e5cu: goto label_286e5c;
        case 0x286e60u: goto label_286e60;
        case 0x286e64u: goto label_286e64;
        case 0x286e68u: goto label_286e68;
        case 0x286e6cu: goto label_286e6c;
        default: return;
    }

label_2866a0:
    // 0x2866a0: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x2866a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_2866a4:
    // 0x2866a4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2866a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2866a8:
    // 0x2866a8: 0x8c624760  lw          $v0, 0x4760($v1)
    ctx->pc = 0x2866a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18272)));
label_2866ac:
    // 0x2866ac: 0x40f809  jalr        $v0
label_2866b0:
    if (ctx->pc == 0x2866B0u) {
        ctx->pc = 0x2866B4u;
        goto label_2866b4;
    }
    ctx->pc = 0x2866ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2866B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2866ACu, 0x2866B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2866B4u;
label_2866b4:
    // 0x2866b4: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x2866b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_2866b8:
    // 0x2866b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2866b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2866bc:
    // 0x2866bc: 0x8c434764  lw          $v1, 0x4764($v0)
    ctx->pc = 0x2866bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18276)));
label_2866c0:
    // 0x2866c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2866c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2866c4:
    // 0x2866c4: 0x60f809  jalr        $v1
label_2866c8:
    if (ctx->pc == 0x2866C8u) {
        ctx->pc = 0x2866C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866C4u;
        // 0x2866c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2866CCu;
        goto label_2866cc;
    }
    ctx->pc = 0x2866C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2866CCu);
        ctx->pc = 0x2866C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866C4u;
        // 0x2866c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2866C4u, 0x2866CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2866CCu;
label_2866cc:
    // 0x2866cc: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x2866ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_2866d0:
    // 0x2866d0: 0x8c43474c  lw          $v1, 0x474C($v0)
    ctx->pc = 0x2866d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18252)));
label_2866d4:
    // 0x2866d4: 0x60f809  jalr        $v1
label_2866d8:
    if (ctx->pc == 0x2866D8u) {
        ctx->pc = 0x2866D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866D4u;
        // 0x2866d8: 0x3404dffd  ori         $a0, $zero, 0xDFFD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57341);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2866DCu;
        goto label_2866dc;
    }
    ctx->pc = 0x2866D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2866DCu);
        ctx->pc = 0x2866D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866D4u;
        // 0x2866d8: 0x3404dffd  ori         $a0, $zero, 0xDFFD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57341);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2866D4u, 0x2866DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2866DCu;
label_2866dc:
    // 0x2866dc: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x2866dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_2866e0:
    // 0x2866e0: 0x8c434750  lw          $v1, 0x4750($v0)
    ctx->pc = 0x2866e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18256)));
label_2866e4:
    // 0x2866e4: 0x60f809  jalr        $v1
label_2866e8:
    if (ctx->pc == 0x2866E8u) {
        ctx->pc = 0x2866ECu;
        goto label_2866ec;
    }
    ctx->pc = 0x2866E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2866ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2866E4u, 0x2866ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2866ECu;
label_2866ec:
    // 0x2866ec: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x2866ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_2866f0:
    // 0x2866f0: 0x8c43475c  lw          $v1, 0x475C($v0)
    ctx->pc = 0x2866f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18268)));
label_2866f4:
    // 0x2866f4: 0x60f809  jalr        $v1
label_2866f8:
    if (ctx->pc == 0x2866F8u) {
        ctx->pc = 0x2866F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866F4u;
        // 0x2866f8: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2866FCu;
        goto label_2866fc;
    }
    ctx->pc = 0x2866F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2866FCu);
        ctx->pc = 0x2866F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866F4u;
        // 0x2866f8: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2866F4u, 0x2866FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2866FCu;
label_2866fc:
    // 0x2866fc: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x2866fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_286700:
    // 0x286700: 0x8c434754  lw          $v1, 0x4754($v0)
    ctx->pc = 0x286700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18260)));
label_286704:
    // 0x286704: 0x60f809  jalr        $v1
label_286708:
    if (ctx->pc == 0x286708u) {
        ctx->pc = 0x28670Cu;
        goto label_28670c;
    }
    ctx->pc = 0x286704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28670Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286704u, 0x28670Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28670Cu;
label_28670c:
    // 0x28670c: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x28670cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_286710:
    // 0x286710: 0x8c434758  lw          $v1, 0x4758($v0)
    ctx->pc = 0x286710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18264)));
label_286714:
    // 0x286714: 0x60f809  jalr        $v1
label_286718:
    if (ctx->pc == 0x286718u) {
        ctx->pc = 0x28671Cu;
        goto label_28671c;
    }
    ctx->pc = 0x286714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28671Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286714u, 0x28671Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28671Cu;
label_28671c:
    // 0x28671c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28671cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286720:
    // 0x286720: 0x3e00008  jr          $ra
label_286724:
    if (ctx->pc == 0x286724u) {
        ctx->pc = 0x286724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286720u;
        // 0x286724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286728u;
        goto label_286728;
    }
    ctx->pc = 0x286720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286720u;
        // 0x286724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286728u;
label_286728:
    // 0x286728: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x286728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_28672c:
    // 0x28672c: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x28672cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_286730:
    // 0x286730: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x286730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_286734:
    // 0x286734: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x286734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_286738:
    // 0x286738: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x286738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_28673c:
    // 0x28673c: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x28673cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_286740:
    // 0x286740: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x286740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_286744:
    // 0x286744: 0x3c178007  lui         $s7, 0x8007
    ctx->pc = 0x286744u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32775 << 16));
label_286748:
    // 0x286748: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x286748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_28674c:
    // 0x28674c: 0x3c168007  lui         $s6, 0x8007
    ctx->pc = 0x28674cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32775 << 16));
label_286750:
    // 0x286750: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x286750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_286754:
    // 0x286754: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x286754u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_286758:
    // 0x286758: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x286758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_28675c:
    // 0x28675c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x28675cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_286760:
    // 0x286760: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x286760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_286764:
    // 0x286764: 0x3c128007  lui         $s2, 0x8007
    ctx->pc = 0x286764u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32775 << 16));
label_286768:
    // 0x286768: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x286768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_28676c:
    // 0x28676c: 0x2411004c  addiu       $s1, $zero, 0x4C
    ctx->pc = 0x28676cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_286770:
    // 0x286770: 0x8c484728  lw          $t0, 0x4728($v0)
    ctx->pc = 0x286770u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18216)));
label_286774:
    // 0x286774: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x286774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_286778:
    // 0x286778: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x286778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_28677c:
    // 0x28677c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x28677cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_286780:
    // 0x286780: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x286780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_286784:
    // 0x286784: 0x8d130000  lw          $s3, 0x0($t0)
    ctx->pc = 0x286784u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_286788:
    // 0x286788: 0x8c624730  lw          $v0, 0x4730($v1)
    ctx->pc = 0x286788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18224)));
label_28678c:
    // 0x28678c: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x28678cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_286790:
    // 0x286790: 0x40f809  jalr        $v0
label_286794:
    if (ctx->pc == 0x286794u) {
        ctx->pc = 0x286794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286790u;
        // 0x286794: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286798u;
        goto label_286798;
    }
    ctx->pc = 0x286790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286798u);
        ctx->pc = 0x286794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286790u;
        // 0x286794: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286790u, 0x286798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286798u;
label_286798:
    // 0x286798: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x286798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_28679c:
    // 0x28679c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28679cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2867a0:
    // 0x2867a0: 0x8c624734  lw          $v0, 0x4734($v1)
    ctx->pc = 0x2867a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18228)));
label_2867a4:
    // 0x2867a4: 0x40f809  jalr        $v0
label_2867a8:
    if (ctx->pc == 0x2867A8u) {
        ctx->pc = 0x2867A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867A4u;
        // 0x2867a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2867ACu;
        goto label_2867ac;
    }
    ctx->pc = 0x2867A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2867ACu);
        ctx->pc = 0x2867A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867A4u;
        // 0x2867a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2867A4u, 0x2867ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2867ACu;
label_2867ac:
    // 0x2867ac: 0x0  nop
    ctx->pc = 0x2867acu;
    // NOP
label_2867b0:
    // 0x2867b0: 0x8ec24748  lw          $v0, 0x4748($s6)
    ctx->pc = 0x2867b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18248)));
label_2867b4:
    // 0x2867b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2867b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2867b8:
    // 0x2867b8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2867b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2867bc:
    // 0x2867bc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_2867c0:
    if (ctx->pc == 0x2867C0u) {
        ctx->pc = 0x2867C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867BCu;
        // 0x2867c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2867C4u;
        goto label_2867c4;
    }
    ctx->pc = 0x2867BCu;
    {
        const bool branch_taken_0x2867bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2867bc) {
            ctx->pc = 0x2867C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2867BCu;
            // 0x2867c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286800u;
            goto label_286800;
        }
    }
    ctx->pc = 0x2867C4u;
label_2867c4:
    // 0x2867c4: 0x5213000e  beql        $s0, $s3, . + 4 + (0xE << 2)
label_2867c8:
    if (ctx->pc == 0x2867C8u) {
        ctx->pc = 0x2867C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867C4u;
        // 0x2867c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2867CCu;
        goto label_2867cc;
    }
    ctx->pc = 0x2867C4u;
    {
        const bool branch_taken_0x2867c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x2867c4) {
            ctx->pc = 0x2867C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2867C4u;
            // 0x2867c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286800u;
            goto label_286800;
        }
    }
    ctx->pc = 0x2867CCu;
label_2867cc:
    // 0x2867cc: 0x145e0006  bne         $v0, $fp, . + 4 + (0x6 << 2)
label_2867d0:
    if (ctx->pc == 0x2867D0u) {
        ctx->pc = 0x2867D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867CCu;
        // 0x2867d0: 0x8ee24744  lw          $v0, 0x4744($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2867D4u;
        goto label_2867d4;
    }
    ctx->pc = 0x2867CCu;
    {
        const bool branch_taken_0x2867cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x2867D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867CCu;
        // 0x2867d0: 0x8ee24744  lw          $v0, 0x4744($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867cc) {
            ctx->pc = 0x2867E8u;
            goto label_2867e8;
        }
    }
    ctx->pc = 0x2867D4u;
label_2867d4:
    // 0x2867d4: 0x8e424740  lw          $v0, 0x4740($s2)
    ctx->pc = 0x2867d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18240)));
label_2867d8:
    // 0x2867d8: 0x40f809  jalr        $v0
label_2867dc:
    if (ctx->pc == 0x2867DCu) {
        ctx->pc = 0x2867DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867D8u;
        // 0x2867dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2867E0u;
        goto label_2867e0;
    }
    ctx->pc = 0x2867D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2867E0u);
        ctx->pc = 0x2867DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867D8u;
        // 0x2867dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2867D8u, 0x2867E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2867E0u;
label_2867e0:
    // 0x2867e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2867e4:
    if (ctx->pc == 0x2867E4u) {
        ctx->pc = 0x2867E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867E0u;
        // 0x2867e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2867E8u;
        goto label_2867e8;
    }
    ctx->pc = 0x2867E0u;
    {
        const bool branch_taken_0x2867e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2867E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867E0u;
        // 0x2867e4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867e0) {
            ctx->pc = 0x286800u;
            goto label_286800;
        }
    }
    ctx->pc = 0x2867E8u;
label_2867e8:
    // 0x2867e8: 0x40f809  jalr        $v0
label_2867ec:
    if (ctx->pc == 0x2867ECu) {
        ctx->pc = 0x2867ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867E8u;
        // 0x2867ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2867F0u;
        goto label_2867f0;
    }
    ctx->pc = 0x2867E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2867F0u);
        ctx->pc = 0x2867ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867E8u;
        // 0x2867ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2867E8u, 0x2867F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2867F0u;
label_2867f0:
    // 0x2867f0: 0x8e424740  lw          $v0, 0x4740($s2)
    ctx->pc = 0x2867f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18240)));
label_2867f4:
    // 0x2867f4: 0x40f809  jalr        $v0
label_2867f8:
    if (ctx->pc == 0x2867F8u) {
        ctx->pc = 0x2867F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867F4u;
        // 0x2867f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2867FCu;
        goto label_2867fc;
    }
    ctx->pc = 0x2867F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2867FCu);
        ctx->pc = 0x2867F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867F4u;
        // 0x2867f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2867F4u, 0x2867FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2867FCu;
label_2867fc:
    // 0x2867fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2867fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_286800:
    // 0x286800: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x286800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_286804:
    // 0x286804: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_286808:
    if (ctx->pc == 0x286808u) {
        ctx->pc = 0x286808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286804u;
        // 0x286808: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28680Cu;
        goto label_28680c;
    }
    ctx->pc = 0x286804u;
    {
        const bool branch_taken_0x286804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286804u;
        // 0x286808: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286804) {
            ctx->pc = 0x2867B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2867b0;
        }
    }
    ctx->pc = 0x28680Cu;
label_28680c:
    // 0x28680c: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x28680cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_286810:
    // 0x286810: 0x8c62473c  lw          $v0, 0x473C($v1)
    ctx->pc = 0x286810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18236)));
label_286814:
    // 0x286814: 0x40f809  jalr        $v0
label_286818:
    if (ctx->pc == 0x286818u) {
        ctx->pc = 0x286818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286814u;
        // 0x286818: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28681Cu;
        goto label_28681c;
    }
    ctx->pc = 0x286814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28681Cu);
        ctx->pc = 0x286818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286814u;
        // 0x286818: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286814u, 0x28681Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28681Cu;
label_28681c:
    // 0x28681c: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x28681cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_286820:
    // 0x286820: 0x8c624738  lw          $v0, 0x4738($v1)
    ctx->pc = 0x286820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18232)));
label_286824:
    // 0x286824: 0x40f809  jalr        $v0
label_286828:
    if (ctx->pc == 0x286828u) {
        ctx->pc = 0x28682Cu;
        goto label_28682c;
    }
    ctx->pc = 0x286824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28682Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286824u, 0x28682Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28682Cu;
label_28682c:
    // 0x28682c: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x28682cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_286830:
    // 0x286830: 0x8c62472c  lw          $v0, 0x472C($v1)
    ctx->pc = 0x286830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18220)));
label_286834:
    // 0x286834: 0xc01d0f2  jal         func_0743C8
label_286838:
    if (ctx->pc == 0x286838u) {
        ctx->pc = 0x286838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286834u;
        // 0x286838: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28683Cu;
        goto label_28683c;
    }
    ctx->pc = 0x286834u;
    SET_GPR_U32(ctx, 31, 0x28683Cu);
    ctx->pc = 0x286838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286834u;
    // 0x286838: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x743C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x743C8u, 0x286834u, 0x28683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28683Cu;
label_28683c:
    // 0x28683c: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x28683cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_286840:
    // 0x286840: 0x1a80000d  blez        $s4, . + 4 + (0xD << 2)
label_286844:
    if (ctx->pc == 0x286844u) {
        ctx->pc = 0x286844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286840u;
        // 0x286844: 0x8c444778  lw          $a0, 0x4778($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286848u;
        goto label_286848;
    }
    ctx->pc = 0x286840u;
    {
        const bool branch_taken_0x286840 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x286844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286840u;
        // 0x286844: 0x8c444778  lw          $a0, 0x4778($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286840) {
            ctx->pc = 0x286878u;
            goto label_286878;
        }
    }
    ctx->pc = 0x286848u;
label_286848:
    // 0x286848: 0x3c118007  lui         $s1, 0x8007
    ctx->pc = 0x286848u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32775 << 16));
label_28684c:
    // 0x28684c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x28684cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_286850:
    // 0x286850: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x286850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_286854:
    // 0x286854: 0x8e224770  lw          $v0, 0x4770($s1)
    ctx->pc = 0x286854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18288)));
label_286858:
    // 0x286858: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x286858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28685c:
    // 0x28685c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x28685cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_286860:
    // 0x286860: 0x40f809  jalr        $v0
label_286864:
    if (ctx->pc == 0x286864u) {
        ctx->pc = 0x286864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286860u;
        // 0x286864: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286868u;
        goto label_286868;
    }
    ctx->pc = 0x286860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286868u);
        ctx->pc = 0x286864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286860u;
        // 0x286864: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286860u, 0x286868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286868u;
label_286868:
    // 0x286868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x286868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28686c:
    // 0x28686c: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x28686cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_286870:
    // 0x286870: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_286874:
    if (ctx->pc == 0x286874u) {
        ctx->pc = 0x286874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286870u;
        // 0x286874: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286878u;
        goto label_286878;
    }
    ctx->pc = 0x286870u;
    {
        const bool branch_taken_0x286870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286870u;
        // 0x286874: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286870) {
            ctx->pc = 0x286850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286850;
        }
    }
    ctx->pc = 0x286878u;
label_286878:
    // 0x286878: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x286878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_28687c:
    // 0x28687c: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x28687cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_286880:
    // 0x286880: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x286880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_286884:
    // 0x286884: 0x8ec54748  lw          $a1, 0x4748($s6)
    ctx->pc = 0x286884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18248)));
label_286888:
    // 0x286888: 0x8c644778  lw          $a0, 0x4778($v1)
    ctx->pc = 0x286888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18296)));
label_28688c:
    // 0x28688c: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x28688cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_286890:
    // 0x286890: 0x8c66476c  lw          $a2, 0x476C($v1)
    ctx->pc = 0x286890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18284)));
label_286894:
    // 0x286894: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x286894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_286898:
    // 0x286898: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x286898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
label_28689c:
    // 0x28689c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x28689cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2868a0:
    // 0x2868a0: 0xac540034  sw          $s4, 0x34($v0)
    ctx->pc = 0x2868a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 20));
label_2868a4:
    // 0x2868a4: 0xac55000c  sw          $s5, 0xC($v0)
    ctx->pc = 0x2868a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
label_2868a8:
    // 0x2868a8: 0xac550030  sw          $s5, 0x30($v0)
    ctx->pc = 0x2868a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 21));
label_2868ac:
    // 0x2868ac: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x2868acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_2868b0:
    // 0x2868b0: 0xa440001a  sh          $zero, 0x1A($v0)
    ctx->pc = 0x2868b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 0));
label_2868b4:
    // 0x2868b4: 0xa4400018  sh          $zero, 0x18($v0)
    ctx->pc = 0x2868b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 0));
label_2868b8:
    // 0x2868b8: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2868b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_2868bc:
    // 0x2868bc: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2868bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_2868c0:
    // 0x2868c0: 0xc0f809  jalr        $a2
label_2868c4:
    if (ctx->pc == 0x2868C4u) {
        ctx->pc = 0x2868C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868C0u;
        // 0x2868c4: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2868C8u;
        goto label_2868c8;
    }
    ctx->pc = 0x2868C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2868C8u);
        ctx->pc = 0x2868C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868C0u;
        // 0x2868c4: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2868C0u, 0x2868C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2868C8u;
label_2868c8:
    // 0x2868c8: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x2868c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_2868cc:
    // 0x2868cc: 0x8c434768  lw          $v1, 0x4768($v0)
    ctx->pc = 0x2868ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18280)));
label_2868d0:
    // 0x2868d0: 0x60f809  jalr        $v1
label_2868d4:
    if (ctx->pc == 0x2868D4u) {
        ctx->pc = 0x2868D8u;
        goto label_2868d8;
    }
    ctx->pc = 0x2868D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2868D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2868D0u, 0x2868D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2868D8u;
label_2868d8:
    // 0x2868d8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2868d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2868dc:
    // 0x2868dc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2868dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2868e0:
    // 0x2868e0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2868e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2868e4:
    // 0x2868e4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2868e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2868e8:
    // 0x2868e8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2868e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2868ec:
    // 0x2868ec: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2868ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2868f0:
    // 0x2868f0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2868f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2868f4:
    // 0x2868f4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2868f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2868f8:
    // 0x2868f8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2868f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2868fc:
    // 0x2868fc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2868fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_286900:
    // 0x286900: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x286900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_286904:
    // 0x286904: 0x3e00008  jr          $ra
label_286908:
    if (ctx->pc == 0x286908u) {
        ctx->pc = 0x286908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286904u;
        // 0x286908: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28690Cu;
        goto label_28690c;
    }
    ctx->pc = 0x286904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286904u;
        // 0x286908: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28690Cu;
label_28690c:
    // 0x28690c: 0x0  nop
    ctx->pc = 0x28690cu;
    // NOP
label_286910:
    // 0x286910: 0x0  nop
    ctx->pc = 0x286910u;
    // NOP
label_286914:
    // 0x286914: 0x0  nop
    ctx->pc = 0x286914u;
    // NOP
label_286918:
    // 0x286918: 0x0  nop
    ctx->pc = 0x286918u;
    // NOP
label_28691c:
    // 0x28691c: 0x0  nop
    ctx->pc = 0x28691cu;
    // NOP
label_286920:
    // 0x286920: 0x0  nop
    ctx->pc = 0x286920u;
    // NOP
label_286924:
    // 0x286924: 0x0  nop
    ctx->pc = 0x286924u;
    // NOP
label_286928:
    // 0x286928: 0x0  nop
    ctx->pc = 0x286928u;
    // NOP
label_28692c:
    // 0x28692c: 0x0  nop
    ctx->pc = 0x28692cu;
    // NOP
label_286930:
    // 0x286930: 0x0  nop
    ctx->pc = 0x286930u;
    // NOP
label_286934:
    // 0x286934: 0x0  nop
    ctx->pc = 0x286934u;
    // NOP
label_286938:
    // 0x286938: 0x0  nop
    ctx->pc = 0x286938u;
    // NOP
label_28693c:
    // 0x28693c: 0x0  nop
    ctx->pc = 0x28693cu;
    // NOP
label_286940:
    // 0x286940: 0x0  nop
    ctx->pc = 0x286940u;
    // NOP
label_286944:
    // 0x286944: 0x0  nop
    ctx->pc = 0x286944u;
    // NOP
label_286948:
    // 0x286948: 0x0  nop
    ctx->pc = 0x286948u;
    // NOP
label_28694c:
    // 0x28694c: 0x0  nop
    ctx->pc = 0x28694cu;
    // NOP
label_286950:
    // 0x286950: 0x0  nop
    ctx->pc = 0x286950u;
    // NOP
label_286954:
    // 0x286954: 0x0  nop
    ctx->pc = 0x286954u;
    // NOP
label_286958:
    // 0x286958: 0x0  nop
    ctx->pc = 0x286958u;
    // NOP
label_28695c:
    // 0x28695c: 0x0  nop
    ctx->pc = 0x28695cu;
    // NOP
label_286960:
    // 0x286960: 0x0  nop
    ctx->pc = 0x286960u;
    // NOP
label_286964:
    // 0x286964: 0x0  nop
    ctx->pc = 0x286964u;
    // NOP
label_286968:
    // 0x286968: 0x0  nop
    ctx->pc = 0x286968u;
    // NOP
label_28696c:
    // 0x28696c: 0x0  nop
    ctx->pc = 0x28696cu;
    // NOP
label_286970:
    // 0x286970: 0x0  nop
    ctx->pc = 0x286970u;
    // NOP
label_286974:
    // 0x286974: 0x0  nop
    ctx->pc = 0x286974u;
    // NOP
label_286978:
    // 0x286978: 0x0  nop
    ctx->pc = 0x286978u;
    // NOP
label_28697c:
    // 0x28697c: 0x0  nop
    ctx->pc = 0x28697cu;
    // NOP
label_286980:
    // 0x286980: 0x0  nop
    ctx->pc = 0x286980u;
    // NOP
label_286984:
    // 0x286984: 0x0  nop
    ctx->pc = 0x286984u;
    // NOP
label_286988:
    // 0x286988: 0x0  nop
    ctx->pc = 0x286988u;
    // NOP
label_28698c:
    // 0x28698c: 0x0  nop
    ctx->pc = 0x28698cu;
    // NOP
label_286990:
    // 0x286990: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x286990u;
    
label_286994:
    // 0x286994: 0x0  nop
    ctx->pc = 0x286994u;
    // NOP
label_286998:
    // 0x286998: 0x0  nop
    ctx->pc = 0x286998u;
    // NOP
label_28699c:
    // 0x28699c: 0x0  nop
    ctx->pc = 0x28699cu;
    // NOP
label_2869a0:
    // 0x2869a0: 0x0  nop
    ctx->pc = 0x2869a0u;
    // NOP
label_2869a4:
    // 0x2869a4: 0x0  nop
    ctx->pc = 0x2869a4u;
    // NOP
label_2869a8:
    // 0x2869a8: 0x0  nop
    ctx->pc = 0x2869a8u;
    // NOP
label_2869ac:
    // 0x2869ac: 0x0  nop
    ctx->pc = 0x2869acu;
    // NOP
label_2869b0:
    // 0x2869b0: 0x0  nop
    ctx->pc = 0x2869b0u;
    // NOP
label_2869b4:
    // 0x2869b4: 0x0  nop
    ctx->pc = 0x2869b4u;
    // NOP
label_2869b8:
    // 0x2869b8: 0x800125ec  lb          $at, 0x25EC($zero)
    ctx->pc = 0x2869b8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x25ECu));
label_2869bc:
    // 0x2869bc: 0x800125f4  lb          $at, 0x25F4($zero)
    ctx->pc = 0x2869bcu;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x25F4u));
label_2869c0:
    // 0x2869c0: 0x80004970  lb          $zero, 0x4970($zero)
    ctx->pc = 0x2869c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x4970u));
label_2869c4:
    // 0x2869c4: 0x80004288  lb          $zero, 0x4288($zero)
    ctx->pc = 0x2869c4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x4288u));
label_2869c8:
    // 0x2869c8: 0x800021b0  lb          $zero, 0x21B0($zero)
    ctx->pc = 0x2869c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x21B0u));
label_2869cc:
    // 0x2869cc: 0x80004e68  lb          $zero, 0x4E68($zero)
    ctx->pc = 0x2869ccu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x4E68u));
label_2869d0:
    // 0x2869d0: 0x80003f00  lb          $zero, 0x3F00($zero)
    ctx->pc = 0x2869d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3F00u));
label_2869d4:
    // 0x2869d4: 0x80003e00  lb          $zero, 0x3E00($zero)
    ctx->pc = 0x2869d4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3E00u));
label_2869d8:
    // 0x2869d8: 0x80017400  lb          $at, 0x7400($zero)
    ctx->pc = 0x2869d8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x7400u));
label_2869dc:
    // 0x2869dc: 0x8000b8d0  lb          $zero, -0x4730($zero)
    ctx->pc = 0x2869dcu;
    SET_GPR_S32(ctx, 0, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFB8D0u));
label_2869e0:
    // 0x2869e0: 0x8000b900  lb          $zero, -0x4700($zero)
    ctx->pc = 0x2869e0u;
    SET_GPR_S32(ctx, 0, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFB900u));
label_2869e4:
    // 0x2869e4: 0x8000b7a8  lb          $zero, -0x4858($zero)
    ctx->pc = 0x2869e4u;
    SET_GPR_S32(ctx, 0, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFB7A8u));
label_2869e8:
    // 0x2869e8: 0x8000b840  lb          $zero, -0x47C0($zero)
    ctx->pc = 0x2869e8u;
    SET_GPR_S32(ctx, 0, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFB840u));
label_2869ec:
    // 0x2869ec: 0x8000ad68  lb          $zero, -0x5298($zero)
    ctx->pc = 0x2869ecu;
    SET_GPR_S32(ctx, 0, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFAD68u));
label_2869f0:
    // 0x2869f0: 0x8000aa60  lb          $zero, -0x55A0($zero)
    ctx->pc = 0x2869f0u;
    SET_GPR_S32(ctx, 0, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFAA60u));
label_2869f4:
    // 0x2869f4: 0x8000a060  lb          $zero, -0x5FA0($zero)
    ctx->pc = 0x2869f4u;
    SET_GPR_S32(ctx, 0, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFA060u));
label_2869f8:
    // 0x2869f8: 0x80002a80  lb          $zero, 0x2A80($zero)
    ctx->pc = 0x2869f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2A80u));
label_2869fc:
    // 0x2869fc: 0x80002ac0  lb          $zero, 0x2AC0($zero)
    ctx->pc = 0x2869fcu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2AC0u));
label_286a00:
    // 0x286a00: 0x80005560  lb          $zero, 0x5560($zero)
    ctx->pc = 0x286a00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x5560u));
label_286a04:
    // 0x286a04: 0x80012600  lb          $at, 0x2600($zero)
    ctx->pc = 0x286a04u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2600u));
label_286a08:
    // 0x286a08: 0x80012608  lb          $at, 0x2608($zero)
    ctx->pc = 0x286a08u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2608u));
label_286a0c:
    // 0x286a0c: 0x0  nop
    ctx->pc = 0x286a0cu;
    // NOP
label_286a10:
    // 0x286a10: 0x4a  .word       0x0000004A                   # movz        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286a10u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_286a14:
    // 0x286a14: 0x80074138  lb          $a3, 0x4138($zero)
    ctx->pc = 0x286a14u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x4138u));
label_286a18:
    // 0x286a18: 0x4b  .word       0x0000004B                   # movn        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286a18u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_286a1c:
    // 0x286a1c: 0x80074088  lb          $a3, 0x4088($zero)
    ctx->pc = 0x286a1cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x4088u));
label_286a20:
    // 0x286a20: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286a20u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_286a24:
    // 0x286a24: 0x80074350  lb          $a3, 0x4350($zero)
    ctx->pc = 0x286a24u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x4350u));
label_286a28:
    // 0x286a28: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286a28u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_286a2c:
    // 0x286a2c: 0x800742a8  lb          $a3, 0x42A8($zero)
    ctx->pc = 0x286a2cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x42A8u));
label_286a30:
    // 0x286a30: 0xffffc402  sd          $ra, -0x3BFE($ra)
    ctx->pc = 0x286a30u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294951938), GPR_U64(ctx, 31));
label_286a34:
    // 0x286a34: 0x80074498  lb          $a3, 0x4498($zero)
    ctx->pc = 0x286a34u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x4498u));
label_286a38:
    // 0x286a38: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286a38u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_286a3c:
    // 0x286a3c: 0x1ad748  .word       0x001AD748                   # jr          $zero # 001AD740 <InstrIdType: CPU_SPECIAL>
label_286a40:
    if (ctx->pc == 0x286A40u) {
        ctx->pc = 0x286A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A3Cu;
        // 0x286a40: 0x5b  .word       0x0000005B                   # divu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x286A44u;
        goto label_286a44;
    }
    ctx->pc = 0x286A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x286A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A3Cu;
        // 0x286a40: 0x5b  .word       0x0000005B                   # divu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286A3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x286A44u;
label_286a44:
    // 0x286a44: 0x80074000  lb          $a3, 0x4000($zero)
    ctx->pc = 0x286a44u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x4000u));
label_286a48:
    // 0x286a48: 0xffffc402  sd          $ra, -0x3BFE($ra)
    ctx->pc = 0x286a48u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294951938), GPR_U64(ctx, 31));
label_286a4c:
    // 0x286a4c: 0x0  nop
    ctx->pc = 0x286a4cu;
    // NOP
label_286a50:
    // 0x286a50: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x286a50u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_286a54:
    // 0x286a54: 0x1ad8b8  dsll        $k1, $k0, 2
    ctx->pc = 0x286a54u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 26) << 2);
label_286a58:
    // 0x286a58: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x286a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_286a5c:
    // 0x286a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286a60:
    // 0x286a60: 0x24436710  addiu       $v1, $v0, 0x6710
    ctx->pc = 0x286a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 26384));
label_286a64:
    // 0x286a64: 0x0  nop
    ctx->pc = 0x286a64u;
    // NOP
label_286a68:
    // 0x286a68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x286a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_286a6c:
    // 0x286a6c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_286a70:
    if (ctx->pc == 0x286A70u) {
        ctx->pc = 0x286A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A6Cu;
        // 0x286a70: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286A74u;
        goto label_286a74;
    }
    ctx->pc = 0x286A6Cu;
    {
        const bool branch_taken_0x286a6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x286A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A6Cu;
        // 0x286a70: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a6c) {
            ctx->pc = 0x286A7Cu;
            goto label_286a7c;
        }
    }
    ctx->pc = 0x286A74u;
label_286a74:
    // 0x286a74: 0x3e00008  jr          $ra
label_286a78:
    if (ctx->pc == 0x286A78u) {
        ctx->pc = 0x286A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A74u;
        // 0x286a78: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286A7Cu;
        goto label_286a7c;
    }
    ctx->pc = 0x286A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A74u;
        // 0x286a78: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286A7Cu;
label_286a7c:
    // 0x286a7c: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x286a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_286a80:
    // 0x286a80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_286a84:
    if (ctx->pc == 0x286A84u) {
        ctx->pc = 0x286A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A80u;
        // 0x286a84: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286A88u;
        goto label_286a88;
    }
    ctx->pc = 0x286A80u;
    {
        const bool branch_taken_0x286a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A80u;
        // 0x286a84: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a80) {
            ctx->pc = 0x286A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286a68;
        }
    }
    ctx->pc = 0x286A88u;
label_286a88:
    // 0x286a88: 0x3e00008  jr          $ra
label_286a8c:
    if (ctx->pc == 0x286A8Cu) {
        ctx->pc = 0x286A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A88u;
        // 0x286a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286A90u;
        goto label_286a90;
    }
    ctx->pc = 0x286A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A88u;
        // 0x286a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286A90u;
label_286a90:
    // 0x286a90: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x286a90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_286a94:
    // 0x286a94: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_286a98:
    if (ctx->pc == 0x286A98u) {
        ctx->pc = 0x286A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A94u;
        // 0x286a98: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286A9Cu;
        goto label_286a9c;
    }
    ctx->pc = 0x286A94u;
    {
        const bool branch_taken_0x286a94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A94u;
        // 0x286a98: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a94) {
            ctx->pc = 0x286AA4u;
            goto label_286aa4;
        }
    }
    ctx->pc = 0x286A9Cu;
label_286a9c:
    // 0x286a9c: 0x3e00008  jr          $ra
label_286aa0:
    if (ctx->pc == 0x286AA0u) {
        ctx->pc = 0x286AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A9Cu;
        // 0x286aa0: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286AA4u;
        goto label_286aa4;
    }
    ctx->pc = 0x286A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A9Cu;
        // 0x286aa0: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286AA4u;
label_286aa4:
    // 0x286aa4: 0x3e00008  jr          $ra
label_286aa8:
    if (ctx->pc == 0x286AA8u) {
        ctx->pc = 0x286AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AA4u;
        // 0x286aa8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286AACu;
        goto label_286aac;
    }
    ctx->pc = 0x286AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AA4u;
        // 0x286aa8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286AACu;
label_286aac:
    // 0x286aac: 0x0  nop
    ctx->pc = 0x286aacu;
    // NOP
label_286ab0:
    // 0x286ab0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x286ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_286ab4:
    // 0x286ab4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x286ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_286ab8:
    // 0x286ab8: 0x3c138007  lui         $s3, 0x8007
    ctx->pc = 0x286ab8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32775 << 16));
label_286abc:
    // 0x286abc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x286abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_286ac0:
    // 0x286ac0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x286ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_286ac4:
    // 0x286ac4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x286ac4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_286ac8:
    // 0x286ac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_286acc:
    // 0x286acc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x286accu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_286ad0:
    // 0x286ad0: 0x8e626700  lw          $v0, 0x6700($s3)
    ctx->pc = 0x286ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26368)));
label_286ad4:
    // 0x286ad4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x286ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286ad8:
    // 0x286ad8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x286ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_286adc:
    // 0x286adc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x286adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_286ae0:
    // 0x286ae0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x286ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_286ae4:
    // 0x286ae4: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
label_286ae8:
    if (ctx->pc == 0x286AE8u) {
        ctx->pc = 0x286AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AE4u;
        // 0x286ae8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286AECu;
        goto label_286aec;
    }
    ctx->pc = 0x286AE4u;
    {
        const bool branch_taken_0x286ae4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x286AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AE4u;
        // 0x286ae8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ae4) {
            ctx->pc = 0x286B88u;
            goto label_286b88;
        }
    }
    ctx->pc = 0x286AECu;
label_286aec:
    // 0x286aec: 0x3c148007  lui         $s4, 0x8007
    ctx->pc = 0x286aecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32775 << 16));
label_286af0:
    // 0x286af0: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x286af0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_286af4:
    // 0x286af4: 0x0  nop
    ctx->pc = 0x286af4u;
    // NOP
label_286af8:
    // 0x286af8: 0x26916740  addiu       $s1, $s4, 0x6740
    ctx->pc = 0x286af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 26432));
label_286afc:
    // 0x286afc: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x286afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_286b00:
    // 0x286b00: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x286b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_286b04:
    // 0x286b04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x286b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_286b08:
    // 0x286b08: 0xc01d80e  jal         func_076038
label_286b0c:
    if (ctx->pc == 0x286B0Cu) {
        ctx->pc = 0x286B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B08u;
        // 0x286b0c: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286B10u;
        goto label_286b10;
    }
    ctx->pc = 0x286B08u;
    SET_GPR_U32(ctx, 31, 0x286B10u);
    ctx->pc = 0x286B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286B08u;
    // 0x286b0c: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76038u, 0x286B08u, 0x286B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B10u;
label_286b10:
    // 0x286b10: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x286b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_286b14:
    // 0x286b14: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_286b18:
    if (ctx->pc == 0x286B18u) {
        ctx->pc = 0x286B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B14u;
        // 0x286b18: 0x8e626700  lw          $v0, 0x6700($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286B1Cu;
        goto label_286b1c;
    }
    ctx->pc = 0x286B14u;
    {
        const bool branch_taken_0x286b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B14u;
        // 0x286b18: 0x8e626700  lw          $v0, 0x6700($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b14) {
            ctx->pc = 0x286B78u;
            goto label_286b78;
        }
    }
    ctx->pc = 0x286B1Cu;
label_286b1c:
    // 0x286b1c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x286b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_286b20:
    // 0x286b20: 0x90182a  slt         $v1, $a0, $s0
    ctx->pc = 0x286b20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_286b24:
    // 0x286b24: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_286b28:
    if (ctx->pc == 0x286B28u) {
        ctx->pc = 0x286B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B24u;
        // 0x286b28: 0x921018  mult        $v0, $a0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x286B2Cu;
        goto label_286b2c;
    }
    ctx->pc = 0x286B24u;
    {
        const bool branch_taken_0x286b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B24u;
        // 0x286b28: 0x921018  mult        $v0, $a0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b24) {
            ctx->pc = 0x286B88u;
            goto label_286b88;
        }
    }
    ctx->pc = 0x286B2Cu;
label_286b2c:
    // 0x286b2c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x286b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_286b30:
    // 0x286b30: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x286b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_286b34:
    // 0x286b34: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x286b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_286b38:
    // 0x286b38: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x286b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_286b3c:
    // 0x286b3c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x286b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_286b40:
    // 0x286b40: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x286b40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_286b44:
    // 0x286b44: 0xb065001b  sdl         $a1, 0x1B($v1)
    ctx->pc = 0x286b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_286b48:
    // 0x286b48: 0xb4650014  sdr         $a1, 0x14($v1)
    ctx->pc = 0x286b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_286b4c:
    // 0x286b4c: 0xb0660023  sdl         $a2, 0x23($v1)
    ctx->pc = 0x286b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_286b50:
    // 0x286b50: 0xb466001c  sdr         $a2, 0x1C($v1)
    ctx->pc = 0x286b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_286b54:
    // 0x286b54: 0xac670024  sw          $a3, 0x24($v1)
    ctx->pc = 0x286b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 7));
label_286b58:
    // 0x286b58: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x286b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_286b5c:
    // 0x286b5c: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x286b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_286b60:
    // 0x286b60: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x286b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_286b64:
    // 0x286b64: 0x0  nop
    ctx->pc = 0x286b64u;
    // NOP
label_286b68:
    // 0x286b68: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
label_286b6c:
    if (ctx->pc == 0x286B6Cu) {
        ctx->pc = 0x286B70u;
        goto label_286b70;
    }
    ctx->pc = 0x286B68u;
    {
        const bool branch_taken_0x286b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286b68) {
            ctx->pc = 0x286B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286b30;
        }
    }
    ctx->pc = 0x286B70u;
label_286b70:
    // 0x286b70: 0x10000006  b           . + 4 + (0x6 << 2)
label_286b74:
    if (ctx->pc == 0x286B74u) {
        ctx->pc = 0x286B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B70u;
        // 0x286b74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286B78u;
        goto label_286b78;
    }
    ctx->pc = 0x286B70u;
    {
        const bool branch_taken_0x286b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B70u;
        // 0x286b74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b70) {
            ctx->pc = 0x286B8Cu;
            goto label_286b8c;
        }
    }
    ctx->pc = 0x286B78u;
label_286b78:
    // 0x286b78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x286b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_286b7c:
    // 0x286b7c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x286b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_286b80:
    // 0x286b80: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_286b84:
    if (ctx->pc == 0x286B84u) {
        ctx->pc = 0x286B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B80u;
        // 0x286b84: 0x24120014  addiu       $s2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286B88u;
        goto label_286b88;
    }
    ctx->pc = 0x286B80u;
    {
        const bool branch_taken_0x286b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B80u;
        // 0x286b84: 0x24120014  addiu       $s2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b80) {
            ctx->pc = 0x286AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286af8;
        }
    }
    ctx->pc = 0x286B88u;
label_286b88:
    // 0x286b88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x286b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286b8c:
    // 0x286b8c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x286b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_286b90:
    // 0x286b90: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x286b90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_286b94:
    // 0x286b94: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x286b94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_286b98:
    // 0x286b98: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x286b98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_286b9c:
    // 0x286b9c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x286b9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_286ba0:
    // 0x286ba0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x286ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_286ba4:
    // 0x286ba4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_286ba8:
    // 0x286ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286bac:
    // 0x286bac: 0x3e00008  jr          $ra
label_286bb0:
    if (ctx->pc == 0x286BB0u) {
        ctx->pc = 0x286BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BACu;
        // 0x286bb0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286BB4u;
        goto label_286bb4;
    }
    ctx->pc = 0x286BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BACu;
        // 0x286bb0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286BB4u;
label_286bb4:
    // 0x286bb4: 0x0  nop
    ctx->pc = 0x286bb4u;
    // NOP
label_286bb8:
    // 0x286bb8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x286bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_286bbc:
    // 0x286bbc: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x286bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
label_286bc0:
    // 0x286bc0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x286bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_286bc4:
    // 0x286bc4: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x286bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
label_286bc8:
    // 0x286bc8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x286bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_286bcc:
    // 0x286bcc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x286bccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_286bd0:
    // 0x286bd0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x286bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_286bd4:
    // 0x286bd4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x286bd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_286bd8:
    // 0x286bd8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x286bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_286bdc:
    // 0x286bdc: 0x3c158007  lui         $s5, 0x8007
    ctx->pc = 0x286bdcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32775 << 16));
label_286be0:
    // 0x286be0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x286be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_286be4:
    // 0x286be4: 0x3093ffff  andi        $s3, $a0, 0xFFFF
    ctx->pc = 0x286be4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_286be8:
    // 0x286be8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x286be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_286bec:
    // 0x286bec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x286becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_286bf0:
    // 0x286bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_286bf4:
    // 0x286bf4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x286bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_286bf8:
    // 0x286bf8: 0x8ea36700  lw          $v1, 0x6700($s5)
    ctx->pc = 0x286bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
label_286bfc:
    // 0x286bfc: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x286bfcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286c00:
    // 0x286c00: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x286c00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_286c04:
    // 0x286c04: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_286c08:
    if (ctx->pc == 0x286C08u) {
        ctx->pc = 0x286C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C04u;
        // 0x286c08: 0x2749821  addu        $s3, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286C0Cu;
        goto label_286c0c;
    }
    ctx->pc = 0x286C04u;
    {
        const bool branch_taken_0x286c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C04u;
        // 0x286c08: 0x2749821  addu        $s3, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c04) {
            ctx->pc = 0x286C28u;
            goto label_286c28;
        }
    }
    ctx->pc = 0x286C0Cu;
label_286c0c:
    // 0x286c0c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_286c10:
    if (ctx->pc == 0x286C10u) {
        ctx->pc = 0x286C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C0Cu;
        // 0x286c10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286C14u;
        goto label_286c14;
    }
    ctx->pc = 0x286C0Cu;
    {
        const bool branch_taken_0x286c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C0Cu;
        // 0x286c10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c0c) {
            ctx->pc = 0x286CC8u;
            goto label_286cc8;
        }
    }
    ctx->pc = 0x286C14u;
label_286c14:
    // 0x286c14: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x286c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_286c18:
    // 0x286c18: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x286c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
label_286c1c:
    // 0x286c1c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x286c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_286c20:
    // 0x286c20: 0x1000000d  b           . + 4 + (0xD << 2)
label_286c24:
    if (ctx->pc == 0x286C24u) {
        ctx->pc = 0x286C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C20u;
        // 0x286c24: 0xfca26708  sd          $v0, 0x6708($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 26376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286C28u;
        goto label_286c28;
    }
    ctx->pc = 0x286C20u;
    {
        const bool branch_taken_0x286c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C20u;
        // 0x286c24: 0xfca26708  sd          $v0, 0x6708($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 26376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c20) {
            ctx->pc = 0x286C58u;
            goto label_286c58;
        }
    }
    ctx->pc = 0x286C28u;
label_286c28:
    // 0x286c28: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x286c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
label_286c2c:
    // 0x286c2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x286c2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286c30:
    // 0x286c30: 0xdca46708  ld          $a0, 0x6708($a1)
    ctx->pc = 0x286c30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 26376)));
label_286c34:
    // 0x286c34: 0x641016  dsrlv       $v0, $a0, $v1
    ctx->pc = 0x286c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
label_286c38:
    // 0x286c38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_286c3c:
    // 0x286c3c: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
label_286c40:
    if (ctx->pc == 0x286C40u) {
        ctx->pc = 0x286C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C3Cu;
        // 0x286c40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286C44u;
        goto label_286c44;
    }
    ctx->pc = 0x286C3Cu;
    {
        const bool branch_taken_0x286c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C3Cu;
        // 0x286c40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c3c) {
            ctx->pc = 0x286C14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286c14;
        }
    }
    ctx->pc = 0x286C44u;
label_286c44:
    // 0x286c44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x286c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_286c48:
    // 0x286c48: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x286c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_286c4c:
    // 0x286c4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_286c50:
    if (ctx->pc == 0x286C50u) {
        ctx->pc = 0x286C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C4Cu;
        // 0x286c50: 0x641016  dsrlv       $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286C54u;
        goto label_286c54;
    }
    ctx->pc = 0x286C4Cu;
    {
        const bool branch_taken_0x286c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C4Cu;
        // 0x286c50: 0x641016  dsrlv       $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c4c) {
            ctx->pc = 0x286C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286c38;
        }
    }
    ctx->pc = 0x286C54u;
label_286c54:
    // 0x286c54: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x286c54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_286c58:
    // 0x286c58: 0x640001b  bltz        $s2, . + 4 + (0x1B << 2)
label_286c5c:
    if (ctx->pc == 0x286C5Cu) {
        ctx->pc = 0x286C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C58u;
        // 0x286c5c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286C60u;
        goto label_286c60;
    }
    ctx->pc = 0x286C58u;
    {
        const bool branch_taken_0x286c58 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x286C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C58u;
        // 0x286c5c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c58) {
            ctx->pc = 0x286CC8u;
            goto label_286cc8;
        }
    }
    ctx->pc = 0x286C60u;
label_286c60:
    // 0x286c60: 0x380882d  daddu       $s1, $gp, $zero
    ctx->pc = 0x286c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_286c64:
    // 0x286c64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x286c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286c68:
    // 0x286c68: 0xc01d816  jal         func_076058
label_286c6c:
    if (ctx->pc == 0x286C6Cu) {
        ctx->pc = 0x286C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C68u;
        // 0x286c6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286C70u;
        goto label_286c70;
    }
    ctx->pc = 0x286C68u;
    SET_GPR_U32(ctx, 31, 0x286C70u);
    ctx->pc = 0x286C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C68u;
    // 0x286c6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76058u, 0x286C68u, 0x286C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C70u;
label_286c70:
    // 0x286c70: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x286c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_286c74:
    // 0x286c74: 0x3c088007  lui         $t0, 0x8007
    ctx->pc = 0x286c74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
label_286c78:
    // 0x286c78: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x286c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_286c7c:
    // 0x286c7c: 0x25036740  addiu       $v1, $t0, 0x6740
    ctx->pc = 0x286c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 26432));
label_286c80:
    // 0x286c80: 0x8ea56700  lw          $a1, 0x6700($s5)
    ctx->pc = 0x286c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
label_286c84:
    // 0x286c84: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x286c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_286c88:
    // 0x286c88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x286c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_286c8c:
    // 0x286c8c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x286c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_286c90:
    // 0x286c90: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x286c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_286c94:
    // 0x286c94: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x286c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_286c98:
    // 0x286c98: 0xa4940002  sh          $s4, 0x2($a0)
    ctx->pc = 0x286c98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 20));
label_286c9c:
    // 0x286c9c: 0xa4930000  sh          $s3, 0x0($a0)
    ctx->pc = 0x286c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 19));
label_286ca0:
    // 0x286ca0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x286ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_286ca4:
    // 0x286ca4: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x286ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_286ca8:
    // 0x286ca8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x286ca8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_286cac:
    // 0x286cac: 0xacf10010  sw          $s1, 0x10($a3)
    ctx->pc = 0x286cacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 17));
label_286cb0:
    // 0x286cb0: 0x95046740  lhu         $a0, 0x6740($t0)
    ctx->pc = 0x286cb0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26432)));
label_286cb4:
    // 0x286cb4: 0xacd60008  sw          $s6, 0x8($a2)
    ctx->pc = 0x286cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 22));
label_286cb8:
    // 0x286cb8: 0xac77000c  sw          $s7, 0xC($v1)
    ctx->pc = 0x286cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 23));
label_286cbc:
    // 0x286cbc: 0xc01d918  jal         func_076460
label_286cc0:
    if (ctx->pc == 0x286CC0u) {
        ctx->pc = 0x286CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CBCu;
        // 0x286cc0: 0xaea56700  sw          $a1, 0x6700($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 26368), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286CC4u;
        goto label_286cc4;
    }
    ctx->pc = 0x286CBCu;
    SET_GPR_U32(ctx, 31, 0x286CC4u);
    ctx->pc = 0x286CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CBCu;
    // 0x286cc0: 0xaea56700  sw          $a1, 0x6700($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 26368), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x286CBCu, 0x286CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CC4u;
label_286cc4:
    // 0x286cc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x286cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_286cc8:
    // 0x286cc8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x286cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_286ccc:
    // 0x286ccc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x286cccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_286cd0:
    // 0x286cd0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x286cd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_286cd4:
    // 0x286cd4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x286cd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_286cd8:
    // 0x286cd8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x286cd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_286cdc:
    // 0x286cdc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x286cdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_286ce0:
    // 0x286ce0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x286ce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_286ce4:
    // 0x286ce4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_286ce8:
    // 0x286ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_286cec:
    // 0x286cec: 0x3e00008  jr          $ra
label_286cf0:
    if (ctx->pc == 0x286CF0u) {
        ctx->pc = 0x286CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CECu;
        // 0x286cf0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286CF4u;
        goto label_286cf4;
    }
    ctx->pc = 0x286CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286CECu;
        // 0x286cf0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286CF4u;
label_286cf4:
    // 0x286cf4: 0x0  nop
    ctx->pc = 0x286cf4u;
    // NOP
label_286cf8:
    // 0x286cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_286cfc:
    // 0x286cfc: 0x3c0c8007  lui         $t4, 0x8007
    ctx->pc = 0x286cfcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32775 << 16));
label_286d00:
    // 0x286d00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x286d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_286d04:
    // 0x286d04: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x286d04u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_286d08:
    // 0x286d08: 0x8d826700  lw          $v0, 0x6700($t4)
    ctx->pc = 0x286d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
label_286d0c:
    // 0x286d0c: 0x180882d  daddu       $s1, $t4, $zero
    ctx->pc = 0x286d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_286d10:
    // 0x286d10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x286d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_286d14:
    // 0x286d14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x286d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_286d18:
    // 0x286d18: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
label_286d1c:
    if (ctx->pc == 0x286D1Cu) {
        ctx->pc = 0x286D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D18u;
        // 0x286d1c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286D20u;
        goto label_286d20;
    }
    ctx->pc = 0x286D18u;
    {
        const bool branch_taken_0x286d18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x286D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D18u;
        // 0x286d1c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d18) {
            ctx->pc = 0x286E7Cu;
            { ctx->pc = 0x286e7c; return; }
        }
    }
    ctx->pc = 0x286D20u;
label_286d20:
    // 0x286d20: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
label_286d24:
    if (ctx->pc == 0x286D24u) {
        ctx->pc = 0x286D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D20u;
        // 0x286d24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286D28u;
        goto label_286d28;
    }
    ctx->pc = 0x286D20u;
    {
        const bool branch_taken_0x286d20 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x286D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D20u;
        // 0x286d24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d20) {
            ctx->pc = 0x286E7Cu;
            { ctx->pc = 0x286e7c; return; }
        }
    }
    ctx->pc = 0x286D28u;
label_286d28:
    // 0x286d28: 0x3c0b8007  lui         $t3, 0x8007
    ctx->pc = 0x286d28u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32775 << 16));
label_286d2c:
    // 0x286d2c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x286d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_286d30:
    // 0x286d30: 0x25656740  addiu       $a1, $t3, 0x6740
    ctx->pc = 0x286d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
label_286d34:
    // 0x286d34: 0x1032018  mult        $a0, $t0, $v1
    ctx->pc = 0x286d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_286d38:
    // 0x286d38: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x286d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_286d3c:
    // 0x286d3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x286d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_286d40:
    // 0x286d40: 0x15a3004a  bne         $t5, $v1, . + 4 + (0x4A << 2)
label_286d44:
    if (ctx->pc == 0x286D44u) {
        ctx->pc = 0x286D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D40u;
        // 0x286d44: 0x8d826700  lw          $v0, 0x6700($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286D48u;
        goto label_286d48;
    }
    ctx->pc = 0x286D40u;
    {
        const bool branch_taken_0x286d40 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 3));
        ctx->pc = 0x286D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D40u;
        // 0x286d44: 0x8d826700  lw          $v0, 0x6700($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d40) {
            ctx->pc = 0x286E6Cu;
            goto label_286e6c;
        }
    }
    ctx->pc = 0x286D48u;
label_286d48:
    // 0x286d48: 0x3c03b000  lui         $v1, 0xB000
    ctx->pc = 0x286d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45056 << 16));
label_286d4c:
    // 0x286d4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x286d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_286d50:
    // 0x286d50: 0x34631820  ori         $v1, $v1, 0x1820
    ctx->pc = 0x286d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6176);
label_286d54:
    // 0x286d54: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x286d54u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_286d58:
    // 0x286d58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x286d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_286d5c:
    // 0x286d5c: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
label_286d60:
    if (ctx->pc == 0x286D60u) {
        ctx->pc = 0x286D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D5Cu;
        // 0x286d60: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286D64u;
        goto label_286d64;
    }
    ctx->pc = 0x286D5Cu;
    {
        const bool branch_taken_0x286d5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x286D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D5Cu;
        // 0x286d60: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d5c) {
            ctx->pc = 0x286D80u;
            goto label_286d80;
        }
    }
    ctx->pc = 0x286D64u;
label_286d64:
    // 0x286d64: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x286d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_286d68:
    // 0x286d68: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x286d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_286d6c:
    // 0x286d6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x286d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286d70:
    // 0x286d70: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x286d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_286d74:
    // 0x286d74: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
label_286d78:
    if (ctx->pc == 0x286D78u) {
        ctx->pc = 0x286D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D74u;
        // 0x286d78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286D7Cu;
        goto label_286d7c;
    }
    ctx->pc = 0x286D74u;
    {
        const bool branch_taken_0x286d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D74u;
        // 0x286d78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d74) {
            ctx->pc = 0x286E84u;
            { ctx->pc = 0x286e84; return; }
        }
    }
    ctx->pc = 0x286D7Cu;
label_286d7c:
    // 0x286d7c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x286d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_286d80:
    // 0x286d80: 0x8d896700  lw          $t1, 0x6700($t4)
    ctx->pc = 0x286d80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
label_286d84:
    // 0x286d84: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x286d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_286d88:
    // 0x286d88: 0x25646740  addiu       $a0, $t3, 0x6740
    ctx->pc = 0x286d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
label_286d8c:
    // 0x286d8c: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x286d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_286d90:
    // 0x286d90: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x286d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_286d94:
    // 0x286d94: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x286d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_286d98:
    // 0x286d98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x286d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_286d9c:
    // 0x286d9c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_286da0:
    if (ctx->pc == 0x286DA0u) {
        ctx->pc = 0x286DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D9Cu;
        // 0x286da0: 0x94700002  lhu         $s0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286DA4u;
        goto label_286da4;
    }
    ctx->pc = 0x286D9Cu;
    {
        const bool branch_taken_0x286d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D9Cu;
        // 0x286da0: 0x94700002  lhu         $s0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d9c) {
            ctx->pc = 0x286E04u;
            goto label_286e04;
        }
    }
    ctx->pc = 0x286DA4u;
label_286da4:
    // 0x286da4: 0x3c0a8007  lui         $t2, 0x8007
    ctx->pc = 0x286da4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32775 << 16));
label_286da8:
    // 0x286da8: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x286da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_286dac:
    // 0x286dac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x286dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_286db0:
    // 0x286db0: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x286db0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_286db4:
    // 0x286db4: 0xe52018  mult        $a0, $a3, $a1
    ctx->pc = 0x286db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_286db8:
    // 0x286db8: 0x25666740  addiu       $a2, $t3, 0x6740
    ctx->pc = 0x286db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
label_286dbc:
    // 0x286dbc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x286dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_286dc0:
    // 0x286dc0: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x286dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_286dc4:
    // 0x286dc4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x286dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_286dc8:
    // 0x286dc8: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x286dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_286dcc:
    // 0x286dcc: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x286dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_286dd0:
    // 0x286dd0: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x286dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_286dd4:
    // 0x286dd4: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x286dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_286dd8:
    // 0x286dd8: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x286dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_286ddc:
    // 0x286ddc: 0x8cae0010  lw          $t6, 0x10($a1)
    ctx->pc = 0x286ddcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_286de0:
    // 0x286de0: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x286de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_286de4:
    // 0x286de4: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x286de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_286de8:
    // 0x286de8: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x286de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_286dec:
    // 0x286dec: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x286decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_286df0:
    // 0x286df0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x286df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_286df4:
    // 0x286df4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_286df8:
    if (ctx->pc == 0x286DF8u) {
        ctx->pc = 0x286DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DF4u;
        // 0x286df8: 0xac8e0010  sw          $t6, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286DFCu;
        goto label_286dfc;
    }
    ctx->pc = 0x286DF4u;
    {
        const bool branch_taken_0x286df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DF4u;
        // 0x286df8: 0xac8e0010  sw          $t6, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286df4) {
            ctx->pc = 0x286DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286da8;
        }
    }
    ctx->pc = 0x286DFCu;
label_286dfc:
    // 0x286dfc: 0x10000003  b           . + 4 + (0x3 << 2)
label_286e00:
    if (ctx->pc == 0x286E00u) {
        ctx->pc = 0x286E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DFCu;
        // 0x286e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286E04u;
        goto label_286e04;
    }
    ctx->pc = 0x286DFCu;
    {
        const bool branch_taken_0x286dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DFCu;
        // 0x286e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dfc) {
            ctx->pc = 0x286E0Cu;
            goto label_286e0c;
        }
    }
    ctx->pc = 0x286E04u;
label_286e04:
    // 0x286e04: 0x3c0a8007  lui         $t2, 0x8007
    ctx->pc = 0x286e04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32775 << 16));
label_286e08:
    // 0x286e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_286e0c:
    // 0x286e0c: 0x8d846700  lw          $a0, 0x6700($t4)
    ctx->pc = 0x286e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
label_286e10:
    // 0x286e10: 0xdd436708  ld          $v1, 0x6708($t2)
    ctx->pc = 0x286e10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 26376)));
label_286e14:
    // 0x286e14: 0x1a21014  dsllv       $v0, $v0, $t5
    ctx->pc = 0x286e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 13) & 0x3F));
label_286e18:
    // 0x286e18: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x286e18u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_286e1c:
    // 0x286e1c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x286e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_286e20:
    // 0x286e20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x286e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_286e24:
    // 0x286e24: 0xad846700  sw          $a0, 0x6700($t4)
    ctx->pc = 0x286e24u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 26368), GPR_U32(ctx, 4));
label_286e28:
    // 0x286e28: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_286e2c:
    if (ctx->pc == 0x286E2Cu) {
        ctx->pc = 0x286E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E28u;
        // 0x286e2c: 0xfd436708  sd          $v1, 0x6708($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 26376), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286E30u;
        goto label_286e30;
    }
    ctx->pc = 0x286E28u;
    {
        const bool branch_taken_0x286e28 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E28u;
        // 0x286e2c: 0xfd436708  sd          $v1, 0x6708($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 26376), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e28) {
            ctx->pc = 0x286E38u;
            goto label_286e38;
        }
    }
    ctx->pc = 0x286E30u;
label_286e30:
    // 0x286e30: 0xc01d918  jal         func_076460
label_286e34:
    if (ctx->pc == 0x286E34u) {
        ctx->pc = 0x286E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E30u;
        // 0x286e34: 0x95646740  lhu         $a0, 0x6740($t3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 26432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286E38u;
        goto label_286e38;
    }
    ctx->pc = 0x286E30u;
    SET_GPR_U32(ctx, 31, 0x286E38u);
    ctx->pc = 0x286E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E30u;
    // 0x286e34: 0x95646740  lhu         $a0, 0x6740($t3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 26432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x286E30u, 0x286E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E38u;
label_286e38:
    // 0x286e38: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x286e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
label_286e3c:
    // 0x286e3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_286e40:
    if (ctx->pc == 0x286E40u) {
        ctx->pc = 0x286E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E3Cu;
        // 0x286e40: 0x24030083  addiu       $v1, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286E44u;
        goto label_286e44;
    }
    ctx->pc = 0x286E3Cu;
    {
        const bool branch_taken_0x286e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E3Cu;
        // 0x286e40: 0x24030083  addiu       $v1, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e3c) {
            ctx->pc = 0x286E50u;
            goto label_286e50;
        }
    }
    ctx->pc = 0x286E44u;
label_286e44:
    // 0x286e44: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x286e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
label_286e48:
    // 0x286e48: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x286e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
label_286e4c:
    // 0x286e4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x286e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_286e50:
    // 0x286e50: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x286e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
label_286e54:
    // 0x286e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286e58:
    // 0x286e58: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x286e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
label_286e5c:
    // 0x286e5c: 0xc01d80e  jal         func_076038
label_286e60:
    if (ctx->pc == 0x286E60u) {
        ctx->pc = 0x286E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E5Cu;
        // 0x286e60: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286E64u;
        goto label_286e64;
    }
    ctx->pc = 0x286E5Cu;
    SET_GPR_U32(ctx, 31, 0x286E64u);
    ctx->pc = 0x286E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286E5Cu;
    // 0x286e60: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76038u, 0x286E5Cu, 0x286E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E64u;
label_286e64:
    // 0x286e64: 0x10000005  b           . + 4 + (0x5 << 2)
label_286e68:
    if (ctx->pc == 0x286E68u) {
        ctx->pc = 0x286E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E64u;
        // 0x286e68: 0x503023  subu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286E6Cu;
        goto label_286e6c;
    }
    ctx->pc = 0x286E64u;
    {
        const bool branch_taken_0x286e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E64u;
        // 0x286e68: 0x503023  subu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e64) {
            ctx->pc = 0x286E7Cu;
            { ctx->pc = 0x286e7c; return; }
        }
    }
    ctx->pc = 0x286E6Cu;
label_286e6c:
    // 0x286e6c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x286e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->pc = 0x286e70u;
    return;
}

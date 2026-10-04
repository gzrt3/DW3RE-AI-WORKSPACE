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


void FUN_0014eba0_part639(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x286400u: goto label_286400;
        case 0x286404u: goto label_286404;
        case 0x286408u: goto label_286408;
        case 0x28640cu: goto label_28640c;
        case 0x286410u: goto label_286410;
        case 0x286414u: goto label_286414;
        case 0x286418u: goto label_286418;
        case 0x28641cu: goto label_28641c;
        case 0x286420u: goto label_286420;
        case 0x286424u: goto label_286424;
        case 0x286428u: goto label_286428;
        case 0x28642cu: goto label_28642c;
        case 0x286430u: goto label_286430;
        case 0x286434u: goto label_286434;
        case 0x286438u: goto label_286438;
        case 0x28643cu: goto label_28643c;
        case 0x286440u: goto label_286440;
        case 0x286444u: goto label_286444;
        case 0x286448u: goto label_286448;
        case 0x28644cu: goto label_28644c;
        case 0x286450u: goto label_286450;
        case 0x286454u: goto label_286454;
        case 0x286458u: goto label_286458;
        case 0x28645cu: goto label_28645c;
        case 0x286460u: goto label_286460;
        case 0x286464u: goto label_286464;
        case 0x286468u: goto label_286468;
        case 0x28646cu: goto label_28646c;
        case 0x286470u: goto label_286470;
        case 0x286474u: goto label_286474;
        case 0x286478u: goto label_286478;
        case 0x28647cu: goto label_28647c;
        case 0x286480u: goto label_286480;
        case 0x286484u: goto label_286484;
        case 0x286488u: goto label_286488;
        case 0x28648cu: goto label_28648c;
        case 0x286490u: goto label_286490;
        case 0x286494u: goto label_286494;
        case 0x286498u: goto label_286498;
        case 0x28649cu: goto label_28649c;
        case 0x2864a0u: goto label_2864a0;
        case 0x2864a4u: goto label_2864a4;
        case 0x2864a8u: goto label_2864a8;
        case 0x2864acu: goto label_2864ac;
        case 0x2864b0u: goto label_2864b0;
        case 0x2864b4u: goto label_2864b4;
        case 0x2864b8u: goto label_2864b8;
        case 0x2864bcu: goto label_2864bc;
        case 0x2864c0u: goto label_2864c0;
        case 0x2864c4u: goto label_2864c4;
        case 0x2864c8u: goto label_2864c8;
        case 0x2864ccu: goto label_2864cc;
        case 0x2864d0u: goto label_2864d0;
        case 0x2864d4u: goto label_2864d4;
        case 0x2864d8u: goto label_2864d8;
        case 0x2864dcu: goto label_2864dc;
        case 0x2864e0u: goto label_2864e0;
        case 0x2864e4u: goto label_2864e4;
        case 0x2864e8u: goto label_2864e8;
        case 0x2864ecu: goto label_2864ec;
        case 0x2864f0u: goto label_2864f0;
        case 0x2864f4u: goto label_2864f4;
        case 0x2864f8u: goto label_2864f8;
        case 0x2864fcu: goto label_2864fc;
        case 0x286500u: goto label_286500;
        case 0x286504u: goto label_286504;
        case 0x286508u: goto label_286508;
        case 0x28650cu: goto label_28650c;
        case 0x286510u: goto label_286510;
        case 0x286514u: goto label_286514;
        case 0x286518u: goto label_286518;
        case 0x28651cu: goto label_28651c;
        case 0x286520u: goto label_286520;
        case 0x286524u: goto label_286524;
        case 0x286528u: goto label_286528;
        case 0x28652cu: goto label_28652c;
        case 0x286530u: goto label_286530;
        case 0x286534u: goto label_286534;
        case 0x286538u: goto label_286538;
        case 0x28653cu: goto label_28653c;
        case 0x286540u: goto label_286540;
        case 0x286544u: goto label_286544;
        case 0x286548u: goto label_286548;
        case 0x28654cu: goto label_28654c;
        case 0x286550u: goto label_286550;
        case 0x286554u: goto label_286554;
        case 0x286558u: goto label_286558;
        case 0x28655cu: goto label_28655c;
        case 0x286560u: goto label_286560;
        case 0x286564u: goto label_286564;
        case 0x286568u: goto label_286568;
        case 0x28656cu: goto label_28656c;
        case 0x286570u: goto label_286570;
        case 0x286574u: goto label_286574;
        case 0x286578u: goto label_286578;
        case 0x28657cu: goto label_28657c;
        case 0x286580u: goto label_286580;
        case 0x286584u: goto label_286584;
        case 0x286588u: goto label_286588;
        case 0x28658cu: goto label_28658c;
        case 0x286590u: goto label_286590;
        case 0x286594u: goto label_286594;
        case 0x286598u: goto label_286598;
        case 0x28659cu: goto label_28659c;
        case 0x2865a0u: goto label_2865a0;
        case 0x2865a4u: goto label_2865a4;
        case 0x2865a8u: goto label_2865a8;
        case 0x2865acu: goto label_2865ac;
        case 0x2865b0u: goto label_2865b0;
        case 0x2865b4u: goto label_2865b4;
        case 0x2865b8u: goto label_2865b8;
        case 0x2865bcu: goto label_2865bc;
        case 0x2865c0u: goto label_2865c0;
        case 0x2865c4u: goto label_2865c4;
        case 0x2865c8u: goto label_2865c8;
        case 0x2865ccu: goto label_2865cc;
        case 0x2865d0u: goto label_2865d0;
        case 0x2865d4u: goto label_2865d4;
        case 0x2865d8u: goto label_2865d8;
        case 0x2865dcu: goto label_2865dc;
        case 0x2865e0u: goto label_2865e0;
        case 0x2865e4u: goto label_2865e4;
        case 0x2865e8u: goto label_2865e8;
        case 0x2865ecu: goto label_2865ec;
        case 0x2865f0u: goto label_2865f0;
        case 0x2865f4u: goto label_2865f4;
        case 0x2865f8u: goto label_2865f8;
        case 0x2865fcu: goto label_2865fc;
        case 0x286600u: goto label_286600;
        case 0x286604u: goto label_286604;
        case 0x286608u: goto label_286608;
        case 0x28660cu: goto label_28660c;
        case 0x286610u: goto label_286610;
        case 0x286614u: goto label_286614;
        case 0x286618u: goto label_286618;
        case 0x28661cu: goto label_28661c;
        case 0x286620u: goto label_286620;
        case 0x286624u: goto label_286624;
        case 0x286628u: goto label_286628;
        case 0x28662cu: goto label_28662c;
        case 0x286630u: goto label_286630;
        case 0x286634u: goto label_286634;
        case 0x286638u: goto label_286638;
        case 0x28663cu: goto label_28663c;
        case 0x286640u: goto label_286640;
        case 0x286644u: goto label_286644;
        case 0x286648u: goto label_286648;
        case 0x28664cu: goto label_28664c;
        case 0x286650u: goto label_286650;
        case 0x286654u: goto label_286654;
        case 0x286658u: goto label_286658;
        case 0x28665cu: goto label_28665c;
        case 0x286660u: goto label_286660;
        case 0x286664u: goto label_286664;
        case 0x286668u: goto label_286668;
        case 0x28666cu: goto label_28666c;
        case 0x286670u: goto label_286670;
        case 0x286674u: goto label_286674;
        case 0x286678u: goto label_286678;
        case 0x28667cu: goto label_28667c;
        case 0x286680u: goto label_286680;
        case 0x286684u: goto label_286684;
        case 0x286688u: goto label_286688;
        case 0x28668cu: goto label_28668c;
        case 0x286690u: goto label_286690;
        case 0x286694u: goto label_286694;
        case 0x286698u: goto label_286698;
        case 0x28669cu: goto label_28669c;
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
        default: return;
    }

label_286400:
    // 0x286400: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286404:
    // 0x286404: 0x34c61fff  ori         $a2, $a2, 0x1FFF
    ctx->pc = 0x286404u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8191);
label_286408:
    // 0x286408: 0x24a747a8  addiu       $a3, $a1, 0x47A8
    ctx->pc = 0x286408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 18344));
label_28640c:
    // 0x28640c: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x28640cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_286410:
    // 0x286410: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_286414:
    // 0x286414: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x286414u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_286418:
    // 0x286418: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x286418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_28641c:
    // 0x28641c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286420:
    // 0x286420: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x286420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_286424:
    // 0x286424: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_286428:
    // 0x286428: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x286428u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_28642c:
    // 0x28642c: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x28642cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
label_286430:
    // 0x286430: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286434:
    // 0x286434: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x286434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_286438:
    // 0x286438: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28643c:
    // 0x28643c: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x28643cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_286440:
    // 0x286440: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x286440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_286444:
    // 0x286444: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_286448:
    // 0x286448: 0x30421fe0  andi        $v0, $v0, 0x1FE0
    ctx->pc = 0x286448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8160);
label_28644c:
    // 0x28644c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28644cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_286450:
    // 0x286450: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x286450u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_286454:
    // 0x286454: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x286454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_286458:
    // 0x286458: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28645c:
    // 0x28645c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x28645cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_286460:
    // 0x286460: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_286464:
    // 0x286464: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x286464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_286468:
    // 0x286468: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x286468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_28646c:
    // 0x28646c: 0x3e00008  jr          $ra
label_286470:
    if (ctx->pc == 0x286470u) {
        ctx->pc = 0x286470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28646Cu;
        // 0x286470: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286474u;
        goto label_286474;
    }
    ctx->pc = 0x28646Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28646Cu;
        // 0x286470: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28646Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286474u;
label_286474:
    // 0x286474: 0x0  nop
    ctx->pc = 0x286474u;
    // NOP
label_286478:
    // 0x286478: 0x3c06bc00  lui         $a2, 0xBC00
    ctx->pc = 0x286478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48128 << 16));
label_28647c:
    // 0x28647c: 0x8cc603c0  lw          $a2, 0x3C0($a2)
    ctx->pc = 0x28647cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 960)));
label_286480:
    // 0x286480: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_286484:
    if (ctx->pc == 0x286484u) {
        ctx->pc = 0x286484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286480u;
        // 0x286484: 0x3c088007  lui         $t0, 0x8007 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286488u;
        goto label_286488;
    }
    ctx->pc = 0x286480u;
    {
        const bool branch_taken_0x286480 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x286484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286480u;
        // 0x286484: 0x3c088007  lui         $t0, 0x8007 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286480) {
            ctx->pc = 0x2864C8u;
            goto label_2864c8;
        }
    }
    ctx->pc = 0x286488u;
label_286488:
    // 0x286488: 0x3c02bc00  lui         $v0, 0xBC00
    ctx->pc = 0x286488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48128 << 16));
label_28648c:
    // 0x28648c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x28648cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_286490:
    // 0x286490: 0x25074700  addiu       $a3, $t0, 0x4700
    ctx->pc = 0x286490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 18176));
label_286494:
    // 0x286494: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x286494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_286498:
    // 0x286498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28649c:
    // 0x28649c: 0x0  nop
    ctx->pc = 0x28649cu;
    // NOP
label_2864a0:
    // 0x2864a0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2864a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2864a4:
    // 0x2864a4: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2864a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2864a8:
    // 0x2864a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2864a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2864ac:
    // 0x2864ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2864acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2864b0:
    // 0x2864b0: 0x28a20026  slti        $v0, $a1, 0x26
    ctx->pc = 0x2864b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)38) ? 1 : 0);
label_2864b4:
    // 0x2864b4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2864b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2864b8:
    // 0x2864b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2864bc:
    if (ctx->pc == 0x2864BCu) {
        ctx->pc = 0x2864C0u;
        goto label_2864c0;
    }
    ctx->pc = 0x2864B8u;
    {
        const bool branch_taken_0x2864b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2864b8) {
            ctx->pc = 0x2864A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2864a0;
        }
    }
    ctx->pc = 0x2864C0u;
label_2864c0:
    // 0x2864c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2864c4:
    if (ctx->pc == 0x2864C4u) {
        ctx->pc = 0x2864C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864C0u;
        // 0x2864c4: 0xdd034700  ld          $v1, 0x4700($t0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2864C8u;
        goto label_2864c8;
    }
    ctx->pc = 0x2864C0u;
    {
        const bool branch_taken_0x2864c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864C0u;
        // 0x2864c4: 0xdd034700  ld          $v1, 0x4700($t0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864c0) {
            ctx->pc = 0x2864CCu;
            goto label_2864cc;
        }
    }
    ctx->pc = 0x2864C8u;
label_2864c8:
    // 0x2864c8: 0xdd034700  ld          $v1, 0x4700($t0)
    ctx->pc = 0x2864c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
label_2864cc:
    // 0x2864cc: 0x316b8  dsll        $v0, $v1, 26
    ctx->pc = 0x2864ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 26);
label_2864d0:
    // 0x2864d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2864d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2864d4:
    // 0x2864d4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2864d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2864d8:
    // 0x2864d8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2864dc:
    if (ctx->pc == 0x2864DCu) {
        ctx->pc = 0x2864E0u;
        goto label_2864e0;
    }
    ctx->pc = 0x2864D8u;
    {
        const bool branch_taken_0x2864d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2864d8) {
            ctx->pc = 0x286530u;
            goto label_286530;
        }
    }
    ctx->pc = 0x2864E0u;
label_2864e0:
    // 0x2864e0: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x2864e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_2864e4:
    // 0x2864e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2864e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2864e8:
    // 0x2864e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2864e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2864ec:
    // 0x2864ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2864ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2864f0:
    // 0x2864f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2864f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2864f4:
    // 0x2864f4: 0x2404f3ff  addiu       $a0, $zero, -0xC01
    ctx->pc = 0x2864f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
label_2864f8:
    // 0x2864f8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2864f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_2864fc:
    // 0x2864fc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2864fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_286500:
    // 0x286500: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x286500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_286504:
    // 0x286504: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x286504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_286508:
    // 0x286508: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x286508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_28650c:
    // 0x28650c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x28650cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_286510:
    // 0x286510: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x286510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
label_286514:
    // 0x286514: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x286514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_286518:
    // 0x286518: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x286518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_28651c:
    // 0x28651c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x28651cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_286520:
    // 0x286520: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x286520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_286524:
    // 0x286524: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x286524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_286528:
    // 0x286528: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x286528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_28652c:
    // 0x28652c: 0xfd024700  sd          $v0, 0x4700($t0)
    ctx->pc = 0x28652cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 18176), GPR_U64(ctx, 2));
label_286530:
    // 0x286530: 0x3e00008  jr          $ra
label_286534:
    if (ctx->pc == 0x286534u) {
        ctx->pc = 0x286538u;
        goto label_286538;
    }
    ctx->pc = 0x286530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286538u;
label_286538:
    // 0x286538: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x286538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_28653c:
    // 0x28653c: 0x2ce20081  sltiu       $v0, $a3, 0x81
    ctx->pc = 0x28653cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_286540:
    // 0x286540: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_286544:
    if (ctx->pc == 0x286544u) {
        ctx->pc = 0x286544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286540u;
        // 0x286544: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286548u;
        goto label_286548;
    }
    ctx->pc = 0x286540u;
    {
        const bool branch_taken_0x286540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286540u;
        // 0x286544: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286540) {
            ctx->pc = 0x286564u;
            goto label_286564;
        }
    }
    ctx->pc = 0x286548u;
label_286548:
    // 0x286548: 0x2cc20080  sltiu       $v0, $a2, 0x80
    ctx->pc = 0x286548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_28654c:
    // 0x28654c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_286550:
    if (ctx->pc == 0x286550u) {
        ctx->pc = 0x286550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28654Cu;
        // 0x286550: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286554u;
        goto label_286554;
    }
    ctx->pc = 0x28654Cu;
    {
        const bool branch_taken_0x28654c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28654Cu;
        // 0x286550: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28654c) {
            ctx->pc = 0x28655Cu;
            goto label_28655c;
        }
    }
    ctx->pc = 0x286554u;
label_286554:
    // 0x286554: 0x10000003  b           . + 4 + (0x3 << 2)
label_286558:
    if (ctx->pc == 0x286558u) {
        ctx->pc = 0x286558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286554u;
        // 0x286558: 0x462823  subu        $a1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28655Cu;
        goto label_28655c;
    }
    ctx->pc = 0x286554u;
    {
        const bool branch_taken_0x286554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286554u;
        // 0x286558: 0x462823  subu        $a1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286554) {
            ctx->pc = 0x286564u;
            goto label_286564;
        }
    }
    ctx->pc = 0x28655Cu;
label_28655c:
    // 0x28655c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x28655cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_286560:
    // 0x286560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286564:
    // 0x286564: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x286564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_286568:
    // 0x286568: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x286568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_28656c:
    // 0x28656c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_286570:
    if (ctx->pc == 0x286570u) {
        ctx->pc = 0x286570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28656Cu;
        // 0x286570: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286574u;
        goto label_286574;
    }
    ctx->pc = 0x28656Cu;
    {
        const bool branch_taken_0x28656c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28656Cu;
        // 0x286570: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28656c) {
            ctx->pc = 0x2865ACu;
            goto label_2865ac;
        }
    }
    ctx->pc = 0x286574u;
label_286574:
    // 0x286574: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x286574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_286578:
    // 0x286578: 0x3c098007  lui         $t1, 0x8007
    ctx->pc = 0x286578u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32775 << 16));
label_28657c:
    // 0x28657c: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x28657cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
label_286580:
    // 0x286580: 0x24a247b0  addiu       $v0, $a1, 0x47B0
    ctx->pc = 0x286580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 18352));
label_286584:
    // 0x286584: 0x1482021  addu        $a0, $t2, $t0
    ctx->pc = 0x286584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_286588:
    // 0x286588: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x286588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_28658c:
    // 0x28658c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x28658cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_286590:
    // 0x286590: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x286590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_286594:
    // 0x286594: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x286594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_286598:
    // 0x286598: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x286598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_28659c:
    // 0x28659c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2865a0:
    if (ctx->pc == 0x2865A0u) {
        ctx->pc = 0x2865A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28659Cu;
        // 0x2865a0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2865A4u;
        goto label_2865a4;
    }
    ctx->pc = 0x28659Cu;
    {
        const bool branch_taken_0x28659c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2865A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28659Cu;
        // 0x2865a0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28659c) {
            ctx->pc = 0x286580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286580;
        }
    }
    ctx->pc = 0x2865A4u;
label_2865a4:
    // 0x2865a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2865a8:
    if (ctx->pc == 0x2865A8u) {
        ctx->pc = 0x2865A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865A4u;
        // 0x2865a8: 0xdd234700  ld          $v1, 0x4700($t1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 18176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2865ACu;
        goto label_2865ac;
    }
    ctx->pc = 0x2865A4u;
    {
        const bool branch_taken_0x2865a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2865A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865A4u;
        // 0x2865a8: 0xdd234700  ld          $v1, 0x4700($t1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 18176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865a4) {
            ctx->pc = 0x2865B4u;
            goto label_2865b4;
        }
    }
    ctx->pc = 0x2865ACu;
label_2865ac:
    // 0x2865ac: 0x3c098007  lui         $t1, 0x8007
    ctx->pc = 0x2865acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32775 << 16));
label_2865b0:
    // 0x2865b0: 0xdd234700  ld          $v1, 0x4700($t1)
    ctx->pc = 0x2865b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 18176)));
label_2865b4:
    // 0x2865b4: 0x316b8  dsll        $v0, $v1, 26
    ctx->pc = 0x2865b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 26);
label_2865b8:
    // 0x2865b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2865b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2865bc:
    // 0x2865bc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2865bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2865c0:
    // 0x2865c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2865c4:
    if (ctx->pc == 0x2865C4u) {
        ctx->pc = 0x2865C8u;
        goto label_2865c8;
    }
    ctx->pc = 0x2865C0u;
    {
        const bool branch_taken_0x2865c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2865c0) {
            ctx->pc = 0x2865D0u;
            goto label_2865d0;
        }
    }
    ctx->pc = 0x2865C8u;
label_2865c8:
    // 0x2865c8: 0x3e00008  jr          $ra
label_2865cc:
    if (ctx->pc == 0x2865CCu) {
        ctx->pc = 0x2865CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865C8u;
        // 0x2865cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2865D0u;
        goto label_2865d0;
    }
    ctx->pc = 0x2865C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2865CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865C8u;
        // 0x2865cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2865C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2865D0u;
label_2865d0:
    // 0x2865d0: 0x3133e  dsrl32      $v0, $v1, 12
    ctx->pc = 0x2865d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 12));
label_2865d4:
    // 0x2865d4: 0x3e00008  jr          $ra
label_2865d8:
    if (ctx->pc == 0x2865D8u) {
        ctx->pc = 0x2865D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865D4u;
        // 0x2865d8: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2865DCu;
        goto label_2865dc;
    }
    ctx->pc = 0x2865D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2865D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865D4u;
        // 0x2865d8: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2865D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2865DCu;
label_2865dc:
    // 0x2865dc: 0x0  nop
    ctx->pc = 0x2865dcu;
    // NOP
label_2865e0:
    // 0x2865e0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2865e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2865e4:
    // 0x2865e4: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x2865e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2865e8:
    // 0x2865e8: 0x2ca20081  sltiu       $v0, $a1, 0x81
    ctx->pc = 0x2865e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_2865ec:
    // 0x2865ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2865f0:
    if (ctx->pc == 0x2865F0u) {
        ctx->pc = 0x2865F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865ECu;
        // 0x2865f0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2865F4u;
        goto label_2865f4;
    }
    ctx->pc = 0x2865ECu;
    {
        const bool branch_taken_0x2865ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2865F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865ECu;
        // 0x2865f0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865ec) {
            ctx->pc = 0x286614u;
            goto label_286614;
        }
    }
    ctx->pc = 0x2865F4u;
label_2865f4:
    // 0x2865f4: 0x2cc20080  sltiu       $v0, $a2, 0x80
    ctx->pc = 0x2865f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_2865f8:
    // 0x2865f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2865fc:
    if (ctx->pc == 0x2865FCu) {
        ctx->pc = 0x2865FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865F8u;
        // 0x2865fc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286600u;
        goto label_286600;
    }
    ctx->pc = 0x2865F8u;
    {
        const bool branch_taken_0x2865f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2865FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865F8u;
        // 0x2865fc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865f8) {
            ctx->pc = 0x286608u;
            goto label_286608;
        }
    }
    ctx->pc = 0x286600u;
label_286600:
    // 0x286600: 0x10000003  b           . + 4 + (0x3 << 2)
label_286604:
    if (ctx->pc == 0x286604u) {
        ctx->pc = 0x286604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286600u;
        // 0x286604: 0x461823  subu        $v1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286608u;
        goto label_286608;
    }
    ctx->pc = 0x286600u;
    {
        const bool branch_taken_0x286600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286600u;
        // 0x286604: 0x461823  subu        $v1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286600) {
            ctx->pc = 0x286610u;
            goto label_286610;
        }
    }
    ctx->pc = 0x286608u;
label_286608:
    // 0x286608: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x286608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_28660c:
    // 0x28660c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28660cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286610:
    // 0x286610: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x286610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_286614:
    // 0x286614: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x286614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_286618:
    // 0x286618: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_28661c:
    if (ctx->pc == 0x28661Cu) {
        ctx->pc = 0x28661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286618u;
        // 0x28661c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286620u;
        goto label_286620;
    }
    ctx->pc = 0x286618u;
    {
        const bool branch_taken_0x286618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286618u;
        // 0x28661c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286618) {
            ctx->pc = 0x28664Cu;
            goto label_28664c;
        }
    }
    ctx->pc = 0x286620u;
label_286620:
    // 0x286620: 0x3c088007  lui         $t0, 0x8007
    ctx->pc = 0x286620u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
label_286624:
    // 0x286624: 0x0  nop
    ctx->pc = 0x286624u;
    // NOP
label_286628:
    // 0x286628: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x286628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_28662c:
    // 0x28662c: 0x250347b0  addiu       $v1, $t0, 0x47B0
    ctx->pc = 0x28662cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 18352));
label_286630:
    // 0x286630: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x286630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_286634:
    // 0x286634: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x286634u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_286638:
    // 0x286638: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x286638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_28663c:
    // 0x28663c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x28663cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_286640:
    // 0x286640: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x286640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_286644:
    // 0x286644: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_286648:
    if (ctx->pc == 0x286648u) {
        ctx->pc = 0x286648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286644u;
        // 0x286648: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28664Cu;
        goto label_28664c;
    }
    ctx->pc = 0x286644u;
    {
        const bool branch_taken_0x286644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286644u;
        // 0x286648: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286644) {
            ctx->pc = 0x286628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286628;
        }
    }
    ctx->pc = 0x28664Cu;
label_28664c:
    // 0x28664c: 0x3e00008  jr          $ra
label_286650:
    if (ctx->pc == 0x286650u) {
        ctx->pc = 0x286654u;
        goto label_286654;
    }
    ctx->pc = 0x28664Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28664Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286654u;
label_286654:
    // 0x286654: 0x0  nop
    ctx->pc = 0x286654u;
    // NOP
label_286658:
    // 0x286658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x286658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28665c:
    // 0x28665c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x28665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_286660:
    // 0x286660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x286660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_286664:
    // 0x286664: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x286664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_286668:
    // 0x286668: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x286668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_28666c:
    // 0x28666c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x28666cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_286670:
    // 0x286670: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x286670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_286674:
    // 0x286674: 0x3484f000  ori         $a0, $a0, 0xF000
    ctx->pc = 0x286674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
label_286678:
    // 0x286678: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x286678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28667c:
    // 0x28667c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x28667cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_286680:
    // 0x286680: 0x0  nop
    ctx->pc = 0x286680u;
    // NOP
label_286684:
    // 0x286684: 0x0  nop
    ctx->pc = 0x286684u;
    // NOP
label_286688:
    // 0x286688: 0x0  nop
    ctx->pc = 0x286688u;
    // NOP
label_28668c:
    // 0x28668c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_286690:
    if (ctx->pc == 0x286690u) {
        ctx->pc = 0x286694u;
        goto label_286694;
    }
    ctx->pc = 0x28668Cu;
    {
        const bool branch_taken_0x28668c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28668c) {
            ctx->pc = 0x286678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286678;
        }
    }
    ctx->pc = 0x286694u;
label_286694:
    // 0x286694: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x286694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_286698:
    // 0x286698: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x286698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28669c:
    // 0x28669c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x28669cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
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
    ctx->pc = 0x286bd0u;
    return;
}

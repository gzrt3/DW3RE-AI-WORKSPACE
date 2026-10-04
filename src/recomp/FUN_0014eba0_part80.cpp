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


void FUN_0014eba0_part80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1754d0u: goto label_1754d0;
        case 0x1754d4u: goto label_1754d4;
        case 0x1754d8u: goto label_1754d8;
        case 0x1754dcu: goto label_1754dc;
        case 0x1754e0u: goto label_1754e0;
        case 0x1754e4u: goto label_1754e4;
        case 0x1754e8u: goto label_1754e8;
        case 0x1754ecu: goto label_1754ec;
        case 0x1754f0u: goto label_1754f0;
        case 0x1754f4u: goto label_1754f4;
        case 0x1754f8u: goto label_1754f8;
        case 0x1754fcu: goto label_1754fc;
        case 0x175500u: goto label_175500;
        case 0x175504u: goto label_175504;
        case 0x175508u: goto label_175508;
        case 0x17550cu: goto label_17550c;
        case 0x175510u: goto label_175510;
        case 0x175514u: goto label_175514;
        case 0x175518u: goto label_175518;
        case 0x17551cu: goto label_17551c;
        case 0x175520u: goto label_175520;
        case 0x175524u: goto label_175524;
        case 0x175528u: goto label_175528;
        case 0x17552cu: goto label_17552c;
        case 0x175530u: goto label_175530;
        case 0x175534u: goto label_175534;
        case 0x175538u: goto label_175538;
        case 0x17553cu: goto label_17553c;
        case 0x175540u: goto label_175540;
        case 0x175544u: goto label_175544;
        case 0x175548u: goto label_175548;
        case 0x17554cu: goto label_17554c;
        case 0x175550u: goto label_175550;
        case 0x175554u: goto label_175554;
        case 0x175558u: goto label_175558;
        case 0x17555cu: goto label_17555c;
        case 0x175560u: goto label_175560;
        case 0x175564u: goto label_175564;
        case 0x175568u: goto label_175568;
        case 0x17556cu: goto label_17556c;
        case 0x175570u: goto label_175570;
        case 0x175574u: goto label_175574;
        case 0x175578u: goto label_175578;
        case 0x17557cu: goto label_17557c;
        case 0x175580u: goto label_175580;
        case 0x175584u: goto label_175584;
        case 0x175588u: goto label_175588;
        case 0x17558cu: goto label_17558c;
        case 0x175590u: goto label_175590;
        case 0x175594u: goto label_175594;
        case 0x175598u: goto label_175598;
        case 0x17559cu: goto label_17559c;
        case 0x1755a0u: goto label_1755a0;
        case 0x1755a4u: goto label_1755a4;
        case 0x1755a8u: goto label_1755a8;
        case 0x1755acu: goto label_1755ac;
        case 0x1755b0u: goto label_1755b0;
        case 0x1755b4u: goto label_1755b4;
        case 0x1755b8u: goto label_1755b8;
        case 0x1755bcu: goto label_1755bc;
        case 0x1755c0u: goto label_1755c0;
        case 0x1755c4u: goto label_1755c4;
        case 0x1755c8u: goto label_1755c8;
        case 0x1755ccu: goto label_1755cc;
        case 0x1755d0u: goto label_1755d0;
        case 0x1755d4u: goto label_1755d4;
        case 0x1755d8u: goto label_1755d8;
        case 0x1755dcu: goto label_1755dc;
        case 0x1755e0u: goto label_1755e0;
        case 0x1755e4u: goto label_1755e4;
        case 0x1755e8u: goto label_1755e8;
        case 0x1755ecu: goto label_1755ec;
        case 0x1755f0u: goto label_1755f0;
        case 0x1755f4u: goto label_1755f4;
        case 0x1755f8u: goto label_1755f8;
        case 0x1755fcu: goto label_1755fc;
        case 0x175600u: goto label_175600;
        case 0x175604u: goto label_175604;
        case 0x175608u: goto label_175608;
        case 0x17560cu: goto label_17560c;
        case 0x175610u: goto label_175610;
        case 0x175614u: goto label_175614;
        case 0x175618u: goto label_175618;
        case 0x17561cu: goto label_17561c;
        case 0x175620u: goto label_175620;
        case 0x175624u: goto label_175624;
        case 0x175628u: goto label_175628;
        case 0x17562cu: goto label_17562c;
        case 0x175630u: goto label_175630;
        case 0x175634u: goto label_175634;
        case 0x175638u: goto label_175638;
        case 0x17563cu: goto label_17563c;
        case 0x175640u: goto label_175640;
        case 0x175644u: goto label_175644;
        case 0x175648u: goto label_175648;
        case 0x17564cu: goto label_17564c;
        case 0x175650u: goto label_175650;
        case 0x175654u: goto label_175654;
        case 0x175658u: goto label_175658;
        case 0x17565cu: goto label_17565c;
        case 0x175660u: goto label_175660;
        case 0x175664u: goto label_175664;
        case 0x175668u: goto label_175668;
        case 0x17566cu: goto label_17566c;
        case 0x175670u: goto label_175670;
        case 0x175674u: goto label_175674;
        case 0x175678u: goto label_175678;
        case 0x17567cu: goto label_17567c;
        case 0x175680u: goto label_175680;
        case 0x175684u: goto label_175684;
        case 0x175688u: goto label_175688;
        case 0x17568cu: goto label_17568c;
        case 0x175690u: goto label_175690;
        case 0x175694u: goto label_175694;
        case 0x175698u: goto label_175698;
        case 0x17569cu: goto label_17569c;
        case 0x1756a0u: goto label_1756a0;
        case 0x1756a4u: goto label_1756a4;
        case 0x1756a8u: goto label_1756a8;
        case 0x1756acu: goto label_1756ac;
        case 0x1756b0u: goto label_1756b0;
        case 0x1756b4u: goto label_1756b4;
        case 0x1756b8u: goto label_1756b8;
        case 0x1756bcu: goto label_1756bc;
        case 0x1756c0u: goto label_1756c0;
        case 0x1756c4u: goto label_1756c4;
        case 0x1756c8u: goto label_1756c8;
        case 0x1756ccu: goto label_1756cc;
        case 0x1756d0u: goto label_1756d0;
        case 0x1756d4u: goto label_1756d4;
        case 0x1756d8u: goto label_1756d8;
        case 0x1756dcu: goto label_1756dc;
        case 0x1756e0u: goto label_1756e0;
        case 0x1756e4u: goto label_1756e4;
        case 0x1756e8u: goto label_1756e8;
        case 0x1756ecu: goto label_1756ec;
        case 0x1756f0u: goto label_1756f0;
        case 0x1756f4u: goto label_1756f4;
        case 0x1756f8u: goto label_1756f8;
        case 0x1756fcu: goto label_1756fc;
        case 0x175700u: goto label_175700;
        case 0x175704u: goto label_175704;
        case 0x175708u: goto label_175708;
        case 0x17570cu: goto label_17570c;
        case 0x175710u: goto label_175710;
        case 0x175714u: goto label_175714;
        case 0x175718u: goto label_175718;
        case 0x17571cu: goto label_17571c;
        case 0x175720u: goto label_175720;
        case 0x175724u: goto label_175724;
        case 0x175728u: goto label_175728;
        case 0x17572cu: goto label_17572c;
        case 0x175730u: goto label_175730;
        case 0x175734u: goto label_175734;
        case 0x175738u: goto label_175738;
        case 0x17573cu: goto label_17573c;
        case 0x175740u: goto label_175740;
        case 0x175744u: goto label_175744;
        case 0x175748u: goto label_175748;
        case 0x17574cu: goto label_17574c;
        case 0x175750u: goto label_175750;
        case 0x175754u: goto label_175754;
        case 0x175758u: goto label_175758;
        case 0x17575cu: goto label_17575c;
        case 0x175760u: goto label_175760;
        case 0x175764u: goto label_175764;
        case 0x175768u: goto label_175768;
        case 0x17576cu: goto label_17576c;
        case 0x175770u: goto label_175770;
        case 0x175774u: goto label_175774;
        case 0x175778u: goto label_175778;
        case 0x17577cu: goto label_17577c;
        case 0x175780u: goto label_175780;
        case 0x175784u: goto label_175784;
        case 0x175788u: goto label_175788;
        case 0x17578cu: goto label_17578c;
        case 0x175790u: goto label_175790;
        case 0x175794u: goto label_175794;
        case 0x175798u: goto label_175798;
        case 0x17579cu: goto label_17579c;
        case 0x1757a0u: goto label_1757a0;
        case 0x1757a4u: goto label_1757a4;
        case 0x1757a8u: goto label_1757a8;
        case 0x1757acu: goto label_1757ac;
        case 0x1757b0u: goto label_1757b0;
        case 0x1757b4u: goto label_1757b4;
        case 0x1757b8u: goto label_1757b8;
        case 0x1757bcu: goto label_1757bc;
        case 0x1757c0u: goto label_1757c0;
        case 0x1757c4u: goto label_1757c4;
        case 0x1757c8u: goto label_1757c8;
        case 0x1757ccu: goto label_1757cc;
        case 0x1757d0u: goto label_1757d0;
        case 0x1757d4u: goto label_1757d4;
        case 0x1757d8u: goto label_1757d8;
        case 0x1757dcu: goto label_1757dc;
        case 0x1757e0u: goto label_1757e0;
        case 0x1757e4u: goto label_1757e4;
        case 0x1757e8u: goto label_1757e8;
        case 0x1757ecu: goto label_1757ec;
        case 0x1757f0u: goto label_1757f0;
        case 0x1757f4u: goto label_1757f4;
        case 0x1757f8u: goto label_1757f8;
        case 0x1757fcu: goto label_1757fc;
        case 0x175800u: goto label_175800;
        case 0x175804u: goto label_175804;
        case 0x175808u: goto label_175808;
        case 0x17580cu: goto label_17580c;
        case 0x175810u: goto label_175810;
        case 0x175814u: goto label_175814;
        case 0x175818u: goto label_175818;
        case 0x17581cu: goto label_17581c;
        case 0x175820u: goto label_175820;
        case 0x175824u: goto label_175824;
        case 0x175828u: goto label_175828;
        case 0x17582cu: goto label_17582c;
        case 0x175830u: goto label_175830;
        case 0x175834u: goto label_175834;
        case 0x175838u: goto label_175838;
        case 0x17583cu: goto label_17583c;
        case 0x175840u: goto label_175840;
        case 0x175844u: goto label_175844;
        case 0x175848u: goto label_175848;
        case 0x17584cu: goto label_17584c;
        case 0x175850u: goto label_175850;
        case 0x175854u: goto label_175854;
        case 0x175858u: goto label_175858;
        case 0x17585cu: goto label_17585c;
        case 0x175860u: goto label_175860;
        case 0x175864u: goto label_175864;
        case 0x175868u: goto label_175868;
        case 0x17586cu: goto label_17586c;
        case 0x175870u: goto label_175870;
        case 0x175874u: goto label_175874;
        case 0x175878u: goto label_175878;
        case 0x17587cu: goto label_17587c;
        case 0x175880u: goto label_175880;
        case 0x175884u: goto label_175884;
        case 0x175888u: goto label_175888;
        case 0x17588cu: goto label_17588c;
        case 0x175890u: goto label_175890;
        case 0x175894u: goto label_175894;
        case 0x175898u: goto label_175898;
        case 0x17589cu: goto label_17589c;
        case 0x1758a0u: goto label_1758a0;
        case 0x1758a4u: goto label_1758a4;
        case 0x1758a8u: goto label_1758a8;
        case 0x1758acu: goto label_1758ac;
        case 0x1758b0u: goto label_1758b0;
        case 0x1758b4u: goto label_1758b4;
        case 0x1758b8u: goto label_1758b8;
        case 0x1758bcu: goto label_1758bc;
        case 0x1758c0u: goto label_1758c0;
        case 0x1758c4u: goto label_1758c4;
        case 0x1758c8u: goto label_1758c8;
        case 0x1758ccu: goto label_1758cc;
        case 0x1758d0u: goto label_1758d0;
        case 0x1758d4u: goto label_1758d4;
        case 0x1758d8u: goto label_1758d8;
        case 0x1758dcu: goto label_1758dc;
        case 0x1758e0u: goto label_1758e0;
        case 0x1758e4u: goto label_1758e4;
        case 0x1758e8u: goto label_1758e8;
        case 0x1758ecu: goto label_1758ec;
        case 0x1758f0u: goto label_1758f0;
        case 0x1758f4u: goto label_1758f4;
        case 0x1758f8u: goto label_1758f8;
        case 0x1758fcu: goto label_1758fc;
        case 0x175900u: goto label_175900;
        case 0x175904u: goto label_175904;
        case 0x175908u: goto label_175908;
        case 0x17590cu: goto label_17590c;
        case 0x175910u: goto label_175910;
        case 0x175914u: goto label_175914;
        case 0x175918u: goto label_175918;
        case 0x17591cu: goto label_17591c;
        case 0x175920u: goto label_175920;
        case 0x175924u: goto label_175924;
        case 0x175928u: goto label_175928;
        case 0x17592cu: goto label_17592c;
        case 0x175930u: goto label_175930;
        case 0x175934u: goto label_175934;
        case 0x175938u: goto label_175938;
        case 0x17593cu: goto label_17593c;
        case 0x175940u: goto label_175940;
        case 0x175944u: goto label_175944;
        case 0x175948u: goto label_175948;
        case 0x17594cu: goto label_17594c;
        case 0x175950u: goto label_175950;
        case 0x175954u: goto label_175954;
        case 0x175958u: goto label_175958;
        case 0x17595cu: goto label_17595c;
        case 0x175960u: goto label_175960;
        case 0x175964u: goto label_175964;
        case 0x175968u: goto label_175968;
        case 0x17596cu: goto label_17596c;
        case 0x175970u: goto label_175970;
        case 0x175974u: goto label_175974;
        case 0x175978u: goto label_175978;
        case 0x17597cu: goto label_17597c;
        case 0x175980u: goto label_175980;
        case 0x175984u: goto label_175984;
        case 0x175988u: goto label_175988;
        case 0x17598cu: goto label_17598c;
        case 0x175990u: goto label_175990;
        case 0x175994u: goto label_175994;
        case 0x175998u: goto label_175998;
        case 0x17599cu: goto label_17599c;
        case 0x1759a0u: goto label_1759a0;
        case 0x1759a4u: goto label_1759a4;
        case 0x1759a8u: goto label_1759a8;
        case 0x1759acu: goto label_1759ac;
        case 0x1759b0u: goto label_1759b0;
        case 0x1759b4u: goto label_1759b4;
        case 0x1759b8u: goto label_1759b8;
        case 0x1759bcu: goto label_1759bc;
        case 0x1759c0u: goto label_1759c0;
        case 0x1759c4u: goto label_1759c4;
        case 0x1759c8u: goto label_1759c8;
        case 0x1759ccu: goto label_1759cc;
        case 0x1759d0u: goto label_1759d0;
        case 0x1759d4u: goto label_1759d4;
        case 0x1759d8u: goto label_1759d8;
        case 0x1759dcu: goto label_1759dc;
        case 0x1759e0u: goto label_1759e0;
        case 0x1759e4u: goto label_1759e4;
        case 0x1759e8u: goto label_1759e8;
        case 0x1759ecu: goto label_1759ec;
        case 0x1759f0u: goto label_1759f0;
        case 0x1759f4u: goto label_1759f4;
        case 0x1759f8u: goto label_1759f8;
        case 0x1759fcu: goto label_1759fc;
        case 0x175a00u: goto label_175a00;
        case 0x175a04u: goto label_175a04;
        case 0x175a08u: goto label_175a08;
        case 0x175a0cu: goto label_175a0c;
        case 0x175a10u: goto label_175a10;
        case 0x175a14u: goto label_175a14;
        case 0x175a18u: goto label_175a18;
        case 0x175a1cu: goto label_175a1c;
        case 0x175a20u: goto label_175a20;
        case 0x175a24u: goto label_175a24;
        case 0x175a28u: goto label_175a28;
        case 0x175a2cu: goto label_175a2c;
        case 0x175a30u: goto label_175a30;
        case 0x175a34u: goto label_175a34;
        case 0x175a38u: goto label_175a38;
        case 0x175a3cu: goto label_175a3c;
        case 0x175a40u: goto label_175a40;
        case 0x175a44u: goto label_175a44;
        case 0x175a48u: goto label_175a48;
        case 0x175a4cu: goto label_175a4c;
        case 0x175a50u: goto label_175a50;
        case 0x175a54u: goto label_175a54;
        case 0x175a58u: goto label_175a58;
        case 0x175a5cu: goto label_175a5c;
        case 0x175a60u: goto label_175a60;
        case 0x175a64u: goto label_175a64;
        case 0x175a68u: goto label_175a68;
        case 0x175a6cu: goto label_175a6c;
        case 0x175a70u: goto label_175a70;
        case 0x175a74u: goto label_175a74;
        case 0x175a78u: goto label_175a78;
        case 0x175a7cu: goto label_175a7c;
        case 0x175a80u: goto label_175a80;
        case 0x175a84u: goto label_175a84;
        case 0x175a88u: goto label_175a88;
        case 0x175a8cu: goto label_175a8c;
        case 0x175a90u: goto label_175a90;
        case 0x175a94u: goto label_175a94;
        case 0x175a98u: goto label_175a98;
        case 0x175a9cu: goto label_175a9c;
        case 0x175aa0u: goto label_175aa0;
        case 0x175aa4u: goto label_175aa4;
        case 0x175aa8u: goto label_175aa8;
        case 0x175aacu: goto label_175aac;
        case 0x175ab0u: goto label_175ab0;
        case 0x175ab4u: goto label_175ab4;
        case 0x175ab8u: goto label_175ab8;
        case 0x175abcu: goto label_175abc;
        case 0x175ac0u: goto label_175ac0;
        case 0x175ac4u: goto label_175ac4;
        case 0x175ac8u: goto label_175ac8;
        case 0x175accu: goto label_175acc;
        case 0x175ad0u: goto label_175ad0;
        case 0x175ad4u: goto label_175ad4;
        case 0x175ad8u: goto label_175ad8;
        case 0x175adcu: goto label_175adc;
        case 0x175ae0u: goto label_175ae0;
        case 0x175ae4u: goto label_175ae4;
        case 0x175ae8u: goto label_175ae8;
        case 0x175aecu: goto label_175aec;
        case 0x175af0u: goto label_175af0;
        case 0x175af4u: goto label_175af4;
        case 0x175af8u: goto label_175af8;
        case 0x175afcu: goto label_175afc;
        case 0x175b00u: goto label_175b00;
        case 0x175b04u: goto label_175b04;
        case 0x175b08u: goto label_175b08;
        case 0x175b0cu: goto label_175b0c;
        case 0x175b10u: goto label_175b10;
        case 0x175b14u: goto label_175b14;
        case 0x175b18u: goto label_175b18;
        case 0x175b1cu: goto label_175b1c;
        case 0x175b20u: goto label_175b20;
        case 0x175b24u: goto label_175b24;
        case 0x175b28u: goto label_175b28;
        case 0x175b2cu: goto label_175b2c;
        case 0x175b30u: goto label_175b30;
        case 0x175b34u: goto label_175b34;
        case 0x175b38u: goto label_175b38;
        case 0x175b3cu: goto label_175b3c;
        case 0x175b40u: goto label_175b40;
        case 0x175b44u: goto label_175b44;
        case 0x175b48u: goto label_175b48;
        case 0x175b4cu: goto label_175b4c;
        case 0x175b50u: goto label_175b50;
        case 0x175b54u: goto label_175b54;
        case 0x175b58u: goto label_175b58;
        case 0x175b5cu: goto label_175b5c;
        case 0x175b60u: goto label_175b60;
        case 0x175b64u: goto label_175b64;
        case 0x175b68u: goto label_175b68;
        case 0x175b6cu: goto label_175b6c;
        case 0x175b70u: goto label_175b70;
        case 0x175b74u: goto label_175b74;
        case 0x175b78u: goto label_175b78;
        case 0x175b7cu: goto label_175b7c;
        case 0x175b80u: goto label_175b80;
        case 0x175b84u: goto label_175b84;
        case 0x175b88u: goto label_175b88;
        case 0x175b8cu: goto label_175b8c;
        case 0x175b90u: goto label_175b90;
        case 0x175b94u: goto label_175b94;
        case 0x175b98u: goto label_175b98;
        case 0x175b9cu: goto label_175b9c;
        case 0x175ba0u: goto label_175ba0;
        case 0x175ba4u: goto label_175ba4;
        case 0x175ba8u: goto label_175ba8;
        case 0x175bacu: goto label_175bac;
        case 0x175bb0u: goto label_175bb0;
        case 0x175bb4u: goto label_175bb4;
        case 0x175bb8u: goto label_175bb8;
        case 0x175bbcu: goto label_175bbc;
        case 0x175bc0u: goto label_175bc0;
        case 0x175bc4u: goto label_175bc4;
        case 0x175bc8u: goto label_175bc8;
        case 0x175bccu: goto label_175bcc;
        case 0x175bd0u: goto label_175bd0;
        case 0x175bd4u: goto label_175bd4;
        case 0x175bd8u: goto label_175bd8;
        case 0x175bdcu: goto label_175bdc;
        case 0x175be0u: goto label_175be0;
        case 0x175be4u: goto label_175be4;
        case 0x175be8u: goto label_175be8;
        case 0x175becu: goto label_175bec;
        case 0x175bf0u: goto label_175bf0;
        case 0x175bf4u: goto label_175bf4;
        case 0x175bf8u: goto label_175bf8;
        case 0x175bfcu: goto label_175bfc;
        case 0x175c00u: goto label_175c00;
        case 0x175c04u: goto label_175c04;
        case 0x175c08u: goto label_175c08;
        case 0x175c0cu: goto label_175c0c;
        case 0x175c10u: goto label_175c10;
        case 0x175c14u: goto label_175c14;
        case 0x175c18u: goto label_175c18;
        case 0x175c1cu: goto label_175c1c;
        case 0x175c20u: goto label_175c20;
        case 0x175c24u: goto label_175c24;
        case 0x175c28u: goto label_175c28;
        case 0x175c2cu: goto label_175c2c;
        case 0x175c30u: goto label_175c30;
        case 0x175c34u: goto label_175c34;
        case 0x175c38u: goto label_175c38;
        case 0x175c3cu: goto label_175c3c;
        case 0x175c40u: goto label_175c40;
        case 0x175c44u: goto label_175c44;
        case 0x175c48u: goto label_175c48;
        case 0x175c4cu: goto label_175c4c;
        case 0x175c50u: goto label_175c50;
        case 0x175c54u: goto label_175c54;
        case 0x175c58u: goto label_175c58;
        case 0x175c5cu: goto label_175c5c;
        case 0x175c60u: goto label_175c60;
        case 0x175c64u: goto label_175c64;
        case 0x175c68u: goto label_175c68;
        case 0x175c6cu: goto label_175c6c;
        case 0x175c70u: goto label_175c70;
        case 0x175c74u: goto label_175c74;
        case 0x175c78u: goto label_175c78;
        case 0x175c7cu: goto label_175c7c;
        case 0x175c80u: goto label_175c80;
        case 0x175c84u: goto label_175c84;
        case 0x175c88u: goto label_175c88;
        case 0x175c8cu: goto label_175c8c;
        case 0x175c90u: goto label_175c90;
        case 0x175c94u: goto label_175c94;
        case 0x175c98u: goto label_175c98;
        case 0x175c9cu: goto label_175c9c;
        default: return;
    }

label_1754d0:
    if (ctx->pc == 0x1754D0u) {
        ctx->pc = 0x1754D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754CCu;
        // 0x1754d0: 0x240703e8  addiu       $a3, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1754D4u;
        goto label_1754d4;
    }
    ctx->pc = 0x1754CCu;
    {
        const bool branch_taken_0x1754cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1754D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754CCu;
        // 0x1754d0: 0x240703e8  addiu       $a3, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754cc) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x1754D4u;
label_1754d4:
    // 0x1754d4: 0x90264af2  lbu         $a2, 0x4AF2($at)
    ctx->pc = 0x1754d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19186)));
label_1754d8:
    // 0x1754d8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1754d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1754dc:
    // 0x1754dc: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1754dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1754e0:
    // 0x1754e0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1754e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1754e4:
    // 0x1754e4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1754e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1754e8:
    // 0x1754e8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1754e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1754ec:
    // 0x1754ec: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1754f0:
    if (ctx->pc == 0x1754F0u) {
        ctx->pc = 0x1754F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754ECu;
        // 0x1754f0: 0x24670384  addiu       $a3, $v1, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 900));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1754F4u;
        goto label_1754f4;
    }
    ctx->pc = 0x1754ECu;
    {
        const bool branch_taken_0x1754ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1754F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754ECu;
        // 0x1754f0: 0x24670384  addiu       $a3, $v1, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754ec) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x1754F4u;
label_1754f4:
    // 0x1754f4: 0x8c274afc  lw          $a3, 0x4AFC($at)
    ctx->pc = 0x1754f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_1754f8:
    // 0x1754f8: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_1754fc:
    if (ctx->pc == 0x1754FCu) {
        ctx->pc = 0x175500u;
        goto label_175500;
    }
    ctx->pc = 0x1754F8u;
    {
        const bool branch_taken_0x1754f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1754f8) {
            ctx->pc = 0x175508u;
            goto label_175508;
        }
    }
    ctx->pc = 0x175500u;
label_175500:
    // 0x175500: 0x10000038  b           . + 4 + (0x38 << 2)
label_175504:
    if (ctx->pc == 0x175504u) {
        ctx->pc = 0x175504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175500u;
        // 0x175504: 0x24070578  addiu       $a3, $zero, 0x578 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175508u;
        goto label_175508;
    }
    ctx->pc = 0x175500u;
    {
        const bool branch_taken_0x175500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175500u;
        // 0x175504: 0x24070578  addiu       $a3, $zero, 0x578 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175500) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175508u;
label_175508:
    // 0x175508: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
label_17550c:
    if (ctx->pc == 0x17550Cu) {
        ctx->pc = 0x175510u;
        goto label_175510;
    }
    ctx->pc = 0x175508u;
    {
        const bool branch_taken_0x175508 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x175508) {
            ctx->pc = 0x175518u;
            goto label_175518;
        }
    }
    ctx->pc = 0x175510u;
label_175510:
    // 0x175510: 0x10000034  b           . + 4 + (0x34 << 2)
label_175514:
    if (ctx->pc == 0x175514u) {
        ctx->pc = 0x175514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175510u;
        // 0x175514: 0x240705dc  addiu       $a3, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175518u;
        goto label_175518;
    }
    ctx->pc = 0x175510u;
    {
        const bool branch_taken_0x175510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175510u;
        // 0x175514: 0x240705dc  addiu       $a3, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175510) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175518u;
label_175518:
    // 0x175518: 0x14e60003  bne         $a3, $a2, . + 4 + (0x3 << 2)
label_17551c:
    if (ctx->pc == 0x17551Cu) {
        ctx->pc = 0x175520u;
        goto label_175520;
    }
    ctx->pc = 0x175518u;
    {
        const bool branch_taken_0x175518 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x175518) {
            ctx->pc = 0x175528u;
            goto label_175528;
        }
    }
    ctx->pc = 0x175520u;
label_175520:
    // 0x175520: 0x10000030  b           . + 4 + (0x30 << 2)
label_175524:
    if (ctx->pc == 0x175524u) {
        ctx->pc = 0x175524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175520u;
        // 0x175524: 0x24070640  addiu       $a3, $zero, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175528u;
        goto label_175528;
    }
    ctx->pc = 0x175520u;
    {
        const bool branch_taken_0x175520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175520u;
        // 0x175524: 0x24070640  addiu       $a3, $zero, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175520) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175528u;
label_175528:
    // 0x175528: 0x1000002e  b           . + 4 + (0x2E << 2)
label_17552c:
    if (ctx->pc == 0x17552Cu) {
        ctx->pc = 0x17552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175528u;
        // 0x17552c: 0x24070708  addiu       $a3, $zero, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175530u;
        goto label_175530;
    }
    ctx->pc = 0x175528u;
    {
        const bool branch_taken_0x175528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175528u;
        // 0x17552c: 0x24070708  addiu       $a3, $zero, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175528) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175530u;
label_175530:
    // 0x175530: 0x8c274afc  lw          $a3, 0x4AFC($at)
    ctx->pc = 0x175530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_175534:
    // 0x175534: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
label_175538:
    if (ctx->pc == 0x175538u) {
        ctx->pc = 0x175538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175534u;
        // 0x175538: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17553Cu;
        goto label_17553c;
    }
    ctx->pc = 0x175534u;
    {
        const bool branch_taken_0x175534 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x175538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175534u;
        // 0x175538: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175534) {
            ctx->pc = 0x175544u;
            goto label_175544;
        }
    }
    ctx->pc = 0x17553Cu;
label_17553c:
    // 0x17553c: 0x10000029  b           . + 4 + (0x29 << 2)
label_175540:
    if (ctx->pc == 0x175540u) {
        ctx->pc = 0x175540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17553Cu;
        // 0x175540: 0x2407044c  addiu       $a3, $zero, 0x44C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175544u;
        goto label_175544;
    }
    ctx->pc = 0x17553Cu;
    {
        const bool branch_taken_0x17553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17553Cu;
        // 0x175540: 0x2407044c  addiu       $a3, $zero, 0x44C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17553c) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175544u;
label_175544:
    // 0x175544: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
label_175548:
    if (ctx->pc == 0x175548u) {
        ctx->pc = 0x17554Cu;
        goto label_17554c;
    }
    ctx->pc = 0x175544u;
    {
        const bool branch_taken_0x175544 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x175544) {
            ctx->pc = 0x175554u;
            goto label_175554;
        }
    }
    ctx->pc = 0x17554Cu;
label_17554c:
    // 0x17554c: 0x10000025  b           . + 4 + (0x25 << 2)
label_175550:
    if (ctx->pc == 0x175550u) {
        ctx->pc = 0x175550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17554Cu;
        // 0x175550: 0x24070546  addiu       $a3, $zero, 0x546 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1350));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175554u;
        goto label_175554;
    }
    ctx->pc = 0x17554Cu;
    {
        const bool branch_taken_0x17554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17554Cu;
        // 0x175550: 0x24070546  addiu       $a3, $zero, 0x546 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17554c) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175554u;
label_175554:
    // 0x175554: 0x14e60003  bne         $a3, $a2, . + 4 + (0x3 << 2)
label_175558:
    if (ctx->pc == 0x175558u) {
        ctx->pc = 0x17555Cu;
        goto label_17555c;
    }
    ctx->pc = 0x175554u;
    {
        const bool branch_taken_0x175554 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x175554) {
            ctx->pc = 0x175564u;
            goto label_175564;
        }
    }
    ctx->pc = 0x17555Cu;
label_17555c:
    // 0x17555c: 0x10000021  b           . + 4 + (0x21 << 2)
label_175560:
    if (ctx->pc == 0x175560u) {
        ctx->pc = 0x175560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17555Cu;
        // 0x175560: 0x24070578  addiu       $a3, $zero, 0x578 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175564u;
        goto label_175564;
    }
    ctx->pc = 0x17555Cu;
    {
        const bool branch_taken_0x17555c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17555Cu;
        // 0x175560: 0x24070578  addiu       $a3, $zero, 0x578 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17555c) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175564u;
label_175564:
    // 0x175564: 0x1000001f  b           . + 4 + (0x1F << 2)
label_175568:
    if (ctx->pc == 0x175568u) {
        ctx->pc = 0x175568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175564u;
        // 0x175568: 0x24070640  addiu       $a3, $zero, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17556Cu;
        goto label_17556c;
    }
    ctx->pc = 0x175564u;
    {
        const bool branch_taken_0x175564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175564u;
        // 0x175568: 0x24070640  addiu       $a3, $zero, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175564) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x17556Cu;
label_17556c:
    // 0x17556c: 0x8c264afc  lw          $a2, 0x4AFC($at)
    ctx->pc = 0x17556cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_175570:
    // 0x175570: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_175574:
    if (ctx->pc == 0x175574u) {
        ctx->pc = 0x175574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175570u;
        // 0x175574: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175578u;
        goto label_175578;
    }
    ctx->pc = 0x175570u;
    {
        const bool branch_taken_0x175570 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x175574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175570u;
        // 0x175574: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175570) {
            ctx->pc = 0x175580u;
            goto label_175580;
        }
    }
    ctx->pc = 0x175578u;
label_175578:
    // 0x175578: 0x1000001a  b           . + 4 + (0x1A << 2)
label_17557c:
    if (ctx->pc == 0x17557Cu) {
        ctx->pc = 0x17557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175578u;
        // 0x17557c: 0x2407041a  addiu       $a3, $zero, 0x41A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1050));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175580u;
        goto label_175580;
    }
    ctx->pc = 0x175578u;
    {
        const bool branch_taken_0x175578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175578u;
        // 0x17557c: 0x2407041a  addiu       $a3, $zero, 0x41A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175578) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175580u;
label_175580:
    // 0x175580: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
label_175584:
    if (ctx->pc == 0x175584u) {
        ctx->pc = 0x175584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175580u;
        // 0x175584: 0x24070514  addiu       $a3, $zero, 0x514 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175588u;
        goto label_175588;
    }
    ctx->pc = 0x175580u;
    {
        const bool branch_taken_0x175580 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x175584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175580u;
        // 0x175584: 0x24070514  addiu       $a3, $zero, 0x514 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175580) {
            ctx->pc = 0x175590u;
            goto label_175590;
        }
    }
    ctx->pc = 0x175588u;
label_175588:
    // 0x175588: 0x10000016  b           . + 4 + (0x16 << 2)
label_17558c:
    if (ctx->pc == 0x17558Cu) {
        ctx->pc = 0x175590u;
        goto label_175590;
    }
    ctx->pc = 0x175588u;
    {
        const bool branch_taken_0x175588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175588) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175590u;
label_175590:
    // 0x175590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x175590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_175594:
    // 0x175594: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
label_175598:
    if (ctx->pc == 0x175598u) {
        ctx->pc = 0x175598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175594u;
        // 0x175598: 0x24070672  addiu       $a3, $zero, 0x672 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1650));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17559Cu;
        goto label_17559c;
    }
    ctx->pc = 0x175594u;
    {
        const bool branch_taken_0x175594 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x175598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175594u;
        // 0x175598: 0x24070672  addiu       $a3, $zero, 0x672 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1650));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175594) {
            ctx->pc = 0x1755A4u;
            goto label_1755a4;
        }
    }
    ctx->pc = 0x17559Cu;
label_17559c:
    // 0x17559c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1755a0:
    if (ctx->pc == 0x1755A0u) {
        ctx->pc = 0x1755A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17559Cu;
        // 0x1755a0: 0x24070546  addiu       $a3, $zero, 0x546 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1350));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1755A4u;
        goto label_1755a4;
    }
    ctx->pc = 0x17559Cu;
    {
        const bool branch_taken_0x17559c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1755A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17559Cu;
        // 0x1755a0: 0x24070546  addiu       $a3, $zero, 0x546 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17559c) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x1755A4u;
label_1755a4:
    // 0x1755a4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1755a8:
    if (ctx->pc == 0x1755A8u) {
        ctx->pc = 0x1755ACu;
        goto label_1755ac;
    }
    ctx->pc = 0x1755A4u;
    {
        const bool branch_taken_0x1755a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1755a4) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x1755ACu;
label_1755ac:
    // 0x1755ac: 0x8c264afc  lw          $a2, 0x4AFC($at)
    ctx->pc = 0x1755acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_1755b0:
    // 0x1755b0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_1755b4:
    if (ctx->pc == 0x1755B4u) {
        ctx->pc = 0x1755B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755B0u;
        // 0x1755b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1755B8u;
        goto label_1755b8;
    }
    ctx->pc = 0x1755B0u;
    {
        const bool branch_taken_0x1755b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1755B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755B0u;
        // 0x1755b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755b0) {
            ctx->pc = 0x1755C0u;
            goto label_1755c0;
        }
    }
    ctx->pc = 0x1755B8u;
label_1755b8:
    // 0x1755b8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1755bc:
    if (ctx->pc == 0x1755BCu) {
        ctx->pc = 0x1755BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755B8u;
        // 0x1755bc: 0x240703e8  addiu       $a3, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1755C0u;
        goto label_1755c0;
    }
    ctx->pc = 0x1755B8u;
    {
        const bool branch_taken_0x1755b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1755BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755B8u;
        // 0x1755bc: 0x240703e8  addiu       $a3, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755b8) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x1755C0u;
label_1755c0:
    // 0x1755c0: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
label_1755c4:
    if (ctx->pc == 0x1755C4u) {
        ctx->pc = 0x1755C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755C0u;
        // 0x1755c4: 0x240704e2  addiu       $a3, $zero, 0x4E2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1755C8u;
        goto label_1755c8;
    }
    ctx->pc = 0x1755C0u;
    {
        const bool branch_taken_0x1755c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1755C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755C0u;
        // 0x1755c4: 0x240704e2  addiu       $a3, $zero, 0x4E2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755c0) {
            ctx->pc = 0x1755D0u;
            goto label_1755d0;
        }
    }
    ctx->pc = 0x1755C8u;
label_1755c8:
    // 0x1755c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1755cc:
    if (ctx->pc == 0x1755CCu) {
        ctx->pc = 0x1755D0u;
        goto label_1755d0;
    }
    ctx->pc = 0x1755C8u;
    {
        const bool branch_taken_0x1755c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1755c8) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x1755D0u;
label_1755d0:
    // 0x1755d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1755d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1755d4:
    // 0x1755d4: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
label_1755d8:
    if (ctx->pc == 0x1755D8u) {
        ctx->pc = 0x1755D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755D4u;
        // 0x1755d8: 0x24070640  addiu       $a3, $zero, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1755DCu;
        goto label_1755dc;
    }
    ctx->pc = 0x1755D4u;
    {
        const bool branch_taken_0x1755d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1755D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755D4u;
        // 0x1755d8: 0x24070640  addiu       $a3, $zero, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755d4) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x1755DCu;
label_1755dc:
    // 0x1755dc: 0x10000001  b           . + 4 + (0x1 << 2)
label_1755e0:
    if (ctx->pc == 0x1755E0u) {
        ctx->pc = 0x1755E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755DCu;
        // 0x1755e0: 0x24070514  addiu       $a3, $zero, 0x514 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1755E4u;
        goto label_1755e4;
    }
    ctx->pc = 0x1755DCu;
    {
        const bool branch_taken_0x1755dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1755E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755DCu;
        // 0x1755e0: 0x24070514  addiu       $a3, $zero, 0x514 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755dc) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x1755E4u;
label_1755e4:
    // 0x1755e4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1755e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1755e8:
    // 0x1755e8: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x1755e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_1755ec:
    // 0x1755ec: 0x8c294968  lw          $t1, 0x4968($at)
    ctx->pc = 0x1755ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
label_1755f0:
    // 0x1755f0: 0x34634dd3  ori         $v1, $v1, 0x4DD3
    ctx->pc = 0x1755f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_1755f4:
    // 0x1755f4: 0x9126024b  lbu         $a2, 0x24B($t1)
    ctx->pc = 0x1755f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 587)));
label_1755f8:
    // 0x1755f8: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x1755f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1755fc:
    // 0x1755fc: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x1755fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_175600:
    // 0x175600: 0x0  nop
    ctx->pc = 0x175600u;
    // NOP
label_175604:
    // 0x175604: 0x0  nop
    ctx->pc = 0x175604u;
    // NOP
label_175608:
    // 0x175608: 0x1810  mfhi        $v1
    ctx->pc = 0x175608u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_17560c:
    // 0x17560c: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x17560cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_175610:
    // 0x175610: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x175610u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_175614:
    // 0x175614: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x175614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_175618:
    // 0x175618: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x175618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_17561c:
    // 0x17561c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_175620:
    if (ctx->pc == 0x175620u) {
        ctx->pc = 0x175624u;
        goto label_175624;
    }
    ctx->pc = 0x17561Cu;
    {
        const bool branch_taken_0x17561c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17561c) {
            ctx->pc = 0x175628u;
            goto label_175628;
        }
    }
    ctx->pc = 0x175624u;
label_175624:
    // 0x175624: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x175624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_175628:
    // 0x175628: 0x9126024a  lbu         $a2, 0x24A($t1)
    ctx->pc = 0x175628u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 586)));
label_17562c:
    // 0x17562c: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x17562cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_175630:
    // 0x175630: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x175630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_175634:
    // 0x175634: 0x34634dd3  ori         $v1, $v1, 0x4DD3
    ctx->pc = 0x175634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_175638:
    // 0x175638: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x175638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_17563c:
    // 0x17563c: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x17563cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_175640:
    // 0x175640: 0x0  nop
    ctx->pc = 0x175640u;
    // NOP
label_175644:
    // 0x175644: 0x0  nop
    ctx->pc = 0x175644u;
    // NOP
label_175648:
    // 0x175648: 0x1810  mfhi        $v1
    ctx->pc = 0x175648u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_17564c:
    // 0x17564c: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x17564cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_175650:
    // 0x175650: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x175650u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_175654:
    // 0x175654: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x175654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_175658:
    // 0x175658: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x175658u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_17565c:
    // 0x17565c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_175660:
    if (ctx->pc == 0x175660u) {
        ctx->pc = 0x175664u;
        goto label_175664;
    }
    ctx->pc = 0x17565Cu;
    {
        const bool branch_taken_0x17565c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17565c) {
            ctx->pc = 0x175668u;
            goto label_175668;
        }
    }
    ctx->pc = 0x175664u;
label_175664:
    // 0x175664: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x175664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_175668:
    // 0x175668: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x175668u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_17566c:
    // 0x17566c: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x17566cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_175670:
    // 0x175670: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x175670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_175674:
    // 0x175674: 0x2469000e  addiu       $t1, $v1, 0xE
    ctx->pc = 0x175674u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
label_175678:
    // 0x175678: 0x9063000e  lbu         $v1, 0xE($v1)
    ctx->pc = 0x175678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
label_17567c:
    // 0x17567c: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x17567cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_175680:
    // 0x175680: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_175684:
    if (ctx->pc == 0x175684u) {
        ctx->pc = 0x175684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175680u;
        // 0x175684: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175688u;
        goto label_175688;
    }
    ctx->pc = 0x175680u;
    {
        const bool branch_taken_0x175680 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x175684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175680u;
        // 0x175684: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175680) {
            ctx->pc = 0x175694u;
            goto label_175694;
        }
    }
    ctx->pc = 0x175688u;
label_175688:
    // 0x175688: 0x8c234afc  lw          $v1, 0x4AFC($at)
    ctx->pc = 0x175688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_17568c:
    // 0x17568c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_175690:
    if (ctx->pc == 0x175690u) {
        ctx->pc = 0x175694u;
        goto label_175694;
    }
    ctx->pc = 0x17568Cu;
    {
        const bool branch_taken_0x17568c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17568c) {
            ctx->pc = 0x175698u;
            goto label_175698;
        }
    }
    ctx->pc = 0x175694u;
label_175694:
    // 0x175694: 0xa1280000  sb          $t0, 0x0($t1)
    ctx->pc = 0x175694u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 8));
label_175698:
    // 0x175698: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x175698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17569c:
    // 0x17569c: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x17569cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1756a0:
    // 0x1756a0: 0x2468000f  addiu       $t0, $v1, 0xF
    ctx->pc = 0x1756a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1756a4:
    // 0x1756a4: 0x9063000f  lbu         $v1, 0xF($v1)
    ctx->pc = 0x1756a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_1756a8:
    // 0x1756a8: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x1756a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1756ac:
    // 0x1756ac: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1756b0:
    if (ctx->pc == 0x1756B0u) {
        ctx->pc = 0x1756B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756ACu;
        // 0x1756b0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1756B4u;
        goto label_1756b4;
    }
    ctx->pc = 0x1756ACu;
    {
        const bool branch_taken_0x1756ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1756B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756ACu;
        // 0x1756b0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1756ac) {
            ctx->pc = 0x1756C0u;
            goto label_1756c0;
        }
    }
    ctx->pc = 0x1756B4u;
label_1756b4:
    // 0x1756b4: 0x8c234afc  lw          $v1, 0x4AFC($at)
    ctx->pc = 0x1756b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_1756b8:
    // 0x1756b8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1756bc:
    if (ctx->pc == 0x1756BCu) {
        ctx->pc = 0x1756C0u;
        goto label_1756c0;
    }
    ctx->pc = 0x1756B8u;
    {
        const bool branch_taken_0x1756b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1756b8) {
            ctx->pc = 0x1756C4u;
            goto label_1756c4;
        }
    }
    ctx->pc = 0x1756C0u;
label_1756c0:
    // 0x1756c0: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x1756c0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
label_1756c4:
    // 0x1756c4: 0x90830039  lbu         $v1, 0x39($a0)
    ctx->pc = 0x1756c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
label_1756c8:
    // 0x1756c8: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x1756c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_1756cc:
    // 0x1756cc: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
label_1756d0:
    if (ctx->pc == 0x1756D0u) {
        ctx->pc = 0x1756D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756CCu;
        // 0x1756d0: 0x306700ff  andi        $a3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1756D4u;
        goto label_1756d4;
    }
    ctx->pc = 0x1756CCu;
    {
        const bool branch_taken_0x1756cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1756D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756CCu;
        // 0x1756d0: 0x306700ff  andi        $a3, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1756cc) {
            ctx->pc = 0x175800u;
            goto label_175800;
        }
    }
    ctx->pc = 0x1756D4u;
label_1756d4:
    // 0x1756d4: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x1756d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1756d8:
    // 0x1756d8: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1756d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1756dc:
    // 0x1756dc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1756dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1756e0:
    // 0x1756e0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1756e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1756e4:
    // 0x1756e4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1756e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1756e8:
    // 0x1756e8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1756e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1756ec:
    // 0x1756ec: 0x10c00044  beqz        $a2, . + 4 + (0x44 << 2)
label_1756f0:
    if (ctx->pc == 0x1756F0u) {
        ctx->pc = 0x1756F4u;
        goto label_1756f4;
    }
    ctx->pc = 0x1756ECu;
    {
        const bool branch_taken_0x1756ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1756ec) {
            ctx->pc = 0x175800u;
            goto label_175800;
        }
    }
    ctx->pc = 0x1756F4u;
label_1756f4:
    // 0x1756f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1756f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1756f8:
    // 0x1756f8: 0x9063000e  lbu         $v1, 0xE($v1)
    ctx->pc = 0x1756f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
label_1756fc:
    // 0x1756fc: 0xa0c3024a  sb          $v1, 0x24A($a2)
    ctx->pc = 0x1756fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 586), (uint8_t)GPR_U32(ctx, 3));
label_175700:
    // 0x175700: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x175700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_175704:
    // 0x175704: 0x9063000f  lbu         $v1, 0xF($v1)
    ctx->pc = 0x175704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_175708:
    // 0x175708: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_17570c:
    if (ctx->pc == 0x17570Cu) {
        ctx->pc = 0x17570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175708u;
        // 0x17570c: 0xa0c3024b  sb          $v1, 0x24B($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 587), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175710u;
        goto label_175710;
    }
    ctx->pc = 0x175708u;
    {
        const bool branch_taken_0x175708 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175708u;
        // 0x17570c: 0xa0c3024b  sb          $v1, 0x24B($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 587), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175708) {
            ctx->pc = 0x175720u;
            goto label_175720;
        }
    }
    ctx->pc = 0x175710u;
label_175710:
    // 0x175710: 0x90c50240  lbu         $a1, 0x240($a2)
    ctx->pc = 0x175710u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 576)));
label_175714:
    // 0x175714: 0x90830047  lbu         $v1, 0x47($a0)
    ctx->pc = 0x175714u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 71)));
label_175718:
    // 0x175718: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x175718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_17571c:
    // 0x17571c: 0xa0c30240  sb          $v1, 0x240($a2)
    ctx->pc = 0x17571cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 576), (uint8_t)GPR_U32(ctx, 3));
label_175720:
    // 0x175720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x175720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175724:
    // 0x175724: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x175724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_175728:
    // 0x175728: 0x3c066666  lui         $a2, 0x6666
    ctx->pc = 0x175728u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_17572c:
    // 0x17572c: 0x34c96667  ori         $t1, $a2, 0x6667
    ctx->pc = 0x17572cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26215);
label_175730:
    // 0x175730: 0x90880039  lbu         $t0, 0x39($a0)
    ctx->pc = 0x175730u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
label_175734:
    // 0x175734: 0x8f8684e0  lw          $a2, -0x7B20($gp)
    ctx->pc = 0x175734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_175738:
    // 0x175738: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x175738u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_17573c:
    // 0x17573c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x17573cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_175740:
    // 0x175740: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x175740u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_175744:
    // 0x175744: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x175744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_175748:
    // 0x175748: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x175748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_17574c:
    // 0x17574c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x17574cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_175750:
    // 0x175750: 0x10c00026  beqz        $a2, . + 4 + (0x26 << 2)
label_175754:
    if (ctx->pc == 0x175754u) {
        ctx->pc = 0x175758u;
        goto label_175758;
    }
    ctx->pc = 0x175750u;
    {
        const bool branch_taken_0x175750 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x175750) {
            ctx->pc = 0x1757ECu;
            goto label_1757ec;
        }
    }
    ctx->pc = 0x175758u;
label_175758:
    // 0x175758: 0x0  nop
    ctx->pc = 0x175758u;
    // NOP
label_17575c:
    // 0x17575c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x17575cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_175760:
    // 0x175760: 0x90ea000e  lbu         $t2, 0xE($a3)
    ctx->pc = 0x175760u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
label_175764:
    // 0x175764: 0xa3840  sll         $a3, $t2, 1
    ctx->pc = 0x175764u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_175768:
    // 0x175768: 0x1270018  mult        $zero, $t1, $a3
    ctx->pc = 0x175768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_17576c:
    // 0x17576c: 0x747c2  srl         $t0, $a3, 31
    ctx->pc = 0x17576cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_175770:
    // 0x175770: 0x0  nop
    ctx->pc = 0x175770u;
    // NOP
label_175774:
    // 0x175774: 0x3810  mfhi        $a3
    ctx->pc = 0x175774u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_175778:
    // 0x175778: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x175778u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_17577c:
    // 0x17577c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x17577cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_175780:
    // 0x175780: 0x28e10032  slti        $at, $a3, 0x32
    ctx->pc = 0x175780u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)50) ? 1 : 0);
label_175784:
    // 0x175784: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_175788:
    if (ctx->pc == 0x175788u) {
        ctx->pc = 0x17578Cu;
        goto label_17578c;
    }
    ctx->pc = 0x175784u;
    {
        const bool branch_taken_0x175784 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x175784) {
            ctx->pc = 0x175794u;
            goto label_175794;
        }
    }
    ctx->pc = 0x17578Cu;
label_17578c:
    // 0x17578c: 0x10000003  b           . + 4 + (0x3 << 2)
label_175790:
    if (ctx->pc == 0x175790u) {
        ctx->pc = 0x175790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17578Cu;
        // 0x175790: 0x1473823  subu        $a3, $t2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175794u;
        goto label_175794;
    }
    ctx->pc = 0x17578Cu;
    {
        const bool branch_taken_0x17578c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17578Cu;
        // 0x175790: 0x1473823  subu        $a3, $t2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17578c) {
            ctx->pc = 0x17579Cu;
            goto label_17579c;
        }
    }
    ctx->pc = 0x175794u;
label_175794:
    // 0x175794: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x175794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_175798:
    // 0x175798: 0x1473823  subu        $a3, $t2, $a3
    ctx->pc = 0x175798u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_17579c:
    // 0x17579c: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x17579cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_1757a0:
    // 0x1757a0: 0xa0c7024a  sb          $a3, 0x24A($a2)
    ctx->pc = 0x1757a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 586), (uint8_t)GPR_U32(ctx, 7));
label_1757a4:
    // 0x1757a4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1757a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1757a8:
    // 0x1757a8: 0x90ea000f  lbu         $t2, 0xF($a3)
    ctx->pc = 0x1757a8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 15)));
label_1757ac:
    // 0x1757ac: 0xa3840  sll         $a3, $t2, 1
    ctx->pc = 0x1757acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1757b0:
    // 0x1757b0: 0x1270018  mult        $zero, $t1, $a3
    ctx->pc = 0x1757b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1757b4:
    // 0x1757b4: 0x747c2  srl         $t0, $a3, 31
    ctx->pc = 0x1757b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1757b8:
    // 0x1757b8: 0x0  nop
    ctx->pc = 0x1757b8u;
    // NOP
label_1757bc:
    // 0x1757bc: 0x3810  mfhi        $a3
    ctx->pc = 0x1757bcu;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1757c0:
    // 0x1757c0: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x1757c0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_1757c4:
    // 0x1757c4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1757c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1757c8:
    // 0x1757c8: 0x28e10032  slti        $at, $a3, 0x32
    ctx->pc = 0x1757c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)50) ? 1 : 0);
label_1757cc:
    // 0x1757cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1757d0:
    if (ctx->pc == 0x1757D0u) {
        ctx->pc = 0x1757D4u;
        goto label_1757d4;
    }
    ctx->pc = 0x1757CCu;
    {
        const bool branch_taken_0x1757cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1757cc) {
            ctx->pc = 0x1757DCu;
            goto label_1757dc;
        }
    }
    ctx->pc = 0x1757D4u;
label_1757d4:
    // 0x1757d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1757d8:
    if (ctx->pc == 0x1757D8u) {
        ctx->pc = 0x1757D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757D4u;
        // 0x1757d8: 0x1473823  subu        $a3, $t2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1757DCu;
        goto label_1757dc;
    }
    ctx->pc = 0x1757D4u;
    {
        const bool branch_taken_0x1757d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1757D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757D4u;
        // 0x1757d8: 0x1473823  subu        $a3, $t2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757d4) {
            ctx->pc = 0x1757E4u;
            goto label_1757e4;
        }
    }
    ctx->pc = 0x1757DCu;
label_1757dc:
    // 0x1757dc: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x1757dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1757e0:
    // 0x1757e0: 0x1473823  subu        $a3, $t2, $a3
    ctx->pc = 0x1757e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_1757e4:
    // 0x1757e4: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x1757e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
label_1757e8:
    // 0x1757e8: 0xa0c7024b  sb          $a3, 0x24B($a2)
    ctx->pc = 0x1757e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 587), (uint8_t)GPR_U32(ctx, 7));
label_1757ec:
    // 0x1757ec: 0x0  nop
    ctx->pc = 0x1757ecu;
    // NOP
label_1757f0:
    // 0x1757f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1757f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1757f4:
    // 0x1757f4: 0x28660009  slti        $a2, $v1, 0x9
    ctx->pc = 0x1757f4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_1757f8:
    // 0x1757f8: 0x14c0ffcd  bnez        $a2, . + 4 + (-0x33 << 2)
label_1757fc:
    if (ctx->pc == 0x1757FCu) {
        ctx->pc = 0x1757FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757F8u;
        // 0x1757fc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175800u;
        goto label_175800;
    }
    ctx->pc = 0x1757F8u;
    {
        const bool branch_taken_0x1757f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1757FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1757F8u;
        // 0x1757fc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1757f8) {
            ctx->pc = 0x175730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175730;
        }
    }
    ctx->pc = 0x175800u;
label_175800:
    // 0x175800: 0x3e00008  jr          $ra
label_175804:
    if (ctx->pc == 0x175804u) {
        ctx->pc = 0x175808u;
        goto label_175808;
    }
    ctx->pc = 0x175800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175808u;
label_175808:
    // 0x175808: 0x0  nop
    ctx->pc = 0x175808u;
    // NOP
label_17580c:
    // 0x17580c: 0x0  nop
    ctx->pc = 0x17580cu;
    // NOP
label_175810:
    // 0x175810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_175814:
    // 0x175814: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x175814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_175818:
    // 0x175818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x175818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17581c:
    // 0x17581c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x17581cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_175820:
    // 0x175820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_175824:
    // 0x175824: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_175828:
    // 0x175828: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x175828u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_17582c:
    // 0x17582c: 0x14a30041  bne         $a1, $v1, . + 4 + (0x41 << 2)
label_175830:
    if (ctx->pc == 0x175830u) {
        ctx->pc = 0x175830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17582Cu;
        // 0x175830: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175834u;
        goto label_175834;
    }
    ctx->pc = 0x17582Cu;
    {
        const bool branch_taken_0x17582c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x175830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17582Cu;
        // 0x175830: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17582c) {
            ctx->pc = 0x175934u;
            goto label_175934;
        }
    }
    ctx->pc = 0x175834u;
label_175834:
    // 0x175834: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x175834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_175838:
    // 0x175838: 0x9025490d  lbu         $a1, 0x490D($at)
    ctx->pc = 0x175838u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_17583c:
    // 0x17583c: 0x14a3003d  bne         $a1, $v1, . + 4 + (0x3D << 2)
label_175840:
    if (ctx->pc == 0x175840u) {
        ctx->pc = 0x175840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17583Cu;
        // 0x175840: 0x430c0  sll         $a2, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175844u;
        goto label_175844;
    }
    ctx->pc = 0x17583Cu;
    {
        const bool branch_taken_0x17583c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x175840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17583Cu;
        // 0x175840: 0x430c0  sll         $a2, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17583c) {
            ctx->pc = 0x175934u;
            goto label_175934;
        }
    }
    ctx->pc = 0x175844u;
label_175844:
    // 0x175844: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x175844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_175848:
    // 0x175848: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x175848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_17584c:
    // 0x17584c: 0x3c08002f  lui         $t0, 0x2F
    ctx->pc = 0x17584cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)47 << 16));
label_175850:
    // 0x175850: 0x24a54974  addiu       $a1, $a1, 0x4974
    ctx->pc = 0x175850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18804));
label_175854:
    // 0x175854: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x175854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_175858:
    // 0x175858: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x175858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_17585c:
    // 0x17585c: 0x25082570  addiu       $t0, $t0, 0x2570
    ctx->pc = 0x17585cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9584));
label_175860:
    // 0x175860: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x175860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_175864:
    // 0x175864: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x175864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_175868:
    // 0x175868: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x175868u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_17586c:
    // 0x17586c: 0x38870001  xori        $a3, $a0, 0x1
    ctx->pc = 0x17586cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_175870:
    // 0x175870: 0xa44823  subu        $t1, $a1, $a0
    ctx->pc = 0x175870u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_175874:
    // 0x175874: 0x72a00  sll         $a1, $a3, 8
    ctx->pc = 0x175874u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_175878:
    // 0x175878: 0xa73823  subu        $a3, $a1, $a3
    ctx->pc = 0x175878u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_17587c:
    // 0x17587c: 0x928c0  sll         $a1, $t1, 3
    ctx->pc = 0x17587cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_175880:
    // 0x175880: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x175880u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_175884:
    // 0x175884: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x175884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_175888:
    // 0x175888: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x175888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_17588c:
    // 0x17588c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17588cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_175890:
    // 0x175890: 0x938c0  sll         $a3, $t1, 3
    ctx->pc = 0x175890u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_175894:
    // 0x175894: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x175894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_175898:
    // 0x175898: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x175898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_17589c:
    // 0x17589c: 0x24b10048  addiu       $s1, $a1, 0x48
    ctx->pc = 0x17589cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
label_1758a0:
    // 0x1758a0: 0x24f00048  addiu       $s0, $a3, 0x48
    ctx->pc = 0x1758a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 72));
label_1758a4:
    // 0x1758a4: 0x8ca50048  lw          $a1, 0x48($a1)
    ctx->pc = 0x1758a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_1758a8:
    // 0x1758a8: 0x24a70015  addiu       $a3, $a1, 0x15
    ctx->pc = 0x1758a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 21));
label_1758ac:
    // 0x1758ac: 0x90a50015  lbu         $a1, 0x15($a1)
    ctx->pc = 0x1758acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
label_1758b0:
    // 0x1758b0: 0x14a6000e  bne         $a1, $a2, . + 4 + (0xE << 2)
label_1758b4:
    if (ctx->pc == 0x1758B4u) {
        ctx->pc = 0x1758B8u;
        goto label_1758b8;
    }
    ctx->pc = 0x1758B0u;
    {
        const bool branch_taken_0x1758b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1758b0) {
            ctx->pc = 0x1758ECu;
            goto label_1758ec;
        }
    }
    ctx->pc = 0x1758B8u;
label_1758b8:
    // 0x1758b8: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x1758b8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_1758bc:
    // 0x1758bc: 0xc05d760  jal         func_175D80
label_1758c0:
    if (ctx->pc == 0x1758C0u) {
        ctx->pc = 0x1758C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758BCu;
        // 0x1758c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1758C4u;
        goto label_1758c4;
    }
    ctx->pc = 0x1758BCu;
    SET_GPR_U32(ctx, 31, 0x1758C4u);
    ctx->pc = 0x1758C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1758BCu;
    // 0x1758c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175D80u;
    { ctx->pc = 0x175d80; return; }
    ctx->pc = 0x1758C4u;
label_1758c4:
    // 0x1758c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1758c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1758c8:
    // 0x1758c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1758c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1758cc:
    // 0x1758cc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1758ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1758d0:
    // 0x1758d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1758d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1758d4:
    // 0x1758d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1758d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1758d8:
    // 0x1758d8: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1758d8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1758dc:
    // 0x1758dc: 0xc05d3e4  jal         func_174F90
label_1758e0:
    if (ctx->pc == 0x1758E0u) {
        ctx->pc = 0x1758E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758DCu;
        // 0x1758e0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1758E4u;
        goto label_1758e4;
    }
    ctx->pc = 0x1758DCu;
    SET_GPR_U32(ctx, 31, 0x1758E4u);
    ctx->pc = 0x1758E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1758DCu;
    // 0x1758e0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    { ctx->pc = 0x174f90; return; }
    ctx->pc = 0x1758E4u;
label_1758e4:
    // 0x1758e4: 0x10000014  b           . + 4 + (0x14 << 2)
label_1758e8:
    if (ctx->pc == 0x1758E8u) {
        ctx->pc = 0x1758E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758E4u;
        // 0x1758e8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1758ECu;
        goto label_1758ec;
    }
    ctx->pc = 0x1758E4u;
    {
        const bool branch_taken_0x1758e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1758E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758E4u;
        // 0x1758e8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1758e4) {
            ctx->pc = 0x175938u;
            goto label_175938;
        }
    }
    ctx->pc = 0x1758ECu;
label_1758ec:
    // 0x1758ec: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
label_1758f0:
    if (ctx->pc == 0x1758F0u) {
        ctx->pc = 0x1758F4u;
        goto label_1758f4;
    }
    ctx->pc = 0x1758ECu;
    {
        const bool branch_taken_0x1758ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1758ec) {
            ctx->pc = 0x175934u;
            goto label_175934;
        }
    }
    ctx->pc = 0x1758F4u;
label_1758f4:
    // 0x1758f4: 0x9223003d  lbu         $v1, 0x3D($s1)
    ctx->pc = 0x1758f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 61)));
label_1758f8:
    // 0x1758f8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_1758fc:
    if (ctx->pc == 0x1758FCu) {
        ctx->pc = 0x1758FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758F8u;
        // 0x1758fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175900u;
        goto label_175900;
    }
    ctx->pc = 0x1758F8u;
    {
        const bool branch_taken_0x1758f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1758FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758F8u;
        // 0x1758fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1758f8) {
            ctx->pc = 0x175934u;
            goto label_175934;
        }
    }
    ctx->pc = 0x175900u;
label_175900:
    // 0x175900: 0xc05d68c  jal         func_175A30
label_175904:
    if (ctx->pc == 0x175904u) {
        ctx->pc = 0x175904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175900u;
        // 0x175904: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175908u;
        goto label_175908;
    }
    ctx->pc = 0x175900u;
    SET_GPR_U32(ctx, 31, 0x175908u);
    ctx->pc = 0x175904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175900u;
    // 0x175904: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175A30u;
    goto label_175a30;
    ctx->pc = 0x175908u;
label_175908:
    // 0x175908: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x175908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17590c:
    // 0x17590c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17590cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_175910:
    // 0x175910: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175914:
    // 0x175914: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x175914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_175918:
    // 0x175918: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x175918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17591c:
    // 0x17591c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17591cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175920:
    // 0x175920: 0xa0430015  sb          $v1, 0x15($v0)
    ctx->pc = 0x175920u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21), (uint8_t)GPR_U32(ctx, 3));
label_175924:
    // 0x175924: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_175928:
    // 0x175928: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x175928u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_17592c:
    // 0x17592c: 0xc05d3e4  jal         func_174F90
label_175930:
    if (ctx->pc == 0x175930u) {
        ctx->pc = 0x175930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17592Cu;
        // 0x175930: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175934u;
        goto label_175934;
    }
    ctx->pc = 0x17592Cu;
    SET_GPR_U32(ctx, 31, 0x175934u);
    ctx->pc = 0x175930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17592Cu;
    // 0x175930: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    { ctx->pc = 0x174f90; return; }
    ctx->pc = 0x175934u;
label_175934:
    // 0x175934: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x175934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_175938:
    // 0x175938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17593c:
    // 0x17593c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17593cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_175940:
    // 0x175940: 0x3e00008  jr          $ra
label_175944:
    if (ctx->pc == 0x175944u) {
        ctx->pc = 0x175944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175940u;
        // 0x175944: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175948u;
        goto label_175948;
    }
    ctx->pc = 0x175940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175940u;
        // 0x175944: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175948u;
label_175948:
    // 0x175948: 0x0  nop
    ctx->pc = 0x175948u;
    // NOP
label_17594c:
    // 0x17594c: 0x0  nop
    ctx->pc = 0x17594cu;
    // NOP
label_175950:
    // 0x175950: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x175950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_175954:
    // 0x175954: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x175954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_175958:
    // 0x175958: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x175958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17595c:
    // 0x17595c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17595cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_175960:
    // 0x175960: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x175960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_175964:
    // 0x175964: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x175964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_175968:
    // 0x175968: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x175968u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
label_17596c:
    // 0x17596c: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x17596cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_175970:
    // 0x175970: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x175970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_175974:
    // 0x175974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_175978:
    // 0x175978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17597c:
    // 0x17597c: 0x24e71300  addiu       $a3, $a3, 0x1300
    ctx->pc = 0x17597cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4864));
label_175980:
    // 0x175980: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x175980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_175984:
    // 0x175984: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x175984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_175988:
    // 0x175988: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x175988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_17598c:
    // 0x17598c: 0x38910001  xori        $s1, $a0, 0x1
    ctx->pc = 0x17598cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_175990:
    // 0x175990: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x175990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_175994:
    // 0x175994: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_175998:
    // 0x175998: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x175998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_17599c:
    // 0x17599c: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x17599cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1759a0:
    // 0x1759a0: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1759a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1759a4:
    // 0x1759a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1759a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1759a8:
    // 0x1759a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1759a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1759ac:
    // 0x1759ac: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1759acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1759b0:
    // 0x1759b0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1759b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1759b4:
    // 0x1759b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1759b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1759b8:
    // 0x1759b8: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1759b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1759bc:
    // 0x1759bc: 0x24060240  addiu       $a2, $zero, 0x240
    ctx->pc = 0x1759bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_1759c0:
    // 0x1759c0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1759c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1759c4:
    // 0x1759c4: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x1759c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1759c8:
    // 0x1759c8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1759c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1759cc:
    // 0x1759cc: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1759ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1759d0:
    // 0x1759d0: 0xc08e93e  jal         func_23A4F8
label_1759d4:
    if (ctx->pc == 0x1759D4u) {
        ctx->pc = 0x1759D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1759D0u;
        // 0x1759d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1759D8u;
        goto label_1759d8;
    }
    ctx->pc = 0x1759D0u;
    SET_GPR_U32(ctx, 31, 0x1759D8u);
    ctx->pc = 0x1759D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1759D0u;
    // 0x1759d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1759D8u;
label_1759d8:
    // 0x1759d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1759d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1759dc:
    // 0x1759dc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1759dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1759e0:
    // 0x1759e0: 0xa2030222  sb          $v1, 0x222($s0)
    ctx->pc = 0x1759e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 546), (uint8_t)GPR_U32(ctx, 3));
label_1759e4:
    // 0x1759e4: 0xa6030230  sh          $v1, 0x230($s0)
    ctx->pc = 0x1759e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 560), (uint16_t)GPR_U32(ctx, 3));
label_1759e8:
    // 0x1759e8: 0x8c234900  lw          $v1, 0x4900($at)
    ctx->pc = 0x1759e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_1759ec:
    // 0x1759ec: 0xae430228  sw          $v1, 0x228($s2)
    ctx->pc = 0x1759ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 3));
label_1759f0:
    // 0x1759f0: 0xae03022c  sw          $v1, 0x22C($s0)
    ctx->pc = 0x1759f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 3));
label_1759f4:
    // 0x1759f4: 0xa251021f  sb          $s1, 0x21F($s2)
    ctx->pc = 0x1759f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 543), (uint8_t)GPR_U32(ctx, 17));
label_1759f8:
    // 0x1759f8: 0xa6400226  sh          $zero, 0x226($s2)
    ctx->pc = 0x1759f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 550), (uint16_t)GPR_U32(ctx, 0));
label_1759fc:
    // 0x1759fc: 0xa2400223  sb          $zero, 0x223($s2)
    ctx->pc = 0x1759fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 547), (uint8_t)GPR_U32(ctx, 0));
label_175a00:
    // 0x175a00: 0xa2400224  sb          $zero, 0x224($s2)
    ctx->pc = 0x175a00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 548), (uint8_t)GPR_U32(ctx, 0));
label_175a04:
    // 0x175a04: 0xae400234  sw          $zero, 0x234($s2)
    ctx->pc = 0x175a04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 564), GPR_U32(ctx, 0));
label_175a08:
    // 0x175a08: 0xae400238  sw          $zero, 0x238($s2)
    ctx->pc = 0x175a08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 0));
label_175a0c:
    // 0x175a0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x175a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_175a10:
    // 0x175a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_175a14:
    // 0x175a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175a18:
    // 0x175a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_175a1c:
    // 0x175a1c: 0x3e00008  jr          $ra
label_175a20:
    if (ctx->pc == 0x175A20u) {
        ctx->pc = 0x175A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A1Cu;
        // 0x175a20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175A24u;
        goto label_175a24;
    }
    ctx->pc = 0x175A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A1Cu;
        // 0x175a20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175A24u;
label_175a24:
    // 0x175a24: 0x0  nop
    ctx->pc = 0x175a24u;
    // NOP
label_175a28:
    // 0x175a28: 0x0  nop
    ctx->pc = 0x175a28u;
    // NOP
label_175a2c:
    // 0x175a2c: 0x0  nop
    ctx->pc = 0x175a2cu;
    // NOP
label_175a30:
    // 0x175a30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x175a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_175a34:
    // 0x175a34: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x175a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_175a38:
    // 0x175a38: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x175a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_175a3c:
    // 0x175a3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x175a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_175a40:
    // 0x175a40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x175a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_175a44:
    // 0x175a44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_175a48:
    // 0x175a48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_175a4c:
    // 0x175a4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_175a50:
    // 0x175a50: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x175a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_175a54:
    // 0x175a54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_175a58:
    // 0x175a58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x175a58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175a5c:
    // 0x175a5c: 0x90a2003d  lbu         $v0, 0x3D($a1)
    ctx->pc = 0x175a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 61)));
label_175a60:
    // 0x175a60: 0x14400078  bnez        $v0, . + 4 + (0x78 << 2)
label_175a64:
    if (ctx->pc == 0x175A64u) {
        ctx->pc = 0x175A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A60u;
        // 0x175a64: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175A68u;
        goto label_175a68;
    }
    ctx->pc = 0x175A60u;
    {
        const bool branch_taken_0x175a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A60u;
        // 0x175a64: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175a60) {
            ctx->pc = 0x175C44u;
            goto label_175c44;
        }
    }
    ctx->pc = 0x175A68u;
label_175a68:
    // 0x175a68: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x175a68u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_175a6c:
    // 0x175a6c: 0x9232003e  lbu         $s2, 0x3E($s1)
    ctx->pc = 0x175a6cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 62)));
label_175a70:
    // 0x175a70: 0x92330034  lbu         $s3, 0x34($s1)
    ctx->pc = 0x175a70u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_175a74:
    // 0x175a74: 0x92b40014  lbu         $s4, 0x14($s5)
    ctx->pc = 0x175a74u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 20)));
label_175a78:
    // 0x175a78: 0xc08e93e  jal         func_23A4F8
label_175a7c:
    if (ctx->pc == 0x175A7Cu) {
        ctx->pc = 0x175A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175A78u;
        // 0x175a7c: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175A80u;
        goto label_175a80;
    }
    ctx->pc = 0x175A78u;
    SET_GPR_U32(ctx, 31, 0x175A80u);
    ctx->pc = 0x175A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175A78u;
    // 0x175a7c: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x175A80u;
label_175a80:
    // 0x175a80: 0xa232003e  sb          $s2, 0x3E($s1)
    ctx->pc = 0x175a80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 62), (uint8_t)GPR_U32(ctx, 18));
label_175a84:
    // 0x175a84: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x175a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_175a88:
    // 0x175a88: 0xae350000  sw          $s5, 0x0($s1)
    ctx->pc = 0x175a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 21));
label_175a8c:
    // 0x175a8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x175a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_175a90:
    // 0x175a90: 0xa0740014  sb          $s4, 0x14($v1)
    ctx->pc = 0x175a90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 20));
label_175a94:
    // 0x175a94: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x175a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_175a98:
    // 0x175a98: 0xa0600015  sb          $zero, 0x15($v1)
    ctx->pc = 0x175a98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 0));
label_175a9c:
    // 0x175a9c: 0xa2330034  sb          $s3, 0x34($s1)
    ctx->pc = 0x175a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 19));
label_175aa0:
    // 0x175aa0: 0xa220003b  sb          $zero, 0x3B($s1)
    ctx->pc = 0x175aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 59), (uint8_t)GPR_U32(ctx, 0));
label_175aa4:
    // 0x175aa4: 0xa222003c  sb          $v0, 0x3C($s1)
    ctx->pc = 0x175aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 2));
label_175aa8:
    // 0x175aa8: 0x92220039  lbu         $v0, 0x39($s1)
    ctx->pc = 0x175aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_175aac:
    // 0x175aac: 0x2841004a  slti        $at, $v0, 0x4A
    ctx->pc = 0x175aacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)74) ? 1 : 0);
label_175ab0:
    // 0x175ab0: 0x10200059  beqz        $at, . + 4 + (0x59 << 2)
label_175ab4:
    if (ctx->pc == 0x175AB4u) {
        ctx->pc = 0x175AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AB0u;
        // 0x175ab4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x175AB8u;
        goto label_175ab8;
    }
    ctx->pc = 0x175AB0u;
    {
        const bool branch_taken_0x175ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x175AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AB0u;
        // 0x175ab4: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ab0) {
            ctx->pc = 0x175C18u;
            goto label_175c18;
        }
    }
    ctx->pc = 0x175AB8u;
label_175ab8:
    // 0x175ab8: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x175ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_175abc:
    // 0x175abc: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x175abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_175ac0:
    // 0x175ac0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x175ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_175ac4:
    // 0x175ac4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x175ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_175ac8:
    // 0x175ac8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x175ac8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175acc:
    // 0x175acc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x175accu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_175ad0:
    // 0x175ad0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x175ad0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175ad4:
    // 0x175ad4: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x175ad4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_175ad8:
    // 0x175ad8: 0xa262002c  sb          $v0, 0x2C($s3)
    ctx->pc = 0x175ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 44), (uint8_t)GPR_U32(ctx, 2));
label_175adc:
    // 0x175adc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x175adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_175ae0:
    // 0x175ae0: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x175ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_175ae4:
    // 0x175ae4: 0x2761021  addu        $v0, $s3, $s6
    ctx->pc = 0x175ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_175ae8:
    // 0x175ae8: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x175ae8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_175aec:
    // 0x175aec: 0x12800045  beqz        $s4, . + 4 + (0x45 << 2)
label_175af0:
    if (ctx->pc == 0x175AF0u) {
        ctx->pc = 0x175AF4u;
        goto label_175af4;
    }
    ctx->pc = 0x175AECu;
    {
        const bool branch_taken_0x175aec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x175aec) {
            ctx->pc = 0x175C04u;
            goto label_175c04;
        }
    }
    ctx->pc = 0x175AF4u;
label_175af4:
    // 0x175af4: 0x92220034  lbu         $v0, 0x34($s1)
    ctx->pc = 0x175af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
label_175af8:
    // 0x175af8: 0xa2820234  sb          $v0, 0x234($s4)
    ctx->pc = 0x175af8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 564), (uint8_t)GPR_U32(ctx, 2));
label_175afc:
    // 0x175afc: 0x92820233  lbu         $v0, 0x233($s4)
    ctx->pc = 0x175afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 563)));
label_175b00:
    // 0x175b00: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_175b04:
    if (ctx->pc == 0x175B04u) {
        ctx->pc = 0x175B08u;
        goto label_175b08;
    }
    ctx->pc = 0x175B00u;
    {
        const bool branch_taken_0x175b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175b00) {
            ctx->pc = 0x175B38u;
            goto label_175b38;
        }
    }
    ctx->pc = 0x175B08u;
label_175b08:
    // 0x175b08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x175b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_175b0c:
    // 0x175b0c: 0x9042000e  lbu         $v0, 0xE($v0)
    ctx->pc = 0x175b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
label_175b10:
    // 0x175b10: 0xa282024a  sb          $v0, 0x24A($s4)
    ctx->pc = 0x175b10u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 586), (uint8_t)GPR_U32(ctx, 2));
label_175b14:
    // 0x175b14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x175b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_175b18:
    // 0x175b18: 0x9042000f  lbu         $v0, 0xF($v0)
    ctx->pc = 0x175b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
label_175b1c:
    // 0x175b1c: 0xa282024b  sb          $v0, 0x24B($s4)
    ctx->pc = 0x175b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 587), (uint8_t)GPR_U32(ctx, 2));
label_175b20:
    // 0x175b20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x175b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_175b24:
    // 0x175b24: 0x9445000a  lhu         $a1, 0xA($v0)
    ctx->pc = 0x175b24u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_175b28:
    // 0x175b28: 0xc06fc00  jal         func_1BF000
label_175b2c:
    if (ctx->pc == 0x175B2Cu) {
        ctx->pc = 0x175B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B28u;
        // 0x175b2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B30u;
        goto label_175b30;
    }
    ctx->pc = 0x175B28u;
    SET_GPR_U32(ctx, 31, 0x175B30u);
    ctx->pc = 0x175B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175B28u;
    // 0x175b2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF000u;
    { ctx->pc = 0x1bf000; return; }
    ctx->pc = 0x175B30u;
label_175b30:
    // 0x175b30: 0x10000030  b           . + 4 + (0x30 << 2)
label_175b34:
    if (ctx->pc == 0x175B34u) {
        ctx->pc = 0x175B38u;
        goto label_175b38;
    }
    ctx->pc = 0x175B30u;
    {
        const bool branch_taken_0x175b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175b30) {
            ctx->pc = 0x175BF4u;
            goto label_175bf4;
        }
    }
    ctx->pc = 0x175B38u;
label_175b38:
    // 0x175b38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x175b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_175b3c:
    // 0x175b3c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x175b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_175b40:
    // 0x175b40: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x175b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_175b44:
    // 0x175b44: 0x9064000e  lbu         $a0, 0xE($v1)
    ctx->pc = 0x175b44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
label_175b48:
    // 0x175b48: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x175b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_175b4c:
    // 0x175b4c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x175b4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_175b50:
    // 0x175b50: 0x0  nop
    ctx->pc = 0x175b50u;
    // NOP
label_175b54:
    // 0x175b54: 0x0  nop
    ctx->pc = 0x175b54u;
    // NOP
label_175b58:
    // 0x175b58: 0x1010  mfhi        $v0
    ctx->pc = 0x175b58u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_175b5c:
    // 0x175b5c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x175b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_175b60:
    // 0x175b60: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x175b60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_175b64:
    // 0x175b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_175b68:
    // 0x175b68: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x175b68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
label_175b6c:
    // 0x175b6c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_175b70:
    if (ctx->pc == 0x175B70u) {
        ctx->pc = 0x175B74u;
        goto label_175b74;
    }
    ctx->pc = 0x175B6Cu;
    {
        const bool branch_taken_0x175b6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x175b6c) {
            ctx->pc = 0x175B7Cu;
            goto label_175b7c;
        }
    }
    ctx->pc = 0x175B74u;
label_175b74:
    // 0x175b74: 0x10000003  b           . + 4 + (0x3 << 2)
label_175b78:
    if (ctx->pc == 0x175B78u) {
        ctx->pc = 0x175B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B74u;
        // 0x175b78: 0x821823  subu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175B7Cu;
        goto label_175b7c;
    }
    ctx->pc = 0x175B74u;
    {
        const bool branch_taken_0x175b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B74u;
        // 0x175b78: 0x821823  subu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b74) {
            ctx->pc = 0x175B84u;
            goto label_175b84;
        }
    }
    ctx->pc = 0x175B7Cu;
label_175b7c:
    // 0x175b7c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x175b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_175b80:
    // 0x175b80: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x175b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_175b84:
    // 0x175b84: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x175b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_175b88:
    // 0x175b88: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x175b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_175b8c:
    // 0x175b8c: 0xa283024a  sb          $v1, 0x24A($s4)
    ctx->pc = 0x175b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 586), (uint8_t)GPR_U32(ctx, 3));
label_175b90:
    // 0x175b90: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x175b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_175b94:
    // 0x175b94: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x175b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_175b98:
    // 0x175b98: 0x9064000f  lbu         $a0, 0xF($v1)
    ctx->pc = 0x175b98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_175b9c:
    // 0x175b9c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x175b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_175ba0:
    // 0x175ba0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x175ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_175ba4:
    // 0x175ba4: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x175ba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_175ba8:
    // 0x175ba8: 0x0  nop
    ctx->pc = 0x175ba8u;
    // NOP
label_175bac:
    // 0x175bac: 0x0  nop
    ctx->pc = 0x175bacu;
    // NOP
label_175bb0:
    // 0x175bb0: 0x1010  mfhi        $v0
    ctx->pc = 0x175bb0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_175bb4:
    // 0x175bb4: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x175bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_175bb8:
    // 0x175bb8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x175bb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_175bbc:
    // 0x175bbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_175bc0:
    // 0x175bc0: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x175bc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
label_175bc4:
    // 0x175bc4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_175bc8:
    if (ctx->pc == 0x175BC8u) {
        ctx->pc = 0x175BCCu;
        goto label_175bcc;
    }
    ctx->pc = 0x175BC4u;
    {
        const bool branch_taken_0x175bc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x175bc4) {
            ctx->pc = 0x175BD4u;
            goto label_175bd4;
        }
    }
    ctx->pc = 0x175BCCu;
label_175bcc:
    // 0x175bcc: 0x10000003  b           . + 4 + (0x3 << 2)
label_175bd0:
    if (ctx->pc == 0x175BD0u) {
        ctx->pc = 0x175BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BCCu;
        // 0x175bd0: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175BD4u;
        goto label_175bd4;
    }
    ctx->pc = 0x175BCCu;
    {
        const bool branch_taken_0x175bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BCCu;
        // 0x175bd0: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175bcc) {
            ctx->pc = 0x175BDCu;
            goto label_175bdc;
        }
    }
    ctx->pc = 0x175BD4u;
label_175bd4:
    // 0x175bd4: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x175bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_175bd8:
    // 0x175bd8: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x175bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_175bdc:
    // 0x175bdc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x175bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_175be0:
    // 0x175be0: 0xa282024b  sb          $v0, 0x24B($s4)
    ctx->pc = 0x175be0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 587), (uint8_t)GPR_U32(ctx, 2));
label_175be4:
    // 0x175be4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x175be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_175be8:
    // 0x175be8: 0x9445000c  lhu         $a1, 0xC($v0)
    ctx->pc = 0x175be8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_175bec:
    // 0x175bec: 0xc06fc00  jal         func_1BF000
label_175bf0:
    if (ctx->pc == 0x175BF0u) {
        ctx->pc = 0x175BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BECu;
        // 0x175bf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175BF4u;
        goto label_175bf4;
    }
    ctx->pc = 0x175BECu;
    SET_GPR_U32(ctx, 31, 0x175BF4u);
    ctx->pc = 0x175BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175BECu;
    // 0x175bf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF000u;
    { ctx->pc = 0x1bf000; return; }
    ctx->pc = 0x175BF4u;
label_175bf4:
    // 0x175bf4: 0x0  nop
    ctx->pc = 0x175bf4u;
    // NOP
label_175bf8:
    // 0x175bf8: 0x92850247  lbu         $a1, 0x247($s4)
    ctx->pc = 0x175bf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 583)));
label_175bfc:
    // 0x175bfc: 0xc06525c  jal         func_194970
label_175c00:
    if (ctx->pc == 0x175C00u) {
        ctx->pc = 0x175C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BFCu;
        // 0x175c00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C04u;
        goto label_175c04;
    }
    ctx->pc = 0x175BFCu;
    SET_GPR_U32(ctx, 31, 0x175C04u);
    ctx->pc = 0x175C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175BFCu;
    // 0x175c00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194970u;
    { ctx->pc = 0x194970; return; }
    ctx->pc = 0x175C04u;
label_175c04:
    // 0x175c04: 0x0  nop
    ctx->pc = 0x175c04u;
    // NOP
label_175c08:
    // 0x175c08: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x175c08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_175c0c:
    // 0x175c0c: 0x2aa20009  slti        $v0, $s5, 0x9
    ctx->pc = 0x175c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)9) ? 1 : 0);
label_175c10:
    // 0x175c10: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
label_175c14:
    if (ctx->pc == 0x175C14u) {
        ctx->pc = 0x175C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C10u;
        // 0x175c14: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C18u;
        goto label_175c18;
    }
    ctx->pc = 0x175C10u;
    {
        const bool branch_taken_0x175c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C10u;
        // 0x175c14: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c10) {
            ctx->pc = 0x175AE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175ae4;
        }
    }
    ctx->pc = 0x175C18u;
label_175c18:
    // 0x175c18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x175c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_175c1c:
    // 0x175c1c: 0xa2020036  sb          $v0, 0x36($s0)
    ctx->pc = 0x175c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 2));
label_175c20:
    // 0x175c20: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x175c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_175c24:
    // 0x175c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175c28:
    // 0x175c28: 0xa202003d  sb          $v0, 0x3D($s0)
    ctx->pc = 0x175c28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 2));
label_175c2c:
    // 0x175c2c: 0xa200002a  sb          $zero, 0x2A($s0)
    ctx->pc = 0x175c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 0));
label_175c30:
    // 0x175c30: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x175c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_175c34:
    // 0x175c34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x175c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_175c38:
    // 0x175c38: 0xa0640015  sb          $a0, 0x15($v1)
    ctx->pc = 0x175c38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 4));
label_175c3c:
    // 0x175c3c: 0x10000008  b           . + 4 + (0x8 << 2)
label_175c40:
    if (ctx->pc == 0x175C40u) {
        ctx->pc = 0x175C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C3Cu;
        // 0x175c40: 0xa2020038  sb          $v0, 0x38($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C44u;
        goto label_175c44;
    }
    ctx->pc = 0x175C3Cu;
    {
        const bool branch_taken_0x175c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C3Cu;
        // 0x175c40: 0xa2020038  sb          $v0, 0x38($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c3c) {
            ctx->pc = 0x175C60u;
            goto label_175c60;
        }
    }
    ctx->pc = 0x175C44u;
label_175c44:
    // 0x175c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175c48:
    // 0x175c48: 0xa222003d  sb          $v0, 0x3D($s1)
    ctx->pc = 0x175c48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 2));
label_175c4c:
    // 0x175c4c: 0xa220002a  sb          $zero, 0x2A($s1)
    ctx->pc = 0x175c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
label_175c50:
    // 0x175c50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x175c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_175c54:
    // 0x175c54: 0xa0400015  sb          $zero, 0x15($v0)
    ctx->pc = 0x175c54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21), (uint8_t)GPR_U32(ctx, 0));
label_175c58:
    // 0x175c58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_175c5c:
    // 0x175c5c: 0xa0400015  sb          $zero, 0x15($v0)
    ctx->pc = 0x175c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21), (uint8_t)GPR_U32(ctx, 0));
label_175c60:
    // 0x175c60: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x175c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_175c64:
    // 0x175c64: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x175c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_175c68:
    // 0x175c68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x175c68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_175c6c:
    // 0x175c6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x175c6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_175c70:
    // 0x175c70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x175c70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_175c74:
    // 0x175c74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x175c74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175c78:
    // 0x175c78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175c78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_175c7c:
    // 0x175c7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175c80:
    // 0x175c80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_175c84:
    // 0x175c84: 0x3e00008  jr          $ra
label_175c88:
    if (ctx->pc == 0x175C88u) {
        ctx->pc = 0x175C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C84u;
        // 0x175c88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175C8Cu;
        goto label_175c8c;
    }
    ctx->pc = 0x175C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C84u;
        // 0x175c88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175C8Cu;
label_175c8c:
    // 0x175c8c: 0x0  nop
    ctx->pc = 0x175c8cu;
    // NOP
label_175c90:
    // 0x175c90: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x175c90u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_175c94:
    // 0x175c94: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x175c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_175c98:
    // 0x175c98: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
label_175c9c:
    if (ctx->pc == 0x175C9Cu) {
        ctx->pc = 0x175C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C98u;
        // 0x175c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175CA0u;
        { ctx->pc = 0x175ca0; return; }
    }
    ctx->pc = 0x175C98u;
    {
        const bool branch_taken_0x175c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C98u;
        // 0x175c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c98) {
            ctx->pc = 0x175D70u;
            { ctx->pc = 0x175d70; return; }
        }
    }
    ctx->pc = 0x175CA0u;
    ctx->pc = 0x175ca0u;
    return;
}

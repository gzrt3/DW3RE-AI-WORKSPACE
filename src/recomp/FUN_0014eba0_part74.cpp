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


void FUN_0014eba0_part74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1725f0u: goto label_1725f0;
        case 0x1725f4u: goto label_1725f4;
        case 0x1725f8u: goto label_1725f8;
        case 0x1725fcu: goto label_1725fc;
        case 0x172600u: goto label_172600;
        case 0x172604u: goto label_172604;
        case 0x172608u: goto label_172608;
        case 0x17260cu: goto label_17260c;
        case 0x172610u: goto label_172610;
        case 0x172614u: goto label_172614;
        case 0x172618u: goto label_172618;
        case 0x17261cu: goto label_17261c;
        case 0x172620u: goto label_172620;
        case 0x172624u: goto label_172624;
        case 0x172628u: goto label_172628;
        case 0x17262cu: goto label_17262c;
        case 0x172630u: goto label_172630;
        case 0x172634u: goto label_172634;
        case 0x172638u: goto label_172638;
        case 0x17263cu: goto label_17263c;
        case 0x172640u: goto label_172640;
        case 0x172644u: goto label_172644;
        case 0x172648u: goto label_172648;
        case 0x17264cu: goto label_17264c;
        case 0x172650u: goto label_172650;
        case 0x172654u: goto label_172654;
        case 0x172658u: goto label_172658;
        case 0x17265cu: goto label_17265c;
        case 0x172660u: goto label_172660;
        case 0x172664u: goto label_172664;
        case 0x172668u: goto label_172668;
        case 0x17266cu: goto label_17266c;
        case 0x172670u: goto label_172670;
        case 0x172674u: goto label_172674;
        case 0x172678u: goto label_172678;
        case 0x17267cu: goto label_17267c;
        case 0x172680u: goto label_172680;
        case 0x172684u: goto label_172684;
        case 0x172688u: goto label_172688;
        case 0x17268cu: goto label_17268c;
        case 0x172690u: goto label_172690;
        case 0x172694u: goto label_172694;
        case 0x172698u: goto label_172698;
        case 0x17269cu: goto label_17269c;
        case 0x1726a0u: goto label_1726a0;
        case 0x1726a4u: goto label_1726a4;
        case 0x1726a8u: goto label_1726a8;
        case 0x1726acu: goto label_1726ac;
        case 0x1726b0u: goto label_1726b0;
        case 0x1726b4u: goto label_1726b4;
        case 0x1726b8u: goto label_1726b8;
        case 0x1726bcu: goto label_1726bc;
        case 0x1726c0u: goto label_1726c0;
        case 0x1726c4u: goto label_1726c4;
        case 0x1726c8u: goto label_1726c8;
        case 0x1726ccu: goto label_1726cc;
        case 0x1726d0u: goto label_1726d0;
        case 0x1726d4u: goto label_1726d4;
        case 0x1726d8u: goto label_1726d8;
        case 0x1726dcu: goto label_1726dc;
        case 0x1726e0u: goto label_1726e0;
        case 0x1726e4u: goto label_1726e4;
        case 0x1726e8u: goto label_1726e8;
        case 0x1726ecu: goto label_1726ec;
        case 0x1726f0u: goto label_1726f0;
        case 0x1726f4u: goto label_1726f4;
        case 0x1726f8u: goto label_1726f8;
        case 0x1726fcu: goto label_1726fc;
        case 0x172700u: goto label_172700;
        case 0x172704u: goto label_172704;
        case 0x172708u: goto label_172708;
        case 0x17270cu: goto label_17270c;
        case 0x172710u: goto label_172710;
        case 0x172714u: goto label_172714;
        case 0x172718u: goto label_172718;
        case 0x17271cu: goto label_17271c;
        case 0x172720u: goto label_172720;
        case 0x172724u: goto label_172724;
        case 0x172728u: goto label_172728;
        case 0x17272cu: goto label_17272c;
        case 0x172730u: goto label_172730;
        case 0x172734u: goto label_172734;
        case 0x172738u: goto label_172738;
        case 0x17273cu: goto label_17273c;
        case 0x172740u: goto label_172740;
        case 0x172744u: goto label_172744;
        case 0x172748u: goto label_172748;
        case 0x17274cu: goto label_17274c;
        case 0x172750u: goto label_172750;
        case 0x172754u: goto label_172754;
        case 0x172758u: goto label_172758;
        case 0x17275cu: goto label_17275c;
        case 0x172760u: goto label_172760;
        case 0x172764u: goto label_172764;
        case 0x172768u: goto label_172768;
        case 0x17276cu: goto label_17276c;
        case 0x172770u: goto label_172770;
        case 0x172774u: goto label_172774;
        case 0x172778u: goto label_172778;
        case 0x17277cu: goto label_17277c;
        case 0x172780u: goto label_172780;
        case 0x172784u: goto label_172784;
        case 0x172788u: goto label_172788;
        case 0x17278cu: goto label_17278c;
        case 0x172790u: goto label_172790;
        case 0x172794u: goto label_172794;
        case 0x172798u: goto label_172798;
        case 0x17279cu: goto label_17279c;
        case 0x1727a0u: goto label_1727a0;
        case 0x1727a4u: goto label_1727a4;
        case 0x1727a8u: goto label_1727a8;
        case 0x1727acu: goto label_1727ac;
        case 0x1727b0u: goto label_1727b0;
        case 0x1727b4u: goto label_1727b4;
        case 0x1727b8u: goto label_1727b8;
        case 0x1727bcu: goto label_1727bc;
        case 0x1727c0u: goto label_1727c0;
        case 0x1727c4u: goto label_1727c4;
        case 0x1727c8u: goto label_1727c8;
        case 0x1727ccu: goto label_1727cc;
        case 0x1727d0u: goto label_1727d0;
        case 0x1727d4u: goto label_1727d4;
        case 0x1727d8u: goto label_1727d8;
        case 0x1727dcu: goto label_1727dc;
        case 0x1727e0u: goto label_1727e0;
        case 0x1727e4u: goto label_1727e4;
        case 0x1727e8u: goto label_1727e8;
        case 0x1727ecu: goto label_1727ec;
        case 0x1727f0u: goto label_1727f0;
        case 0x1727f4u: goto label_1727f4;
        case 0x1727f8u: goto label_1727f8;
        case 0x1727fcu: goto label_1727fc;
        case 0x172800u: goto label_172800;
        case 0x172804u: goto label_172804;
        case 0x172808u: goto label_172808;
        case 0x17280cu: goto label_17280c;
        case 0x172810u: goto label_172810;
        case 0x172814u: goto label_172814;
        case 0x172818u: goto label_172818;
        case 0x17281cu: goto label_17281c;
        case 0x172820u: goto label_172820;
        case 0x172824u: goto label_172824;
        case 0x172828u: goto label_172828;
        case 0x17282cu: goto label_17282c;
        case 0x172830u: goto label_172830;
        case 0x172834u: goto label_172834;
        case 0x172838u: goto label_172838;
        case 0x17283cu: goto label_17283c;
        case 0x172840u: goto label_172840;
        case 0x172844u: goto label_172844;
        case 0x172848u: goto label_172848;
        case 0x17284cu: goto label_17284c;
        case 0x172850u: goto label_172850;
        case 0x172854u: goto label_172854;
        case 0x172858u: goto label_172858;
        case 0x17285cu: goto label_17285c;
        case 0x172860u: goto label_172860;
        case 0x172864u: goto label_172864;
        case 0x172868u: goto label_172868;
        case 0x17286cu: goto label_17286c;
        case 0x172870u: goto label_172870;
        case 0x172874u: goto label_172874;
        case 0x172878u: goto label_172878;
        case 0x17287cu: goto label_17287c;
        case 0x172880u: goto label_172880;
        case 0x172884u: goto label_172884;
        case 0x172888u: goto label_172888;
        case 0x17288cu: goto label_17288c;
        case 0x172890u: goto label_172890;
        case 0x172894u: goto label_172894;
        case 0x172898u: goto label_172898;
        case 0x17289cu: goto label_17289c;
        case 0x1728a0u: goto label_1728a0;
        case 0x1728a4u: goto label_1728a4;
        case 0x1728a8u: goto label_1728a8;
        case 0x1728acu: goto label_1728ac;
        case 0x1728b0u: goto label_1728b0;
        case 0x1728b4u: goto label_1728b4;
        case 0x1728b8u: goto label_1728b8;
        case 0x1728bcu: goto label_1728bc;
        case 0x1728c0u: goto label_1728c0;
        case 0x1728c4u: goto label_1728c4;
        case 0x1728c8u: goto label_1728c8;
        case 0x1728ccu: goto label_1728cc;
        case 0x1728d0u: goto label_1728d0;
        case 0x1728d4u: goto label_1728d4;
        case 0x1728d8u: goto label_1728d8;
        case 0x1728dcu: goto label_1728dc;
        case 0x1728e0u: goto label_1728e0;
        case 0x1728e4u: goto label_1728e4;
        case 0x1728e8u: goto label_1728e8;
        case 0x1728ecu: goto label_1728ec;
        case 0x1728f0u: goto label_1728f0;
        case 0x1728f4u: goto label_1728f4;
        case 0x1728f8u: goto label_1728f8;
        case 0x1728fcu: goto label_1728fc;
        case 0x172900u: goto label_172900;
        case 0x172904u: goto label_172904;
        case 0x172908u: goto label_172908;
        case 0x17290cu: goto label_17290c;
        case 0x172910u: goto label_172910;
        case 0x172914u: goto label_172914;
        case 0x172918u: goto label_172918;
        case 0x17291cu: goto label_17291c;
        case 0x172920u: goto label_172920;
        case 0x172924u: goto label_172924;
        case 0x172928u: goto label_172928;
        case 0x17292cu: goto label_17292c;
        case 0x172930u: goto label_172930;
        case 0x172934u: goto label_172934;
        case 0x172938u: goto label_172938;
        case 0x17293cu: goto label_17293c;
        case 0x172940u: goto label_172940;
        case 0x172944u: goto label_172944;
        case 0x172948u: goto label_172948;
        case 0x17294cu: goto label_17294c;
        case 0x172950u: goto label_172950;
        case 0x172954u: goto label_172954;
        case 0x172958u: goto label_172958;
        case 0x17295cu: goto label_17295c;
        case 0x172960u: goto label_172960;
        case 0x172964u: goto label_172964;
        case 0x172968u: goto label_172968;
        case 0x17296cu: goto label_17296c;
        case 0x172970u: goto label_172970;
        case 0x172974u: goto label_172974;
        case 0x172978u: goto label_172978;
        case 0x17297cu: goto label_17297c;
        case 0x172980u: goto label_172980;
        case 0x172984u: goto label_172984;
        case 0x172988u: goto label_172988;
        case 0x17298cu: goto label_17298c;
        case 0x172990u: goto label_172990;
        case 0x172994u: goto label_172994;
        case 0x172998u: goto label_172998;
        case 0x17299cu: goto label_17299c;
        case 0x1729a0u: goto label_1729a0;
        case 0x1729a4u: goto label_1729a4;
        case 0x1729a8u: goto label_1729a8;
        case 0x1729acu: goto label_1729ac;
        case 0x1729b0u: goto label_1729b0;
        case 0x1729b4u: goto label_1729b4;
        case 0x1729b8u: goto label_1729b8;
        case 0x1729bcu: goto label_1729bc;
        case 0x1729c0u: goto label_1729c0;
        case 0x1729c4u: goto label_1729c4;
        case 0x1729c8u: goto label_1729c8;
        case 0x1729ccu: goto label_1729cc;
        case 0x1729d0u: goto label_1729d0;
        case 0x1729d4u: goto label_1729d4;
        case 0x1729d8u: goto label_1729d8;
        case 0x1729dcu: goto label_1729dc;
        case 0x1729e0u: goto label_1729e0;
        case 0x1729e4u: goto label_1729e4;
        case 0x1729e8u: goto label_1729e8;
        case 0x1729ecu: goto label_1729ec;
        case 0x1729f0u: goto label_1729f0;
        case 0x1729f4u: goto label_1729f4;
        case 0x1729f8u: goto label_1729f8;
        case 0x1729fcu: goto label_1729fc;
        case 0x172a00u: goto label_172a00;
        case 0x172a04u: goto label_172a04;
        case 0x172a08u: goto label_172a08;
        case 0x172a0cu: goto label_172a0c;
        case 0x172a10u: goto label_172a10;
        case 0x172a14u: goto label_172a14;
        case 0x172a18u: goto label_172a18;
        case 0x172a1cu: goto label_172a1c;
        case 0x172a20u: goto label_172a20;
        case 0x172a24u: goto label_172a24;
        case 0x172a28u: goto label_172a28;
        case 0x172a2cu: goto label_172a2c;
        case 0x172a30u: goto label_172a30;
        case 0x172a34u: goto label_172a34;
        case 0x172a38u: goto label_172a38;
        case 0x172a3cu: goto label_172a3c;
        case 0x172a40u: goto label_172a40;
        case 0x172a44u: goto label_172a44;
        case 0x172a48u: goto label_172a48;
        case 0x172a4cu: goto label_172a4c;
        case 0x172a50u: goto label_172a50;
        case 0x172a54u: goto label_172a54;
        case 0x172a58u: goto label_172a58;
        case 0x172a5cu: goto label_172a5c;
        case 0x172a60u: goto label_172a60;
        case 0x172a64u: goto label_172a64;
        case 0x172a68u: goto label_172a68;
        case 0x172a6cu: goto label_172a6c;
        case 0x172a70u: goto label_172a70;
        case 0x172a74u: goto label_172a74;
        case 0x172a78u: goto label_172a78;
        case 0x172a7cu: goto label_172a7c;
        case 0x172a80u: goto label_172a80;
        case 0x172a84u: goto label_172a84;
        case 0x172a88u: goto label_172a88;
        case 0x172a8cu: goto label_172a8c;
        case 0x172a90u: goto label_172a90;
        case 0x172a94u: goto label_172a94;
        case 0x172a98u: goto label_172a98;
        case 0x172a9cu: goto label_172a9c;
        case 0x172aa0u: goto label_172aa0;
        case 0x172aa4u: goto label_172aa4;
        case 0x172aa8u: goto label_172aa8;
        case 0x172aacu: goto label_172aac;
        case 0x172ab0u: goto label_172ab0;
        case 0x172ab4u: goto label_172ab4;
        case 0x172ab8u: goto label_172ab8;
        case 0x172abcu: goto label_172abc;
        case 0x172ac0u: goto label_172ac0;
        case 0x172ac4u: goto label_172ac4;
        case 0x172ac8u: goto label_172ac8;
        case 0x172accu: goto label_172acc;
        case 0x172ad0u: goto label_172ad0;
        case 0x172ad4u: goto label_172ad4;
        case 0x172ad8u: goto label_172ad8;
        case 0x172adcu: goto label_172adc;
        case 0x172ae0u: goto label_172ae0;
        case 0x172ae4u: goto label_172ae4;
        case 0x172ae8u: goto label_172ae8;
        case 0x172aecu: goto label_172aec;
        case 0x172af0u: goto label_172af0;
        case 0x172af4u: goto label_172af4;
        case 0x172af8u: goto label_172af8;
        case 0x172afcu: goto label_172afc;
        case 0x172b00u: goto label_172b00;
        case 0x172b04u: goto label_172b04;
        case 0x172b08u: goto label_172b08;
        case 0x172b0cu: goto label_172b0c;
        case 0x172b10u: goto label_172b10;
        case 0x172b14u: goto label_172b14;
        case 0x172b18u: goto label_172b18;
        case 0x172b1cu: goto label_172b1c;
        case 0x172b20u: goto label_172b20;
        case 0x172b24u: goto label_172b24;
        case 0x172b28u: goto label_172b28;
        case 0x172b2cu: goto label_172b2c;
        case 0x172b30u: goto label_172b30;
        case 0x172b34u: goto label_172b34;
        case 0x172b38u: goto label_172b38;
        case 0x172b3cu: goto label_172b3c;
        case 0x172b40u: goto label_172b40;
        case 0x172b44u: goto label_172b44;
        case 0x172b48u: goto label_172b48;
        case 0x172b4cu: goto label_172b4c;
        case 0x172b50u: goto label_172b50;
        case 0x172b54u: goto label_172b54;
        case 0x172b58u: goto label_172b58;
        case 0x172b5cu: goto label_172b5c;
        case 0x172b60u: goto label_172b60;
        case 0x172b64u: goto label_172b64;
        case 0x172b68u: goto label_172b68;
        case 0x172b6cu: goto label_172b6c;
        case 0x172b70u: goto label_172b70;
        case 0x172b74u: goto label_172b74;
        case 0x172b78u: goto label_172b78;
        case 0x172b7cu: goto label_172b7c;
        case 0x172b80u: goto label_172b80;
        case 0x172b84u: goto label_172b84;
        case 0x172b88u: goto label_172b88;
        case 0x172b8cu: goto label_172b8c;
        case 0x172b90u: goto label_172b90;
        case 0x172b94u: goto label_172b94;
        case 0x172b98u: goto label_172b98;
        case 0x172b9cu: goto label_172b9c;
        case 0x172ba0u: goto label_172ba0;
        case 0x172ba4u: goto label_172ba4;
        case 0x172ba8u: goto label_172ba8;
        case 0x172bacu: goto label_172bac;
        case 0x172bb0u: goto label_172bb0;
        case 0x172bb4u: goto label_172bb4;
        case 0x172bb8u: goto label_172bb8;
        case 0x172bbcu: goto label_172bbc;
        case 0x172bc0u: goto label_172bc0;
        case 0x172bc4u: goto label_172bc4;
        case 0x172bc8u: goto label_172bc8;
        case 0x172bccu: goto label_172bcc;
        case 0x172bd0u: goto label_172bd0;
        case 0x172bd4u: goto label_172bd4;
        case 0x172bd8u: goto label_172bd8;
        case 0x172bdcu: goto label_172bdc;
        case 0x172be0u: goto label_172be0;
        case 0x172be4u: goto label_172be4;
        case 0x172be8u: goto label_172be8;
        case 0x172becu: goto label_172bec;
        case 0x172bf0u: goto label_172bf0;
        case 0x172bf4u: goto label_172bf4;
        case 0x172bf8u: goto label_172bf8;
        case 0x172bfcu: goto label_172bfc;
        case 0x172c00u: goto label_172c00;
        case 0x172c04u: goto label_172c04;
        case 0x172c08u: goto label_172c08;
        case 0x172c0cu: goto label_172c0c;
        case 0x172c10u: goto label_172c10;
        case 0x172c14u: goto label_172c14;
        case 0x172c18u: goto label_172c18;
        case 0x172c1cu: goto label_172c1c;
        case 0x172c20u: goto label_172c20;
        case 0x172c24u: goto label_172c24;
        case 0x172c28u: goto label_172c28;
        case 0x172c2cu: goto label_172c2c;
        case 0x172c30u: goto label_172c30;
        case 0x172c34u: goto label_172c34;
        case 0x172c38u: goto label_172c38;
        case 0x172c3cu: goto label_172c3c;
        case 0x172c40u: goto label_172c40;
        case 0x172c44u: goto label_172c44;
        case 0x172c48u: goto label_172c48;
        case 0x172c4cu: goto label_172c4c;
        case 0x172c50u: goto label_172c50;
        case 0x172c54u: goto label_172c54;
        case 0x172c58u: goto label_172c58;
        case 0x172c5cu: goto label_172c5c;
        case 0x172c60u: goto label_172c60;
        case 0x172c64u: goto label_172c64;
        case 0x172c68u: goto label_172c68;
        case 0x172c6cu: goto label_172c6c;
        case 0x172c70u: goto label_172c70;
        case 0x172c74u: goto label_172c74;
        case 0x172c78u: goto label_172c78;
        case 0x172c7cu: goto label_172c7c;
        case 0x172c80u: goto label_172c80;
        case 0x172c84u: goto label_172c84;
        case 0x172c88u: goto label_172c88;
        case 0x172c8cu: goto label_172c8c;
        case 0x172c90u: goto label_172c90;
        case 0x172c94u: goto label_172c94;
        case 0x172c98u: goto label_172c98;
        case 0x172c9cu: goto label_172c9c;
        case 0x172ca0u: goto label_172ca0;
        case 0x172ca4u: goto label_172ca4;
        case 0x172ca8u: goto label_172ca8;
        case 0x172cacu: goto label_172cac;
        case 0x172cb0u: goto label_172cb0;
        case 0x172cb4u: goto label_172cb4;
        case 0x172cb8u: goto label_172cb8;
        case 0x172cbcu: goto label_172cbc;
        case 0x172cc0u: goto label_172cc0;
        case 0x172cc4u: goto label_172cc4;
        case 0x172cc8u: goto label_172cc8;
        case 0x172cccu: goto label_172ccc;
        case 0x172cd0u: goto label_172cd0;
        case 0x172cd4u: goto label_172cd4;
        case 0x172cd8u: goto label_172cd8;
        case 0x172cdcu: goto label_172cdc;
        case 0x172ce0u: goto label_172ce0;
        case 0x172ce4u: goto label_172ce4;
        case 0x172ce8u: goto label_172ce8;
        case 0x172cecu: goto label_172cec;
        case 0x172cf0u: goto label_172cf0;
        case 0x172cf4u: goto label_172cf4;
        case 0x172cf8u: goto label_172cf8;
        case 0x172cfcu: goto label_172cfc;
        case 0x172d00u: goto label_172d00;
        case 0x172d04u: goto label_172d04;
        case 0x172d08u: goto label_172d08;
        case 0x172d0cu: goto label_172d0c;
        case 0x172d10u: goto label_172d10;
        case 0x172d14u: goto label_172d14;
        case 0x172d18u: goto label_172d18;
        case 0x172d1cu: goto label_172d1c;
        case 0x172d20u: goto label_172d20;
        case 0x172d24u: goto label_172d24;
        case 0x172d28u: goto label_172d28;
        case 0x172d2cu: goto label_172d2c;
        case 0x172d30u: goto label_172d30;
        case 0x172d34u: goto label_172d34;
        case 0x172d38u: goto label_172d38;
        case 0x172d3cu: goto label_172d3c;
        case 0x172d40u: goto label_172d40;
        case 0x172d44u: goto label_172d44;
        case 0x172d48u: goto label_172d48;
        case 0x172d4cu: goto label_172d4c;
        case 0x172d50u: goto label_172d50;
        case 0x172d54u: goto label_172d54;
        case 0x172d58u: goto label_172d58;
        case 0x172d5cu: goto label_172d5c;
        case 0x172d60u: goto label_172d60;
        case 0x172d64u: goto label_172d64;
        case 0x172d68u: goto label_172d68;
        case 0x172d6cu: goto label_172d6c;
        case 0x172d70u: goto label_172d70;
        case 0x172d74u: goto label_172d74;
        case 0x172d78u: goto label_172d78;
        case 0x172d7cu: goto label_172d7c;
        case 0x172d80u: goto label_172d80;
        case 0x172d84u: goto label_172d84;
        case 0x172d88u: goto label_172d88;
        case 0x172d8cu: goto label_172d8c;
        case 0x172d90u: goto label_172d90;
        case 0x172d94u: goto label_172d94;
        case 0x172d98u: goto label_172d98;
        case 0x172d9cu: goto label_172d9c;
        case 0x172da0u: goto label_172da0;
        case 0x172da4u: goto label_172da4;
        case 0x172da8u: goto label_172da8;
        case 0x172dacu: goto label_172dac;
        case 0x172db0u: goto label_172db0;
        case 0x172db4u: goto label_172db4;
        case 0x172db8u: goto label_172db8;
        case 0x172dbcu: goto label_172dbc;
        default: return;
    }

label_1725f0:
    // 0x1725f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1725f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1725f4:
    // 0x1725f4: 0x0  nop
    ctx->pc = 0x1725f4u;
    // NOP
label_1725f8:
    // 0x1725f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1725f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1725fc:
    // 0x1725fc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1725fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_172600:
    // 0x172600: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x172600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_172604:
    // 0x172604: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x172604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_172608:
    // 0x172608: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x172608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17260c:
    // 0x17260c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17260cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_172610:
    // 0x172610: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_172614:
    // 0x172614: 0x46020503  div.s       $f20, $f0, $f2
    ctx->pc = 0x172614u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[2];
label_172618:
    // 0x172618: 0x0  nop
    ctx->pc = 0x172618u;
    // NOP
label_17261c:
    // 0x17261c: 0x0  nop
    ctx->pc = 0x17261cu;
    // NOP
label_172620:
    // 0x172620: 0xc08f0cc  jal         func_23C330
label_172624:
    if (ctx->pc == 0x172624u) {
        ctx->pc = 0x172628u;
        goto label_172628;
    }
    ctx->pc = 0x172620u;
    SET_GPR_U32(ctx, 31, 0x172628u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x172628u;
label_172628:
    // 0x172628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17262c:
    // 0x17262c: 0x0  nop
    ctx->pc = 0x17262cu;
    // NOP
label_172630:
    // 0x172630: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x172630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_172634:
    // 0x172634: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x172634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_172638:
    // 0x172638: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x172638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_17263c:
    // 0x17263c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x17263cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_172640:
    // 0x172640: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x172640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172644:
    // 0x172644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172648:
    // 0x172648: 0x0  nop
    ctx->pc = 0x172648u;
    // NOP
label_17264c:
    // 0x17264c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x17264cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_172650:
    // 0x172650: 0x46000e03  div.s       $f24, $f1, $f0
    ctx->pc = 0x172650u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[24] = ctx->f[1] / ctx->f[0];
label_172654:
    // 0x172654: 0x0  nop
    ctx->pc = 0x172654u;
    // NOP
label_172658:
    // 0x172658: 0x0  nop
    ctx->pc = 0x172658u;
    // NOP
label_17265c:
    // 0x17265c: 0xc08f0cc  jal         func_23C330
label_172660:
    if (ctx->pc == 0x172660u) {
        ctx->pc = 0x172664u;
        goto label_172664;
    }
    ctx->pc = 0x17265Cu;
    SET_GPR_U32(ctx, 31, 0x172664u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x172664u;
label_172664:
    // 0x172664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x172664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172668:
    // 0x172668: 0x0  nop
    ctx->pc = 0x172668u;
    // NOP
label_17266c:
    // 0x17266c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17266cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_172670:
    // 0x172670: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x172670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_172674:
    // 0x172674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172678:
    // 0x172678: 0x0  nop
    ctx->pc = 0x172678u;
    // NOP
label_17267c:
    // 0x17267c: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x17267cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_172680:
    // 0x172680: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x172680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_172684:
    // 0x172684: 0x0  nop
    ctx->pc = 0x172684u;
    // NOP
label_172688:
    // 0x172688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17268c:
    // 0x17268c: 0x0  nop
    ctx->pc = 0x17268cu;
    // NOP
label_172690:
    // 0x172690: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x172690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172694:
    // 0x172694: 0x0  nop
    ctx->pc = 0x172694u;
    // NOP
label_172698:
    // 0x172698: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_17269c:
    if (ctx->pc == 0x17269Cu) {
        ctx->pc = 0x1726A0u;
        goto label_1726a0;
    }
    ctx->pc = 0x172698u;
    {
        const bool branch_taken_0x172698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172698) {
            ctx->pc = 0x1726A4u;
            goto label_1726a4;
        }
    }
    ctx->pc = 0x1726A0u;
label_1726a0:
    // 0x1726a0: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1726a0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1726a4:
    // 0x1726a4: 0x0  nop
    ctx->pc = 0x1726a4u;
    // NOP
label_1726a8:
    // 0x1726a8: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x1726a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
label_1726ac:
    // 0x1726ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1726acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1726b0:
    // 0x1726b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1726b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1726b4:
    // 0x1726b4: 0xc06d412  jal         func_1B5048
label_1726b8:
    if (ctx->pc == 0x1726B8u) {
        ctx->pc = 0x1726B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1726B4u;
        // 0x1726b8: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1726BCu;
        goto label_1726bc;
    }
    ctx->pc = 0x1726B4u;
    SET_GPR_U32(ctx, 31, 0x1726BCu);
    ctx->pc = 0x1726B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726B4u;
    // 0x1726b8: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1726BCu;
label_1726bc:
    // 0x1726bc: 0xc6a10d80  lwc1        $f1, 0xD80($s5)
    ctx->pc = 0x1726bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1726c0:
    // 0x1726c0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1726c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1726c4:
    // 0x1726c4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1726c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1726c8:
    // 0x1726c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1726c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1726cc:
    // 0x1726cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1726ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1726d0:
    // 0x1726d0: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1726d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_1726d4:
    // 0x1726d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1726d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1726d8:
    // 0x1726d8: 0xc06d4c0  jal         func_1B5300
label_1726dc:
    if (ctx->pc == 0x1726DCu) {
        ctx->pc = 0x1726DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1726D8u;
        // 0x1726dc: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1726E0u;
        goto label_1726e0;
    }
    ctx->pc = 0x1726D8u;
    SET_GPR_U32(ctx, 31, 0x1726E0u);
    ctx->pc = 0x1726DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726D8u;
    // 0x1726dc: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x1726E0u;
label_1726e0:
    // 0x1726e0: 0xc6a10d80  lwc1        $f1, 0xD80($s5)
    ctx->pc = 0x1726e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1726e4:
    // 0x1726e4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1726e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1726e8:
    // 0x1726e8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1726e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1726ec:
    // 0x1726ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1726ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1726f0:
    // 0x1726f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1726f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1726f4:
    // 0x1726f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1726f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1726f8:
    // 0x1726f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1726f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1726fc:
    // 0x1726fc: 0xc06d4c0  jal         func_1B5300
label_172700:
    if (ctx->pc == 0x172700u) {
        ctx->pc = 0x172700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1726FCu;
        // 0x172700: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172704u;
        goto label_172704;
    }
    ctx->pc = 0x1726FCu;
    SET_GPR_U32(ctx, 31, 0x172704u);
    ctx->pc = 0x172700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726FCu;
    // 0x172700: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x172704u;
label_172704:
    // 0x172704: 0xc6a10d80  lwc1        $f1, 0xD80($s5)
    ctx->pc = 0x172704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172708:
    // 0x172708: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x172708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_17270c:
    // 0x17270c: 0x4600a882  mul.s       $f2, $f21, $f0
    ctx->pc = 0x17270cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_172710:
    // 0x172710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172714:
    // 0x172714: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x172714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_172718:
    // 0x172718: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x172718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17271c:
    // 0x17271c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x17271cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_172720:
    // 0x172720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172724:
    // 0x172724: 0x0  nop
    ctx->pc = 0x172724u;
    // NOP
label_172728:
    // 0x172728: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x172728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17272c:
    // 0x17272c: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x17272cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_172730:
    // 0x172730: 0xc066e02  jal         func_19B808
label_172734:
    if (ctx->pc == 0x172734u) {
        ctx->pc = 0x172734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172730u;
        // 0x172734: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172738u;
        goto label_172738;
    }
    ctx->pc = 0x172730u;
    SET_GPR_U32(ctx, 31, 0x172738u);
    ctx->pc = 0x172734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172730u;
    // 0x172734: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x172738u;
label_172738:
    // 0x172738: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x172738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17273c:
    // 0x17273c: 0x26a50d90  addiu       $a1, $s5, 0xD90
    ctx->pc = 0x17273cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3472));
label_172740:
    // 0x172740: 0xc066e08  jal         func_19B820
label_172744:
    if (ctx->pc == 0x172744u) {
        ctx->pc = 0x172744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172740u;
        // 0x172744: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172748u;
        goto label_172748;
    }
    ctx->pc = 0x172740u;
    SET_GPR_U32(ctx, 31, 0x172748u);
    ctx->pc = 0x172744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172740u;
    // 0x172744: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x172748u;
label_172748:
    // 0x172748: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x172748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17274c:
    // 0x17274c: 0xc066daa  jal         func_19B6A8
label_172750:
    if (ctx->pc == 0x172750u) {
        ctx->pc = 0x172750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17274Cu;
        // 0x172750: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172754u;
        goto label_172754;
    }
    ctx->pc = 0x17274Cu;
    SET_GPR_U32(ctx, 31, 0x172754u);
    ctx->pc = 0x172750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17274Cu;
    // 0x172750: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x172754u;
label_172754:
    // 0x172754: 0xc6a10d88  lwc1        $f1, 0xD88($s5)
    ctx->pc = 0x172754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172758:
    // 0x172758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17275c:
    // 0x17275c: 0xc6a00d80  lwc1        $f0, 0xD80($s5)
    ctx->pc = 0x17275cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172760:
    // 0x172760: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x172760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_172764:
    // 0x172764: 0xc066e14  jal         func_19B850
label_172768:
    if (ctx->pc == 0x172768u) {
        ctx->pc = 0x172768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172764u;
        // 0x172768: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17276Cu;
        goto label_17276c;
    }
    ctx->pc = 0x172764u;
    SET_GPR_U32(ctx, 31, 0x17276Cu);
    ctx->pc = 0x172768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172764u;
    // 0x172768: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x17276Cu;
label_17276c:
    // 0x17276c: 0x0  nop
    ctx->pc = 0x17276cu;
    // NOP
label_172770:
    // 0x172770: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x172770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_172774:
    // 0x172774: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x172774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_172778:
    // 0x172778: 0xc6a20d84  lwc1        $f2, 0xD84($s5)
    ctx->pc = 0x172778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17277c:
    // 0x17277c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17277cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172780:
    // 0x172780: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x172780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172784:
    // 0x172784: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x172784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_172788:
    // 0x172788: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x172788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_17278c:
    // 0x17278c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x17278cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_172790:
    // 0x172790: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x172790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_172794:
    // 0x172794: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x172794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_172798:
    // 0x172798: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x172798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_17279c:
    // 0x17279c: 0xc6a30d84  lwc1        $f3, 0xD84($s5)
    ctx->pc = 0x17279cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1727a0:
    // 0x1727a0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1727a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1727a4:
    // 0x1727a4: 0x4600b842  mul.s       $f1, $f23, $f0
    ctx->pc = 0x1727a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_1727a8:
    // 0x1727a8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1727a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1727ac:
    // 0x1727ac: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1727acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1727b0:
    // 0x1727b0: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1727b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1727b4:
    // 0x1727b4: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x1727b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1727b8:
    // 0x1727b8: 0xc6a30d84  lwc1        $f3, 0xD84($s5)
    ctx->pc = 0x1727b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1727bc:
    // 0x1727bc: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1727bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1727c0:
    // 0x1727c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1727c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1727c4:
    // 0x1727c4: 0x0  nop
    ctx->pc = 0x1727c4u;
    // NOP
label_1727c8:
    // 0x1727c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1727c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1727cc:
    // 0x1727cc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1727ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1727d0:
    // 0x1727d0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1727d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1727d4:
    // 0x1727d4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1727d8:
    if (ctx->pc == 0x1727D8u) {
        ctx->pc = 0x1727D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1727D4u;
        // 0x1727d8: 0xe6020008  swc1        $f2, 0x8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1727DCu;
        goto label_1727dc;
    }
    ctx->pc = 0x1727D4u;
    {
        const bool branch_taken_0x1727d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1727D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1727D4u;
        // 0x1727d8: 0xe6020008  swc1        $f2, 0x8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1727d4) {
            ctx->pc = 0x1727ECu;
            goto label_1727ec;
        }
    }
    ctx->pc = 0x1727DCu;
label_1727dc:
    // 0x1727dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1727dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1727e0:
    // 0x1727e0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1727e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1727e4:
    // 0x1727e4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1727e8:
    if (ctx->pc == 0x1727E8u) {
        ctx->pc = 0x1727E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1727E4u;
        // 0x1727e8: 0xae44000c  sw          $a0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1727ECu;
        goto label_1727ec;
    }
    ctx->pc = 0x1727E4u;
    {
        const bool branch_taken_0x1727e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1727E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1727E4u;
        // 0x1727e8: 0xae44000c  sw          $a0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1727e4) {
            ctx->pc = 0x172808u;
            goto label_172808;
        }
    }
    ctx->pc = 0x1727ECu;
label_1727ec:
    // 0x1727ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1727ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1727f0:
    // 0x1727f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1727f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1727f4:
    // 0x1727f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1727f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1727f8:
    // 0x1727f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1727f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1727fc:
    // 0x1727fc: 0x0  nop
    ctx->pc = 0x1727fcu;
    // NOP
label_172800:
    // 0x172800: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x172800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_172804:
    // 0x172804: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x172804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
label_172808:
    // 0x172808: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x172808u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_17280c:
    // 0x17280c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17280cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_172810:
    // 0x172810: 0x96a30d74  lhu         $v1, 0xD74($s5)
    ctx->pc = 0x172810u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 3444)));
label_172814:
    // 0x172814: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x172814u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_172818:
    // 0x172818: 0x1460ff33  bnez        $v1, . + 4 + (-0xCD << 2)
label_17281c:
    if (ctx->pc == 0x17281Cu) {
        ctx->pc = 0x172820u;
        goto label_172820;
    }
    ctx->pc = 0x172818u;
    {
        const bool branch_taken_0x172818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172818) {
            ctx->pc = 0x1724E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1724e8; return; }
        }
    }
    ctx->pc = 0x172820u;
label_172820:
    // 0x172820: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x172820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_172824:
    // 0x172824: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x172824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_172828:
    // 0x172828: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x172828u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_17282c:
    // 0x17282c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x17282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_172830:
    // 0x172830: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x172830u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_172834:
    // 0x172834: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x172834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_172838:
    // 0x172838: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x172838u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17283c:
    // 0x17283c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17283cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_172840:
    // 0x172840: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x172840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_172844:
    // 0x172844: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x172844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_172848:
    // 0x172848: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x172848u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17284c:
    // 0x17284c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x17284cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_172850:
    // 0x172850: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x172850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_172854:
    // 0x172854: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x172854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_172858:
    // 0x172858: 0x3e00008  jr          $ra
label_17285c:
    if (ctx->pc == 0x17285Cu) {
        ctx->pc = 0x17285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172858u;
        // 0x17285c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172860u;
        goto label_172860;
    }
    ctx->pc = 0x172858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172858u;
        // 0x17285c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172860u;
label_172860:
    // 0x172860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_172864:
    // 0x172864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_172868:
    // 0x172868: 0xc0713b8  jal         func_1C4EE0
label_17286c:
    if (ctx->pc == 0x17286Cu) {
        ctx->pc = 0x172870u;
        goto label_172870;
    }
    ctx->pc = 0x172868u;
    SET_GPR_U32(ctx, 31, 0x172870u);
    ctx->pc = 0x1C4EE0u;
    { ctx->pc = 0x1c4ee0; return; }
    ctx->pc = 0x172870u;
label_172870:
    // 0x172870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_172874:
    // 0x172874: 0x3e00008  jr          $ra
label_172878:
    if (ctx->pc == 0x172878u) {
        ctx->pc = 0x172878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172874u;
        // 0x172878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17287Cu;
        goto label_17287c;
    }
    ctx->pc = 0x172874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172874u;
        // 0x172878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17287Cu;
label_17287c:
    // 0x17287c: 0x0  nop
    ctx->pc = 0x17287cu;
    // NOP
label_172880:
    // 0x172880: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x172880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_172884:
    // 0x172884: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x172884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_172888:
    // 0x172888: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x172888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_17288c:
    // 0x17288c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17288cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_172890:
    // 0x172890: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x172890u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_172894:
    // 0x172894: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x172894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_172898:
    // 0x172898: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x172898u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17289c:
    // 0x17289c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17289cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1728a0:
    // 0x1728a0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1728a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1728a4:
    // 0x1728a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1728a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1728a8:
    // 0x1728a8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1728a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1728ac:
    // 0x1728ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1728acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1728b0:
    // 0x1728b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1728b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1728b4:
    // 0x1728b4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1728b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1728b8:
    // 0x1728b8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1728b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1728bc:
    // 0x1728bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1728bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1728c0:
    // 0x1728c0: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1728c0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1728c4:
    // 0x1728c4: 0xc0590dc  jal         func_164370
label_1728c8:
    if (ctx->pc == 0x1728C8u) {
        ctx->pc = 0x1728C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1728C4u;
        // 0x1728c8: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1728CCu;
        goto label_1728cc;
    }
    ctx->pc = 0x1728C4u;
    SET_GPR_U32(ctx, 31, 0x1728CCu);
    ctx->pc = 0x1728C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1728C4u;
    // 0x1728c8: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    { ctx->pc = 0x164370; return; }
    ctx->pc = 0x1728CCu;
label_1728cc:
    // 0x1728cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1728ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1728d0:
    // 0x1728d0: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_1728d4:
    if (ctx->pc == 0x1728D4u) {
        ctx->pc = 0x1728D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1728D0u;
        // 0x1728d4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1728D8u;
        goto label_1728d8;
    }
    ctx->pc = 0x1728D0u;
    {
        const bool branch_taken_0x1728d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1728D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1728D0u;
        // 0x1728d4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1728d0) {
            ctx->pc = 0x172970u;
            goto label_172970;
        }
    }
    ctx->pc = 0x1728D8u;
label_1728d8:
    // 0x1728d8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1728d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1728dc:
    // 0x1728dc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1728dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1728e0:
    // 0x1728e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1728e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1728e4:
    // 0x1728e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1728e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1728e8:
    // 0x1728e8: 0xc05cd04  jal         func_173410
label_1728ec:
    if (ctx->pc == 0x1728ECu) {
        ctx->pc = 0x1728ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1728E8u;
        // 0x1728ec: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1728F0u;
        goto label_1728f0;
    }
    ctx->pc = 0x1728E8u;
    SET_GPR_U32(ctx, 31, 0x1728F0u);
    ctx->pc = 0x1728ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1728E8u;
    // 0x1728ec: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173410u;
    { ctx->pc = 0x173410; return; }
    ctx->pc = 0x1728F0u;
label_1728f0:
    // 0x1728f0: 0x3c023ea8  lui         $v0, 0x3EA8
    ctx->pc = 0x1728f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16040 << 16));
label_1728f4:
    // 0x1728f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1728f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1728f8:
    // 0x1728f8: 0x3443f5c3  ori         $v1, $v0, 0xF5C3
    ctx->pc = 0x1728f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
label_1728fc:
    // 0x1728fc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1728fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_172900:
    // 0x172900: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x172900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172904:
    // 0x172904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_172908:
    // 0x172908: 0xe6150d78  swc1        $f21, 0xD78($s0)
    ctx->pc = 0x172908u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3448), bits); }
label_17290c:
    // 0x17290c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17290cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172910:
    // 0x172910: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x172910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_172914:
    // 0x172914: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x172914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172918:
    // 0x172918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17291c:
    // 0x17291c: 0xe6150d7c  swc1        $f21, 0xD7C($s0)
    ctx->pc = 0x17291cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3452), bits); }
label_172920:
    // 0x172920: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x172920u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_172924:
    // 0x172924: 0x0  nop
    ctx->pc = 0x172924u;
    // NOP
label_172928:
    // 0x172928: 0xe6010d80  swc1        $f1, 0xD80($s0)
    ctx->pc = 0x172928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3456), bits); }
label_17292c:
    // 0x17292c: 0xc05f3d0  jal         func_17CF40
label_172930:
    if (ctx->pc == 0x172930u) {
        ctx->pc = 0x172930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17292Cu;
        // 0x172930: 0xe6000d84  swc1        $f0, 0xD84($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3460), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172934u;
        goto label_172934;
    }
    ctx->pc = 0x17292Cu;
    SET_GPR_U32(ctx, 31, 0x172934u);
    ctx->pc = 0x172930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17292Cu;
    // 0x172930: 0xe6000d84  swc1        $f0, 0xD84($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3460), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    { ctx->pc = 0x17cf40; return; }
    ctx->pc = 0x172934u;
label_172934:
    // 0x172934: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x172934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_172938:
    // 0x172938: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x172938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
label_17293c:
    // 0x17293c: 0xe6000dcc  swc1        $f0, 0xDCC($s0)
    ctx->pc = 0x17293cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3532), bits); }
label_172940:
    // 0x172940: 0x244229a0  addiu       $v0, $v0, 0x29A0
    ctx->pc = 0x172940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10656));
label_172944:
    // 0x172944: 0xae020dd8  sw          $v0, 0xDD8($s0)
    ctx->pc = 0x172944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3544), GPR_U32(ctx, 2));
label_172948:
    // 0x172948: 0x24632e20  addiu       $v1, $v1, 0x2E20
    ctx->pc = 0x172948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11808));
label_17294c:
    // 0x17294c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x17294cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_172950:
    // 0x172950: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172954:
    // 0x172954: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x172954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_172958:
    // 0x172958: 0xae030ddc  sw          $v1, 0xDDC($s0)
    ctx->pc = 0x172958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3548), GPR_U32(ctx, 3));
label_17295c:
    // 0x17295c: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x17295cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
label_172960:
    // 0x172960: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x172960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_172964:
    // 0x172964: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x172964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172968:
    // 0x172968: 0xc05cbf4  jal         func_172FD0
label_17296c:
    if (ctx->pc == 0x17296Cu) {
        ctx->pc = 0x17296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172968u;
        // 0x17296c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172970u;
        goto label_172970;
    }
    ctx->pc = 0x172968u;
    SET_GPR_U32(ctx, 31, 0x172970u);
    ctx->pc = 0x17296Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172968u;
    // 0x17296c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172FD0u;
    { ctx->pc = 0x172fd0; return; }
    ctx->pc = 0x172970u;
label_172970:
    // 0x172970: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x172970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_172974:
    // 0x172974: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x172974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_172978:
    // 0x172978: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x172978u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17297c:
    // 0x17297c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_172980:
    // 0x172980: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x172980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_172984:
    // 0x172984: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x172984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_172988:
    // 0x172988: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x172988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17298c:
    // 0x17298c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17298cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_172990:
    // 0x172990: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x172990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_172994:
    // 0x172994: 0x3e00008  jr          $ra
label_172998:
    if (ctx->pc == 0x172998u) {
        ctx->pc = 0x172998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172994u;
        // 0x172998: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17299Cu;
        goto label_17299c;
    }
    ctx->pc = 0x172994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172994u;
        // 0x172998: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17299Cu;
label_17299c:
    // 0x17299c: 0x0  nop
    ctx->pc = 0x17299cu;
    // NOP
label_1729a0:
    // 0x1729a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1729a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1729a4:
    // 0x1729a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1729a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1729a8:
    // 0x1729a8: 0x94830d72  lhu         $v1, 0xD72($a0)
    ctx->pc = 0x1729a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3442)));
label_1729ac:
    // 0x1729ac: 0x2861004c  slti        $at, $v1, 0x4C
    ctx->pc = 0x1729acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)76) ? 1 : 0);
label_1729b0:
    // 0x1729b0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1729b4:
    if (ctx->pc == 0x1729B4u) {
        ctx->pc = 0x1729B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729B0u;
        // 0x1729b4: 0x2861002e  slti        $at, $v1, 0x2E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1729B8u;
        goto label_1729b8;
    }
    ctx->pc = 0x1729B0u;
    {
        const bool branch_taken_0x1729b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1729B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729B0u;
        // 0x1729b4: 0x2861002e  slti        $at, $v1, 0x2E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729b0) {
            ctx->pc = 0x1729C8u;
            goto label_1729c8;
        }
    }
    ctx->pc = 0x1729B8u;
label_1729b8:
    // 0x1729b8: 0xc0591f4  jal         func_1647D0
label_1729bc:
    if (ctx->pc == 0x1729BCu) {
        ctx->pc = 0x1729C0u;
        goto label_1729c0;
    }
    ctx->pc = 0x1729B8u;
    SET_GPR_U32(ctx, 31, 0x1729C0u);
    ctx->pc = 0x1647D0u;
    { ctx->pc = 0x1647d0; return; }
    ctx->pc = 0x1729C0u;
label_1729c0:
    // 0x1729c0: 0x10000062  b           . + 4 + (0x62 << 2)
label_1729c4:
    if (ctx->pc == 0x1729C4u) {
        ctx->pc = 0x1729C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729C0u;
        // 0x1729c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1729C8u;
        goto label_1729c8;
    }
    ctx->pc = 0x1729C0u;
    {
        const bool branch_taken_0x1729c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729C0u;
        // 0x1729c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729c0) {
            ctx->pc = 0x172B4Cu;
            goto label_172b4c;
        }
    }
    ctx->pc = 0x1729C8u;
label_1729c8:
    // 0x1729c8: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_1729cc:
    if (ctx->pc == 0x1729CCu) {
        ctx->pc = 0x1729CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729C8u;
        // 0x1729cc: 0x3c033ecc  lui         $v1, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1729D0u;
        goto label_1729d0;
    }
    ctx->pc = 0x1729C8u;
    {
        const bool branch_taken_0x1729c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1729CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729C8u;
        // 0x1729cc: 0x3c033ecc  lui         $v1, 0x3ECC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729c8) {
            ctx->pc = 0x1729F4u;
            goto label_1729f4;
        }
    }
    ctx->pc = 0x1729D0u;
label_1729d0:
    // 0x1729d0: 0x94830d70  lhu         $v1, 0xD70($a0)
    ctx->pc = 0x1729d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3440)));
label_1729d4:
    // 0x1729d4: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x1729d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1729d8:
    // 0x1729d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1729dc:
    if (ctx->pc == 0x1729DCu) {
        ctx->pc = 0x1729E0u;
        goto label_1729e0;
    }
    ctx->pc = 0x1729D8u;
    {
        const bool branch_taken_0x1729d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1729d8) {
            ctx->pc = 0x1729E8u;
            goto label_1729e8;
        }
    }
    ctx->pc = 0x1729E0u;
label_1729e0:
    // 0x1729e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1729e4:
    if (ctx->pc == 0x1729E4u) {
        ctx->pc = 0x1729E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729E0u;
        // 0x1729e4: 0xa4800d70  sh          $zero, 0xD70($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 3440), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1729E8u;
        goto label_1729e8;
    }
    ctx->pc = 0x1729E0u;
    {
        const bool branch_taken_0x1729e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729E0u;
        // 0x1729e4: 0xa4800d70  sh          $zero, 0xD70($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 3440), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729e0) {
            ctx->pc = 0x1729F0u;
            goto label_1729f0;
        }
    }
    ctx->pc = 0x1729E8u;
label_1729e8:
    // 0x1729e8: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x1729e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_1729ec:
    // 0x1729ec: 0xa4830d70  sh          $v1, 0xD70($a0)
    ctx->pc = 0x1729ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3440), (uint16_t)GPR_U32(ctx, 3));
label_1729f0:
    // 0x1729f0: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1729f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
label_1729f4:
    // 0x1729f4: 0x3c05bf26  lui         $a1, 0xBF26
    ctx->pc = 0x1729f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48934 << 16));
label_1729f8:
    // 0x1729f8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1729f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1729fc:
    // 0x1729fc: 0x94860d72  lhu         $a2, 0xD72($a0)
    ctx->pc = 0x1729fcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3442)));
label_172a00:
    // 0x172a00: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x172a00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_172a04:
    // 0x172a04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x172a04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172a08:
    // 0x172a08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x172a08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172a0c:
    // 0x172a0c: 0x34a36666  ori         $v1, $a1, 0x6666
    ctx->pc = 0x172a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26214);
label_172a10:
    // 0x172a10: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x172a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_172a14:
    // 0x172a14: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x172a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_172a18:
    // 0x172a18: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x172a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_172a1c:
    // 0x172a1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172a20:
    // 0x172a20: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x172a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_172a24:
    // 0x172a24: 0x10000043  b           . + 4 + (0x43 << 2)
label_172a28:
    if (ctx->pc == 0x172A28u) {
        ctx->pc = 0x172A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A24u;
        // 0x172a28: 0xa4830d72  sh          $v1, 0xD72($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 3442), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A2Cu;
        goto label_172a2c;
    }
    ctx->pc = 0x172A24u;
    {
        const bool branch_taken_0x172a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A24u;
        // 0x172a28: 0xa4830d72  sh          $v1, 0xD72($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 3442), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a24) {
            ctx->pc = 0x172B34u;
            goto label_172b34;
        }
    }
    ctx->pc = 0x172A2Cu;
label_172a2c:
    // 0x172a2c: 0xc4820dcc  lwc1        $f2, 0xDCC($a0)
    ctx->pc = 0x172a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_172a30:
    // 0x172a30: 0x25430090  addiu       $v1, $t2, 0x90
    ctx->pc = 0x172a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 144));
label_172a34:
    // 0x172a34: 0xc5410094  lwc1        $f1, 0x94($t2)
    ctx->pc = 0x172a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172a38:
    // 0x172a38: 0x254600b0  addiu       $a2, $t2, 0xB0
    ctx->pc = 0x172a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 176));
label_172a3c:
    // 0x172a3c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x172a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172a40:
    // 0x172a40: 0x0  nop
    ctx->pc = 0x172a40u;
    // NOP
label_172a44:
    // 0x172a44: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_172a48:
    if (ctx->pc == 0x172A48u) {
        ctx->pc = 0x172A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A44u;
        // 0x172a48: 0x254700a0  addiu       $a3, $t2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A4Cu;
        goto label_172a4c;
    }
    ctx->pc = 0x172A44u;
    {
        const bool branch_taken_0x172a44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A44u;
        // 0x172a48: 0x254700a0  addiu       $a3, $t2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a44) {
            ctx->pc = 0x172A5Cu;
            goto label_172a5c;
        }
    }
    ctx->pc = 0x172A4Cu;
label_172a4c:
    // 0x172a4c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x172a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172a50:
    // 0x172a50: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x172a50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_172a54:
    // 0x172a54: 0x10000007  b           . + 4 + (0x7 << 2)
label_172a58:
    if (ctx->pc == 0x172A58u) {
        ctx->pc = 0x172A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A54u;
        // 0x172a58: 0xe4c10004  swc1        $f1, 0x4($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172A5Cu;
        goto label_172a5c;
    }
    ctx->pc = 0x172A54u;
    {
        const bool branch_taken_0x172a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A54u;
        // 0x172a58: 0xe4c10004  swc1        $f1, 0x4($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a54) {
            ctx->pc = 0x172A74u;
            goto label_172a74;
        }
    }
    ctx->pc = 0x172A5Cu;
label_172a5c:
    // 0x172a5c: 0x0  nop
    ctx->pc = 0x172a5cu;
    // NOP
label_172a60:
    // 0x172a60: 0xc4820d80  lwc1        $f2, 0xD80($a0)
    ctx->pc = 0x172a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_172a64:
    // 0x172a64: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x172a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172a68:
    // 0x172a68: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x172a68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_172a6c:
    // 0x172a6c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x172a6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_172a70:
    // 0x172a70: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x172a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_172a74:
    // 0x172a74: 0x0  nop
    ctx->pc = 0x172a74u;
    // NOP
label_172a78:
    // 0x172a78: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x172a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_172a7c:
    // 0x172a7c: 0xc4820d84  lwc1        $f2, 0xD84($a0)
    ctx->pc = 0x172a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_172a80:
    // 0x172a80: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x172a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172a84:
    // 0x172a84: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x172a84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_172a88:
    // 0x172a88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x172a88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_172a8c:
    // 0x172a8c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x172a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_172a90:
    // 0x172a90: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x172a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_172a94:
    // 0x172a94: 0xc4820d84  lwc1        $f2, 0xD84($a0)
    ctx->pc = 0x172a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_172a98:
    // 0x172a98: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x172a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172a9c:
    // 0x172a9c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x172a9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_172aa0:
    // 0x172aa0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x172aa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_172aa4:
    // 0x172aa4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x172aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_172aa8:
    // 0x172aa8: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x172aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_172aac:
    // 0x172aac: 0xc4820d84  lwc1        $f2, 0xD84($a0)
    ctx->pc = 0x172aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_172ab0:
    // 0x172ab0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x172ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172ab4:
    // 0x172ab4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x172ab4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_172ab8:
    // 0x172ab8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x172ab8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_172abc:
    // 0x172abc: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x172abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_172ac0:
    // 0x172ac0: 0x94830d70  lhu         $v1, 0xD70($a0)
    ctx->pc = 0x172ac0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3440)));
label_172ac4:
    // 0x172ac4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_172ac8:
    if (ctx->pc == 0x172AC8u) {
        ctx->pc = 0x172ACCu;
        goto label_172acc;
    }
    ctx->pc = 0x172AC4u;
    {
        const bool branch_taken_0x172ac4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x172ac4) {
            ctx->pc = 0x172AD8u;
            goto label_172ad8;
        }
    }
    ctx->pc = 0x172ACCu;
label_172acc:
    // 0x172acc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x172accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172ad0:
    // 0x172ad0: 0x10000008  b           . + 4 + (0x8 << 2)
label_172ad4:
    if (ctx->pc == 0x172AD4u) {
        ctx->pc = 0x172AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AD0u;
        // 0x172ad4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172AD8u;
        goto label_172ad8;
    }
    ctx->pc = 0x172AD0u;
    {
        const bool branch_taken_0x172ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AD0u;
        // 0x172ad4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ad0) {
            ctx->pc = 0x172AF4u;
            goto label_172af4;
        }
    }
    ctx->pc = 0x172AD8u;
label_172ad8:
    // 0x172ad8: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x172ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_172adc:
    // 0x172adc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x172adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_172ae0:
    // 0x172ae0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x172ae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_172ae4:
    // 0x172ae4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x172ae4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172ae8:
    // 0x172ae8: 0x0  nop
    ctx->pc = 0x172ae8u;
    // NOP
label_172aec:
    // 0x172aec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x172aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_172af0:
    // 0x172af0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x172af0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_172af4:
    // 0x172af4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x172af4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172af8:
    // 0x172af8: 0x0  nop
    ctx->pc = 0x172af8u;
    // NOP
label_172afc:
    // 0x172afc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_172b00:
    if (ctx->pc == 0x172B00u) {
        ctx->pc = 0x172B04u;
        goto label_172b04;
    }
    ctx->pc = 0x172AFCu;
    {
        const bool branch_taken_0x172afc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172afc) {
            ctx->pc = 0x172B14u;
            goto label_172b14;
        }
    }
    ctx->pc = 0x172B04u;
label_172b04:
    // 0x172b04: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172b04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_172b08:
    // 0x172b08: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x172b08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_172b0c:
    // 0x172b0c: 0x10000007  b           . + 4 + (0x7 << 2)
label_172b10:
    if (ctx->pc == 0x172B10u) {
        ctx->pc = 0x172B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B0Cu;
        // 0x172b10: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B14u;
        goto label_172b14;
    }
    ctx->pc = 0x172B0Cu;
    {
        const bool branch_taken_0x172b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B0Cu;
        // 0x172b10: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b0c) {
            ctx->pc = 0x172B2Cu;
            goto label_172b2c;
        }
    }
    ctx->pc = 0x172B14u;
label_172b14:
    // 0x172b14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x172b14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_172b18:
    // 0x172b18: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172b18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_172b1c:
    // 0x172b1c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x172b1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_172b20:
    // 0x172b20: 0x0  nop
    ctx->pc = 0x172b20u;
    // NOP
label_172b24:
    // 0x172b24: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x172b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_172b28:
    // 0x172b28: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x172b28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_172b2c:
    // 0x172b2c: 0x25290050  addiu       $t1, $t1, 0x50
    ctx->pc = 0x172b2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
label_172b30:
    // 0x172b30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x172b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_172b34:
    // 0x172b34: 0x0  nop
    ctx->pc = 0x172b34u;
    // NOP
label_172b38:
    // 0x172b38: 0x94830d74  lhu         $v1, 0xD74($a0)
    ctx->pc = 0x172b38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3444)));
label_172b3c:
    // 0x172b3c: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x172b3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_172b40:
    // 0x172b40: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_172b44:
    if (ctx->pc == 0x172B44u) {
        ctx->pc = 0x172B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B40u;
        // 0x172b44: 0x895021  addu        $t2, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B48u;
        goto label_172b48;
    }
    ctx->pc = 0x172B40u;
    {
        const bool branch_taken_0x172b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B40u;
        // 0x172b44: 0x895021  addu        $t2, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b40) {
            ctx->pc = 0x172A2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172a2c;
        }
    }
    ctx->pc = 0x172B48u;
label_172b48:
    // 0x172b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_172b4c:
    // 0x172b4c: 0x3e00008  jr          $ra
label_172b50:
    if (ctx->pc == 0x172B50u) {
        ctx->pc = 0x172B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B4Cu;
        // 0x172b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B54u;
        goto label_172b54;
    }
    ctx->pc = 0x172B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B4Cu;
        // 0x172b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172B54u;
label_172b54:
    // 0x172b54: 0x0  nop
    ctx->pc = 0x172b54u;
    // NOP
label_172b58:
    // 0x172b58: 0x0  nop
    ctx->pc = 0x172b58u;
    // NOP
label_172b5c:
    // 0x172b5c: 0x0  nop
    ctx->pc = 0x172b5cu;
    // NOP
label_172b60:
    // 0x172b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x172b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_172b64:
    // 0x172b64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x172b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_172b68:
    // 0x172b68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x172b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_172b6c:
    // 0x172b6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_172b70:
    // 0x172b70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x172b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_172b74:
    // 0x172b74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x172b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_172b78:
    // 0x172b78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x172b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_172b7c:
    // 0x172b7c: 0xc0590dc  jal         func_164370
label_172b80:
    if (ctx->pc == 0x172B80u) {
        ctx->pc = 0x172B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B7Cu;
        // 0x172b80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172B84u;
        goto label_172b84;
    }
    ctx->pc = 0x172B7Cu;
    SET_GPR_U32(ctx, 31, 0x172B84u);
    ctx->pc = 0x172B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B7Cu;
    // 0x172b80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    { ctx->pc = 0x164370; return; }
    ctx->pc = 0x172B84u;
label_172b84:
    // 0x172b84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x172b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172b88:
    // 0x172b88: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_172b8c:
    if (ctx->pc == 0x172B8Cu) {
        ctx->pc = 0x172B90u;
        goto label_172b90;
    }
    ctx->pc = 0x172B88u;
    {
        const bool branch_taken_0x172b88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x172b88) {
            ctx->pc = 0x172C08u;
            goto label_172c08;
        }
    }
    ctx->pc = 0x172B90u;
label_172b90:
    // 0x172b90: 0xdf868b78  ld          $a2, -0x7488($gp)
    ctx->pc = 0x172b90u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937464)));
label_172b94:
    // 0x172b94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x172b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_172b98:
    // 0x172b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172b9c:
    // 0x172b9c: 0x2407001b  addiu       $a3, $zero, 0x1B
    ctx->pc = 0x172b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_172ba0:
    // 0x172ba0: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x172ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_172ba4:
    // 0x172ba4: 0xc05cd04  jal         func_173410
label_172ba8:
    if (ctx->pc == 0x172BA8u) {
        ctx->pc = 0x172BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BA4u;
        // 0x172ba8: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172BACu;
        goto label_172bac;
    }
    ctx->pc = 0x172BA4u;
    SET_GPR_U32(ctx, 31, 0x172BACu);
    ctx->pc = 0x172BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172BA4u;
    // 0x172ba8: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173410u;
    { ctx->pc = 0x173410; return; }
    ctx->pc = 0x172BACu;
label_172bac:
    // 0x172bac: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x172bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_172bb0:
    // 0x172bb0: 0x3c023d73  lui         $v0, 0x3D73
    ctx->pc = 0x172bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15731 << 16));
label_172bb4:
    // 0x172bb4: 0xae030d78  sw          $v1, 0xD78($s0)
    ctx->pc = 0x172bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3448), GPR_U32(ctx, 3));
label_172bb8:
    // 0x172bb8: 0x34424d6b  ori         $v0, $v0, 0x4D6B
    ctx->pc = 0x172bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19819);
label_172bbc:
    // 0x172bbc: 0xae030d7c  sw          $v1, 0xD7C($s0)
    ctx->pc = 0x172bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3452), GPR_U32(ctx, 3));
label_172bc0:
    // 0x172bc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172bc4:
    // 0x172bc4: 0xae020d80  sw          $v0, 0xD80($s0)
    ctx->pc = 0x172bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3456), GPR_U32(ctx, 2));
label_172bc8:
    // 0x172bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172bcc:
    // 0x172bcc: 0x3c024186  lui         $v0, 0x4186
    ctx->pc = 0x172bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16774 << 16));
label_172bd0:
    // 0x172bd0: 0x3443ae1d  ori         $v1, $v0, 0xAE1D
    ctx->pc = 0x172bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44573);
label_172bd4:
    // 0x172bd4: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x172bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_172bd8:
    // 0x172bd8: 0xae030d84  sw          $v1, 0xD84($s0)
    ctx->pc = 0x172bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3460), GPR_U32(ctx, 3));
label_172bdc:
    // 0x172bdc: 0x24422c20  addiu       $v0, $v0, 0x2C20
    ctx->pc = 0x172bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11296));
label_172be0:
    // 0x172be0: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x172be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
label_172be4:
    // 0x172be4: 0xae020dd8  sw          $v0, 0xDD8($s0)
    ctx->pc = 0x172be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3544), GPR_U32(ctx, 2));
label_172be8:
    // 0x172be8: 0x24632e20  addiu       $v1, $v1, 0x2E20
    ctx->pc = 0x172be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11808));
label_172bec:
    // 0x172bec: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x172becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_172bf0:
    // 0x172bf0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x172bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_172bf4:
    // 0x172bf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x172bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172bf8:
    // 0x172bf8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x172bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_172bfc:
    // 0x172bfc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x172bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_172c00:
    // 0x172c00: 0xc05cbf4  jal         func_172FD0
label_172c04:
    if (ctx->pc == 0x172C04u) {
        ctx->pc = 0x172C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C00u;
        // 0x172c04: 0xae030ddc  sw          $v1, 0xDDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3548), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C08u;
        goto label_172c08;
    }
    ctx->pc = 0x172C00u;
    SET_GPR_U32(ctx, 31, 0x172C08u);
    ctx->pc = 0x172C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C00u;
    // 0x172c04: 0xae030ddc  sw          $v1, 0xDDC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 3548), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172FD0u;
    { ctx->pc = 0x172fd0; return; }
    ctx->pc = 0x172C08u;
label_172c08:
    // 0x172c08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x172c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_172c0c:
    // 0x172c0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x172c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_172c10:
    // 0x172c10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_172c14:
    // 0x172c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_172c18:
    // 0x172c18: 0x3e00008  jr          $ra
label_172c1c:
    if (ctx->pc == 0x172C1Cu) {
        ctx->pc = 0x172C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C18u;
        // 0x172c1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C20u;
        goto label_172c20;
    }
    ctx->pc = 0x172C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C18u;
        // 0x172c1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172C20u;
label_172c20:
    // 0x172c20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x172c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_172c24:
    // 0x172c24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x172c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_172c28:
    // 0x172c28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x172c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_172c2c:
    // 0x172c2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x172c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_172c30:
    // 0x172c30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x172c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_172c34:
    // 0x172c34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x172c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_172c38:
    // 0x172c38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_172c3c:
    // 0x172c3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_172c40:
    // 0x172c40: 0x94830d72  lhu         $v1, 0xD72($a0)
    ctx->pc = 0x172c40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3442)));
label_172c44:
    // 0x172c44: 0x28610017  slti        $at, $v1, 0x17
    ctx->pc = 0x172c44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
label_172c48:
    // 0x172c48: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_172c4c:
    if (ctx->pc == 0x172C4Cu) {
        ctx->pc = 0x172C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C48u;
        // 0x172c4c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C50u;
        goto label_172c50;
    }
    ctx->pc = 0x172C48u;
    {
        const bool branch_taken_0x172c48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x172C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C48u;
        // 0x172c4c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c48) {
            ctx->pc = 0x172C58u;
            goto label_172c58;
        }
    }
    ctx->pc = 0x172C50u;
label_172c50:
    // 0x172c50: 0xc0591f4  jal         func_1647D0
label_172c54:
    if (ctx->pc == 0x172C54u) {
        ctx->pc = 0x172C58u;
        goto label_172c58;
    }
    ctx->pc = 0x172C50u;
    SET_GPR_U32(ctx, 31, 0x172C58u);
    ctx->pc = 0x1647D0u;
    { ctx->pc = 0x1647d0; return; }
    ctx->pc = 0x172C58u;
label_172c58:
    // 0x172c58: 0x96a30d72  lhu         $v1, 0xD72($s5)
    ctx->pc = 0x172c58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 3442)));
label_172c5c:
    // 0x172c5c: 0x28610011  slti        $at, $v1, 0x11
    ctx->pc = 0x172c5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
label_172c60:
    // 0x172c60: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_172c64:
    if (ctx->pc == 0x172C64u) {
        ctx->pc = 0x172C68u;
        goto label_172c68;
    }
    ctx->pc = 0x172C60u;
    {
        const bool branch_taken_0x172c60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x172c60) {
            ctx->pc = 0x172CB0u;
            goto label_172cb0;
        }
    }
    ctx->pc = 0x172C68u;
label_172c68:
    // 0x172c68: 0x96a30d70  lhu         $v1, 0xD70($s5)
    ctx->pc = 0x172c68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 3440)));
label_172c6c:
    // 0x172c6c: 0x2861000c  slti        $at, $v1, 0xC
    ctx->pc = 0x172c6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_172c70:
    // 0x172c70: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_172c74:
    if (ctx->pc == 0x172C74u) {
        ctx->pc = 0x172C78u;
        goto label_172c78;
    }
    ctx->pc = 0x172C70u;
    {
        const bool branch_taken_0x172c70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x172c70) {
            ctx->pc = 0x172C80u;
            goto label_172c80;
        }
    }
    ctx->pc = 0x172C78u;
label_172c78:
    // 0x172c78: 0x10000003  b           . + 4 + (0x3 << 2)
label_172c7c:
    if (ctx->pc == 0x172C7Cu) {
        ctx->pc = 0x172C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C78u;
        // 0x172c7c: 0xa6a00d70  sh          $zero, 0xD70($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 3440), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172C80u;
        goto label_172c80;
    }
    ctx->pc = 0x172C78u;
    {
        const bool branch_taken_0x172c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C78u;
        // 0x172c7c: 0xa6a00d70  sh          $zero, 0xD70($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 3440), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c78) {
            ctx->pc = 0x172C88u;
            goto label_172c88;
        }
    }
    ctx->pc = 0x172C80u;
label_172c80:
    // 0x172c80: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x172c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_172c84:
    // 0x172c84: 0xa6a30d70  sh          $v1, 0xD70($s5)
    ctx->pc = 0x172c84u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 3440), (uint16_t)GPR_U32(ctx, 3));
label_172c88:
    // 0x172c88: 0xc6a00d78  lwc1        $f0, 0xD78($s5)
    ctx->pc = 0x172c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172c8c:
    // 0x172c8c: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x172c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
label_172c90:
    // 0x172c90: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x172c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_172c94:
    // 0x172c94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x172c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172c98:
    // 0x172c98: 0x0  nop
    ctx->pc = 0x172c98u;
    // NOP
label_172c9c:
    // 0x172c9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x172c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_172ca0:
    // 0x172ca0: 0xe6a00d78  swc1        $f0, 0xD78($s5)
    ctx->pc = 0x172ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3448), bits); }
label_172ca4:
    // 0x172ca4: 0xc6a00d7c  lwc1        $f0, 0xD7C($s5)
    ctx->pc = 0x172ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172ca8:
    // 0x172ca8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x172ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_172cac:
    // 0x172cac: 0xe6a00d7c  swc1        $f0, 0xD7C($s5)
    ctx->pc = 0x172cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3452), bits); }
label_172cb0:
    // 0x172cb0: 0x96a30d72  lhu         $v1, 0xD72($s5)
    ctx->pc = 0x172cb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 3442)));
label_172cb4:
    // 0x172cb4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x172cb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172cb8:
    // 0x172cb8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x172cb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172cbc:
    // 0x172cbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x172cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_172cc0:
    // 0x172cc0: 0x10000049  b           . + 4 + (0x49 << 2)
label_172cc4:
    if (ctx->pc == 0x172CC4u) {
        ctx->pc = 0x172CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CC0u;
        // 0x172cc4: 0xa6a30d72  sh          $v1, 0xD72($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 3442), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172CC8u;
        goto label_172cc8;
    }
    ctx->pc = 0x172CC0u;
    {
        const bool branch_taken_0x172cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CC0u;
        // 0x172cc4: 0xa6a30d72  sh          $v1, 0xD72($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 3442), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172cc0) {
            ctx->pc = 0x172DE8u;
            { ctx->pc = 0x172de8; return; }
        }
    }
    ctx->pc = 0x172CC8u;
label_172cc8:
    // 0x172cc8: 0x96a30d72  lhu         $v1, 0xD72($s5)
    ctx->pc = 0x172cc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 3442)));
label_172ccc:
    // 0x172ccc: 0x2b42021  addu        $a0, $s5, $s4
    ctx->pc = 0x172cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_172cd0:
    // 0x172cd0: 0x24900090  addiu       $s0, $a0, 0x90
    ctx->pc = 0x172cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_172cd4:
    // 0x172cd4: 0x249100b0  addiu       $s1, $a0, 0xB0
    ctx->pc = 0x172cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_172cd8:
    // 0x172cd8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x172cd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_172cdc:
    // 0x172cdc: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_172ce0:
    if (ctx->pc == 0x172CE0u) {
        ctx->pc = 0x172CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CDCu;
        // 0x172ce0: 0x249200a0  addiu       $s2, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172CE4u;
        goto label_172ce4;
    }
    ctx->pc = 0x172CDCu;
    {
        const bool branch_taken_0x172cdc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x172CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CDCu;
        // 0x172ce0: 0x249200a0  addiu       $s2, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172cdc) {
            ctx->pc = 0x172CFCu;
            goto label_172cfc;
        }
    }
    ctx->pc = 0x172CE4u;
label_172ce4:
    // 0x172ce4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x172ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
label_172ce8:
    // 0x172ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172cec:
    // 0x172cec: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x172cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_172cf0:
    // 0x172cf0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x172cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_172cf4:
    // 0x172cf4: 0xc066e14  jal         func_19B850
label_172cf8:
    if (ctx->pc == 0x172CF8u) {
        ctx->pc = 0x172CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CF4u;
        // 0x172cf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172CFCu;
        goto label_172cfc;
    }
    ctx->pc = 0x172CF4u;
    SET_GPR_U32(ctx, 31, 0x172CFCu);
    ctx->pc = 0x172CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CF4u;
    // 0x172cf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x172CFCu;
label_172cfc:
    // 0x172cfc: 0x0  nop
    ctx->pc = 0x172cfcu;
    // NOP
label_172d00:
    // 0x172d00: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x172d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_172d04:
    // 0x172d04: 0xc6a10d80  lwc1        $f1, 0xD80($s5)
    ctx->pc = 0x172d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172d08:
    // 0x172d08: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x172d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_172d0c:
    // 0x172d0c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x172d0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_172d10:
    // 0x172d10: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x172d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172d14:
    // 0x172d14: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x172d14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_172d18:
    // 0x172d18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x172d18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_172d1c:
    // 0x172d1c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x172d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_172d20:
    // 0x172d20: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x172d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_172d24:
    // 0x172d24: 0xc6a10d84  lwc1        $f1, 0xD84($s5)
    ctx->pc = 0x172d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172d28:
    // 0x172d28: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x172d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172d2c:
    // 0x172d2c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x172d2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_172d30:
    // 0x172d30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x172d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_172d34:
    // 0x172d34: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x172d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_172d38:
    // 0x172d38: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x172d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_172d3c:
    // 0x172d3c: 0xc6a10d84  lwc1        $f1, 0xD84($s5)
    ctx->pc = 0x172d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172d40:
    // 0x172d40: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x172d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172d44:
    // 0x172d44: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x172d44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_172d48:
    // 0x172d48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x172d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_172d4c:
    // 0x172d4c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x172d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_172d50:
    // 0x172d50: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x172d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_172d54:
    // 0x172d54: 0xc6a10d84  lwc1        $f1, 0xD84($s5)
    ctx->pc = 0x172d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_172d58:
    // 0x172d58: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x172d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172d5c:
    // 0x172d5c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x172d5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_172d60:
    // 0x172d60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x172d60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_172d64:
    // 0x172d64: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x172d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_172d68:
    // 0x172d68: 0x96a30d70  lhu         $v1, 0xD70($s5)
    ctx->pc = 0x172d68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 3440)));
label_172d6c:
    // 0x172d6c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_172d70:
    if (ctx->pc == 0x172D70u) {
        ctx->pc = 0x172D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D6Cu;
        // 0x172d70: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D74u;
        goto label_172d74;
    }
    ctx->pc = 0x172D6Cu;
    {
        const bool branch_taken_0x172d6c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x172D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D6Cu;
        // 0x172d70: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d6c) {
            ctx->pc = 0x172D80u;
            goto label_172d80;
        }
    }
    ctx->pc = 0x172D74u;
label_172d74:
    // 0x172d74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172d78:
    // 0x172d78: 0x10000007  b           . + 4 + (0x7 << 2)
label_172d7c:
    if (ctx->pc == 0x172D7Cu) {
        ctx->pc = 0x172D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D78u;
        // 0x172d7c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D80u;
        goto label_172d80;
    }
    ctx->pc = 0x172D78u;
    {
        const bool branch_taken_0x172d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D78u;
        // 0x172d7c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d78) {
            ctx->pc = 0x172D98u;
            goto label_172d98;
        }
    }
    ctx->pc = 0x172D80u;
label_172d80:
    // 0x172d80: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x172d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_172d84:
    // 0x172d84: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x172d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_172d88:
    // 0x172d88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x172d88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172d8c:
    // 0x172d8c: 0x0  nop
    ctx->pc = 0x172d8cu;
    // NOP
label_172d90:
    // 0x172d90: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x172d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_172d94:
    // 0x172d94: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x172d94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_172d98:
    // 0x172d98: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x172d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_172d9c:
    // 0x172d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_172da0:
    // 0x172da0: 0x0  nop
    ctx->pc = 0x172da0u;
    // NOP
label_172da4:
    // 0x172da4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x172da4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_172da8:
    // 0x172da8: 0x0  nop
    ctx->pc = 0x172da8u;
    // NOP
label_172dac:
    // 0x172dac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_172db0:
    if (ctx->pc == 0x172DB0u) {
        ctx->pc = 0x172DB4u;
        goto label_172db4;
    }
    ctx->pc = 0x172DACu;
    {
        const bool branch_taken_0x172dac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172dac) {
            ctx->pc = 0x172DC4u;
            { ctx->pc = 0x172dc4; return; }
        }
    }
    ctx->pc = 0x172DB4u;
label_172db4:
    // 0x172db4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172db4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_172db8:
    // 0x172db8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x172db8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_172dbc:
    // 0x172dbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x172dc0u;
    return;
}

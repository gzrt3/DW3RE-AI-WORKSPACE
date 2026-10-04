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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part441(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2725d0u: goto label_2725d0;
        case 0x2725d4u: goto label_2725d4;
        case 0x2725d8u: goto label_2725d8;
        case 0x2725dcu: goto label_2725dc;
        case 0x2725e0u: goto label_2725e0;
        case 0x2725e4u: goto label_2725e4;
        case 0x2725e8u: goto label_2725e8;
        case 0x2725ecu: goto label_2725ec;
        case 0x2725f0u: goto label_2725f0;
        case 0x2725f4u: goto label_2725f4;
        case 0x2725f8u: goto label_2725f8;
        case 0x2725fcu: goto label_2725fc;
        case 0x272600u: goto label_272600;
        case 0x272604u: goto label_272604;
        case 0x272608u: goto label_272608;
        case 0x27260cu: goto label_27260c;
        case 0x272610u: goto label_272610;
        case 0x272614u: goto label_272614;
        case 0x272618u: goto label_272618;
        case 0x27261cu: goto label_27261c;
        case 0x272620u: goto label_272620;
        case 0x272624u: goto label_272624;
        case 0x272628u: goto label_272628;
        case 0x27262cu: goto label_27262c;
        case 0x272630u: goto label_272630;
        case 0x272634u: goto label_272634;
        case 0x272638u: goto label_272638;
        case 0x27263cu: goto label_27263c;
        case 0x272640u: goto label_272640;
        case 0x272644u: goto label_272644;
        case 0x272648u: goto label_272648;
        case 0x27264cu: goto label_27264c;
        case 0x272650u: goto label_272650;
        case 0x272654u: goto label_272654;
        case 0x272658u: goto label_272658;
        case 0x27265cu: goto label_27265c;
        case 0x272660u: goto label_272660;
        case 0x272664u: goto label_272664;
        case 0x272668u: goto label_272668;
        case 0x27266cu: goto label_27266c;
        case 0x272670u: goto label_272670;
        case 0x272674u: goto label_272674;
        case 0x272678u: goto label_272678;
        case 0x27267cu: goto label_27267c;
        case 0x272680u: goto label_272680;
        case 0x272684u: goto label_272684;
        case 0x272688u: goto label_272688;
        case 0x27268cu: goto label_27268c;
        case 0x272690u: goto label_272690;
        case 0x272694u: goto label_272694;
        case 0x272698u: goto label_272698;
        case 0x27269cu: goto label_27269c;
        case 0x2726a0u: goto label_2726a0;
        case 0x2726a4u: goto label_2726a4;
        case 0x2726a8u: goto label_2726a8;
        case 0x2726acu: goto label_2726ac;
        case 0x2726b0u: goto label_2726b0;
        case 0x2726b4u: goto label_2726b4;
        case 0x2726b8u: goto label_2726b8;
        case 0x2726bcu: goto label_2726bc;
        case 0x2726c0u: goto label_2726c0;
        case 0x2726c4u: goto label_2726c4;
        case 0x2726c8u: goto label_2726c8;
        case 0x2726ccu: goto label_2726cc;
        case 0x2726d0u: goto label_2726d0;
        case 0x2726d4u: goto label_2726d4;
        case 0x2726d8u: goto label_2726d8;
        case 0x2726dcu: goto label_2726dc;
        case 0x2726e0u: goto label_2726e0;
        case 0x2726e4u: goto label_2726e4;
        case 0x2726e8u: goto label_2726e8;
        case 0x2726ecu: goto label_2726ec;
        case 0x2726f0u: goto label_2726f0;
        case 0x2726f4u: goto label_2726f4;
        case 0x2726f8u: goto label_2726f8;
        case 0x2726fcu: goto label_2726fc;
        case 0x272700u: goto label_272700;
        case 0x272704u: goto label_272704;
        case 0x272708u: goto label_272708;
        case 0x27270cu: goto label_27270c;
        case 0x272710u: goto label_272710;
        case 0x272714u: goto label_272714;
        case 0x272718u: goto label_272718;
        case 0x27271cu: goto label_27271c;
        case 0x272720u: goto label_272720;
        case 0x272724u: goto label_272724;
        case 0x272728u: goto label_272728;
        case 0x27272cu: goto label_27272c;
        case 0x272730u: goto label_272730;
        case 0x272734u: goto label_272734;
        case 0x272738u: goto label_272738;
        case 0x27273cu: goto label_27273c;
        case 0x272740u: goto label_272740;
        case 0x272744u: goto label_272744;
        case 0x272748u: goto label_272748;
        case 0x27274cu: goto label_27274c;
        case 0x272750u: goto label_272750;
        case 0x272754u: goto label_272754;
        case 0x272758u: goto label_272758;
        case 0x27275cu: goto label_27275c;
        case 0x272760u: goto label_272760;
        case 0x272764u: goto label_272764;
        case 0x272768u: goto label_272768;
        case 0x27276cu: goto label_27276c;
        case 0x272770u: goto label_272770;
        case 0x272774u: goto label_272774;
        case 0x272778u: goto label_272778;
        case 0x27277cu: goto label_27277c;
        case 0x272780u: goto label_272780;
        case 0x272784u: goto label_272784;
        case 0x272788u: goto label_272788;
        case 0x27278cu: goto label_27278c;
        case 0x272790u: goto label_272790;
        case 0x272794u: goto label_272794;
        case 0x272798u: goto label_272798;
        case 0x27279cu: goto label_27279c;
        case 0x2727a0u: goto label_2727a0;
        case 0x2727a4u: goto label_2727a4;
        case 0x2727a8u: goto label_2727a8;
        case 0x2727acu: goto label_2727ac;
        case 0x2727b0u: goto label_2727b0;
        case 0x2727b4u: goto label_2727b4;
        case 0x2727b8u: goto label_2727b8;
        case 0x2727bcu: goto label_2727bc;
        case 0x2727c0u: goto label_2727c0;
        case 0x2727c4u: goto label_2727c4;
        case 0x2727c8u: goto label_2727c8;
        case 0x2727ccu: goto label_2727cc;
        case 0x2727d0u: goto label_2727d0;
        case 0x2727d4u: goto label_2727d4;
        case 0x2727d8u: goto label_2727d8;
        case 0x2727dcu: goto label_2727dc;
        case 0x2727e0u: goto label_2727e0;
        case 0x2727e4u: goto label_2727e4;
        case 0x2727e8u: goto label_2727e8;
        case 0x2727ecu: goto label_2727ec;
        case 0x2727f0u: goto label_2727f0;
        case 0x2727f4u: goto label_2727f4;
        case 0x2727f8u: goto label_2727f8;
        case 0x2727fcu: goto label_2727fc;
        case 0x272800u: goto label_272800;
        case 0x272804u: goto label_272804;
        case 0x272808u: goto label_272808;
        case 0x27280cu: goto label_27280c;
        case 0x272810u: goto label_272810;
        case 0x272814u: goto label_272814;
        case 0x272818u: goto label_272818;
        case 0x27281cu: goto label_27281c;
        case 0x272820u: goto label_272820;
        case 0x272824u: goto label_272824;
        case 0x272828u: goto label_272828;
        case 0x27282cu: goto label_27282c;
        case 0x272830u: goto label_272830;
        case 0x272834u: goto label_272834;
        case 0x272838u: goto label_272838;
        case 0x27283cu: goto label_27283c;
        case 0x272840u: goto label_272840;
        case 0x272844u: goto label_272844;
        case 0x272848u: goto label_272848;
        case 0x27284cu: goto label_27284c;
        case 0x272850u: goto label_272850;
        case 0x272854u: goto label_272854;
        case 0x272858u: goto label_272858;
        case 0x27285cu: goto label_27285c;
        case 0x272860u: goto label_272860;
        case 0x272864u: goto label_272864;
        case 0x272868u: goto label_272868;
        case 0x27286cu: goto label_27286c;
        case 0x272870u: goto label_272870;
        case 0x272874u: goto label_272874;
        case 0x272878u: goto label_272878;
        case 0x27287cu: goto label_27287c;
        case 0x272880u: goto label_272880;
        case 0x272884u: goto label_272884;
        case 0x272888u: goto label_272888;
        case 0x27288cu: goto label_27288c;
        case 0x272890u: goto label_272890;
        case 0x272894u: goto label_272894;
        case 0x272898u: goto label_272898;
        case 0x27289cu: goto label_27289c;
        case 0x2728a0u: goto label_2728a0;
        case 0x2728a4u: goto label_2728a4;
        case 0x2728a8u: goto label_2728a8;
        case 0x2728acu: goto label_2728ac;
        case 0x2728b0u: goto label_2728b0;
        case 0x2728b4u: goto label_2728b4;
        case 0x2728b8u: goto label_2728b8;
        case 0x2728bcu: goto label_2728bc;
        case 0x2728c0u: goto label_2728c0;
        case 0x2728c4u: goto label_2728c4;
        case 0x2728c8u: goto label_2728c8;
        case 0x2728ccu: goto label_2728cc;
        case 0x2728d0u: goto label_2728d0;
        case 0x2728d4u: goto label_2728d4;
        case 0x2728d8u: goto label_2728d8;
        case 0x2728dcu: goto label_2728dc;
        case 0x2728e0u: goto label_2728e0;
        case 0x2728e4u: goto label_2728e4;
        case 0x2728e8u: goto label_2728e8;
        case 0x2728ecu: goto label_2728ec;
        case 0x2728f0u: goto label_2728f0;
        case 0x2728f4u: goto label_2728f4;
        case 0x2728f8u: goto label_2728f8;
        case 0x2728fcu: goto label_2728fc;
        case 0x272900u: goto label_272900;
        case 0x272904u: goto label_272904;
        case 0x272908u: goto label_272908;
        case 0x27290cu: goto label_27290c;
        case 0x272910u: goto label_272910;
        case 0x272914u: goto label_272914;
        case 0x272918u: goto label_272918;
        case 0x27291cu: goto label_27291c;
        case 0x272920u: goto label_272920;
        case 0x272924u: goto label_272924;
        case 0x272928u: goto label_272928;
        case 0x27292cu: goto label_27292c;
        case 0x272930u: goto label_272930;
        case 0x272934u: goto label_272934;
        case 0x272938u: goto label_272938;
        case 0x27293cu: goto label_27293c;
        case 0x272940u: goto label_272940;
        case 0x272944u: goto label_272944;
        case 0x272948u: goto label_272948;
        case 0x27294cu: goto label_27294c;
        case 0x272950u: goto label_272950;
        case 0x272954u: goto label_272954;
        case 0x272958u: goto label_272958;
        case 0x27295cu: goto label_27295c;
        case 0x272960u: goto label_272960;
        case 0x272964u: goto label_272964;
        case 0x272968u: goto label_272968;
        case 0x27296cu: goto label_27296c;
        case 0x272970u: goto label_272970;
        case 0x272974u: goto label_272974;
        case 0x272978u: goto label_272978;
        case 0x27297cu: goto label_27297c;
        case 0x272980u: goto label_272980;
        case 0x272984u: goto label_272984;
        case 0x272988u: goto label_272988;
        case 0x27298cu: goto label_27298c;
        case 0x272990u: goto label_272990;
        case 0x272994u: goto label_272994;
        case 0x272998u: goto label_272998;
        case 0x27299cu: goto label_27299c;
        case 0x2729a0u: goto label_2729a0;
        case 0x2729a4u: goto label_2729a4;
        case 0x2729a8u: goto label_2729a8;
        case 0x2729acu: goto label_2729ac;
        case 0x2729b0u: goto label_2729b0;
        case 0x2729b4u: goto label_2729b4;
        case 0x2729b8u: goto label_2729b8;
        case 0x2729bcu: goto label_2729bc;
        case 0x2729c0u: goto label_2729c0;
        case 0x2729c4u: goto label_2729c4;
        case 0x2729c8u: goto label_2729c8;
        case 0x2729ccu: goto label_2729cc;
        case 0x2729d0u: goto label_2729d0;
        case 0x2729d4u: goto label_2729d4;
        case 0x2729d8u: goto label_2729d8;
        case 0x2729dcu: goto label_2729dc;
        case 0x2729e0u: goto label_2729e0;
        case 0x2729e4u: goto label_2729e4;
        case 0x2729e8u: goto label_2729e8;
        case 0x2729ecu: goto label_2729ec;
        case 0x2729f0u: goto label_2729f0;
        case 0x2729f4u: goto label_2729f4;
        case 0x2729f8u: goto label_2729f8;
        case 0x2729fcu: goto label_2729fc;
        case 0x272a00u: goto label_272a00;
        case 0x272a04u: goto label_272a04;
        case 0x272a08u: goto label_272a08;
        case 0x272a0cu: goto label_272a0c;
        case 0x272a10u: goto label_272a10;
        case 0x272a14u: goto label_272a14;
        case 0x272a18u: goto label_272a18;
        case 0x272a1cu: goto label_272a1c;
        case 0x272a20u: goto label_272a20;
        case 0x272a24u: goto label_272a24;
        case 0x272a28u: goto label_272a28;
        case 0x272a2cu: goto label_272a2c;
        case 0x272a30u: goto label_272a30;
        case 0x272a34u: goto label_272a34;
        case 0x272a38u: goto label_272a38;
        case 0x272a3cu: goto label_272a3c;
        case 0x272a40u: goto label_272a40;
        case 0x272a44u: goto label_272a44;
        case 0x272a48u: goto label_272a48;
        case 0x272a4cu: goto label_272a4c;
        case 0x272a50u: goto label_272a50;
        case 0x272a54u: goto label_272a54;
        case 0x272a58u: goto label_272a58;
        case 0x272a5cu: goto label_272a5c;
        case 0x272a60u: goto label_272a60;
        case 0x272a64u: goto label_272a64;
        case 0x272a68u: goto label_272a68;
        case 0x272a6cu: goto label_272a6c;
        case 0x272a70u: goto label_272a70;
        case 0x272a74u: goto label_272a74;
        case 0x272a78u: goto label_272a78;
        case 0x272a7cu: goto label_272a7c;
        case 0x272a80u: goto label_272a80;
        case 0x272a84u: goto label_272a84;
        case 0x272a88u: goto label_272a88;
        case 0x272a8cu: goto label_272a8c;
        case 0x272a90u: goto label_272a90;
        case 0x272a94u: goto label_272a94;
        case 0x272a98u: goto label_272a98;
        case 0x272a9cu: goto label_272a9c;
        case 0x272aa0u: goto label_272aa0;
        case 0x272aa4u: goto label_272aa4;
        case 0x272aa8u: goto label_272aa8;
        case 0x272aacu: goto label_272aac;
        case 0x272ab0u: goto label_272ab0;
        case 0x272ab4u: goto label_272ab4;
        case 0x272ab8u: goto label_272ab8;
        case 0x272abcu: goto label_272abc;
        case 0x272ac0u: goto label_272ac0;
        case 0x272ac4u: goto label_272ac4;
        case 0x272ac8u: goto label_272ac8;
        case 0x272accu: goto label_272acc;
        case 0x272ad0u: goto label_272ad0;
        case 0x272ad4u: goto label_272ad4;
        case 0x272ad8u: goto label_272ad8;
        case 0x272adcu: goto label_272adc;
        case 0x272ae0u: goto label_272ae0;
        case 0x272ae4u: goto label_272ae4;
        case 0x272ae8u: goto label_272ae8;
        case 0x272aecu: goto label_272aec;
        case 0x272af0u: goto label_272af0;
        case 0x272af4u: goto label_272af4;
        case 0x272af8u: goto label_272af8;
        case 0x272afcu: goto label_272afc;
        case 0x272b00u: goto label_272b00;
        case 0x272b04u: goto label_272b04;
        case 0x272b08u: goto label_272b08;
        case 0x272b0cu: goto label_272b0c;
        case 0x272b10u: goto label_272b10;
        case 0x272b14u: goto label_272b14;
        case 0x272b18u: goto label_272b18;
        case 0x272b1cu: goto label_272b1c;
        case 0x272b20u: goto label_272b20;
        case 0x272b24u: goto label_272b24;
        case 0x272b28u: goto label_272b28;
        case 0x272b2cu: goto label_272b2c;
        case 0x272b30u: goto label_272b30;
        case 0x272b34u: goto label_272b34;
        case 0x272b38u: goto label_272b38;
        case 0x272b3cu: goto label_272b3c;
        case 0x272b40u: goto label_272b40;
        case 0x272b44u: goto label_272b44;
        case 0x272b48u: goto label_272b48;
        case 0x272b4cu: goto label_272b4c;
        case 0x272b50u: goto label_272b50;
        case 0x272b54u: goto label_272b54;
        case 0x272b58u: goto label_272b58;
        case 0x272b5cu: goto label_272b5c;
        case 0x272b60u: goto label_272b60;
        case 0x272b64u: goto label_272b64;
        case 0x272b68u: goto label_272b68;
        case 0x272b6cu: goto label_272b6c;
        case 0x272b70u: goto label_272b70;
        case 0x272b74u: goto label_272b74;
        case 0x272b78u: goto label_272b78;
        case 0x272b7cu: goto label_272b7c;
        case 0x272b80u: goto label_272b80;
        case 0x272b84u: goto label_272b84;
        case 0x272b88u: goto label_272b88;
        case 0x272b8cu: goto label_272b8c;
        case 0x272b90u: goto label_272b90;
        case 0x272b94u: goto label_272b94;
        case 0x272b98u: goto label_272b98;
        case 0x272b9cu: goto label_272b9c;
        case 0x272ba0u: goto label_272ba0;
        case 0x272ba4u: goto label_272ba4;
        case 0x272ba8u: goto label_272ba8;
        case 0x272bacu: goto label_272bac;
        case 0x272bb0u: goto label_272bb0;
        case 0x272bb4u: goto label_272bb4;
        case 0x272bb8u: goto label_272bb8;
        case 0x272bbcu: goto label_272bbc;
        case 0x272bc0u: goto label_272bc0;
        case 0x272bc4u: goto label_272bc4;
        case 0x272bc8u: goto label_272bc8;
        case 0x272bccu: goto label_272bcc;
        case 0x272bd0u: goto label_272bd0;
        case 0x272bd4u: goto label_272bd4;
        case 0x272bd8u: goto label_272bd8;
        case 0x272bdcu: goto label_272bdc;
        case 0x272be0u: goto label_272be0;
        case 0x272be4u: goto label_272be4;
        case 0x272be8u: goto label_272be8;
        case 0x272becu: goto label_272bec;
        case 0x272bf0u: goto label_272bf0;
        case 0x272bf4u: goto label_272bf4;
        case 0x272bf8u: goto label_272bf8;
        case 0x272bfcu: goto label_272bfc;
        case 0x272c00u: goto label_272c00;
        case 0x272c04u: goto label_272c04;
        case 0x272c08u: goto label_272c08;
        case 0x272c0cu: goto label_272c0c;
        case 0x272c10u: goto label_272c10;
        case 0x272c14u: goto label_272c14;
        case 0x272c18u: goto label_272c18;
        case 0x272c1cu: goto label_272c1c;
        case 0x272c20u: goto label_272c20;
        case 0x272c24u: goto label_272c24;
        case 0x272c28u: goto label_272c28;
        case 0x272c2cu: goto label_272c2c;
        case 0x272c30u: goto label_272c30;
        case 0x272c34u: goto label_272c34;
        case 0x272c38u: goto label_272c38;
        case 0x272c3cu: goto label_272c3c;
        case 0x272c40u: goto label_272c40;
        case 0x272c44u: goto label_272c44;
        case 0x272c48u: goto label_272c48;
        case 0x272c4cu: goto label_272c4c;
        case 0x272c50u: goto label_272c50;
        case 0x272c54u: goto label_272c54;
        case 0x272c58u: goto label_272c58;
        case 0x272c5cu: goto label_272c5c;
        case 0x272c60u: goto label_272c60;
        case 0x272c64u: goto label_272c64;
        case 0x272c68u: goto label_272c68;
        case 0x272c6cu: goto label_272c6c;
        case 0x272c70u: goto label_272c70;
        case 0x272c74u: goto label_272c74;
        case 0x272c78u: goto label_272c78;
        case 0x272c7cu: goto label_272c7c;
        case 0x272c80u: goto label_272c80;
        case 0x272c84u: goto label_272c84;
        case 0x272c88u: goto label_272c88;
        case 0x272c8cu: goto label_272c8c;
        case 0x272c90u: goto label_272c90;
        case 0x272c94u: goto label_272c94;
        case 0x272c98u: goto label_272c98;
        case 0x272c9cu: goto label_272c9c;
        case 0x272ca0u: goto label_272ca0;
        case 0x272ca4u: goto label_272ca4;
        case 0x272ca8u: goto label_272ca8;
        case 0x272cacu: goto label_272cac;
        case 0x272cb0u: goto label_272cb0;
        case 0x272cb4u: goto label_272cb4;
        case 0x272cb8u: goto label_272cb8;
        case 0x272cbcu: goto label_272cbc;
        case 0x272cc0u: goto label_272cc0;
        case 0x272cc4u: goto label_272cc4;
        case 0x272cc8u: goto label_272cc8;
        case 0x272cccu: goto label_272ccc;
        case 0x272cd0u: goto label_272cd0;
        case 0x272cd4u: goto label_272cd4;
        case 0x272cd8u: goto label_272cd8;
        case 0x272cdcu: goto label_272cdc;
        case 0x272ce0u: goto label_272ce0;
        case 0x272ce4u: goto label_272ce4;
        case 0x272ce8u: goto label_272ce8;
        case 0x272cecu: goto label_272cec;
        case 0x272cf0u: goto label_272cf0;
        case 0x272cf4u: goto label_272cf4;
        case 0x272cf8u: goto label_272cf8;
        case 0x272cfcu: goto label_272cfc;
        case 0x272d00u: goto label_272d00;
        case 0x272d04u: goto label_272d04;
        case 0x272d08u: goto label_272d08;
        case 0x272d0cu: goto label_272d0c;
        case 0x272d10u: goto label_272d10;
        case 0x272d14u: goto label_272d14;
        case 0x272d18u: goto label_272d18;
        case 0x272d1cu: goto label_272d1c;
        case 0x272d20u: goto label_272d20;
        case 0x272d24u: goto label_272d24;
        case 0x272d28u: goto label_272d28;
        case 0x272d2cu: goto label_272d2c;
        case 0x272d30u: goto label_272d30;
        case 0x272d34u: goto label_272d34;
        case 0x272d38u: goto label_272d38;
        case 0x272d3cu: goto label_272d3c;
        case 0x272d40u: goto label_272d40;
        case 0x272d44u: goto label_272d44;
        case 0x272d48u: goto label_272d48;
        case 0x272d4cu: goto label_272d4c;
        case 0x272d50u: goto label_272d50;
        case 0x272d54u: goto label_272d54;
        case 0x272d58u: goto label_272d58;
        case 0x272d5cu: goto label_272d5c;
        case 0x272d60u: goto label_272d60;
        case 0x272d64u: goto label_272d64;
        case 0x272d68u: goto label_272d68;
        case 0x272d6cu: goto label_272d6c;
        case 0x272d70u: goto label_272d70;
        case 0x272d74u: goto label_272d74;
        case 0x272d78u: goto label_272d78;
        case 0x272d7cu: goto label_272d7c;
        case 0x272d80u: goto label_272d80;
        case 0x272d84u: goto label_272d84;
        case 0x272d88u: goto label_272d88;
        case 0x272d8cu: goto label_272d8c;
        case 0x272d90u: goto label_272d90;
        case 0x272d94u: goto label_272d94;
        case 0x272d98u: goto label_272d98;
        case 0x272d9cu: goto label_272d9c;
        default: return;
    }

label_2725d0:
    // 0x2725d0: 0x8c90  .word       0x00008C90                   # mfhi        $s1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2725d0u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2725d4:
    // 0x2725d4: 0x66d0  .word       0x000066D0                   # mfhi        $t4 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2725d4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2725d8:
    // 0x2725d8: 0x0  nop
    ctx->pc = 0x2725d8u;
    // NOP
label_2725dc:
    // 0x2725dc: 0x0  nop
    ctx->pc = 0x2725dcu;
    // NOP
label_2725e0:
    // 0x2725e0: 0x8c9d  .word       0x00008C9D                   # dmultu      $zero, $zero # 00008C80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2725e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2725E0 raw=0x00008C9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2725e4:
    // 0x2725e4: 0x2040  sll         $a0, $zero, 1
    ctx->pc = 0x2725e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2725e8:
    // 0x2725e8: 0x0  nop
    ctx->pc = 0x2725e8u;
    // NOP
label_2725ec:
    // 0x2725ec: 0x0  nop
    ctx->pc = 0x2725ecu;
    // NOP
label_2725f0:
    // 0x2725f0: 0x8ca2  .word       0x00008CA2                   # neg         $s1, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2725f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_2725f4:
    // 0x2725f4: 0x6d90  .word       0x00006D90                   # mfhi        $t5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2725f4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2725f8:
    // 0x2725f8: 0x0  nop
    ctx->pc = 0x2725f8u;
    // NOP
label_2725fc:
    // 0x2725fc: 0x0  nop
    ctx->pc = 0x2725fcu;
    // NOP
label_272600:
    // 0x272600: 0x8cb0  tge         $zero, $zero, 562
    ctx->pc = 0x272600u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272604:
    // 0x272604: 0x2e40  sll         $a1, $zero, 25
    ctx->pc = 0x272604u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_272608:
    // 0x272608: 0x0  nop
    ctx->pc = 0x272608u;
    // NOP
label_27260c:
    // 0x27260c: 0x0  nop
    ctx->pc = 0x27260cu;
    // NOP
label_272610:
    // 0x272610: 0x8cb6  tne         $zero, $zero, 562
    ctx->pc = 0x272610u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272614:
    // 0x272614: 0x6780  sll         $t4, $zero, 30
    ctx->pc = 0x272614u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_272618:
    // 0x272618: 0x0  nop
    ctx->pc = 0x272618u;
    // NOP
label_27261c:
    // 0x27261c: 0x0  nop
    ctx->pc = 0x27261cu;
    // NOP
label_272620:
    // 0x272620: 0x8cc3  sra         $s1, $zero, 19
    ctx->pc = 0x272620u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), 19));
label_272624:
    // 0x272624: 0x2440  sll         $a0, $zero, 17
    ctx->pc = 0x272624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_272628:
    // 0x272628: 0x0  nop
    ctx->pc = 0x272628u;
    // NOP
label_27262c:
    // 0x27262c: 0x0  nop
    ctx->pc = 0x27262cu;
    // NOP
label_272630:
    // 0x272630: 0x8cc8  .word       0x00008CC8                   # jr          $zero # 00008CC0 <InstrIdType: CPU_SPECIAL>
label_272634:
    if (ctx->pc == 0x272634u) {
        ctx->pc = 0x272634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272630u;
        // 0x272634: 0x2b30  tge         $zero, $zero, 172 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272638u;
        goto label_272638;
    }
    ctx->pc = 0x272630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x272634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272630u;
        // 0x272634: 0x2b30  tge         $zero, $zero, 172 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272630u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x272638u;
label_272638:
    // 0x272638: 0x0  nop
    ctx->pc = 0x272638u;
    // NOP
label_27263c:
    // 0x27263c: 0x0  nop
    ctx->pc = 0x27263cu;
    // NOP
label_272640:
    // 0x272640: 0x8cce  .word       0x00008CCE                   # INVALID     $zero, $zero, -0x7332 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x272640 raw=0x00008CCE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272644:
    // 0x272644: 0x22a0  .word       0x000022A0                   # add         $a0, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_272648:
    // 0x272648: 0x0  nop
    ctx->pc = 0x272648u;
    // NOP
label_27264c:
    // 0x27264c: 0x0  nop
    ctx->pc = 0x27264cu;
    // NOP
label_272650:
    // 0x272650: 0x8cd3  .word       0x00008CD3                   # mtlo        $zero # 00008CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272650u;
    ctx->lo = GPR_U64(ctx, 0);
label_272654:
    // 0x272654: 0x2d90  .word       0x00002D90                   # mfhi        $a1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272654u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_272658:
    // 0x272658: 0x0  nop
    ctx->pc = 0x272658u;
    // NOP
label_27265c:
    // 0x27265c: 0x0  nop
    ctx->pc = 0x27265cu;
    // NOP
label_272660:
    // 0x272660: 0x8cd9  .word       0x00008CD9                   # multu       $zero, $zero # 00008CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272660u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_272664:
    // 0x272664: 0x2440  sll         $a0, $zero, 17
    ctx->pc = 0x272664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_272668:
    // 0x272668: 0x0  nop
    ctx->pc = 0x272668u;
    // NOP
label_27266c:
    // 0x27266c: 0x0  nop
    ctx->pc = 0x27266cu;
    // NOP
label_272670:
    // 0x272670: 0x8cde  .word       0x00008CDE                   # ddiv        $s1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272670u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x272670 raw=0x00008CDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272674:
    // 0x272674: 0x2990  .word       0x00002990                   # mfhi        $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272674u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_272678:
    // 0x272678: 0x0  nop
    ctx->pc = 0x272678u;
    // NOP
label_27267c:
    // 0x27267c: 0x0  nop
    ctx->pc = 0x27267cu;
    // NOP
label_272680:
    // 0x272680: 0x8ce4  .word       0x00008CE4                   # and         $s1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272680u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_272684:
    // 0x272684: 0x4e30  tge         $zero, $zero, 312
    ctx->pc = 0x272684u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272688:
    // 0x272688: 0x0  nop
    ctx->pc = 0x272688u;
    // NOP
label_27268c:
    // 0x27268c: 0x0  nop
    ctx->pc = 0x27268cu;
    // NOP
label_272690:
    // 0x272690: 0x8cee  .word       0x00008CEE                   # dsub        $s1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272690u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_272694:
    // 0x272694: 0x4ae0  .word       0x00004AE0                   # add         $t1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_272698:
    // 0x272698: 0x0  nop
    ctx->pc = 0x272698u;
    // NOP
label_27269c:
    // 0x27269c: 0x0  nop
    ctx->pc = 0x27269cu;
    // NOP
label_2726a0:
    // 0x2726a0: 0x8cf8  dsll        $s1, $zero, 19
    ctx->pc = 0x2726a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << 19);
label_2726a4:
    // 0x2726a4: 0xafa0  .word       0x0000AFA0                   # add         $s5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2726a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2726a8:
    // 0x2726a8: 0x0  nop
    ctx->pc = 0x2726a8u;
    // NOP
label_2726ac:
    // 0x2726ac: 0x0  nop
    ctx->pc = 0x2726acu;
    // NOP
label_2726b0:
    // 0x2726b0: 0x8d0e  .word       0x00008D0E                   # INVALID     $zero, $zero, -0x72F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2726b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2726B0 raw=0x00008D0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2726b4:
    // 0x2726b4: 0x7200  sll         $t6, $zero, 8
    ctx->pc = 0x2726b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_2726b8:
    // 0x2726b8: 0x0  nop
    ctx->pc = 0x2726b8u;
    // NOP
label_2726bc:
    // 0x2726bc: 0x0  nop
    ctx->pc = 0x2726bcu;
    // NOP
label_2726c0:
    // 0x2726c0: 0x8d1d  .word       0x00008D1D                   # dmultu      $zero, $zero # 00008D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2726c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2726C0 raw=0x00008D1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2726c4:
    // 0x2726c4: 0x3010  mfhi        $a2
    ctx->pc = 0x2726c4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2726c8:
    // 0x2726c8: 0x0  nop
    ctx->pc = 0x2726c8u;
    // NOP
label_2726cc:
    // 0x2726cc: 0x0  nop
    ctx->pc = 0x2726ccu;
    // NOP
label_2726d0:
    // 0x2726d0: 0x8d24  .word       0x00008D24                   # and         $s1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2726d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2726d4:
    // 0x2726d4: 0x4d70  tge         $zero, $zero, 309
    ctx->pc = 0x2726d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2726d8:
    // 0x2726d8: 0x0  nop
    ctx->pc = 0x2726d8u;
    // NOP
label_2726dc:
    // 0x2726dc: 0x0  nop
    ctx->pc = 0x2726dcu;
    // NOP
label_2726e0:
    // 0x2726e0: 0x8d2e  .word       0x00008D2E                   # dsub        $s1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2726e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2726e4:
    // 0x2726e4: 0x3960  .word       0x00003960                   # add         $a3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2726e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2726e8:
    // 0x2726e8: 0x0  nop
    ctx->pc = 0x2726e8u;
    // NOP
label_2726ec:
    // 0x2726ec: 0x0  nop
    ctx->pc = 0x2726ecu;
    // NOP
label_2726f0:
    // 0x2726f0: 0x8d36  tne         $zero, $zero, 564
    ctx->pc = 0x2726f0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2726f4:
    // 0x2726f4: 0x1c30  tge         $zero, $zero, 112
    ctx->pc = 0x2726f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2726f8:
    // 0x2726f8: 0x0  nop
    ctx->pc = 0x2726f8u;
    // NOP
label_2726fc:
    // 0x2726fc: 0x0  nop
    ctx->pc = 0x2726fcu;
    // NOP
label_272700:
    // 0x272700: 0x8d3a  dsrl        $s1, $zero, 20
    ctx->pc = 0x272700u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> 20);
label_272704:
    // 0x272704: 0x1da0  .word       0x00001DA0                   # add         $v1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272704u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_272708:
    // 0x272708: 0x0  nop
    ctx->pc = 0x272708u;
    // NOP
label_27270c:
    // 0x27270c: 0x0  nop
    ctx->pc = 0x27270cu;
    // NOP
label_272710:
    // 0x272710: 0x8d3e  dsrl32      $s1, $zero, 20
    ctx->pc = 0x272710u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> (32 + 20));
label_272714:
    // 0x272714: 0x74c0  sll         $t6, $zero, 19
    ctx->pc = 0x272714u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_272718:
    // 0x272718: 0x0  nop
    ctx->pc = 0x272718u;
    // NOP
label_27271c:
    // 0x27271c: 0x0  nop
    ctx->pc = 0x27271cu;
    // NOP
label_272720:
    // 0x272720: 0x8d4d  break       0, 565
    ctx->pc = 0x272720u;
    runtime->handleBreak(rdram, ctx);
label_272724:
    // 0x272724: 0x5ff0  tge         $zero, $zero, 383
    ctx->pc = 0x272724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272728:
    // 0x272728: 0x0  nop
    ctx->pc = 0x272728u;
    // NOP
label_27272c:
    // 0x27272c: 0x0  nop
    ctx->pc = 0x27272cu;
    // NOP
label_272730:
    // 0x272730: 0x8d59  .word       0x00008D59                   # multu       $zero, $zero # 00008D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272730u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_272734:
    // 0x272734: 0xbcc0  sll         $s7, $zero, 19
    ctx->pc = 0x272734u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_272738:
    // 0x272738: 0x0  nop
    ctx->pc = 0x272738u;
    // NOP
label_27273c:
    // 0x27273c: 0x0  nop
    ctx->pc = 0x27273cu;
    // NOP
label_272740:
    // 0x272740: 0x8d71  tgeu        $zero, $zero, 565
    ctx->pc = 0x272740u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272744:
    // 0x272744: 0x5730  tge         $zero, $zero, 348
    ctx->pc = 0x272744u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272748:
    // 0x272748: 0x0  nop
    ctx->pc = 0x272748u;
    // NOP
label_27274c:
    // 0x27274c: 0x0  nop
    ctx->pc = 0x27274cu;
    // NOP
label_272750:
    // 0x272750: 0x8d7c  dsll32      $s1, $zero, 21
    ctx->pc = 0x272750u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << (32 + 21));
label_272754:
    // 0x272754: 0xb9e0  .word       0x0000B9E0                   # add         $s7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_272758:
    // 0x272758: 0x0  nop
    ctx->pc = 0x272758u;
    // NOP
label_27275c:
    // 0x27275c: 0x0  nop
    ctx->pc = 0x27275cu;
    // NOP
label_272760:
    // 0x272760: 0x8d94  .word       0x00008D94                   # dsllv       $s1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272760u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_272764:
    // 0x272764: 0x6b60  .word       0x00006B60                   # add         $t5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272764u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_272768:
    // 0x272768: 0x0  nop
    ctx->pc = 0x272768u;
    // NOP
label_27276c:
    // 0x27276c: 0x0  nop
    ctx->pc = 0x27276cu;
    // NOP
label_272770:
    // 0x272770: 0x8da2  .word       0x00008DA2                   # neg         $s1, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272770u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_272774:
    // 0x272774: 0x5030  tge         $zero, $zero, 320
    ctx->pc = 0x272774u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272778:
    // 0x272778: 0x0  nop
    ctx->pc = 0x272778u;
    // NOP
label_27277c:
    // 0x27277c: 0x0  nop
    ctx->pc = 0x27277cu;
    // NOP
label_272780:
    // 0x272780: 0x8dad  .word       0x00008DAD                   # daddu       $s1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272784:
    // 0x272784: 0x6970  tge         $zero, $zero, 421
    ctx->pc = 0x272784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272788:
    // 0x272788: 0x0  nop
    ctx->pc = 0x272788u;
    // NOP
label_27278c:
    // 0x27278c: 0x0  nop
    ctx->pc = 0x27278cu;
    // NOP
label_272790:
    // 0x272790: 0x8dbb  dsra        $s1, $zero, 22
    ctx->pc = 0x272790u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> 22);
label_272794:
    // 0x272794: 0x4e30  tge         $zero, $zero, 312
    ctx->pc = 0x272794u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272798:
    // 0x272798: 0x0  nop
    ctx->pc = 0x272798u;
    // NOP
label_27279c:
    // 0x27279c: 0x0  nop
    ctx->pc = 0x27279cu;
    // NOP
label_2727a0:
    // 0x2727a0: 0x8dc5  .word       0x00008DC5                   # INVALID     $zero, $zero, -0x723B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2727a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2727A0 raw=0x00008DC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2727a4:
    // 0x2727a4: 0x8c80  sll         $s1, $zero, 18
    ctx->pc = 0x2727a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2727a8:
    // 0x2727a8: 0x0  nop
    ctx->pc = 0x2727a8u;
    // NOP
label_2727ac:
    // 0x2727ac: 0x0  nop
    ctx->pc = 0x2727acu;
    // NOP
label_2727b0:
    // 0x2727b0: 0x8dd7  .word       0x00008DD7                   # dsrav       $s1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2727b0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2727b4:
    // 0x2727b4: 0x9420  .word       0x00009420                   # add         $s2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2727b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2727b8:
    // 0x2727b8: 0x0  nop
    ctx->pc = 0x2727b8u;
    // NOP
label_2727bc:
    // 0x2727bc: 0x0  nop
    ctx->pc = 0x2727bcu;
    // NOP
label_2727c0:
    // 0x2727c0: 0x8dea  .word       0x00008DEA                   # slt         $s1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2727c0u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2727c4:
    // 0x2727c4: 0x7a70  tge         $zero, $zero, 489
    ctx->pc = 0x2727c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2727c8:
    // 0x2727c8: 0x0  nop
    ctx->pc = 0x2727c8u;
    // NOP
label_2727cc:
    // 0x2727cc: 0x0  nop
    ctx->pc = 0x2727ccu;
    // NOP
label_2727d0:
    // 0x2727d0: 0x8dfa  dsrl        $s1, $zero, 23
    ctx->pc = 0x2727d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) >> 23);
label_2727d4:
    // 0x2727d4: 0x43a0  .word       0x000043A0                   # add         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2727d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2727d8:
    // 0x2727d8: 0x0  nop
    ctx->pc = 0x2727d8u;
    // NOP
label_2727dc:
    // 0x2727dc: 0x0  nop
    ctx->pc = 0x2727dcu;
    // NOP
label_2727e0:
    // 0x2727e0: 0x8e03  sra         $s1, $zero, 24
    ctx->pc = 0x2727e0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 0), 24));
label_2727e4:
    // 0x2727e4: 0x6fa0  .word       0x00006FA0                   # add         $t5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2727e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2727e8:
    // 0x2727e8: 0x0  nop
    ctx->pc = 0x2727e8u;
    // NOP
label_2727ec:
    // 0x2727ec: 0x0  nop
    ctx->pc = 0x2727ecu;
    // NOP
label_2727f0:
    // 0x2727f0: 0x8e11  .word       0x00008E11                   # mthi        $zero # 00008E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2727f0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2727f4:
    // 0x2727f4: 0x43d0  .word       0x000043D0                   # mfhi        $t0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2727f4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2727f8:
    // 0x2727f8: 0x0  nop
    ctx->pc = 0x2727f8u;
    // NOP
label_2727fc:
    // 0x2727fc: 0x0  nop
    ctx->pc = 0x2727fcu;
    // NOP
label_272800:
    // 0x272800: 0x8e1a  .word       0x00008E1A                   # div         $s1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272800u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_272804:
    // 0x272804: 0x3f00  sll         $a3, $zero, 28
    ctx->pc = 0x272804u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_272808:
    // 0x272808: 0x0  nop
    ctx->pc = 0x272808u;
    // NOP
label_27280c:
    // 0x27280c: 0x0  nop
    ctx->pc = 0x27280cu;
    // NOP
label_272810:
    // 0x272810: 0x8e22  .word       0x00008E22                   # neg         $s1, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272810u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_272814:
    // 0x272814: 0x42b0  tge         $zero, $zero, 266
    ctx->pc = 0x272814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272818:
    // 0x272818: 0x0  nop
    ctx->pc = 0x272818u;
    // NOP
label_27281c:
    // 0x27281c: 0x0  nop
    ctx->pc = 0x27281cu;
    // NOP
label_272820:
    // 0x272820: 0x8e2b  .word       0x00008E2B                   # sltu        $s1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272820u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_272824:
    // 0x272824: 0xb150  .word       0x0000B150                   # mfhi        $s6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272824u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_272828:
    // 0x272828: 0x0  nop
    ctx->pc = 0x272828u;
    // NOP
label_27282c:
    // 0x27282c: 0x0  nop
    ctx->pc = 0x27282cu;
    // NOP
label_272830:
    // 0x272830: 0x8e42  srl         $s1, $zero, 25
    ctx->pc = 0x272830u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 0), 25));
label_272834:
    // 0x272834: 0x64c0  sll         $t4, $zero, 19
    ctx->pc = 0x272834u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_272838:
    // 0x272838: 0x0  nop
    ctx->pc = 0x272838u;
    // NOP
label_27283c:
    // 0x27283c: 0x0  nop
    ctx->pc = 0x27283cu;
    // NOP
label_272840:
    // 0x272840: 0x8e4f  .word       0x00008E4F                   # sync.p # 00008800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272840u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_272844:
    // 0x272844: 0x58c0  sll         $t3, $zero, 3
    ctx->pc = 0x272844u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_272848:
    // 0x272848: 0x0  nop
    ctx->pc = 0x272848u;
    // NOP
label_27284c:
    // 0x27284c: 0x0  nop
    ctx->pc = 0x27284cu;
    // NOP
label_272850:
    // 0x272850: 0x8e5b  .word       0x00008E5B                   # divu        $s1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272850u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_272854:
    // 0x272854: 0x7470  tge         $zero, $zero, 465
    ctx->pc = 0x272854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272858:
    // 0x272858: 0x0  nop
    ctx->pc = 0x272858u;
    // NOP
label_27285c:
    // 0x27285c: 0x0  nop
    ctx->pc = 0x27285cu;
    // NOP
label_272860:
    // 0x272860: 0x8e6a  .word       0x00008E6A                   # slt         $s1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272860u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_272864:
    // 0x272864: 0x5150  .word       0x00005150                   # mfhi        $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272864u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_272868:
    // 0x272868: 0x0  nop
    ctx->pc = 0x272868u;
    // NOP
label_27286c:
    // 0x27286c: 0x0  nop
    ctx->pc = 0x27286cu;
    // NOP
label_272870:
    // 0x272870: 0x8e75  .word       0x00008E75                   # INVALID     $zero, $zero, -0x718B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x272870 raw=0x00008E75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272874:
    // 0x272874: 0x7550  .word       0x00007550                   # mfhi        $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272874u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_272878:
    // 0x272878: 0x0  nop
    ctx->pc = 0x272878u;
    // NOP
label_27287c:
    // 0x27287c: 0x0  nop
    ctx->pc = 0x27287cu;
    // NOP
label_272880:
    // 0x272880: 0x8e84  .word       0x00008E84                   # sllv        $s1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272880u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_272884:
    // 0x272884: 0x2f50  .word       0x00002F50                   # mfhi        $a1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272884u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_272888:
    // 0x272888: 0x0  nop
    ctx->pc = 0x272888u;
    // NOP
label_27288c:
    // 0x27288c: 0x0  nop
    ctx->pc = 0x27288cu;
    // NOP
label_272890:
    // 0x272890: 0x8e8a  .word       0x00008E8A                   # movz        $s1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272890u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_272894:
    // 0x272894: 0x7770  tge         $zero, $zero, 477
    ctx->pc = 0x272894u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272898:
    // 0x272898: 0x0  nop
    ctx->pc = 0x272898u;
    // NOP
label_27289c:
    // 0x27289c: 0x0  nop
    ctx->pc = 0x27289cu;
    // NOP
label_2728a0:
    // 0x2728a0: 0x8e99  .word       0x00008E99                   # multu       $zero, $zero # 00008E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2728a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2728a4:
    // 0x2728a4: 0xb7c0  sll         $s6, $zero, 31
    ctx->pc = 0x2728a4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2728a8:
    // 0x2728a8: 0x0  nop
    ctx->pc = 0x2728a8u;
    // NOP
label_2728ac:
    // 0x2728ac: 0x0  nop
    ctx->pc = 0x2728acu;
    // NOP
label_2728b0:
    // 0x2728b0: 0x8eb0  tge         $zero, $zero, 570
    ctx->pc = 0x2728b0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2728b4:
    // 0x2728b4: 0x7120  .word       0x00007120                   # add         $t6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2728b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2728b8:
    // 0x2728b8: 0x0  nop
    ctx->pc = 0x2728b8u;
    // NOP
label_2728bc:
    // 0x2728bc: 0x0  nop
    ctx->pc = 0x2728bcu;
    // NOP
label_2728c0:
    // 0x2728c0: 0x8ebf  dsra32      $s1, $zero, 26
    ctx->pc = 0x2728c0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> (32 + 26));
label_2728c4:
    // 0x2728c4: 0xec70  tge         $zero, $zero, 945
    ctx->pc = 0x2728c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2728c8:
    // 0x2728c8: 0x0  nop
    ctx->pc = 0x2728c8u;
    // NOP
label_2728cc:
    // 0x2728cc: 0x0  nop
    ctx->pc = 0x2728ccu;
    // NOP
label_2728d0:
    // 0x2728d0: 0x8edd  .word       0x00008EDD                   # dmultu      $zero, $zero # 00008EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2728d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2728D0 raw=0x00008EDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2728d4:
    // 0x2728d4: 0x42d0  .word       0x000042D0                   # mfhi        $t0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2728d4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2728d8:
    // 0x2728d8: 0x0  nop
    ctx->pc = 0x2728d8u;
    // NOP
label_2728dc:
    // 0x2728dc: 0x0  nop
    ctx->pc = 0x2728dcu;
    // NOP
label_2728e0:
    // 0x2728e0: 0x8ee6  .word       0x00008EE6                   # xor         $s1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2728e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2728e4:
    // 0x2728e4: 0x32c0  sll         $a2, $zero, 11
    ctx->pc = 0x2728e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2728e8:
    // 0x2728e8: 0x0  nop
    ctx->pc = 0x2728e8u;
    // NOP
label_2728ec:
    // 0x2728ec: 0x0  nop
    ctx->pc = 0x2728ecu;
    // NOP
label_2728f0:
    // 0x2728f0: 0x8eed  .word       0x00008EED                   # daddu       $s1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2728f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2728f4:
    // 0x2728f4: 0x9300  sll         $s2, $zero, 12
    ctx->pc = 0x2728f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2728f8:
    // 0x2728f8: 0x0  nop
    ctx->pc = 0x2728f8u;
    // NOP
label_2728fc:
    // 0x2728fc: 0x0  nop
    ctx->pc = 0x2728fcu;
    // NOP
label_272900:
    // 0x272900: 0x8f00  sll         $s1, $zero, 28
    ctx->pc = 0x272900u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_272904:
    // 0x272904: 0x4c70  tge         $zero, $zero, 305
    ctx->pc = 0x272904u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272908:
    // 0x272908: 0x0  nop
    ctx->pc = 0x272908u;
    // NOP
label_27290c:
    // 0x27290c: 0x0  nop
    ctx->pc = 0x27290cu;
    // NOP
label_272910:
    // 0x272910: 0x8f0a  .word       0x00008F0A                   # movz        $s1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272910u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_272914:
    // 0x272914: 0xac60  .word       0x0000AC60                   # add         $s5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_272918:
    // 0x272918: 0x0  nop
    ctx->pc = 0x272918u;
    // NOP
label_27291c:
    // 0x27291c: 0x0  nop
    ctx->pc = 0x27291cu;
    // NOP
label_272920:
    // 0x272920: 0x8f20  .word       0x00008F20                   # add         $s1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272920u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_272924:
    // 0x272924: 0x57e0  .word       0x000057E0                   # add         $t2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_272928:
    // 0x272928: 0x0  nop
    ctx->pc = 0x272928u;
    // NOP
label_27292c:
    // 0x27292c: 0x0  nop
    ctx->pc = 0x27292cu;
    // NOP
label_272930:
    // 0x272930: 0x8f2b  .word       0x00008F2B                   # sltu        $s1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272930u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_272934:
    // 0x272934: 0xc880  sll         $t9, $zero, 2
    ctx->pc = 0x272934u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_272938:
    // 0x272938: 0x0  nop
    ctx->pc = 0x272938u;
    // NOP
label_27293c:
    // 0x27293c: 0x0  nop
    ctx->pc = 0x27293cu;
    // NOP
label_272940:
    // 0x272940: 0x8f45  .word       0x00008F45                   # INVALID     $zero, $zero, -0x70BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x272940 raw=0x00008F45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272944:
    // 0x272944: 0xbc70  tge         $zero, $zero, 753
    ctx->pc = 0x272944u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272948:
    // 0x272948: 0x0  nop
    ctx->pc = 0x272948u;
    // NOP
label_27294c:
    // 0x27294c: 0x0  nop
    ctx->pc = 0x27294cu;
    // NOP
label_272950:
    // 0x272950: 0x8f5d  .word       0x00008F5D                   # dmultu      $zero, $zero # 00008F40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x272950 raw=0x00008F5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272954:
    // 0x272954: 0x9c60  .word       0x00009C60                   # add         $s3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_272958:
    // 0x272958: 0x0  nop
    ctx->pc = 0x272958u;
    // NOP
label_27295c:
    // 0x27295c: 0x0  nop
    ctx->pc = 0x27295cu;
    // NOP
label_272960:
    // 0x272960: 0x8f71  tgeu        $zero, $zero, 573
    ctx->pc = 0x272960u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272964:
    // 0x272964: 0x97b0  tge         $zero, $zero, 606
    ctx->pc = 0x272964u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272968:
    // 0x272968: 0x0  nop
    ctx->pc = 0x272968u;
    // NOP
label_27296c:
    // 0x27296c: 0x0  nop
    ctx->pc = 0x27296cu;
    // NOP
label_272970:
    // 0x272970: 0x8f84  .word       0x00008F84                   # sllv        $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272970u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_272974:
    // 0x272974: 0x7b20  .word       0x00007B20                   # add         $t7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272974u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_272978:
    // 0x272978: 0x0  nop
    ctx->pc = 0x272978u;
    // NOP
label_27297c:
    // 0x27297c: 0x0  nop
    ctx->pc = 0x27297cu;
    // NOP
label_272980:
    // 0x272980: 0x8f94  .word       0x00008F94                   # dsllv       $s1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272980u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_272984:
    // 0x272984: 0x6a70  tge         $zero, $zero, 425
    ctx->pc = 0x272984u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272988:
    // 0x272988: 0x0  nop
    ctx->pc = 0x272988u;
    // NOP
label_27298c:
    // 0x27298c: 0x0  nop
    ctx->pc = 0x27298cu;
    // NOP
label_272990:
    // 0x272990: 0x8fa2  .word       0x00008FA2                   # neg         $s1, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272990u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_272994:
    // 0x272994: 0x6e40  sll         $t5, $zero, 25
    ctx->pc = 0x272994u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_272998:
    // 0x272998: 0x0  nop
    ctx->pc = 0x272998u;
    // NOP
label_27299c:
    // 0x27299c: 0x0  nop
    ctx->pc = 0x27299cu;
    // NOP
label_2729a0:
    // 0x2729a0: 0x8fb0  tge         $zero, $zero, 574
    ctx->pc = 0x2729a0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2729a4:
    // 0x2729a4: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2729a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2729a8:
    // 0x2729a8: 0x0  nop
    ctx->pc = 0x2729a8u;
    // NOP
label_2729ac:
    // 0x2729ac: 0x0  nop
    ctx->pc = 0x2729acu;
    // NOP
label_2729b0:
    // 0x2729b0: 0x8fbd  .word       0x00008FBD                   # INVALID     $zero, $zero, -0x7043 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2729b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2729B0 raw=0x00008FBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2729b4:
    // 0x2729b4: 0xa890  .word       0x0000A890                   # mfhi        $s5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2729b4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2729b8:
    // 0x2729b8: 0x0  nop
    ctx->pc = 0x2729b8u;
    // NOP
label_2729bc:
    // 0x2729bc: 0x0  nop
    ctx->pc = 0x2729bcu;
    // NOP
label_2729c0:
    // 0x2729c0: 0x8fd3  .word       0x00008FD3                   # mtlo        $zero # 00008FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2729c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2729c4:
    // 0x2729c4: 0x98a0  .word       0x000098A0                   # add         $s3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2729c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2729c8:
    // 0x2729c8: 0x0  nop
    ctx->pc = 0x2729c8u;
    // NOP
label_2729cc:
    // 0x2729cc: 0x0  nop
    ctx->pc = 0x2729ccu;
    // NOP
label_2729d0:
    // 0x2729d0: 0x8fe7  .word       0x00008FE7                   # not         $s1, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2729d0u;
    SET_GPR_U64(ctx, 17, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2729d4:
    // 0x2729d4: 0xabf0  tge         $zero, $zero, 687
    ctx->pc = 0x2729d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2729d8:
    // 0x2729d8: 0x0  nop
    ctx->pc = 0x2729d8u;
    // NOP
label_2729dc:
    // 0x2729dc: 0x0  nop
    ctx->pc = 0x2729dcu;
    // NOP
label_2729e0:
    // 0x2729e0: 0x8ffd  .word       0x00008FFD                   # INVALID     $zero, $zero, -0x7003 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2729e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2729E0 raw=0x00008FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2729e4:
    // 0x2729e4: 0x8300  sll         $s0, $zero, 12
    ctx->pc = 0x2729e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_2729e8:
    // 0x2729e8: 0x0  nop
    ctx->pc = 0x2729e8u;
    // NOP
label_2729ec:
    // 0x2729ec: 0x0  nop
    ctx->pc = 0x2729ecu;
    // NOP
label_2729f0:
    // 0x2729f0: 0x900e  .word       0x0000900E                   # INVALID     $zero, $zero, -0x6FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2729f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2729F0 raw=0x0000900E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2729f4:
    // 0x2729f4: 0x7fa0  .word       0x00007FA0                   # add         $t7, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2729f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2729f8:
    // 0x2729f8: 0x0  nop
    ctx->pc = 0x2729f8u;
    // NOP
label_2729fc:
    // 0x2729fc: 0x0  nop
    ctx->pc = 0x2729fcu;
    // NOP
label_272a00:
    // 0x272a00: 0x901e  ddiv        $s2, $zero, $zero
    ctx->pc = 0x272a00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x272A00 raw=0x0000901E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272a04:
    // 0x272a04: 0x7e30  tge         $zero, $zero, 504
    ctx->pc = 0x272a04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272a08:
    // 0x272a08: 0x0  nop
    ctx->pc = 0x272a08u;
    // NOP
label_272a0c:
    // 0x272a0c: 0x0  nop
    ctx->pc = 0x272a0cu;
    // NOP
label_272a10:
    // 0x272a10: 0x902e  dsub        $s2, $zero, $zero
    ctx->pc = 0x272a10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_272a14:
    // 0x272a14: 0x5170  tge         $zero, $zero, 325
    ctx->pc = 0x272a14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272a18:
    // 0x272a18: 0x0  nop
    ctx->pc = 0x272a18u;
    // NOP
label_272a1c:
    // 0x272a1c: 0x0  nop
    ctx->pc = 0x272a1cu;
    // NOP
label_272a20:
    // 0x272a20: 0x9039  .word       0x00009039                   # INVALID     $zero, $zero, -0x6FC7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272a20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x272A20 raw=0x00009039"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272a24:
    // 0x272a24: 0xb4d0  .word       0x0000B4D0                   # mfhi        $s6 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272a24u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_272a28:
    // 0x272a28: 0x0  nop
    ctx->pc = 0x272a28u;
    // NOP
label_272a2c:
    // 0x272a2c: 0x0  nop
    ctx->pc = 0x272a2cu;
    // NOP
label_272a30:
    // 0x272a30: 0x9050  .word       0x00009050                   # mfhi        $s2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272a30u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_272a34:
    // 0x272a34: 0x7830  tge         $zero, $zero, 480
    ctx->pc = 0x272a34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272a38:
    // 0x272a38: 0x0  nop
    ctx->pc = 0x272a38u;
    // NOP
label_272a3c:
    // 0x272a3c: 0x0  nop
    ctx->pc = 0x272a3cu;
    // NOP
label_272a40:
    // 0x272a40: 0x9060  .word       0x00009060                   # add         $s2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272a40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_272a44:
    // 0x272a44: 0x97e0  .word       0x000097E0                   # add         $s2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272a44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_272a48:
    // 0x272a48: 0x0  nop
    ctx->pc = 0x272a48u;
    // NOP
label_272a4c:
    // 0x272a4c: 0x0  nop
    ctx->pc = 0x272a4cu;
    // NOP
label_272a50:
    // 0x272a50: 0x9073  tltu        $zero, $zero, 577
    ctx->pc = 0x272a50u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272a54:
    // 0x272a54: 0xbfe0  .word       0x0000BFE0                   # add         $s7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272a54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_272a58:
    // 0x272a58: 0x0  nop
    ctx->pc = 0x272a58u;
    // NOP
label_272a5c:
    // 0x272a5c: 0x0  nop
    ctx->pc = 0x272a5cu;
    // NOP
label_272a60:
    // 0x272a60: 0x908b  .word       0x0000908B                   # movn        $s2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272a60u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_272a64:
    // 0x272a64: 0x6140  sll         $t4, $zero, 5
    ctx->pc = 0x272a64u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_272a68:
    // 0x272a68: 0x0  nop
    ctx->pc = 0x272a68u;
    // NOP
label_272a6c:
    // 0x272a6c: 0x0  nop
    ctx->pc = 0x272a6cu;
    // NOP
label_272a70:
    // 0x272a70: 0x9098  .word       0x00009098                   # mult        $s2, $zero, $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x272a70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_272a74:
    // 0x272a74: 0x7840  sll         $t7, $zero, 1
    ctx->pc = 0x272a74u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_272a78:
    // 0x272a78: 0x0  nop
    ctx->pc = 0x272a78u;
    // NOP
label_272a7c:
    // 0x272a7c: 0x0  nop
    ctx->pc = 0x272a7cu;
    // NOP
label_272a80:
    // 0x272a80: 0x90a8  .word       0x000090A8                   # mfsa        $s2 # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x272a80u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_272a84:
    // 0x272a84: 0x6df0  tge         $zero, $zero, 439
    ctx->pc = 0x272a84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272a88:
    // 0x272a88: 0x0  nop
    ctx->pc = 0x272a88u;
    // NOP
label_272a8c:
    // 0x272a8c: 0x0  nop
    ctx->pc = 0x272a8cu;
    // NOP
label_272a90:
    // 0x272a90: 0x90b6  tne         $zero, $zero, 578
    ctx->pc = 0x272a90u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272a94:
    // 0x272a94: 0x8ce0  .word       0x00008CE0                   # add         $s1, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272a94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_272a98:
    // 0x272a98: 0x0  nop
    ctx->pc = 0x272a98u;
    // NOP
label_272a9c:
    // 0x272a9c: 0x0  nop
    ctx->pc = 0x272a9cu;
    // NOP
label_272aa0:
    // 0x272aa0: 0x90c8  .word       0x000090C8                   # jr          $zero # 000090C0 <InstrIdType: CPU_SPECIAL>
label_272aa4:
    if (ctx->pc == 0x272AA4u) {
        ctx->pc = 0x272AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AA0u;
        // 0x272aa4: 0x6210  .word       0x00006210                   # mfhi        $t4 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x272AA8u;
        goto label_272aa8;
    }
    ctx->pc = 0x272AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x272AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AA0u;
        // 0x272aa4: 0x6210  .word       0x00006210                   # mfhi        $t4 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272AA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x272AA8u;
label_272aa8:
    // 0x272aa8: 0x0  nop
    ctx->pc = 0x272aa8u;
    // NOP
label_272aac:
    // 0x272aac: 0x0  nop
    ctx->pc = 0x272aacu;
    // NOP
label_272ab0:
    // 0x272ab0: 0x90d5  .word       0x000090D5                   # INVALID     $zero, $zero, -0x6F2B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272ab0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x272AB0 raw=0x000090D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272ab4:
    // 0x272ab4: 0x9f50  .word       0x00009F50                   # mfhi        $s3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272ab4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_272ab8:
    // 0x272ab8: 0x0  nop
    ctx->pc = 0x272ab8u;
    // NOP
label_272abc:
    // 0x272abc: 0x0  nop
    ctx->pc = 0x272abcu;
    // NOP
label_272ac0:
    // 0x272ac0: 0x90e9  .word       0x000090E9                   # mtsa        $zero # 000090C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x272ac0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_272ac4:
    // 0x272ac4: 0x98c0  sll         $s3, $zero, 3
    ctx->pc = 0x272ac4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_272ac8:
    // 0x272ac8: 0x0  nop
    ctx->pc = 0x272ac8u;
    // NOP
label_272acc:
    // 0x272acc: 0x0  nop
    ctx->pc = 0x272accu;
    // NOP
label_272ad0:
    // 0x272ad0: 0x90fd  .word       0x000090FD                   # INVALID     $zero, $zero, -0x6F03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272ad0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x272AD0 raw=0x000090FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272ad4:
    // 0x272ad4: 0xb150  .word       0x0000B150                   # mfhi        $s6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272ad4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_272ad8:
    // 0x272ad8: 0x0  nop
    ctx->pc = 0x272ad8u;
    // NOP
label_272adc:
    // 0x272adc: 0x0  nop
    ctx->pc = 0x272adcu;
    // NOP
label_272ae0:
    // 0x272ae0: 0x9114  .word       0x00009114                   # dsllv       $s2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272ae0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_272ae4:
    // 0x272ae4: 0xe960  .word       0x0000E960                   # add         $sp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272ae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_272ae8:
    // 0x272ae8: 0x0  nop
    ctx->pc = 0x272ae8u;
    // NOP
label_272aec:
    // 0x272aec: 0x0  nop
    ctx->pc = 0x272aecu;
    // NOP
label_272af0:
    // 0x272af0: 0x9132  tlt         $zero, $zero, 580
    ctx->pc = 0x272af0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272af4:
    // 0x272af4: 0xa4d0  .word       0x0000A4D0                   # mfhi        $s4 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272af4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_272af8:
    // 0x272af8: 0x0  nop
    ctx->pc = 0x272af8u;
    // NOP
label_272afc:
    // 0x272afc: 0x0  nop
    ctx->pc = 0x272afcu;
    // NOP
label_272b00:
    // 0x272b00: 0x9147  .word       0x00009147                   # srav        $s2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272b00u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_272b04:
    // 0x272b04: 0x7020  add         $t6, $zero, $zero
    ctx->pc = 0x272b04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_272b08:
    // 0x272b08: 0x0  nop
    ctx->pc = 0x272b08u;
    // NOP
label_272b0c:
    // 0x272b0c: 0x0  nop
    ctx->pc = 0x272b0cu;
    // NOP
label_272b10:
    // 0x272b10: 0x9156  .word       0x00009156                   # dsrlv       $s2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272b10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_272b14:
    // 0x272b14: 0x6590  .word       0x00006590                   # mfhi        $t4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272b14u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_272b18:
    // 0x272b18: 0x0  nop
    ctx->pc = 0x272b18u;
    // NOP
label_272b1c:
    // 0x272b1c: 0x0  nop
    ctx->pc = 0x272b1cu;
    // NOP
label_272b20:
    // 0x272b20: 0x9163  .word       0x00009163                   # negu        $s2, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272b20u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_272b24:
    // 0x272b24: 0xc430  tge         $zero, $zero, 784
    ctx->pc = 0x272b24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272b28:
    // 0x272b28: 0x0  nop
    ctx->pc = 0x272b28u;
    // NOP
label_272b2c:
    // 0x272b2c: 0x0  nop
    ctx->pc = 0x272b2cu;
    // NOP
label_272b30:
    // 0x272b30: 0x917c  dsll32      $s2, $zero, 5
    ctx->pc = 0x272b30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << (32 + 5));
label_272b34:
    // 0x272b34: 0xae00  sll         $s5, $zero, 24
    ctx->pc = 0x272b34u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_272b38:
    // 0x272b38: 0x0  nop
    ctx->pc = 0x272b38u;
    // NOP
label_272b3c:
    // 0x272b3c: 0x0  nop
    ctx->pc = 0x272b3cu;
    // NOP
label_272b40:
    // 0x272b40: 0x9192  .word       0x00009192                   # mflo        $s2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272b40u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_272b44:
    // 0x272b44: 0x7250  .word       0x00007250                   # mfhi        $t6 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272b44u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_272b48:
    // 0x272b48: 0x0  nop
    ctx->pc = 0x272b48u;
    // NOP
label_272b4c:
    // 0x272b4c: 0x0  nop
    ctx->pc = 0x272b4cu;
    // NOP
label_272b50:
    // 0x272b50: 0x91a1  .word       0x000091A1                   # addu        $s2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272b50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_272b54:
    // 0x272b54: 0xaf50  .word       0x0000AF50                   # mfhi        $s5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272b54u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_272b58:
    // 0x272b58: 0x0  nop
    ctx->pc = 0x272b58u;
    // NOP
label_272b5c:
    // 0x272b5c: 0x0  nop
    ctx->pc = 0x272b5cu;
    // NOP
label_272b60:
    // 0x272b60: 0x91b7  .word       0x000091B7                   # INVALID     $zero, $zero, -0x6E49 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272b60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x272B60 raw=0x000091B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272b64:
    // 0x272b64: 0xa300  sll         $s4, $zero, 12
    ctx->pc = 0x272b64u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_272b68:
    // 0x272b68: 0x0  nop
    ctx->pc = 0x272b68u;
    // NOP
label_272b6c:
    // 0x272b6c: 0x0  nop
    ctx->pc = 0x272b6cu;
    // NOP
label_272b70:
    // 0x272b70: 0x91cc  syscall     583
    ctx->pc = 0x272b70u;
    ctx->pc = 0x272B74u;
runtime->handleSyscall(rdram, ctx, 0x247u);
label_272b74:
    // 0x272b74: 0x97e0  .word       0x000097E0                   # add         $s2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272b74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_272b78:
    // 0x272b78: 0x0  nop
    ctx->pc = 0x272b78u;
    // NOP
label_272b7c:
    // 0x272b7c: 0x0  nop
    ctx->pc = 0x272b7cu;
    // NOP
label_272b80:
    // 0x272b80: 0x91df  .word       0x000091DF                   # ddivu       $s2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272b80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x272B80 raw=0x000091DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272b84:
    // 0x272b84: 0x69f0  tge         $zero, $zero, 423
    ctx->pc = 0x272b84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272b88:
    // 0x272b88: 0x0  nop
    ctx->pc = 0x272b88u;
    // NOP
label_272b8c:
    // 0x272b8c: 0x0  nop
    ctx->pc = 0x272b8cu;
    // NOP
label_272b90:
    // 0x272b90: 0x91ed  .word       0x000091ED                   # daddu       $s2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272b90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272b94:
    // 0x272b94: 0x9300  sll         $s2, $zero, 12
    ctx->pc = 0x272b94u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_272b98:
    // 0x272b98: 0x0  nop
    ctx->pc = 0x272b98u;
    // NOP
label_272b9c:
    // 0x272b9c: 0x0  nop
    ctx->pc = 0x272b9cu;
    // NOP
label_272ba0:
    // 0x272ba0: 0x9200  sll         $s2, $zero, 8
    ctx->pc = 0x272ba0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_272ba4:
    // 0x272ba4: 0x9060  .word       0x00009060                   # add         $s2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272ba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_272ba8:
    // 0x272ba8: 0x0  nop
    ctx->pc = 0x272ba8u;
    // NOP
label_272bac:
    // 0x272bac: 0x0  nop
    ctx->pc = 0x272bacu;
    // NOP
label_272bb0:
    // 0x272bb0: 0x9213  .word       0x00009213                   # mtlo        $zero # 00009200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272bb0u;
    ctx->lo = GPR_U64(ctx, 0);
label_272bb4:
    // 0x272bb4: 0x5c30  tge         $zero, $zero, 368
    ctx->pc = 0x272bb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272bb8:
    // 0x272bb8: 0x0  nop
    ctx->pc = 0x272bb8u;
    // NOP
label_272bbc:
    // 0x272bbc: 0x0  nop
    ctx->pc = 0x272bbcu;
    // NOP
label_272bc0:
    // 0x272bc0: 0x921f  .word       0x0000921F                   # ddivu       $s2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272bc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x272BC0 raw=0x0000921F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272bc4:
    // 0x272bc4: 0x80c0  sll         $s0, $zero, 3
    ctx->pc = 0x272bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_272bc8:
    // 0x272bc8: 0x0  nop
    ctx->pc = 0x272bc8u;
    // NOP
label_272bcc:
    // 0x272bcc: 0x0  nop
    ctx->pc = 0x272bccu;
    // NOP
label_272bd0:
    // 0x272bd0: 0x9230  tge         $zero, $zero, 584
    ctx->pc = 0x272bd0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272bd4:
    // 0x272bd4: 0xa300  sll         $s4, $zero, 12
    ctx->pc = 0x272bd4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_272bd8:
    // 0x272bd8: 0x0  nop
    ctx->pc = 0x272bd8u;
    // NOP
label_272bdc:
    // 0x272bdc: 0x0  nop
    ctx->pc = 0x272bdcu;
    // NOP
label_272be0:
    // 0x272be0: 0x9245  .word       0x00009245                   # INVALID     $zero, $zero, -0x6DBB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272be0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x272BE0 raw=0x00009245"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272be4:
    // 0x272be4: 0x49a0  .word       0x000049A0                   # add         $t1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272be4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_272be8:
    // 0x272be8: 0x0  nop
    ctx->pc = 0x272be8u;
    // NOP
label_272bec:
    // 0x272bec: 0x0  nop
    ctx->pc = 0x272becu;
    // NOP
label_272bf0:
    // 0x272bf0: 0x924f  .word       0x0000924F                   # sync # 00009000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272bf0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_272bf4:
    // 0x272bf4: 0x7150  .word       0x00007150                   # mfhi        $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272bf4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_272bf8:
    // 0x272bf8: 0x0  nop
    ctx->pc = 0x272bf8u;
    // NOP
label_272bfc:
    // 0x272bfc: 0x0  nop
    ctx->pc = 0x272bfcu;
    // NOP
label_272c00:
    // 0x272c00: 0x925e  .word       0x0000925E                   # ddiv        $s2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x272C00 raw=0x0000925E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272c04:
    // 0x272c04: 0x5710  .word       0x00005710                   # mfhi        $t2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c04u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_272c08:
    // 0x272c08: 0x0  nop
    ctx->pc = 0x272c08u;
    // NOP
label_272c0c:
    // 0x272c0c: 0x0  nop
    ctx->pc = 0x272c0cu;
    // NOP
label_272c10:
    // 0x272c10: 0x9269  .word       0x00009269                   # mtsa        $zero # 00009240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x272c10u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_272c14:
    // 0x272c14: 0x56c0  sll         $t2, $zero, 27
    ctx->pc = 0x272c14u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_272c18:
    // 0x272c18: 0x0  nop
    ctx->pc = 0x272c18u;
    // NOP
label_272c1c:
    // 0x272c1c: 0x0  nop
    ctx->pc = 0x272c1cu;
    // NOP
label_272c20:
    // 0x272c20: 0x9274  teq         $zero, $zero, 585
    ctx->pc = 0x272c20u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272c24:
    // 0x272c24: 0x8e30  tge         $zero, $zero, 568
    ctx->pc = 0x272c24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272c28:
    // 0x272c28: 0x0  nop
    ctx->pc = 0x272c28u;
    // NOP
label_272c2c:
    // 0x272c2c: 0x0  nop
    ctx->pc = 0x272c2cu;
    // NOP
label_272c30:
    // 0x272c30: 0x9286  .word       0x00009286                   # srlv        $s2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c30u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_272c34:
    // 0x272c34: 0xd150  .word       0x0000D150                   # mfhi        $k0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c34u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_272c38:
    // 0x272c38: 0x0  nop
    ctx->pc = 0x272c38u;
    // NOP
label_272c3c:
    // 0x272c3c: 0x0  nop
    ctx->pc = 0x272c3cu;
    // NOP
label_272c40:
    // 0x272c40: 0x92a1  .word       0x000092A1                   # addu        $s2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_272c44:
    // 0x272c44: 0xd430  tge         $zero, $zero, 848
    ctx->pc = 0x272c44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272c48:
    // 0x272c48: 0x0  nop
    ctx->pc = 0x272c48u;
    // NOP
label_272c4c:
    // 0x272c4c: 0x0  nop
    ctx->pc = 0x272c4cu;
    // NOP
label_272c50:
    // 0x272c50: 0x92bc  dsll32      $s2, $zero, 10
    ctx->pc = 0x272c50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << (32 + 10));
label_272c54:
    // 0x272c54: 0x53a0  .word       0x000053A0                   # add         $t2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_272c58:
    // 0x272c58: 0x0  nop
    ctx->pc = 0x272c58u;
    // NOP
label_272c5c:
    // 0x272c5c: 0x0  nop
    ctx->pc = 0x272c5cu;
    // NOP
label_272c60:
    // 0x272c60: 0x92c7  .word       0x000092C7                   # srav        $s2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c60u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_272c64:
    // 0x272c64: 0xd990  .word       0x0000D990                   # mfhi        $k1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c64u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_272c68:
    // 0x272c68: 0x0  nop
    ctx->pc = 0x272c68u;
    // NOP
label_272c6c:
    // 0x272c6c: 0x0  nop
    ctx->pc = 0x272c6cu;
    // NOP
label_272c70:
    // 0x272c70: 0x92e3  .word       0x000092E3                   # negu        $s2, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c70u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_272c74:
    // 0x272c74: 0x5e00  sll         $t3, $zero, 24
    ctx->pc = 0x272c74u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_272c78:
    // 0x272c78: 0x0  nop
    ctx->pc = 0x272c78u;
    // NOP
label_272c7c:
    // 0x272c7c: 0x0  nop
    ctx->pc = 0x272c7cu;
    // NOP
label_272c80:
    // 0x272c80: 0x92ef  .word       0x000092EF                   # dsubu       $s2, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_272c84:
    // 0x272c84: 0x8e10  .word       0x00008E10                   # mfhi        $s1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c84u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_272c88:
    // 0x272c88: 0x0  nop
    ctx->pc = 0x272c88u;
    // NOP
label_272c8c:
    // 0x272c8c: 0x0  nop
    ctx->pc = 0x272c8cu;
    // NOP
label_272c90:
    // 0x272c90: 0x9301  .word       0x00009301                   # INVALID     $zero, $zero, -0x6CFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x272C90 raw=0x00009301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272c94:
    // 0x272c94: 0xa690  .word       0x0000A690                   # mfhi        $s4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272c94u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_272c98:
    // 0x272c98: 0x0  nop
    ctx->pc = 0x272c98u;
    // NOP
label_272c9c:
    // 0x272c9c: 0x0  nop
    ctx->pc = 0x272c9cu;
    // NOP
label_272ca0:
    // 0x272ca0: 0x9316  .word       0x00009316                   # dsrlv       $s2, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272ca0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_272ca4:
    // 0x272ca4: 0xf4d0  .word       0x0000F4D0                   # mfhi        $fp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272ca4u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_272ca8:
    // 0x272ca8: 0x0  nop
    ctx->pc = 0x272ca8u;
    // NOP
label_272cac:
    // 0x272cac: 0x0  nop
    ctx->pc = 0x272cacu;
    // NOP
label_272cb0:
    // 0x272cb0: 0x9335  .word       0x00009335                   # INVALID     $zero, $zero, -0x6CCB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272cb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x272CB0 raw=0x00009335"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272cb4:
    // 0x272cb4: 0xc4e0  .word       0x0000C4E0                   # add         $t8, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272cb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_272cb8:
    // 0x272cb8: 0x0  nop
    ctx->pc = 0x272cb8u;
    // NOP
label_272cbc:
    // 0x272cbc: 0x0  nop
    ctx->pc = 0x272cbcu;
    // NOP
label_272cc0:
    // 0x272cc0: 0x934e  .word       0x0000934E                   # INVALID     $zero, $zero, -0x6CB2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272cc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x272CC0 raw=0x0000934E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272cc4:
    // 0x272cc4: 0xf5f0  tge         $zero, $zero, 983
    ctx->pc = 0x272cc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272cc8:
    // 0x272cc8: 0x0  nop
    ctx->pc = 0x272cc8u;
    // NOP
label_272ccc:
    // 0x272ccc: 0x0  nop
    ctx->pc = 0x272cccu;
    // NOP
label_272cd0:
    // 0x272cd0: 0x936d  .word       0x0000936D                   # daddu       $s2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272cd4:
    // 0x272cd4: 0x8300  sll         $s0, $zero, 12
    ctx->pc = 0x272cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_272cd8:
    // 0x272cd8: 0x0  nop
    ctx->pc = 0x272cd8u;
    // NOP
label_272cdc:
    // 0x272cdc: 0x0  nop
    ctx->pc = 0x272cdcu;
    // NOP
label_272ce0:
    // 0x272ce0: 0x937e  dsrl32      $s2, $zero, 13
    ctx->pc = 0x272ce0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> (32 + 13));
label_272ce4:
    // 0x272ce4: 0x9cc0  sll         $s3, $zero, 19
    ctx->pc = 0x272ce4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_272ce8:
    // 0x272ce8: 0x0  nop
    ctx->pc = 0x272ce8u;
    // NOP
label_272cec:
    // 0x272cec: 0x0  nop
    ctx->pc = 0x272cecu;
    // NOP
label_272cf0:
    // 0x272cf0: 0x9392  .word       0x00009392                   # mflo        $s2 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272cf0u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_272cf4:
    // 0x272cf4: 0x45e0  .word       0x000045E0                   # add         $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272cf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_272cf8:
    // 0x272cf8: 0x0  nop
    ctx->pc = 0x272cf8u;
    // NOP
label_272cfc:
    // 0x272cfc: 0x0  nop
    ctx->pc = 0x272cfcu;
    // NOP
label_272d00:
    // 0x272d00: 0x939b  .word       0x0000939B                   # divu        $s2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d00u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_272d04:
    // 0x272d04: 0x9840  sll         $s3, $zero, 1
    ctx->pc = 0x272d04u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_272d08:
    // 0x272d08: 0x0  nop
    ctx->pc = 0x272d08u;
    // NOP
label_272d0c:
    // 0x272d0c: 0x0  nop
    ctx->pc = 0x272d0cu;
    // NOP
label_272d10:
    // 0x272d10: 0x93af  .word       0x000093AF                   # dsubu       $s2, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_272d14:
    // 0x272d14: 0xc510  .word       0x0000C510                   # mfhi        $t8 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d14u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_272d18:
    // 0x272d18: 0x0  nop
    ctx->pc = 0x272d18u;
    // NOP
label_272d1c:
    // 0x272d1c: 0x0  nop
    ctx->pc = 0x272d1cu;
    // NOP
label_272d20:
    // 0x272d20: 0x93c8  .word       0x000093C8                   # jr          $zero # 000093C0 <InstrIdType: CPU_SPECIAL>
label_272d24:
    if (ctx->pc == 0x272D24u) {
        ctx->pc = 0x272D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D20u;
        // 0x272d24: 0xb2f0  tge         $zero, $zero, 715 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272D28u;
        goto label_272d28;
    }
    ctx->pc = 0x272D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x272D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D20u;
        // 0x272d24: 0xb2f0  tge         $zero, $zero, 715 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272D20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x272D28u;
label_272d28:
    // 0x272d28: 0x0  nop
    ctx->pc = 0x272d28u;
    // NOP
label_272d2c:
    // 0x272d2c: 0x0  nop
    ctx->pc = 0x272d2cu;
    // NOP
label_272d30:
    // 0x272d30: 0x93df  .word       0x000093DF                   # ddivu       $s2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x272D30 raw=0x000093DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272d34:
    // 0x272d34: 0xb310  .word       0x0000B310                   # mfhi        $s6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d34u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_272d38:
    // 0x272d38: 0x0  nop
    ctx->pc = 0x272d38u;
    // NOP
label_272d3c:
    // 0x272d3c: 0x0  nop
    ctx->pc = 0x272d3cu;
    // NOP
label_272d40:
    // 0x272d40: 0x93f6  tne         $zero, $zero, 591
    ctx->pc = 0x272d40u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272d44:
    // 0x272d44: 0xa760  .word       0x0000A760                   # add         $s4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_272d48:
    // 0x272d48: 0x0  nop
    ctx->pc = 0x272d48u;
    // NOP
label_272d4c:
    // 0x272d4c: 0x0  nop
    ctx->pc = 0x272d4cu;
    // NOP
label_272d50:
    // 0x272d50: 0x940b  .word       0x0000940B                   # movn        $s2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d50u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_272d54:
    // 0x272d54: 0x6a40  sll         $t5, $zero, 9
    ctx->pc = 0x272d54u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_272d58:
    // 0x272d58: 0x0  nop
    ctx->pc = 0x272d58u;
    // NOP
label_272d5c:
    // 0x272d5c: 0x0  nop
    ctx->pc = 0x272d5cu;
    // NOP
label_272d60:
    // 0x272d60: 0x9419  .word       0x00009419                   # multu       $zero, $zero # 00009400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d60u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_272d64:
    // 0x272d64: 0x61e0  .word       0x000061E0                   # add         $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_272d68:
    // 0x272d68: 0x0  nop
    ctx->pc = 0x272d68u;
    // NOP
label_272d6c:
    // 0x272d6c: 0x0  nop
    ctx->pc = 0x272d6cu;
    // NOP
label_272d70:
    // 0x272d70: 0x9426  .word       0x00009426                   # xor         $s2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_272d74:
    // 0x272d74: 0x9e30  tge         $zero, $zero, 632
    ctx->pc = 0x272d74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272d78:
    // 0x272d78: 0x0  nop
    ctx->pc = 0x272d78u;
    // NOP
label_272d7c:
    // 0x272d7c: 0x0  nop
    ctx->pc = 0x272d7cu;
    // NOP
label_272d80:
    // 0x272d80: 0x943a  dsrl        $s2, $zero, 16
    ctx->pc = 0x272d80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) >> 16);
label_272d84:
    // 0x272d84: 0x51f0  tge         $zero, $zero, 327
    ctx->pc = 0x272d84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272d88:
    // 0x272d88: 0x0  nop
    ctx->pc = 0x272d88u;
    // NOP
label_272d8c:
    // 0x272d8c: 0x0  nop
    ctx->pc = 0x272d8cu;
    // NOP
label_272d90:
    // 0x272d90: 0x9445  .word       0x00009445                   # INVALID     $zero, $zero, -0x6BBB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x272d90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x272D90 raw=0x00009445"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_272d94:
    // 0x272d94: 0xe970  tge         $zero, $zero, 933
    ctx->pc = 0x272d94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_272d98:
    // 0x272d98: 0x0  nop
    ctx->pc = 0x272d98u;
    // NOP
label_272d9c:
    // 0x272d9c: 0x0  nop
    ctx->pc = 0x272d9cu;
    // NOP
    ctx->pc = 0x272da0u;
    return;
}

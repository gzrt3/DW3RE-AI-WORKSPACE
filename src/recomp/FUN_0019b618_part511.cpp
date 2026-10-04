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


void FUN_0019b618_part511(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x294678u: goto label_294678;
        case 0x29467cu: goto label_29467c;
        case 0x294680u: goto label_294680;
        case 0x294684u: goto label_294684;
        case 0x294688u: goto label_294688;
        case 0x29468cu: goto label_29468c;
        case 0x294690u: goto label_294690;
        case 0x294694u: goto label_294694;
        case 0x294698u: goto label_294698;
        case 0x29469cu: goto label_29469c;
        case 0x2946a0u: goto label_2946a0;
        case 0x2946a4u: goto label_2946a4;
        case 0x2946a8u: goto label_2946a8;
        case 0x2946acu: goto label_2946ac;
        case 0x2946b0u: goto label_2946b0;
        case 0x2946b4u: goto label_2946b4;
        case 0x2946b8u: goto label_2946b8;
        case 0x2946bcu: goto label_2946bc;
        case 0x2946c0u: goto label_2946c0;
        case 0x2946c4u: goto label_2946c4;
        case 0x2946c8u: goto label_2946c8;
        case 0x2946ccu: goto label_2946cc;
        case 0x2946d0u: goto label_2946d0;
        case 0x2946d4u: goto label_2946d4;
        case 0x2946d8u: goto label_2946d8;
        case 0x2946dcu: goto label_2946dc;
        case 0x2946e0u: goto label_2946e0;
        case 0x2946e4u: goto label_2946e4;
        case 0x2946e8u: goto label_2946e8;
        case 0x2946ecu: goto label_2946ec;
        case 0x2946f0u: goto label_2946f0;
        case 0x2946f4u: goto label_2946f4;
        case 0x2946f8u: goto label_2946f8;
        case 0x2946fcu: goto label_2946fc;
        case 0x294700u: goto label_294700;
        case 0x294704u: goto label_294704;
        case 0x294708u: goto label_294708;
        case 0x29470cu: goto label_29470c;
        case 0x294710u: goto label_294710;
        case 0x294714u: goto label_294714;
        case 0x294718u: goto label_294718;
        case 0x29471cu: goto label_29471c;
        case 0x294720u: goto label_294720;
        case 0x294724u: goto label_294724;
        case 0x294728u: goto label_294728;
        case 0x29472cu: goto label_29472c;
        case 0x294730u: goto label_294730;
        case 0x294734u: goto label_294734;
        case 0x294738u: goto label_294738;
        case 0x29473cu: goto label_29473c;
        case 0x294740u: goto label_294740;
        case 0x294744u: goto label_294744;
        case 0x294748u: goto label_294748;
        case 0x29474cu: goto label_29474c;
        case 0x294750u: goto label_294750;
        case 0x294754u: goto label_294754;
        case 0x294758u: goto label_294758;
        case 0x29475cu: goto label_29475c;
        case 0x294760u: goto label_294760;
        case 0x294764u: goto label_294764;
        case 0x294768u: goto label_294768;
        case 0x29476cu: goto label_29476c;
        case 0x294770u: goto label_294770;
        case 0x294774u: goto label_294774;
        case 0x294778u: goto label_294778;
        case 0x29477cu: goto label_29477c;
        case 0x294780u: goto label_294780;
        case 0x294784u: goto label_294784;
        case 0x294788u: goto label_294788;
        case 0x29478cu: goto label_29478c;
        case 0x294790u: goto label_294790;
        case 0x294794u: goto label_294794;
        case 0x294798u: goto label_294798;
        case 0x29479cu: goto label_29479c;
        case 0x2947a0u: goto label_2947a0;
        case 0x2947a4u: goto label_2947a4;
        case 0x2947a8u: goto label_2947a8;
        case 0x2947acu: goto label_2947ac;
        case 0x2947b0u: goto label_2947b0;
        case 0x2947b4u: goto label_2947b4;
        case 0x2947b8u: goto label_2947b8;
        case 0x2947bcu: goto label_2947bc;
        case 0x2947c0u: goto label_2947c0;
        case 0x2947c4u: goto label_2947c4;
        case 0x2947c8u: goto label_2947c8;
        case 0x2947ccu: goto label_2947cc;
        case 0x2947d0u: goto label_2947d0;
        case 0x2947d4u: goto label_2947d4;
        case 0x2947d8u: goto label_2947d8;
        case 0x2947dcu: goto label_2947dc;
        case 0x2947e0u: goto label_2947e0;
        case 0x2947e4u: goto label_2947e4;
        case 0x2947e8u: goto label_2947e8;
        case 0x2947ecu: goto label_2947ec;
        case 0x2947f0u: goto label_2947f0;
        case 0x2947f4u: goto label_2947f4;
        case 0x2947f8u: goto label_2947f8;
        case 0x2947fcu: goto label_2947fc;
        case 0x294800u: goto label_294800;
        case 0x294804u: goto label_294804;
        case 0x294808u: goto label_294808;
        case 0x29480cu: goto label_29480c;
        case 0x294810u: goto label_294810;
        case 0x294814u: goto label_294814;
        case 0x294818u: goto label_294818;
        case 0x29481cu: goto label_29481c;
        case 0x294820u: goto label_294820;
        case 0x294824u: goto label_294824;
        case 0x294828u: goto label_294828;
        case 0x29482cu: goto label_29482c;
        case 0x294830u: goto label_294830;
        case 0x294834u: goto label_294834;
        case 0x294838u: goto label_294838;
        case 0x29483cu: goto label_29483c;
        case 0x294840u: goto label_294840;
        case 0x294844u: goto label_294844;
        case 0x294848u: goto label_294848;
        case 0x29484cu: goto label_29484c;
        case 0x294850u: goto label_294850;
        case 0x294854u: goto label_294854;
        case 0x294858u: goto label_294858;
        case 0x29485cu: goto label_29485c;
        case 0x294860u: goto label_294860;
        case 0x294864u: goto label_294864;
        case 0x294868u: goto label_294868;
        case 0x29486cu: goto label_29486c;
        case 0x294870u: goto label_294870;
        case 0x294874u: goto label_294874;
        case 0x294878u: goto label_294878;
        case 0x29487cu: goto label_29487c;
        case 0x294880u: goto label_294880;
        case 0x294884u: goto label_294884;
        case 0x294888u: goto label_294888;
        case 0x29488cu: goto label_29488c;
        case 0x294890u: goto label_294890;
        case 0x294894u: goto label_294894;
        case 0x294898u: goto label_294898;
        case 0x29489cu: goto label_29489c;
        case 0x2948a0u: goto label_2948a0;
        case 0x2948a4u: goto label_2948a4;
        case 0x2948a8u: goto label_2948a8;
        case 0x2948acu: goto label_2948ac;
        case 0x2948b0u: goto label_2948b0;
        case 0x2948b4u: goto label_2948b4;
        case 0x2948b8u: goto label_2948b8;
        case 0x2948bcu: goto label_2948bc;
        case 0x2948c0u: goto label_2948c0;
        case 0x2948c4u: goto label_2948c4;
        case 0x2948c8u: goto label_2948c8;
        case 0x2948ccu: goto label_2948cc;
        case 0x2948d0u: goto label_2948d0;
        case 0x2948d4u: goto label_2948d4;
        case 0x2948d8u: goto label_2948d8;
        case 0x2948dcu: goto label_2948dc;
        case 0x2948e0u: goto label_2948e0;
        case 0x2948e4u: goto label_2948e4;
        case 0x2948e8u: goto label_2948e8;
        case 0x2948ecu: goto label_2948ec;
        case 0x2948f0u: goto label_2948f0;
        case 0x2948f4u: goto label_2948f4;
        case 0x2948f8u: goto label_2948f8;
        case 0x2948fcu: goto label_2948fc;
        case 0x294900u: goto label_294900;
        case 0x294904u: goto label_294904;
        case 0x294908u: goto label_294908;
        case 0x29490cu: goto label_29490c;
        case 0x294910u: goto label_294910;
        case 0x294914u: goto label_294914;
        case 0x294918u: goto label_294918;
        case 0x29491cu: goto label_29491c;
        case 0x294920u: goto label_294920;
        case 0x294924u: goto label_294924;
        case 0x294928u: goto label_294928;
        case 0x29492cu: goto label_29492c;
        case 0x294930u: goto label_294930;
        case 0x294934u: goto label_294934;
        case 0x294938u: goto label_294938;
        case 0x29493cu: goto label_29493c;
        case 0x294940u: goto label_294940;
        case 0x294944u: goto label_294944;
        case 0x294948u: goto label_294948;
        case 0x29494cu: goto label_29494c;
        case 0x294950u: goto label_294950;
        case 0x294954u: goto label_294954;
        case 0x294958u: goto label_294958;
        case 0x29495cu: goto label_29495c;
        case 0x294960u: goto label_294960;
        case 0x294964u: goto label_294964;
        case 0x294968u: goto label_294968;
        case 0x29496cu: goto label_29496c;
        case 0x294970u: goto label_294970;
        case 0x294974u: goto label_294974;
        case 0x294978u: goto label_294978;
        case 0x29497cu: goto label_29497c;
        case 0x294980u: goto label_294980;
        case 0x294984u: goto label_294984;
        case 0x294988u: goto label_294988;
        case 0x29498cu: goto label_29498c;
        case 0x294990u: goto label_294990;
        case 0x294994u: goto label_294994;
        case 0x294998u: goto label_294998;
        case 0x29499cu: goto label_29499c;
        case 0x2949a0u: goto label_2949a0;
        case 0x2949a4u: goto label_2949a4;
        case 0x2949a8u: goto label_2949a8;
        case 0x2949acu: goto label_2949ac;
        case 0x2949b0u: goto label_2949b0;
        case 0x2949b4u: goto label_2949b4;
        case 0x2949b8u: goto label_2949b8;
        case 0x2949bcu: goto label_2949bc;
        case 0x2949c0u: goto label_2949c0;
        case 0x2949c4u: goto label_2949c4;
        case 0x2949c8u: goto label_2949c8;
        case 0x2949ccu: goto label_2949cc;
        case 0x2949d0u: goto label_2949d0;
        case 0x2949d4u: goto label_2949d4;
        case 0x2949d8u: goto label_2949d8;
        case 0x2949dcu: goto label_2949dc;
        case 0x2949e0u: goto label_2949e0;
        case 0x2949e4u: goto label_2949e4;
        case 0x2949e8u: goto label_2949e8;
        case 0x2949ecu: goto label_2949ec;
        case 0x2949f0u: goto label_2949f0;
        case 0x2949f4u: goto label_2949f4;
        case 0x2949f8u: goto label_2949f8;
        case 0x2949fcu: goto label_2949fc;
        case 0x294a00u: goto label_294a00;
        case 0x294a04u: goto label_294a04;
        case 0x294a08u: goto label_294a08;
        case 0x294a0cu: goto label_294a0c;
        case 0x294a10u: goto label_294a10;
        case 0x294a14u: goto label_294a14;
        case 0x294a18u: goto label_294a18;
        case 0x294a1cu: goto label_294a1c;
        case 0x294a20u: goto label_294a20;
        case 0x294a24u: goto label_294a24;
        case 0x294a28u: goto label_294a28;
        case 0x294a2cu: goto label_294a2c;
        case 0x294a30u: goto label_294a30;
        case 0x294a34u: goto label_294a34;
        case 0x294a38u: goto label_294a38;
        case 0x294a3cu: goto label_294a3c;
        case 0x294a40u: goto label_294a40;
        case 0x294a44u: goto label_294a44;
        case 0x294a48u: goto label_294a48;
        case 0x294a4cu: goto label_294a4c;
        case 0x294a50u: goto label_294a50;
        case 0x294a54u: goto label_294a54;
        case 0x294a58u: goto label_294a58;
        case 0x294a5cu: goto label_294a5c;
        case 0x294a60u: goto label_294a60;
        case 0x294a64u: goto label_294a64;
        case 0x294a68u: goto label_294a68;
        case 0x294a6cu: goto label_294a6c;
        case 0x294a70u: goto label_294a70;
        case 0x294a74u: goto label_294a74;
        case 0x294a78u: goto label_294a78;
        case 0x294a7cu: goto label_294a7c;
        case 0x294a80u: goto label_294a80;
        case 0x294a84u: goto label_294a84;
        case 0x294a88u: goto label_294a88;
        case 0x294a8cu: goto label_294a8c;
        case 0x294a90u: goto label_294a90;
        case 0x294a94u: goto label_294a94;
        case 0x294a98u: goto label_294a98;
        case 0x294a9cu: goto label_294a9c;
        case 0x294aa0u: goto label_294aa0;
        case 0x294aa4u: goto label_294aa4;
        case 0x294aa8u: goto label_294aa8;
        case 0x294aacu: goto label_294aac;
        case 0x294ab0u: goto label_294ab0;
        case 0x294ab4u: goto label_294ab4;
        case 0x294ab8u: goto label_294ab8;
        case 0x294abcu: goto label_294abc;
        case 0x294ac0u: goto label_294ac0;
        case 0x294ac4u: goto label_294ac4;
        case 0x294ac8u: goto label_294ac8;
        case 0x294accu: goto label_294acc;
        case 0x294ad0u: goto label_294ad0;
        case 0x294ad4u: goto label_294ad4;
        case 0x294ad8u: goto label_294ad8;
        case 0x294adcu: goto label_294adc;
        case 0x294ae0u: goto label_294ae0;
        case 0x294ae4u: goto label_294ae4;
        case 0x294ae8u: goto label_294ae8;
        case 0x294aecu: goto label_294aec;
        case 0x294af0u: goto label_294af0;
        case 0x294af4u: goto label_294af4;
        case 0x294af8u: goto label_294af8;
        case 0x294afcu: goto label_294afc;
        case 0x294b00u: goto label_294b00;
        case 0x294b04u: goto label_294b04;
        case 0x294b08u: goto label_294b08;
        case 0x294b0cu: goto label_294b0c;
        case 0x294b10u: goto label_294b10;
        case 0x294b14u: goto label_294b14;
        case 0x294b18u: goto label_294b18;
        case 0x294b1cu: goto label_294b1c;
        case 0x294b20u: goto label_294b20;
        case 0x294b24u: goto label_294b24;
        case 0x294b28u: goto label_294b28;
        case 0x294b2cu: goto label_294b2c;
        case 0x294b30u: goto label_294b30;
        case 0x294b34u: goto label_294b34;
        case 0x294b38u: goto label_294b38;
        case 0x294b3cu: goto label_294b3c;
        case 0x294b40u: goto label_294b40;
        case 0x294b44u: goto label_294b44;
        case 0x294b48u: goto label_294b48;
        case 0x294b4cu: goto label_294b4c;
        case 0x294b50u: goto label_294b50;
        case 0x294b54u: goto label_294b54;
        case 0x294b58u: goto label_294b58;
        case 0x294b5cu: goto label_294b5c;
        case 0x294b60u: goto label_294b60;
        case 0x294b64u: goto label_294b64;
        case 0x294b68u: goto label_294b68;
        case 0x294b6cu: goto label_294b6c;
        case 0x294b70u: goto label_294b70;
        case 0x294b74u: goto label_294b74;
        case 0x294b78u: goto label_294b78;
        case 0x294b7cu: goto label_294b7c;
        case 0x294b80u: goto label_294b80;
        case 0x294b84u: goto label_294b84;
        case 0x294b88u: goto label_294b88;
        case 0x294b8cu: goto label_294b8c;
        case 0x294b90u: goto label_294b90;
        case 0x294b94u: goto label_294b94;
        case 0x294b98u: goto label_294b98;
        case 0x294b9cu: goto label_294b9c;
        case 0x294ba0u: goto label_294ba0;
        case 0x294ba4u: goto label_294ba4;
        case 0x294ba8u: goto label_294ba8;
        case 0x294bacu: goto label_294bac;
        case 0x294bb0u: goto label_294bb0;
        case 0x294bb4u: goto label_294bb4;
        case 0x294bb8u: goto label_294bb8;
        case 0x294bbcu: goto label_294bbc;
        case 0x294bc0u: goto label_294bc0;
        case 0x294bc4u: goto label_294bc4;
        case 0x294bc8u: goto label_294bc8;
        case 0x294bccu: goto label_294bcc;
        case 0x294bd0u: goto label_294bd0;
        case 0x294bd4u: goto label_294bd4;
        case 0x294bd8u: goto label_294bd8;
        case 0x294bdcu: goto label_294bdc;
        case 0x294be0u: goto label_294be0;
        case 0x294be4u: goto label_294be4;
        case 0x294be8u: goto label_294be8;
        case 0x294becu: goto label_294bec;
        case 0x294bf0u: goto label_294bf0;
        case 0x294bf4u: goto label_294bf4;
        case 0x294bf8u: goto label_294bf8;
        case 0x294bfcu: goto label_294bfc;
        case 0x294c00u: goto label_294c00;
        case 0x294c04u: goto label_294c04;
        case 0x294c08u: goto label_294c08;
        case 0x294c0cu: goto label_294c0c;
        case 0x294c10u: goto label_294c10;
        case 0x294c14u: goto label_294c14;
        case 0x294c18u: goto label_294c18;
        case 0x294c1cu: goto label_294c1c;
        case 0x294c20u: goto label_294c20;
        case 0x294c24u: goto label_294c24;
        case 0x294c28u: goto label_294c28;
        case 0x294c2cu: goto label_294c2c;
        case 0x294c30u: goto label_294c30;
        case 0x294c34u: goto label_294c34;
        case 0x294c38u: goto label_294c38;
        case 0x294c3cu: goto label_294c3c;
        case 0x294c40u: goto label_294c40;
        case 0x294c44u: goto label_294c44;
        case 0x294c48u: goto label_294c48;
        case 0x294c4cu: goto label_294c4c;
        case 0x294c50u: goto label_294c50;
        case 0x294c54u: goto label_294c54;
        case 0x294c58u: goto label_294c58;
        case 0x294c5cu: goto label_294c5c;
        case 0x294c60u: goto label_294c60;
        case 0x294c64u: goto label_294c64;
        case 0x294c68u: goto label_294c68;
        case 0x294c6cu: goto label_294c6c;
        case 0x294c70u: goto label_294c70;
        case 0x294c74u: goto label_294c74;
        case 0x294c78u: goto label_294c78;
        case 0x294c7cu: goto label_294c7c;
        case 0x294c80u: goto label_294c80;
        case 0x294c84u: goto label_294c84;
        case 0x294c88u: goto label_294c88;
        case 0x294c8cu: goto label_294c8c;
        case 0x294c90u: goto label_294c90;
        case 0x294c94u: goto label_294c94;
        case 0x294c98u: goto label_294c98;
        case 0x294c9cu: goto label_294c9c;
        case 0x294ca0u: goto label_294ca0;
        case 0x294ca4u: goto label_294ca4;
        case 0x294ca8u: goto label_294ca8;
        case 0x294cacu: goto label_294cac;
        case 0x294cb0u: goto label_294cb0;
        case 0x294cb4u: goto label_294cb4;
        case 0x294cb8u: goto label_294cb8;
        case 0x294cbcu: goto label_294cbc;
        case 0x294cc0u: goto label_294cc0;
        case 0x294cc4u: goto label_294cc4;
        case 0x294cc8u: goto label_294cc8;
        case 0x294cccu: goto label_294ccc;
        case 0x294cd0u: goto label_294cd0;
        case 0x294cd4u: goto label_294cd4;
        case 0x294cd8u: goto label_294cd8;
        case 0x294cdcu: goto label_294cdc;
        case 0x294ce0u: goto label_294ce0;
        case 0x294ce4u: goto label_294ce4;
        case 0x294ce8u: goto label_294ce8;
        case 0x294cecu: goto label_294cec;
        case 0x294cf0u: goto label_294cf0;
        case 0x294cf4u: goto label_294cf4;
        case 0x294cf8u: goto label_294cf8;
        case 0x294cfcu: goto label_294cfc;
        case 0x294d00u: goto label_294d00;
        case 0x294d04u: goto label_294d04;
        case 0x294d08u: goto label_294d08;
        case 0x294d0cu: goto label_294d0c;
        case 0x294d10u: goto label_294d10;
        case 0x294d14u: goto label_294d14;
        case 0x294d18u: goto label_294d18;
        case 0x294d1cu: goto label_294d1c;
        case 0x294d20u: goto label_294d20;
        case 0x294d24u: goto label_294d24;
        case 0x294d28u: goto label_294d28;
        case 0x294d2cu: goto label_294d2c;
        case 0x294d30u: goto label_294d30;
        case 0x294d34u: goto label_294d34;
        case 0x294d38u: goto label_294d38;
        case 0x294d3cu: goto label_294d3c;
        case 0x294d40u: goto label_294d40;
        case 0x294d44u: goto label_294d44;
        case 0x294d48u: goto label_294d48;
        case 0x294d4cu: goto label_294d4c;
        case 0x294d50u: goto label_294d50;
        case 0x294d54u: goto label_294d54;
        case 0x294d58u: goto label_294d58;
        case 0x294d5cu: goto label_294d5c;
        case 0x294d60u: goto label_294d60;
        case 0x294d64u: goto label_294d64;
        case 0x294d68u: goto label_294d68;
        case 0x294d6cu: goto label_294d6c;
        case 0x294d70u: goto label_294d70;
        case 0x294d74u: goto label_294d74;
        case 0x294d78u: goto label_294d78;
        case 0x294d7cu: goto label_294d7c;
        case 0x294d80u: goto label_294d80;
        case 0x294d84u: goto label_294d84;
        case 0x294d88u: goto label_294d88;
        case 0x294d8cu: goto label_294d8c;
        case 0x294d90u: goto label_294d90;
        case 0x294d94u: goto label_294d94;
        case 0x294d98u: goto label_294d98;
        case 0x294d9cu: goto label_294d9c;
        case 0x294da0u: goto label_294da0;
        case 0x294da4u: goto label_294da4;
        case 0x294da8u: goto label_294da8;
        case 0x294dacu: goto label_294dac;
        case 0x294db0u: goto label_294db0;
        case 0x294db4u: goto label_294db4;
        case 0x294db8u: goto label_294db8;
        case 0x294dbcu: goto label_294dbc;
        case 0x294dc0u: goto label_294dc0;
        case 0x294dc4u: goto label_294dc4;
        case 0x294dc8u: goto label_294dc8;
        case 0x294dccu: goto label_294dcc;
        case 0x294dd0u: goto label_294dd0;
        case 0x294dd4u: goto label_294dd4;
        case 0x294dd8u: goto label_294dd8;
        case 0x294ddcu: goto label_294ddc;
        case 0x294de0u: goto label_294de0;
        case 0x294de4u: goto label_294de4;
        case 0x294de8u: goto label_294de8;
        case 0x294decu: goto label_294dec;
        case 0x294df0u: goto label_294df0;
        case 0x294df4u: goto label_294df4;
        case 0x294df8u: goto label_294df8;
        case 0x294dfcu: goto label_294dfc;
        case 0x294e00u: goto label_294e00;
        case 0x294e04u: goto label_294e04;
        case 0x294e08u: goto label_294e08;
        case 0x294e0cu: goto label_294e0c;
        case 0x294e10u: goto label_294e10;
        case 0x294e14u: goto label_294e14;
        case 0x294e18u: goto label_294e18;
        case 0x294e1cu: goto label_294e1c;
        case 0x294e20u: goto label_294e20;
        case 0x294e24u: goto label_294e24;
        case 0x294e28u: goto label_294e28;
        case 0x294e2cu: goto label_294e2c;
        case 0x294e30u: goto label_294e30;
        case 0x294e34u: goto label_294e34;
        case 0x294e38u: goto label_294e38;
        case 0x294e3cu: goto label_294e3c;
        case 0x294e40u: goto label_294e40;
        case 0x294e44u: goto label_294e44;
        default: return;
    }

label_294678:
    // 0x294678: 0x16d0  .word       0x000016D0                   # mfhi        $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294678u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29467c:
    // 0x29467c: 0x0  nop
    ctx->pc = 0x29467cu;
    // NOP
label_294680:
    // 0x294680: 0x12c55  .word       0x00012C55                   # INVALID     $zero, $at, 0x2C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x294680 raw=0x00012C55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294684:
    // 0x294684: 0x187  .word       0x00000187                   # srav        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294684u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294688:
    // 0x294688: 0xc3120  .word       0x000C3120                   # add         $a2, $zero, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294688u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_29468c:
    // 0x29468c: 0x0  nop
    ctx->pc = 0x29468cu;
    // NOP
label_294690:
    // 0x294690: 0x12ddc  .word       0x00012DDC                   # dmult       $zero, $at # 00002DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x294690 raw=0x00012DDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294694:
    // 0x294694: 0xfe  dsrl32      $zero, $zero, 3
    ctx->pc = 0x294694u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 3));
label_294698:
    // 0x294698: 0x7e950  .word       0x0007E950                   # mfhi        $sp # 00070140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294698u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29469c:
    // 0x29469c: 0x0  nop
    ctx->pc = 0x29469cu;
    // NOP
label_2946a0:
    // 0x2946a0: 0x12eda  .word       0x00012EDA                   # div         $a1, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946a0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2946a4:
    // 0x2946a4: 0x1c7  .word       0x000001C7                   # srav        $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2946a8:
    // 0x2946a8: 0xe34cc  .word       0x000E34CC                   # syscall     211 # 000E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946a8u;
    ctx->pc = 0x2946ACu;
runtime->handleSyscall(rdram, ctx, 0x38D3u);
label_2946ac:
    // 0x2946ac: 0x0  nop
    ctx->pc = 0x2946acu;
    // NOP
label_2946b0:
    // 0x2946b0: 0x130a1  .word       0x000130A1                   # addu        $a2, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2946b4:
    // 0x2946b4: 0x1b9  .word       0x000001B9                   # INVALID     $zero, $zero, 0x1B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2946B4 raw=0x000001B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2946b8:
    // 0x2946b8: 0xdc21c  .word       0x000DC21C                   # dmult       $zero, $t5 # 0000C200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2946B8 raw=0x000DC21C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2946bc:
    // 0x2946bc: 0x0  nop
    ctx->pc = 0x2946bcu;
    // NOP
label_2946c0:
    // 0x2946c0: 0x1325a  .word       0x0001325A                   # div         $a2, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946c0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2946c4:
    // 0x2946c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2946C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2946c8:
    // 0x2946c8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2946cc:
    // 0x2946cc: 0x0  nop
    ctx->pc = 0x2946ccu;
    // NOP
label_2946d0:
    // 0x2946d0: 0x1325b  .word       0x0001325B                   # divu        $a2, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946d0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2946d4:
    // 0x2946d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2946D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2946d8:
    // 0x2946d8: 0x4c  syscall     1
    ctx->pc = 0x2946d8u;
    ctx->pc = 0x2946DCu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_2946dc:
    // 0x2946dc: 0x0  nop
    ctx->pc = 0x2946dcu;
    // NOP
label_2946e0:
    // 0x2946e0: 0x1325c  .word       0x0001325C                   # dmult       $zero, $at # 00003240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2946E0 raw=0x0001325C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2946e4:
    // 0x2946e4: 0x1ba  dsrl        $zero, $zero, 6
    ctx->pc = 0x2946e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 6);
label_2946e8:
    // 0x2946e8: 0xdcddc  .word       0x000DCDDC                   # dmult       $zero, $t5 # 0000CDC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2946E8 raw=0x000DCDDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2946ec:
    // 0x2946ec: 0x0  nop
    ctx->pc = 0x2946ecu;
    // NOP
label_2946f0:
    // 0x2946f0: 0x13416  .word       0x00013416                   # dsrlv       $a2, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2946f4:
    // 0x2946f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2946f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2946F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2946f8:
    // 0x2946f8: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x2946f8u;
    
label_2946fc:
    // 0x2946fc: 0x0  nop
    ctx->pc = 0x2946fcu;
    // NOP
label_294700:
    // 0x294700: 0x13417  .word       0x00013417                   # dsrav       $a2, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294700u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_294704:
    // 0x294704: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294704u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294708:
    // 0x294708: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294708u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29470c:
    // 0x29470c: 0x0  nop
    ctx->pc = 0x29470cu;
    // NOP
label_294710:
    // 0x294710: 0x13438  dsll        $a2, $at, 16
    ctx->pc = 0x294710u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) << 16);
label_294714:
    // 0x294714: 0x2d  daddu       $zero, $zero, $zero
    ctx->pc = 0x294714u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294718:
    // 0x294718: 0x16470  tge         $zero, $at, 401
    ctx->pc = 0x294718u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29471c:
    // 0x29471c: 0x0  nop
    ctx->pc = 0x29471cu;
    // NOP
label_294720:
    // 0x294720: 0x13465  .word       0x00013465                   # or          $a2, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_294724:
    // 0x294724: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x294724u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_294728:
    // 0x294728: 0x1290  .word       0x00001290                   # mfhi        $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294728u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29472c:
    // 0x29472c: 0x0  nop
    ctx->pc = 0x29472cu;
    // NOP
label_294730:
    // 0x294730: 0x13468  .word       0x00013468                   # mfsa        $a2 # 00010440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294730u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_294734:
    // 0x294734: 0x92  .word       0x00000092                   # mflo        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294734u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_294738:
    // 0x294738: 0x48df0  tge         $zero, $a0, 567
    ctx->pc = 0x294738u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_29473c:
    // 0x29473c: 0x0  nop
    ctx->pc = 0x29473cu;
    // NOP
label_294740:
    // 0x294740: 0x134fa  dsrl        $a2, $at, 19
    ctx->pc = 0x294740u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) >> 19);
label_294744:
    // 0x294744: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x294744u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294748:
    // 0x294748: 0x1adc0  sll         $s5, $at, 23
    ctx->pc = 0x294748u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 1), 23));
label_29474c:
    // 0x29474c: 0x0  nop
    ctx->pc = 0x29474cu;
    // NOP
label_294750:
    // 0x294750: 0x13530  tge         $zero, $at, 212
    ctx->pc = 0x294750u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294754:
    // 0x294754: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294754u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x294754 raw=0x0000004E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294758:
    // 0x294758: 0x26e30  tge         $zero, $v0, 440
    ctx->pc = 0x294758u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_29475c:
    // 0x29475c: 0x0  nop
    ctx->pc = 0x29475cu;
    // NOP
label_294760:
    // 0x294760: 0x1357e  dsrl32      $a2, $at, 21
    ctx->pc = 0x294760u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) >> (32 + 21));
label_294764:
    // 0x294764: 0x9e  .word       0x0000009E                   # ddiv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294764u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x294764 raw=0x0000009E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294768:
    // 0x294768: 0x4e840  sll         $sp, $a0, 1
    ctx->pc = 0x294768u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_29476c:
    // 0x29476c: 0x0  nop
    ctx->pc = 0x29476cu;
    // NOP
label_294770:
    // 0x294770: 0x1361c  .word       0x0001361C                   # dmult       $zero, $at # 00003600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294770u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x294770 raw=0x0001361C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294774:
    // 0x294774: 0x7e  dsrl32      $zero, $zero, 1
    ctx->pc = 0x294774u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 1));
label_294778:
    // 0x294778: 0x3eb30  tge         $zero, $v1, 940
    ctx->pc = 0x294778u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29477c:
    // 0x29477c: 0x0  nop
    ctx->pc = 0x29477cu;
    // NOP
label_294780:
    // 0x294780: 0x1369a  .word       0x0001369A                   # div         $a2, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294780u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_294784:
    // 0x294784: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294784u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294788:
    // 0x294788: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x294788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29478c:
    // 0x29478c: 0x0  nop
    ctx->pc = 0x29478cu;
    // NOP
label_294790:
    // 0x294790: 0x1369e  .word       0x0001369E                   # ddiv        $a2, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x294790 raw=0x0001369E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294794:
    // 0x294794: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294794u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294794 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294798:
    // 0x294798: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294798u;
    
label_29479c:
    // 0x29479c: 0x0  nop
    ctx->pc = 0x29479cu;
    // NOP
label_2947a0:
    // 0x2947a0: 0x1369f  .word       0x0001369F                   # ddivu       $a2, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2947a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2947A0 raw=0x0001369F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2947a4:
    // 0x2947a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2947a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2947A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2947a8:
    // 0x2947a8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x2947a8u;
    
label_2947ac:
    // 0x2947ac: 0x0  nop
    ctx->pc = 0x2947acu;
    // NOP
label_2947b0:
    // 0x2947b0: 0x136a0  .word       0x000136A0                   # add         $a2, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2947b0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2947b4:
    // 0x2947b4: 0x8  jr          $zero
label_2947b8:
    if (ctx->pc == 0x2947B8u) {
        ctx->pc = 0x2947B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2947B4u;
        // 0x2947b8: 0x3fd0  .word       0x00003FD0                   # mfhi        $a3 # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2947BCu;
        goto label_2947bc;
    }
    ctx->pc = 0x2947B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2947B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2947B4u;
        // 0x2947b8: 0x3fd0  .word       0x00003FD0                   # mfhi        $a3 # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2947B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2947BCu;
label_2947bc:
    // 0x2947bc: 0x0  nop
    ctx->pc = 0x2947bcu;
    // NOP
label_2947c0:
    // 0x2947c0: 0x136a8  .word       0x000136A8                   # mfsa        $a2 # 00010680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2947c0u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_2947c4:
    // 0x2947c4: 0x92  .word       0x00000092                   # mflo        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2947c4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2947c8:
    // 0x2947c8: 0x48d98  .word       0x00048D98                   # mult        $s1, $zero, $a0 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2947c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2947cc:
    // 0x2947cc: 0x0  nop
    ctx->pc = 0x2947ccu;
    // NOP
label_2947d0:
    // 0x2947d0: 0x1373a  dsrl        $a2, $at, 28
    ctx->pc = 0x2947d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) >> 28);
label_2947d4:
    // 0x2947d4: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2947d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2947D4 raw=0x00000079"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2947d8:
    // 0x2947d8: 0x3c330  tge         $zero, $v1, 780
    ctx->pc = 0x2947d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2947dc:
    // 0x2947dc: 0x0  nop
    ctx->pc = 0x2947dcu;
    // NOP
label_2947e0:
    // 0x2947e0: 0x137b3  tltu        $zero, $at, 222
    ctx->pc = 0x2947e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2947e4:
    // 0x2947e4: 0x8  jr          $zero
label_2947e8:
    if (ctx->pc == 0x2947E8u) {
        ctx->pc = 0x2947E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2947E4u;
        // 0x2947e8: 0x3940  sll         $a3, $zero, 5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2947ECu;
        goto label_2947ec;
    }
    ctx->pc = 0x2947E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2947E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2947E4u;
        // 0x2947e8: 0x3940  sll         $a3, $zero, 5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2947E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2947ECu;
label_2947ec:
    // 0x2947ec: 0x0  nop
    ctx->pc = 0x2947ecu;
    // NOP
label_2947f0:
    // 0x2947f0: 0x137bb  dsra        $a2, $at, 30
    ctx->pc = 0x2947f0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 1) >> 30);
label_2947f4:
    // 0x2947f4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2947f4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2947f8:
    // 0x2947f8: 0x1590  .word       0x00001590                   # mfhi        $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2947f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2947fc:
    // 0x2947fc: 0x0  nop
    ctx->pc = 0x2947fcu;
    // NOP
label_294800:
    // 0x294800: 0x137be  dsrl32      $a2, $at, 30
    ctx->pc = 0x294800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) >> (32 + 30));
label_294804:
    // 0x294804: 0x18c  syscall     6
    ctx->pc = 0x294804u;
    ctx->pc = 0x294808u;
runtime->handleSyscall(rdram, ctx, 0x6u);
label_294808:
    // 0x294808: 0xc5c60  .word       0x000C5C60                   # add         $t3, $zero, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294808u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_29480c:
    // 0x29480c: 0x0  nop
    ctx->pc = 0x29480cu;
    // NOP
label_294810:
    // 0x294810: 0x1394a  .word       0x0001394A                   # movz        $a3, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294810u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_294814:
    // 0x294814: 0xec  .word       0x000000EC                   # dadd        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294814u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_294818:
    // 0x294818: 0x75f90  .word       0x00075F90                   # mfhi        $t3 # 00070780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294818u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29481c:
    // 0x29481c: 0x0  nop
    ctx->pc = 0x29481cu;
    // NOP
label_294820:
    // 0x294820: 0x13a36  tne         $zero, $at, 232
    ctx->pc = 0x294820u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294824:
    // 0x294824: 0x238  dsll        $zero, $zero, 8
    ctx->pc = 0x294824u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 8);
label_294828:
    // 0x294828: 0x11bf8c  .word       0x0011BF8C                   # syscall     766 # 00110000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294828u;
    ctx->pc = 0x29482Cu;
runtime->handleSyscall(rdram, ctx, 0x46FEu);
label_29482c:
    // 0x29482c: 0x0  nop
    ctx->pc = 0x29482cu;
    // NOP
label_294830:
    // 0x294830: 0x13c6e  .word       0x00013C6E                   # dsub        $a3, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294830u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_294834:
    // 0x294834: 0x2d5  .word       0x000002D5                   # INVALID     $zero, $zero, 0x2D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294834u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x294834 raw=0x000002D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294838:
    // 0x294838: 0x16a4ec  .word       0x0016A4EC                   # dadd        $s4, $zero, $s6 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294838u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 22); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_29483c:
    // 0x29483c: 0x0  nop
    ctx->pc = 0x29483cu;
    // NOP
label_294840:
    // 0x294840: 0x13f43  sra         $a3, $at, 29
    ctx->pc = 0x294840u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 1), 29));
label_294844:
    // 0x294844: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294844u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294844 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294848:
    // 0x294848: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294848u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29484c:
    // 0x29484c: 0x0  nop
    ctx->pc = 0x29484cu;
    // NOP
label_294850:
    // 0x294850: 0x13f44  .word       0x00013F44                   # sllv        $a3, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294850u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_294854:
    // 0x294854: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294854u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294854 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294858:
    // 0x294858: 0x5b0  tge         $zero, $zero, 22
    ctx->pc = 0x294858u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29485c:
    // 0x29485c: 0x0  nop
    ctx->pc = 0x29485cu;
    // NOP
label_294860:
    // 0x294860: 0x13f45  .word       0x00013F45                   # INVALID     $zero, $at, 0x3F45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x294860 raw=0x00013F45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294864:
    // 0x294864: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294864u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294864 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294868:
    // 0x294868: 0x90  .word       0x00000090                   # mfhi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294868u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29486c:
    // 0x29486c: 0x0  nop
    ctx->pc = 0x29486cu;
    // NOP
label_294870:
    // 0x294870: 0x13f46  .word       0x00013F46                   # srlv        $a3, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294870u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_294874:
    // 0x294874: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294874u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294874 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294878:
    // 0x294878: 0x1e0  .word       0x000001E0                   # add         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294878u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29487c:
    // 0x29487c: 0x0  nop
    ctx->pc = 0x29487cu;
    // NOP
label_294880:
    // 0x294880: 0x13f47  .word       0x00013F47                   # srav        $a3, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294880u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_294884:
    // 0x294884: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294884u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294888:
    // 0x294888: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294888u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29488c:
    // 0x29488c: 0x0  nop
    ctx->pc = 0x29488cu;
    // NOP
label_294890:
    // 0x294890: 0x13f68  .word       0x00013F68                   # mfsa        $a3 # 00010740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294890u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_294894:
    // 0x294894: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x294894u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_294898:
    // 0x294898: 0x15190  .word       0x00015190                   # mfhi        $t2 # 00010180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294898u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_29489c:
    // 0x29489c: 0x0  nop
    ctx->pc = 0x29489cu;
    // NOP
label_2948a0:
    // 0x2948a0: 0x13f93  .word       0x00013F93                   # mtlo        $zero # 00013F80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2948a0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2948a4:
    // 0x2948a4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2948a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2948a8:
    // 0x2948a8: 0x1120  .word       0x00001120                   # add         $v0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2948a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2948ac:
    // 0x2948ac: 0x0  nop
    ctx->pc = 0x2948acu;
    // NOP
label_2948b0:
    // 0x2948b0: 0x13f96  .word       0x00013F96                   # dsrlv       $a3, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2948b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2948b4:
    // 0x2948b4: 0xfd  .word       0x000000FD                   # INVALID     $zero, $zero, 0xFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2948b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2948B4 raw=0x000000FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2948b8:
    // 0x2948b8: 0x7e800  sll         $sp, $a3, 0
    ctx->pc = 0x2948b8u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2948bc:
    // 0x2948bc: 0x0  nop
    ctx->pc = 0x2948bcu;
    // NOP
label_2948c0:
    // 0x2948c0: 0x14093  .word       0x00014093                   # mtlo        $zero # 00014080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2948c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2948c4:
    // 0x2948c4: 0xa9  .word       0x000000A9                   # mtsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2948c4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2948c8:
    // 0x2948c8: 0x543e4  .word       0x000543E4                   # and         $t0, $zero, $a1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2948c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 5));
label_2948cc:
    // 0x2948cc: 0x0  nop
    ctx->pc = 0x2948ccu;
    // NOP
label_2948d0:
    // 0x2948d0: 0x1413c  dsll32      $t0, $at, 4
    ctx->pc = 0x2948d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) << (32 + 4));
label_2948d4:
    // 0x2948d4: 0xbd  .word       0x000000BD                   # INVALID     $zero, $zero, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2948d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2948D4 raw=0x000000BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2948d8:
    // 0x2948d8: 0x5e250  .word       0x0005E250                   # mfhi        $gp # 00050240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2948d8u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_2948dc:
    // 0x2948dc: 0x0  nop
    ctx->pc = 0x2948dcu;
    // NOP
label_2948e0:
    // 0x2948e0: 0x141f9  .word       0x000141F9                   # INVALID     $zero, $at, 0x41F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2948e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2948E0 raw=0x000141F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2948e4:
    // 0x2948e4: 0x3e  dsrl32      $zero, $zero, 0
    ctx->pc = 0x2948e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 0));
label_2948e8:
    // 0x2948e8: 0x1eeb0  tge         $zero, $at, 954
    ctx->pc = 0x2948e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2948ec:
    // 0x2948ec: 0x0  nop
    ctx->pc = 0x2948ecu;
    // NOP
label_2948f0:
    // 0x2948f0: 0x14237  .word       0x00014237                   # INVALID     $zero, $at, 0x4237 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2948f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2948F0 raw=0x00014237"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2948f4:
    // 0x2948f4: 0x52  .word       0x00000052                   # mflo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2948f4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2948f8:
    // 0x2948f8: 0x28e30  tge         $zero, $v0, 568
    ctx->pc = 0x2948f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2948fc:
    // 0x2948fc: 0x0  nop
    ctx->pc = 0x2948fcu;
    // NOP
label_294900:
    // 0x294900: 0x14289  .word       0x00014289                   # jalr        $t0, $zero # 00010280 <InstrIdType: CPU_SPECIAL>
label_294904:
    if (ctx->pc == 0x294904u) {
        ctx->pc = 0x294904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294900u;
        // 0x294904: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294908u;
        goto label_294908;
    }
    ctx->pc = 0x294900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 8, 0x294908u);
        ctx->pc = 0x294904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294900u;
        // 0x294904: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294900u, 0x294908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294908u;
label_294908:
    // 0x294908: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x294908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_29490c:
    // 0x29490c: 0x0  nop
    ctx->pc = 0x29490cu;
    // NOP
label_294910:
    // 0x294910: 0x1428d  break       1, 266
    ctx->pc = 0x294910u;
    runtime->handleBreak(rdram, ctx);
label_294914:
    // 0x294914: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294914u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294914 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294918:
    // 0x294918: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294918u;
    
label_29491c:
    // 0x29491c: 0x0  nop
    ctx->pc = 0x29491cu;
    // NOP
label_294920:
    // 0x294920: 0x1428e  .word       0x0001428E                   # INVALID     $zero, $at, 0x428E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294920u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x294920 raw=0x0001428E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294924:
    // 0x294924: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x294924u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_294928:
    // 0x294928: 0xff0  tge         $zero, $zero, 63
    ctx->pc = 0x294928u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29492c:
    // 0x29492c: 0x0  nop
    ctx->pc = 0x29492cu;
    // NOP
label_294930:
    // 0x294930: 0x14290  .word       0x00014290                   # mfhi        $t0 # 00010280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294930u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_294934:
    // 0x294934: 0x156  .word       0x00000156                   # dsrlv       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294934u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_294938:
    // 0x294938: 0xaadd0  .word       0x000AADD0                   # mfhi        $s5 # 000A05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294938u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_29493c:
    // 0x29493c: 0x0  nop
    ctx->pc = 0x29493cu;
    // NOP
label_294940:
    // 0x294940: 0x143e6  .word       0x000143E6                   # xor         $t0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294940u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_294944:
    // 0x294944: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x294944u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294948:
    // 0x294948: 0x39520  .word       0x00039520                   # add         $s2, $zero, $v1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294948u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_29494c:
    // 0x29494c: 0x0  nop
    ctx->pc = 0x29494cu;
    // NOP
label_294950:
    // 0x294950: 0x14459  .word       0x00014459                   # multu       $zero, $at # 00004440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294950u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_294954:
    // 0x294954: 0xf3  tltu        $zero, $zero, 3
    ctx->pc = 0x294954u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294958:
    // 0x294958: 0x793e4  .word       0x000793E4                   # and         $s2, $zero, $a3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294958u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) & GPR_U64(ctx, 7));
label_29495c:
    // 0x29495c: 0x0  nop
    ctx->pc = 0x29495cu;
    // NOP
label_294960:
    // 0x294960: 0x1454c  .word       0x0001454C                   # syscall     277 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294960u;
    ctx->pc = 0x294964u;
runtime->handleSyscall(rdram, ctx, 0x515u);
label_294964:
    // 0x294964: 0xdb  .word       0x000000DB                   # divu        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294964u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_294968:
    // 0x294968: 0x6d528  .word       0x0006D528                   # mfsa        $k0 # 00060500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294968u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_29496c:
    // 0x29496c: 0x0  nop
    ctx->pc = 0x29496cu;
    // NOP
label_294970:
    // 0x294970: 0x14627  .word       0x00014627                   # nor         $t0, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294970u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_294974:
    // 0x294974: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294974u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294974 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294978:
    // 0x294978: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294978u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29497c:
    // 0x29497c: 0x0  nop
    ctx->pc = 0x29497cu;
    // NOP
label_294980:
    // 0x294980: 0x14628  .word       0x00014628                   # mfsa        $t0 # 00010600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294980u;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_294984:
    // 0x294984: 0xda  .word       0x000000DA                   # div         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294984u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_294988:
    // 0x294988: 0x6ccb0  tge         $zero, $a2, 818
    ctx->pc = 0x294988u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_29498c:
    // 0x29498c: 0x0  nop
    ctx->pc = 0x29498cu;
    // NOP
label_294990:
    // 0x294990: 0x14702  srl         $t0, $at, 28
    ctx->pc = 0x294990u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), 28));
label_294994:
    // 0x294994: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294994u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294994 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294998:
    // 0x294998: 0xf0  tge         $zero, $zero, 3
    ctx->pc = 0x294998u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29499c:
    // 0x29499c: 0x0  nop
    ctx->pc = 0x29499cu;
    // NOP
label_2949a0:
    // 0x2949a0: 0x14703  sra         $t0, $at, 28
    ctx->pc = 0x2949a0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), 28));
label_2949a4:
    // 0x2949a4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2949a4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2949a8:
    // 0x2949a8: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2949a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2949ac:
    // 0x2949ac: 0x0  nop
    ctx->pc = 0x2949acu;
    // NOP
label_2949b0:
    // 0x2949b0: 0x14724  .word       0x00014724                   # and         $t0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2949b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_2949b4:
    // 0x2949b4: 0x11  mthi        $zero
    ctx->pc = 0x2949b4u;
    ctx->hi = GPR_U64(ctx, 0);
label_2949b8:
    // 0x2949b8: 0x87d0  .word       0x000087D0                   # mfhi        $s0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2949b8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2949bc:
    // 0x2949bc: 0x0  nop
    ctx->pc = 0x2949bcu;
    // NOP
label_2949c0:
    // 0x2949c0: 0x14735  .word       0x00014735                   # INVALID     $zero, $at, 0x4735 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2949c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2949C0 raw=0x00014735"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2949c4:
    // 0x2949c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2949c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2949C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2949c8:
    // 0x2949c8: 0x788  .word       0x00000788                   # jr          $zero # 00000780 <InstrIdType: CPU_SPECIAL>
label_2949cc:
    if (ctx->pc == 0x2949CCu) {
        ctx->pc = 0x2949D0u;
        goto label_2949d0;
    }
    ctx->pc = 0x2949C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2949C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2949D0u;
label_2949d0:
    // 0x2949d0: 0x14736  tne         $zero, $at, 284
    ctx->pc = 0x2949d0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2949d4:
    // 0x2949d4: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2949d4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2949d8:
    // 0x2949d8: 0x33fc0  sll         $a3, $v1, 31
    ctx->pc = 0x2949d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 31));
label_2949dc:
    // 0x2949dc: 0x0  nop
    ctx->pc = 0x2949dcu;
    // NOP
label_2949e0:
    // 0x2949e0: 0x1479e  .word       0x0001479E                   # ddiv        $t0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2949e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2949E0 raw=0x0001479E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2949e4:
    // 0x2949e4: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x2949e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2949e8:
    // 0x2949e8: 0xb670  tge         $zero, $zero, 729
    ctx->pc = 0x2949e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2949ec:
    // 0x2949ec: 0x0  nop
    ctx->pc = 0x2949ecu;
    // NOP
label_2949f0:
    // 0x2949f0: 0x147b5  .word       0x000147B5                   # INVALID     $zero, $at, 0x47B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2949f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2949F0 raw=0x000147B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2949f4:
    // 0x2949f4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x2949f4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2949f8:
    // 0x2949f8: 0xd290  .word       0x0000D290                   # mfhi        $k0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2949f8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2949fc:
    // 0x2949fc: 0x0  nop
    ctx->pc = 0x2949fcu;
    // NOP
label_294a00:
    // 0x294a00: 0x147d0  .word       0x000147D0                   # mfhi        $t0 # 000107C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294a00u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_294a04:
    // 0x294a04: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x294a04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_294a08:
    // 0x294a08: 0x12e1c  .word       0x00012E1C                   # dmult       $zero, $at # 00002E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294a08u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x294A08 raw=0x00012E1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294a0c:
    // 0x294a0c: 0x0  nop
    ctx->pc = 0x294a0cu;
    // NOP
label_294a10:
    // 0x294a10: 0x147f6  tne         $zero, $at, 287
    ctx->pc = 0x294a10u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294a14:
    // 0x294a14: 0x25  move        $zero, $zero
    ctx->pc = 0x294a14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_294a18:
    // 0x294a18: 0x12490  .word       0x00012490                   # mfhi        $a0 # 00010480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294a18u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_294a1c:
    // 0x294a1c: 0x0  nop
    ctx->pc = 0x294a1cu;
    // NOP
label_294a20:
    // 0x294a20: 0x1481b  divu        $t1, $zero, $at
    ctx->pc = 0x294a20u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_294a24:
    // 0x294a24: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294a24u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294a28:
    // 0x294a28: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x294a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_294a2c:
    // 0x294a2c: 0x0  nop
    ctx->pc = 0x294a2cu;
    // NOP
label_294a30:
    // 0x294a30: 0x1481f  ddivu       $t1, $zero, $at
    ctx->pc = 0x294a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x294A30 raw=0x0001481F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294a34:
    // 0x294a34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294a34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294A34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294a38:
    // 0x294a38: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294a38u;
    
label_294a3c:
    // 0x294a3c: 0x0  nop
    ctx->pc = 0x294a3cu;
    // NOP
label_294a40:
    // 0x294a40: 0x14820  add         $t1, $zero, $at
    ctx->pc = 0x294a40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_294a44:
    // 0x294a44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294a44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294a48:
    // 0x294a48: 0x1c20  .word       0x00001C20                   # add         $v1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294a48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_294a4c:
    // 0x294a4c: 0x0  nop
    ctx->pc = 0x294a4cu;
    // NOP
label_294a50:
    // 0x294a50: 0x14824  and         $t1, $zero, $at
    ctx->pc = 0x294a50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_294a54:
    // 0x294a54: 0x8  jr          $zero
label_294a58:
    if (ctx->pc == 0x294A58u) {
        ctx->pc = 0x294A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A54u;
        // 0x294a58: 0x3bd8  .word       0x00003BD8                   # mult        $a3, $zero, $zero # 000003C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x294A5Cu;
        goto label_294a5c;
    }
    ctx->pc = 0x294A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x294A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294A54u;
        // 0x294a58: 0x3bd8  .word       0x00003BD8                   # mult        $a3, $zero, $zero # 000003C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294A54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x294A5Cu;
label_294a5c:
    // 0x294a5c: 0x0  nop
    ctx->pc = 0x294a5cu;
    // NOP
label_294a60:
    // 0x294a60: 0x1482c  dadd        $t1, $zero, $at
    ctx->pc = 0x294a60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_294a64:
    // 0x294a64: 0x10  mfhi        $zero
    ctx->pc = 0x294a64u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_294a68:
    // 0x294a68: 0x79f0  tge         $zero, $zero, 487
    ctx->pc = 0x294a68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294a6c:
    // 0x294a6c: 0x0  nop
    ctx->pc = 0x294a6cu;
    // NOP
label_294a70:
    // 0x294a70: 0x1483c  dsll32      $t1, $at, 0
    ctx->pc = 0x294a70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) << (32 + 0));
label_294a74:
    // 0x294a74: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x294a74u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_294a78:
    // 0x294a78: 0x12c0  sll         $v0, $zero, 11
    ctx->pc = 0x294a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_294a7c:
    // 0x294a7c: 0x0  nop
    ctx->pc = 0x294a7cu;
    // NOP
label_294a80:
    // 0x294a80: 0x1483f  dsra32      $t1, $at, 0
    ctx->pc = 0x294a80u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (32 + 0));
label_294a84:
    // 0x294a84: 0x180  sll         $zero, $zero, 6
    ctx->pc = 0x294a84u;
    
label_294a88:
    // 0x294a88: 0xbfec0  sll         $ra, $t3, 27
    ctx->pc = 0x294a88u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 11), 27));
label_294a8c:
    // 0x294a8c: 0x0  nop
    ctx->pc = 0x294a8cu;
    // NOP
label_294a90:
    // 0x294a90: 0x149bf  dsra32      $t1, $at, 6
    ctx->pc = 0x294a90u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (32 + 6));
label_294a94:
    // 0x294a94: 0xb8  dsll        $zero, $zero, 2
    ctx->pc = 0x294a94u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 2);
label_294a98:
    // 0x294a98: 0x5bfc0  sll         $s7, $a1, 31
    ctx->pc = 0x294a98u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 5), 31));
label_294a9c:
    // 0x294a9c: 0x0  nop
    ctx->pc = 0x294a9cu;
    // NOP
label_294aa0:
    // 0x294aa0: 0x14a77  .word       0x00014A77                   # INVALID     $zero, $at, 0x4A77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294aa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x294AA0 raw=0x00014A77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294aa4:
    // 0x294aa4: 0x172  tlt         $zero, $zero, 5
    ctx->pc = 0x294aa4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294aa8:
    // 0x294aa8: 0xb8f74  teq         $zero, $t3, 573
    ctx->pc = 0x294aa8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_294aac:
    // 0x294aac: 0x0  nop
    ctx->pc = 0x294aacu;
    // NOP
label_294ab0:
    // 0x294ab0: 0x14be9  .word       0x00014BE9                   # mtsa        $zero # 00014BC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294ab0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_294ab4:
    // 0x294ab4: 0x170  tge         $zero, $zero, 5
    ctx->pc = 0x294ab4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294ab8:
    // 0x294ab8: 0xb7fa4  .word       0x000B7FA4                   # and         $t7, $zero, $t3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ab8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) & GPR_U64(ctx, 11));
label_294abc:
    // 0x294abc: 0x0  nop
    ctx->pc = 0x294abcu;
    // NOP
label_294ac0:
    // 0x294ac0: 0x14d59  .word       0x00014D59                   # multu       $zero, $at # 00004D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ac0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_294ac4:
    // 0x294ac4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ac4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294AC4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ac8:
    // 0x294ac8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ac8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294acc:
    // 0x294acc: 0x0  nop
    ctx->pc = 0x294accu;
    // NOP
label_294ad0:
    // 0x294ad0: 0x14d5a  .word       0x00014D5A                   # div         $t1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ad0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_294ad4:
    // 0x294ad4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ad4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294AD4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ad8:
    // 0x294ad8: 0x4c  syscall     1
    ctx->pc = 0x294ad8u;
    ctx->pc = 0x294ADCu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_294adc:
    // 0x294adc: 0x0  nop
    ctx->pc = 0x294adcu;
    // NOP
label_294ae0:
    // 0x294ae0: 0x14d5b  .word       0x00014D5B                   # divu        $t1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ae0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_294ae4:
    // 0x294ae4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ae4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294AE4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ae8:
    // 0x294ae8: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x294ae8u;
    
label_294aec:
    // 0x294aec: 0x0  nop
    ctx->pc = 0x294aecu;
    // NOP
label_294af0:
    // 0x294af0: 0x14d5c  .word       0x00014D5C                   # dmult       $zero, $at # 00004D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294af0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x294AF0 raw=0x00014D5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294af4:
    // 0x294af4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294af4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294af8:
    // 0x294af8: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294af8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294afc:
    // 0x294afc: 0x0  nop
    ctx->pc = 0x294afcu;
    // NOP
label_294b00:
    // 0x294b00: 0x14d7d  .word       0x00014D7D                   # INVALID     $zero, $at, 0x4D7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x294B00 raw=0x00014D7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294b04:
    // 0x294b04: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x294b04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_294b08:
    // 0x294b08: 0x99b0  tge         $zero, $zero, 614
    ctx->pc = 0x294b08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_294b0c:
    // 0x294b0c: 0x0  nop
    ctx->pc = 0x294b0cu;
    // NOP
label_294b10:
    // 0x294b10: 0x14d91  .word       0x00014D91                   # mthi        $zero # 00014D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b10u;
    ctx->hi = GPR_U64(ctx, 0);
label_294b14:
    // 0x294b14: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x294b14u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_294b18:
    // 0x294b18: 0x848  .word       0x00000848                   # jr          $zero # 00000840 <InstrIdType: CPU_SPECIAL>
label_294b1c:
    if (ctx->pc == 0x294B1Cu) {
        ctx->pc = 0x294B20u;
        goto label_294b20;
    }
    ctx->pc = 0x294B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294B18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x294B20u;
label_294b20:
    // 0x294b20: 0x14d93  .word       0x00014D93                   # mtlo        $zero # 00014D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b20u;
    ctx->lo = GPR_U64(ctx, 0);
label_294b24:
    // 0x294b24: 0x81  .word       0x00000081                   # INVALID     $zero, $zero, 0x81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294B24 raw=0x00000081"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294b28:
    // 0x294b28: 0x403b0  tge         $zero, $a0, 14
    ctx->pc = 0x294b28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_294b2c:
    // 0x294b2c: 0x0  nop
    ctx->pc = 0x294b2cu;
    // NOP
label_294b30:
    // 0x294b30: 0x14e14  .word       0x00014E14                   # dsllv       $t1, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_294b34:
    // 0x294b34: 0x5d  .word       0x0000005D                   # dmultu      $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x294B34 raw=0x0000005D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294b38:
    // 0x294b38: 0x2e2b0  tge         $zero, $v0, 906
    ctx->pc = 0x294b38u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_294b3c:
    // 0x294b3c: 0x0  nop
    ctx->pc = 0x294b3cu;
    // NOP
label_294b40:
    // 0x294b40: 0x14e71  tgeu        $zero, $at, 313
    ctx->pc = 0x294b40u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294b44:
    // 0x294b44: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b44u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294b48:
    // 0x294b48: 0x23510  .word       0x00023510                   # mfhi        $a2 # 00020500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b48u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_294b4c:
    // 0x294b4c: 0x0  nop
    ctx->pc = 0x294b4cu;
    // NOP
label_294b50:
    // 0x294b50: 0x14eb8  dsll        $t1, $at, 26
    ctx->pc = 0x294b50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) << 26);
label_294b54:
    // 0x294b54: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x294b54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x294B54 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294b58:
    // 0x294b58: 0xf4d0  .word       0x0000F4D0                   # mfhi        $fp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b58u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_294b5c:
    // 0x294b5c: 0x0  nop
    ctx->pc = 0x294b5cu;
    // NOP
label_294b60:
    // 0x294b60: 0x14ed7  .word       0x00014ED7                   # dsrav       $t1, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b60u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_294b64:
    // 0x294b64: 0x29  mtsa        $zero
    ctx->pc = 0x294b64u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_294b68:
    // 0x294b68: 0x14610  .word       0x00014610                   # mfhi        $t0 # 00010600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b68u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_294b6c:
    // 0x294b6c: 0x0  nop
    ctx->pc = 0x294b6cu;
    // NOP
label_294b70:
    // 0x294b70: 0x14f00  sll         $t1, $at, 28
    ctx->pc = 0x294b70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 28));
label_294b74:
    // 0x294b74: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294b74u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294b78:
    // 0x294b78: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x294b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_294b7c:
    // 0x294b7c: 0x0  nop
    ctx->pc = 0x294b7cu;
    // NOP
label_294b80:
    // 0x294b80: 0x14f04  .word       0x00014F04                   # sllv        $t1, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_294b84:
    // 0x294b84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294B84 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294b88:
    // 0x294b88: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294b88u;
    
label_294b8c:
    // 0x294b8c: 0x0  nop
    ctx->pc = 0x294b8cu;
    // NOP
label_294b90:
    // 0x294b90: 0x14f05  .word       0x00014F05                   # INVALID     $zero, $at, 0x4F05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x294B90 raw=0x00014F05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294b94:
    // 0x294b94: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x294b94u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294b98:
    // 0x294b98: 0x2ad0  .word       0x00002AD0                   # mfhi        $a1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294b98u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_294b9c:
    // 0x294b9c: 0x0  nop
    ctx->pc = 0x294b9cu;
    // NOP
label_294ba0:
    // 0x294ba0: 0x14f0b  .word       0x00014F0B                   # movn        $t1, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ba0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_294ba4:
    // 0x294ba4: 0x18a  .word       0x0000018A                   # movz        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ba4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_294ba8:
    // 0x294ba8: 0xc4980  sll         $t1, $t4, 6
    ctx->pc = 0x294ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_294bac:
    // 0x294bac: 0x0  nop
    ctx->pc = 0x294bacu;
    // NOP
label_294bb0:
    // 0x294bb0: 0x15095  .word       0x00015095                   # INVALID     $zero, $at, 0x5095 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x294BB0 raw=0x00015095"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294bb4:
    // 0x294bb4: 0x327  .word       0x00000327                   # not         $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bb4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_294bb8:
    // 0x294bb8: 0x193490  .word       0x00193490                   # mfhi        $a2 # 00190480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bb8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_294bbc:
    // 0x294bbc: 0x0  nop
    ctx->pc = 0x294bbcu;
    // NOP
label_294bc0:
    // 0x294bc0: 0x153bc  dsll32      $t2, $at, 14
    ctx->pc = 0x294bc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 1) << (32 + 14));
label_294bc4:
    // 0x294bc4: 0x244  .word       0x00000244                   # sllv        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294bc8:
    // 0x294bc8: 0x121d2c  .word       0x00121D2C                   # dadd        $v1, $zero, $s2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bc8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_294bcc:
    // 0x294bcc: 0x0  nop
    ctx->pc = 0x294bccu;
    // NOP
label_294bd0:
    // 0x294bd0: 0x15600  sll         $t2, $at, 24
    ctx->pc = 0x294bd0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 1), 24));
label_294bd4:
    // 0x294bd4: 0x199  .word       0x00000199                   # multu       $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bd4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_294bd8:
    // 0x294bd8: 0xcc394  .word       0x000CC394                   # dsllv       $t8, $t4, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bd8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 12) << (GPR_U32(ctx, 0) & 0x3F));
label_294bdc:
    // 0x294bdc: 0x0  nop
    ctx->pc = 0x294bdcu;
    // NOP
label_294be0:
    // 0x294be0: 0x15799  .word       0x00015799                   # multu       $zero, $at # 00005780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294be0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_294be4:
    // 0x294be4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294be4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294BE4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294be8:
    // 0x294be8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294be8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294bec:
    // 0x294bec: 0x0  nop
    ctx->pc = 0x294becu;
    // NOP
label_294bf0:
    // 0x294bf0: 0x1579a  .word       0x0001579A                   # div         $t2, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bf0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_294bf4:
    // 0x294bf4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294bf4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294BF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294bf8:
    // 0x294bf8: 0x4c  syscall     1
    ctx->pc = 0x294bf8u;
    ctx->pc = 0x294BFCu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_294bfc:
    // 0x294bfc: 0x0  nop
    ctx->pc = 0x294bfcu;
    // NOP
label_294c00:
    // 0x294c00: 0x1579b  .word       0x0001579B                   # divu        $t2, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c00u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_294c04:
    // 0x294c04: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294C04 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294c08:
    // 0x294c08: 0x2d0  .word       0x000002D0                   # mfhi        $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c08u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_294c0c:
    // 0x294c0c: 0x0  nop
    ctx->pc = 0x294c0cu;
    // NOP
label_294c10:
    // 0x294c10: 0x1579c  .word       0x0001579C                   # dmult       $zero, $at # 00005780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x294C10 raw=0x0001579C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294c14:
    // 0x294c14: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294c14u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294c18:
    // 0x294c18: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294c1c:
    // 0x294c1c: 0x0  nop
    ctx->pc = 0x294c1cu;
    // NOP
label_294c20:
    // 0x294c20: 0x157bd  .word       0x000157BD                   # INVALID     $zero, $at, 0x57BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x294C20 raw=0x000157BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294c24:
    // 0x294c24: 0x42  srl         $zero, $zero, 1
    ctx->pc = 0x294c24u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_294c28:
    // 0x294c28: 0x20f10  .word       0x00020F10                   # mfhi        $at # 00020700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c28u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_294c2c:
    // 0x294c2c: 0x0  nop
    ctx->pc = 0x294c2cu;
    // NOP
label_294c30:
    // 0x294c30: 0x157ff  dsra32      $t2, $at, 31
    ctx->pc = 0x294c30u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 1) >> (32 + 31));
label_294c34:
    // 0x294c34: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x294c34u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_294c38:
    // 0x294c38: 0x1250  .word       0x00001250                   # mfhi        $v0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_294c3c:
    // 0x294c3c: 0x0  nop
    ctx->pc = 0x294c3cu;
    // NOP
label_294c40:
    // 0x294c40: 0x15802  srl         $t3, $at, 0
    ctx->pc = 0x294c40u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
label_294c44:
    // 0x294c44: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c44u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_294c48:
    // 0x294c48: 0x2abf0  tge         $zero, $v0, 687
    ctx->pc = 0x294c48u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_294c4c:
    // 0x294c4c: 0x0  nop
    ctx->pc = 0x294c4cu;
    // NOP
label_294c50:
    // 0x294c50: 0x15858  .word       0x00015858                   # mult        $t3, $zero, $at # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_294c54:
    // 0x294c54: 0x169  .word       0x00000169                   # mtsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294c54u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_294c58:
    // 0x294c58: 0xb4124  .word       0x000B4124                   # and         $t0, $zero, $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 11));
label_294c5c:
    // 0x294c5c: 0x0  nop
    ctx->pc = 0x294c5cu;
    // NOP
label_294c60:
    // 0x294c60: 0x159c1  .word       0x000159C1                   # INVALID     $zero, $at, 0x59C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294C60 raw=0x000159C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294c64:
    // 0x294c64: 0x107  .word       0x00000107                   # srav        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c64u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294c68:
    // 0x294c68: 0x832d0  .word       0x000832D0                   # mfhi        $a2 # 000802C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c68u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_294c6c:
    // 0x294c6c: 0x0  nop
    ctx->pc = 0x294c6cu;
    // NOP
label_294c70:
    // 0x294c70: 0x15ac8  .word       0x00015AC8                   # jr          $zero # 00015AC0 <InstrIdType: CPU_SPECIAL>
label_294c74:
    if (ctx->pc == 0x294C74u) {
        ctx->pc = 0x294C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C70u;
        // 0x294c74: 0x29  mtsa        $zero (Delay Slot)
        ctx->sa = GPR_U32(ctx, 0) & 0x7F;
        ctx->in_delay_slot = false;
        ctx->pc = 0x294C78u;
        goto label_294c78;
    }
    ctx->pc = 0x294C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x294C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294C70u;
        // 0x294c74: 0x29  mtsa        $zero (Delay Slot)
        ctx->sa = GPR_U32(ctx, 0) & 0x7F;
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294C70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x294C78u;
label_294c78:
    // 0x294c78: 0x141c0  sll         $t0, $at, 7
    ctx->pc = 0x294c78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 7));
label_294c7c:
    // 0x294c7c: 0x0  nop
    ctx->pc = 0x294c7cu;
    // NOP
label_294c80:
    // 0x294c80: 0x15af1  tgeu        $zero, $at, 363
    ctx->pc = 0x294c80u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294c84:
    // 0x294c84: 0x7e  dsrl32      $zero, $zero, 1
    ctx->pc = 0x294c84u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 1));
label_294c88:
    // 0x294c88: 0x3eac0  sll         $sp, $v1, 11
    ctx->pc = 0x294c88u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_294c8c:
    // 0x294c8c: 0x0  nop
    ctx->pc = 0x294c8cu;
    // NOP
label_294c90:
    // 0x294c90: 0x15b6f  .word       0x00015B6F                   # dsubu       $t3, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294c90u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_294c94:
    // 0x294c94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294c94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294c98:
    // 0x294c98: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x294c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_294c9c:
    // 0x294c9c: 0x0  nop
    ctx->pc = 0x294c9cu;
    // NOP
label_294ca0:
    // 0x294ca0: 0x15b73  tltu        $zero, $at, 365
    ctx->pc = 0x294ca0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294ca4:
    // 0x294ca4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ca4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294CA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294ca8:
    // 0x294ca8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294ca8u;
    
label_294cac:
    // 0x294cac: 0x0  nop
    ctx->pc = 0x294cacu;
    // NOP
label_294cb0:
    // 0x294cb0: 0x15b74  teq         $zero, $at, 365
    ctx->pc = 0x294cb0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294cb4:
    // 0x294cb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294cb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294CB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294cb8:
    // 0x294cb8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294cb8u;
    
label_294cbc:
    // 0x294cbc: 0x0  nop
    ctx->pc = 0x294cbcu;
    // NOP
label_294cc0:
    // 0x294cc0: 0x15b75  .word       0x00015B75                   # INVALID     $zero, $at, 0x5B75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294cc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x294CC0 raw=0x00015B75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294cc4:
    // 0x294cc4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294cc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294cc8:
    // 0x294cc8: 0x1950  .word       0x00001950                   # mfhi        $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294cc8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_294ccc:
    // 0x294ccc: 0x0  nop
    ctx->pc = 0x294cccu;
    // NOP
label_294cd0:
    // 0x294cd0: 0x15b79  .word       0x00015B79                   # INVALID     $zero, $at, 0x5B79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294cd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x294CD0 raw=0x00015B79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294cd4:
    // 0x294cd4: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294cd4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_294cd8:
    // 0x294cd8: 0xc7ae0  .word       0x000C7AE0                   # add         $t7, $zero, $t4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294cd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_294cdc:
    // 0x294cdc: 0x0  nop
    ctx->pc = 0x294cdcu;
    // NOP
label_294ce0:
    // 0x294ce0: 0x15d09  .word       0x00015D09                   # jalr        $t3, $zero # 00010500 <InstrIdType: CPU_SPECIAL>
label_294ce4:
    if (ctx->pc == 0x294CE4u) {
        ctx->pc = 0x294CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CE0u;
        // 0x294ce4: 0xee  .word       0x000000EE                   # dsub        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x294CE8u;
        goto label_294ce8;
    }
    ctx->pc = 0x294CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 11, 0x294CE8u);
        ctx->pc = 0x294CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CE0u;
        // 0x294ce4: 0xee  .word       0x000000EE                   # dsub        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294CE0u, 0x294CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294CE8u;
label_294ce8:
    // 0x294ce8: 0x76b60  .word       0x00076B60                   # add         $t5, $zero, $a3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294ce8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_294cec:
    // 0x294cec: 0x0  nop
    ctx->pc = 0x294cecu;
    // NOP
label_294cf0:
    // 0x294cf0: 0x15df7  .word       0x00015DF7                   # INVALID     $zero, $at, 0x5DF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294cf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x294CF0 raw=0x00015DF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294cf4:
    // 0x294cf4: 0x28d  break       0, 10
    ctx->pc = 0x294cf4u;
    runtime->handleBreak(rdram, ctx);
label_294cf8:
    // 0x294cf8: 0x14603c  dsll32      $t4, $s4, 0
    ctx->pc = 0x294cf8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 20) << (32 + 0));
label_294cfc:
    // 0x294cfc: 0x0  nop
    ctx->pc = 0x294cfcu;
    // NOP
label_294d00:
    // 0x294d00: 0x16084  .word       0x00016084                   # sllv        $t4, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d00u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_294d04:
    // 0x294d04: 0x3bc  dsll32      $zero, $zero, 14
    ctx->pc = 0x294d04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 14));
label_294d08:
    // 0x294d08: 0x1dddf8  dsll        $k1, $sp, 23
    ctx->pc = 0x294d08u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 29) << 23);
label_294d0c:
    // 0x294d0c: 0x0  nop
    ctx->pc = 0x294d0cu;
    // NOP
label_294d10:
    // 0x294d10: 0x16440  sll         $t4, $at, 17
    ctx->pc = 0x294d10u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_294d14:
    // 0x294d14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294D14 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294d18:
    // 0x294d18: 0x7c0  sll         $zero, $zero, 31
    ctx->pc = 0x294d18u;
    
label_294d1c:
    // 0x294d1c: 0x0  nop
    ctx->pc = 0x294d1cu;
    // NOP
label_294d20:
    // 0x294d20: 0x16441  .word       0x00016441                   # INVALID     $zero, $at, 0x6441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294D20 raw=0x00016441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294d24:
    // 0x294d24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294D24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294d28:
    // 0x294d28: 0x90  .word       0x00000090                   # mfhi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d28u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_294d2c:
    // 0x294d2c: 0x0  nop
    ctx->pc = 0x294d2cu;
    // NOP
label_294d30:
    // 0x294d30: 0x16442  srl         $t4, $at, 17
    ctx->pc = 0x294d30u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 1), 17));
label_294d34:
    // 0x294d34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294D34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294d38:
    // 0x294d38: 0x140  sll         $zero, $zero, 5
    ctx->pc = 0x294d38u;
    
label_294d3c:
    // 0x294d3c: 0x0  nop
    ctx->pc = 0x294d3cu;
    // NOP
label_294d40:
    // 0x294d40: 0x16443  sra         $t4, $at, 17
    ctx->pc = 0x294d40u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 1), 17));
label_294d44:
    // 0x294d44: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x294d44u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294d48:
    // 0x294d48: 0x10460  .word       0x00010460                   # add         $zero, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294d4c:
    // 0x294d4c: 0x0  nop
    ctx->pc = 0x294d4cu;
    // NOP
label_294d50:
    // 0x294d50: 0x16464  .word       0x00016464                   # and         $t4, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d50u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_294d54:
    // 0x294d54: 0x27  not         $zero, $zero
    ctx->pc = 0x294d54u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_294d58:
    // 0x294d58: 0x137e0  .word       0x000137E0                   # add         $a2, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_294d5c:
    // 0x294d5c: 0x0  nop
    ctx->pc = 0x294d5cu;
    // NOP
label_294d60:
    // 0x294d60: 0x1648b  .word       0x0001648B                   # movn        $t4, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d60u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_294d64:
    // 0x294d64: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x294d64u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_294d68:
    // 0x294d68: 0x1190  .word       0x00001190                   # mfhi        $v0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d68u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_294d6c:
    // 0x294d6c: 0x0  nop
    ctx->pc = 0x294d6cu;
    // NOP
label_294d70:
    // 0x294d70: 0x1648e  .word       0x0001648E                   # INVALID     $zero, $at, 0x648E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x294D70 raw=0x0001648E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294d74:
    // 0x294d74: 0x13b  dsra        $zero, $zero, 4
    ctx->pc = 0x294d74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 4);
label_294d78:
    // 0x294d78: 0x9d1d0  .word       0x0009D1D0                   # mfhi        $k0 # 000901C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294d78u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_294d7c:
    // 0x294d7c: 0x0  nop
    ctx->pc = 0x294d7cu;
    // NOP
label_294d80:
    // 0x294d80: 0x165c9  .word       0x000165C9                   # jalr        $t4, $zero # 000105C0 <InstrIdType: CPU_SPECIAL>
label_294d84:
    if (ctx->pc == 0x294D84u) {
        ctx->pc = 0x294D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D80u;
        // 0x294d84: 0x6a  .word       0x0000006A                   # slt         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x294D88u;
        goto label_294d88;
    }
    ctx->pc = 0x294D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 12, 0x294D88u);
        ctx->pc = 0x294D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D80u;
        // 0x294d84: 0x6a  .word       0x0000006A                   # slt         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294D80u, 0x294D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294D88u;
label_294d88:
    // 0x294d88: 0x34d80  sll         $t1, $v1, 22
    ctx->pc = 0x294d88u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 22));
label_294d8c:
    // 0x294d8c: 0x0  nop
    ctx->pc = 0x294d8cu;
    // NOP
label_294d90:
    // 0x294d90: 0x16633  tltu        $zero, $at, 408
    ctx->pc = 0x294d90u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294d94:
    // 0x294d94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x294d94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_294d98:
    // 0x294d98: 0x1900  sll         $v1, $zero, 4
    ctx->pc = 0x294d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_294d9c:
    // 0x294d9c: 0x0  nop
    ctx->pc = 0x294d9cu;
    // NOP
label_294da0:
    // 0x294da0: 0x16637  .word       0x00016637                   # INVALID     $zero, $at, 0x6637 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294da0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x294DA0 raw=0x00016637"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294da4:
    // 0x294da4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294da4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294DA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294da8:
    // 0x294da8: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x294da8u;
    
label_294dac:
    // 0x294dac: 0x0  nop
    ctx->pc = 0x294dacu;
    // NOP
label_294db0:
    // 0x294db0: 0x16638  dsll        $t4, $at, 24
    ctx->pc = 0x294db0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) << 24);
label_294db4:
    // 0x294db4: 0xd9  .word       0x000000D9                   # multu       $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294db4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_294db8:
    // 0x294db8: 0x6c4c8  .word       0x0006C4C8                   # jr          $zero # 0006C4C0 <InstrIdType: CPU_SPECIAL>
label_294dbc:
    if (ctx->pc == 0x294DBCu) {
        ctx->pc = 0x294DC0u;
        goto label_294dc0;
    }
    ctx->pc = 0x294DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294DB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x294DC0u;
label_294dc0:
    // 0x294dc0: 0x16711  .word       0x00016711                   # mthi        $zero # 00016700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294dc0u;
    ctx->hi = GPR_U64(ctx, 0);
label_294dc4:
    // 0x294dc4: 0xa1  .word       0x000000A1                   # addu        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294dc4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_294dc8:
    // 0x294dc8: 0x500b0  tge         $zero, $a1, 2
    ctx->pc = 0x294dc8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_294dcc:
    // 0x294dcc: 0x0  nop
    ctx->pc = 0x294dccu;
    // NOP
label_294dd0:
    // 0x294dd0: 0x167b2  tlt         $zero, $at, 414
    ctx->pc = 0x294dd0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294dd4:
    // 0x294dd4: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x294dd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_294dd8:
    // 0x294dd8: 0x2bbd0  .word       0x0002BBD0                   # mfhi        $s7 # 000203C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294dd8u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_294ddc:
    // 0x294ddc: 0x0  nop
    ctx->pc = 0x294ddcu;
    // NOP
label_294de0:
    // 0x294de0: 0x1680a  movz        $t5, $zero, $at
    ctx->pc = 0x294de0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_294de4:
    // 0x294de4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x294de4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_294de8:
    // 0x294de8: 0xa50  .word       0x00000A50                   # mfhi        $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294de8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_294dec:
    // 0x294dec: 0x0  nop
    ctx->pc = 0x294decu;
    // NOP
label_294df0:
    // 0x294df0: 0x1680c  .word       0x0001680C                   # syscall     416 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294df0u;
    ctx->pc = 0x294DF4u;
runtime->handleSyscall(rdram, ctx, 0x5A0u);
label_294df4:
    // 0x294df4: 0x10e  .word       0x0000010E                   # INVALID     $zero, $zero, 0x10E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294df4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x294DF4 raw=0x0000010E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294df8:
    // 0x294df8: 0x86820  add         $t5, $zero, $t0
    ctx->pc = 0x294df8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_294dfc:
    // 0x294dfc: 0x0  nop
    ctx->pc = 0x294dfcu;
    // NOP
label_294e00:
    // 0x294e00: 0x1691a  .word       0x0001691A                   # div         $t5, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e00u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_294e04:
    // 0x294e04: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x294E04 raw=0x00000039"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294e08:
    // 0x294e08: 0x1c730  tge         $zero, $at, 796
    ctx->pc = 0x294e08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294e0c:
    // 0x294e0c: 0x0  nop
    ctx->pc = 0x294e0cu;
    // NOP
label_294e10:
    // 0x294e10: 0x16953  .word       0x00016953                   # mtlo        $zero # 00016940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e10u;
    ctx->lo = GPR_U64(ctx, 0);
label_294e14:
    // 0x294e14: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e14u;
    ctx->hi = GPR_U64(ctx, 0);
label_294e18:
    // 0x294e18: 0x48044  .word       0x00048044                   # sllv        $s0, $a0, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e18u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 0) & 0x1F));
label_294e1c:
    // 0x294e1c: 0x0  nop
    ctx->pc = 0x294e1cu;
    // NOP
label_294e20:
    // 0x294e20: 0x169e4  .word       0x000169E4                   # and         $t5, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e20u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_294e24:
    // 0x294e24: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e24u;
    ctx->hi = GPR_U64(ctx, 0);
label_294e28:
    // 0x294e28: 0x48154  .word       0x00048154                   # dsllv       $s0, $a0, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (GPR_U32(ctx, 0) & 0x3F));
label_294e2c:
    // 0x294e2c: 0x0  nop
    ctx->pc = 0x294e2cu;
    // NOP
label_294e30:
    // 0x294e30: 0x16a75  .word       0x00016A75                   # INVALID     $zero, $at, 0x6A75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x294E30 raw=0x00016A75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294e34:
    // 0x294e34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294E34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_294e38:
    // 0x294e38: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_294e3c:
    // 0x294e3c: 0x0  nop
    ctx->pc = 0x294e3cu;
    // NOP
label_294e40:
    // 0x294e40: 0x16a76  tne         $zero, $at, 425
    ctx->pc = 0x294e40u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_294e44:
    // 0x294e44: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x294e44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x294E44 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x294e48u;
    return;
}

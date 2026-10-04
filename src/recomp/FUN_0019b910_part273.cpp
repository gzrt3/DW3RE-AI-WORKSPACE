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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part273(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x220610u: goto label_220610;
        case 0x220614u: goto label_220614;
        case 0x220618u: goto label_220618;
        case 0x22061cu: goto label_22061c;
        case 0x220620u: goto label_220620;
        case 0x220624u: goto label_220624;
        case 0x220628u: goto label_220628;
        case 0x22062cu: goto label_22062c;
        case 0x220630u: goto label_220630;
        case 0x220634u: goto label_220634;
        case 0x220638u: goto label_220638;
        case 0x22063cu: goto label_22063c;
        case 0x220640u: goto label_220640;
        case 0x220644u: goto label_220644;
        case 0x220648u: goto label_220648;
        case 0x22064cu: goto label_22064c;
        case 0x220650u: goto label_220650;
        case 0x220654u: goto label_220654;
        case 0x220658u: goto label_220658;
        case 0x22065cu: goto label_22065c;
        case 0x220660u: goto label_220660;
        case 0x220664u: goto label_220664;
        case 0x220668u: goto label_220668;
        case 0x22066cu: goto label_22066c;
        case 0x220670u: goto label_220670;
        case 0x220674u: goto label_220674;
        case 0x220678u: goto label_220678;
        case 0x22067cu: goto label_22067c;
        case 0x220680u: goto label_220680;
        case 0x220684u: goto label_220684;
        case 0x220688u: goto label_220688;
        case 0x22068cu: goto label_22068c;
        case 0x220690u: goto label_220690;
        case 0x220694u: goto label_220694;
        case 0x220698u: goto label_220698;
        case 0x22069cu: goto label_22069c;
        case 0x2206a0u: goto label_2206a0;
        case 0x2206a4u: goto label_2206a4;
        case 0x2206a8u: goto label_2206a8;
        case 0x2206acu: goto label_2206ac;
        case 0x2206b0u: goto label_2206b0;
        case 0x2206b4u: goto label_2206b4;
        case 0x2206b8u: goto label_2206b8;
        case 0x2206bcu: goto label_2206bc;
        case 0x2206c0u: goto label_2206c0;
        case 0x2206c4u: goto label_2206c4;
        case 0x2206c8u: goto label_2206c8;
        case 0x2206ccu: goto label_2206cc;
        case 0x2206d0u: goto label_2206d0;
        case 0x2206d4u: goto label_2206d4;
        case 0x2206d8u: goto label_2206d8;
        case 0x2206dcu: goto label_2206dc;
        case 0x2206e0u: goto label_2206e0;
        case 0x2206e4u: goto label_2206e4;
        case 0x2206e8u: goto label_2206e8;
        case 0x2206ecu: goto label_2206ec;
        case 0x2206f0u: goto label_2206f0;
        case 0x2206f4u: goto label_2206f4;
        case 0x2206f8u: goto label_2206f8;
        case 0x2206fcu: goto label_2206fc;
        case 0x220700u: goto label_220700;
        case 0x220704u: goto label_220704;
        case 0x220708u: goto label_220708;
        case 0x22070cu: goto label_22070c;
        case 0x220710u: goto label_220710;
        case 0x220714u: goto label_220714;
        case 0x220718u: goto label_220718;
        case 0x22071cu: goto label_22071c;
        case 0x220720u: goto label_220720;
        case 0x220724u: goto label_220724;
        case 0x220728u: goto label_220728;
        case 0x22072cu: goto label_22072c;
        case 0x220730u: goto label_220730;
        case 0x220734u: goto label_220734;
        case 0x220738u: goto label_220738;
        case 0x22073cu: goto label_22073c;
        case 0x220740u: goto label_220740;
        case 0x220744u: goto label_220744;
        case 0x220748u: goto label_220748;
        case 0x22074cu: goto label_22074c;
        case 0x220750u: goto label_220750;
        case 0x220754u: goto label_220754;
        case 0x220758u: goto label_220758;
        case 0x22075cu: goto label_22075c;
        case 0x220760u: goto label_220760;
        case 0x220764u: goto label_220764;
        case 0x220768u: goto label_220768;
        case 0x22076cu: goto label_22076c;
        case 0x220770u: goto label_220770;
        case 0x220774u: goto label_220774;
        case 0x220778u: goto label_220778;
        case 0x22077cu: goto label_22077c;
        case 0x220780u: goto label_220780;
        case 0x220784u: goto label_220784;
        case 0x220788u: goto label_220788;
        case 0x22078cu: goto label_22078c;
        case 0x220790u: goto label_220790;
        case 0x220794u: goto label_220794;
        case 0x220798u: goto label_220798;
        case 0x22079cu: goto label_22079c;
        case 0x2207a0u: goto label_2207a0;
        case 0x2207a4u: goto label_2207a4;
        case 0x2207a8u: goto label_2207a8;
        case 0x2207acu: goto label_2207ac;
        case 0x2207b0u: goto label_2207b0;
        case 0x2207b4u: goto label_2207b4;
        case 0x2207b8u: goto label_2207b8;
        case 0x2207bcu: goto label_2207bc;
        case 0x2207c0u: goto label_2207c0;
        case 0x2207c4u: goto label_2207c4;
        case 0x2207c8u: goto label_2207c8;
        case 0x2207ccu: goto label_2207cc;
        case 0x2207d0u: goto label_2207d0;
        case 0x2207d4u: goto label_2207d4;
        case 0x2207d8u: goto label_2207d8;
        case 0x2207dcu: goto label_2207dc;
        case 0x2207e0u: goto label_2207e0;
        case 0x2207e4u: goto label_2207e4;
        case 0x2207e8u: goto label_2207e8;
        case 0x2207ecu: goto label_2207ec;
        case 0x2207f0u: goto label_2207f0;
        case 0x2207f4u: goto label_2207f4;
        case 0x2207f8u: goto label_2207f8;
        case 0x2207fcu: goto label_2207fc;
        case 0x220800u: goto label_220800;
        case 0x220804u: goto label_220804;
        case 0x220808u: goto label_220808;
        case 0x22080cu: goto label_22080c;
        case 0x220810u: goto label_220810;
        case 0x220814u: goto label_220814;
        case 0x220818u: goto label_220818;
        case 0x22081cu: goto label_22081c;
        case 0x220820u: goto label_220820;
        case 0x220824u: goto label_220824;
        case 0x220828u: goto label_220828;
        case 0x22082cu: goto label_22082c;
        case 0x220830u: goto label_220830;
        case 0x220834u: goto label_220834;
        case 0x220838u: goto label_220838;
        case 0x22083cu: goto label_22083c;
        case 0x220840u: goto label_220840;
        case 0x220844u: goto label_220844;
        case 0x220848u: goto label_220848;
        case 0x22084cu: goto label_22084c;
        case 0x220850u: goto label_220850;
        case 0x220854u: goto label_220854;
        case 0x220858u: goto label_220858;
        case 0x22085cu: goto label_22085c;
        case 0x220860u: goto label_220860;
        case 0x220864u: goto label_220864;
        case 0x220868u: goto label_220868;
        case 0x22086cu: goto label_22086c;
        case 0x220870u: goto label_220870;
        case 0x220874u: goto label_220874;
        case 0x220878u: goto label_220878;
        case 0x22087cu: goto label_22087c;
        case 0x220880u: goto label_220880;
        case 0x220884u: goto label_220884;
        case 0x220888u: goto label_220888;
        case 0x22088cu: goto label_22088c;
        case 0x220890u: goto label_220890;
        case 0x220894u: goto label_220894;
        case 0x220898u: goto label_220898;
        case 0x22089cu: goto label_22089c;
        case 0x2208a0u: goto label_2208a0;
        case 0x2208a4u: goto label_2208a4;
        case 0x2208a8u: goto label_2208a8;
        case 0x2208acu: goto label_2208ac;
        case 0x2208b0u: goto label_2208b0;
        case 0x2208b4u: goto label_2208b4;
        case 0x2208b8u: goto label_2208b8;
        case 0x2208bcu: goto label_2208bc;
        case 0x2208c0u: goto label_2208c0;
        case 0x2208c4u: goto label_2208c4;
        case 0x2208c8u: goto label_2208c8;
        case 0x2208ccu: goto label_2208cc;
        case 0x2208d0u: goto label_2208d0;
        case 0x2208d4u: goto label_2208d4;
        case 0x2208d8u: goto label_2208d8;
        case 0x2208dcu: goto label_2208dc;
        case 0x2208e0u: goto label_2208e0;
        case 0x2208e4u: goto label_2208e4;
        case 0x2208e8u: goto label_2208e8;
        case 0x2208ecu: goto label_2208ec;
        case 0x2208f0u: goto label_2208f0;
        case 0x2208f4u: goto label_2208f4;
        case 0x2208f8u: goto label_2208f8;
        case 0x2208fcu: goto label_2208fc;
        case 0x220900u: goto label_220900;
        case 0x220904u: goto label_220904;
        case 0x220908u: goto label_220908;
        case 0x22090cu: goto label_22090c;
        case 0x220910u: goto label_220910;
        case 0x220914u: goto label_220914;
        case 0x220918u: goto label_220918;
        case 0x22091cu: goto label_22091c;
        case 0x220920u: goto label_220920;
        case 0x220924u: goto label_220924;
        case 0x220928u: goto label_220928;
        case 0x22092cu: goto label_22092c;
        case 0x220930u: goto label_220930;
        case 0x220934u: goto label_220934;
        case 0x220938u: goto label_220938;
        case 0x22093cu: goto label_22093c;
        case 0x220940u: goto label_220940;
        case 0x220944u: goto label_220944;
        case 0x220948u: goto label_220948;
        case 0x22094cu: goto label_22094c;
        case 0x220950u: goto label_220950;
        case 0x220954u: goto label_220954;
        case 0x220958u: goto label_220958;
        case 0x22095cu: goto label_22095c;
        case 0x220960u: goto label_220960;
        case 0x220964u: goto label_220964;
        case 0x220968u: goto label_220968;
        case 0x22096cu: goto label_22096c;
        case 0x220970u: goto label_220970;
        case 0x220974u: goto label_220974;
        case 0x220978u: goto label_220978;
        case 0x22097cu: goto label_22097c;
        case 0x220980u: goto label_220980;
        case 0x220984u: goto label_220984;
        case 0x220988u: goto label_220988;
        case 0x22098cu: goto label_22098c;
        case 0x220990u: goto label_220990;
        case 0x220994u: goto label_220994;
        case 0x220998u: goto label_220998;
        case 0x22099cu: goto label_22099c;
        case 0x2209a0u: goto label_2209a0;
        case 0x2209a4u: goto label_2209a4;
        case 0x2209a8u: goto label_2209a8;
        case 0x2209acu: goto label_2209ac;
        case 0x2209b0u: goto label_2209b0;
        case 0x2209b4u: goto label_2209b4;
        case 0x2209b8u: goto label_2209b8;
        case 0x2209bcu: goto label_2209bc;
        case 0x2209c0u: goto label_2209c0;
        case 0x2209c4u: goto label_2209c4;
        case 0x2209c8u: goto label_2209c8;
        case 0x2209ccu: goto label_2209cc;
        case 0x2209d0u: goto label_2209d0;
        case 0x2209d4u: goto label_2209d4;
        case 0x2209d8u: goto label_2209d8;
        case 0x2209dcu: goto label_2209dc;
        case 0x2209e0u: goto label_2209e0;
        case 0x2209e4u: goto label_2209e4;
        case 0x2209e8u: goto label_2209e8;
        case 0x2209ecu: goto label_2209ec;
        case 0x2209f0u: goto label_2209f0;
        case 0x2209f4u: goto label_2209f4;
        case 0x2209f8u: goto label_2209f8;
        case 0x2209fcu: goto label_2209fc;
        case 0x220a00u: goto label_220a00;
        case 0x220a04u: goto label_220a04;
        case 0x220a08u: goto label_220a08;
        case 0x220a0cu: goto label_220a0c;
        case 0x220a10u: goto label_220a10;
        case 0x220a14u: goto label_220a14;
        case 0x220a18u: goto label_220a18;
        case 0x220a1cu: goto label_220a1c;
        case 0x220a20u: goto label_220a20;
        case 0x220a24u: goto label_220a24;
        case 0x220a28u: goto label_220a28;
        case 0x220a2cu: goto label_220a2c;
        case 0x220a30u: goto label_220a30;
        case 0x220a34u: goto label_220a34;
        case 0x220a38u: goto label_220a38;
        case 0x220a3cu: goto label_220a3c;
        case 0x220a40u: goto label_220a40;
        case 0x220a44u: goto label_220a44;
        case 0x220a48u: goto label_220a48;
        case 0x220a4cu: goto label_220a4c;
        case 0x220a50u: goto label_220a50;
        case 0x220a54u: goto label_220a54;
        case 0x220a58u: goto label_220a58;
        case 0x220a5cu: goto label_220a5c;
        case 0x220a60u: goto label_220a60;
        case 0x220a64u: goto label_220a64;
        case 0x220a68u: goto label_220a68;
        case 0x220a6cu: goto label_220a6c;
        case 0x220a70u: goto label_220a70;
        case 0x220a74u: goto label_220a74;
        case 0x220a78u: goto label_220a78;
        case 0x220a7cu: goto label_220a7c;
        case 0x220a80u: goto label_220a80;
        case 0x220a84u: goto label_220a84;
        case 0x220a88u: goto label_220a88;
        case 0x220a8cu: goto label_220a8c;
        case 0x220a90u: goto label_220a90;
        case 0x220a94u: goto label_220a94;
        case 0x220a98u: goto label_220a98;
        case 0x220a9cu: goto label_220a9c;
        case 0x220aa0u: goto label_220aa0;
        case 0x220aa4u: goto label_220aa4;
        case 0x220aa8u: goto label_220aa8;
        case 0x220aacu: goto label_220aac;
        case 0x220ab0u: goto label_220ab0;
        case 0x220ab4u: goto label_220ab4;
        case 0x220ab8u: goto label_220ab8;
        case 0x220abcu: goto label_220abc;
        case 0x220ac0u: goto label_220ac0;
        case 0x220ac4u: goto label_220ac4;
        case 0x220ac8u: goto label_220ac8;
        case 0x220accu: goto label_220acc;
        case 0x220ad0u: goto label_220ad0;
        case 0x220ad4u: goto label_220ad4;
        case 0x220ad8u: goto label_220ad8;
        case 0x220adcu: goto label_220adc;
        case 0x220ae0u: goto label_220ae0;
        case 0x220ae4u: goto label_220ae4;
        case 0x220ae8u: goto label_220ae8;
        case 0x220aecu: goto label_220aec;
        case 0x220af0u: goto label_220af0;
        case 0x220af4u: goto label_220af4;
        case 0x220af8u: goto label_220af8;
        case 0x220afcu: goto label_220afc;
        case 0x220b00u: goto label_220b00;
        case 0x220b04u: goto label_220b04;
        case 0x220b08u: goto label_220b08;
        case 0x220b0cu: goto label_220b0c;
        case 0x220b10u: goto label_220b10;
        case 0x220b14u: goto label_220b14;
        case 0x220b18u: goto label_220b18;
        case 0x220b1cu: goto label_220b1c;
        case 0x220b20u: goto label_220b20;
        case 0x220b24u: goto label_220b24;
        case 0x220b28u: goto label_220b28;
        case 0x220b2cu: goto label_220b2c;
        case 0x220b30u: goto label_220b30;
        case 0x220b34u: goto label_220b34;
        case 0x220b38u: goto label_220b38;
        case 0x220b3cu: goto label_220b3c;
        case 0x220b40u: goto label_220b40;
        case 0x220b44u: goto label_220b44;
        case 0x220b48u: goto label_220b48;
        case 0x220b4cu: goto label_220b4c;
        case 0x220b50u: goto label_220b50;
        case 0x220b54u: goto label_220b54;
        case 0x220b58u: goto label_220b58;
        case 0x220b5cu: goto label_220b5c;
        case 0x220b60u: goto label_220b60;
        case 0x220b64u: goto label_220b64;
        case 0x220b68u: goto label_220b68;
        case 0x220b6cu: goto label_220b6c;
        case 0x220b70u: goto label_220b70;
        case 0x220b74u: goto label_220b74;
        case 0x220b78u: goto label_220b78;
        case 0x220b7cu: goto label_220b7c;
        case 0x220b80u: goto label_220b80;
        case 0x220b84u: goto label_220b84;
        case 0x220b88u: goto label_220b88;
        case 0x220b8cu: goto label_220b8c;
        case 0x220b90u: goto label_220b90;
        case 0x220b94u: goto label_220b94;
        case 0x220b98u: goto label_220b98;
        case 0x220b9cu: goto label_220b9c;
        case 0x220ba0u: goto label_220ba0;
        case 0x220ba4u: goto label_220ba4;
        case 0x220ba8u: goto label_220ba8;
        case 0x220bacu: goto label_220bac;
        case 0x220bb0u: goto label_220bb0;
        case 0x220bb4u: goto label_220bb4;
        case 0x220bb8u: goto label_220bb8;
        case 0x220bbcu: goto label_220bbc;
        case 0x220bc0u: goto label_220bc0;
        case 0x220bc4u: goto label_220bc4;
        case 0x220bc8u: goto label_220bc8;
        case 0x220bccu: goto label_220bcc;
        case 0x220bd0u: goto label_220bd0;
        case 0x220bd4u: goto label_220bd4;
        case 0x220bd8u: goto label_220bd8;
        case 0x220bdcu: goto label_220bdc;
        case 0x220be0u: goto label_220be0;
        case 0x220be4u: goto label_220be4;
        case 0x220be8u: goto label_220be8;
        case 0x220becu: goto label_220bec;
        case 0x220bf0u: goto label_220bf0;
        case 0x220bf4u: goto label_220bf4;
        case 0x220bf8u: goto label_220bf8;
        case 0x220bfcu: goto label_220bfc;
        case 0x220c00u: goto label_220c00;
        case 0x220c04u: goto label_220c04;
        case 0x220c08u: goto label_220c08;
        case 0x220c0cu: goto label_220c0c;
        case 0x220c10u: goto label_220c10;
        case 0x220c14u: goto label_220c14;
        case 0x220c18u: goto label_220c18;
        case 0x220c1cu: goto label_220c1c;
        case 0x220c20u: goto label_220c20;
        case 0x220c24u: goto label_220c24;
        case 0x220c28u: goto label_220c28;
        case 0x220c2cu: goto label_220c2c;
        case 0x220c30u: goto label_220c30;
        case 0x220c34u: goto label_220c34;
        case 0x220c38u: goto label_220c38;
        case 0x220c3cu: goto label_220c3c;
        case 0x220c40u: goto label_220c40;
        case 0x220c44u: goto label_220c44;
        case 0x220c48u: goto label_220c48;
        case 0x220c4cu: goto label_220c4c;
        case 0x220c50u: goto label_220c50;
        case 0x220c54u: goto label_220c54;
        case 0x220c58u: goto label_220c58;
        case 0x220c5cu: goto label_220c5c;
        case 0x220c60u: goto label_220c60;
        case 0x220c64u: goto label_220c64;
        case 0x220c68u: goto label_220c68;
        case 0x220c6cu: goto label_220c6c;
        case 0x220c70u: goto label_220c70;
        case 0x220c74u: goto label_220c74;
        case 0x220c78u: goto label_220c78;
        case 0x220c7cu: goto label_220c7c;
        case 0x220c80u: goto label_220c80;
        case 0x220c84u: goto label_220c84;
        case 0x220c88u: goto label_220c88;
        case 0x220c8cu: goto label_220c8c;
        case 0x220c90u: goto label_220c90;
        case 0x220c94u: goto label_220c94;
        case 0x220c98u: goto label_220c98;
        case 0x220c9cu: goto label_220c9c;
        case 0x220ca0u: goto label_220ca0;
        case 0x220ca4u: goto label_220ca4;
        case 0x220ca8u: goto label_220ca8;
        case 0x220cacu: goto label_220cac;
        case 0x220cb0u: goto label_220cb0;
        case 0x220cb4u: goto label_220cb4;
        case 0x220cb8u: goto label_220cb8;
        case 0x220cbcu: goto label_220cbc;
        case 0x220cc0u: goto label_220cc0;
        case 0x220cc4u: goto label_220cc4;
        case 0x220cc8u: goto label_220cc8;
        case 0x220cccu: goto label_220ccc;
        case 0x220cd0u: goto label_220cd0;
        case 0x220cd4u: goto label_220cd4;
        case 0x220cd8u: goto label_220cd8;
        case 0x220cdcu: goto label_220cdc;
        case 0x220ce0u: goto label_220ce0;
        case 0x220ce4u: goto label_220ce4;
        case 0x220ce8u: goto label_220ce8;
        case 0x220cecu: goto label_220cec;
        case 0x220cf0u: goto label_220cf0;
        case 0x220cf4u: goto label_220cf4;
        case 0x220cf8u: goto label_220cf8;
        case 0x220cfcu: goto label_220cfc;
        case 0x220d00u: goto label_220d00;
        case 0x220d04u: goto label_220d04;
        case 0x220d08u: goto label_220d08;
        case 0x220d0cu: goto label_220d0c;
        case 0x220d10u: goto label_220d10;
        case 0x220d14u: goto label_220d14;
        case 0x220d18u: goto label_220d18;
        case 0x220d1cu: goto label_220d1c;
        case 0x220d20u: goto label_220d20;
        case 0x220d24u: goto label_220d24;
        case 0x220d28u: goto label_220d28;
        case 0x220d2cu: goto label_220d2c;
        case 0x220d30u: goto label_220d30;
        case 0x220d34u: goto label_220d34;
        case 0x220d38u: goto label_220d38;
        case 0x220d3cu: goto label_220d3c;
        case 0x220d40u: goto label_220d40;
        case 0x220d44u: goto label_220d44;
        case 0x220d48u: goto label_220d48;
        case 0x220d4cu: goto label_220d4c;
        case 0x220d50u: goto label_220d50;
        case 0x220d54u: goto label_220d54;
        case 0x220d58u: goto label_220d58;
        case 0x220d5cu: goto label_220d5c;
        case 0x220d60u: goto label_220d60;
        case 0x220d64u: goto label_220d64;
        case 0x220d68u: goto label_220d68;
        case 0x220d6cu: goto label_220d6c;
        case 0x220d70u: goto label_220d70;
        case 0x220d74u: goto label_220d74;
        case 0x220d78u: goto label_220d78;
        case 0x220d7cu: goto label_220d7c;
        case 0x220d80u: goto label_220d80;
        case 0x220d84u: goto label_220d84;
        case 0x220d88u: goto label_220d88;
        case 0x220d8cu: goto label_220d8c;
        case 0x220d90u: goto label_220d90;
        case 0x220d94u: goto label_220d94;
        case 0x220d98u: goto label_220d98;
        case 0x220d9cu: goto label_220d9c;
        case 0x220da0u: goto label_220da0;
        case 0x220da4u: goto label_220da4;
        case 0x220da8u: goto label_220da8;
        case 0x220dacu: goto label_220dac;
        case 0x220db0u: goto label_220db0;
        case 0x220db4u: goto label_220db4;
        case 0x220db8u: goto label_220db8;
        case 0x220dbcu: goto label_220dbc;
        case 0x220dc0u: goto label_220dc0;
        case 0x220dc4u: goto label_220dc4;
        case 0x220dc8u: goto label_220dc8;
        case 0x220dccu: goto label_220dcc;
        case 0x220dd0u: goto label_220dd0;
        case 0x220dd4u: goto label_220dd4;
        case 0x220dd8u: goto label_220dd8;
        case 0x220ddcu: goto label_220ddc;
        default: return;
    }

label_220610:
    // 0x220610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x220610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220614:
    // 0x220614: 0x16430009  bne         $s2, $v1, . + 4 + (0x9 << 2)
label_220618:
    if (ctx->pc == 0x220618u) {
        ctx->pc = 0x220618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220614u;
        // 0x220618: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22061Cu;
        goto label_22061c;
    }
    ctx->pc = 0x220614u;
    {
        const bool branch_taken_0x220614 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x220618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220614u;
        // 0x220618: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220614) {
            ctx->pc = 0x22063Cu;
            goto label_22063c;
        }
    }
    ctx->pc = 0x22061Cu;
label_22061c:
    // 0x22061c: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x22061cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_220620:
    // 0x220620: 0xc0882f8  jal         func_220BE0
label_220624:
    if (ctx->pc == 0x220624u) {
        ctx->pc = 0x220624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220620u;
        // 0x220624: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220628u;
        goto label_220628;
    }
    ctx->pc = 0x220620u;
    SET_GPR_U32(ctx, 31, 0x220628u);
    ctx->pc = 0x220624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220620u;
    // 0x220624: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220628u;
label_220628:
    // 0x220628: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x220628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_22062c:
    // 0x22062c: 0xc0882f8  jal         func_220BE0
label_220630:
    if (ctx->pc == 0x220630u) {
        ctx->pc = 0x220630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22062Cu;
        // 0x220630: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220634u;
        goto label_220634;
    }
    ctx->pc = 0x22062Cu;
    SET_GPR_U32(ctx, 31, 0x220634u);
    ctx->pc = 0x220630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22062Cu;
    // 0x220630: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220634u;
label_220634:
    // 0x220634: 0x10000040  b           . + 4 + (0x40 << 2)
label_220638:
    if (ctx->pc == 0x220638u) {
        ctx->pc = 0x22063Cu;
        goto label_22063c;
    }
    ctx->pc = 0x220634u;
    {
        const bool branch_taken_0x220634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220634) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x22063Cu;
label_22063c:
    // 0x22063c: 0x1643003e  bne         $s2, $v1, . + 4 + (0x3E << 2)
label_220640:
    if (ctx->pc == 0x220640u) {
        ctx->pc = 0x220644u;
        goto label_220644;
    }
    ctx->pc = 0x22063Cu;
    {
        const bool branch_taken_0x22063c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x22063c) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x220644u;
label_220644:
    // 0x220644: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x220644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_220648:
    // 0x220648: 0xc0882f8  jal         func_220BE0
label_22064c:
    if (ctx->pc == 0x22064Cu) {
        ctx->pc = 0x22064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220648u;
        // 0x22064c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220650u;
        goto label_220650;
    }
    ctx->pc = 0x220648u;
    SET_GPR_U32(ctx, 31, 0x220650u);
    ctx->pc = 0x22064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220648u;
    // 0x22064c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220650u;
label_220650:
    // 0x220650: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x220650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_220654:
    // 0x220654: 0xc0882f8  jal         func_220BE0
label_220658:
    if (ctx->pc == 0x220658u) {
        ctx->pc = 0x220658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220654u;
        // 0x220658: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22065Cu;
        goto label_22065c;
    }
    ctx->pc = 0x220654u;
    SET_GPR_U32(ctx, 31, 0x22065Cu);
    ctx->pc = 0x220658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220654u;
    // 0x220658: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x22065Cu;
label_22065c:
    // 0x22065c: 0x10000036  b           . + 4 + (0x36 << 2)
label_220660:
    if (ctx->pc == 0x220660u) {
        ctx->pc = 0x220664u;
        goto label_220664;
    }
    ctx->pc = 0x22065Cu;
    {
        const bool branch_taken_0x22065c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22065c) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x220664u;
label_220664:
    // 0x220664: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x220664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220668:
    // 0x220668: 0x16430016  bne         $s2, $v1, . + 4 + (0x16 << 2)
label_22066c:
    if (ctx->pc == 0x22066Cu) {
        ctx->pc = 0x22066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220668u;
        // 0x22066c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220670u;
        goto label_220670;
    }
    ctx->pc = 0x220668u;
    {
        const bool branch_taken_0x220668 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x22066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220668u;
        // 0x22066c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220668) {
            ctx->pc = 0x2206C4u;
            goto label_2206c4;
        }
    }
    ctx->pc = 0x220670u;
label_220670:
    // 0x220670: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x220670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_220674:
    // 0x220674: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
label_220678:
    if (ctx->pc == 0x220678u) {
        ctx->pc = 0x220678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220674u;
        // 0x220678: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22067Cu;
        goto label_22067c;
    }
    ctx->pc = 0x220674u;
    {
        const bool branch_taken_0x220674 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x220678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220674u;
        // 0x220678: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220674) {
            ctx->pc = 0x22069Cu;
            goto label_22069c;
        }
    }
    ctx->pc = 0x22067Cu;
label_22067c:
    // 0x22067c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x22067cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_220680:
    // 0x220680: 0xc0882f8  jal         func_220BE0
label_220684:
    if (ctx->pc == 0x220684u) {
        ctx->pc = 0x220684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220680u;
        // 0x220684: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220688u;
        goto label_220688;
    }
    ctx->pc = 0x220680u;
    SET_GPR_U32(ctx, 31, 0x220688u);
    ctx->pc = 0x220684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220680u;
    // 0x220684: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220688u;
label_220688:
    // 0x220688: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x220688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_22068c:
    // 0x22068c: 0xc0882f8  jal         func_220BE0
label_220690:
    if (ctx->pc == 0x220690u) {
        ctx->pc = 0x220690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22068Cu;
        // 0x220690: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220694u;
        goto label_220694;
    }
    ctx->pc = 0x22068Cu;
    SET_GPR_U32(ctx, 31, 0x220694u);
    ctx->pc = 0x220690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22068Cu;
    // 0x220690: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220694u;
label_220694:
    // 0x220694: 0x10000007  b           . + 4 + (0x7 << 2)
label_220698:
    if (ctx->pc == 0x220698u) {
        ctx->pc = 0x220698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220694u;
        // 0x220698: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22069Cu;
        goto label_22069c;
    }
    ctx->pc = 0x220694u;
    {
        const bool branch_taken_0x220694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220694u;
        // 0x220698: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220694) {
            ctx->pc = 0x2206B4u;
            goto label_2206b4;
        }
    }
    ctx->pc = 0x22069Cu;
label_22069c:
    // 0x22069c: 0xc0882f8  jal         func_220BE0
label_2206a0:
    if (ctx->pc == 0x2206A0u) {
        ctx->pc = 0x2206A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22069Cu;
        // 0x2206a0: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206A4u;
        goto label_2206a4;
    }
    ctx->pc = 0x22069Cu;
    SET_GPR_U32(ctx, 31, 0x2206A4u);
    ctx->pc = 0x2206A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22069Cu;
    // 0x2206a0: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x2206A4u;
label_2206a4:
    // 0x2206a4: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x2206a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2206a8:
    // 0x2206a8: 0xc0882f8  jal         func_220BE0
label_2206ac:
    if (ctx->pc == 0x2206ACu) {
        ctx->pc = 0x2206ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206A8u;
        // 0x2206ac: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206B0u;
        goto label_2206b0;
    }
    ctx->pc = 0x2206A8u;
    SET_GPR_U32(ctx, 31, 0x2206B0u);
    ctx->pc = 0x2206ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206A8u;
    // 0x2206ac: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x2206B0u;
label_2206b0:
    // 0x2206b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2206b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2206b4:
    // 0x2206b4: 0xc0882f8  jal         func_220BE0
label_2206b8:
    if (ctx->pc == 0x2206B8u) {
        ctx->pc = 0x2206B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206B4u;
        // 0x2206b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206BCu;
        goto label_2206bc;
    }
    ctx->pc = 0x2206B4u;
    SET_GPR_U32(ctx, 31, 0x2206BCu);
    ctx->pc = 0x2206B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206B4u;
    // 0x2206b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x2206BCu;
label_2206bc:
    // 0x2206bc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2206c0:
    if (ctx->pc == 0x2206C0u) {
        ctx->pc = 0x2206C4u;
        goto label_2206c4;
    }
    ctx->pc = 0x2206BCu;
    {
        const bool branch_taken_0x2206bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2206bc) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x2206C4u;
label_2206c4:
    // 0x2206c4: 0x1643001c  bne         $s2, $v1, . + 4 + (0x1C << 2)
label_2206c8:
    if (ctx->pc == 0x2206C8u) {
        ctx->pc = 0x2206CCu;
        goto label_2206cc;
    }
    ctx->pc = 0x2206C4u;
    {
        const bool branch_taken_0x2206c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x2206c4) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x2206CCu;
label_2206cc:
    // 0x2206cc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2206ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2206d0:
    // 0x2206d0: 0xc0882f8  jal         func_220BE0
label_2206d4:
    if (ctx->pc == 0x2206D4u) {
        ctx->pc = 0x2206D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206D0u;
        // 0x2206d4: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206D8u;
        goto label_2206d8;
    }
    ctx->pc = 0x2206D0u;
    SET_GPR_U32(ctx, 31, 0x2206D8u);
    ctx->pc = 0x2206D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206D0u;
    // 0x2206d4: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x2206D8u;
label_2206d8:
    // 0x2206d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2206d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2206dc:
    // 0x2206dc: 0xc0882f8  jal         func_220BE0
label_2206e0:
    if (ctx->pc == 0x2206E0u) {
        ctx->pc = 0x2206E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206DCu;
        // 0x2206e0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206E4u;
        goto label_2206e4;
    }
    ctx->pc = 0x2206DCu;
    SET_GPR_U32(ctx, 31, 0x2206E4u);
    ctx->pc = 0x2206E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206DCu;
    // 0x2206e0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x2206E4u;
label_2206e4:
    // 0x2206e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2206e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2206e8:
    // 0x2206e8: 0xc0882f8  jal         func_220BE0
label_2206ec:
    if (ctx->pc == 0x2206ECu) {
        ctx->pc = 0x2206ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2206E8u;
        // 0x2206ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2206F0u;
        goto label_2206f0;
    }
    ctx->pc = 0x2206E8u;
    SET_GPR_U32(ctx, 31, 0x2206F0u);
    ctx->pc = 0x2206ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2206E8u;
    // 0x2206ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x2206F0u;
label_2206f0:
    // 0x2206f0: 0x10000011  b           . + 4 + (0x11 << 2)
label_2206f4:
    if (ctx->pc == 0x2206F4u) {
        ctx->pc = 0x2206F8u;
        goto label_2206f8;
    }
    ctx->pc = 0x2206F0u;
    {
        const bool branch_taken_0x2206f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2206f0) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x2206F8u;
label_2206f8:
    // 0x2206f8: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2206f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2206fc:
    // 0x2206fc: 0x1663000e  bne         $s3, $v1, . + 4 + (0xE << 2)
label_220700:
    if (ctx->pc == 0x220700u) {
        ctx->pc = 0x220704u;
        goto label_220704;
    }
    ctx->pc = 0x2206FCu;
    {
        const bool branch_taken_0x2206fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x2206fc) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x220704u;
label_220704:
    // 0x220704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x220704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220708:
    // 0x220708: 0x16430006  bne         $s2, $v1, . + 4 + (0x6 << 2)
label_22070c:
    if (ctx->pc == 0x22070Cu) {
        ctx->pc = 0x22070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220708u;
        // 0x22070c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220710u;
        goto label_220710;
    }
    ctx->pc = 0x220708u;
    {
        const bool branch_taken_0x220708 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x22070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220708u;
        // 0x22070c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220708) {
            ctx->pc = 0x220724u;
            goto label_220724;
        }
    }
    ctx->pc = 0x220710u;
label_220710:
    // 0x220710: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x220710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_220714:
    // 0x220714: 0xc0882f8  jal         func_220BE0
label_220718:
    if (ctx->pc == 0x220718u) {
        ctx->pc = 0x220718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220714u;
        // 0x220718: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22071Cu;
        goto label_22071c;
    }
    ctx->pc = 0x220714u;
    SET_GPR_U32(ctx, 31, 0x22071Cu);
    ctx->pc = 0x220718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220714u;
    // 0x220718: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x22071Cu;
label_22071c:
    // 0x22071c: 0x10000006  b           . + 4 + (0x6 << 2)
label_220720:
    if (ctx->pc == 0x220720u) {
        ctx->pc = 0x220724u;
        goto label_220724;
    }
    ctx->pc = 0x22071Cu;
    {
        const bool branch_taken_0x22071c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22071c) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x220724u;
label_220724:
    // 0x220724: 0x16430004  bne         $s2, $v1, . + 4 + (0x4 << 2)
label_220728:
    if (ctx->pc == 0x220728u) {
        ctx->pc = 0x22072Cu;
        goto label_22072c;
    }
    ctx->pc = 0x220724u;
    {
        const bool branch_taken_0x220724 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x220724) {
            ctx->pc = 0x220738u;
            goto label_220738;
        }
    }
    ctx->pc = 0x22072Cu;
label_22072c:
    // 0x22072c: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x22072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_220730:
    // 0x220730: 0xc0882f8  jal         func_220BE0
label_220734:
    if (ctx->pc == 0x220734u) {
        ctx->pc = 0x220734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220730u;
        // 0x220734: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220738u;
        goto label_220738;
    }
    ctx->pc = 0x220730u;
    SET_GPR_U32(ctx, 31, 0x220738u);
    ctx->pc = 0x220734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220730u;
    // 0x220734: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220738u;
label_220738:
    // 0x220738: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x220738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22073c:
    // 0x22073c: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x22073cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_220740:
    // 0x220740: 0x28810029  slti        $at, $a0, 0x29
    ctx->pc = 0x220740u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
label_220744:
    // 0x220744: 0x1020011c  beqz        $at, . + 4 + (0x11C << 2)
label_220748:
    if (ctx->pc == 0x220748u) {
        ctx->pc = 0x220748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220744u;
        // 0x220748: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22074Cu;
        goto label_22074c;
    }
    ctx->pc = 0x220744u;
    {
        const bool branch_taken_0x220744 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220744u;
        // 0x220748: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220744) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x22074Cu;
label_22074c:
    // 0x22074c: 0x1263010c  beq         $s3, $v1, . + 4 + (0x10C << 2)
label_220750:
    if (ctx->pc == 0x220750u) {
        ctx->pc = 0x220754u;
        goto label_220754;
    }
    ctx->pc = 0x22074Cu;
    {
        const bool branch_taken_0x22074c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x22074c) {
            ctx->pc = 0x220B80u;
            goto label_220b80;
        }
    }
    ctx->pc = 0x220754u;
label_220754:
    // 0x220754: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x220754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_220758:
    // 0x220758: 0x12630100  beq         $s3, $v1, . + 4 + (0x100 << 2)
label_22075c:
    if (ctx->pc == 0x22075Cu) {
        ctx->pc = 0x22075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220758u;
        // 0x22075c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220760u;
        goto label_220760;
    }
    ctx->pc = 0x220758u;
    {
        const bool branch_taken_0x220758 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x22075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220758u;
        // 0x22075c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220758) {
            ctx->pc = 0x220B5Cu;
            goto label_220b5c;
        }
    }
    ctx->pc = 0x220760u;
label_220760:
    // 0x220760: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x220760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_220764:
    // 0x220764: 0x126300f7  beq         $s3, $v1, . + 4 + (0xF7 << 2)
label_220768:
    if (ctx->pc == 0x220768u) {
        ctx->pc = 0x220768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220764u;
        // 0x220768: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22076Cu;
        goto label_22076c;
    }
    ctx->pc = 0x220764u;
    {
        const bool branch_taken_0x220764 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x220768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220764u;
        // 0x220768: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220764) {
            ctx->pc = 0x220B44u;
            goto label_220b44;
        }
    }
    ctx->pc = 0x22076Cu;
label_22076c:
    // 0x22076c: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x22076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_220770:
    // 0x220770: 0x126300e8  beq         $s3, $v1, . + 4 + (0xE8 << 2)
label_220774:
    if (ctx->pc == 0x220774u) {
        ctx->pc = 0x220774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220770u;
        // 0x220774: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220778u;
        goto label_220778;
    }
    ctx->pc = 0x220770u;
    {
        const bool branch_taken_0x220770 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x220774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220770u;
        // 0x220774: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220770) {
            ctx->pc = 0x220B14u;
            goto label_220b14;
        }
    }
    ctx->pc = 0x220778u;
label_220778:
    // 0x220778: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x220778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_22077c:
    // 0x22077c: 0x126500d8  beq         $s3, $a1, . + 4 + (0xD8 << 2)
label_220780:
    if (ctx->pc == 0x220780u) {
        ctx->pc = 0x220780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22077Cu;
        // 0x220780: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220784u;
        goto label_220784;
    }
    ctx->pc = 0x22077Cu;
    {
        const bool branch_taken_0x22077c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x220780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22077Cu;
        // 0x220780: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22077c) {
            ctx->pc = 0x220AE0u;
            goto label_220ae0;
        }
    }
    ctx->pc = 0x220784u;
label_220784:
    // 0x220784: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x220784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_220788:
    // 0x220788: 0x126300c9  beq         $s3, $v1, . + 4 + (0xC9 << 2)
label_22078c:
    if (ctx->pc == 0x22078Cu) {
        ctx->pc = 0x22078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220788u;
        // 0x22078c: 0x2409001f  addiu       $t1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220790u;
        goto label_220790;
    }
    ctx->pc = 0x220788u;
    {
        const bool branch_taken_0x220788 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x22078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220788u;
        // 0x22078c: 0x2409001f  addiu       $t1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220788) {
            ctx->pc = 0x220AB0u;
            goto label_220ab0;
        }
    }
    ctx->pc = 0x220790u;
label_220790:
    // 0x220790: 0x126900bb  beq         $s3, $t1, . + 4 + (0xBB << 2)
label_220794:
    if (ctx->pc == 0x220794u) {
        ctx->pc = 0x220794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220790u;
        // 0x220794: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220798u;
        goto label_220798;
    }
    ctx->pc = 0x220790u;
    {
        const bool branch_taken_0x220790 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 9));
        ctx->pc = 0x220794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220790u;
        // 0x220794: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220790) {
            ctx->pc = 0x220A80u;
            goto label_220a80;
        }
    }
    ctx->pc = 0x220798u;
label_220798:
    // 0x220798: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x220798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_22079c:
    // 0x22079c: 0x126300ad  beq         $s3, $v1, . + 4 + (0xAD << 2)
label_2207a0:
    if (ctx->pc == 0x2207A0u) {
        ctx->pc = 0x2207A4u;
        goto label_2207a4;
    }
    ctx->pc = 0x22079Cu;
    {
        const bool branch_taken_0x22079c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x22079c) {
            ctx->pc = 0x220A54u;
            goto label_220a54;
        }
    }
    ctx->pc = 0x2207A4u;
label_2207a4:
    // 0x2207a4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2207a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2207a8:
    // 0x2207a8: 0x126500a2  beq         $s3, $a1, . + 4 + (0xA2 << 2)
label_2207ac:
    if (ctx->pc == 0x2207ACu) {
        ctx->pc = 0x2207ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207A8u;
        // 0x2207ac: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2207B0u;
        goto label_2207b0;
    }
    ctx->pc = 0x2207A8u;
    {
        const bool branch_taken_0x2207a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x2207ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207A8u;
        // 0x2207ac: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207a8) {
            ctx->pc = 0x220A34u;
            goto label_220a34;
        }
    }
    ctx->pc = 0x2207B0u;
label_2207b0:
    // 0x2207b0: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2207b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2207b4:
    // 0x2207b4: 0x12630093  beq         $s3, $v1, . + 4 + (0x93 << 2)
label_2207b8:
    if (ctx->pc == 0x2207B8u) {
        ctx->pc = 0x2207B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207B4u;
        // 0x2207b8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2207BCu;
        goto label_2207bc;
    }
    ctx->pc = 0x2207B4u;
    {
        const bool branch_taken_0x2207b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2207B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207B4u;
        // 0x2207b8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207b4) {
            ctx->pc = 0x220A04u;
            goto label_220a04;
        }
    }
    ctx->pc = 0x2207BCu;
label_2207bc:
    // 0x2207bc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2207bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2207c0:
    // 0x2207c0: 0x12630084  beq         $s3, $v1, . + 4 + (0x84 << 2)
label_2207c4:
    if (ctx->pc == 0x2207C4u) {
        ctx->pc = 0x2207C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207C0u;
        // 0x2207c4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2207C8u;
        goto label_2207c8;
    }
    ctx->pc = 0x2207C0u;
    {
        const bool branch_taken_0x2207c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2207C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207C0u;
        // 0x2207c4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207c0) {
            ctx->pc = 0x2209D4u;
            goto label_2209d4;
        }
    }
    ctx->pc = 0x2207C8u;
label_2207c8:
    // 0x2207c8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2207c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2207cc:
    // 0x2207cc: 0x12630078  beq         $s3, $v1, . + 4 + (0x78 << 2)
label_2207d0:
    if (ctx->pc == 0x2207D0u) {
        ctx->pc = 0x2207D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207CCu;
        // 0x2207d0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2207D4u;
        goto label_2207d4;
    }
    ctx->pc = 0x2207CCu;
    {
        const bool branch_taken_0x2207cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2207D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207CCu;
        // 0x2207d0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207cc) {
            ctx->pc = 0x2209B0u;
            goto label_2209b0;
        }
    }
    ctx->pc = 0x2207D4u;
label_2207d4:
    // 0x2207d4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2207d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2207d8:
    // 0x2207d8: 0x12630074  beq         $s3, $v1, . + 4 + (0x74 << 2)
label_2207dc:
    if (ctx->pc == 0x2207DCu) {
        ctx->pc = 0x2207DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207D8u;
        // 0x2207dc: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2207E0u;
        goto label_2207e0;
    }
    ctx->pc = 0x2207D8u;
    {
        const bool branch_taken_0x2207d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2207DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207D8u;
        // 0x2207dc: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207d8) {
            ctx->pc = 0x2209ACu;
            goto label_2209ac;
        }
    }
    ctx->pc = 0x2207E0u;
label_2207e0:
    // 0x2207e0: 0x12680060  beq         $s3, $t0, . + 4 + (0x60 << 2)
label_2207e4:
    if (ctx->pc == 0x2207E4u) {
        ctx->pc = 0x2207E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207E0u;
        // 0x2207e4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2207E8u;
        goto label_2207e8;
    }
    ctx->pc = 0x2207E0u;
    {
        const bool branch_taken_0x2207e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 8));
        ctx->pc = 0x2207E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207E0u;
        // 0x2207e4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207e0) {
            ctx->pc = 0x220964u;
            goto label_220964;
        }
    }
    ctx->pc = 0x2207E8u;
label_2207e8:
    // 0x2207e8: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x2207e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2207ec:
    // 0x2207ec: 0x12670054  beq         $s3, $a3, . + 4 + (0x54 << 2)
label_2207f0:
    if (ctx->pc == 0x2207F0u) {
        ctx->pc = 0x2207F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207ECu;
        // 0x2207f0: 0x2c810003  sltiu       $at, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2207F4u;
        goto label_2207f4;
    }
    ctx->pc = 0x2207ECu;
    {
        const bool branch_taken_0x2207ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        ctx->pc = 0x2207F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207ECu;
        // 0x2207f0: 0x2c810003  sltiu       $at, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207ec) {
            ctx->pc = 0x220940u;
            goto label_220940;
        }
    }
    ctx->pc = 0x2207F4u;
label_2207f4:
    // 0x2207f4: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2207f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2207f8:
    // 0x2207f8: 0x1266004b  beq         $s3, $a2, . + 4 + (0x4B << 2)
label_2207fc:
    if (ctx->pc == 0x2207FCu) {
        ctx->pc = 0x2207FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207F8u;
        // 0x2207fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220800u;
        goto label_220800;
    }
    ctx->pc = 0x2207F8u;
    {
        const bool branch_taken_0x2207f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 6));
        ctx->pc = 0x2207FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2207F8u;
        // 0x2207fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2207f8) {
            ctx->pc = 0x220928u;
            goto label_220928;
        }
    }
    ctx->pc = 0x220800u;
label_220800:
    // 0x220800: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x220800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_220804:
    // 0x220804: 0x12630038  beq         $s3, $v1, . + 4 + (0x38 << 2)
label_220808:
    if (ctx->pc == 0x220808u) {
        ctx->pc = 0x220808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220804u;
        // 0x220808: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22080Cu;
        goto label_22080c;
    }
    ctx->pc = 0x220804u;
    {
        const bool branch_taken_0x220804 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x220808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220804u;
        // 0x220808: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220804) {
            ctx->pc = 0x2208E8u;
            goto label_2208e8;
        }
    }
    ctx->pc = 0x22080Cu;
label_22080c:
    // 0x22080c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x22080cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220810:
    // 0x220810: 0x12650021  beq         $s3, $a1, . + 4 + (0x21 << 2)
label_220814:
    if (ctx->pc == 0x220814u) {
        ctx->pc = 0x220814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220810u;
        // 0x220814: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220818u;
        goto label_220818;
    }
    ctx->pc = 0x220810u;
    {
        const bool branch_taken_0x220810 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        ctx->pc = 0x220814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220810u;
        // 0x220814: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220810) {
            ctx->pc = 0x220898u;
            goto label_220898;
        }
    }
    ctx->pc = 0x220818u;
label_220818:
    // 0x220818: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_22081c:
    if (ctx->pc == 0x22081Cu) {
        ctx->pc = 0x22081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220818u;
        // 0x22081c: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220820u;
        goto label_220820;
    }
    ctx->pc = 0x220818u;
    {
        const bool branch_taken_0x220818 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220818u;
        // 0x22081c: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220818) {
            ctx->pc = 0x220828u;
            goto label_220828;
        }
    }
    ctx->pc = 0x220820u;
label_220820:
    // 0x220820: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_220824:
    if (ctx->pc == 0x220824u) {
        ctx->pc = 0x220824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220820u;
        // 0x220824: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220828u;
        goto label_220828;
    }
    ctx->pc = 0x220820u;
    {
        const bool branch_taken_0x220820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220820u;
        // 0x220824: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220820) {
            ctx->pc = 0x220BBCu;
            goto label_220bbc;
        }
    }
    ctx->pc = 0x220828u;
label_220828:
    // 0x220828: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x220828u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22082c:
    // 0x22082c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_220830:
    if (ctx->pc == 0x220830u) {
        ctx->pc = 0x220830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22082Cu;
        // 0x220830: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220834u;
        goto label_220834;
    }
    ctx->pc = 0x22082Cu;
    {
        const bool branch_taken_0x22082c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x220830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22082Cu;
        // 0x220830: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22082c) {
            ctx->pc = 0x22083Cu;
            goto label_22083c;
        }
    }
    ctx->pc = 0x220834u;
label_220834:
    // 0x220834: 0x14870005  bne         $a0, $a3, . + 4 + (0x5 << 2)
label_220838:
    if (ctx->pc == 0x220838u) {
        ctx->pc = 0x220838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220834u;
        // 0x220838: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22083Cu;
        goto label_22083c;
    }
    ctx->pc = 0x220834u;
    {
        const bool branch_taken_0x220834 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x220838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220834u;
        // 0x220838: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220834) {
            ctx->pc = 0x22084Cu;
            goto label_22084c;
        }
    }
    ctx->pc = 0x22083Cu;
label_22083c:
    // 0x22083c: 0xc0882f8  jal         func_220BE0
label_220840:
    if (ctx->pc == 0x220840u) {
        ctx->pc = 0x220844u;
        goto label_220844;
    }
    ctx->pc = 0x22083Cu;
    SET_GPR_U32(ctx, 31, 0x220844u);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220844u;
label_220844:
    // 0x220844: 0x100000dc  b           . + 4 + (0xDC << 2)
label_220848:
    if (ctx->pc == 0x220848u) {
        ctx->pc = 0x22084Cu;
        goto label_22084c;
    }
    ctx->pc = 0x220844u;
    {
        const bool branch_taken_0x220844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220844) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x22084Cu;
label_22084c:
    // 0x22084c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_220850:
    if (ctx->pc == 0x220850u) {
        ctx->pc = 0x220850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22084Cu;
        // 0x220850: 0x2405004a  addiu       $a1, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220854u;
        goto label_220854;
    }
    ctx->pc = 0x22084Cu;
    {
        const bool branch_taken_0x22084c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22084Cu;
        // 0x220850: 0x2405004a  addiu       $a1, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22084c) {
            ctx->pc = 0x220868u;
            goto label_220868;
        }
    }
    ctx->pc = 0x220854u;
label_220854:
    // 0x220854: 0x10860003  beq         $a0, $a2, . + 4 + (0x3 << 2)
label_220858:
    if (ctx->pc == 0x220858u) {
        ctx->pc = 0x220858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220854u;
        // 0x220858: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22085Cu;
        goto label_22085c;
    }
    ctx->pc = 0x220854u;
    {
        const bool branch_taken_0x220854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x220858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220854u;
        // 0x220858: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220854) {
            ctx->pc = 0x220864u;
            goto label_220864;
        }
    }
    ctx->pc = 0x22085Cu;
label_22085c:
    // 0x22085c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_220860:
    if (ctx->pc == 0x220860u) {
        ctx->pc = 0x220864u;
        goto label_220864;
    }
    ctx->pc = 0x22085Cu;
    {
        const bool branch_taken_0x22085c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22085c) {
            ctx->pc = 0x220878u;
            goto label_220878;
        }
    }
    ctx->pc = 0x220864u;
label_220864:
    // 0x220864: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x220864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_220868:
    // 0x220868: 0xc0882f8  jal         func_220BE0
label_22086c:
    if (ctx->pc == 0x22086Cu) {
        ctx->pc = 0x220870u;
        goto label_220870;
    }
    ctx->pc = 0x220868u;
    SET_GPR_U32(ctx, 31, 0x220870u);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220870u;
label_220870:
    // 0x220870: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_220874:
    if (ctx->pc == 0x220874u) {
        ctx->pc = 0x220878u;
        goto label_220878;
    }
    ctx->pc = 0x220870u;
    {
        const bool branch_taken_0x220870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220870) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220878u;
label_220878:
    // 0x220878: 0x10880003  beq         $a0, $t0, . + 4 + (0x3 << 2)
label_22087c:
    if (ctx->pc == 0x22087Cu) {
        ctx->pc = 0x22087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220878u;
        // 0x22087c: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220880u;
        goto label_220880;
    }
    ctx->pc = 0x220878u;
    {
        const bool branch_taken_0x220878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x22087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220878u;
        // 0x22087c: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220878) {
            ctx->pc = 0x220888u;
            goto label_220888;
        }
    }
    ctx->pc = 0x220880u;
label_220880:
    // 0x220880: 0x148900cd  bne         $a0, $t1, . + 4 + (0xCD << 2)
label_220884:
    if (ctx->pc == 0x220884u) {
        ctx->pc = 0x220888u;
        goto label_220888;
    }
    ctx->pc = 0x220880u;
    {
        const bool branch_taken_0x220880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        if (branch_taken_0x220880) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220888u;
label_220888:
    // 0x220888: 0xc0882f8  jal         func_220BE0
label_22088c:
    if (ctx->pc == 0x22088Cu) {
        ctx->pc = 0x220890u;
        goto label_220890;
    }
    ctx->pc = 0x220888u;
    SET_GPR_U32(ctx, 31, 0x220890u);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220890u;
label_220890:
    // 0x220890: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_220894:
    if (ctx->pc == 0x220894u) {
        ctx->pc = 0x220898u;
        goto label_220898;
    }
    ctx->pc = 0x220890u;
    {
        const bool branch_taken_0x220890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220890) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220898u;
label_220898:
    // 0x220898: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_22089c:
    if (ctx->pc == 0x22089Cu) {
        ctx->pc = 0x2208A0u;
        goto label_2208a0;
    }
    ctx->pc = 0x220898u;
    {
        const bool branch_taken_0x220898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x220898) {
            ctx->pc = 0x2208A8u;
            goto label_2208a8;
        }
    }
    ctx->pc = 0x2208A0u;
label_2208a0:
    // 0x2208a0: 0x14850005  bne         $a0, $a1, . + 4 + (0x5 << 2)
label_2208a4:
    if (ctx->pc == 0x2208A4u) {
        ctx->pc = 0x2208A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208A0u;
        // 0x2208a4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2208A8u;
        goto label_2208a8;
    }
    ctx->pc = 0x2208A0u;
    {
        const bool branch_taken_0x2208a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2208A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208A0u;
        // 0x2208a4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208a0) {
            ctx->pc = 0x2208B8u;
            goto label_2208b8;
        }
    }
    ctx->pc = 0x2208A8u;
label_2208a8:
    // 0x2208a8: 0xc0882f8  jal         func_220BE0
label_2208ac:
    if (ctx->pc == 0x2208ACu) {
        ctx->pc = 0x2208ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208A8u;
        // 0x2208ac: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2208B0u;
        goto label_2208b0;
    }
    ctx->pc = 0x2208A8u;
    SET_GPR_U32(ctx, 31, 0x2208B0u);
    ctx->pc = 0x2208ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2208A8u;
    // 0x2208ac: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x2208B0u;
label_2208b0:
    // 0x2208b0: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_2208b4:
    if (ctx->pc == 0x2208B4u) {
        ctx->pc = 0x2208B8u;
        goto label_2208b8;
    }
    ctx->pc = 0x2208B0u;
    {
        const bool branch_taken_0x2208b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2208b0) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x2208B8u;
label_2208b8:
    // 0x2208b8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_2208bc:
    if (ctx->pc == 0x2208BCu) {
        ctx->pc = 0x2208BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208B8u;
        // 0x2208bc: 0x2405004a  addiu       $a1, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2208C0u;
        goto label_2208c0;
    }
    ctx->pc = 0x2208B8u;
    {
        const bool branch_taken_0x2208b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2208BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208B8u;
        // 0x2208bc: 0x2405004a  addiu       $a1, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208b8) {
            ctx->pc = 0x2208D0u;
            goto label_2208d0;
        }
    }
    ctx->pc = 0x2208C0u;
label_2208c0:
    // 0x2208c0: 0xc0882f8  jal         func_220BE0
label_2208c4:
    if (ctx->pc == 0x2208C4u) {
        ctx->pc = 0x2208C8u;
        goto label_2208c8;
    }
    ctx->pc = 0x2208C0u;
    SET_GPR_U32(ctx, 31, 0x2208C8u);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x2208C8u;
label_2208c8:
    // 0x2208c8: 0x100000bb  b           . + 4 + (0xBB << 2)
label_2208cc:
    if (ctx->pc == 0x2208CCu) {
        ctx->pc = 0x2208D0u;
        goto label_2208d0;
    }
    ctx->pc = 0x2208C8u;
    {
        const bool branch_taken_0x2208c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2208c8) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x2208D0u;
label_2208d0:
    // 0x2208d0: 0x148900b9  bne         $a0, $t1, . + 4 + (0xB9 << 2)
label_2208d4:
    if (ctx->pc == 0x2208D4u) {
        ctx->pc = 0x2208D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208D0u;
        // 0x2208d4: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2208D8u;
        goto label_2208d8;
    }
    ctx->pc = 0x2208D0u;
    {
        const bool branch_taken_0x2208d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x2208D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208D0u;
        // 0x2208d4: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208d0) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x2208D8u;
label_2208d8:
    // 0x2208d8: 0xc0882f8  jal         func_220BE0
label_2208dc:
    if (ctx->pc == 0x2208DCu) {
        ctx->pc = 0x2208E0u;
        goto label_2208e0;
    }
    ctx->pc = 0x2208D8u;
    SET_GPR_U32(ctx, 31, 0x2208E0u);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x2208E0u;
label_2208e0:
    // 0x2208e0: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_2208e4:
    if (ctx->pc == 0x2208E4u) {
        ctx->pc = 0x2208E8u;
        goto label_2208e8;
    }
    ctx->pc = 0x2208E0u;
    {
        const bool branch_taken_0x2208e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2208e0) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x2208E8u;
label_2208e8:
    // 0x2208e8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_2208ec:
    if (ctx->pc == 0x2208ECu) {
        ctx->pc = 0x2208ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208E8u;
        // 0x2208ec: 0x240500be  addiu       $a1, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2208F0u;
        goto label_2208f0;
    }
    ctx->pc = 0x2208E8u;
    {
        const bool branch_taken_0x2208e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2208ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208E8u;
        // 0x2208ec: 0x240500be  addiu       $a1, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208e8) {
            ctx->pc = 0x220918u;
            goto label_220918;
        }
    }
    ctx->pc = 0x2208F0u;
label_2208f0:
    // 0x2208f0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2208f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2208f4:
    // 0x2208f4: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_2208f8:
    if (ctx->pc == 0x2208F8u) {
        ctx->pc = 0x2208F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208F4u;
        // 0x2208f8: 0x2483ffeb  addiu       $v1, $a0, -0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967275));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2208FCu;
        goto label_2208fc;
    }
    ctx->pc = 0x2208F4u;
    {
        const bool branch_taken_0x2208f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2208F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208F4u;
        // 0x2208f8: 0x2483ffeb  addiu       $v1, $a0, -0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208f4) {
            ctx->pc = 0x220914u;
            goto label_220914;
        }
    }
    ctx->pc = 0x2208FCu;
label_2208fc:
    // 0x2208fc: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2208fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_220900:
    // 0x220900: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_220904:
    if (ctx->pc == 0x220904u) {
        ctx->pc = 0x220908u;
        goto label_220908;
    }
    ctx->pc = 0x220900u;
    {
        const bool branch_taken_0x220900 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x220900) {
            ctx->pc = 0x220914u;
            goto label_220914;
        }
    }
    ctx->pc = 0x220908u;
label_220908:
    // 0x220908: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x220908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_22090c:
    // 0x22090c: 0x148300aa  bne         $a0, $v1, . + 4 + (0xAA << 2)
label_220910:
    if (ctx->pc == 0x220910u) {
        ctx->pc = 0x220914u;
        goto label_220914;
    }
    ctx->pc = 0x22090Cu;
    {
        const bool branch_taken_0x22090c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22090c) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220914u;
label_220914:
    // 0x220914: 0x240500be  addiu       $a1, $zero, 0xBE
    ctx->pc = 0x220914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
label_220918:
    // 0x220918: 0xc0882f8  jal         func_220BE0
label_22091c:
    if (ctx->pc == 0x22091Cu) {
        ctx->pc = 0x220920u;
        goto label_220920;
    }
    ctx->pc = 0x220918u;
    SET_GPR_U32(ctx, 31, 0x220920u);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220920u;
label_220920:
    // 0x220920: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_220924:
    if (ctx->pc == 0x220924u) {
        ctx->pc = 0x220928u;
        goto label_220928;
    }
    ctx->pc = 0x220920u;
    {
        const bool branch_taken_0x220920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220920) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220928u;
label_220928:
    // 0x220928: 0x148300a3  bne         $a0, $v1, . + 4 + (0xA3 << 2)
label_22092c:
    if (ctx->pc == 0x22092Cu) {
        ctx->pc = 0x22092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220928u;
        // 0x22092c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220930u;
        goto label_220930;
    }
    ctx->pc = 0x220928u;
    {
        const bool branch_taken_0x220928 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x22092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220928u;
        // 0x22092c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220928) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220930u;
label_220930:
    // 0x220930: 0xc0882f8  jal         func_220BE0
label_220934:
    if (ctx->pc == 0x220934u) {
        ctx->pc = 0x220938u;
        goto label_220938;
    }
    ctx->pc = 0x220930u;
    SET_GPR_U32(ctx, 31, 0x220938u);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220938u;
label_220938:
    // 0x220938: 0x1000009f  b           . + 4 + (0x9F << 2)
label_22093c:
    if (ctx->pc == 0x22093Cu) {
        ctx->pc = 0x220940u;
        goto label_220940;
    }
    ctx->pc = 0x220938u;
    {
        const bool branch_taken_0x220938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220938) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220940u;
label_220940:
    // 0x220940: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_220944:
    if (ctx->pc == 0x220944u) {
        ctx->pc = 0x220944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220940u;
        // 0x220944: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220948u;
        goto label_220948;
    }
    ctx->pc = 0x220940u;
    {
        const bool branch_taken_0x220940 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x220944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220940u;
        // 0x220944: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220940) {
            ctx->pc = 0x220954u;
            goto label_220954;
        }
    }
    ctx->pc = 0x220948u;
label_220948:
    // 0x220948: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x220948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22094c:
    // 0x22094c: 0x1483009a  bne         $a0, $v1, . + 4 + (0x9A << 2)
label_220950:
    if (ctx->pc == 0x220950u) {
        ctx->pc = 0x220954u;
        goto label_220954;
    }
    ctx->pc = 0x22094Cu;
    {
        const bool branch_taken_0x22094c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22094c) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220954u;
label_220954:
    // 0x220954: 0xc0882f8  jal         func_220BE0
label_220958:
    if (ctx->pc == 0x220958u) {
        ctx->pc = 0x22095Cu;
        goto label_22095c;
    }
    ctx->pc = 0x220954u;
    SET_GPR_U32(ctx, 31, 0x22095Cu);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x22095Cu;
label_22095c:
    // 0x22095c: 0x10000096  b           . + 4 + (0x96 << 2)
label_220960:
    if (ctx->pc == 0x220960u) {
        ctx->pc = 0x220964u;
        goto label_220964;
    }
    ctx->pc = 0x22095Cu;
    {
        const bool branch_taken_0x22095c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22095c) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220964u;
label_220964:
    // 0x220964: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_220968:
    if (ctx->pc == 0x220968u) {
        ctx->pc = 0x220968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220964u;
        // 0x220968: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22096Cu;
        goto label_22096c;
    }
    ctx->pc = 0x220964u;
    {
        const bool branch_taken_0x220964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220964u;
        // 0x220968: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220964) {
            ctx->pc = 0x22099Cu;
            goto label_22099c;
        }
    }
    ctx->pc = 0x22096Cu;
label_22096c:
    // 0x22096c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_220970:
    // 0x220970: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_220974:
    if (ctx->pc == 0x220974u) {
        ctx->pc = 0x220974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220970u;
        // 0x220974: 0x2483ffeb  addiu       $v1, $a0, -0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967275));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220978u;
        goto label_220978;
    }
    ctx->pc = 0x220970u;
    {
        const bool branch_taken_0x220970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220970u;
        // 0x220974: 0x2483ffeb  addiu       $v1, $a0, -0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220970) {
            ctx->pc = 0x220998u;
            goto label_220998;
        }
    }
    ctx->pc = 0x220978u;
label_220978:
    // 0x220978: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x220978u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22097c:
    // 0x22097c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_220980:
    if (ctx->pc == 0x220980u) {
        ctx->pc = 0x220984u;
        goto label_220984;
    }
    ctx->pc = 0x22097Cu;
    {
        const bool branch_taken_0x22097c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x22097c) {
            ctx->pc = 0x220998u;
            goto label_220998;
        }
    }
    ctx->pc = 0x220984u;
label_220984:
    // 0x220984: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x220984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_220988:
    // 0x220988: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_22098c:
    if (ctx->pc == 0x22098Cu) {
        ctx->pc = 0x22098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220988u;
        // 0x22098c: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220990u;
        goto label_220990;
    }
    ctx->pc = 0x220988u;
    {
        const bool branch_taken_0x220988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220988u;
        // 0x22098c: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220988) {
            ctx->pc = 0x220998u;
            goto label_220998;
        }
    }
    ctx->pc = 0x220990u;
label_220990:
    // 0x220990: 0x14830089  bne         $a0, $v1, . + 4 + (0x89 << 2)
label_220994:
    if (ctx->pc == 0x220994u) {
        ctx->pc = 0x220998u;
        goto label_220998;
    }
    ctx->pc = 0x220990u;
    {
        const bool branch_taken_0x220990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x220990) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220998u;
label_220998:
    // 0x220998: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x220998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_22099c:
    // 0x22099c: 0xc0882f8  jal         func_220BE0
label_2209a0:
    if (ctx->pc == 0x2209A0u) {
        ctx->pc = 0x2209A4u;
        goto label_2209a4;
    }
    ctx->pc = 0x22099Cu;
    SET_GPR_U32(ctx, 31, 0x2209A4u);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x2209A4u;
label_2209a4:
    // 0x2209a4: 0x10000084  b           . + 4 + (0x84 << 2)
label_2209a8:
    if (ctx->pc == 0x2209A8u) {
        ctx->pc = 0x2209ACu;
        goto label_2209ac;
    }
    ctx->pc = 0x2209A4u;
    {
        const bool branch_taken_0x2209a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2209a4) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x2209ACu;
label_2209ac:
    // 0x2209ac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2209acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2209b0:
    // 0x2209b0: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_2209b4:
    if (ctx->pc == 0x2209B4u) {
        ctx->pc = 0x2209B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209B0u;
        // 0x2209b4: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2209B8u;
        goto label_2209b8;
    }
    ctx->pc = 0x2209B0u;
    {
        const bool branch_taken_0x2209b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2209B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209B0u;
        // 0x2209b4: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209b0) {
            ctx->pc = 0x2209C4u;
            goto label_2209c4;
        }
    }
    ctx->pc = 0x2209B8u;
label_2209b8:
    // 0x2209b8: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x2209b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2209bc:
    // 0x2209bc: 0x1483007e  bne         $a0, $v1, . + 4 + (0x7E << 2)
label_2209c0:
    if (ctx->pc == 0x2209C0u) {
        ctx->pc = 0x2209C4u;
        goto label_2209c4;
    }
    ctx->pc = 0x2209BCu;
    {
        const bool branch_taken_0x2209bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2209bc) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x2209C4u;
label_2209c4:
    // 0x2209c4: 0xc0882f8  jal         func_220BE0
label_2209c8:
    if (ctx->pc == 0x2209C8u) {
        ctx->pc = 0x2209CCu;
        goto label_2209cc;
    }
    ctx->pc = 0x2209C4u;
    SET_GPR_U32(ctx, 31, 0x2209CCu);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x2209CCu;
label_2209cc:
    // 0x2209cc: 0x1000007a  b           . + 4 + (0x7A << 2)
label_2209d0:
    if (ctx->pc == 0x2209D0u) {
        ctx->pc = 0x2209D4u;
        goto label_2209d4;
    }
    ctx->pc = 0x2209CCu;
    {
        const bool branch_taken_0x2209cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2209cc) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x2209D4u;
label_2209d4:
    // 0x2209d4: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_2209d8:
    if (ctx->pc == 0x2209D8u) {
        ctx->pc = 0x2209D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209D4u;
        // 0x2209d8: 0x240500d7  addiu       $a1, $zero, 0xD7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2209DCu;
        goto label_2209dc;
    }
    ctx->pc = 0x2209D4u;
    {
        const bool branch_taken_0x2209d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2209D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209D4u;
        // 0x2209d8: 0x240500d7  addiu       $a1, $zero, 0xD7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209d4) {
            ctx->pc = 0x2209F4u;
            goto label_2209f4;
        }
    }
    ctx->pc = 0x2209DCu;
label_2209dc:
    // 0x2209dc: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2209dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2209e0:
    // 0x2209e0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2209e4:
    if (ctx->pc == 0x2209E4u) {
        ctx->pc = 0x2209E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209E0u;
        // 0x2209e4: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2209E8u;
        goto label_2209e8;
    }
    ctx->pc = 0x2209E0u;
    {
        const bool branch_taken_0x2209e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2209E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209E0u;
        // 0x2209e4: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209e0) {
            ctx->pc = 0x2209F0u;
            goto label_2209f0;
        }
    }
    ctx->pc = 0x2209E8u;
label_2209e8:
    // 0x2209e8: 0x14830073  bne         $a0, $v1, . + 4 + (0x73 << 2)
label_2209ec:
    if (ctx->pc == 0x2209ECu) {
        ctx->pc = 0x2209F0u;
        goto label_2209f0;
    }
    ctx->pc = 0x2209E8u;
    {
        const bool branch_taken_0x2209e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2209e8) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x2209F0u;
label_2209f0:
    // 0x2209f0: 0x240500d7  addiu       $a1, $zero, 0xD7
    ctx->pc = 0x2209f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
label_2209f4:
    // 0x2209f4: 0xc0882f8  jal         func_220BE0
label_2209f8:
    if (ctx->pc == 0x2209F8u) {
        ctx->pc = 0x2209FCu;
        goto label_2209fc;
    }
    ctx->pc = 0x2209F4u;
    SET_GPR_U32(ctx, 31, 0x2209FCu);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x2209FCu;
label_2209fc:
    // 0x2209fc: 0x1000006e  b           . + 4 + (0x6E << 2)
label_220a00:
    if (ctx->pc == 0x220A00u) {
        ctx->pc = 0x220A04u;
        goto label_220a04;
    }
    ctx->pc = 0x2209FCu;
    {
        const bool branch_taken_0x2209fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2209fc) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220A04u;
label_220a04:
    // 0x220a04: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_220a08:
    if (ctx->pc == 0x220A08u) {
        ctx->pc = 0x220A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A04u;
        // 0x220a08: 0x240500bd  addiu       $a1, $zero, 0xBD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220A0Cu;
        goto label_220a0c;
    }
    ctx->pc = 0x220A04u;
    {
        const bool branch_taken_0x220a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A04u;
        // 0x220a08: 0x240500bd  addiu       $a1, $zero, 0xBD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a04) {
            ctx->pc = 0x220A24u;
            goto label_220a24;
        }
    }
    ctx->pc = 0x220A0Cu;
label_220a0c:
    // 0x220a0c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_220a10:
    // 0x220a10: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_220a14:
    if (ctx->pc == 0x220A14u) {
        ctx->pc = 0x220A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A10u;
        // 0x220a14: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220A18u;
        goto label_220a18;
    }
    ctx->pc = 0x220A10u;
    {
        const bool branch_taken_0x220a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A10u;
        // 0x220a14: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a10) {
            ctx->pc = 0x220A20u;
            goto label_220a20;
        }
    }
    ctx->pc = 0x220A18u;
label_220a18:
    // 0x220a18: 0x14830067  bne         $a0, $v1, . + 4 + (0x67 << 2)
label_220a1c:
    if (ctx->pc == 0x220A1Cu) {
        ctx->pc = 0x220A20u;
        goto label_220a20;
    }
    ctx->pc = 0x220A18u;
    {
        const bool branch_taken_0x220a18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x220a18) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220A20u;
label_220a20:
    // 0x220a20: 0x240500bd  addiu       $a1, $zero, 0xBD
    ctx->pc = 0x220a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_220a24:
    // 0x220a24: 0xc0882f8  jal         func_220BE0
label_220a28:
    if (ctx->pc == 0x220A28u) {
        ctx->pc = 0x220A2Cu;
        goto label_220a2c;
    }
    ctx->pc = 0x220A24u;
    SET_GPR_U32(ctx, 31, 0x220A2Cu);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220A2Cu;
label_220a2c:
    // 0x220a2c: 0x10000062  b           . + 4 + (0x62 << 2)
label_220a30:
    if (ctx->pc == 0x220A30u) {
        ctx->pc = 0x220A34u;
        goto label_220a34;
    }
    ctx->pc = 0x220A2Cu;
    {
        const bool branch_taken_0x220a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220a2c) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220A34u;
label_220a34:
    // 0x220a34: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_220a38:
    if (ctx->pc == 0x220A38u) {
        ctx->pc = 0x220A3Cu;
        goto label_220a3c;
    }
    ctx->pc = 0x220A34u;
    {
        const bool branch_taken_0x220a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x220a34) {
            ctx->pc = 0x220A44u;
            goto label_220a44;
        }
    }
    ctx->pc = 0x220A3Cu;
label_220a3c:
    // 0x220a3c: 0x1485005e  bne         $a0, $a1, . + 4 + (0x5E << 2)
label_220a40:
    if (ctx->pc == 0x220A40u) {
        ctx->pc = 0x220A44u;
        goto label_220a44;
    }
    ctx->pc = 0x220A3Cu;
    {
        const bool branch_taken_0x220a3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x220a3c) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220A44u;
label_220a44:
    // 0x220a44: 0xc0882f8  jal         func_220BE0
label_220a48:
    if (ctx->pc == 0x220A48u) {
        ctx->pc = 0x220A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A44u;
        // 0x220a48: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220A4Cu;
        goto label_220a4c;
    }
    ctx->pc = 0x220A44u;
    SET_GPR_U32(ctx, 31, 0x220A4Cu);
    ctx->pc = 0x220A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A44u;
    // 0x220a48: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220A4Cu;
label_220a4c:
    // 0x220a4c: 0x1000005a  b           . + 4 + (0x5A << 2)
label_220a50:
    if (ctx->pc == 0x220A50u) {
        ctx->pc = 0x220A54u;
        goto label_220a54;
    }
    ctx->pc = 0x220A4Cu;
    {
        const bool branch_taken_0x220a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220a4c) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220A54u;
label_220a54:
    // 0x220a54: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_220a58:
    if (ctx->pc == 0x220A58u) {
        ctx->pc = 0x220A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A54u;
        // 0x220a58: 0x2483ffed  addiu       $v1, $a0, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967277));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220A5Cu;
        goto label_220a5c;
    }
    ctx->pc = 0x220A54u;
    {
        const bool branch_taken_0x220a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A54u;
        // 0x220a58: 0x2483ffed  addiu       $v1, $a0, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a54) {
            ctx->pc = 0x220A70u;
            goto label_220a70;
        }
    }
    ctx->pc = 0x220A5Cu;
label_220a5c:
    // 0x220a5c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x220a5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_220a60:
    // 0x220a60: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_220a64:
    if (ctx->pc == 0x220A64u) {
        ctx->pc = 0x220A68u;
        goto label_220a68;
    }
    ctx->pc = 0x220A60u;
    {
        const bool branch_taken_0x220a60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x220a60) {
            ctx->pc = 0x220A70u;
            goto label_220a70;
        }
    }
    ctx->pc = 0x220A68u;
label_220a68:
    // 0x220a68: 0x14850053  bne         $a0, $a1, . + 4 + (0x53 << 2)
label_220a6c:
    if (ctx->pc == 0x220A6Cu) {
        ctx->pc = 0x220A70u;
        goto label_220a70;
    }
    ctx->pc = 0x220A68u;
    {
        const bool branch_taken_0x220a68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x220a68) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220A70u;
label_220a70:
    // 0x220a70: 0xc0882f8  jal         func_220BE0
label_220a74:
    if (ctx->pc == 0x220A74u) {
        ctx->pc = 0x220A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A70u;
        // 0x220a74: 0x2405009d  addiu       $a1, $zero, 0x9D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220A78u;
        goto label_220a78;
    }
    ctx->pc = 0x220A70u;
    SET_GPR_U32(ctx, 31, 0x220A78u);
    ctx->pc = 0x220A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A70u;
    // 0x220a74: 0x2405009d  addiu       $a1, $zero, 0x9D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220A78u;
label_220a78:
    // 0x220a78: 0x1000004f  b           . + 4 + (0x4F << 2)
label_220a7c:
    if (ctx->pc == 0x220A7Cu) {
        ctx->pc = 0x220A80u;
        goto label_220a80;
    }
    ctx->pc = 0x220A78u;
    {
        const bool branch_taken_0x220a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220a78) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220A80u;
label_220a80:
    // 0x220a80: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_220a84:
    if (ctx->pc == 0x220A84u) {
        ctx->pc = 0x220A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A80u;
        // 0x220a84: 0x240500bb  addiu       $a1, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220A88u;
        goto label_220a88;
    }
    ctx->pc = 0x220A80u;
    {
        const bool branch_taken_0x220a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A80u;
        // 0x220a84: 0x240500bb  addiu       $a1, $zero, 0xBB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a80) {
            ctx->pc = 0x220AA0u;
            goto label_220aa0;
        }
    }
    ctx->pc = 0x220A88u;
label_220a88:
    // 0x220a88: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x220a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_220a8c:
    // 0x220a8c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_220a90:
    if (ctx->pc == 0x220A90u) {
        ctx->pc = 0x220A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A8Cu;
        // 0x220a90: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220A94u;
        goto label_220a94;
    }
    ctx->pc = 0x220A8Cu;
    {
        const bool branch_taken_0x220a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A8Cu;
        // 0x220a90: 0x24030019  addiu       $v1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a8c) {
            ctx->pc = 0x220A9Cu;
            goto label_220a9c;
        }
    }
    ctx->pc = 0x220A94u;
label_220a94:
    // 0x220a94: 0x14830048  bne         $a0, $v1, . + 4 + (0x48 << 2)
label_220a98:
    if (ctx->pc == 0x220A98u) {
        ctx->pc = 0x220A9Cu;
        goto label_220a9c;
    }
    ctx->pc = 0x220A94u;
    {
        const bool branch_taken_0x220a94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x220a94) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220A9Cu;
label_220a9c:
    // 0x220a9c: 0x240500bb  addiu       $a1, $zero, 0xBB
    ctx->pc = 0x220a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
label_220aa0:
    // 0x220aa0: 0xc0882f8  jal         func_220BE0
label_220aa4:
    if (ctx->pc == 0x220AA4u) {
        ctx->pc = 0x220AA8u;
        goto label_220aa8;
    }
    ctx->pc = 0x220AA0u;
    SET_GPR_U32(ctx, 31, 0x220AA8u);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220AA8u;
label_220aa8:
    // 0x220aa8: 0x10000043  b           . + 4 + (0x43 << 2)
label_220aac:
    if (ctx->pc == 0x220AACu) {
        ctx->pc = 0x220AB0u;
        goto label_220ab0;
    }
    ctx->pc = 0x220AA8u;
    {
        const bool branch_taken_0x220aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220aa8) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220AB0u;
label_220ab0:
    // 0x220ab0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_220ab4:
    if (ctx->pc == 0x220AB4u) {
        ctx->pc = 0x220AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AB0u;
        // 0x220ab4: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220AB8u;
        goto label_220ab8;
    }
    ctx->pc = 0x220AB0u;
    {
        const bool branch_taken_0x220ab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x220AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AB0u;
        // 0x220ab4: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ab0) {
            ctx->pc = 0x220AD0u;
            goto label_220ad0;
        }
    }
    ctx->pc = 0x220AB8u;
label_220ab8:
    // 0x220ab8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x220ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220abc:
    // 0x220abc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_220ac0:
    if (ctx->pc == 0x220AC0u) {
        ctx->pc = 0x220AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220ABCu;
        // 0x220ac0: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220AC4u;
        goto label_220ac4;
    }
    ctx->pc = 0x220ABCu;
    {
        const bool branch_taken_0x220abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220ABCu;
        // 0x220ac0: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220abc) {
            ctx->pc = 0x220ACCu;
            goto label_220acc;
        }
    }
    ctx->pc = 0x220AC4u;
label_220ac4:
    // 0x220ac4: 0x1483003c  bne         $a0, $v1, . + 4 + (0x3C << 2)
label_220ac8:
    if (ctx->pc == 0x220AC8u) {
        ctx->pc = 0x220ACCu;
        goto label_220acc;
    }
    ctx->pc = 0x220AC4u;
    {
        const bool branch_taken_0x220ac4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x220ac4) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220ACCu;
label_220acc:
    // 0x220acc: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x220accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_220ad0:
    // 0x220ad0: 0xc0882f8  jal         func_220BE0
label_220ad4:
    if (ctx->pc == 0x220AD4u) {
        ctx->pc = 0x220AD8u;
        goto label_220ad8;
    }
    ctx->pc = 0x220AD0u;
    SET_GPR_U32(ctx, 31, 0x220AD8u);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220AD8u;
label_220ad8:
    // 0x220ad8: 0x10000037  b           . + 4 + (0x37 << 2)
label_220adc:
    if (ctx->pc == 0x220ADCu) {
        ctx->pc = 0x220AE0u;
        goto label_220ae0;
    }
    ctx->pc = 0x220AD8u;
    {
        const bool branch_taken_0x220ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220ad8) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220AE0u;
label_220ae0:
    // 0x220ae0: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_220ae4:
    if (ctx->pc == 0x220AE4u) {
        ctx->pc = 0x220AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AE0u;
        // 0x220ae4: 0x240500e4  addiu       $a1, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220AE8u;
        goto label_220ae8;
    }
    ctx->pc = 0x220AE0u;
    {
        const bool branch_taken_0x220ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AE0u;
        // 0x220ae4: 0x240500e4  addiu       $a1, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ae0) {
            ctx->pc = 0x220B04u;
            goto label_220b04;
        }
    }
    ctx->pc = 0x220AE8u;
label_220ae8:
    // 0x220ae8: 0x2483ffe8  addiu       $v1, $a0, -0x18
    ctx->pc = 0x220ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
label_220aec:
    // 0x220aec: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x220aecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_220af0:
    // 0x220af0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_220af4:
    if (ctx->pc == 0x220AF4u) {
        ctx->pc = 0x220AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AF0u;
        // 0x220af4: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220AF8u;
        goto label_220af8;
    }
    ctx->pc = 0x220AF0u;
    {
        const bool branch_taken_0x220af0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x220AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AF0u;
        // 0x220af4: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220af0) {
            ctx->pc = 0x220B00u;
            goto label_220b00;
        }
    }
    ctx->pc = 0x220AF8u;
label_220af8:
    // 0x220af8: 0x1483002f  bne         $a0, $v1, . + 4 + (0x2F << 2)
label_220afc:
    if (ctx->pc == 0x220AFCu) {
        ctx->pc = 0x220B00u;
        goto label_220b00;
    }
    ctx->pc = 0x220AF8u;
    {
        const bool branch_taken_0x220af8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x220af8) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220B00u;
label_220b00:
    // 0x220b00: 0x240500e4  addiu       $a1, $zero, 0xE4
    ctx->pc = 0x220b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_220b04:
    // 0x220b04: 0xc0882f8  jal         func_220BE0
label_220b08:
    if (ctx->pc == 0x220B08u) {
        ctx->pc = 0x220B0Cu;
        goto label_220b0c;
    }
    ctx->pc = 0x220B04u;
    SET_GPR_U32(ctx, 31, 0x220B0Cu);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220B0Cu;
label_220b0c:
    // 0x220b0c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_220b10:
    if (ctx->pc == 0x220B10u) {
        ctx->pc = 0x220B14u;
        goto label_220b14;
    }
    ctx->pc = 0x220B0Cu;
    {
        const bool branch_taken_0x220b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220b0c) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220B14u;
label_220b14:
    // 0x220b14: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_220b18:
    if (ctx->pc == 0x220B18u) {
        ctx->pc = 0x220B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B14u;
        // 0x220b18: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B1Cu;
        goto label_220b1c;
    }
    ctx->pc = 0x220B14u;
    {
        const bool branch_taken_0x220b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B14u;
        // 0x220b18: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b14) {
            ctx->pc = 0x220B34u;
            goto label_220b34;
        }
    }
    ctx->pc = 0x220B1Cu;
label_220b1c:
    // 0x220b1c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x220b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_220b20:
    // 0x220b20: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_220b24:
    if (ctx->pc == 0x220B24u) {
        ctx->pc = 0x220B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B20u;
        // 0x220b24: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B28u;
        goto label_220b28;
    }
    ctx->pc = 0x220B20u;
    {
        const bool branch_taken_0x220b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B20u;
        // 0x220b24: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b20) {
            ctx->pc = 0x220B30u;
            goto label_220b30;
        }
    }
    ctx->pc = 0x220B28u;
label_220b28:
    // 0x220b28: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
label_220b2c:
    if (ctx->pc == 0x220B2Cu) {
        ctx->pc = 0x220B30u;
        goto label_220b30;
    }
    ctx->pc = 0x220B28u;
    {
        const bool branch_taken_0x220b28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x220b28) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220B30u;
label_220b30:
    // 0x220b30: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x220b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_220b34:
    // 0x220b34: 0xc0882f8  jal         func_220BE0
label_220b38:
    if (ctx->pc == 0x220B38u) {
        ctx->pc = 0x220B3Cu;
        goto label_220b3c;
    }
    ctx->pc = 0x220B34u;
    SET_GPR_U32(ctx, 31, 0x220B3Cu);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220B3Cu;
label_220b3c:
    // 0x220b3c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_220b40:
    if (ctx->pc == 0x220B40u) {
        ctx->pc = 0x220B44u;
        goto label_220b44;
    }
    ctx->pc = 0x220B3Cu;
    {
        const bool branch_taken_0x220b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220b3c) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220B44u;
label_220b44:
    // 0x220b44: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
label_220b48:
    if (ctx->pc == 0x220B48u) {
        ctx->pc = 0x220B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B44u;
        // 0x220b48: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B4Cu;
        goto label_220b4c;
    }
    ctx->pc = 0x220B44u;
    {
        const bool branch_taken_0x220b44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x220B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B44u;
        // 0x220b48: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b44) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220B4Cu;
label_220b4c:
    // 0x220b4c: 0xc0882f8  jal         func_220BE0
label_220b50:
    if (ctx->pc == 0x220B50u) {
        ctx->pc = 0x220B54u;
        goto label_220b54;
    }
    ctx->pc = 0x220B4Cu;
    SET_GPR_U32(ctx, 31, 0x220B54u);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220B54u;
label_220b54:
    // 0x220b54: 0x10000018  b           . + 4 + (0x18 << 2)
label_220b58:
    if (ctx->pc == 0x220B58u) {
        ctx->pc = 0x220B5Cu;
        goto label_220b5c;
    }
    ctx->pc = 0x220B54u;
    {
        const bool branch_taken_0x220b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220b54) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220B5Cu;
label_220b5c:
    // 0x220b5c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_220b60:
    if (ctx->pc == 0x220B60u) {
        ctx->pc = 0x220B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B5Cu;
        // 0x220b60: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B64u;
        goto label_220b64;
    }
    ctx->pc = 0x220B5Cu;
    {
        const bool branch_taken_0x220b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B5Cu;
        // 0x220b60: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b5c) {
            ctx->pc = 0x220B70u;
            goto label_220b70;
        }
    }
    ctx->pc = 0x220B64u;
label_220b64:
    // 0x220b64: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x220b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_220b68:
    // 0x220b68: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
label_220b6c:
    if (ctx->pc == 0x220B6Cu) {
        ctx->pc = 0x220B70u;
        goto label_220b70;
    }
    ctx->pc = 0x220B68u;
    {
        const bool branch_taken_0x220b68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x220b68) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220B70u;
label_220b70:
    // 0x220b70: 0xc0882f8  jal         func_220BE0
label_220b74:
    if (ctx->pc == 0x220B74u) {
        ctx->pc = 0x220B78u;
        goto label_220b78;
    }
    ctx->pc = 0x220B70u;
    SET_GPR_U32(ctx, 31, 0x220B78u);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220B78u;
label_220b78:
    // 0x220b78: 0x1000000f  b           . + 4 + (0xF << 2)
label_220b7c:
    if (ctx->pc == 0x220B7Cu) {
        ctx->pc = 0x220B80u;
        goto label_220b80;
    }
    ctx->pc = 0x220B78u;
    {
        const bool branch_taken_0x220b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220b78) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220B80u;
label_220b80:
    // 0x220b80: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x220b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_220b84:
    // 0x220b84: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_220b88:
    if (ctx->pc == 0x220B88u) {
        ctx->pc = 0x220B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B84u;
        // 0x220b88: 0x240500e3  addiu       $a1, $zero, 0xE3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B8Cu;
        goto label_220b8c;
    }
    ctx->pc = 0x220B84u;
    {
        const bool branch_taken_0x220b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B84u;
        // 0x220b88: 0x240500e3  addiu       $a1, $zero, 0xE3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b84) {
            ctx->pc = 0x220BB0u;
            goto label_220bb0;
        }
    }
    ctx->pc = 0x220B8Cu;
label_220b8c:
    // 0x220b8c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x220b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_220b90:
    // 0x220b90: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_220b94:
    if (ctx->pc == 0x220B94u) {
        ctx->pc = 0x220B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B90u;
        // 0x220b94: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B98u;
        goto label_220b98;
    }
    ctx->pc = 0x220B90u;
    {
        const bool branch_taken_0x220b90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x220B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B90u;
        // 0x220b94: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b90) {
            ctx->pc = 0x220BACu;
            goto label_220bac;
        }
    }
    ctx->pc = 0x220B98u;
label_220b98:
    // 0x220b98: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_220b9c:
    if (ctx->pc == 0x220B9Cu) {
        ctx->pc = 0x220BA0u;
        goto label_220ba0;
    }
    ctx->pc = 0x220B98u;
    {
        const bool branch_taken_0x220b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x220b98) {
            ctx->pc = 0x220BACu;
            goto label_220bac;
        }
    }
    ctx->pc = 0x220BA0u;
label_220ba0:
    // 0x220ba0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x220ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_220ba4:
    // 0x220ba4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_220ba8:
    if (ctx->pc == 0x220BA8u) {
        ctx->pc = 0x220BACu;
        goto label_220bac;
    }
    ctx->pc = 0x220BA4u;
    {
        const bool branch_taken_0x220ba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x220ba4) {
            ctx->pc = 0x220BB8u;
            goto label_220bb8;
        }
    }
    ctx->pc = 0x220BACu;
label_220bac:
    // 0x220bac: 0x240500e3  addiu       $a1, $zero, 0xE3
    ctx->pc = 0x220bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
label_220bb0:
    // 0x220bb0: 0xc0882f8  jal         func_220BE0
label_220bb4:
    if (ctx->pc == 0x220BB4u) {
        ctx->pc = 0x220BB8u;
        goto label_220bb8;
    }
    ctx->pc = 0x220BB0u;
    SET_GPR_U32(ctx, 31, 0x220BB8u);
    ctx->pc = 0x220BE0u;
    goto label_220be0;
    ctx->pc = 0x220BB8u;
label_220bb8:
    // 0x220bb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x220bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_220bbc:
    // 0x220bbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x220bbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_220bc0:
    // 0x220bc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x220bc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_220bc4:
    // 0x220bc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x220bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_220bc8:
    // 0x220bc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x220bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_220bcc:
    // 0x220bcc: 0x3e00008  jr          $ra
label_220bd0:
    if (ctx->pc == 0x220BD0u) {
        ctx->pc = 0x220BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BCCu;
        // 0x220bd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220BD4u;
        goto label_220bd4;
    }
    ctx->pc = 0x220BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BCCu;
        // 0x220bd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220BD4u;
label_220bd4:
    // 0x220bd4: 0x0  nop
    ctx->pc = 0x220bd4u;
    // NOP
label_220bd8:
    // 0x220bd8: 0x0  nop
    ctx->pc = 0x220bd8u;
    // NOP
label_220bdc:
    // 0x220bdc: 0x0  nop
    ctx->pc = 0x220bdcu;
    // NOP
label_220be0:
    // 0x220be0: 0x3c090030  lui         $t1, 0x30
    ctx->pc = 0x220be0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)48 << 16));
label_220be4:
    // 0x220be4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x220be4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220be8:
    // 0x220be8: 0x2529b4e0  addiu       $t1, $t1, -0x4B20
    ctx->pc = 0x220be8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294948064));
label_220bec:
    // 0x220bec: 0x24080077  addiu       $t0, $zero, 0x77
    ctx->pc = 0x220becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_220bf0:
    // 0x220bf0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x220bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_220bf4:
    // 0x220bf4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x220bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_220bf8:
    // 0x220bf8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x220bf8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220bfc:
    // 0x220bfc: 0x0  nop
    ctx->pc = 0x220bfcu;
    // NOP
label_220c00:
    // 0x220c00: 0x9523000a  lhu         $v1, 0xA($t1)
    ctx->pc = 0x220c00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
label_220c04:
    // 0x220c04: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
label_220c08:
    if (ctx->pc == 0x220C08u) {
        ctx->pc = 0x220C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C04u;
        // 0x220c08: 0x28810029  slti        $at, $a0, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x220C0Cu;
        goto label_220c0c;
    }
    ctx->pc = 0x220C04u;
    {
        const bool branch_taken_0x220c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x220C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C04u;
        // 0x220c08: 0x28810029  slti        $at, $a0, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c04) {
            ctx->pc = 0x220C2Cu;
            goto label_220c2c;
        }
    }
    ctx->pc = 0x220C0Cu;
label_220c0c:
    // 0x220c0c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_220c10:
    if (ctx->pc == 0x220C10u) {
        ctx->pc = 0x220C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C0Cu;
        // 0x220c10: 0xa525000a  sh          $a1, 0xA($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 10), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220C14u;
        goto label_220c14;
    }
    ctx->pc = 0x220C0Cu;
    {
        const bool branch_taken_0x220c0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x220C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C0Cu;
        // 0x220c10: 0xa525000a  sh          $a1, 0xA($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 10), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c0c) {
            ctx->pc = 0x220C18u;
            goto label_220c18;
        }
    }
    ctx->pc = 0x220C14u;
label_220c14:
    // 0x220c14: 0xa1280018  sb          $t0, 0x18($t1)
    ctx->pc = 0x220c14u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 24), (uint8_t)GPR_U32(ctx, 8));
label_220c18:
    // 0x220c18: 0x91230010  lbu         $v1, 0x10($t1)
    ctx->pc = 0x220c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 16)));
label_220c1c:
    // 0x220c1c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_220c20:
    if (ctx->pc == 0x220C20u) {
        ctx->pc = 0x220C24u;
        goto label_220c24;
    }
    ctx->pc = 0x220C1Cu;
    {
        const bool branch_taken_0x220c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x220c1c) {
            ctx->pc = 0x220C40u;
            goto label_220c40;
        }
    }
    ctx->pc = 0x220C24u;
label_220c24:
    // 0x220c24: 0x10000006  b           . + 4 + (0x6 << 2)
label_220c28:
    if (ctx->pc == 0x220C28u) {
        ctx->pc = 0x220C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C24u;
        // 0x220c28: 0xa1270010  sb          $a3, 0x10($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 16), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220C2Cu;
        goto label_220c2c;
    }
    ctx->pc = 0x220C24u;
    {
        const bool branch_taken_0x220c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C24u;
        // 0x220c28: 0xa1270010  sb          $a3, 0x10($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 16), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c24) {
            ctx->pc = 0x220C40u;
            goto label_220c40;
        }
    }
    ctx->pc = 0x220C2Cu;
label_220c2c:
    // 0x220c2c: 0x0  nop
    ctx->pc = 0x220c2cu;
    // NOP
label_220c30:
    // 0x220c30: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x220c30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_220c34:
    // 0x220c34: 0x296300ff  slti        $v1, $t3, 0xFF
    ctx->pc = 0x220c34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)255) ? 1 : 0);
label_220c38:
    // 0x220c38: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_220c3c:
    if (ctx->pc == 0x220C3Cu) {
        ctx->pc = 0x220C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C38u;
        // 0x220c3c: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220C40u;
        goto label_220c40;
    }
    ctx->pc = 0x220C38u;
    {
        const bool branch_taken_0x220c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C38u;
        // 0x220c3c: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c38) {
            ctx->pc = 0x220BFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220bfc;
        }
    }
    ctx->pc = 0x220C40u;
label_220c40:
    // 0x220c40: 0x15660005  bne         $t3, $a2, . + 4 + (0x5 << 2)
label_220c44:
    if (ctx->pc == 0x220C44u) {
        ctx->pc = 0x220C48u;
        goto label_220c48;
    }
    ctx->pc = 0x220C40u;
    {
        const bool branch_taken_0x220c40 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 6));
        if (branch_taken_0x220c40) {
            ctx->pc = 0x220C58u;
            goto label_220c58;
        }
    }
    ctx->pc = 0x220C48u;
label_220c48:
    // 0x220c48: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x220c48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_220c4c:
    // 0x220c4c: 0x29430002  slti        $v1, $t2, 0x2
    ctx->pc = 0x220c4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
label_220c50:
    // 0x220c50: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_220c54:
    if (ctx->pc == 0x220C54u) {
        ctx->pc = 0x220C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C50u;
        // 0x220c54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220C58u;
        goto label_220c58;
    }
    ctx->pc = 0x220C50u;
    {
        const bool branch_taken_0x220c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C50u;
        // 0x220c54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c50) {
            ctx->pc = 0x220BFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220bfc;
        }
    }
    ctx->pc = 0x220C58u;
label_220c58:
    // 0x220c58: 0x3e00008  jr          $ra
label_220c5c:
    if (ctx->pc == 0x220C5Cu) {
        ctx->pc = 0x220C60u;
        goto label_220c60;
    }
    ctx->pc = 0x220C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220C60u;
label_220c60:
    // 0x220c60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x220c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_220c64:
    // 0x220c64: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x220c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_220c68:
    // 0x220c68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x220c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_220c6c:
    // 0x220c6c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x220c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_220c70:
    // 0x220c70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x220c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_220c74:
    // 0x220c74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x220c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_220c78:
    // 0x220c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x220c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_220c7c:
    // 0x220c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x220c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_220c80:
    // 0x220c80: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x220c80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_220c84:
    // 0x220c84: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_220c88:
    if (ctx->pc == 0x220C88u) {
        ctx->pc = 0x220C8Cu;
        goto label_220c8c;
    }
    ctx->pc = 0x220C84u;
    {
        const bool branch_taken_0x220c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x220c84) {
            ctx->pc = 0x220C9Cu;
            goto label_220c9c;
        }
    }
    ctx->pc = 0x220C8Cu;
label_220c8c:
    // 0x220c8c: 0xc08839c  jal         func_220E70
label_220c90:
    if (ctx->pc == 0x220C90u) {
        ctx->pc = 0x220C94u;
        goto label_220c94;
    }
    ctx->pc = 0x220C8Cu;
    SET_GPR_U32(ctx, 31, 0x220C94u);
    ctx->pc = 0x220E70u;
    { ctx->pc = 0x220e70; return; }
    ctx->pc = 0x220C94u;
label_220c94:
    // 0x220c94: 0x1000001c  b           . + 4 + (0x1C << 2)
label_220c98:
    if (ctx->pc == 0x220C98u) {
        ctx->pc = 0x220C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C94u;
        // 0x220c98: 0x8f848590  lw          $a0, -0x7A70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220C9Cu;
        goto label_220c9c;
    }
    ctx->pc = 0x220C94u;
    {
        const bool branch_taken_0x220c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C94u;
        // 0x220c98: 0x8f848590  lw          $a0, -0x7A70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c94) {
            ctx->pc = 0x220D08u;
            goto label_220d08;
        }
    }
    ctx->pc = 0x220C9Cu;
label_220c9c:
    // 0x220c9c: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x220c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_220ca0:
    // 0x220ca0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x220ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_220ca4:
    // 0x220ca4: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_220ca8:
    if (ctx->pc == 0x220CA8u) {
        ctx->pc = 0x220CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CA4u;
        // 0x220ca8: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220CACu;
        goto label_220cac;
    }
    ctx->pc = 0x220CA4u;
    {
        const bool branch_taken_0x220ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CA4u;
        // 0x220ca8: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ca4) {
            ctx->pc = 0x220D04u;
            goto label_220d04;
        }
    }
    ctx->pc = 0x220CACu;
label_220cac:
    // 0x220cac: 0xc044894  jal         func_112250
label_220cb0:
    if (ctx->pc == 0x220CB0u) {
        ctx->pc = 0x220CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CACu;
        // 0x220cb0: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220CB4u;
        goto label_220cb4;
    }
    ctx->pc = 0x220CACu;
    SET_GPR_U32(ctx, 31, 0x220CB4u);
    ctx->pc = 0x220CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220CACu;
    // 0x220cb0: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x220CACu, 0x220CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CB4u;
label_220cb4:
    // 0x220cb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_220cb8:
    if (ctx->pc == 0x220CB8u) {
        ctx->pc = 0x220CBCu;
        goto label_220cbc;
    }
    ctx->pc = 0x220CB4u;
    {
        const bool branch_taken_0x220cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220cb4) {
            ctx->pc = 0x220CD8u;
            goto label_220cd8;
        }
    }
    ctx->pc = 0x220CBCu;
label_220cbc:
    // 0x220cbc: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x220cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_220cc0:
    // 0x220cc0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x220cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_220cc4:
    // 0x220cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220cc8:
    // 0x220cc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220cc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220ccc:
    // 0x220ccc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x220cccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220cd0:
    // 0x220cd0: 0xc05d3e4  jal         func_174F90
label_220cd4:
    if (ctx->pc == 0x220CD4u) {
        ctx->pc = 0x220CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CD0u;
        // 0x220cd4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220CD8u;
        goto label_220cd8;
    }
    ctx->pc = 0x220CD0u;
    SET_GPR_U32(ctx, 31, 0x220CD8u);
    ctx->pc = 0x220CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220CD0u;
    // 0x220cd4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x220CD0u, 0x220CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CD8u;
label_220cd8:
    // 0x220cd8: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x220cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_220cdc:
    // 0x220cdc: 0xc044894  jal         func_112250
label_220ce0:
    if (ctx->pc == 0x220CE0u) {
        ctx->pc = 0x220CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CDCu;
        // 0x220ce0: 0x24846d28  addiu       $a0, $a0, 0x6D28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220CE4u;
        goto label_220ce4;
    }
    ctx->pc = 0x220CDCu;
    SET_GPR_U32(ctx, 31, 0x220CE4u);
    ctx->pc = 0x220CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220CDCu;
    // 0x220ce0: 0x24846d28  addiu       $a0, $a0, 0x6D28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x220CDCu, 0x220CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CE4u;
label_220ce4:
    // 0x220ce4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_220ce8:
    if (ctx->pc == 0x220CE8u) {
        ctx->pc = 0x220CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CE4u;
        // 0x220ce8: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220CECu;
        goto label_220cec;
    }
    ctx->pc = 0x220CE4u;
    {
        const bool branch_taken_0x220ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CE4u;
        // 0x220ce8: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ce4) {
            ctx->pc = 0x220D04u;
            goto label_220d04;
        }
    }
    ctx->pc = 0x220CECu;
label_220cec:
    // 0x220cec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x220cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220cf0:
    // 0x220cf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220cf4:
    // 0x220cf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220cf8:
    // 0x220cf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x220cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220cfc:
    // 0x220cfc: 0xc05d3e4  jal         func_174F90
label_220d00:
    if (ctx->pc == 0x220D00u) {
        ctx->pc = 0x220D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CFCu;
        // 0x220d00: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220D04u;
        goto label_220d04;
    }
    ctx->pc = 0x220CFCu;
    SET_GPR_U32(ctx, 31, 0x220D04u);
    ctx->pc = 0x220D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220CFCu;
    // 0x220d00: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x220CFCu, 0x220D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D04u;
label_220d04:
    // 0x220d04: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x220d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_220d08:
    // 0x220d08: 0x30830060  andi        $v1, $a0, 0x60
    ctx->pc = 0x220d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
label_220d0c:
    // 0x220d0c: 0x14600050  bnez        $v1, . + 4 + (0x50 << 2)
label_220d10:
    if (ctx->pc == 0x220D10u) {
        ctx->pc = 0x220D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D0Cu;
        // 0x220d10: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x220D14u;
        goto label_220d14;
    }
    ctx->pc = 0x220D0Cu;
    {
        const bool branch_taken_0x220d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D0Cu;
        // 0x220d10: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d0c) {
            ctx->pc = 0x220E50u;
            { ctx->pc = 0x220e50; return; }
        }
    }
    ctx->pc = 0x220D14u;
label_220d14:
    // 0x220d14: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
label_220d18:
    if (ctx->pc == 0x220D18u) {
        ctx->pc = 0x220D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D14u;
        // 0x220d18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220D1Cu;
        goto label_220d1c;
    }
    ctx->pc = 0x220D14u;
    {
        const bool branch_taken_0x220d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D14u;
        // 0x220d18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d14) {
            ctx->pc = 0x220E50u;
            { ctx->pc = 0x220e50; return; }
        }
    }
    ctx->pc = 0x220D1Cu;
label_220d1c:
    // 0x220d1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x220d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220d20:
    // 0x220d20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x220d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220d24:
    // 0x220d24: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x220d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_220d28:
    // 0x220d28: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x220d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_220d2c:
    // 0x220d2c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x220d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_220d30:
    // 0x220d30: 0x24713620  addiu       $s1, $v1, 0x3620
    ctx->pc = 0x220d30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_220d34:
    // 0x220d34: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x220d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_220d38:
    // 0x220d38: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
label_220d3c:
    if (ctx->pc == 0x220D3Cu) {
        ctx->pc = 0x220D40u;
        goto label_220d40;
    }
    ctx->pc = 0x220D38u;
    {
        const bool branch_taken_0x220d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x220d38) {
            ctx->pc = 0x220DE4u;
            { ctx->pc = 0x220de4; return; }
        }
    }
    ctx->pc = 0x220D40u;
label_220d40:
    // 0x220d40: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x220d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_220d44:
    // 0x220d44: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x220d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_220d48:
    // 0x220d48: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x220d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_220d4c:
    // 0x220d4c: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x220d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_220d50:
    // 0x220d50: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x220d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_220d54:
    // 0x220d54: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x220d54u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_220d58:
    // 0x220d58: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x220d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_220d5c:
    // 0x220d5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_220d60:
    // 0x220d60: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x220d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_220d64:
    // 0x220d64: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x220d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_220d68:
    // 0x220d68: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x220d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_220d6c:
    // 0x220d6c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x220d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_220d70:
    // 0x220d70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x220d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_220d74:
    // 0x220d74: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x220d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_220d78:
    // 0x220d78: 0xc044894  jal         func_112250
label_220d7c:
    if (ctx->pc == 0x220D7Cu) {
        ctx->pc = 0x220D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D78u;
        // 0x220d7c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220D80u;
        goto label_220d80;
    }
    ctx->pc = 0x220D78u;
    SET_GPR_U32(ctx, 31, 0x220D80u);
    ctx->pc = 0x220D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D78u;
    // 0x220d7c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x220D78u, 0x220D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D80u;
label_220d80:
    // 0x220d80: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_220d84:
    if (ctx->pc == 0x220D84u) {
        ctx->pc = 0x220D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D80u;
        // 0x220d84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220D88u;
        goto label_220d88;
    }
    ctx->pc = 0x220D80u;
    {
        const bool branch_taken_0x220d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D80u;
        // 0x220d84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d80) {
            ctx->pc = 0x220DE4u;
            { ctx->pc = 0x220de4; return; }
        }
    }
    ctx->pc = 0x220D88u;
label_220d88:
    // 0x220d88: 0xc05d970  jal         func_1765C0
label_220d8c:
    if (ctx->pc == 0x220D8Cu) {
        ctx->pc = 0x220D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D88u;
        // 0x220d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220D90u;
        goto label_220d90;
    }
    ctx->pc = 0x220D88u;
    SET_GPR_U32(ctx, 31, 0x220D90u);
    ctx->pc = 0x220D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D88u;
    // 0x220d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1765C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1765C0u, 0x220D88u, 0x220D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D90u;
label_220d90:
    // 0x220d90: 0x8e2a0054  lw          $t2, 0x54($s1)
    ctx->pc = 0x220d90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_220d94:
    // 0x220d94: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x220d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_220d98:
    // 0x220d98: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x220d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_220d9c:
    // 0x220d9c: 0x8c2b4900  lw          $t3, 0x4900($at)
    ctx->pc = 0x220d9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_220da0:
    // 0x220da0: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x220da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_220da4:
    // 0x220da4: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x220da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_220da8:
    // 0x220da8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x220da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_220dac:
    // 0x220dac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220db0:
    // 0x220db0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220db4:
    // 0x220db4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x220db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220db8:
    // 0x220db8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x220db8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220dbc:
    // 0x220dbc: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x220dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_220dc0:
    // 0x220dc0: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x220dc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_220dc4:
    // 0x220dc4: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x220dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_220dc8:
    // 0x220dc8: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x220dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_220dcc:
    // 0x220dcc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x220dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_220dd0:
    // 0x220dd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_220dd4:
    // 0x220dd4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x220dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_220dd8:
    // 0x220dd8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x220dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_220ddc:
    // 0x220ddc: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x220de0u;
    return;
}

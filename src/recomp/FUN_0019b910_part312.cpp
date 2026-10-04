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


void FUN_0019b910_part312(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2336c0u: goto label_2336c0;
        case 0x2336c4u: goto label_2336c4;
        case 0x2336c8u: goto label_2336c8;
        case 0x2336ccu: goto label_2336cc;
        case 0x2336d0u: goto label_2336d0;
        case 0x2336d4u: goto label_2336d4;
        case 0x2336d8u: goto label_2336d8;
        case 0x2336dcu: goto label_2336dc;
        case 0x2336e0u: goto label_2336e0;
        case 0x2336e4u: goto label_2336e4;
        case 0x2336e8u: goto label_2336e8;
        case 0x2336ecu: goto label_2336ec;
        case 0x2336f0u: goto label_2336f0;
        case 0x2336f4u: goto label_2336f4;
        case 0x2336f8u: goto label_2336f8;
        case 0x2336fcu: goto label_2336fc;
        case 0x233700u: goto label_233700;
        case 0x233704u: goto label_233704;
        case 0x233708u: goto label_233708;
        case 0x23370cu: goto label_23370c;
        case 0x233710u: goto label_233710;
        case 0x233714u: goto label_233714;
        case 0x233718u: goto label_233718;
        case 0x23371cu: goto label_23371c;
        case 0x233720u: goto label_233720;
        case 0x233724u: goto label_233724;
        case 0x233728u: goto label_233728;
        case 0x23372cu: goto label_23372c;
        case 0x233730u: goto label_233730;
        case 0x233734u: goto label_233734;
        case 0x233738u: goto label_233738;
        case 0x23373cu: goto label_23373c;
        case 0x233740u: goto label_233740;
        case 0x233744u: goto label_233744;
        case 0x233748u: goto label_233748;
        case 0x23374cu: goto label_23374c;
        case 0x233750u: goto label_233750;
        case 0x233754u: goto label_233754;
        case 0x233758u: goto label_233758;
        case 0x23375cu: goto label_23375c;
        case 0x233760u: goto label_233760;
        case 0x233764u: goto label_233764;
        case 0x233768u: goto label_233768;
        case 0x23376cu: goto label_23376c;
        case 0x233770u: goto label_233770;
        case 0x233774u: goto label_233774;
        case 0x233778u: goto label_233778;
        case 0x23377cu: goto label_23377c;
        case 0x233780u: goto label_233780;
        case 0x233784u: goto label_233784;
        case 0x233788u: goto label_233788;
        case 0x23378cu: goto label_23378c;
        case 0x233790u: goto label_233790;
        case 0x233794u: goto label_233794;
        case 0x233798u: goto label_233798;
        case 0x23379cu: goto label_23379c;
        case 0x2337a0u: goto label_2337a0;
        case 0x2337a4u: goto label_2337a4;
        case 0x2337a8u: goto label_2337a8;
        case 0x2337acu: goto label_2337ac;
        case 0x2337b0u: goto label_2337b0;
        case 0x2337b4u: goto label_2337b4;
        case 0x2337b8u: goto label_2337b8;
        case 0x2337bcu: goto label_2337bc;
        case 0x2337c0u: goto label_2337c0;
        case 0x2337c4u: goto label_2337c4;
        case 0x2337c8u: goto label_2337c8;
        case 0x2337ccu: goto label_2337cc;
        case 0x2337d0u: goto label_2337d0;
        case 0x2337d4u: goto label_2337d4;
        case 0x2337d8u: goto label_2337d8;
        case 0x2337dcu: goto label_2337dc;
        case 0x2337e0u: goto label_2337e0;
        case 0x2337e4u: goto label_2337e4;
        case 0x2337e8u: goto label_2337e8;
        case 0x2337ecu: goto label_2337ec;
        case 0x2337f0u: goto label_2337f0;
        case 0x2337f4u: goto label_2337f4;
        case 0x2337f8u: goto label_2337f8;
        case 0x2337fcu: goto label_2337fc;
        case 0x233800u: goto label_233800;
        case 0x233804u: goto label_233804;
        case 0x233808u: goto label_233808;
        case 0x23380cu: goto label_23380c;
        case 0x233810u: goto label_233810;
        case 0x233814u: goto label_233814;
        case 0x233818u: goto label_233818;
        case 0x23381cu: goto label_23381c;
        case 0x233820u: goto label_233820;
        case 0x233824u: goto label_233824;
        case 0x233828u: goto label_233828;
        case 0x23382cu: goto label_23382c;
        case 0x233830u: goto label_233830;
        case 0x233834u: goto label_233834;
        case 0x233838u: goto label_233838;
        case 0x23383cu: goto label_23383c;
        case 0x233840u: goto label_233840;
        case 0x233844u: goto label_233844;
        case 0x233848u: goto label_233848;
        case 0x23384cu: goto label_23384c;
        case 0x233850u: goto label_233850;
        case 0x233854u: goto label_233854;
        case 0x233858u: goto label_233858;
        case 0x23385cu: goto label_23385c;
        case 0x233860u: goto label_233860;
        case 0x233864u: goto label_233864;
        case 0x233868u: goto label_233868;
        case 0x23386cu: goto label_23386c;
        case 0x233870u: goto label_233870;
        case 0x233874u: goto label_233874;
        case 0x233878u: goto label_233878;
        case 0x23387cu: goto label_23387c;
        case 0x233880u: goto label_233880;
        case 0x233884u: goto label_233884;
        case 0x233888u: goto label_233888;
        case 0x23388cu: goto label_23388c;
        case 0x233890u: goto label_233890;
        case 0x233894u: goto label_233894;
        case 0x233898u: goto label_233898;
        case 0x23389cu: goto label_23389c;
        case 0x2338a0u: goto label_2338a0;
        case 0x2338a4u: goto label_2338a4;
        case 0x2338a8u: goto label_2338a8;
        case 0x2338acu: goto label_2338ac;
        case 0x2338b0u: goto label_2338b0;
        case 0x2338b4u: goto label_2338b4;
        case 0x2338b8u: goto label_2338b8;
        case 0x2338bcu: goto label_2338bc;
        case 0x2338c0u: goto label_2338c0;
        case 0x2338c4u: goto label_2338c4;
        case 0x2338c8u: goto label_2338c8;
        case 0x2338ccu: goto label_2338cc;
        case 0x2338d0u: goto label_2338d0;
        case 0x2338d4u: goto label_2338d4;
        case 0x2338d8u: goto label_2338d8;
        case 0x2338dcu: goto label_2338dc;
        case 0x2338e0u: goto label_2338e0;
        case 0x2338e4u: goto label_2338e4;
        case 0x2338e8u: goto label_2338e8;
        case 0x2338ecu: goto label_2338ec;
        case 0x2338f0u: goto label_2338f0;
        case 0x2338f4u: goto label_2338f4;
        case 0x2338f8u: goto label_2338f8;
        case 0x2338fcu: goto label_2338fc;
        case 0x233900u: goto label_233900;
        case 0x233904u: goto label_233904;
        case 0x233908u: goto label_233908;
        case 0x23390cu: goto label_23390c;
        case 0x233910u: goto label_233910;
        case 0x233914u: goto label_233914;
        case 0x233918u: goto label_233918;
        case 0x23391cu: goto label_23391c;
        case 0x233920u: goto label_233920;
        case 0x233924u: goto label_233924;
        case 0x233928u: goto label_233928;
        case 0x23392cu: goto label_23392c;
        case 0x233930u: goto label_233930;
        case 0x233934u: goto label_233934;
        case 0x233938u: goto label_233938;
        case 0x23393cu: goto label_23393c;
        case 0x233940u: goto label_233940;
        case 0x233944u: goto label_233944;
        case 0x233948u: goto label_233948;
        case 0x23394cu: goto label_23394c;
        case 0x233950u: goto label_233950;
        case 0x233954u: goto label_233954;
        case 0x233958u: goto label_233958;
        case 0x23395cu: goto label_23395c;
        case 0x233960u: goto label_233960;
        case 0x233964u: goto label_233964;
        case 0x233968u: goto label_233968;
        case 0x23396cu: goto label_23396c;
        case 0x233970u: goto label_233970;
        case 0x233974u: goto label_233974;
        case 0x233978u: goto label_233978;
        case 0x23397cu: goto label_23397c;
        case 0x233980u: goto label_233980;
        case 0x233984u: goto label_233984;
        case 0x233988u: goto label_233988;
        case 0x23398cu: goto label_23398c;
        case 0x233990u: goto label_233990;
        case 0x233994u: goto label_233994;
        case 0x233998u: goto label_233998;
        case 0x23399cu: goto label_23399c;
        case 0x2339a0u: goto label_2339a0;
        case 0x2339a4u: goto label_2339a4;
        case 0x2339a8u: goto label_2339a8;
        case 0x2339acu: goto label_2339ac;
        case 0x2339b0u: goto label_2339b0;
        case 0x2339b4u: goto label_2339b4;
        case 0x2339b8u: goto label_2339b8;
        case 0x2339bcu: goto label_2339bc;
        case 0x2339c0u: goto label_2339c0;
        case 0x2339c4u: goto label_2339c4;
        case 0x2339c8u: goto label_2339c8;
        case 0x2339ccu: goto label_2339cc;
        case 0x2339d0u: goto label_2339d0;
        case 0x2339d4u: goto label_2339d4;
        case 0x2339d8u: goto label_2339d8;
        case 0x2339dcu: goto label_2339dc;
        case 0x2339e0u: goto label_2339e0;
        case 0x2339e4u: goto label_2339e4;
        case 0x2339e8u: goto label_2339e8;
        case 0x2339ecu: goto label_2339ec;
        case 0x2339f0u: goto label_2339f0;
        case 0x2339f4u: goto label_2339f4;
        case 0x2339f8u: goto label_2339f8;
        case 0x2339fcu: goto label_2339fc;
        case 0x233a00u: goto label_233a00;
        case 0x233a04u: goto label_233a04;
        case 0x233a08u: goto label_233a08;
        case 0x233a0cu: goto label_233a0c;
        case 0x233a10u: goto label_233a10;
        case 0x233a14u: goto label_233a14;
        case 0x233a18u: goto label_233a18;
        case 0x233a1cu: goto label_233a1c;
        case 0x233a20u: goto label_233a20;
        case 0x233a24u: goto label_233a24;
        case 0x233a28u: goto label_233a28;
        case 0x233a2cu: goto label_233a2c;
        case 0x233a30u: goto label_233a30;
        case 0x233a34u: goto label_233a34;
        case 0x233a38u: goto label_233a38;
        case 0x233a3cu: goto label_233a3c;
        case 0x233a40u: goto label_233a40;
        case 0x233a44u: goto label_233a44;
        case 0x233a48u: goto label_233a48;
        case 0x233a4cu: goto label_233a4c;
        case 0x233a50u: goto label_233a50;
        case 0x233a54u: goto label_233a54;
        case 0x233a58u: goto label_233a58;
        case 0x233a5cu: goto label_233a5c;
        case 0x233a60u: goto label_233a60;
        case 0x233a64u: goto label_233a64;
        case 0x233a68u: goto label_233a68;
        case 0x233a6cu: goto label_233a6c;
        case 0x233a70u: goto label_233a70;
        case 0x233a74u: goto label_233a74;
        case 0x233a78u: goto label_233a78;
        case 0x233a7cu: goto label_233a7c;
        case 0x233a80u: goto label_233a80;
        case 0x233a84u: goto label_233a84;
        case 0x233a88u: goto label_233a88;
        case 0x233a8cu: goto label_233a8c;
        case 0x233a90u: goto label_233a90;
        case 0x233a94u: goto label_233a94;
        case 0x233a98u: goto label_233a98;
        case 0x233a9cu: goto label_233a9c;
        case 0x233aa0u: goto label_233aa0;
        case 0x233aa4u: goto label_233aa4;
        case 0x233aa8u: goto label_233aa8;
        case 0x233aacu: goto label_233aac;
        case 0x233ab0u: goto label_233ab0;
        case 0x233ab4u: goto label_233ab4;
        case 0x233ab8u: goto label_233ab8;
        case 0x233abcu: goto label_233abc;
        case 0x233ac0u: goto label_233ac0;
        case 0x233ac4u: goto label_233ac4;
        case 0x233ac8u: goto label_233ac8;
        case 0x233accu: goto label_233acc;
        case 0x233ad0u: goto label_233ad0;
        case 0x233ad4u: goto label_233ad4;
        case 0x233ad8u: goto label_233ad8;
        case 0x233adcu: goto label_233adc;
        case 0x233ae0u: goto label_233ae0;
        case 0x233ae4u: goto label_233ae4;
        case 0x233ae8u: goto label_233ae8;
        case 0x233aecu: goto label_233aec;
        case 0x233af0u: goto label_233af0;
        case 0x233af4u: goto label_233af4;
        case 0x233af8u: goto label_233af8;
        case 0x233afcu: goto label_233afc;
        case 0x233b00u: goto label_233b00;
        case 0x233b04u: goto label_233b04;
        case 0x233b08u: goto label_233b08;
        case 0x233b0cu: goto label_233b0c;
        case 0x233b10u: goto label_233b10;
        case 0x233b14u: goto label_233b14;
        case 0x233b18u: goto label_233b18;
        case 0x233b1cu: goto label_233b1c;
        case 0x233b20u: goto label_233b20;
        case 0x233b24u: goto label_233b24;
        case 0x233b28u: goto label_233b28;
        case 0x233b2cu: goto label_233b2c;
        case 0x233b30u: goto label_233b30;
        case 0x233b34u: goto label_233b34;
        case 0x233b38u: goto label_233b38;
        case 0x233b3cu: goto label_233b3c;
        case 0x233b40u: goto label_233b40;
        case 0x233b44u: goto label_233b44;
        case 0x233b48u: goto label_233b48;
        case 0x233b4cu: goto label_233b4c;
        case 0x233b50u: goto label_233b50;
        case 0x233b54u: goto label_233b54;
        case 0x233b58u: goto label_233b58;
        case 0x233b5cu: goto label_233b5c;
        case 0x233b60u: goto label_233b60;
        case 0x233b64u: goto label_233b64;
        case 0x233b68u: goto label_233b68;
        case 0x233b6cu: goto label_233b6c;
        case 0x233b70u: goto label_233b70;
        case 0x233b74u: goto label_233b74;
        case 0x233b78u: goto label_233b78;
        case 0x233b7cu: goto label_233b7c;
        case 0x233b80u: goto label_233b80;
        case 0x233b84u: goto label_233b84;
        case 0x233b88u: goto label_233b88;
        case 0x233b8cu: goto label_233b8c;
        case 0x233b90u: goto label_233b90;
        case 0x233b94u: goto label_233b94;
        case 0x233b98u: goto label_233b98;
        case 0x233b9cu: goto label_233b9c;
        case 0x233ba0u: goto label_233ba0;
        case 0x233ba4u: goto label_233ba4;
        case 0x233ba8u: goto label_233ba8;
        case 0x233bacu: goto label_233bac;
        case 0x233bb0u: goto label_233bb0;
        case 0x233bb4u: goto label_233bb4;
        case 0x233bb8u: goto label_233bb8;
        case 0x233bbcu: goto label_233bbc;
        case 0x233bc0u: goto label_233bc0;
        case 0x233bc4u: goto label_233bc4;
        case 0x233bc8u: goto label_233bc8;
        case 0x233bccu: goto label_233bcc;
        case 0x233bd0u: goto label_233bd0;
        case 0x233bd4u: goto label_233bd4;
        case 0x233bd8u: goto label_233bd8;
        case 0x233bdcu: goto label_233bdc;
        case 0x233be0u: goto label_233be0;
        case 0x233be4u: goto label_233be4;
        case 0x233be8u: goto label_233be8;
        case 0x233becu: goto label_233bec;
        case 0x233bf0u: goto label_233bf0;
        case 0x233bf4u: goto label_233bf4;
        case 0x233bf8u: goto label_233bf8;
        case 0x233bfcu: goto label_233bfc;
        case 0x233c00u: goto label_233c00;
        case 0x233c04u: goto label_233c04;
        case 0x233c08u: goto label_233c08;
        case 0x233c0cu: goto label_233c0c;
        case 0x233c10u: goto label_233c10;
        case 0x233c14u: goto label_233c14;
        case 0x233c18u: goto label_233c18;
        case 0x233c1cu: goto label_233c1c;
        case 0x233c20u: goto label_233c20;
        case 0x233c24u: goto label_233c24;
        case 0x233c28u: goto label_233c28;
        case 0x233c2cu: goto label_233c2c;
        case 0x233c30u: goto label_233c30;
        case 0x233c34u: goto label_233c34;
        case 0x233c38u: goto label_233c38;
        case 0x233c3cu: goto label_233c3c;
        case 0x233c40u: goto label_233c40;
        case 0x233c44u: goto label_233c44;
        case 0x233c48u: goto label_233c48;
        case 0x233c4cu: goto label_233c4c;
        case 0x233c50u: goto label_233c50;
        case 0x233c54u: goto label_233c54;
        case 0x233c58u: goto label_233c58;
        case 0x233c5cu: goto label_233c5c;
        case 0x233c60u: goto label_233c60;
        case 0x233c64u: goto label_233c64;
        case 0x233c68u: goto label_233c68;
        case 0x233c6cu: goto label_233c6c;
        case 0x233c70u: goto label_233c70;
        case 0x233c74u: goto label_233c74;
        case 0x233c78u: goto label_233c78;
        case 0x233c7cu: goto label_233c7c;
        case 0x233c80u: goto label_233c80;
        case 0x233c84u: goto label_233c84;
        case 0x233c88u: goto label_233c88;
        case 0x233c8cu: goto label_233c8c;
        case 0x233c90u: goto label_233c90;
        case 0x233c94u: goto label_233c94;
        case 0x233c98u: goto label_233c98;
        case 0x233c9cu: goto label_233c9c;
        case 0x233ca0u: goto label_233ca0;
        case 0x233ca4u: goto label_233ca4;
        case 0x233ca8u: goto label_233ca8;
        case 0x233cacu: goto label_233cac;
        case 0x233cb0u: goto label_233cb0;
        case 0x233cb4u: goto label_233cb4;
        case 0x233cb8u: goto label_233cb8;
        case 0x233cbcu: goto label_233cbc;
        case 0x233cc0u: goto label_233cc0;
        case 0x233cc4u: goto label_233cc4;
        case 0x233cc8u: goto label_233cc8;
        case 0x233cccu: goto label_233ccc;
        case 0x233cd0u: goto label_233cd0;
        case 0x233cd4u: goto label_233cd4;
        case 0x233cd8u: goto label_233cd8;
        case 0x233cdcu: goto label_233cdc;
        case 0x233ce0u: goto label_233ce0;
        case 0x233ce4u: goto label_233ce4;
        case 0x233ce8u: goto label_233ce8;
        case 0x233cecu: goto label_233cec;
        case 0x233cf0u: goto label_233cf0;
        case 0x233cf4u: goto label_233cf4;
        case 0x233cf8u: goto label_233cf8;
        case 0x233cfcu: goto label_233cfc;
        case 0x233d00u: goto label_233d00;
        case 0x233d04u: goto label_233d04;
        case 0x233d08u: goto label_233d08;
        case 0x233d0cu: goto label_233d0c;
        case 0x233d10u: goto label_233d10;
        case 0x233d14u: goto label_233d14;
        case 0x233d18u: goto label_233d18;
        case 0x233d1cu: goto label_233d1c;
        case 0x233d20u: goto label_233d20;
        case 0x233d24u: goto label_233d24;
        case 0x233d28u: goto label_233d28;
        case 0x233d2cu: goto label_233d2c;
        case 0x233d30u: goto label_233d30;
        case 0x233d34u: goto label_233d34;
        case 0x233d38u: goto label_233d38;
        case 0x233d3cu: goto label_233d3c;
        case 0x233d40u: goto label_233d40;
        case 0x233d44u: goto label_233d44;
        case 0x233d48u: goto label_233d48;
        case 0x233d4cu: goto label_233d4c;
        case 0x233d50u: goto label_233d50;
        case 0x233d54u: goto label_233d54;
        case 0x233d58u: goto label_233d58;
        case 0x233d5cu: goto label_233d5c;
        case 0x233d60u: goto label_233d60;
        case 0x233d64u: goto label_233d64;
        case 0x233d68u: goto label_233d68;
        case 0x233d6cu: goto label_233d6c;
        case 0x233d70u: goto label_233d70;
        case 0x233d74u: goto label_233d74;
        case 0x233d78u: goto label_233d78;
        case 0x233d7cu: goto label_233d7c;
        case 0x233d80u: goto label_233d80;
        case 0x233d84u: goto label_233d84;
        case 0x233d88u: goto label_233d88;
        case 0x233d8cu: goto label_233d8c;
        case 0x233d90u: goto label_233d90;
        case 0x233d94u: goto label_233d94;
        case 0x233d98u: goto label_233d98;
        case 0x233d9cu: goto label_233d9c;
        case 0x233da0u: goto label_233da0;
        case 0x233da4u: goto label_233da4;
        case 0x233da8u: goto label_233da8;
        case 0x233dacu: goto label_233dac;
        case 0x233db0u: goto label_233db0;
        case 0x233db4u: goto label_233db4;
        case 0x233db8u: goto label_233db8;
        case 0x233dbcu: goto label_233dbc;
        case 0x233dc0u: goto label_233dc0;
        case 0x233dc4u: goto label_233dc4;
        case 0x233dc8u: goto label_233dc8;
        case 0x233dccu: goto label_233dcc;
        case 0x233dd0u: goto label_233dd0;
        case 0x233dd4u: goto label_233dd4;
        case 0x233dd8u: goto label_233dd8;
        case 0x233ddcu: goto label_233ddc;
        case 0x233de0u: goto label_233de0;
        case 0x233de4u: goto label_233de4;
        case 0x233de8u: goto label_233de8;
        case 0x233decu: goto label_233dec;
        case 0x233df0u: goto label_233df0;
        case 0x233df4u: goto label_233df4;
        case 0x233df8u: goto label_233df8;
        case 0x233dfcu: goto label_233dfc;
        case 0x233e00u: goto label_233e00;
        case 0x233e04u: goto label_233e04;
        case 0x233e08u: goto label_233e08;
        case 0x233e0cu: goto label_233e0c;
        case 0x233e10u: goto label_233e10;
        case 0x233e14u: goto label_233e14;
        case 0x233e18u: goto label_233e18;
        case 0x233e1cu: goto label_233e1c;
        case 0x233e20u: goto label_233e20;
        case 0x233e24u: goto label_233e24;
        case 0x233e28u: goto label_233e28;
        case 0x233e2cu: goto label_233e2c;
        case 0x233e30u: goto label_233e30;
        case 0x233e34u: goto label_233e34;
        case 0x233e38u: goto label_233e38;
        case 0x233e3cu: goto label_233e3c;
        case 0x233e40u: goto label_233e40;
        case 0x233e44u: goto label_233e44;
        case 0x233e48u: goto label_233e48;
        case 0x233e4cu: goto label_233e4c;
        case 0x233e50u: goto label_233e50;
        case 0x233e54u: goto label_233e54;
        case 0x233e58u: goto label_233e58;
        case 0x233e5cu: goto label_233e5c;
        case 0x233e60u: goto label_233e60;
        case 0x233e64u: goto label_233e64;
        case 0x233e68u: goto label_233e68;
        case 0x233e6cu: goto label_233e6c;
        case 0x233e70u: goto label_233e70;
        case 0x233e74u: goto label_233e74;
        case 0x233e78u: goto label_233e78;
        case 0x233e7cu: goto label_233e7c;
        case 0x233e80u: goto label_233e80;
        case 0x233e84u: goto label_233e84;
        case 0x233e88u: goto label_233e88;
        case 0x233e8cu: goto label_233e8c;
        default: return;
    }

label_2336c0:
    // 0x2336c0: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2336c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2336c4:
    // 0x2336c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2336c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2336c8:
    // 0x2336c8: 0x8c421150  lw          $v0, 0x1150($v0)
    ctx->pc = 0x2336c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4432)));
label_2336cc:
    // 0x2336cc: 0x0  nop
    ctx->pc = 0x2336ccu;
    // NOP
label_2336d0:
    // 0x2336d0: 0x0  nop
    ctx->pc = 0x2336d0u;
    // NOP
label_2336d4:
    // 0x2336d4: 0x0  nop
    ctx->pc = 0x2336d4u;
    // NOP
label_2336d8:
    // 0x2336d8: 0x0  nop
    ctx->pc = 0x2336d8u;
    // NOP
label_2336dc:
    // 0x2336dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2336e0:
    if (ctx->pc == 0x2336E0u) {
        ctx->pc = 0x2336E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336DCu;
        // 0x2336e0: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2336E4u;
        goto label_2336e4;
    }
    ctx->pc = 0x2336DCu;
    {
        const bool branch_taken_0x2336dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2336E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336DCu;
        // 0x2336e0: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336dc) {
            ctx->pc = 0x2336C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2336c0;
        }
    }
    ctx->pc = 0x2336E4u;
label_2336e4:
    // 0x2336e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2336e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2336e8:
    // 0x2336e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2336e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2336ec:
    // 0x2336ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2336ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2336f0:
    // 0x2336f0: 0x808cd36  j           func_2334D8
label_2336f4:
    if (ctx->pc == 0x2336F4u) {
        ctx->pc = 0x2336F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336F0u;
        // 0x2336f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2336F8u;
        goto label_2336f8;
    }
    ctx->pc = 0x2336F0u;
    ctx->pc = 0x2336F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336F0u;
    // 0x2336f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334D8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x2334d8; return; }
    ctx->pc = 0x2336F8u;
label_2336f8:
    // 0x2336f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2336f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2336fc:
    // 0x2336fc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2336fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_233700:
    // 0x233700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x233700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_233704:
    // 0x233704: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x233704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_233708:
    // 0x233708: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23370c:
    // 0x23370c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23370cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_233710:
    // 0x233710: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x233710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_233714:
    // 0x233714: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x233714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_233718:
    // 0x233718: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x233718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_23371c:
    // 0x23371c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x23371cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_233720:
    // 0x233720: 0xc08cfc4  jal         func_233F10
label_233724:
    if (ctx->pc == 0x233724u) {
        ctx->pc = 0x233724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233720u;
        // 0x233724: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233728u;
        goto label_233728;
    }
    ctx->pc = 0x233720u;
    SET_GPR_U32(ctx, 31, 0x233728u);
    ctx->pc = 0x233724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233720u;
    // 0x233724: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233F10u;
    { ctx->pc = 0x233f10; return; }
    ctx->pc = 0x233728u;
label_233728:
    // 0x233728: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x233728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23372c:
    // 0x23372c: 0x8c4204dc  lw          $v0, 0x4DC($v0)
    ctx->pc = 0x23372cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1244)));
label_233730:
    // 0x233730: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_233734:
    if (ctx->pc == 0x233734u) {
        ctx->pc = 0x233734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233730u;
        // 0x233734: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233738u;
        goto label_233738;
    }
    ctx->pc = 0x233730u;
    {
        const bool branch_taken_0x233730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233730) {
            ctx->pc = 0x233734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233730u;
            // 0x233734: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233744u;
            goto label_233744;
        }
    }
    ctx->pc = 0x233738u;
label_233738:
    // 0x233738: 0x40f809  jalr        $v0
label_23373c:
    if (ctx->pc == 0x23373Cu) {
        ctx->pc = 0x23373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233738u;
        // 0x23373c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233740u;
        goto label_233740;
    }
    ctx->pc = 0x233738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233740u);
        ctx->pc = 0x23373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233738u;
        // 0x23373c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233738u, 0x233740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x233740u;
label_233740:
    // 0x233740: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233744:
    // 0x233744: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233748:
    // 0x233748: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x233748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23374c:
    // 0x23374c: 0x8c421154  lw          $v0, 0x1154($v0)
    ctx->pc = 0x23374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4436)));
label_233750:
    // 0x233750: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_233754:
    if (ctx->pc == 0x233754u) {
        ctx->pc = 0x233754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233750u;
        // 0x233754: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233758u;
        goto label_233758;
    }
    ctx->pc = 0x233750u;
    {
        const bool branch_taken_0x233750 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x233754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233750u;
        // 0x233754: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233750) {
            ctx->pc = 0x2337E0u;
            goto label_2337e0;
        }
    }
    ctx->pc = 0x233758u;
label_233758:
    // 0x233758: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x233758u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23375c:
    // 0x23375c: 0x0  nop
    ctx->pc = 0x23375cu;
    // NOP
label_233760:
    // 0x233760: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x233760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233764:
    // 0x233764: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x233764u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_233768:
    // 0x233768: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_23376c:
    // 0x23376c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_233770:
    // 0x233770: 0x8c421148  lw          $v0, 0x1148($v0)
    ctx->pc = 0x233770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4424)));
label_233774:
    // 0x233774: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x233774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_233778:
    // 0x233778: 0x3c090009  lui         $t1, 0x9
    ctx->pc = 0x233778u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)9 << 16));
label_23377c:
    // 0x23377c: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x23377cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_233780:
    // 0x233780: 0x8d291144  lw          $t1, 0x1144($t1)
    ctx->pc = 0x233780u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4420)));
label_233784:
    // 0x233784: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_233788:
    // 0x233788: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x233788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_23378c:
    // 0x23378c: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x23378cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_233790:
    // 0x233790: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233794:
    // 0x233794: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x233794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_233798:
    // 0x233798: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x233798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_23379c:
    // 0x23379c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x23379cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2337a0:
    // 0x2337a0: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x2337a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2337a4:
    // 0x2337a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2337a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2337a8:
    // 0x2337a8: 0xc08cff4  jal         func_233FD0
label_2337ac:
    if (ctx->pc == 0x2337ACu) {
        ctx->pc = 0x2337ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337A8u;
        // 0x2337ac: 0x8e290004  lw          $t1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2337B0u;
        goto label_2337b0;
    }
    ctx->pc = 0x2337A8u;
    SET_GPR_U32(ctx, 31, 0x2337B0u);
    ctx->pc = 0x2337ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2337A8u;
    // 0x2337ac: 0x8e290004  lw          $t1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233FD0u;
    { ctx->pc = 0x233fd0; return; }
    ctx->pc = 0x2337B0u;
label_2337b0:
    // 0x2337b0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2337b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_2337b4:
    // 0x2337b4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_2337b8:
    if (ctx->pc == 0x2337B8u) {
        ctx->pc = 0x2337B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337B4u;
        // 0x2337b8: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2337BCu;
        goto label_2337bc;
    }
    ctx->pc = 0x2337B4u;
    {
        const bool branch_taken_0x2337b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2337B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337B4u;
        // 0x2337b8: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337b4) {
            ctx->pc = 0x233768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233768;
        }
    }
    ctx->pc = 0x2337BCu;
label_2337bc:
    // 0x2337bc: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2337bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2337c0:
    // 0x2337c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2337c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2337c4:
    // 0x2337c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2337c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2337c8:
    // 0x2337c8: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2337c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2337cc:
    // 0x2337cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2337ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2337d0:
    // 0x2337d0: 0x8c421154  lw          $v0, 0x1154($v0)
    ctx->pc = 0x2337d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4436)));
label_2337d4:
    // 0x2337d4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2337d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2337d8:
    // 0x2337d8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_2337dc:
    if (ctx->pc == 0x2337DCu) {
        ctx->pc = 0x2337DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337D8u;
        // 0x2337dc: 0x26940048  addiu       $s4, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2337E0u;
        goto label_2337e0;
    }
    ctx->pc = 0x2337D8u;
    {
        const bool branch_taken_0x2337d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2337DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337D8u;
        // 0x2337dc: 0x26940048  addiu       $s4, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337d8) {
            ctx->pc = 0x233760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233760;
        }
    }
    ctx->pc = 0x2337E0u;
label_2337e0:
    // 0x2337e0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2337e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2337e4:
    // 0x2337e4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2337e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2337e8:
    // 0x2337e8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2337e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2337ec:
    // 0x2337ec: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2337ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2337f0:
    // 0x2337f0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2337f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2337f4:
    // 0x2337f4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2337f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2337f8:
    // 0x2337f8: 0x3e00008  jr          $ra
label_2337fc:
    if (ctx->pc == 0x2337FCu) {
        ctx->pc = 0x2337FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337F8u;
        // 0x2337fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233800u;
        goto label_233800;
    }
    ctx->pc = 0x2337F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2337FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2337F8u;
        // 0x2337fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2337F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233800u;
label_233800:
    // 0x233800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_233804:
    // 0x233804: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x233804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_233808:
    // 0x233808: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x233808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23380c:
    // 0x23380c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x23380cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
label_233810:
    // 0x233810: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x233810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_233814:
    // 0x233814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233818:
    // 0x233818: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23381c:
    // 0x23381c: 0x245104b0  addiu       $s1, $v0, 0x4B0
    ctx->pc = 0x23381cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
label_233820:
    // 0x233820: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x233820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_233824:
    // 0x233824: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x233824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233828:
    // 0x233828: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x233828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_23382c:
    // 0x23382c: 0x24740508  addiu       $s4, $v1, 0x508
    ctx->pc = 0x23382cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1288));
label_233830:
    // 0x233830: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x233830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_233834:
    // 0x233834: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x233834u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233838:
    // 0x233838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23383c:
    // 0x23383c: 0x3673a000  ori         $s3, $s3, 0xA000
    ctx->pc = 0x23383cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)40960);
label_233840:
    // 0x233840: 0x10000075  b           . + 4 + (0x75 << 2)
label_233844:
    if (ctx->pc == 0x233844u) {
        ctx->pc = 0x233844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233840u;
        // 0x233844: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233848u;
        goto label_233848;
    }
    ctx->pc = 0x233840u;
    {
        const bool branch_taken_0x233840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233840u;
        // 0x233844: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233840) {
            ctx->pc = 0x233A18u;
            goto label_233a18;
        }
    }
    ctx->pc = 0x233848u;
label_233848:
    // 0x233848: 0xc08c42e  jal         func_2310B8
label_23384c:
    if (ctx->pc == 0x23384Cu) {
        ctx->pc = 0x233850u;
        goto label_233850;
    }
    ctx->pc = 0x233848u;
    SET_GPR_U32(ctx, 31, 0x233850u);
    ctx->pc = 0x2310B8u;
    { ctx->pc = 0x2310b8; return; }
    ctx->pc = 0x233850u;
label_233850:
    // 0x233850: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233854:
    // 0x233854: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_233858:
    // 0x233858: 0x34211144  ori         $at, $at, 0x1144
    ctx->pc = 0x233858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4420);
label_23385c:
    // 0x23385c: 0xc08cf8e  jal         func_233E38
label_233860:
    if (ctx->pc == 0x233860u) {
        ctx->pc = 0x233860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23385Cu;
        // 0x233860: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233864u;
        goto label_233864;
    }
    ctx->pc = 0x23385Cu;
    SET_GPR_U32(ctx, 31, 0x233864u);
    ctx->pc = 0x233860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23385Cu;
    // 0x233860: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233E38u;
    goto label_233e38;
    ctx->pc = 0x233864u;
label_233864:
    // 0x233864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x233864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233868:
    // 0x233868: 0x10a0fff7  beqz        $a1, . + 4 + (-0x9 << 2)
label_23386c:
    if (ctx->pc == 0x23386Cu) {
        ctx->pc = 0x23386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233868u;
        // 0x23386c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233870u;
        goto label_233870;
    }
    ctx->pc = 0x233868u;
    {
        const bool branch_taken_0x233868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233868u;
        // 0x23386c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233868) {
            ctx->pc = 0x233848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233848;
        }
    }
    ctx->pc = 0x233870u;
label_233870:
    // 0x233870: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x233870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_233874:
    // 0x233874: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x233874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_233878:
    // 0x233878: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x233878u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
label_23387c:
    // 0x23387c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x23387cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_233880:
    // 0x233880: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x233880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_233884:
    // 0x233884: 0xc068a90  jal         func_1A2A40
label_233888:
    if (ctx->pc == 0x233888u) {
        ctx->pc = 0x233888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233884u;
        // 0x233888: 0x63102  srl         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23388Cu;
        goto label_23388c;
    }
    ctx->pc = 0x233884u;
    SET_GPR_U32(ctx, 31, 0x23388Cu);
    ctx->pc = 0x233888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233884u;
    // 0x233888: 0x63102  srl         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2A40u;
    { ctx->pc = 0x1a2a40; return; }
    ctx->pc = 0x23388Cu;
label_23388c:
    // 0x23388c: 0x443000c  bgezl       $v0, . + 4 + (0xC << 2)
label_233890:
    if (ctx->pc == 0x233890u) {
        ctx->pc = 0x233890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23388Cu;
        // 0x233890: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233894u;
        goto label_233894;
    }
    ctx->pc = 0x23388Cu;
    {
        const bool branch_taken_0x23388c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23388c) {
            ctx->pc = 0x233890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23388Cu;
            // 0x233890: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2338C0u;
            goto label_2338c0;
        }
    }
    ctx->pc = 0x233894u;
label_233894:
    // 0x233894: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233898:
    // 0x233898: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_23389c:
    // 0x23389c: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x23389cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_2338a0:
    // 0x2338a0: 0xc08cd30  jal         func_2334C0
label_2338a4:
    if (ctx->pc == 0x2338A4u) {
        ctx->pc = 0x2338A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338A0u;
        // 0x2338a4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338A8u;
        goto label_2338a8;
    }
    ctx->pc = 0x2338A0u;
    SET_GPR_U32(ctx, 31, 0x2338A8u);
    ctx->pc = 0x2338A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338A0u;
    // 0x2338a4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334C0u;
    { ctx->pc = 0x2334c0; return; }
    ctx->pc = 0x2338A8u;
label_2338a8:
    // 0x2338a8: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2338a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2338ac:
    // 0x2338ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2338acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2338b0:
    // 0x2338b0: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2338b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_2338b4:
    // 0x2338b4: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x2338b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_2338b8:
    // 0x2338b8: 0x10000055  b           . + 4 + (0x55 << 2)
label_2338bc:
    if (ctx->pc == 0x2338BCu) {
        ctx->pc = 0x2338BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338B8u;
        // 0x2338bc: 0xac221290  sw          $v0, 0x1290($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338C0u;
        goto label_2338c0;
    }
    ctx->pc = 0x2338B8u;
    {
        const bool branch_taken_0x2338b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2338BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338B8u;
        // 0x2338bc: 0xac221290  sw          $v0, 0x1290($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338b8) {
            ctx->pc = 0x233A10u;
            goto label_233a10;
        }
    }
    ctx->pc = 0x2338C0u;
label_2338c0:
    // 0x2338c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2338c4:
    if (ctx->pc == 0x2338C4u) {
        ctx->pc = 0x2338C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338C0u;
        // 0x2338c4: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338C8u;
        goto label_2338c8;
    }
    ctx->pc = 0x2338C0u;
    {
        const bool branch_taken_0x2338c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2338C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338C0u;
        // 0x2338c4: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338c0) {
            ctx->pc = 0x2338E8u;
            goto label_2338e8;
        }
    }
    ctx->pc = 0x2338C8u;
label_2338c8:
    // 0x2338c8: 0xc08cdbe  jal         func_2336F8
label_2338cc:
    if (ctx->pc == 0x2338CCu) {
        ctx->pc = 0x2338CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338C8u;
        // 0x2338cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338D0u;
        goto label_2338d0;
    }
    ctx->pc = 0x2338C8u;
    SET_GPR_U32(ctx, 31, 0x2338D0u);
    ctx->pc = 0x2338CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338C8u;
    // 0x2338cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2336F8u;
    goto label_2336f8;
    ctx->pc = 0x2338D0u;
label_2338d0:
    // 0x2338d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2338d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2338d4:
    // 0x2338d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2338d8:
    if (ctx->pc == 0x2338D8u) {
        ctx->pc = 0x2338D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338D4u;
        // 0x2338d8: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338DCu;
        goto label_2338dc;
    }
    ctx->pc = 0x2338D4u;
    {
        const bool branch_taken_0x2338d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2338d4) {
            ctx->pc = 0x2338D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2338D4u;
            // 0x2338d8: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2338E8u;
            goto label_2338e8;
        }
    }
    ctx->pc = 0x2338DCu;
label_2338dc:
    // 0x2338dc: 0xc08c436  jal         func_2310D8
label_2338e0:
    if (ctx->pc == 0x2338E0u) {
        ctx->pc = 0x2338E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338DCu;
        // 0x2338e0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338E4u;
        goto label_2338e4;
    }
    ctx->pc = 0x2338DCu;
    SET_GPR_U32(ctx, 31, 0x2338E4u);
    ctx->pc = 0x2338E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338DCu;
    // 0x2338e0: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2310D8u;
    { ctx->pc = 0x2310d8; return; }
    ctx->pc = 0x2338E4u;
label_2338e4:
    // 0x2338e4: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x2338e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2338e8:
    // 0x2338e8: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2338e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_2338ec:
    // 0x2338ec: 0x34211144  ori         $at, $at, 0x1144
    ctx->pc = 0x2338ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4420);
label_2338f0:
    // 0x2338f0: 0xc08cf72  jal         func_233DC8
label_2338f4:
    if (ctx->pc == 0x2338F4u) {
        ctx->pc = 0x2338F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2338F0u;
        // 0x2338f4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2338F8u;
        goto label_2338f8;
    }
    ctx->pc = 0x2338F0u;
    SET_GPR_U32(ctx, 31, 0x2338F8u);
    ctx->pc = 0x2338F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2338F0u;
    // 0x2338f4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233DC8u;
    goto label_233dc8;
    ctx->pc = 0x2338F8u;
label_2338f8:
    // 0x2338f8: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2338f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2338fc:
    // 0x2338fc: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2338fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233900:
    // 0x233900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233904:
    // 0x233904: 0x8c421270  lw          $v0, 0x1270($v0)
    ctx->pc = 0x233904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4720)));
label_233908:
    // 0x233908: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_23390c:
    if (ctx->pc == 0x23390Cu) {
        ctx->pc = 0x23390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233908u;
        // 0x23390c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233910u;
        goto label_233910;
    }
    ctx->pc = 0x233908u;
    {
        const bool branch_taken_0x233908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233908u;
        // 0x23390c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233908) {
            ctx->pc = 0x23396Cu;
            goto label_23396c;
        }
    }
    ctx->pc = 0x233910u;
label_233910:
    // 0x233910: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233914:
    // 0x233914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233918:
    // 0x233918: 0x8c421268  lw          $v0, 0x1268($v0)
    ctx->pc = 0x233918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4712)));
label_23391c:
    // 0x23391c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_233920:
    if (ctx->pc == 0x233920u) {
        ctx->pc = 0x233924u;
        goto label_233924;
    }
    ctx->pc = 0x23391Cu;
    {
        const bool branch_taken_0x23391c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23391c) {
            ctx->pc = 0x233948u;
            goto label_233948;
        }
    }
    ctx->pc = 0x233924u;
label_233924:
    // 0x233924: 0x0  nop
    ctx->pc = 0x233924u;
    // NOP
label_233928:
    // 0x233928: 0xc08c42e  jal         func_2310B8
label_23392c:
    if (ctx->pc == 0x23392Cu) {
        ctx->pc = 0x233930u;
        goto label_233930;
    }
    ctx->pc = 0x233928u;
    SET_GPR_U32(ctx, 31, 0x233930u);
    ctx->pc = 0x2310B8u;
    { ctx->pc = 0x2310b8; return; }
    ctx->pc = 0x233930u;
label_233930:
    // 0x233930: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x233930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233934:
    // 0x233934: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233938:
    // 0x233938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23393c:
    // 0x23393c: 0x8c421268  lw          $v0, 0x1268($v0)
    ctx->pc = 0x23393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4712)));
label_233940:
    // 0x233940: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_233944:
    if (ctx->pc == 0x233944u) {
        ctx->pc = 0x233948u;
        goto label_233948;
    }
    ctx->pc = 0x233940u;
    {
        const bool branch_taken_0x233940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233940) {
            ctx->pc = 0x233928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233928;
        }
    }
    ctx->pc = 0x233948u;
label_233948:
    // 0x233948: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_23394c:
    // 0x23394c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23394cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233950:
    // 0x233950: 0x8c421270  lw          $v0, 0x1270($v0)
    ctx->pc = 0x233950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4720)));
label_233954:
    // 0x233954: 0x0  nop
    ctx->pc = 0x233954u;
    // NOP
label_233958:
    // 0x233958: 0x0  nop
    ctx->pc = 0x233958u;
    // NOP
label_23395c:
    // 0x23395c: 0x0  nop
    ctx->pc = 0x23395cu;
    // NOP
label_233960:
    // 0x233960: 0x0  nop
    ctx->pc = 0x233960u;
    // NOP
label_233964:
    // 0x233964: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_233968:
    if (ctx->pc == 0x233968u) {
        ctx->pc = 0x233968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233964u;
        // 0x233968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23396Cu;
        goto label_23396c;
    }
    ctx->pc = 0x233964u;
    {
        const bool branch_taken_0x233964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233964u;
        // 0x233968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233964) {
            ctx->pc = 0x233948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233948;
        }
    }
    ctx->pc = 0x23396Cu;
label_23396c:
    // 0x23396c: 0xc066440  jal         func_199100
label_233970:
    if (ctx->pc == 0x233970u) {
        ctx->pc = 0x233970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23396Cu;
        // 0x233970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233974u;
        goto label_233974;
    }
    ctx->pc = 0x23396Cu;
    SET_GPR_U32(ctx, 31, 0x233974u);
    ctx->pc = 0x233970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23396Cu;
    // 0x233970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x23396Cu, 0x233974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233974u;
label_233974:
    // 0x233974: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x233974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233978:
    // 0x233978: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x233978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23397c:
    // 0x23397c: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x23397cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
label_233980:
    // 0x233980: 0x3c070009  lui         $a3, 0x9
    ctx->pc = 0x233980u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9 << 16));
label_233984:
    // 0x233984: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x233984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_233988:
    // 0x233988: 0x8ce71148  lw          $a3, 0x1148($a3)
    ctx->pc = 0x233988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4424)));
label_23398c:
    // 0x23398c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x23398cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_233990:
    // 0x233990: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x233990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_233994:
    // 0x233994: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x233994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_233998:
    // 0x233998: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x233998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_23399c:
    // 0x23399c: 0x8e270034  lw          $a3, 0x34($s1)
    ctx->pc = 0x23399cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2339a0:
    // 0x2339a0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x2339a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2339a4:
    // 0x2339a4: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x2339a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_2339a8:
    // 0x2339a8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2339a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_2339ac:
    // 0x2339ac: 0x34a5a030  ori         $a1, $a1, 0xA030
    ctx->pc = 0x2339acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)41008);
label_2339b0:
    // 0x2339b0: 0x3484a020  ori         $a0, $a0, 0xA020
    ctx->pc = 0x2339b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40992);
label_2339b4:
    // 0x2339b4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2339b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_2339b8:
    // 0x2339b8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2339b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2339bc:
    // 0x2339bc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2339bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2339c0:
    // 0x2339c0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2339c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2339c4:
    // 0x2339c4: 0x50e00004  beql        $a3, $zero, . + 4 + (0x4 << 2)
label_2339c8:
    if (ctx->pc == 0x2339C8u) {
        ctx->pc = 0x2339C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339C4u;
        // 0x2339c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2339CCu;
        goto label_2339cc;
    }
    ctx->pc = 0x2339C4u;
    {
        const bool branch_taken_0x2339c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2339c4) {
            ctx->pc = 0x2339C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2339C4u;
            // 0x2339c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2339D8u;
            goto label_2339d8;
        }
    }
    ctx->pc = 0x2339CCu;
label_2339cc:
    // 0x2339cc: 0xe0f809  jalr        $a3
label_2339d0:
    if (ctx->pc == 0x2339D0u) {
        ctx->pc = 0x2339D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339CCu;
        // 0x2339d0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2339D4u;
        goto label_2339d4;
    }
    ctx->pc = 0x2339CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2339D4u);
        ctx->pc = 0x2339D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339CCu;
        // 0x2339d0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2339CCu, 0x2339D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2339D4u;
label_2339d4:
    // 0x2339d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2339d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2339d8:
    // 0x2339d8: 0xc066440  jal         func_199100
label_2339dc:
    if (ctx->pc == 0x2339DCu) {
        ctx->pc = 0x2339DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2339D8u;
        // 0x2339dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2339E0u;
        goto label_2339e0;
    }
    ctx->pc = 0x2339D8u;
    SET_GPR_U32(ctx, 31, 0x2339E0u);
    ctx->pc = 0x2339DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2339D8u;
    // 0x2339dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x2339D8u, 0x2339E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2339E0u;
label_2339e0:
    // 0x2339e0: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2339e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2339e4:
    // 0x2339e4: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2339e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2339e8:
    // 0x2339e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2339e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2339ec:
    // 0x2339ec: 0x8c421148  lw          $v0, 0x1148($v0)
    ctx->pc = 0x2339ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4424)));
label_2339f0:
    // 0x2339f0: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x2339f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
label_2339f4:
    // 0x2339f4: 0x34841144  ori         $a0, $a0, 0x1144
    ctx->pc = 0x2339f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4420);
label_2339f8:
    // 0x2339f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2339f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2339fc:
    // 0x2339fc: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2339fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_233a00:
    // 0x233a00: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x233a00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_233a04:
    // 0x233a04: 0xac321270  sw          $s2, 0x1270($at)
    ctx->pc = 0x233a04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4720), GPR_U32(ctx, 18));
label_233a08:
    // 0x233a08: 0xc08cfbc  jal         func_233EF0
label_233a0c:
    if (ctx->pc == 0x233A0Cu) {
        ctx->pc = 0x233A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A08u;
        // 0x233a0c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A10u;
        goto label_233a10;
    }
    ctx->pc = 0x233A08u;
    SET_GPR_U32(ctx, 31, 0x233A10u);
    ctx->pc = 0x233A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A08u;
    // 0x233a0c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233EF0u;
    { ctx->pc = 0x233ef0; return; }
    ctx->pc = 0x233A10u;
label_233a10:
    // 0x233a10: 0xc08c42e  jal         func_2310B8
label_233a14:
    if (ctx->pc == 0x233A14u) {
        ctx->pc = 0x233A18u;
        goto label_233a18;
    }
    ctx->pc = 0x233A10u;
    SET_GPR_U32(ctx, 31, 0x233A18u);
    ctx->pc = 0x2310B8u;
    { ctx->pc = 0x2310b8; return; }
    ctx->pc = 0x233A18u;
label_233a18:
    // 0x233a18: 0xc068ad6  jal         func_1A2B58
label_233a1c:
    if (ctx->pc == 0x233A1Cu) {
        ctx->pc = 0x233A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A18u;
        // 0x233a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A20u;
        goto label_233a20;
    }
    ctx->pc = 0x233A18u;
    SET_GPR_U32(ctx, 31, 0x233A20u);
    ctx->pc = 0x233A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A18u;
    // 0x233a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2B58u;
    { ctx->pc = 0x1a2b58; return; }
    ctx->pc = 0x233A20u;
label_233a20:
    // 0x233a20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_233a24:
    if (ctx->pc == 0x233A24u) {
        ctx->pc = 0x233A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A20u;
        // 0x233a24: 0x8f8282d0  lw          $v0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A28u;
        goto label_233a28;
    }
    ctx->pc = 0x233A20u;
    {
        const bool branch_taken_0x233a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A20u;
        // 0x233a24: 0x8f8282d0  lw          $v0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a20) {
            ctx->pc = 0x233A40u;
            goto label_233a40;
        }
    }
    ctx->pc = 0x233A28u;
label_233a28:
    // 0x233a28: 0xc08cd34  jal         func_2334D0
label_233a2c:
    if (ctx->pc == 0x233A2Cu) {
        ctx->pc = 0x233A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A28u;
        // 0x233a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A30u;
        goto label_233a30;
    }
    ctx->pc = 0x233A28u;
    SET_GPR_U32(ctx, 31, 0x233A30u);
    ctx->pc = 0x233A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A28u;
    // 0x233a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334D0u;
    { ctx->pc = 0x2334d0; return; }
    ctx->pc = 0x233A30u;
label_233a30:
    // 0x233a30: 0x5452ff88  bnel        $v0, $s2, . + 4 + (-0x78 << 2)
label_233a34:
    if (ctx->pc == 0x233A34u) {
        ctx->pc = 0x233A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A30u;
        // 0x233a34: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A38u;
        goto label_233a38;
    }
    ctx->pc = 0x233A30u;
    {
        const bool branch_taken_0x233a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x233a30) {
            ctx->pc = 0x233A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233A30u;
            // 0x233a34: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233854;
        }
    }
    ctx->pc = 0x233A38u;
label_233a38:
    // 0x233a38: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x233a38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_233a3c:
    // 0x233a3c: 0x8f8282d0  lw          $v0, -0x7D30($gp)
    ctx->pc = 0x233a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233a40:
    // 0x233a40: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x233a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
label_233a44:
    // 0x233a44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x233a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233a48:
    // 0x233a48: 0x8c631270  lw          $v1, 0x1270($v1)
    ctx->pc = 0x233a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4720)));
label_233a4c:
    // 0x233a4c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_233a50:
    if (ctx->pc == 0x233A50u) {
        ctx->pc = 0x233A54u;
        goto label_233a54;
    }
    ctx->pc = 0x233A4Cu;
    {
        const bool branch_taken_0x233a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x233a4c) {
            ctx->pc = 0x233AD4u;
            goto label_233ad4;
        }
    }
    ctx->pc = 0x233A54u;
label_233a54:
    // 0x233a54: 0xc08cd34  jal         func_2334D0
label_233a58:
    if (ctx->pc == 0x233A58u) {
        ctx->pc = 0x233A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A54u;
        // 0x233a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A5Cu;
        goto label_233a5c;
    }
    ctx->pc = 0x233A54u;
    SET_GPR_U32(ctx, 31, 0x233A5Cu);
    ctx->pc = 0x233A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233A54u;
    // 0x233a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334D0u;
    { ctx->pc = 0x2334d0; return; }
    ctx->pc = 0x233A5Cu;
label_233a5c:
    // 0x233a5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x233a5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233a60:
    // 0x233a60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_233a64:
    if (ctx->pc == 0x233A64u) {
        ctx->pc = 0x233A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A60u;
        // 0x233a64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233A68u;
        goto label_233a68;
    }
    ctx->pc = 0x233A60u;
    {
        const bool branch_taken_0x233a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233A60u;
        // 0x233a64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a60) {
            ctx->pc = 0x233A70u;
            goto label_233a70;
        }
    }
    ctx->pc = 0x233A68u;
label_233a68:
    // 0x233a68: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_233a6c:
    if (ctx->pc == 0x233A6Cu) {
        ctx->pc = 0x233A70u;
        goto label_233a70;
    }
    ctx->pc = 0x233A68u;
    {
        const bool branch_taken_0x233a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x233a68) {
            ctx->pc = 0x233AD4u;
            goto label_233ad4;
        }
    }
    ctx->pc = 0x233A70u;
label_233a70:
    // 0x233a70: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x233a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233a74:
    // 0x233a74: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x233a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_233a78:
    // 0x233a78: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233a7c:
    // 0x233a7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x233a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_233a80:
    // 0x233a80: 0x8c421268  lw          $v0, 0x1268($v0)
    ctx->pc = 0x233a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4712)));
label_233a84:
    // 0x233a84: 0x0  nop
    ctx->pc = 0x233a84u;
    // NOP
label_233a88:
    // 0x233a88: 0x0  nop
    ctx->pc = 0x233a88u;
    // NOP
label_233a8c:
    // 0x233a8c: 0x0  nop
    ctx->pc = 0x233a8cu;
    // NOP
label_233a90:
    // 0x233a90: 0x0  nop
    ctx->pc = 0x233a90u;
    // NOP
label_233a94:
    // 0x233a94: 0x0  nop
    ctx->pc = 0x233a94u;
    // NOP
label_233a98:
    // 0x233a98: 0x0  nop
    ctx->pc = 0x233a98u;
    // NOP
label_233a9c:
    // 0x233a9c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_233aa0:
    if (ctx->pc == 0x233AA0u) {
        ctx->pc = 0x233AA4u;
        goto label_233aa4;
    }
    ctx->pc = 0x233A9Cu;
    {
        const bool branch_taken_0x233a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233a9c) {
            ctx->pc = 0x233A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233a78;
        }
    }
    ctx->pc = 0x233AA4u;
label_233aa4:
    // 0x233aa4: 0x0  nop
    ctx->pc = 0x233aa4u;
    // NOP
label_233aa8:
    // 0x233aa8: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x233aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_233aac:
    // 0x233aac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233ab0:
    // 0x233ab0: 0x8c421270  lw          $v0, 0x1270($v0)
    ctx->pc = 0x233ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4720)));
label_233ab4:
    // 0x233ab4: 0x0  nop
    ctx->pc = 0x233ab4u;
    // NOP
label_233ab8:
    // 0x233ab8: 0x0  nop
    ctx->pc = 0x233ab8u;
    // NOP
label_233abc:
    // 0x233abc: 0x0  nop
    ctx->pc = 0x233abcu;
    // NOP
label_233ac0:
    // 0x233ac0: 0x0  nop
    ctx->pc = 0x233ac0u;
    // NOP
label_233ac4:
    // 0x233ac4: 0x0  nop
    ctx->pc = 0x233ac4u;
    // NOP
label_233ac8:
    // 0x233ac8: 0x0  nop
    ctx->pc = 0x233ac8u;
    // NOP
label_233acc:
    // 0x233acc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_233ad0:
    if (ctx->pc == 0x233AD0u) {
        ctx->pc = 0x233AD4u;
        goto label_233ad4;
    }
    ctx->pc = 0x233ACCu;
    {
        const bool branch_taken_0x233acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233acc) {
            ctx->pc = 0x233AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233aa8;
        }
    }
    ctx->pc = 0x233AD4u;
label_233ad4:
    // 0x233ad4: 0xc068ade  jal         func_1A2B78
label_233ad8:
    if (ctx->pc == 0x233AD8u) {
        ctx->pc = 0x233AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AD4u;
        // 0x233ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233ADCu;
        goto label_233adc;
    }
    ctx->pc = 0x233AD4u;
    SET_GPR_U32(ctx, 31, 0x233ADCu);
    ctx->pc = 0x233AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233AD4u;
    // 0x233ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2B78u;
    { ctx->pc = 0x1a2b78; return; }
    ctx->pc = 0x233ADCu;
label_233adc:
    // 0x233adc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x233adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_233ae0:
    // 0x233ae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233ae4:
    // 0x233ae4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233ae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_233ae8:
    // 0x233ae8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x233ae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_233aec:
    // 0x233aec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233aecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_233af0:
    // 0x233af0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233af0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_233af4:
    // 0x233af4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x233af4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_233af8:
    // 0x233af8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x233af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_233afc:
    // 0x233afc: 0x3e00008  jr          $ra
label_233b00:
    if (ctx->pc == 0x233B00u) {
        ctx->pc = 0x233B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AFCu;
        // 0x233b00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B04u;
        goto label_233b04;
    }
    ctx->pc = 0x233AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233AFCu;
        // 0x233b00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233B04u;
label_233b04:
    // 0x233b04: 0x0  nop
    ctx->pc = 0x233b04u;
    // NOP
label_233b08:
    // 0x233b08: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233b0c:
    // 0x233b0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233b0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233b10:
    // 0x233b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233b14:
    // 0x233b14: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_233b18:
    // 0x233b18: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x233b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
label_233b1c:
    // 0x233b1c: 0xc08cd30  jal         func_2334C0
label_233b20:
    if (ctx->pc == 0x233B20u) {
        ctx->pc = 0x233B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B1Cu;
        // 0x233b20: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B24u;
        goto label_233b24;
    }
    ctx->pc = 0x233B1Cu;
    SET_GPR_U32(ctx, 31, 0x233B24u);
    ctx->pc = 0x233B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B1Cu;
    // 0x233b20: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334C0u;
    { ctx->pc = 0x2334c0; return; }
    ctx->pc = 0x233B24u;
label_233b24:
    // 0x233b24: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233b28:
    // 0x233b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233b2c:
    // 0x233b2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x233b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_233b30:
    // 0x233b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233b34:
    // 0x233b34: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_233b38:
    // 0x233b38: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x233b38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_233b3c:
    // 0x233b3c: 0xac231290  sw          $v1, 0x1290($at)
    ctx->pc = 0x233b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4752), GPR_U32(ctx, 3));
label_233b40:
    // 0x233b40: 0x3e00008  jr          $ra
label_233b44:
    if (ctx->pc == 0x233B44u) {
        ctx->pc = 0x233B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B40u;
        // 0x233b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B48u;
        goto label_233b48;
    }
    ctx->pc = 0x233B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B40u;
        // 0x233b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233B48u;
label_233b48:
    // 0x233b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233b4c:
    // 0x233b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233b50:
    // 0x233b50: 0xc08c42e  jal         func_2310B8
label_233b54:
    if (ctx->pc == 0x233B54u) {
        ctx->pc = 0x233B58u;
        goto label_233b58;
    }
    ctx->pc = 0x233B50u;
    SET_GPR_U32(ctx, 31, 0x233B58u);
    ctx->pc = 0x2310B8u;
    { ctx->pc = 0x2310b8; return; }
    ctx->pc = 0x233B58u;
label_233b58:
    // 0x233b58: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233b5c:
    // 0x233b5c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_233b60:
    // 0x233b60: 0x342111a0  ori         $at, $at, 0x11A0
    ctx->pc = 0x233b60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4512);
label_233b64:
    // 0x233b64: 0xc08c9ee  jal         func_2327B8
label_233b68:
    if (ctx->pc == 0x233B68u) {
        ctx->pc = 0x233B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B64u;
        // 0x233b68: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B6Cu;
        goto label_233b6c;
    }
    ctx->pc = 0x233B64u;
    SET_GPR_U32(ctx, 31, 0x233B6Cu);
    ctx->pc = 0x233B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B64u;
    // 0x233b68: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2327B8u;
    { ctx->pc = 0x2327b8; return; }
    ctx->pc = 0x233B6Cu;
label_233b6c:
    // 0x233b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233b70:
    // 0x233b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233b74:
    // 0x233b74: 0x3e00008  jr          $ra
label_233b78:
    if (ctx->pc == 0x233B78u) {
        ctx->pc = 0x233B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B74u;
        // 0x233b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B7Cu;
        goto label_233b7c;
    }
    ctx->pc = 0x233B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B74u;
        // 0x233b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233B7Cu;
label_233b7c:
    // 0x233b7c: 0x0  nop
    ctx->pc = 0x233b7cu;
    // NOP
label_233b80:
    // 0x233b80: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233b84:
    // 0x233b84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233b88:
    // 0x233b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233b8c:
    // 0x233b8c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_233b90:
    // 0x233b90: 0x342111a0  ori         $at, $at, 0x11A0
    ctx->pc = 0x233b90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4512);
label_233b94:
    // 0x233b94: 0xc08ca6e  jal         func_2329B8
label_233b98:
    if (ctx->pc == 0x233B98u) {
        ctx->pc = 0x233B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233B94u;
        // 0x233b98: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233B9Cu;
        goto label_233b9c;
    }
    ctx->pc = 0x233B94u;
    SET_GPR_U32(ctx, 31, 0x233B9Cu);
    ctx->pc = 0x233B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233B94u;
    // 0x233b98: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2329B8u;
    { ctx->pc = 0x2329b8; return; }
    ctx->pc = 0x233B9Cu;
label_233b9c:
    // 0x233b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233ba0:
    // 0x233ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233ba4:
    // 0x233ba4: 0x3e00008  jr          $ra
label_233ba8:
    if (ctx->pc == 0x233BA8u) {
        ctx->pc = 0x233BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BA4u;
        // 0x233ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233BACu;
        goto label_233bac;
    }
    ctx->pc = 0x233BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BA4u;
        // 0x233ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233BACu;
label_233bac:
    // 0x233bac: 0x0  nop
    ctx->pc = 0x233bacu;
    // NOP
label_233bb0:
    // 0x233bb0: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233bb4:
    // 0x233bb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233bb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233bb8:
    // 0x233bb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_233bbc:
    // 0x233bbc: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_233bc0:
    // 0x233bc0: 0x342111a0  ori         $at, $at, 0x11A0
    ctx->pc = 0x233bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4512);
label_233bc4:
    // 0x233bc4: 0xc08cab0  jal         func_232AC0
label_233bc8:
    if (ctx->pc == 0x233BC8u) {
        ctx->pc = 0x233BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BC4u;
        // 0x233bc8: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233BCCu;
        goto label_233bcc;
    }
    ctx->pc = 0x233BC4u;
    SET_GPR_U32(ctx, 31, 0x233BCCu);
    ctx->pc = 0x233BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233BC4u;
    // 0x233bc8: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232AC0u;
    { ctx->pc = 0x232ac0; return; }
    ctx->pc = 0x233BCCu;
label_233bcc:
    // 0x233bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233bd0:
    // 0x233bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x233bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233bd4:
    // 0x233bd4: 0x3e00008  jr          $ra
label_233bd8:
    if (ctx->pc == 0x233BD8u) {
        ctx->pc = 0x233BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BD4u;
        // 0x233bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233BDCu;
        goto label_233bdc;
    }
    ctx->pc = 0x233BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233BD4u;
        // 0x233bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233BDCu;
label_233bdc:
    // 0x233bdc: 0x0  nop
    ctx->pc = 0x233bdcu;
    // NOP
label_233be0:
    // 0x233be0: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x233be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_233be4:
    // 0x233be4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x233be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_233be8:
    // 0x233be8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x233be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_233bec:
    // 0x233bec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x233becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_233bf0:
    // 0x233bf0: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x233bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_233bf4:
    // 0x233bf4: 0x342111a0  ori         $at, $at, 0x11A0
    ctx->pc = 0x233bf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4512);
label_233bf8:
    // 0x233bf8: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x233bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_233bfc:
    // 0x233bfc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x233bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_233c00:
    // 0x233c00: 0xc08cc62  jal         func_233188
label_233c04:
    if (ctx->pc == 0x233C04u) {
        ctx->pc = 0x233C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C00u;
        // 0x233c04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233C08u;
        goto label_233c08;
    }
    ctx->pc = 0x233C00u;
    SET_GPR_U32(ctx, 31, 0x233C08u);
    ctx->pc = 0x233C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C00u;
    // 0x233c04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233188u;
    { ctx->pc = 0x233188; return; }
    ctx->pc = 0x233C08u;
label_233c08:
    // 0x233c08: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x233c08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233c0c:
    // 0x233c0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233c10:
    // 0x233c10: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x233c10u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_233c14:
    // 0x233c14: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x233c14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
label_233c18:
    // 0x233c18: 0xfe040010  sd          $a0, 0x10($s0)
    ctx->pc = 0x233c18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
label_233c1c:
    // 0x233c1c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x233c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_233c20:
    // 0x233c20: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x233c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_233c24:
    // 0x233c24: 0x3e00008  jr          $ra
label_233c28:
    if (ctx->pc == 0x233C28u) {
        ctx->pc = 0x233C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C24u;
        // 0x233c28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233C2Cu;
        goto label_233c2c;
    }
    ctx->pc = 0x233C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C24u;
        // 0x233c28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233C2Cu;
label_233c2c:
    // 0x233c2c: 0x0  nop
    ctx->pc = 0x233c2cu;
    // NOP
label_233c30:
    // 0x233c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x233c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_233c34:
    // 0x233c34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x233c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233c38:
    // 0x233c38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233c3c:
    // 0x233c3c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x233c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_233c40:
    // 0x233c40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x233c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_233c44:
    // 0x233c44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x233c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_233c48:
    // 0x233c48: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x233c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_233c4c:
    // 0x233c4c: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x233c4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_233c50:
    // 0x233c50: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x233c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_233c54:
    // 0x233c54: 0x215f021  addu        $fp, $s0, $s5
    ctx->pc = 0x233c54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_233c58:
    // 0x233c58: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x233c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_233c5c:
    // 0x233c5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x233c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_233c60:
    // 0x233c60: 0xfe382a  slt         $a3, $a3, $fp
    ctx->pc = 0x233c60u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_233c64:
    // 0x233c64: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x233c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_233c68:
    // 0x233c68: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x233c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_233c6c:
    // 0x233c6c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x233c6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_233c70:
    // 0x233c70: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x233c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_233c74:
    // 0x233c74: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x233c74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_233c78:
    // 0x233c78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x233c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_233c7c:
    // 0x233c7c: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x233c7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_233c80:
    // 0x233c80: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x233c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_233c84:
    // 0x233c84: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x233c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_233c88:
    // 0x233c88: 0x14e00028  bnez        $a3, . + 4 + (0x28 << 2)
label_233c8c:
    if (ctx->pc == 0x233C8Cu) {
        ctx->pc = 0x233C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C88u;
        // 0x233c8c: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233C90u;
        goto label_233c90;
    }
    ctx->pc = 0x233C88u;
    {
        const bool branch_taken_0x233c88 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x233C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C88u;
        // 0x233c8c: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c88) {
            ctx->pc = 0x233D2Cu;
            goto label_233d2c;
        }
    }
    ctx->pc = 0x233C90u;
label_233c90:
    // 0x233c90: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_233c94:
    if (ctx->pc == 0x233C94u) {
        ctx->pc = 0x233C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C90u;
        // 0x233c94: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233C98u;
        goto label_233c98;
    }
    ctx->pc = 0x233C90u;
    {
        const bool branch_taken_0x233c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x233c90) {
            ctx->pc = 0x233C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233C90u;
            // 0x233c94: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233CD0u;
            goto label_233cd0;
        }
    }
    ctx->pc = 0x233C98u;
label_233c98:
    // 0x233c98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x233c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_233c9c:
    // 0x233c9c: 0xc08e93e  jal         func_23A4F8
label_233ca0:
    if (ctx->pc == 0x233CA0u) {
        ctx->pc = 0x233CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C9Cu;
        // 0x233ca0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233CA4u;
        goto label_233ca4;
    }
    ctx->pc = 0x233C9Cu;
    SET_GPR_U32(ctx, 31, 0x233CA4u);
    ctx->pc = 0x233CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C9Cu;
    // 0x233ca0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x233CA4u;
label_233ca4:
    // 0x233ca4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x233ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_233ca8:
    // 0x233ca8: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x233ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_233cac:
    // 0x233cac: 0xc08e93e  jal         func_23A4F8
label_233cb0:
    if (ctx->pc == 0x233CB0u) {
        ctx->pc = 0x233CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CACu;
        // 0x233cb0: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233CB4u;
        goto label_233cb4;
    }
    ctx->pc = 0x233CACu;
    SET_GPR_U32(ctx, 31, 0x233CB4u);
    ctx->pc = 0x233CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CACu;
    // 0x233cb0: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x233CB4u;
label_233cb4:
    // 0x233cb4: 0x2d02021  addu        $a0, $s6, $s0
    ctx->pc = 0x233cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_233cb8:
    // 0x233cb8: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x233cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_233cbc:
    // 0x233cbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x233cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_233cc0:
    // 0x233cc0: 0xc08e93e  jal         func_23A4F8
label_233cc4:
    if (ctx->pc == 0x233CC4u) {
        ctx->pc = 0x233CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CC0u;
        // 0x233cc4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233CC8u;
        goto label_233cc8;
    }
    ctx->pc = 0x233CC0u;
    SET_GPR_U32(ctx, 31, 0x233CC8u);
    ctx->pc = 0x233CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CC0u;
    // 0x233cc4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x233CC8u;
label_233cc8:
    // 0x233cc8: 0x10000018  b           . + 4 + (0x18 << 2)
label_233ccc:
    if (ctx->pc == 0x233CCCu) {
        ctx->pc = 0x233CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CC8u;
        // 0x233ccc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233CD0u;
        goto label_233cd0;
    }
    ctx->pc = 0x233CC8u;
    {
        const bool branch_taken_0x233cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CC8u;
        // 0x233ccc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cc8) {
            ctx->pc = 0x233D2Cu;
            goto label_233d2c;
        }
    }
    ctx->pc = 0x233CD0u;
label_233cd0:
    // 0x233cd0: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x233cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_233cd4:
    // 0x233cd4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_233cd8:
    if (ctx->pc == 0x233CD8u) {
        ctx->pc = 0x233CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CD4u;
        // 0x233cd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233CDCu;
        goto label_233cdc;
    }
    ctx->pc = 0x233CD4u;
    {
        const bool branch_taken_0x233cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CD4u;
        // 0x233cd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cd4) {
            ctx->pc = 0x233D10u;
            goto label_233d10;
        }
    }
    ctx->pc = 0x233CDCu;
label_233cdc:
    // 0x233cdc: 0xc08e93e  jal         func_23A4F8
label_233ce0:
    if (ctx->pc == 0x233CE0u) {
        ctx->pc = 0x233CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CDCu;
        // 0x233ce0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233CE4u;
        goto label_233ce4;
    }
    ctx->pc = 0x233CDCu;
    SET_GPR_U32(ctx, 31, 0x233CE4u);
    ctx->pc = 0x233CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CDCu;
    // 0x233ce0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x233CE4u;
label_233ce4:
    // 0x233ce4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x233ce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_233ce8:
    // 0x233ce8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x233ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_233cec:
    // 0x233cec: 0xc08e93e  jal         func_23A4F8
label_233cf0:
    if (ctx->pc == 0x233CF0u) {
        ctx->pc = 0x233CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CECu;
        // 0x233cf0: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233CF4u;
        goto label_233cf4;
    }
    ctx->pc = 0x233CECu;
    SET_GPR_U32(ctx, 31, 0x233CF4u);
    ctx->pc = 0x233CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233CECu;
    // 0x233cf0: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x233CF4u;
label_233cf4:
    // 0x233cf4: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x233cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_233cf8:
    // 0x233cf8: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x233cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_233cfc:
    // 0x233cfc: 0x2b33023  subu        $a2, $s5, $s3
    ctx->pc = 0x233cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_233d00:
    // 0x233d00: 0xc08e93e  jal         func_23A4F8
label_233d04:
    if (ctx->pc == 0x233D04u) {
        ctx->pc = 0x233D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D00u;
        // 0x233d04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D08u;
        goto label_233d08;
    }
    ctx->pc = 0x233D00u;
    SET_GPR_U32(ctx, 31, 0x233D08u);
    ctx->pc = 0x233D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D00u;
    // 0x233d04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x233D08u;
label_233d08:
    // 0x233d08: 0x10000008  b           . + 4 + (0x8 << 2)
label_233d0c:
    if (ctx->pc == 0x233D0Cu) {
        ctx->pc = 0x233D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D08u;
        // 0x233d0c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D10u;
        goto label_233d10;
    }
    ctx->pc = 0x233D08u;
    {
        const bool branch_taken_0x233d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D08u;
        // 0x233d0c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d08) {
            ctx->pc = 0x233D2Cu;
            goto label_233d2c;
        }
    }
    ctx->pc = 0x233D10u;
label_233d10:
    // 0x233d10: 0xc08e93e  jal         func_23A4F8
label_233d14:
    if (ctx->pc == 0x233D14u) {
        ctx->pc = 0x233D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D10u;
        // 0x233d14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D18u;
        goto label_233d18;
    }
    ctx->pc = 0x233D10u;
    SET_GPR_U32(ctx, 31, 0x233D18u);
    ctx->pc = 0x233D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D10u;
    // 0x233d14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x233D18u;
label_233d18:
    // 0x233d18: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x233d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_233d1c:
    // 0x233d1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x233d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_233d20:
    // 0x233d20: 0xc08e93e  jal         func_23A4F8
label_233d24:
    if (ctx->pc == 0x233D24u) {
        ctx->pc = 0x233D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D20u;
        // 0x233d24: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D28u;
        goto label_233d28;
    }
    ctx->pc = 0x233D20u;
    SET_GPR_U32(ctx, 31, 0x233D28u);
    ctx->pc = 0x233D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D20u;
    // 0x233d24: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x233D28u;
label_233d28:
    // 0x233d28: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x233d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_233d2c:
    // 0x233d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233d30:
    // 0x233d30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233d30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_233d34:
    // 0x233d34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x233d34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_233d38:
    // 0x233d38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233d38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_233d3c:
    // 0x233d3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233d3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_233d40:
    // 0x233d40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x233d40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_233d44:
    // 0x233d44: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x233d44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_233d48:
    // 0x233d48: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x233d48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_233d4c:
    // 0x233d4c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x233d4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_233d50:
    // 0x233d50: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x233d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_233d54:
    // 0x233d54: 0x3e00008  jr          $ra
label_233d58:
    if (ctx->pc == 0x233D58u) {
        ctx->pc = 0x233D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D54u;
        // 0x233d58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D5Cu;
        goto label_233d5c;
    }
    ctx->pc = 0x233D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D54u;
        // 0x233d58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233D5Cu;
label_233d5c:
    // 0x233d5c: 0x0  nop
    ctx->pc = 0x233d5cu;
    // NOP
label_233d60:
    // 0x233d60: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x233d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_233d64:
    // 0x233d64: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x233d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_233d68:
    // 0x233d68: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x233d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_233d6c:
    // 0x233d6c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x233d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_233d70:
    // 0x233d70: 0x18e00008  blez        $a3, . + 4 + (0x8 << 2)
label_233d74:
    if (ctx->pc == 0x233D74u) {
        ctx->pc = 0x233D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D70u;
        // 0x233d74: 0xac870010  sw          $a3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D78u;
        goto label_233d78;
    }
    ctx->pc = 0x233D70u;
    {
        const bool branch_taken_0x233d70 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x233D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D70u;
        // 0x233d74: 0xac870010  sw          $a3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d70) {
            ctx->pc = 0x233D94u;
            goto label_233d94;
        }
    }
    ctx->pc = 0x233D78u;
label_233d78:
    // 0x233d78: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x233d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_233d7c:
    // 0x233d7c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x233d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_233d80:
    // 0x233d80: 0x0  nop
    ctx->pc = 0x233d80u;
    // NOP
label_233d84:
    // 0x233d84: 0x0  nop
    ctx->pc = 0x233d84u;
    // NOP
label_233d88:
    // 0x233d88: 0x0  nop
    ctx->pc = 0x233d88u;
    // NOP
label_233d8c:
    // 0x233d8c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
label_233d90:
    if (ctx->pc == 0x233D90u) {
        ctx->pc = 0x233D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D8Cu;
        // 0x233d90: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233D94u;
        goto label_233d94;
    }
    ctx->pc = 0x233D8Cu;
    {
        const bool branch_taken_0x233d8c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x233D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D8Cu;
        // 0x233d90: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233d8c) {
            ctx->pc = 0x233D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233d78;
        }
    }
    ctx->pc = 0x233D94u;
label_233d94:
    // 0x233d94: 0x3e00008  jr          $ra
label_233d98:
    if (ctx->pc == 0x233D98u) {
        ctx->pc = 0x233D9Cu;
        goto label_233d9c;
    }
    ctx->pc = 0x233D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233D9Cu;
label_233d9c:
    // 0x233d9c: 0x0  nop
    ctx->pc = 0x233d9cu;
    // NOP
label_233da0:
    // 0x233da0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x233da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_233da4:
    // 0x233da4: 0x3e00008  jr          $ra
label_233da8:
    if (ctx->pc == 0x233DA8u) {
        ctx->pc = 0x233DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DA4u;
        // 0x233da8: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233DACu;
        goto label_233dac;
    }
    ctx->pc = 0x233DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DA4u;
        // 0x233da8: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233DACu;
label_233dac:
    // 0x233dac: 0x0  nop
    ctx->pc = 0x233dacu;
    // NOP
label_233db0:
    // 0x233db0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x233db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_233db4:
    // 0x233db4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x233db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_233db8:
    // 0x233db8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x233db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_233dbc:
    // 0x233dbc: 0x3e00008  jr          $ra
label_233dc0:
    if (ctx->pc == 0x233DC0u) {
        ctx->pc = 0x233DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DBCu;
        // 0x233dc0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233DC4u;
        goto label_233dc4;
    }
    ctx->pc = 0x233DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DBCu;
        // 0x233dc0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233DC4u;
label_233dc4:
    // 0x233dc4: 0x0  nop
    ctx->pc = 0x233dc4u;
    // NOP
label_233dc8:
    // 0x233dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233dcc:
    // 0x233dcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233dd0:
    // 0x233dd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x233dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_233dd4:
    // 0x233dd4: 0xc06b518  jal         func_1AD460
label_233dd8:
    if (ctx->pc == 0x233DD8u) {
        ctx->pc = 0x233DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233DD4u;
        // 0x233dd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233DDCu;
        goto label_233ddc;
    }
    ctx->pc = 0x233DD4u;
    SET_GPR_U32(ctx, 31, 0x233DDCu);
    ctx->pc = 0x233DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233DD4u;
    // 0x233dd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x233DDCu;
label_233ddc:
    // 0x233ddc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x233ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_233de0:
    // 0x233de0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x233de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_233de4:
    // 0x233de4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x233de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_233de8:
    // 0x233de8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x233de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_233dec:
    // 0x233dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233df0:
    // 0x233df0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x233df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_233df4:
    // 0x233df4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x233df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_233df8:
    // 0x233df8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x233df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_233dfc:
    // 0x233dfc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x233dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_233e00:
    // 0x233e00: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x233e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_233e04:
    // 0x233e04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x233e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_233e08:
    // 0x233e08: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x233e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_233e0c:
    // 0x233e0c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_233e10:
    if (ctx->pc == 0x233E10u) {
        ctx->pc = 0x233E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E0Cu;
        // 0x233e10: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E14u;
        goto label_233e14;
    }
    ctx->pc = 0x233E0Cu;
    {
        const bool branch_taken_0x233e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x233e0c) {
            ctx->pc = 0x233E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233E0Cu;
            // 0x233e10: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x233E14u;
            goto label_233e14;
        }
    }
    ctx->pc = 0x233E14u;
label_233e14:
    // 0x233e14: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x233e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_233e18:
    // 0x233e18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x233e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_233e1c:
    // 0x233e1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x233e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_233e20:
    // 0x233e20: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x233e20u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_233e24:
    // 0x233e24: 0x1810  mfhi        $v1
    ctx->pc = 0x233e24u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_233e28:
    // 0x233e28: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x233e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_233e2c:
    // 0x233e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233e30:
    // 0x233e30: 0x806b52a  j           func_1AD4A8
label_233e34:
    if (ctx->pc == 0x233E34u) {
        ctx->pc = 0x233E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E30u;
        // 0x233e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E38u;
        goto label_233e38;
    }
    ctx->pc = 0x233E30u;
    ctx->pc = 0x233E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E30u;
    // 0x233e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x233E38u;
label_233e38:
    // 0x233e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233e3c:
    // 0x233e3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_233e40:
    // 0x233e40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x233e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_233e44:
    // 0x233e44: 0xc08cf6c  jal         func_233DB0
label_233e48:
    if (ctx->pc == 0x233E48u) {
        ctx->pc = 0x233E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E44u;
        // 0x233e48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E4Cu;
        goto label_233e4c;
    }
    ctx->pc = 0x233E44u;
    SET_GPR_U32(ctx, 31, 0x233E4Cu);
    ctx->pc = 0x233E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E44u;
    // 0x233e48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233DB0u;
    goto label_233db0;
    ctx->pc = 0x233E4Cu;
label_233e4c:
    // 0x233e4c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_233e50:
    if (ctx->pc == 0x233E50u) {
        ctx->pc = 0x233E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E4Cu;
        // 0x233e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E54u;
        goto label_233e54;
    }
    ctx->pc = 0x233E4Cu;
    {
        const bool branch_taken_0x233e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233e4c) {
            ctx->pc = 0x233E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233E4Cu;
            // 0x233e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233E64u;
            goto label_233e64;
        }
    }
    ctx->pc = 0x233E54u;
label_233e54:
    // 0x233e54: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x233e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_233e58:
    // 0x233e58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x233e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_233e5c:
    // 0x233e5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x233e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_233e60:
    // 0x233e60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x233e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233e64:
    // 0x233e64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_233e68:
    // 0x233e68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x233e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_233e6c:
    // 0x233e6c: 0x3e00008  jr          $ra
label_233e70:
    if (ctx->pc == 0x233E70u) {
        ctx->pc = 0x233E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E6Cu;
        // 0x233e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E74u;
        goto label_233e74;
    }
    ctx->pc = 0x233E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E6Cu;
        // 0x233e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233E74u;
label_233e74:
    // 0x233e74: 0x0  nop
    ctx->pc = 0x233e74u;
    // NOP
label_233e78:
    // 0x233e78: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x233e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_233e7c:
    // 0x233e7c: 0x3e00008  jr          $ra
label_233e80:
    if (ctx->pc == 0x233E80u) {
        ctx->pc = 0x233E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E7Cu;
        // 0x233e80: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233E84u;
        goto label_233e84;
    }
    ctx->pc = 0x233E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E7Cu;
        // 0x233e80: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233E84u;
label_233e84:
    // 0x233e84: 0x0  nop
    ctx->pc = 0x233e84u;
    // NOP
label_233e88:
    // 0x233e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233e8c:
    // 0x233e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x233e90u;
    return;
}

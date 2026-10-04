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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part37(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x266678u: goto label_266678;
        case 0x26667cu: goto label_26667c;
        case 0x266680u: goto label_266680;
        case 0x266684u: goto label_266684;
        case 0x266688u: goto label_266688;
        case 0x26668cu: goto label_26668c;
        case 0x266690u: goto label_266690;
        case 0x266694u: goto label_266694;
        case 0x266698u: goto label_266698;
        case 0x26669cu: goto label_26669c;
        case 0x2666a0u: goto label_2666a0;
        case 0x2666a4u: goto label_2666a4;
        case 0x2666a8u: goto label_2666a8;
        case 0x2666acu: goto label_2666ac;
        case 0x2666b0u: goto label_2666b0;
        case 0x2666b4u: goto label_2666b4;
        case 0x2666b8u: goto label_2666b8;
        case 0x2666bcu: goto label_2666bc;
        case 0x2666c0u: goto label_2666c0;
        case 0x2666c4u: goto label_2666c4;
        case 0x2666c8u: goto label_2666c8;
        case 0x2666ccu: goto label_2666cc;
        case 0x2666d0u: goto label_2666d0;
        case 0x2666d4u: goto label_2666d4;
        case 0x2666d8u: goto label_2666d8;
        case 0x2666dcu: goto label_2666dc;
        case 0x2666e0u: goto label_2666e0;
        case 0x2666e4u: goto label_2666e4;
        case 0x2666e8u: goto label_2666e8;
        case 0x2666ecu: goto label_2666ec;
        case 0x2666f0u: goto label_2666f0;
        case 0x2666f4u: goto label_2666f4;
        case 0x2666f8u: goto label_2666f8;
        case 0x2666fcu: goto label_2666fc;
        case 0x266700u: goto label_266700;
        case 0x266704u: goto label_266704;
        case 0x266708u: goto label_266708;
        case 0x26670cu: goto label_26670c;
        case 0x266710u: goto label_266710;
        case 0x266714u: goto label_266714;
        case 0x266718u: goto label_266718;
        case 0x26671cu: goto label_26671c;
        case 0x266720u: goto label_266720;
        case 0x266724u: goto label_266724;
        case 0x266728u: goto label_266728;
        case 0x26672cu: goto label_26672c;
        case 0x266730u: goto label_266730;
        case 0x266734u: goto label_266734;
        case 0x266738u: goto label_266738;
        case 0x26673cu: goto label_26673c;
        case 0x266740u: goto label_266740;
        case 0x266744u: goto label_266744;
        case 0x266748u: goto label_266748;
        case 0x26674cu: goto label_26674c;
        case 0x266750u: goto label_266750;
        case 0x266754u: goto label_266754;
        case 0x266758u: goto label_266758;
        case 0x26675cu: goto label_26675c;
        case 0x266760u: goto label_266760;
        case 0x266764u: goto label_266764;
        case 0x266768u: goto label_266768;
        case 0x26676cu: goto label_26676c;
        case 0x266770u: goto label_266770;
        case 0x266774u: goto label_266774;
        case 0x266778u: goto label_266778;
        case 0x26677cu: goto label_26677c;
        case 0x266780u: goto label_266780;
        case 0x266784u: goto label_266784;
        case 0x266788u: goto label_266788;
        case 0x26678cu: goto label_26678c;
        case 0x266790u: goto label_266790;
        case 0x266794u: goto label_266794;
        case 0x266798u: goto label_266798;
        case 0x26679cu: goto label_26679c;
        case 0x2667a0u: goto label_2667a0;
        case 0x2667a4u: goto label_2667a4;
        case 0x2667a8u: goto label_2667a8;
        case 0x2667acu: goto label_2667ac;
        case 0x2667b0u: goto label_2667b0;
        case 0x2667b4u: goto label_2667b4;
        case 0x2667b8u: goto label_2667b8;
        case 0x2667bcu: goto label_2667bc;
        case 0x2667c0u: goto label_2667c0;
        case 0x2667c4u: goto label_2667c4;
        case 0x2667c8u: goto label_2667c8;
        case 0x2667ccu: goto label_2667cc;
        case 0x2667d0u: goto label_2667d0;
        case 0x2667d4u: goto label_2667d4;
        case 0x2667d8u: goto label_2667d8;
        case 0x2667dcu: goto label_2667dc;
        case 0x2667e0u: goto label_2667e0;
        case 0x2667e4u: goto label_2667e4;
        case 0x2667e8u: goto label_2667e8;
        case 0x2667ecu: goto label_2667ec;
        case 0x2667f0u: goto label_2667f0;
        case 0x2667f4u: goto label_2667f4;
        case 0x2667f8u: goto label_2667f8;
        case 0x2667fcu: goto label_2667fc;
        case 0x266800u: goto label_266800;
        case 0x266804u: goto label_266804;
        case 0x266808u: goto label_266808;
        case 0x26680cu: goto label_26680c;
        case 0x266810u: goto label_266810;
        case 0x266814u: goto label_266814;
        case 0x266818u: goto label_266818;
        case 0x26681cu: goto label_26681c;
        case 0x266820u: goto label_266820;
        case 0x266824u: goto label_266824;
        case 0x266828u: goto label_266828;
        case 0x26682cu: goto label_26682c;
        case 0x266830u: goto label_266830;
        case 0x266834u: goto label_266834;
        case 0x266838u: goto label_266838;
        case 0x26683cu: goto label_26683c;
        case 0x266840u: goto label_266840;
        case 0x266844u: goto label_266844;
        case 0x266848u: goto label_266848;
        case 0x26684cu: goto label_26684c;
        case 0x266850u: goto label_266850;
        case 0x266854u: goto label_266854;
        case 0x266858u: goto label_266858;
        case 0x26685cu: goto label_26685c;
        case 0x266860u: goto label_266860;
        case 0x266864u: goto label_266864;
        case 0x266868u: goto label_266868;
        case 0x26686cu: goto label_26686c;
        case 0x266870u: goto label_266870;
        case 0x266874u: goto label_266874;
        case 0x266878u: goto label_266878;
        case 0x26687cu: goto label_26687c;
        case 0x266880u: goto label_266880;
        case 0x266884u: goto label_266884;
        case 0x266888u: goto label_266888;
        case 0x26688cu: goto label_26688c;
        case 0x266890u: goto label_266890;
        case 0x266894u: goto label_266894;
        case 0x266898u: goto label_266898;
        case 0x26689cu: goto label_26689c;
        case 0x2668a0u: goto label_2668a0;
        case 0x2668a4u: goto label_2668a4;
        case 0x2668a8u: goto label_2668a8;
        case 0x2668acu: goto label_2668ac;
        case 0x2668b0u: goto label_2668b0;
        case 0x2668b4u: goto label_2668b4;
        case 0x2668b8u: goto label_2668b8;
        case 0x2668bcu: goto label_2668bc;
        case 0x2668c0u: goto label_2668c0;
        case 0x2668c4u: goto label_2668c4;
        case 0x2668c8u: goto label_2668c8;
        case 0x2668ccu: goto label_2668cc;
        case 0x2668d0u: goto label_2668d0;
        case 0x2668d4u: goto label_2668d4;
        case 0x2668d8u: goto label_2668d8;
        case 0x2668dcu: goto label_2668dc;
        case 0x2668e0u: goto label_2668e0;
        case 0x2668e4u: goto label_2668e4;
        case 0x2668e8u: goto label_2668e8;
        case 0x2668ecu: goto label_2668ec;
        case 0x2668f0u: goto label_2668f0;
        case 0x2668f4u: goto label_2668f4;
        case 0x2668f8u: goto label_2668f8;
        case 0x2668fcu: goto label_2668fc;
        case 0x266900u: goto label_266900;
        case 0x266904u: goto label_266904;
        case 0x266908u: goto label_266908;
        case 0x26690cu: goto label_26690c;
        case 0x266910u: goto label_266910;
        case 0x266914u: goto label_266914;
        case 0x266918u: goto label_266918;
        case 0x26691cu: goto label_26691c;
        case 0x266920u: goto label_266920;
        case 0x266924u: goto label_266924;
        case 0x266928u: goto label_266928;
        case 0x26692cu: goto label_26692c;
        case 0x266930u: goto label_266930;
        case 0x266934u: goto label_266934;
        case 0x266938u: goto label_266938;
        case 0x26693cu: goto label_26693c;
        case 0x266940u: goto label_266940;
        case 0x266944u: goto label_266944;
        case 0x266948u: goto label_266948;
        case 0x26694cu: goto label_26694c;
        case 0x266950u: goto label_266950;
        case 0x266954u: goto label_266954;
        case 0x266958u: goto label_266958;
        case 0x26695cu: goto label_26695c;
        case 0x266960u: goto label_266960;
        case 0x266964u: goto label_266964;
        case 0x266968u: goto label_266968;
        case 0x26696cu: goto label_26696c;
        case 0x266970u: goto label_266970;
        case 0x266974u: goto label_266974;
        case 0x266978u: goto label_266978;
        case 0x26697cu: goto label_26697c;
        case 0x266980u: goto label_266980;
        case 0x266984u: goto label_266984;
        case 0x266988u: goto label_266988;
        case 0x26698cu: goto label_26698c;
        case 0x266990u: goto label_266990;
        case 0x266994u: goto label_266994;
        case 0x266998u: goto label_266998;
        case 0x26699cu: goto label_26699c;
        case 0x2669a0u: goto label_2669a0;
        case 0x2669a4u: goto label_2669a4;
        case 0x2669a8u: goto label_2669a8;
        case 0x2669acu: goto label_2669ac;
        case 0x2669b0u: goto label_2669b0;
        case 0x2669b4u: goto label_2669b4;
        case 0x2669b8u: goto label_2669b8;
        case 0x2669bcu: goto label_2669bc;
        case 0x2669c0u: goto label_2669c0;
        case 0x2669c4u: goto label_2669c4;
        case 0x2669c8u: goto label_2669c8;
        case 0x2669ccu: goto label_2669cc;
        case 0x2669d0u: goto label_2669d0;
        case 0x2669d4u: goto label_2669d4;
        case 0x2669d8u: goto label_2669d8;
        case 0x2669dcu: goto label_2669dc;
        case 0x2669e0u: goto label_2669e0;
        case 0x2669e4u: goto label_2669e4;
        case 0x2669e8u: goto label_2669e8;
        case 0x2669ecu: goto label_2669ec;
        case 0x2669f0u: goto label_2669f0;
        case 0x2669f4u: goto label_2669f4;
        case 0x2669f8u: goto label_2669f8;
        case 0x2669fcu: goto label_2669fc;
        case 0x266a00u: goto label_266a00;
        case 0x266a04u: goto label_266a04;
        case 0x266a08u: goto label_266a08;
        case 0x266a0cu: goto label_266a0c;
        case 0x266a10u: goto label_266a10;
        case 0x266a14u: goto label_266a14;
        case 0x266a18u: goto label_266a18;
        case 0x266a1cu: goto label_266a1c;
        case 0x266a20u: goto label_266a20;
        case 0x266a24u: goto label_266a24;
        case 0x266a28u: goto label_266a28;
        case 0x266a2cu: goto label_266a2c;
        case 0x266a30u: goto label_266a30;
        case 0x266a34u: goto label_266a34;
        case 0x266a38u: goto label_266a38;
        case 0x266a3cu: goto label_266a3c;
        case 0x266a40u: goto label_266a40;
        case 0x266a44u: goto label_266a44;
        case 0x266a48u: goto label_266a48;
        case 0x266a4cu: goto label_266a4c;
        case 0x266a50u: goto label_266a50;
        case 0x266a54u: goto label_266a54;
        case 0x266a58u: goto label_266a58;
        case 0x266a5cu: goto label_266a5c;
        case 0x266a60u: goto label_266a60;
        case 0x266a64u: goto label_266a64;
        case 0x266a68u: goto label_266a68;
        case 0x266a6cu: goto label_266a6c;
        case 0x266a70u: goto label_266a70;
        case 0x266a74u: goto label_266a74;
        case 0x266a78u: goto label_266a78;
        case 0x266a7cu: goto label_266a7c;
        case 0x266a80u: goto label_266a80;
        case 0x266a84u: goto label_266a84;
        case 0x266a88u: goto label_266a88;
        case 0x266a8cu: goto label_266a8c;
        case 0x266a90u: goto label_266a90;
        case 0x266a94u: goto label_266a94;
        case 0x266a98u: goto label_266a98;
        case 0x266a9cu: goto label_266a9c;
        case 0x266aa0u: goto label_266aa0;
        case 0x266aa4u: goto label_266aa4;
        case 0x266aa8u: goto label_266aa8;
        case 0x266aacu: goto label_266aac;
        case 0x266ab0u: goto label_266ab0;
        case 0x266ab4u: goto label_266ab4;
        case 0x266ab8u: goto label_266ab8;
        case 0x266abcu: goto label_266abc;
        case 0x266ac0u: goto label_266ac0;
        case 0x266ac4u: goto label_266ac4;
        case 0x266ac8u: goto label_266ac8;
        case 0x266accu: goto label_266acc;
        case 0x266ad0u: goto label_266ad0;
        case 0x266ad4u: goto label_266ad4;
        case 0x266ad8u: goto label_266ad8;
        case 0x266adcu: goto label_266adc;
        case 0x266ae0u: goto label_266ae0;
        case 0x266ae4u: goto label_266ae4;
        case 0x266ae8u: goto label_266ae8;
        case 0x266aecu: goto label_266aec;
        case 0x266af0u: goto label_266af0;
        case 0x266af4u: goto label_266af4;
        case 0x266af8u: goto label_266af8;
        case 0x266afcu: goto label_266afc;
        case 0x266b00u: goto label_266b00;
        case 0x266b04u: goto label_266b04;
        case 0x266b08u: goto label_266b08;
        case 0x266b0cu: goto label_266b0c;
        case 0x266b10u: goto label_266b10;
        case 0x266b14u: goto label_266b14;
        case 0x266b18u: goto label_266b18;
        case 0x266b1cu: goto label_266b1c;
        case 0x266b20u: goto label_266b20;
        case 0x266b24u: goto label_266b24;
        case 0x266b28u: goto label_266b28;
        case 0x266b2cu: goto label_266b2c;
        case 0x266b30u: goto label_266b30;
        case 0x266b34u: goto label_266b34;
        case 0x266b38u: goto label_266b38;
        case 0x266b3cu: goto label_266b3c;
        case 0x266b40u: goto label_266b40;
        case 0x266b44u: goto label_266b44;
        case 0x266b48u: goto label_266b48;
        case 0x266b4cu: goto label_266b4c;
        case 0x266b50u: goto label_266b50;
        case 0x266b54u: goto label_266b54;
        case 0x266b58u: goto label_266b58;
        case 0x266b5cu: goto label_266b5c;
        case 0x266b60u: goto label_266b60;
        case 0x266b64u: goto label_266b64;
        case 0x266b68u: goto label_266b68;
        case 0x266b6cu: goto label_266b6c;
        case 0x266b70u: goto label_266b70;
        case 0x266b74u: goto label_266b74;
        case 0x266b78u: goto label_266b78;
        case 0x266b7cu: goto label_266b7c;
        case 0x266b80u: goto label_266b80;
        case 0x266b84u: goto label_266b84;
        case 0x266b88u: goto label_266b88;
        case 0x266b8cu: goto label_266b8c;
        case 0x266b90u: goto label_266b90;
        case 0x266b94u: goto label_266b94;
        case 0x266b98u: goto label_266b98;
        case 0x266b9cu: goto label_266b9c;
        case 0x266ba0u: goto label_266ba0;
        case 0x266ba4u: goto label_266ba4;
        case 0x266ba8u: goto label_266ba8;
        case 0x266bacu: goto label_266bac;
        case 0x266bb0u: goto label_266bb0;
        case 0x266bb4u: goto label_266bb4;
        case 0x266bb8u: goto label_266bb8;
        case 0x266bbcu: goto label_266bbc;
        case 0x266bc0u: goto label_266bc0;
        case 0x266bc4u: goto label_266bc4;
        case 0x266bc8u: goto label_266bc8;
        case 0x266bccu: goto label_266bcc;
        case 0x266bd0u: goto label_266bd0;
        case 0x266bd4u: goto label_266bd4;
        case 0x266bd8u: goto label_266bd8;
        case 0x266bdcu: goto label_266bdc;
        case 0x266be0u: goto label_266be0;
        case 0x266be4u: goto label_266be4;
        case 0x266be8u: goto label_266be8;
        case 0x266becu: goto label_266bec;
        case 0x266bf0u: goto label_266bf0;
        case 0x266bf4u: goto label_266bf4;
        case 0x266bf8u: goto label_266bf8;
        case 0x266bfcu: goto label_266bfc;
        case 0x266c00u: goto label_266c00;
        case 0x266c04u: goto label_266c04;
        case 0x266c08u: goto label_266c08;
        case 0x266c0cu: goto label_266c0c;
        case 0x266c10u: goto label_266c10;
        case 0x266c14u: goto label_266c14;
        case 0x266c18u: goto label_266c18;
        case 0x266c1cu: goto label_266c1c;
        case 0x266c20u: goto label_266c20;
        case 0x266c24u: goto label_266c24;
        case 0x266c28u: goto label_266c28;
        case 0x266c2cu: goto label_266c2c;
        case 0x266c30u: goto label_266c30;
        case 0x266c34u: goto label_266c34;
        case 0x266c38u: goto label_266c38;
        case 0x266c3cu: goto label_266c3c;
        case 0x266c40u: goto label_266c40;
        case 0x266c44u: goto label_266c44;
        case 0x266c48u: goto label_266c48;
        case 0x266c4cu: goto label_266c4c;
        case 0x266c50u: goto label_266c50;
        case 0x266c54u: goto label_266c54;
        case 0x266c58u: goto label_266c58;
        case 0x266c5cu: goto label_266c5c;
        case 0x266c60u: goto label_266c60;
        case 0x266c64u: goto label_266c64;
        case 0x266c68u: goto label_266c68;
        case 0x266c6cu: goto label_266c6c;
        case 0x266c70u: goto label_266c70;
        case 0x266c74u: goto label_266c74;
        case 0x266c78u: goto label_266c78;
        case 0x266c7cu: goto label_266c7c;
        case 0x266c80u: goto label_266c80;
        case 0x266c84u: goto label_266c84;
        case 0x266c88u: goto label_266c88;
        case 0x266c8cu: goto label_266c8c;
        case 0x266c90u: goto label_266c90;
        case 0x266c94u: goto label_266c94;
        case 0x266c98u: goto label_266c98;
        case 0x266c9cu: goto label_266c9c;
        case 0x266ca0u: goto label_266ca0;
        case 0x266ca4u: goto label_266ca4;
        case 0x266ca8u: goto label_266ca8;
        case 0x266cacu: goto label_266cac;
        case 0x266cb0u: goto label_266cb0;
        case 0x266cb4u: goto label_266cb4;
        case 0x266cb8u: goto label_266cb8;
        case 0x266cbcu: goto label_266cbc;
        case 0x266cc0u: goto label_266cc0;
        case 0x266cc4u: goto label_266cc4;
        case 0x266cc8u: goto label_266cc8;
        case 0x266cccu: goto label_266ccc;
        case 0x266cd0u: goto label_266cd0;
        case 0x266cd4u: goto label_266cd4;
        case 0x266cd8u: goto label_266cd8;
        case 0x266cdcu: goto label_266cdc;
        case 0x266ce0u: goto label_266ce0;
        case 0x266ce4u: goto label_266ce4;
        case 0x266ce8u: goto label_266ce8;
        case 0x266cecu: goto label_266cec;
        case 0x266cf0u: goto label_266cf0;
        case 0x266cf4u: goto label_266cf4;
        case 0x266cf8u: goto label_266cf8;
        case 0x266cfcu: goto label_266cfc;
        case 0x266d00u: goto label_266d00;
        case 0x266d04u: goto label_266d04;
        case 0x266d08u: goto label_266d08;
        case 0x266d0cu: goto label_266d0c;
        case 0x266d10u: goto label_266d10;
        case 0x266d14u: goto label_266d14;
        case 0x266d18u: goto label_266d18;
        case 0x266d1cu: goto label_266d1c;
        case 0x266d20u: goto label_266d20;
        case 0x266d24u: goto label_266d24;
        case 0x266d28u: goto label_266d28;
        case 0x266d2cu: goto label_266d2c;
        case 0x266d30u: goto label_266d30;
        case 0x266d34u: goto label_266d34;
        case 0x266d38u: goto label_266d38;
        case 0x266d3cu: goto label_266d3c;
        case 0x266d40u: goto label_266d40;
        case 0x266d44u: goto label_266d44;
        case 0x266d48u: goto label_266d48;
        case 0x266d4cu: goto label_266d4c;
        case 0x266d50u: goto label_266d50;
        case 0x266d54u: goto label_266d54;
        case 0x266d58u: goto label_266d58;
        case 0x266d5cu: goto label_266d5c;
        case 0x266d60u: goto label_266d60;
        case 0x266d64u: goto label_266d64;
        case 0x266d68u: goto label_266d68;
        case 0x266d6cu: goto label_266d6c;
        case 0x266d70u: goto label_266d70;
        case 0x266d74u: goto label_266d74;
        case 0x266d78u: goto label_266d78;
        case 0x266d7cu: goto label_266d7c;
        case 0x266d80u: goto label_266d80;
        case 0x266d84u: goto label_266d84;
        case 0x266d88u: goto label_266d88;
        case 0x266d8cu: goto label_266d8c;
        case 0x266d90u: goto label_266d90;
        case 0x266d94u: goto label_266d94;
        case 0x266d98u: goto label_266d98;
        case 0x266d9cu: goto label_266d9c;
        case 0x266da0u: goto label_266da0;
        case 0x266da4u: goto label_266da4;
        case 0x266da8u: goto label_266da8;
        case 0x266dacu: goto label_266dac;
        case 0x266db0u: goto label_266db0;
        case 0x266db4u: goto label_266db4;
        case 0x266db8u: goto label_266db8;
        case 0x266dbcu: goto label_266dbc;
        case 0x266dc0u: goto label_266dc0;
        case 0x266dc4u: goto label_266dc4;
        case 0x266dc8u: goto label_266dc8;
        case 0x266dccu: goto label_266dcc;
        case 0x266dd0u: goto label_266dd0;
        case 0x266dd4u: goto label_266dd4;
        case 0x266dd8u: goto label_266dd8;
        case 0x266ddcu: goto label_266ddc;
        case 0x266de0u: goto label_266de0;
        case 0x266de4u: goto label_266de4;
        case 0x266de8u: goto label_266de8;
        case 0x266decu: goto label_266dec;
        case 0x266df0u: goto label_266df0;
        case 0x266df4u: goto label_266df4;
        case 0x266df8u: goto label_266df8;
        case 0x266dfcu: goto label_266dfc;
        case 0x266e00u: goto label_266e00;
        case 0x266e04u: goto label_266e04;
        case 0x266e08u: goto label_266e08;
        case 0x266e0cu: goto label_266e0c;
        case 0x266e10u: goto label_266e10;
        case 0x266e14u: goto label_266e14;
        case 0x266e18u: goto label_266e18;
        case 0x266e1cu: goto label_266e1c;
        case 0x266e20u: goto label_266e20;
        case 0x266e24u: goto label_266e24;
        case 0x266e28u: goto label_266e28;
        case 0x266e2cu: goto label_266e2c;
        case 0x266e30u: goto label_266e30;
        case 0x266e34u: goto label_266e34;
        case 0x266e38u: goto label_266e38;
        case 0x266e3cu: goto label_266e3c;
        case 0x266e40u: goto label_266e40;
        case 0x266e44u: goto label_266e44;
        default: return;
    }

label_266678:
    // 0x266678: 0x0  nop
    ctx->pc = 0x266678u;
    // NOP
label_26667c:
    // 0x26667c: 0x0  nop
    ctx->pc = 0x26667cu;
    // NOP
label_266680:
    // 0x266680: 0x10977  .word       0x00010977                   # INVALID     $zero, $at, 0x977 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x266680 raw=0x00010977"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266684:
    // 0x266684: 0x6990  .word       0x00006990                   # mfhi        $t5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266684u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_266688:
    // 0x266688: 0x0  nop
    ctx->pc = 0x266688u;
    // NOP
label_26668c:
    // 0x26668c: 0x0  nop
    ctx->pc = 0x26668cu;
    // NOP
label_266690:
    // 0x266690: 0x10985  .word       0x00010985                   # INVALID     $zero, $at, 0x985 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x266690 raw=0x00010985"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266694:
    // 0x266694: 0x6a00  sll         $t5, $zero, 8
    ctx->pc = 0x266694u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_266698:
    // 0x266698: 0x0  nop
    ctx->pc = 0x266698u;
    // NOP
label_26669c:
    // 0x26669c: 0x0  nop
    ctx->pc = 0x26669cu;
    // NOP
label_2666a0:
    // 0x2666a0: 0x10993  .word       0x00010993                   # mtlo        $zero # 00010980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2666a0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2666a4:
    // 0x2666a4: 0x5610  .word       0x00005610                   # mfhi        $t2 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2666a4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2666a8:
    // 0x2666a8: 0x0  nop
    ctx->pc = 0x2666a8u;
    // NOP
label_2666ac:
    // 0x2666ac: 0x0  nop
    ctx->pc = 0x2666acu;
    // NOP
label_2666b0:
    // 0x2666b0: 0x1099e  .word       0x0001099E                   # ddiv        $at, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2666b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2666B0 raw=0x0001099E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2666b4:
    // 0x2666b4: 0x7730  tge         $zero, $zero, 476
    ctx->pc = 0x2666b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2666b8:
    // 0x2666b8: 0x0  nop
    ctx->pc = 0x2666b8u;
    // NOP
label_2666bc:
    // 0x2666bc: 0x0  nop
    ctx->pc = 0x2666bcu;
    // NOP
label_2666c0:
    // 0x2666c0: 0x109ad  .word       0x000109AD                   # daddu       $at, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2666c0u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_2666c4:
    // 0x2666c4: 0xa5b0  tge         $zero, $zero, 662
    ctx->pc = 0x2666c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2666c8:
    // 0x2666c8: 0x0  nop
    ctx->pc = 0x2666c8u;
    // NOP
label_2666cc:
    // 0x2666cc: 0x0  nop
    ctx->pc = 0x2666ccu;
    // NOP
label_2666d0:
    // 0x2666d0: 0x109c2  srl         $at, $at, 7
    ctx->pc = 0x2666d0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), 7));
label_2666d4:
    // 0x2666d4: 0x6bb0  tge         $zero, $zero, 430
    ctx->pc = 0x2666d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2666d8:
    // 0x2666d8: 0x0  nop
    ctx->pc = 0x2666d8u;
    // NOP
label_2666dc:
    // 0x2666dc: 0x0  nop
    ctx->pc = 0x2666dcu;
    // NOP
label_2666e0:
    // 0x2666e0: 0x109d0  .word       0x000109D0                   # mfhi        $at # 000101C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2666e0u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2666e4:
    // 0x2666e4: 0x69d0  .word       0x000069D0                   # mfhi        $t5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2666e4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_2666e8:
    // 0x2666e8: 0x0  nop
    ctx->pc = 0x2666e8u;
    // NOP
label_2666ec:
    // 0x2666ec: 0x0  nop
    ctx->pc = 0x2666ecu;
    // NOP
label_2666f0:
    // 0x2666f0: 0x109de  .word       0x000109DE                   # ddiv        $at, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2666f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2666F0 raw=0x000109DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2666f4:
    // 0x2666f4: 0x55a0  .word       0x000055A0                   # add         $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2666f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2666f8:
    // 0x2666f8: 0x0  nop
    ctx->pc = 0x2666f8u;
    // NOP
label_2666fc:
    // 0x2666fc: 0x0  nop
    ctx->pc = 0x2666fcu;
    // NOP
label_266700:
    // 0x266700: 0x109e9  .word       0x000109E9                   # mtsa        $zero # 000109C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266700u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_266704:
    // 0x266704: 0x4c00  sll         $t1, $zero, 16
    ctx->pc = 0x266704u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_266708:
    // 0x266708: 0x0  nop
    ctx->pc = 0x266708u;
    // NOP
label_26670c:
    // 0x26670c: 0x0  nop
    ctx->pc = 0x26670cu;
    // NOP
label_266710:
    // 0x266710: 0x109f3  tltu        $zero, $at, 39
    ctx->pc = 0x266710u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266714:
    // 0x266714: 0x4260  .word       0x00004260                   # add         $t0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266714u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_266718:
    // 0x266718: 0x0  nop
    ctx->pc = 0x266718u;
    // NOP
label_26671c:
    // 0x26671c: 0x0  nop
    ctx->pc = 0x26671cu;
    // NOP
label_266720:
    // 0x266720: 0x109fc  dsll32      $at, $at, 7
    ctx->pc = 0x266720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (32 + 7));
label_266724:
    // 0x266724: 0x34f0  tge         $zero, $zero, 211
    ctx->pc = 0x266724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266728:
    // 0x266728: 0x0  nop
    ctx->pc = 0x266728u;
    // NOP
label_26672c:
    // 0x26672c: 0x0  nop
    ctx->pc = 0x26672cu;
    // NOP
label_266730:
    // 0x266730: 0x10a03  sra         $at, $at, 8
    ctx->pc = 0x266730u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 8));
label_266734:
    // 0x266734: 0x6e80  sll         $t5, $zero, 26
    ctx->pc = 0x266734u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_266738:
    // 0x266738: 0x0  nop
    ctx->pc = 0x266738u;
    // NOP
label_26673c:
    // 0x26673c: 0x0  nop
    ctx->pc = 0x26673cu;
    // NOP
label_266740:
    // 0x266740: 0x10a11  .word       0x00010A11                   # mthi        $zero # 00010A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266740u;
    ctx->hi = GPR_U64(ctx, 0);
label_266744:
    // 0x266744: 0x8410  .word       0x00008410                   # mfhi        $s0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266744u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_266748:
    // 0x266748: 0x0  nop
    ctx->pc = 0x266748u;
    // NOP
label_26674c:
    // 0x26674c: 0x0  nop
    ctx->pc = 0x26674cu;
    // NOP
label_266750:
    // 0x266750: 0x10a22  .word       0x00010A22                   # neg         $at, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266750u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_266754:
    // 0x266754: 0x3ed0  .word       0x00003ED0                   # mfhi        $a3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266754u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_266758:
    // 0x266758: 0x0  nop
    ctx->pc = 0x266758u;
    // NOP
label_26675c:
    // 0x26675c: 0x0  nop
    ctx->pc = 0x26675cu;
    // NOP
label_266760:
    // 0x266760: 0x10a2a  .word       0x00010A2A                   # slt         $at, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266760u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_266764:
    // 0x266764: 0x33d0  .word       0x000033D0                   # mfhi        $a2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266764u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_266768:
    // 0x266768: 0x0  nop
    ctx->pc = 0x266768u;
    // NOP
label_26676c:
    // 0x26676c: 0x0  nop
    ctx->pc = 0x26676cu;
    // NOP
label_266770:
    // 0x266770: 0x10a31  tgeu        $zero, $at, 40
    ctx->pc = 0x266770u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266774:
    // 0x266774: 0x29f0  tge         $zero, $zero, 167
    ctx->pc = 0x266774u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266778:
    // 0x266778: 0x0  nop
    ctx->pc = 0x266778u;
    // NOP
label_26677c:
    // 0x26677c: 0x0  nop
    ctx->pc = 0x26677cu;
    // NOP
label_266780:
    // 0x266780: 0x10a37  .word       0x00010A37                   # INVALID     $zero, $at, 0xA37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266780u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x266780 raw=0x00010A37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266784:
    // 0x266784: 0x4f00  sll         $t1, $zero, 28
    ctx->pc = 0x266784u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_266788:
    // 0x266788: 0x0  nop
    ctx->pc = 0x266788u;
    // NOP
label_26678c:
    // 0x26678c: 0x0  nop
    ctx->pc = 0x26678cu;
    // NOP
label_266790:
    // 0x266790: 0x10a41  .word       0x00010A41                   # INVALID     $zero, $at, 0xA41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x266790 raw=0x00010A41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266794:
    // 0x266794: 0x55a0  .word       0x000055A0                   # add         $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_266798:
    // 0x266798: 0x0  nop
    ctx->pc = 0x266798u;
    // NOP
label_26679c:
    // 0x26679c: 0x0  nop
    ctx->pc = 0x26679cu;
    // NOP
label_2667a0:
    // 0x2667a0: 0x10a4c  .word       0x00010A4C                   # syscall     41 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2667a0u;
    ctx->pc = 0x2667A4u;
runtime->handleSyscall(rdram, ctx, 0x429u);
label_2667a4:
    // 0x2667a4: 0x5160  .word       0x00005160                   # add         $t2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2667a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2667a8:
    // 0x2667a8: 0x0  nop
    ctx->pc = 0x2667a8u;
    // NOP
label_2667ac:
    // 0x2667ac: 0x0  nop
    ctx->pc = 0x2667acu;
    // NOP
label_2667b0:
    // 0x2667b0: 0x10a57  .word       0x00010A57                   # dsrav       $at, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2667b0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2667b4:
    // 0x2667b4: 0x4e50  .word       0x00004E50                   # mfhi        $t1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2667b4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2667b8:
    // 0x2667b8: 0x0  nop
    ctx->pc = 0x2667b8u;
    // NOP
label_2667bc:
    // 0x2667bc: 0x0  nop
    ctx->pc = 0x2667bcu;
    // NOP
label_2667c0:
    // 0x2667c0: 0x10a61  .word       0x00010A61                   # addu        $at, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2667c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2667c4:
    // 0x2667c4: 0x9270  tge         $zero, $zero, 585
    ctx->pc = 0x2667c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2667c8:
    // 0x2667c8: 0x0  nop
    ctx->pc = 0x2667c8u;
    // NOP
label_2667cc:
    // 0x2667cc: 0x0  nop
    ctx->pc = 0x2667ccu;
    // NOP
label_2667d0:
    // 0x2667d0: 0x10a74  teq         $zero, $at, 41
    ctx->pc = 0x2667d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2667d4:
    // 0x2667d4: 0x7ef0  tge         $zero, $zero, 507
    ctx->pc = 0x2667d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2667d8:
    // 0x2667d8: 0x0  nop
    ctx->pc = 0x2667d8u;
    // NOP
label_2667dc:
    // 0x2667dc: 0x0  nop
    ctx->pc = 0x2667dcu;
    // NOP
label_2667e0:
    // 0x2667e0: 0x10a84  .word       0x00010A84                   # sllv        $at, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2667e0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2667e4:
    // 0x2667e4: 0x7510  .word       0x00007510                   # mfhi        $t6 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2667e4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2667e8:
    // 0x2667e8: 0x0  nop
    ctx->pc = 0x2667e8u;
    // NOP
label_2667ec:
    // 0x2667ec: 0x0  nop
    ctx->pc = 0x2667ecu;
    // NOP
label_2667f0:
    // 0x2667f0: 0x10a93  .word       0x00010A93                   # mtlo        $zero # 00010A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2667f0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2667f4:
    // 0x2667f4: 0x38f0  tge         $zero, $zero, 227
    ctx->pc = 0x2667f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2667f8:
    // 0x2667f8: 0x0  nop
    ctx->pc = 0x2667f8u;
    // NOP
label_2667fc:
    // 0x2667fc: 0x0  nop
    ctx->pc = 0x2667fcu;
    // NOP
label_266800:
    // 0x266800: 0x10a9b  .word       0x00010A9B                   # divu        $at, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266800u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_266804:
    // 0x266804: 0x45a0  .word       0x000045A0                   # add         $t0, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266804u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_266808:
    // 0x266808: 0x0  nop
    ctx->pc = 0x266808u;
    // NOP
label_26680c:
    // 0x26680c: 0x0  nop
    ctx->pc = 0x26680cu;
    // NOP
label_266810:
    // 0x266810: 0x10aa4  .word       0x00010AA4                   # and         $at, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_266814:
    // 0x266814: 0x57b0  tge         $zero, $zero, 350
    ctx->pc = 0x266814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266818:
    // 0x266818: 0x0  nop
    ctx->pc = 0x266818u;
    // NOP
label_26681c:
    // 0x26681c: 0x0  nop
    ctx->pc = 0x26681cu;
    // NOP
label_266820:
    // 0x266820: 0x10aaf  .word       0x00010AAF                   # dsubu       $at, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_266824:
    // 0x266824: 0x67e0  .word       0x000067E0                   # add         $t4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266824u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_266828:
    // 0x266828: 0x0  nop
    ctx->pc = 0x266828u;
    // NOP
label_26682c:
    // 0x26682c: 0x0  nop
    ctx->pc = 0x26682cu;
    // NOP
label_266830:
    // 0x266830: 0x10abc  dsll32      $at, $at, 10
    ctx->pc = 0x266830u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (32 + 10));
label_266834:
    // 0x266834: 0x5990  .word       0x00005990                   # mfhi        $t3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266834u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_266838:
    // 0x266838: 0x0  nop
    ctx->pc = 0x266838u;
    // NOP
label_26683c:
    // 0x26683c: 0x0  nop
    ctx->pc = 0x26683cu;
    // NOP
label_266840:
    // 0x266840: 0x10ac8  .word       0x00010AC8                   # jr          $zero # 00010AC0 <InstrIdType: CPU_SPECIAL>
label_266844:
    if (ctx->pc == 0x266844u) {
        ctx->pc = 0x266844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266840u;
        // 0x266844: 0x5a80  sll         $t3, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266848u;
        goto label_266848;
    }
    ctx->pc = 0x266840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x266844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266840u;
        // 0x266844: 0x5a80  sll         $t3, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266840u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x266848u;
label_266848:
    // 0x266848: 0x0  nop
    ctx->pc = 0x266848u;
    // NOP
label_26684c:
    // 0x26684c: 0x0  nop
    ctx->pc = 0x26684cu;
    // NOP
label_266850:
    // 0x266850: 0x10ad4  .word       0x00010AD4                   # dsllv       $at, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_266854:
    // 0x266854: 0x99b0  tge         $zero, $zero, 614
    ctx->pc = 0x266854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266858:
    // 0x266858: 0x0  nop
    ctx->pc = 0x266858u;
    // NOP
label_26685c:
    // 0x26685c: 0x0  nop
    ctx->pc = 0x26685cu;
    // NOP
label_266860:
    // 0x266860: 0x10ae8  .word       0x00010AE8                   # mfsa        $at # 000102C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266860u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_266864:
    // 0x266864: 0x75c0  sll         $t6, $zero, 23
    ctx->pc = 0x266864u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_266868:
    // 0x266868: 0x0  nop
    ctx->pc = 0x266868u;
    // NOP
label_26686c:
    // 0x26686c: 0x0  nop
    ctx->pc = 0x26686cu;
    // NOP
label_266870:
    // 0x266870: 0x10af7  .word       0x00010AF7                   # INVALID     $zero, $at, 0xAF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x266870 raw=0x00010AF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266874:
    // 0x266874: 0x7e00  sll         $t7, $zero, 24
    ctx->pc = 0x266874u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_266878:
    // 0x266878: 0x0  nop
    ctx->pc = 0x266878u;
    // NOP
label_26687c:
    // 0x26687c: 0x0  nop
    ctx->pc = 0x26687cu;
    // NOP
label_266880:
    // 0x266880: 0x10b07  .word       0x00010B07                   # srav        $at, $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266880u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_266884:
    // 0x266884: 0x5f40  sll         $t3, $zero, 29
    ctx->pc = 0x266884u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_266888:
    // 0x266888: 0x0  nop
    ctx->pc = 0x266888u;
    // NOP
label_26688c:
    // 0x26688c: 0x0  nop
    ctx->pc = 0x26688cu;
    // NOP
label_266890:
    // 0x266890: 0x10b13  .word       0x00010B13                   # mtlo        $zero # 00010B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266890u;
    ctx->lo = GPR_U64(ctx, 0);
label_266894:
    // 0x266894: 0x4530  tge         $zero, $zero, 276
    ctx->pc = 0x266894u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266898:
    // 0x266898: 0x0  nop
    ctx->pc = 0x266898u;
    // NOP
label_26689c:
    // 0x26689c: 0x0  nop
    ctx->pc = 0x26689cu;
    // NOP
label_2668a0:
    // 0x2668a0: 0x10b1c  .word       0x00010B1C                   # dmult       $zero, $at # 00000B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2668A0 raw=0x00010B1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2668a4:
    // 0x2668a4: 0x8f60  .word       0x00008F60                   # add         $s1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2668a8:
    // 0x2668a8: 0x0  nop
    ctx->pc = 0x2668a8u;
    // NOP
label_2668ac:
    // 0x2668ac: 0x0  nop
    ctx->pc = 0x2668acu;
    // NOP
label_2668b0:
    // 0x2668b0: 0x10b2e  .word       0x00010B2E                   # dsub        $at, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2668b4:
    // 0x2668b4: 0x2270  tge         $zero, $zero, 137
    ctx->pc = 0x2668b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2668b8:
    // 0x2668b8: 0x0  nop
    ctx->pc = 0x2668b8u;
    // NOP
label_2668bc:
    // 0x2668bc: 0x0  nop
    ctx->pc = 0x2668bcu;
    // NOP
label_2668c0:
    // 0x2668c0: 0x10b33  tltu        $zero, $at, 44
    ctx->pc = 0x2668c0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2668c4:
    // 0x2668c4: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2668c8:
    // 0x2668c8: 0x0  nop
    ctx->pc = 0x2668c8u;
    // NOP
label_2668cc:
    // 0x2668cc: 0x0  nop
    ctx->pc = 0x2668ccu;
    // NOP
label_2668d0:
    // 0x2668d0: 0x10b42  srl         $at, $at, 13
    ctx->pc = 0x2668d0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), 13));
label_2668d4:
    // 0x2668d4: 0x9d00  sll         $s3, $zero, 20
    ctx->pc = 0x2668d4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2668d8:
    // 0x2668d8: 0x0  nop
    ctx->pc = 0x2668d8u;
    // NOP
label_2668dc:
    // 0x2668dc: 0x0  nop
    ctx->pc = 0x2668dcu;
    // NOP
label_2668e0:
    // 0x2668e0: 0x10b56  .word       0x00010B56                   # dsrlv       $at, $at, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2668e4:
    // 0x2668e4: 0x4c70  tge         $zero, $zero, 305
    ctx->pc = 0x2668e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2668e8:
    // 0x2668e8: 0x0  nop
    ctx->pc = 0x2668e8u;
    // NOP
label_2668ec:
    // 0x2668ec: 0x0  nop
    ctx->pc = 0x2668ecu;
    // NOP
label_2668f0:
    // 0x2668f0: 0x10b60  .word       0x00010B60                   # add         $at, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2668f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2668f4:
    // 0x2668f4: 0x3840  sll         $a3, $zero, 1
    ctx->pc = 0x2668f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2668f8:
    // 0x2668f8: 0x0  nop
    ctx->pc = 0x2668f8u;
    // NOP
label_2668fc:
    // 0x2668fc: 0x0  nop
    ctx->pc = 0x2668fcu;
    // NOP
label_266900:
    // 0x266900: 0x10b68  .word       0x00010B68                   # mfsa        $at # 00010340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266900u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_266904:
    // 0x266904: 0x4e50  .word       0x00004E50                   # mfhi        $t1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266904u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_266908:
    // 0x266908: 0x0  nop
    ctx->pc = 0x266908u;
    // NOP
label_26690c:
    // 0x26690c: 0x0  nop
    ctx->pc = 0x26690cu;
    // NOP
label_266910:
    // 0x266910: 0x10b72  tlt         $zero, $at, 45
    ctx->pc = 0x266910u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266914:
    // 0x266914: 0x55a0  .word       0x000055A0                   # add         $t2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266914u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_266918:
    // 0x266918: 0x0  nop
    ctx->pc = 0x266918u;
    // NOP
label_26691c:
    // 0x26691c: 0x0  nop
    ctx->pc = 0x26691cu;
    // NOP
label_266920:
    // 0x266920: 0x10b7d  .word       0x00010B7D                   # INVALID     $zero, $at, 0xB7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266920u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x266920 raw=0x00010B7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266924:
    // 0x266924: 0x7640  sll         $t6, $zero, 25
    ctx->pc = 0x266924u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_266928:
    // 0x266928: 0x0  nop
    ctx->pc = 0x266928u;
    // NOP
label_26692c:
    // 0x26692c: 0x0  nop
    ctx->pc = 0x26692cu;
    // NOP
label_266930:
    // 0x266930: 0x10b8c  .word       0x00010B8C                   # syscall     46 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266930u;
    ctx->pc = 0x266934u;
runtime->handleSyscall(rdram, ctx, 0x42Eu);
label_266934:
    // 0x266934: 0x5b70  tge         $zero, $zero, 365
    ctx->pc = 0x266934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266938:
    // 0x266938: 0x0  nop
    ctx->pc = 0x266938u;
    // NOP
label_26693c:
    // 0x26693c: 0x0  nop
    ctx->pc = 0x26693cu;
    // NOP
label_266940:
    // 0x266940: 0x10b98  .word       0x00010B98                   # mult        $at, $zero, $at # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_266944:
    // 0x266944: 0x8980  sll         $s1, $zero, 6
    ctx->pc = 0x266944u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_266948:
    // 0x266948: 0x0  nop
    ctx->pc = 0x266948u;
    // NOP
label_26694c:
    // 0x26694c: 0x0  nop
    ctx->pc = 0x26694cu;
    // NOP
label_266950:
    // 0x266950: 0x10baa  .word       0x00010BAA                   # slt         $at, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_266954:
    // 0x266954: 0xd1d0  .word       0x0000D1D0                   # mfhi        $k0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266954u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_266958:
    // 0x266958: 0x0  nop
    ctx->pc = 0x266958u;
    // NOP
label_26695c:
    // 0x26695c: 0x0  nop
    ctx->pc = 0x26695cu;
    // NOP
label_266960:
    // 0x266960: 0x10bc5  .word       0x00010BC5                   # INVALID     $zero, $at, 0xBC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x266960 raw=0x00010BC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266964:
    // 0x266964: 0x9360  .word       0x00009360                   # add         $s2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266964u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_266968:
    // 0x266968: 0x0  nop
    ctx->pc = 0x266968u;
    // NOP
label_26696c:
    // 0x26696c: 0x0  nop
    ctx->pc = 0x26696cu;
    // NOP
label_266970:
    // 0x266970: 0x10bd8  .word       0x00010BD8                   # mult        $at, $zero, $at # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_266974:
    // 0x266974: 0x9140  sll         $s2, $zero, 5
    ctx->pc = 0x266974u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_266978:
    // 0x266978: 0x0  nop
    ctx->pc = 0x266978u;
    // NOP
label_26697c:
    // 0x26697c: 0x0  nop
    ctx->pc = 0x26697cu;
    // NOP
label_266980:
    // 0x266980: 0x10beb  .word       0x00010BEB                   # sltu        $at, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266980u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_266984:
    // 0x266984: 0x4fc0  sll         $t1, $zero, 31
    ctx->pc = 0x266984u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_266988:
    // 0x266988: 0x0  nop
    ctx->pc = 0x266988u;
    // NOP
label_26698c:
    // 0x26698c: 0x0  nop
    ctx->pc = 0x26698cu;
    // NOP
label_266990:
    // 0x266990: 0x10bf5  .word       0x00010BF5                   # INVALID     $zero, $at, 0xBF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x266990 raw=0x00010BF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266994:
    // 0x266994: 0x3f80  sll         $a3, $zero, 30
    ctx->pc = 0x266994u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_266998:
    // 0x266998: 0x0  nop
    ctx->pc = 0x266998u;
    // NOP
label_26699c:
    // 0x26699c: 0x0  nop
    ctx->pc = 0x26699cu;
    // NOP
label_2669a0:
    // 0x2669a0: 0x10bfd  .word       0x00010BFD                   # INVALID     $zero, $at, 0xBFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2669A0 raw=0x00010BFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2669a4:
    // 0x2669a4: 0x92a0  .word       0x000092A0                   # add         $s2, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2669a8:
    // 0x2669a8: 0x0  nop
    ctx->pc = 0x2669a8u;
    // NOP
label_2669ac:
    // 0x2669ac: 0x0  nop
    ctx->pc = 0x2669acu;
    // NOP
label_2669b0:
    // 0x2669b0: 0x10c10  .word       0x00010C10                   # mfhi        $at # 00010400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669b0u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2669b4:
    // 0x2669b4: 0x4dd0  .word       0x00004DD0                   # mfhi        $t1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669b4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2669b8:
    // 0x2669b8: 0x0  nop
    ctx->pc = 0x2669b8u;
    // NOP
label_2669bc:
    // 0x2669bc: 0x0  nop
    ctx->pc = 0x2669bcu;
    // NOP
label_2669c0:
    // 0x2669c0: 0x10c1a  .word       0x00010C1A                   # div         $at, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669c0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2669c4:
    // 0x2669c4: 0x92b0  tge         $zero, $zero, 586
    ctx->pc = 0x2669c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2669c8:
    // 0x2669c8: 0x0  nop
    ctx->pc = 0x2669c8u;
    // NOP
label_2669cc:
    // 0x2669cc: 0x0  nop
    ctx->pc = 0x2669ccu;
    // NOP
label_2669d0:
    // 0x2669d0: 0x10c2d  .word       0x00010C2D                   # daddu       $at, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669d0u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_2669d4:
    // 0x2669d4: 0x54d0  .word       0x000054D0                   # mfhi        $t2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669d4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2669d8:
    // 0x2669d8: 0x0  nop
    ctx->pc = 0x2669d8u;
    // NOP
label_2669dc:
    // 0x2669dc: 0x0  nop
    ctx->pc = 0x2669dcu;
    // NOP
label_2669e0:
    // 0x2669e0: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x2669e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
label_2669e4:
    // 0x2669e4: 0x43c0  sll         $t0, $zero, 15
    ctx->pc = 0x2669e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_2669e8:
    // 0x2669e8: 0x0  nop
    ctx->pc = 0x2669e8u;
    // NOP
label_2669ec:
    // 0x2669ec: 0x0  nop
    ctx->pc = 0x2669ecu;
    // NOP
label_2669f0:
    // 0x2669f0: 0x10c41  .word       0x00010C41                   # INVALID     $zero, $at, 0xC41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2669F0 raw=0x00010C41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2669f4:
    // 0x2669f4: 0x5fd0  .word       0x00005FD0                   # mfhi        $t3 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2669f4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2669f8:
    // 0x2669f8: 0x0  nop
    ctx->pc = 0x2669f8u;
    // NOP
label_2669fc:
    // 0x2669fc: 0x0  nop
    ctx->pc = 0x2669fcu;
    // NOP
label_266a00:
    // 0x266a00: 0x10c4d  break       1, 49
    ctx->pc = 0x266a00u;
    runtime->handleBreak(rdram, ctx);
label_266a04:
    // 0x266a04: 0x1e60  .word       0x00001E60                   # add         $v1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_266a08:
    // 0x266a08: 0x0  nop
    ctx->pc = 0x266a08u;
    // NOP
label_266a0c:
    // 0x266a0c: 0x0  nop
    ctx->pc = 0x266a0cu;
    // NOP
label_266a10:
    // 0x266a10: 0x10c51  .word       0x00010C51                   # mthi        $zero # 00010C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a10u;
    ctx->hi = GPR_U64(ctx, 0);
label_266a14:
    // 0x266a14: 0x2820  add         $a1, $zero, $zero
    ctx->pc = 0x266a14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_266a18:
    // 0x266a18: 0x0  nop
    ctx->pc = 0x266a18u;
    // NOP
label_266a1c:
    // 0x266a1c: 0x0  nop
    ctx->pc = 0x266a1cu;
    // NOP
label_266a20:
    // 0x266a20: 0x10c57  .word       0x00010C57                   # dsrav       $at, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a20u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_266a24:
    // 0x266a24: 0x3990  .word       0x00003990                   # mfhi        $a3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a24u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_266a28:
    // 0x266a28: 0x0  nop
    ctx->pc = 0x266a28u;
    // NOP
label_266a2c:
    // 0x266a2c: 0x0  nop
    ctx->pc = 0x266a2cu;
    // NOP
label_266a30:
    // 0x266a30: 0x10c5f  .word       0x00010C5F                   # ddivu       $at, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x266A30 raw=0x00010C5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266a34:
    // 0x266a34: 0x4280  sll         $t0, $zero, 10
    ctx->pc = 0x266a34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_266a38:
    // 0x266a38: 0x0  nop
    ctx->pc = 0x266a38u;
    // NOP
label_266a3c:
    // 0x266a3c: 0x0  nop
    ctx->pc = 0x266a3cu;
    // NOP
label_266a40:
    // 0x266a40: 0x10c68  .word       0x00010C68                   # mfsa        $at # 00010440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266a40u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_266a44:
    // 0x266a44: 0x47f0  tge         $zero, $zero, 287
    ctx->pc = 0x266a44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266a48:
    // 0x266a48: 0x0  nop
    ctx->pc = 0x266a48u;
    // NOP
label_266a4c:
    // 0x266a4c: 0x0  nop
    ctx->pc = 0x266a4cu;
    // NOP
label_266a50:
    // 0x266a50: 0x10c71  tgeu        $zero, $at, 49
    ctx->pc = 0x266a50u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266a54:
    // 0x266a54: 0x40c0  sll         $t0, $zero, 3
    ctx->pc = 0x266a54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_266a58:
    // 0x266a58: 0x0  nop
    ctx->pc = 0x266a58u;
    // NOP
label_266a5c:
    // 0x266a5c: 0x0  nop
    ctx->pc = 0x266a5cu;
    // NOP
label_266a60:
    // 0x266a60: 0x10c7a  dsrl        $at, $at, 17
    ctx->pc = 0x266a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> 17);
label_266a64:
    // 0x266a64: 0x5400  sll         $t2, $zero, 16
    ctx->pc = 0x266a64u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_266a68:
    // 0x266a68: 0x0  nop
    ctx->pc = 0x266a68u;
    // NOP
label_266a6c:
    // 0x266a6c: 0x0  nop
    ctx->pc = 0x266a6cu;
    // NOP
label_266a70:
    // 0x266a70: 0x10c85  .word       0x00010C85                   # INVALID     $zero, $at, 0xC85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x266A70 raw=0x00010C85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266a74:
    // 0x266a74: 0x4fa0  .word       0x00004FA0                   # add         $t1, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_266a78:
    // 0x266a78: 0x0  nop
    ctx->pc = 0x266a78u;
    // NOP
label_266a7c:
    // 0x266a7c: 0x0  nop
    ctx->pc = 0x266a7cu;
    // NOP
label_266a80:
    // 0x266a80: 0x10c8f  .word       0x00010C8F                   # sync.p # 00010800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_266a84:
    // 0x266a84: 0x4640  sll         $t0, $zero, 25
    ctx->pc = 0x266a84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_266a88:
    // 0x266a88: 0x0  nop
    ctx->pc = 0x266a88u;
    // NOP
label_266a8c:
    // 0x266a8c: 0x0  nop
    ctx->pc = 0x266a8cu;
    // NOP
label_266a90:
    // 0x266a90: 0x10c98  .word       0x00010C98                   # mult        $at, $zero, $at # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_266a94:
    // 0x266a94: 0x4aa0  .word       0x00004AA0                   # add         $t1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266a94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_266a98:
    // 0x266a98: 0x0  nop
    ctx->pc = 0x266a98u;
    // NOP
label_266a9c:
    // 0x266a9c: 0x0  nop
    ctx->pc = 0x266a9cu;
    // NOP
label_266aa0:
    // 0x266aa0: 0x10ca2  .word       0x00010CA2                   # neg         $at, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266aa0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_266aa4:
    // 0x266aa4: 0x5e70  tge         $zero, $zero, 377
    ctx->pc = 0x266aa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266aa8:
    // 0x266aa8: 0x0  nop
    ctx->pc = 0x266aa8u;
    // NOP
label_266aac:
    // 0x266aac: 0x0  nop
    ctx->pc = 0x266aacu;
    // NOP
label_266ab0:
    // 0x266ab0: 0x10cae  .word       0x00010CAE                   # dsub        $at, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ab0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_266ab4:
    // 0x266ab4: 0x6ac0  sll         $t5, $zero, 11
    ctx->pc = 0x266ab4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_266ab8:
    // 0x266ab8: 0x0  nop
    ctx->pc = 0x266ab8u;
    // NOP
label_266abc:
    // 0x266abc: 0x0  nop
    ctx->pc = 0x266abcu;
    // NOP
label_266ac0:
    // 0x266ac0: 0x10cbc  dsll32      $at, $at, 18
    ctx->pc = 0x266ac0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (32 + 18));
label_266ac4:
    // 0x266ac4: 0x32c0  sll         $a2, $zero, 11
    ctx->pc = 0x266ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_266ac8:
    // 0x266ac8: 0x0  nop
    ctx->pc = 0x266ac8u;
    // NOP
label_266acc:
    // 0x266acc: 0x0  nop
    ctx->pc = 0x266accu;
    // NOP
label_266ad0:
    // 0x266ad0: 0x10cc3  sra         $at, $at, 19
    ctx->pc = 0x266ad0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 19));
label_266ad4:
    // 0x266ad4: 0x4bb0  tge         $zero, $zero, 302
    ctx->pc = 0x266ad4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266ad8:
    // 0x266ad8: 0x0  nop
    ctx->pc = 0x266ad8u;
    // NOP
label_266adc:
    // 0x266adc: 0x0  nop
    ctx->pc = 0x266adcu;
    // NOP
label_266ae0:
    // 0x266ae0: 0x10ccd  break       1, 51
    ctx->pc = 0x266ae0u;
    runtime->handleBreak(rdram, ctx);
label_266ae4:
    // 0x266ae4: 0x4550  .word       0x00004550                   # mfhi        $t0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ae4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_266ae8:
    // 0x266ae8: 0x0  nop
    ctx->pc = 0x266ae8u;
    // NOP
label_266aec:
    // 0x266aec: 0x0  nop
    ctx->pc = 0x266aecu;
    // NOP
label_266af0:
    // 0x266af0: 0x10cd6  .word       0x00010CD6                   # dsrlv       $at, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266af0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_266af4:
    // 0x266af4: 0x42d0  .word       0x000042D0                   # mfhi        $t0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266af4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_266af8:
    // 0x266af8: 0x0  nop
    ctx->pc = 0x266af8u;
    // NOP
label_266afc:
    // 0x266afc: 0x0  nop
    ctx->pc = 0x266afcu;
    // NOP
label_266b00:
    // 0x266b00: 0x10cdf  .word       0x00010CDF                   # ddivu       $at, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x266B00 raw=0x00010CDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266b04:
    // 0x266b04: 0x3ec0  sll         $a3, $zero, 27
    ctx->pc = 0x266b04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_266b08:
    // 0x266b08: 0x0  nop
    ctx->pc = 0x266b08u;
    // NOP
label_266b0c:
    // 0x266b0c: 0x0  nop
    ctx->pc = 0x266b0cu;
    // NOP
label_266b10:
    // 0x266b10: 0x10ce7  .word       0x00010CE7                   # nor         $at, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b10u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_266b14:
    // 0x266b14: 0x41a0  .word       0x000041A0                   # add         $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_266b18:
    // 0x266b18: 0x0  nop
    ctx->pc = 0x266b18u;
    // NOP
label_266b1c:
    // 0x266b1c: 0x0  nop
    ctx->pc = 0x266b1cu;
    // NOP
label_266b20:
    // 0x266b20: 0x10cf0  tge         $zero, $at, 51
    ctx->pc = 0x266b20u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266b24:
    // 0x266b24: 0x4290  .word       0x00004290                   # mfhi        $t0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b24u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_266b28:
    // 0x266b28: 0x0  nop
    ctx->pc = 0x266b28u;
    // NOP
label_266b2c:
    // 0x266b2c: 0x0  nop
    ctx->pc = 0x266b2cu;
    // NOP
label_266b30:
    // 0x266b30: 0x10cf9  .word       0x00010CF9                   # INVALID     $zero, $at, 0xCF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x266B30 raw=0x00010CF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266b34:
    // 0x266b34: 0x3920  .word       0x00003920                   # add         $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_266b38:
    // 0x266b38: 0x0  nop
    ctx->pc = 0x266b38u;
    // NOP
label_266b3c:
    // 0x266b3c: 0x0  nop
    ctx->pc = 0x266b3cu;
    // NOP
label_266b40:
    // 0x266b40: 0x10d01  .word       0x00010D01                   # INVALID     $zero, $at, 0xD01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x266B40 raw=0x00010D01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266b44:
    // 0x266b44: 0x4c30  tge         $zero, $zero, 304
    ctx->pc = 0x266b44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266b48:
    // 0x266b48: 0x0  nop
    ctx->pc = 0x266b48u;
    // NOP
label_266b4c:
    // 0x266b4c: 0x0  nop
    ctx->pc = 0x266b4cu;
    // NOP
label_266b50:
    // 0x266b50: 0x10d0b  .word       0x00010D0B                   # movn        $at, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b50u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_266b54:
    // 0x266b54: 0x29e0  .word       0x000029E0                   # add         $a1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_266b58:
    // 0x266b58: 0x0  nop
    ctx->pc = 0x266b58u;
    // NOP
label_266b5c:
    // 0x266b5c: 0x0  nop
    ctx->pc = 0x266b5cu;
    // NOP
label_266b60:
    // 0x266b60: 0x10d11  .word       0x00010D11                   # mthi        $zero # 00010D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b60u;
    ctx->hi = GPR_U64(ctx, 0);
label_266b64:
    // 0x266b64: 0x6d70  tge         $zero, $zero, 437
    ctx->pc = 0x266b64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266b68:
    // 0x266b68: 0x0  nop
    ctx->pc = 0x266b68u;
    // NOP
label_266b6c:
    // 0x266b6c: 0x0  nop
    ctx->pc = 0x266b6cu;
    // NOP
label_266b70:
    // 0x266b70: 0x10d1f  .word       0x00010D1F                   # ddivu       $at, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x266B70 raw=0x00010D1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266b74:
    // 0x266b74: 0x4de0  .word       0x00004DE0                   # add         $t1, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_266b78:
    // 0x266b78: 0x0  nop
    ctx->pc = 0x266b78u;
    // NOP
label_266b7c:
    // 0x266b7c: 0x0  nop
    ctx->pc = 0x266b7cu;
    // NOP
label_266b80:
    // 0x266b80: 0x10d29  .word       0x00010D29                   # mtsa        $zero # 00010D00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x266b80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_266b84:
    // 0x266b84: 0x4030  tge         $zero, $zero, 256
    ctx->pc = 0x266b84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266b88:
    // 0x266b88: 0x0  nop
    ctx->pc = 0x266b88u;
    // NOP
label_266b8c:
    // 0x266b8c: 0x0  nop
    ctx->pc = 0x266b8cu;
    // NOP
label_266b90:
    // 0x266b90: 0x10d32  tlt         $zero, $at, 52
    ctx->pc = 0x266b90u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266b94:
    // 0x266b94: 0x4690  .word       0x00004690                   # mfhi        $t0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266b94u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_266b98:
    // 0x266b98: 0x0  nop
    ctx->pc = 0x266b98u;
    // NOP
label_266b9c:
    // 0x266b9c: 0x0  nop
    ctx->pc = 0x266b9cu;
    // NOP
label_266ba0:
    // 0x266ba0: 0x10d3b  dsra        $at, $at, 20
    ctx->pc = 0x266ba0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> 20);
label_266ba4:
    // 0x266ba4: 0x3e10  .word       0x00003E10                   # mfhi        $a3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ba4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_266ba8:
    // 0x266ba8: 0x0  nop
    ctx->pc = 0x266ba8u;
    // NOP
label_266bac:
    // 0x266bac: 0x0  nop
    ctx->pc = 0x266bacu;
    // NOP
label_266bb0:
    // 0x266bb0: 0x10d43  sra         $at, $at, 21
    ctx->pc = 0x266bb0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 21));
label_266bb4:
    // 0x266bb4: 0x3b30  tge         $zero, $zero, 236
    ctx->pc = 0x266bb4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266bb8:
    // 0x266bb8: 0x0  nop
    ctx->pc = 0x266bb8u;
    // NOP
label_266bbc:
    // 0x266bbc: 0x0  nop
    ctx->pc = 0x266bbcu;
    // NOP
label_266bc0:
    // 0x266bc0: 0x10d4b  .word       0x00010D4B                   # movn        $at, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266bc0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_266bc4:
    // 0x266bc4: 0x4fc0  sll         $t1, $zero, 31
    ctx->pc = 0x266bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_266bc8:
    // 0x266bc8: 0x0  nop
    ctx->pc = 0x266bc8u;
    // NOP
label_266bcc:
    // 0x266bcc: 0x0  nop
    ctx->pc = 0x266bccu;
    // NOP
label_266bd0:
    // 0x266bd0: 0x10d55  .word       0x00010D55                   # INVALID     $zero, $at, 0xD55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266bd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x266BD0 raw=0x00010D55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266bd4:
    // 0x266bd4: 0x3710  .word       0x00003710                   # mfhi        $a2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266bd4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_266bd8:
    // 0x266bd8: 0x0  nop
    ctx->pc = 0x266bd8u;
    // NOP
label_266bdc:
    // 0x266bdc: 0x0  nop
    ctx->pc = 0x266bdcu;
    // NOP
label_266be0:
    // 0x266be0: 0x10d5c  .word       0x00010D5C                   # dmult       $zero, $at # 00000D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266be0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x266BE0 raw=0x00010D5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266be4:
    // 0x266be4: 0x4300  sll         $t0, $zero, 12
    ctx->pc = 0x266be4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_266be8:
    // 0x266be8: 0x0  nop
    ctx->pc = 0x266be8u;
    // NOP
label_266bec:
    // 0x266bec: 0x0  nop
    ctx->pc = 0x266becu;
    // NOP
label_266bf0:
    // 0x266bf0: 0x10d65  .word       0x00010D65                   # or          $at, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266bf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_266bf4:
    // 0x266bf4: 0x5050  .word       0x00005050                   # mfhi        $t2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266bf4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_266bf8:
    // 0x266bf8: 0x0  nop
    ctx->pc = 0x266bf8u;
    // NOP
label_266bfc:
    // 0x266bfc: 0x0  nop
    ctx->pc = 0x266bfcu;
    // NOP
label_266c00:
    // 0x266c00: 0x10d70  tge         $zero, $at, 53
    ctx->pc = 0x266c00u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266c04:
    // 0x266c04: 0x4b10  .word       0x00004B10                   # mfhi        $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c04u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_266c08:
    // 0x266c08: 0x0  nop
    ctx->pc = 0x266c08u;
    // NOP
label_266c0c:
    // 0x266c0c: 0x0  nop
    ctx->pc = 0x266c0cu;
    // NOP
label_266c10:
    // 0x266c10: 0x10d7a  dsrl        $at, $at, 21
    ctx->pc = 0x266c10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) >> 21);
label_266c14:
    // 0x266c14: 0x41e0  .word       0x000041E0                   # add         $t0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_266c18:
    // 0x266c18: 0x0  nop
    ctx->pc = 0x266c18u;
    // NOP
label_266c1c:
    // 0x266c1c: 0x0  nop
    ctx->pc = 0x266c1cu;
    // NOP
label_266c20:
    // 0x266c20: 0x10d83  sra         $at, $at, 22
    ctx->pc = 0x266c20u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 22));
label_266c24:
    // 0x266c24: 0x6560  .word       0x00006560                   # add         $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_266c28:
    // 0x266c28: 0x0  nop
    ctx->pc = 0x266c28u;
    // NOP
label_266c2c:
    // 0x266c2c: 0x0  nop
    ctx->pc = 0x266c2cu;
    // NOP
label_266c30:
    // 0x266c30: 0x10d90  .word       0x00010D90                   # mfhi        $at # 00010580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c30u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_266c34:
    // 0x266c34: 0x4c70  tge         $zero, $zero, 305
    ctx->pc = 0x266c34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266c38:
    // 0x266c38: 0x0  nop
    ctx->pc = 0x266c38u;
    // NOP
label_266c3c:
    // 0x266c3c: 0x0  nop
    ctx->pc = 0x266c3cu;
    // NOP
label_266c40:
    // 0x266c40: 0x10d9a  .word       0x00010D9A                   # div         $at, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c40u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_266c44:
    // 0x266c44: 0x3750  .word       0x00003750                   # mfhi        $a2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c44u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_266c48:
    // 0x266c48: 0x0  nop
    ctx->pc = 0x266c48u;
    // NOP
label_266c4c:
    // 0x266c4c: 0x0  nop
    ctx->pc = 0x266c4cu;
    // NOP
label_266c50:
    // 0x266c50: 0x10da1  .word       0x00010DA1                   # addu        $at, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c50u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_266c54:
    // 0x266c54: 0x29f0  tge         $zero, $zero, 167
    ctx->pc = 0x266c54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266c58:
    // 0x266c58: 0x0  nop
    ctx->pc = 0x266c58u;
    // NOP
label_266c5c:
    // 0x266c5c: 0x0  nop
    ctx->pc = 0x266c5cu;
    // NOP
label_266c60:
    // 0x266c60: 0x10da7  .word       0x00010DA7                   # nor         $at, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c60u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_266c64:
    // 0x266c64: 0x6640  sll         $t4, $zero, 25
    ctx->pc = 0x266c64u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_266c68:
    // 0x266c68: 0x0  nop
    ctx->pc = 0x266c68u;
    // NOP
label_266c6c:
    // 0x266c6c: 0x0  nop
    ctx->pc = 0x266c6cu;
    // NOP
label_266c70:
    // 0x266c70: 0x10db4  teq         $zero, $at, 54
    ctx->pc = 0x266c70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266c74:
    // 0x266c74: 0x3910  .word       0x00003910                   # mfhi        $a3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c74u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_266c78:
    // 0x266c78: 0x0  nop
    ctx->pc = 0x266c78u;
    // NOP
label_266c7c:
    // 0x266c7c: 0x0  nop
    ctx->pc = 0x266c7cu;
    // NOP
label_266c80:
    // 0x266c80: 0x10dbc  dsll32      $at, $at, 22
    ctx->pc = 0x266c80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (32 + 22));
label_266c84:
    // 0x266c84: 0x32b0  tge         $zero, $zero, 202
    ctx->pc = 0x266c84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266c88:
    // 0x266c88: 0x0  nop
    ctx->pc = 0x266c88u;
    // NOP
label_266c8c:
    // 0x266c8c: 0x0  nop
    ctx->pc = 0x266c8cu;
    // NOP
label_266c90:
    // 0x266c90: 0x10dc3  sra         $at, $at, 23
    ctx->pc = 0x266c90u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 23));
label_266c94:
    // 0x266c94: 0x4060  .word       0x00004060                   # add         $t0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266c94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_266c98:
    // 0x266c98: 0x0  nop
    ctx->pc = 0x266c98u;
    // NOP
label_266c9c:
    // 0x266c9c: 0x0  nop
    ctx->pc = 0x266c9cu;
    // NOP
label_266ca0:
    // 0x266ca0: 0x10dcc  .word       0x00010DCC                   # syscall     55 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ca0u;
    ctx->pc = 0x266CA4u;
runtime->handleSyscall(rdram, ctx, 0x437u);
label_266ca4:
    // 0x266ca4: 0x5060  .word       0x00005060                   # add         $t2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ca4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_266ca8:
    // 0x266ca8: 0x0  nop
    ctx->pc = 0x266ca8u;
    // NOP
label_266cac:
    // 0x266cac: 0x0  nop
    ctx->pc = 0x266cacu;
    // NOP
label_266cb0:
    // 0x266cb0: 0x10dd7  .word       0x00010DD7                   # dsrav       $at, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266cb0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_266cb4:
    // 0x266cb4: 0xa5e0  .word       0x0000A5E0                   # add         $s4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266cb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_266cb8:
    // 0x266cb8: 0x0  nop
    ctx->pc = 0x266cb8u;
    // NOP
label_266cbc:
    // 0x266cbc: 0x0  nop
    ctx->pc = 0x266cbcu;
    // NOP
label_266cc0:
    // 0x266cc0: 0x10dec  .word       0x00010DEC                   # dadd        $at, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266cc0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_266cc4:
    // 0x266cc4: 0x50d0  .word       0x000050D0                   # mfhi        $t2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266cc4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_266cc8:
    // 0x266cc8: 0x0  nop
    ctx->pc = 0x266cc8u;
    // NOP
label_266ccc:
    // 0x266ccc: 0x0  nop
    ctx->pc = 0x266cccu;
    // NOP
label_266cd0:
    // 0x266cd0: 0x10df7  .word       0x00010DF7                   # INVALID     $zero, $at, 0xDF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266cd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x266CD0 raw=0x00010DF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266cd4:
    // 0x266cd4: 0x6730  tge         $zero, $zero, 412
    ctx->pc = 0x266cd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266cd8:
    // 0x266cd8: 0x0  nop
    ctx->pc = 0x266cd8u;
    // NOP
label_266cdc:
    // 0x266cdc: 0x0  nop
    ctx->pc = 0x266cdcu;
    // NOP
label_266ce0:
    // 0x266ce0: 0x10e04  .word       0x00010E04                   # sllv        $at, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_266ce4:
    // 0x266ce4: 0x9530  tge         $zero, $zero, 596
    ctx->pc = 0x266ce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266ce8:
    // 0x266ce8: 0x0  nop
    ctx->pc = 0x266ce8u;
    // NOP
label_266cec:
    // 0x266cec: 0x0  nop
    ctx->pc = 0x266cecu;
    // NOP
label_266cf0:
    // 0x266cf0: 0x10e17  .word       0x00010E17                   # dsrav       $at, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266cf0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_266cf4:
    // 0x266cf4: 0x78b0  tge         $zero, $zero, 482
    ctx->pc = 0x266cf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266cf8:
    // 0x266cf8: 0x0  nop
    ctx->pc = 0x266cf8u;
    // NOP
label_266cfc:
    // 0x266cfc: 0x0  nop
    ctx->pc = 0x266cfcu;
    // NOP
label_266d00:
    // 0x266d00: 0x10e27  .word       0x00010E27                   # nor         $at, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d00u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_266d04:
    // 0x266d04: 0x5170  tge         $zero, $zero, 325
    ctx->pc = 0x266d04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266d08:
    // 0x266d08: 0x0  nop
    ctx->pc = 0x266d08u;
    // NOP
label_266d0c:
    // 0x266d0c: 0x0  nop
    ctx->pc = 0x266d0cu;
    // NOP
label_266d10:
    // 0x266d10: 0x10e32  tlt         $zero, $at, 56
    ctx->pc = 0x266d10u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266d14:
    // 0x266d14: 0x81c0  sll         $s0, $zero, 7
    ctx->pc = 0x266d14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_266d18:
    // 0x266d18: 0x0  nop
    ctx->pc = 0x266d18u;
    // NOP
label_266d1c:
    // 0x266d1c: 0x0  nop
    ctx->pc = 0x266d1cu;
    // NOP
label_266d20:
    // 0x266d20: 0x10e43  sra         $at, $at, 25
    ctx->pc = 0x266d20u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 25));
label_266d24:
    // 0x266d24: 0x6900  sll         $t5, $zero, 4
    ctx->pc = 0x266d24u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_266d28:
    // 0x266d28: 0x0  nop
    ctx->pc = 0x266d28u;
    // NOP
label_266d2c:
    // 0x266d2c: 0x0  nop
    ctx->pc = 0x266d2cu;
    // NOP
label_266d30:
    // 0x266d30: 0x10e51  .word       0x00010E51                   # mthi        $zero # 00010E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d30u;
    ctx->hi = GPR_U64(ctx, 0);
label_266d34:
    // 0x266d34: 0x48c0  sll         $t1, $zero, 3
    ctx->pc = 0x266d34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_266d38:
    // 0x266d38: 0x0  nop
    ctx->pc = 0x266d38u;
    // NOP
label_266d3c:
    // 0x266d3c: 0x0  nop
    ctx->pc = 0x266d3cu;
    // NOP
label_266d40:
    // 0x266d40: 0x10e5b  .word       0x00010E5B                   # divu        $at, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d40u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_266d44:
    // 0x266d44: 0x8d50  .word       0x00008D50                   # mfhi        $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d44u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_266d48:
    // 0x266d48: 0x0  nop
    ctx->pc = 0x266d48u;
    // NOP
label_266d4c:
    // 0x266d4c: 0x0  nop
    ctx->pc = 0x266d4cu;
    // NOP
label_266d50:
    // 0x266d50: 0x10e6d  .word       0x00010E6D                   # daddu       $at, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d50u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_266d54:
    // 0x266d54: 0x5fe0  .word       0x00005FE0                   # add         $t3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_266d58:
    // 0x266d58: 0x0  nop
    ctx->pc = 0x266d58u;
    // NOP
label_266d5c:
    // 0x266d5c: 0x0  nop
    ctx->pc = 0x266d5cu;
    // NOP
label_266d60:
    // 0x266d60: 0x10e79  .word       0x00010E79                   # INVALID     $zero, $at, 0xE79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x266D60 raw=0x00010E79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266d64:
    // 0x266d64: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x266d64u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_266d68:
    // 0x266d68: 0x0  nop
    ctx->pc = 0x266d68u;
    // NOP
label_266d6c:
    // 0x266d6c: 0x0  nop
    ctx->pc = 0x266d6cu;
    // NOP
label_266d70:
    // 0x266d70: 0x10e86  .word       0x00010E86                   # srlv        $at, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d70u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_266d74:
    // 0x266d74: 0x6900  sll         $t5, $zero, 4
    ctx->pc = 0x266d74u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_266d78:
    // 0x266d78: 0x0  nop
    ctx->pc = 0x266d78u;
    // NOP
label_266d7c:
    // 0x266d7c: 0x0  nop
    ctx->pc = 0x266d7cu;
    // NOP
label_266d80:
    // 0x266d80: 0x10e94  .word       0x00010E94                   # dsllv       $at, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_266d84:
    // 0x266d84: 0x7be0  .word       0x00007BE0                   # add         $t7, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_266d88:
    // 0x266d88: 0x0  nop
    ctx->pc = 0x266d88u;
    // NOP
label_266d8c:
    // 0x266d8c: 0x0  nop
    ctx->pc = 0x266d8cu;
    // NOP
label_266d90:
    // 0x266d90: 0x10ea4  .word       0x00010EA4                   # and         $at, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_266d94:
    // 0x266d94: 0x7670  tge         $zero, $zero, 473
    ctx->pc = 0x266d94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266d98:
    // 0x266d98: 0x0  nop
    ctx->pc = 0x266d98u;
    // NOP
label_266d9c:
    // 0x266d9c: 0x0  nop
    ctx->pc = 0x266d9cu;
    // NOP
label_266da0:
    // 0x266da0: 0x10eb3  tltu        $zero, $at, 58
    ctx->pc = 0x266da0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266da4:
    // 0x266da4: 0x5c50  .word       0x00005C50                   # mfhi        $t3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266da4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_266da8:
    // 0x266da8: 0x0  nop
    ctx->pc = 0x266da8u;
    // NOP
label_266dac:
    // 0x266dac: 0x0  nop
    ctx->pc = 0x266dacu;
    // NOP
label_266db0:
    // 0x266db0: 0x10ebf  dsra32      $at, $at, 26
    ctx->pc = 0x266db0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 1) >> (32 + 26));
label_266db4:
    // 0x266db4: 0x8ab0  tge         $zero, $zero, 554
    ctx->pc = 0x266db4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_266db8:
    // 0x266db8: 0x0  nop
    ctx->pc = 0x266db8u;
    // NOP
label_266dbc:
    // 0x266dbc: 0x0  nop
    ctx->pc = 0x266dbcu;
    // NOP
label_266dc0:
    // 0x266dc0: 0x10ed1  .word       0x00010ED1                   # mthi        $zero # 00010EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266dc0u;
    ctx->hi = GPR_U64(ctx, 0);
label_266dc4:
    // 0x266dc4: 0x6690  .word       0x00006690                   # mfhi        $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266dc4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_266dc8:
    // 0x266dc8: 0x0  nop
    ctx->pc = 0x266dc8u;
    // NOP
label_266dcc:
    // 0x266dcc: 0x0  nop
    ctx->pc = 0x266dccu;
    // NOP
label_266dd0:
    // 0x266dd0: 0x10ede  .word       0x00010EDE                   # ddiv        $at, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266dd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x266DD0 raw=0x00010EDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266dd4:
    // 0x266dd4: 0x9900  sll         $s3, $zero, 4
    ctx->pc = 0x266dd4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_266dd8:
    // 0x266dd8: 0x0  nop
    ctx->pc = 0x266dd8u;
    // NOP
label_266ddc:
    // 0x266ddc: 0x0  nop
    ctx->pc = 0x266ddcu;
    // NOP
label_266de0:
    // 0x266de0: 0x10ef2  tlt         $zero, $at, 59
    ctx->pc = 0x266de0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_266de4:
    // 0x266de4: 0x6d60  .word       0x00006D60                   # add         $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266de4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_266de8:
    // 0x266de8: 0x0  nop
    ctx->pc = 0x266de8u;
    // NOP
label_266dec:
    // 0x266dec: 0x0  nop
    ctx->pc = 0x266decu;
    // NOP
label_266df0:
    // 0x266df0: 0x10f00  sll         $at, $at, 28
    ctx->pc = 0x266df0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 28));
label_266df4:
    // 0x266df4: 0x7680  sll         $t6, $zero, 26
    ctx->pc = 0x266df4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_266df8:
    // 0x266df8: 0x0  nop
    ctx->pc = 0x266df8u;
    // NOP
label_266dfc:
    // 0x266dfc: 0x0  nop
    ctx->pc = 0x266dfcu;
    // NOP
label_266e00:
    // 0x266e00: 0x10f0f  .word       0x00010F0F                   # sync.p # 00010800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_266e04:
    // 0x266e04: 0x7940  sll         $t7, $zero, 5
    ctx->pc = 0x266e04u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_266e08:
    // 0x266e08: 0x0  nop
    ctx->pc = 0x266e08u;
    // NOP
label_266e0c:
    // 0x266e0c: 0x0  nop
    ctx->pc = 0x266e0cu;
    // NOP
label_266e10:
    // 0x266e10: 0x10f1f  .word       0x00010F1F                   # ddivu       $at, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x266E10 raw=0x00010F1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_266e14:
    // 0x266e14: 0x5a10  .word       0x00005A10                   # mfhi        $t3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e14u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_266e18:
    // 0x266e18: 0x0  nop
    ctx->pc = 0x266e18u;
    // NOP
label_266e1c:
    // 0x266e1c: 0x0  nop
    ctx->pc = 0x266e1cu;
    // NOP
label_266e20:
    // 0x266e20: 0x10f2b  .word       0x00010F2B                   # sltu        $at, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_266e24:
    // 0x266e24: 0x67c0  sll         $t4, $zero, 31
    ctx->pc = 0x266e24u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_266e28:
    // 0x266e28: 0x0  nop
    ctx->pc = 0x266e28u;
    // NOP
label_266e2c:
    // 0x266e2c: 0x0  nop
    ctx->pc = 0x266e2cu;
    // NOP
label_266e30:
    // 0x266e30: 0x10f38  dsll        $at, $at, 28
    ctx->pc = 0x266e30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 28);
label_266e34:
    // 0x266e34: 0x7210  .word       0x00007210                   # mfhi        $t6 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e34u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_266e38:
    // 0x266e38: 0x0  nop
    ctx->pc = 0x266e38u;
    // NOP
label_266e3c:
    // 0x266e3c: 0x0  nop
    ctx->pc = 0x266e3cu;
    // NOP
label_266e40:
    // 0x266e40: 0x10f47  .word       0x00010F47                   # srav        $at, $at, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e40u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_266e44:
    // 0x266e44: 0x9b10  .word       0x00009B10                   # mfhi        $s3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x266e44u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    ctx->pc = 0x266e48u;
    return;
}

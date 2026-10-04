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


void FUN_0014eba0_part541(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x256660u: goto label_256660;
        case 0x256664u: goto label_256664;
        case 0x256668u: goto label_256668;
        case 0x25666cu: goto label_25666c;
        case 0x256670u: goto label_256670;
        case 0x256674u: goto label_256674;
        case 0x256678u: goto label_256678;
        case 0x25667cu: goto label_25667c;
        case 0x256680u: goto label_256680;
        case 0x256684u: goto label_256684;
        case 0x256688u: goto label_256688;
        case 0x25668cu: goto label_25668c;
        case 0x256690u: goto label_256690;
        case 0x256694u: goto label_256694;
        case 0x256698u: goto label_256698;
        case 0x25669cu: goto label_25669c;
        case 0x2566a0u: goto label_2566a0;
        case 0x2566a4u: goto label_2566a4;
        case 0x2566a8u: goto label_2566a8;
        case 0x2566acu: goto label_2566ac;
        case 0x2566b0u: goto label_2566b0;
        case 0x2566b4u: goto label_2566b4;
        case 0x2566b8u: goto label_2566b8;
        case 0x2566bcu: goto label_2566bc;
        case 0x2566c0u: goto label_2566c0;
        case 0x2566c4u: goto label_2566c4;
        case 0x2566c8u: goto label_2566c8;
        case 0x2566ccu: goto label_2566cc;
        case 0x2566d0u: goto label_2566d0;
        case 0x2566d4u: goto label_2566d4;
        case 0x2566d8u: goto label_2566d8;
        case 0x2566dcu: goto label_2566dc;
        case 0x2566e0u: goto label_2566e0;
        case 0x2566e4u: goto label_2566e4;
        case 0x2566e8u: goto label_2566e8;
        case 0x2566ecu: goto label_2566ec;
        case 0x2566f0u: goto label_2566f0;
        case 0x2566f4u: goto label_2566f4;
        case 0x2566f8u: goto label_2566f8;
        case 0x2566fcu: goto label_2566fc;
        case 0x256700u: goto label_256700;
        case 0x256704u: goto label_256704;
        case 0x256708u: goto label_256708;
        case 0x25670cu: goto label_25670c;
        case 0x256710u: goto label_256710;
        case 0x256714u: goto label_256714;
        case 0x256718u: goto label_256718;
        case 0x25671cu: goto label_25671c;
        case 0x256720u: goto label_256720;
        case 0x256724u: goto label_256724;
        case 0x256728u: goto label_256728;
        case 0x25672cu: goto label_25672c;
        case 0x256730u: goto label_256730;
        case 0x256734u: goto label_256734;
        case 0x256738u: goto label_256738;
        case 0x25673cu: goto label_25673c;
        case 0x256740u: goto label_256740;
        case 0x256744u: goto label_256744;
        case 0x256748u: goto label_256748;
        case 0x25674cu: goto label_25674c;
        case 0x256750u: goto label_256750;
        case 0x256754u: goto label_256754;
        case 0x256758u: goto label_256758;
        case 0x25675cu: goto label_25675c;
        case 0x256760u: goto label_256760;
        case 0x256764u: goto label_256764;
        case 0x256768u: goto label_256768;
        case 0x25676cu: goto label_25676c;
        case 0x256770u: goto label_256770;
        case 0x256774u: goto label_256774;
        case 0x256778u: goto label_256778;
        case 0x25677cu: goto label_25677c;
        case 0x256780u: goto label_256780;
        case 0x256784u: goto label_256784;
        case 0x256788u: goto label_256788;
        case 0x25678cu: goto label_25678c;
        case 0x256790u: goto label_256790;
        case 0x256794u: goto label_256794;
        case 0x256798u: goto label_256798;
        case 0x25679cu: goto label_25679c;
        case 0x2567a0u: goto label_2567a0;
        case 0x2567a4u: goto label_2567a4;
        case 0x2567a8u: goto label_2567a8;
        case 0x2567acu: goto label_2567ac;
        case 0x2567b0u: goto label_2567b0;
        case 0x2567b4u: goto label_2567b4;
        case 0x2567b8u: goto label_2567b8;
        case 0x2567bcu: goto label_2567bc;
        case 0x2567c0u: goto label_2567c0;
        case 0x2567c4u: goto label_2567c4;
        case 0x2567c8u: goto label_2567c8;
        case 0x2567ccu: goto label_2567cc;
        case 0x2567d0u: goto label_2567d0;
        case 0x2567d4u: goto label_2567d4;
        case 0x2567d8u: goto label_2567d8;
        case 0x2567dcu: goto label_2567dc;
        case 0x2567e0u: goto label_2567e0;
        case 0x2567e4u: goto label_2567e4;
        case 0x2567e8u: goto label_2567e8;
        case 0x2567ecu: goto label_2567ec;
        case 0x2567f0u: goto label_2567f0;
        case 0x2567f4u: goto label_2567f4;
        case 0x2567f8u: goto label_2567f8;
        case 0x2567fcu: goto label_2567fc;
        case 0x256800u: goto label_256800;
        case 0x256804u: goto label_256804;
        case 0x256808u: goto label_256808;
        case 0x25680cu: goto label_25680c;
        case 0x256810u: goto label_256810;
        case 0x256814u: goto label_256814;
        case 0x256818u: goto label_256818;
        case 0x25681cu: goto label_25681c;
        case 0x256820u: goto label_256820;
        case 0x256824u: goto label_256824;
        case 0x256828u: goto label_256828;
        case 0x25682cu: goto label_25682c;
        case 0x256830u: goto label_256830;
        case 0x256834u: goto label_256834;
        case 0x256838u: goto label_256838;
        case 0x25683cu: goto label_25683c;
        case 0x256840u: goto label_256840;
        case 0x256844u: goto label_256844;
        case 0x256848u: goto label_256848;
        case 0x25684cu: goto label_25684c;
        case 0x256850u: goto label_256850;
        case 0x256854u: goto label_256854;
        case 0x256858u: goto label_256858;
        case 0x25685cu: goto label_25685c;
        case 0x256860u: goto label_256860;
        case 0x256864u: goto label_256864;
        case 0x256868u: goto label_256868;
        case 0x25686cu: goto label_25686c;
        case 0x256870u: goto label_256870;
        case 0x256874u: goto label_256874;
        case 0x256878u: goto label_256878;
        case 0x25687cu: goto label_25687c;
        case 0x256880u: goto label_256880;
        case 0x256884u: goto label_256884;
        case 0x256888u: goto label_256888;
        case 0x25688cu: goto label_25688c;
        case 0x256890u: goto label_256890;
        case 0x256894u: goto label_256894;
        case 0x256898u: goto label_256898;
        case 0x25689cu: goto label_25689c;
        case 0x2568a0u: goto label_2568a0;
        case 0x2568a4u: goto label_2568a4;
        case 0x2568a8u: goto label_2568a8;
        case 0x2568acu: goto label_2568ac;
        case 0x2568b0u: goto label_2568b0;
        case 0x2568b4u: goto label_2568b4;
        case 0x2568b8u: goto label_2568b8;
        case 0x2568bcu: goto label_2568bc;
        case 0x2568c0u: goto label_2568c0;
        case 0x2568c4u: goto label_2568c4;
        case 0x2568c8u: goto label_2568c8;
        case 0x2568ccu: goto label_2568cc;
        case 0x2568d0u: goto label_2568d0;
        case 0x2568d4u: goto label_2568d4;
        case 0x2568d8u: goto label_2568d8;
        case 0x2568dcu: goto label_2568dc;
        case 0x2568e0u: goto label_2568e0;
        case 0x2568e4u: goto label_2568e4;
        case 0x2568e8u: goto label_2568e8;
        case 0x2568ecu: goto label_2568ec;
        case 0x2568f0u: goto label_2568f0;
        case 0x2568f4u: goto label_2568f4;
        case 0x2568f8u: goto label_2568f8;
        case 0x2568fcu: goto label_2568fc;
        case 0x256900u: goto label_256900;
        case 0x256904u: goto label_256904;
        case 0x256908u: goto label_256908;
        case 0x25690cu: goto label_25690c;
        case 0x256910u: goto label_256910;
        case 0x256914u: goto label_256914;
        case 0x256918u: goto label_256918;
        case 0x25691cu: goto label_25691c;
        case 0x256920u: goto label_256920;
        case 0x256924u: goto label_256924;
        case 0x256928u: goto label_256928;
        case 0x25692cu: goto label_25692c;
        case 0x256930u: goto label_256930;
        case 0x256934u: goto label_256934;
        case 0x256938u: goto label_256938;
        case 0x25693cu: goto label_25693c;
        case 0x256940u: goto label_256940;
        case 0x256944u: goto label_256944;
        case 0x256948u: goto label_256948;
        case 0x25694cu: goto label_25694c;
        case 0x256950u: goto label_256950;
        case 0x256954u: goto label_256954;
        case 0x256958u: goto label_256958;
        case 0x25695cu: goto label_25695c;
        case 0x256960u: goto label_256960;
        case 0x256964u: goto label_256964;
        case 0x256968u: goto label_256968;
        case 0x25696cu: goto label_25696c;
        case 0x256970u: goto label_256970;
        case 0x256974u: goto label_256974;
        case 0x256978u: goto label_256978;
        case 0x25697cu: goto label_25697c;
        case 0x256980u: goto label_256980;
        case 0x256984u: goto label_256984;
        case 0x256988u: goto label_256988;
        case 0x25698cu: goto label_25698c;
        case 0x256990u: goto label_256990;
        case 0x256994u: goto label_256994;
        case 0x256998u: goto label_256998;
        case 0x25699cu: goto label_25699c;
        case 0x2569a0u: goto label_2569a0;
        case 0x2569a4u: goto label_2569a4;
        case 0x2569a8u: goto label_2569a8;
        case 0x2569acu: goto label_2569ac;
        case 0x2569b0u: goto label_2569b0;
        case 0x2569b4u: goto label_2569b4;
        case 0x2569b8u: goto label_2569b8;
        case 0x2569bcu: goto label_2569bc;
        case 0x2569c0u: goto label_2569c0;
        case 0x2569c4u: goto label_2569c4;
        case 0x2569c8u: goto label_2569c8;
        case 0x2569ccu: goto label_2569cc;
        case 0x2569d0u: goto label_2569d0;
        case 0x2569d4u: goto label_2569d4;
        case 0x2569d8u: goto label_2569d8;
        case 0x2569dcu: goto label_2569dc;
        case 0x2569e0u: goto label_2569e0;
        case 0x2569e4u: goto label_2569e4;
        case 0x2569e8u: goto label_2569e8;
        case 0x2569ecu: goto label_2569ec;
        case 0x2569f0u: goto label_2569f0;
        case 0x2569f4u: goto label_2569f4;
        case 0x2569f8u: goto label_2569f8;
        case 0x2569fcu: goto label_2569fc;
        case 0x256a00u: goto label_256a00;
        case 0x256a04u: goto label_256a04;
        case 0x256a08u: goto label_256a08;
        case 0x256a0cu: goto label_256a0c;
        case 0x256a10u: goto label_256a10;
        case 0x256a14u: goto label_256a14;
        case 0x256a18u: goto label_256a18;
        case 0x256a1cu: goto label_256a1c;
        case 0x256a20u: goto label_256a20;
        case 0x256a24u: goto label_256a24;
        case 0x256a28u: goto label_256a28;
        case 0x256a2cu: goto label_256a2c;
        case 0x256a30u: goto label_256a30;
        case 0x256a34u: goto label_256a34;
        case 0x256a38u: goto label_256a38;
        case 0x256a3cu: goto label_256a3c;
        case 0x256a40u: goto label_256a40;
        case 0x256a44u: goto label_256a44;
        case 0x256a48u: goto label_256a48;
        case 0x256a4cu: goto label_256a4c;
        case 0x256a50u: goto label_256a50;
        case 0x256a54u: goto label_256a54;
        case 0x256a58u: goto label_256a58;
        case 0x256a5cu: goto label_256a5c;
        case 0x256a60u: goto label_256a60;
        case 0x256a64u: goto label_256a64;
        case 0x256a68u: goto label_256a68;
        case 0x256a6cu: goto label_256a6c;
        case 0x256a70u: goto label_256a70;
        case 0x256a74u: goto label_256a74;
        case 0x256a78u: goto label_256a78;
        case 0x256a7cu: goto label_256a7c;
        case 0x256a80u: goto label_256a80;
        case 0x256a84u: goto label_256a84;
        case 0x256a88u: goto label_256a88;
        case 0x256a8cu: goto label_256a8c;
        case 0x256a90u: goto label_256a90;
        case 0x256a94u: goto label_256a94;
        case 0x256a98u: goto label_256a98;
        case 0x256a9cu: goto label_256a9c;
        case 0x256aa0u: goto label_256aa0;
        case 0x256aa4u: goto label_256aa4;
        case 0x256aa8u: goto label_256aa8;
        case 0x256aacu: goto label_256aac;
        case 0x256ab0u: goto label_256ab0;
        case 0x256ab4u: goto label_256ab4;
        case 0x256ab8u: goto label_256ab8;
        case 0x256abcu: goto label_256abc;
        case 0x256ac0u: goto label_256ac0;
        case 0x256ac4u: goto label_256ac4;
        case 0x256ac8u: goto label_256ac8;
        case 0x256accu: goto label_256acc;
        case 0x256ad0u: goto label_256ad0;
        case 0x256ad4u: goto label_256ad4;
        case 0x256ad8u: goto label_256ad8;
        case 0x256adcu: goto label_256adc;
        case 0x256ae0u: goto label_256ae0;
        case 0x256ae4u: goto label_256ae4;
        case 0x256ae8u: goto label_256ae8;
        case 0x256aecu: goto label_256aec;
        case 0x256af0u: goto label_256af0;
        case 0x256af4u: goto label_256af4;
        case 0x256af8u: goto label_256af8;
        case 0x256afcu: goto label_256afc;
        case 0x256b00u: goto label_256b00;
        case 0x256b04u: goto label_256b04;
        case 0x256b08u: goto label_256b08;
        case 0x256b0cu: goto label_256b0c;
        case 0x256b10u: goto label_256b10;
        case 0x256b14u: goto label_256b14;
        case 0x256b18u: goto label_256b18;
        case 0x256b1cu: goto label_256b1c;
        case 0x256b20u: goto label_256b20;
        case 0x256b24u: goto label_256b24;
        case 0x256b28u: goto label_256b28;
        case 0x256b2cu: goto label_256b2c;
        case 0x256b30u: goto label_256b30;
        case 0x256b34u: goto label_256b34;
        case 0x256b38u: goto label_256b38;
        case 0x256b3cu: goto label_256b3c;
        case 0x256b40u: goto label_256b40;
        case 0x256b44u: goto label_256b44;
        case 0x256b48u: goto label_256b48;
        case 0x256b4cu: goto label_256b4c;
        case 0x256b50u: goto label_256b50;
        case 0x256b54u: goto label_256b54;
        case 0x256b58u: goto label_256b58;
        case 0x256b5cu: goto label_256b5c;
        case 0x256b60u: goto label_256b60;
        case 0x256b64u: goto label_256b64;
        case 0x256b68u: goto label_256b68;
        case 0x256b6cu: goto label_256b6c;
        case 0x256b70u: goto label_256b70;
        case 0x256b74u: goto label_256b74;
        case 0x256b78u: goto label_256b78;
        case 0x256b7cu: goto label_256b7c;
        case 0x256b80u: goto label_256b80;
        case 0x256b84u: goto label_256b84;
        case 0x256b88u: goto label_256b88;
        case 0x256b8cu: goto label_256b8c;
        case 0x256b90u: goto label_256b90;
        case 0x256b94u: goto label_256b94;
        case 0x256b98u: goto label_256b98;
        case 0x256b9cu: goto label_256b9c;
        case 0x256ba0u: goto label_256ba0;
        case 0x256ba4u: goto label_256ba4;
        case 0x256ba8u: goto label_256ba8;
        case 0x256bacu: goto label_256bac;
        case 0x256bb0u: goto label_256bb0;
        case 0x256bb4u: goto label_256bb4;
        case 0x256bb8u: goto label_256bb8;
        case 0x256bbcu: goto label_256bbc;
        case 0x256bc0u: goto label_256bc0;
        case 0x256bc4u: goto label_256bc4;
        case 0x256bc8u: goto label_256bc8;
        case 0x256bccu: goto label_256bcc;
        case 0x256bd0u: goto label_256bd0;
        case 0x256bd4u: goto label_256bd4;
        case 0x256bd8u: goto label_256bd8;
        case 0x256bdcu: goto label_256bdc;
        case 0x256be0u: goto label_256be0;
        case 0x256be4u: goto label_256be4;
        case 0x256be8u: goto label_256be8;
        case 0x256becu: goto label_256bec;
        case 0x256bf0u: goto label_256bf0;
        case 0x256bf4u: goto label_256bf4;
        case 0x256bf8u: goto label_256bf8;
        case 0x256bfcu: goto label_256bfc;
        case 0x256c00u: goto label_256c00;
        case 0x256c04u: goto label_256c04;
        case 0x256c08u: goto label_256c08;
        case 0x256c0cu: goto label_256c0c;
        case 0x256c10u: goto label_256c10;
        case 0x256c14u: goto label_256c14;
        case 0x256c18u: goto label_256c18;
        case 0x256c1cu: goto label_256c1c;
        case 0x256c20u: goto label_256c20;
        case 0x256c24u: goto label_256c24;
        case 0x256c28u: goto label_256c28;
        case 0x256c2cu: goto label_256c2c;
        case 0x256c30u: goto label_256c30;
        case 0x256c34u: goto label_256c34;
        case 0x256c38u: goto label_256c38;
        case 0x256c3cu: goto label_256c3c;
        case 0x256c40u: goto label_256c40;
        case 0x256c44u: goto label_256c44;
        case 0x256c48u: goto label_256c48;
        case 0x256c4cu: goto label_256c4c;
        case 0x256c50u: goto label_256c50;
        case 0x256c54u: goto label_256c54;
        case 0x256c58u: goto label_256c58;
        case 0x256c5cu: goto label_256c5c;
        case 0x256c60u: goto label_256c60;
        case 0x256c64u: goto label_256c64;
        case 0x256c68u: goto label_256c68;
        case 0x256c6cu: goto label_256c6c;
        case 0x256c70u: goto label_256c70;
        case 0x256c74u: goto label_256c74;
        case 0x256c78u: goto label_256c78;
        case 0x256c7cu: goto label_256c7c;
        case 0x256c80u: goto label_256c80;
        case 0x256c84u: goto label_256c84;
        case 0x256c88u: goto label_256c88;
        case 0x256c8cu: goto label_256c8c;
        case 0x256c90u: goto label_256c90;
        case 0x256c94u: goto label_256c94;
        case 0x256c98u: goto label_256c98;
        case 0x256c9cu: goto label_256c9c;
        case 0x256ca0u: goto label_256ca0;
        case 0x256ca4u: goto label_256ca4;
        case 0x256ca8u: goto label_256ca8;
        case 0x256cacu: goto label_256cac;
        case 0x256cb0u: goto label_256cb0;
        case 0x256cb4u: goto label_256cb4;
        case 0x256cb8u: goto label_256cb8;
        case 0x256cbcu: goto label_256cbc;
        case 0x256cc0u: goto label_256cc0;
        case 0x256cc4u: goto label_256cc4;
        case 0x256cc8u: goto label_256cc8;
        case 0x256cccu: goto label_256ccc;
        case 0x256cd0u: goto label_256cd0;
        case 0x256cd4u: goto label_256cd4;
        case 0x256cd8u: goto label_256cd8;
        case 0x256cdcu: goto label_256cdc;
        case 0x256ce0u: goto label_256ce0;
        case 0x256ce4u: goto label_256ce4;
        case 0x256ce8u: goto label_256ce8;
        case 0x256cecu: goto label_256cec;
        case 0x256cf0u: goto label_256cf0;
        case 0x256cf4u: goto label_256cf4;
        case 0x256cf8u: goto label_256cf8;
        case 0x256cfcu: goto label_256cfc;
        case 0x256d00u: goto label_256d00;
        case 0x256d04u: goto label_256d04;
        case 0x256d08u: goto label_256d08;
        case 0x256d0cu: goto label_256d0c;
        case 0x256d10u: goto label_256d10;
        case 0x256d14u: goto label_256d14;
        case 0x256d18u: goto label_256d18;
        case 0x256d1cu: goto label_256d1c;
        case 0x256d20u: goto label_256d20;
        case 0x256d24u: goto label_256d24;
        case 0x256d28u: goto label_256d28;
        case 0x256d2cu: goto label_256d2c;
        case 0x256d30u: goto label_256d30;
        case 0x256d34u: goto label_256d34;
        case 0x256d38u: goto label_256d38;
        case 0x256d3cu: goto label_256d3c;
        case 0x256d40u: goto label_256d40;
        case 0x256d44u: goto label_256d44;
        case 0x256d48u: goto label_256d48;
        case 0x256d4cu: goto label_256d4c;
        case 0x256d50u: goto label_256d50;
        case 0x256d54u: goto label_256d54;
        case 0x256d58u: goto label_256d58;
        case 0x256d5cu: goto label_256d5c;
        case 0x256d60u: goto label_256d60;
        case 0x256d64u: goto label_256d64;
        case 0x256d68u: goto label_256d68;
        case 0x256d6cu: goto label_256d6c;
        case 0x256d70u: goto label_256d70;
        case 0x256d74u: goto label_256d74;
        case 0x256d78u: goto label_256d78;
        case 0x256d7cu: goto label_256d7c;
        case 0x256d80u: goto label_256d80;
        case 0x256d84u: goto label_256d84;
        case 0x256d88u: goto label_256d88;
        case 0x256d8cu: goto label_256d8c;
        case 0x256d90u: goto label_256d90;
        case 0x256d94u: goto label_256d94;
        case 0x256d98u: goto label_256d98;
        case 0x256d9cu: goto label_256d9c;
        case 0x256da0u: goto label_256da0;
        case 0x256da4u: goto label_256da4;
        case 0x256da8u: goto label_256da8;
        case 0x256dacu: goto label_256dac;
        case 0x256db0u: goto label_256db0;
        case 0x256db4u: goto label_256db4;
        case 0x256db8u: goto label_256db8;
        case 0x256dbcu: goto label_256dbc;
        case 0x256dc0u: goto label_256dc0;
        case 0x256dc4u: goto label_256dc4;
        case 0x256dc8u: goto label_256dc8;
        case 0x256dccu: goto label_256dcc;
        case 0x256dd0u: goto label_256dd0;
        case 0x256dd4u: goto label_256dd4;
        case 0x256dd8u: goto label_256dd8;
        case 0x256ddcu: goto label_256ddc;
        case 0x256de0u: goto label_256de0;
        case 0x256de4u: goto label_256de4;
        case 0x256de8u: goto label_256de8;
        case 0x256decu: goto label_256dec;
        case 0x256df0u: goto label_256df0;
        case 0x256df4u: goto label_256df4;
        case 0x256df8u: goto label_256df8;
        case 0x256dfcu: goto label_256dfc;
        case 0x256e00u: goto label_256e00;
        case 0x256e04u: goto label_256e04;
        case 0x256e08u: goto label_256e08;
        case 0x256e0cu: goto label_256e0c;
        case 0x256e10u: goto label_256e10;
        case 0x256e14u: goto label_256e14;
        case 0x256e18u: goto label_256e18;
        case 0x256e1cu: goto label_256e1c;
        case 0x256e20u: goto label_256e20;
        case 0x256e24u: goto label_256e24;
        case 0x256e28u: goto label_256e28;
        case 0x256e2cu: goto label_256e2c;
        default: return;
    }

label_256660:
    // 0x256660: 0x1c002800  bgtz        $zero, . + 4 + (0x2800 << 2)
label_256664:
    if (ctx->pc == 0x256664u) {
        ctx->pc = 0x256668u;
        goto label_256668;
    }
    ctx->pc = 0x256660u;
    {
        const bool branch_taken_0x256660 = (GPR_S32(ctx, 0) > 0);
        if (branch_taken_0x256660) {
            ctx->pc = 0x260664u;
            { ctx->pc = 0x260664; return; }
        }
    }
    ctx->pc = 0x256668u;
label_256668:
    // 0x256668: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256668u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x256668 raw=0x00000005");
 /* MITIGATED */
label_25666c:
    // 0x25666c: 0x0  nop
    ctx->pc = 0x25666cu;
    // NOP
label_256670:
    // 0x256670: 0x0  nop
    ctx->pc = 0x256670u;
    // NOP
label_256674:
    // 0x256674: 0x0  nop
    ctx->pc = 0x256674u;
    // NOP
label_256678:
    // 0x256678: 0x4c  syscall     1
    ctx->pc = 0x256678u;
    ctx->pc = 0x25667Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_25667c:
    // 0x25667c: 0x0  nop
    ctx->pc = 0x25667cu;
    // NOP
label_256680:
    // 0x256680: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x256680u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_256684:
    // 0x256684: 0x0  nop
    ctx->pc = 0x256684u;
    // NOP
label_256688:
    // 0x256688: 0x0  nop
    ctx->pc = 0x256688u;
    // NOP
label_25668c:
    // 0x25668c: 0x0  nop
    ctx->pc = 0x25668cu;
    // NOP
label_256690:
    // 0x256690: 0x0  nop
    ctx->pc = 0x256690u;
    // NOP
label_256694:
    // 0x256694: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x256694u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_256698:
    // 0x256698: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256698u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x256698 raw=0x00000001");
 /* MITIGATED */
label_25669c:
    // 0x25669c: 0x0  nop
    ctx->pc = 0x25669cu;
    // NOP
label_2566a0:
    // 0x2566a0: 0x0  nop
    ctx->pc = 0x2566a0u;
    // NOP
label_2566a4:
    // 0x2566a4: 0x0  nop
    ctx->pc = 0x2566a4u;
    // NOP
label_2566a8:
    // 0x2566a8: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2566a8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2566A8 raw=0x00000005");
 /* MITIGATED */
label_2566ac:
    // 0x2566ac: 0x0  nop
    ctx->pc = 0x2566acu;
    // NOP
label_2566b0:
    // 0x2566b0: 0x1c002800  bgtz        $zero, . + 4 + (0x2800 << 2)
label_2566b4:
    if (ctx->pc == 0x2566B4u) {
        ctx->pc = 0x2566B8u;
        goto label_2566b8;
    }
    ctx->pc = 0x2566B0u;
    {
        const bool branch_taken_0x2566b0 = (GPR_S32(ctx, 0) > 0);
        if (branch_taken_0x2566b0) {
            ctx->pc = 0x2606B4u;
            { ctx->pc = 0x2606b4; return; }
        }
    }
    ctx->pc = 0x2566B8u;
label_2566b8:
    // 0x2566b8: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2566b8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2566B8 raw=0x00000005");
 /* MITIGATED */
label_2566bc:
    // 0x2566bc: 0x0  nop
    ctx->pc = 0x2566bcu;
    // NOP
label_2566c0:
    // 0x2566c0: 0x0  nop
    ctx->pc = 0x2566c0u;
    // NOP
label_2566c4:
    // 0x2566c4: 0x120  .word       0x00000120                   # add         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2566c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2566c8:
    // 0x2566c8: 0x0  nop
    ctx->pc = 0x2566c8u;
    // NOP
label_2566cc:
    // 0x2566cc: 0x0  nop
    ctx->pc = 0x2566ccu;
    // NOP
label_2566d0:
    // 0x2566d0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2566d0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2566D0 raw=0x00000001");
 /* MITIGATED */
label_2566d4:
    // 0x2566d4: 0x6170  tge         $zero, $zero, 389
    ctx->pc = 0x2566d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2566d8:
    // 0x2566d8: 0x0  nop
    ctx->pc = 0x2566d8u;
    // NOP
label_2566dc:
    // 0x2566dc: 0x0  nop
    ctx->pc = 0x2566dcu;
    // NOP
label_2566e0:
    // 0x2566e0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2566e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2566E0 raw=0x0000000E");
 /* MITIGATED */
label_2566e4:
    // 0x2566e4: 0xa880  sll         $s5, $zero, 2
    ctx->pc = 0x2566e4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2566e8:
    // 0x2566e8: 0x0  nop
    ctx->pc = 0x2566e8u;
    // NOP
label_2566ec:
    // 0x2566ec: 0x0  nop
    ctx->pc = 0x2566ecu;
    // NOP
label_2566f0:
    // 0x2566f0: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x2566f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2566f4:
    // 0x2566f4: 0x8f10  .word       0x00008F10                   # mfhi        $s1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2566f4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2566f8:
    // 0x2566f8: 0x0  nop
    ctx->pc = 0x2566f8u;
    // NOP
label_2566fc:
    // 0x2566fc: 0x0  nop
    ctx->pc = 0x2566fcu;
    // NOP
label_256700:
    // 0x256700: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x256700u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256704:
    // 0x256704: 0x6c40  sll         $t5, $zero, 17
    ctx->pc = 0x256704u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_256708:
    // 0x256708: 0x0  nop
    ctx->pc = 0x256708u;
    // NOP
label_25670c:
    // 0x25670c: 0x0  nop
    ctx->pc = 0x25670cu;
    // NOP
label_256710:
    // 0x256710: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256710u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_256714:
    // 0x256714: 0x7710  .word       0x00007710                   # mfhi        $t6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256714u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_256718:
    // 0x256718: 0x0  nop
    ctx->pc = 0x256718u;
    // NOP
label_25671c:
    // 0x25671c: 0x0  nop
    ctx->pc = 0x25671cu;
    // NOP
label_256720:
    // 0x256720: 0x53  .word       0x00000053                   # mtlo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256720u;
    ctx->lo = GPR_U64(ctx, 0);
label_256724:
    // 0x256724: 0xcdb0  tge         $zero, $zero, 822
    ctx->pc = 0x256724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256728:
    // 0x256728: 0x0  nop
    ctx->pc = 0x256728u;
    // NOP
label_25672c:
    // 0x25672c: 0x0  nop
    ctx->pc = 0x25672cu;
    // NOP
label_256730:
    // 0x256730: 0x6d  .word       0x0000006D                   # daddu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256730u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256734:
    // 0x256734: 0x16370  tge         $zero, $at, 397
    ctx->pc = 0x256734u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_256738:
    // 0x256738: 0x0  nop
    ctx->pc = 0x256738u;
    // NOP
label_25673c:
    // 0x25673c: 0x0  nop
    ctx->pc = 0x25673cu;
    // NOP
label_256740:
    // 0x256740: 0x9a  .word       0x0000009A                   # div         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256740u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_256744:
    // 0x256744: 0x7f20  .word       0x00007F20                   # add         $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_256748:
    // 0x256748: 0x0  nop
    ctx->pc = 0x256748u;
    // NOP
label_25674c:
    // 0x25674c: 0x0  nop
    ctx->pc = 0x25674cu;
    // NOP
label_256750:
    // 0x256750: 0xaa  .word       0x000000AA                   # slt         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256750u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_256754:
    // 0x256754: 0x7460  .word       0x00007460                   # add         $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_256758:
    // 0x256758: 0x0  nop
    ctx->pc = 0x256758u;
    // NOP
label_25675c:
    // 0x25675c: 0x0  nop
    ctx->pc = 0x25675cu;
    // NOP
label_256760:
    // 0x256760: 0xb9  .word       0x000000B9                   # INVALID     $zero, $zero, 0xB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256760u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x256760 raw=0x000000B9");
 /* MITIGATED */
label_256764:
    // 0x256764: 0xe910  .word       0x0000E910                   # mfhi        $sp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256764u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_256768:
    // 0x256768: 0x0  nop
    ctx->pc = 0x256768u;
    // NOP
label_25676c:
    // 0x25676c: 0x0  nop
    ctx->pc = 0x25676cu;
    // NOP
label_256770:
    // 0x256770: 0xd7  .word       0x000000D7                   # dsrav       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256770u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_256774:
    // 0x256774: 0x7a40  sll         $t7, $zero, 9
    ctx->pc = 0x256774u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_256778:
    // 0x256778: 0x0  nop
    ctx->pc = 0x256778u;
    // NOP
label_25677c:
    // 0x25677c: 0x0  nop
    ctx->pc = 0x25677cu;
    // NOP
label_256780:
    // 0x256780: 0xe7  .word       0x000000E7                   # not         $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256780u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_256784:
    // 0x256784: 0x5df0  tge         $zero, $zero, 375
    ctx->pc = 0x256784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256788:
    // 0x256788: 0x0  nop
    ctx->pc = 0x256788u;
    // NOP
label_25678c:
    // 0x25678c: 0x0  nop
    ctx->pc = 0x25678cu;
    // NOP
label_256790:
    // 0x256790: 0xf3  tltu        $zero, $zero, 3
    ctx->pc = 0x256790u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256794:
    // 0x256794: 0x9310  .word       0x00009310                   # mfhi        $s2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256794u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_256798:
    // 0x256798: 0x0  nop
    ctx->pc = 0x256798u;
    // NOP
label_25679c:
    // 0x25679c: 0x0  nop
    ctx->pc = 0x25679cu;
    // NOP
label_2567a0:
    // 0x2567a0: 0x106  .word       0x00000106                   # srlv        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2567a0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2567a4:
    // 0x2567a4: 0xe3b0  tge         $zero, $zero, 910
    ctx->pc = 0x2567a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2567a8:
    // 0x2567a8: 0x0  nop
    ctx->pc = 0x2567a8u;
    // NOP
label_2567ac:
    // 0x2567ac: 0x0  nop
    ctx->pc = 0x2567acu;
    // NOP
label_2567b0:
    // 0x2567b0: 0x123  .word       0x00000123                   # negu        $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2567b0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2567b4:
    // 0x2567b4: 0x5920  .word       0x00005920                   # add         $t3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2567b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2567b8:
    // 0x2567b8: 0x0  nop
    ctx->pc = 0x2567b8u;
    // NOP
label_2567bc:
    // 0x2567bc: 0x0  nop
    ctx->pc = 0x2567bcu;
    // NOP
label_2567c0:
    // 0x2567c0: 0x12f  .word       0x0000012F                   # dsubu       $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2567c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2567c4:
    // 0x2567c4: 0x41b0  tge         $zero, $zero, 262
    ctx->pc = 0x2567c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2567c8:
    // 0x2567c8: 0x0  nop
    ctx->pc = 0x2567c8u;
    // NOP
label_2567cc:
    // 0x2567cc: 0x0  nop
    ctx->pc = 0x2567ccu;
    // NOP
label_2567d0:
    // 0x2567d0: 0x138  dsll        $zero, $zero, 4
    ctx->pc = 0x2567d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 4);
label_2567d4:
    // 0x2567d4: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x2567d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2567d8:
    // 0x2567d8: 0x0  nop
    ctx->pc = 0x2567d8u;
    // NOP
label_2567dc:
    // 0x2567dc: 0x0  nop
    ctx->pc = 0x2567dcu;
    // NOP
label_2567e0:
    // 0x2567e0: 0x13f  dsra32      $zero, $zero, 4
    ctx->pc = 0x2567e0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 4));
label_2567e4:
    // 0x2567e4: 0x7e80  sll         $t7, $zero, 26
    ctx->pc = 0x2567e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_2567e8:
    // 0x2567e8: 0x0  nop
    ctx->pc = 0x2567e8u;
    // NOP
label_2567ec:
    // 0x2567ec: 0x0  nop
    ctx->pc = 0x2567ecu;
    // NOP
label_2567f0:
    // 0x2567f0: 0x14f  sync
    ctx->pc = 0x2567f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2567f4:
    // 0x2567f4: 0x5480  sll         $t2, $zero, 18
    ctx->pc = 0x2567f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2567f8:
    // 0x2567f8: 0x0  nop
    ctx->pc = 0x2567f8u;
    // NOP
label_2567fc:
    // 0x2567fc: 0x0  nop
    ctx->pc = 0x2567fcu;
    // NOP
label_256800:
    // 0x256800: 0x15a  .word       0x0000015A                   # div         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256800u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_256804:
    // 0x256804: 0x89b0  tge         $zero, $zero, 550
    ctx->pc = 0x256804u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256808:
    // 0x256808: 0x0  nop
    ctx->pc = 0x256808u;
    // NOP
label_25680c:
    // 0x25680c: 0x0  nop
    ctx->pc = 0x25680cu;
    // NOP
label_256810:
    // 0x256810: 0x16c  .word       0x0000016C                   # dadd        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256810u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_256814:
    // 0x256814: 0xa570  tge         $zero, $zero, 661
    ctx->pc = 0x256814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256818:
    // 0x256818: 0x0  nop
    ctx->pc = 0x256818u;
    // NOP
label_25681c:
    // 0x25681c: 0x0  nop
    ctx->pc = 0x25681cu;
    // NOP
label_256820:
    // 0x256820: 0x181  .word       0x00000181                   # INVALID     $zero, $zero, 0x181 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256820u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x256820 raw=0x00000181");
 /* MITIGATED */
label_256824:
    // 0x256824: 0x8040  sll         $s0, $zero, 1
    ctx->pc = 0x256824u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_256828:
    // 0x256828: 0x0  nop
    ctx->pc = 0x256828u;
    // NOP
label_25682c:
    // 0x25682c: 0x0  nop
    ctx->pc = 0x25682cu;
    // NOP
label_256830:
    // 0x256830: 0x192  .word       0x00000192                   # mflo        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256830u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_256834:
    // 0x256834: 0x5880  sll         $t3, $zero, 2
    ctx->pc = 0x256834u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_256838:
    // 0x256838: 0x0  nop
    ctx->pc = 0x256838u;
    // NOP
label_25683c:
    // 0x25683c: 0x0  nop
    ctx->pc = 0x25683cu;
    // NOP
label_256840:
    // 0x256840: 0x19e  .word       0x0000019E                   # ddiv        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256840u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x256840 raw=0x0000019E");
 /* MITIGATED */
label_256844:
    // 0x256844: 0x8880  sll         $s1, $zero, 2
    ctx->pc = 0x256844u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_256848:
    // 0x256848: 0x0  nop
    ctx->pc = 0x256848u;
    // NOP
label_25684c:
    // 0x25684c: 0x0  nop
    ctx->pc = 0x25684cu;
    // NOP
label_256850:
    // 0x256850: 0x1b0  tge         $zero, $zero, 6
    ctx->pc = 0x256850u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256854:
    // 0x256854: 0x4510  .word       0x00004510                   # mfhi        $t0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256854u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_256858:
    // 0x256858: 0x0  nop
    ctx->pc = 0x256858u;
    // NOP
label_25685c:
    // 0x25685c: 0x0  nop
    ctx->pc = 0x25685cu;
    // NOP
label_256860:
    // 0x256860: 0x1b9  .word       0x000001B9                   # INVALID     $zero, $zero, 0x1B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256860u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x256860 raw=0x000001B9");
 /* MITIGATED */
label_256864:
    // 0x256864: 0x4cd0  .word       0x00004CD0                   # mfhi        $t1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256864u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_256868:
    // 0x256868: 0x0  nop
    ctx->pc = 0x256868u;
    // NOP
label_25686c:
    // 0x25686c: 0x0  nop
    ctx->pc = 0x25686cu;
    // NOP
label_256870:
    // 0x256870: 0x1c3  sra         $zero, $zero, 7
    ctx->pc = 0x256870u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 7));
label_256874:
    // 0x256874: 0x4df0  tge         $zero, $zero, 311
    ctx->pc = 0x256874u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256878:
    // 0x256878: 0x0  nop
    ctx->pc = 0x256878u;
    // NOP
label_25687c:
    // 0x25687c: 0x0  nop
    ctx->pc = 0x25687cu;
    // NOP
label_256880:
    // 0x256880: 0x1cd  break       0, 7
    ctx->pc = 0x256880u;
    runtime->handleBreak(rdram, ctx);
label_256884:
    // 0x256884: 0xc320  .word       0x0000C320                   # add         $t8, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256884u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_256888:
    // 0x256888: 0x0  nop
    ctx->pc = 0x256888u;
    // NOP
label_25688c:
    // 0x25688c: 0x0  nop
    ctx->pc = 0x25688cu;
    // NOP
label_256890:
    // 0x256890: 0x1e6  .word       0x000001E6                   # xor         $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256890u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_256894:
    // 0x256894: 0x7a00  sll         $t7, $zero, 8
    ctx->pc = 0x256894u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_256898:
    // 0x256898: 0x0  nop
    ctx->pc = 0x256898u;
    // NOP
label_25689c:
    // 0x25689c: 0x0  nop
    ctx->pc = 0x25689cu;
    // NOP
label_2568a0:
    // 0x2568a0: 0x1f6  tne         $zero, $zero, 7
    ctx->pc = 0x2568a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2568a4:
    // 0x2568a4: 0x7480  sll         $t6, $zero, 18
    ctx->pc = 0x2568a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2568a8:
    // 0x2568a8: 0x0  nop
    ctx->pc = 0x2568a8u;
    // NOP
label_2568ac:
    // 0x2568ac: 0x0  nop
    ctx->pc = 0x2568acu;
    // NOP
label_2568b0:
    // 0x2568b0: 0x205  .word       0x00000205                   # INVALID     $zero, $zero, 0x205 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2568b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2568B0 raw=0x00000205");
 /* MITIGATED */
label_2568b4:
    // 0x2568b4: 0x7080  sll         $t6, $zero, 2
    ctx->pc = 0x2568b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2568b8:
    // 0x2568b8: 0x0  nop
    ctx->pc = 0x2568b8u;
    // NOP
label_2568bc:
    // 0x2568bc: 0x0  nop
    ctx->pc = 0x2568bcu;
    // NOP
label_2568c0:
    // 0x2568c0: 0x214  .word       0x00000214                   # dsllv       $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2568c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2568c4:
    // 0x2568c4: 0x9040  sll         $s2, $zero, 1
    ctx->pc = 0x2568c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2568c8:
    // 0x2568c8: 0x0  nop
    ctx->pc = 0x2568c8u;
    // NOP
label_2568cc:
    // 0x2568cc: 0x0  nop
    ctx->pc = 0x2568ccu;
    // NOP
label_2568d0:
    // 0x2568d0: 0x227  .word       0x00000227                   # not         $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2568d0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2568d4:
    // 0x2568d4: 0x83b0  tge         $zero, $zero, 526
    ctx->pc = 0x2568d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2568d8:
    // 0x2568d8: 0x0  nop
    ctx->pc = 0x2568d8u;
    // NOP
label_2568dc:
    // 0x2568dc: 0x0  nop
    ctx->pc = 0x2568dcu;
    // NOP
label_2568e0:
    // 0x2568e0: 0x238  dsll        $zero, $zero, 8
    ctx->pc = 0x2568e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 8);
label_2568e4:
    // 0x2568e4: 0x8840  sll         $s1, $zero, 1
    ctx->pc = 0x2568e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2568e8:
    // 0x2568e8: 0x0  nop
    ctx->pc = 0x2568e8u;
    // NOP
label_2568ec:
    // 0x2568ec: 0x0  nop
    ctx->pc = 0x2568ecu;
    // NOP
label_2568f0:
    // 0x2568f0: 0x24a  .word       0x0000024A                   # movz        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2568f0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2568f4:
    // 0x2568f4: 0x13970  tge         $zero, $at, 229
    ctx->pc = 0x2568f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2568f8:
    // 0x2568f8: 0x0  nop
    ctx->pc = 0x2568f8u;
    // NOP
label_2568fc:
    // 0x2568fc: 0x0  nop
    ctx->pc = 0x2568fcu;
    // NOP
label_256900:
    // 0x256900: 0x272  tlt         $zero, $zero, 9
    ctx->pc = 0x256900u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256904:
    // 0x256904: 0x4c00  sll         $t1, $zero, 16
    ctx->pc = 0x256904u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_256908:
    // 0x256908: 0x0  nop
    ctx->pc = 0x256908u;
    // NOP
label_25690c:
    // 0x25690c: 0x0  nop
    ctx->pc = 0x25690cu;
    // NOP
label_256910:
    // 0x256910: 0x27c  dsll32      $zero, $zero, 9
    ctx->pc = 0x256910u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 9));
label_256914:
    // 0x256914: 0x69f0  tge         $zero, $zero, 423
    ctx->pc = 0x256914u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256918:
    // 0x256918: 0x0  nop
    ctx->pc = 0x256918u;
    // NOP
label_25691c:
    // 0x25691c: 0x0  nop
    ctx->pc = 0x25691cu;
    // NOP
label_256920:
    // 0x256920: 0x28a  .word       0x0000028A                   # movz        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256920u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_256924:
    // 0x256924: 0x8310  .word       0x00008310                   # mfhi        $s0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256924u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_256928:
    // 0x256928: 0x0  nop
    ctx->pc = 0x256928u;
    // NOP
label_25692c:
    // 0x25692c: 0x0  nop
    ctx->pc = 0x25692cu;
    // NOP
label_256930:
    // 0x256930: 0x29b  .word       0x0000029B                   # divu        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256930u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_256934:
    // 0x256934: 0x7240  sll         $t6, $zero, 9
    ctx->pc = 0x256934u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_256938:
    // 0x256938: 0x0  nop
    ctx->pc = 0x256938u;
    // NOP
label_25693c:
    // 0x25693c: 0x0  nop
    ctx->pc = 0x25693cu;
    // NOP
label_256940:
    // 0x256940: 0x2aa  .word       0x000002AA                   # slt         $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256940u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_256944:
    // 0x256944: 0x5280  sll         $t2, $zero, 10
    ctx->pc = 0x256944u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_256948:
    // 0x256948: 0x0  nop
    ctx->pc = 0x256948u;
    // NOP
label_25694c:
    // 0x25694c: 0x0  nop
    ctx->pc = 0x25694cu;
    // NOP
label_256950:
    // 0x256950: 0x2b5  .word       0x000002B5                   # INVALID     $zero, $zero, 0x2B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256950u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x256950 raw=0x000002B5");
 /* MITIGATED */
label_256954:
    // 0x256954: 0x5280  sll         $t2, $zero, 10
    ctx->pc = 0x256954u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_256958:
    // 0x256958: 0x0  nop
    ctx->pc = 0x256958u;
    // NOP
label_25695c:
    // 0x25695c: 0x0  nop
    ctx->pc = 0x25695cu;
    // NOP
label_256960:
    // 0x256960: 0x2c0  sll         $zero, $zero, 11
    ctx->pc = 0x256960u;
    
label_256964:
    // 0x256964: 0x80e0  .word       0x000080E0                   # add         $s0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256964u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_256968:
    // 0x256968: 0x0  nop
    ctx->pc = 0x256968u;
    // NOP
label_25696c:
    // 0x25696c: 0x0  nop
    ctx->pc = 0x25696cu;
    // NOP
label_256970:
    // 0x256970: 0x2d1  .word       0x000002D1                   # mthi        $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256970u;
    ctx->hi = GPR_U64(ctx, 0);
label_256974:
    // 0x256974: 0x9e90  .word       0x00009E90                   # mfhi        $s3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256974u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_256978:
    // 0x256978: 0x0  nop
    ctx->pc = 0x256978u;
    // NOP
label_25697c:
    // 0x25697c: 0x0  nop
    ctx->pc = 0x25697cu;
    // NOP
label_256980:
    // 0x256980: 0x2e5  .word       0x000002E5                   # move        $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256980u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_256984:
    // 0x256984: 0x7680  sll         $t6, $zero, 26
    ctx->pc = 0x256984u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_256988:
    // 0x256988: 0x0  nop
    ctx->pc = 0x256988u;
    // NOP
label_25698c:
    // 0x25698c: 0x0  nop
    ctx->pc = 0x25698cu;
    // NOP
label_256990:
    // 0x256990: 0x2f4  teq         $zero, $zero, 11
    ctx->pc = 0x256990u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256994:
    // 0x256994: 0x97f0  tge         $zero, $zero, 607
    ctx->pc = 0x256994u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256998:
    // 0x256998: 0x0  nop
    ctx->pc = 0x256998u;
    // NOP
label_25699c:
    // 0x25699c: 0x0  nop
    ctx->pc = 0x25699cu;
    // NOP
label_2569a0:
    // 0x2569a0: 0x307  .word       0x00000307                   # srav        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2569a0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2569a4:
    // 0x2569a4: 0x6e80  sll         $t5, $zero, 26
    ctx->pc = 0x2569a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_2569a8:
    // 0x2569a8: 0x0  nop
    ctx->pc = 0x2569a8u;
    // NOP
label_2569ac:
    // 0x2569ac: 0x0  nop
    ctx->pc = 0x2569acu;
    // NOP
label_2569b0:
    // 0x2569b0: 0x315  .word       0x00000315                   # INVALID     $zero, $zero, 0x315 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2569b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2569B0 raw=0x00000315");
 /* MITIGATED */
label_2569b4:
    // 0x2569b4: 0x8840  sll         $s1, $zero, 1
    ctx->pc = 0x2569b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2569b8:
    // 0x2569b8: 0x0  nop
    ctx->pc = 0x2569b8u;
    // NOP
label_2569bc:
    // 0x2569bc: 0x0  nop
    ctx->pc = 0x2569bcu;
    // NOP
label_2569c0:
    // 0x2569c0: 0x327  .word       0x00000327                   # not         $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2569c0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2569c4:
    // 0x2569c4: 0xa040  sll         $s4, $zero, 1
    ctx->pc = 0x2569c4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2569c8:
    // 0x2569c8: 0x0  nop
    ctx->pc = 0x2569c8u;
    // NOP
label_2569cc:
    // 0x2569cc: 0x0  nop
    ctx->pc = 0x2569ccu;
    // NOP
label_2569d0:
    // 0x2569d0: 0x33c  dsll32      $zero, $zero, 12
    ctx->pc = 0x2569d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 12));
label_2569d4:
    // 0x2569d4: 0xfe40  sll         $ra, $zero, 25
    ctx->pc = 0x2569d4u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_2569d8:
    // 0x2569d8: 0x0  nop
    ctx->pc = 0x2569d8u;
    // NOP
label_2569dc:
    // 0x2569dc: 0x0  nop
    ctx->pc = 0x2569dcu;
    // NOP
label_2569e0:
    // 0x2569e0: 0x35c  .word       0x0000035C                   # dmult       $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2569e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2569E0 raw=0x0000035C");
 /* MITIGATED */
label_2569e4:
    // 0x2569e4: 0x5290  .word       0x00005290                   # mfhi        $t2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2569e4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_2569e8:
    // 0x2569e8: 0x0  nop
    ctx->pc = 0x2569e8u;
    // NOP
label_2569ec:
    // 0x2569ec: 0x0  nop
    ctx->pc = 0x2569ecu;
    // NOP
label_2569f0:
    // 0x2569f0: 0x367  .word       0x00000367                   # not         $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2569f0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2569f4:
    // 0x2569f4: 0x7ed0  .word       0x00007ED0                   # mfhi        $t7 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2569f4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2569f8:
    // 0x2569f8: 0x0  nop
    ctx->pc = 0x2569f8u;
    // NOP
label_2569fc:
    // 0x2569fc: 0x0  nop
    ctx->pc = 0x2569fcu;
    // NOP
label_256a00:
    // 0x256a00: 0x377  .word       0x00000377                   # INVALID     $zero, $zero, 0x377 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x256A00 raw=0x00000377");
 /* MITIGATED */
label_256a04:
    // 0x256a04: 0x5f10  .word       0x00005F10                   # mfhi        $t3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a04u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_256a08:
    // 0x256a08: 0x0  nop
    ctx->pc = 0x256a08u;
    // NOP
label_256a0c:
    // 0x256a0c: 0x0  nop
    ctx->pc = 0x256a0cu;
    // NOP
label_256a10:
    // 0x256a10: 0x383  sra         $zero, $zero, 14
    ctx->pc = 0x256a10u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 14));
label_256a14:
    // 0x256a14: 0x55b0  tge         $zero, $zero, 342
    ctx->pc = 0x256a14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256a18:
    // 0x256a18: 0x0  nop
    ctx->pc = 0x256a18u;
    // NOP
label_256a1c:
    // 0x256a1c: 0x0  nop
    ctx->pc = 0x256a1cu;
    // NOP
label_256a20:
    // 0x256a20: 0x38e  .word       0x0000038E                   # INVALID     $zero, $zero, 0x38E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x256A20 raw=0x0000038E");
 /* MITIGATED */
label_256a24:
    // 0x256a24: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x256a24u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_256a28:
    // 0x256a28: 0x0  nop
    ctx->pc = 0x256a28u;
    // NOP
label_256a2c:
    // 0x256a2c: 0x0  nop
    ctx->pc = 0x256a2cu;
    // NOP
label_256a30:
    // 0x256a30: 0x39b  .word       0x0000039B                   # divu        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a30u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_256a34:
    // 0x256a34: 0x4bb0  tge         $zero, $zero, 302
    ctx->pc = 0x256a34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256a38:
    // 0x256a38: 0x0  nop
    ctx->pc = 0x256a38u;
    // NOP
label_256a3c:
    // 0x256a3c: 0x0  nop
    ctx->pc = 0x256a3cu;
    // NOP
label_256a40:
    // 0x256a40: 0x3a5  .word       0x000003A5                   # move        $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a40u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_256a44:
    // 0x256a44: 0xa640  sll         $s4, $zero, 25
    ctx->pc = 0x256a44u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_256a48:
    // 0x256a48: 0x0  nop
    ctx->pc = 0x256a48u;
    // NOP
label_256a4c:
    // 0x256a4c: 0x0  nop
    ctx->pc = 0x256a4cu;
    // NOP
label_256a50:
    // 0x256a50: 0x3ba  dsrl        $zero, $zero, 14
    ctx->pc = 0x256a50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 14);
label_256a54:
    // 0x256a54: 0x5750  .word       0x00005750                   # mfhi        $t2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a54u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_256a58:
    // 0x256a58: 0x0  nop
    ctx->pc = 0x256a58u;
    // NOP
label_256a5c:
    // 0x256a5c: 0x0  nop
    ctx->pc = 0x256a5cu;
    // NOP
label_256a60:
    // 0x256a60: 0x3c5  .word       0x000003C5                   # INVALID     $zero, $zero, 0x3C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a60u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x256A60 raw=0x000003C5");
 /* MITIGATED */
label_256a64:
    // 0x256a64: 0x6970  tge         $zero, $zero, 421
    ctx->pc = 0x256a64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256a68:
    // 0x256a68: 0x0  nop
    ctx->pc = 0x256a68u;
    // NOP
label_256a6c:
    // 0x256a6c: 0x0  nop
    ctx->pc = 0x256a6cu;
    // NOP
label_256a70:
    // 0x256a70: 0x3d3  .word       0x000003D3                   # mtlo        $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a70u;
    ctx->lo = GPR_U64(ctx, 0);
label_256a74:
    // 0x256a74: 0x37b0  tge         $zero, $zero, 222
    ctx->pc = 0x256a74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256a78:
    // 0x256a78: 0x0  nop
    ctx->pc = 0x256a78u;
    // NOP
label_256a7c:
    // 0x256a7c: 0x0  nop
    ctx->pc = 0x256a7cu;
    // NOP
label_256a80:
    // 0x256a80: 0x3da  .word       0x000003DA                   # div         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a80u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_256a84:
    // 0x256a84: 0x4880  sll         $t1, $zero, 2
    ctx->pc = 0x256a84u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_256a88:
    // 0x256a88: 0x0  nop
    ctx->pc = 0x256a88u;
    // NOP
label_256a8c:
    // 0x256a8c: 0x0  nop
    ctx->pc = 0x256a8cu;
    // NOP
label_256a90:
    // 0x256a90: 0x3e4  .word       0x000003E4                   # and         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_256a94:
    // 0x256a94: 0x4160  .word       0x00004160                   # add         $t0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256a94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_256a98:
    // 0x256a98: 0x0  nop
    ctx->pc = 0x256a98u;
    // NOP
label_256a9c:
    // 0x256a9c: 0x0  nop
    ctx->pc = 0x256a9cu;
    // NOP
label_256aa0:
    // 0x256aa0: 0x3ed  .word       0x000003ED                   # daddu       $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256aa0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256aa4:
    // 0x256aa4: 0xa0d0  .word       0x0000A0D0                   # mfhi        $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256aa4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_256aa8:
    // 0x256aa8: 0x0  nop
    ctx->pc = 0x256aa8u;
    // NOP
label_256aac:
    // 0x256aac: 0x0  nop
    ctx->pc = 0x256aacu;
    // NOP
label_256ab0:
    // 0x256ab0: 0x402  srl         $zero, $zero, 16
    ctx->pc = 0x256ab0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 16));
label_256ab4:
    // 0x256ab4: 0x10320  .word       0x00010320                   # add         $zero, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_256ab8:
    // 0x256ab8: 0x0  nop
    ctx->pc = 0x256ab8u;
    // NOP
label_256abc:
    // 0x256abc: 0x0  nop
    ctx->pc = 0x256abcu;
    // NOP
label_256ac0:
    // 0x256ac0: 0x423  .word       0x00000423                   # negu        $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ac0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_256ac4:
    // 0x256ac4: 0x9d70  tge         $zero, $zero, 629
    ctx->pc = 0x256ac4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256ac8:
    // 0x256ac8: 0x0  nop
    ctx->pc = 0x256ac8u;
    // NOP
label_256acc:
    // 0x256acc: 0x0  nop
    ctx->pc = 0x256accu;
    // NOP
label_256ad0:
    // 0x256ad0: 0x437  .word       0x00000437                   # INVALID     $zero, $zero, 0x437 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ad0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x256AD0 raw=0x00000437");
 /* MITIGATED */
label_256ad4:
    // 0x256ad4: 0x7840  sll         $t7, $zero, 1
    ctx->pc = 0x256ad4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_256ad8:
    // 0x256ad8: 0x0  nop
    ctx->pc = 0x256ad8u;
    // NOP
label_256adc:
    // 0x256adc: 0x0  nop
    ctx->pc = 0x256adcu;
    // NOP
label_256ae0:
    // 0x256ae0: 0x447  .word       0x00000447                   # srav        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ae0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_256ae4:
    // 0x256ae4: 0x6910  .word       0x00006910                   # mfhi        $t5 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ae4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_256ae8:
    // 0x256ae8: 0x0  nop
    ctx->pc = 0x256ae8u;
    // NOP
label_256aec:
    // 0x256aec: 0x0  nop
    ctx->pc = 0x256aecu;
    // NOP
label_256af0:
    // 0x256af0: 0x455  .word       0x00000455                   # INVALID     $zero, $zero, 0x455 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256af0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x256AF0 raw=0x00000455");
 /* MITIGATED */
label_256af4:
    // 0x256af4: 0x6560  .word       0x00006560                   # add         $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256af4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_256af8:
    // 0x256af8: 0x0  nop
    ctx->pc = 0x256af8u;
    // NOP
label_256afc:
    // 0x256afc: 0x0  nop
    ctx->pc = 0x256afcu;
    // NOP
label_256b00:
    // 0x256b00: 0x462  .word       0x00000462                   # neg         $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b00u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_256b04:
    // 0x256b04: 0x40d0  .word       0x000040D0                   # mfhi        $t0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b04u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_256b08:
    // 0x256b08: 0x0  nop
    ctx->pc = 0x256b08u;
    // NOP
label_256b0c:
    // 0x256b0c: 0x0  nop
    ctx->pc = 0x256b0cu;
    // NOP
label_256b10:
    // 0x256b10: 0x46b  .word       0x0000046B                   # sltu        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b10u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_256b14:
    // 0x256b14: 0x7910  .word       0x00007910                   # mfhi        $t7 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b14u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_256b18:
    // 0x256b18: 0x0  nop
    ctx->pc = 0x256b18u;
    // NOP
label_256b1c:
    // 0x256b1c: 0x0  nop
    ctx->pc = 0x256b1cu;
    // NOP
label_256b20:
    // 0x256b20: 0x47b  dsra        $zero, $zero, 17
    ctx->pc = 0x256b20u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 17);
label_256b24:
    // 0x256b24: 0xf1b0  tge         $zero, $zero, 966
    ctx->pc = 0x256b24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256b28:
    // 0x256b28: 0x0  nop
    ctx->pc = 0x256b28u;
    // NOP
label_256b2c:
    // 0x256b2c: 0x0  nop
    ctx->pc = 0x256b2cu;
    // NOP
label_256b30:
    // 0x256b30: 0x49a  .word       0x0000049A                   # div         $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b30u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_256b34:
    // 0x256b34: 0x7e50  .word       0x00007E50                   # mfhi        $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b34u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_256b38:
    // 0x256b38: 0x0  nop
    ctx->pc = 0x256b38u;
    // NOP
label_256b3c:
    // 0x256b3c: 0x0  nop
    ctx->pc = 0x256b3cu;
    // NOP
label_256b40:
    // 0x256b40: 0x4aa  .word       0x000004AA                   # slt         $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b40u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_256b44:
    // 0x256b44: 0x72f0  tge         $zero, $zero, 459
    ctx->pc = 0x256b44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256b48:
    // 0x256b48: 0x0  nop
    ctx->pc = 0x256b48u;
    // NOP
label_256b4c:
    // 0x256b4c: 0x0  nop
    ctx->pc = 0x256b4cu;
    // NOP
label_256b50:
    // 0x256b50: 0x4b9  .word       0x000004B9                   # INVALID     $zero, $zero, 0x4B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b50u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x256B50 raw=0x000004B9");
 /* MITIGATED */
label_256b54:
    // 0x256b54: 0x7ee0  .word       0x00007EE0                   # add         $t7, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_256b58:
    // 0x256b58: 0x0  nop
    ctx->pc = 0x256b58u;
    // NOP
label_256b5c:
    // 0x256b5c: 0x0  nop
    ctx->pc = 0x256b5cu;
    // NOP
label_256b60:
    // 0x256b60: 0x4c9  .word       0x000004C9                   # jalr        $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
label_256b64:
    if (ctx->pc == 0x256B64u) {
        ctx->pc = 0x256B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B60u;
        // 0x256b64: 0xb210  .word       0x0000B210                   # mfhi        $s6 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 22, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x256B68u;
        goto label_256b68;
    }
    ctx->pc = 0x256B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x256B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256B60u;
        // 0x256b64: 0xb210  .word       0x0000B210                   # mfhi        $s6 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 22, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256B60u, 0x256B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256B68u;
label_256b68:
    // 0x256b68: 0x0  nop
    ctx->pc = 0x256b68u;
    // NOP
label_256b6c:
    // 0x256b6c: 0x0  nop
    ctx->pc = 0x256b6cu;
    // NOP
label_256b70:
    // 0x256b70: 0x4e0  .word       0x000004E0                   # add         $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_256b74:
    // 0x256b74: 0x4cf0  tge         $zero, $zero, 307
    ctx->pc = 0x256b74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256b78:
    // 0x256b78: 0x0  nop
    ctx->pc = 0x256b78u;
    // NOP
label_256b7c:
    // 0x256b7c: 0x0  nop
    ctx->pc = 0x256b7cu;
    // NOP
label_256b80:
    // 0x256b80: 0x4ea  .word       0x000004EA                   # slt         $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b80u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_256b84:
    // 0x256b84: 0x57f0  tge         $zero, $zero, 351
    ctx->pc = 0x256b84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256b88:
    // 0x256b88: 0x0  nop
    ctx->pc = 0x256b88u;
    // NOP
label_256b8c:
    // 0x256b8c: 0x0  nop
    ctx->pc = 0x256b8cu;
    // NOP
label_256b90:
    // 0x256b90: 0x4f5  .word       0x000004F5                   # INVALID     $zero, $zero, 0x4F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256b90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x256B90 raw=0x000004F5");
 /* MITIGATED */
label_256b94:
    // 0x256b94: 0xf540  sll         $fp, $zero, 21
    ctx->pc = 0x256b94u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_256b98:
    // 0x256b98: 0x0  nop
    ctx->pc = 0x256b98u;
    // NOP
label_256b9c:
    // 0x256b9c: 0x0  nop
    ctx->pc = 0x256b9cu;
    // NOP
label_256ba0:
    // 0x256ba0: 0x514  .word       0x00000514                   # dsllv       $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ba0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_256ba4:
    // 0x256ba4: 0xac20  .word       0x0000AC20                   # add         $s5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_256ba8:
    // 0x256ba8: 0x0  nop
    ctx->pc = 0x256ba8u;
    // NOP
label_256bac:
    // 0x256bac: 0x0  nop
    ctx->pc = 0x256bacu;
    // NOP
label_256bb0:
    // 0x256bb0: 0x52a  .word       0x0000052A                   # slt         $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256bb0u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_256bb4:
    // 0x256bb4: 0xa510  .word       0x0000A510                   # mfhi        $s4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256bb4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_256bb8:
    // 0x256bb8: 0x0  nop
    ctx->pc = 0x256bb8u;
    // NOP
label_256bbc:
    // 0x256bbc: 0x0  nop
    ctx->pc = 0x256bbcu;
    // NOP
label_256bc0:
    // 0x256bc0: 0x53f  dsra32      $zero, $zero, 20
    ctx->pc = 0x256bc0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 20));
label_256bc4:
    // 0x256bc4: 0x93f0  tge         $zero, $zero, 591
    ctx->pc = 0x256bc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256bc8:
    // 0x256bc8: 0x0  nop
    ctx->pc = 0x256bc8u;
    // NOP
label_256bcc:
    // 0x256bcc: 0x0  nop
    ctx->pc = 0x256bccu;
    // NOP
label_256bd0:
    // 0x256bd0: 0x552  .word       0x00000552                   # mflo        $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256bd0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_256bd4:
    // 0x256bd4: 0x5c90  .word       0x00005C90                   # mfhi        $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256bd4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_256bd8:
    // 0x256bd8: 0x0  nop
    ctx->pc = 0x256bd8u;
    // NOP
label_256bdc:
    // 0x256bdc: 0x0  nop
    ctx->pc = 0x256bdcu;
    // NOP
label_256be0:
    // 0x256be0: 0x55e  .word       0x0000055E                   # ddiv        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256be0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x256BE0 raw=0x0000055E");
 /* MITIGATED */
label_256be4:
    // 0x256be4: 0xa6b0  tge         $zero, $zero, 666
    ctx->pc = 0x256be4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256be8:
    // 0x256be8: 0x0  nop
    ctx->pc = 0x256be8u;
    // NOP
label_256bec:
    // 0x256bec: 0x0  nop
    ctx->pc = 0x256becu;
    // NOP
label_256bf0:
    // 0x256bf0: 0x573  tltu        $zero, $zero, 21
    ctx->pc = 0x256bf0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256bf4:
    // 0x256bf4: 0xd4b0  tge         $zero, $zero, 850
    ctx->pc = 0x256bf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256bf8:
    // 0x256bf8: 0x0  nop
    ctx->pc = 0x256bf8u;
    // NOP
label_256bfc:
    // 0x256bfc: 0x0  nop
    ctx->pc = 0x256bfcu;
    // NOP
label_256c00:
    // 0x256c00: 0x58e  .word       0x0000058E                   # INVALID     $zero, $zero, 0x58E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x256C00 raw=0x0000058E");
 /* MITIGATED */
label_256c04:
    // 0x256c04: 0xb6b0  tge         $zero, $zero, 730
    ctx->pc = 0x256c04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256c08:
    // 0x256c08: 0x0  nop
    ctx->pc = 0x256c08u;
    // NOP
label_256c0c:
    // 0x256c0c: 0x0  nop
    ctx->pc = 0x256c0cu;
    // NOP
label_256c10:
    // 0x256c10: 0x5a5  .word       0x000005A5                   # move        $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_256c14:
    // 0x256c14: 0x9bd0  .word       0x00009BD0                   # mfhi        $s3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c14u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_256c18:
    // 0x256c18: 0x0  nop
    ctx->pc = 0x256c18u;
    // NOP
label_256c1c:
    // 0x256c1c: 0x0  nop
    ctx->pc = 0x256c1cu;
    // NOP
label_256c20:
    // 0x256c20: 0x5b9  .word       0x000005B9                   # INVALID     $zero, $zero, 0x5B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x256C20 raw=0x000005B9");
 /* MITIGATED */
label_256c24:
    // 0x256c24: 0x4210  .word       0x00004210                   # mfhi        $t0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c24u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_256c28:
    // 0x256c28: 0x0  nop
    ctx->pc = 0x256c28u;
    // NOP
label_256c2c:
    // 0x256c2c: 0x0  nop
    ctx->pc = 0x256c2cu;
    // NOP
label_256c30:
    // 0x256c30: 0x5c2  srl         $zero, $zero, 23
    ctx->pc = 0x256c30u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 23));
label_256c34:
    // 0x256c34: 0x9ae0  .word       0x00009AE0                   # add         $s3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_256c38:
    // 0x256c38: 0x0  nop
    ctx->pc = 0x256c38u;
    // NOP
label_256c3c:
    // 0x256c3c: 0x0  nop
    ctx->pc = 0x256c3cu;
    // NOP
label_256c40:
    // 0x256c40: 0x5d6  .word       0x000005D6                   # dsrlv       $zero, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c40u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_256c44:
    // 0x256c44: 0x8a20  .word       0x00008A20                   # add         $s1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_256c48:
    // 0x256c48: 0x0  nop
    ctx->pc = 0x256c48u;
    // NOP
label_256c4c:
    // 0x256c4c: 0x0  nop
    ctx->pc = 0x256c4cu;
    // NOP
label_256c50:
    // 0x256c50: 0x5e8  .word       0x000005E8                   # mfsa        $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x256c50u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_256c54:
    // 0x256c54: 0x4aa0  .word       0x00004AA0                   # add         $t1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_256c58:
    // 0x256c58: 0x0  nop
    ctx->pc = 0x256c58u;
    // NOP
label_256c5c:
    // 0x256c5c: 0x0  nop
    ctx->pc = 0x256c5cu;
    // NOP
label_256c60:
    // 0x256c60: 0x5f2  tlt         $zero, $zero, 23
    ctx->pc = 0x256c60u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256c64:
    // 0x256c64: 0x5e30  tge         $zero, $zero, 376
    ctx->pc = 0x256c64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256c68:
    // 0x256c68: 0x0  nop
    ctx->pc = 0x256c68u;
    // NOP
label_256c6c:
    // 0x256c6c: 0x0  nop
    ctx->pc = 0x256c6cu;
    // NOP
label_256c70:
    // 0x256c70: 0x5fe  dsrl32      $zero, $zero, 23
    ctx->pc = 0x256c70u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 23));
label_256c74:
    // 0x256c74: 0x7040  sll         $t6, $zero, 1
    ctx->pc = 0x256c74u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_256c78:
    // 0x256c78: 0x0  nop
    ctx->pc = 0x256c78u;
    // NOP
label_256c7c:
    // 0x256c7c: 0x0  nop
    ctx->pc = 0x256c7cu;
    // NOP
label_256c80:
    // 0x256c80: 0x60d  break       0, 24
    ctx->pc = 0x256c80u;
    runtime->handleBreak(rdram, ctx);
label_256c84:
    // 0x256c84: 0x73b0  tge         $zero, $zero, 462
    ctx->pc = 0x256c84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256c88:
    // 0x256c88: 0x0  nop
    ctx->pc = 0x256c88u;
    // NOP
label_256c8c:
    // 0x256c8c: 0x0  nop
    ctx->pc = 0x256c8cu;
    // NOP
label_256c90:
    // 0x256c90: 0x61c  .word       0x0000061C                   # dmult       $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256c90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x256C90 raw=0x0000061C");
 /* MITIGATED */
label_256c94:
    // 0x256c94: 0x9700  sll         $s2, $zero, 28
    ctx->pc = 0x256c94u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_256c98:
    // 0x256c98: 0x0  nop
    ctx->pc = 0x256c98u;
    // NOP
label_256c9c:
    // 0x256c9c: 0x0  nop
    ctx->pc = 0x256c9cu;
    // NOP
label_256ca0:
    // 0x256ca0: 0x62f  .word       0x0000062F                   # dsubu       $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ca0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_256ca4:
    // 0x256ca4: 0x7770  tge         $zero, $zero, 477
    ctx->pc = 0x256ca4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256ca8:
    // 0x256ca8: 0x0  nop
    ctx->pc = 0x256ca8u;
    // NOP
label_256cac:
    // 0x256cac: 0x0  nop
    ctx->pc = 0x256cacu;
    // NOP
label_256cb0:
    // 0x256cb0: 0x63e  dsrl32      $zero, $zero, 24
    ctx->pc = 0x256cb0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 24));
label_256cb4:
    // 0x256cb4: 0x7220  .word       0x00007220                   # add         $t6, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256cb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_256cb8:
    // 0x256cb8: 0x0  nop
    ctx->pc = 0x256cb8u;
    // NOP
label_256cbc:
    // 0x256cbc: 0x0  nop
    ctx->pc = 0x256cbcu;
    // NOP
label_256cc0:
    // 0x256cc0: 0x64d  break       0, 25
    ctx->pc = 0x256cc0u;
    runtime->handleBreak(rdram, ctx);
label_256cc4:
    // 0x256cc4: 0x65e0  .word       0x000065E0                   # add         $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256cc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_256cc8:
    // 0x256cc8: 0x0  nop
    ctx->pc = 0x256cc8u;
    // NOP
label_256ccc:
    // 0x256ccc: 0x0  nop
    ctx->pc = 0x256cccu;
    // NOP
label_256cd0:
    // 0x256cd0: 0x65a  .word       0x0000065A                   # div         $zero, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256cd0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_256cd4:
    // 0x256cd4: 0x59b0  tge         $zero, $zero, 358
    ctx->pc = 0x256cd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256cd8:
    // 0x256cd8: 0x0  nop
    ctx->pc = 0x256cd8u;
    // NOP
label_256cdc:
    // 0x256cdc: 0x0  nop
    ctx->pc = 0x256cdcu;
    // NOP
label_256ce0:
    // 0x256ce0: 0x666  .word       0x00000666                   # xor         $zero, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256ce0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_256ce4:
    // 0x256ce4: 0x14d70  tge         $zero, $at, 309
    ctx->pc = 0x256ce4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_256ce8:
    // 0x256ce8: 0x0  nop
    ctx->pc = 0x256ce8u;
    // NOP
label_256cec:
    // 0x256cec: 0x0  nop
    ctx->pc = 0x256cecu;
    // NOP
label_256cf0:
    // 0x256cf0: 0x690  .word       0x00000690                   # mfhi        $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256cf0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_256cf4:
    // 0x256cf4: 0x84a0  .word       0x000084A0                   # add         $s0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256cf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_256cf8:
    // 0x256cf8: 0x0  nop
    ctx->pc = 0x256cf8u;
    // NOP
label_256cfc:
    // 0x256cfc: 0x0  nop
    ctx->pc = 0x256cfcu;
    // NOP
label_256d00:
    // 0x256d00: 0x6a1  .word       0x000006A1                   # addu        $zero, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d00u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_256d04:
    // 0x256d04: 0x7c50  .word       0x00007C50                   # mfhi        $t7 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d04u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_256d08:
    // 0x256d08: 0x0  nop
    ctx->pc = 0x256d08u;
    // NOP
label_256d0c:
    // 0x256d0c: 0x0  nop
    ctx->pc = 0x256d0cu;
    // NOP
label_256d10:
    // 0x256d10: 0x6b1  tgeu        $zero, $zero, 26
    ctx->pc = 0x256d10u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256d14:
    // 0x256d14: 0x6c00  sll         $t5, $zero, 16
    ctx->pc = 0x256d14u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_256d18:
    // 0x256d18: 0x0  nop
    ctx->pc = 0x256d18u;
    // NOP
label_256d1c:
    // 0x256d1c: 0x0  nop
    ctx->pc = 0x256d1cu;
    // NOP
label_256d20:
    // 0x256d20: 0x6bf  dsra32      $zero, $zero, 26
    ctx->pc = 0x256d20u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 26));
label_256d24:
    // 0x256d24: 0x7010  mfhi        $t6
    ctx->pc = 0x256d24u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_256d28:
    // 0x256d28: 0x0  nop
    ctx->pc = 0x256d28u;
    // NOP
label_256d2c:
    // 0x256d2c: 0x0  nop
    ctx->pc = 0x256d2cu;
    // NOP
label_256d30:
    // 0x256d30: 0x6ce  .word       0x000006CE                   # INVALID     $zero, $zero, 0x6CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d30u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x256D30 raw=0x000006CE");
 /* MITIGATED */
label_256d34:
    // 0x256d34: 0x6e10  .word       0x00006E10                   # mfhi        $t5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d34u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_256d38:
    // 0x256d38: 0x0  nop
    ctx->pc = 0x256d38u;
    // NOP
label_256d3c:
    // 0x256d3c: 0x0  nop
    ctx->pc = 0x256d3cu;
    // NOP
label_256d40:
    // 0x256d40: 0x6dc  .word       0x000006DC                   # dmult       $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d40u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x256D40 raw=0x000006DC");
 /* MITIGATED */
label_256d44:
    // 0x256d44: 0x6370  tge         $zero, $zero, 397
    ctx->pc = 0x256d44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256d48:
    // 0x256d48: 0x0  nop
    ctx->pc = 0x256d48u;
    // NOP
label_256d4c:
    // 0x256d4c: 0x0  nop
    ctx->pc = 0x256d4cu;
    // NOP
label_256d50:
    // 0x256d50: 0x6e9  .word       0x000006E9                   # mtsa        $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x256d50u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_256d54:
    // 0x256d54: 0x10070  tge         $zero, $at, 1
    ctx->pc = 0x256d54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_256d58:
    // 0x256d58: 0x0  nop
    ctx->pc = 0x256d58u;
    // NOP
label_256d5c:
    // 0x256d5c: 0x0  nop
    ctx->pc = 0x256d5cu;
    // NOP
label_256d60:
    // 0x256d60: 0x70a  .word       0x0000070A                   # movz        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d60u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_256d64:
    // 0x256d64: 0x7900  sll         $t7, $zero, 4
    ctx->pc = 0x256d64u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_256d68:
    // 0x256d68: 0x0  nop
    ctx->pc = 0x256d68u;
    // NOP
label_256d6c:
    // 0x256d6c: 0x0  nop
    ctx->pc = 0x256d6cu;
    // NOP
label_256d70:
    // 0x256d70: 0x71a  .word       0x0000071A                   # div         $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d70u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_256d74:
    // 0x256d74: 0x8370  tge         $zero, $zero, 525
    ctx->pc = 0x256d74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256d78:
    // 0x256d78: 0x0  nop
    ctx->pc = 0x256d78u;
    // NOP
label_256d7c:
    // 0x256d7c: 0x0  nop
    ctx->pc = 0x256d7cu;
    // NOP
label_256d80:
    // 0x256d80: 0x72b  .word       0x0000072B                   # sltu        $zero, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d80u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_256d84:
    // 0x256d84: 0x84e0  .word       0x000084E0                   # add         $s0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_256d88:
    // 0x256d88: 0x0  nop
    ctx->pc = 0x256d88u;
    // NOP
label_256d8c:
    // 0x256d8c: 0x0  nop
    ctx->pc = 0x256d8cu;
    // NOP
label_256d90:
    // 0x256d90: 0x73c  dsll32      $zero, $zero, 28
    ctx->pc = 0x256d90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 28));
label_256d94:
    // 0x256d94: 0x7c50  .word       0x00007C50                   # mfhi        $t7 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256d94u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_256d98:
    // 0x256d98: 0x0  nop
    ctx->pc = 0x256d98u;
    // NOP
label_256d9c:
    // 0x256d9c: 0x0  nop
    ctx->pc = 0x256d9cu;
    // NOP
label_256da0:
    // 0x256da0: 0x74c  syscall     29
    ctx->pc = 0x256da0u;
    ctx->pc = 0x256DA4u;
runtime->handleSyscall(rdram, ctx, 0x1Du);
label_256da4:
    // 0x256da4: 0x7e50  .word       0x00007E50                   # mfhi        $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256da4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_256da8:
    // 0x256da8: 0x0  nop
    ctx->pc = 0x256da8u;
    // NOP
label_256dac:
    // 0x256dac: 0x0  nop
    ctx->pc = 0x256dacu;
    // NOP
label_256db0:
    // 0x256db0: 0x75c  .word       0x0000075C                   # dmult       $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256db0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x256DB0 raw=0x0000075C");
 /* MITIGATED */
label_256db4:
    // 0x256db4: 0x8680  sll         $s0, $zero, 26
    ctx->pc = 0x256db4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_256db8:
    // 0x256db8: 0x0  nop
    ctx->pc = 0x256db8u;
    // NOP
label_256dbc:
    // 0x256dbc: 0x0  nop
    ctx->pc = 0x256dbcu;
    // NOP
label_256dc0:
    // 0x256dc0: 0x76d  .word       0x0000076D                   # daddu       $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256dc0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256dc4:
    // 0x256dc4: 0xebb0  tge         $zero, $zero, 942
    ctx->pc = 0x256dc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256dc8:
    // 0x256dc8: 0x0  nop
    ctx->pc = 0x256dc8u;
    // NOP
label_256dcc:
    // 0x256dcc: 0x0  nop
    ctx->pc = 0x256dccu;
    // NOP
label_256dd0:
    // 0x256dd0: 0x78b  .word       0x0000078B                   # movn        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256dd0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_256dd4:
    // 0x256dd4: 0xa460  .word       0x0000A460                   # add         $s4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_256dd8:
    // 0x256dd8: 0x0  nop
    ctx->pc = 0x256dd8u;
    // NOP
label_256ddc:
    // 0x256ddc: 0x0  nop
    ctx->pc = 0x256ddcu;
    // NOP
label_256de0:
    // 0x256de0: 0x7a0  .word       0x000007A0                   # add         $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256de0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_256de4:
    // 0x256de4: 0x9030  tge         $zero, $zero, 576
    ctx->pc = 0x256de4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256de8:
    // 0x256de8: 0x0  nop
    ctx->pc = 0x256de8u;
    // NOP
label_256dec:
    // 0x256dec: 0x0  nop
    ctx->pc = 0x256decu;
    // NOP
label_256df0:
    // 0x256df0: 0x7b3  tltu        $zero, $zero, 30
    ctx->pc = 0x256df0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256df4:
    // 0x256df4: 0x6e30  tge         $zero, $zero, 440
    ctx->pc = 0x256df4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_256df8:
    // 0x256df8: 0x0  nop
    ctx->pc = 0x256df8u;
    // NOP
label_256dfc:
    // 0x256dfc: 0x0  nop
    ctx->pc = 0x256dfcu;
    // NOP
label_256e00:
    // 0x256e00: 0x7c1  .word       0x000007C1                   # INVALID     $zero, $zero, 0x7C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x256E00 raw=0x000007C1");
 /* MITIGATED */
label_256e04:
    // 0x256e04: 0x5ee0  .word       0x00005EE0                   # add         $t3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_256e08:
    // 0x256e08: 0x0  nop
    ctx->pc = 0x256e08u;
    // NOP
label_256e0c:
    // 0x256e0c: 0x0  nop
    ctx->pc = 0x256e0cu;
    // NOP
label_256e10:
    // 0x256e10: 0x7cd  break       0, 31
    ctx->pc = 0x256e10u;
    runtime->handleBreak(rdram, ctx);
label_256e14:
    // 0x256e14: 0x5c10  .word       0x00005C10                   # mfhi        $t3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e14u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_256e18:
    // 0x256e18: 0x0  nop
    ctx->pc = 0x256e18u;
    // NOP
label_256e1c:
    // 0x256e1c: 0x0  nop
    ctx->pc = 0x256e1cu;
    // NOP
label_256e20:
    // 0x256e20: 0x7d9  .word       0x000007D9                   # multu       $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x256e20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_256e24:
    // 0x256e24: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x256e24u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_256e28:
    // 0x256e28: 0x0  nop
    ctx->pc = 0x256e28u;
    // NOP
label_256e2c:
    // 0x256e2c: 0x0  nop
    ctx->pc = 0x256e2cu;
    // NOP
    ctx->pc = 0x256e30u;
    return;
}

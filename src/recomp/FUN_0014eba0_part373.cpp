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


void FUN_0014eba0_part373(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2045e0u: goto label_2045e0;
        case 0x2045e4u: goto label_2045e4;
        case 0x2045e8u: goto label_2045e8;
        case 0x2045ecu: goto label_2045ec;
        case 0x2045f0u: goto label_2045f0;
        case 0x2045f4u: goto label_2045f4;
        case 0x2045f8u: goto label_2045f8;
        case 0x2045fcu: goto label_2045fc;
        case 0x204600u: goto label_204600;
        case 0x204604u: goto label_204604;
        case 0x204608u: goto label_204608;
        case 0x20460cu: goto label_20460c;
        case 0x204610u: goto label_204610;
        case 0x204614u: goto label_204614;
        case 0x204618u: goto label_204618;
        case 0x20461cu: goto label_20461c;
        case 0x204620u: goto label_204620;
        case 0x204624u: goto label_204624;
        case 0x204628u: goto label_204628;
        case 0x20462cu: goto label_20462c;
        case 0x204630u: goto label_204630;
        case 0x204634u: goto label_204634;
        case 0x204638u: goto label_204638;
        case 0x20463cu: goto label_20463c;
        case 0x204640u: goto label_204640;
        case 0x204644u: goto label_204644;
        case 0x204648u: goto label_204648;
        case 0x20464cu: goto label_20464c;
        case 0x204650u: goto label_204650;
        case 0x204654u: goto label_204654;
        case 0x204658u: goto label_204658;
        case 0x20465cu: goto label_20465c;
        case 0x204660u: goto label_204660;
        case 0x204664u: goto label_204664;
        case 0x204668u: goto label_204668;
        case 0x20466cu: goto label_20466c;
        case 0x204670u: goto label_204670;
        case 0x204674u: goto label_204674;
        case 0x204678u: goto label_204678;
        case 0x20467cu: goto label_20467c;
        case 0x204680u: goto label_204680;
        case 0x204684u: goto label_204684;
        case 0x204688u: goto label_204688;
        case 0x20468cu: goto label_20468c;
        case 0x204690u: goto label_204690;
        case 0x204694u: goto label_204694;
        case 0x204698u: goto label_204698;
        case 0x20469cu: goto label_20469c;
        case 0x2046a0u: goto label_2046a0;
        case 0x2046a4u: goto label_2046a4;
        case 0x2046a8u: goto label_2046a8;
        case 0x2046acu: goto label_2046ac;
        case 0x2046b0u: goto label_2046b0;
        case 0x2046b4u: goto label_2046b4;
        case 0x2046b8u: goto label_2046b8;
        case 0x2046bcu: goto label_2046bc;
        case 0x2046c0u: goto label_2046c0;
        case 0x2046c4u: goto label_2046c4;
        case 0x2046c8u: goto label_2046c8;
        case 0x2046ccu: goto label_2046cc;
        case 0x2046d0u: goto label_2046d0;
        case 0x2046d4u: goto label_2046d4;
        case 0x2046d8u: goto label_2046d8;
        case 0x2046dcu: goto label_2046dc;
        case 0x2046e0u: goto label_2046e0;
        case 0x2046e4u: goto label_2046e4;
        case 0x2046e8u: goto label_2046e8;
        case 0x2046ecu: goto label_2046ec;
        case 0x2046f0u: goto label_2046f0;
        case 0x2046f4u: goto label_2046f4;
        case 0x2046f8u: goto label_2046f8;
        case 0x2046fcu: goto label_2046fc;
        case 0x204700u: goto label_204700;
        case 0x204704u: goto label_204704;
        case 0x204708u: goto label_204708;
        case 0x20470cu: goto label_20470c;
        case 0x204710u: goto label_204710;
        case 0x204714u: goto label_204714;
        case 0x204718u: goto label_204718;
        case 0x20471cu: goto label_20471c;
        case 0x204720u: goto label_204720;
        case 0x204724u: goto label_204724;
        case 0x204728u: goto label_204728;
        case 0x20472cu: goto label_20472c;
        case 0x204730u: goto label_204730;
        case 0x204734u: goto label_204734;
        case 0x204738u: goto label_204738;
        case 0x20473cu: goto label_20473c;
        case 0x204740u: goto label_204740;
        case 0x204744u: goto label_204744;
        case 0x204748u: goto label_204748;
        case 0x20474cu: goto label_20474c;
        case 0x204750u: goto label_204750;
        case 0x204754u: goto label_204754;
        case 0x204758u: goto label_204758;
        case 0x20475cu: goto label_20475c;
        case 0x204760u: goto label_204760;
        case 0x204764u: goto label_204764;
        case 0x204768u: goto label_204768;
        case 0x20476cu: goto label_20476c;
        case 0x204770u: goto label_204770;
        case 0x204774u: goto label_204774;
        case 0x204778u: goto label_204778;
        case 0x20477cu: goto label_20477c;
        case 0x204780u: goto label_204780;
        case 0x204784u: goto label_204784;
        case 0x204788u: goto label_204788;
        case 0x20478cu: goto label_20478c;
        case 0x204790u: goto label_204790;
        case 0x204794u: goto label_204794;
        case 0x204798u: goto label_204798;
        case 0x20479cu: goto label_20479c;
        case 0x2047a0u: goto label_2047a0;
        case 0x2047a4u: goto label_2047a4;
        case 0x2047a8u: goto label_2047a8;
        case 0x2047acu: goto label_2047ac;
        case 0x2047b0u: goto label_2047b0;
        case 0x2047b4u: goto label_2047b4;
        case 0x2047b8u: goto label_2047b8;
        case 0x2047bcu: goto label_2047bc;
        case 0x2047c0u: goto label_2047c0;
        case 0x2047c4u: goto label_2047c4;
        case 0x2047c8u: goto label_2047c8;
        case 0x2047ccu: goto label_2047cc;
        case 0x2047d0u: goto label_2047d0;
        case 0x2047d4u: goto label_2047d4;
        case 0x2047d8u: goto label_2047d8;
        case 0x2047dcu: goto label_2047dc;
        case 0x2047e0u: goto label_2047e0;
        case 0x2047e4u: goto label_2047e4;
        case 0x2047e8u: goto label_2047e8;
        case 0x2047ecu: goto label_2047ec;
        case 0x2047f0u: goto label_2047f0;
        case 0x2047f4u: goto label_2047f4;
        case 0x2047f8u: goto label_2047f8;
        case 0x2047fcu: goto label_2047fc;
        case 0x204800u: goto label_204800;
        case 0x204804u: goto label_204804;
        case 0x204808u: goto label_204808;
        case 0x20480cu: goto label_20480c;
        case 0x204810u: goto label_204810;
        case 0x204814u: goto label_204814;
        case 0x204818u: goto label_204818;
        case 0x20481cu: goto label_20481c;
        case 0x204820u: goto label_204820;
        case 0x204824u: goto label_204824;
        case 0x204828u: goto label_204828;
        case 0x20482cu: goto label_20482c;
        case 0x204830u: goto label_204830;
        case 0x204834u: goto label_204834;
        case 0x204838u: goto label_204838;
        case 0x20483cu: goto label_20483c;
        case 0x204840u: goto label_204840;
        case 0x204844u: goto label_204844;
        case 0x204848u: goto label_204848;
        case 0x20484cu: goto label_20484c;
        case 0x204850u: goto label_204850;
        case 0x204854u: goto label_204854;
        case 0x204858u: goto label_204858;
        case 0x20485cu: goto label_20485c;
        case 0x204860u: goto label_204860;
        case 0x204864u: goto label_204864;
        case 0x204868u: goto label_204868;
        case 0x20486cu: goto label_20486c;
        case 0x204870u: goto label_204870;
        case 0x204874u: goto label_204874;
        case 0x204878u: goto label_204878;
        case 0x20487cu: goto label_20487c;
        case 0x204880u: goto label_204880;
        case 0x204884u: goto label_204884;
        case 0x204888u: goto label_204888;
        case 0x20488cu: goto label_20488c;
        case 0x204890u: goto label_204890;
        case 0x204894u: goto label_204894;
        case 0x204898u: goto label_204898;
        case 0x20489cu: goto label_20489c;
        case 0x2048a0u: goto label_2048a0;
        case 0x2048a4u: goto label_2048a4;
        case 0x2048a8u: goto label_2048a8;
        case 0x2048acu: goto label_2048ac;
        case 0x2048b0u: goto label_2048b0;
        case 0x2048b4u: goto label_2048b4;
        case 0x2048b8u: goto label_2048b8;
        case 0x2048bcu: goto label_2048bc;
        case 0x2048c0u: goto label_2048c0;
        case 0x2048c4u: goto label_2048c4;
        case 0x2048c8u: goto label_2048c8;
        case 0x2048ccu: goto label_2048cc;
        case 0x2048d0u: goto label_2048d0;
        case 0x2048d4u: goto label_2048d4;
        case 0x2048d8u: goto label_2048d8;
        case 0x2048dcu: goto label_2048dc;
        case 0x2048e0u: goto label_2048e0;
        case 0x2048e4u: goto label_2048e4;
        case 0x2048e8u: goto label_2048e8;
        case 0x2048ecu: goto label_2048ec;
        case 0x2048f0u: goto label_2048f0;
        case 0x2048f4u: goto label_2048f4;
        case 0x2048f8u: goto label_2048f8;
        case 0x2048fcu: goto label_2048fc;
        case 0x204900u: goto label_204900;
        case 0x204904u: goto label_204904;
        case 0x204908u: goto label_204908;
        case 0x20490cu: goto label_20490c;
        case 0x204910u: goto label_204910;
        case 0x204914u: goto label_204914;
        case 0x204918u: goto label_204918;
        case 0x20491cu: goto label_20491c;
        case 0x204920u: goto label_204920;
        case 0x204924u: goto label_204924;
        case 0x204928u: goto label_204928;
        case 0x20492cu: goto label_20492c;
        case 0x204930u: goto label_204930;
        case 0x204934u: goto label_204934;
        case 0x204938u: goto label_204938;
        case 0x20493cu: goto label_20493c;
        case 0x204940u: goto label_204940;
        case 0x204944u: goto label_204944;
        case 0x204948u: goto label_204948;
        case 0x20494cu: goto label_20494c;
        case 0x204950u: goto label_204950;
        case 0x204954u: goto label_204954;
        case 0x204958u: goto label_204958;
        case 0x20495cu: goto label_20495c;
        case 0x204960u: goto label_204960;
        case 0x204964u: goto label_204964;
        case 0x204968u: goto label_204968;
        case 0x20496cu: goto label_20496c;
        case 0x204970u: goto label_204970;
        case 0x204974u: goto label_204974;
        case 0x204978u: goto label_204978;
        case 0x20497cu: goto label_20497c;
        case 0x204980u: goto label_204980;
        case 0x204984u: goto label_204984;
        case 0x204988u: goto label_204988;
        case 0x20498cu: goto label_20498c;
        case 0x204990u: goto label_204990;
        case 0x204994u: goto label_204994;
        case 0x204998u: goto label_204998;
        case 0x20499cu: goto label_20499c;
        case 0x2049a0u: goto label_2049a0;
        case 0x2049a4u: goto label_2049a4;
        case 0x2049a8u: goto label_2049a8;
        case 0x2049acu: goto label_2049ac;
        case 0x2049b0u: goto label_2049b0;
        case 0x2049b4u: goto label_2049b4;
        case 0x2049b8u: goto label_2049b8;
        case 0x2049bcu: goto label_2049bc;
        case 0x2049c0u: goto label_2049c0;
        case 0x2049c4u: goto label_2049c4;
        case 0x2049c8u: goto label_2049c8;
        case 0x2049ccu: goto label_2049cc;
        case 0x2049d0u: goto label_2049d0;
        case 0x2049d4u: goto label_2049d4;
        case 0x2049d8u: goto label_2049d8;
        case 0x2049dcu: goto label_2049dc;
        case 0x2049e0u: goto label_2049e0;
        case 0x2049e4u: goto label_2049e4;
        case 0x2049e8u: goto label_2049e8;
        case 0x2049ecu: goto label_2049ec;
        case 0x2049f0u: goto label_2049f0;
        case 0x2049f4u: goto label_2049f4;
        case 0x2049f8u: goto label_2049f8;
        case 0x2049fcu: goto label_2049fc;
        case 0x204a00u: goto label_204a00;
        case 0x204a04u: goto label_204a04;
        case 0x204a08u: goto label_204a08;
        case 0x204a0cu: goto label_204a0c;
        case 0x204a10u: goto label_204a10;
        case 0x204a14u: goto label_204a14;
        case 0x204a18u: goto label_204a18;
        case 0x204a1cu: goto label_204a1c;
        case 0x204a20u: goto label_204a20;
        case 0x204a24u: goto label_204a24;
        case 0x204a28u: goto label_204a28;
        case 0x204a2cu: goto label_204a2c;
        case 0x204a30u: goto label_204a30;
        case 0x204a34u: goto label_204a34;
        case 0x204a38u: goto label_204a38;
        case 0x204a3cu: goto label_204a3c;
        case 0x204a40u: goto label_204a40;
        case 0x204a44u: goto label_204a44;
        case 0x204a48u: goto label_204a48;
        case 0x204a4cu: goto label_204a4c;
        case 0x204a50u: goto label_204a50;
        case 0x204a54u: goto label_204a54;
        case 0x204a58u: goto label_204a58;
        case 0x204a5cu: goto label_204a5c;
        case 0x204a60u: goto label_204a60;
        case 0x204a64u: goto label_204a64;
        case 0x204a68u: goto label_204a68;
        case 0x204a6cu: goto label_204a6c;
        case 0x204a70u: goto label_204a70;
        case 0x204a74u: goto label_204a74;
        case 0x204a78u: goto label_204a78;
        case 0x204a7cu: goto label_204a7c;
        case 0x204a80u: goto label_204a80;
        case 0x204a84u: goto label_204a84;
        case 0x204a88u: goto label_204a88;
        case 0x204a8cu: goto label_204a8c;
        case 0x204a90u: goto label_204a90;
        case 0x204a94u: goto label_204a94;
        case 0x204a98u: goto label_204a98;
        case 0x204a9cu: goto label_204a9c;
        case 0x204aa0u: goto label_204aa0;
        case 0x204aa4u: goto label_204aa4;
        case 0x204aa8u: goto label_204aa8;
        case 0x204aacu: goto label_204aac;
        case 0x204ab0u: goto label_204ab0;
        case 0x204ab4u: goto label_204ab4;
        case 0x204ab8u: goto label_204ab8;
        case 0x204abcu: goto label_204abc;
        case 0x204ac0u: goto label_204ac0;
        case 0x204ac4u: goto label_204ac4;
        case 0x204ac8u: goto label_204ac8;
        case 0x204accu: goto label_204acc;
        case 0x204ad0u: goto label_204ad0;
        case 0x204ad4u: goto label_204ad4;
        case 0x204ad8u: goto label_204ad8;
        case 0x204adcu: goto label_204adc;
        case 0x204ae0u: goto label_204ae0;
        case 0x204ae4u: goto label_204ae4;
        case 0x204ae8u: goto label_204ae8;
        case 0x204aecu: goto label_204aec;
        case 0x204af0u: goto label_204af0;
        case 0x204af4u: goto label_204af4;
        case 0x204af8u: goto label_204af8;
        case 0x204afcu: goto label_204afc;
        case 0x204b00u: goto label_204b00;
        case 0x204b04u: goto label_204b04;
        case 0x204b08u: goto label_204b08;
        case 0x204b0cu: goto label_204b0c;
        case 0x204b10u: goto label_204b10;
        case 0x204b14u: goto label_204b14;
        case 0x204b18u: goto label_204b18;
        case 0x204b1cu: goto label_204b1c;
        case 0x204b20u: goto label_204b20;
        case 0x204b24u: goto label_204b24;
        case 0x204b28u: goto label_204b28;
        case 0x204b2cu: goto label_204b2c;
        case 0x204b30u: goto label_204b30;
        case 0x204b34u: goto label_204b34;
        case 0x204b38u: goto label_204b38;
        case 0x204b3cu: goto label_204b3c;
        case 0x204b40u: goto label_204b40;
        case 0x204b44u: goto label_204b44;
        case 0x204b48u: goto label_204b48;
        case 0x204b4cu: goto label_204b4c;
        case 0x204b50u: goto label_204b50;
        case 0x204b54u: goto label_204b54;
        case 0x204b58u: goto label_204b58;
        case 0x204b5cu: goto label_204b5c;
        case 0x204b60u: goto label_204b60;
        case 0x204b64u: goto label_204b64;
        case 0x204b68u: goto label_204b68;
        case 0x204b6cu: goto label_204b6c;
        case 0x204b70u: goto label_204b70;
        case 0x204b74u: goto label_204b74;
        case 0x204b78u: goto label_204b78;
        case 0x204b7cu: goto label_204b7c;
        case 0x204b80u: goto label_204b80;
        case 0x204b84u: goto label_204b84;
        case 0x204b88u: goto label_204b88;
        case 0x204b8cu: goto label_204b8c;
        case 0x204b90u: goto label_204b90;
        case 0x204b94u: goto label_204b94;
        case 0x204b98u: goto label_204b98;
        case 0x204b9cu: goto label_204b9c;
        case 0x204ba0u: goto label_204ba0;
        case 0x204ba4u: goto label_204ba4;
        case 0x204ba8u: goto label_204ba8;
        case 0x204bacu: goto label_204bac;
        case 0x204bb0u: goto label_204bb0;
        case 0x204bb4u: goto label_204bb4;
        case 0x204bb8u: goto label_204bb8;
        case 0x204bbcu: goto label_204bbc;
        case 0x204bc0u: goto label_204bc0;
        case 0x204bc4u: goto label_204bc4;
        case 0x204bc8u: goto label_204bc8;
        case 0x204bccu: goto label_204bcc;
        case 0x204bd0u: goto label_204bd0;
        case 0x204bd4u: goto label_204bd4;
        case 0x204bd8u: goto label_204bd8;
        case 0x204bdcu: goto label_204bdc;
        case 0x204be0u: goto label_204be0;
        case 0x204be4u: goto label_204be4;
        case 0x204be8u: goto label_204be8;
        case 0x204becu: goto label_204bec;
        case 0x204bf0u: goto label_204bf0;
        case 0x204bf4u: goto label_204bf4;
        case 0x204bf8u: goto label_204bf8;
        case 0x204bfcu: goto label_204bfc;
        case 0x204c00u: goto label_204c00;
        case 0x204c04u: goto label_204c04;
        case 0x204c08u: goto label_204c08;
        case 0x204c0cu: goto label_204c0c;
        case 0x204c10u: goto label_204c10;
        case 0x204c14u: goto label_204c14;
        case 0x204c18u: goto label_204c18;
        case 0x204c1cu: goto label_204c1c;
        case 0x204c20u: goto label_204c20;
        case 0x204c24u: goto label_204c24;
        case 0x204c28u: goto label_204c28;
        case 0x204c2cu: goto label_204c2c;
        case 0x204c30u: goto label_204c30;
        case 0x204c34u: goto label_204c34;
        case 0x204c38u: goto label_204c38;
        case 0x204c3cu: goto label_204c3c;
        case 0x204c40u: goto label_204c40;
        case 0x204c44u: goto label_204c44;
        case 0x204c48u: goto label_204c48;
        case 0x204c4cu: goto label_204c4c;
        case 0x204c50u: goto label_204c50;
        case 0x204c54u: goto label_204c54;
        case 0x204c58u: goto label_204c58;
        case 0x204c5cu: goto label_204c5c;
        case 0x204c60u: goto label_204c60;
        case 0x204c64u: goto label_204c64;
        case 0x204c68u: goto label_204c68;
        case 0x204c6cu: goto label_204c6c;
        case 0x204c70u: goto label_204c70;
        case 0x204c74u: goto label_204c74;
        case 0x204c78u: goto label_204c78;
        case 0x204c7cu: goto label_204c7c;
        case 0x204c80u: goto label_204c80;
        case 0x204c84u: goto label_204c84;
        case 0x204c88u: goto label_204c88;
        case 0x204c8cu: goto label_204c8c;
        case 0x204c90u: goto label_204c90;
        case 0x204c94u: goto label_204c94;
        case 0x204c98u: goto label_204c98;
        case 0x204c9cu: goto label_204c9c;
        case 0x204ca0u: goto label_204ca0;
        case 0x204ca4u: goto label_204ca4;
        case 0x204ca8u: goto label_204ca8;
        case 0x204cacu: goto label_204cac;
        case 0x204cb0u: goto label_204cb0;
        case 0x204cb4u: goto label_204cb4;
        case 0x204cb8u: goto label_204cb8;
        case 0x204cbcu: goto label_204cbc;
        case 0x204cc0u: goto label_204cc0;
        case 0x204cc4u: goto label_204cc4;
        case 0x204cc8u: goto label_204cc8;
        case 0x204cccu: goto label_204ccc;
        case 0x204cd0u: goto label_204cd0;
        case 0x204cd4u: goto label_204cd4;
        case 0x204cd8u: goto label_204cd8;
        case 0x204cdcu: goto label_204cdc;
        case 0x204ce0u: goto label_204ce0;
        case 0x204ce4u: goto label_204ce4;
        case 0x204ce8u: goto label_204ce8;
        case 0x204cecu: goto label_204cec;
        case 0x204cf0u: goto label_204cf0;
        case 0x204cf4u: goto label_204cf4;
        case 0x204cf8u: goto label_204cf8;
        case 0x204cfcu: goto label_204cfc;
        case 0x204d00u: goto label_204d00;
        case 0x204d04u: goto label_204d04;
        case 0x204d08u: goto label_204d08;
        case 0x204d0cu: goto label_204d0c;
        case 0x204d10u: goto label_204d10;
        case 0x204d14u: goto label_204d14;
        case 0x204d18u: goto label_204d18;
        case 0x204d1cu: goto label_204d1c;
        case 0x204d20u: goto label_204d20;
        case 0x204d24u: goto label_204d24;
        case 0x204d28u: goto label_204d28;
        case 0x204d2cu: goto label_204d2c;
        case 0x204d30u: goto label_204d30;
        case 0x204d34u: goto label_204d34;
        case 0x204d38u: goto label_204d38;
        case 0x204d3cu: goto label_204d3c;
        case 0x204d40u: goto label_204d40;
        case 0x204d44u: goto label_204d44;
        case 0x204d48u: goto label_204d48;
        case 0x204d4cu: goto label_204d4c;
        case 0x204d50u: goto label_204d50;
        case 0x204d54u: goto label_204d54;
        case 0x204d58u: goto label_204d58;
        case 0x204d5cu: goto label_204d5c;
        case 0x204d60u: goto label_204d60;
        case 0x204d64u: goto label_204d64;
        case 0x204d68u: goto label_204d68;
        case 0x204d6cu: goto label_204d6c;
        case 0x204d70u: goto label_204d70;
        case 0x204d74u: goto label_204d74;
        case 0x204d78u: goto label_204d78;
        case 0x204d7cu: goto label_204d7c;
        case 0x204d80u: goto label_204d80;
        case 0x204d84u: goto label_204d84;
        case 0x204d88u: goto label_204d88;
        case 0x204d8cu: goto label_204d8c;
        case 0x204d90u: goto label_204d90;
        case 0x204d94u: goto label_204d94;
        case 0x204d98u: goto label_204d98;
        case 0x204d9cu: goto label_204d9c;
        case 0x204da0u: goto label_204da0;
        case 0x204da4u: goto label_204da4;
        case 0x204da8u: goto label_204da8;
        case 0x204dacu: goto label_204dac;
        default: return;
    }

label_2045e0:
    // 0x2045e0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2045e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2045e4:
    // 0x2045e4: 0x2442f500  addiu       $v0, $v0, -0xB00
    ctx->pc = 0x2045e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964480));
label_2045e8:
    // 0x2045e8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2045e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2045ec:
    // 0x2045ec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2045ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2045f0:
    // 0x2045f0: 0x440c0  sll         $t0, $a0, 3
    ctx->pc = 0x2045f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2045f4:
    // 0x2045f4: 0x24060203  addiu       $a2, $zero, 0x203
    ctx->pc = 0x2045f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
label_2045f8:
    // 0x2045f8: 0x484821  addu        $t1, $v0, $t0
    ctx->pc = 0x2045f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2045fc:
    // 0x2045fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2045fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_204600:
    // 0x204600: 0x1204021  addu        $t0, $t1, $zero
    ctx->pc = 0x204600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 0)));
label_204604:
    // 0x204604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204608:
    // 0x204608: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x204608u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
label_20460c:
    // 0x20460c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x20460cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
label_204610:
    // 0x204610: 0xad040004  sw          $a0, 0x4($t0)
    ctx->pc = 0x204610u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
label_204614:
    // 0x204614: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x204614u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
label_204618:
    // 0x204618: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x204618u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
label_20461c:
    // 0x20461c: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x20461cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
label_204620:
    // 0x204620: 0xad2700a0  sw          $a3, 0xA0($t1)
    ctx->pc = 0x204620u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 160), GPR_U32(ctx, 7));
label_204624:
    // 0x204624: 0xad260098  sw          $a2, 0x98($t1)
    ctx->pc = 0x204624u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 152), GPR_U32(ctx, 6));
label_204628:
    // 0x204628: 0xad24009c  sw          $a0, 0x9C($t1)
    ctx->pc = 0x204628u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 156), GPR_U32(ctx, 4));
label_20462c:
    // 0x20462c: 0xad2000a4  sw          $zero, 0xA4($t1)
    ctx->pc = 0x20462cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 164), GPR_U32(ctx, 0));
label_204630:
    // 0x204630: 0xad2000a8  sw          $zero, 0xA8($t1)
    ctx->pc = 0x204630u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 168), GPR_U32(ctx, 0));
label_204634:
    // 0x204634: 0xad2000ac  sw          $zero, 0xAC($t1)
    ctx->pc = 0x204634u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 172), GPR_U32(ctx, 0));
label_204638:
    // 0x204638: 0xad270138  sw          $a3, 0x138($t1)
    ctx->pc = 0x204638u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 312), GPR_U32(ctx, 7));
label_20463c:
    // 0x20463c: 0xad260130  sw          $a2, 0x130($t1)
    ctx->pc = 0x20463cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 304), GPR_U32(ctx, 6));
label_204640:
    // 0x204640: 0xad240134  sw          $a0, 0x134($t1)
    ctx->pc = 0x204640u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 308), GPR_U32(ctx, 4));
label_204644:
    // 0x204644: 0xad20013c  sw          $zero, 0x13C($t1)
    ctx->pc = 0x204644u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 316), GPR_U32(ctx, 0));
label_204648:
    // 0x204648: 0xad200140  sw          $zero, 0x140($t1)
    ctx->pc = 0x204648u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 320), GPR_U32(ctx, 0));
label_20464c:
    // 0x20464c: 0xad200144  sw          $zero, 0x144($t1)
    ctx->pc = 0x20464cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 324), GPR_U32(ctx, 0));
label_204650:
    // 0x204650: 0xac600480  sw          $zero, 0x480($v1)
    ctx->pc = 0x204650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 0));
label_204654:
    // 0x204654: 0x8c660484  lw          $a2, 0x484($v1)
    ctx->pc = 0x204654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
label_204658:
    // 0x204658: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
label_20465c:
    if (ctx->pc == 0x20465Cu) {
        ctx->pc = 0x204660u;
        goto label_204660;
    }
    ctx->pc = 0x204658u;
    {
        const bool branch_taken_0x204658 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x204658) {
            ctx->pc = 0x204674u;
            goto label_204674;
        }
    }
    ctx->pc = 0x204660u;
label_204660:
    // 0x204660: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x204660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_204664:
    // 0x204664: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x204664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204668:
    // 0x204668: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x204668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_20466c:
    // 0x20466c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_204670:
    if (ctx->pc == 0x204670u) {
        ctx->pc = 0x204670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20466Cu;
        // 0x204670: 0xac640480  sw          $a0, 0x480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204674u;
        goto label_204674;
    }
    ctx->pc = 0x20466Cu;
    {
        const bool branch_taken_0x20466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20466Cu;
        // 0x204670: 0xac640480  sw          $a0, 0x480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20466c) {
            ctx->pc = 0x20471Cu;
            goto label_20471c;
        }
    }
    ctx->pc = 0x204674u;
label_204674:
    // 0x204674: 0x14c40006  bne         $a2, $a0, . + 4 + (0x6 << 2)
label_204678:
    if (ctx->pc == 0x204678u) {
        ctx->pc = 0x20467Cu;
        goto label_20467c;
    }
    ctx->pc = 0x204674u;
    {
        const bool branch_taken_0x204674 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x204674) {
            ctx->pc = 0x204690u;
            goto label_204690;
        }
    }
    ctx->pc = 0x20467Cu;
label_20467c:
    // 0x20467c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x20467cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_204680:
    // 0x204680: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x204680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204684:
    // 0x204684: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x204684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_204688:
    // 0x204688: 0x10000024  b           . + 4 + (0x24 << 2)
label_20468c:
    if (ctx->pc == 0x20468Cu) {
        ctx->pc = 0x20468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204688u;
        // 0x20468c: 0xac640480  sw          $a0, 0x480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204690u;
        goto label_204690;
    }
    ctx->pc = 0x204688u;
    {
        const bool branch_taken_0x204688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204688u;
        // 0x20468c: 0xac640480  sw          $a0, 0x480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204688) {
            ctx->pc = 0x20471Cu;
            goto label_20471c;
        }
    }
    ctx->pc = 0x204690u;
label_204690:
    // 0x204690: 0x10a70020  beq         $a1, $a3, . + 4 + (0x20 << 2)
label_204694:
    if (ctx->pc == 0x204694u) {
        ctx->pc = 0x204698u;
        goto label_204698;
    }
    ctx->pc = 0x204690u;
    {
        const bool branch_taken_0x204690 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x204690) {
            ctx->pc = 0x204714u;
            goto label_204714;
        }
    }
    ctx->pc = 0x204698u;
label_204698:
    // 0x204698: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x204698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_20469c:
    // 0x20469c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_2046a0:
    if (ctx->pc == 0x2046A0u) {
        ctx->pc = 0x2046A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20469Cu;
        // 0x2046a0: 0x28a2ffed  slti        $v0, $a1, -0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967277) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2046A4u;
        goto label_2046a4;
    }
    ctx->pc = 0x20469Cu;
    {
        const bool branch_taken_0x20469c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2046A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20469Cu;
        // 0x2046a0: 0x28a2ffed  slti        $v0, $a1, -0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967277) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20469c) {
            ctx->pc = 0x2046B0u;
            goto label_2046b0;
        }
    }
    ctx->pc = 0x2046A4u;
label_2046a4:
    // 0x2046a4: 0x24020401  addiu       $v0, $zero, 0x401
    ctx->pc = 0x2046a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_2046a8:
    // 0x2046a8: 0x10000017  b           . + 4 + (0x17 << 2)
label_2046ac:
    if (ctx->pc == 0x2046ACu) {
        ctx->pc = 0x2046ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046A8u;
        // 0x2046ac: 0xac620480  sw          $v0, 0x480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2046B0u;
        goto label_2046b0;
    }
    ctx->pc = 0x2046A8u;
    {
        const bool branch_taken_0x2046a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2046ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046A8u;
        // 0x2046ac: 0xac620480  sw          $v0, 0x480($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046a8) {
            ctx->pc = 0x204708u;
            goto label_204708;
        }
    }
    ctx->pc = 0x2046B0u;
label_2046b0:
    // 0x2046b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2046b4:
    if (ctx->pc == 0x2046B4u) {
        ctx->pc = 0x2046B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046B0u;
        // 0x2046b4: 0x28a1fff6  slti        $at, $a1, -0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967286) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2046B8u;
        goto label_2046b8;
    }
    ctx->pc = 0x2046B0u;
    {
        const bool branch_taken_0x2046b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046B0u;
        // 0x2046b4: 0x28a1fff6  slti        $at, $a1, -0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967286) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046b0) {
            ctx->pc = 0x2046C0u;
            goto label_2046c0;
        }
    }
    ctx->pc = 0x2046B8u;
label_2046b8:
    // 0x2046b8: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
label_2046bc:
    if (ctx->pc == 0x2046BCu) {
        ctx->pc = 0x2046BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046B8u;
        // 0x2046bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2046C0u;
        goto label_2046c0;
    }
    ctx->pc = 0x2046B8u;
    {
        const bool branch_taken_0x2046b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046B8u;
        // 0x2046bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046b8) {
            ctx->pc = 0x20470Cu;
            goto label_20470c;
        }
    }
    ctx->pc = 0x2046C0u;
label_2046c0:
    // 0x2046c0: 0x28a2ffcf  slti        $v0, $a1, -0x31
    ctx->pc = 0x2046c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967247) ? 1 : 0);
label_2046c4:
    // 0x2046c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2046c8:
    if (ctx->pc == 0x2046C8u) {
        ctx->pc = 0x2046C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046C4u;
        // 0x2046c8: 0x28a2ffc5  slti        $v0, $a1, -0x3B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967237) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2046CCu;
        goto label_2046cc;
    }
    ctx->pc = 0x2046C4u;
    {
        const bool branch_taken_0x2046c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046C4u;
        // 0x2046c8: 0x28a2ffc5  slti        $v0, $a1, -0x3B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967237) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046c4) {
            ctx->pc = 0x2046D8u;
            goto label_2046d8;
        }
    }
    ctx->pc = 0x2046CCu;
label_2046cc:
    // 0x2046cc: 0x28a1ffd9  slti        $at, $a1, -0x27
    ctx->pc = 0x2046ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967257) ? 1 : 0);
label_2046d0:
    // 0x2046d0: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_2046d4:
    if (ctx->pc == 0x2046D4u) {
        ctx->pc = 0x2046D8u;
        goto label_2046d8;
    }
    ctx->pc = 0x2046D0u;
    {
        const bool branch_taken_0x2046d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2046d0) {
            ctx->pc = 0x204708u;
            goto label_204708;
        }
    }
    ctx->pc = 0x2046D8u;
label_2046d8:
    // 0x2046d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2046dc:
    if (ctx->pc == 0x2046DCu) {
        ctx->pc = 0x2046DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046D8u;
        // 0x2046dc: 0x28a1ffcf  slti        $at, $a1, -0x31 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967247) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2046E0u;
        goto label_2046e0;
    }
    ctx->pc = 0x2046D8u;
    {
        const bool branch_taken_0x2046d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046D8u;
        // 0x2046dc: 0x28a1ffcf  slti        $at, $a1, -0x31 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967247) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046d8) {
            ctx->pc = 0x2046E8u;
            goto label_2046e8;
        }
    }
    ctx->pc = 0x2046E0u;
label_2046e0:
    // 0x2046e0: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_2046e4:
    if (ctx->pc == 0x2046E4u) {
        ctx->pc = 0x2046E8u;
        goto label_2046e8;
    }
    ctx->pc = 0x2046E0u;
    {
        const bool branch_taken_0x2046e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2046e0) {
            ctx->pc = 0x204708u;
            goto label_204708;
        }
    }
    ctx->pc = 0x2046E8u;
label_2046e8:
    // 0x2046e8: 0x28a2ffb1  slti        $v0, $a1, -0x4F
    ctx->pc = 0x2046e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967217) ? 1 : 0);
label_2046ec:
    // 0x2046ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2046f0:
    if (ctx->pc == 0x2046F0u) {
        ctx->pc = 0x2046F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046ECu;
        // 0x2046f0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2046F4u;
        goto label_2046f4;
    }
    ctx->pc = 0x2046ECu;
    {
        const bool branch_taken_0x2046ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2046F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2046ECu;
        // 0x2046f0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046ec) {
            ctx->pc = 0x204700u;
            goto label_204700;
        }
    }
    ctx->pc = 0x2046F4u;
label_2046f4:
    // 0x2046f4: 0x28a1ffbb  slti        $at, $a1, -0x45
    ctx->pc = 0x2046f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967227) ? 1 : 0);
label_2046f8:
    // 0x2046f8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2046fc:
    if (ctx->pc == 0x2046FCu) {
        ctx->pc = 0x204700u;
        goto label_204700;
    }
    ctx->pc = 0x2046F8u;
    {
        const bool branch_taken_0x2046f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2046f8) {
            ctx->pc = 0x204708u;
            goto label_204708;
        }
    }
    ctx->pc = 0x204700u;
label_204700:
    // 0x204700: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x204700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_204704:
    // 0x204704: 0xac620480  sw          $v0, 0x480($v1)
    ctx->pc = 0x204704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 2));
label_204708:
    // 0x204708: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x204708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20470c:
    // 0x20470c: 0x10000003  b           . + 4 + (0x3 << 2)
label_204710:
    if (ctx->pc == 0x204710u) {
        ctx->pc = 0x204714u;
        goto label_204714;
    }
    ctx->pc = 0x20470Cu;
    {
        const bool branch_taken_0x20470c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20470c) {
            ctx->pc = 0x20471Cu;
            goto label_20471c;
        }
    }
    ctx->pc = 0x204714u;
label_204714:
    // 0x204714: 0xac620480  sw          $v0, 0x480($v1)
    ctx->pc = 0x204714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 2));
label_204718:
    // 0x204718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20471c:
    // 0x20471c: 0x3e00008  jr          $ra
label_204720:
    if (ctx->pc == 0x204720u) {
        ctx->pc = 0x204724u;
        goto label_204724;
    }
    ctx->pc = 0x20471Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20471Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204724u;
label_204724:
    // 0x204724: 0x0  nop
    ctx->pc = 0x204724u;
    // NOP
label_204728:
    // 0x204728: 0x0  nop
    ctx->pc = 0x204728u;
    // NOP
label_20472c:
    // 0x20472c: 0x0  nop
    ctx->pc = 0x20472cu;
    // NOP
label_204730:
    // 0x204730: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_204734:
    if (ctx->pc == 0x204734u) {
        ctx->pc = 0x204734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204730u;
        // 0x204734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204738u;
        goto label_204738;
    }
    ctx->pc = 0x204730u;
    {
        const bool branch_taken_0x204730 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x204734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204730u;
        // 0x204734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204730) {
            ctx->pc = 0x204740u;
            goto label_204740;
        }
    }
    ctx->pc = 0x204738u;
label_204738:
    // 0x204738: 0x10000014  b           . + 4 + (0x14 << 2)
label_20473c:
    if (ctx->pc == 0x20473Cu) {
        ctx->pc = 0x204740u;
        goto label_204740;
    }
    ctx->pc = 0x204738u;
    {
        const bool branch_taken_0x204738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204738) {
            ctx->pc = 0x20478Cu;
            goto label_20478c;
        }
    }
    ctx->pc = 0x204740u;
label_204740:
    // 0x204740: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x204740u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_204744:
    // 0x204744: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x204744u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_204748:
    // 0x204748: 0x24c6f508  addiu       $a2, $a2, -0xAF8
    ctx->pc = 0x204748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964488));
label_20474c:
    // 0x20474c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204750:
    // 0x204750: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x204750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_204754:
    // 0x204754: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x204754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_204758:
    // 0x204758: 0x683823  subu        $a3, $v1, $t0
    ctx->pc = 0x204758u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_20475c:
    // 0x20475c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x20475cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_204760:
    // 0x204760: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x204760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_204764:
    // 0x204764: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x204764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_204768:
    // 0x204768: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20476c:
    // 0x20476c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20476cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_204770:
    // 0x204770: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_204774:
    // 0x204774: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x204774u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_204778:
    // 0x204778: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x204778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_20477c:
    // 0x20477c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x20477cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_204780:
    // 0x204780: 0x24c30000  addiu       $v1, $a2, 0x0
    ctx->pc = 0x204780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_204784:
    // 0x204784: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_204788:
    // 0x204788: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x204788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_20478c:
    // 0x20478c: 0x3e00008  jr          $ra
label_204790:
    if (ctx->pc == 0x204790u) {
        ctx->pc = 0x204794u;
        goto label_204794;
    }
    ctx->pc = 0x20478Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20478Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204794u;
label_204794:
    // 0x204794: 0x0  nop
    ctx->pc = 0x204794u;
    // NOP
label_204798:
    // 0x204798: 0x0  nop
    ctx->pc = 0x204798u;
    // NOP
label_20479c:
    // 0x20479c: 0x0  nop
    ctx->pc = 0x20479cu;
    // NOP
label_2047a0:
    // 0x2047a0: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x2047a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2047a4:
    // 0x2047a4: 0xa01026  xor         $v0, $a1, $zero
    ctx->pc = 0x2047a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
label_2047a8:
    // 0x2047a8: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x2047a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_2047ac:
    // 0x2047ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2047acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2047b0:
    // 0x2047b0: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x2047b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
label_2047b4:
    // 0x2047b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2047b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2047b8:
    // 0x2047b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2047b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2047bc:
    // 0x2047bc: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2047bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2047c0:
    // 0x2047c0: 0x24040203  addiu       $a0, $zero, 0x203
    ctx->pc = 0x2047c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
label_2047c4:
    // 0x2047c4: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x2047c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2047c8:
    // 0x2047c8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2047c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2047cc:
    // 0x2047cc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2047ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2047d0:
    // 0x2047d0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2047d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2047d4:
    // 0x2047d4: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x2047d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2047d8:
    // 0x2047d8: 0xe03021  addu        $a2, $a3, $zero
    ctx->pc = 0x2047d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
label_2047dc:
    // 0x2047dc: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x2047dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_2047e0:
    // 0x2047e0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2047e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_2047e4:
    // 0x2047e4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2047e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_2047e8:
    // 0x2047e8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2047e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_2047ec:
    // 0x2047ec: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x2047ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_2047f0:
    // 0x2047f0: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x2047f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_2047f4:
    // 0x2047f4: 0xace500a0  sw          $a1, 0xA0($a3)
    ctx->pc = 0x2047f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 5));
label_2047f8:
    // 0x2047f8: 0xace40098  sw          $a0, 0x98($a3)
    ctx->pc = 0x2047f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 4));
label_2047fc:
    // 0x2047fc: 0xace3009c  sw          $v1, 0x9C($a3)
    ctx->pc = 0x2047fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 3));
label_204800:
    // 0x204800: 0xace000a4  sw          $zero, 0xA4($a3)
    ctx->pc = 0x204800u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 164), GPR_U32(ctx, 0));
label_204804:
    // 0x204804: 0xace000a8  sw          $zero, 0xA8($a3)
    ctx->pc = 0x204804u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 0));
label_204808:
    // 0x204808: 0xace000ac  sw          $zero, 0xAC($a3)
    ctx->pc = 0x204808u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 0));
label_20480c:
    // 0x20480c: 0xace50138  sw          $a1, 0x138($a3)
    ctx->pc = 0x20480cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 312), GPR_U32(ctx, 5));
label_204810:
    // 0x204810: 0xace40130  sw          $a0, 0x130($a3)
    ctx->pc = 0x204810u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 304), GPR_U32(ctx, 4));
label_204814:
    // 0x204814: 0xace30134  sw          $v1, 0x134($a3)
    ctx->pc = 0x204814u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 308), GPR_U32(ctx, 3));
label_204818:
    // 0x204818: 0xace0013c  sw          $zero, 0x13C($a3)
    ctx->pc = 0x204818u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 316), GPR_U32(ctx, 0));
label_20481c:
    // 0x20481c: 0xace00140  sw          $zero, 0x140($a3)
    ctx->pc = 0x20481cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 0));
label_204820:
    // 0x204820: 0x3e00008  jr          $ra
label_204824:
    if (ctx->pc == 0x204824u) {
        ctx->pc = 0x204824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204820u;
        // 0x204824: 0xace00144  sw          $zero, 0x144($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204828u;
        goto label_204828;
    }
    ctx->pc = 0x204820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204820u;
        // 0x204824: 0xace00144  sw          $zero, 0x144($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204828u;
label_204828:
    // 0x204828: 0x0  nop
    ctx->pc = 0x204828u;
    // NOP
label_20482c:
    // 0x20482c: 0x0  nop
    ctx->pc = 0x20482cu;
    // NOP
label_204830:
    // 0x204830: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
label_204834:
    if (ctx->pc == 0x204834u) {
        ctx->pc = 0x204834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204830u;
        // 0x204834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204838u;
        goto label_204838;
    }
    ctx->pc = 0x204830u;
    {
        const bool branch_taken_0x204830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x204834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204830u;
        // 0x204834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204830) {
            ctx->pc = 0x2048B8u;
            goto label_2048b8;
        }
    }
    ctx->pc = 0x204838u;
label_204838:
    // 0x204838: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x204838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_20483c:
    // 0x20483c: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x20483cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_204840:
    // 0x204840: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x204840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
label_204844:
    // 0x204844: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x204844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_204848:
    // 0x204848: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x204848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20484c:
    // 0x20484c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20484cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204850:
    // 0x204850: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x204850u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_204854:
    // 0x204854: 0x24040203  addiu       $a0, $zero, 0x203
    ctx->pc = 0x204854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
label_204858:
    // 0x204858: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x204858u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_20485c:
    // 0x20485c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x20485cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_204860:
    // 0x204860: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x204860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_204864:
    // 0x204864: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x204864u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_204868:
    // 0x204868: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x204868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_20486c:
    // 0x20486c: 0xe03021  addu        $a2, $a3, $zero
    ctx->pc = 0x20486cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
label_204870:
    // 0x204870: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x204870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_204874:
    // 0x204874: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x204874u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_204878:
    // 0x204878: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x204878u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_20487c:
    // 0x20487c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x20487cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_204880:
    // 0x204880: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x204880u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_204884:
    // 0x204884: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x204884u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_204888:
    // 0x204888: 0xace500a0  sw          $a1, 0xA0($a3)
    ctx->pc = 0x204888u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 5));
label_20488c:
    // 0x20488c: 0xace40098  sw          $a0, 0x98($a3)
    ctx->pc = 0x20488cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 4));
label_204890:
    // 0x204890: 0xace3009c  sw          $v1, 0x9C($a3)
    ctx->pc = 0x204890u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 3));
label_204894:
    // 0x204894: 0xace000a4  sw          $zero, 0xA4($a3)
    ctx->pc = 0x204894u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 164), GPR_U32(ctx, 0));
label_204898:
    // 0x204898: 0xace000a8  sw          $zero, 0xA8($a3)
    ctx->pc = 0x204898u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 0));
label_20489c:
    // 0x20489c: 0xace000ac  sw          $zero, 0xAC($a3)
    ctx->pc = 0x20489cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 0));
label_2048a0:
    // 0x2048a0: 0xace50138  sw          $a1, 0x138($a3)
    ctx->pc = 0x2048a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 312), GPR_U32(ctx, 5));
label_2048a4:
    // 0x2048a4: 0xace40130  sw          $a0, 0x130($a3)
    ctx->pc = 0x2048a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 304), GPR_U32(ctx, 4));
label_2048a8:
    // 0x2048a8: 0xace30134  sw          $v1, 0x134($a3)
    ctx->pc = 0x2048a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 308), GPR_U32(ctx, 3));
label_2048ac:
    // 0x2048ac: 0xace0013c  sw          $zero, 0x13C($a3)
    ctx->pc = 0x2048acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 316), GPR_U32(ctx, 0));
label_2048b0:
    // 0x2048b0: 0xace00140  sw          $zero, 0x140($a3)
    ctx->pc = 0x2048b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 0));
label_2048b4:
    // 0x2048b4: 0xace00144  sw          $zero, 0x144($a3)
    ctx->pc = 0x2048b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 0));
label_2048b8:
    // 0x2048b8: 0x3e00008  jr          $ra
label_2048bc:
    if (ctx->pc == 0x2048BCu) {
        ctx->pc = 0x2048C0u;
        goto label_2048c0;
    }
    ctx->pc = 0x2048B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2048B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2048C0u;
label_2048c0:
    // 0x2048c0: 0x4a10021  bgez        $a1, . + 4 + (0x21 << 2)
label_2048c4:
    if (ctx->pc == 0x2048C4u) {
        ctx->pc = 0x2048C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048C0u;
        // 0x2048c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2048C8u;
        goto label_2048c8;
    }
    ctx->pc = 0x2048C0u;
    {
        const bool branch_taken_0x2048c0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2048C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048C0u;
        // 0x2048c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048c0) {
            ctx->pc = 0x204948u;
            goto label_204948;
        }
    }
    ctx->pc = 0x2048C8u;
label_2048c8:
    // 0x2048c8: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x2048c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2048cc:
    // 0x2048cc: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x2048ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_2048d0:
    // 0x2048d0: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x2048d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
label_2048d4:
    // 0x2048d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2048d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2048d8:
    // 0x2048d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2048d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2048dc:
    // 0x2048dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2048dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2048e0:
    // 0x2048e0: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2048e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2048e4:
    // 0x2048e4: 0x24040203  addiu       $a0, $zero, 0x203
    ctx->pc = 0x2048e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
label_2048e8:
    // 0x2048e8: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x2048e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2048ec:
    // 0x2048ec: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2048ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2048f0:
    // 0x2048f0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2048f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_2048f4:
    // 0x2048f4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2048f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2048f8:
    // 0x2048f8: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x2048f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2048fc:
    // 0x2048fc: 0xe03021  addu        $a2, $a3, $zero
    ctx->pc = 0x2048fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
label_204900:
    // 0x204900: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x204900u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_204904:
    // 0x204904: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x204904u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_204908:
    // 0x204908: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x204908u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_20490c:
    // 0x20490c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x20490cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_204910:
    // 0x204910: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x204910u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_204914:
    // 0x204914: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x204914u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_204918:
    // 0x204918: 0xace500a0  sw          $a1, 0xA0($a3)
    ctx->pc = 0x204918u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 5));
label_20491c:
    // 0x20491c: 0xace40098  sw          $a0, 0x98($a3)
    ctx->pc = 0x20491cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 4));
label_204920:
    // 0x204920: 0xace3009c  sw          $v1, 0x9C($a3)
    ctx->pc = 0x204920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 3));
label_204924:
    // 0x204924: 0xace000a4  sw          $zero, 0xA4($a3)
    ctx->pc = 0x204924u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 164), GPR_U32(ctx, 0));
label_204928:
    // 0x204928: 0xace000a8  sw          $zero, 0xA8($a3)
    ctx->pc = 0x204928u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 0));
label_20492c:
    // 0x20492c: 0xace000ac  sw          $zero, 0xAC($a3)
    ctx->pc = 0x20492cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 0));
label_204930:
    // 0x204930: 0xace50138  sw          $a1, 0x138($a3)
    ctx->pc = 0x204930u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 312), GPR_U32(ctx, 5));
label_204934:
    // 0x204934: 0xace40130  sw          $a0, 0x130($a3)
    ctx->pc = 0x204934u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 304), GPR_U32(ctx, 4));
label_204938:
    // 0x204938: 0xace30134  sw          $v1, 0x134($a3)
    ctx->pc = 0x204938u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 308), GPR_U32(ctx, 3));
label_20493c:
    // 0x20493c: 0xace0013c  sw          $zero, 0x13C($a3)
    ctx->pc = 0x20493cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 316), GPR_U32(ctx, 0));
label_204940:
    // 0x204940: 0xace00140  sw          $zero, 0x140($a3)
    ctx->pc = 0x204940u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 0));
label_204944:
    // 0x204944: 0xace00144  sw          $zero, 0x144($a3)
    ctx->pc = 0x204944u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 0));
label_204948:
    // 0x204948: 0x3e00008  jr          $ra
label_20494c:
    if (ctx->pc == 0x20494Cu) {
        ctx->pc = 0x204950u;
        goto label_204950;
    }
    ctx->pc = 0x204948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204950u;
label_204950:
    // 0x204950: 0xa01026  xor         $v0, $a1, $zero
    ctx->pc = 0x204950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
label_204954:
    // 0x204954: 0x3e00008  jr          $ra
label_204958:
    if (ctx->pc == 0x204958u) {
        ctx->pc = 0x204958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204954u;
        // 0x204958: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20495Cu;
        goto label_20495c;
    }
    ctx->pc = 0x204954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204954u;
        // 0x204958: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20495Cu;
label_20495c:
    // 0x20495c: 0x0  nop
    ctx->pc = 0x20495cu;
    // NOP
label_204960:
    // 0x204960: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x204960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_204964:
    // 0x204964: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x204964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_204968:
    // 0x204968: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x204968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
label_20496c:
    // 0x20496c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x20496cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_204970:
    // 0x204970: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_204974:
    // 0x204974: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x204974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_204978:
    // 0x204978: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20497c:
    // 0x20497c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x20497cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_204980:
    // 0x204980: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
label_204984:
    if (ctx->pc == 0x204984u) {
        ctx->pc = 0x204984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204980u;
        // 0x204984: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204988u;
        goto label_204988;
    }
    ctx->pc = 0x204980u;
    {
        const bool branch_taken_0x204980 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x204984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204980u;
        // 0x204984: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204980) {
            ctx->pc = 0x204990u;
            goto label_204990;
        }
    }
    ctx->pc = 0x204988u;
label_204988:
    // 0x204988: 0x10000007  b           . + 4 + (0x7 << 2)
label_20498c:
    if (ctx->pc == 0x20498Cu) {
        ctx->pc = 0x20498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204988u;
        // 0x20498c: 0xac45048c  sw          $a1, 0x48C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1164), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204990u;
        goto label_204990;
    }
    ctx->pc = 0x204988u;
    {
        const bool branch_taken_0x204988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204988u;
        // 0x20498c: 0xac45048c  sw          $a1, 0x48C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1164), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204988) {
            ctx->pc = 0x2049A8u;
            goto label_2049a8;
        }
    }
    ctx->pc = 0x204990u;
label_204990:
    // 0x204990: 0xac40048c  sw          $zero, 0x48C($v0)
    ctx->pc = 0x204990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1164), GPR_U32(ctx, 0));
label_204994:
    // 0x204994: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x204994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_204998:
    // 0x204998: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_20499c:
    if (ctx->pc == 0x20499Cu) {
        ctx->pc = 0x2049A0u;
        goto label_2049a0;
    }
    ctx->pc = 0x204998u;
    {
        const bool branch_taken_0x204998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x204998) {
            ctx->pc = 0x2049A8u;
            goto label_2049a8;
        }
    }
    ctx->pc = 0x2049A0u;
label_2049a0:
    // 0x2049a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2049a4:
    if (ctx->pc == 0x2049A4u) {
        ctx->pc = 0x2049A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049A0u;
        // 0x2049a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2049A8u;
        goto label_2049a8;
    }
    ctx->pc = 0x2049A0u;
    {
        const bool branch_taken_0x2049a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049A0u;
        // 0x2049a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049a0) {
            ctx->pc = 0x2049ACu;
            goto label_2049ac;
        }
    }
    ctx->pc = 0x2049A8u;
label_2049a8:
    // 0x2049a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2049a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2049ac:
    // 0x2049ac: 0x3e00008  jr          $ra
label_2049b0:
    if (ctx->pc == 0x2049B0u) {
        ctx->pc = 0x2049B4u;
        goto label_2049b4;
    }
    ctx->pc = 0x2049ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2049ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2049B4u;
label_2049b4:
    // 0x2049b4: 0x0  nop
    ctx->pc = 0x2049b4u;
    // NOP
label_2049b8:
    // 0x2049b8: 0x0  nop
    ctx->pc = 0x2049b8u;
    // NOP
label_2049bc:
    // 0x2049bc: 0x0  nop
    ctx->pc = 0x2049bcu;
    // NOP
label_2049c0:
    // 0x2049c0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x2049c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2049c4:
    // 0x2049c4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2049c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_2049c8:
    // 0x2049c8: 0x2442f700  addiu       $v0, $v0, -0x900
    ctx->pc = 0x2049c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
label_2049cc:
    // 0x2049cc: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2049ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_2049d0:
    // 0x2049d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2049d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2049d4:
    // 0x2049d4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2049d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2049d8:
    // 0x2049d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2049d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2049dc:
    // 0x2049dc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2049dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2049e0:
    // 0x2049e0: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
label_2049e4:
    if (ctx->pc == 0x2049E4u) {
        ctx->pc = 0x2049E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049E0u;
        // 0x2049e4: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2049E8u;
        goto label_2049e8;
    }
    ctx->pc = 0x2049E0u;
    {
        const bool branch_taken_0x2049e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049E0u;
        // 0x2049e4: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049e0) {
            ctx->pc = 0x204A84u;
            goto label_204a84;
        }
    }
    ctx->pc = 0x2049E8u;
label_2049e8:
    // 0x2049e8: 0xad000480  sw          $zero, 0x480($t0)
    ctx->pc = 0x2049e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1152), GPR_U32(ctx, 0));
label_2049ec:
    // 0x2049ec: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x2049ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
label_2049f0:
    // 0x2049f0: 0xad000488  sw          $zero, 0x488($t0)
    ctx->pc = 0x2049f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1160), GPR_U32(ctx, 0));
label_2049f4:
    // 0x2049f4: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x2049f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
label_2049f8:
    // 0x2049f8: 0xad00048c  sw          $zero, 0x48C($t0)
    ctx->pc = 0x2049f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1164), GPR_U32(ctx, 0));
label_2049fc:
    // 0x2049fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2049fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_204a00:
    // 0x204a00: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x204a00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_204a04:
    // 0x204a04: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x204a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
label_204a08:
    // 0x204a08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x204a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_204a0c:
    // 0x204a0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x204a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204a10:
    // 0x204a10: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x204a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_204a14:
    // 0x204a14: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x204a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_204a18:
    // 0x204a18: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x204a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_204a1c:
    // 0x204a1c: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x204a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_204a20:
    // 0x204a20: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x204a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_204a24:
    // 0x204a24: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x204a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_204a28:
    // 0x204a28: 0xe02021  addu        $a0, $a3, $zero
    ctx->pc = 0x204a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
label_204a2c:
    // 0x204a2c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x204a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_204a30:
    // 0x204a30: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x204a30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_204a34:
    // 0x204a34: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x204a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_204a38:
    // 0x204a38: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x204a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_204a3c:
    // 0x204a3c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x204a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_204a40:
    // 0x204a40: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x204a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_204a44:
    // 0x204a44: 0xace600a0  sw          $a2, 0xA0($a3)
    ctx->pc = 0x204a44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 6));
label_204a48:
    // 0x204a48: 0xace50098  sw          $a1, 0x98($a3)
    ctx->pc = 0x204a48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 5));
label_204a4c:
    // 0x204a4c: 0xace3009c  sw          $v1, 0x9C($a3)
    ctx->pc = 0x204a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 3));
label_204a50:
    // 0x204a50: 0xace000a4  sw          $zero, 0xA4($a3)
    ctx->pc = 0x204a50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 164), GPR_U32(ctx, 0));
label_204a54:
    // 0x204a54: 0xace000a8  sw          $zero, 0xA8($a3)
    ctx->pc = 0x204a54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 0));
label_204a58:
    // 0x204a58: 0xace000ac  sw          $zero, 0xAC($a3)
    ctx->pc = 0x204a58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 0));
label_204a5c:
    // 0x204a5c: 0xace60138  sw          $a2, 0x138($a3)
    ctx->pc = 0x204a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 312), GPR_U32(ctx, 6));
label_204a60:
    // 0x204a60: 0xace50130  sw          $a1, 0x130($a3)
    ctx->pc = 0x204a60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 304), GPR_U32(ctx, 5));
label_204a64:
    // 0x204a64: 0xace30134  sw          $v1, 0x134($a3)
    ctx->pc = 0x204a64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 308), GPR_U32(ctx, 3));
label_204a68:
    // 0x204a68: 0xace0013c  sw          $zero, 0x13C($a3)
    ctx->pc = 0x204a68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 316), GPR_U32(ctx, 0));
label_204a6c:
    // 0x204a6c: 0xace00140  sw          $zero, 0x140($a3)
    ctx->pc = 0x204a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 0));
label_204a70:
    // 0x204a70: 0xace00144  sw          $zero, 0x144($a3)
    ctx->pc = 0x204a70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 0));
label_204a74:
    // 0x204a74: 0x8d030480  lw          $v1, 0x480($t0)
    ctx->pc = 0x204a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1152)));
label_204a78:
    // 0x204a78: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x204a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_204a7c:
    // 0x204a7c: 0x10000006  b           . + 4 + (0x6 << 2)
label_204a80:
    if (ctx->pc == 0x204A80u) {
        ctx->pc = 0x204A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A7Cu;
        // 0x204a80: 0xad030480  sw          $v1, 0x480($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204A84u;
        goto label_204a84;
    }
    ctx->pc = 0x204A7Cu;
    {
        const bool branch_taken_0x204a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A7Cu;
        // 0x204a80: 0xad030480  sw          $v1, 0x480($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a7c) {
            ctx->pc = 0x204A98u;
            goto label_204a98;
        }
    }
    ctx->pc = 0x204A84u;
label_204a84:
    // 0x204a84: 0x8d040480  lw          $a0, 0x480($t0)
    ctx->pc = 0x204a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1152)));
label_204a88:
    // 0x204a88: 0x2403f3ff  addiu       $v1, $zero, -0xC01
    ctx->pc = 0x204a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
label_204a8c:
    // 0x204a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204a90:
    // 0x204a90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x204a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_204a94:
    // 0x204a94: 0xad030480  sw          $v1, 0x480($t0)
    ctx->pc = 0x204a94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1152), GPR_U32(ctx, 3));
label_204a98:
    // 0x204a98: 0x3e00008  jr          $ra
label_204a9c:
    if (ctx->pc == 0x204A9Cu) {
        ctx->pc = 0x204AA0u;
        goto label_204aa0;
    }
    ctx->pc = 0x204A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204AA0u;
label_204aa0:
    // 0x204aa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x204aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_204aa4:
    // 0x204aa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x204aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_204aa8:
    // 0x204aa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x204aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_204aac:
    // 0x204aac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x204aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_204ab0:
    // 0x204ab0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x204ab0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_204ab4:
    // 0x204ab4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_204ab8:
    // 0x204ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_204abc:
    // 0x204abc: 0xc081408  jal         func_205020
label_204ac0:
    if (ctx->pc == 0x204AC0u) {
        ctx->pc = 0x204AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204ABCu;
        // 0x204ac0: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204AC4u;
        goto label_204ac4;
    }
    ctx->pc = 0x204ABCu;
    SET_GPR_U32(ctx, 31, 0x204AC4u);
    ctx->pc = 0x204AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204ABCu;
    // 0x204ac0: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205020u;
    { ctx->pc = 0x205020; return; }
    ctx->pc = 0x204AC4u;
label_204ac4:
    // 0x204ac4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x204ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204ac8:
    // 0x204ac8: 0xc078050  jal         func_1E0140
label_204acc:
    if (ctx->pc == 0x204ACCu) {
        ctx->pc = 0x204ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AC8u;
        // 0x204acc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204AD0u;
        goto label_204ad0;
    }
    ctx->pc = 0x204AC8u;
    SET_GPR_U32(ctx, 31, 0x204AD0u);
    ctx->pc = 0x204ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204AC8u;
    // 0x204acc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x204AD0u;
label_204ad0:
    // 0x204ad0: 0xc078070  jal         func_1E01C0
label_204ad4:
    if (ctx->pc == 0x204AD4u) {
        ctx->pc = 0x204AD8u;
        goto label_204ad8;
    }
    ctx->pc = 0x204AD0u;
    SET_GPR_U32(ctx, 31, 0x204AD8u);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x204AD8u;
label_204ad8:
    // 0x204ad8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x204ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204adc:
    // 0x204adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204ae0:
    // 0x204ae0: 0x10000003  b           . + 4 + (0x3 << 2)
label_204ae4:
    if (ctx->pc == 0x204AE4u) {
        ctx->pc = 0x204AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AE0u;
        // 0x204ae4: 0xac432480  sw          $v1, 0x2480($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204AE8u;
        goto label_204ae8;
    }
    ctx->pc = 0x204AE0u;
    {
        const bool branch_taken_0x204ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AE0u;
        // 0x204ae4: 0xac432480  sw          $v1, 0x2480($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ae0) {
            ctx->pc = 0x204AF0u;
            goto label_204af0;
        }
    }
    ctx->pc = 0x204AE8u;
label_204ae8:
    // 0x204ae8: 0xc07b48c  jal         func_1ED230
label_204aec:
    if (ctx->pc == 0x204AECu) {
        ctx->pc = 0x204AF0u;
        goto label_204af0;
    }
    ctx->pc = 0x204AE8u;
    SET_GPR_U32(ctx, 31, 0x204AF0u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x204AF0u;
label_204af0:
    // 0x204af0: 0x8f8390f8  lw          $v1, -0x6F08($gp)
    ctx->pc = 0x204af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204af4:
    // 0x204af4: 0x8c622480  lw          $v0, 0x2480($v1)
    ctx->pc = 0x204af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9344)));
label_204af8:
    // 0x204af8: 0x0  nop
    ctx->pc = 0x204af8u;
    // NOP
label_204afc:
    // 0x204afc: 0x0  nop
    ctx->pc = 0x204afcu;
    // NOP
label_204b00:
    // 0x204b00: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_204b04:
    if (ctx->pc == 0x204B04u) {
        ctx->pc = 0x204B08u;
        goto label_204b08;
    }
    ctx->pc = 0x204B00u;
    {
        const bool branch_taken_0x204b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204b00) {
            ctx->pc = 0x204AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204ae8;
        }
    }
    ctx->pc = 0x204B08u;
label_204b08:
    // 0x204b08: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x204b08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_204b0c:
    // 0x204b0c: 0xac702490  sw          $s0, 0x2490($v1)
    ctx->pc = 0x204b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9360), GPR_U32(ctx, 16));
label_204b10:
    // 0x204b10: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_204b14:
    if (ctx->pc == 0x204B14u) {
        ctx->pc = 0x204B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B10u;
        // 0x204b14: 0x241200ab  addiu       $s2, $zero, 0xAB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B18u;
        goto label_204b18;
    }
    ctx->pc = 0x204B10u;
    {
        const bool branch_taken_0x204b10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B10u;
        // 0x204b14: 0x241200ab  addiu       $s2, $zero, 0xAB (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b10) {
            ctx->pc = 0x204B30u;
            goto label_204b30;
        }
    }
    ctx->pc = 0x204B18u;
label_204b18:
    // 0x204b18: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x204b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204b1c:
    // 0x204b1c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x204b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_204b20:
    // 0x204b20: 0x24422498  addiu       $v0, $v0, 0x2498
    ctx->pc = 0x204b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9368));
label_204b24:
    // 0x204b24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_204b28:
    // 0x204b28: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x204b28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204b2c:
    // 0x204b2c: 0x0  nop
    ctx->pc = 0x204b2cu;
    // NOP
label_204b30:
    // 0x204b30: 0x2a4100ab  slti        $at, $s2, 0xAB
    ctx->pc = 0x204b30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)171) ? 1 : 0);
label_204b34:
    // 0x204b34: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_204b38:
    if (ctx->pc == 0x204B38u) {
        ctx->pc = 0x204B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B34u;
        // 0x204b38: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B3Cu;
        goto label_204b3c;
    }
    ctx->pc = 0x204B34u;
    {
        const bool branch_taken_0x204b34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B34u;
        // 0x204b38: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b34) {
            ctx->pc = 0x204B80u;
            goto label_204b80;
        }
    }
    ctx->pc = 0x204B3Cu;
label_204b3c:
    // 0x204b3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x204b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204b40:
    // 0x204b40: 0x240601a0  addiu       $a2, $zero, 0x1A0
    ctx->pc = 0x204b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
label_204b44:
    // 0x204b44: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x204b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_204b48:
    // 0x204b48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x204b48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204b4c:
    // 0x204b4c: 0xc07fadc  jal         func_1FEB70
label_204b50:
    if (ctx->pc == 0x204B50u) {
        ctx->pc = 0x204B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B4Cu;
        // 0x204b50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B54u;
        goto label_204b54;
    }
    ctx->pc = 0x204B4Cu;
    SET_GPR_U32(ctx, 31, 0x204B54u);
    ctx->pc = 0x204B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B4Cu;
    // 0x204b50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB70u;
    { ctx->pc = 0x1feb70; return; }
    ctx->pc = 0x204B54u;
label_204b54:
    // 0x204b54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x204b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204b58:
    // 0x204b58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x204b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_204b5c:
    // 0x204b5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204b60:
    // 0x204b60: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x204b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_204b64:
    // 0x204b64: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x204b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_204b68:
    // 0x204b68: 0x240900c8  addiu       $t1, $zero, 0xC8
    ctx->pc = 0x204b68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_204b6c:
    // 0x204b6c: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x204b6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_204b70:
    // 0x204b70: 0xc07f47c  jal         func_1FD1F0
label_204b74:
    if (ctx->pc == 0x204B74u) {
        ctx->pc = 0x204B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B70u;
        // 0x204b74: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B78u;
        goto label_204b78;
    }
    ctx->pc = 0x204B70u;
    SET_GPR_U32(ctx, 31, 0x204B78u);
    ctx->pc = 0x204B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204B70u;
    // 0x204b74: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x204B78u;
label_204b78:
    // 0x204b78: 0x10000006  b           . + 4 + (0x6 << 2)
label_204b7c:
    if (ctx->pc == 0x204B7Cu) {
        ctx->pc = 0x204B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B78u;
        // 0x204b7c: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204B80u;
        goto label_204b80;
    }
    ctx->pc = 0x204B78u;
    {
        const bool branch_taken_0x204b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B78u;
        // 0x204b7c: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b78) {
            ctx->pc = 0x204B94u;
            goto label_204b94;
        }
    }
    ctx->pc = 0x204B80u;
label_204b80:
    // 0x204b80: 0xc07fa38  jal         func_1FE8E0
label_204b84:
    if (ctx->pc == 0x204B84u) {
        ctx->pc = 0x204B88u;
        goto label_204b88;
    }
    ctx->pc = 0x204B80u;
    SET_GPR_U32(ctx, 31, 0x204B88u);
    ctx->pc = 0x1FE8E0u;
    { ctx->pc = 0x1fe8e0; return; }
    ctx->pc = 0x204B88u;
label_204b88:
    // 0x204b88: 0xc07f468  jal         func_1FD1A0
label_204b8c:
    if (ctx->pc == 0x204B8Cu) {
        ctx->pc = 0x204B90u;
        goto label_204b90;
    }
    ctx->pc = 0x204B88u;
    SET_GPR_U32(ctx, 31, 0x204B90u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x204B90u;
label_204b90:
    // 0x204b90: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x204b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_204b94:
    // 0x204b94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_204b98:
    if (ctx->pc == 0x204B98u) {
        ctx->pc = 0x204B9Cu;
        goto label_204b9c;
    }
    ctx->pc = 0x204B94u;
    {
        const bool branch_taken_0x204b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204b94) {
            ctx->pc = 0x204BA4u;
            goto label_204ba4;
        }
    }
    ctx->pc = 0x204B9Cu;
label_204b9c:
    // 0x204b9c: 0x10000108  b           . + 4 + (0x108 << 2)
label_204ba0:
    if (ctx->pc == 0x204BA0u) {
        ctx->pc = 0x204BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B9Cu;
        // 0x204ba0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204BA4u;
        goto label_204ba4;
    }
    ctx->pc = 0x204B9Cu;
    {
        const bool branch_taken_0x204b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204B9Cu;
        // 0x204ba0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b9c) {
            ctx->pc = 0x204FC0u;
            { ctx->pc = 0x204fc0; return; }
        }
    }
    ctx->pc = 0x204BA4u;
label_204ba4:
    // 0x204ba4: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x204ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_204ba8:
    // 0x204ba8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_204bac:
    if (ctx->pc == 0x204BACu) {
        ctx->pc = 0x204BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BA8u;
        // 0x204bac: 0x131100  sll         $v0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204BB0u;
        goto label_204bb0;
    }
    ctx->pc = 0x204BA8u;
    {
        const bool branch_taken_0x204ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BA8u;
        // 0x204bac: 0x131100  sll         $v0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ba8) {
            ctx->pc = 0x204BB8u;
            goto label_204bb8;
        }
    }
    ctx->pc = 0x204BB0u;
label_204bb0:
    // 0x204bb0: 0x10000103  b           . + 4 + (0x103 << 2)
label_204bb4:
    if (ctx->pc == 0x204BB4u) {
        ctx->pc = 0x204BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BB0u;
        // 0x204bb4: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204BB8u;
        goto label_204bb8;
    }
    ctx->pc = 0x204BB0u;
    {
        const bool branch_taken_0x204bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BB0u;
        // 0x204bb4: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204bb0) {
            ctx->pc = 0x204FC0u;
            { ctx->pc = 0x204fc0; return; }
        }
    }
    ctx->pc = 0x204BB8u;
label_204bb8:
    // 0x204bb8: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x204bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_204bbc:
    // 0x204bbc: 0x432004  sllv        $a0, $v1, $v0
    ctx->pc = 0x204bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_204bc0:
    // 0x204bc0: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x204bc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_204bc4:
    // 0x204bc4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x204bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_204bc8:
    // 0x204bc8: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_204bcc:
    if (ctx->pc == 0x204BCCu) {
        ctx->pc = 0x204BD0u;
        goto label_204bd0;
    }
    ctx->pc = 0x204BC8u;
    {
        const bool branch_taken_0x204bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x204bc8) {
            ctx->pc = 0x204C64u;
            goto label_204c64;
        }
    }
    ctx->pc = 0x204BD0u;
label_204bd0:
    // 0x204bd0: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x204bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204bd4:
    // 0x204bd4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x204bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_204bd8:
    // 0x204bd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_204bdc:
    // 0x204bdc: 0x8c522498  lw          $s2, 0x2498($v0)
    ctx->pc = 0x204bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9368)));
label_204be0:
    // 0x204be0: 0x2a4100ab  slti        $at, $s2, 0xAB
    ctx->pc = 0x204be0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)171) ? 1 : 0);
label_204be4:
    // 0x204be4: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
label_204be8:
    if (ctx->pc == 0x204BE8u) {
        ctx->pc = 0x204BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BE4u;
        // 0x204be8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204BECu;
        goto label_204bec;
    }
    ctx->pc = 0x204BE4u;
    {
        const bool branch_taken_0x204be4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BE4u;
        // 0x204be8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204be4) {
            ctx->pc = 0x204C50u;
            goto label_204c50;
        }
    }
    ctx->pc = 0x204BECu;
label_204bec:
    // 0x204bec: 0xc05b420  jal         func_16D080
label_204bf0:
    if (ctx->pc == 0x204BF0u) {
        ctx->pc = 0x204BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BECu;
        // 0x204bf0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204BF4u;
        goto label_204bf4;
    }
    ctx->pc = 0x204BECu;
    SET_GPR_U32(ctx, 31, 0x204BF4u);
    ctx->pc = 0x204BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204BECu;
    // 0x204bf0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x204BF4u;
label_204bf4:
    // 0x204bf4: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x204bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204bf8:
    // 0x204bf8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x204bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_204bfc:
    // 0x204bfc: 0x10000008  b           . + 4 + (0x8 << 2)
label_204c00:
    if (ctx->pc == 0x204C00u) {
        ctx->pc = 0x204C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BFCu;
        // 0x204c00: 0xac432488  sw          $v1, 0x2488($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204C04u;
        goto label_204c04;
    }
    ctx->pc = 0x204BFCu;
    {
        const bool branch_taken_0x204bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204BFCu;
        // 0x204c00: 0xac432488  sw          $v1, 0x2488($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204bfc) {
            ctx->pc = 0x204C20u;
            goto label_204c20;
        }
    }
    ctx->pc = 0x204C04u;
label_204c04:
    // 0x204c04: 0x0  nop
    ctx->pc = 0x204c04u;
    // NOP
label_204c08:
    // 0x204c08: 0xc07b48c  jal         func_1ED230
label_204c0c:
    if (ctx->pc == 0x204C0Cu) {
        ctx->pc = 0x204C10u;
        goto label_204c10;
    }
    ctx->pc = 0x204C08u;
    SET_GPR_U32(ctx, 31, 0x204C10u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x204C10u;
label_204c10:
    // 0x204c10: 0x8f8390f8  lw          $v1, -0x6F08($gp)
    ctx->pc = 0x204c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204c14:
    // 0x204c14: 0x8c622488  lw          $v0, 0x2488($v1)
    ctx->pc = 0x204c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9352)));
label_204c18:
    // 0x204c18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x204c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_204c1c:
    // 0x204c1c: 0xac622488  sw          $v0, 0x2488($v1)
    ctx->pc = 0x204c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9352), GPR_U32(ctx, 2));
label_204c20:
    // 0x204c20: 0x8f8490f8  lw          $a0, -0x6F08($gp)
    ctx->pc = 0x204c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204c24:
    // 0x204c24: 0x8c822488  lw          $v0, 0x2488($a0)
    ctx->pc = 0x204c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 9352)));
label_204c28:
    // 0x204c28: 0x1c40fff6  bgtz        $v0, . + 4 + (-0xA << 2)
label_204c2c:
    if (ctx->pc == 0x204C2Cu) {
        ctx->pc = 0x204C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C28u;
        // 0x204c2c: 0x1318c0  sll         $v1, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204C30u;
        goto label_204c30;
    }
    ctx->pc = 0x204C28u;
    {
        const bool branch_taken_0x204c28 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x204C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C28u;
        // 0x204c2c: 0x1318c0  sll         $v1, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c28) {
            ctx->pc = 0x204C04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204c04;
        }
    }
    ctx->pc = 0x204C30u;
label_204c30:
    // 0x204c30: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x204c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_204c34:
    // 0x204c34: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x204c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_204c38:
    // 0x204c38: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x204c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_204c3c:
    // 0x204c3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x204c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_204c40:
    // 0x204c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_204c44:
    // 0x204c44: 0xa052367d  sb          $s2, 0x367D($v0)
    ctx->pc = 0x204c44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13949), (uint8_t)GPR_U32(ctx, 18));
label_204c48:
    // 0x204c48: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_204c4c:
    if (ctx->pc == 0x204C4Cu) {
        ctx->pc = 0x204C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C48u;
        // 0x204c4c: 0xac922494  sw          $s2, 0x2494($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 9364), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204C50u;
        goto label_204c50;
    }
    ctx->pc = 0x204C48u;
    {
        const bool branch_taken_0x204c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C48u;
        // 0x204c4c: 0xac922494  sw          $s2, 0x2494($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 9364), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c48) {
            ctx->pc = 0x204FB0u;
            { ctx->pc = 0x204fb0; return; }
        }
    }
    ctx->pc = 0x204C50u;
label_204c50:
    // 0x204c50: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x204c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_204c54:
    // 0x204c54: 0xc05b420  jal         func_16D080
label_204c58:
    if (ctx->pc == 0x204C58u) {
        ctx->pc = 0x204C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C54u;
        // 0x204c58: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204C5Cu;
        goto label_204c5c;
    }
    ctx->pc = 0x204C54u;
    SET_GPR_U32(ctx, 31, 0x204C5Cu);
    ctx->pc = 0x204C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C54u;
    // 0x204c58: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x204C5Cu;
label_204c5c:
    // 0x204c5c: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_204c60:
    if (ctx->pc == 0x204C60u) {
        ctx->pc = 0x204C64u;
        goto label_204c64;
    }
    ctx->pc = 0x204C5Cu;
    {
        const bool branch_taken_0x204c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204c5c) {
            ctx->pc = 0x204FB0u;
            { ctx->pc = 0x204fb0; return; }
        }
    }
    ctx->pc = 0x204C64u;
label_204c64:
    // 0x204c64: 0x0  nop
    ctx->pc = 0x204c64u;
    // NOP
label_204c68:
    // 0x204c68: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x204c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_204c6c:
    // 0x204c6c: 0x432004  sllv        $a0, $v1, $v0
    ctx->pc = 0x204c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_204c70:
    // 0x204c70: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x204c70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_204c74:
    // 0x204c74: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x204c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_204c78:
    // 0x204c78: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_204c7c:
    if (ctx->pc == 0x204C7Cu) {
        ctx->pc = 0x204C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C78u;
        // 0x204c7c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204C80u;
        goto label_204c80;
    }
    ctx->pc = 0x204C78u;
    {
        const bool branch_taken_0x204c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C78u;
        // 0x204c7c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c78) {
            ctx->pc = 0x204C90u;
            goto label_204c90;
        }
    }
    ctx->pc = 0x204C80u;
label_204c80:
    // 0x204c80: 0xc05b420  jal         func_16D080
label_204c84:
    if (ctx->pc == 0x204C84u) {
        ctx->pc = 0x204C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204C80u;
        // 0x204c84: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204C88u;
        goto label_204c88;
    }
    ctx->pc = 0x204C80u;
    SET_GPR_U32(ctx, 31, 0x204C88u);
    ctx->pc = 0x204C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C80u;
    // 0x204c84: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x204C88u;
label_204c88:
    // 0x204c88: 0x100000cd  b           . + 4 + (0xCD << 2)
label_204c8c:
    if (ctx->pc == 0x204C8Cu) {
        ctx->pc = 0x204C90u;
        goto label_204c90;
    }
    ctx->pc = 0x204C88u;
    {
        const bool branch_taken_0x204c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204c88) {
            ctx->pc = 0x204FC0u;
            { ctx->pc = 0x204fc0; return; }
        }
    }
    ctx->pc = 0x204C90u;
label_204c90:
    // 0x204c90: 0xdf8387c0  ld          $v1, -0x7840($gp)
    ctx->pc = 0x204c90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_204c94:
    // 0x204c94: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x204c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_204c98:
    // 0x204c98: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x204c98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_204c9c:
    // 0x204c9c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x204c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_204ca0:
    // 0x204ca0: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_204ca4:
    if (ctx->pc == 0x204CA4u) {
        ctx->pc = 0x204CA8u;
        goto label_204ca8;
    }
    ctx->pc = 0x204CA0u;
    {
        const bool branch_taken_0x204ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x204ca0) {
            ctx->pc = 0x204D50u;
            goto label_204d50;
        }
    }
    ctx->pc = 0x204CA8u;
label_204ca8:
    // 0x204ca8: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x204ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_204cac:
    // 0x204cac: 0x144000c0  bnez        $v0, . + 4 + (0xC0 << 2)
label_204cb0:
    if (ctx->pc == 0x204CB0u) {
        ctx->pc = 0x204CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CACu;
        // 0x204cb0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204CB4u;
        goto label_204cb4;
    }
    ctx->pc = 0x204CACu;
    {
        const bool branch_taken_0x204cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CACu;
        // 0x204cb0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204cac) {
            ctx->pc = 0x204FB0u;
            { ctx->pc = 0x204fb0; return; }
        }
    }
    ctx->pc = 0x204CB4u;
label_204cb4:
    // 0x204cb4: 0xc05b420  jal         func_16D080
label_204cb8:
    if (ctx->pc == 0x204CB8u) {
        ctx->pc = 0x204CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CB4u;
        // 0x204cb8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204CBCu;
        goto label_204cbc;
    }
    ctx->pc = 0x204CB4u;
    SET_GPR_U32(ctx, 31, 0x204CBCu);
    ctx->pc = 0x204CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204CB4u;
    // 0x204cb8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x204CBCu;
label_204cbc:
    // 0x204cbc: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x204cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204cc0:
    // 0x204cc0: 0x2610fffd  addiu       $s0, $s0, -0x3
    ctx->pc = 0x204cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
label_204cc4:
    // 0x204cc4: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x204cc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_204cc8:
    // 0x204cc8: 0x241200ab  addiu       $s2, $zero, 0xAB
    ctx->pc = 0x204cc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_204ccc:
    // 0x204ccc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_204cd0:
    if (ctx->pc == 0x204CD0u) {
        ctx->pc = 0x204CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CCCu;
        // 0x204cd0: 0xac502490  sw          $s0, 0x2490($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9360), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204CD4u;
        goto label_204cd4;
    }
    ctx->pc = 0x204CCCu;
    {
        const bool branch_taken_0x204ccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CCCu;
        // 0x204cd0: 0xac502490  sw          $s0, 0x2490($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9360), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ccc) {
            ctx->pc = 0x204CE8u;
            goto label_204ce8;
        }
    }
    ctx->pc = 0x204CD4u;
label_204cd4:
    // 0x204cd4: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x204cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204cd8:
    // 0x204cd8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x204cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_204cdc:
    // 0x204cdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_204ce0:
    // 0x204ce0: 0x8c522498  lw          $s2, 0x2498($v0)
    ctx->pc = 0x204ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9368)));
label_204ce4:
    // 0x204ce4: 0x0  nop
    ctx->pc = 0x204ce4u;
    // NOP
label_204ce8:
    // 0x204ce8: 0x2a4100ab  slti        $at, $s2, 0xAB
    ctx->pc = 0x204ce8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)171) ? 1 : 0);
label_204cec:
    // 0x204cec: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_204cf0:
    if (ctx->pc == 0x204CF0u) {
        ctx->pc = 0x204CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CECu;
        // 0x204cf0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204CF4u;
        goto label_204cf4;
    }
    ctx->pc = 0x204CECu;
    {
        const bool branch_taken_0x204cec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CECu;
        // 0x204cf0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204cec) {
            ctx->pc = 0x204D38u;
            goto label_204d38;
        }
    }
    ctx->pc = 0x204CF4u;
label_204cf4:
    // 0x204cf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x204cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204cf8:
    // 0x204cf8: 0x240601a0  addiu       $a2, $zero, 0x1A0
    ctx->pc = 0x204cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
label_204cfc:
    // 0x204cfc: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x204cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_204d00:
    // 0x204d00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x204d00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204d04:
    // 0x204d04: 0xc07fadc  jal         func_1FEB70
label_204d08:
    if (ctx->pc == 0x204D08u) {
        ctx->pc = 0x204D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D04u;
        // 0x204d08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204D0Cu;
        goto label_204d0c;
    }
    ctx->pc = 0x204D04u;
    SET_GPR_U32(ctx, 31, 0x204D0Cu);
    ctx->pc = 0x204D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D04u;
    // 0x204d08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB70u;
    { ctx->pc = 0x1feb70; return; }
    ctx->pc = 0x204D0Cu;
label_204d0c:
    // 0x204d0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x204d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204d10:
    // 0x204d10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x204d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_204d14:
    // 0x204d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204d18:
    // 0x204d18: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x204d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_204d1c:
    // 0x204d1c: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x204d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_204d20:
    // 0x204d20: 0x240900c8  addiu       $t1, $zero, 0xC8
    ctx->pc = 0x204d20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_204d24:
    // 0x204d24: 0x240a0088  addiu       $t2, $zero, 0x88
    ctx->pc = 0x204d24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_204d28:
    // 0x204d28: 0xc07f47c  jal         func_1FD1F0
label_204d2c:
    if (ctx->pc == 0x204D2Cu) {
        ctx->pc = 0x204D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D28u;
        // 0x204d2c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204D30u;
        goto label_204d30;
    }
    ctx->pc = 0x204D28u;
    SET_GPR_U32(ctx, 31, 0x204D30u);
    ctx->pc = 0x204D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D28u;
    // 0x204d2c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F0u;
    { ctx->pc = 0x1fd1f0; return; }
    ctx->pc = 0x204D30u;
label_204d30:
    // 0x204d30: 0x1000009f  b           . + 4 + (0x9F << 2)
label_204d34:
    if (ctx->pc == 0x204D34u) {
        ctx->pc = 0x204D38u;
        goto label_204d38;
    }
    ctx->pc = 0x204D30u;
    {
        const bool branch_taken_0x204d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204d30) {
            ctx->pc = 0x204FB0u;
            { ctx->pc = 0x204fb0; return; }
        }
    }
    ctx->pc = 0x204D38u;
label_204d38:
    // 0x204d38: 0xc07fa38  jal         func_1FE8E0
label_204d3c:
    if (ctx->pc == 0x204D3Cu) {
        ctx->pc = 0x204D40u;
        goto label_204d40;
    }
    ctx->pc = 0x204D38u;
    SET_GPR_U32(ctx, 31, 0x204D40u);
    ctx->pc = 0x1FE8E0u;
    { ctx->pc = 0x1fe8e0; return; }
    ctx->pc = 0x204D40u;
label_204d40:
    // 0x204d40: 0xc07f468  jal         func_1FD1A0
label_204d44:
    if (ctx->pc == 0x204D44u) {
        ctx->pc = 0x204D48u;
        goto label_204d48;
    }
    ctx->pc = 0x204D40u;
    SET_GPR_U32(ctx, 31, 0x204D48u);
    ctx->pc = 0x1FD1A0u;
    { ctx->pc = 0x1fd1a0; return; }
    ctx->pc = 0x204D48u;
label_204d48:
    // 0x204d48: 0x10000099  b           . + 4 + (0x99 << 2)
label_204d4c:
    if (ctx->pc == 0x204D4Cu) {
        ctx->pc = 0x204D50u;
        goto label_204d50;
    }
    ctx->pc = 0x204D48u;
    {
        const bool branch_taken_0x204d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204d48) {
            ctx->pc = 0x204FB0u;
            { ctx->pc = 0x204fb0; return; }
        }
    }
    ctx->pc = 0x204D50u;
label_204d50:
    // 0x204d50: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x204d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_204d54:
    // 0x204d54: 0x432004  sllv        $a0, $v1, $v0
    ctx->pc = 0x204d54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_204d58:
    // 0x204d58: 0xdf8387c0  ld          $v1, -0x7840($gp)
    ctx->pc = 0x204d58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_204d5c:
    // 0x204d5c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x204d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_204d60:
    // 0x204d60: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_204d64:
    if (ctx->pc == 0x204D64u) {
        ctx->pc = 0x204D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D60u;
        // 0x204d64: 0x2a010003  slti        $at, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x204D68u;
        goto label_204d68;
    }
    ctx->pc = 0x204D60u;
    {
        const bool branch_taken_0x204d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D60u;
        // 0x204d64: 0x2a010003  slti        $at, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d60) {
            ctx->pc = 0x204E28u;
            { ctx->pc = 0x204e28; return; }
        }
    }
    ctx->pc = 0x204D68u;
label_204d68:
    // 0x204d68: 0x10200091  beqz        $at, . + 4 + (0x91 << 2)
label_204d6c:
    if (ctx->pc == 0x204D6Cu) {
        ctx->pc = 0x204D70u;
        goto label_204d70;
    }
    ctx->pc = 0x204D68u;
    {
        const bool branch_taken_0x204d68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x204d68) {
            ctx->pc = 0x204FB0u;
            { ctx->pc = 0x204fb0; return; }
        }
    }
    ctx->pc = 0x204D70u;
label_204d70:
    // 0x204d70: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x204d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_204d74:
    // 0x204d74: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x204d74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_204d78:
    // 0x204d78: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_204d7c:
    if (ctx->pc == 0x204D7Cu) {
        ctx->pc = 0x204D80u;
        goto label_204d80;
    }
    ctx->pc = 0x204D78u;
    {
        const bool branch_taken_0x204d78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x204d78) {
            ctx->pc = 0x204D84u;
            goto label_204d84;
        }
    }
    ctx->pc = 0x204D80u;
label_204d80:
    // 0x204d80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x204d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_204d84:
    // 0x204d84: 0x0  nop
    ctx->pc = 0x204d84u;
    // NOP
label_204d88:
    // 0x204d88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x204d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204d8c:
    // 0x204d8c: 0xc05b420  jal         func_16D080
label_204d90:
    if (ctx->pc == 0x204D90u) {
        ctx->pc = 0x204D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D8Cu;
        // 0x204d90: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204D94u;
        goto label_204d94;
    }
    ctx->pc = 0x204D8Cu;
    SET_GPR_U32(ctx, 31, 0x204D94u);
    ctx->pc = 0x204D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D8Cu;
    // 0x204d90: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x204D94u;
label_204d94:
    // 0x204d94: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x204d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204d98:
    // 0x204d98: 0x2a010005  slti        $at, $s0, 0x5
    ctx->pc = 0x204d98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_204d9c:
    // 0x204d9c: 0x241200ab  addiu       $s2, $zero, 0xAB
    ctx->pc = 0x204d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_204da0:
    // 0x204da0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_204da4:
    if (ctx->pc == 0x204DA4u) {
        ctx->pc = 0x204DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DA0u;
        // 0x204da4: 0xac502490  sw          $s0, 0x2490($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9360), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x204DA8u;
        goto label_204da8;
    }
    ctx->pc = 0x204DA0u;
    {
        const bool branch_taken_0x204da0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204DA0u;
        // 0x204da4: 0xac502490  sw          $s0, 0x2490($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9360), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204da0) {
            ctx->pc = 0x204DBCu;
            { ctx->pc = 0x204dbc; return; }
        }
    }
    ctx->pc = 0x204DA8u;
label_204da8:
    // 0x204da8: 0x8f8290f8  lw          $v0, -0x6F08($gp)
    ctx->pc = 0x204da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938872)));
label_204dac:
    // 0x204dac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x204dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x204db0u;
    return;
}

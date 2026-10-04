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


void FUN_0014eba0_part672(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2965d0u: goto label_2965d0;
        case 0x2965d4u: goto label_2965d4;
        case 0x2965d8u: goto label_2965d8;
        case 0x2965dcu: goto label_2965dc;
        case 0x2965e0u: goto label_2965e0;
        case 0x2965e4u: goto label_2965e4;
        case 0x2965e8u: goto label_2965e8;
        case 0x2965ecu: goto label_2965ec;
        case 0x2965f0u: goto label_2965f0;
        case 0x2965f4u: goto label_2965f4;
        case 0x2965f8u: goto label_2965f8;
        case 0x2965fcu: goto label_2965fc;
        case 0x296600u: goto label_296600;
        case 0x296604u: goto label_296604;
        case 0x296608u: goto label_296608;
        case 0x29660cu: goto label_29660c;
        case 0x296610u: goto label_296610;
        case 0x296614u: goto label_296614;
        case 0x296618u: goto label_296618;
        case 0x29661cu: goto label_29661c;
        case 0x296620u: goto label_296620;
        case 0x296624u: goto label_296624;
        case 0x296628u: goto label_296628;
        case 0x29662cu: goto label_29662c;
        case 0x296630u: goto label_296630;
        case 0x296634u: goto label_296634;
        case 0x296638u: goto label_296638;
        case 0x29663cu: goto label_29663c;
        case 0x296640u: goto label_296640;
        case 0x296644u: goto label_296644;
        case 0x296648u: goto label_296648;
        case 0x29664cu: goto label_29664c;
        case 0x296650u: goto label_296650;
        case 0x296654u: goto label_296654;
        case 0x296658u: goto label_296658;
        case 0x29665cu: goto label_29665c;
        case 0x296660u: goto label_296660;
        case 0x296664u: goto label_296664;
        case 0x296668u: goto label_296668;
        case 0x29666cu: goto label_29666c;
        case 0x296670u: goto label_296670;
        case 0x296674u: goto label_296674;
        case 0x296678u: goto label_296678;
        case 0x29667cu: goto label_29667c;
        case 0x296680u: goto label_296680;
        case 0x296684u: goto label_296684;
        case 0x296688u: goto label_296688;
        case 0x29668cu: goto label_29668c;
        case 0x296690u: goto label_296690;
        case 0x296694u: goto label_296694;
        case 0x296698u: goto label_296698;
        case 0x29669cu: goto label_29669c;
        case 0x2966a0u: goto label_2966a0;
        case 0x2966a4u: goto label_2966a4;
        case 0x2966a8u: goto label_2966a8;
        case 0x2966acu: goto label_2966ac;
        case 0x2966b0u: goto label_2966b0;
        case 0x2966b4u: goto label_2966b4;
        case 0x2966b8u: goto label_2966b8;
        case 0x2966bcu: goto label_2966bc;
        case 0x2966c0u: goto label_2966c0;
        case 0x2966c4u: goto label_2966c4;
        case 0x2966c8u: goto label_2966c8;
        case 0x2966ccu: goto label_2966cc;
        case 0x2966d0u: goto label_2966d0;
        case 0x2966d4u: goto label_2966d4;
        case 0x2966d8u: goto label_2966d8;
        case 0x2966dcu: goto label_2966dc;
        case 0x2966e0u: goto label_2966e0;
        case 0x2966e4u: goto label_2966e4;
        case 0x2966e8u: goto label_2966e8;
        case 0x2966ecu: goto label_2966ec;
        case 0x2966f0u: goto label_2966f0;
        case 0x2966f4u: goto label_2966f4;
        case 0x2966f8u: goto label_2966f8;
        case 0x2966fcu: goto label_2966fc;
        case 0x296700u: goto label_296700;
        case 0x296704u: goto label_296704;
        case 0x296708u: goto label_296708;
        case 0x29670cu: goto label_29670c;
        case 0x296710u: goto label_296710;
        case 0x296714u: goto label_296714;
        case 0x296718u: goto label_296718;
        case 0x29671cu: goto label_29671c;
        case 0x296720u: goto label_296720;
        case 0x296724u: goto label_296724;
        case 0x296728u: goto label_296728;
        case 0x29672cu: goto label_29672c;
        case 0x296730u: goto label_296730;
        case 0x296734u: goto label_296734;
        case 0x296738u: goto label_296738;
        case 0x29673cu: goto label_29673c;
        case 0x296740u: goto label_296740;
        case 0x296744u: goto label_296744;
        case 0x296748u: goto label_296748;
        case 0x29674cu: goto label_29674c;
        case 0x296750u: goto label_296750;
        case 0x296754u: goto label_296754;
        case 0x296758u: goto label_296758;
        case 0x29675cu: goto label_29675c;
        case 0x296760u: goto label_296760;
        case 0x296764u: goto label_296764;
        case 0x296768u: goto label_296768;
        case 0x29676cu: goto label_29676c;
        case 0x296770u: goto label_296770;
        case 0x296774u: goto label_296774;
        case 0x296778u: goto label_296778;
        case 0x29677cu: goto label_29677c;
        case 0x296780u: goto label_296780;
        case 0x296784u: goto label_296784;
        case 0x296788u: goto label_296788;
        case 0x29678cu: goto label_29678c;
        case 0x296790u: goto label_296790;
        case 0x296794u: goto label_296794;
        case 0x296798u: goto label_296798;
        case 0x29679cu: goto label_29679c;
        case 0x2967a0u: goto label_2967a0;
        case 0x2967a4u: goto label_2967a4;
        case 0x2967a8u: goto label_2967a8;
        case 0x2967acu: goto label_2967ac;
        case 0x2967b0u: goto label_2967b0;
        case 0x2967b4u: goto label_2967b4;
        case 0x2967b8u: goto label_2967b8;
        case 0x2967bcu: goto label_2967bc;
        case 0x2967c0u: goto label_2967c0;
        case 0x2967c4u: goto label_2967c4;
        case 0x2967c8u: goto label_2967c8;
        case 0x2967ccu: goto label_2967cc;
        case 0x2967d0u: goto label_2967d0;
        case 0x2967d4u: goto label_2967d4;
        case 0x2967d8u: goto label_2967d8;
        case 0x2967dcu: goto label_2967dc;
        case 0x2967e0u: goto label_2967e0;
        case 0x2967e4u: goto label_2967e4;
        case 0x2967e8u: goto label_2967e8;
        case 0x2967ecu: goto label_2967ec;
        case 0x2967f0u: goto label_2967f0;
        case 0x2967f4u: goto label_2967f4;
        case 0x2967f8u: goto label_2967f8;
        case 0x2967fcu: goto label_2967fc;
        case 0x296800u: goto label_296800;
        case 0x296804u: goto label_296804;
        case 0x296808u: goto label_296808;
        case 0x29680cu: goto label_29680c;
        case 0x296810u: goto label_296810;
        case 0x296814u: goto label_296814;
        case 0x296818u: goto label_296818;
        case 0x29681cu: goto label_29681c;
        case 0x296820u: goto label_296820;
        case 0x296824u: goto label_296824;
        case 0x296828u: goto label_296828;
        case 0x29682cu: goto label_29682c;
        case 0x296830u: goto label_296830;
        case 0x296834u: goto label_296834;
        case 0x296838u: goto label_296838;
        case 0x29683cu: goto label_29683c;
        case 0x296840u: goto label_296840;
        case 0x296844u: goto label_296844;
        case 0x296848u: goto label_296848;
        case 0x29684cu: goto label_29684c;
        case 0x296850u: goto label_296850;
        case 0x296854u: goto label_296854;
        case 0x296858u: goto label_296858;
        case 0x29685cu: goto label_29685c;
        case 0x296860u: goto label_296860;
        case 0x296864u: goto label_296864;
        case 0x296868u: goto label_296868;
        case 0x29686cu: goto label_29686c;
        case 0x296870u: goto label_296870;
        case 0x296874u: goto label_296874;
        case 0x296878u: goto label_296878;
        case 0x29687cu: goto label_29687c;
        case 0x296880u: goto label_296880;
        case 0x296884u: goto label_296884;
        case 0x296888u: goto label_296888;
        case 0x29688cu: goto label_29688c;
        case 0x296890u: goto label_296890;
        case 0x296894u: goto label_296894;
        case 0x296898u: goto label_296898;
        case 0x29689cu: goto label_29689c;
        case 0x2968a0u: goto label_2968a0;
        case 0x2968a4u: goto label_2968a4;
        case 0x2968a8u: goto label_2968a8;
        case 0x2968acu: goto label_2968ac;
        case 0x2968b0u: goto label_2968b0;
        case 0x2968b4u: goto label_2968b4;
        case 0x2968b8u: goto label_2968b8;
        case 0x2968bcu: goto label_2968bc;
        case 0x2968c0u: goto label_2968c0;
        case 0x2968c4u: goto label_2968c4;
        case 0x2968c8u: goto label_2968c8;
        case 0x2968ccu: goto label_2968cc;
        case 0x2968d0u: goto label_2968d0;
        case 0x2968d4u: goto label_2968d4;
        case 0x2968d8u: goto label_2968d8;
        case 0x2968dcu: goto label_2968dc;
        case 0x2968e0u: goto label_2968e0;
        case 0x2968e4u: goto label_2968e4;
        case 0x2968e8u: goto label_2968e8;
        case 0x2968ecu: goto label_2968ec;
        case 0x2968f0u: goto label_2968f0;
        case 0x2968f4u: goto label_2968f4;
        case 0x2968f8u: goto label_2968f8;
        case 0x2968fcu: goto label_2968fc;
        case 0x296900u: goto label_296900;
        case 0x296904u: goto label_296904;
        case 0x296908u: goto label_296908;
        case 0x29690cu: goto label_29690c;
        case 0x296910u: goto label_296910;
        case 0x296914u: goto label_296914;
        case 0x296918u: goto label_296918;
        case 0x29691cu: goto label_29691c;
        case 0x296920u: goto label_296920;
        case 0x296924u: goto label_296924;
        case 0x296928u: goto label_296928;
        case 0x29692cu: goto label_29692c;
        case 0x296930u: goto label_296930;
        case 0x296934u: goto label_296934;
        case 0x296938u: goto label_296938;
        case 0x29693cu: goto label_29693c;
        case 0x296940u: goto label_296940;
        case 0x296944u: goto label_296944;
        case 0x296948u: goto label_296948;
        case 0x29694cu: goto label_29694c;
        case 0x296950u: goto label_296950;
        case 0x296954u: goto label_296954;
        case 0x296958u: goto label_296958;
        case 0x29695cu: goto label_29695c;
        case 0x296960u: goto label_296960;
        case 0x296964u: goto label_296964;
        case 0x296968u: goto label_296968;
        case 0x29696cu: goto label_29696c;
        case 0x296970u: goto label_296970;
        case 0x296974u: goto label_296974;
        case 0x296978u: goto label_296978;
        case 0x29697cu: goto label_29697c;
        case 0x296980u: goto label_296980;
        case 0x296984u: goto label_296984;
        case 0x296988u: goto label_296988;
        case 0x29698cu: goto label_29698c;
        case 0x296990u: goto label_296990;
        case 0x296994u: goto label_296994;
        case 0x296998u: goto label_296998;
        case 0x29699cu: goto label_29699c;
        case 0x2969a0u: goto label_2969a0;
        case 0x2969a4u: goto label_2969a4;
        case 0x2969a8u: goto label_2969a8;
        case 0x2969acu: goto label_2969ac;
        case 0x2969b0u: goto label_2969b0;
        case 0x2969b4u: goto label_2969b4;
        case 0x2969b8u: goto label_2969b8;
        case 0x2969bcu: goto label_2969bc;
        case 0x2969c0u: goto label_2969c0;
        case 0x2969c4u: goto label_2969c4;
        case 0x2969c8u: goto label_2969c8;
        case 0x2969ccu: goto label_2969cc;
        case 0x2969d0u: goto label_2969d0;
        case 0x2969d4u: goto label_2969d4;
        case 0x2969d8u: goto label_2969d8;
        case 0x2969dcu: goto label_2969dc;
        case 0x2969e0u: goto label_2969e0;
        case 0x2969e4u: goto label_2969e4;
        case 0x2969e8u: goto label_2969e8;
        case 0x2969ecu: goto label_2969ec;
        case 0x2969f0u: goto label_2969f0;
        case 0x2969f4u: goto label_2969f4;
        case 0x2969f8u: goto label_2969f8;
        case 0x2969fcu: goto label_2969fc;
        case 0x296a00u: goto label_296a00;
        case 0x296a04u: goto label_296a04;
        case 0x296a08u: goto label_296a08;
        case 0x296a0cu: goto label_296a0c;
        case 0x296a10u: goto label_296a10;
        case 0x296a14u: goto label_296a14;
        case 0x296a18u: goto label_296a18;
        case 0x296a1cu: goto label_296a1c;
        case 0x296a20u: goto label_296a20;
        case 0x296a24u: goto label_296a24;
        case 0x296a28u: goto label_296a28;
        case 0x296a2cu: goto label_296a2c;
        case 0x296a30u: goto label_296a30;
        case 0x296a34u: goto label_296a34;
        case 0x296a38u: goto label_296a38;
        case 0x296a3cu: goto label_296a3c;
        case 0x296a40u: goto label_296a40;
        case 0x296a44u: goto label_296a44;
        case 0x296a48u: goto label_296a48;
        case 0x296a4cu: goto label_296a4c;
        case 0x296a50u: goto label_296a50;
        case 0x296a54u: goto label_296a54;
        case 0x296a58u: goto label_296a58;
        case 0x296a5cu: goto label_296a5c;
        case 0x296a60u: goto label_296a60;
        case 0x296a64u: goto label_296a64;
        case 0x296a68u: goto label_296a68;
        case 0x296a6cu: goto label_296a6c;
        case 0x296a70u: goto label_296a70;
        case 0x296a74u: goto label_296a74;
        case 0x296a78u: goto label_296a78;
        case 0x296a7cu: goto label_296a7c;
        case 0x296a80u: goto label_296a80;
        case 0x296a84u: goto label_296a84;
        case 0x296a88u: goto label_296a88;
        case 0x296a8cu: goto label_296a8c;
        case 0x296a90u: goto label_296a90;
        case 0x296a94u: goto label_296a94;
        case 0x296a98u: goto label_296a98;
        case 0x296a9cu: goto label_296a9c;
        case 0x296aa0u: goto label_296aa0;
        case 0x296aa4u: goto label_296aa4;
        case 0x296aa8u: goto label_296aa8;
        case 0x296aacu: goto label_296aac;
        case 0x296ab0u: goto label_296ab0;
        case 0x296ab4u: goto label_296ab4;
        case 0x296ab8u: goto label_296ab8;
        case 0x296abcu: goto label_296abc;
        case 0x296ac0u: goto label_296ac0;
        case 0x296ac4u: goto label_296ac4;
        case 0x296ac8u: goto label_296ac8;
        case 0x296accu: goto label_296acc;
        case 0x296ad0u: goto label_296ad0;
        case 0x296ad4u: goto label_296ad4;
        case 0x296ad8u: goto label_296ad8;
        case 0x296adcu: goto label_296adc;
        case 0x296ae0u: goto label_296ae0;
        case 0x296ae4u: goto label_296ae4;
        case 0x296ae8u: goto label_296ae8;
        case 0x296aecu: goto label_296aec;
        case 0x296af0u: goto label_296af0;
        case 0x296af4u: goto label_296af4;
        case 0x296af8u: goto label_296af8;
        case 0x296afcu: goto label_296afc;
        case 0x296b00u: goto label_296b00;
        case 0x296b04u: goto label_296b04;
        case 0x296b08u: goto label_296b08;
        case 0x296b0cu: goto label_296b0c;
        case 0x296b10u: goto label_296b10;
        case 0x296b14u: goto label_296b14;
        case 0x296b18u: goto label_296b18;
        case 0x296b1cu: goto label_296b1c;
        case 0x296b20u: goto label_296b20;
        case 0x296b24u: goto label_296b24;
        case 0x296b28u: goto label_296b28;
        case 0x296b2cu: goto label_296b2c;
        case 0x296b30u: goto label_296b30;
        case 0x296b34u: goto label_296b34;
        case 0x296b38u: goto label_296b38;
        case 0x296b3cu: goto label_296b3c;
        case 0x296b40u: goto label_296b40;
        case 0x296b44u: goto label_296b44;
        case 0x296b48u: goto label_296b48;
        case 0x296b4cu: goto label_296b4c;
        case 0x296b50u: goto label_296b50;
        case 0x296b54u: goto label_296b54;
        case 0x296b58u: goto label_296b58;
        case 0x296b5cu: goto label_296b5c;
        case 0x296b60u: goto label_296b60;
        case 0x296b64u: goto label_296b64;
        case 0x296b68u: goto label_296b68;
        case 0x296b6cu: goto label_296b6c;
        case 0x296b70u: goto label_296b70;
        case 0x296b74u: goto label_296b74;
        case 0x296b78u: goto label_296b78;
        case 0x296b7cu: goto label_296b7c;
        case 0x296b80u: goto label_296b80;
        case 0x296b84u: goto label_296b84;
        case 0x296b88u: goto label_296b88;
        case 0x296b8cu: goto label_296b8c;
        case 0x296b90u: goto label_296b90;
        case 0x296b94u: goto label_296b94;
        case 0x296b98u: goto label_296b98;
        case 0x296b9cu: goto label_296b9c;
        case 0x296ba0u: goto label_296ba0;
        case 0x296ba4u: goto label_296ba4;
        case 0x296ba8u: goto label_296ba8;
        case 0x296bacu: goto label_296bac;
        case 0x296bb0u: goto label_296bb0;
        case 0x296bb4u: goto label_296bb4;
        case 0x296bb8u: goto label_296bb8;
        case 0x296bbcu: goto label_296bbc;
        case 0x296bc0u: goto label_296bc0;
        case 0x296bc4u: goto label_296bc4;
        case 0x296bc8u: goto label_296bc8;
        case 0x296bccu: goto label_296bcc;
        case 0x296bd0u: goto label_296bd0;
        case 0x296bd4u: goto label_296bd4;
        case 0x296bd8u: goto label_296bd8;
        case 0x296bdcu: goto label_296bdc;
        case 0x296be0u: goto label_296be0;
        case 0x296be4u: goto label_296be4;
        case 0x296be8u: goto label_296be8;
        case 0x296becu: goto label_296bec;
        case 0x296bf0u: goto label_296bf0;
        case 0x296bf4u: goto label_296bf4;
        case 0x296bf8u: goto label_296bf8;
        case 0x296bfcu: goto label_296bfc;
        case 0x296c00u: goto label_296c00;
        case 0x296c04u: goto label_296c04;
        case 0x296c08u: goto label_296c08;
        case 0x296c0cu: goto label_296c0c;
        case 0x296c10u: goto label_296c10;
        case 0x296c14u: goto label_296c14;
        case 0x296c18u: goto label_296c18;
        case 0x296c1cu: goto label_296c1c;
        case 0x296c20u: goto label_296c20;
        case 0x296c24u: goto label_296c24;
        case 0x296c28u: goto label_296c28;
        case 0x296c2cu: goto label_296c2c;
        case 0x296c30u: goto label_296c30;
        case 0x296c34u: goto label_296c34;
        case 0x296c38u: goto label_296c38;
        case 0x296c3cu: goto label_296c3c;
        case 0x296c40u: goto label_296c40;
        case 0x296c44u: goto label_296c44;
        case 0x296c48u: goto label_296c48;
        case 0x296c4cu: goto label_296c4c;
        case 0x296c50u: goto label_296c50;
        case 0x296c54u: goto label_296c54;
        case 0x296c58u: goto label_296c58;
        case 0x296c5cu: goto label_296c5c;
        case 0x296c60u: goto label_296c60;
        case 0x296c64u: goto label_296c64;
        case 0x296c68u: goto label_296c68;
        case 0x296c6cu: goto label_296c6c;
        case 0x296c70u: goto label_296c70;
        case 0x296c74u: goto label_296c74;
        case 0x296c78u: goto label_296c78;
        case 0x296c7cu: goto label_296c7c;
        case 0x296c80u: goto label_296c80;
        case 0x296c84u: goto label_296c84;
        case 0x296c88u: goto label_296c88;
        case 0x296c8cu: goto label_296c8c;
        case 0x296c90u: goto label_296c90;
        case 0x296c94u: goto label_296c94;
        case 0x296c98u: goto label_296c98;
        case 0x296c9cu: goto label_296c9c;
        case 0x296ca0u: goto label_296ca0;
        case 0x296ca4u: goto label_296ca4;
        case 0x296ca8u: goto label_296ca8;
        case 0x296cacu: goto label_296cac;
        case 0x296cb0u: goto label_296cb0;
        case 0x296cb4u: goto label_296cb4;
        case 0x296cb8u: goto label_296cb8;
        case 0x296cbcu: goto label_296cbc;
        case 0x296cc0u: goto label_296cc0;
        case 0x296cc4u: goto label_296cc4;
        case 0x296cc8u: goto label_296cc8;
        case 0x296cccu: goto label_296ccc;
        case 0x296cd0u: goto label_296cd0;
        case 0x296cd4u: goto label_296cd4;
        case 0x296cd8u: goto label_296cd8;
        case 0x296cdcu: goto label_296cdc;
        case 0x296ce0u: goto label_296ce0;
        case 0x296ce4u: goto label_296ce4;
        case 0x296ce8u: goto label_296ce8;
        case 0x296cecu: goto label_296cec;
        case 0x296cf0u: goto label_296cf0;
        case 0x296cf4u: goto label_296cf4;
        case 0x296cf8u: goto label_296cf8;
        case 0x296cfcu: goto label_296cfc;
        case 0x296d00u: goto label_296d00;
        case 0x296d04u: goto label_296d04;
        case 0x296d08u: goto label_296d08;
        case 0x296d0cu: goto label_296d0c;
        case 0x296d10u: goto label_296d10;
        case 0x296d14u: goto label_296d14;
        case 0x296d18u: goto label_296d18;
        case 0x296d1cu: goto label_296d1c;
        case 0x296d20u: goto label_296d20;
        case 0x296d24u: goto label_296d24;
        case 0x296d28u: goto label_296d28;
        case 0x296d2cu: goto label_296d2c;
        case 0x296d30u: goto label_296d30;
        case 0x296d34u: goto label_296d34;
        case 0x296d38u: goto label_296d38;
        case 0x296d3cu: goto label_296d3c;
        case 0x296d40u: goto label_296d40;
        case 0x296d44u: goto label_296d44;
        case 0x296d48u: goto label_296d48;
        case 0x296d4cu: goto label_296d4c;
        case 0x296d50u: goto label_296d50;
        case 0x296d54u: goto label_296d54;
        case 0x296d58u: goto label_296d58;
        case 0x296d5cu: goto label_296d5c;
        case 0x296d60u: goto label_296d60;
        case 0x296d64u: goto label_296d64;
        case 0x296d68u: goto label_296d68;
        case 0x296d6cu: goto label_296d6c;
        case 0x296d70u: goto label_296d70;
        case 0x296d74u: goto label_296d74;
        case 0x296d78u: goto label_296d78;
        case 0x296d7cu: goto label_296d7c;
        case 0x296d80u: goto label_296d80;
        case 0x296d84u: goto label_296d84;
        case 0x296d88u: goto label_296d88;
        case 0x296d8cu: goto label_296d8c;
        case 0x296d90u: goto label_296d90;
        case 0x296d94u: goto label_296d94;
        case 0x296d98u: goto label_296d98;
        case 0x296d9cu: goto label_296d9c;
        default: return;
    }

label_2965d0:
    // 0x2965d0: 0x1b7fe  dsrl32      $s6, $at, 31
    ctx->pc = 0x2965d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) >> (32 + 31));
label_2965d4:
    // 0x2965d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2965d4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2965D4 raw=0x00000001");
 /* MITIGATED */
label_2965d8:
    // 0x2965d8: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2965d8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2965D8 raw=0x00000441");
 /* MITIGATED */
label_2965dc:
    // 0x2965dc: 0x0  nop
    ctx->pc = 0x2965dcu;
    // NOP
label_2965e0:
    // 0x2965e0: 0x1b7ff  dsra32      $s6, $at, 31
    ctx->pc = 0x2965e0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 1) >> (32 + 31));
label_2965e4:
    // 0x2965e4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2965e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2965e8:
    // 0x2965e8: 0xc5c  .word       0x00000C5C                   # dmult       $zero, $zero # 00000C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2965e8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2965E8 raw=0x00000C5C");
 /* MITIGATED */
label_2965ec:
    // 0x2965ec: 0x0  nop
    ctx->pc = 0x2965ecu;
    // NOP
label_2965f0:
    // 0x2965f0: 0x1b801  .word       0x0001B801                   # INVALID     $zero, $at, -0x47FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2965f0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2965F0 raw=0x0001B801");
 /* MITIGATED */
label_2965f4:
    // 0x2965f4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2965f4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2965f8:
    // 0x2965f8: 0x32c0  sll         $a2, $zero, 11
    ctx->pc = 0x2965f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2965fc:
    // 0x2965fc: 0x0  nop
    ctx->pc = 0x2965fcu;
    // NOP
label_296600:
    // 0x296600: 0x1b808  .word       0x0001B808                   # jr          $zero # 0001B800 <InstrIdType: CPU_SPECIAL>
label_296604:
    if (ctx->pc == 0x296604u) {
        ctx->pc = 0x296604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296600u;
        // 0x296604: 0x7  srav        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296608u;
        goto label_296608;
    }
    ctx->pc = 0x296600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x296604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296600u;
        // 0x296604: 0x7  srav        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296600u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x296608u;
label_296608:
    // 0x296608: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296608u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29660c:
    // 0x29660c: 0x0  nop
    ctx->pc = 0x29660cu;
    // NOP
label_296610:
    // 0x296610: 0x1b80f  .word       0x0001B80F                   # sync # 0001B800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296610u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_296614:
    // 0x296614: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296614u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296618:
    // 0x296618: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296618u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29661c:
    // 0x29661c: 0x0  nop
    ctx->pc = 0x29661cu;
    // NOP
label_296620:
    // 0x296620: 0x1b816  dsrlv       $s7, $at, $zero
    ctx->pc = 0x296620u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_296624:
    // 0x296624: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296624u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296628:
    // 0x296628: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296628u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29662c:
    // 0x29662c: 0x0  nop
    ctx->pc = 0x29662cu;
    // NOP
label_296630:
    // 0x296630: 0x1b81d  .word       0x0001B81D                   # dmultu      $zero, $at # 0000B800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296630u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x296630 raw=0x0001B81D");
 /* MITIGATED */
label_296634:
    // 0x296634: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296634u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296638:
    // 0x296638: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296638u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29663c:
    // 0x29663c: 0x0  nop
    ctx->pc = 0x29663cu;
    // NOP
label_296640:
    // 0x296640: 0x1b824  and         $s7, $zero, $at
    ctx->pc = 0x296640u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_296644:
    // 0x296644: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296644u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296648:
    // 0x296648: 0x32c0  sll         $a2, $zero, 11
    ctx->pc = 0x296648u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_29664c:
    // 0x29664c: 0x0  nop
    ctx->pc = 0x29664cu;
    // NOP
label_296650:
    // 0x296650: 0x1b82b  sltu        $s7, $zero, $at
    ctx->pc = 0x296650u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_296654:
    // 0x296654: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x296654u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_296658:
    // 0x296658: 0x5080  sll         $t2, $zero, 2
    ctx->pc = 0x296658u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_29665c:
    // 0x29665c: 0x0  nop
    ctx->pc = 0x29665cu;
    // NOP
label_296660:
    // 0x296660: 0x1b836  tne         $zero, $at, 736
    ctx->pc = 0x296660u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296664:
    // 0x296664: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296664u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296668:
    // 0x296668: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296668u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29666c:
    // 0x29666c: 0x0  nop
    ctx->pc = 0x29666cu;
    // NOP
label_296670:
    // 0x296670: 0x1b83d  .word       0x0001B83D                   # INVALID     $zero, $at, -0x47C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296670u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x296670 raw=0x0001B83D");
 /* MITIGATED */
label_296674:
    // 0x296674: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296674u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296678:
    // 0x296678: 0x32c0  sll         $a2, $zero, 11
    ctx->pc = 0x296678u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_29667c:
    // 0x29667c: 0x0  nop
    ctx->pc = 0x29667cu;
    // NOP
label_296680:
    // 0x296680: 0x1b844  .word       0x0001B844                   # sllv        $s7, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296680u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_296684:
    // 0x296684: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296684u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296688:
    // 0x296688: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296688u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29668c:
    // 0x29668c: 0x0  nop
    ctx->pc = 0x29668cu;
    // NOP
label_296690:
    // 0x296690: 0x1b84b  .word       0x0001B84B                   # movn        $s7, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296690u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_296694:
    // 0x296694: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296694u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296698:
    // 0x296698: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296698u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29669c:
    // 0x29669c: 0x0  nop
    ctx->pc = 0x29669cu;
    // NOP
label_2966a0:
    // 0x2966a0: 0x1b852  .word       0x0001B852                   # mflo        $s7 # 00010040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2966a0u;
    SET_GPR_U64(ctx, 23, ctx->lo);
label_2966a4:
    // 0x2966a4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2966a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2966a8:
    // 0x2966a8: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x2966a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2966ac:
    // 0x2966ac: 0x0  nop
    ctx->pc = 0x2966acu;
    // NOP
label_2966b0:
    // 0x2966b0: 0x1b859  .word       0x0001B859                   # multu       $zero, $at # 0000B840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2966b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_2966b4:
    // 0x2966b4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2966b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2966b8:
    // 0x2966b8: 0x32c0  sll         $a2, $zero, 11
    ctx->pc = 0x2966b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2966bc:
    // 0x2966bc: 0x0  nop
    ctx->pc = 0x2966bcu;
    // NOP
label_2966c0:
    // 0x2966c0: 0x1b860  .word       0x0001B860                   # add         $s7, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2966c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_2966c4:
    // 0x2966c4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2966c4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2966c8:
    // 0x2966c8: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x2966c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2966cc:
    // 0x2966cc: 0x0  nop
    ctx->pc = 0x2966ccu;
    // NOP
label_2966d0:
    // 0x2966d0: 0x1b867  .word       0x0001B867                   # nor         $s7, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2966d0u;
    SET_GPR_U64(ctx, 23, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_2966d4:
    // 0x2966d4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2966d4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2966d8:
    // 0x2966d8: 0x32c0  sll         $a2, $zero, 11
    ctx->pc = 0x2966d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2966dc:
    // 0x2966dc: 0x0  nop
    ctx->pc = 0x2966dcu;
    // NOP
label_2966e0:
    // 0x2966e0: 0x1b86e  .word       0x0001B86E                   # dsub        $s7, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2966e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2966e4:
    // 0x2966e4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2966e4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2966e8:
    // 0x2966e8: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x2966e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2966ec:
    // 0x2966ec: 0x0  nop
    ctx->pc = 0x2966ecu;
    // NOP
label_2966f0:
    // 0x2966f0: 0x1b875  .word       0x0001B875                   # INVALID     $zero, $at, -0x478B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2966f0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2966F0 raw=0x0001B875");
 /* MITIGATED */
label_2966f4:
    // 0x2966f4: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x2966f4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2966f8:
    // 0x2966f8: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x2966f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2966fc:
    // 0x2966fc: 0x0  nop
    ctx->pc = 0x2966fcu;
    // NOP
label_296700:
    // 0x296700: 0x1b87c  dsll32      $s7, $at, 1
    ctx->pc = 0x296700u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) << (32 + 1));
label_296704:
    // 0x296704: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296704u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296708:
    // 0x296708: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296708u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29670c:
    // 0x29670c: 0x0  nop
    ctx->pc = 0x29670cu;
    // NOP
label_296710:
    // 0x296710: 0x1b883  sra         $s7, $at, 2
    ctx->pc = 0x296710u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 1), 2));
label_296714:
    // 0x296714: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296714u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296718:
    // 0x296718: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296718u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29671c:
    // 0x29671c: 0x0  nop
    ctx->pc = 0x29671cu;
    // NOP
label_296720:
    // 0x296720: 0x1b88a  .word       0x0001B88A                   # movz        $s7, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296720u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_296724:
    // 0x296724: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296724u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296728:
    // 0x296728: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296728u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29672c:
    // 0x29672c: 0x0  nop
    ctx->pc = 0x29672cu;
    // NOP
label_296730:
    // 0x296730: 0x1b891  .word       0x0001B891                   # mthi        $zero # 0001B880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296730u;
    ctx->hi = GPR_U64(ctx, 0);
label_296734:
    // 0x296734: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296734u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296738:
    // 0x296738: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296738u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29673c:
    // 0x29673c: 0x0  nop
    ctx->pc = 0x29673cu;
    // NOP
label_296740:
    // 0x296740: 0x1b898  .word       0x0001B898                   # mult        $s7, $zero, $at # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_296744:
    // 0x296744: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296744u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296748:
    // 0x296748: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296748u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29674c:
    // 0x29674c: 0x0  nop
    ctx->pc = 0x29674cu;
    // NOP
label_296750:
    // 0x296750: 0x1b89f  .word       0x0001B89F                   # ddivu       $s7, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296750u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x296750 raw=0x0001B89F");
 /* MITIGATED */
label_296754:
    // 0x296754: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296754u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296758:
    // 0x296758: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296758u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29675c:
    // 0x29675c: 0x0  nop
    ctx->pc = 0x29675cu;
    // NOP
label_296760:
    // 0x296760: 0x1b8a6  .word       0x0001B8A6                   # xor         $s7, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296760u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_296764:
    // 0x296764: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296764u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296768:
    // 0x296768: 0x3280  sll         $a2, $zero, 10
    ctx->pc = 0x296768u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_29676c:
    // 0x29676c: 0x0  nop
    ctx->pc = 0x29676cu;
    // NOP
label_296770:
    // 0x296770: 0x1b8ad  .word       0x0001B8AD                   # daddu       $s7, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296770u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_296774:
    // 0x296774: 0x12  mflo        $zero
    ctx->pc = 0x296774u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_296778:
    // 0x296778: 0x8c80  sll         $s1, $zero, 18
    ctx->pc = 0x296778u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_29677c:
    // 0x29677c: 0x0  nop
    ctx->pc = 0x29677cu;
    // NOP
label_296780:
    // 0x296780: 0x1b8bf  dsra32      $s7, $at, 2
    ctx->pc = 0x296780u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 1) >> (32 + 2));
label_296784:
    // 0x296784: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x296784u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_296788:
    // 0x296788: 0x1080  sll         $v0, $zero, 2
    ctx->pc = 0x296788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_29678c:
    // 0x29678c: 0x0  nop
    ctx->pc = 0x29678cu;
    // NOP
label_296790:
    // 0x296790: 0x1b8c2  srl         $s7, $at, 3
    ctx->pc = 0x296790u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 1), 3));
label_296794:
    // 0x296794: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296794u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x296794 raw=0x00000005");
 /* MITIGATED */
label_296798:
    // 0x296798: 0x2040  sll         $a0, $zero, 1
    ctx->pc = 0x296798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_29679c:
    // 0x29679c: 0x0  nop
    ctx->pc = 0x29679cu;
    // NOP
label_2967a0:
    // 0x2967a0: 0x1b8c7  .word       0x0001B8C7                   # srav        $s7, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2967a0u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2967a4:
    // 0x2967a4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2967a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2967a8:
    // 0x2967a8: 0x3000  sll         $a2, $zero, 0
    ctx->pc = 0x2967a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2967ac:
    // 0x2967ac: 0x0  nop
    ctx->pc = 0x2967acu;
    // NOP
label_2967b0:
    // 0x2967b0: 0x1b8cd  break       1, 739
    ctx->pc = 0x2967b0u;
    runtime->handleBreak(rdram, ctx);
label_2967b4:
    // 0x2967b4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2967b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2967b8:
    // 0x2967b8: 0x1080  sll         $v0, $zero, 2
    ctx->pc = 0x2967b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_2967bc:
    // 0x2967bc: 0x0  nop
    ctx->pc = 0x2967bcu;
    // NOP
label_2967c0:
    // 0x2967c0: 0x1b8d0  .word       0x0001B8D0                   # mfhi        $s7 # 000100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2967c0u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_2967c4:
    // 0x2967c4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2967c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2967c8:
    // 0x2967c8: 0xf90  .word       0x00000F90                   # mfhi        $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2967c8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2967cc:
    // 0x2967cc: 0x0  nop
    ctx->pc = 0x2967ccu;
    // NOP
label_2967d0:
    // 0x2967d0: 0x1b8d2  .word       0x0001B8D2                   # mflo        $s7 # 000100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2967d0u;
    SET_GPR_U64(ctx, 23, ctx->lo);
label_2967d4:
    // 0x2967d4: 0x8  jr          $zero
label_2967d8:
    if (ctx->pc == 0x2967D8u) {
        ctx->pc = 0x2967D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967D4u;
        // 0x2967d8: 0x3c50  .word       0x00003C50                   # mfhi        $a3 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2967DCu;
        goto label_2967dc;
    }
    ctx->pc = 0x2967D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2967D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967D4u;
        // 0x2967d8: 0x3c50  .word       0x00003C50                   # mfhi        $a3 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2967D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2967DCu;
label_2967dc:
    // 0x2967dc: 0x0  nop
    ctx->pc = 0x2967dcu;
    // NOP
label_2967e0:
    // 0x2967e0: 0x1b8da  .word       0x0001B8DA                   # div         $s7, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2967e0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2967e4:
    // 0x2967e4: 0x11  mthi        $zero
    ctx->pc = 0x2967e4u;
    ctx->hi = GPR_U64(ctx, 0);
label_2967e8:
    // 0x2967e8: 0x86d0  .word       0x000086D0                   # mfhi        $s0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2967e8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2967ec:
    // 0x2967ec: 0x0  nop
    ctx->pc = 0x2967ecu;
    // NOP
label_2967f0:
    // 0x2967f0: 0x1b8eb  .word       0x0001B8EB                   # sltu        $s7, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2967f0u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_2967f4:
    // 0x2967f4: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x2967f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2967f8:
    // 0x2967f8: 0x9d20  .word       0x00009D20                   # add         $s3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2967f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2967fc:
    // 0x2967fc: 0x0  nop
    ctx->pc = 0x2967fcu;
    // NOP
label_296800:
    // 0x296800: 0x1b8ff  dsra32      $s7, $at, 3
    ctx->pc = 0x296800u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 1) >> (32 + 3));
label_296804:
    // 0x296804: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296804u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296808:
    // 0x296808: 0x1bc0  sll         $v1, $zero, 15
    ctx->pc = 0x296808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_29680c:
    // 0x29680c: 0x0  nop
    ctx->pc = 0x29680cu;
    // NOP
label_296810:
    // 0x296810: 0x1b903  sra         $s7, $at, 4
    ctx->pc = 0x296810u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 1), 4));
label_296814:
    // 0x296814: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296814u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296818:
    // 0x296818: 0x3670  tge         $zero, $zero, 217
    ctx->pc = 0x296818u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29681c:
    // 0x29681c: 0x0  nop
    ctx->pc = 0x29681cu;
    // NOP
label_296820:
    // 0x296820: 0x1b90a  .word       0x0001B90A                   # movz        $s7, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296820u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_296824:
    // 0x296824: 0x9  jalr        $zero, $zero
label_296828:
    if (ctx->pc == 0x296828u) {
        ctx->pc = 0x296828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296824u;
        // 0x296828: 0x4380  sll         $t0, $zero, 14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29682Cu;
        goto label_29682c;
    }
    ctx->pc = 0x296824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x296828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296824u;
        // 0x296828: 0x4380  sll         $t0, $zero, 14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296824u, 0x29682Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29682Cu;
label_29682c:
    // 0x29682c: 0x0  nop
    ctx->pc = 0x29682cu;
    // NOP
label_296830:
    // 0x296830: 0x1b913  .word       0x0001B913                   # mtlo        $zero # 0001B900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296830u;
    ctx->lo = GPR_U64(ctx, 0);
label_296834:
    // 0x296834: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296834u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296838:
    // 0x296838: 0x1f90  .word       0x00001F90                   # mfhi        $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296838u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_29683c:
    // 0x29683c: 0x0  nop
    ctx->pc = 0x29683cu;
    // NOP
label_296840:
    // 0x296840: 0x1b917  .word       0x0001B917                   # dsrav       $s7, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296840u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_296844:
    // 0x296844: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296844u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x296844 raw=0x00000005");
 /* MITIGATED */
label_296848:
    // 0x296848: 0x2470  tge         $zero, $zero, 145
    ctx->pc = 0x296848u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29684c:
    // 0x29684c: 0x0  nop
    ctx->pc = 0x29684cu;
    // NOP
label_296850:
    // 0x296850: 0x1b91c  .word       0x0001B91C                   # dmult       $zero, $at # 0000B900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296850u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x296850 raw=0x0001B91C");
 /* MITIGATED */
label_296854:
    // 0x296854: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296854u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x296854 raw=0x00000005");
 /* MITIGATED */
label_296858:
    // 0x296858: 0x23d0  .word       0x000023D0                   # mfhi        $a0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296858u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_29685c:
    // 0x29685c: 0x0  nop
    ctx->pc = 0x29685cu;
    // NOP
label_296860:
    // 0x296860: 0x1b921  .word       0x0001B921                   # addu        $s7, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296860u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_296864:
    // 0x296864: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x296864u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296868:
    // 0x296868: 0x2a30  tge         $zero, $zero, 168
    ctx->pc = 0x296868u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29686c:
    // 0x29686c: 0x0  nop
    ctx->pc = 0x29686cu;
    // NOP
label_296870:
    // 0x296870: 0x1b927  .word       0x0001B927                   # nor         $s7, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296870u;
    SET_GPR_U64(ctx, 23, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_296874:
    // 0x296874: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x296874u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296878:
    // 0x296878: 0x34e0  .word       0x000034E0                   # add         $a2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296878u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_29687c:
    // 0x29687c: 0x0  nop
    ctx->pc = 0x29687cu;
    // NOP
label_296880:
    // 0x296880: 0x1b92e  .word       0x0001B92E                   # dsub        $s7, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296880u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_296884:
    // 0x296884: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x296884u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296888:
    // 0x296888: 0x2fd0  .word       0x00002FD0                   # mfhi        $a1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296888u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_29688c:
    // 0x29688c: 0x0  nop
    ctx->pc = 0x29688cu;
    // NOP
label_296890:
    // 0x296890: 0x1b934  teq         $zero, $at, 740
    ctx->pc = 0x296890u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296894:
    // 0x296894: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x296894u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_296898:
    // 0x296898: 0x1710  .word       0x00001710                   # mfhi        $v0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296898u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29689c:
    // 0x29689c: 0x0  nop
    ctx->pc = 0x29689cu;
    // NOP
label_2968a0:
    // 0x2968a0: 0x1b937  .word       0x0001B937                   # INVALID     $zero, $at, -0x46C9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2968a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2968A0 raw=0x0001B937");
 /* MITIGATED */
label_2968a4:
    // 0x2968a4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x2968a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2968a8:
    // 0x2968a8: 0x2870  tge         $zero, $zero, 161
    ctx->pc = 0x2968a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2968ac:
    // 0x2968ac: 0x0  nop
    ctx->pc = 0x2968acu;
    // NOP
label_2968b0:
    // 0x2968b0: 0x1b93d  .word       0x0001B93D                   # INVALID     $zero, $at, -0x46C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2968b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2968B0 raw=0x0001B93D");
 /* MITIGATED */
label_2968b4:
    // 0x2968b4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2968b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2968B4 raw=0x00000005");
 /* MITIGATED */
label_2968b8:
    // 0x2968b8: 0x2660  .word       0x00002660                   # add         $a0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2968b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2968bc:
    // 0x2968bc: 0x0  nop
    ctx->pc = 0x2968bcu;
    // NOP
label_2968c0:
    // 0x2968c0: 0x1b942  srl         $s7, $at, 5
    ctx->pc = 0x2968c0u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 1), 5));
label_2968c4:
    // 0x2968c4: 0xd  break       0
    ctx->pc = 0x2968c4u;
    runtime->handleBreak(rdram, ctx);
label_2968c8:
    // 0x2968c8: 0x60e0  .word       0x000060E0                   # add         $t4, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2968c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2968cc:
    // 0x2968cc: 0x0  nop
    ctx->pc = 0x2968ccu;
    // NOP
label_2968d0:
    // 0x2968d0: 0x1b94f  .word       0x0001B94F                   # sync # 0001B800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2968d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2968d4:
    // 0x2968d4: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2968d4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2968D4 raw=0x00000005");
 /* MITIGATED */
label_2968d8:
    // 0x2968d8: 0x24a0  .word       0x000024A0                   # add         $a0, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2968d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2968dc:
    // 0x2968dc: 0x0  nop
    ctx->pc = 0x2968dcu;
    // NOP
label_2968e0:
    // 0x2968e0: 0x1b954  .word       0x0001B954                   # dsllv       $s7, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2968e0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_2968e4:
    // 0x2968e4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x2968e4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_2968e8:
    // 0x2968e8: 0x16e0  .word       0x000016E0                   # add         $v0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2968e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2968ec:
    // 0x2968ec: 0x0  nop
    ctx->pc = 0x2968ecu;
    // NOP
label_2968f0:
    // 0x2968f0: 0x1b957  .word       0x0001B957                   # dsrav       $s7, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2968f0u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2968f4:
    // 0x2968f4: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x2968f4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2968f8:
    // 0x2968f8: 0x5570  tge         $zero, $zero, 341
    ctx->pc = 0x2968f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2968fc:
    // 0x2968fc: 0x0  nop
    ctx->pc = 0x2968fcu;
    // NOP
label_296900:
    // 0x296900: 0x1b962  .word       0x0001B962                   # neg         $s7, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296900u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_296904:
    // 0x296904: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296904u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296908:
    // 0x296908: 0x1b30  tge         $zero, $zero, 108
    ctx->pc = 0x296908u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29690c:
    // 0x29690c: 0x0  nop
    ctx->pc = 0x29690cu;
    // NOP
label_296910:
    // 0x296910: 0x1b966  .word       0x0001B966                   # xor         $s7, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296910u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_296914:
    // 0x296914: 0x1404  .word       0x00001404                   # sllv        $v0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296918:
    // 0x296918: 0xa02000  .word       0x00A02000                   # sll         $a0, $zero, 0 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296918u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29691c:
    // 0x29691c: 0x0  nop
    ctx->pc = 0x29691cu;
    // NOP
label_296920:
    // 0x296920: 0x1cd6a  .word       0x0001CD6A                   # slt         $t9, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296920u;
    SET_GPR_U64(ctx, 25, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_296924:
    // 0x296924: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x296924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_296928:
    // 0x296928: 0xbb24  .word       0x0000BB24                   # and         $s7, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296928u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29692c:
    // 0x29692c: 0x0  nop
    ctx->pc = 0x29692cu;
    // NOP
label_296930:
    // 0x296930: 0x1cd82  srl         $t9, $at, 22
    ctx->pc = 0x296930u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 1), 22));
label_296934:
    // 0x296934: 0x1ef  .word       0x000001EF                   # dsubu       $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296934u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_296938:
    // 0x296938: 0xf7730  tge         $zero, $t7, 476
    ctx->pc = 0x296938u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_29693c:
    // 0x29693c: 0x0  nop
    ctx->pc = 0x29693cu;
    // NOP
label_296940:
    // 0x296940: 0x1cf71  tgeu        $zero, $at, 829
    ctx->pc = 0x296940u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296944:
    // 0x296944: 0x66a  .word       0x0000066A                   # slt         $zero, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296944u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_296948:
    // 0x296948: 0x334ed0  .word       0x00334ED0                   # mfhi        $t1 # 003306C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296948u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_29694c:
    // 0x29694c: 0x0  nop
    ctx->pc = 0x29694cu;
    // NOP
label_296950:
    // 0x296950: 0x1d5db  .word       0x0001D5DB                   # divu        $k0, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296950u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_296954:
    // 0x296954: 0x144  .word       0x00000144                   # sllv        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296954u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296958:
    // 0x296958: 0xa1c20  .word       0x000A1C20                   # add         $v1, $zero, $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296958u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29695c:
    // 0x29695c: 0x0  nop
    ctx->pc = 0x29695cu;
    // NOP
label_296960:
    // 0x296960: 0x1d71f  .word       0x0001D71F                   # ddivu       $k0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296960u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x296960 raw=0x0001D71F");
 /* MITIGATED */
label_296964:
    // 0x296964: 0xf6  tne         $zero, $zero, 3
    ctx->pc = 0x296964u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_296968:
    // 0x296968: 0x7aae0  .word       0x0007AAE0                   # add         $s5, $zero, $a3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296968u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_29696c:
    // 0x29696c: 0x0  nop
    ctx->pc = 0x29696cu;
    // NOP
label_296970:
    // 0x296970: 0x1d815  .word       0x0001D815                   # INVALID     $zero, $at, -0x27EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296970u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x296970 raw=0x0001D815");
 /* MITIGATED */
label_296974:
    // 0x296974: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x296974u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_296978:
    // 0x296978: 0xd41f  .word       0x0000D41F                   # ddivu       $k0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296978u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x296978 raw=0x0000D41F");
 /* MITIGATED */
label_29697c:
    // 0x29697c: 0x0  nop
    ctx->pc = 0x29697cu;
    // NOP
label_296980:
    // 0x296980: 0x1d830  tge         $zero, $at, 864
    ctx->pc = 0x296980u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296984:
    // 0x296984: 0x23  negu        $zero, $zero
    ctx->pc = 0x296984u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_296988:
    // 0x296988: 0x11440  sll         $v0, $at, 17
    ctx->pc = 0x296988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 17));
label_29698c:
    // 0x29698c: 0x0  nop
    ctx->pc = 0x29698cu;
    // NOP
label_296990:
    // 0x296990: 0x1d853  .word       0x0001D853                   # mtlo        $zero # 0001D840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296990u;
    ctx->lo = GPR_U64(ctx, 0);
label_296994:
    // 0x296994: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296994u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296998:
    // 0x296998: 0x21c40  sll         $v1, $v0, 17
    ctx->pc = 0x296998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_29699c:
    // 0x29699c: 0x0  nop
    ctx->pc = 0x29699cu;
    // NOP
label_2969a0:
    // 0x2969a0: 0x1d897  .word       0x0001D897                   # dsrav       $k1, $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2969a0u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2969a4:
    // 0x2969a4: 0x11  mthi        $zero
    ctx->pc = 0x2969a4u;
    ctx->hi = GPR_U64(ctx, 0);
label_2969a8:
    // 0x2969a8: 0x85c0  sll         $s0, $zero, 23
    ctx->pc = 0x2969a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_2969ac:
    // 0x2969ac: 0x0  nop
    ctx->pc = 0x2969acu;
    // NOP
label_2969b0:
    // 0x2969b0: 0x1d8a8  .word       0x0001D8A8                   # mfsa        $k1 # 00010080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2969b0u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2969b4:
    // 0x2969b4: 0x11  mthi        $zero
    ctx->pc = 0x2969b4u;
    ctx->hi = GPR_U64(ctx, 0);
label_2969b8:
    // 0x2969b8: 0x8400  sll         $s0, $zero, 16
    ctx->pc = 0x2969b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_2969bc:
    // 0x2969bc: 0x0  nop
    ctx->pc = 0x2969bcu;
    // NOP
label_2969c0:
    // 0x2969c0: 0x1d8b9  .word       0x0001D8B9                   # INVALID     $zero, $at, -0x2747 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2969c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2969C0 raw=0x0001D8B9");
 /* MITIGATED */
label_2969c4:
    // 0x2969c4: 0x11  mthi        $zero
    ctx->pc = 0x2969c4u;
    ctx->hi = GPR_U64(ctx, 0);
label_2969c8:
    // 0x2969c8: 0x8200  sll         $s0, $zero, 8
    ctx->pc = 0x2969c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_2969cc:
    // 0x2969cc: 0x0  nop
    ctx->pc = 0x2969ccu;
    // NOP
label_2969d0:
    // 0x2969d0: 0x1d8ca  .word       0x0001D8CA                   # movz        $k1, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2969d0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 0));
label_2969d4:
    // 0x2969d4: 0x11  mthi        $zero
    ctx->pc = 0x2969d4u;
    ctx->hi = GPR_U64(ctx, 0);
label_2969d8:
    // 0x2969d8: 0x8240  sll         $s0, $zero, 9
    ctx->pc = 0x2969d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2969dc:
    // 0x2969dc: 0x0  nop
    ctx->pc = 0x2969dcu;
    // NOP
label_2969e0:
    // 0x2969e0: 0x1d8db  .word       0x0001D8DB                   # divu        $k1, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2969e0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2969e4:
    // 0x2969e4: 0x11  mthi        $zero
    ctx->pc = 0x2969e4u;
    ctx->hi = GPR_U64(ctx, 0);
label_2969e8:
    // 0x2969e8: 0x82c0  sll         $s0, $zero, 11
    ctx->pc = 0x2969e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_2969ec:
    // 0x2969ec: 0x0  nop
    ctx->pc = 0x2969ecu;
    // NOP
label_2969f0:
    // 0x2969f0: 0x1d8ec  .word       0x0001D8EC                   # dadd        $k1, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2969f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_2969f4:
    // 0x2969f4: 0x11  mthi        $zero
    ctx->pc = 0x2969f4u;
    ctx->hi = GPR_U64(ctx, 0);
label_2969f8:
    // 0x2969f8: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x2969f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_2969fc:
    // 0x2969fc: 0x0  nop
    ctx->pc = 0x2969fcu;
    // NOP
label_296a00:
    // 0x296a00: 0x1d8fd  .word       0x0001D8FD                   # INVALID     $zero, $at, -0x2703 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296a00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x296A00 raw=0x0001D8FD");
 /* MITIGATED */
label_296a04:
    // 0x296a04: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296a04u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296a08:
    // 0x296a08: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296a0c:
    // 0x296a0c: 0x0  nop
    ctx->pc = 0x296a0cu;
    // NOP
label_296a10:
    // 0x296a10: 0x1d940  sll         $k1, $at, 5
    ctx->pc = 0x296a10u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_296a14:
    // 0x296a14: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296a14u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296a18:
    // 0x296a18: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296a1c:
    // 0x296a1c: 0x0  nop
    ctx->pc = 0x296a1cu;
    // NOP
label_296a20:
    // 0x296a20: 0x1d983  sra         $k1, $at, 6
    ctx->pc = 0x296a20u;
    SET_GPR_S32(ctx, 27, SRA32(GPR_S32(ctx, 1), 6));
label_296a24:
    // 0x296a24: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296a24u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296a28:
    // 0x296a28: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296a2c:
    // 0x296a2c: 0x0  nop
    ctx->pc = 0x296a2cu;
    // NOP
label_296a30:
    // 0x296a30: 0x1d9c6  .word       0x0001D9C6                   # srlv        $k1, $at, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296a30u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_296a34:
    // 0x296a34: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296a34u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296a38:
    // 0x296a38: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296a3c:
    // 0x296a3c: 0x0  nop
    ctx->pc = 0x296a3cu;
    // NOP
label_296a40:
    // 0x296a40: 0x1da09  .word       0x0001DA09                   # jalr        $k1, $zero # 00010200 <InstrIdType: CPU_SPECIAL>
label_296a44:
    if (ctx->pc == 0x296A44u) {
        ctx->pc = 0x296A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A40u;
        // 0x296a44: 0x43  sra         $zero, $zero, 1 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296A48u;
        goto label_296a48;
    }
    ctx->pc = 0x296A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 27, 0x296A48u);
        ctx->pc = 0x296A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A40u;
        // 0x296a44: 0x43  sra         $zero, $zero, 1 (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296A40u, 0x296A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296A48u;
label_296a48:
    // 0x296a48: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296a4c:
    // 0x296a4c: 0x0  nop
    ctx->pc = 0x296a4cu;
    // NOP
label_296a50:
    // 0x296a50: 0x1da4c  .word       0x0001DA4C                   # syscall     873 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296a50u;
    ctx->pc = 0x296A54u;
runtime->handleSyscall(rdram, ctx, 0x769u);
label_296a54:
    // 0x296a54: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296a54u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296a58:
    // 0x296a58: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296a5c:
    // 0x296a5c: 0x0  nop
    ctx->pc = 0x296a5cu;
    // NOP
label_296a60:
    // 0x296a60: 0x1da8f  .word       0x0001DA8F                   # sync # 0001D800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296a60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_296a64:
    // 0x296a64: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296a64u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296a68:
    // 0x296a68: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296a6c:
    // 0x296a6c: 0x0  nop
    ctx->pc = 0x296a6cu;
    // NOP
label_296a70:
    // 0x296a70: 0x1dad2  .word       0x0001DAD2                   # mflo        $k1 # 000102C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296a70u;
    SET_GPR_U64(ctx, 27, ctx->lo);
label_296a74:
    // 0x296a74: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296a74u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296a78:
    // 0x296a78: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296a7c:
    // 0x296a7c: 0x0  nop
    ctx->pc = 0x296a7cu;
    // NOP
label_296a80:
    // 0x296a80: 0x1db15  .word       0x0001DB15                   # INVALID     $zero, $at, -0x24EB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296a80u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x296A80 raw=0x0001DB15");
 /* MITIGATED */
label_296a84:
    // 0x296a84: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296a84u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296a88:
    // 0x296a88: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296a8c:
    // 0x296a8c: 0x0  nop
    ctx->pc = 0x296a8cu;
    // NOP
label_296a90:
    // 0x296a90: 0x1db58  .word       0x0001DB58                   # mult        $k1, $zero, $at # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_296a94:
    // 0x296a94: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296a94u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296a98:
    // 0x296a98: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296a9c:
    // 0x296a9c: 0x0  nop
    ctx->pc = 0x296a9cu;
    // NOP
label_296aa0:
    // 0x296aa0: 0x1db9b  .word       0x0001DB9B                   # divu        $k1, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296aa0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_296aa4:
    // 0x296aa4: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296aa4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296aa8:
    // 0x296aa8: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296aac:
    // 0x296aac: 0x0  nop
    ctx->pc = 0x296aacu;
    // NOP
label_296ab0:
    // 0x296ab0: 0x1dbde  .word       0x0001DBDE                   # ddiv        $k1, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296ab0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x296AB0 raw=0x0001DBDE");
 /* MITIGATED */
label_296ab4:
    // 0x296ab4: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296ab4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296ab8:
    // 0x296ab8: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296abc:
    // 0x296abc: 0x0  nop
    ctx->pc = 0x296abcu;
    // NOP
label_296ac0:
    // 0x296ac0: 0x1dc21  .word       0x0001DC21                   # addu        $k1, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296ac0u;
    SET_GPR_S32(ctx, 27, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_296ac4:
    // 0x296ac4: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296ac4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296ac8:
    // 0x296ac8: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296acc:
    // 0x296acc: 0x0  nop
    ctx->pc = 0x296accu;
    // NOP
label_296ad0:
    // 0x296ad0: 0x1dc64  .word       0x0001DC64                   # and         $k1, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296ad0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_296ad4:
    // 0x296ad4: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296ad4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296ad8:
    // 0x296ad8: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296adc:
    // 0x296adc: 0x0  nop
    ctx->pc = 0x296adcu;
    // NOP
label_296ae0:
    // 0x296ae0: 0x1dca7  .word       0x0001DCA7                   # nor         $k1, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296ae0u;
    SET_GPR_U64(ctx, 27, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_296ae4:
    // 0x296ae4: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296ae4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296ae8:
    // 0x296ae8: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296aec:
    // 0x296aec: 0x0  nop
    ctx->pc = 0x296aecu;
    // NOP
label_296af0:
    // 0x296af0: 0x1dcea  .word       0x0001DCEA                   # slt         $k1, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296af0u;
    SET_GPR_U64(ctx, 27, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_296af4:
    // 0x296af4: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296af4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296af8:
    // 0x296af8: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296afc:
    // 0x296afc: 0x0  nop
    ctx->pc = 0x296afcu;
    // NOP
label_296b00:
    // 0x296b00: 0x1dd2d  .word       0x0001DD2D                   # daddu       $k1, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296b00u;
    SET_GPR_U64(ctx, 27, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_296b04:
    // 0x296b04: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296b04u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296b08:
    // 0x296b08: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296b0c:
    // 0x296b0c: 0x0  nop
    ctx->pc = 0x296b0cu;
    // NOP
label_296b10:
    // 0x296b10: 0x1dd70  tge         $zero, $at, 885
    ctx->pc = 0x296b10u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296b14:
    // 0x296b14: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296b14u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296b18:
    // 0x296b18: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296b1c:
    // 0x296b1c: 0x0  nop
    ctx->pc = 0x296b1cu;
    // NOP
label_296b20:
    // 0x296b20: 0x1ddb3  tltu        $zero, $at, 886
    ctx->pc = 0x296b20u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296b24:
    // 0x296b24: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296b24u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296b28:
    // 0x296b28: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296b2c:
    // 0x296b2c: 0x0  nop
    ctx->pc = 0x296b2cu;
    // NOP
label_296b30:
    // 0x296b30: 0x1ddf6  tne         $zero, $at, 887
    ctx->pc = 0x296b30u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296b34:
    // 0x296b34: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296b34u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296b38:
    // 0x296b38: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296b3c:
    // 0x296b3c: 0x0  nop
    ctx->pc = 0x296b3cu;
    // NOP
label_296b40:
    // 0x296b40: 0x1de39  .word       0x0001DE39                   # INVALID     $zero, $at, -0x21C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296b40u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x296B40 raw=0x0001DE39");
 /* MITIGATED */
label_296b44:
    // 0x296b44: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296b44u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296b48:
    // 0x296b48: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296b4c:
    // 0x296b4c: 0x0  nop
    ctx->pc = 0x296b4cu;
    // NOP
label_296b50:
    // 0x296b50: 0x1de7c  dsll32      $k1, $at, 25
    ctx->pc = 0x296b50u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 1) << (32 + 25));
label_296b54:
    // 0x296b54: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296b54u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296b58:
    // 0x296b58: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296b5c:
    // 0x296b5c: 0x0  nop
    ctx->pc = 0x296b5cu;
    // NOP
label_296b60:
    // 0x296b60: 0x1debf  dsra32      $k1, $at, 26
    ctx->pc = 0x296b60u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 1) >> (32 + 26));
label_296b64:
    // 0x296b64: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x296b64u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_296b68:
    // 0x296b68: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x296b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_296b6c:
    // 0x296b6c: 0x0  nop
    ctx->pc = 0x296b6cu;
    // NOP
label_296b70:
    // 0x296b70: 0x1df02  srl         $k1, $at, 28
    ctx->pc = 0x296b70u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 1), 28));
label_296b74:
    // 0x296b74: 0xc  syscall     0
    ctx->pc = 0x296b74u;
    ctx->pc = 0x296B78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_296b78:
    // 0x296b78: 0x5c40  sll         $t3, $zero, 17
    ctx->pc = 0x296b78u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_296b7c:
    // 0x296b7c: 0x0  nop
    ctx->pc = 0x296b7cu;
    // NOP
label_296b80:
    // 0x296b80: 0x1df0e  .word       0x0001DF0E                   # INVALID     $zero, $at, -0x20F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296b80u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x296B80 raw=0x0001DF0E");
 /* MITIGATED */
label_296b84:
    // 0x296b84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296b84u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296B84 raw=0x00000001");
 /* MITIGATED */
label_296b88:
    // 0x296b88: 0x3c4  .word       0x000003C4                   # sllv        $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296b88u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296b8c:
    // 0x296b8c: 0x0  nop
    ctx->pc = 0x296b8cu;
    // NOP
label_296b90:
    // 0x296b90: 0x1df0f  .word       0x0001DF0F                   # sync.p # 0001D800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296b90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_296b94:
    // 0x296b94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296b94u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296B94 raw=0x00000001");
 /* MITIGATED */
label_296b98:
    // 0x296b98: 0x464  .word       0x00000464                   # and         $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296b98u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_296b9c:
    // 0x296b9c: 0x0  nop
    ctx->pc = 0x296b9cu;
    // NOP
label_296ba0:
    // 0x296ba0: 0x1df10  .word       0x0001DF10                   # mfhi        $k1 # 00010700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296ba0u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_296ba4:
    // 0x296ba4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296ba4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296BA4 raw=0x00000001");
 /* MITIGATED */
label_296ba8:
    // 0x296ba8: 0x414  .word       0x00000414                   # dsllv       $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296ba8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_296bac:
    // 0x296bac: 0x0  nop
    ctx->pc = 0x296bacu;
    // NOP
label_296bb0:
    // 0x296bb0: 0x1df11  .word       0x0001DF11                   # mthi        $zero # 0001DF00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296bb0u;
    ctx->hi = GPR_U64(ctx, 0);
label_296bb4:
    // 0x296bb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296bb4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296BB4 raw=0x00000001");
 /* MITIGATED */
label_296bb8:
    // 0x296bb8: 0x450  .word       0x00000450                   # mfhi        $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296bb8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_296bbc:
    // 0x296bbc: 0x0  nop
    ctx->pc = 0x296bbcu;
    // NOP
label_296bc0:
    // 0x296bc0: 0x1df12  .word       0x0001DF12                   # mflo        $k1 # 00010700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296bc0u;
    SET_GPR_U64(ctx, 27, ctx->lo);
label_296bc4:
    // 0x296bc4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296bc4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296BC4 raw=0x00000001");
 /* MITIGATED */
label_296bc8:
    // 0x296bc8: 0x428  .word       0x00000428                   # mfsa        $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296bc8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_296bcc:
    // 0x296bcc: 0x0  nop
    ctx->pc = 0x296bccu;
    // NOP
label_296bd0:
    // 0x296bd0: 0x1df13  .word       0x0001DF13                   # mtlo        $zero # 0001DF00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296bd0u;
    ctx->lo = GPR_U64(ctx, 0);
label_296bd4:
    // 0x296bd4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296bd4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x296BD4 raw=0x00000001");
 /* MITIGATED */
label_296bd8:
    // 0x296bd8: 0x2c0  sll         $zero, $zero, 11
    ctx->pc = 0x296bd8u;
    
label_296bdc:
    // 0x296bdc: 0x0  nop
    ctx->pc = 0x296bdcu;
    // NOP
label_296be0:
    // 0x296be0: 0x1df14  .word       0x0001DF14                   # dsllv       $k1, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296be0u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_296be4:
    // 0x296be4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x296be4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_296be8:
    // 0x296be8: 0x1144  .word       0x00001144                   # sllv        $v0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296bec:
    // 0x296bec: 0x0  nop
    ctx->pc = 0x296becu;
    // NOP
label_296bf0:
    // 0x296bf0: 0x1df17  .word       0x0001DF17                   # dsrav       $k1, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296bf0u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_296bf4:
    // 0x296bf4: 0x25  move        $zero, $zero
    ctx->pc = 0x296bf4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_296bf8:
    // 0x296bf8: 0x12600  sll         $a0, $at, 24
    ctx->pc = 0x296bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 24));
label_296bfc:
    // 0x296bfc: 0x0  nop
    ctx->pc = 0x296bfcu;
    // NOP
label_296c00:
    // 0x296c00: 0x1df3c  dsll32      $k1, $at, 28
    ctx->pc = 0x296c00u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 1) << (32 + 28));
label_296c04:
    // 0x296c04: 0x25  move        $zero, $zero
    ctx->pc = 0x296c04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_296c08:
    // 0x296c08: 0x12600  sll         $a0, $at, 24
    ctx->pc = 0x296c08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 24));
label_296c0c:
    // 0x296c0c: 0x0  nop
    ctx->pc = 0x296c0cu;
    // NOP
label_296c10:
    // 0x296c10: 0x1df61  .word       0x0001DF61                   # addu        $k1, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296c10u;
    SET_GPR_S32(ctx, 27, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_296c14:
    // 0x296c14: 0x23  negu        $zero, $zero
    ctx->pc = 0x296c14u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_296c18:
    // 0x296c18: 0x11244  .word       0x00011244                   # sllv        $v0, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_296c1c:
    // 0x296c1c: 0x0  nop
    ctx->pc = 0x296c1cu;
    // NOP
label_296c20:
    // 0x296c20: 0x1df84  .word       0x0001DF84                   # sllv        $k1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296c20u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_296c24:
    // 0x296c24: 0x23  negu        $zero, $zero
    ctx->pc = 0x296c24u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_296c28:
    // 0x296c28: 0x111a4  .word       0x000111A4                   # and         $v0, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_296c2c:
    // 0x296c2c: 0x0  nop
    ctx->pc = 0x296c2cu;
    // NOP
label_296c30:
    // 0x296c30: 0x1dfa7  .word       0x0001DFA7                   # nor         $k1, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296c30u;
    SET_GPR_U64(ctx, 27, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_296c34:
    // 0x296c34: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296c34u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296c38:
    // 0x296c38: 0x1960  .word       0x00001960                   # add         $v1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296c38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_296c3c:
    // 0x296c3c: 0x0  nop
    ctx->pc = 0x296c3cu;
    // NOP
label_296c40:
    // 0x296c40: 0x1dfab  .word       0x0001DFAB                   # sltu        $k1, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296c40u;
    SET_GPR_U64(ctx, 27, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_296c44:
    // 0x296c44: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x296c44u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296c48:
    // 0x296c48: 0x1960  .word       0x00001960                   # add         $v1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296c48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_296c4c:
    // 0x296c4c: 0x0  nop
    ctx->pc = 0x296c4cu;
    // NOP
label_296c50:
    // 0x296c50: 0x1dfaf  .word       0x0001DFAF                   # dsubu       $k1, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296c50u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_296c54:
    // 0x296c54: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x296c54u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_296c58:
    // 0x296c58: 0x11eb8  dsll        $v1, $at, 26
    ctx->pc = 0x296c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << 26);
label_296c5c:
    // 0x296c5c: 0x0  nop
    ctx->pc = 0x296c5cu;
    // NOP
label_296c60:
    // 0x296c60: 0x1dfd3  .word       0x0001DFD3                   # mtlo        $zero # 0001DFC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296c60u;
    ctx->lo = GPR_U64(ctx, 0);
label_296c64:
    // 0x296c64: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x296c64u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_296c68:
    // 0x296c68: 0x11d80  sll         $v1, $at, 22
    ctx->pc = 0x296c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 22));
label_296c6c:
    // 0x296c6c: 0x0  nop
    ctx->pc = 0x296c6cu;
    // NOP
label_296c70:
    // 0x296c70: 0x1dff7  .word       0x0001DFF7                   # INVALID     $zero, $at, -0x2009 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296c70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x296C70 raw=0x0001DFF7");
 /* MITIGATED */
label_296c74:
    // 0x296c74: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x296c74u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_296c78:
    // 0x296c78: 0x177c  dsll32      $v0, $zero, 29
    ctx->pc = 0x296c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 29));
label_296c7c:
    // 0x296c7c: 0x0  nop
    ctx->pc = 0x296c7cu;
    // NOP
label_296c80:
    // 0x296c80: 0x1dffa  dsrl        $k1, $at, 31
    ctx->pc = 0x296c80u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 1) >> 31);
label_296c84:
    // 0x296c84: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x296c84u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_296c88:
    // 0x296c88: 0x177c  dsll32      $v0, $zero, 29
    ctx->pc = 0x296c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 29));
label_296c8c:
    // 0x296c8c: 0x0  nop
    ctx->pc = 0x296c8cu;
    // NOP
label_296c90:
    // 0x296c90: 0x1dffd  .word       0x0001DFFD                   # INVALID     $zero, $at, -0x2003 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296c90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x296C90 raw=0x0001DFFD");
 /* MITIGATED */
label_296c94:
    // 0x296c94: 0x12  mflo        $zero
    ctx->pc = 0x296c94u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_296c98:
    // 0x296c98: 0x8bac  .word       0x00008BAC                   # dadd        $s1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296c98u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_296c9c:
    // 0x296c9c: 0x0  nop
    ctx->pc = 0x296c9cu;
    // NOP
label_296ca0:
    // 0x296ca0: 0x1e00f  .word       0x0001E00F                   # sync # 0001E000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296ca0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_296ca4:
    // 0x296ca4: 0x12  mflo        $zero
    ctx->pc = 0x296ca4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_296ca8:
    // 0x296ca8: 0x8d40  sll         $s1, $zero, 21
    ctx->pc = 0x296ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_296cac:
    // 0x296cac: 0x0  nop
    ctx->pc = 0x296cacu;
    // NOP
label_296cb0:
    // 0x296cb0: 0x1e021  addu        $gp, $zero, $at
    ctx->pc = 0x296cb0u;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_296cb4:
    // 0x296cb4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x296cb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296cb8:
    // 0x296cb8: 0x2ae8  .word       0x00002AE8                   # mfsa        $a1 # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296cb8u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_296cbc:
    // 0x296cbc: 0x0  nop
    ctx->pc = 0x296cbcu;
    // NOP
label_296cc0:
    // 0x296cc0: 0x1e027  nor         $gp, $zero, $at
    ctx->pc = 0x296cc0u;
    SET_GPR_U64(ctx, 28, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_296cc4:
    // 0x296cc4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x296cc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296cc8:
    // 0x296cc8: 0x2ae8  .word       0x00002AE8                   # mfsa        $a1 # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296cc8u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_296ccc:
    // 0x296ccc: 0x0  nop
    ctx->pc = 0x296cccu;
    // NOP
label_296cd0:
    // 0x296cd0: 0x1e02d  daddu       $gp, $zero, $at
    ctx->pc = 0x296cd0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_296cd4:
    // 0x296cd4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296cd4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x296CD4 raw=0x00000015");
 /* MITIGATED */
label_296cd8:
    // 0x296cd8: 0xa210  .word       0x0000A210                   # mfhi        $s4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296cd8u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_296cdc:
    // 0x296cdc: 0x0  nop
    ctx->pc = 0x296cdcu;
    // NOP
label_296ce0:
    // 0x296ce0: 0x1e042  srl         $gp, $at, 1
    ctx->pc = 0x296ce0u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 1), 1));
label_296ce4:
    // 0x296ce4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296ce4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x296CE4 raw=0x00000015");
 /* MITIGATED */
label_296ce8:
    // 0x296ce8: 0xa2f4  teq         $zero, $zero, 651
    ctx->pc = 0x296ce8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_296cec:
    // 0x296cec: 0x0  nop
    ctx->pc = 0x296cecu;
    // NOP
label_296cf0:
    // 0x296cf0: 0x1e057  .word       0x0001E057                   # dsrav       $gp, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296cf0u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_296cf4:
    // 0x296cf4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x296cf4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_296cf8:
    // 0x296cf8: 0x15bc  dsll32      $v0, $zero, 22
    ctx->pc = 0x296cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 22));
label_296cfc:
    // 0x296cfc: 0x0  nop
    ctx->pc = 0x296cfcu;
    // NOP
label_296d00:
    // 0x296d00: 0x1e05a  .word       0x0001E05A                   # div         $gp, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296d00u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_296d04:
    // 0x296d04: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x296d04u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_296d08:
    // 0x296d08: 0x15bc  dsll32      $v0, $zero, 22
    ctx->pc = 0x296d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 22));
label_296d0c:
    // 0x296d0c: 0x0  nop
    ctx->pc = 0x296d0cu;
    // NOP
label_296d10:
    // 0x296d10: 0x1e05d  .word       0x0001E05D                   # dmultu      $zero, $at # 0000E040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296d10u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x296D10 raw=0x0001E05D");
 /* MITIGATED */
label_296d14:
    // 0x296d14: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x296d14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_296d18:
    // 0x296d18: 0xad9c  .word       0x0000AD9C                   # dmult       $zero, $zero # 0000AD80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296d18u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x296D18 raw=0x0000AD9C");
 /* MITIGATED */
label_296d1c:
    // 0x296d1c: 0x0  nop
    ctx->pc = 0x296d1cu;
    // NOP
label_296d20:
    // 0x296d20: 0x1e073  tltu        $zero, $at, 897
    ctx->pc = 0x296d20u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296d24:
    // 0x296d24: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x296d24u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_296d28:
    // 0x296d28: 0xadb8  dsll        $s5, $zero, 22
    ctx->pc = 0x296d28u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << 22);
label_296d2c:
    // 0x296d2c: 0x0  nop
    ctx->pc = 0x296d2cu;
    // NOP
label_296d30:
    // 0x296d30: 0x1e089  .word       0x0001E089                   # jalr        $gp, $zero # 00010080 <InstrIdType: CPU_SPECIAL>
label_296d34:
    if (ctx->pc == 0x296D34u) {
        ctx->pc = 0x296D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D30u;
        // 0x296d34: 0x6  srlv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296D38u;
        goto label_296d38;
    }
    ctx->pc = 0x296D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 28, 0x296D38u);
        ctx->pc = 0x296D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D30u;
        // 0x296d34: 0x6  srlv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D30u, 0x296D38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296D38u;
label_296d38:
    // 0x296d38: 0x2df8  dsll        $a1, $zero, 23
    ctx->pc = 0x296d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << 23);
label_296d3c:
    // 0x296d3c: 0x0  nop
    ctx->pc = 0x296d3cu;
    // NOP
label_296d40:
    // 0x296d40: 0x1e08f  .word       0x0001E08F                   # sync # 0001E000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296d40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_296d44:
    // 0x296d44: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x296d44u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_296d48:
    // 0x296d48: 0x2df8  dsll        $a1, $zero, 23
    ctx->pc = 0x296d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << 23);
label_296d4c:
    // 0x296d4c: 0x0  nop
    ctx->pc = 0x296d4cu;
    // NOP
label_296d50:
    // 0x296d50: 0x1e095  .word       0x0001E095                   # INVALID     $zero, $at, -0x1F6B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296d50u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x296D50 raw=0x0001E095");
 /* MITIGATED */
label_296d54:
    // 0x296d54: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x296d54u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_296d58:
    // 0x296d58: 0x14f4c  .word       0x00014F4C                   # syscall     317 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296d58u;
    ctx->pc = 0x296D5Cu;
runtime->handleSyscall(rdram, ctx, 0x53Du);
label_296d5c:
    // 0x296d5c: 0x0  nop
    ctx->pc = 0x296d5cu;
    // NOP
label_296d60:
    // 0x296d60: 0x1e0bf  dsra32      $gp, $at, 2
    ctx->pc = 0x296d60u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 1) >> (32 + 2));
label_296d64:
    // 0x296d64: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x296d64u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_296d68:
    // 0x296d68: 0x14808  .word       0x00014808                   # jr          $zero # 00014800 <InstrIdType: CPU_SPECIAL>
label_296d6c:
    if (ctx->pc == 0x296D6Cu) {
        ctx->pc = 0x296D70u;
        goto label_296d70;
    }
    ctx->pc = 0x296D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x296D70u;
label_296d70:
    // 0x296d70: 0x1e0e9  .word       0x0001E0E9                   # mtsa        $zero # 0001E0C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x296d70u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_296d74:
    // 0x296d74: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296d74u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x296D74 raw=0x00000005");
 /* MITIGATED */
label_296d78:
    // 0x296d78: 0x2030  tge         $zero, $zero, 128
    ctx->pc = 0x296d78u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_296d7c:
    // 0x296d7c: 0x0  nop
    ctx->pc = 0x296d7cu;
    // NOP
label_296d80:
    // 0x296d80: 0x1e0ee  .word       0x0001E0EE                   # dsub        $gp, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296d80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_296d84:
    // 0x296d84: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x296d84u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x296D84 raw=0x00000005");
 /* MITIGATED */
label_296d88:
    // 0x296d88: 0x2030  tge         $zero, $zero, 128
    ctx->pc = 0x296d88u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_296d8c:
    // 0x296d8c: 0x0  nop
    ctx->pc = 0x296d8cu;
    // NOP
label_296d90:
    // 0x296d90: 0x1e0f3  tltu        $zero, $at, 899
    ctx->pc = 0x296d90u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_296d94:
    // 0x296d94: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x296d94u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_296d98:
    // 0x296d98: 0xa83c  dsll32      $s5, $zero, 0
    ctx->pc = 0x296d98u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) << (32 + 0));
label_296d9c:
    // 0x296d9c: 0x0  nop
    ctx->pc = 0x296d9cu;
    // NOP
    ctx->pc = 0x296da0u;
    return;
}

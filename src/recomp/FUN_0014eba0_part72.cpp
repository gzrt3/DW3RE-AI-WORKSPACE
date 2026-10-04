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


void FUN_0014eba0_part72(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x171650u: goto label_171650;
        case 0x171654u: goto label_171654;
        case 0x171658u: goto label_171658;
        case 0x17165cu: goto label_17165c;
        case 0x171660u: goto label_171660;
        case 0x171664u: goto label_171664;
        case 0x171668u: goto label_171668;
        case 0x17166cu: goto label_17166c;
        case 0x171670u: goto label_171670;
        case 0x171674u: goto label_171674;
        case 0x171678u: goto label_171678;
        case 0x17167cu: goto label_17167c;
        case 0x171680u: goto label_171680;
        case 0x171684u: goto label_171684;
        case 0x171688u: goto label_171688;
        case 0x17168cu: goto label_17168c;
        case 0x171690u: goto label_171690;
        case 0x171694u: goto label_171694;
        case 0x171698u: goto label_171698;
        case 0x17169cu: goto label_17169c;
        case 0x1716a0u: goto label_1716a0;
        case 0x1716a4u: goto label_1716a4;
        case 0x1716a8u: goto label_1716a8;
        case 0x1716acu: goto label_1716ac;
        case 0x1716b0u: goto label_1716b0;
        case 0x1716b4u: goto label_1716b4;
        case 0x1716b8u: goto label_1716b8;
        case 0x1716bcu: goto label_1716bc;
        case 0x1716c0u: goto label_1716c0;
        case 0x1716c4u: goto label_1716c4;
        case 0x1716c8u: goto label_1716c8;
        case 0x1716ccu: goto label_1716cc;
        case 0x1716d0u: goto label_1716d0;
        case 0x1716d4u: goto label_1716d4;
        case 0x1716d8u: goto label_1716d8;
        case 0x1716dcu: goto label_1716dc;
        case 0x1716e0u: goto label_1716e0;
        case 0x1716e4u: goto label_1716e4;
        case 0x1716e8u: goto label_1716e8;
        case 0x1716ecu: goto label_1716ec;
        case 0x1716f0u: goto label_1716f0;
        case 0x1716f4u: goto label_1716f4;
        case 0x1716f8u: goto label_1716f8;
        case 0x1716fcu: goto label_1716fc;
        case 0x171700u: goto label_171700;
        case 0x171704u: goto label_171704;
        case 0x171708u: goto label_171708;
        case 0x17170cu: goto label_17170c;
        case 0x171710u: goto label_171710;
        case 0x171714u: goto label_171714;
        case 0x171718u: goto label_171718;
        case 0x17171cu: goto label_17171c;
        case 0x171720u: goto label_171720;
        case 0x171724u: goto label_171724;
        case 0x171728u: goto label_171728;
        case 0x17172cu: goto label_17172c;
        case 0x171730u: goto label_171730;
        case 0x171734u: goto label_171734;
        case 0x171738u: goto label_171738;
        case 0x17173cu: goto label_17173c;
        case 0x171740u: goto label_171740;
        case 0x171744u: goto label_171744;
        case 0x171748u: goto label_171748;
        case 0x17174cu: goto label_17174c;
        case 0x171750u: goto label_171750;
        case 0x171754u: goto label_171754;
        case 0x171758u: goto label_171758;
        case 0x17175cu: goto label_17175c;
        case 0x171760u: goto label_171760;
        case 0x171764u: goto label_171764;
        case 0x171768u: goto label_171768;
        case 0x17176cu: goto label_17176c;
        case 0x171770u: goto label_171770;
        case 0x171774u: goto label_171774;
        case 0x171778u: goto label_171778;
        case 0x17177cu: goto label_17177c;
        case 0x171780u: goto label_171780;
        case 0x171784u: goto label_171784;
        case 0x171788u: goto label_171788;
        case 0x17178cu: goto label_17178c;
        case 0x171790u: goto label_171790;
        case 0x171794u: goto label_171794;
        case 0x171798u: goto label_171798;
        case 0x17179cu: goto label_17179c;
        case 0x1717a0u: goto label_1717a0;
        case 0x1717a4u: goto label_1717a4;
        case 0x1717a8u: goto label_1717a8;
        case 0x1717acu: goto label_1717ac;
        case 0x1717b0u: goto label_1717b0;
        case 0x1717b4u: goto label_1717b4;
        case 0x1717b8u: goto label_1717b8;
        case 0x1717bcu: goto label_1717bc;
        case 0x1717c0u: goto label_1717c0;
        case 0x1717c4u: goto label_1717c4;
        case 0x1717c8u: goto label_1717c8;
        case 0x1717ccu: goto label_1717cc;
        case 0x1717d0u: goto label_1717d0;
        case 0x1717d4u: goto label_1717d4;
        case 0x1717d8u: goto label_1717d8;
        case 0x1717dcu: goto label_1717dc;
        case 0x1717e0u: goto label_1717e0;
        case 0x1717e4u: goto label_1717e4;
        case 0x1717e8u: goto label_1717e8;
        case 0x1717ecu: goto label_1717ec;
        case 0x1717f0u: goto label_1717f0;
        case 0x1717f4u: goto label_1717f4;
        case 0x1717f8u: goto label_1717f8;
        case 0x1717fcu: goto label_1717fc;
        case 0x171800u: goto label_171800;
        case 0x171804u: goto label_171804;
        case 0x171808u: goto label_171808;
        case 0x17180cu: goto label_17180c;
        case 0x171810u: goto label_171810;
        case 0x171814u: goto label_171814;
        case 0x171818u: goto label_171818;
        case 0x17181cu: goto label_17181c;
        case 0x171820u: goto label_171820;
        case 0x171824u: goto label_171824;
        case 0x171828u: goto label_171828;
        case 0x17182cu: goto label_17182c;
        case 0x171830u: goto label_171830;
        case 0x171834u: goto label_171834;
        case 0x171838u: goto label_171838;
        case 0x17183cu: goto label_17183c;
        case 0x171840u: goto label_171840;
        case 0x171844u: goto label_171844;
        case 0x171848u: goto label_171848;
        case 0x17184cu: goto label_17184c;
        case 0x171850u: goto label_171850;
        case 0x171854u: goto label_171854;
        case 0x171858u: goto label_171858;
        case 0x17185cu: goto label_17185c;
        case 0x171860u: goto label_171860;
        case 0x171864u: goto label_171864;
        case 0x171868u: goto label_171868;
        case 0x17186cu: goto label_17186c;
        case 0x171870u: goto label_171870;
        case 0x171874u: goto label_171874;
        case 0x171878u: goto label_171878;
        case 0x17187cu: goto label_17187c;
        case 0x171880u: goto label_171880;
        case 0x171884u: goto label_171884;
        case 0x171888u: goto label_171888;
        case 0x17188cu: goto label_17188c;
        case 0x171890u: goto label_171890;
        case 0x171894u: goto label_171894;
        case 0x171898u: goto label_171898;
        case 0x17189cu: goto label_17189c;
        case 0x1718a0u: goto label_1718a0;
        case 0x1718a4u: goto label_1718a4;
        case 0x1718a8u: goto label_1718a8;
        case 0x1718acu: goto label_1718ac;
        case 0x1718b0u: goto label_1718b0;
        case 0x1718b4u: goto label_1718b4;
        case 0x1718b8u: goto label_1718b8;
        case 0x1718bcu: goto label_1718bc;
        case 0x1718c0u: goto label_1718c0;
        case 0x1718c4u: goto label_1718c4;
        case 0x1718c8u: goto label_1718c8;
        case 0x1718ccu: goto label_1718cc;
        case 0x1718d0u: goto label_1718d0;
        case 0x1718d4u: goto label_1718d4;
        case 0x1718d8u: goto label_1718d8;
        case 0x1718dcu: goto label_1718dc;
        case 0x1718e0u: goto label_1718e0;
        case 0x1718e4u: goto label_1718e4;
        case 0x1718e8u: goto label_1718e8;
        case 0x1718ecu: goto label_1718ec;
        case 0x1718f0u: goto label_1718f0;
        case 0x1718f4u: goto label_1718f4;
        case 0x1718f8u: goto label_1718f8;
        case 0x1718fcu: goto label_1718fc;
        case 0x171900u: goto label_171900;
        case 0x171904u: goto label_171904;
        case 0x171908u: goto label_171908;
        case 0x17190cu: goto label_17190c;
        case 0x171910u: goto label_171910;
        case 0x171914u: goto label_171914;
        case 0x171918u: goto label_171918;
        case 0x17191cu: goto label_17191c;
        case 0x171920u: goto label_171920;
        case 0x171924u: goto label_171924;
        case 0x171928u: goto label_171928;
        case 0x17192cu: goto label_17192c;
        case 0x171930u: goto label_171930;
        case 0x171934u: goto label_171934;
        case 0x171938u: goto label_171938;
        case 0x17193cu: goto label_17193c;
        case 0x171940u: goto label_171940;
        case 0x171944u: goto label_171944;
        case 0x171948u: goto label_171948;
        case 0x17194cu: goto label_17194c;
        case 0x171950u: goto label_171950;
        case 0x171954u: goto label_171954;
        case 0x171958u: goto label_171958;
        case 0x17195cu: goto label_17195c;
        case 0x171960u: goto label_171960;
        case 0x171964u: goto label_171964;
        case 0x171968u: goto label_171968;
        case 0x17196cu: goto label_17196c;
        case 0x171970u: goto label_171970;
        case 0x171974u: goto label_171974;
        case 0x171978u: goto label_171978;
        case 0x17197cu: goto label_17197c;
        case 0x171980u: goto label_171980;
        case 0x171984u: goto label_171984;
        case 0x171988u: goto label_171988;
        case 0x17198cu: goto label_17198c;
        case 0x171990u: goto label_171990;
        case 0x171994u: goto label_171994;
        case 0x171998u: goto label_171998;
        case 0x17199cu: goto label_17199c;
        case 0x1719a0u: goto label_1719a0;
        case 0x1719a4u: goto label_1719a4;
        case 0x1719a8u: goto label_1719a8;
        case 0x1719acu: goto label_1719ac;
        case 0x1719b0u: goto label_1719b0;
        case 0x1719b4u: goto label_1719b4;
        case 0x1719b8u: goto label_1719b8;
        case 0x1719bcu: goto label_1719bc;
        case 0x1719c0u: goto label_1719c0;
        case 0x1719c4u: goto label_1719c4;
        case 0x1719c8u: goto label_1719c8;
        case 0x1719ccu: goto label_1719cc;
        case 0x1719d0u: goto label_1719d0;
        case 0x1719d4u: goto label_1719d4;
        case 0x1719d8u: goto label_1719d8;
        case 0x1719dcu: goto label_1719dc;
        case 0x1719e0u: goto label_1719e0;
        case 0x1719e4u: goto label_1719e4;
        case 0x1719e8u: goto label_1719e8;
        case 0x1719ecu: goto label_1719ec;
        case 0x1719f0u: goto label_1719f0;
        case 0x1719f4u: goto label_1719f4;
        case 0x1719f8u: goto label_1719f8;
        case 0x1719fcu: goto label_1719fc;
        case 0x171a00u: goto label_171a00;
        case 0x171a04u: goto label_171a04;
        case 0x171a08u: goto label_171a08;
        case 0x171a0cu: goto label_171a0c;
        case 0x171a10u: goto label_171a10;
        case 0x171a14u: goto label_171a14;
        case 0x171a18u: goto label_171a18;
        case 0x171a1cu: goto label_171a1c;
        case 0x171a20u: goto label_171a20;
        case 0x171a24u: goto label_171a24;
        case 0x171a28u: goto label_171a28;
        case 0x171a2cu: goto label_171a2c;
        case 0x171a30u: goto label_171a30;
        case 0x171a34u: goto label_171a34;
        case 0x171a38u: goto label_171a38;
        case 0x171a3cu: goto label_171a3c;
        case 0x171a40u: goto label_171a40;
        case 0x171a44u: goto label_171a44;
        case 0x171a48u: goto label_171a48;
        case 0x171a4cu: goto label_171a4c;
        case 0x171a50u: goto label_171a50;
        case 0x171a54u: goto label_171a54;
        case 0x171a58u: goto label_171a58;
        case 0x171a5cu: goto label_171a5c;
        case 0x171a60u: goto label_171a60;
        case 0x171a64u: goto label_171a64;
        case 0x171a68u: goto label_171a68;
        case 0x171a6cu: goto label_171a6c;
        case 0x171a70u: goto label_171a70;
        case 0x171a74u: goto label_171a74;
        case 0x171a78u: goto label_171a78;
        case 0x171a7cu: goto label_171a7c;
        case 0x171a80u: goto label_171a80;
        case 0x171a84u: goto label_171a84;
        case 0x171a88u: goto label_171a88;
        case 0x171a8cu: goto label_171a8c;
        case 0x171a90u: goto label_171a90;
        case 0x171a94u: goto label_171a94;
        case 0x171a98u: goto label_171a98;
        case 0x171a9cu: goto label_171a9c;
        case 0x171aa0u: goto label_171aa0;
        case 0x171aa4u: goto label_171aa4;
        case 0x171aa8u: goto label_171aa8;
        case 0x171aacu: goto label_171aac;
        case 0x171ab0u: goto label_171ab0;
        case 0x171ab4u: goto label_171ab4;
        case 0x171ab8u: goto label_171ab8;
        case 0x171abcu: goto label_171abc;
        case 0x171ac0u: goto label_171ac0;
        case 0x171ac4u: goto label_171ac4;
        case 0x171ac8u: goto label_171ac8;
        case 0x171accu: goto label_171acc;
        case 0x171ad0u: goto label_171ad0;
        case 0x171ad4u: goto label_171ad4;
        case 0x171ad8u: goto label_171ad8;
        case 0x171adcu: goto label_171adc;
        case 0x171ae0u: goto label_171ae0;
        case 0x171ae4u: goto label_171ae4;
        case 0x171ae8u: goto label_171ae8;
        case 0x171aecu: goto label_171aec;
        case 0x171af0u: goto label_171af0;
        case 0x171af4u: goto label_171af4;
        case 0x171af8u: goto label_171af8;
        case 0x171afcu: goto label_171afc;
        case 0x171b00u: goto label_171b00;
        case 0x171b04u: goto label_171b04;
        case 0x171b08u: goto label_171b08;
        case 0x171b0cu: goto label_171b0c;
        case 0x171b10u: goto label_171b10;
        case 0x171b14u: goto label_171b14;
        case 0x171b18u: goto label_171b18;
        case 0x171b1cu: goto label_171b1c;
        case 0x171b20u: goto label_171b20;
        case 0x171b24u: goto label_171b24;
        case 0x171b28u: goto label_171b28;
        case 0x171b2cu: goto label_171b2c;
        case 0x171b30u: goto label_171b30;
        case 0x171b34u: goto label_171b34;
        case 0x171b38u: goto label_171b38;
        case 0x171b3cu: goto label_171b3c;
        case 0x171b40u: goto label_171b40;
        case 0x171b44u: goto label_171b44;
        case 0x171b48u: goto label_171b48;
        case 0x171b4cu: goto label_171b4c;
        case 0x171b50u: goto label_171b50;
        case 0x171b54u: goto label_171b54;
        case 0x171b58u: goto label_171b58;
        case 0x171b5cu: goto label_171b5c;
        case 0x171b60u: goto label_171b60;
        case 0x171b64u: goto label_171b64;
        case 0x171b68u: goto label_171b68;
        case 0x171b6cu: goto label_171b6c;
        case 0x171b70u: goto label_171b70;
        case 0x171b74u: goto label_171b74;
        case 0x171b78u: goto label_171b78;
        case 0x171b7cu: goto label_171b7c;
        case 0x171b80u: goto label_171b80;
        case 0x171b84u: goto label_171b84;
        case 0x171b88u: goto label_171b88;
        case 0x171b8cu: goto label_171b8c;
        case 0x171b90u: goto label_171b90;
        case 0x171b94u: goto label_171b94;
        case 0x171b98u: goto label_171b98;
        case 0x171b9cu: goto label_171b9c;
        case 0x171ba0u: goto label_171ba0;
        case 0x171ba4u: goto label_171ba4;
        case 0x171ba8u: goto label_171ba8;
        case 0x171bacu: goto label_171bac;
        case 0x171bb0u: goto label_171bb0;
        case 0x171bb4u: goto label_171bb4;
        case 0x171bb8u: goto label_171bb8;
        case 0x171bbcu: goto label_171bbc;
        case 0x171bc0u: goto label_171bc0;
        case 0x171bc4u: goto label_171bc4;
        case 0x171bc8u: goto label_171bc8;
        case 0x171bccu: goto label_171bcc;
        case 0x171bd0u: goto label_171bd0;
        case 0x171bd4u: goto label_171bd4;
        case 0x171bd8u: goto label_171bd8;
        case 0x171bdcu: goto label_171bdc;
        case 0x171be0u: goto label_171be0;
        case 0x171be4u: goto label_171be4;
        case 0x171be8u: goto label_171be8;
        case 0x171becu: goto label_171bec;
        case 0x171bf0u: goto label_171bf0;
        case 0x171bf4u: goto label_171bf4;
        case 0x171bf8u: goto label_171bf8;
        case 0x171bfcu: goto label_171bfc;
        case 0x171c00u: goto label_171c00;
        case 0x171c04u: goto label_171c04;
        case 0x171c08u: goto label_171c08;
        case 0x171c0cu: goto label_171c0c;
        case 0x171c10u: goto label_171c10;
        case 0x171c14u: goto label_171c14;
        case 0x171c18u: goto label_171c18;
        case 0x171c1cu: goto label_171c1c;
        case 0x171c20u: goto label_171c20;
        case 0x171c24u: goto label_171c24;
        case 0x171c28u: goto label_171c28;
        case 0x171c2cu: goto label_171c2c;
        case 0x171c30u: goto label_171c30;
        case 0x171c34u: goto label_171c34;
        case 0x171c38u: goto label_171c38;
        case 0x171c3cu: goto label_171c3c;
        case 0x171c40u: goto label_171c40;
        case 0x171c44u: goto label_171c44;
        case 0x171c48u: goto label_171c48;
        case 0x171c4cu: goto label_171c4c;
        case 0x171c50u: goto label_171c50;
        case 0x171c54u: goto label_171c54;
        case 0x171c58u: goto label_171c58;
        case 0x171c5cu: goto label_171c5c;
        case 0x171c60u: goto label_171c60;
        case 0x171c64u: goto label_171c64;
        case 0x171c68u: goto label_171c68;
        case 0x171c6cu: goto label_171c6c;
        case 0x171c70u: goto label_171c70;
        case 0x171c74u: goto label_171c74;
        case 0x171c78u: goto label_171c78;
        case 0x171c7cu: goto label_171c7c;
        case 0x171c80u: goto label_171c80;
        case 0x171c84u: goto label_171c84;
        case 0x171c88u: goto label_171c88;
        case 0x171c8cu: goto label_171c8c;
        case 0x171c90u: goto label_171c90;
        case 0x171c94u: goto label_171c94;
        case 0x171c98u: goto label_171c98;
        case 0x171c9cu: goto label_171c9c;
        case 0x171ca0u: goto label_171ca0;
        case 0x171ca4u: goto label_171ca4;
        case 0x171ca8u: goto label_171ca8;
        case 0x171cacu: goto label_171cac;
        case 0x171cb0u: goto label_171cb0;
        case 0x171cb4u: goto label_171cb4;
        case 0x171cb8u: goto label_171cb8;
        case 0x171cbcu: goto label_171cbc;
        case 0x171cc0u: goto label_171cc0;
        case 0x171cc4u: goto label_171cc4;
        case 0x171cc8u: goto label_171cc8;
        case 0x171cccu: goto label_171ccc;
        case 0x171cd0u: goto label_171cd0;
        case 0x171cd4u: goto label_171cd4;
        case 0x171cd8u: goto label_171cd8;
        case 0x171cdcu: goto label_171cdc;
        case 0x171ce0u: goto label_171ce0;
        case 0x171ce4u: goto label_171ce4;
        case 0x171ce8u: goto label_171ce8;
        case 0x171cecu: goto label_171cec;
        case 0x171cf0u: goto label_171cf0;
        case 0x171cf4u: goto label_171cf4;
        case 0x171cf8u: goto label_171cf8;
        case 0x171cfcu: goto label_171cfc;
        case 0x171d00u: goto label_171d00;
        case 0x171d04u: goto label_171d04;
        case 0x171d08u: goto label_171d08;
        case 0x171d0cu: goto label_171d0c;
        case 0x171d10u: goto label_171d10;
        case 0x171d14u: goto label_171d14;
        case 0x171d18u: goto label_171d18;
        case 0x171d1cu: goto label_171d1c;
        case 0x171d20u: goto label_171d20;
        case 0x171d24u: goto label_171d24;
        case 0x171d28u: goto label_171d28;
        case 0x171d2cu: goto label_171d2c;
        case 0x171d30u: goto label_171d30;
        case 0x171d34u: goto label_171d34;
        case 0x171d38u: goto label_171d38;
        case 0x171d3cu: goto label_171d3c;
        case 0x171d40u: goto label_171d40;
        case 0x171d44u: goto label_171d44;
        case 0x171d48u: goto label_171d48;
        case 0x171d4cu: goto label_171d4c;
        case 0x171d50u: goto label_171d50;
        case 0x171d54u: goto label_171d54;
        case 0x171d58u: goto label_171d58;
        case 0x171d5cu: goto label_171d5c;
        case 0x171d60u: goto label_171d60;
        case 0x171d64u: goto label_171d64;
        case 0x171d68u: goto label_171d68;
        case 0x171d6cu: goto label_171d6c;
        case 0x171d70u: goto label_171d70;
        case 0x171d74u: goto label_171d74;
        case 0x171d78u: goto label_171d78;
        case 0x171d7cu: goto label_171d7c;
        case 0x171d80u: goto label_171d80;
        case 0x171d84u: goto label_171d84;
        case 0x171d88u: goto label_171d88;
        case 0x171d8cu: goto label_171d8c;
        case 0x171d90u: goto label_171d90;
        case 0x171d94u: goto label_171d94;
        case 0x171d98u: goto label_171d98;
        case 0x171d9cu: goto label_171d9c;
        case 0x171da0u: goto label_171da0;
        case 0x171da4u: goto label_171da4;
        case 0x171da8u: goto label_171da8;
        case 0x171dacu: goto label_171dac;
        case 0x171db0u: goto label_171db0;
        case 0x171db4u: goto label_171db4;
        case 0x171db8u: goto label_171db8;
        case 0x171dbcu: goto label_171dbc;
        case 0x171dc0u: goto label_171dc0;
        case 0x171dc4u: goto label_171dc4;
        case 0x171dc8u: goto label_171dc8;
        case 0x171dccu: goto label_171dcc;
        case 0x171dd0u: goto label_171dd0;
        case 0x171dd4u: goto label_171dd4;
        case 0x171dd8u: goto label_171dd8;
        case 0x171ddcu: goto label_171ddc;
        case 0x171de0u: goto label_171de0;
        case 0x171de4u: goto label_171de4;
        case 0x171de8u: goto label_171de8;
        case 0x171decu: goto label_171dec;
        case 0x171df0u: goto label_171df0;
        case 0x171df4u: goto label_171df4;
        case 0x171df8u: goto label_171df8;
        case 0x171dfcu: goto label_171dfc;
        case 0x171e00u: goto label_171e00;
        case 0x171e04u: goto label_171e04;
        case 0x171e08u: goto label_171e08;
        case 0x171e0cu: goto label_171e0c;
        case 0x171e10u: goto label_171e10;
        case 0x171e14u: goto label_171e14;
        case 0x171e18u: goto label_171e18;
        case 0x171e1cu: goto label_171e1c;
        default: return;
    }

label_171650:
    // 0x171650: 0xd2842  srl         $a1, $t5, 1
    ctx->pc = 0x171650u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
label_171654:
    // 0x171654: 0x31a30001  andi        $v1, $t5, 0x1
    ctx->pc = 0x171654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_171658:
    // 0x171658: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x171658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_17165c:
    // 0x17165c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17165cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171660:
    // 0x171660: 0x0  nop
    ctx->pc = 0x171660u;
    // NOP
label_171664:
    // 0x171664: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x171664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_171668:
    // 0x171668: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x171668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17166c:
    // 0x17166c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17166cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_171670:
    // 0x171670: 0xc4801120  lwc1        $f0, 0x1120($a0)
    ctx->pc = 0x171670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171674:
    // 0x171674: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x171674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_171678:
    // 0x171678: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x171678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_17167c:
    // 0x17167c: 0xc4801954  lwc1        $f0, 0x1954($a0)
    ctx->pc = 0x17167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171680:
    // 0x171680: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x171680u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
label_171684:
    // 0x171684: 0x0  nop
    ctx->pc = 0x171684u;
    // NOP
label_171688:
    // 0x171688: 0x0  nop
    ctx->pc = 0x171688u;
    // NOP
label_17168c:
    // 0x17168c: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
label_171690:
    if (ctx->pc == 0x171690u) {
        ctx->pc = 0x171694u;
        goto label_171694;
    }
    ctx->pc = 0x17168Cu;
    {
        const bool branch_taken_0x17168c = (GPR_S32(ctx, 13) < 0);
        if (branch_taken_0x17168c) {
            ctx->pc = 0x1716A0u;
            goto label_1716a0;
        }
    }
    ctx->pc = 0x171694u;
label_171694:
    // 0x171694: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x171694u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171698:
    // 0x171698: 0x10000008  b           . + 4 + (0x8 << 2)
label_17169c:
    if (ctx->pc == 0x17169Cu) {
        ctx->pc = 0x17169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171698u;
        // 0x17169c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1716A0u;
        goto label_1716a0;
    }
    ctx->pc = 0x171698u;
    {
        const bool branch_taken_0x171698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171698u;
        // 0x17169c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171698) {
            ctx->pc = 0x1716BCu;
            goto label_1716bc;
        }
    }
    ctx->pc = 0x1716A0u;
label_1716a0:
    // 0x1716a0: 0xd2842  srl         $a1, $t5, 1
    ctx->pc = 0x1716a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
label_1716a4:
    // 0x1716a4: 0x31a30001  andi        $v1, $t5, 0x1
    ctx->pc = 0x1716a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_1716a8:
    // 0x1716a8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1716a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1716ac:
    // 0x1716ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1716acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1716b0:
    // 0x1716b0: 0x0  nop
    ctx->pc = 0x1716b0u;
    // NOP
label_1716b4:
    // 0x1716b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1716b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1716b8:
    // 0x1716b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1716b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1716bc:
    // 0x1716bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1716bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1716c0:
    // 0x1716c0: 0xc4801124  lwc1        $f0, 0x1124($a0)
    ctx->pc = 0x1716c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1716c4:
    // 0x1716c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1716c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1716c8:
    // 0x1716c8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x1716c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_1716cc:
    // 0x1716cc: 0xc4801958  lwc1        $f0, 0x1958($a0)
    ctx->pc = 0x1716ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1716d0:
    // 0x1716d0: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x1716d0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
label_1716d4:
    // 0x1716d4: 0x0  nop
    ctx->pc = 0x1716d4u;
    // NOP
label_1716d8:
    // 0x1716d8: 0x0  nop
    ctx->pc = 0x1716d8u;
    // NOP
label_1716dc:
    // 0x1716dc: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
label_1716e0:
    if (ctx->pc == 0x1716E0u) {
        ctx->pc = 0x1716E4u;
        goto label_1716e4;
    }
    ctx->pc = 0x1716DCu;
    {
        const bool branch_taken_0x1716dc = (GPR_S32(ctx, 13) < 0);
        if (branch_taken_0x1716dc) {
            ctx->pc = 0x1716F0u;
            goto label_1716f0;
        }
    }
    ctx->pc = 0x1716E4u;
label_1716e4:
    // 0x1716e4: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x1716e4u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1716e8:
    // 0x1716e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1716ec:
    if (ctx->pc == 0x1716ECu) {
        ctx->pc = 0x1716ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1716E8u;
        // 0x1716ec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1716F0u;
        goto label_1716f0;
    }
    ctx->pc = 0x1716E8u;
    {
        const bool branch_taken_0x1716e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1716ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1716E8u;
        // 0x1716ec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1716e8) {
            ctx->pc = 0x17170Cu;
            goto label_17170c;
        }
    }
    ctx->pc = 0x1716F0u;
label_1716f0:
    // 0x1716f0: 0xd2842  srl         $a1, $t5, 1
    ctx->pc = 0x1716f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
label_1716f4:
    // 0x1716f4: 0x31a30001  andi        $v1, $t5, 0x1
    ctx->pc = 0x1716f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_1716f8:
    // 0x1716f8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1716f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1716fc:
    // 0x1716fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1716fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171700:
    // 0x171700: 0x0  nop
    ctx->pc = 0x171700u;
    // NOP
label_171704:
    // 0x171704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x171704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_171708:
    // 0x171708: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x171708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17170c:
    // 0x17170c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17170cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_171710:
    // 0x171710: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x171710u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_171714:
    // 0x171714: 0x2d430040  sltiu       $v1, $t2, 0x40
    ctx->pc = 0x171714u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_171718:
    // 0x171718: 0xc4801128  lwc1        $f0, 0x1128($a0)
    ctx->pc = 0x171718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17171c:
    // 0x17171c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17171cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_171720:
    // 0x171720: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x171720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_171724:
    // 0x171724: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x171724u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
label_171728:
    // 0x171728: 0x94851130  lhu         $a1, 0x1130($a0)
    ctx->pc = 0x171728u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4400)));
label_17172c:
    // 0x17172c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x17172cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_171730:
    // 0x171730: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x171730u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
label_171734:
    // 0x171734: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
label_171738:
    if (ctx->pc == 0x171738u) {
        ctx->pc = 0x171738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171734u;
        // 0x171738: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17173Cu;
        goto label_17173c;
    }
    ctx->pc = 0x171734u;
    {
        const bool branch_taken_0x171734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171734u;
        // 0x171738: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171734) {
            ctx->pc = 0x171628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x171628; return; }
        }
    }
    ctx->pc = 0x17173Cu;
label_17173c:
    // 0x17173c: 0x256b0820  addiu       $t3, $t3, 0x820
    ctx->pc = 0x17173cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2080));
label_171740:
    // 0x171740: 0x258c0040  addiu       $t4, $t4, 0x40
    ctx->pc = 0x171740u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
label_171744:
    // 0x171744: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x171744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_171748:
    // 0x171748: 0x94831138  lhu         $v1, 0x1138($a0)
    ctx->pc = 0x171748u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4408)));
label_17174c:
    // 0x17174c: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x17174cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_171750:
    // 0x171750: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
label_171754:
    if (ctx->pc == 0x171754u) {
        ctx->pc = 0x171754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171750u;
        // 0x171754: 0x8b1821  addu        $v1, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171758u;
        goto label_171758;
    }
    ctx->pc = 0x171750u;
    {
        const bool branch_taken_0x171750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171750u;
        // 0x171754: 0x8b1821  addu        $v1, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171750) {
            ctx->pc = 0x17161Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x17161c; return; }
        }
    }
    ctx->pc = 0x171758u;
label_171758:
    // 0x171758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17175c:
    // 0x17175c: 0x3e00008  jr          $ra
label_171760:
    if (ctx->pc == 0x171760u) {
        ctx->pc = 0x171760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17175Cu;
        // 0x171760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171764u;
        goto label_171764;
    }
    ctx->pc = 0x17175Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17175Cu;
        // 0x171760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17175Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171764u;
label_171764:
    // 0x171764: 0x0  nop
    ctx->pc = 0x171764u;
    // NOP
label_171768:
    // 0x171768: 0x0  nop
    ctx->pc = 0x171768u;
    // NOP
label_17176c:
    // 0x17176c: 0x0  nop
    ctx->pc = 0x17176cu;
    // NOP
label_171770:
    // 0x171770: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x171770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_171774:
    // 0x171774: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x171774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_171778:
    // 0x171778: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x171778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_17177c:
    // 0x17177c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_171780:
    // 0x171780: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x171780u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171784:
    // 0x171784: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x171784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_171788:
    // 0x171788: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x171788u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17178c:
    // 0x17178c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_171790:
    // 0x171790: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x171790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_171794:
    // 0x171794: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x171794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_171798:
    // 0x171798: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x171798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17179c:
    // 0x17179c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1717a0:
    // 0x1717a0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1717a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1717a4:
    // 0x1717a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1717a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1717a8:
    // 0x1717a8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1717a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1717ac:
    // 0x1717ac: 0xc0590dc  jal         func_164370
label_1717b0:
    if (ctx->pc == 0x1717B0u) {
        ctx->pc = 0x1717B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1717ACu;
        // 0x1717b0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1717B4u;
        goto label_1717b4;
    }
    ctx->pc = 0x1717ACu;
    SET_GPR_U32(ctx, 31, 0x1717B4u);
    ctx->pc = 0x1717B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1717ACu;
    // 0x1717b0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    { ctx->pc = 0x164370; return; }
    ctx->pc = 0x1717B4u;
label_1717b4:
    // 0x1717b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1717b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1717b8:
    // 0x1717b8: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_1717bc:
    if (ctx->pc == 0x1717BCu) {
        ctx->pc = 0x1717BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1717B8u;
        // 0x1717bc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1717C0u;
        goto label_1717c0;
    }
    ctx->pc = 0x1717B8u;
    {
        const bool branch_taken_0x1717b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1717BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1717B8u;
        // 0x1717bc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1717b8) {
            ctx->pc = 0x17183Cu;
            goto label_17183c;
        }
    }
    ctx->pc = 0x1717C0u;
label_1717c0:
    // 0x1717c0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1717c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1717c4:
    // 0x1717c4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1717c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1717c8:
    // 0x1717c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1717c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1717cc:
    // 0x1717cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1717ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1717d0:
    // 0x1717d0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1717d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1717d4:
    // 0x1717d4: 0xc05c810  jal         func_172040
label_1717d8:
    if (ctx->pc == 0x1717D8u) {
        ctx->pc = 0x1717D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1717D4u;
        // 0x1717d8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1717DCu;
        goto label_1717dc;
    }
    ctx->pc = 0x1717D4u;
    SET_GPR_U32(ctx, 31, 0x1717DCu);
    ctx->pc = 0x1717D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1717D4u;
    // 0x1717d8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172040u;
    { ctx->pc = 0x172040; return; }
    ctx->pc = 0x1717DCu;
label_1717dc:
    // 0x1717dc: 0xe614113c  swc1        $f20, 0x113C($s0)
    ctx->pc = 0x1717dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4412), bits); }
label_1717e0:
    // 0x1717e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1717e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1717e4:
    // 0x1717e4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1717e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1717e8:
    // 0x1717e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1717e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1717ec:
    // 0x1717ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1717ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1717f0:
    // 0x1717f0: 0xc05f3d0  jal         func_17CF40
label_1717f4:
    if (ctx->pc == 0x1717F4u) {
        ctx->pc = 0x1717F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1717F0u;
        // 0x1717f4: 0xe6141140  swc1        $f20, 0x1140($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4416), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1717F8u;
        goto label_1717f8;
    }
    ctx->pc = 0x1717F0u;
    SET_GPR_U32(ctx, 31, 0x1717F8u);
    ctx->pc = 0x1717F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1717F0u;
    // 0x1717f4: 0xe6141140  swc1        $f20, 0x1140($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4416), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    { ctx->pc = 0x17cf40; return; }
    ctx->pc = 0x1717F8u;
label_1717f8:
    // 0x1717f8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x1717f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_1717fc:
    // 0x1717fc: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x1717fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
label_171800:
    // 0x171800: 0xe600198c  swc1        $f0, 0x198C($s0)
    ctx->pc = 0x171800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6540), bits); }
label_171804:
    // 0x171804: 0x24421870  addiu       $v0, $v0, 0x1870
    ctx->pc = 0x171804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6256));
label_171808:
    // 0x171808: 0xae021998  sw          $v0, 0x1998($s0)
    ctx->pc = 0x171808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6552), GPR_U32(ctx, 2));
label_17180c:
    // 0x17180c: 0x24631e80  addiu       $v1, $v1, 0x1E80
    ctx->pc = 0x17180cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7808));
label_171810:
    // 0x171810: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x171810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_171814:
    // 0x171814: 0xae03199c  sw          $v1, 0x199C($s0)
    ctx->pc = 0x171814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6556), GPR_U32(ctx, 3));
label_171818:
    // 0x171818: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x171818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_17181c:
    // 0x17181c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17181cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_171820:
    // 0x171820: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x171820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
label_171824:
    // 0x171824: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x171824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_171828:
    // 0x171828: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x171828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_17182c:
    // 0x17182c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17182cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_171830:
    // 0x171830: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x171830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_171834:
    // 0x171834: 0xc05c678  jal         func_1719E0
label_171838:
    if (ctx->pc == 0x171838u) {
        ctx->pc = 0x171838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171834u;
        // 0x171838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17183Cu;
        goto label_17183c;
    }
    ctx->pc = 0x171834u;
    SET_GPR_U32(ctx, 31, 0x17183Cu);
    ctx->pc = 0x171838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171834u;
    // 0x171838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1719E0u;
    goto label_1719e0;
    ctx->pc = 0x17183Cu;
label_17183c:
    // 0x17183c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x17183cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_171840:
    // 0x171840: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x171840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_171844:
    // 0x171844: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x171844u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_171848:
    // 0x171848: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x171848u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17184c:
    // 0x17184c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17184cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_171850:
    // 0x171850: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x171850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_171854:
    // 0x171854: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x171854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_171858:
    // 0x171858: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x171858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17185c:
    // 0x17185c: 0x3e00008  jr          $ra
label_171860:
    if (ctx->pc == 0x171860u) {
        ctx->pc = 0x171860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17185Cu;
        // 0x171860: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171864u;
        goto label_171864;
    }
    ctx->pc = 0x17185Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17185Cu;
        // 0x171860: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17185Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171864u;
label_171864:
    // 0x171864: 0x0  nop
    ctx->pc = 0x171864u;
    // NOP
label_171868:
    // 0x171868: 0x0  nop
    ctx->pc = 0x171868u;
    // NOP
label_17186c:
    // 0x17186c: 0x0  nop
    ctx->pc = 0x17186cu;
    // NOP
label_171870:
    // 0x171870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_171874:
    // 0x171874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_171878:
    // 0x171878: 0x94831130  lhu         $v1, 0x1130($a0)
    ctx->pc = 0x171878u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4400)));
label_17187c:
    // 0x17187c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x17187cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_171880:
    // 0x171880: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_171884:
    if (ctx->pc == 0x171884u) {
        ctx->pc = 0x171884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171880u;
        // 0x171884: 0x2465fffc  addiu       $a1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171888u;
        goto label_171888;
    }
    ctx->pc = 0x171880u;
    {
        const bool branch_taken_0x171880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x171884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171880u;
        // 0x171884: 0x2465fffc  addiu       $a1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171880) {
            ctx->pc = 0x171898u;
            goto label_171898;
        }
    }
    ctx->pc = 0x171888u;
label_171888:
    // 0x171888: 0xc0591f4  jal         func_1647D0
label_17188c:
    if (ctx->pc == 0x17188Cu) {
        ctx->pc = 0x17188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171888u;
        // 0x17188c: 0xa4801130  sh          $zero, 0x1130($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4400), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171890u;
        goto label_171890;
    }
    ctx->pc = 0x171888u;
    SET_GPR_U32(ctx, 31, 0x171890u);
    ctx->pc = 0x17188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171888u;
    // 0x17188c: 0xa4801130  sh          $zero, 0x1130($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 4400), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    { ctx->pc = 0x1647d0; return; }
    ctx->pc = 0x171890u;
label_171890:
    // 0x171890: 0x1000004e  b           . + 4 + (0x4E << 2)
label_171894:
    if (ctx->pc == 0x171894u) {
        ctx->pc = 0x171894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171890u;
        // 0x171894: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171898u;
        goto label_171898;
    }
    ctx->pc = 0x171890u;
    {
        const bool branch_taken_0x171890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171890u;
        // 0x171894: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171890) {
            ctx->pc = 0x1719CCu;
            goto label_1719cc;
        }
    }
    ctx->pc = 0x171898u;
label_171898:
    // 0x171898: 0x3c073e4c  lui         $a3, 0x3E4C
    ctx->pc = 0x171898u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15948 << 16));
label_17189c:
    // 0x17189c: 0xa4851130  sh          $a1, 0x1130($a0)
    ctx->pc = 0x17189cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4400), (uint16_t)GPR_U32(ctx, 5));
label_1718a0:
    // 0x1718a0: 0x34e7cccd  ori         $a3, $a3, 0xCCCD
    ctx->pc = 0x1718a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
label_1718a4:
    // 0x1718a4: 0x94891132  lhu         $t1, 0x1132($a0)
    ctx->pc = 0x1718a4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
label_1718a8:
    // 0x1718a8: 0x3c08bf26  lui         $t0, 0xBF26
    ctx->pc = 0x1718a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48934 << 16));
label_1718ac:
    // 0x1718ac: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1718acu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1718b0:
    // 0x1718b0: 0x35086666  ori         $t0, $t0, 0x6666
    ctx->pc = 0x1718b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)26214);
label_1718b4:
    // 0x1718b4: 0x44881800  mtc1        $t0, $f3
    ctx->pc = 0x1718b4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1718b8:
    // 0x1718b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1718b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1718bc:
    // 0x1718bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1718bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1718c0:
    // 0x1718c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1718c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1718c4:
    // 0x1718c4: 0x25270001  addiu       $a3, $t1, 0x1
    ctx->pc = 0x1718c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1718c8:
    // 0x1718c8: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1718cc:
    if (ctx->pc == 0x1718CCu) {
        ctx->pc = 0x1718CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718C8u;
        // 0x1718cc: 0xa4871132  sh          $a3, 0x1132($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4402), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1718D0u;
        goto label_1718d0;
    }
    ctx->pc = 0x1718C8u;
    {
        const bool branch_taken_0x1718c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1718CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718C8u;
        // 0x1718cc: 0xa4871132  sh          $a3, 0x1132($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4402), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718c8) {
            ctx->pc = 0x1719B4u;
            goto label_1719b4;
        }
    }
    ctx->pc = 0x1718D0u;
label_1718d0:
    // 0x1718d0: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1718d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1718d4:
    // 0x1718d4: 0x24ea1150  addiu       $t2, $a3, 0x1150
    ctx->pc = 0x1718d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 4432));
label_1718d8:
    // 0x1718d8: 0x25090090  addiu       $t1, $t0, 0x90
    ctx->pc = 0x1718d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
label_1718dc:
    // 0x1718dc: 0x250b00a0  addiu       $t3, $t0, 0xA0
    ctx->pc = 0x1718dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
label_1718e0:
    // 0x1718e0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1718e0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1718e4:
    // 0x1718e4: 0x0  nop
    ctx->pc = 0x1718e4u;
    // NOP
label_1718e8:
    // 0x1718e8: 0xc481198c  lwc1        $f1, 0x198C($a0)
    ctx->pc = 0x1718e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1718ec:
    // 0x1718ec: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x1718ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1718f0:
    // 0x1718f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1718f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1718f4:
    // 0x1718f4: 0x0  nop
    ctx->pc = 0x1718f4u;
    // NOP
label_1718f8:
    // 0x1718f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1718fc:
    if (ctx->pc == 0x1718FCu) {
        ctx->pc = 0x171900u;
        goto label_171900;
    }
    ctx->pc = 0x1718F8u;
    {
        const bool branch_taken_0x1718f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1718f8) {
            ctx->pc = 0x171910u;
            goto label_171910;
        }
    }
    ctx->pc = 0x171900u;
label_171900:
    // 0x171900: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x171900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171904:
    // 0x171904: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x171904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_171908:
    // 0x171908: 0x10000004  b           . + 4 + (0x4 << 2)
label_17190c:
    if (ctx->pc == 0x17190Cu) {
        ctx->pc = 0x17190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171908u;
        // 0x17190c: 0xe5400004  swc1        $f0, 0x4($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x171910u;
        goto label_171910;
    }
    ctx->pc = 0x171908u;
    {
        const bool branch_taken_0x171908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171908u;
        // 0x17190c: 0xe5400004  swc1        $f0, 0x4($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171908) {
            ctx->pc = 0x17191Cu;
            goto label_17191c;
        }
    }
    ctx->pc = 0x171910u;
label_171910:
    // 0x171910: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x171910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171914:
    // 0x171914: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x171914u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_171918:
    // 0x171918: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x171918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_17191c:
    // 0x17191c: 0x0  nop
    ctx->pc = 0x17191cu;
    // NOP
label_171920:
    // 0x171920: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x171920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171924:
    // 0x171924: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x171924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171928:
    // 0x171928: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x171928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17192c:
    // 0x17192c: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x17192cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_171930:
    // 0x171930: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x171930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171934:
    // 0x171934: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x171934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171938:
    // 0x171938: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x171938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17193c:
    // 0x17193c: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x17193cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_171940:
    // 0x171940: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x171940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171944:
    // 0x171944: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x171944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171948:
    // 0x171948: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x171948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17194c:
    // 0x17194c: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x17194cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_171950:
    // 0x171950: 0x94871132  lhu         $a3, 0x1132($a0)
    ctx->pc = 0x171950u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
label_171954:
    // 0x171954: 0x28e1002e  slti        $at, $a3, 0x2E
    ctx->pc = 0x171954u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)46) ? 1 : 0);
label_171958:
    // 0x171958: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_17195c:
    if (ctx->pc == 0x17195Cu) {
        ctx->pc = 0x171960u;
        goto label_171960;
    }
    ctx->pc = 0x171958u;
    {
        const bool branch_taken_0x171958 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x171958) {
            ctx->pc = 0x171984u;
            goto label_171984;
        }
    }
    ctx->pc = 0x171960u;
label_171960:
    // 0x171960: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x171960u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_171964:
    // 0x171964: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x171964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_171968:
    // 0x171968: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x171968u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
label_17196c:
    // 0x17196c: 0x8d670004  lw          $a3, 0x4($t3)
    ctx->pc = 0x17196cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_171970:
    // 0x171970: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x171970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_171974:
    // 0x171974: 0xad670004  sw          $a3, 0x4($t3)
    ctx->pc = 0x171974u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 7));
label_171978:
    // 0x171978: 0x8d670008  lw          $a3, 0x8($t3)
    ctx->pc = 0x171978u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
label_17197c:
    // 0x17197c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x17197cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_171980:
    // 0x171980: 0xad670008  sw          $a3, 0x8($t3)
    ctx->pc = 0x171980u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 7));
label_171984:
    // 0x171984: 0x0  nop
    ctx->pc = 0x171984u;
    // NOP
label_171988:
    // 0x171988: 0x94881130  lhu         $t0, 0x1130($a0)
    ctx->pc = 0x171988u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4400)));
label_17198c:
    // 0x17198c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x17198cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_171990:
    // 0x171990: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x171990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_171994:
    // 0x171994: 0x29870040  slti        $a3, $t4, 0x40
    ctx->pc = 0x171994u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)64) ? 1 : 0);
label_171998:
    // 0x171998: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x171998u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_17199c:
    // 0x17199c: 0xad68000c  sw          $t0, 0xC($t3)
    ctx->pc = 0x17199cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 8));
label_1719a0:
    // 0x1719a0: 0x14e0ffd0  bnez        $a3, . + 4 + (-0x30 << 2)
label_1719a4:
    if (ctx->pc == 0x1719A4u) {
        ctx->pc = 0x1719A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719A0u;
        // 0x1719a4: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1719A8u;
        goto label_1719a8;
    }
    ctx->pc = 0x1719A0u;
    {
        const bool branch_taken_0x1719a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1719A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719A0u;
        // 0x1719a4: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1719a0) {
            ctx->pc = 0x1718E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1718e4;
        }
    }
    ctx->pc = 0x1719A8u;
label_1719a8:
    // 0x1719a8: 0x24a50820  addiu       $a1, $a1, 0x820
    ctx->pc = 0x1719a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2080));
label_1719ac:
    // 0x1719ac: 0x24c60400  addiu       $a2, $a2, 0x400
    ctx->pc = 0x1719acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
label_1719b0:
    // 0x1719b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1719b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1719b4:
    // 0x1719b4: 0x0  nop
    ctx->pc = 0x1719b4u;
    // NOP
label_1719b8:
    // 0x1719b8: 0x94871138  lhu         $a3, 0x1138($a0)
    ctx->pc = 0x1719b8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4408)));
label_1719bc:
    // 0x1719bc: 0x67382b  sltu        $a3, $v1, $a3
    ctx->pc = 0x1719bcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1719c0:
    // 0x1719c0: 0x14e0ffc3  bnez        $a3, . + 4 + (-0x3D << 2)
label_1719c4:
    if (ctx->pc == 0x1719C4u) {
        ctx->pc = 0x1719C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719C0u;
        // 0x1719c4: 0x854021  addu        $t0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1719C8u;
        goto label_1719c8;
    }
    ctx->pc = 0x1719C0u;
    {
        const bool branch_taken_0x1719c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1719C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719C0u;
        // 0x1719c4: 0x854021  addu        $t0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1719c0) {
            ctx->pc = 0x1718D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1718d0;
        }
    }
    ctx->pc = 0x1719C8u;
label_1719c8:
    // 0x1719c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1719c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1719cc:
    // 0x1719cc: 0x3e00008  jr          $ra
label_1719d0:
    if (ctx->pc == 0x1719D0u) {
        ctx->pc = 0x1719D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719CCu;
        // 0x1719d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1719D4u;
        goto label_1719d4;
    }
    ctx->pc = 0x1719CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1719D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1719CCu;
        // 0x1719d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1719CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1719D4u;
label_1719d4:
    // 0x1719d4: 0x0  nop
    ctx->pc = 0x1719d4u;
    // NOP
label_1719d8:
    // 0x1719d8: 0x0  nop
    ctx->pc = 0x1719d8u;
    // NOP
label_1719dc:
    // 0x1719dc: 0x0  nop
    ctx->pc = 0x1719dcu;
    // NOP
label_1719e0:
    // 0x1719e0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1719e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1719e4:
    // 0x1719e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1719e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1719e8:
    // 0x1719e8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1719e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1719ec:
    // 0x1719ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1719ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1719f0:
    // 0x1719f0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1719f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1719f4:
    // 0x1719f4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1719f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1719f8:
    // 0x1719f8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1719f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1719fc:
    // 0x1719fc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1719fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_171a00:
    // 0x171a00: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x171a00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171a04:
    // 0x171a04: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x171a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_171a08:
    // 0x171a08: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x171a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_171a0c:
    // 0x171a0c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x171a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_171a10:
    // 0x171a10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x171a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_171a14:
    // 0x171a14: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x171a14u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_171a18:
    // 0x171a18: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x171a18u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_171a1c:
    // 0x171a1c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x171a1cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_171a20:
    // 0x171a20: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x171a20u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_171a24:
    // 0x171a24: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x171a24u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_171a28:
    // 0x171a28: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x171a28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_171a2c:
    // 0x171a2c: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x171a2cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
label_171a30:
    // 0x171a30: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x171a30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_171a34:
    // 0x171a34: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x171a34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171a38:
    // 0x171a38: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x171a38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_171a3c:
    // 0x171a3c: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x171a3cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
label_171a40:
    // 0x171a40: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_171a44:
    if (ctx->pc == 0x171A44u) {
        ctx->pc = 0x171A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A40u;
        // 0x171a44: 0x46007586  mov.s       $f22, $f14 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x171A48u;
        goto label_171a48;
    }
    ctx->pc = 0x171A40u;
    {
        const bool branch_taken_0x171a40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x171A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A40u;
        // 0x171a44: 0x46007586  mov.s       $f22, $f14 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a40) {
            ctx->pc = 0x171AC0u;
            goto label_171ac0;
        }
    }
    ctx->pc = 0x171A48u;
label_171a48:
    // 0x171a48: 0xc066daa  jal         func_19B6A8
label_171a4c:
    if (ctx->pc == 0x171A4Cu) {
        ctx->pc = 0x171A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A48u;
        // 0x171a4c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171A50u;
        goto label_171a50;
    }
    ctx->pc = 0x171A48u;
    SET_GPR_U32(ctx, 31, 0x171A50u);
    ctx->pc = 0x171A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A48u;
    // 0x171a4c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x171A50u;
label_171a50:
    // 0x171a50: 0xc066e44  jal         func_19B910
label_171a54:
    if (ctx->pc == 0x171A54u) {
        ctx->pc = 0x171A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A50u;
        // 0x171a54: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171A58u;
        goto label_171a58;
    }
    ctx->pc = 0x171A50u;
    SET_GPR_U32(ctx, 31, 0x171A58u);
    ctx->pc = 0x171A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A50u;
    // 0x171a54: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x171A58u;
label_171a58:
    // 0x171a58: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x171a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_171a5c:
    // 0x171a5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x171a5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_171a60:
    // 0x171a60: 0xc066e6c  jal         func_19B9B0
label_171a64:
    if (ctx->pc == 0x171A64u) {
        ctx->pc = 0x171A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A60u;
        // 0x171a64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171A68u;
        goto label_171a68;
    }
    ctx->pc = 0x171A60u;
    SET_GPR_U32(ctx, 31, 0x171A68u);
    ctx->pc = 0x171A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A60u;
    // 0x171a64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x171A68u;
label_171a68:
    // 0x171a68: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x171a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171a6c:
    // 0x171a6c: 0x27b00108  addiu       $s0, $sp, 0x108
    ctx->pc = 0x171a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_171a70:
    // 0x171a70: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x171a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171a74:
    // 0x171a74: 0xc7ac0104  lwc1        $f12, 0x104($sp)
    ctx->pc = 0x171a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_171a78:
    // 0x171a78: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x171a78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_171a7c:
    // 0x171a7c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x171a7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_171a80:
    // 0x171a80: 0x46000344  c1          0x344
    ctx->pc = 0x171a80u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_171a84:
    // 0x171a84: 0x0  nop
    ctx->pc = 0x171a84u;
    // NOP
label_171a88:
    // 0x171a88: 0x0  nop
    ctx->pc = 0x171a88u;
    // NOP
label_171a8c:
    // 0x171a8c: 0xc06d51e  jal         func_1B5478
label_171a90:
    if (ctx->pc == 0x171A90u) {
        ctx->pc = 0x171A94u;
        goto label_171a94;
    }
    ctx->pc = 0x171A8Cu;
    SET_GPR_U32(ctx, 31, 0x171A94u);
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x171A94u;
label_171a94:
    // 0x171a94: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x171a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_171a98:
    // 0x171a98: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x171a98u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
label_171a9c:
    // 0x171a9c: 0xc066e96  jal         func_19BA58
label_171aa0:
    if (ctx->pc == 0x171AA0u) {
        ctx->pc = 0x171AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A9Cu;
        // 0x171aa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171AA4u;
        goto label_171aa4;
    }
    ctx->pc = 0x171A9Cu;
    SET_GPR_U32(ctx, 31, 0x171AA4u);
    ctx->pc = 0x171AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A9Cu;
    // 0x171aa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x171AA4u;
label_171aa4:
    // 0x171aa4: 0xc7ac0100  lwc1        $f12, 0x100($sp)
    ctx->pc = 0x171aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_171aa8:
    // 0x171aa8: 0xc06d51e  jal         func_1B5478
label_171aac:
    if (ctx->pc == 0x171AACu) {
        ctx->pc = 0x171AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AA8u;
        // 0x171aac: 0xc60d0000  lwc1        $f13, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x171AB0u;
        goto label_171ab0;
    }
    ctx->pc = 0x171AA8u;
    SET_GPR_U32(ctx, 31, 0x171AB0u);
    ctx->pc = 0x171AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171AA8u;
    // 0x171aac: 0xc60d0000  lwc1        $f13, 0x0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    { ctx->pc = 0x1b5478; return; }
    ctx->pc = 0x171AB0u;
label_171ab0:
    // 0x171ab0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x171ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_171ab4:
    // 0x171ab4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x171ab4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_171ab8:
    // 0x171ab8: 0xc066ec0  jal         func_19BB00
label_171abc:
    if (ctx->pc == 0x171ABCu) {
        ctx->pc = 0x171ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AB8u;
        // 0x171abc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171AC0u;
        goto label_171ac0;
    }
    ctx->pc = 0x171AB8u;
    SET_GPR_U32(ctx, 31, 0x171AC0u);
    ctx->pc = 0x171ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171AB8u;
    // 0x171abc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x171AC0u;
label_171ac0:
    // 0x171ac0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x171ac0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171ac4:
    // 0x171ac4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x171ac4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171ac8:
    // 0x171ac8: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_171acc:
    if (ctx->pc == 0x171ACCu) {
        ctx->pc = 0x171ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AC8u;
        // 0x171acc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171AD0u;
        goto label_171ad0;
    }
    ctx->pc = 0x171AC8u;
    {
        const bool branch_taken_0x171ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AC8u;
        // 0x171acc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ac8) {
            ctx->pc = 0x171E1Cu;
            goto label_171e1c;
        }
    }
    ctx->pc = 0x171AD0u;
label_171ad0:
    // 0x171ad0: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x171ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_171ad4:
    // 0x171ad4: 0x24511150  addiu       $s1, $v0, 0x1150
    ctx->pc = 0x171ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
label_171ad8:
    // 0x171ad8: 0x24700090  addiu       $s0, $v1, 0x90
    ctx->pc = 0x171ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_171adc:
    // 0x171adc: 0x247200a0  addiu       $s2, $v1, 0xA0
    ctx->pc = 0x171adcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_171ae0:
    // 0x171ae0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x171ae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171ae4:
    // 0x171ae4: 0x0  nop
    ctx->pc = 0x171ae4u;
    // NOP
label_171ae8:
    // 0x171ae8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_171aec:
    // 0x171aec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171af0:
    // 0x171af0: 0x0  nop
    ctx->pc = 0x171af0u;
    // NOP
label_171af4:
    // 0x171af4: 0x4600c036  c.le.s      $f24, $f0
    ctx->pc = 0x171af4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171af8:
    // 0x171af8: 0x0  nop
    ctx->pc = 0x171af8u;
    // NOP
label_171afc:
    // 0x171afc: 0x45010055  bc1t        . + 4 + (0x55 << 2)
label_171b00:
    if (ctx->pc == 0x171B00u) {
        ctx->pc = 0x171B04u;
        goto label_171b04;
    }
    ctx->pc = 0x171AFCu;
    {
        const bool branch_taken_0x171afc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x171afc) {
            ctx->pc = 0x171C54u;
            goto label_171c54;
        }
    }
    ctx->pc = 0x171B04u;
label_171b04:
    // 0x171b04: 0xc08f0cc  jal         func_23C330
label_171b08:
    if (ctx->pc == 0x171B08u) {
        ctx->pc = 0x171B0Cu;
        goto label_171b0c;
    }
    ctx->pc = 0x171B04u;
    SET_GPR_U32(ctx, 31, 0x171B0Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x171B0Cu;
label_171b0c:
    // 0x171b0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171b0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171b10:
    // 0x171b10: 0x0  nop
    ctx->pc = 0x171b10u;
    // NOP
label_171b14:
    // 0x171b14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x171b14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_171b18:
    // 0x171b18: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x171b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_171b1c:
    // 0x171b1c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x171b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_171b20:
    // 0x171b20: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x171b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_171b24:
    // 0x171b24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x171b24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171b28:
    // 0x171b28: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x171b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_171b2c:
    // 0x171b2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x171b2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_171b30:
    // 0x171b30: 0x46020503  div.s       $f20, $f0, $f2
    ctx->pc = 0x171b30u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[2];
label_171b34:
    // 0x171b34: 0x0  nop
    ctx->pc = 0x171b34u;
    // NOP
label_171b38:
    // 0x171b38: 0x0  nop
    ctx->pc = 0x171b38u;
    // NOP
label_171b3c:
    // 0x171b3c: 0xc08f0cc  jal         func_23C330
label_171b40:
    if (ctx->pc == 0x171B40u) {
        ctx->pc = 0x171B44u;
        goto label_171b44;
    }
    ctx->pc = 0x171B3Cu;
    SET_GPR_U32(ctx, 31, 0x171B44u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x171B44u;
label_171b44:
    // 0x171b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171b48:
    // 0x171b48: 0x0  nop
    ctx->pc = 0x171b48u;
    // NOP
label_171b4c:
    // 0x171b4c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x171b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_171b50:
    // 0x171b50: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x171b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_171b54:
    // 0x171b54: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x171b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_171b58:
    // 0x171b58: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x171b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_171b5c:
    // 0x171b5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x171b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171b60:
    // 0x171b60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171b64:
    // 0x171b64: 0x0  nop
    ctx->pc = 0x171b64u;
    // NOP
label_171b68:
    // 0x171b68: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x171b68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_171b6c:
    // 0x171b6c: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x171b6cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_171b70:
    // 0x171b70: 0x0  nop
    ctx->pc = 0x171b70u;
    // NOP
label_171b74:
    // 0x171b74: 0x0  nop
    ctx->pc = 0x171b74u;
    // NOP
label_171b78:
    // 0x171b78: 0xc08f0cc  jal         func_23C330
label_171b7c:
    if (ctx->pc == 0x171B7Cu) {
        ctx->pc = 0x171B80u;
        goto label_171b80;
    }
    ctx->pc = 0x171B78u;
    SET_GPR_U32(ctx, 31, 0x171B80u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x171B80u;
label_171b80:
    // 0x171b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171b84:
    // 0x171b84: 0x0  nop
    ctx->pc = 0x171b84u;
    // NOP
label_171b88:
    // 0x171b88: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x171b88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_171b8c:
    // 0x171b8c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x171b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_171b90:
    // 0x171b90: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x171b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_171b94:
    // 0x171b94: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x171b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_171b98:
    // 0x171b98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x171b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171b9c:
    // 0x171b9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171ba0:
    // 0x171ba0: 0x0  nop
    ctx->pc = 0x171ba0u;
    // NOP
label_171ba4:
    // 0x171ba4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x171ba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_171ba8:
    // 0x171ba8: 0x46000ec3  div.s       $f27, $f1, $f0
    ctx->pc = 0x171ba8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[27] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[27] = ctx->f[1] / ctx->f[0];
label_171bac:
    // 0x171bac: 0x0  nop
    ctx->pc = 0x171bacu;
    // NOP
label_171bb0:
    // 0x171bb0: 0x0  nop
    ctx->pc = 0x171bb0u;
    // NOP
label_171bb4:
    // 0x171bb4: 0xc08f0cc  jal         func_23C330
label_171bb8:
    if (ctx->pc == 0x171BB8u) {
        ctx->pc = 0x171BBCu;
        goto label_171bbc;
    }
    ctx->pc = 0x171BB4u;
    SET_GPR_U32(ctx, 31, 0x171BBCu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x171BBCu;
label_171bbc:
    // 0x171bbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x171bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171bc0:
    // 0x171bc0: 0x0  nop
    ctx->pc = 0x171bc0u;
    // NOP
label_171bc4:
    // 0x171bc4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x171bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_171bc8:
    // 0x171bc8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x171bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_171bcc:
    // 0x171bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171bd0:
    // 0x171bd0: 0x0  nop
    ctx->pc = 0x171bd0u;
    // NOP
label_171bd4:
    // 0x171bd4: 0x46000e83  div.s       $f26, $f1, $f0
    ctx->pc = 0x171bd4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[26] = ctx->f[1] / ctx->f[0];
label_171bd8:
    // 0x171bd8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x171bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_171bdc:
    // 0x171bdc: 0x0  nop
    ctx->pc = 0x171bdcu;
    // NOP
label_171be0:
    // 0x171be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171be4:
    // 0x171be4: 0x0  nop
    ctx->pc = 0x171be4u;
    // NOP
label_171be8:
    // 0x171be8: 0x4600d034  c.lt.s      $f26, $f0
    ctx->pc = 0x171be8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171bec:
    // 0x171bec: 0x0  nop
    ctx->pc = 0x171becu;
    // NOP
label_171bf0:
    // 0x171bf0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_171bf4:
    if (ctx->pc == 0x171BF4u) {
        ctx->pc = 0x171BF8u;
        goto label_171bf8;
    }
    ctx->pc = 0x171BF0u;
    {
        const bool branch_taken_0x171bf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171bf0) {
            ctx->pc = 0x171BFCu;
            goto label_171bfc;
        }
    }
    ctx->pc = 0x171BF8u;
label_171bf8:
    // 0x171bf8: 0x4600d680  add.s       $f26, $f26, $f0
    ctx->pc = 0x171bf8u;
    ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_171bfc:
    // 0x171bfc: 0x0  nop
    ctx->pc = 0x171bfcu;
    // NOP
label_171c00:
    // 0x171c00: 0x4617d682  mul.s       $f26, $f26, $f23
    ctx->pc = 0x171c00u;
    ctx->f[26] = FPU_MUL_S(ctx->f[26], ctx->f[23]);
label_171c04:
    // 0x171c04: 0xc06d412  jal         func_1B5048
label_171c08:
    if (ctx->pc == 0x171C08u) {
        ctx->pc = 0x171C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C04u;
        // 0x171c08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x171C0Cu;
        goto label_171c0c;
    }
    ctx->pc = 0x171C04u;
    SET_GPR_U32(ctx, 31, 0x171C0Cu);
    ctx->pc = 0x171C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C04u;
    // 0x171c08: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x171C0Cu;
label_171c0c:
    // 0x171c0c: 0x4600d642  mul.s       $f25, $f26, $f0
    ctx->pc = 0x171c0cu;
    ctx->f[25] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
label_171c10:
    // 0x171c10: 0xc06d412  jal         func_1B5048
label_171c14:
    if (ctx->pc == 0x171C14u) {
        ctx->pc = 0x171C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C10u;
        // 0x171c14: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x171C18u;
        goto label_171c18;
    }
    ctx->pc = 0x171C10u;
    SET_GPR_U32(ctx, 31, 0x171C18u);
    ctx->pc = 0x171C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C10u;
    // 0x171c14: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x171C18u;
label_171c18:
    // 0x171c18: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x171c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
label_171c1c:
    // 0x171c1c: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x171c1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
label_171c20:
    // 0x171c20: 0xc06d4c0  jal         func_1B5300
label_171c24:
    if (ctx->pc == 0x171C24u) {
        ctx->pc = 0x171C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C20u;
        // 0x171c24: 0xe7a000f0  swc1        $f0, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x171C28u;
        goto label_171c28;
    }
    ctx->pc = 0x171C20u;
    SET_GPR_U32(ctx, 31, 0x171C28u);
    ctx->pc = 0x171C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C20u;
    // 0x171c24: 0xe7a000f0  swc1        $f0, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x171C28u;
label_171c28:
    // 0x171c28: 0x4600d002  mul.s       $f0, $f26, $f0
    ctx->pc = 0x171c28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
label_171c2c:
    // 0x171c2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x171c2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_171c30:
    // 0x171c30: 0xc06d412  jal         func_1B5048
label_171c34:
    if (ctx->pc == 0x171C34u) {
        ctx->pc = 0x171C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C30u;
        // 0x171c34: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x171C38u;
        goto label_171c38;
    }
    ctx->pc = 0x171C30u;
    SET_GPR_U32(ctx, 31, 0x171C38u);
    ctx->pc = 0x171C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C30u;
    // 0x171c34: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x171C38u;
label_171c38:
    // 0x171c38: 0x4600d642  mul.s       $f25, $f26, $f0
    ctx->pc = 0x171c38u;
    ctx->f[25] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
label_171c3c:
    // 0x171c3c: 0xc06d4c0  jal         func_1B5300
label_171c40:
    if (ctx->pc == 0x171C40u) {
        ctx->pc = 0x171C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C3Cu;
        // 0x171c40: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x171C44u;
        goto label_171c44;
    }
    ctx->pc = 0x171C3Cu;
    SET_GPR_U32(ctx, 31, 0x171C44u);
    ctx->pc = 0x171C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C3Cu;
    // 0x171c40: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x171C44u;
label_171c44:
    // 0x171c44: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x171c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
label_171c48:
    // 0x171c48: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x171c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_171c4c:
    // 0x171c4c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_171c50:
    if (ctx->pc == 0x171C50u) {
        ctx->pc = 0x171C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C4Cu;
        // 0x171c50: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x171C54u;
        goto label_171c54;
    }
    ctx->pc = 0x171C4Cu;
    {
        const bool branch_taken_0x171c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C4Cu;
        // 0x171c50: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c4c) {
            ctx->pc = 0x171D4Cu;
            goto label_171d4c;
        }
    }
    ctx->pc = 0x171C54u;
label_171c54:
    // 0x171c54: 0x0  nop
    ctx->pc = 0x171c54u;
    // NOP
label_171c58:
    // 0x171c58: 0xc08f0cc  jal         func_23C330
label_171c5c:
    if (ctx->pc == 0x171C5Cu) {
        ctx->pc = 0x171C60u;
        goto label_171c60;
    }
    ctx->pc = 0x171C58u;
    SET_GPR_U32(ctx, 31, 0x171C60u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x171C60u;
label_171c60:
    // 0x171c60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171c64:
    // 0x171c64: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x171c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_171c68:
    // 0x171c68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x171c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_171c6c:
    // 0x171c6c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x171c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_171c70:
    // 0x171c70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x171c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171c74:
    // 0x171c74: 0x0  nop
    ctx->pc = 0x171c74u;
    // NOP
label_171c78:
    // 0x171c78: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x171c78u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
label_171c7c:
    // 0x171c7c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x171c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_171c80:
    // 0x171c80: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x171c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_171c84:
    // 0x171c84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x171c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171c88:
    // 0x171c88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171c8c:
    // 0x171c8c: 0x0  nop
    ctx->pc = 0x171c8cu;
    // NOP
label_171c90:
    // 0x171c90: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x171c90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_171c94:
    // 0x171c94: 0xc08f0cc  jal         func_23C330
label_171c98:
    if (ctx->pc == 0x171C98u) {
        ctx->pc = 0x171C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C94u;
        // 0x171c98: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x171C9Cu;
        goto label_171c9c;
    }
    ctx->pc = 0x171C94u;
    SET_GPR_U32(ctx, 31, 0x171C9Cu);
    ctx->pc = 0x171C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C94u;
    // 0x171c98: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x171C9Cu;
label_171c9c:
    // 0x171c9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x171c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171ca0:
    // 0x171ca0: 0x0  nop
    ctx->pc = 0x171ca0u;
    // NOP
label_171ca4:
    // 0x171ca4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x171ca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_171ca8:
    // 0x171ca8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x171ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_171cac:
    // 0x171cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171cb0:
    // 0x171cb0: 0x0  nop
    ctx->pc = 0x171cb0u;
    // NOP
label_171cb4:
    // 0x171cb4: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x171cb4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_171cb8:
    // 0x171cb8: 0x0  nop
    ctx->pc = 0x171cb8u;
    // NOP
label_171cbc:
    // 0x171cbc: 0x0  nop
    ctx->pc = 0x171cbcu;
    // NOP
label_171cc0:
    // 0x171cc0: 0xc08f0cc  jal         func_23C330
label_171cc4:
    if (ctx->pc == 0x171CC4u) {
        ctx->pc = 0x171CC8u;
        goto label_171cc8;
    }
    ctx->pc = 0x171CC0u;
    SET_GPR_U32(ctx, 31, 0x171CC8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x171CC8u;
label_171cc8:
    // 0x171cc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x171cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171ccc:
    // 0x171ccc: 0x0  nop
    ctx->pc = 0x171cccu;
    // NOP
label_171cd0:
    // 0x171cd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x171cd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_171cd4:
    // 0x171cd4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x171cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_171cd8:
    // 0x171cd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171cdc:
    // 0x171cdc: 0x0  nop
    ctx->pc = 0x171cdcu;
    // NOP
label_171ce0:
    // 0x171ce0: 0x46000e83  div.s       $f26, $f1, $f0
    ctx->pc = 0x171ce0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[26] = ctx->f[1] / ctx->f[0];
label_171ce4:
    // 0x171ce4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x171ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_171ce8:
    // 0x171ce8: 0x0  nop
    ctx->pc = 0x171ce8u;
    // NOP
label_171cec:
    // 0x171cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171cf0:
    // 0x171cf0: 0x0  nop
    ctx->pc = 0x171cf0u;
    // NOP
label_171cf4:
    // 0x171cf4: 0x4600d034  c.lt.s      $f26, $f0
    ctx->pc = 0x171cf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_171cf8:
    // 0x171cf8: 0x0  nop
    ctx->pc = 0x171cf8u;
    // NOP
label_171cfc:
    // 0x171cfc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_171d00:
    if (ctx->pc == 0x171D00u) {
        ctx->pc = 0x171D04u;
        goto label_171d04;
    }
    ctx->pc = 0x171CFCu;
    {
        const bool branch_taken_0x171cfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x171cfc) {
            ctx->pc = 0x171D08u;
            goto label_171d08;
        }
    }
    ctx->pc = 0x171D04u;
label_171d04:
    // 0x171d04: 0x4600d680  add.s       $f26, $f26, $f0
    ctx->pc = 0x171d04u;
    ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
label_171d08:
    // 0x171d08: 0xc06d412  jal         func_1B5048
label_171d0c:
    if (ctx->pc == 0x171D0Cu) {
        ctx->pc = 0x171D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D08u;
        // 0x171d0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x171D10u;
        goto label_171d10;
    }
    ctx->pc = 0x171D08u;
    SET_GPR_U32(ctx, 31, 0x171D10u);
    ctx->pc = 0x171D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171D08u;
    // 0x171d0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x171D10u;
label_171d10:
    // 0x171d10: 0x4618b842  mul.s       $f1, $f23, $f24
    ctx->pc = 0x171d10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[24]);
label_171d14:
    // 0x171d14: 0x4601ae42  mul.s       $f25, $f21, $f1
    ctx->pc = 0x171d14u;
    ctx->f[25] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_171d18:
    // 0x171d18: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x171d18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
label_171d1c:
    // 0x171d1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x171d1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_171d20:
    // 0x171d20: 0xc06d4c0  jal         func_1B5300
label_171d24:
    if (ctx->pc == 0x171D24u) {
        ctx->pc = 0x171D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D20u;
        // 0x171d24: 0xe7a000f0  swc1        $f0, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x171D28u;
        goto label_171d28;
    }
    ctx->pc = 0x171D20u;
    SET_GPR_U32(ctx, 31, 0x171D28u);
    ctx->pc = 0x171D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171D20u;
    // 0x171d24: 0xe7a000f0  swc1        $f0, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x171D28u;
label_171d28:
    // 0x171d28: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x171d28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
label_171d2c:
    // 0x171d2c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x171d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_171d30:
    // 0x171d30: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x171d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_171d34:
    // 0x171d34: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x171d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171d38:
    // 0x171d38: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x171d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_171d3c:
    // 0x171d3c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x171d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_171d40:
    // 0x171d40: 0x461ab802  mul.s       $f0, $f23, $f26
    ctx->pc = 0x171d40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[26]);
label_171d44:
    // 0x171d44: 0xc066d7a  jal         func_19B5E8
label_171d48:
    if (ctx->pc == 0x171D48u) {
        ctx->pc = 0x171D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D44u;
        // 0x171d48: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x171D4Cu;
        goto label_171d4c;
    }
    ctx->pc = 0x171D44u;
    SET_GPR_U32(ctx, 31, 0x171D4Cu);
    ctx->pc = 0x171D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171D44u;
    // 0x171d48: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x171D4Cu;
label_171d4c:
    // 0x171d4c: 0x0  nop
    ctx->pc = 0x171d4cu;
    // NOP
label_171d50:
    // 0x171d50: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x171d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171d54:
    // 0x171d54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x171d54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_171d58:
    // 0x171d58: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x171d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_171d5c:
    // 0x171d5c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x171d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171d60:
    // 0x171d60: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x171d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_171d64:
    // 0x171d64: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x171d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171d68:
    // 0x171d68: 0xc06d412  jal         func_1B5048
label_171d6c:
    if (ctx->pc == 0x171D6Cu) {
        ctx->pc = 0x171D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D68u;
        // 0x171d6c: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x171D70u;
        goto label_171d70;
    }
    ctx->pc = 0x171D68u;
    SET_GPR_U32(ctx, 31, 0x171D70u);
    ctx->pc = 0x171D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171D68u;
    // 0x171d6c: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x171D70u;
label_171d70:
    // 0x171d70: 0xc6a11120  lwc1        $f1, 0x1120($s5)
    ctx->pc = 0x171d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171d74:
    // 0x171d74: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x171d74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_171d78:
    // 0x171d78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x171d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_171d7c:
    // 0x171d7c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x171d7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_171d80:
    // 0x171d80: 0xc06d4c0  jal         func_1B5300
label_171d84:
    if (ctx->pc == 0x171D84u) {
        ctx->pc = 0x171D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D80u;
        // 0x171d84: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x171D88u;
        goto label_171d88;
    }
    ctx->pc = 0x171D80u;
    SET_GPR_U32(ctx, 31, 0x171D88u);
    ctx->pc = 0x171D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171D80u;
    // 0x171d84: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x171D88u;
label_171d88:
    // 0x171d88: 0x4600b082  mul.s       $f2, $f22, $f0
    ctx->pc = 0x171d88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_171d8c:
    // 0x171d8c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x171d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_171d90:
    // 0x171d90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x171d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_171d94:
    // 0x171d94: 0xc6a11124  lwc1        $f1, 0x1124($s5)
    ctx->pc = 0x171d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171d98:
    // 0x171d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171d9c:
    // 0x171d9c: 0x0  nop
    ctx->pc = 0x171d9cu;
    // NOP
label_171da0:
    // 0x171da0: 0x46140301  sub.s       $f12, $f0, $f20
    ctx->pc = 0x171da0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_171da4:
    // 0x171da4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x171da4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_171da8:
    // 0x171da8: 0xc06d4c0  jal         func_1B5300
label_171dac:
    if (ctx->pc == 0x171DACu) {
        ctx->pc = 0x171DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DA8u;
        // 0x171dac: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x171DB0u;
        goto label_171db0;
    }
    ctx->pc = 0x171DA8u;
    SET_GPR_U32(ctx, 31, 0x171DB0u);
    ctx->pc = 0x171DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DA8u;
    // 0x171dac: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x171DB0u;
label_171db0:
    // 0x171db0: 0x4600b082  mul.s       $f2, $f22, $f0
    ctx->pc = 0x171db0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_171db4:
    // 0x171db4: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x171db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
label_171db8:
    // 0x171db8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x171db8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_171dbc:
    // 0x171dbc: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x171dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_171dc0:
    // 0x171dc0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x171dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_171dc4:
    // 0x171dc4: 0x2e630040  sltiu       $v1, $s3, 0x40
    ctx->pc = 0x171dc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_171dc8:
    // 0x171dc8: 0xc6a01128  lwc1        $f0, 0x1128($s5)
    ctx->pc = 0x171dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171dcc:
    // 0x171dcc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x171dccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171dd0:
    // 0x171dd0: 0x0  nop
    ctx->pc = 0x171dd0u;
    // NOP
label_171dd4:
    // 0x171dd4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x171dd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_171dd8:
    // 0x171dd8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x171dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_171ddc:
    // 0x171ddc: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x171ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
label_171de0:
    // 0x171de0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x171de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171de4:
    // 0x171de4: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x171de4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_171de8:
    // 0x171de8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x171de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_171dec:
    // 0x171dec: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x171decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_171df0:
    // 0x171df0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x171df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_171df4:
    // 0x171df4: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x171df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_171df8:
    // 0x171df8: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x171df8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
label_171dfc:
    // 0x171dfc: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x171dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
label_171e00:
    // 0x171e00: 0x96a41130  lhu         $a0, 0x1130($s5)
    ctx->pc = 0x171e00u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4400)));
label_171e04:
    // 0x171e04: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x171e04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
label_171e08:
    // 0x171e08: 0x1460ff36  bnez        $v1, . + 4 + (-0xCA << 2)
label_171e0c:
    if (ctx->pc == 0x171E0Cu) {
        ctx->pc = 0x171E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E08u;
        // 0x171e0c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x171E10u;
        goto label_171e10;
    }
    ctx->pc = 0x171E08u;
    {
        const bool branch_taken_0x171e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E08u;
        // 0x171e0c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e08) {
            ctx->pc = 0x171AE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171ae4;
        }
    }
    ctx->pc = 0x171E10u;
label_171e10:
    // 0x171e10: 0x26d60820  addiu       $s6, $s6, 0x820
    ctx->pc = 0x171e10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2080));
label_171e14:
    // 0x171e14: 0x26940400  addiu       $s4, $s4, 0x400
    ctx->pc = 0x171e14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
label_171e18:
    // 0x171e18: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x171e18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_171e1c:
    // 0x171e1c: 0x0  nop
    ctx->pc = 0x171e1cu;
    // NOP
    ctx->pc = 0x171e20u;
    return;
}

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


void FUN_0014eba0_part416(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2195d0u: goto label_2195d0;
        case 0x2195d4u: goto label_2195d4;
        case 0x2195d8u: goto label_2195d8;
        case 0x2195dcu: goto label_2195dc;
        case 0x2195e0u: goto label_2195e0;
        case 0x2195e4u: goto label_2195e4;
        case 0x2195e8u: goto label_2195e8;
        case 0x2195ecu: goto label_2195ec;
        case 0x2195f0u: goto label_2195f0;
        case 0x2195f4u: goto label_2195f4;
        case 0x2195f8u: goto label_2195f8;
        case 0x2195fcu: goto label_2195fc;
        case 0x219600u: goto label_219600;
        case 0x219604u: goto label_219604;
        case 0x219608u: goto label_219608;
        case 0x21960cu: goto label_21960c;
        case 0x219610u: goto label_219610;
        case 0x219614u: goto label_219614;
        case 0x219618u: goto label_219618;
        case 0x21961cu: goto label_21961c;
        case 0x219620u: goto label_219620;
        case 0x219624u: goto label_219624;
        case 0x219628u: goto label_219628;
        case 0x21962cu: goto label_21962c;
        case 0x219630u: goto label_219630;
        case 0x219634u: goto label_219634;
        case 0x219638u: goto label_219638;
        case 0x21963cu: goto label_21963c;
        case 0x219640u: goto label_219640;
        case 0x219644u: goto label_219644;
        case 0x219648u: goto label_219648;
        case 0x21964cu: goto label_21964c;
        case 0x219650u: goto label_219650;
        case 0x219654u: goto label_219654;
        case 0x219658u: goto label_219658;
        case 0x21965cu: goto label_21965c;
        case 0x219660u: goto label_219660;
        case 0x219664u: goto label_219664;
        case 0x219668u: goto label_219668;
        case 0x21966cu: goto label_21966c;
        case 0x219670u: goto label_219670;
        case 0x219674u: goto label_219674;
        case 0x219678u: goto label_219678;
        case 0x21967cu: goto label_21967c;
        case 0x219680u: goto label_219680;
        case 0x219684u: goto label_219684;
        case 0x219688u: goto label_219688;
        case 0x21968cu: goto label_21968c;
        case 0x219690u: goto label_219690;
        case 0x219694u: goto label_219694;
        case 0x219698u: goto label_219698;
        case 0x21969cu: goto label_21969c;
        case 0x2196a0u: goto label_2196a0;
        case 0x2196a4u: goto label_2196a4;
        case 0x2196a8u: goto label_2196a8;
        case 0x2196acu: goto label_2196ac;
        case 0x2196b0u: goto label_2196b0;
        case 0x2196b4u: goto label_2196b4;
        case 0x2196b8u: goto label_2196b8;
        case 0x2196bcu: goto label_2196bc;
        case 0x2196c0u: goto label_2196c0;
        case 0x2196c4u: goto label_2196c4;
        case 0x2196c8u: goto label_2196c8;
        case 0x2196ccu: goto label_2196cc;
        case 0x2196d0u: goto label_2196d0;
        case 0x2196d4u: goto label_2196d4;
        case 0x2196d8u: goto label_2196d8;
        case 0x2196dcu: goto label_2196dc;
        case 0x2196e0u: goto label_2196e0;
        case 0x2196e4u: goto label_2196e4;
        case 0x2196e8u: goto label_2196e8;
        case 0x2196ecu: goto label_2196ec;
        case 0x2196f0u: goto label_2196f0;
        case 0x2196f4u: goto label_2196f4;
        case 0x2196f8u: goto label_2196f8;
        case 0x2196fcu: goto label_2196fc;
        case 0x219700u: goto label_219700;
        case 0x219704u: goto label_219704;
        case 0x219708u: goto label_219708;
        case 0x21970cu: goto label_21970c;
        case 0x219710u: goto label_219710;
        case 0x219714u: goto label_219714;
        case 0x219718u: goto label_219718;
        case 0x21971cu: goto label_21971c;
        case 0x219720u: goto label_219720;
        case 0x219724u: goto label_219724;
        case 0x219728u: goto label_219728;
        case 0x21972cu: goto label_21972c;
        case 0x219730u: goto label_219730;
        case 0x219734u: goto label_219734;
        case 0x219738u: goto label_219738;
        case 0x21973cu: goto label_21973c;
        case 0x219740u: goto label_219740;
        case 0x219744u: goto label_219744;
        case 0x219748u: goto label_219748;
        case 0x21974cu: goto label_21974c;
        case 0x219750u: goto label_219750;
        case 0x219754u: goto label_219754;
        case 0x219758u: goto label_219758;
        case 0x21975cu: goto label_21975c;
        case 0x219760u: goto label_219760;
        case 0x219764u: goto label_219764;
        case 0x219768u: goto label_219768;
        case 0x21976cu: goto label_21976c;
        case 0x219770u: goto label_219770;
        case 0x219774u: goto label_219774;
        case 0x219778u: goto label_219778;
        case 0x21977cu: goto label_21977c;
        case 0x219780u: goto label_219780;
        case 0x219784u: goto label_219784;
        case 0x219788u: goto label_219788;
        case 0x21978cu: goto label_21978c;
        case 0x219790u: goto label_219790;
        case 0x219794u: goto label_219794;
        case 0x219798u: goto label_219798;
        case 0x21979cu: goto label_21979c;
        case 0x2197a0u: goto label_2197a0;
        case 0x2197a4u: goto label_2197a4;
        case 0x2197a8u: goto label_2197a8;
        case 0x2197acu: goto label_2197ac;
        case 0x2197b0u: goto label_2197b0;
        case 0x2197b4u: goto label_2197b4;
        case 0x2197b8u: goto label_2197b8;
        case 0x2197bcu: goto label_2197bc;
        case 0x2197c0u: goto label_2197c0;
        case 0x2197c4u: goto label_2197c4;
        case 0x2197c8u: goto label_2197c8;
        case 0x2197ccu: goto label_2197cc;
        case 0x2197d0u: goto label_2197d0;
        case 0x2197d4u: goto label_2197d4;
        case 0x2197d8u: goto label_2197d8;
        case 0x2197dcu: goto label_2197dc;
        case 0x2197e0u: goto label_2197e0;
        case 0x2197e4u: goto label_2197e4;
        case 0x2197e8u: goto label_2197e8;
        case 0x2197ecu: goto label_2197ec;
        case 0x2197f0u: goto label_2197f0;
        case 0x2197f4u: goto label_2197f4;
        case 0x2197f8u: goto label_2197f8;
        case 0x2197fcu: goto label_2197fc;
        case 0x219800u: goto label_219800;
        case 0x219804u: goto label_219804;
        case 0x219808u: goto label_219808;
        case 0x21980cu: goto label_21980c;
        case 0x219810u: goto label_219810;
        case 0x219814u: goto label_219814;
        case 0x219818u: goto label_219818;
        case 0x21981cu: goto label_21981c;
        case 0x219820u: goto label_219820;
        case 0x219824u: goto label_219824;
        case 0x219828u: goto label_219828;
        case 0x21982cu: goto label_21982c;
        case 0x219830u: goto label_219830;
        case 0x219834u: goto label_219834;
        case 0x219838u: goto label_219838;
        case 0x21983cu: goto label_21983c;
        case 0x219840u: goto label_219840;
        case 0x219844u: goto label_219844;
        case 0x219848u: goto label_219848;
        case 0x21984cu: goto label_21984c;
        case 0x219850u: goto label_219850;
        case 0x219854u: goto label_219854;
        case 0x219858u: goto label_219858;
        case 0x21985cu: goto label_21985c;
        case 0x219860u: goto label_219860;
        case 0x219864u: goto label_219864;
        case 0x219868u: goto label_219868;
        case 0x21986cu: goto label_21986c;
        case 0x219870u: goto label_219870;
        case 0x219874u: goto label_219874;
        case 0x219878u: goto label_219878;
        case 0x21987cu: goto label_21987c;
        case 0x219880u: goto label_219880;
        case 0x219884u: goto label_219884;
        case 0x219888u: goto label_219888;
        case 0x21988cu: goto label_21988c;
        case 0x219890u: goto label_219890;
        case 0x219894u: goto label_219894;
        case 0x219898u: goto label_219898;
        case 0x21989cu: goto label_21989c;
        case 0x2198a0u: goto label_2198a0;
        case 0x2198a4u: goto label_2198a4;
        case 0x2198a8u: goto label_2198a8;
        case 0x2198acu: goto label_2198ac;
        case 0x2198b0u: goto label_2198b0;
        case 0x2198b4u: goto label_2198b4;
        case 0x2198b8u: goto label_2198b8;
        case 0x2198bcu: goto label_2198bc;
        case 0x2198c0u: goto label_2198c0;
        case 0x2198c4u: goto label_2198c4;
        case 0x2198c8u: goto label_2198c8;
        case 0x2198ccu: goto label_2198cc;
        case 0x2198d0u: goto label_2198d0;
        case 0x2198d4u: goto label_2198d4;
        case 0x2198d8u: goto label_2198d8;
        case 0x2198dcu: goto label_2198dc;
        case 0x2198e0u: goto label_2198e0;
        case 0x2198e4u: goto label_2198e4;
        case 0x2198e8u: goto label_2198e8;
        case 0x2198ecu: goto label_2198ec;
        case 0x2198f0u: goto label_2198f0;
        case 0x2198f4u: goto label_2198f4;
        case 0x2198f8u: goto label_2198f8;
        case 0x2198fcu: goto label_2198fc;
        case 0x219900u: goto label_219900;
        case 0x219904u: goto label_219904;
        case 0x219908u: goto label_219908;
        case 0x21990cu: goto label_21990c;
        case 0x219910u: goto label_219910;
        case 0x219914u: goto label_219914;
        case 0x219918u: goto label_219918;
        case 0x21991cu: goto label_21991c;
        case 0x219920u: goto label_219920;
        case 0x219924u: goto label_219924;
        case 0x219928u: goto label_219928;
        case 0x21992cu: goto label_21992c;
        case 0x219930u: goto label_219930;
        case 0x219934u: goto label_219934;
        case 0x219938u: goto label_219938;
        case 0x21993cu: goto label_21993c;
        case 0x219940u: goto label_219940;
        case 0x219944u: goto label_219944;
        case 0x219948u: goto label_219948;
        case 0x21994cu: goto label_21994c;
        case 0x219950u: goto label_219950;
        case 0x219954u: goto label_219954;
        case 0x219958u: goto label_219958;
        case 0x21995cu: goto label_21995c;
        case 0x219960u: goto label_219960;
        case 0x219964u: goto label_219964;
        case 0x219968u: goto label_219968;
        case 0x21996cu: goto label_21996c;
        case 0x219970u: goto label_219970;
        case 0x219974u: goto label_219974;
        case 0x219978u: goto label_219978;
        case 0x21997cu: goto label_21997c;
        case 0x219980u: goto label_219980;
        case 0x219984u: goto label_219984;
        case 0x219988u: goto label_219988;
        case 0x21998cu: goto label_21998c;
        case 0x219990u: goto label_219990;
        case 0x219994u: goto label_219994;
        case 0x219998u: goto label_219998;
        case 0x21999cu: goto label_21999c;
        case 0x2199a0u: goto label_2199a0;
        case 0x2199a4u: goto label_2199a4;
        case 0x2199a8u: goto label_2199a8;
        case 0x2199acu: goto label_2199ac;
        case 0x2199b0u: goto label_2199b0;
        case 0x2199b4u: goto label_2199b4;
        case 0x2199b8u: goto label_2199b8;
        case 0x2199bcu: goto label_2199bc;
        case 0x2199c0u: goto label_2199c0;
        case 0x2199c4u: goto label_2199c4;
        case 0x2199c8u: goto label_2199c8;
        case 0x2199ccu: goto label_2199cc;
        case 0x2199d0u: goto label_2199d0;
        case 0x2199d4u: goto label_2199d4;
        case 0x2199d8u: goto label_2199d8;
        case 0x2199dcu: goto label_2199dc;
        case 0x2199e0u: goto label_2199e0;
        case 0x2199e4u: goto label_2199e4;
        case 0x2199e8u: goto label_2199e8;
        case 0x2199ecu: goto label_2199ec;
        case 0x2199f0u: goto label_2199f0;
        case 0x2199f4u: goto label_2199f4;
        case 0x2199f8u: goto label_2199f8;
        case 0x2199fcu: goto label_2199fc;
        case 0x219a00u: goto label_219a00;
        case 0x219a04u: goto label_219a04;
        case 0x219a08u: goto label_219a08;
        case 0x219a0cu: goto label_219a0c;
        case 0x219a10u: goto label_219a10;
        case 0x219a14u: goto label_219a14;
        case 0x219a18u: goto label_219a18;
        case 0x219a1cu: goto label_219a1c;
        case 0x219a20u: goto label_219a20;
        case 0x219a24u: goto label_219a24;
        case 0x219a28u: goto label_219a28;
        case 0x219a2cu: goto label_219a2c;
        case 0x219a30u: goto label_219a30;
        case 0x219a34u: goto label_219a34;
        case 0x219a38u: goto label_219a38;
        case 0x219a3cu: goto label_219a3c;
        case 0x219a40u: goto label_219a40;
        case 0x219a44u: goto label_219a44;
        case 0x219a48u: goto label_219a48;
        case 0x219a4cu: goto label_219a4c;
        case 0x219a50u: goto label_219a50;
        case 0x219a54u: goto label_219a54;
        case 0x219a58u: goto label_219a58;
        case 0x219a5cu: goto label_219a5c;
        case 0x219a60u: goto label_219a60;
        case 0x219a64u: goto label_219a64;
        case 0x219a68u: goto label_219a68;
        case 0x219a6cu: goto label_219a6c;
        case 0x219a70u: goto label_219a70;
        case 0x219a74u: goto label_219a74;
        case 0x219a78u: goto label_219a78;
        case 0x219a7cu: goto label_219a7c;
        case 0x219a80u: goto label_219a80;
        case 0x219a84u: goto label_219a84;
        case 0x219a88u: goto label_219a88;
        case 0x219a8cu: goto label_219a8c;
        case 0x219a90u: goto label_219a90;
        case 0x219a94u: goto label_219a94;
        case 0x219a98u: goto label_219a98;
        case 0x219a9cu: goto label_219a9c;
        case 0x219aa0u: goto label_219aa0;
        case 0x219aa4u: goto label_219aa4;
        case 0x219aa8u: goto label_219aa8;
        case 0x219aacu: goto label_219aac;
        case 0x219ab0u: goto label_219ab0;
        case 0x219ab4u: goto label_219ab4;
        case 0x219ab8u: goto label_219ab8;
        case 0x219abcu: goto label_219abc;
        case 0x219ac0u: goto label_219ac0;
        case 0x219ac4u: goto label_219ac4;
        case 0x219ac8u: goto label_219ac8;
        case 0x219accu: goto label_219acc;
        case 0x219ad0u: goto label_219ad0;
        case 0x219ad4u: goto label_219ad4;
        case 0x219ad8u: goto label_219ad8;
        case 0x219adcu: goto label_219adc;
        case 0x219ae0u: goto label_219ae0;
        case 0x219ae4u: goto label_219ae4;
        case 0x219ae8u: goto label_219ae8;
        case 0x219aecu: goto label_219aec;
        case 0x219af0u: goto label_219af0;
        case 0x219af4u: goto label_219af4;
        case 0x219af8u: goto label_219af8;
        case 0x219afcu: goto label_219afc;
        case 0x219b00u: goto label_219b00;
        case 0x219b04u: goto label_219b04;
        case 0x219b08u: goto label_219b08;
        case 0x219b0cu: goto label_219b0c;
        case 0x219b10u: goto label_219b10;
        case 0x219b14u: goto label_219b14;
        case 0x219b18u: goto label_219b18;
        case 0x219b1cu: goto label_219b1c;
        case 0x219b20u: goto label_219b20;
        case 0x219b24u: goto label_219b24;
        case 0x219b28u: goto label_219b28;
        case 0x219b2cu: goto label_219b2c;
        case 0x219b30u: goto label_219b30;
        case 0x219b34u: goto label_219b34;
        case 0x219b38u: goto label_219b38;
        case 0x219b3cu: goto label_219b3c;
        case 0x219b40u: goto label_219b40;
        case 0x219b44u: goto label_219b44;
        case 0x219b48u: goto label_219b48;
        case 0x219b4cu: goto label_219b4c;
        case 0x219b50u: goto label_219b50;
        case 0x219b54u: goto label_219b54;
        case 0x219b58u: goto label_219b58;
        case 0x219b5cu: goto label_219b5c;
        case 0x219b60u: goto label_219b60;
        case 0x219b64u: goto label_219b64;
        case 0x219b68u: goto label_219b68;
        case 0x219b6cu: goto label_219b6c;
        case 0x219b70u: goto label_219b70;
        case 0x219b74u: goto label_219b74;
        case 0x219b78u: goto label_219b78;
        case 0x219b7cu: goto label_219b7c;
        case 0x219b80u: goto label_219b80;
        case 0x219b84u: goto label_219b84;
        case 0x219b88u: goto label_219b88;
        case 0x219b8cu: goto label_219b8c;
        case 0x219b90u: goto label_219b90;
        case 0x219b94u: goto label_219b94;
        case 0x219b98u: goto label_219b98;
        case 0x219b9cu: goto label_219b9c;
        case 0x219ba0u: goto label_219ba0;
        case 0x219ba4u: goto label_219ba4;
        case 0x219ba8u: goto label_219ba8;
        case 0x219bacu: goto label_219bac;
        case 0x219bb0u: goto label_219bb0;
        case 0x219bb4u: goto label_219bb4;
        case 0x219bb8u: goto label_219bb8;
        case 0x219bbcu: goto label_219bbc;
        case 0x219bc0u: goto label_219bc0;
        case 0x219bc4u: goto label_219bc4;
        case 0x219bc8u: goto label_219bc8;
        case 0x219bccu: goto label_219bcc;
        case 0x219bd0u: goto label_219bd0;
        case 0x219bd4u: goto label_219bd4;
        case 0x219bd8u: goto label_219bd8;
        case 0x219bdcu: goto label_219bdc;
        case 0x219be0u: goto label_219be0;
        case 0x219be4u: goto label_219be4;
        case 0x219be8u: goto label_219be8;
        case 0x219becu: goto label_219bec;
        case 0x219bf0u: goto label_219bf0;
        case 0x219bf4u: goto label_219bf4;
        case 0x219bf8u: goto label_219bf8;
        case 0x219bfcu: goto label_219bfc;
        case 0x219c00u: goto label_219c00;
        case 0x219c04u: goto label_219c04;
        case 0x219c08u: goto label_219c08;
        case 0x219c0cu: goto label_219c0c;
        case 0x219c10u: goto label_219c10;
        case 0x219c14u: goto label_219c14;
        case 0x219c18u: goto label_219c18;
        case 0x219c1cu: goto label_219c1c;
        case 0x219c20u: goto label_219c20;
        case 0x219c24u: goto label_219c24;
        case 0x219c28u: goto label_219c28;
        case 0x219c2cu: goto label_219c2c;
        case 0x219c30u: goto label_219c30;
        case 0x219c34u: goto label_219c34;
        case 0x219c38u: goto label_219c38;
        case 0x219c3cu: goto label_219c3c;
        case 0x219c40u: goto label_219c40;
        case 0x219c44u: goto label_219c44;
        case 0x219c48u: goto label_219c48;
        case 0x219c4cu: goto label_219c4c;
        case 0x219c50u: goto label_219c50;
        case 0x219c54u: goto label_219c54;
        case 0x219c58u: goto label_219c58;
        case 0x219c5cu: goto label_219c5c;
        case 0x219c60u: goto label_219c60;
        case 0x219c64u: goto label_219c64;
        case 0x219c68u: goto label_219c68;
        case 0x219c6cu: goto label_219c6c;
        case 0x219c70u: goto label_219c70;
        case 0x219c74u: goto label_219c74;
        case 0x219c78u: goto label_219c78;
        case 0x219c7cu: goto label_219c7c;
        case 0x219c80u: goto label_219c80;
        case 0x219c84u: goto label_219c84;
        case 0x219c88u: goto label_219c88;
        case 0x219c8cu: goto label_219c8c;
        case 0x219c90u: goto label_219c90;
        case 0x219c94u: goto label_219c94;
        case 0x219c98u: goto label_219c98;
        case 0x219c9cu: goto label_219c9c;
        case 0x219ca0u: goto label_219ca0;
        case 0x219ca4u: goto label_219ca4;
        case 0x219ca8u: goto label_219ca8;
        case 0x219cacu: goto label_219cac;
        case 0x219cb0u: goto label_219cb0;
        case 0x219cb4u: goto label_219cb4;
        case 0x219cb8u: goto label_219cb8;
        case 0x219cbcu: goto label_219cbc;
        case 0x219cc0u: goto label_219cc0;
        case 0x219cc4u: goto label_219cc4;
        case 0x219cc8u: goto label_219cc8;
        case 0x219cccu: goto label_219ccc;
        case 0x219cd0u: goto label_219cd0;
        case 0x219cd4u: goto label_219cd4;
        case 0x219cd8u: goto label_219cd8;
        case 0x219cdcu: goto label_219cdc;
        case 0x219ce0u: goto label_219ce0;
        case 0x219ce4u: goto label_219ce4;
        case 0x219ce8u: goto label_219ce8;
        case 0x219cecu: goto label_219cec;
        case 0x219cf0u: goto label_219cf0;
        case 0x219cf4u: goto label_219cf4;
        case 0x219cf8u: goto label_219cf8;
        case 0x219cfcu: goto label_219cfc;
        case 0x219d00u: goto label_219d00;
        case 0x219d04u: goto label_219d04;
        case 0x219d08u: goto label_219d08;
        case 0x219d0cu: goto label_219d0c;
        case 0x219d10u: goto label_219d10;
        case 0x219d14u: goto label_219d14;
        case 0x219d18u: goto label_219d18;
        case 0x219d1cu: goto label_219d1c;
        case 0x219d20u: goto label_219d20;
        case 0x219d24u: goto label_219d24;
        case 0x219d28u: goto label_219d28;
        case 0x219d2cu: goto label_219d2c;
        case 0x219d30u: goto label_219d30;
        case 0x219d34u: goto label_219d34;
        case 0x219d38u: goto label_219d38;
        case 0x219d3cu: goto label_219d3c;
        case 0x219d40u: goto label_219d40;
        case 0x219d44u: goto label_219d44;
        case 0x219d48u: goto label_219d48;
        case 0x219d4cu: goto label_219d4c;
        case 0x219d50u: goto label_219d50;
        case 0x219d54u: goto label_219d54;
        case 0x219d58u: goto label_219d58;
        case 0x219d5cu: goto label_219d5c;
        case 0x219d60u: goto label_219d60;
        case 0x219d64u: goto label_219d64;
        case 0x219d68u: goto label_219d68;
        case 0x219d6cu: goto label_219d6c;
        case 0x219d70u: goto label_219d70;
        case 0x219d74u: goto label_219d74;
        case 0x219d78u: goto label_219d78;
        case 0x219d7cu: goto label_219d7c;
        case 0x219d80u: goto label_219d80;
        case 0x219d84u: goto label_219d84;
        case 0x219d88u: goto label_219d88;
        case 0x219d8cu: goto label_219d8c;
        case 0x219d90u: goto label_219d90;
        case 0x219d94u: goto label_219d94;
        case 0x219d98u: goto label_219d98;
        case 0x219d9cu: goto label_219d9c;
        default: return;
    }

label_2195d0:
    // 0x2195d0: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2195d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2195d4:
    // 0x2195d4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2195d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2195d8:
    // 0x2195d8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2195d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2195dc:
    // 0x2195dc: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2195dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2195e0:
    // 0x2195e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2195e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2195e4:
    // 0x2195e4: 0xdc258c18  ld          $a1, -0x73E8($at)
    ctx->pc = 0x2195e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937624)));
label_2195e8:
    // 0x2195e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2195e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2195ec:
    // 0x2195ec: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2195ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2195f0:
    // 0x2195f0: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x2195f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2195f4:
    // 0x2195f4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2195f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2195f8:
    // 0x2195f8: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x2195f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_2195fc:
    // 0x2195fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2195fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219600:
    // 0x219600: 0xc05de30  jal         func_1778C0
label_219604:
    if (ctx->pc == 0x219604u) {
        ctx->pc = 0x219604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219600u;
        // 0x219604: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219608u;
        goto label_219608;
    }
    ctx->pc = 0x219600u;
    SET_GPR_U32(ctx, 31, 0x219608u);
    ctx->pc = 0x219604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219600u;
    // 0x219604: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x219608u;
label_219608:
    // 0x219608: 0x10000016  b           . + 4 + (0x16 << 2)
label_21960c:
    if (ctx->pc == 0x21960Cu) {
        ctx->pc = 0x219610u;
        goto label_219610;
    }
    ctx->pc = 0x219608u;
    {
        const bool branch_taken_0x219608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219608) {
            ctx->pc = 0x219664u;
            goto label_219664;
        }
    }
    ctx->pc = 0x219610u;
label_219610:
    // 0x219610: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x219610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_219614:
    // 0x219614: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x219614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_219618:
    // 0x219618: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x219618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21961c:
    // 0x21961c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_219620:
    // 0x219620: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x219620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_219624:
    // 0x219624: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x219624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_219628:
    // 0x219628: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x219628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_21962c:
    // 0x21962c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21962cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219630:
    // 0x219630: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x219630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_219634:
    // 0x219634: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x219634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_219638:
    // 0x219638: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x219638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21963c:
    // 0x21963c: 0x8f839268  lw          $v1, -0x6D98($gp)
    ctx->pc = 0x21963cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939240)));
label_219640:
    // 0x219640: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x219640u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_219644:
    // 0x219644: 0xdc258c18  ld          $a1, -0x73E8($at)
    ctx->pc = 0x219644u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937624)));
label_219648:
    // 0x219648: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x219648u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21964c:
    // 0x21964c: 0x240b0100  addiu       $t3, $zero, 0x100
    ctx->pc = 0x21964cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_219650:
    // 0x219650: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x219650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_219654:
    // 0x219654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x219654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219658:
    // 0x219658: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x219658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_21965c:
    // 0x21965c: 0xc05de30  jal         func_1778C0
label_219660:
    if (ctx->pc == 0x219660u) {
        ctx->pc = 0x219660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21965Cu;
        // 0x219660: 0x304affff  andi        $t2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x219664u;
        goto label_219664;
    }
    ctx->pc = 0x21965Cu;
    SET_GPR_U32(ctx, 31, 0x219664u);
    ctx->pc = 0x219660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21965Cu;
    // 0x219660: 0x304affff  andi        $t2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x219664u;
label_219664:
    // 0x219664: 0x0  nop
    ctx->pc = 0x219664u;
    // NOP
label_219668:
    // 0x219668: 0xc070834  jal         func_1C20D0
label_21966c:
    if (ctx->pc == 0x21966Cu) {
        ctx->pc = 0x21966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219668u;
        // 0x21966c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219670u;
        goto label_219670;
    }
    ctx->pc = 0x219668u;
    SET_GPR_U32(ctx, 31, 0x219670u);
    ctx->pc = 0x21966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219668u;
    // 0x21966c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x219670u;
label_219670:
    // 0x219670: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x219670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_219674:
    // 0x219674: 0x260401f0  addiu       $a0, $s0, 0x1F0
    ctx->pc = 0x219674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_219678:
    // 0x219678: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x219678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_21967c:
    // 0x21967c: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x21967cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_219680:
    // 0x219680: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x219680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_219684:
    // 0x219684: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x219684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_219688:
    // 0x219688: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x219688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21968c:
    // 0x21968c: 0x3408ff01  ori         $t0, $zero, 0xFF01
    ctx->pc = 0x21968cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65281);
label_219690:
    // 0x219690: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x219690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_219694:
    // 0x219694: 0x24090178  addiu       $t1, $zero, 0x178
    ctx->pc = 0x219694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_219698:
    // 0x219698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21969c:
    // 0x21969c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21969cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2196a0:
    // 0x2196a0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2196a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2196a4:
    // 0x2196a4: 0x240a00d0  addiu       $t2, $zero, 0xD0
    ctx->pc = 0x2196a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_2196a8:
    // 0x2196a8: 0xc05de30  jal         func_1778C0
label_2196ac:
    if (ctx->pc == 0x2196ACu) {
        ctx->pc = 0x2196ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196A8u;
        // 0x2196ac: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2196B0u;
        goto label_2196b0;
    }
    ctx->pc = 0x2196A8u;
    SET_GPR_U32(ctx, 31, 0x2196B0u);
    ctx->pc = 0x2196ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196A8u;
    // 0x2196ac: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x2196B0u;
label_2196b0:
    // 0x2196b0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2196b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2196b4:
    // 0x2196b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2196b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2196b8:
    // 0x2196b8: 0xc070834  jal         func_1C20D0
label_2196bc:
    if (ctx->pc == 0x2196BCu) {
        ctx->pc = 0x2196BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2196B8u;
        // 0x2196bc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2196C0u;
        goto label_2196c0;
    }
    ctx->pc = 0x2196B8u;
    SET_GPR_U32(ctx, 31, 0x2196C0u);
    ctx->pc = 0x2196BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2196B8u;
    // 0x2196bc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x2196C0u;
label_2196c0:
    // 0x2196c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2196c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2196c4:
    // 0x2196c4: 0x2119821  addu        $s3, $s0, $s1
    ctx->pc = 0x2196c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2196c8:
    // 0x2196c8: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x2196c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_2196cc:
    // 0x2196cc: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x2196ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2196d0:
    // 0x2196d0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2196d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2196d4:
    // 0x2196d4: 0x26640290  addiu       $a0, $s3, 0x290
    ctx->pc = 0x2196d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
label_2196d8:
    // 0x2196d8: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x2196d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
label_2196dc:
    // 0x2196dc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2196dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2196e0:
    // 0x2196e0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2196e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_2196e4:
    // 0x2196e4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2196e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2196e8:
    // 0x2196e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2196e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2196ec:
    // 0x2196ec: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x2196ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_2196f0:
    // 0x2196f0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2196f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2196f4:
    // 0x2196f4: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x2196f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_2196f8:
    // 0x2196f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2196f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2196fc:
    // 0x2196fc: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x2196fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_219700:
    // 0x219700: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x219700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_219704:
    // 0x219704: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x219704u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_219708:
    // 0x219708: 0xc05ded8  jal         func_177B60
label_21970c:
    if (ctx->pc == 0x21970Cu) {
        ctx->pc = 0x21970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219708u;
        // 0x21970c: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219710u;
        goto label_219710;
    }
    ctx->pc = 0x219708u;
    SET_GPR_U32(ctx, 31, 0x219710u);
    ctx->pc = 0x21970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219708u;
    // 0x21970c: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    { ctx->pc = 0x177b60; return; }
    ctx->pc = 0x219710u;
label_219710:
    // 0x219710: 0x1680001c  bnez        $s4, . + 4 + (0x1C << 2)
label_219714:
    if (ctx->pc == 0x219714u) {
        ctx->pc = 0x219718u;
        goto label_219718;
    }
    ctx->pc = 0x219710u;
    {
        const bool branch_taken_0x219710 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x219710) {
            ctx->pc = 0x219784u;
            goto label_219784;
        }
    }
    ctx->pc = 0x219718u;
label_219718:
    // 0x219718: 0xa2600300  sb          $zero, 0x300($s3)
    ctx->pc = 0x219718u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 768), (uint8_t)GPR_U32(ctx, 0));
label_21971c:
    // 0x21971c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x21971cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_219720:
    // 0x219720: 0xa2670301  sb          $a3, 0x301($s3)
    ctx->pc = 0x219720u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 769), (uint8_t)GPR_U32(ctx, 7));
label_219724:
    // 0x219724: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x219724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_219728:
    // 0x219728: 0xa2660302  sb          $a2, 0x302($s3)
    ctx->pc = 0x219728u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 770), (uint8_t)GPR_U32(ctx, 6));
label_21972c:
    // 0x21972c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x21972cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_219730:
    // 0x219730: 0xa2650303  sb          $a1, 0x303($s3)
    ctx->pc = 0x219730u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 771), (uint8_t)GPR_U32(ctx, 5));
label_219734:
    // 0x219734: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x219734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_219738:
    // 0x219738: 0xae640304  sw          $a0, 0x304($s3)
    ctx->pc = 0x219738u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 772), GPR_U32(ctx, 4));
label_21973c:
    // 0x21973c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x21973cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_219740:
    // 0x219740: 0xa2600330  sb          $zero, 0x330($s3)
    ctx->pc = 0x219740u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 816), (uint8_t)GPR_U32(ctx, 0));
label_219744:
    // 0x219744: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x219744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_219748:
    // 0x219748: 0xa2670331  sb          $a3, 0x331($s3)
    ctx->pc = 0x219748u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 817), (uint8_t)GPR_U32(ctx, 7));
label_21974c:
    // 0x21974c: 0xa2660332  sb          $a2, 0x332($s3)
    ctx->pc = 0x21974cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 818), (uint8_t)GPR_U32(ctx, 6));
label_219750:
    // 0x219750: 0xa2650333  sb          $a1, 0x333($s3)
    ctx->pc = 0x219750u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 819), (uint8_t)GPR_U32(ctx, 5));
label_219754:
    // 0x219754: 0xae640334  sw          $a0, 0x334($s3)
    ctx->pc = 0x219754u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 820), GPR_U32(ctx, 4));
label_219758:
    // 0x219758: 0xa2630318  sb          $v1, 0x318($s3)
    ctx->pc = 0x219758u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 792), (uint8_t)GPR_U32(ctx, 3));
label_21975c:
    // 0x21975c: 0xa2660319  sb          $a2, 0x319($s3)
    ctx->pc = 0x21975cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 793), (uint8_t)GPR_U32(ctx, 6));
label_219760:
    // 0x219760: 0xa262031a  sb          $v0, 0x31A($s3)
    ctx->pc = 0x219760u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 794), (uint8_t)GPR_U32(ctx, 2));
label_219764:
    // 0x219764: 0xa265031b  sb          $a1, 0x31B($s3)
    ctx->pc = 0x219764u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 795), (uint8_t)GPR_U32(ctx, 5));
label_219768:
    // 0x219768: 0xae64031c  sw          $a0, 0x31C($s3)
    ctx->pc = 0x219768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 796), GPR_U32(ctx, 4));
label_21976c:
    // 0x21976c: 0xa2630348  sb          $v1, 0x348($s3)
    ctx->pc = 0x21976cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 840), (uint8_t)GPR_U32(ctx, 3));
label_219770:
    // 0x219770: 0xa2660349  sb          $a2, 0x349($s3)
    ctx->pc = 0x219770u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 841), (uint8_t)GPR_U32(ctx, 6));
label_219774:
    // 0x219774: 0xa262034a  sb          $v0, 0x34A($s3)
    ctx->pc = 0x219774u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 842), (uint8_t)GPR_U32(ctx, 2));
label_219778:
    // 0x219778: 0xa265034b  sb          $a1, 0x34B($s3)
    ctx->pc = 0x219778u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 843), (uint8_t)GPR_U32(ctx, 5));
label_21977c:
    // 0x21977c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_219780:
    if (ctx->pc == 0x219780u) {
        ctx->pc = 0x219780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21977Cu;
        // 0x219780: 0xae64034c  sw          $a0, 0x34C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 844), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219784u;
        goto label_219784;
    }
    ctx->pc = 0x21977Cu;
    {
        const bool branch_taken_0x21977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21977Cu;
        // 0x219780: 0xae64034c  sw          $a0, 0x34C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 844), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21977c) {
            ctx->pc = 0x2197F0u;
            goto label_2197f0;
        }
    }
    ctx->pc = 0x219784u;
label_219784:
    // 0x219784: 0x0  nop
    ctx->pc = 0x219784u;
    // NOP
label_219788:
    // 0x219788: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x219788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_21978c:
    // 0x21978c: 0xa2670300  sb          $a3, 0x300($s3)
    ctx->pc = 0x21978cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 768), (uint8_t)GPR_U32(ctx, 7));
label_219790:
    // 0x219790: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x219790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_219794:
    // 0x219794: 0xa2660301  sb          $a2, 0x301($s3)
    ctx->pc = 0x219794u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 769), (uint8_t)GPR_U32(ctx, 6));
label_219798:
    // 0x219798: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x219798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_21979c:
    // 0x21979c: 0xa2650302  sb          $a1, 0x302($s3)
    ctx->pc = 0x21979cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 770), (uint8_t)GPR_U32(ctx, 5));
label_2197a0:
    // 0x2197a0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2197a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2197a4:
    // 0x2197a4: 0xa2640303  sb          $a0, 0x303($s3)
    ctx->pc = 0x2197a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 771), (uint8_t)GPR_U32(ctx, 4));
label_2197a8:
    // 0x2197a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2197a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2197ac:
    // 0x2197ac: 0xae630304  sw          $v1, 0x304($s3)
    ctx->pc = 0x2197acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 772), GPR_U32(ctx, 3));
label_2197b0:
    // 0x2197b0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2197b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2197b4:
    // 0x2197b4: 0xa2670330  sb          $a3, 0x330($s3)
    ctx->pc = 0x2197b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 816), (uint8_t)GPR_U32(ctx, 7));
label_2197b8:
    // 0x2197b8: 0xa2660331  sb          $a2, 0x331($s3)
    ctx->pc = 0x2197b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 817), (uint8_t)GPR_U32(ctx, 6));
label_2197bc:
    // 0x2197bc: 0xa2650332  sb          $a1, 0x332($s3)
    ctx->pc = 0x2197bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 818), (uint8_t)GPR_U32(ctx, 5));
label_2197c0:
    // 0x2197c0: 0xa2640333  sb          $a0, 0x333($s3)
    ctx->pc = 0x2197c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 819), (uint8_t)GPR_U32(ctx, 4));
label_2197c4:
    // 0x2197c4: 0xae630334  sw          $v1, 0x334($s3)
    ctx->pc = 0x2197c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 820), GPR_U32(ctx, 3));
label_2197c8:
    // 0x2197c8: 0xa2620318  sb          $v0, 0x318($s3)
    ctx->pc = 0x2197c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 792), (uint8_t)GPR_U32(ctx, 2));
label_2197cc:
    // 0x2197cc: 0xa2600319  sb          $zero, 0x319($s3)
    ctx->pc = 0x2197ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 793), (uint8_t)GPR_U32(ctx, 0));
label_2197d0:
    // 0x2197d0: 0xa266031a  sb          $a2, 0x31A($s3)
    ctx->pc = 0x2197d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 794), (uint8_t)GPR_U32(ctx, 6));
label_2197d4:
    // 0x2197d4: 0xa264031b  sb          $a0, 0x31B($s3)
    ctx->pc = 0x2197d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 795), (uint8_t)GPR_U32(ctx, 4));
label_2197d8:
    // 0x2197d8: 0xae63031c  sw          $v1, 0x31C($s3)
    ctx->pc = 0x2197d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 796), GPR_U32(ctx, 3));
label_2197dc:
    // 0x2197dc: 0xa2620348  sb          $v0, 0x348($s3)
    ctx->pc = 0x2197dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 840), (uint8_t)GPR_U32(ctx, 2));
label_2197e0:
    // 0x2197e0: 0xa2600349  sb          $zero, 0x349($s3)
    ctx->pc = 0x2197e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 841), (uint8_t)GPR_U32(ctx, 0));
label_2197e4:
    // 0x2197e4: 0xa266034a  sb          $a2, 0x34A($s3)
    ctx->pc = 0x2197e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 842), (uint8_t)GPR_U32(ctx, 6));
label_2197e8:
    // 0x2197e8: 0xa264034b  sb          $a0, 0x34B($s3)
    ctx->pc = 0x2197e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 843), (uint8_t)GPR_U32(ctx, 4));
label_2197ec:
    // 0x2197ec: 0xae63034c  sw          $v1, 0x34C($s3)
    ctx->pc = 0x2197ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 844), GPR_U32(ctx, 3));
label_2197f0:
    // 0x2197f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2197f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2197f4:
    // 0x2197f4: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2197f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_2197f8:
    // 0x2197f8: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
label_2197fc:
    if (ctx->pc == 0x2197FCu) {
        ctx->pc = 0x2197FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197F8u;
        // 0x2197fc: 0x263100d0  addiu       $s1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219800u;
        goto label_219800;
    }
    ctx->pc = 0x2197F8u;
    {
        const bool branch_taken_0x2197f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2197FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197F8u;
        // 0x2197fc: 0x263100d0  addiu       $s1, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197f8) {
            ctx->pc = 0x2196B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2196b8;
        }
    }
    ctx->pc = 0x219800u;
label_219800:
    // 0x219800: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x219800u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219804:
    // 0x219804: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x219804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219808:
    // 0x219808: 0xc056a38  jal         func_15A8E0
label_21980c:
    if (ctx->pc == 0x21980Cu) {
        ctx->pc = 0x21980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219808u;
        // 0x21980c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219810u;
        goto label_219810;
    }
    ctx->pc = 0x219808u;
    SET_GPR_U32(ctx, 31, 0x219810u);
    ctx->pc = 0x21980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219808u;
    // 0x21980c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A8E0u;
    { ctx->pc = 0x15a8e0; return; }
    ctx->pc = 0x219810u;
label_219810:
    // 0x219810: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x219810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_219814:
    // 0x219814: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x219814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_219818:
    // 0x219818: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x219818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_21981c:
    // 0x21981c: 0x24422db0  addiu       $v0, $v0, 0x2DB0
    ctx->pc = 0x21981cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11696));
label_219820:
    // 0x219820: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x219820u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219824:
    // 0x219824: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x219824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_219828:
    // 0x219828: 0xc0550d0  jal         func_154340
label_21982c:
    if (ctx->pc == 0x21982Cu) {
        ctx->pc = 0x21982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219828u;
        // 0x21982c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219830u;
        goto label_219830;
    }
    ctx->pc = 0x219828u;
    SET_GPR_U32(ctx, 31, 0x219830u);
    ctx->pc = 0x21982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219828u;
    // 0x21982c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    { ctx->pc = 0x154340; return; }
    ctx->pc = 0x219830u;
label_219830:
    // 0x219830: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_219834:
    if (ctx->pc == 0x219834u) {
        ctx->pc = 0x219834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219830u;
        // 0x219834: 0x24080194  addiu       $t0, $zero, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219838u;
        goto label_219838;
    }
    ctx->pc = 0x219830u;
    {
        const bool branch_taken_0x219830 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x219834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219830u;
        // 0x219834: 0x24080194  addiu       $t0, $zero, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219830) {
            ctx->pc = 0x219840u;
            goto label_219840;
        }
    }
    ctx->pc = 0x219838u;
label_219838:
    // 0x219838: 0x240300ec  addiu       $v1, $zero, 0xEC
    ctx->pc = 0x219838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_21983c:
    // 0x21983c: 0x624023  subu        $t0, $v1, $v0
    ctx->pc = 0x21983cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_219840:
    // 0x219840: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x219840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_219844:
    // 0x219844: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x219844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_219848:
    // 0x219848: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x219848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21984c:
    // 0x21984c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x21984cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_219850:
    // 0x219850: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x219850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_219854:
    // 0x219854: 0xc054e5c  jal         func_153970
label_219858:
    if (ctx->pc == 0x219858u) {
        ctx->pc = 0x219858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219854u;
        // 0x219858: 0x340aff00  ori         $t2, $zero, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21985Cu;
        goto label_21985c;
    }
    ctx->pc = 0x219854u;
    SET_GPR_U32(ctx, 31, 0x21985Cu);
    ctx->pc = 0x219858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219854u;
    // 0x219858: 0x340aff00  ori         $t2, $zero, 0xFF00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    { ctx->pc = 0x153970; return; }
    ctx->pc = 0x21985Cu;
label_21985c:
    // 0x21985c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21985cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_219860:
    // 0x219860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219864:
    // 0x219864: 0xc054e70  jal         func_1539C0
label_219868:
    if (ctx->pc == 0x219868u) {
        ctx->pc = 0x219868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219864u;
        // 0x219868: 0x54200b  movn        $a0, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21986Cu;
        goto label_21986c;
    }
    ctx->pc = 0x219864u;
    SET_GPR_U32(ctx, 31, 0x21986Cu);
    ctx->pc = 0x219868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219864u;
    // 0x219868: 0x54200b  movn        $a0, $v0, $s4 (Delay Slot)
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539C0u;
    { ctx->pc = 0x1539c0; return; }
    ctx->pc = 0x21986Cu;
label_21986c:
    // 0x21986c: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x21986cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_219870:
    // 0x219870: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x219870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_219874:
    // 0x219874: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x219874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219878:
    // 0x219878: 0x24440430  addiu       $a0, $v0, 0x430
    ctx->pc = 0x219878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
label_21987c:
    // 0x21987c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x21987cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_219880:
    // 0x219880: 0xc054e74  jal         func_1539D0
label_219884:
    if (ctx->pc == 0x219884u) {
        ctx->pc = 0x219884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219880u;
        // 0x219884: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219888u;
        goto label_219888;
    }
    ctx->pc = 0x219880u;
    SET_GPR_U32(ctx, 31, 0x219888u);
    ctx->pc = 0x219884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219880u;
    // 0x219884: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    { ctx->pc = 0x1539d0; return; }
    ctx->pc = 0x219888u;
label_219888:
    // 0x219888: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x219888u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_21988c:
    // 0x21988c: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x21988cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_219890:
    // 0x219890: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_219894:
    if (ctx->pc == 0x219894u) {
        ctx->pc = 0x219894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219890u;
        // 0x219894: 0x26310ea0  addiu       $s1, $s1, 0xEA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219898u;
        goto label_219898;
    }
    ctx->pc = 0x219890u;
    {
        const bool branch_taken_0x219890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219890u;
        // 0x219894: 0x26310ea0  addiu       $s1, $s1, 0xEA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219890) {
            ctx->pc = 0x219808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219808;
        }
    }
    ctx->pc = 0x219898u;
label_219898:
    // 0x219898: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x219898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_21989c:
    // 0x21989c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2198a0:
    // 0x2198a0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2198a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2198a4:
    // 0x2198a4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2198a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2198a8:
    // 0x2198a8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2198a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_2198ac:
    // 0x2198ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2198acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2198b0:
    // 0x2198b0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2198b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2198b4:
    // 0x2198b4: 0x26042170  addiu       $a0, $s0, 0x2170
    ctx->pc = 0x2198b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8560));
label_2198b8:
    // 0x2198b8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2198b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2198bc:
    // 0x2198bc: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2198bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2198c0:
    // 0x2198c0: 0xdc258c28  ld          $a1, -0x73D8($at)
    ctx->pc = 0x2198c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937640)));
label_2198c4:
    // 0x2198c4: 0x24070178  addiu       $a3, $zero, 0x178
    ctx->pc = 0x2198c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_2198c8:
    // 0x2198c8: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x2198c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_2198cc:
    // 0x2198cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2198ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2198d0:
    // 0x2198d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2198d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2198d4:
    // 0x2198d4: 0xc05de30  jal         func_1778C0
label_2198d8:
    if (ctx->pc == 0x2198D8u) {
        ctx->pc = 0x2198D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2198D4u;
        // 0x2198d8: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2198DCu;
        goto label_2198dc;
    }
    ctx->pc = 0x2198D4u;
    SET_GPR_U32(ctx, 31, 0x2198DCu);
    ctx->pc = 0x2198D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198D4u;
    // 0x2198d8: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x2198DCu;
label_2198dc:
    // 0x2198dc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2198dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2198e0:
    // 0x2198e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2198e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2198e4:
    // 0x2198e4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2198e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2198e8:
    // 0x2198e8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2198e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2198ec:
    // 0x2198ec: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2198ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_2198f0:
    // 0x2198f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2198f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2198f4:
    // 0x2198f4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2198f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2198f8:
    // 0x2198f8: 0x26042210  addiu       $a0, $s0, 0x2210
    ctx->pc = 0x2198f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8720));
label_2198fc:
    // 0x2198fc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2198fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_219900:
    // 0x219900: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x219900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_219904:
    // 0x219904: 0xdc258c28  ld          $a1, -0x73D8($at)
    ctx->pc = 0x219904u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937640)));
label_219908:
    // 0x219908: 0x24070178  addiu       $a3, $zero, 0x178
    ctx->pc = 0x219908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_21990c:
    // 0x21990c: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x21990cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_219910:
    // 0x219910: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x219910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219914:
    // 0x219914: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x219914u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_219918:
    // 0x219918: 0xc05de30  jal         func_1778C0
label_21991c:
    if (ctx->pc == 0x21991Cu) {
        ctx->pc = 0x21991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219918u;
        // 0x21991c: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219920u;
        goto label_219920;
    }
    ctx->pc = 0x219918u;
    SET_GPR_U32(ctx, 31, 0x219920u);
    ctx->pc = 0x21991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219918u;
    // 0x21991c: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x219920u;
label_219920:
    // 0x219920: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x219920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_219924:
    // 0x219924: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x219924u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_219928:
    // 0x219928: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x219928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21992c:
    // 0x21992c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21992cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_219930:
    // 0x219930: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x219930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_219934:
    // 0x219934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219938:
    // 0x219938: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x219938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21993c:
    // 0x21993c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21993cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_219940:
    // 0x219940: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x219940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_219944:
    // 0x219944: 0x260422b0  addiu       $a0, $s0, 0x22B0
    ctx->pc = 0x219944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8880));
label_219948:
    // 0x219948: 0xdc258c28  ld          $a1, -0x73D8($at)
    ctx->pc = 0x219948u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937640)));
label_21994c:
    // 0x21994c: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x21994cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_219950:
    // 0x219950: 0x24070188  addiu       $a3, $zero, 0x188
    ctx->pc = 0x219950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_219954:
    // 0x219954: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x219954u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_219958:
    // 0x219958: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x219958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_21995c:
    // 0x21995c: 0xc05de30  jal         func_1778C0
label_219960:
    if (ctx->pc == 0x219960u) {
        ctx->pc = 0x219960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21995Cu;
        // 0x219960: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219964u;
        goto label_219964;
    }
    ctx->pc = 0x21995Cu;
    SET_GPR_U32(ctx, 31, 0x219964u);
    ctx->pc = 0x219960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21995Cu;
    // 0x219960: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x219964u;
label_219964:
    // 0x219964: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x219964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_219968:
    // 0x219968: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x219968u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_21996c:
    // 0x21996c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21996cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_219970:
    // 0x219970: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x219970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_219974:
    // 0x219974: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x219974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_219978:
    // 0x219978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21997c:
    // 0x21997c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21997cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_219980:
    // 0x219980: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x219980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_219984:
    // 0x219984: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x219984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_219988:
    // 0x219988: 0x26042350  addiu       $a0, $s0, 0x2350
    ctx->pc = 0x219988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9040));
label_21998c:
    // 0x21998c: 0xdc258c28  ld          $a1, -0x73D8($at)
    ctx->pc = 0x21998cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937640)));
label_219990:
    // 0x219990: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x219990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_219994:
    // 0x219994: 0x24070188  addiu       $a3, $zero, 0x188
    ctx->pc = 0x219994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_219998:
    // 0x219998: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x219998u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_21999c:
    // 0x21999c: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x21999cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2199a0:
    // 0x2199a0: 0xc05de30  jal         func_1778C0
label_2199a4:
    if (ctx->pc == 0x2199A4u) {
        ctx->pc = 0x2199A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199A0u;
        // 0x2199a4: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2199A8u;
        goto label_2199a8;
    }
    ctx->pc = 0x2199A0u;
    SET_GPR_U32(ctx, 31, 0x2199A8u);
    ctx->pc = 0x2199A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199A0u;
    // 0x2199a4: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x2199A8u;
label_2199a8:
    // 0x2199a8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2199a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2199ac:
    // 0x2199ac: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x2199acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2199b0:
    // 0x2199b0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2199b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_2199b4:
    // 0x2199b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2199b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2199b8:
    // 0x2199b8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2199b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_2199bc:
    // 0x2199bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2199bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2199c0:
    // 0x2199c0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2199c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2199c4:
    // 0x2199c4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2199c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2199c8:
    // 0x2199c8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2199c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_2199cc:
    // 0x2199cc: 0x260423f0  addiu       $a0, $s0, 0x23F0
    ctx->pc = 0x2199ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9200));
label_2199d0:
    // 0x2199d0: 0xdc258c28  ld          $a1, -0x73D8($at)
    ctx->pc = 0x2199d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937640)));
label_2199d4:
    // 0x2199d4: 0x240601a0  addiu       $a2, $zero, 0x1A0
    ctx->pc = 0x2199d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
label_2199d8:
    // 0x2199d8: 0x24070188  addiu       $a3, $zero, 0x188
    ctx->pc = 0x2199d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_2199dc:
    // 0x2199dc: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x2199dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_2199e0:
    // 0x2199e0: 0x240900a0  addiu       $t1, $zero, 0xA0
    ctx->pc = 0x2199e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_2199e4:
    // 0x2199e4: 0xc05de30  jal         func_1778C0
label_2199e8:
    if (ctx->pc == 0x2199E8u) {
        ctx->pc = 0x2199E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2199E4u;
        // 0x2199e8: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2199ECu;
        goto label_2199ec;
    }
    ctx->pc = 0x2199E4u;
    SET_GPR_U32(ctx, 31, 0x2199ECu);
    ctx->pc = 0x2199E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2199E4u;
    // 0x2199e8: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x2199ECu;
label_2199ec:
    // 0x2199ec: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x2199ecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_2199f0:
    // 0x2199f0: 0x26042490  addiu       $a0, $s0, 0x2490
    ctx->pc = 0x2199f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9360));
label_2199f4:
    // 0x2199f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2199f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2199f8:
    // 0x2199f8: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x2199f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_2199fc:
    // 0x2199fc: 0x24070180  addiu       $a3, $zero, 0x180
    ctx->pc = 0x2199fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_219a00:
    // 0x219a00: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x219a00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_219a04:
    // 0x219a04: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x219a04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_219a08:
    // 0x219a08: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x219a08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_219a0c:
    // 0x219a0c: 0xc0708ac  jal         func_1C22B0
label_219a10:
    if (ctx->pc == 0x219A10u) {
        ctx->pc = 0x219A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A0Cu;
        // 0x219a10: 0x256be0f0  addiu       $t3, $t3, -0x1F10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219A14u;
        goto label_219a14;
    }
    ctx->pc = 0x219A0Cu;
    SET_GPR_U32(ctx, 31, 0x219A14u);
    ctx->pc = 0x219A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A0Cu;
    // 0x219a10: 0x256be0f0  addiu       $t3, $t3, -0x1F10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x219A14u;
label_219a14:
    // 0x219a14: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x219a14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_219a18:
    // 0x219a18: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x219a18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_219a1c:
    // 0x219a1c: 0x1460fe56  bnez        $v1, . + 4 + (-0x1AA << 2)
label_219a20:
    if (ctx->pc == 0x219A20u) {
        ctx->pc = 0x219A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A1Cu;
        // 0x219a20: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219A24u;
        goto label_219a24;
    }
    ctx->pc = 0x219A1Cu;
    {
        const bool branch_taken_0x219a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x219A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A1Cu;
        // 0x219a20: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219a1c) {
            ctx->pc = 0x219378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x219378; return; }
        }
    }
    ctx->pc = 0x219A24u;
label_219a24:
    // 0x219a24: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x219a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_219a28:
    // 0x219a28: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x219a28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_219a2c:
    // 0x219a2c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x219a2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_219a30:
    // 0x219a30: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x219a30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_219a34:
    // 0x219a34: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x219a34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_219a38:
    // 0x219a38: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x219a38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_219a3c:
    // 0x219a3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x219a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_219a40:
    // 0x219a40: 0x3e00008  jr          $ra
label_219a44:
    if (ctx->pc == 0x219A44u) {
        ctx->pc = 0x219A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A40u;
        // 0x219a44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219A48u;
        goto label_219a48;
    }
    ctx->pc = 0x219A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A40u;
        // 0x219a44: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219A48u;
label_219a48:
    // 0x219a48: 0x0  nop
    ctx->pc = 0x219a48u;
    // NOP
label_219a4c:
    // 0x219a4c: 0x0  nop
    ctx->pc = 0x219a4cu;
    // NOP
label_219a50:
    // 0x219a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x219a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_219a54:
    // 0x219a54: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x219a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_219a58:
    // 0x219a58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x219a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_219a5c:
    // 0x219a5c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x219a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_219a60:
    // 0x219a60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x219a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_219a64:
    // 0x219a64: 0x27839260  addiu       $v1, $gp, -0x6DA0
    ctx->pc = 0x219a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939232));
label_219a68:
    // 0x219a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_219a6c:
    // 0x219a6c: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x219a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
label_219a70:
    // 0x219a70: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x219a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_219a74:
    // 0x219a74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x219a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219a78:
    // 0x219a78: 0x8f829250  lw          $v0, -0x6DB0($gp)
    ctx->pc = 0x219a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939216)));
label_219a7c:
    // 0x219a7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x219a7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219a80:
    // 0x219a80: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x219a80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_219a84:
    // 0x219a84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x219a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_219a88:
    // 0x219a88: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x219a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_219a8c:
    // 0x219a8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x219a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_219a90:
    // 0x219a90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x219a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_219a94:
    // 0x219a94: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x219a94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_219a98:
    // 0x219a98: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x219a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_219a9c:
    // 0x219a9c: 0xa68821  addu        $s1, $a1, $a2
    ctx->pc = 0x219a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_219aa0:
    // 0x219aa0: 0xa6020358  sh          $v0, 0x358($s0)
    ctx->pc = 0x219aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 856), (uint16_t)GPR_U32(ctx, 2));
label_219aa4:
    // 0x219aa4: 0xa6020328  sh          $v0, 0x328($s0)
    ctx->pc = 0x219aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 808), (uint16_t)GPR_U32(ctx, 2));
label_219aa8:
    // 0x219aa8: 0xa6020410  sh          $v0, 0x410($s0)
    ctx->pc = 0x219aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1040), (uint16_t)GPR_U32(ctx, 2));
label_219aac:
    // 0x219aac: 0xa60203e0  sh          $v0, 0x3E0($s0)
    ctx->pc = 0x219aacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 992), (uint16_t)GPR_U32(ctx, 2));
label_219ab0:
    // 0x219ab0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x219ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_219ab4:
    // 0x219ab4: 0x8f829258  lw          $v0, -0x6DA8($gp)
    ctx->pc = 0x219ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939224)));
label_219ab8:
    // 0x219ab8: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
label_219abc:
    if (ctx->pc == 0x219ABCu) {
        ctx->pc = 0x219ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AB8u;
        // 0x219abc: 0x2081021  addu        $v0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219AC0u;
        goto label_219ac0;
    }
    ctx->pc = 0x219AB8u;
    {
        const bool branch_taken_0x219ab8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x219ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AB8u;
        // 0x219abc: 0x2081021  addu        $v0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ab8) {
            ctx->pc = 0x219AC8u;
            goto label_219ac8;
        }
    }
    ctx->pc = 0x219AC0u;
label_219ac0:
    // 0x219ac0: 0x10000003  b           . + 4 + (0x3 << 2)
label_219ac4:
    if (ctx->pc == 0x219AC4u) {
        ctx->pc = 0x219AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AC0u;
        // 0x219ac4: 0xa0432283  sb          $v1, 0x2283($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8835), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219AC8u;
        goto label_219ac8;
    }
    ctx->pc = 0x219AC0u;
    {
        const bool branch_taken_0x219ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AC0u;
        // 0x219ac4: 0xa0432283  sb          $v1, 0x2283($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8835), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ac0) {
            ctx->pc = 0x219AD0u;
            goto label_219ad0;
        }
    }
    ctx->pc = 0x219AC8u;
label_219ac8:
    // 0x219ac8: 0x2081021  addu        $v0, $s0, $t0
    ctx->pc = 0x219ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_219acc:
    // 0x219acc: 0xa0402283  sb          $zero, 0x2283($v0)
    ctx->pc = 0x219accu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8835), (uint8_t)GPR_U32(ctx, 0));
label_219ad0:
    // 0x219ad0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x219ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_219ad4:
    // 0x219ad4: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x219ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
label_219ad8:
    // 0x219ad8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_219adc:
    if (ctx->pc == 0x219ADCu) {
        ctx->pc = 0x219ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AD8u;
        // 0x219adc: 0x250800a0  addiu       $t0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219AE0u;
        goto label_219ae0;
    }
    ctx->pc = 0x219AD8u;
    {
        const bool branch_taken_0x219ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AD8u;
        // 0x219adc: 0x250800a0  addiu       $t0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ad8) {
            ctx->pc = 0x219AB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219ab4;
        }
    }
    ctx->pc = 0x219AE0u;
label_219ae0:
    // 0x219ae0: 0x8f889254  lw          $t0, -0x6DAC($gp)
    ctx->pc = 0x219ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939220)));
label_219ae4:
    // 0x219ae4: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x219ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_219ae8:
    // 0x219ae8: 0x34468889  ori         $a2, $v0, 0x8889
    ctx->pc = 0x219ae8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_219aec:
    // 0x219aec: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x219aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_219af0:
    // 0x219af0: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x219af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_219af4:
    // 0x219af4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x219af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_219af8:
    // 0x219af8: 0x24a5e0f8  addiu       $a1, $a1, -0x1F08
    ctx->pc = 0x219af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959352));
label_219afc:
    // 0x219afc: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x219afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_219b00:
    // 0x219b00: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x219b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_219b04:
    // 0x219b04: 0x0  nop
    ctx->pc = 0x219b04u;
    // NOP
label_219b08:
    // 0x219b08: 0x1010  mfhi        $v0
    ctx->pc = 0x219b08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_219b0c:
    // 0x219b0c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x219b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_219b10:
    // 0x219b10: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x219b10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_219b14:
    // 0x219b14: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x219b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219b18:
    // 0x219b18: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x219b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_219b1c:
    // 0x219b1c: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x219b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_219b20:
    // 0x219b20: 0x0  nop
    ctx->pc = 0x219b20u;
    // NOP
label_219b24:
    // 0x219b24: 0x1010  mfhi        $v0
    ctx->pc = 0x219b24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_219b28:
    // 0x219b28: 0x107001a  div         $zero, $t0, $a3
    ctx->pc = 0x219b28u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_219b2c:
    // 0x219b2c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x219b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_219b30:
    // 0x219b30: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x219b30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_219b34:
    // 0x219b34: 0x3810  mfhi        $a3
    ctx->pc = 0x219b34u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_219b38:
    // 0x219b38: 0xc08f20e  jal         func_23C838
label_219b3c:
    if (ctx->pc == 0x219B3Cu) {
        ctx->pc = 0x219B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B38u;
        // 0x219b3c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B40u;
        goto label_219b40;
    }
    ctx->pc = 0x219B38u;
    SET_GPR_U32(ctx, 31, 0x219B40u);
    ctx->pc = 0x219B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B38u;
    // 0x219b3c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x219B40u;
label_219b40:
    // 0x219b40: 0x26042490  addiu       $a0, $s0, 0x2490
    ctx->pc = 0x219b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9360));
label_219b44:
    // 0x219b44: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x219b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_219b48:
    // 0x219b48: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x219b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_219b4c:
    // 0x219b4c: 0x24070180  addiu       $a3, $zero, 0x180
    ctx->pc = 0x219b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_219b50:
    // 0x219b50: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x219b50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_219b54:
    // 0x219b54: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x219b54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_219b58:
    // 0x219b58: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x219b58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_219b5c:
    // 0x219b5c: 0xc0708ac  jal         func_1C22B0
label_219b60:
    if (ctx->pc == 0x219B60u) {
        ctx->pc = 0x219B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B5Cu;
        // 0x219b60: 0x27ab0030  addiu       $t3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B64u;
        goto label_219b64;
    }
    ctx->pc = 0x219B5Cu;
    SET_GPR_U32(ctx, 31, 0x219B64u);
    ctx->pc = 0x219B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B5Cu;
    // 0x219b60: 0x27ab0030  addiu       $t3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x219B64u;
label_219b64:
    // 0x219b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_219b68:
    // 0x219b68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_219b6c:
    // 0x219b6c: 0x2406027b  addiu       $a2, $zero, 0x27B
    ctx->pc = 0x219b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 635));
label_219b70:
    // 0x219b70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x219b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219b74:
    // 0x219b74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x219b74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219b78:
    // 0x219b78: 0xc066c72  jal         func_19B1C8
label_219b7c:
    if (ctx->pc == 0x219B7Cu) {
        ctx->pc = 0x219B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B78u;
        // 0x219b7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B80u;
        goto label_219b80;
    }
    ctx->pc = 0x219B78u;
    SET_GPR_U32(ctx, 31, 0x219B80u);
    ctx->pc = 0x219B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B78u;
    // 0x219b7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x219B80u;
label_219b80:
    // 0x219b80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x219b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_219b84:
    // 0x219b84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x219b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_219b88:
    // 0x219b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_219b8c:
    // 0x219b8c: 0x3e00008  jr          $ra
label_219b90:
    if (ctx->pc == 0x219B90u) {
        ctx->pc = 0x219B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B8Cu;
        // 0x219b90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219B94u;
        goto label_219b94;
    }
    ctx->pc = 0x219B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B8Cu;
        // 0x219b90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219B94u;
label_219b94:
    // 0x219b94: 0x0  nop
    ctx->pc = 0x219b94u;
    // NOP
label_219b98:
    // 0x219b98: 0x0  nop
    ctx->pc = 0x219b98u;
    // NOP
label_219b9c:
    // 0x219b9c: 0x0  nop
    ctx->pc = 0x219b9cu;
    // NOP
label_219ba0:
    // 0x219ba0: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
label_219ba4:
    if (ctx->pc == 0x219BA4u) {
        ctx->pc = 0x219BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BA0u;
        // 0x219ba4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BA8u;
        goto label_219ba8;
    }
    ctx->pc = 0x219BA0u;
    {
        const bool branch_taken_0x219ba0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x219BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BA0u;
        // 0x219ba4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ba0) {
            ctx->pc = 0x219BC8u;
            goto label_219bc8;
        }
    }
    ctx->pc = 0x219BA8u;
label_219ba8:
    // 0x219ba8: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
label_219bac:
    if (ctx->pc == 0x219BACu) {
        ctx->pc = 0x219BB0u;
        goto label_219bb0;
    }
    ctx->pc = 0x219BA8u;
    {
        const bool branch_taken_0x219ba8 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x219ba8) {
            ctx->pc = 0x219BB8u;
            goto label_219bb8;
        }
    }
    ctx->pc = 0x219BB0u;
label_219bb0:
    // 0x219bb0: 0x1000006c  b           . + 4 + (0x6C << 2)
label_219bb4:
    if (ctx->pc == 0x219BB4u) {
        ctx->pc = 0x219BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BB0u;
        // 0x219bb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BB8u;
        goto label_219bb8;
    }
    ctx->pc = 0x219BB0u;
    {
        const bool branch_taken_0x219bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BB0u;
        // 0x219bb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bb0) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BB8u;
label_219bb8:
    // 0x219bb8: 0x481006a  bgez        $a0, . + 4 + (0x6A << 2)
label_219bbc:
    if (ctx->pc == 0x219BBCu) {
        ctx->pc = 0x219BC0u;
        goto label_219bc0;
    }
    ctx->pc = 0x219BB8u;
    {
        const bool branch_taken_0x219bb8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x219bb8) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BC0u;
label_219bc0:
    // 0x219bc0: 0x10000068  b           . + 4 + (0x68 << 2)
label_219bc4:
    if (ctx->pc == 0x219BC4u) {
        ctx->pc = 0x219BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BC0u;
        // 0x219bc4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BC8u;
        goto label_219bc8;
    }
    ctx->pc = 0x219BC0u;
    {
        const bool branch_taken_0x219bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BC0u;
        // 0x219bc4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bc0) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BC8u;
label_219bc8:
    // 0x219bc8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_219bcc:
    if (ctx->pc == 0x219BCCu) {
        ctx->pc = 0x219BD0u;
        goto label_219bd0;
    }
    ctx->pc = 0x219BC8u;
    {
        const bool branch_taken_0x219bc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x219bc8) {
            ctx->pc = 0x219BF0u;
            goto label_219bf0;
        }
    }
    ctx->pc = 0x219BD0u;
label_219bd0:
    // 0x219bd0: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
label_219bd4:
    if (ctx->pc == 0x219BD4u) {
        ctx->pc = 0x219BD8u;
        goto label_219bd8;
    }
    ctx->pc = 0x219BD0u;
    {
        const bool branch_taken_0x219bd0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x219bd0) {
            ctx->pc = 0x219BE0u;
            goto label_219be0;
        }
    }
    ctx->pc = 0x219BD8u;
label_219bd8:
    // 0x219bd8: 0x10000062  b           . + 4 + (0x62 << 2)
label_219bdc:
    if (ctx->pc == 0x219BDCu) {
        ctx->pc = 0x219BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BD8u;
        // 0x219bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BE0u;
        goto label_219be0;
    }
    ctx->pc = 0x219BD8u;
    {
        const bool branch_taken_0x219bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BD8u;
        // 0x219bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bd8) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BE0u;
label_219be0:
    // 0x219be0: 0x4a10060  bgez        $a1, . + 4 + (0x60 << 2)
label_219be4:
    if (ctx->pc == 0x219BE4u) {
        ctx->pc = 0x219BE8u;
        goto label_219be8;
    }
    ctx->pc = 0x219BE0u;
    {
        const bool branch_taken_0x219be0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x219be0) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BE8u;
label_219be8:
    // 0x219be8: 0x1000005e  b           . + 4 + (0x5E << 2)
label_219bec:
    if (ctx->pc == 0x219BECu) {
        ctx->pc = 0x219BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BE8u;
        // 0x219bec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219BF0u;
        goto label_219bf0;
    }
    ctx->pc = 0x219BE8u;
    {
        const bool branch_taken_0x219be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BE8u;
        // 0x219bec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219be8) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BF0u;
label_219bf0:
    // 0x219bf0: 0x18a0002f  blez        $a1, . + 4 + (0x2F << 2)
label_219bf4:
    if (ctx->pc == 0x219BF4u) {
        ctx->pc = 0x219BF8u;
        goto label_219bf8;
    }
    ctx->pc = 0x219BF0u;
    {
        const bool branch_taken_0x219bf0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x219bf0) {
            ctx->pc = 0x219CB0u;
            goto label_219cb0;
        }
    }
    ctx->pc = 0x219BF8u;
label_219bf8:
    // 0x219bf8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x219bf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_219bfc:
    // 0x219bfc: 0x3c02c01a  lui         $v0, 0xC01A
    ctx->pc = 0x219bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49178 << 16));
label_219c00:
    // 0x219c00: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x219c00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219c04:
    // 0x219c04: 0x34428241  ori         $v0, $v0, 0x8241
    ctx->pc = 0x219c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33345);
label_219c08:
    // 0x219c08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x219c08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_219c0c:
    // 0x219c0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x219c0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_219c10:
    // 0x219c10: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x219c10u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_219c14:
    // 0x219c14: 0x0  nop
    ctx->pc = 0x219c14u;
    // NOP
label_219c18:
    // 0x219c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219c1c:
    // 0x219c1c: 0x0  nop
    ctx->pc = 0x219c1cu;
    // NOP
label_219c20:
    // 0x219c20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219c24:
    // 0x219c24: 0x0  nop
    ctx->pc = 0x219c24u;
    // NOP
label_219c28:
    // 0x219c28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_219c2c:
    if (ctx->pc == 0x219C2Cu) {
        ctx->pc = 0x219C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C28u;
        // 0x219c2c: 0x3c02bed4  lui         $v0, 0xBED4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48852 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C30u;
        goto label_219c30;
    }
    ctx->pc = 0x219C28u;
    {
        const bool branch_taken_0x219c28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C28u;
        // 0x219c2c: 0x3c02bed4  lui         $v0, 0xBED4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48852 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c28) {
            ctx->pc = 0x219C38u;
            goto label_219c38;
        }
    }
    ctx->pc = 0x219C30u;
label_219c30:
    // 0x219c30: 0x1000004c  b           . + 4 + (0x4C << 2)
label_219c34:
    if (ctx->pc == 0x219C34u) {
        ctx->pc = 0x219C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C30u;
        // 0x219c34: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C38u;
        goto label_219c38;
    }
    ctx->pc = 0x219C30u;
    {
        const bool branch_taken_0x219c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C30u;
        // 0x219c34: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c30) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219C38u;
label_219c38:
    // 0x219c38: 0x34421206  ori         $v0, $v0, 0x1206
    ctx->pc = 0x219c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4614);
label_219c3c:
    // 0x219c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219c40:
    // 0x219c40: 0x0  nop
    ctx->pc = 0x219c40u;
    // NOP
label_219c44:
    // 0x219c44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219c44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219c48:
    // 0x219c48: 0x0  nop
    ctx->pc = 0x219c48u;
    // NOP
label_219c4c:
    // 0x219c4c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_219c50:
    if (ctx->pc == 0x219C50u) {
        ctx->pc = 0x219C54u;
        goto label_219c54;
    }
    ctx->pc = 0x219C4Cu;
    {
        const bool branch_taken_0x219c4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219c4c) {
            ctx->pc = 0x219C5Cu;
            goto label_219c5c;
        }
    }
    ctx->pc = 0x219C54u;
label_219c54:
    // 0x219c54: 0x10000043  b           . + 4 + (0x43 << 2)
label_219c58:
    if (ctx->pc == 0x219C58u) {
        ctx->pc = 0x219C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C54u;
        // 0x219c58: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C5Cu;
        goto label_219c5c;
    }
    ctx->pc = 0x219C54u;
    {
        const bool branch_taken_0x219c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C54u;
        // 0x219c58: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c54) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219C5Cu;
label_219c5c:
    // 0x219c5c: 0x3c023ed4  lui         $v0, 0x3ED4
    ctx->pc = 0x219c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16084 << 16));
label_219c60:
    // 0x219c60: 0x34421206  ori         $v0, $v0, 0x1206
    ctx->pc = 0x219c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4614);
label_219c64:
    // 0x219c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219c68:
    // 0x219c68: 0x0  nop
    ctx->pc = 0x219c68u;
    // NOP
label_219c6c:
    // 0x219c6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219c70:
    // 0x219c70: 0x0  nop
    ctx->pc = 0x219c70u;
    // NOP
label_219c74:
    // 0x219c74: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_219c78:
    if (ctx->pc == 0x219C78u) {
        ctx->pc = 0x219C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C74u;
        // 0x219c78: 0x3c02401a  lui         $v0, 0x401A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16410 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C7Cu;
        goto label_219c7c;
    }
    ctx->pc = 0x219C74u;
    {
        const bool branch_taken_0x219c74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C74u;
        // 0x219c78: 0x3c02401a  lui         $v0, 0x401A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16410 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c74) {
            ctx->pc = 0x219C84u;
            goto label_219c84;
        }
    }
    ctx->pc = 0x219C7Cu;
label_219c7c:
    // 0x219c7c: 0x10000039  b           . + 4 + (0x39 << 2)
label_219c80:
    if (ctx->pc == 0x219C80u) {
        ctx->pc = 0x219C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C7Cu;
        // 0x219c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219C84u;
        goto label_219c84;
    }
    ctx->pc = 0x219C7Cu;
    {
        const bool branch_taken_0x219c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C7Cu;
        // 0x219c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c7c) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219C84u;
label_219c84:
    // 0x219c84: 0x34428241  ori         $v0, $v0, 0x8241
    ctx->pc = 0x219c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33345);
label_219c88:
    // 0x219c88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219c8c:
    // 0x219c8c: 0x0  nop
    ctx->pc = 0x219c8cu;
    // NOP
label_219c90:
    // 0x219c90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219c94:
    // 0x219c94: 0x0  nop
    ctx->pc = 0x219c94u;
    // NOP
label_219c98:
    // 0x219c98: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_219c9c:
    if (ctx->pc == 0x219C9Cu) {
        ctx->pc = 0x219CA0u;
        goto label_219ca0;
    }
    ctx->pc = 0x219C98u;
    {
        const bool branch_taken_0x219c98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219c98) {
            ctx->pc = 0x219CA8u;
            goto label_219ca8;
        }
    }
    ctx->pc = 0x219CA0u;
label_219ca0:
    // 0x219ca0: 0x10000030  b           . + 4 + (0x30 << 2)
label_219ca4:
    if (ctx->pc == 0x219CA4u) {
        ctx->pc = 0x219CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CA0u;
        // 0x219ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219CA8u;
        goto label_219ca8;
    }
    ctx->pc = 0x219CA0u;
    {
        const bool branch_taken_0x219ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CA0u;
        // 0x219ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ca0) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219CA8u;
label_219ca8:
    // 0x219ca8: 0x1000002e  b           . + 4 + (0x2E << 2)
label_219cac:
    if (ctx->pc == 0x219CACu) {
        ctx->pc = 0x219CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CA8u;
        // 0x219cac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219CB0u;
        goto label_219cb0;
    }
    ctx->pc = 0x219CA8u;
    {
        const bool branch_taken_0x219ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CA8u;
        // 0x219cac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ca8) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219CB0u;
label_219cb0:
    // 0x219cb0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x219cb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_219cb4:
    // 0x219cb4: 0x3c02c01a  lui         $v0, 0xC01A
    ctx->pc = 0x219cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49178 << 16));
label_219cb8:
    // 0x219cb8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x219cb8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219cbc:
    // 0x219cbc: 0x34428241  ori         $v0, $v0, 0x8241
    ctx->pc = 0x219cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33345);
label_219cc0:
    // 0x219cc0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x219cc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_219cc4:
    // 0x219cc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x219cc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_219cc8:
    // 0x219cc8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x219cc8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_219ccc:
    // 0x219ccc: 0x0  nop
    ctx->pc = 0x219cccu;
    // NOP
label_219cd0:
    // 0x219cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219cd4:
    // 0x219cd4: 0x0  nop
    ctx->pc = 0x219cd4u;
    // NOP
label_219cd8:
    // 0x219cd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219cdc:
    // 0x219cdc: 0x0  nop
    ctx->pc = 0x219cdcu;
    // NOP
label_219ce0:
    // 0x219ce0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_219ce4:
    if (ctx->pc == 0x219CE4u) {
        ctx->pc = 0x219CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CE0u;
        // 0x219ce4: 0x3c02bed4  lui         $v0, 0xBED4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48852 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219CE8u;
        goto label_219ce8;
    }
    ctx->pc = 0x219CE0u;
    {
        const bool branch_taken_0x219ce0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CE0u;
        // 0x219ce4: 0x3c02bed4  lui         $v0, 0xBED4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48852 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ce0) {
            ctx->pc = 0x219CF0u;
            goto label_219cf0;
        }
    }
    ctx->pc = 0x219CE8u;
label_219ce8:
    // 0x219ce8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_219cec:
    if (ctx->pc == 0x219CECu) {
        ctx->pc = 0x219CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CE8u;
        // 0x219cec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219CF0u;
        goto label_219cf0;
    }
    ctx->pc = 0x219CE8u;
    {
        const bool branch_taken_0x219ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CE8u;
        // 0x219cec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ce8) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219CF0u;
label_219cf0:
    // 0x219cf0: 0x34421206  ori         $v0, $v0, 0x1206
    ctx->pc = 0x219cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4614);
label_219cf4:
    // 0x219cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219cf8:
    // 0x219cf8: 0x0  nop
    ctx->pc = 0x219cf8u;
    // NOP
label_219cfc:
    // 0x219cfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219d00:
    // 0x219d00: 0x0  nop
    ctx->pc = 0x219d00u;
    // NOP
label_219d04:
    // 0x219d04: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_219d08:
    if (ctx->pc == 0x219D08u) {
        ctx->pc = 0x219D0Cu;
        goto label_219d0c;
    }
    ctx->pc = 0x219D04u;
    {
        const bool branch_taken_0x219d04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219d04) {
            ctx->pc = 0x219D14u;
            goto label_219d14;
        }
    }
    ctx->pc = 0x219D0Cu;
label_219d0c:
    // 0x219d0c: 0x10000015  b           . + 4 + (0x15 << 2)
label_219d10:
    if (ctx->pc == 0x219D10u) {
        ctx->pc = 0x219D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D0Cu;
        // 0x219d10: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D14u;
        goto label_219d14;
    }
    ctx->pc = 0x219D0Cu;
    {
        const bool branch_taken_0x219d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D0Cu;
        // 0x219d10: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d0c) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219D14u;
label_219d14:
    // 0x219d14: 0x3c023ed4  lui         $v0, 0x3ED4
    ctx->pc = 0x219d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16084 << 16));
label_219d18:
    // 0x219d18: 0x34421206  ori         $v0, $v0, 0x1206
    ctx->pc = 0x219d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4614);
label_219d1c:
    // 0x219d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219d20:
    // 0x219d20: 0x0  nop
    ctx->pc = 0x219d20u;
    // NOP
label_219d24:
    // 0x219d24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219d28:
    // 0x219d28: 0x0  nop
    ctx->pc = 0x219d28u;
    // NOP
label_219d2c:
    // 0x219d2c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_219d30:
    if (ctx->pc == 0x219D30u) {
        ctx->pc = 0x219D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D2Cu;
        // 0x219d30: 0x3c02401a  lui         $v0, 0x401A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16410 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D34u;
        goto label_219d34;
    }
    ctx->pc = 0x219D2Cu;
    {
        const bool branch_taken_0x219d2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D2Cu;
        // 0x219d30: 0x3c02401a  lui         $v0, 0x401A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16410 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d2c) {
            ctx->pc = 0x219D3Cu;
            goto label_219d3c;
        }
    }
    ctx->pc = 0x219D34u;
label_219d34:
    // 0x219d34: 0x1000000b  b           . + 4 + (0xB << 2)
label_219d38:
    if (ctx->pc == 0x219D38u) {
        ctx->pc = 0x219D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D34u;
        // 0x219d38: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D3Cu;
        goto label_219d3c;
    }
    ctx->pc = 0x219D34u;
    {
        const bool branch_taken_0x219d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D34u;
        // 0x219d38: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d34) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219D3Cu;
label_219d3c:
    // 0x219d3c: 0x34428241  ori         $v0, $v0, 0x8241
    ctx->pc = 0x219d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33345);
label_219d40:
    // 0x219d40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_219d44:
    // 0x219d44: 0x0  nop
    ctx->pc = 0x219d44u;
    // NOP
label_219d48:
    // 0x219d48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219d48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_219d4c:
    // 0x219d4c: 0x0  nop
    ctx->pc = 0x219d4cu;
    // NOP
label_219d50:
    // 0x219d50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_219d54:
    if (ctx->pc == 0x219D54u) {
        ctx->pc = 0x219D58u;
        goto label_219d58;
    }
    ctx->pc = 0x219D50u;
    {
        const bool branch_taken_0x219d50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219d50) {
            ctx->pc = 0x219D60u;
            goto label_219d60;
        }
    }
    ctx->pc = 0x219D58u;
label_219d58:
    // 0x219d58: 0x10000002  b           . + 4 + (0x2 << 2)
label_219d5c:
    if (ctx->pc == 0x219D5Cu) {
        ctx->pc = 0x219D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D58u;
        // 0x219d5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219D60u;
        goto label_219d60;
    }
    ctx->pc = 0x219D58u;
    {
        const bool branch_taken_0x219d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D58u;
        // 0x219d5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d58) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219D60u;
label_219d60:
    // 0x219d60: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x219d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_219d64:
    // 0x219d64: 0x3e00008  jr          $ra
label_219d68:
    if (ctx->pc == 0x219D68u) {
        ctx->pc = 0x219D6Cu;
        goto label_219d6c;
    }
    ctx->pc = 0x219D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219D6Cu;
label_219d6c:
    // 0x219d6c: 0x0  nop
    ctx->pc = 0x219d6cu;
    // NOP
label_219d70:
    // 0x219d70: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x219d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_219d74:
    // 0x219d74: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x219d74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
label_219d78:
    // 0x219d78: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x219d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_219d7c:
    // 0x219d7c: 0x25081300  addiu       $t0, $t0, 0x1300
    ctx->pc = 0x219d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4864));
label_219d80:
    // 0x219d80: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x219d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_219d84:
    // 0x219d84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219d88:
    // 0x219d88: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x219d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_219d8c:
    // 0x219d8c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x219d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_219d90:
    // 0x219d90: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x219d90u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_219d94:
    // 0x219d94: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x219d94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_219d98:
    // 0x219d98: 0x33980  sll         $a3, $v1, 6
    ctx->pc = 0x219d98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_219d9c:
    // 0x219d9c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x219d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    ctx->pc = 0x219da0u;
    return;
}

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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part251(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x215708u: goto label_215708;
        case 0x21570cu: goto label_21570c;
        case 0x215710u: goto label_215710;
        case 0x215714u: goto label_215714;
        case 0x215718u: goto label_215718;
        case 0x21571cu: goto label_21571c;
        case 0x215720u: goto label_215720;
        case 0x215724u: goto label_215724;
        case 0x215728u: goto label_215728;
        case 0x21572cu: goto label_21572c;
        case 0x215730u: goto label_215730;
        case 0x215734u: goto label_215734;
        case 0x215738u: goto label_215738;
        case 0x21573cu: goto label_21573c;
        case 0x215740u: goto label_215740;
        case 0x215744u: goto label_215744;
        case 0x215748u: goto label_215748;
        case 0x21574cu: goto label_21574c;
        case 0x215750u: goto label_215750;
        case 0x215754u: goto label_215754;
        case 0x215758u: goto label_215758;
        case 0x21575cu: goto label_21575c;
        case 0x215760u: goto label_215760;
        case 0x215764u: goto label_215764;
        case 0x215768u: goto label_215768;
        case 0x21576cu: goto label_21576c;
        case 0x215770u: goto label_215770;
        case 0x215774u: goto label_215774;
        case 0x215778u: goto label_215778;
        case 0x21577cu: goto label_21577c;
        case 0x215780u: goto label_215780;
        case 0x215784u: goto label_215784;
        case 0x215788u: goto label_215788;
        case 0x21578cu: goto label_21578c;
        case 0x215790u: goto label_215790;
        case 0x215794u: goto label_215794;
        case 0x215798u: goto label_215798;
        case 0x21579cu: goto label_21579c;
        case 0x2157a0u: goto label_2157a0;
        case 0x2157a4u: goto label_2157a4;
        case 0x2157a8u: goto label_2157a8;
        case 0x2157acu: goto label_2157ac;
        case 0x2157b0u: goto label_2157b0;
        case 0x2157b4u: goto label_2157b4;
        case 0x2157b8u: goto label_2157b8;
        case 0x2157bcu: goto label_2157bc;
        case 0x2157c0u: goto label_2157c0;
        case 0x2157c4u: goto label_2157c4;
        case 0x2157c8u: goto label_2157c8;
        case 0x2157ccu: goto label_2157cc;
        case 0x2157d0u: goto label_2157d0;
        case 0x2157d4u: goto label_2157d4;
        case 0x2157d8u: goto label_2157d8;
        case 0x2157dcu: goto label_2157dc;
        case 0x2157e0u: goto label_2157e0;
        case 0x2157e4u: goto label_2157e4;
        case 0x2157e8u: goto label_2157e8;
        case 0x2157ecu: goto label_2157ec;
        case 0x2157f0u: goto label_2157f0;
        case 0x2157f4u: goto label_2157f4;
        case 0x2157f8u: goto label_2157f8;
        case 0x2157fcu: goto label_2157fc;
        case 0x215800u: goto label_215800;
        case 0x215804u: goto label_215804;
        case 0x215808u: goto label_215808;
        case 0x21580cu: goto label_21580c;
        case 0x215810u: goto label_215810;
        case 0x215814u: goto label_215814;
        case 0x215818u: goto label_215818;
        case 0x21581cu: goto label_21581c;
        case 0x215820u: goto label_215820;
        case 0x215824u: goto label_215824;
        case 0x215828u: goto label_215828;
        case 0x21582cu: goto label_21582c;
        case 0x215830u: goto label_215830;
        case 0x215834u: goto label_215834;
        case 0x215838u: goto label_215838;
        case 0x21583cu: goto label_21583c;
        case 0x215840u: goto label_215840;
        case 0x215844u: goto label_215844;
        case 0x215848u: goto label_215848;
        case 0x21584cu: goto label_21584c;
        case 0x215850u: goto label_215850;
        case 0x215854u: goto label_215854;
        case 0x215858u: goto label_215858;
        case 0x21585cu: goto label_21585c;
        case 0x215860u: goto label_215860;
        case 0x215864u: goto label_215864;
        case 0x215868u: goto label_215868;
        case 0x21586cu: goto label_21586c;
        case 0x215870u: goto label_215870;
        case 0x215874u: goto label_215874;
        case 0x215878u: goto label_215878;
        case 0x21587cu: goto label_21587c;
        case 0x215880u: goto label_215880;
        case 0x215884u: goto label_215884;
        case 0x215888u: goto label_215888;
        case 0x21588cu: goto label_21588c;
        case 0x215890u: goto label_215890;
        case 0x215894u: goto label_215894;
        case 0x215898u: goto label_215898;
        case 0x21589cu: goto label_21589c;
        case 0x2158a0u: goto label_2158a0;
        case 0x2158a4u: goto label_2158a4;
        case 0x2158a8u: goto label_2158a8;
        case 0x2158acu: goto label_2158ac;
        case 0x2158b0u: goto label_2158b0;
        case 0x2158b4u: goto label_2158b4;
        case 0x2158b8u: goto label_2158b8;
        case 0x2158bcu: goto label_2158bc;
        case 0x2158c0u: goto label_2158c0;
        case 0x2158c4u: goto label_2158c4;
        case 0x2158c8u: goto label_2158c8;
        case 0x2158ccu: goto label_2158cc;
        case 0x2158d0u: goto label_2158d0;
        case 0x2158d4u: goto label_2158d4;
        case 0x2158d8u: goto label_2158d8;
        case 0x2158dcu: goto label_2158dc;
        case 0x2158e0u: goto label_2158e0;
        case 0x2158e4u: goto label_2158e4;
        case 0x2158e8u: goto label_2158e8;
        case 0x2158ecu: goto label_2158ec;
        case 0x2158f0u: goto label_2158f0;
        case 0x2158f4u: goto label_2158f4;
        case 0x2158f8u: goto label_2158f8;
        case 0x2158fcu: goto label_2158fc;
        case 0x215900u: goto label_215900;
        case 0x215904u: goto label_215904;
        case 0x215908u: goto label_215908;
        case 0x21590cu: goto label_21590c;
        case 0x215910u: goto label_215910;
        case 0x215914u: goto label_215914;
        case 0x215918u: goto label_215918;
        case 0x21591cu: goto label_21591c;
        case 0x215920u: goto label_215920;
        case 0x215924u: goto label_215924;
        case 0x215928u: goto label_215928;
        case 0x21592cu: goto label_21592c;
        case 0x215930u: goto label_215930;
        case 0x215934u: goto label_215934;
        case 0x215938u: goto label_215938;
        case 0x21593cu: goto label_21593c;
        case 0x215940u: goto label_215940;
        case 0x215944u: goto label_215944;
        case 0x215948u: goto label_215948;
        case 0x21594cu: goto label_21594c;
        case 0x215950u: goto label_215950;
        case 0x215954u: goto label_215954;
        case 0x215958u: goto label_215958;
        case 0x21595cu: goto label_21595c;
        case 0x215960u: goto label_215960;
        case 0x215964u: goto label_215964;
        case 0x215968u: goto label_215968;
        case 0x21596cu: goto label_21596c;
        case 0x215970u: goto label_215970;
        case 0x215974u: goto label_215974;
        case 0x215978u: goto label_215978;
        case 0x21597cu: goto label_21597c;
        case 0x215980u: goto label_215980;
        case 0x215984u: goto label_215984;
        case 0x215988u: goto label_215988;
        case 0x21598cu: goto label_21598c;
        case 0x215990u: goto label_215990;
        case 0x215994u: goto label_215994;
        case 0x215998u: goto label_215998;
        case 0x21599cu: goto label_21599c;
        case 0x2159a0u: goto label_2159a0;
        case 0x2159a4u: goto label_2159a4;
        case 0x2159a8u: goto label_2159a8;
        case 0x2159acu: goto label_2159ac;
        case 0x2159b0u: goto label_2159b0;
        case 0x2159b4u: goto label_2159b4;
        case 0x2159b8u: goto label_2159b8;
        case 0x2159bcu: goto label_2159bc;
        case 0x2159c0u: goto label_2159c0;
        case 0x2159c4u: goto label_2159c4;
        case 0x2159c8u: goto label_2159c8;
        case 0x2159ccu: goto label_2159cc;
        case 0x2159d0u: goto label_2159d0;
        case 0x2159d4u: goto label_2159d4;
        case 0x2159d8u: goto label_2159d8;
        case 0x2159dcu: goto label_2159dc;
        case 0x2159e0u: goto label_2159e0;
        case 0x2159e4u: goto label_2159e4;
        case 0x2159e8u: goto label_2159e8;
        case 0x2159ecu: goto label_2159ec;
        case 0x2159f0u: goto label_2159f0;
        case 0x2159f4u: goto label_2159f4;
        case 0x2159f8u: goto label_2159f8;
        case 0x2159fcu: goto label_2159fc;
        case 0x215a00u: goto label_215a00;
        case 0x215a04u: goto label_215a04;
        case 0x215a08u: goto label_215a08;
        case 0x215a0cu: goto label_215a0c;
        case 0x215a10u: goto label_215a10;
        case 0x215a14u: goto label_215a14;
        case 0x215a18u: goto label_215a18;
        case 0x215a1cu: goto label_215a1c;
        case 0x215a20u: goto label_215a20;
        case 0x215a24u: goto label_215a24;
        case 0x215a28u: goto label_215a28;
        case 0x215a2cu: goto label_215a2c;
        case 0x215a30u: goto label_215a30;
        case 0x215a34u: goto label_215a34;
        case 0x215a38u: goto label_215a38;
        case 0x215a3cu: goto label_215a3c;
        case 0x215a40u: goto label_215a40;
        case 0x215a44u: goto label_215a44;
        case 0x215a48u: goto label_215a48;
        case 0x215a4cu: goto label_215a4c;
        case 0x215a50u: goto label_215a50;
        case 0x215a54u: goto label_215a54;
        case 0x215a58u: goto label_215a58;
        case 0x215a5cu: goto label_215a5c;
        case 0x215a60u: goto label_215a60;
        case 0x215a64u: goto label_215a64;
        case 0x215a68u: goto label_215a68;
        case 0x215a6cu: goto label_215a6c;
        case 0x215a70u: goto label_215a70;
        case 0x215a74u: goto label_215a74;
        case 0x215a78u: goto label_215a78;
        case 0x215a7cu: goto label_215a7c;
        case 0x215a80u: goto label_215a80;
        case 0x215a84u: goto label_215a84;
        case 0x215a88u: goto label_215a88;
        case 0x215a8cu: goto label_215a8c;
        case 0x215a90u: goto label_215a90;
        case 0x215a94u: goto label_215a94;
        case 0x215a98u: goto label_215a98;
        case 0x215a9cu: goto label_215a9c;
        case 0x215aa0u: goto label_215aa0;
        case 0x215aa4u: goto label_215aa4;
        case 0x215aa8u: goto label_215aa8;
        case 0x215aacu: goto label_215aac;
        case 0x215ab0u: goto label_215ab0;
        case 0x215ab4u: goto label_215ab4;
        case 0x215ab8u: goto label_215ab8;
        case 0x215abcu: goto label_215abc;
        case 0x215ac0u: goto label_215ac0;
        case 0x215ac4u: goto label_215ac4;
        case 0x215ac8u: goto label_215ac8;
        case 0x215accu: goto label_215acc;
        case 0x215ad0u: goto label_215ad0;
        case 0x215ad4u: goto label_215ad4;
        case 0x215ad8u: goto label_215ad8;
        case 0x215adcu: goto label_215adc;
        case 0x215ae0u: goto label_215ae0;
        case 0x215ae4u: goto label_215ae4;
        case 0x215ae8u: goto label_215ae8;
        case 0x215aecu: goto label_215aec;
        case 0x215af0u: goto label_215af0;
        case 0x215af4u: goto label_215af4;
        case 0x215af8u: goto label_215af8;
        case 0x215afcu: goto label_215afc;
        case 0x215b00u: goto label_215b00;
        case 0x215b04u: goto label_215b04;
        case 0x215b08u: goto label_215b08;
        case 0x215b0cu: goto label_215b0c;
        case 0x215b10u: goto label_215b10;
        case 0x215b14u: goto label_215b14;
        case 0x215b18u: goto label_215b18;
        case 0x215b1cu: goto label_215b1c;
        case 0x215b20u: goto label_215b20;
        case 0x215b24u: goto label_215b24;
        case 0x215b28u: goto label_215b28;
        case 0x215b2cu: goto label_215b2c;
        case 0x215b30u: goto label_215b30;
        case 0x215b34u: goto label_215b34;
        case 0x215b38u: goto label_215b38;
        case 0x215b3cu: goto label_215b3c;
        case 0x215b40u: goto label_215b40;
        case 0x215b44u: goto label_215b44;
        case 0x215b48u: goto label_215b48;
        case 0x215b4cu: goto label_215b4c;
        case 0x215b50u: goto label_215b50;
        case 0x215b54u: goto label_215b54;
        case 0x215b58u: goto label_215b58;
        case 0x215b5cu: goto label_215b5c;
        case 0x215b60u: goto label_215b60;
        case 0x215b64u: goto label_215b64;
        case 0x215b68u: goto label_215b68;
        case 0x215b6cu: goto label_215b6c;
        case 0x215b70u: goto label_215b70;
        case 0x215b74u: goto label_215b74;
        case 0x215b78u: goto label_215b78;
        case 0x215b7cu: goto label_215b7c;
        case 0x215b80u: goto label_215b80;
        case 0x215b84u: goto label_215b84;
        case 0x215b88u: goto label_215b88;
        case 0x215b8cu: goto label_215b8c;
        case 0x215b90u: goto label_215b90;
        case 0x215b94u: goto label_215b94;
        case 0x215b98u: goto label_215b98;
        case 0x215b9cu: goto label_215b9c;
        case 0x215ba0u: goto label_215ba0;
        case 0x215ba4u: goto label_215ba4;
        case 0x215ba8u: goto label_215ba8;
        case 0x215bacu: goto label_215bac;
        case 0x215bb0u: goto label_215bb0;
        case 0x215bb4u: goto label_215bb4;
        case 0x215bb8u: goto label_215bb8;
        case 0x215bbcu: goto label_215bbc;
        case 0x215bc0u: goto label_215bc0;
        case 0x215bc4u: goto label_215bc4;
        case 0x215bc8u: goto label_215bc8;
        case 0x215bccu: goto label_215bcc;
        case 0x215bd0u: goto label_215bd0;
        case 0x215bd4u: goto label_215bd4;
        case 0x215bd8u: goto label_215bd8;
        case 0x215bdcu: goto label_215bdc;
        case 0x215be0u: goto label_215be0;
        case 0x215be4u: goto label_215be4;
        case 0x215be8u: goto label_215be8;
        case 0x215becu: goto label_215bec;
        case 0x215bf0u: goto label_215bf0;
        case 0x215bf4u: goto label_215bf4;
        case 0x215bf8u: goto label_215bf8;
        case 0x215bfcu: goto label_215bfc;
        case 0x215c00u: goto label_215c00;
        case 0x215c04u: goto label_215c04;
        case 0x215c08u: goto label_215c08;
        case 0x215c0cu: goto label_215c0c;
        case 0x215c10u: goto label_215c10;
        case 0x215c14u: goto label_215c14;
        case 0x215c18u: goto label_215c18;
        case 0x215c1cu: goto label_215c1c;
        case 0x215c20u: goto label_215c20;
        case 0x215c24u: goto label_215c24;
        case 0x215c28u: goto label_215c28;
        case 0x215c2cu: goto label_215c2c;
        case 0x215c30u: goto label_215c30;
        case 0x215c34u: goto label_215c34;
        case 0x215c38u: goto label_215c38;
        case 0x215c3cu: goto label_215c3c;
        case 0x215c40u: goto label_215c40;
        case 0x215c44u: goto label_215c44;
        case 0x215c48u: goto label_215c48;
        case 0x215c4cu: goto label_215c4c;
        case 0x215c50u: goto label_215c50;
        case 0x215c54u: goto label_215c54;
        case 0x215c58u: goto label_215c58;
        case 0x215c5cu: goto label_215c5c;
        case 0x215c60u: goto label_215c60;
        case 0x215c64u: goto label_215c64;
        case 0x215c68u: goto label_215c68;
        case 0x215c6cu: goto label_215c6c;
        case 0x215c70u: goto label_215c70;
        case 0x215c74u: goto label_215c74;
        case 0x215c78u: goto label_215c78;
        case 0x215c7cu: goto label_215c7c;
        case 0x215c80u: goto label_215c80;
        case 0x215c84u: goto label_215c84;
        case 0x215c88u: goto label_215c88;
        case 0x215c8cu: goto label_215c8c;
        case 0x215c90u: goto label_215c90;
        case 0x215c94u: goto label_215c94;
        case 0x215c98u: goto label_215c98;
        case 0x215c9cu: goto label_215c9c;
        case 0x215ca0u: goto label_215ca0;
        case 0x215ca4u: goto label_215ca4;
        case 0x215ca8u: goto label_215ca8;
        case 0x215cacu: goto label_215cac;
        case 0x215cb0u: goto label_215cb0;
        case 0x215cb4u: goto label_215cb4;
        case 0x215cb8u: goto label_215cb8;
        case 0x215cbcu: goto label_215cbc;
        case 0x215cc0u: goto label_215cc0;
        case 0x215cc4u: goto label_215cc4;
        case 0x215cc8u: goto label_215cc8;
        case 0x215cccu: goto label_215ccc;
        case 0x215cd0u: goto label_215cd0;
        case 0x215cd4u: goto label_215cd4;
        case 0x215cd8u: goto label_215cd8;
        case 0x215cdcu: goto label_215cdc;
        case 0x215ce0u: goto label_215ce0;
        case 0x215ce4u: goto label_215ce4;
        case 0x215ce8u: goto label_215ce8;
        case 0x215cecu: goto label_215cec;
        case 0x215cf0u: goto label_215cf0;
        case 0x215cf4u: goto label_215cf4;
        case 0x215cf8u: goto label_215cf8;
        case 0x215cfcu: goto label_215cfc;
        case 0x215d00u: goto label_215d00;
        case 0x215d04u: goto label_215d04;
        case 0x215d08u: goto label_215d08;
        case 0x215d0cu: goto label_215d0c;
        case 0x215d10u: goto label_215d10;
        case 0x215d14u: goto label_215d14;
        case 0x215d18u: goto label_215d18;
        case 0x215d1cu: goto label_215d1c;
        case 0x215d20u: goto label_215d20;
        case 0x215d24u: goto label_215d24;
        case 0x215d28u: goto label_215d28;
        case 0x215d2cu: goto label_215d2c;
        case 0x215d30u: goto label_215d30;
        case 0x215d34u: goto label_215d34;
        case 0x215d38u: goto label_215d38;
        case 0x215d3cu: goto label_215d3c;
        case 0x215d40u: goto label_215d40;
        case 0x215d44u: goto label_215d44;
        case 0x215d48u: goto label_215d48;
        case 0x215d4cu: goto label_215d4c;
        case 0x215d50u: goto label_215d50;
        case 0x215d54u: goto label_215d54;
        case 0x215d58u: goto label_215d58;
        case 0x215d5cu: goto label_215d5c;
        case 0x215d60u: goto label_215d60;
        case 0x215d64u: goto label_215d64;
        case 0x215d68u: goto label_215d68;
        case 0x215d6cu: goto label_215d6c;
        case 0x215d70u: goto label_215d70;
        case 0x215d74u: goto label_215d74;
        case 0x215d78u: goto label_215d78;
        case 0x215d7cu: goto label_215d7c;
        case 0x215d80u: goto label_215d80;
        case 0x215d84u: goto label_215d84;
        case 0x215d88u: goto label_215d88;
        case 0x215d8cu: goto label_215d8c;
        case 0x215d90u: goto label_215d90;
        case 0x215d94u: goto label_215d94;
        case 0x215d98u: goto label_215d98;
        case 0x215d9cu: goto label_215d9c;
        case 0x215da0u: goto label_215da0;
        case 0x215da4u: goto label_215da4;
        case 0x215da8u: goto label_215da8;
        case 0x215dacu: goto label_215dac;
        case 0x215db0u: goto label_215db0;
        case 0x215db4u: goto label_215db4;
        case 0x215db8u: goto label_215db8;
        case 0x215dbcu: goto label_215dbc;
        case 0x215dc0u: goto label_215dc0;
        case 0x215dc4u: goto label_215dc4;
        case 0x215dc8u: goto label_215dc8;
        case 0x215dccu: goto label_215dcc;
        case 0x215dd0u: goto label_215dd0;
        case 0x215dd4u: goto label_215dd4;
        case 0x215dd8u: goto label_215dd8;
        case 0x215ddcu: goto label_215ddc;
        case 0x215de0u: goto label_215de0;
        case 0x215de4u: goto label_215de4;
        case 0x215de8u: goto label_215de8;
        case 0x215decu: goto label_215dec;
        case 0x215df0u: goto label_215df0;
        case 0x215df4u: goto label_215df4;
        case 0x215df8u: goto label_215df8;
        case 0x215dfcu: goto label_215dfc;
        case 0x215e00u: goto label_215e00;
        case 0x215e04u: goto label_215e04;
        case 0x215e08u: goto label_215e08;
        case 0x215e0cu: goto label_215e0c;
        case 0x215e10u: goto label_215e10;
        case 0x215e14u: goto label_215e14;
        case 0x215e18u: goto label_215e18;
        case 0x215e1cu: goto label_215e1c;
        case 0x215e20u: goto label_215e20;
        case 0x215e24u: goto label_215e24;
        case 0x215e28u: goto label_215e28;
        case 0x215e2cu: goto label_215e2c;
        case 0x215e30u: goto label_215e30;
        case 0x215e34u: goto label_215e34;
        case 0x215e38u: goto label_215e38;
        case 0x215e3cu: goto label_215e3c;
        case 0x215e40u: goto label_215e40;
        case 0x215e44u: goto label_215e44;
        case 0x215e48u: goto label_215e48;
        case 0x215e4cu: goto label_215e4c;
        case 0x215e50u: goto label_215e50;
        case 0x215e54u: goto label_215e54;
        case 0x215e58u: goto label_215e58;
        case 0x215e5cu: goto label_215e5c;
        case 0x215e60u: goto label_215e60;
        case 0x215e64u: goto label_215e64;
        case 0x215e68u: goto label_215e68;
        case 0x215e6cu: goto label_215e6c;
        case 0x215e70u: goto label_215e70;
        case 0x215e74u: goto label_215e74;
        case 0x215e78u: goto label_215e78;
        case 0x215e7cu: goto label_215e7c;
        case 0x215e80u: goto label_215e80;
        case 0x215e84u: goto label_215e84;
        case 0x215e88u: goto label_215e88;
        case 0x215e8cu: goto label_215e8c;
        case 0x215e90u: goto label_215e90;
        case 0x215e94u: goto label_215e94;
        case 0x215e98u: goto label_215e98;
        case 0x215e9cu: goto label_215e9c;
        case 0x215ea0u: goto label_215ea0;
        case 0x215ea4u: goto label_215ea4;
        case 0x215ea8u: goto label_215ea8;
        case 0x215eacu: goto label_215eac;
        case 0x215eb0u: goto label_215eb0;
        case 0x215eb4u: goto label_215eb4;
        case 0x215eb8u: goto label_215eb8;
        case 0x215ebcu: goto label_215ebc;
        case 0x215ec0u: goto label_215ec0;
        case 0x215ec4u: goto label_215ec4;
        case 0x215ec8u: goto label_215ec8;
        case 0x215eccu: goto label_215ecc;
        case 0x215ed0u: goto label_215ed0;
        case 0x215ed4u: goto label_215ed4;
        default: return;
    }

label_215708:
    // 0x215708: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21570c:
    // 0x21570c: 0xaf859210  sw          $a1, -0x6DF0($gp)
    ctx->pc = 0x21570cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939152), GPR_U32(ctx, 5));
label_215710:
    // 0x215710: 0xac24791c  sw          $a0, 0x791C($at)
    ctx->pc = 0x215710u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31004), GPR_U32(ctx, 4));
label_215714:
    // 0x215714: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x215714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_215718:
    // 0x215718: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21571c:
    // 0x21571c: 0xac267924  sw          $a2, 0x7924($at)
    ctx->pc = 0x21571cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31012), GPR_U32(ctx, 6));
label_215720:
    // 0x215720: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215724:
    // 0x215724: 0xac26792c  sw          $a2, 0x792C($at)
    ctx->pc = 0x215724u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31020), GPR_U32(ctx, 6));
label_215728:
    // 0x215728: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21572c:
    // 0x21572c: 0xac257910  sw          $a1, 0x7910($at)
    ctx->pc = 0x21572cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30992), GPR_U32(ctx, 5));
label_215730:
    // 0x215730: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215734:
    // 0x215734: 0xac257914  sw          $a1, 0x7914($at)
    ctx->pc = 0x215734u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30996), GPR_U32(ctx, 5));
label_215738:
    // 0x215738: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21573c:
    // 0x21573c: 0xac257918  sw          $a1, 0x7918($at)
    ctx->pc = 0x21573cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31000), GPR_U32(ctx, 5));
label_215740:
    // 0x215740: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x215740u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_215744:
    // 0x215744: 0x14800034  bnez        $a0, . + 4 + (0x34 << 2)
label_215748:
    if (ctx->pc == 0x215748u) {
        ctx->pc = 0x215748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215744u;
        // 0x215748: 0x28640018  slti        $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21574Cu;
        goto label_21574c;
    }
    ctx->pc = 0x215744u;
    {
        const bool branch_taken_0x215744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x215748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215744u;
        // 0x215748: 0x28640018  slti        $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215744) {
            ctx->pc = 0x215818u;
            goto label_215818;
        }
    }
    ctx->pc = 0x21574Cu;
label_21574c:
    // 0x21574c: 0x28610019  slti        $at, $v1, 0x19
    ctx->pc = 0x21574cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
label_215750:
    // 0x215750: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
label_215754:
    if (ctx->pc == 0x215754u) {
        ctx->pc = 0x215754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215750u;
        // 0x215754: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215758u;
        goto label_215758;
    }
    ctx->pc = 0x215750u;
    {
        const bool branch_taken_0x215750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x215754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215750u;
        // 0x215754: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215750) {
            ctx->pc = 0x215814u;
            goto label_215814;
        }
    }
    ctx->pc = 0x215758u;
label_215758:
    // 0x215758: 0x2464fff8  addiu       $a0, $v1, -0x8
    ctx->pc = 0x215758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_21575c:
    // 0x21575c: 0xac207920  sw          $zero, 0x7920($at)
    ctx->pc = 0x21575cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31008), GPR_U32(ctx, 0));
label_215760:
    // 0x215760: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x215760u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_215764:
    // 0x215764: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215768:
    // 0x215768: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x215768u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_21576c:
    // 0x21576c: 0xac207928  sw          $zero, 0x7928($at)
    ctx->pc = 0x21576cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31016), GPR_U32(ctx, 0));
label_215770:
    // 0x215770: 0x240500df  addiu       $a1, $zero, 0xDF
    ctx->pc = 0x215770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
label_215774:
    // 0x215774: 0x24c400df  addiu       $a0, $a2, 0xDF
    ctx->pc = 0x215774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 223));
label_215778:
    // 0x215778: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21577c:
    // 0x21577c: 0xac24792c  sw          $a0, 0x792C($at)
    ctx->pc = 0x21577cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31020), GPR_U32(ctx, 4));
label_215780:
    // 0x215780: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x215780u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_215784:
    // 0x215784: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215788:
    // 0x215788: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x215788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_21578c:
    // 0x21578c: 0xac257924  sw          $a1, 0x7924($at)
    ctx->pc = 0x21578cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31012), GPR_U32(ctx, 5));
label_215790:
    // 0x215790: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x215790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_215794:
    // 0x215794: 0xaf849210  sw          $a0, -0x6DF0($gp)
    ctx->pc = 0x215794u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939152), GPR_U32(ctx, 4));
label_215798:
    // 0x215798: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_21579c:
    // 0x21579c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21579cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2157a0:
    // 0x2157a0: 0xac267910  sw          $a2, 0x7910($at)
    ctx->pc = 0x2157a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30992), GPR_U32(ctx, 6));
label_2157a4:
    // 0x2157a4: 0xaf849214  sw          $a0, -0x6DEC($gp)
    ctx->pc = 0x2157a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939156), GPR_U32(ctx, 4));
label_2157a8:
    // 0x2157a8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2157a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2157ac:
    // 0x2157ac: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2157acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2157b0:
    // 0x2157b0: 0xaf809208  sw          $zero, -0x6DF8($gp)
    ctx->pc = 0x2157b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939144), GPR_U32(ctx, 0));
label_2157b4:
    // 0x2157b4: 0xac24791c  sw          $a0, 0x791C($at)
    ctx->pc = 0x2157b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31004), GPR_U32(ctx, 4));
label_2157b8:
    // 0x2157b8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2157b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2157bc:
    // 0x2157bc: 0x240401c0  addiu       $a0, $zero, 0x1C0
    ctx->pc = 0x2157bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2157c0:
    // 0x2157c0: 0xac267914  sw          $a2, 0x7914($at)
    ctx->pc = 0x2157c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30996), GPR_U32(ctx, 6));
label_2157c4:
    // 0x2157c4: 0x872823  subu        $a1, $a0, $a3
    ctx->pc = 0x2157c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2157c8:
    // 0x2157c8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2157c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2157cc:
    // 0x2157cc: 0x52043  sra         $a0, $a1, 1
    ctx->pc = 0x2157ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
label_2157d0:
    // 0x2157d0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_2157d4:
    if (ctx->pc == 0x2157D4u) {
        ctx->pc = 0x2157D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157D0u;
        // 0x2157d4: 0xac267918  sw          $a2, 0x7918($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31000), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2157D8u;
        goto label_2157d8;
    }
    ctx->pc = 0x2157D0u;
    {
        const bool branch_taken_0x2157d0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2157D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157D0u;
        // 0x2157d4: 0xac267918  sw          $a2, 0x7918($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31000), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2157d0) {
            ctx->pc = 0x2157E0u;
            goto label_2157e0;
        }
    }
    ctx->pc = 0x2157D8u;
label_2157d8:
    // 0x2157d8: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x2157d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2157dc:
    // 0x2157dc: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2157dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_2157e0:
    // 0x2157e0: 0xaf84920c  sw          $a0, -0x6DF4($gp)
    ctx->pc = 0x2157e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939148), GPR_U32(ctx, 4));
label_2157e4:
    // 0x2157e4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2157e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2157e8:
    // 0x2157e8: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x2157e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2157ec:
    // 0x2157ec: 0xaf879204  sw          $a3, -0x6DFC($gp)
    ctx->pc = 0x2157ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939140), GPR_U32(ctx, 7));
label_2157f0:
    // 0x2157f0: 0xaf849200  sw          $a0, -0x6E00($gp)
    ctx->pc = 0x2157f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939136), GPR_U32(ctx, 4));
label_2157f4:
    // 0x2157f4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2157f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2157f8:
    // 0x2157f8: 0xac24790c  sw          $a0, 0x790C($at)
    ctx->pc = 0x2157f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30988), GPR_U32(ctx, 4));
label_2157fc:
    // 0x2157fc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2157fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215800:
    // 0x215800: 0xac207900  sw          $zero, 0x7900($at)
    ctx->pc = 0x215800u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30976), GPR_U32(ctx, 0));
label_215804:
    // 0x215804: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215808:
    // 0x215808: 0xac207904  sw          $zero, 0x7904($at)
    ctx->pc = 0x215808u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30980), GPR_U32(ctx, 0));
label_21580c:
    // 0x21580c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21580cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215810:
    // 0x215810: 0xac207908  sw          $zero, 0x7908($at)
    ctx->pc = 0x215810u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30984), GPR_U32(ctx, 0));
label_215814:
    // 0x215814: 0x28640018  slti        $a0, $v1, 0x18
    ctx->pc = 0x215814u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
label_215818:
    // 0x215818: 0x14800020  bnez        $a0, . + 4 + (0x20 << 2)
label_21581c:
    if (ctx->pc == 0x21581Cu) {
        ctx->pc = 0x21581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215818u;
        // 0x21581c: 0x28610021  slti        $at, $v1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x215820u;
        goto label_215820;
    }
    ctx->pc = 0x215818u;
    {
        const bool branch_taken_0x215818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215818u;
        // 0x21581c: 0x28610021  slti        $at, $v1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215818) {
            ctx->pc = 0x21589Cu;
            goto label_21589c;
        }
    }
    ctx->pc = 0x215820u;
label_215820:
    // 0x215820: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_215824:
    if (ctx->pc == 0x215824u) {
        ctx->pc = 0x215824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215820u;
        // 0x215824: 0x2464ffe8  addiu       $a0, $v1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215828u;
        goto label_215828;
    }
    ctx->pc = 0x215820u;
    {
        const bool branch_taken_0x215820 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x215824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215820u;
        // 0x215824: 0x2464ffe8  addiu       $a0, $v1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215820) {
            ctx->pc = 0x21589Cu;
            goto label_21589c;
        }
    }
    ctx->pc = 0x215828u;
label_215828:
    // 0x215828: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x215828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21582c:
    // 0x21582c: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x21582cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_215830:
    // 0x215830: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x215830u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_215834:
    // 0x215834: 0x33980  sll         $a3, $v1, 6
    ctx->pc = 0x215834u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_215838:
    // 0x215838: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_21583c:
    if (ctx->pc == 0x21583Cu) {
        ctx->pc = 0x21583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215838u;
        // 0x21583c: 0x72843  sra         $a1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215840u;
        goto label_215840;
    }
    ctx->pc = 0x215838u;
    {
        const bool branch_taken_0x215838 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x21583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215838u;
        // 0x21583c: 0x72843  sra         $a1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215838) {
            ctx->pc = 0x215848u;
            goto label_215848;
        }
    }
    ctx->pc = 0x215840u;
label_215840:
    // 0x215840: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x215840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_215844:
    // 0x215844: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x215844u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_215848:
    // 0x215848: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x215848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_21584c:
    // 0x21584c: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x21584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_215850:
    // 0x215850: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x215850u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_215854:
    // 0x215854: 0xaf8391f4  sw          $v1, -0x6E0C($gp)
    ctx->pc = 0x215854u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939124), GPR_U32(ctx, 3));
label_215858:
    // 0x215858: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_21585c:
    if (ctx->pc == 0x21585Cu) {
        ctx->pc = 0x21585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215858u;
        // 0x21585c: 0xaf8491f0  sw          $a0, -0x6E10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215860u;
        goto label_215860;
    }
    ctx->pc = 0x215858u;
    {
        const bool branch_taken_0x215858 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215858u;
        // 0x21585c: 0xaf8491f0  sw          $a0, -0x6E10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215858) {
            ctx->pc = 0x215868u;
            goto label_215868;
        }
    }
    ctx->pc = 0x215860u;
label_215860:
    // 0x215860: 0x10000002  b           . + 4 + (0x2 << 2)
label_215864:
    if (ctx->pc == 0x215864u) {
        ctx->pc = 0x215864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215860u;
        // 0x215864: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215868u;
        goto label_215868;
    }
    ctx->pc = 0x215860u;
    {
        const bool branch_taken_0x215860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215860u;
        // 0x215864: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215860) {
            ctx->pc = 0x21586Cu;
            goto label_21586c;
        }
    }
    ctx->pc = 0x215868u;
label_215868:
    // 0x215868: 0x24e30180  addiu       $v1, $a3, 0x180
    ctx->pc = 0x215868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 384));
label_21586c:
    // 0x21586c: 0xaf8391e8  sw          $v1, -0x6E18($gp)
    ctx->pc = 0x21586cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939112), GPR_U32(ctx, 3));
label_215870:
    // 0x215870: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215874:
    // 0x215874: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x215874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_215878:
    // 0x215878: 0xac2678dc  sw          $a2, 0x78DC($at)
    ctx->pc = 0x215878u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30940), GPR_U32(ctx, 6));
label_21587c:
    // 0x21587c: 0xaf8391ec  sw          $v1, -0x6E14($gp)
    ctx->pc = 0x21587cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939116), GPR_U32(ctx, 3));
label_215880:
    // 0x215880: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215884:
    // 0x215884: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x215884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_215888:
    // 0x215888: 0xac2378d0  sw          $v1, 0x78D0($at)
    ctx->pc = 0x215888u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30928), GPR_U32(ctx, 3));
label_21588c:
    // 0x21588c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21588cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215890:
    // 0x215890: 0xac2378d4  sw          $v1, 0x78D4($at)
    ctx->pc = 0x215890u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30932), GPR_U32(ctx, 3));
label_215894:
    // 0x215894: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_215898:
    // 0x215898: 0xac2378d8  sw          $v1, 0x78D8($at)
    ctx->pc = 0x215898u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30936), GPR_U32(ctx, 3));
label_21589c:
    // 0x21589c: 0x3e00008  jr          $ra
label_2158a0:
    if (ctx->pc == 0x2158A0u) {
        ctx->pc = 0x2158A4u;
        goto label_2158a4;
    }
    ctx->pc = 0x21589Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21589Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2158A4u;
label_2158a4:
    // 0x2158a4: 0x0  nop
    ctx->pc = 0x2158a4u;
    // NOP
label_2158a8:
    // 0x2158a8: 0x0  nop
    ctx->pc = 0x2158a8u;
    // NOP
label_2158ac:
    // 0x2158ac: 0x0  nop
    ctx->pc = 0x2158acu;
    // NOP
label_2158b0:
    // 0x2158b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2158b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2158b4:
    // 0x2158b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2158b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2158b8:
    // 0x2158b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2158b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2158bc:
    // 0x2158bc: 0xc064ad8  jal         func_192B60
label_2158c0:
    if (ctx->pc == 0x2158C0u) {
        ctx->pc = 0x2158C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158BCu;
        // 0x2158c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2158C4u;
        goto label_2158c4;
    }
    ctx->pc = 0x2158BCu;
    SET_GPR_U32(ctx, 31, 0x2158C4u);
    ctx->pc = 0x2158C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2158BCu;
    // 0x2158c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B60u, 0x2158BCu, 0x2158C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2158C4u;
label_2158c4:
    // 0x2158c4: 0xc07f218  jal         func_1FC860
label_2158c8:
    if (ctx->pc == 0x2158C8u) {
        ctx->pc = 0x2158C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158C4u;
        // 0x2158c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2158CCu;
        goto label_2158cc;
    }
    ctx->pc = 0x2158C4u;
    SET_GPR_U32(ctx, 31, 0x2158CCu);
    ctx->pc = 0x2158C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2158C4u;
    // 0x2158c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC860u;
    { ctx->pc = 0x1fc860; return; }
    ctx->pc = 0x2158CCu;
label_2158cc:
    // 0x2158cc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2158ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2158d0:
    // 0x2158d0: 0x9022490d  lbu         $v0, 0x490D($at)
    ctx->pc = 0x2158d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_2158d4:
    // 0x2158d4: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_2158d8:
    if (ctx->pc == 0x2158D8u) {
        ctx->pc = 0x2158D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158D4u;
        // 0x2158d8: 0xaf82924c  sw          $v0, -0x6DB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2158DCu;
        goto label_2158dc;
    }
    ctx->pc = 0x2158D4u;
    {
        const bool branch_taken_0x2158d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2158D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158D4u;
        // 0x2158d8: 0xaf82924c  sw          $v0, -0x6DB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158d4) {
            ctx->pc = 0x215958u;
            goto label_215958;
        }
    }
    ctx->pc = 0x2158DCu;
label_2158dc:
    // 0x2158dc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2158dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2158e0:
    // 0x2158e0: 0x8c234904  lw          $v1, 0x4904($at)
    ctx->pc = 0x2158e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18692)));
label_2158e4:
    // 0x2158e4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2158e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2158e8:
    // 0x2158e8: 0x8c224900  lw          $v0, 0x4900($at)
    ctx->pc = 0x2158e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_2158ec:
    // 0x2158ec: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2158ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2158f0:
    // 0x2158f0: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_2158f4:
    if (ctx->pc == 0x2158F4u) {
        ctx->pc = 0x2158F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158F0u;
        // 0x2158f4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2158F8u;
        goto label_2158f8;
    }
    ctx->pc = 0x2158F0u;
    {
        const bool branch_taken_0x2158f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2158F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158F0u;
        // 0x2158f4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158f0) {
            ctx->pc = 0x215928u;
            goto label_215928;
        }
    }
    ctx->pc = 0x2158F8u;
label_2158f8:
    // 0x2158f8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2158f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2158fc:
    // 0x2158fc: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x2158fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_215900:
    // 0x215900: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x215900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_215904:
    // 0x215904: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_215908:
    if (ctx->pc == 0x215908u) {
        ctx->pc = 0x215908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215904u;
        // 0x215908: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21590Cu;
        goto label_21590c;
    }
    ctx->pc = 0x215904u;
    {
        const bool branch_taken_0x215904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215904u;
        // 0x215908: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215904) {
            ctx->pc = 0x215914u;
            goto label_215914;
        }
    }
    ctx->pc = 0x21590Cu;
label_21590c:
    // 0x21590c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_215910:
    if (ctx->pc == 0x215910u) {
        ctx->pc = 0x215914u;
        goto label_215914;
    }
    ctx->pc = 0x21590Cu;
    {
        const bool branch_taken_0x21590c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21590c) {
            ctx->pc = 0x21591Cu;
            goto label_21591c;
        }
    }
    ctx->pc = 0x215914u;
label_215914:
    // 0x215914: 0x1000001c  b           . + 4 + (0x1C << 2)
label_215918:
    if (ctx->pc == 0x215918u) {
        ctx->pc = 0x215918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215914u;
        // 0x215918: 0xaf809248  sw          $zero, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21591Cu;
        goto label_21591c;
    }
    ctx->pc = 0x215914u;
    {
        const bool branch_taken_0x215914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215914u;
        // 0x215918: 0xaf809248  sw          $zero, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215914) {
            ctx->pc = 0x215988u;
            goto label_215988;
        }
    }
    ctx->pc = 0x21591Cu;
label_21591c:
    // 0x21591c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215920:
    // 0x215920: 0x10000019  b           . + 4 + (0x19 << 2)
label_215924:
    if (ctx->pc == 0x215924u) {
        ctx->pc = 0x215924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215920u;
        // 0x215924: 0xaf829248  sw          $v0, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215928u;
        goto label_215928;
    }
    ctx->pc = 0x215920u;
    {
        const bool branch_taken_0x215920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215920u;
        // 0x215924: 0xaf829248  sw          $v0, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215920) {
            ctx->pc = 0x215988u;
            goto label_215988;
        }
    }
    ctx->pc = 0x215928u;
label_215928:
    // 0x215928: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x215928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_21592c:
    // 0x21592c: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x21592cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_215930:
    // 0x215930: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_215934:
    if (ctx->pc == 0x215934u) {
        ctx->pc = 0x215934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215930u;
        // 0x215934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215938u;
        goto label_215938;
    }
    ctx->pc = 0x215930u;
    {
        const bool branch_taken_0x215930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215930u;
        // 0x215934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215930) {
            ctx->pc = 0x215948u;
            goto label_215948;
        }
    }
    ctx->pc = 0x215938u;
label_215938:
    // 0x215938: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x215938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_21593c:
    // 0x21593c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_215940:
    if (ctx->pc == 0x215940u) {
        ctx->pc = 0x215944u;
        goto label_215944;
    }
    ctx->pc = 0x21593Cu;
    {
        const bool branch_taken_0x21593c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21593c) {
            ctx->pc = 0x215950u;
            goto label_215950;
        }
    }
    ctx->pc = 0x215944u;
label_215944:
    // 0x215944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215948:
    // 0x215948: 0x1000000f  b           . + 4 + (0xF << 2)
label_21594c:
    if (ctx->pc == 0x21594Cu) {
        ctx->pc = 0x21594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215948u;
        // 0x21594c: 0xaf829248  sw          $v0, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215950u;
        goto label_215950;
    }
    ctx->pc = 0x215948u;
    {
        const bool branch_taken_0x215948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215948u;
        // 0x21594c: 0xaf829248  sw          $v0, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215948) {
            ctx->pc = 0x215988u;
            goto label_215988;
        }
    }
    ctx->pc = 0x215950u;
label_215950:
    // 0x215950: 0x1000000d  b           . + 4 + (0xD << 2)
label_215954:
    if (ctx->pc == 0x215954u) {
        ctx->pc = 0x215954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215950u;
        // 0x215954: 0xaf809248  sw          $zero, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215958u;
        goto label_215958;
    }
    ctx->pc = 0x215950u;
    {
        const bool branch_taken_0x215950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215950u;
        // 0x215954: 0xaf809248  sw          $zero, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215950) {
            ctx->pc = 0x215988u;
            goto label_215988;
        }
    }
    ctx->pc = 0x215958u;
label_215958:
    // 0x215958: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x215958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_21595c:
    // 0x21595c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x21595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_215960:
    // 0x215960: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x215960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_215964:
    // 0x215964: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_215968:
    if (ctx->pc == 0x215968u) {
        ctx->pc = 0x215968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215964u;
        // 0x215968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21596Cu;
        goto label_21596c;
    }
    ctx->pc = 0x215964u;
    {
        const bool branch_taken_0x215964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215964u;
        // 0x215968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215964) {
            ctx->pc = 0x21597Cu;
            goto label_21597c;
        }
    }
    ctx->pc = 0x21596Cu;
label_21596c:
    // 0x21596c: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x21596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_215970:
    // 0x215970: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_215974:
    if (ctx->pc == 0x215974u) {
        ctx->pc = 0x215978u;
        goto label_215978;
    }
    ctx->pc = 0x215970u;
    {
        const bool branch_taken_0x215970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215970) {
            ctx->pc = 0x215984u;
            goto label_215984;
        }
    }
    ctx->pc = 0x215978u;
label_215978:
    // 0x215978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21597c:
    // 0x21597c: 0x10000002  b           . + 4 + (0x2 << 2)
label_215980:
    if (ctx->pc == 0x215980u) {
        ctx->pc = 0x215980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21597Cu;
        // 0x215980: 0xaf829248  sw          $v0, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215984u;
        goto label_215984;
    }
    ctx->pc = 0x21597Cu;
    {
        const bool branch_taken_0x21597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21597Cu;
        // 0x215980: 0xaf829248  sw          $v0, -0x6DB8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21597c) {
            ctx->pc = 0x215988u;
            goto label_215988;
        }
    }
    ctx->pc = 0x215984u;
label_215984:
    // 0x215984: 0xaf809248  sw          $zero, -0x6DB8($gp)
    ctx->pc = 0x215984u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939208), GPR_U32(ctx, 0));
label_215988:
    // 0x215988: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21598c:
    // 0x21598c: 0x8f87924c  lw          $a3, -0x6DB4($gp)
    ctx->pc = 0x21598cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939212)));
label_215990:
    // 0x215990: 0xac208ab0  sw          $zero, -0x7550($at)
    ctx->pc = 0x215990u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937264), GPR_U32(ctx, 0));
label_215994:
    // 0x215994: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x215994u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_215998:
    // 0x215998: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21599c:
    // 0x21599c: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x21599cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_2159a0:
    // 0x2159a0: 0xac208ab4  sw          $zero, -0x754C($at)
    ctx->pc = 0x2159a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937268), GPR_U32(ctx, 0));
label_2159a4:
    // 0x2159a4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2159a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2159a8:
    // 0x2159a8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2159a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2159ac:
    // 0x2159ac: 0xaf829220  sw          $v0, -0x6DE0($gp)
    ctx->pc = 0x2159acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939168), GPR_U32(ctx, 2));
label_2159b0:
    // 0x2159b0: 0xac208ab8  sw          $zero, -0x7548($at)
    ctx->pc = 0x2159b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937272), GPR_U32(ctx, 0));
label_2159b4:
    // 0x2159b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2159b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2159b8:
    // 0x2159b8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2159b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2159bc:
    // 0x2159bc: 0x24c6d670  addiu       $a2, $a2, -0x2990
    ctx->pc = 0x2159bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956656));
label_2159c0:
    // 0x2159c0: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2159c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2159c4:
    // 0x2159c4: 0xac288abc  sw          $t0, -0x7544($at)
    ctx->pc = 0x2159c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937276), GPR_U32(ctx, 8));
label_2159c8:
    // 0x2159c8: 0xaf809244  sw          $zero, -0x6DBC($gp)
    ctx->pc = 0x2159c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939204), GPR_U32(ctx, 0));
label_2159cc:
    // 0x2159cc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2159ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2159d0:
    // 0x2159d0: 0xaf809240  sw          $zero, -0x6DC0($gp)
    ctx->pc = 0x2159d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939200), GPR_U32(ctx, 0));
label_2159d4:
    // 0x2159d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2159d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2159d8:
    // 0x2159d8: 0xaf809228  sw          $zero, -0x6DD8($gp)
    ctx->pc = 0x2159d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939176), GPR_U32(ctx, 0));
label_2159dc:
    // 0x2159dc: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2159dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_2159e0:
    // 0x2159e0: 0xaf88922c  sw          $t0, -0x6DD4($gp)
    ctx->pc = 0x2159e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939180), GPR_U32(ctx, 8));
label_2159e4:
    // 0x2159e4: 0x24a5d674  addiu       $a1, $a1, -0x298C
    ctx->pc = 0x2159e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956660));
label_2159e8:
    // 0x2159e8: 0xaf80921c  sw          $zero, -0x6DE4($gp)
    ctx->pc = 0x2159e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939164), GPR_U32(ctx, 0));
label_2159ec:
    // 0x2159ec: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x2159ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_2159f0:
    // 0x2159f0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2159f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2159f4:
    // 0x2159f4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2159f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2159f8:
    // 0x2159f8: 0x2463d730  addiu       $v1, $v1, -0x28D0
    ctx->pc = 0x2159f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956848));
label_2159fc:
    // 0x2159fc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2159fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_215a00:
    // 0x215a00: 0x2442d734  addiu       $v0, $v0, -0x28CC
    ctx->pc = 0x215a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956852));
label_215a04:
    // 0x215a04: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x215a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_215a08:
    // 0x215a08: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x215a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_215a0c:
    // 0x215a0c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x215a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_215a10:
    // 0x215a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_215a14:
    // 0x215a14: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x215a14u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_215a18:
    // 0x215a18: 0xac208aa4  sw          $zero, -0x755C($at)
    ctx->pc = 0x215a18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937252), GPR_U32(ctx, 0));
label_215a1c:
    // 0x215a1c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a20:
    // 0x215a20: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x215a20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_215a24:
    // 0x215a24: 0xe4208aa0  swc1        $f0, -0x7560($at)
    ctx->pc = 0x215a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937248), bits); }
label_215a28:
    // 0x215a28: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x215a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215a2c:
    // 0x215a2c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a30:
    // 0x215a30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x215a30u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_215a34:
    // 0x215a34: 0xac288aac  sw          $t0, -0x7554($at)
    ctx->pc = 0x215a34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937260), GPR_U32(ctx, 8));
label_215a38:
    // 0x215a38: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a3c:
    // 0x215a3c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x215a3cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_215a40:
    // 0x215a40: 0xe4208aa8  swc1        $f0, -0x7558($at)
    ctx->pc = 0x215a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937256), bits); }
label_215a44:
    // 0x215a44: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x215a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215a48:
    // 0x215a48: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a4c:
    // 0x215a4c: 0xe4208a90  swc1        $f0, -0x7570($at)
    ctx->pc = 0x215a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937232), bits); }
label_215a50:
    // 0x215a50: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x215a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215a54:
    // 0x215a54: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a58:
    // 0x215a58: 0xe4208a94  swc1        $f0, -0x756C($at)
    ctx->pc = 0x215a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294937236), bits); }
label_215a5c:
    // 0x215a5c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a60:
    // 0x215a60: 0xac288a8c  sw          $t0, -0x7574($at)
    ctx->pc = 0x215a60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937228), GPR_U32(ctx, 8));
label_215a64:
    // 0x215a64: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a68:
    // 0x215a68: 0xac208a98  sw          $zero, -0x7568($at)
    ctx->pc = 0x215a68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937240), GPR_U32(ctx, 0));
label_215a6c:
    // 0x215a6c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a70:
    // 0x215a70: 0xac208a9c  sw          $zero, -0x7564($at)
    ctx->pc = 0x215a70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937244), GPR_U32(ctx, 0));
label_215a74:
    // 0x215a74: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a78:
    // 0x215a78: 0xac208a80  sw          $zero, -0x7580($at)
    ctx->pc = 0x215a78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937216), GPR_U32(ctx, 0));
label_215a7c:
    // 0x215a7c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a80:
    // 0x215a80: 0xac208a84  sw          $zero, -0x757C($at)
    ctx->pc = 0x215a80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937220), GPR_U32(ctx, 0));
label_215a84:
    // 0x215a84: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x215a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_215a88:
    // 0x215a88: 0xc0856a8  jal         func_215AA0
label_215a8c:
    if (ctx->pc == 0x215A8Cu) {
        ctx->pc = 0x215A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A88u;
        // 0x215a8c: 0xac208a88  sw          $zero, -0x7578($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A90u;
        goto label_215a90;
    }
    ctx->pc = 0x215A88u;
    SET_GPR_U32(ctx, 31, 0x215A90u);
    ctx->pc = 0x215A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A88u;
    // 0x215a8c: 0xac208a88  sw          $zero, -0x7578($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937224), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215AA0u;
    goto label_215aa0;
    ctx->pc = 0x215A90u;
label_215a90:
    // 0x215a90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x215a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_215a94:
    // 0x215a94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x215a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_215a98:
    // 0x215a98: 0x3e00008  jr          $ra
label_215a9c:
    if (ctx->pc == 0x215A9Cu) {
        ctx->pc = 0x215A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A98u;
        // 0x215a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215AA0u;
        goto label_215aa0;
    }
    ctx->pc = 0x215A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A98u;
        // 0x215a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215AA0u;
label_215aa0:
    // 0x215aa0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x215aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_215aa4:
    // 0x215aa4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x215aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_215aa8:
    // 0x215aa8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x215aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_215aac:
    // 0x215aac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x215aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_215ab0:
    // 0x215ab0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x215ab0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215ab4:
    // 0x215ab4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x215ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_215ab8:
    // 0x215ab8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x215ab8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_215abc:
    // 0x215abc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x215abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_215ac0:
    // 0x215ac0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x215ac0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215ac4:
    // 0x215ac4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x215ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_215ac8:
    // 0x215ac8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x215ac8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215acc:
    // 0x215acc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x215accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_215ad0:
    // 0x215ad0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x215ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_215ad4:
    // 0x215ad4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x215ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_215ad8:
    // 0x215ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x215ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_215adc:
    // 0x215adc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x215adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215ae0:
    // 0x215ae0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x215ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215ae4:
    // 0x215ae4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x215ae4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215ae8:
    // 0x215ae8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x215ae8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215aec:
    // 0x215aec: 0x0  nop
    ctx->pc = 0x215aecu;
    // NOP
label_215af0:
    // 0x215af0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x215af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_215af4:
    // 0x215af4: 0x24428680  addiu       $v0, $v0, -0x7980
    ctx->pc = 0x215af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936192));
label_215af8:
    // 0x215af8: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x215af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_215afc:
    // 0x215afc: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x215afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_215b00:
    // 0x215b00: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x215b00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_215b04:
    // 0x215b04: 0x12e00036  beqz        $s7, . + 4 + (0x36 << 2)
label_215b08:
    if (ctx->pc == 0x215B08u) {
        ctx->pc = 0x215B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B04u;
        // 0x215b08: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B0Cu;
        goto label_215b0c;
    }
    ctx->pc = 0x215B04u;
    {
        const bool branch_taken_0x215b04 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B04u;
        // 0x215b08: 0xae400020  sw          $zero, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b04) {
            ctx->pc = 0x215BE0u;
            goto label_215be0;
        }
    }
    ctx->pc = 0x215B0Cu;
label_215b0c:
    // 0x215b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_215b10:
    // 0x215b10: 0xc07b95c  jal         func_1EE570
label_215b14:
    if (ctx->pc == 0x215B14u) {
        ctx->pc = 0x215B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B10u;
        // 0x215b14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B18u;
        goto label_215b18;
    }
    ctx->pc = 0x215B10u;
    SET_GPR_U32(ctx, 31, 0x215B18u);
    ctx->pc = 0x215B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215B10u;
    // 0x215b14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE570u;
    { ctx->pc = 0x1ee570; return; }
    ctx->pc = 0x215B18u;
label_215b18:
    // 0x215b18: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_215b1c:
    if (ctx->pc == 0x215B1Cu) {
        ctx->pc = 0x215B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B18u;
        // 0x215b1c: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B20u;
        goto label_215b20;
    }
    ctx->pc = 0x215B18u;
    {
        const bool branch_taken_0x215b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B18u;
        // 0x215b1c: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b18) {
            ctx->pc = 0x215CA0u;
            goto label_215ca0;
        }
    }
    ctx->pc = 0x215B20u;
label_215b20:
    // 0x215b20: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x215b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_215b24:
    // 0x215b24: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x215b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_215b28:
    // 0x215b28: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x215b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_215b2c:
    // 0x215b2c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x215b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_215b30:
    // 0x215b30: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x215b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_215b34:
    // 0x215b34: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x215b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_215b38:
    // 0x215b38: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x215b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_215b3c:
    // 0x215b3c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x215b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_215b40:
    // 0x215b40: 0x90850221  lbu         $a1, 0x221($a0)
    ctx->pc = 0x215b40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 545)));
label_215b44:
    // 0x215b44: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x215b44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_215b48:
    // 0x215b48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x215b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_215b4c:
    // 0x215b4c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x215b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_215b50:
    // 0x215b50: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x215b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_215b54:
    // 0x215b54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x215b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_215b58:
    // 0x215b58: 0x90640012  lbu         $a0, 0x12($v1)
    ctx->pc = 0x215b58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_215b5c:
    // 0x215b5c: 0x10800050  beqz        $a0, . + 4 + (0x50 << 2)
label_215b60:
    if (ctx->pc == 0x215B60u) {
        ctx->pc = 0x215B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B5Cu;
        // 0x215b60: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B64u;
        goto label_215b64;
    }
    ctx->pc = 0x215B5Cu;
    {
        const bool branch_taken_0x215b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B5Cu;
        // 0x215b60: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b5c) {
            ctx->pc = 0x215CA0u;
            goto label_215ca0;
        }
    }
    ctx->pc = 0x215B64u;
label_215b64:
    // 0x215b64: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_215b68:
    if (ctx->pc == 0x215B68u) {
        ctx->pc = 0x215B6Cu;
        goto label_215b6c;
    }
    ctx->pc = 0x215B64u;
    {
        const bool branch_taken_0x215b64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x215b64) {
            ctx->pc = 0x215B7Cu;
            goto label_215b7c;
        }
    }
    ctx->pc = 0x215B6Cu;
label_215b6c:
    // 0x215b6c: 0x3c033fa0  lui         $v1, 0x3FA0
    ctx->pc = 0x215b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16288 << 16));
label_215b70:
    // 0x215b70: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x215b70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_215b74:
    // 0x215b74: 0x10000004  b           . + 4 + (0x4 << 2)
label_215b78:
    if (ctx->pc == 0x215B78u) {
        ctx->pc = 0x215B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B74u;
        // 0x215b78: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B7Cu;
        goto label_215b7c;
    }
    ctx->pc = 0x215B74u;
    {
        const bool branch_taken_0x215b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B74u;
        // 0x215b78: 0xc4a00004  lwc1        $f0, 0x4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b74) {
            ctx->pc = 0x215B88u;
            goto label_215b88;
        }
    }
    ctx->pc = 0x215B7Cu;
label_215b7c:
    // 0x215b7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x215b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_215b80:
    // 0x215b80: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x215b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_215b84:
    // 0x215b84: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x215b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215b88:
    // 0x215b88: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x215b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_215b8c:
    // 0x215b8c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x215b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_215b90:
    // 0x215b90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x215b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215b94:
    // 0x215b94: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x215b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215b98:
    // 0x215b98: 0xc4a3001c  lwc1        $f3, 0x1C($a1)
    ctx->pc = 0x215b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_215b9c:
    // 0x215b9c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x215b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_215ba0:
    // 0x215ba0: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x215ba0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
label_215ba4:
    // 0x215ba4: 0xae440020  sw          $a0, 0x20($s2)
    ctx->pc = 0x215ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 4));
label_215ba8:
    // 0x215ba8: 0x10200b  movn        $a0, $zero, $s0
    ctx->pc = 0x215ba8u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_215bac:
    // 0x215bac: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x215bacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
label_215bb0:
    // 0x215bb0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x215bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_215bb4:
    // 0x215bb4: 0xe6430004  swc1        $f3, 0x4($s2)
    ctx->pc = 0x215bb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_215bb8:
    // 0x215bb8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x215bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_215bbc:
    // 0x215bbc: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x215bbcu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
label_215bc0:
    // 0x215bc0: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x215bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_215bc4:
    // 0x215bc4: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x215bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_215bc8:
    // 0x215bc8: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x215bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_215bcc:
    // 0x215bcc: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x215bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_215bd0:
    // 0x215bd0: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x215bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_215bd4:
    // 0x215bd4: 0xe6420028  swc1        $f2, 0x28($s2)
    ctx->pc = 0x215bd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_215bd8:
    // 0x215bd8: 0x10000031  b           . + 4 + (0x31 << 2)
label_215bdc:
    if (ctx->pc == 0x215BDCu) {
        ctx->pc = 0x215BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BD8u;
        // 0x215bdc: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215BE0u;
        goto label_215be0;
    }
    ctx->pc = 0x215BD8u;
    {
        const bool branch_taken_0x215bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BD8u;
        // 0x215bdc: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215bd8) {
            ctx->pc = 0x215CA0u;
            goto label_215ca0;
        }
    }
    ctx->pc = 0x215BE0u;
label_215be0:
    // 0x215be0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x215be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215be4:
    // 0x215be4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_215be8:
    // 0x215be8: 0xc08675c  jal         func_219D70
label_215bec:
    if (ctx->pc == 0x215BECu) {
        ctx->pc = 0x215BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BE8u;
        // 0x215bec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215BF0u;
        goto label_215bf0;
    }
    ctx->pc = 0x215BE8u;
    SET_GPR_U32(ctx, 31, 0x215BF0u);
    ctx->pc = 0x215BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215BE8u;
    // 0x215bec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219D70u;
    { ctx->pc = 0x219d70; return; }
    ctx->pc = 0x215BF0u;
label_215bf0:
    // 0x215bf0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x215bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_215bf4:
    // 0x215bf4: 0x1043002a  beq         $v0, $v1, . + 4 + (0x2A << 2)
label_215bf8:
    if (ctx->pc == 0x215BF8u) {
        ctx->pc = 0x215BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BF4u;
        // 0x215bf8: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215BFCu;
        goto label_215bfc;
    }
    ctx->pc = 0x215BF4u;
    {
        const bool branch_taken_0x215bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x215BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BF4u;
        // 0x215bf8: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215bf4) {
            ctx->pc = 0x215CA0u;
            goto label_215ca0;
        }
    }
    ctx->pc = 0x215BFCu;
label_215bfc:
    // 0x215bfc: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x215bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_215c00:
    // 0x215c00: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x215c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_215c04:
    // 0x215c04: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x215c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_215c08:
    // 0x215c08: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x215c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_215c0c:
    // 0x215c0c: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x215c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_215c10:
    // 0x215c10: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x215c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_215c14:
    // 0x215c14: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x215c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_215c18:
    // 0x215c18: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x215c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_215c1c:
    // 0x215c1c: 0x90850220  lbu         $a1, 0x220($a0)
    ctx->pc = 0x215c1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
label_215c20:
    // 0x215c20: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x215c20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_215c24:
    // 0x215c24: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x215c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_215c28:
    // 0x215c28: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x215c28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_215c2c:
    // 0x215c2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x215c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_215c30:
    // 0x215c30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x215c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_215c34:
    // 0x215c34: 0x90640012  lbu         $a0, 0x12($v1)
    ctx->pc = 0x215c34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_215c38:
    // 0x215c38: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_215c3c:
    if (ctx->pc == 0x215C3Cu) {
        ctx->pc = 0x215C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C38u;
        // 0x215c3c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215C40u;
        goto label_215c40;
    }
    ctx->pc = 0x215C38u;
    {
        const bool branch_taken_0x215c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C38u;
        // 0x215c3c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c38) {
            ctx->pc = 0x215CA0u;
            goto label_215ca0;
        }
    }
    ctx->pc = 0x215C40u;
label_215c40:
    // 0x215c40: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_215c44:
    if (ctx->pc == 0x215C44u) {
        ctx->pc = 0x215C48u;
        goto label_215c48;
    }
    ctx->pc = 0x215C40u;
    {
        const bool branch_taken_0x215c40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x215c40) {
            ctx->pc = 0x215C58u;
            goto label_215c58;
        }
    }
    ctx->pc = 0x215C48u;
label_215c48:
    // 0x215c48: 0x3c033fa0  lui         $v1, 0x3FA0
    ctx->pc = 0x215c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16288 << 16));
label_215c4c:
    // 0x215c4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x215c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215c50:
    // 0x215c50: 0x10000004  b           . + 4 + (0x4 << 2)
label_215c54:
    if (ctx->pc == 0x215C54u) {
        ctx->pc = 0x215C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C50u;
        // 0x215c54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215C58u;
        goto label_215c58;
    }
    ctx->pc = 0x215C50u;
    {
        const bool branch_taken_0x215c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C50u;
        // 0x215c54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c50) {
            ctx->pc = 0x215C64u;
            goto label_215c64;
        }
    }
    ctx->pc = 0x215C58u;
label_215c58:
    // 0x215c58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x215c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_215c5c:
    // 0x215c5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x215c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215c60:
    // 0x215c60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x215c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215c64:
    // 0x215c64: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x215c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_215c68:
    // 0x215c68: 0xae450020  sw          $a1, 0x20($s2)
    ctx->pc = 0x215c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 5));
label_215c6c:
    // 0x215c6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x215c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_215c70:
    // 0x215c70: 0x10280b  movn        $a1, $zero, $s0
    ctx->pc = 0x215c70u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_215c74:
    // 0x215c74: 0xae450024  sw          $a1, 0x24($s2)
    ctx->pc = 0x215c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 5));
label_215c78:
    // 0x215c78: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x215c78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_215c7c:
    // 0x215c7c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x215c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_215c80:
    // 0x215c80: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x215c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_215c84:
    // 0x215c84: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x215c84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
label_215c88:
    // 0x215c88: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x215c88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_215c8c:
    // 0x215c8c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x215c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_215c90:
    // 0x215c90: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x215c90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_215c94:
    // 0x215c94: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x215c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
label_215c98:
    // 0x215c98: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x215c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_215c9c:
    // 0x215c9c: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x215c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_215ca0:
    // 0x215ca0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x215ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_215ca4:
    // 0x215ca4: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x215ca4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_215ca8:
    // 0x215ca8: 0x26730030  addiu       $s3, $s3, 0x30
    ctx->pc = 0x215ca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_215cac:
    // 0x215cac: 0x1460ff8f  bnez        $v1, . + 4 + (-0x71 << 2)
label_215cb0:
    if (ctx->pc == 0x215CB0u) {
        ctx->pc = 0x215CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CACu;
        // 0x215cb0: 0x26940240  addiu       $s4, $s4, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215CB4u;
        goto label_215cb4;
    }
    ctx->pc = 0x215CACu;
    {
        const bool branch_taken_0x215cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x215CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CACu;
        // 0x215cb0: 0x26940240  addiu       $s4, $s4, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cac) {
            ctx->pc = 0x215AECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215aec;
        }
    }
    ctx->pc = 0x215CB4u;
label_215cb4:
    // 0x215cb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x215cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_215cb8:
    // 0x215cb8: 0x27de01e0  addiu       $fp, $fp, 0x1E0
    ctx->pc = 0x215cb8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 480));
label_215cbc:
    // 0x215cbc: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x215cbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_215cc0:
    // 0x215cc0: 0x26b51b00  addiu       $s5, $s5, 0x1B00
    ctx->pc = 0x215cc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 6912));
label_215cc4:
    // 0x215cc4: 0x1460ff86  bnez        $v1, . + 4 + (-0x7A << 2)
label_215cc8:
    if (ctx->pc == 0x215CC8u) {
        ctx->pc = 0x215CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CC4u;
        // 0x215cc8: 0x26d647b8  addiu       $s6, $s6, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 18360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215CCCu;
        goto label_215ccc;
    }
    ctx->pc = 0x215CC4u;
    {
        const bool branch_taken_0x215cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x215CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CC4u;
        // 0x215cc8: 0x26d647b8  addiu       $s6, $s6, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 18360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cc4) {
            ctx->pc = 0x215AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215ae0;
        }
    }
    ctx->pc = 0x215CCCu;
label_215ccc:
    // 0x215ccc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x215cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215cd0:
    // 0x215cd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x215cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215cd4:
    // 0x215cd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x215cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215cd8:
    // 0x215cd8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x215cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_215cdc:
    // 0x215cdc: 0x3c0f002f  lui         $t7, 0x2F
    ctx->pc = 0x215cdcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)47 << 16));
label_215ce0:
    // 0x215ce0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x215ce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_215ce4:
    // 0x215ce4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x215ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_215ce8:
    // 0x215ce8: 0x25ef2570  addiu       $t7, $t7, 0x2570
    ctx->pc = 0x215ce8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9584));
label_215cec:
    // 0x215cec: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x215cecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215cf0:
    // 0x215cf0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x215cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_215cf4:
    // 0x215cf4: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x215cf4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_215cf8:
    // 0x215cf8: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x215cf8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
label_215cfc:
    // 0x215cfc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x215cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_215d00:
    // 0x215d00: 0x24848620  addiu       $a0, $a0, -0x79E0
    ctx->pc = 0x215d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936096));
label_215d04:
    // 0x215d04: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x215d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_215d08:
    // 0x215d08: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x215d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_215d0c:
    // 0x215d0c: 0x667021  addu        $t6, $v1, $a2
    ctx->pc = 0x215d0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_215d10:
    // 0x215d10: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x215d10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
label_215d14:
    // 0x215d14: 0x91cd367c  lbu         $t5, 0x367C($t6)
    ctx->pc = 0x215d14u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 13948)));
label_215d18:
    // 0x215d18: 0x11a0002d  beqz        $t5, . + 4 + (0x2D << 2)
label_215d1c:
    if (ctx->pc == 0x215D1Cu) {
        ctx->pc = 0x215D20u;
        goto label_215d20;
    }
    ctx->pc = 0x215D18u;
    {
        const bool branch_taken_0x215d18 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x215d18) {
            ctx->pc = 0x215DD0u;
            goto label_215dd0;
        }
    }
    ctx->pc = 0x215D20u;
label_215d20:
    // 0x215d20: 0x8dd03674  lw          $s0, 0x3674($t6)
    ctx->pc = 0x215d20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 13940)));
label_215d24:
    // 0x215d24: 0x8dce366c  lw          $t6, 0x366C($t6)
    ctx->pc = 0x215d24u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 13932)));
label_215d28:
    // 0x215d28: 0x106a00  sll         $t5, $s0, 8
    ctx->pc = 0x215d28u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
label_215d2c:
    // 0x215d2c: 0x1b08023  subu        $s0, $t5, $s0
    ctx->pc = 0x215d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
label_215d30:
    // 0x215d30: 0xe68c0  sll         $t5, $t6, 3
    ctx->pc = 0x215d30u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
label_215d34:
    // 0x215d34: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x215d34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
label_215d38:
    // 0x215d38: 0x1070c0  sll         $t6, $s0, 3
    ctx->pc = 0x215d38u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_215d3c:
    // 0x215d3c: 0x20e8021  addu        $s0, $s0, $t6
    ctx->pc = 0x215d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 14)));
label_215d40:
    // 0x215d40: 0xd70c0  sll         $t6, $t5, 3
    ctx->pc = 0x215d40u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_215d44:
    // 0x215d44: 0x1068c0  sll         $t5, $s0, 3
    ctx->pc = 0x215d44u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_215d48:
    // 0x215d48: 0x1ed6821  addu        $t5, $t7, $t5
    ctx->pc = 0x215d48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
label_215d4c:
    // 0x215d4c: 0x25ad0000  addiu       $t5, $t5, 0x0
    ctx->pc = 0x215d4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 0));
label_215d50:
    // 0x215d50: 0x12e00013  beqz        $s7, . + 4 + (0x13 << 2)
label_215d54:
    if (ctx->pc == 0x215D54u) {
        ctx->pc = 0x215D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D50u;
        // 0x215d54: 0x1ae6821  addu        $t5, $t5, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215D58u;
        goto label_215d58;
    }
    ctx->pc = 0x215D50u;
    {
        const bool branch_taken_0x215d50 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D50u;
        // 0x215d54: 0x1ae6821  addu        $t5, $t5, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d50) {
            ctx->pc = 0x215DA0u;
            goto label_215da0;
        }
    }
    ctx->pc = 0x215D58u;
label_215d58:
    // 0x215d58: 0xc5a00004  lwc1        $f0, 0x4($t5)
    ctx->pc = 0x215d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215d5c:
    // 0x215d5c: 0xc5a10008  lwc1        $f1, 0x8($t5)
    ctx->pc = 0x215d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_215d60:
    // 0x215d60: 0xc5a2001c  lwc1        $f2, 0x1C($t5)
    ctx->pc = 0x215d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_215d64:
    // 0x215d64: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x215d64u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_215d68:
    // 0x215d68: 0xad0c0020  sw          $t4, 0x20($t0)
    ctx->pc = 0x215d68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 12));
label_215d6c:
    // 0x215d6c: 0xad0b0024  sw          $t3, 0x24($t0)
    ctx->pc = 0x215d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 11));
label_215d70:
    // 0x215d70: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x215d70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_215d74:
    // 0x215d74: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x215d74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_215d78:
    // 0x215d78: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x215d78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
label_215d7c:
    // 0x215d7c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x215d7cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
label_215d80:
    // 0x215d80: 0xad0a000c  sw          $t2, 0xC($t0)
    ctx->pc = 0x215d80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 10));
label_215d84:
    // 0x215d84: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x215d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
label_215d88:
    // 0x215d88: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x215d88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
label_215d8c:
    // 0x215d8c: 0xe5010018  swc1        $f1, 0x18($t0)
    ctx->pc = 0x215d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
label_215d90:
    // 0x215d90: 0xad0a001c  sw          $t2, 0x1C($t0)
    ctx->pc = 0x215d90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 10));
label_215d94:
    // 0x215d94: 0xad0a0028  sw          $t2, 0x28($t0)
    ctx->pc = 0x215d94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 10));
label_215d98:
    // 0x215d98: 0x1000000d  b           . + 4 + (0xD << 2)
label_215d9c:
    if (ctx->pc == 0x215D9Cu) {
        ctx->pc = 0x215D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D98u;
        // 0x215d9c: 0xad00002c  sw          $zero, 0x2C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215DA0u;
        goto label_215da0;
    }
    ctx->pc = 0x215D98u;
    {
        const bool branch_taken_0x215d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D98u;
        // 0x215d9c: 0xad00002c  sw          $zero, 0x2C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d98) {
            ctx->pc = 0x215DD0u;
            goto label_215dd0;
        }
    }
    ctx->pc = 0x215DA0u;
label_215da0:
    // 0x215da0: 0xad0c0020  sw          $t4, 0x20($t0)
    ctx->pc = 0x215da0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 12));
label_215da4:
    // 0x215da4: 0xad0b0024  sw          $t3, 0x24($t0)
    ctx->pc = 0x215da4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 11));
label_215da8:
    // 0x215da8: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x215da8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_215dac:
    // 0x215dac: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x215dacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
label_215db0:
    // 0x215db0: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x215db0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
label_215db4:
    // 0x215db4: 0xad0a000c  sw          $t2, 0xC($t0)
    ctx->pc = 0x215db4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 10));
label_215db8:
    // 0x215db8: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x215db8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
label_215dbc:
    // 0x215dbc: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x215dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
label_215dc0:
    // 0x215dc0: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x215dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
label_215dc4:
    // 0x215dc4: 0xad0a001c  sw          $t2, 0x1C($t0)
    ctx->pc = 0x215dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 10));
label_215dc8:
    // 0x215dc8: 0xad0a0028  sw          $t2, 0x28($t0)
    ctx->pc = 0x215dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 10));
label_215dcc:
    // 0x215dcc: 0xad09002c  sw          $t1, 0x2C($t0)
    ctx->pc = 0x215dccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 9));
label_215dd0:
    // 0x215dd0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x215dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_215dd4:
    // 0x215dd4: 0x28e80002  slti        $t0, $a3, 0x2
    ctx->pc = 0x215dd4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_215dd8:
    // 0x215dd8: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x215dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_215ddc:
    // 0x215ddc: 0x1500ffca  bnez        $t0, . + 4 + (-0x36 << 2)
label_215de0:
    if (ctx->pc == 0x215DE0u) {
        ctx->pc = 0x215DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215DDCu;
        // 0x215de0: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215DE4u;
        goto label_215de4;
    }
    ctx->pc = 0x215DDCu;
    {
        const bool branch_taken_0x215ddc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x215DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215DDCu;
        // 0x215de0: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ddc) {
            ctx->pc = 0x215D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215d08;
        }
    }
    ctx->pc = 0x215DE4u;
label_215de4:
    // 0x215de4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x215de4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215de8:
    // 0x215de8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x215de8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215dec:
    // 0x215dec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x215decu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215df0:
    // 0x215df0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x215df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_215df4:
    // 0x215df4: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x215df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
label_215df8:
    // 0x215df8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x215df8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_215dfc:
    // 0x215dfc: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x215dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_215e00:
    // 0x215e00: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x215e00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_215e04:
    // 0x215e04: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x215e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_215e08:
    // 0x215e08: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x215e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_215e0c:
    // 0x215e0c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x215e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215e10:
    // 0x215e10: 0x2463d8b0  addiu       $v1, $v1, -0x2750
    ctx->pc = 0x215e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957232));
label_215e14:
    // 0x215e14: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x215e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_215e18:
    // 0x215e18: 0x3c0f3f80  lui         $t7, 0x3F80
    ctx->pc = 0x215e18u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16256 << 16));
label_215e1c:
    // 0x215e1c: 0x24c68320  addiu       $a2, $a2, -0x7CE0
    ctx->pc = 0x215e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935328));
label_215e20:
    // 0x215e20: 0x24a524b0  addiu       $a1, $a1, 0x24B0
    ctx->pc = 0x215e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9392));
label_215e24:
    // 0x215e24: 0xc76021  addu        $t4, $a2, $a3
    ctx->pc = 0x215e24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_215e28:
    // 0x215e28: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x215e28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_215e2c:
    // 0x215e2c: 0xad800020  sw          $zero, 0x20($t4)
    ctx->pc = 0x215e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 32), GPR_U32(ctx, 0));
label_215e30:
    // 0x215e30: 0x912a0002  lbu         $t2, 0x2($t1)
    ctx->pc = 0x215e30u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_215e34:
    // 0x215e34: 0x1144006a  beq         $t2, $a0, . + 4 + (0x6A << 2)
label_215e38:
    if (ctx->pc == 0x215E38u) {
        ctx->pc = 0x215E3Cu;
        goto label_215e3c;
    }
    ctx->pc = 0x215E34u;
    {
        const bool branch_taken_0x215e34 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x215e34) {
            ctx->pc = 0x215FE0u;
            { ctx->pc = 0x215fe0; return; }
        }
    }
    ctx->pc = 0x215E3Cu;
label_215e3c:
    // 0x215e3c: 0x12e00039  beqz        $s7, . + 4 + (0x39 << 2)
label_215e40:
    if (ctx->pc == 0x215E40u) {
        ctx->pc = 0x215E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E3Cu;
        // 0x215e40: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215E44u;
        goto label_215e44;
    }
    ctx->pc = 0x215E3Cu;
    {
        const bool branch_taken_0x215e3c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x215E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E3Cu;
        // 0x215e40: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e3c) {
            ctx->pc = 0x215F24u;
            { ctx->pc = 0x215f24; return; }
        }
    }
    ctx->pc = 0x215E44u;
label_215e44:
    // 0x215e44: 0x8d2d0004  lw          $t5, 0x4($t1)
    ctx->pc = 0x215e44u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_215e48:
    // 0x215e48: 0x8c2e4900  lw          $t6, 0x4900($at)
    ctx->pc = 0x215e48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_215e4c:
    // 0x215e4c: 0x1cd082a  slt         $at, $t6, $t5
    ctx->pc = 0x215e4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
label_215e50:
    // 0x215e50: 0x14200063  bnez        $at, . + 4 + (0x63 << 2)
label_215e54:
    if (ctx->pc == 0x215E54u) {
        ctx->pc = 0x215E58u;
        goto label_215e58;
    }
    ctx->pc = 0x215E50u;
    {
        const bool branch_taken_0x215e50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x215e50) {
            ctx->pc = 0x215FE0u;
            { ctx->pc = 0x215fe0; return; }
        }
    }
    ctx->pc = 0x215E58u;
label_215e58:
    // 0x215e58: 0x8d2d0008  lw          $t5, 0x8($t1)
    ctx->pc = 0x215e58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_215e5c:
    // 0x215e5c: 0x1cd082a  slt         $at, $t6, $t5
    ctx->pc = 0x215e5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
label_215e60:
    // 0x215e60: 0x1020005f  beqz        $at, . + 4 + (0x5F << 2)
label_215e64:
    if (ctx->pc == 0x215E64u) {
        ctx->pc = 0x215E68u;
        goto label_215e68;
    }
    ctx->pc = 0x215E60u;
    {
        const bool branch_taken_0x215e60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x215e60) {
            ctx->pc = 0x215FE0u;
            { ctx->pc = 0x215fe0; return; }
        }
    }
    ctx->pc = 0x215E68u;
label_215e68:
    // 0x215e68: 0x912d0001  lbu         $t5, 0x1($t1)
    ctx->pc = 0x215e68u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_215e6c:
    // 0x215e6c: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
label_215e70:
    if (ctx->pc == 0x215E70u) {
        ctx->pc = 0x215E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E6Cu;
        // 0x215e70: 0xd7042  srl         $t6, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215E74u;
        goto label_215e74;
    }
    ctx->pc = 0x215E6Cu;
    {
        const bool branch_taken_0x215e6c = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x215E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E6Cu;
        // 0x215e70: 0xd7042  srl         $t6, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e6c) {
            ctx->pc = 0x215E80u;
            goto label_215e80;
        }
    }
    ctx->pc = 0x215E74u;
label_215e74:
    // 0x215e74: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x215e74u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215e78:
    // 0x215e78: 0x10000007  b           . + 4 + (0x7 << 2)
label_215e7c:
    if (ctx->pc == 0x215E7Cu) {
        ctx->pc = 0x215E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E78u;
        // 0x215e7c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x215E80u;
        goto label_215e80;
    }
    ctx->pc = 0x215E78u;
    {
        const bool branch_taken_0x215e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E78u;
        // 0x215e7c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e78) {
            ctx->pc = 0x215E98u;
            goto label_215e98;
        }
    }
    ctx->pc = 0x215E80u;
label_215e80:
    // 0x215e80: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x215e80u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_215e84:
    // 0x215e84: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x215e84u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
label_215e88:
    // 0x215e88: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x215e88u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215e8c:
    // 0x215e8c: 0x0  nop
    ctx->pc = 0x215e8cu;
    // NOP
label_215e90:
    // 0x215e90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215e94:
    // 0x215e94: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x215e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_215e98:
    // 0x215e98: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x215e98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_215e9c:
    // 0x215e9c: 0x912d0000  lbu         $t5, 0x0($t1)
    ctx->pc = 0x215e9cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_215ea0:
    // 0x215ea0: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
label_215ea4:
    if (ctx->pc == 0x215EA4u) {
        ctx->pc = 0x215EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EA0u;
        // 0x215ea4: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x215EA8u;
        goto label_215ea8;
    }
    ctx->pc = 0x215EA0u;
    {
        const bool branch_taken_0x215ea0 = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x215EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EA0u;
        // 0x215ea4: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ea0) {
            ctx->pc = 0x215EB4u;
            goto label_215eb4;
        }
    }
    ctx->pc = 0x215EA8u;
label_215ea8:
    // 0x215ea8: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x215ea8u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215eac:
    // 0x215eac: 0x10000008  b           . + 4 + (0x8 << 2)
label_215eb0:
    if (ctx->pc == 0x215EB0u) {
        ctx->pc = 0x215EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EACu;
        // 0x215eb0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x215EB4u;
        goto label_215eb4;
    }
    ctx->pc = 0x215EACu;
    {
        const bool branch_taken_0x215eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EACu;
        // 0x215eb0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215eac) {
            ctx->pc = 0x215ED0u;
            goto label_215ed0;
        }
    }
    ctx->pc = 0x215EB4u;
label_215eb4:
    // 0x215eb4: 0xd7042  srl         $t6, $t5, 1
    ctx->pc = 0x215eb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
label_215eb8:
    // 0x215eb8: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x215eb8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
label_215ebc:
    // 0x215ebc: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x215ebcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
label_215ec0:
    // 0x215ec0: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x215ec0u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_215ec4:
    // 0x215ec4: 0x0  nop
    ctx->pc = 0x215ec4u;
    // NOP
label_215ec8:
    // 0x215ec8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215ec8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_215ecc:
    // 0x215ecc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x215eccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_215ed0:
    // 0x215ed0: 0x91290003  lbu         $t1, 0x3($t1)
    ctx->pc = 0x215ed0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_215ed4:
    // 0x215ed4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x215ed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    ctx->pc = 0x215ed8u;
    return;
}

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


void FUN_0014eba0_part676(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x298510u: goto label_298510;
        case 0x298514u: goto label_298514;
        case 0x298518u: goto label_298518;
        case 0x29851cu: goto label_29851c;
        case 0x298520u: goto label_298520;
        case 0x298524u: goto label_298524;
        case 0x298528u: goto label_298528;
        case 0x29852cu: goto label_29852c;
        case 0x298530u: goto label_298530;
        case 0x298534u: goto label_298534;
        case 0x298538u: goto label_298538;
        case 0x29853cu: goto label_29853c;
        case 0x298540u: goto label_298540;
        case 0x298544u: goto label_298544;
        case 0x298548u: goto label_298548;
        case 0x29854cu: goto label_29854c;
        case 0x298550u: goto label_298550;
        case 0x298554u: goto label_298554;
        case 0x298558u: goto label_298558;
        case 0x29855cu: goto label_29855c;
        case 0x298560u: goto label_298560;
        case 0x298564u: goto label_298564;
        case 0x298568u: goto label_298568;
        case 0x29856cu: goto label_29856c;
        case 0x298570u: goto label_298570;
        case 0x298574u: goto label_298574;
        case 0x298578u: goto label_298578;
        case 0x29857cu: goto label_29857c;
        case 0x298580u: goto label_298580;
        case 0x298584u: goto label_298584;
        case 0x298588u: goto label_298588;
        case 0x29858cu: goto label_29858c;
        case 0x298590u: goto label_298590;
        case 0x298594u: goto label_298594;
        case 0x298598u: goto label_298598;
        case 0x29859cu: goto label_29859c;
        case 0x2985a0u: goto label_2985a0;
        case 0x2985a4u: goto label_2985a4;
        case 0x2985a8u: goto label_2985a8;
        case 0x2985acu: goto label_2985ac;
        case 0x2985b0u: goto label_2985b0;
        case 0x2985b4u: goto label_2985b4;
        case 0x2985b8u: goto label_2985b8;
        case 0x2985bcu: goto label_2985bc;
        case 0x2985c0u: goto label_2985c0;
        case 0x2985c4u: goto label_2985c4;
        case 0x2985c8u: goto label_2985c8;
        case 0x2985ccu: goto label_2985cc;
        case 0x2985d0u: goto label_2985d0;
        case 0x2985d4u: goto label_2985d4;
        case 0x2985d8u: goto label_2985d8;
        case 0x2985dcu: goto label_2985dc;
        case 0x2985e0u: goto label_2985e0;
        case 0x2985e4u: goto label_2985e4;
        case 0x2985e8u: goto label_2985e8;
        case 0x2985ecu: goto label_2985ec;
        case 0x2985f0u: goto label_2985f0;
        case 0x2985f4u: goto label_2985f4;
        case 0x2985f8u: goto label_2985f8;
        case 0x2985fcu: goto label_2985fc;
        case 0x298600u: goto label_298600;
        case 0x298604u: goto label_298604;
        case 0x298608u: goto label_298608;
        case 0x29860cu: goto label_29860c;
        case 0x298610u: goto label_298610;
        case 0x298614u: goto label_298614;
        case 0x298618u: goto label_298618;
        case 0x29861cu: goto label_29861c;
        case 0x298620u: goto label_298620;
        case 0x298624u: goto label_298624;
        case 0x298628u: goto label_298628;
        case 0x29862cu: goto label_29862c;
        case 0x298630u: goto label_298630;
        case 0x298634u: goto label_298634;
        case 0x298638u: goto label_298638;
        case 0x29863cu: goto label_29863c;
        case 0x298640u: goto label_298640;
        case 0x298644u: goto label_298644;
        case 0x298648u: goto label_298648;
        case 0x29864cu: goto label_29864c;
        case 0x298650u: goto label_298650;
        case 0x298654u: goto label_298654;
        case 0x298658u: goto label_298658;
        case 0x29865cu: goto label_29865c;
        case 0x298660u: goto label_298660;
        case 0x298664u: goto label_298664;
        case 0x298668u: goto label_298668;
        case 0x29866cu: goto label_29866c;
        case 0x298670u: goto label_298670;
        case 0x298674u: goto label_298674;
        case 0x298678u: goto label_298678;
        case 0x29867cu: goto label_29867c;
        case 0x298680u: goto label_298680;
        case 0x298684u: goto label_298684;
        case 0x298688u: goto label_298688;
        case 0x29868cu: goto label_29868c;
        case 0x298690u: goto label_298690;
        case 0x298694u: goto label_298694;
        case 0x298698u: goto label_298698;
        case 0x29869cu: goto label_29869c;
        case 0x2986a0u: goto label_2986a0;
        case 0x2986a4u: goto label_2986a4;
        case 0x2986a8u: goto label_2986a8;
        case 0x2986acu: goto label_2986ac;
        case 0x2986b0u: goto label_2986b0;
        case 0x2986b4u: goto label_2986b4;
        case 0x2986b8u: goto label_2986b8;
        case 0x2986bcu: goto label_2986bc;
        case 0x2986c0u: goto label_2986c0;
        case 0x2986c4u: goto label_2986c4;
        case 0x2986c8u: goto label_2986c8;
        case 0x2986ccu: goto label_2986cc;
        case 0x2986d0u: goto label_2986d0;
        case 0x2986d4u: goto label_2986d4;
        case 0x2986d8u: goto label_2986d8;
        case 0x2986dcu: goto label_2986dc;
        case 0x2986e0u: goto label_2986e0;
        case 0x2986e4u: goto label_2986e4;
        case 0x2986e8u: goto label_2986e8;
        case 0x2986ecu: goto label_2986ec;
        case 0x2986f0u: goto label_2986f0;
        case 0x2986f4u: goto label_2986f4;
        case 0x2986f8u: goto label_2986f8;
        case 0x2986fcu: goto label_2986fc;
        case 0x298700u: goto label_298700;
        case 0x298704u: goto label_298704;
        case 0x298708u: goto label_298708;
        case 0x29870cu: goto label_29870c;
        case 0x298710u: goto label_298710;
        case 0x298714u: goto label_298714;
        case 0x298718u: goto label_298718;
        case 0x29871cu: goto label_29871c;
        case 0x298720u: goto label_298720;
        case 0x298724u: goto label_298724;
        case 0x298728u: goto label_298728;
        case 0x29872cu: goto label_29872c;
        case 0x298730u: goto label_298730;
        case 0x298734u: goto label_298734;
        case 0x298738u: goto label_298738;
        case 0x29873cu: goto label_29873c;
        case 0x298740u: goto label_298740;
        case 0x298744u: goto label_298744;
        case 0x298748u: goto label_298748;
        case 0x29874cu: goto label_29874c;
        case 0x298750u: goto label_298750;
        case 0x298754u: goto label_298754;
        case 0x298758u: goto label_298758;
        case 0x29875cu: goto label_29875c;
        case 0x298760u: goto label_298760;
        case 0x298764u: goto label_298764;
        case 0x298768u: goto label_298768;
        case 0x29876cu: goto label_29876c;
        case 0x298770u: goto label_298770;
        case 0x298774u: goto label_298774;
        case 0x298778u: goto label_298778;
        case 0x29877cu: goto label_29877c;
        case 0x298780u: goto label_298780;
        case 0x298784u: goto label_298784;
        case 0x298788u: goto label_298788;
        case 0x29878cu: goto label_29878c;
        case 0x298790u: goto label_298790;
        case 0x298794u: goto label_298794;
        case 0x298798u: goto label_298798;
        case 0x29879cu: goto label_29879c;
        case 0x2987a0u: goto label_2987a0;
        case 0x2987a4u: goto label_2987a4;
        case 0x2987a8u: goto label_2987a8;
        case 0x2987acu: goto label_2987ac;
        case 0x2987b0u: goto label_2987b0;
        case 0x2987b4u: goto label_2987b4;
        case 0x2987b8u: goto label_2987b8;
        case 0x2987bcu: goto label_2987bc;
        case 0x2987c0u: goto label_2987c0;
        case 0x2987c4u: goto label_2987c4;
        case 0x2987c8u: goto label_2987c8;
        case 0x2987ccu: goto label_2987cc;
        case 0x2987d0u: goto label_2987d0;
        case 0x2987d4u: goto label_2987d4;
        case 0x2987d8u: goto label_2987d8;
        case 0x2987dcu: goto label_2987dc;
        case 0x2987e0u: goto label_2987e0;
        case 0x2987e4u: goto label_2987e4;
        case 0x2987e8u: goto label_2987e8;
        case 0x2987ecu: goto label_2987ec;
        case 0x2987f0u: goto label_2987f0;
        case 0x2987f4u: goto label_2987f4;
        case 0x2987f8u: goto label_2987f8;
        case 0x2987fcu: goto label_2987fc;
        case 0x298800u: goto label_298800;
        case 0x298804u: goto label_298804;
        case 0x298808u: goto label_298808;
        case 0x29880cu: goto label_29880c;
        case 0x298810u: goto label_298810;
        case 0x298814u: goto label_298814;
        case 0x298818u: goto label_298818;
        case 0x29881cu: goto label_29881c;
        case 0x298820u: goto label_298820;
        case 0x298824u: goto label_298824;
        case 0x298828u: goto label_298828;
        case 0x29882cu: goto label_29882c;
        case 0x298830u: goto label_298830;
        case 0x298834u: goto label_298834;
        case 0x298838u: goto label_298838;
        case 0x29883cu: goto label_29883c;
        case 0x298840u: goto label_298840;
        case 0x298844u: goto label_298844;
        case 0x298848u: goto label_298848;
        case 0x29884cu: goto label_29884c;
        case 0x298850u: goto label_298850;
        case 0x298854u: goto label_298854;
        case 0x298858u: goto label_298858;
        case 0x29885cu: goto label_29885c;
        case 0x298860u: goto label_298860;
        case 0x298864u: goto label_298864;
        case 0x298868u: goto label_298868;
        case 0x29886cu: goto label_29886c;
        case 0x298870u: goto label_298870;
        case 0x298874u: goto label_298874;
        case 0x298878u: goto label_298878;
        case 0x29887cu: goto label_29887c;
        case 0x298880u: goto label_298880;
        case 0x298884u: goto label_298884;
        case 0x298888u: goto label_298888;
        case 0x29888cu: goto label_29888c;
        case 0x298890u: goto label_298890;
        case 0x298894u: goto label_298894;
        case 0x298898u: goto label_298898;
        case 0x29889cu: goto label_29889c;
        case 0x2988a0u: goto label_2988a0;
        case 0x2988a4u: goto label_2988a4;
        case 0x2988a8u: goto label_2988a8;
        case 0x2988acu: goto label_2988ac;
        case 0x2988b0u: goto label_2988b0;
        case 0x2988b4u: goto label_2988b4;
        case 0x2988b8u: goto label_2988b8;
        case 0x2988bcu: goto label_2988bc;
        case 0x2988c0u: goto label_2988c0;
        case 0x2988c4u: goto label_2988c4;
        case 0x2988c8u: goto label_2988c8;
        case 0x2988ccu: goto label_2988cc;
        case 0x2988d0u: goto label_2988d0;
        case 0x2988d4u: goto label_2988d4;
        case 0x2988d8u: goto label_2988d8;
        case 0x2988dcu: goto label_2988dc;
        case 0x2988e0u: goto label_2988e0;
        case 0x2988e4u: goto label_2988e4;
        case 0x2988e8u: goto label_2988e8;
        case 0x2988ecu: goto label_2988ec;
        case 0x2988f0u: goto label_2988f0;
        case 0x2988f4u: goto label_2988f4;
        case 0x2988f8u: goto label_2988f8;
        case 0x2988fcu: goto label_2988fc;
        case 0x298900u: goto label_298900;
        case 0x298904u: goto label_298904;
        case 0x298908u: goto label_298908;
        case 0x29890cu: goto label_29890c;
        case 0x298910u: goto label_298910;
        case 0x298914u: goto label_298914;
        case 0x298918u: goto label_298918;
        case 0x29891cu: goto label_29891c;
        case 0x298920u: goto label_298920;
        case 0x298924u: goto label_298924;
        case 0x298928u: goto label_298928;
        case 0x29892cu: goto label_29892c;
        case 0x298930u: goto label_298930;
        case 0x298934u: goto label_298934;
        case 0x298938u: goto label_298938;
        case 0x29893cu: goto label_29893c;
        case 0x298940u: goto label_298940;
        case 0x298944u: goto label_298944;
        case 0x298948u: goto label_298948;
        case 0x29894cu: goto label_29894c;
        case 0x298950u: goto label_298950;
        case 0x298954u: goto label_298954;
        case 0x298958u: goto label_298958;
        case 0x29895cu: goto label_29895c;
        case 0x298960u: goto label_298960;
        case 0x298964u: goto label_298964;
        case 0x298968u: goto label_298968;
        case 0x29896cu: goto label_29896c;
        case 0x298970u: goto label_298970;
        case 0x298974u: goto label_298974;
        case 0x298978u: goto label_298978;
        case 0x29897cu: goto label_29897c;
        case 0x298980u: goto label_298980;
        case 0x298984u: goto label_298984;
        case 0x298988u: goto label_298988;
        case 0x29898cu: goto label_29898c;
        case 0x298990u: goto label_298990;
        case 0x298994u: goto label_298994;
        case 0x298998u: goto label_298998;
        case 0x29899cu: goto label_29899c;
        case 0x2989a0u: goto label_2989a0;
        case 0x2989a4u: goto label_2989a4;
        case 0x2989a8u: goto label_2989a8;
        case 0x2989acu: goto label_2989ac;
        case 0x2989b0u: goto label_2989b0;
        case 0x2989b4u: goto label_2989b4;
        case 0x2989b8u: goto label_2989b8;
        case 0x2989bcu: goto label_2989bc;
        case 0x2989c0u: goto label_2989c0;
        case 0x2989c4u: goto label_2989c4;
        case 0x2989c8u: goto label_2989c8;
        case 0x2989ccu: goto label_2989cc;
        case 0x2989d0u: goto label_2989d0;
        case 0x2989d4u: goto label_2989d4;
        case 0x2989d8u: goto label_2989d8;
        case 0x2989dcu: goto label_2989dc;
        case 0x2989e0u: goto label_2989e0;
        case 0x2989e4u: goto label_2989e4;
        case 0x2989e8u: goto label_2989e8;
        case 0x2989ecu: goto label_2989ec;
        case 0x2989f0u: goto label_2989f0;
        case 0x2989f4u: goto label_2989f4;
        case 0x2989f8u: goto label_2989f8;
        case 0x2989fcu: goto label_2989fc;
        case 0x298a00u: goto label_298a00;
        case 0x298a04u: goto label_298a04;
        case 0x298a08u: goto label_298a08;
        case 0x298a0cu: goto label_298a0c;
        case 0x298a10u: goto label_298a10;
        case 0x298a14u: goto label_298a14;
        case 0x298a18u: goto label_298a18;
        case 0x298a1cu: goto label_298a1c;
        case 0x298a20u: goto label_298a20;
        case 0x298a24u: goto label_298a24;
        case 0x298a28u: goto label_298a28;
        case 0x298a2cu: goto label_298a2c;
        case 0x298a30u: goto label_298a30;
        case 0x298a34u: goto label_298a34;
        case 0x298a38u: goto label_298a38;
        case 0x298a3cu: goto label_298a3c;
        case 0x298a40u: goto label_298a40;
        case 0x298a44u: goto label_298a44;
        case 0x298a48u: goto label_298a48;
        case 0x298a4cu: goto label_298a4c;
        case 0x298a50u: goto label_298a50;
        case 0x298a54u: goto label_298a54;
        case 0x298a58u: goto label_298a58;
        case 0x298a5cu: goto label_298a5c;
        case 0x298a60u: goto label_298a60;
        case 0x298a64u: goto label_298a64;
        case 0x298a68u: goto label_298a68;
        case 0x298a6cu: goto label_298a6c;
        case 0x298a70u: goto label_298a70;
        case 0x298a74u: goto label_298a74;
        case 0x298a78u: goto label_298a78;
        case 0x298a7cu: goto label_298a7c;
        case 0x298a80u: goto label_298a80;
        case 0x298a84u: goto label_298a84;
        case 0x298a88u: goto label_298a88;
        case 0x298a8cu: goto label_298a8c;
        case 0x298a90u: goto label_298a90;
        case 0x298a94u: goto label_298a94;
        case 0x298a98u: goto label_298a98;
        case 0x298a9cu: goto label_298a9c;
        case 0x298aa0u: goto label_298aa0;
        case 0x298aa4u: goto label_298aa4;
        case 0x298aa8u: goto label_298aa8;
        case 0x298aacu: goto label_298aac;
        case 0x298ab0u: goto label_298ab0;
        case 0x298ab4u: goto label_298ab4;
        case 0x298ab8u: goto label_298ab8;
        case 0x298abcu: goto label_298abc;
        case 0x298ac0u: goto label_298ac0;
        case 0x298ac4u: goto label_298ac4;
        case 0x298ac8u: goto label_298ac8;
        case 0x298accu: goto label_298acc;
        case 0x298ad0u: goto label_298ad0;
        case 0x298ad4u: goto label_298ad4;
        case 0x298ad8u: goto label_298ad8;
        case 0x298adcu: goto label_298adc;
        case 0x298ae0u: goto label_298ae0;
        case 0x298ae4u: goto label_298ae4;
        case 0x298ae8u: goto label_298ae8;
        case 0x298aecu: goto label_298aec;
        case 0x298af0u: goto label_298af0;
        case 0x298af4u: goto label_298af4;
        case 0x298af8u: goto label_298af8;
        case 0x298afcu: goto label_298afc;
        case 0x298b00u: goto label_298b00;
        case 0x298b04u: goto label_298b04;
        case 0x298b08u: goto label_298b08;
        case 0x298b0cu: goto label_298b0c;
        case 0x298b10u: goto label_298b10;
        case 0x298b14u: goto label_298b14;
        case 0x298b18u: goto label_298b18;
        case 0x298b1cu: goto label_298b1c;
        case 0x298b20u: goto label_298b20;
        case 0x298b24u: goto label_298b24;
        case 0x298b28u: goto label_298b28;
        case 0x298b2cu: goto label_298b2c;
        case 0x298b30u: goto label_298b30;
        case 0x298b34u: goto label_298b34;
        case 0x298b38u: goto label_298b38;
        case 0x298b3cu: goto label_298b3c;
        case 0x298b40u: goto label_298b40;
        case 0x298b44u: goto label_298b44;
        case 0x298b48u: goto label_298b48;
        case 0x298b4cu: goto label_298b4c;
        case 0x298b50u: goto label_298b50;
        case 0x298b54u: goto label_298b54;
        case 0x298b58u: goto label_298b58;
        case 0x298b5cu: goto label_298b5c;
        case 0x298b60u: goto label_298b60;
        case 0x298b64u: goto label_298b64;
        case 0x298b68u: goto label_298b68;
        case 0x298b6cu: goto label_298b6c;
        case 0x298b70u: goto label_298b70;
        case 0x298b74u: goto label_298b74;
        case 0x298b78u: goto label_298b78;
        case 0x298b7cu: goto label_298b7c;
        case 0x298b80u: goto label_298b80;
        case 0x298b84u: goto label_298b84;
        case 0x298b88u: goto label_298b88;
        case 0x298b8cu: goto label_298b8c;
        case 0x298b90u: goto label_298b90;
        case 0x298b94u: goto label_298b94;
        case 0x298b98u: goto label_298b98;
        case 0x298b9cu: goto label_298b9c;
        case 0x298ba0u: goto label_298ba0;
        case 0x298ba4u: goto label_298ba4;
        case 0x298ba8u: goto label_298ba8;
        case 0x298bacu: goto label_298bac;
        case 0x298bb0u: goto label_298bb0;
        case 0x298bb4u: goto label_298bb4;
        case 0x298bb8u: goto label_298bb8;
        case 0x298bbcu: goto label_298bbc;
        case 0x298bc0u: goto label_298bc0;
        case 0x298bc4u: goto label_298bc4;
        case 0x298bc8u: goto label_298bc8;
        case 0x298bccu: goto label_298bcc;
        case 0x298bd0u: goto label_298bd0;
        case 0x298bd4u: goto label_298bd4;
        case 0x298bd8u: goto label_298bd8;
        case 0x298bdcu: goto label_298bdc;
        case 0x298be0u: goto label_298be0;
        case 0x298be4u: goto label_298be4;
        case 0x298be8u: goto label_298be8;
        case 0x298becu: goto label_298bec;
        case 0x298bf0u: goto label_298bf0;
        case 0x298bf4u: goto label_298bf4;
        case 0x298bf8u: goto label_298bf8;
        case 0x298bfcu: goto label_298bfc;
        case 0x298c00u: goto label_298c00;
        case 0x298c04u: goto label_298c04;
        case 0x298c08u: goto label_298c08;
        case 0x298c0cu: goto label_298c0c;
        case 0x298c10u: goto label_298c10;
        case 0x298c14u: goto label_298c14;
        case 0x298c18u: goto label_298c18;
        case 0x298c1cu: goto label_298c1c;
        case 0x298c20u: goto label_298c20;
        case 0x298c24u: goto label_298c24;
        case 0x298c28u: goto label_298c28;
        case 0x298c2cu: goto label_298c2c;
        case 0x298c30u: goto label_298c30;
        case 0x298c34u: goto label_298c34;
        case 0x298c38u: goto label_298c38;
        case 0x298c3cu: goto label_298c3c;
        case 0x298c40u: goto label_298c40;
        case 0x298c44u: goto label_298c44;
        case 0x298c48u: goto label_298c48;
        case 0x298c4cu: goto label_298c4c;
        case 0x298c50u: goto label_298c50;
        case 0x298c54u: goto label_298c54;
        case 0x298c58u: goto label_298c58;
        case 0x298c5cu: goto label_298c5c;
        case 0x298c60u: goto label_298c60;
        case 0x298c64u: goto label_298c64;
        case 0x298c68u: goto label_298c68;
        case 0x298c6cu: goto label_298c6c;
        case 0x298c70u: goto label_298c70;
        case 0x298c74u: goto label_298c74;
        case 0x298c78u: goto label_298c78;
        case 0x298c7cu: goto label_298c7c;
        case 0x298c80u: goto label_298c80;
        case 0x298c84u: goto label_298c84;
        case 0x298c88u: goto label_298c88;
        case 0x298c8cu: goto label_298c8c;
        case 0x298c90u: goto label_298c90;
        case 0x298c94u: goto label_298c94;
        case 0x298c98u: goto label_298c98;
        case 0x298c9cu: goto label_298c9c;
        case 0x298ca0u: goto label_298ca0;
        case 0x298ca4u: goto label_298ca4;
        case 0x298ca8u: goto label_298ca8;
        case 0x298cacu: goto label_298cac;
        case 0x298cb0u: goto label_298cb0;
        case 0x298cb4u: goto label_298cb4;
        case 0x298cb8u: goto label_298cb8;
        case 0x298cbcu: goto label_298cbc;
        case 0x298cc0u: goto label_298cc0;
        case 0x298cc4u: goto label_298cc4;
        case 0x298cc8u: goto label_298cc8;
        case 0x298cccu: goto label_298ccc;
        case 0x298cd0u: goto label_298cd0;
        case 0x298cd4u: goto label_298cd4;
        case 0x298cd8u: goto label_298cd8;
        case 0x298cdcu: goto label_298cdc;
        default: return;
    }

label_298510:
    // 0x298510: 0x214bd  .word       0x000214BD                   # INVALID     $zero, $v0, 0x14BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298510u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x298510 raw=0x000214BD");
 /* MITIGATED */
label_298514:
    // 0x298514: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298514u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298518:
    // 0x298518: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298518u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29851c:
    // 0x29851c: 0x0  nop
    ctx->pc = 0x29851cu;
    // NOP
label_298520:
    // 0x298520: 0x214c1  .word       0x000214C1                   # INVALID     $zero, $v0, 0x14C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298520u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298520 raw=0x000214C1");
 /* MITIGATED */
label_298524:
    // 0x298524: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298524u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298524 raw=0x00000001");
 /* MITIGATED */
label_298528:
    // 0x298528: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298528u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29852c:
    // 0x29852c: 0x0  nop
    ctx->pc = 0x29852cu;
    // NOP
label_298530:
    // 0x298530: 0x214c2  srl         $v0, $v0, 19
    ctx->pc = 0x298530u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 19));
label_298534:
    // 0x298534: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298534u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298534 raw=0x00000001");
 /* MITIGATED */
label_298538:
    // 0x298538: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298538u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29853c:
    // 0x29853c: 0x0  nop
    ctx->pc = 0x29853cu;
    // NOP
label_298540:
    // 0x298540: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x298540u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
label_298544:
    // 0x298544: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298544u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298548:
    // 0x298548: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298548u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29854c:
    // 0x29854c: 0x0  nop
    ctx->pc = 0x29854cu;
    // NOP
label_298550:
    // 0x298550: 0x214c7  .word       0x000214C7                   # srav        $v0, $v0, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298550u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_298554:
    // 0x298554: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298554u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298558:
    // 0x298558: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298558u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29855c:
    // 0x29855c: 0x0  nop
    ctx->pc = 0x29855cu;
    // NOP
label_298560:
    // 0x298560: 0x214cb  .word       0x000214CB                   # movn        $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298560u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_298564:
    // 0x298564: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298564u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298564 raw=0x00000001");
 /* MITIGATED */
label_298568:
    // 0x298568: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298568u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29856c:
    // 0x29856c: 0x0  nop
    ctx->pc = 0x29856cu;
    // NOP
label_298570:
    // 0x298570: 0x214cc  .word       0x000214CC                   # syscall     83 # 00020000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298570u;
    ctx->pc = 0x298574u;
runtime->handleSyscall(rdram, ctx, 0x853u);
label_298574:
    // 0x298574: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298574u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298574 raw=0x00000001");
 /* MITIGATED */
label_298578:
    // 0x298578: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298578u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29857c:
    // 0x29857c: 0x0  nop
    ctx->pc = 0x29857cu;
    // NOP
label_298580:
    // 0x298580: 0x214cd  break       2, 83
    ctx->pc = 0x298580u;
    runtime->handleBreak(rdram, ctx);
label_298584:
    // 0x298584: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298584u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298588:
    // 0x298588: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298588u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29858c:
    // 0x29858c: 0x0  nop
    ctx->pc = 0x29858cu;
    // NOP
label_298590:
    // 0x298590: 0x214d1  .word       0x000214D1                   # mthi        $zero # 000214C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298590u;
    ctx->hi = GPR_U64(ctx, 0);
label_298594:
    // 0x298594: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298594u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298598:
    // 0x298598: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298598u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29859c:
    // 0x29859c: 0x0  nop
    ctx->pc = 0x29859cu;
    // NOP
label_2985a0:
    // 0x2985a0: 0x214d5  .word       0x000214D5                   # INVALID     $zero, $v0, 0x14D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2985A0 raw=0x000214D5");
 /* MITIGATED */
label_2985a4:
    // 0x2985a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2985A4 raw=0x00000001");
 /* MITIGATED */
label_2985a8:
    // 0x2985a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2985a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2985ac:
    // 0x2985ac: 0x0  nop
    ctx->pc = 0x2985acu;
    // NOP
label_2985b0:
    // 0x2985b0: 0x214d6  .word       0x000214D6                   # dsrlv       $v0, $v0, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_2985b4:
    // 0x2985b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2985B4 raw=0x00000001");
 /* MITIGATED */
label_2985b8:
    // 0x2985b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2985b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2985bc:
    // 0x2985bc: 0x0  nop
    ctx->pc = 0x2985bcu;
    // NOP
label_2985c0:
    // 0x2985c0: 0x214d7  .word       0x000214D7                   # dsrav       $v0, $v0, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_2985c4:
    // 0x2985c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2985c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2985c8:
    // 0x2985c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2985cc:
    // 0x2985cc: 0x0  nop
    ctx->pc = 0x2985ccu;
    // NOP
label_2985d0:
    // 0x2985d0: 0x214db  .word       0x000214DB                   # divu        $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985d0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2985d4:
    // 0x2985d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2985d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2985d8:
    // 0x2985d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2985dc:
    // 0x2985dc: 0x0  nop
    ctx->pc = 0x2985dcu;
    // NOP
label_2985e0:
    // 0x2985e0: 0x214df  .word       0x000214DF                   # ddivu       $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2985E0 raw=0x000214DF");
 /* MITIGATED */
label_2985e4:
    // 0x2985e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2985E4 raw=0x00000001");
 /* MITIGATED */
label_2985e8:
    // 0x2985e8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2985ec:
    // 0x2985ec: 0x0  nop
    ctx->pc = 0x2985ecu;
    // NOP
label_2985f0:
    // 0x2985f0: 0x214e0  .word       0x000214E0                   # add         $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2985f4:
    // 0x2985f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2985F4 raw=0x00000001");
 /* MITIGATED */
label_2985f8:
    // 0x2985f8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2985f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2985fc:
    // 0x2985fc: 0x0  nop
    ctx->pc = 0x2985fcu;
    // NOP
label_298600:
    // 0x298600: 0x214e1  .word       0x000214E1                   # addu        $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_298604:
    // 0x298604: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298604u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298608:
    // 0x298608: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298608u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29860c:
    // 0x29860c: 0x0  nop
    ctx->pc = 0x29860cu;
    // NOP
label_298610:
    // 0x298610: 0x214e5  .word       0x000214E5                   # or          $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_298614:
    // 0x298614: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298614u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298618:
    // 0x298618: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298618u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29861c:
    // 0x29861c: 0x0  nop
    ctx->pc = 0x29861cu;
    // NOP
label_298620:
    // 0x298620: 0x214e9  .word       0x000214E9                   # mtsa        $zero # 000214C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x298620u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_298624:
    // 0x298624: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298624u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298624 raw=0x00000001");
 /* MITIGATED */
label_298628:
    // 0x298628: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298628u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29862c:
    // 0x29862c: 0x0  nop
    ctx->pc = 0x29862cu;
    // NOP
label_298630:
    // 0x298630: 0x214ea  .word       0x000214EA                   # slt         $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_298634:
    // 0x298634: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298634u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298634 raw=0x00000001");
 /* MITIGATED */
label_298638:
    // 0x298638: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298638u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29863c:
    // 0x29863c: 0x0  nop
    ctx->pc = 0x29863cu;
    // NOP
label_298640:
    // 0x298640: 0x214eb  .word       0x000214EB                   # sltu        $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_298644:
    // 0x298644: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298644u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298648:
    // 0x298648: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298648u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29864c:
    // 0x29864c: 0x0  nop
    ctx->pc = 0x29864cu;
    // NOP
label_298650:
    // 0x298650: 0x214ef  .word       0x000214EF                   # dsubu       $v0, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_298654:
    // 0x298654: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298654u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298658:
    // 0x298658: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298658u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29865c:
    // 0x29865c: 0x0  nop
    ctx->pc = 0x29865cu;
    // NOP
label_298660:
    // 0x298660: 0x214f3  tltu        $zero, $v0, 83
    ctx->pc = 0x298660u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298664:
    // 0x298664: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298664u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298664 raw=0x00000001");
 /* MITIGATED */
label_298668:
    // 0x298668: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298668u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29866c:
    // 0x29866c: 0x0  nop
    ctx->pc = 0x29866cu;
    // NOP
label_298670:
    // 0x298670: 0x214f4  teq         $zero, $v0, 83
    ctx->pc = 0x298670u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298674:
    // 0x298674: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298674u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298674 raw=0x00000001");
 /* MITIGATED */
label_298678:
    // 0x298678: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298678u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29867c:
    // 0x29867c: 0x0  nop
    ctx->pc = 0x29867cu;
    // NOP
label_298680:
    // 0x298680: 0x214f5  .word       0x000214F5                   # INVALID     $zero, $v0, 0x14F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298680u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x298680 raw=0x000214F5");
 /* MITIGATED */
label_298684:
    // 0x298684: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298684u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298688:
    // 0x298688: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298688u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29868c:
    // 0x29868c: 0x0  nop
    ctx->pc = 0x29868cu;
    // NOP
label_298690:
    // 0x298690: 0x214f9  .word       0x000214F9                   # INVALID     $zero, $v0, 0x14F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298690u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x298690 raw=0x000214F9");
 /* MITIGATED */
label_298694:
    // 0x298694: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298694u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298698:
    // 0x298698: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298698u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29869c:
    // 0x29869c: 0x0  nop
    ctx->pc = 0x29869cu;
    // NOP
label_2986a0:
    // 0x2986a0: 0x214fd  .word       0x000214FD                   # INVALID     $zero, $v0, 0x14FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2986A0 raw=0x000214FD");
 /* MITIGATED */
label_2986a4:
    // 0x2986a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2986A4 raw=0x00000001");
 /* MITIGATED */
label_2986a8:
    // 0x2986a8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2986ac:
    // 0x2986ac: 0x0  nop
    ctx->pc = 0x2986acu;
    // NOP
label_2986b0:
    // 0x2986b0: 0x214fe  dsrl32      $v0, $v0, 19
    ctx->pc = 0x2986b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 19));
label_2986b4:
    // 0x2986b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2986B4 raw=0x00000001");
 /* MITIGATED */
label_2986b8:
    // 0x2986b8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2986bc:
    // 0x2986bc: 0x0  nop
    ctx->pc = 0x2986bcu;
    // NOP
label_2986c0:
    // 0x2986c0: 0x214ff  dsra32      $v0, $v0, 19
    ctx->pc = 0x2986c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 19));
label_2986c4:
    // 0x2986c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2986c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2986c8:
    // 0x2986c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2986cc:
    // 0x2986cc: 0x0  nop
    ctx->pc = 0x2986ccu;
    // NOP
label_2986d0:
    // 0x2986d0: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x2986d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
label_2986d4:
    // 0x2986d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2986d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2986d8:
    // 0x2986d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2986dc:
    // 0x2986dc: 0x0  nop
    ctx->pc = 0x2986dcu;
    // NOP
label_2986e0:
    // 0x2986e0: 0x21507  .word       0x00021507                   # srav        $v0, $v0, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_2986e4:
    // 0x2986e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2986E4 raw=0x00000001");
 /* MITIGATED */
label_2986e8:
    // 0x2986e8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2986ec:
    // 0x2986ec: 0x0  nop
    ctx->pc = 0x2986ecu;
    // NOP
label_2986f0:
    // 0x2986f0: 0x21508  .word       0x00021508                   # jr          $zero # 00021500 <InstrIdType: CPU_SPECIAL>
label_2986f4:
    if (ctx->pc == 0x2986F4u) {
        ctx->pc = 0x2986F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986F0u;
        // 0x2986f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2986F4 raw=0x00000001");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2986F8u;
        goto label_2986f8;
    }
    ctx->pc = 0x2986F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2986F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986F0u;
        // 0x2986f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2986F4 raw=0x00000001");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2986F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2986F8u;
label_2986f8:
    // 0x2986f8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2986f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2986fc:
    // 0x2986fc: 0x0  nop
    ctx->pc = 0x2986fcu;
    // NOP
label_298700:
    // 0x298700: 0x21509  .word       0x00021509                   # jalr        $v0, $zero # 00020500 <InstrIdType: CPU_SPECIAL>
label_298704:
    if (ctx->pc == 0x298704u) {
        ctx->pc = 0x298704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298700u;
        // 0x298704: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298708u;
        goto label_298708;
    }
    ctx->pc = 0x298700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 2, 0x298708u);
        ctx->pc = 0x298704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298700u;
        // 0x298704: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298700u, 0x298708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298708u;
label_298708:
    // 0x298708: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298708u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29870c:
    // 0x29870c: 0x0  nop
    ctx->pc = 0x29870cu;
    // NOP
label_298710:
    // 0x298710: 0x2150d  break       2, 84
    ctx->pc = 0x298710u;
    runtime->handleBreak(rdram, ctx);
label_298714:
    // 0x298714: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298714u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298718:
    // 0x298718: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298718u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29871c:
    // 0x29871c: 0x0  nop
    ctx->pc = 0x29871cu;
    // NOP
label_298720:
    // 0x298720: 0x21511  .word       0x00021511                   # mthi        $zero # 00021500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298720u;
    ctx->hi = GPR_U64(ctx, 0);
label_298724:
    // 0x298724: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298724u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298724 raw=0x00000001");
 /* MITIGATED */
label_298728:
    // 0x298728: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298728u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29872c:
    // 0x29872c: 0x0  nop
    ctx->pc = 0x29872cu;
    // NOP
label_298730:
    // 0x298730: 0x21512  .word       0x00021512                   # mflo        $v0 # 00020500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298730u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_298734:
    // 0x298734: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298734u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298734 raw=0x00000001");
 /* MITIGATED */
label_298738:
    // 0x298738: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298738u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29873c:
    // 0x29873c: 0x0  nop
    ctx->pc = 0x29873cu;
    // NOP
label_298740:
    // 0x298740: 0x21513  .word       0x00021513                   # mtlo        $zero # 00021500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298740u;
    ctx->lo = GPR_U64(ctx, 0);
label_298744:
    // 0x298744: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298744u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298748:
    // 0x298748: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298748u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29874c:
    // 0x29874c: 0x0  nop
    ctx->pc = 0x29874cu;
    // NOP
label_298750:
    // 0x298750: 0x21517  .word       0x00021517                   # dsrav       $v0, $v0, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298750u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_298754:
    // 0x298754: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298754u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298758:
    // 0x298758: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298758u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29875c:
    // 0x29875c: 0x0  nop
    ctx->pc = 0x29875cu;
    // NOP
label_298760:
    // 0x298760: 0x2151b  .word       0x0002151B                   # divu        $v0, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298760u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_298764:
    // 0x298764: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298764u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298764 raw=0x00000001");
 /* MITIGATED */
label_298768:
    // 0x298768: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298768u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29876c:
    // 0x29876c: 0x0  nop
    ctx->pc = 0x29876cu;
    // NOP
label_298770:
    // 0x298770: 0x2151c  .word       0x0002151C                   # dmult       $zero, $v0 # 00001500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298770u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x298770 raw=0x0002151C");
 /* MITIGATED */
label_298774:
    // 0x298774: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298774u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298774 raw=0x00000001");
 /* MITIGATED */
label_298778:
    // 0x298778: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298778u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29877c:
    // 0x29877c: 0x0  nop
    ctx->pc = 0x29877cu;
    // NOP
label_298780:
    // 0x298780: 0x2151d  .word       0x0002151D                   # dmultu      $zero, $v0 # 00001500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298780u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x298780 raw=0x0002151D");
 /* MITIGATED */
label_298784:
    // 0x298784: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298784u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298788:
    // 0x298788: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298788u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29878c:
    // 0x29878c: 0x0  nop
    ctx->pc = 0x29878cu;
    // NOP
label_298790:
    // 0x298790: 0x21521  .word       0x00021521                   # addu        $v0, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_298794:
    // 0x298794: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298794u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298798:
    // 0x298798: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298798u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29879c:
    // 0x29879c: 0x0  nop
    ctx->pc = 0x29879cu;
    // NOP
label_2987a0:
    // 0x2987a0: 0x21525  .word       0x00021525                   # or          $v0, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_2987a4:
    // 0x2987a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2987A4 raw=0x00000001");
 /* MITIGATED */
label_2987a8:
    // 0x2987a8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987a8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2987ac:
    // 0x2987ac: 0x0  nop
    ctx->pc = 0x2987acu;
    // NOP
label_2987b0:
    // 0x2987b0: 0x21526  .word       0x00021526                   # xor         $v0, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_2987b4:
    // 0x2987b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2987B4 raw=0x00000001");
 /* MITIGATED */
label_2987b8:
    // 0x2987b8: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2987bc:
    // 0x2987bc: 0x0  nop
    ctx->pc = 0x2987bcu;
    // NOP
label_2987c0:
    // 0x2987c0: 0x21527  .word       0x00021527                   # nor         $v0, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_2987c4:
    // 0x2987c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2987c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2987c8:
    // 0x2987c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2987cc:
    // 0x2987cc: 0x0  nop
    ctx->pc = 0x2987ccu;
    // NOP
label_2987d0:
    // 0x2987d0: 0x2152b  .word       0x0002152B                   # sltu        $v0, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2987d4:
    // 0x2987d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x2987d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2987d8:
    // 0x2987d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_2987dc:
    // 0x2987dc: 0x0  nop
    ctx->pc = 0x2987dcu;
    // NOP
label_2987e0:
    // 0x2987e0: 0x2152f  .word       0x0002152F                   # dsubu       $v0, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_2987e4:
    // 0x2987e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2987E4 raw=0x00000001");
 /* MITIGATED */
label_2987e8:
    // 0x2987e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2987e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2987ec:
    // 0x2987ec: 0x0  nop
    ctx->pc = 0x2987ecu;
    // NOP
label_2987f0:
    // 0x2987f0: 0x21530  tge         $zero, $v0, 84
    ctx->pc = 0x2987f0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2987f4:
    // 0x2987f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2987f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2987F4 raw=0x00000001");
 /* MITIGATED */
label_2987f8:
    // 0x2987f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x2987f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2987fc:
    // 0x2987fc: 0x0  nop
    ctx->pc = 0x2987fcu;
    // NOP
label_298800:
    // 0x298800: 0x21531  tgeu        $zero, $v0, 84
    ctx->pc = 0x298800u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298804:
    // 0x298804: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298804u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298808:
    // 0x298808: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298808u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29880c:
    // 0x29880c: 0x0  nop
    ctx->pc = 0x29880cu;
    // NOP
label_298810:
    // 0x298810: 0x21535  .word       0x00021535                   # INVALID     $zero, $v0, 0x1535 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298810u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x298810 raw=0x00021535");
 /* MITIGATED */
label_298814:
    // 0x298814: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298814u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298818:
    // 0x298818: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298818u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29881c:
    // 0x29881c: 0x0  nop
    ctx->pc = 0x29881cu;
    // NOP
label_298820:
    // 0x298820: 0x21539  .word       0x00021539                   # INVALID     $zero, $v0, 0x1539 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298820u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x298820 raw=0x00021539");
 /* MITIGATED */
label_298824:
    // 0x298824: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298824u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298824 raw=0x00000001");
 /* MITIGATED */
label_298828:
    // 0x298828: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298828u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29882c:
    // 0x29882c: 0x0  nop
    ctx->pc = 0x29882cu;
    // NOP
label_298830:
    // 0x298830: 0x2153a  dsrl        $v0, $v0, 20
    ctx->pc = 0x298830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 20);
label_298834:
    // 0x298834: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298834u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298834 raw=0x00000001");
 /* MITIGATED */
label_298838:
    // 0x298838: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x298838u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29883c:
    // 0x29883c: 0x0  nop
    ctx->pc = 0x29883cu;
    // NOP
label_298840:
    // 0x298840: 0x2153b  dsra        $v0, $v0, 20
    ctx->pc = 0x298840u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 20);
label_298844:
    // 0x298844: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298844u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298848:
    // 0x298848: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298848u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29884c:
    // 0x29884c: 0x0  nop
    ctx->pc = 0x29884cu;
    // NOP
label_298850:
    // 0x298850: 0x2153f  dsra32      $v0, $v0, 20
    ctx->pc = 0x298850u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 20));
label_298854:
    // 0x298854: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x298854u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298858:
    // 0x298858: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298858u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29885c:
    // 0x29885c: 0x0  nop
    ctx->pc = 0x29885cu;
    // NOP
label_298860:
    // 0x298860: 0x21543  sra         $v0, $v0, 21
    ctx->pc = 0x298860u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 21));
label_298864:
    // 0x298864: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298864u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298864 raw=0x00000001");
 /* MITIGATED */
label_298868:
    // 0x298868: 0x4bb  dsra        $zero, $zero, 18
    ctx->pc = 0x298868u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 18);
label_29886c:
    // 0x29886c: 0x0  nop
    ctx->pc = 0x29886cu;
    // NOP
label_298870:
    // 0x298870: 0x21544  .word       0x00021544                   # sllv        $v0, $v0, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_298874:
    // 0x298874: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298874u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298874 raw=0x00000001");
 /* MITIGATED */
label_298878:
    // 0x298878: 0x7a1  .word       0x000007A1                   # addu        $zero, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298878u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29887c:
    // 0x29887c: 0x0  nop
    ctx->pc = 0x29887cu;
    // NOP
label_298880:
    // 0x298880: 0x21545  .word       0x00021545                   # INVALID     $zero, $v0, 0x1545 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298880u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x298880 raw=0x00021545");
 /* MITIGATED */
label_298884:
    // 0x298884: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298884u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298884 raw=0x00000001");
 /* MITIGATED */
label_298888:
    // 0x298888: 0x1cc  syscall     7
    ctx->pc = 0x298888u;
    ctx->pc = 0x29888Cu;
runtime->handleSyscall(rdram, ctx, 0x7u);
label_29888c:
    // 0x29888c: 0x0  nop
    ctx->pc = 0x29888cu;
    // NOP
label_298890:
    // 0x298890: 0x21546  .word       0x00021546                   # srlv        $v0, $v0, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298890u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_298894:
    // 0x298894: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298894u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298894 raw=0x00000001");
 /* MITIGATED */
label_298898:
    // 0x298898: 0x303  sra         $zero, $zero, 12
    ctx->pc = 0x298898u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 12));
label_29889c:
    // 0x29889c: 0x0  nop
    ctx->pc = 0x29889cu;
    // NOP
label_2988a0:
    // 0x2988a0: 0x21547  .word       0x00021547                   # srav        $v0, $v0, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2988a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_2988a4:
    // 0x2988a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2988a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2988A4 raw=0x00000001");
 /* MITIGATED */
label_2988a8:
    // 0x2988a8: 0x47c  dsll32      $zero, $zero, 17
    ctx->pc = 0x2988a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 17));
label_2988ac:
    // 0x2988ac: 0x0  nop
    ctx->pc = 0x2988acu;
    // NOP
label_2988b0:
    // 0x2988b0: 0x21548  .word       0x00021548                   # jr          $zero # 00021540 <InstrIdType: CPU_SPECIAL>
label_2988b4:
    if (ctx->pc == 0x2988B4u) {
        ctx->pc = 0x2988B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988B0u;
        // 0x2988b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2988B4 raw=0x00000001");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2988B8u;
        goto label_2988b8;
    }
    ctx->pc = 0x2988B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2988B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988B0u;
        // 0x2988b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2988B4 raw=0x00000001");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2988B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2988B8u;
label_2988b8:
    // 0x2988b8: 0x59e  .word       0x0000059E                   # ddiv        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2988b8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2988B8 raw=0x0000059E");
 /* MITIGATED */
label_2988bc:
    // 0x2988bc: 0x0  nop
    ctx->pc = 0x2988bcu;
    // NOP
label_2988c0:
    // 0x2988c0: 0x21549  .word       0x00021549                   # jalr        $v0, $zero # 00020540 <InstrIdType: CPU_SPECIAL>
label_2988c4:
    if (ctx->pc == 0x2988C4u) {
        ctx->pc = 0x2988C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988C0u;
        // 0x2988c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2988C4 raw=0x00000001");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2988C8u;
        goto label_2988c8;
    }
    ctx->pc = 0x2988C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 2, 0x2988C8u);
        ctx->pc = 0x2988C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2988C0u;
        // 0x2988c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2988C4 raw=0x00000001");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2988C0u, 0x2988C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2988C8u;
label_2988c8:
    // 0x2988c8: 0x4fe  dsrl32      $zero, $zero, 19
    ctx->pc = 0x2988c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 19));
label_2988cc:
    // 0x2988cc: 0x0  nop
    ctx->pc = 0x2988ccu;
    // NOP
label_2988d0:
    // 0x2988d0: 0x2154a  .word       0x0002154A                   # movz        $v0, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2988d0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2988d4:
    // 0x2988d4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2988d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2988d8:
    // 0x2988d8: 0xa8b  .word       0x00000A8B                   # movn        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2988d8u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_2988dc:
    // 0x2988dc: 0x0  nop
    ctx->pc = 0x2988dcu;
    // NOP
label_2988e0:
    // 0x2988e0: 0x2154c  .word       0x0002154C                   # syscall     85 # 00020000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2988e0u;
    ctx->pc = 0x2988E4u;
runtime->handleSyscall(rdram, ctx, 0x855u);
label_2988e4:
    // 0x2988e4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2988e4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2988e8:
    // 0x2988e8: 0x82c  dadd        $at, $zero, $zero
    ctx->pc = 0x2988e8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2988ec:
    // 0x2988ec: 0x0  nop
    ctx->pc = 0x2988ecu;
    // NOP
label_2988f0:
    // 0x2988f0: 0x2154e  .word       0x0002154E                   # INVALID     $zero, $v0, 0x154E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2988f0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2988F0 raw=0x0002154E");
 /* MITIGATED */
label_2988f4:
    // 0x2988f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2988f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2988F4 raw=0x00000001");
 /* MITIGATED */
label_2988f8:
    // 0x2988f8: 0x289  .word       0x00000289                   # jalr        $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_2988fc:
    if (ctx->pc == 0x2988FCu) {
        ctx->pc = 0x298900u;
        goto label_298900;
    }
    ctx->pc = 0x2988F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2988F8u, 0x298900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298900u;
label_298900:
    // 0x298900: 0x2154f  .word       0x0002154F                   # sync.p # 00021000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298900u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_298904:
    // 0x298904: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298904u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298904 raw=0x00000001");
 /* MITIGATED */
label_298908:
    // 0x298908: 0x6e9  .word       0x000006E9                   # mtsa        $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x298908u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29890c:
    // 0x29890c: 0x0  nop
    ctx->pc = 0x29890cu;
    // NOP
label_298910:
    // 0x298910: 0x21550  .word       0x00021550                   # mfhi        $v0 # 00020540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298910u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_298914:
    // 0x298914: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298914u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298914 raw=0x00000001");
 /* MITIGATED */
label_298918:
    // 0x298918: 0x744  .word       0x00000744                   # sllv        $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298918u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29891c:
    // 0x29891c: 0x0  nop
    ctx->pc = 0x29891cu;
    // NOP
label_298920:
    // 0x298920: 0x21551  .word       0x00021551                   # mthi        $zero # 00021540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298920u;
    ctx->hi = GPR_U64(ctx, 0);
label_298924:
    // 0x298924: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298924u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298924 raw=0x00000001");
 /* MITIGATED */
label_298928:
    // 0x298928: 0x425  .word       0x00000425                   # move        $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298928u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29892c:
    // 0x29892c: 0x0  nop
    ctx->pc = 0x29892cu;
    // NOP
label_298930:
    // 0x298930: 0x21552  .word       0x00021552                   # mflo        $v0 # 00020540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298930u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_298934:
    // 0x298934: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298934u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298934 raw=0x00000001");
 /* MITIGATED */
label_298938:
    // 0x298938: 0x40d  break       0, 16
    ctx->pc = 0x298938u;
    runtime->handleBreak(rdram, ctx);
label_29893c:
    // 0x29893c: 0x0  nop
    ctx->pc = 0x29893cu;
    // NOP
label_298940:
    // 0x298940: 0x21553  .word       0x00021553                   # mtlo        $zero # 00021540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298940u;
    ctx->lo = GPR_U64(ctx, 0);
label_298944:
    // 0x298944: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x298944u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_298948:
    // 0x298948: 0x903  sra         $at, $zero, 4
    ctx->pc = 0x298948u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 4));
label_29894c:
    // 0x29894c: 0x0  nop
    ctx->pc = 0x29894cu;
    // NOP
label_298950:
    // 0x298950: 0x21555  .word       0x00021555                   # INVALID     $zero, $v0, 0x1555 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298950u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x298950 raw=0x00021555");
 /* MITIGATED */
label_298954:
    // 0x298954: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x298954u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_298958:
    // 0x298958: 0x884  .word       0x00000884                   # sllv        $at, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298958u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29895c:
    // 0x29895c: 0x0  nop
    ctx->pc = 0x29895cu;
    // NOP
label_298960:
    // 0x298960: 0x21557  .word       0x00021557                   # dsrav       $v0, $v0, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298960u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_298964:
    // 0x298964: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x298964u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_298968:
    // 0x298968: 0x8a7  .word       0x000008A7                   # not         $at, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298968u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29896c:
    // 0x29896c: 0x0  nop
    ctx->pc = 0x29896cu;
    // NOP
label_298970:
    // 0x298970: 0x21559  .word       0x00021559                   # multu       $zero, $v0 # 00001540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298970u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_298974:
    // 0x298974: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298974u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298974 raw=0x00000001");
 /* MITIGATED */
label_298978:
    // 0x298978: 0x433  tltu        $zero, $zero, 16
    ctx->pc = 0x298978u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29897c:
    // 0x29897c: 0x0  nop
    ctx->pc = 0x29897cu;
    // NOP
label_298980:
    // 0x298980: 0x2155a  .word       0x0002155A                   # div         $v0, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298980u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_298984:
    // 0x298984: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x298984u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_298988:
    // 0x298988: 0x815  .word       0x00000815                   # INVALID     $zero, $zero, 0x815 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298988u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x298988 raw=0x00000815");
 /* MITIGATED */
label_29898c:
    // 0x29898c: 0x0  nop
    ctx->pc = 0x29898cu;
    // NOP
label_298990:
    // 0x298990: 0x2155c  .word       0x0002155C                   # dmult       $zero, $v0 # 00001540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298990u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x298990 raw=0x0002155C");
 /* MITIGATED */
label_298994:
    // 0x298994: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x298994u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_298998:
    // 0x298998: 0x85f  .word       0x0000085F                   # ddivu       $at, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298998u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x298998 raw=0x0000085F");
 /* MITIGATED */
label_29899c:
    // 0x29899c: 0x0  nop
    ctx->pc = 0x29899cu;
    // NOP
label_2989a0:
    // 0x2989a0: 0x2155e  .word       0x0002155E                   # ddiv        $v0, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2989a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2989A0 raw=0x0002155E");
 /* MITIGATED */
label_2989a4:
    // 0x2989a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2989a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2989A4 raw=0x00000001");
 /* MITIGATED */
label_2989a8:
    // 0x2989a8: 0xf6  tne         $zero, $zero, 3
    ctx->pc = 0x2989a8u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2989ac:
    // 0x2989ac: 0x0  nop
    ctx->pc = 0x2989acu;
    // NOP
label_2989b0:
    // 0x2989b0: 0x2155f  .word       0x0002155F                   # ddivu       $v0, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2989b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2989B0 raw=0x0002155F");
 /* MITIGATED */
label_2989b4:
    // 0x2989b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2989b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2989B4 raw=0x00000001");
 /* MITIGATED */
label_2989b8:
    // 0x2989b8: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x2989b8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2989B8 raw=0x0000001F");
 /* MITIGATED */
label_2989bc:
    // 0x2989bc: 0x0  nop
    ctx->pc = 0x2989bcu;
    // NOP
label_2989c0:
    // 0x2989c0: 0x21560  .word       0x00021560                   # add         $v0, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2989c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2989c4:
    // 0x2989c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2989c4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2989C4 raw=0x00000001");
 /* MITIGATED */
label_2989c8:
    // 0x2989c8: 0x5e  .word       0x0000005E                   # ddiv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2989c8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2989C8 raw=0x0000005E");
 /* MITIGATED */
label_2989cc:
    // 0x2989cc: 0x0  nop
    ctx->pc = 0x2989ccu;
    // NOP
label_2989d0:
    // 0x2989d0: 0x21561  .word       0x00021561                   # addu        $v0, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2989d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2989d4:
    // 0x2989d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2989d4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2989D4 raw=0x00000001");
 /* MITIGATED */
label_2989d8:
    // 0x2989d8: 0x9  jalr        $zero, $zero
label_2989dc:
    if (ctx->pc == 0x2989DCu) {
        ctx->pc = 0x2989E0u;
        goto label_2989e0;
    }
    ctx->pc = 0x2989D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2989D8u, 0x2989E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2989E0u;
label_2989e0:
    // 0x2989e0: 0x21562  .word       0x00021562                   # neg         $v0, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2989e0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_2989e4:
    // 0x2989e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2989e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2989E4 raw=0x00000001");
 /* MITIGATED */
label_2989e8:
    // 0x2989e8: 0x9  jalr        $zero, $zero
label_2989ec:
    if (ctx->pc == 0x2989ECu) {
        ctx->pc = 0x2989F0u;
        goto label_2989f0;
    }
    ctx->pc = 0x2989E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2989E8u, 0x2989F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2989F0u;
label_2989f0:
    // 0x2989f0: 0x21563  .word       0x00021563                   # negu        $v0, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2989f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2989f4:
    // 0x2989f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2989f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2989F4 raw=0x00000001");
 /* MITIGATED */
label_2989f8:
    // 0x2989f8: 0x9  jalr        $zero, $zero
label_2989fc:
    if (ctx->pc == 0x2989FCu) {
        ctx->pc = 0x298A00u;
        goto label_298a00;
    }
    ctx->pc = 0x2989F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2989F8u, 0x298A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298A00u;
label_298a00:
    // 0x298a00: 0x21564  .word       0x00021564                   # and         $v0, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_298a04:
    // 0x298a04: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a04u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298A04 raw=0x00000001");
 /* MITIGATED */
label_298a08:
    // 0x298a08: 0x9  jalr        $zero, $zero
label_298a0c:
    if (ctx->pc == 0x298A0Cu) {
        ctx->pc = 0x298A10u;
        goto label_298a10;
    }
    ctx->pc = 0x298A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298A08u, 0x298A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298A10u;
label_298a10:
    // 0x298a10: 0x21565  .word       0x00021565                   # or          $v0, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_298a14:
    // 0x298a14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a14u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298A14 raw=0x00000001");
 /* MITIGATED */
label_298a18:
    // 0x298a18: 0x9  jalr        $zero, $zero
label_298a1c:
    if (ctx->pc == 0x298A1Cu) {
        ctx->pc = 0x298A20u;
        goto label_298a20;
    }
    ctx->pc = 0x298A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298A18u, 0x298A20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298A20u;
label_298a20:
    // 0x298a20: 0x21566  .word       0x00021566                   # xor         $v0, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_298a24:
    // 0x298a24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a24u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298A24 raw=0x00000001");
 /* MITIGATED */
label_298a28:
    // 0x298a28: 0x9  jalr        $zero, $zero
label_298a2c:
    if (ctx->pc == 0x298A2Cu) {
        ctx->pc = 0x298A30u;
        goto label_298a30;
    }
    ctx->pc = 0x298A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298A28u, 0x298A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298A30u;
label_298a30:
    // 0x298a30: 0x21567  .word       0x00021567                   # nor         $v0, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a30u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_298a34:
    // 0x298a34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a34u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298A34 raw=0x00000001");
 /* MITIGATED */
label_298a38:
    // 0x298a38: 0x9  jalr        $zero, $zero
label_298a3c:
    if (ctx->pc == 0x298A3Cu) {
        ctx->pc = 0x298A40u;
        goto label_298a40;
    }
    ctx->pc = 0x298A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298A38u, 0x298A40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298A40u;
label_298a40:
    // 0x298a40: 0x21568  .word       0x00021568                   # mfsa        $v0 # 00020540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x298a40u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_298a44:
    // 0x298a44: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x298a44u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_298a48:
    // 0x298a48: 0xa40  sll         $at, $zero, 9
    ctx->pc = 0x298a48u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_298a4c:
    // 0x298a4c: 0x0  nop
    ctx->pc = 0x298a4cu;
    // NOP
label_298a50:
    // 0x298a50: 0x2156a  .word       0x0002156A                   # slt         $v0, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_298a54:
    // 0x298a54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a54u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298A54 raw=0x00000001");
 /* MITIGATED */
label_298a58:
    // 0x298a58: 0x9  jalr        $zero, $zero
label_298a5c:
    if (ctx->pc == 0x298A5Cu) {
        ctx->pc = 0x298A60u;
        goto label_298a60;
    }
    ctx->pc = 0x298A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298A58u, 0x298A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298A60u;
label_298a60:
    // 0x298a60: 0x2156b  .word       0x0002156B                   # sltu        $v0, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_298a64:
    // 0x298a64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a64u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298A64 raw=0x00000001");
 /* MITIGATED */
label_298a68:
    // 0x298a68: 0x9  jalr        $zero, $zero
label_298a6c:
    if (ctx->pc == 0x298A6Cu) {
        ctx->pc = 0x298A70u;
        goto label_298a70;
    }
    ctx->pc = 0x298A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298A68u, 0x298A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298A70u;
label_298a70:
    // 0x298a70: 0x2156c  .word       0x0002156C                   # dadd        $v0, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_298a74:
    // 0x298a74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a74u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298A74 raw=0x00000001");
 /* MITIGATED */
label_298a78:
    // 0x298a78: 0x9  jalr        $zero, $zero
label_298a7c:
    if (ctx->pc == 0x298A7Cu) {
        ctx->pc = 0x298A80u;
        goto label_298a80;
    }
    ctx->pc = 0x298A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298A78u, 0x298A80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298A80u;
label_298a80:
    // 0x298a80: 0x2156d  .word       0x0002156D                   # daddu       $v0, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_298a84:
    // 0x298a84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a84u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298A84 raw=0x00000001");
 /* MITIGATED */
label_298a88:
    // 0x298a88: 0x9  jalr        $zero, $zero
label_298a8c:
    if (ctx->pc == 0x298A8Cu) {
        ctx->pc = 0x298A90u;
        goto label_298a90;
    }
    ctx->pc = 0x298A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298A88u, 0x298A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298A90u;
label_298a90:
    // 0x298a90: 0x2156e  .word       0x0002156E                   # dsub        $v0, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298a90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_298a94:
    // 0x298a94: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x298a94u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_298a98:
    // 0x298a98: 0xafc  dsll32      $at, $zero, 11
    ctx->pc = 0x298a98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 11));
label_298a9c:
    // 0x298a9c: 0x0  nop
    ctx->pc = 0x298a9cu;
    // NOP
label_298aa0:
    // 0x298aa0: 0x21570  tge         $zero, $v0, 85
    ctx->pc = 0x298aa0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298aa4:
    // 0x298aa4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298aa4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298AA4 raw=0x00000001");
 /* MITIGATED */
label_298aa8:
    // 0x298aa8: 0x9  jalr        $zero, $zero
label_298aac:
    if (ctx->pc == 0x298AACu) {
        ctx->pc = 0x298AB0u;
        goto label_298ab0;
    }
    ctx->pc = 0x298AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298AA8u, 0x298AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298AB0u;
label_298ab0:
    // 0x298ab0: 0x21571  tgeu        $zero, $v0, 85
    ctx->pc = 0x298ab0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298ab4:
    // 0x298ab4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ab4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298AB4 raw=0x00000001");
 /* MITIGATED */
label_298ab8:
    // 0x298ab8: 0x9  jalr        $zero, $zero
label_298abc:
    if (ctx->pc == 0x298ABCu) {
        ctx->pc = 0x298AC0u;
        goto label_298ac0;
    }
    ctx->pc = 0x298AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298AB8u, 0x298AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298AC0u;
label_298ac0:
    // 0x298ac0: 0x21572  tlt         $zero, $v0, 85
    ctx->pc = 0x298ac0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298ac4:
    // 0x298ac4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ac4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298AC4 raw=0x00000001");
 /* MITIGATED */
label_298ac8:
    // 0x298ac8: 0x511  .word       0x00000511                   # mthi        $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ac8u;
    ctx->hi = GPR_U64(ctx, 0);
label_298acc:
    // 0x298acc: 0x0  nop
    ctx->pc = 0x298accu;
    // NOP
label_298ad0:
    // 0x298ad0: 0x21573  tltu        $zero, $v0, 85
    ctx->pc = 0x298ad0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298ad4:
    // 0x298ad4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ad4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298AD4 raw=0x00000001");
 /* MITIGATED */
label_298ad8:
    // 0x298ad8: 0x9  jalr        $zero, $zero
label_298adc:
    if (ctx->pc == 0x298ADCu) {
        ctx->pc = 0x298AE0u;
        goto label_298ae0;
    }
    ctx->pc = 0x298AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298AD8u, 0x298AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298AE0u;
label_298ae0:
    // 0x298ae0: 0x21574  teq         $zero, $v0, 85
    ctx->pc = 0x298ae0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298ae4:
    // 0x298ae4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ae4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298AE4 raw=0x00000001");
 /* MITIGATED */
label_298ae8:
    // 0x298ae8: 0x9  jalr        $zero, $zero
label_298aec:
    if (ctx->pc == 0x298AECu) {
        ctx->pc = 0x298AF0u;
        goto label_298af0;
    }
    ctx->pc = 0x298AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298AE8u, 0x298AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298AF0u;
label_298af0:
    // 0x298af0: 0x21575  .word       0x00021575                   # INVALID     $zero, $v0, 0x1575 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298af0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x298AF0 raw=0x00021575");
 /* MITIGATED */
label_298af4:
    // 0x298af4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298af4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298AF4 raw=0x00000001");
 /* MITIGATED */
label_298af8:
    // 0x298af8: 0x9  jalr        $zero, $zero
label_298afc:
    if (ctx->pc == 0x298AFCu) {
        ctx->pc = 0x298B00u;
        goto label_298b00;
    }
    ctx->pc = 0x298AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298AF8u, 0x298B00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298B00u;
label_298b00:
    // 0x298b00: 0x21576  tne         $zero, $v0, 85
    ctx->pc = 0x298b00u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298b04:
    // 0x298b04: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b04u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298B04 raw=0x00000001");
 /* MITIGATED */
label_298b08:
    // 0x298b08: 0x9  jalr        $zero, $zero
label_298b0c:
    if (ctx->pc == 0x298B0Cu) {
        ctx->pc = 0x298B10u;
        goto label_298b10;
    }
    ctx->pc = 0x298B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298B08u, 0x298B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298B10u;
label_298b10:
    // 0x298b10: 0x21577  .word       0x00021577                   # INVALID     $zero, $v0, 0x1577 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b10u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x298B10 raw=0x00021577");
 /* MITIGATED */
label_298b14:
    // 0x298b14: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x298b14u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_298b18:
    // 0x298b18: 0x888  .word       0x00000888                   # jr          $zero # 00000880 <InstrIdType: CPU_SPECIAL>
label_298b1c:
    if (ctx->pc == 0x298B1Cu) {
        ctx->pc = 0x298B20u;
        goto label_298b20;
    }
    ctx->pc = 0x298B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298B18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x298B20u;
label_298b20:
    // 0x298b20: 0x21579  .word       0x00021579                   # INVALID     $zero, $v0, 0x1579 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x298B20 raw=0x00021579");
 /* MITIGATED */
label_298b24:
    // 0x298b24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b24u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298B24 raw=0x00000001");
 /* MITIGATED */
label_298b28:
    // 0x298b28: 0x9  jalr        $zero, $zero
label_298b2c:
    if (ctx->pc == 0x298B2Cu) {
        ctx->pc = 0x298B30u;
        goto label_298b30;
    }
    ctx->pc = 0x298B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298B28u, 0x298B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298B30u;
label_298b30:
    // 0x298b30: 0x2157a  dsrl        $v0, $v0, 21
    ctx->pc = 0x298b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 21);
label_298b34:
    // 0x298b34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b34u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298B34 raw=0x00000001");
 /* MITIGATED */
label_298b38:
    // 0x298b38: 0x9  jalr        $zero, $zero
label_298b3c:
    if (ctx->pc == 0x298B3Cu) {
        ctx->pc = 0x298B40u;
        goto label_298b40;
    }
    ctx->pc = 0x298B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298B38u, 0x298B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298B40u;
label_298b40:
    // 0x298b40: 0x2157b  dsra        $v0, $v0, 21
    ctx->pc = 0x298b40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 21);
label_298b44:
    // 0x298b44: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x298b44u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298b48:
    // 0x298b48: 0x2908  .word       0x00002908                   # jr          $zero # 00002900 <InstrIdType: CPU_SPECIAL>
label_298b4c:
    if (ctx->pc == 0x298B4Cu) {
        ctx->pc = 0x298B50u;
        goto label_298b50;
    }
    ctx->pc = 0x298B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298B48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x298B50u;
label_298b50:
    // 0x298b50: 0x21581  .word       0x00021581                   # INVALID     $zero, $v0, 0x1581 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b50u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298B50 raw=0x00021581");
 /* MITIGATED */
label_298b54:
    // 0x298b54: 0x2c9  .word       0x000002C9                   # jalr        $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
label_298b58:
    if (ctx->pc == 0x298B58u) {
        ctx->pc = 0x298B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B54u;
        // 0x298b58: 0x1643f0  tge         $zero, $s6, 271 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x298B5Cu;
        goto label_298b5c;
    }
    ctx->pc = 0x298B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x298B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B54u;
        // 0x298b58: 0x1643f0  tge         $zero, $s6, 271 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298B54u, 0x298B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298B5Cu;
label_298b5c:
    // 0x298b5c: 0x0  nop
    ctx->pc = 0x298b5cu;
    // NOP
label_298b60:
    // 0x298b60: 0x2184a  .word       0x0002184A                   # movz        $v1, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b60u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_298b64:
    // 0x298b64: 0x133  tltu        $zero, $zero, 4
    ctx->pc = 0x298b64u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298b68:
    // 0x298b68: 0x99310  .word       0x00099310                   # mfhi        $s2 # 00090300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b68u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_298b6c:
    // 0x298b6c: 0x0  nop
    ctx->pc = 0x298b6cu;
    // NOP
label_298b70:
    // 0x298b70: 0x2197d  .word       0x0002197D                   # INVALID     $zero, $v0, 0x197D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x298B70 raw=0x0002197D");
 /* MITIGATED */
label_298b74:
    // 0x298b74: 0x2d5  .word       0x000002D5                   # INVALID     $zero, $zero, 0x2D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b74u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x298B74 raw=0x000002D5");
 /* MITIGATED */
label_298b78:
    // 0x298b78: 0x16a4d0  .word       0x0016A4D0                   # mfhi        $s4 # 001604C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b78u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_298b7c:
    // 0x298b7c: 0x0  nop
    ctx->pc = 0x298b7cu;
    // NOP
label_298b80:
    // 0x298b80: 0x21c52  .word       0x00021C52                   # mflo        $v1 # 00020440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b80u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_298b84:
    // 0x298b84: 0x285c  .word       0x0000285C                   # dmult       $zero, $zero # 00002840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b84u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x298B84 raw=0x0000285C");
 /* MITIGATED */
label_298b88:
    // 0x298b88: 0x142e000  .word       0x0142E000                   # sll         $gp, $v0, 0 # 01400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b88u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_298b8c:
    // 0x298b8c: 0x0  nop
    ctx->pc = 0x298b8cu;
    // NOP
label_298b90:
    // 0x298b90: 0x244ae  .word       0x000244AE                   # dsub        $t0, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_298b94:
    // 0x298b94: 0x2bd  .word       0x000002BD                   # INVALID     $zero, $zero, 0x2BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b94u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x298B94 raw=0x000002BD");
 /* MITIGATED */
label_298b98:
    // 0x298b98: 0x15e760  .word       0x0015E760                   # add         $gp, $zero, $s5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298b98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_298b9c:
    // 0x298b9c: 0x0  nop
    ctx->pc = 0x298b9cu;
    // NOP
label_298ba0:
    // 0x298ba0: 0x2476b  .word       0x0002476B                   # sltu        $t0, $zero, $v0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ba0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_298ba4:
    // 0x298ba4: 0x132  tlt         $zero, $zero, 4
    ctx->pc = 0x298ba4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298ba8:
    // 0x298ba8: 0x98c20  .word       0x00098C20                   # add         $s1, $zero, $t1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ba8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_298bac:
    // 0x298bac: 0x0  nop
    ctx->pc = 0x298bacu;
    // NOP
label_298bb0:
    // 0x298bb0: 0x2489d  .word       0x0002489D                   # dmultu      $zero, $v0 # 00004880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298bb0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x298BB0 raw=0x0002489D");
 /* MITIGATED */
label_298bb4:
    // 0x298bb4: 0xb2  tlt         $zero, $zero, 2
    ctx->pc = 0x298bb4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_298bb8:
    // 0x298bb8: 0x58d00  sll         $s1, $a1, 20
    ctx->pc = 0x298bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 20));
label_298bbc:
    // 0x298bbc: 0x0  nop
    ctx->pc = 0x298bbcu;
    // NOP
label_298bc0:
    // 0x298bc0: 0x2494f  .word       0x0002494F                   # sync # 00024800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298bc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_298bc4:
    // 0x298bc4: 0xa9  .word       0x000000A9                   # mtsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x298bc4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_298bc8:
    // 0x298bc8: 0x54120  .word       0x00054120                   # add         $t0, $zero, $a1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298bc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_298bcc:
    // 0x298bcc: 0x0  nop
    ctx->pc = 0x298bccu;
    // NOP
label_298bd0:
    // 0x298bd0: 0x249f8  dsll        $t1, $v0, 7
    ctx->pc = 0x298bd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << 7);
label_298bd4:
    // 0x298bd4: 0x2a4  .word       0x000002A4                   # and         $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298bd4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_298bd8:
    // 0x298bd8: 0x151f20  .word       0x00151F20                   # add         $v1, $zero, $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298bd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_298bdc:
    // 0x298bdc: 0x0  nop
    ctx->pc = 0x298bdcu;
    // NOP
label_298be0:
    // 0x298be0: 0x24c9c  .word       0x00024C9C                   # dmult       $zero, $v0 # 00004C80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298be0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x298BE0 raw=0x00024C9C");
 /* MITIGATED */
label_298be4:
    // 0x298be4: 0x599  .word       0x00000599                   # multu       $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298be4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_298be8:
    // 0x298be8: 0x2cc750  .word       0x002CC750                   # mfhi        $t8 # 002C0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298be8u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_298bec:
    // 0x298bec: 0x0  nop
    ctx->pc = 0x298becu;
    // NOP
label_298bf0:
    // 0x298bf0: 0x25235  .word       0x00025235                   # INVALID     $zero, $v0, 0x5235 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298bf0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x298BF0 raw=0x00025235");
 /* MITIGATED */
label_298bf4:
    // 0x298bf4: 0xc0  sll         $zero, $zero, 3
    ctx->pc = 0x298bf4u;
    
label_298bf8:
    // 0x298bf8: 0x5fda0  .word       0x0005FDA0                   # add         $ra, $zero, $a1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298bf8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_298bfc:
    // 0x298bfc: 0x0  nop
    ctx->pc = 0x298bfcu;
    // NOP
label_298c00:
    // 0x298c00: 0x252f5  .word       0x000252F5                   # INVALID     $zero, $v0, 0x52F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298c00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x298C00 raw=0x000252F5");
 /* MITIGATED */
label_298c04:
    // 0x298c04: 0x12  mflo        $zero
    ctx->pc = 0x298c04u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_298c08:
    // 0x298c08: 0x8d7b  dsra        $s1, $zero, 21
    ctx->pc = 0x298c08u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 0) >> 21);
label_298c0c:
    // 0x298c0c: 0x0  nop
    ctx->pc = 0x298c0cu;
    // NOP
label_298c10:
    // 0x298c10: 0x25307  .word       0x00025307                   # srav        $t2, $v0, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298c10u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_298c14:
    // 0x298c14: 0x659  .word       0x00000659                   # multu       $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298c14u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_298c18:
    // 0x298c18: 0x32c800  .word       0x0032C800                   # sll         $t9, $s2, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298c18u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 18), 0));
label_298c1c:
    // 0x298c1c: 0x0  nop
    ctx->pc = 0x298c1cu;
    // NOP
label_298c20:
    // 0x298c20: 0x25960  .word       0x00025960                   # add         $t3, $zero, $v0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298c20u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_298c24:
    // 0x298c24: 0x229  .word       0x00000229                   # mtsa        $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x298c24u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_298c28:
    // 0x298c28: 0x114270  tge         $zero, $s1, 265
    ctx->pc = 0x298c28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_298c2c:
    // 0x298c2c: 0x0  nop
    ctx->pc = 0x298c2cu;
    // NOP
label_298c30:
    // 0x298c30: 0x25b89  .word       0x00025B89                   # jalr        $t3, $zero # 00020380 <InstrIdType: CPU_SPECIAL>
label_298c34:
    if (ctx->pc == 0x298C34u) {
        ctx->pc = 0x298C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C30u;
        // 0x298c34: 0x333  tltu        $zero, $zero, 12 (Delay Slot)
        if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C38u;
        goto label_298c38;
    }
    ctx->pc = 0x298C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 11, 0x298C38u);
        ctx->pc = 0x298C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C30u;
        // 0x298c34: 0x333  tltu        $zero, $zero, 12 (Delay Slot)
        if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298C30u, 0x298C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298C38u;
label_298c38:
    // 0x298c38: 0x199800  sll         $s3, $t9, 0
    ctx->pc = 0x298c38u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 25), 0));
label_298c3c:
    // 0x298c3c: 0x0  nop
    ctx->pc = 0x298c3cu;
    // NOP
label_298c40:
    // 0x298c40: 0x25ebc  dsll32      $t3, $v0, 26
    ctx->pc = 0x298c40u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) << (32 + 26));
label_298c44:
    // 0x298c44: 0xe6  .word       0x000000E6                   # xor         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298c44u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_298c48:
    // 0x298c48: 0x72f40  sll         $a1, $a3, 29
    ctx->pc = 0x298c48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 29));
label_298c4c:
    // 0x298c4c: 0x0  nop
    ctx->pc = 0x298c4cu;
    // NOP
label_298c50:
    // 0x298c50: 0x25fa2  .word       0x00025FA2                   # neg         $t3, $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298c50u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_298c54:
    // 0x298c54: 0x181  .word       0x00000181                   # INVALID     $zero, $zero, 0x181 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298c54u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298C54 raw=0x00000181");
 /* MITIGATED */
label_298c58:
    // 0x298c58: 0xc0800  sll         $at, $t4, 0
    ctx->pc = 0x298c58u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 12), 0));
label_298c5c:
    // 0x298c5c: 0x0  nop
    ctx->pc = 0x298c5cu;
    // NOP
label_298c60:
    // 0x298c60: 0x26123  .word       0x00026123                   # negu        $t4, $v0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298c60u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_298c64:
    // 0x298c64: 0x9  jalr        $zero, $zero
label_298c68:
    if (ctx->pc == 0x298C68u) {
        ctx->pc = 0x298C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C64u;
        // 0x298c68: 0x4080  sll         $t0, $zero, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C6Cu;
        goto label_298c6c;
    }
    ctx->pc = 0x298C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x298C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C64u;
        // 0x298c68: 0x4080  sll         $t0, $zero, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298C64u, 0x298C6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298C6Cu;
label_298c6c:
    // 0x298c6c: 0x0  nop
    ctx->pc = 0x298c6cu;
    // NOP
label_298c70:
    // 0x298c70: 0x2612c  .word       0x0002612C                   # dadd        $t4, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298c70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_298c74:
    // 0x298c74: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298c74u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x298C74 raw=0x00000005");
 /* MITIGATED */
label_298c78:
    // 0x298c78: 0x2080  sll         $a0, $zero, 2
    ctx->pc = 0x298c78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_298c7c:
    // 0x298c7c: 0x0  nop
    ctx->pc = 0x298c7cu;
    // NOP
label_298c80:
    // 0x298c80: 0x26131  tgeu        $zero, $v0, 388
    ctx->pc = 0x298c80u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_298c84:
    // 0x298c84: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x298c84u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_298c88:
    // 0x298c88: 0x3090  .word       0x00003090                   # mfhi        $a2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298c88u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_298c8c:
    // 0x298c8c: 0x0  nop
    ctx->pc = 0x298c8cu;
    // NOP
label_298c90:
    // 0x298c90: 0x26138  dsll        $t4, $v0, 4
    ctx->pc = 0x298c90u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << 4);
label_298c94:
    // 0x298c94: 0xc9  .word       0x000000C9                   # jalr        $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_298c98:
    if (ctx->pc == 0x298C98u) {
        ctx->pc = 0x298C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C94u;
        // 0x298c98: 0x64450  .word       0x00064450                   # mfhi        $t0 # 00060440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x298C9Cu;
        goto label_298c9c;
    }
    ctx->pc = 0x298C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x298C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C94u;
        // 0x298c98: 0x64450  .word       0x00064450                   # mfhi        $t0 # 00060440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 8, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298C94u, 0x298C9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298C9Cu;
label_298c9c:
    // 0x298c9c: 0x0  nop
    ctx->pc = 0x298c9cu;
    // NOP
label_298ca0:
    // 0x298ca0: 0x26201  .word       0x00026201                   # INVALID     $zero, $v0, 0x6201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ca0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x298CA0 raw=0x00026201");
 /* MITIGATED */
label_298ca4:
    // 0x298ca4: 0x8e  .word       0x0000008E                   # INVALID     $zero, $zero, 0x8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298ca4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x298CA4 raw=0x0000008E");
 /* MITIGATED */
label_298ca8:
    // 0x298ca8: 0x46b40  sll         $t5, $a0, 13
    ctx->pc = 0x298ca8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 13));
label_298cac:
    // 0x298cac: 0x0  nop
    ctx->pc = 0x298cacu;
    // NOP
label_298cb0:
    // 0x298cb0: 0x2628f  .word       0x0002628F                   # sync # 00026000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298cb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_298cb4:
    // 0x298cb4: 0x11  mthi        $zero
    ctx->pc = 0x298cb4u;
    ctx->hi = GPR_U64(ctx, 0);
label_298cb8:
    // 0x298cb8: 0x8440  sll         $s0, $zero, 17
    ctx->pc = 0x298cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_298cbc:
    // 0x298cbc: 0x0  nop
    ctx->pc = 0x298cbcu;
    // NOP
label_298cc0:
    // 0x298cc0: 0x262a0  .word       0x000262A0                   # add         $t4, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298cc0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_298cc4:
    // 0x298cc4: 0x9  jalr        $zero, $zero
label_298cc8:
    if (ctx->pc == 0x298CC8u) {
        ctx->pc = 0x298CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CC4u;
        // 0x298cc8: 0x40f0  tge         $zero, $zero, 259 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x298CCCu;
        goto label_298ccc;
    }
    ctx->pc = 0x298CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x298CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CC4u;
        // 0x298cc8: 0x40f0  tge         $zero, $zero, 259 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298CC4u, 0x298CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x298CCCu;
label_298ccc:
    // 0x298ccc: 0x0  nop
    ctx->pc = 0x298cccu;
    // NOP
label_298cd0:
    // 0x298cd0: 0x262a9  .word       0x000262A9                   # mtsa        $zero # 00026280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x298cd0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_298cd4:
    // 0x298cd4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x298cd4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_298cd8:
    // 0x298cd8: 0x4c50  .word       0x00004C50                   # mfhi        $t1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x298cd8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_298cdc:
    // 0x298cdc: 0x0  nop
    ctx->pc = 0x298cdcu;
    // NOP
    ctx->pc = 0x298ce0u;
    return;
}
